//! (unlace `selectmul`) A select the lifter wrote as arithmetic prints as `?:`.
//!
//! SLEIGH has no select operator, so a spec that picks one of two values without a
//! branch computes `a * zext(c) + b * zext(!c)`: TriCore's `ternary` macro behind
//! `sel`, `min`, `max` and `sat` does, and `min %d2,%d5,%d4` printed as
//! `a1 * (unsigned int)(a1 < a0) + a0 * (unsigned int)(a1 >= a0)`. [`select_plan`]
//! matches an `INT_ADD`, `INT_OR` or `INT_XOR` of two implied `INT_MULT`s, each of a
//! value by the implied zero-extension of a boolean, whose two booleans are
//! complements (one the `BOOL_NEGATE` of the other, `==` and `!=` of the same
//! operands, or `x < y` and `y <= x`, signed or unsigned); at most one term is non-zero,
//! so the sum is exactly the value whose boolean holds. The printer emits `c ? a : b`.

use crate::context::{OpId, VarnodeId};
use crate::funcdata::Funcdata;
use unlace_num::opcodes::OpCode;

/// The three operands of a recognised select, each with the op that reads it.
#[doc(hidden)]
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub struct SelectPlan {
    /// The boolean printed as the condition, and its `INT_ZEXT`.
    pub cond: (VarnodeId, OpId),
    /// The value chosen when the condition holds, and its `INT_MULT`.
    pub yes: (VarnodeId, OpId),
    /// The value chosen otherwise, and its `INT_MULT`.
    pub no: (VarnodeId, OpId),
}

/// One term `value * zext(boolean)`: the value, its multiply, the boolean and its
/// extension. Both the multiply and the extension must be implied, so the term is
/// part of this expression and not a variable of its own.
fn bool_term(fd: &Funcdata, vn: VarnodeId) -> Option<((VarnodeId, OpId), (VarnodeId, OpId))> {
    let v = fd.vbank().get(vn)?;
    if !v.is_implied() {
        return None;
    }
    let mult = v.get_def()?;
    let op = fd.obank().get(mult)?;
    if op.code() != OpCode::CPUI_INT_MULT {
        return None;
    }
    for slot in 0..2 {
        let (ext, value) = (op.get_in(slot)?, op.get_in(1 - slot)?);
        let e = fd.vbank().get(ext)?;
        if !e.is_implied() {
            continue;
        }
        let Some(zext) = e.get_def() else { continue };
        let Some(z) = fd.obank().get(zext) else {
            continue;
        };
        if z.code() != OpCode::CPUI_INT_ZEXT {
            continue;
        }
        let Some(b) = z.get_in(0) else { continue };
        if fd.vbank().get(b).is_some_and(|bv| bv.get_size() == 1) {
            return Some(((value, mult), (b, zext)));
        }
    }
    None
}

/// The same value: one Varnode, or two constants of one size and value.
fn same(fd: &Funcdata, a: VarnodeId, b: VarnodeId) -> bool {
    if a == b {
        return true;
    }
    match (fd.vbank().get(a), fd.vbank().get(b)) {
        (Some(x), Some(y)) => {
            x.is_constant()
                && y.is_constant()
                && x.get_size() == y.get_size()
                && x.get_offset() == y.get_offset()
        }
        _ => false,
    }
}

/// The defining opcode and the two inputs of a boolean, when it has a defining op.
fn bool_def(fd: &Funcdata, b: VarnodeId) -> Option<(OpCode, VarnodeId, Option<VarnodeId>)> {
    let op = fd.obank().get(fd.vbank().get(b)?.get_def()?)?;
    Some((op.code(), op.get_in(0)?, op.get_in(1)))
}

