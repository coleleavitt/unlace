//! (kuna `msvceh`) An MSVC throw prints as `throw`.
//!
//! MSVC compiles `throw e;` to `_CxxThrowException(&e, &ThrowInfo)` and
//! `throw;` to `_CxxThrowException(0, 0)`. With the option on, a direct call of
//! that import with both arguments prints as `throw e` (the object the first
//! argument points to) or a bare `throw`; the thrown type stays on the
//! `ThrowInfo<T>` label and the call-site comment the analysis tier adds.

use unlace_num::opcodes::OpCode;

use crate::architecture::Architecture;
use crate::context::{OpId, VarnodeId};
use crate::funcdata::Funcdata;
use crate::printlanguage::{OpToken, TokenType};

/// `throw <expr>`: a unary prefix that binds as loosely as an assignment.
pub static THROW: OpToken =
    crate::printc::op_token("throw ", "", 1, 14, false, TokenType::UnaryPrefix, 0, 0);

/// What a recognised throw call throws.
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub enum Throw {
    /// `throw *obj`.
    Object(VarnodeId),
    /// `throw`.
    Rethrow,
}

/// `_CxxThrowException`, with or without leading underscores and the x86
/// `@8` decoration.
pub fn is_throw_callee(name: &str) -> bool {
    let n = name.trim_start_matches('_');
    n.split('@').next() == Some("CxxThrowException")
}

/// The throw the direct CALL `op` to `callee` performs, when `msvceh` is on and
/// the call passes both arguments.
pub fn recover(fd: &Funcdata, arch: &Architecture, op: OpId, callee: &str) -> Option<Throw> {
    if !arch.kuna_options.get::<crate::analysisgates::Msvceh>().0 || !is_throw_callee(callee) {
        return None;
    }
    let o = fd.obank().get(op)?;
    if o.code() != OpCode::CPUI_CALL || o.num_input() != 3 {
        return None;
    }
    let (obj, info) = (o.get_in(1)?, o.get_in(2)?);
    let zero = |vn: VarnodeId| {
        fd.vbank()
            .get(vn)
            .is_some_and(|v| v.is_constant() && v.get_offset() == 0)
    };
    match (zero(obj), zero(info)) {
        (true, true) => Some(Throw::Rethrow),
        (false, false) => Some(Throw::Object(obj)),
        _ => None,
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn throw_callee_names() {
        assert!(is_throw_callee("_CxxThrowException"));
        assert!(is_throw_callee("__CxxThrowException@8"));
        assert!(!is_throw_callee("__cxa_throw"));
    }
}
