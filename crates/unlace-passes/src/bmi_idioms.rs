//! x86 BMI / BMI2 idiom recognition.
//!
//! Folds generic IR sequences emitted by the lifter back into named
//! intrinsics exposed via `Callother`:
//!
//! - `BLSI(x)   = x & -x`       — extract lowest set bit
//! - `BLSR(x)   = x & (x - 1)`  — clear lowest set bit
//! - `BLSMSK(x) = x ^ (x - 1)`  — mask up to & including lowest set bit
//! - `ANDN(x,y) = ~x & y`       — and-not
//!
//! BEXTR / PEXT / PDEP / RORX are intentionally out of scope for this pass.

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

pub struct BmiIdiomPass;

impl Pass for BmiIdiomPass {
    fn name(&self) -> &str {
        "bmi-idioms"
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

/// `~x & y` — one operand is `INT_NEGATE(x)` (bitwise-not in p-code).
fn try_andn(
    insn: &IrInsn,
    output: Varnode,
    a: &Varnode,
    b: &Varnode,
    def_map: &BTreeMap<Varnode, IrInsn>,
) -> Option<IrInsn> {
    // Either (~x, y) or (y, ~x). Reject if both sides happen to be negates
    // (ambiguous; not a canonical ANDN emission).
    let a_neg = def_of(a, def_map)
        .filter(|d| d.op == IrOp::IntNegate && d.inputs.len() == 1)
        .map(|d| d.inputs[0]);
    let b_neg = def_of(b, def_map)
        .filter(|d| d.op == IrOp::IntNegate && d.inputs.len() == 1)
        .map(|d| d.inputs[0]);

    let (x, y) = match (a_neg, b_neg) {
        (Some(x), None) => (x, *b),
        (None, Some(x)) => (x, *a),
        _ => return None,
    };
    Some(make_callother(
        output,
        CALLOTHER_ANDN,
        &[x, y],
        insn.addr,
    ))
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
    let mut inputs: smallvec::SmallVec<[Varnode; 3]> = smallvec::smallvec![Varnode::constant(tag, 8)];
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
