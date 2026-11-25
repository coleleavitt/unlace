//! (unlace `itaniumeh`) An Itanium C++ throw prints as `throw`.
//!
//! Itanium compiles `throw e;` to `__cxa_throw(p, &typeinfo, dtor)`, where `p` is the
//! exception object the runtime allocated and constructed, and `throw;` to
//! `__cxa_rethrow()`. With `itaniumeh` on, a direct call of `__cxa_throw` with its
//! three arguments prints as `throw *p` (the object the first argument points to,
//! as a load through it would print) and `__cxa_rethrow` as a bare `throw`. The
//! allocate and construct calls before the throw stay as written.

use unlace_num::opcodes::OpCode;

use crate::architecture::Architecture;
use crate::context::OpId;
use crate::funcdata::Funcdata;

use super::msvcthrow::Throw;

/// `__cxa_throw`, with or without leading underscores and an `@plt` or
/// version suffix.
pub fn is_cxa_throw_callee(name: &str) -> bool {
    name.split('@').next().map(|n| n.trim_start_matches('_')) == Some("cxa_throw")
}

/// `__cxa_rethrow`, spelled as `is_cxa_throw_callee` spells `__cxa_throw`.
pub fn is_cxa_rethrow_callee(name: &str) -> bool {
    name.split('@').next().map(|n| n.trim_start_matches('_')) == Some("cxa_rethrow")
}

/// The throw the direct CALL `op` to `callee` performs, when `itaniumeh` is on:
/// `__cxa_throw` with its object, `__cxa_rethrow` with no argument.
pub fn recover(fd: &Funcdata, arch: &Architecture, op: OpId, callee: &str) -> Option<Throw> {
    if !arch
        .unlace_options
        .get::<crate::coreoptions::ItaniumEh>()
        .on
    {
        return None;
    }
    let o = fd.obank().get(op)?;
    if o.code() != OpCode::CPUI_CALL {
        return None;
    }
    if is_cxa_rethrow_callee(callee) {
        return (o.num_input() == 1).then_some(Throw::Rethrow);
    }
    if is_cxa_throw_callee(callee) && o.num_input() == 4 {
        return o.get_in(1).map(Throw::Object);
    }
    None
}

#[cfg(test)]
mod tests;
