//! (kuna `satmul`) The overflow-checked `n * sizeof(T)` before `operator new[]`
//! becomes `saturated_mul(n, sizeof(T))`.
//!
//! MSVC, clang and AArch64 compilers size a `new T[n]` with a full-width
//! multiply and replace the product by all-ones when it overflowed, so the
//! allocation fails instead of wrapping. SLEIGH lifts `mul` / `umulh` to a
//! double-width product `P = zext(a) * zext(b)`, and the select to a
//! `MULTIEQUAL` behind a branch (`cmovo`, `csinv`) or an `OR` with a smeared
//! flag (`seto; neg; or`, `sbb; or`). Hex-Rays folds this with its
//! `REMOVE_MUL_OVERFLOW_CHECK` rule; this rule does the same:
//!
//! * the low half is `SUBPIECE(P, 0)`, `a * b` or `a << k` at width `W`;
//! * the guard is `P`'s high half tested against zero, `P > 2^W - 1`, or the
//!   threshold `n > (2^W - 1) / c` for a constant factor `c`;
//! * the select picks all-ones exactly on the overflow outcome.
//!
//! The result is `CALLOTHER(saturated_mul, a, b)` of `W` bytes.

use unlace_base::types::{int4, uintb};
use unlace_num::opcodes::OpCode;

use crate::action::{ActionGroupList, Rule};
use crate::context::{BlockId, OpId, VarnodeId};
use crate::funcdata::Funcdata;
use crate::userop::BUILTIN_SATURATED_MUL;

crate::kuna_flag!(
    /// (kuna `satmul`) Fold the overflow-checked multiply before `operator new[]`
    /// into `saturated_mul(a, b)` (see [`crate::satmul`]).
    SatMul,
    "satmul",
    "Saturated multiply folding",
    unset: false,
    shipped: false
);

/// All-ones at `size` bytes.
fn mask(size: int4) -> u64 {
    if size >= 8 {
        u64::MAX
    } else if size <= 0 {
        0
    } else {
        (1u64 << (8 * size as u32)) - 1
    }
}

/// One factor of the product: a variable with its zero extensions peeled, or a constant.
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
enum Factor {
    Var(VarnodeId),
    Const(u64),
}

fn size_of(data: &Funcdata, vn: VarnodeId) -> Option<int4> {
    data.vbank().get(vn).map(|v| v.get_size())
}

fn constant(data: &Funcdata, vn: VarnodeId) -> Option<u64> {
    data.vbank()
        .get(vn)
        .filter(|v| v.is_constant())
        .map(|v| v.get_offset())
}

/// `vn` with its `INT_ZEXT`s peeled.
fn peel_zext(data: &Funcdata, mut vn: VarnodeId) -> VarnodeId {
    for _ in 0..4 {
        let Some(def) = data.vbank().get(vn).and_then(|v| v.get_def()) else {
            break;
        };
        let Some(o) = data.obank().get(def) else {
            break;
        };
        if o.code() != OpCode::CPUI_INT_ZEXT {
            break;
        }
        let Some(x) = o.get_in(0) else { break };
        vn = x;
    }
    vn
}

fn factor(data: &Funcdata, vn: VarnodeId) -> Factor {
    match constant(data, vn) {
        Some(c) => Factor::Const(c),
        None => Factor::Var(peel_zext(data, vn)),
    }
}

/// The value `vn` holds when it is a constant reached through `COPY`s.
fn copied_constant(data: &Funcdata, mut vn: VarnodeId) -> Option<u64> {
    for _ in 0..4 {
        if let Some(c) = constant(data, vn) {
            return Some(c);
        }
        let def = data.vbank().get(vn)?.get_def()?;
        let o = data.obank().get(def)?;
        if o.code() != OpCode::CPUI_COPY {
            return None;
        }
        vn = o.get_in(0)?;
    }
    None
}

/// `P = INT_MULT(zext(a), zext(b))` at `2 * w` bytes with both factors no wider
/// than `w` bytes: the full product of two `w`-byte values.
fn wide_product(data: &Funcdata, p: VarnodeId, w: int4) -> Option<(Factor, Factor)> {
    if w <= 0 || size_of(data, p)? != 2 * w {
        return None;
    }
    let def = data.vbank().get(p)?.get_def()?;
    let o = data.obank().get(def)?;
    if o.code() != OpCode::CPUI_INT_MULT {
        return None;
    }
    let narrow = |vn: VarnodeId| -> Option<Factor> {
        if let Some(c) = constant(data, vn) {
            return (c <= mask(w)).then_some(Factor::Const(c));
        }
        let d = data.vbank().get(vn)?.get_def()?;
        let z = data.obank().get(d)?;
        if z.code() != OpCode::CPUI_INT_ZEXT {
            return None;
        }
        let x = z.get_in(0)?;
        (size_of(data, x)? <= w).then(|| Factor::Var(peel_zext(data, x)))
    };
    Some((narrow(o.get_in(0)?)?, narrow(o.get_in(1)?)?))
}

