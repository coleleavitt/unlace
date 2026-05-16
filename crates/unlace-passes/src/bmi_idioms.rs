//! x86 BMI / BMI2 idiom recognition.
//!
//! Folds generic IR sequences emitted by the lifter back into named
//! intrinsics exposed via `Callother`:
//!
//! - `BLSI(x)   = x & -x`       — extract lowest set bit
//! - `BLSR(x)   = x & (x - 1)`  — clear lowest set bit
//! - `BLSMSK(x) = x ^ (x - 1)`  — mask up to & including lowest set bit
//! - `ANDN(x,y) = ~x & y`       — and-not (matched via `IntNegate(x)` *or* `IntXor(x, -1)`)
//! - `BEXTR_CONST(src, lo, w)`  — `(src >> lo) & ((1 << w) - 1)` with constant `lo`/`w`
//!
//! PEXT / PDEP / RORX are intentionally out of scope.

use std::collections::BTreeMap;

use unlace_ir::ssa::SsaFunction;
use unlace_ir::{IrInsn, IrOp, SpaceId, Varnode};

use crate::pass::{Pass, PassError};

/// `Callother` tag for `__BLSI__(x)`.
pub const CALLOTHER_BLSI: u64 = 0x340;
/// `Callother` tag for `__BLSR__(x)`.
pub const CALLOTHER_BLSR: u64 = 0x341;
/// `Callother` tag for `__BLSMSK__(x)`.
pub const CALLOTHER_BLSMSK: u64 = 0x342;
/// `Callother` tag for `__ANDN__(x, y)`.
pub const CALLOTHER_ANDN: u64 = 0x343;
/// `Callother` tag for `__BEXTR_CONST__(src, lo, width)`.
pub const CALLOTHER_BEXTR_CONST: u64 = 0x344;

pub struct BmiIdiomPass;

impl Pass for BmiIdiomPass {
    fn name(&self) -> &str {
        "bmi-idioms"
    }

    fn phase(&self) -> crate::pass::PassPhase {
        crate::pass::PassPhase::LocalOpt
    }

    fn run(&self, func: &mut SsaFunction) -> Result<bool, PassError> {
        let def_map = build_def_map(func);
        let mut changed = false;
        for block in func.function.blocks.values_mut() {
            for insn in &mut block.insns {
                if let Some(replacement) = try_recognize(insn, &def_map) {
                    *insn = replacement;
                    changed = true;
                }
            }
        }
        Ok(changed)
    }
}

fn build_def_map(func: &SsaFunction) -> BTreeMap<Varnode, IrInsn> {
    let mut map = BTreeMap::new();
    for block in func.function.blocks.values() {
        for insn in &block.insns {
            if let Some(output) = insn.output {
                if output.space != SpaceId::Const {
                    map.insert(output, insn.clone());
                }
            }
        }
    }
    map
}

fn def_of<'a>(v: &Varnode, def_map: &'a BTreeMap<Varnode, IrInsn>) -> Option<&'a IrInsn> {
    if v.space == SpaceId::Const {
        return None;
    }
    def_map.get(v)
}

fn is_const(v: &Varnode, val: u64) -> bool {
    v.space == SpaceId::Const && v.offset == val
}

fn try_recognize(insn: &IrInsn, def_map: &BTreeMap<Varnode, IrInsn>) -> Option<IrInsn> {
    let output = insn.output?;
    match insn.op {
        IrOp::IntAnd if insn.inputs.len() == 2 => {
            try_blsi(insn, output, &insn.inputs[0], &insn.inputs[1], def_map)
                .or_else(|| try_blsr(insn, output, &insn.inputs[0], &insn.inputs[1], def_map))
                .or_else(|| try_andn(insn, output, &insn.inputs[0], &insn.inputs[1], def_map))
                .or_else(|| {
                    try_bextr_const(insn, output, &insn.inputs[0], &insn.inputs[1], def_map)
                })
        }
        IrOp::IntXor if insn.inputs.len() == 2 => {
            try_blsmsk(insn, output, &insn.inputs[0], &insn.inputs[1], def_map)
        }
        _ => None,
    }
}

