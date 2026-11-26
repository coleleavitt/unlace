//! Recover the scalar type of a finalized, otherwise untyped native x87 result.

use crate::dtype::{type_class, type_metatype};
use crate::fspec::ParamActive;
use crate::funcdata::Funcdata;
use unlace_num::opcodes::OpCode;

pub fn type_returns(data: &mut Funcdata, active: &ParamActive) {
    if data.get_func_proto().is_output_locked() {
        return;
    }
    let used: Vec<_> = (0..active.get_num_trials())
        .map(|index| active.get_trial(index))
        .filter(|trial| trial.is_used())
        .collect();
    if used.len() != 1 || used[0].get_size() != 10 {
        return;
    }
    let manager = data.get_arch().manage();
    let Some(storage) = manager
        .register_lookup()
        .and_then(|lookup| lookup.probe_register("ST0"))
    else {
        return;
    };
    let Some(space) = storage.space.as_ref().filter(|_| storage.size == 10) else {
        return;
    };
    let address = used[0].get_address();
    if address.get_space().map(|s| s.get_index()) != Some(space.get_index())
        || address.get_offset() != storage.offset
        || !data
            .get_func_proto()
            .model()
            .output()
            .get_entry()
            .iter()
            .any(|entry| {
                entry.get_type() == type_class::TYPECLASS_FLOAT
                    && entry.justified_contain(address, 10) == 0
            })
    {
        return;
    }
    let mut values = Vec::new();
    for id in data.obank().iter_code(OpCode::CPUI_RETURN) {
        let Some(op) = data
            .obank()
            .get(id)
            .filter(|op| !op.is_dead() && op.get_halt_type() == 0)
        else {
            continue;
        };
        if op.num_input() != 2 {
            return;
        }
        let Some(value) = op.get_in(1).and_then(|vn| data.vbank().get(vn)) else {
            return;
        };
        let from_call = value
            .get_def()
            .and_then(|id| data.obank().get(id))
            .is_some_and(|def| {
                def.is_indirect_creation()
                    || matches!(def.code(), OpCode::CPUI_CALL | OpCode::CPUI_CALLIND)
            });
        if value.get_size() != 10
            || from_call
            || value.is_type_lock()
            || value.get_type().get_metatype() != type_metatype::TYPE_UNKNOWN
        {
            return;
        }
        values.push(op.get_in(1).unwrap());
    }
    if values.is_empty() {
        return;
    }
    let Some(types) = data.get_arch().types() else {
        return;
    };
    let Ok(datatype) = types.get_base(10, type_metatype::TYPE_FLOAT) else {
        return;
    };
    for value in values {
        data.vbank_mut()
            .get_mut(value)
            .unwrap()
            .update_type_locked(datatype.clone(), true, false);
    }
}

#[cfg(test)]
mod tests;