/// The factors of `lo` when it is the low `w` bytes of a product.
fn low_half(data: &Funcdata, lo: VarnodeId) -> Option<(Factor, Factor, int4)> {
    let w = size_of(data, lo)?;
    if !matches!(w, 1 | 2 | 4 | 8) {
        return None;
    }
    let def = data.vbank().get(lo)?.get_def()?;
    let o = data.obank().get(def)?;
    match o.code() {
        OpCode::CPUI_SUBPIECE => {
            if constant(data, o.get_in(1)?)? != 0 {
                return None;
            }
            let (a, b) = wide_product(data, o.get_in(0)?, w)?;
            Some((a, b, w))
        }
        OpCode::CPUI_INT_MULT => Some((factor(data, o.get_in(0)?), factor(data, o.get_in(1)?), w)),
        OpCode::CPUI_INT_LEFT => {
            let k = constant(data, o.get_in(1)?)?;
            if k >= 8 * w as u64 {
                return None;
            }
            Some((factor(data, o.get_in(0)?), Factor::Const(1u64 << k), w))
        }
        _ => None,
    }
}

/// What an overflow guard tests.
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
enum Guard {
    /// The full product of these factors does not fit `w` bytes.
    Wide(Factor, Factor, int4),
    /// The factor is greater than the bound.
    Above(Factor, u64),
}

/// `cond` as `(x > k)` (`true`) or `!(x > k)` (`false`), unsigned.
fn above(data: &Funcdata, cond: VarnodeId) -> Option<(VarnodeId, u64, bool)> {
    let def = data.vbank().get(cond)?.get_def()?;
    let o = data.obank().get(def)?;
    let a = o.get_in(0)?;
    if o.code() == OpCode::CPUI_BOOL_NEGATE {
        let (x, k, pol) = above(data, a)?;
        return Some((x, k, !pol));
    }
    let b = o.get_in(1)?;
    match o.code() {
        OpCode::CPUI_INT_NOTEQUAL | OpCode::CPUI_INT_EQUAL => {
            let pol = o.code() == OpCode::CPUI_INT_NOTEQUAL;
            if constant(data, b) == Some(0) {
                Some((a, 0, pol))
            } else if constant(data, a) == Some(0) {
                Some((b, 0, pol))
            } else {
                None
            }
        }
        OpCode::CPUI_INT_LESS => match (constant(data, a), constant(data, b)) {
            (Some(k), None) => Some((b, k, true)),
            (None, Some(c)) if c > 0 => Some((a, c - 1, false)),
            _ => None,
        },
        OpCode::CPUI_INT_LESSEQUAL => match (constant(data, a), constant(data, b)) {
            (Some(c), None) if c > 0 => Some((b, c - 1, true)),
            (None, Some(k)) => Some((a, k, false)),
            _ => None,
        },
        _ => None,
    }
}

/// The overflow guard `cond` states, and whether `cond` is true on overflow.
fn guard(data: &Funcdata, cond: VarnodeId) -> Option<(Guard, bool)> {
    let (x, k, pol) = above(data, cond)?;
    let xs = size_of(data, x)?;
    if let Some(def) = data.vbank().get(x).and_then(|v| v.get_def()) {
        let o = data.obank().get(def)?;
        if o.code() == OpCode::CPUI_SUBPIECE && k == 0 {
            let p = o.get_in(0)?;
            let off = constant(data, o.get_in(1)?)?;
            let ps = size_of(data, p)?;
            if off as int4 == xs && 2 * xs == ps {
                let (a, b) = wide_product(data, p, xs)?;
                return Some((Guard::Wide(a, b, xs), pol));
            }
            return None;
        }
        if o.code() == OpCode::CPUI_INT_MULT && xs % 2 == 0 && k == mask(xs / 2) {
            if let Some((a, b)) = wide_product(data, x, xs / 2) {
                return Some((Guard::Wide(a, b, xs / 2), pol));
            }
        }
    }
    if constant(data, x).is_some() {
        return None;
    }
    Some((Guard::Above(factor(data, x), k), pol))
}

fn same_factor(p: Factor, q: Factor, w: int4) -> bool {
    match (p, q) {
        (Factor::Const(a), Factor::Const(b)) => a & mask(w) == b & mask(w),
        (p, q) => p == q,
    }
}