/// `x & -x` — one operand `n` satisfies `n == -x` via `INT_2COMP(x)` or `INT_SUB(0, x)`.
fn try_blsi(
    insn: &IrInsn,
    output: Varnode,
    a: &Varnode,
    b: &Varnode,
    def_map: &BTreeMap<Varnode, IrInsn>,
) -> Option<IrInsn> {
    let x = match_blsi_pair(a, b, def_map).or_else(|| match_blsi_pair(b, a, def_map))?;
    Some(make_callother(output, CALLOTHER_BLSI, &[x], insn.addr))
}

fn match_blsi_pair(
    x: &Varnode,
    neg: &Varnode,
    def_map: &BTreeMap<Varnode, IrInsn>,
) -> Option<Varnode> {
    if is_negation_of(*neg, x, def_map) {
        Some(*x)
    } else {
        None
    }
}

/// `x & (x - 1)` — one operand is `INT_SUB(x, 1)`.
fn try_blsr(
    insn: &IrInsn,
    output: Varnode,
    a: &Varnode,
    b: &Varnode,
    def_map: &BTreeMap<Varnode, IrInsn>,
) -> Option<IrInsn> {
    let x = match_sub1_pair(a, b, def_map).or_else(|| match_sub1_pair(b, a, def_map))?;
    Some(make_callother(output, CALLOTHER_BLSR, &[x], insn.addr))
}

/// `x ^ (x - 1)` — one operand is `INT_SUB(x, 1)`.
fn try_blsmsk(
    insn: &IrInsn,
    output: Varnode,
    a: &Varnode,
    b: &Varnode,
    def_map: &BTreeMap<Varnode, IrInsn>,
) -> Option<IrInsn> {
    let x = match_sub1_pair(a, b, def_map).or_else(|| match_sub1_pair(b, a, def_map))?;
    Some(make_callother(output, CALLOTHER_BLSMSK, &[x], insn.addr))
}

fn match_sub1_pair(
    x: &Varnode,
    sub_vn: &Varnode,
    def_map: &BTreeMap<Varnode, IrInsn>,
) -> Option<Varnode> {
    let sub = def_of(sub_vn, def_map)?;
    if sub.op != IrOp::IntSub || sub.inputs.len() != 2 {
        return None;
    }
    if sub.inputs[0] != *x || !is_const(&sub.inputs[1], 1) {
        return None;
    }
    Some(*x)
}

/// `~x & y` — bitwise-not in p-code is `IntNegate(x)`, but some front-ends
/// emit it as `IntXor(x, -1)`. Accept both.
fn try_andn(
    insn: &IrInsn,
    output: Varnode,
    a: &Varnode,
    b: &Varnode,
    def_map: &BTreeMap<Varnode, IrInsn>,
) -> Option<IrInsn> {
    let a_not = bit_not_source(a, def_map);
    let b_not = bit_not_source(b, def_map);

    let (x, y) = match (a_not, b_not) {
        (Some(x), None) => (x, *b),
        (None, Some(x)) => (x, *a),
        _ => return None,
    };
    Some(make_callother(output, CALLOTHER_ANDN, &[x, y], insn.addr))
}

/// If `v` is defined as `IntNegate(x)` or `IntXor(x, -1)` (bitwise NOT in either
/// canonical form), return `x`. The `-1` constant is recognised both as a
/// literal `u64::MAX` and as the all-ones mask sized to the constant operand.
fn bit_not_source(v: &Varnode, def_map: &BTreeMap<Varnode, IrInsn>) -> Option<Varnode> {
    let def = def_of(v, def_map)?;
    match def.op {
        IrOp::IntNegate if def.inputs.len() == 1 => Some(def.inputs[0]),
        IrOp::IntXor if def.inputs.len() == 2 => {
            if is_all_ones(&def.inputs[1]) {
                Some(def.inputs[0])
            } else if is_all_ones(&def.inputs[0]) {
                Some(def.inputs[1])
            } else {
                None
            }
        }
        _ => None,
    }
}

