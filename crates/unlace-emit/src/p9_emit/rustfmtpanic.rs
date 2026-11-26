//! Verified Rust panic formatting preserves message bytes and primitive arguments.

use std::rc::Rc;

use super::rustfmtargs::{self, MacroKind, Plan};
use crate::architecture::Architecture;
use crate::context::OpId;
use crate::funcdata::Funcdata;
use crate::op::pcodeop_flags;
use crate::varnode::varnode_flags;
use unlace_base::address::Address;
use unlace_num::opcodes::OpCode;

#[doc(hidden)]
pub fn recover(fd: &Funcdata, arch: &Architecture, id: OpId) -> Option<Plan> {
    if !arch
        .unlace_options
        .get::<crate::rustfmt::RustFmtMode>()
        .recovers()
        || arch.source_lang() != crate::sourcelang::SourceLang::Rust
        || !matches!(arch.rustc_stable_version, Some((1, 93, 0 | 1)))
    {
        return None;
    }
    let call = fd.obank().get(id)?;
    if call.code() != OpCode::CPUI_CALL || call.num_input() != 4 || call.get_out().is_some() {
        return None;
    }
    let spec = fd.get_call_specs(fd.get_call_specs_index(id)?);
    let halt = call
        .get_parent()
        .and_then(|block| fd.bb_op_tail(block))
        .and_then(|tail| fd.obank().get(tail));
    if !spec.proto().is_no_return()
        && !halt.is_some_and(|halt| {
            halt.code() == OpCode::CPUI_RETURN
                && halt.get_halt_type() & pcodeop_flags::noreturn != 0
                && halt.get_addr() == call.get_addr()
        })
    {
        return None;
    }
    match spec.get_name() {
        "core::panicking::panic_fmt" => (),
        "panic_fmt" => {
            let (leaf, offset, _, scope) = fd
                .get_arch()
                .global_name_scope()?
                .name_for_varnode_scoped(spec.get_entry_address(), 1, call.get_addr())?;
            if offset != 0 || leaf != "panic_fmt" || scope != ["panicking", "core"] {
                return None;
            }
        }
        _ => return None,
    }
    let location = rustfmtargs::constant_word(fd, call.get_in(3)?)?;
    if location == 0 {
        return None;
    }
    let space = fd.get_arch().manage().get_default_data_space()?;
    if space.get_addr_size() != 8 || space.is_big_endian() {
        return None;
    }
    for offset in 0..24 {
        let address = Address::new(Rc::clone(space), location.checked_add(offset)?);
        let flags = fd.get_arch().query_global_range_properties(&address);
        if flags & varnode_flags::volatil != 0 {
            return None;
        }
    }
    fd.get_arch()
        .loader_fill(&mut [0; 24], &Address::new(Rc::clone(space), location))
        .ok()?;
    if let Some(bytes) = super::rustfmtliteral::literal_bytes(fd, call.get_in(1)?, call.get_in(2)?)
    {
        let literal = panic_literal(std::str::from_utf8(&bytes).ok()?);
        return Some(Plan {
            name: "panic!",
            literal,
            arguments: Vec::new(),
        });
    }
    rustfmtargs::recover_at(fd, arch, id, 1, 2, MacroKind::Panic)
}

fn panic_literal(text: &str) -> String {
    let mut literal = String::from("\"");
    for ch in text.chars() {
        match ch {
            '{' => literal.push_str("{{"),
            '}' => literal.push_str("}}"),
            ch => literal.extend(ch.escape_debug()),
        }
    }
    literal.push('"');
    literal
}

#[cfg(test)]
mod tests;