/// Whether `g` is exactly the overflow test of the `w`-byte product `a * b`.
fn guards_product(g: Guard, a: Factor, b: Factor, w: int4) -> bool {
    match g {
        Guard::Wide(x, y, gw) => {
            gw == w
                && ((same_factor(x, a, w) && same_factor(y, b, w))
                    || (same_factor(x, b, w) && same_factor(y, a, w)))
        }
        Guard::Above(f, k) => {
            let bounded = |v: Factor, c: Factor| match c {
                Factor::Const(c) => {
                    let c = c & mask(w);
                    c >= 2 && same_factor(v, f, w) && k == mask(w) / c
                }
                Factor::Var(_) => false,
            };
            matches!(f, Factor::Var(_)) && (bounded(a, b) || bounded(b, a))
        }
    }
}

/// `m` is all-ones exactly when the boolean `b` is true: `-zext(b)`.
fn smeared_bool(data: &Funcdata, m: VarnodeId) -> Option<VarnodeId> {
    let def = data.vbank().get(m)?.get_def()?;
    let o = data.obank().get(def)?;
    let size = size_of(data, m)?;
    let z = match o.code() {
        OpCode::CPUI_INT_2COMP => o.get_in(0)?,
        OpCode::CPUI_INT_MULT => {
            let (x, y) = (o.get_in(0)?, o.get_in(1)?);
            if constant(data, y).map(|c| c & mask(size)) == Some(mask(size)) {
                x
            } else if constant(data, x).map(|c| c & mask(size)) == Some(mask(size)) {
                y
            } else {
                return None;
            }
        }
        _ => return None,
    };
    let b = peel_zext(data, z);
    (size_of(data, b)? == 1).then_some(b)
}

/// The `(id, a, b)` inputs of the `saturated_mul` call: variables first.
fn call_inputs(data: &mut Funcdata, a: Factor, b: Factor, w: int4) -> [VarnodeId; 3] {
    let (a, b) = match (a, b) {
        (Factor::Const(_), Factor::Var(_)) => (b, a),
        _ => (a, b),
    };
    let mut input = |f: Factor| match f {
        Factor::Var(v) => v,
        Factor::Const(c) => data.new_constant(w, c & mask(w)),
    };
    let x = input(a);
    let y = input(b);
    let id = data.new_constant(4, BUILTIN_SATURATED_MUL as uintb);
    [id, x, y]
}

/// The factors of a select between `lo` and all-ones, if all-ones is the overflow case.
fn or_select(data: &Funcdata, op: OpId) -> Option<(Factor, Factor, int4)> {
    let o = data.obank().get(op)?;
    let (i0, i1) = (o.get_in(0)?, o.get_in(1)?);
    for (lo, m) in [(i0, i1), (i1, i0)] {
        let Some((a, b, w)) = low_half(data, lo) else {
            continue;
        };
        let Some(flag) = smeared_bool(data, m) else {
            continue;
        };
        let Some((g, true)) = guard(data, flag) else {
            continue;
        };
        if guards_product(g, a, b, w) {
            return Some((a, b, w));
        }
    }
    None
}

/// The two-way branch a two-input MULTIEQUAL's slots come from, with the
/// condition value that reaches each slot.
fn branch_outcomes(data: &Funcdata, op: OpId) -> Option<(VarnodeId, [bool; 2])> {
    let o = data.obank().get(op)?;
    let merge = o.get_parent()?;
    let blocks = data.bblocks_ref();
    let m = blocks.block(merge);
    if m.size_in() != 2 {
        return None;
    }
    let preds = [m.get_in(0), m.get_in(1)];
    let head = |p: BlockId| -> BlockId {
        let pb = blocks.block(p);
        if pb.size_out() == 1 && pb.size_in() == 1 {
            pb.get_in(0)
        } else {
            p
        }
    };
    let branch = head(preds[0]);
    if head(preds[1]) != branch || blocks.block(branch).size_out() != 2 {
        return None;
    }
    let cb = data.bb_op_tail(branch)?;
    let cbo = data.obank().get(cb)?;
    if cbo.code() != OpCode::CPUI_CBRANCH {
        return None;
    }
    let cond = cbo.get_in(1)?;
    let bb = blocks.block(branch);
    let (taken_true, taken_false) = if cbo.is_boolean_flip() {
        (bb.get_false_out(), bb.get_true_out())
    } else {
        (bb.get_true_out(), bb.get_false_out())
    };
    if preds[0] == branch && preds[1] == branch {
        return None;
    }
    let outcome = |p: BlockId| -> Option<bool> {
        let via = if p == branch { merge } else { p };
        if via == taken_true {
            Some(true)
        } else if via == taken_false {
            Some(false)
        } else {
            None
        }
    };
    let (o0, o1) = (outcome(preds[0])?, outcome(preds[1])?);
    (o0 != o1).then_some((cond, [o0, o1]))
}

