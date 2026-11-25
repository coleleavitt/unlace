//! Preserve caller stack storage across a complete, memory-write-free helper.

use crate::rustabi::FuncdataRustabiExt;
use std::rc::Rc;

use unlace_base::address::Address;
use unlace_num::opcodes::OpCode;

use crate::fspec::{FuncCallSpecs, OFFSET_UNKNOWN};
use crate::funcdata::Funcdata;
use crate::rustabi::CalleeReturnWrites;

fn register_only_body(summary: &CalleeReturnWrites, register: i32, stack: (u64, u32)) -> bool {
    if !summary.is_complete()
        || summary.instruction_count() < 2
        || !summary.store_spaces().is_empty()
        || summary.reads_nonreturn_memory()
        || !summary.stack_pointer_preserved_until_return()
    {
        return false;
    }
    let Some(stack_end) = stack.0.checked_add(u64::from(stack.1)) else {
        return false;
    };
    let mut substantive = false;
    for &(space, offset, size) in summary.written_ranges() {
        if space != register || size <= 0 {
            return false;
        }
        let Some(end) = offset.checked_add(size as u64) else {
            return false;
        };
        if (offset < stack_end && stack.0 < end) || summary.is_return_target(space, offset, size) {
            continue;
        }
        substantive = true;
    }
    substantive
}

/// Reuse the register-write probe; the call's own return-address store stays live.
#[doc(hidden)]
pub fn preserves(fd: &Funcdata, call: &FuncCallSpecs, address: &Address, size: i32) -> bool {
    if !(1..=16).contains(&size)
        || call.proto().has_effect_override()
        || call.get_spacebase_offset() == OFFSET_UNKNOWN
        || !fd
            .obank()
            .get(call.get_op())
            .is_some_and(|op| op.code() == OpCode::CPUI_CALL)
    {
        return false;
    }
    let manager = fd.get_arch().manage();
    let Some(frame) = manager.get_stack_space() else {
        return false;
    };
    if !frame.stack_grows_negative()
        || frame.get_word_size() != 1
        || !address
            .get_space()
            .is_some_and(|space| Rc::ptr_eq(space, frame))
    {
        return false;
    }
    let width = frame.get_addr_size() as i32;
    if !matches!(width, 4 | 8) {
        return false;
    }
    let Some(return_address) = fd.get_arch().default_return_addr.as_ref() else {
        return false;
    };
    if return_address.offset != 0
        || return_address.size != width as u32
        || !return_address
            .space
            .as_ref()
            .is_some_and(|space| Rc::ptr_eq(space, frame))
    {
        return false;
    }
    let relative = frame.wrap_offset(
        address
            .get_offset()
            .wrapping_sub(call.get_spacebase_offset()),
    );
    if !crate::calleeprotostack::above_callee_frame(relative, size, width, width) {
        return false;
    }
    let Some(register) = manager.get_space_by_name("register") else {
        return false;
    };
    let Ok(stack) = frame.get_spacebase(0) else {
        return false;
    };
    if !stack
        .space
        .as_ref()
        .is_some_and(|space| Rc::ptr_eq(space, register))
    {
        return false;
    }
    let entry = call.get_entry_address();
    if entry.is_invalid() {
        return false;
    }
    fd.unlace_callee_ret_writes(entry).is_some_and(|summary| {
        register_only_body(summary, register.get_index(), (stack.offset, stack.size))
    })
}

/// Fill this pass's hooks ([`crate::passhooks`]).
pub fn provide(hooks: &mut crate::passhooks::UnlaceHookSlots) {
    hooks.leafmemory_preserves = Some(preserves);
}

#[cfg(test)]
mod tests;