fn is_all_ones(v: &Varnode) -> bool {
    if v.space != SpaceId::Const {
        return false;
    }
    if v.offset == u64::MAX {
        return true;
    }
    let bits = (v.size as u32) * 8;
    if bits == 0 || bits > 64 {
        return false;
    }
    let mask = if bits == 64 {
        u64::MAX
    } else {
        (1u64 << bits) - 1
    };
    v.offset == mask
}

/// `(src >> lo) & ((1 << w) - 1)` with constant `lo` and constant mask
/// `(1<<w)-1` — fold to `__BEXTR_CONST__(src, lo, w)`.
fn try_bextr_const(
    insn: &IrInsn,
    output: Varnode,
    a: &Varnode,
    b: &Varnode,
    def_map: &BTreeMap<Varnode, IrInsn>,
) -> Option<IrInsn> {
    let (shift_vn, mask_vn) = if b.space == SpaceId::Const {
        (a, b)
    } else if a.space == SpaceId::Const {
        (b, a)
    } else {
        return None;
    };

    let width = const_mask_width(mask_vn)?;
    let shift_def = def_of(shift_vn, def_map)?;
    if shift_def.op != IrOp::IntRight || shift_def.inputs.len() != 2 {
        return None;
    }
    if shift_def.inputs[1].space != SpaceId::Const {
        return None;
    }
    let src = shift_def.inputs[0];
    let lo = shift_def.inputs[1].offset;
    if width == 0 || width > 64 {
        return None;
    }
    Some(make_callother(
        output,
        CALLOTHER_BEXTR_CONST,
        &[src, Varnode::constant(lo, 8), Varnode::constant(width, 8)],
        insn.addr,
    ))
}

/// If `v` is a constant of the form `(1 << w) - 1` for some `1 <= w <= 64`,
/// return `w`. Otherwise `None`.
fn const_mask_width(v: &Varnode) -> Option<u64> {
    if v.space != SpaceId::Const {
        return None;
    }
    let val = v.offset;
    if val == 0 {
        return None;
    }
    if val == u64::MAX {
        return Some(64);
    }
    let plus_one = val.checked_add(1)?;
    if plus_one.is_power_of_two() {
        Some(plus_one.trailing_zeros() as u64)
    } else {
        None
    }
}

fn is_negation_of(neg: Varnode, x: &Varnode, def_map: &BTreeMap<Varnode, IrInsn>) -> bool {
    let Some(def) = def_of(&neg, def_map) else {
        return false;
    };
    // INT_2COMP(x)
    if def.op == IrOp::Int2comp && def.inputs.len() == 1 && def.inputs[0] == *x {
        return true;
    }
    // INT_SUB(0, x)
    if def.op == IrOp::IntSub
        && def.inputs.len() == 2
        && is_const(&def.inputs[0], 0)
        && def.inputs[1] == *x
    {
        return true;
    }
    false
}

fn make_callother(output: Varnode, tag: u64, args: &[Varnode], addr: u64) -> IrInsn {
    let mut inputs: smallvec::SmallVec<[Varnode; 3]> =
        smallvec::smallvec![Varnode::constant(tag, 8)];
    for a in args {
        inputs.push(*a);
    }
    IrInsn::with_output(IrOp::Callother, output, inputs, addr)
}

#[cfg(test)]
mod tests {
    use super::*;
    use smallvec::smallvec;
    use unlace_ir::ssa::build_ssa;
    use unlace_ir::{BasicBlock, BlockId, Function};

