//! (unlace `constright`) An ordered comparison of a value with a constant prints the value on the
//! left: `x > 0x3b` instead of Ghidra's `0x3b < x`.
//!
//! P-code has only `<` and `<=`, so Ghidra's canonical form of `x > c` is `c < x` and the
//! printer keeps the constant first. Hex-Rays and source code put the variable first. The
//! comparison is mirrored at print time (`<` to `>`, `<=` to `>=`, and back after a negated
//! token), only when its first operand is a constant and its second is not; equalities, float
//! compares and the analysis are unchanged.

use crate::context::OpId;
use crate::funcdata::Funcdata;
use unlace_num::opcodes::OpCode;

crate::unlace_flag!(
    /// (unlace `constright`) Print an ordered integer comparison of a constant with a value as the
    /// mirrored comparison with the value first.
    ConstRight,
    "constright",
    "value-first ordered comparisons against a constant",
    unset: false,
    shipped: false
);

/// Does the comparison `op` print mirrored (an integer `<`/`<=` whose first operand is a
/// constant and whose second is not)?
pub fn mirrors(fd: &Funcdata, op: OpId) -> bool {
    let Some(o) = fd.obank().get(op) else {
        return false;
    };
    if !matches!(
        o.code(),
        OpCode::CPUI_INT_LESS
            | OpCode::CPUI_INT_LESSEQUAL
            | OpCode::CPUI_INT_SLESS
            | OpCode::CPUI_INT_SLESSEQUAL
    ) {
        return false;
    }
    let constant = |slot| {
        o.get_in(slot)
            .and_then(|vn| fd.vbank().get(vn))
            .is_some_and(|v| v.is_constant())
    };
    constant(0) && !constant(1)
}