/// Is the comparison `q` the negation of the comparison `p` over the same operands?
#[doc(hidden)]
pub fn complementary_compares(p: OpCode, q: OpCode) -> Option<bool> {
    use OpCode::*;
    match (p, q) {
        (CPUI_INT_EQUAL, CPUI_INT_NOTEQUAL) | (CPUI_INT_NOTEQUAL, CPUI_INT_EQUAL) => Some(false),
        (CPUI_INT_LESS, CPUI_INT_LESSEQUAL)
        | (CPUI_INT_LESSEQUAL, CPUI_INT_LESS)
        | (CPUI_INT_SLESS, CPUI_INT_SLESSEQUAL)
        | (CPUI_INT_SLESSEQUAL, CPUI_INT_SLESS) => Some(true),
        _ => None,
    }
}

/// Is `q` exactly `!p`?
fn complements(fd: &Funcdata, p: VarnodeId, q: VarnodeId) -> bool {
    let (dp, dq) = (bool_def(fd, p), bool_def(fd, q));
    if dq.is_some_and(|(c, x, _)| c == OpCode::CPUI_BOOL_NEGATE && same(fd, x, p))
        || dp.is_some_and(|(c, x, _)| c == OpCode::CPUI_BOOL_NEGATE && same(fd, x, q))
    {
        return true;
    }
    let (Some((cp, p0, Some(p1))), Some((cq, q0, Some(q1)))) = (dp, dq) else {
        return false;
    };
    match complementary_compares(cp, cq) {
        // `x < y` against `y <= x`: the operands swap.
        Some(true) => same(fd, p0, q1) && same(fd, p1, q0),
        // `==` against `!=`, in either operand order.
        Some(false) => {
            (same(fd, p0, q0) && same(fd, p1, q1)) || (same(fd, p0, q1) && same(fd, p1, q0))
        }
        None => false,
    }
}

/// How naturally a boolean reads as the condition: a strict compare or `!=` before
/// `<=` or `==`. A negation prints as the complement of the compare it negates
/// (`!(x == 0)` as `x != 0`), so it ranks as that complement; a negation of
/// anything else (`negated` with no compare below it) ranks last.
#[doc(hidden)]
pub fn condition_rank(code: Option<OpCode>, negated: bool) -> u8 {
    use OpCode::*;
    let rank = match code {
        Some(CPUI_INT_NOTEQUAL | CPUI_INT_LESS | CPUI_INT_SLESS) => 2,
        Some(CPUI_INT_EQUAL | CPUI_INT_LESSEQUAL | CPUI_INT_SLESSEQUAL) => 1,
        _ if negated => return 0,
        _ => 1,
    };
    if negated { 3 - rank } else { rank }
}

/// [`condition_rank`] of the boolean `b`.
fn rank_of(fd: &Funcdata, b: VarnodeId) -> u8 {
    match bool_def(fd, b) {
        Some((OpCode::CPUI_BOOL_NEGATE, inner, _)) => {
            condition_rank(bool_def(fd, inner).map(|(c, _, _)| c), true)
        }
        def => condition_rank(def.map(|(c, _, _)| c), false),
    }
}

/// The select `op` computes, when it is `a * zext(c) + b * zext(!c)` (or `|`, `^`).
#[doc(hidden)]
pub fn select_plan(fd: &Funcdata, op: OpId) -> Option<SelectPlan> {
    let o = fd.obank().get(op)?;
    if !matches!(
        o.code(),
        OpCode::CPUI_INT_ADD | OpCode::CPUI_INT_OR | OpCode::CPUI_INT_XOR
    ) {
        return None;
    }
    let (first, second) = (bool_term(fd, o.get_in(0)?)?, bool_term(fd, o.get_in(1)?)?);
    if !complements(fd, first.1.0, second.1.0) {
        return None;
    }
    let (yes, no) = if rank_of(fd, second.1.0) > rank_of(fd, first.1.0) {
        (second, first)
    } else {
        (first, second)
    };
    Some(SelectPlan {
        cond: yes.1,
        yes: yes.0,
        no: no.0,
    })
}

crate::unlace_flag!(
    /// (unlace `selectmul`) Print `a * zext(c) + b * zext(!c)` as `c ? a : b`.
    SelectMul,
    "selectmul",
    "arithmetic select as ?:",
    unset: false,
    shipped: true
);

#[cfg(test)]
mod tests;