    fn run_pass(insns: Vec<IrInsn>) -> SsaFunction {
        let mut func = Function::new("test", BlockId(0), 0x1000);
        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns = insns;
        bb.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![Varnode::constant(0, 8)],
            0x1FFF,
        ));
        func.insert_block(bb);
        let mut ssa = build_ssa(func);
        BmiIdiomPass.run(&mut ssa).expect("pass ok");
        ssa
    }

    fn only_block_insns(ssa: &SsaFunction) -> &[IrInsn] {
        &ssa.function.blocks.values().next().unwrap().insns
    }

    #[test]
    fn recognizes_blsi() {
        // neg = INT_2COMP(x); out = INT_AND(x, neg)
        let x = Varnode::reg(0, 4);
        let neg = Varnode::unique(0, 4);
        let out = Varnode::unique(4, 4);
        let i_neg = IrInsn::with_output(IrOp::Int2comp, neg, smallvec![x], 0x1000);
        let i_and = IrInsn::with_output(IrOp::IntAnd, out, smallvec![x, neg], 0x1004);
        let ssa = run_pass(vec![i_neg, i_and]);
        let insns = only_block_insns(&ssa);
        let and_insn = &insns[1];
        assert_eq!(and_insn.op, IrOp::Callother);
        assert_eq!(and_insn.inputs[0].offset, CALLOTHER_BLSI);
        assert_eq!(and_insn.inputs[1], x);
    }

    #[test]
    fn recognizes_blsr() {
        // sub = INT_SUB(x, 1); out = INT_AND(x, sub)
        let x = Varnode::reg(0, 4);
        let sub = Varnode::unique(0, 4);
        let out = Varnode::unique(4, 4);
        let one = Varnode::constant(1, 4);
        let i_sub = IrInsn::with_output(IrOp::IntSub, sub, smallvec![x, one], 0x1000);
        let i_and = IrInsn::with_output(IrOp::IntAnd, out, smallvec![x, sub], 0x1004);
        let ssa = run_pass(vec![i_sub, i_and]);
        let insns = only_block_insns(&ssa);
        let and_insn = &insns[1];
        assert_eq!(and_insn.op, IrOp::Callother);
        assert_eq!(and_insn.inputs[0].offset, CALLOTHER_BLSR);
        assert_eq!(and_insn.inputs[1], x);
    }

    #[test]
    fn recognizes_blsmsk() {
        // sub = INT_SUB(x, 1); out = INT_XOR(x, sub)
        let x = Varnode::reg(0, 4);
        let sub = Varnode::unique(0, 4);
        let out = Varnode::unique(4, 4);
        let one = Varnode::constant(1, 4);
        let i_sub = IrInsn::with_output(IrOp::IntSub, sub, smallvec![x, one], 0x1000);
        let i_xor = IrInsn::with_output(IrOp::IntXor, out, smallvec![x, sub], 0x1004);
        let ssa = run_pass(vec![i_sub, i_xor]);
        let insns = only_block_insns(&ssa);
        let xor_insn = &insns[1];
        assert_eq!(xor_insn.op, IrOp::Callother);
        assert_eq!(xor_insn.inputs[0].offset, CALLOTHER_BLSMSK);
        assert_eq!(xor_insn.inputs[1], x);
    }

    #[test]
    fn recognizes_andn() {
        // nx = INT_NEGATE(x); out = INT_AND(nx, y)
        let x = Varnode::reg(0, 4);
        let y = Varnode::reg(8, 4);
        let nx = Varnode::unique(0, 4);
        let out = Varnode::unique(4, 4);
        let i_neg = IrInsn::with_output(IrOp::IntNegate, nx, smallvec![x], 0x1000);
        let i_and = IrInsn::with_output(IrOp::IntAnd, out, smallvec![nx, y], 0x1004);
        let ssa = run_pass(vec![i_neg, i_and]);
        let insns = only_block_insns(&ssa);
        let and_insn = &insns[1];
        assert_eq!(and_insn.op, IrOp::Callother);
        assert_eq!(and_insn.inputs[0].offset, CALLOTHER_ANDN);
        assert_eq!(and_insn.inputs[1], x);
        assert_eq!(and_insn.inputs[2], y);
    }

    #[test]
    fn recognizes_andn_bitnot_form() {
        // nx = INT_XOR(x, -1); out = INT_AND(nx, y)  — alternative ~x encoding
        let x = Varnode::reg(0, 4);
        let y = Varnode::reg(8, 4);
        let nx = Varnode::unique(0, 4);
        let out = Varnode::unique(4, 4);
        let ones = Varnode::constant(0xFFFF_FFFF, 4);
        let i_xor = IrInsn::with_output(IrOp::IntXor, nx, smallvec![x, ones], 0x1000);
        let i_and = IrInsn::with_output(IrOp::IntAnd, out, smallvec![nx, y], 0x1004);
        let ssa = run_pass(vec![i_xor, i_and]);
        let insns = only_block_insns(&ssa);
        let and_insn = &insns[1];
        assert_eq!(and_insn.op, IrOp::Callother);
        assert_eq!(and_insn.inputs[0].offset, CALLOTHER_ANDN);
        assert_eq!(and_insn.inputs[1], x);
        assert_eq!(and_insn.inputs[2], y);
    }

    #[test]
    fn recognizes_bextr_with_const_ctrl() {
        // shr = INT_RIGHT(x, 4); out = INT_AND(shr, 0xFF)  → BEXTR_CONST(x, 4, 8)
        let x = Varnode::reg(0, 4);
        let shr = Varnode::unique(0, 4);
        let out = Varnode::unique(4, 4);
        let four = Varnode::constant(4, 4);
        let mask = Varnode::constant(0xFF, 4);
        let i_shr = IrInsn::with_output(IrOp::IntRight, shr, smallvec![x, four], 0x1000);
        let i_and = IrInsn::with_output(IrOp::IntAnd, out, smallvec![shr, mask], 0x1004);
        let ssa = run_pass(vec![i_shr, i_and]);
        let insns = only_block_insns(&ssa);
        let and_insn = &insns[1];
        assert_eq!(and_insn.op, IrOp::Callother);
        assert_eq!(and_insn.inputs[0].offset, CALLOTHER_BEXTR_CONST);
        assert_eq!(and_insn.inputs[1], x);
        assert_eq!(and_insn.inputs[2].space, SpaceId::Const);
        assert_eq!(and_insn.inputs[2].offset, 4);
        assert_eq!(and_insn.inputs[3].space, SpaceId::Const);
        assert_eq!(and_insn.inputs[3].offset, 8);
    }

    #[test]
    fn bmi_pass_runs_in_default_pipeline() {
        let names = crate::default_pass_names();
        let bmi_name = BmiIdiomPass.name();
        assert!(
            names.contains(&bmi_name),
            "default pipeline must include the BMI idiom pass; got {names:?}"
        );
        let bmi_idx = names.iter().position(|n| *n == bmi_name).unwrap();
        let gvn_idx = names
            .iter()
            .position(|n| *n == "gvn")
            .expect("gvn scheduled");
        assert!(
            bmi_idx > gvn_idx,
            "BMI must run after gvn (gvn={gvn_idx}, bmi={bmi_idx})"
        );
    }

    #[test]
    fn does_not_match_unrelated_xor() {
        // INT_XOR(x, y) where y is unrelated — not BLSMSK.
        let x = Varnode::reg(0, 4);
        let y = Varnode::reg(8, 4);
        let out = Varnode::unique(0, 4);
        let i_xor = IrInsn::with_output(IrOp::IntXor, out, smallvec![x, y], 0x1000);
        let ssa = run_pass(vec![i_xor]);
        let insns = only_block_insns(&ssa);
        assert_eq!(insns[0].op, IrOp::IntXor);
    }
}
