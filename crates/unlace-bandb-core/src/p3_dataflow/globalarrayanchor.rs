//! Keep a mapped array or named opaque object visible until pointer recovery.
use crate::{
    context::{OpId, VarnodeId},
    dtype::type_metatype,
    funcdata::Funcdata,
    ruleaction_1::RuleCollectTerms,
    varnode::varnode_flags,
};
use smallvec::{SmallVec, smallvec};
use unlace_base::{address::Address, types::uintb};
use unlace_num::opcodes::OpCode;

/// Defer folding a negative element displacement into an exact mapped base used
/// as a LOAD/STORE address. Other arithmetic and unmapped constants still fold.
/// Inferred arrays retain their extent bound; declarations admit larger origins.
/// Those admissions decline a page-aligned base with a bias that fits a signed
/// 16-bit low half: that pair is one split high/low address immediate, and its
/// high half is no reference to the object that starts there.
#[doc(hidden)]
pub fn preserve_array_base(data: &Funcdata, root: OpId) -> bool {
    if !data
        .get_arch()
        .unlace_options
        .get::<crate::globalarrayanchor::GlobalArrayAnchor>()
        .0
        || !data.get_arch().infer_pointers
        || !data.is_type_recovery_on()
        || data
            .unlace_global_array_anchor_passes
            .is_none_or(|passes| passes >= 4)
    {
        return false;
    }
    let Some((root, reader)) = memory_address_root(data, root) else {
        return false;
    };
    let Some(terms) = address_terms(data, root) else {
        return false;
    };
    let mut constants: SmallVec<[(VarnodeId, u64); 4]> = SmallVec::new();
    let mut variables: SmallVec<[VarnodeId; 4]> = SmallVec::new();
    for id in terms {
        if let Some(value) = literal_value(data, id, 8) {
            constants.push((id, value));
        } else {
            variables.push(id);
        }
    }
    if variables.is_empty() || constants.len() < 2 {
        return false;
    }
    let Some(output) = data.obank().get(root).and_then(|o| o.get_out()) else {
        return false;
    };
    let Some(reader) = data.obank().get(reader) else {
        return false;
    };
    if !matches!(reader.code(), OpCode::CPUI_LOAD | OpCode::CPUI_STORE)
        || reader.get_in(1) != Some(output)
    {
        return false;
    }
    let arch = data.get_arch();
    let Some(space_id) = reader.get_in(0).and_then(|v| data.vbank().get(v)) else {
        return false;
    };
    if !space_id.is_constant() || space_id.get_offset() >= arch.manage().num_spaces() as u64 {
        return false;
    }
    let Some(space) = arch.manage().get_space(space_id.get_offset() as i32) else {
        return false;
    };
    if space.get_word_size() != 1 {
        return false;
    }
    if !arch
        .infer_ptr_spaces()
        .iter()
        .any(|s| s.get_index() == space.get_index())
    {
        return false;
    }
    for (position, &(id, offset)) in constants.iter().enumerate() {
        let Some(value) = data.vbank().get(id) else {
            continue;
        };
        let mut compatible = arch.infer_ptr_spaces().iter().filter(|candidate| {
            let minimum = candidate.get_minimum_ptr_size();
            if minimum == 0 {
                value.get_size() == candidate.get_addr_size() as i32
            } else {
                value.get_size() >= minimum
            }
        });
        if compatible
            .next()
            .is_none_or(|candidate| candidate.get_index() != space.get_index())
            || compatible.next().is_some()
            || data.lone_descend(id).is_none()
            || value.is_spacebase()
            || value.get_size() > 8
            || value.is_ptr_check()
            || value.get_size() != space.get_addr_size() as i32
            || offset < space.get_pointer_lower_bound()
            || offset > space.get_pointer_upper_bound()
            || unlace_base::address::bit_transitions(offset, value.get_size()) < 3
        {
            continue;
        }
        if data
            .lone_descend(id)
            .and_then(|o| data.obank().get(o))
            .is_some_and(|op| {
                op.code() == OpCode::CPUI_INT_ADD
                    && (0..2).any(|slot| {
                        op.get_in(slot)
                            .and_then(|v| data.vbank().get(v))
                            .is_some_and(|v| v.is_spacebase())
                    })
            })
        {
            continue;
        }
        let address = Address::new(space.clone(), space.wrap_offset(offset));
        let Some(entry) = arch.query_container_global(&address, 1, &Address::new_invalid()) else {
            continue;
        };
        if entry.entry_addr != address {
            continue;
        }
        let Some(object) = entry.symbol_type.as_ref() else {
            continue;
        };
        let size = match object.get_metatype() {
            type_metatype::TYPE_ARRAY => {
                let Some(element) = object.get_array_base() else {
                    continue;
                };
                element.get_size()
            }
            type_metatype::TYPE_UNKNOWN
                if entry.all_flags & varnode_flags::namelock != 0 && object.get_size() > 0 =>
            {
                1
            }
            _ => continue,
        };
        if size <= 0 {
            continue;
        }
        let mut displacement: uintb = 0;
        for (other_position, &(_, other)) in constants.iter().enumerate() {
            if other_position != position {
                displacement = displacement.wrapping_add(other);
            }
        }
        let mask = unlace_base::address::calc_mask(value.get_size());
        let magnitude = displacement.wrapping_neg() & mask;
        let sign_bit = (mask >> 1) + 1;
        if displacement & sign_bit == 0
            || !magnitude.is_multiple_of(size as uintb)
            || (magnitude > object.get_size() as uintb
                && entry.all_flags & varnode_flags::namelock == 0)
        {
            continue;
        }
        let declared_origin = object.get_metatype() != type_metatype::TYPE_ARRAY
            || magnitude > object.get_size() as uintb;
        if declared_origin && offset & 0xfff == 0 && magnitude <= 0x8000 {
            continue;
        }
        if variables.iter().all(|&id| {
            if data
                .vbank()
                .get(id)
                .is_some_and(|v| v.get_type().get_metatype() == type_metatype::TYPE_PTR)
            {
                return false;
            }
            let mut coefficient = 0;
            RuleCollectTerms::get_mult_coeff(data, id, &mut coefficient);
            if let Some(shift) = data
                .vbank()
                .get(id)
                .and_then(|v| v.get_def())
                .and_then(|o| data.obank().get(o))
                && shift.code() == OpCode::CPUI_INT_LEFT
                    && let Some(amount) = shift
                        .get_in(1)
                        .and_then(|v| data.vbank().get(v))
                        .filter(|v| v.is_constant())
                    {
                        coefficient = u32::try_from(amount.get_offset())
                            .ok()
                            .and_then(|shift| 1u64.checked_shl(shift))
                            .unwrap_or(0);
                    }
            let mask = data
                .vbank()
                .get(id)
                .map(|v| unlace_base::address::calc_mask(v.get_size()))
                .unwrap_or(0);
            coefficient &= mask;
            coefficient != 0 && coefficient % size as uintb == 0
        }) {
            return true;
        }
    }
    false
}