/// The factors of a MULTIEQUAL of `lo` and all-ones chosen by an overflow guard.
fn phi_select(data: &Funcdata, op: OpId) -> Option<(Factor, Factor, int4)> {
    let o = data.obank().get(op)?;
    if o.num_input() != 2 {
        return None;
    }
    let ins = [o.get_in(0)?, o.get_in(1)?];
    let w = size_of(data, o.get_out()?)?;
    let ones = ins
        .iter()
        .position(|&v| copied_constant(data, v).map(|c| c & mask(w)) == Some(mask(w)))?;
    let (a, b, lw) = low_half(data, ins[1 - ones])?;
    if lw != w {
        return None;
    }
    let (cond, outcomes) = branch_outcomes(data, op)?;
    let (g, pol) = guard(data, cond)?;
    (outcomes[ones] == pol && guards_product(g, a, b, w)).then_some((a, b, w))
}

/// (kuna `satmul`) `lo | -zext(overflow)` and `overflow ? -1 : lo` over a
/// multiply become `saturated_mul(a, b)`.
pub struct RuleSaturatedMul {
    group: String,
}

impl RuleSaturatedMul {
    pub fn new(group: &str) -> RuleSaturatedMul {
        RuleSaturatedMul {
            group: group.to_string(),
        }
    }

    fn rewrite_or(op: OpId, data: &mut Funcdata) -> int4 {
        let Some((a, b, w)) = or_select(data, op) else {
            return 0;
        };
        let inputs = call_inputs(data, a, b, w);
        if data.op_set_all_input(op, &inputs).is_err() {
            return 0;
        }
        data.op_set_opcode(op, crate::typeop::type_op_for(OpCode::CPUI_CALLOTHER));
        1
    }

    fn rewrite_phi(op: OpId, data: &mut Funcdata) -> int4 {
        let Some((a, b, w)) = phi_select(data, op) else {
            return 0;
        };
        let (Some(out), Some(merge)) = data
            .obank()
            .get(op)
            .map(|o| (o.get_out(), o.get_parent()))
            .unwrap_or((None, None))
        else {
            return 0;
        };
        let first = data.bb_ops(merge).into_iter().find(|&id| {
            data.obank()
                .get(id)
                .is_some_and(|p| p.code() != OpCode::CPUI_MULTIEQUAL)
        });
        let Some(first) = first else { return 0 };
        let Some(addr) = data.obank().get(first).map(|p| p.get_addr().clone()) else {
            return 0;
        };
        let inputs = call_inputs(data, a, b, w);
        let call = data.new_op(3, addr);
        data.op_set_opcode_code(call, OpCode::CPUI_CALLOTHER);
        for (slot, vn) in inputs.into_iter().enumerate() {
            if data.op_set_input(call, vn, slot as int4).is_err() {
                return 0;
            }
        }
        let Ok(res) = data.new_unique_out(w, call) else {
            return 0;
        };
        let uint = data
            .get_arch()
            .types()
            .and_then(|t| t.get_base(w, crate::dtype::type_metatype::TYPE_UINT).ok());
        if let (Some(t), Some(n)) = (uint, data.vbank_mut().get_mut(res)) {
            n.update_type(t);
        }
        data.op_insert_before(call, first);
        if data.total_replace(out, res).is_err() {
            return 0;
        }
        1
    }
}

impl Rule for RuleSaturatedMul {
    fn get_op_list(&self) -> Vec<OpCode> {
        vec![OpCode::CPUI_INT_OR, OpCode::CPUI_MULTIEQUAL]
    }

    fn clone_rule(&self, grouplist: &ActionGroupList) -> Option<Box<dyn Rule>> {
        grouplist
            .contains(&self.group)
            .then(|| Box::new(RuleSaturatedMul::new(&self.group)) as Box<dyn Rule>)
    }

    fn apply_op(&mut self, op: OpId, data: &mut Funcdata) -> int4 {
        if !data.get_arch().kuna_options.get::<SatMul>().0 {
            return 0;
        }
        match data.obank().get(op).map(|o| o.code()) {
            Some(OpCode::CPUI_INT_OR) => Self::rewrite_or(op, data),
            Some(OpCode::CPUI_MULTIEQUAL) => Self::rewrite_phi(op, data),
            _ => 0,
        }
    }
}

#[cfg(test)]
mod tests;
