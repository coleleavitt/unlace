//! (kuna `guarddispatch`) Print a call through a Control Flow Guard dispatch
//! slot as the indirect call it guards.
//!
//! An image built with Control Flow Guard calls through a function pointer as
//! `mov rax, <target>; call [__guard_dispatch_icall_fptr]`: the dispatch
//! routine validates the target in `rax` and jumps to it, so the arguments
//! pass through untouched. Lifted literally, every such call prints as a call
//! of the dispatch slot (`(*dat_140003008)(a, b)`) and the real target, read
//! only by the dispatch routine, is dropped. The PE load configuration names
//! the slot; a CALLIND whose target its own instruction loads from that slot
//! calls the target register `rax` instead. The check itself is not shown, as
//! for the cspec's `_guard_dispatch_icall` call-fixup.

use std::collections::BTreeSet;

use unlace_base::space::spacetype;
use unlace_base::types::{int4, uintb};
use unlace_num::opcodes::OpCode;

use crate::context::OpId;
use crate::funcdata::Funcdata;

crate::kuna_flag!(
    /// (kuna `guarddispatch`) Print a call through a guard dispatch slot as the
    /// indirect call it guards. Default on (`option guarddispatch`).
    GuardDispatch,
    "guarddispatch",
    "Control Flow Guard dispatch calls",
    unset: false,
    shipped: true
);

/// The register the dispatch routine reads the call target from. Only the
/// x86-64 ABI calls through the dispatch slot; x86 and AArch64 call the check
/// routine and then the target directly, which needs no rewrite.
pub fn target_register(archid: &str) -> Option<&'static [u8]> {
    archid
        .starts_with("x86:LE:64:")
        .then_some(b"RAX".as_slice())
}

/// Is the CALLIND `op` a call through one of the guard dispatch `slots`?
pub fn calls_through_slot(data: &Funcdata, op: OpId, slots: &BTreeSet<(int4, uintb)>) -> bool {
    let Some(call) = data.obank().get(op) else {
        return false;
    };
    if call.code() != OpCode::CPUI_CALLIND {
        return false;
    }
    let Some(target) = call.get_in(0).and_then(|v| data.vbank().get(v)) else {
        return false;
    };
    let slot = match target.get_space().get_type() {
        spacetype::IPTR_PROCESSOR => Some(target.get_addr().clone()),
        spacetype::IPTR_INTERNAL => crate::msvcimportcall::loaded_slot(
            data,
            op,
            target.get_addr().clone(),
            target.get_size(),
        ),
        _ => None,
    };
    slot.and_then(|s| Some((s.get_space()?.get_index(), s.get_offset())))
        .is_some_and(|key| slots.contains(&key))
}