fn literal_value(data: &Funcdata, id: VarnodeId, depth: u8) -> Option<u64> {
    let value = data.vbank().get(id)?;
    if value.is_constant() {
        return Some(value.get_offset());
    }
    if depth == 0 {
        return None;
    }
    let op = data.obank().get(value.get_def()?)?;
    let first = op.get_in(0)?;
    if data.vbank().get(first)?.get_size() != value.get_size() {
        return None;
    }
    let a = literal_value(data, first, depth - 1)?;
    match op.code() {
        OpCode::CPUI_COPY => Some(a),
        OpCode::CPUI_INT_OR => {
            let second = op.get_in(1)?;
            if data.vbank().get(second)?.get_size() != value.get_size() {
                return None;
            }
            Some(a | literal_value(data, second, depth - 1)?)
        }
        _ => None,
    }
}

/// Collect additive terms through single-use copies without changing the IR.
fn address_terms(data: &Funcdata, root: OpId) -> Option<SmallVec<[VarnodeId; 8]>> {
    let output = data.obank().get(root)?.get_out()?;
    let width = data.vbank().get(output)?.get_size();
    let mut pending: SmallVec<[VarnodeId; 8]> = smallvec![output];
    let mut terms = SmallVec::new();
    for _ in 0..256 {
        let Some(id) = pending.pop() else {
            return Some(terms);
        };
        let value = data.vbank().get(id)?;
        if value.get_size() != width {
            return None;
        }
        if !value.is_constant() && address_reader(data, id).is_some()
            && let Some(op) = value.get_def().and_then(|id| data.obank().get(id)) {
                match op.code() {
                    OpCode::CPUI_INT_ADD => {
                        pending.push(op.get_in(0)?);
                        pending.push(op.get_in(1)?);
                        continue;
                    }
                    OpCode::CPUI_COPY | OpCode::CPUI_CAST => {
                        pending.push(op.get_in(0)?);
                        continue;
                    }
                    _ => {}
                }
            }
        terms.push(id);
    }
    None
}

/// Ignore unused pure copies left behind when their readers are forwarded.
fn address_reader(data: &Funcdata, value: VarnodeId) -> Option<OpId> {
    let mut reader = None;
    for id in data.vbank().get(value)?.descend_iter() {
        let op = data.obank().get(id)?;
        if matches!(op.code(), OpCode::CPUI_COPY | OpCode::CPUI_CAST)
            && !op.is_indirect_source()
            && op
                .get_out()
                .and_then(|v| data.vbank().get(v))
                .is_some_and(|v| v.has_no_descend() && !v.is_auto_live())
        {
            continue;
        }
        if reader.replace(id).is_some() {
            return None;
        }
    }
    reader
}

fn memory_address_root(data: &Funcdata, mut root: OpId) -> Option<(OpId, OpId)> {
    for _ in 0..64 {
        let output = data.obank().get(root)?.get_out()?;
        let reader = address_reader(data, output)?;
        let op = data.obank().get(reader)?;
        match op.code() {
            OpCode::CPUI_INT_ADD | OpCode::CPUI_COPY | OpCode::CPUI_CAST => root = reader,
            OpCode::CPUI_LOAD | OpCode::CPUI_STORE if op.get_in(1) == Some(output) => {
                return Some((root, reader));
            }
            _ => return None,
        }
    }
    None
}

crate::unlace_flag!(
    /// Keep mapped global array bases separate from negative element offsets
    /// (option `globalarrayanchor`).
    GlobalArrayAnchor,
    "globalarrayanchor",
    "Global array anchor preservation",
    unset: false,
    shipped: false
);
