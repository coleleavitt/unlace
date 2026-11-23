//! (kuna `vectorabi`) The SysV x86-64 vector-register calling convention.
//!
//! The vendored `x86-64-gcc.cspec` describes XMM0-7 only as 8-byte float slots
//! (`XMMn_Qa`), so a 16-byte `__m128`, a 32-byte `__m256` or a 64-byte `__m512`
//! argument has no parameter entry: the function's own vector inputs read as
//! uninitialized locals and its vector result is lost. The SysV ABI passes
//! `__m128`/`__m256`/`__m512` in `xmm`/`ymm`/`zmm` 0-7 and returns them in
//! register 0. This widens the default model the way `armfloatreturn` widens the
//! ARM one: each `XMMn_Qa` entry gains 16-, 32- and 64-byte entries on the same
//! register in the same group, so a vector argument takes the slot its scalar
//! twin would, and the output list gains the same three on register 0.
//! It needs `vexzeroupper`, which keeps a VEX write from widening every vector
//! register to its full ZMM storage.

use std::rc::Rc;

use unlace_base::space::AddrSpaceManager;

use crate::dtype::type_class;
use crate::fspec::{ParamEntry, ParamListStandard, ProtoModel};

/// The vector widths added over each 8-byte float slot, with their minimums.
const WIDTHS: [(i32, i32); 3] = [(16, 9), (32, 17), (64, 33)];

fn add_vectors(list: &mut ParamListStandard, manager: &AddrSpaceManager, limit: usize) {
    let slots: Vec<ParamEntry> = list
        .get_entry()
        .iter()
        .filter(|e| e.get_type() == type_class::TYPECLASS_FLOAT && e.get_size() == 8)
        .take(limit)
        .cloned()
        .collect();
    for slot in &slots {
        for (size, minsize) in WIDTHS {
            if let Ok(mut entry) = ParamEntry::seed(
                slot.get_group(),
                type_class::TYPECLASS_FLOAT,
                slot.get_space().clone(),
                slot.get_base(),
                size,
                minsize,
                0,
                0,
                true,
                false,
                list.get_entry(),
                manager,
            ) {
                entry.kuna_whole_register(slot.is_first_in_class());
                list.push_entry(entry);
            }
        }
    }
    list.populate_resolver();
}

/// The SysV default model with the vector-register entries.
pub fn model(model: &Rc<ProtoModel>, manager: &AddrSpaceManager) -> Rc<ProtoModel> {
    if model.is_merged() {
        return model.clone();
    }
    let mut result = (**model).clone();
    add_vectors(result.input_mut(), manager, 8);
    add_vectors(result.output_mut(), manager, 1);
    Rc::new(result)
}

/// Fill this pass's hooks ([`crate::kuna_passhooks`]).
pub fn provide(hooks: &mut crate::kuna_passhooks::KunaHookSlots) {
    hooks.vectorabi_model = Some(model);
}
