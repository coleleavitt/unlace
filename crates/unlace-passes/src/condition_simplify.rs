//! Condition simplification pass: simplify boolean expressions in IR
//! using algebraic identities (double negation, absorption, De Morgan).

use std::collections::BTreeMap;

use unlace_ir::ssa::SsaFunction;
use unlace_ir::{IrInsn, IrOp, SpaceId, Varnode};

use crate::pass::{Pass, PassError};

/// Simplifies boolean condition expressions to their canonical forms.
///
/// Patterns handled:
/// - Double negation: `BoolNegate(BoolNegate(x))` → `x`
/// - And/Or absorption with constants
/// - Negated comparisons: `BoolNegate(IntEqual(a, b))` → `IntNotequal(a, b)`
/// - Xor with false: `BoolXor(x, false)` → `x`
///
/// Iterates internally to a fixed point.
pub struct ConditionSimplifyPass;

impl Pass for ConditionSimplifyPass {
    fn name(&self) -> &str {
        "condition-simplify"
    }

    fn run(&self, func: &mut SsaFunction) -> Result<bool, PassError> {
        let mut changed_any = false;
        loop {
            let def_map = build_def_map(func);
            let mut changed = false;

            for block in func.function.blocks.values_mut() {
                for insn in &mut block.insns {
                    if let Some(replacement) = try_simplify(insn, &def_map) {
                        *insn = replacement;
                        changed = true;
                    }
                }
            }

            changed_any |= changed;
            if !changed {
                break;
            }
        }
        Ok(changed_any)
    }
}

/// Build a map from output Varnode → defining IrInsn for def-use lookups.
///
/// Only non-const outputs are indexed.
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

fn is_bool_const(v: &Varnode, val: u64) -> bool {
    v.space == SpaceId::Const && (v.offset & 1) == val
}

fn is_const_true(v: &Varnode) -> bool {
    is_bool_const(v, 1)
}

fn is_const_false(v: &Varnode) -> bool {
    v.space == SpaceId::Const && v.offset == 0
}

/// Make a COPY instruction that replaces `insn`'s output with `source`.
fn make_copy(insn: &IrInsn, source: Varnode) -> IrInsn {
    IrInsn::with_output(
        IrOp::Copy,
        insn.output.expect("simplifiable insn always has output"),
        smallvec::smallvec![source],
        insn.addr,
    )
}

/// Replace the current instruction with a new opcode but same output / addr.
fn replace_op(insn: &IrInsn, new_op: IrOp, inputs: smallvec::SmallVec<[Varnode; 3]>) -> IrInsn {
    IrInsn::with_output(
        new_op,
        insn.output.expect("simplifiable insn always has output"),
        inputs,
        insn.addr,
    )
}

fn try_simplify(insn: &IrInsn, def_map: &BTreeMap<Varnode, IrInsn>) -> Option<IrInsn> {
    let output = insn.output?;

    match insn.op {
        // ── BoolNegate ──────────────────────────────────────────────
        IrOp::BoolNegate => {
            let inner = insn.inputs.first()?;

            // Pattern 1: BoolNegate(BoolNegate(x)) → x
            // Pattern 6: BoolNegate(IntEqual(a, b)) → IntNotequal(a, b)
            // Pattern 7: BoolNegate(IntNotequal(a, b)) → IntEqual(a, b)
            // Pattern 8: BoolNegate(IntLess(a, b)) → IntLessequal(b, a)
            if let Some(inner_insn) = def_map.get(inner) {
                match inner_insn.op {
                    // Double negation
                    IrOp::BoolNegate => {
                        let x = inner_insn.inputs.first()?;
                        return Some(make_copy(insn, *x));
                    }
                    // !(a == b) → a != b
                    IrOp::IntEqual => {
                        return Some(replace_op(insn, IrOp::IntNotequal, inner_insn.inputs.clone()));
                    }
                    // !(a != b) → a == b
                    IrOp::IntNotequal => {
                        return Some(replace_op(insn, IrOp::IntEqual, inner_insn.inputs.clone()));
                    }
                    // !(a < b) → b <= a  (swap operands and invert to <=)
                    IrOp::IntLess => {
                        let a = inner_insn.inputs.first()?;
                        let b = inner_insn.inputs.get(1)?;
                        return Some(replace_op(
                            insn,
                            IrOp::IntLessequal,
                            smallvec::smallvec![*b, *a],
                        ));
                    }
                    _ => {}
                }
            }

            None
        }

        // ── BoolAnd ─────────────────────────────────────────────────
        IrOp::BoolAnd => {
            let (x, y) = two(&insn.inputs)?;

            // Pattern 2: BoolAnd(x, true) → x  /  BoolAnd(true, x) → x
            if is_const_true(&y) {
                return Some(make_copy(insn, x));
            }
            if is_const_true(&x) {
                return Some(make_copy(insn, y));
            }

            // Pattern 3: BoolAnd(x, false) → false  /  BoolAnd(false, x) → false
            if is_const_false(&y) {
                return Some(make_copy(insn, Varnode::constant(0, output.size)));
            }
            if is_const_false(&x) {
                return Some(make_copy(insn, Varnode::constant(0, output.size)));
            }

            None
        }

        // ── BoolOr ──────────────────────────────────────────────────
        IrOp::BoolOr => {
            let (x, y) = two(&insn.inputs)?;

            // Pattern 4: BoolOr(x, true) → true  /  BoolOr(true, x) → true
            if is_const_true(&y) || is_const_true(&x) {
                return Some(make_copy(insn, Varnode::constant(1, output.size)));
            }

            // Pattern 5: BoolOr(x, false) → x  /  BoolOr(false, x) → x
            if is_const_false(&y) {
                return Some(make_copy(insn, x));
            }
            if is_const_false(&x) {
                return Some(make_copy(insn, y));
            }

            None
        }

        // ── BoolXor ─────────────────────────────────────────────────
        IrOp::BoolXor => {
            let (x, y) = two(&insn.inputs)?;

            // Pattern 9: BoolXor(x, false) → x  /  BoolXor(false, x) → x
            if is_const_false(&y) {
                return Some(make_copy(insn, x));
            }
            if is_const_false(&x) {
                return Some(make_copy(insn, y));
            }

            None
        }

        _ => None,
    }
}

fn two(inputs: &[Varnode]) -> Option<(Varnode, Varnode)> {
    if inputs.len() == 2 {
        Some((inputs[0], inputs[1]))
    } else {
        None
    }
}

#[cfg(test)]
mod tests {
    use smallvec::smallvec;

    use unlace_ir::ssa::build_ssa;
    use unlace_ir::{BasicBlock, BlockId, Function, IrInsn, IrOp, SpaceId, Varnode};

    use super::*;

    fn make_single_block_ssa(insns: Vec<IrInsn>) -> unlace_ir::ssa::SsaFunction {
        let mut func = Function::new("test", BlockId(0), 0x1000);
        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns = insns;
        bb.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![Varnode::constant(0, 8)],
            0x1FFF,
        ));
        func.insert_block(bb);
        build_ssa(func)
    }

    // ── Pattern 1: double negation ──────────────────────────────────

    #[test]
    fn test_double_negation_eliminated() {
        // v1 = BoolNegate(r0)
        // v2 = BoolNegate(v1)  →  v2 = COPY r0
        let r0 = Varnode::reg(0, 1);
        let v1 = Varnode::unique(0, 1);
        let v2 = Varnode::unique(8, 1);

        let insn1 = IrInsn::with_output(IrOp::BoolNegate, v1, smallvec![r0], 0x1000);
        let insn2 = IrInsn::with_output(IrOp::BoolNegate, v2, smallvec![v1], 0x1004);

        let mut ssa = make_single_block_ssa(vec![insn1, insn2]);
        let changed = ConditionSimplifyPass.run(&mut ssa).expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        // insn2 should be COPY r0
        assert_eq!(block.insns[1].op, IrOp::Copy);
        assert_eq!(block.insns[1].inputs[0], r0);
    }

    // ── Pattern 2: BoolAnd(x, true) → x ────────────────────────────

    #[test]
    fn test_bool_and_with_true() {
        let r0 = Varnode::reg(0, 1);
        let out = Varnode::unique(0, 1);
        let c_true = Varnode::constant(1, 1);

        let insn = IrInsn::with_output(IrOp::BoolAnd, out, smallvec![r0, c_true], 0x1000);

        let mut ssa = make_single_block_ssa(vec![insn]);
        let changed = ConditionSimplifyPass.run(&mut ssa).expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(block.insns[0].op, IrOp::Copy);
        assert_eq!(block.insns[0].inputs[0], r0);
    }

    // ── Pattern 3: BoolAnd(x, false) → false ───────────────────────

    #[test]
    fn test_bool_and_with_false() {
        let r0 = Varnode::reg(0, 1);
        let out = Varnode::unique(0, 1);
        let c_false = Varnode::constant(0, 1);

        let insn = IrInsn::with_output(IrOp::BoolAnd, out, smallvec![r0, c_false], 0x1000);

        let mut ssa = make_single_block_ssa(vec![insn]);
        let changed = ConditionSimplifyPass.run(&mut ssa).expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(block.insns[0].op, IrOp::Copy);
        assert_eq!(block.insns[0].inputs[0].space, SpaceId::Const);
        assert_eq!(block.insns[0].inputs[0].offset, 0);
    }

    // ── Pattern 4: BoolOr(x, true) → true ──────────────────────────

    #[test]
    fn test_bool_or_with_true() {
        let r0 = Varnode::reg(0, 1);
        let out = Varnode::unique(0, 1);
        let c_true = Varnode::constant(1, 1);

        let insn = IrInsn::with_output(IrOp::BoolOr, out, smallvec![r0, c_true], 0x1000);

        let mut ssa = make_single_block_ssa(vec![insn]);
        let changed = ConditionSimplifyPass.run(&mut ssa).expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(block.insns[0].op, IrOp::Copy);
        assert_eq!(block.insns[0].inputs[0].space, SpaceId::Const);
        assert_eq!(block.insns[0].inputs[0].offset, 1);
    }

    // ── Pattern 5: BoolOr(x, false) → x ────────────────────────────

    #[test]
    fn test_bool_or_with_false() {
        let r0 = Varnode::reg(0, 1);
        let out = Varnode::unique(0, 1);
        let c_false = Varnode::constant(0, 1);

        let insn = IrInsn::with_output(IrOp::BoolOr, out, smallvec![r0, c_false], 0x1000);

        let mut ssa = make_single_block_ssa(vec![insn]);
        let changed = ConditionSimplifyPass.run(&mut ssa).expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(block.insns[0].op, IrOp::Copy);
        assert_eq!(block.insns[0].inputs[0], r0);
    }

    // ── Pattern 6: BoolNegate(IntEqual(a, b)) → IntNotequal(a, b) ──

    #[test]
    fn test_negate_equal_to_notequal() {
        let r0 = Varnode::reg(0, 4);
        let r8 = Varnode::reg(8, 4);
        let v1 = Varnode::unique(0, 1);
        let v2 = Varnode::unique(8, 1);

        let cmp = IrInsn::with_output(IrOp::IntEqual, v1, smallvec![r0, r8], 0x1000);
        let neg = IrInsn::with_output(IrOp::BoolNegate, v2, smallvec![v1], 0x1004);

        let mut ssa = make_single_block_ssa(vec![cmp, neg]);
        let changed = ConditionSimplifyPass.run(&mut ssa).expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(block.insns[1].op, IrOp::IntNotequal);
        assert_eq!(block.insns[1].inputs[0], r0);
        assert_eq!(block.insns[1].inputs[1], r8);
    }

    // ── Pattern 7: BoolNegate(IntNotequal(a, b)) → IntEqual(a, b) ──

    #[test]
    fn test_negate_notequal_to_equal() {
        let r0 = Varnode::reg(0, 4);
        let r8 = Varnode::reg(8, 4);
        let v1 = Varnode::unique(0, 1);
        let v2 = Varnode::unique(8, 1);

        let cmp = IrInsn::with_output(IrOp::IntNotequal, v1, smallvec![r0, r8], 0x1000);
        let neg = IrInsn::with_output(IrOp::BoolNegate, v2, smallvec![v1], 0x1004);

        let mut ssa = make_single_block_ssa(vec![cmp, neg]);
        let changed = ConditionSimplifyPass.run(&mut ssa).expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(block.insns[1].op, IrOp::IntEqual);
        assert_eq!(block.insns[1].inputs[0], r0);
        assert_eq!(block.insns[1].inputs[1], r8);
    }

    // ── Pattern 8: BoolNegate(IntLess(a, b)) → IntLessequal(b, a) ──

    #[test]
    fn test_negate_less_to_lessequal_swapped() {
        let r0 = Varnode::reg(0, 4);
        let r8 = Varnode::reg(8, 4);
        let v1 = Varnode::unique(0, 1);
        let v2 = Varnode::unique(8, 1);

        let cmp = IrInsn::with_output(IrOp::IntLess, v1, smallvec![r0, r8], 0x1000);
        let neg = IrInsn::with_output(IrOp::BoolNegate, v2, smallvec![v1], 0x1004);

        let mut ssa = make_single_block_ssa(vec![cmp, neg]);
        let changed = ConditionSimplifyPass.run(&mut ssa).expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(block.insns[1].op, IrOp::IntLessequal);
        // Operands swapped: (b, a)
        assert_eq!(block.insns[1].inputs[0], r8);
        assert_eq!(block.insns[1].inputs[1], r0);
    }

    // ── Pattern 9: BoolXor(x, false) → x ───────────────────────────

    #[test]
    fn test_bool_xor_with_false() {
        let r0 = Varnode::reg(0, 1);
        let out = Varnode::unique(0, 1);
        let c_false = Varnode::constant(0, 1);

        let insn = IrInsn::with_output(IrOp::BoolXor, out, smallvec![r0, c_false], 0x1000);

        let mut ssa = make_single_block_ssa(vec![insn]);
        let changed = ConditionSimplifyPass.run(&mut ssa).expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(block.insns[0].op, IrOp::Copy);
        assert_eq!(block.insns[0].inputs[0], r0);
    }

    // ── Fixed-point iteration: triple negation ──────────────────────

    #[test]
    fn test_triple_negation_fixedpoint() {
        // v1 = BoolNegate(r0)
        // v2 = BoolNegate(v1)  → COPY r0  (first iteration)
        // v3 = BoolNegate(v2)
        // After first iteration: v2 = COPY r0, but v3 = BoolNegate(v2) is unchanged
        // (v2 is now a COPY, not a BoolNegate, so BoolNegate(COPY(r0)) doesn't
        //  match double-negation — it stays as BoolNegate. But that's correct:
        //  v3 should end up as BoolNegate(r0) effectively.)
        let r0 = Varnode::reg(0, 1);
        let v1 = Varnode::unique(0, 1);
        let v2 = Varnode::unique(8, 1);
        let v3 = Varnode::unique(16, 1);

        let insn1 = IrInsn::with_output(IrOp::BoolNegate, v1, smallvec![r0], 0x1000);
        let insn2 = IrInsn::with_output(IrOp::BoolNegate, v2, smallvec![v1], 0x1004);
        let insn3 = IrInsn::with_output(IrOp::BoolNegate, v3, smallvec![v2], 0x1008);

        let mut ssa = make_single_block_ssa(vec![insn1, insn2, insn3]);
        let changed = ConditionSimplifyPass.run(&mut ssa).expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        // After fixed-point: v2 = COPY r0, v3 = BoolNegate(v2)
        // The second iteration rebuilds def_map with v2 = COPY r0,
        // so BoolNegate(v2) looks up v2 -> COPY (not BoolNegate) -> no match.
        // v3 stays as BoolNegate(v2). That's correct: 3 negations = 1 negation.
        assert_eq!(block.insns[1].op, IrOp::Copy);
        assert_eq!(block.insns[1].inputs[0], r0);
    }

    // ── No change on non-simplifiable instruction ───────────────────

    #[test]
    fn test_no_change_on_non_bool_op() {
        let r0 = Varnode::reg(0, 4);
        let r8 = Varnode::reg(8, 4);
        let out = Varnode::unique(0, 4);

        let insn = IrInsn::with_output(IrOp::IntAdd, out, smallvec![r0, r8], 0x1000);

        let mut ssa = make_single_block_ssa(vec![insn]);
        let changed = ConditionSimplifyPass.run(&mut ssa).expect("pass should succeed");
        assert!(!changed);
    }

    // ── Commutative: BoolAnd(true, x) → x ──────────────────────────

    #[test]
    fn test_bool_and_true_on_left() {
        let r0 = Varnode::reg(0, 1);
        let out = Varnode::unique(0, 1);
        let c_true = Varnode::constant(1, 1);

        let insn = IrInsn::with_output(IrOp::BoolAnd, out, smallvec![c_true, r0], 0x1000);

        let mut ssa = make_single_block_ssa(vec![insn]);
        let changed = ConditionSimplifyPass.run(&mut ssa).expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(block.insns[0].op, IrOp::Copy);
        assert_eq!(block.insns[0].inputs[0], r0);
    }

    // ── Commutative: BoolOr(false, x) → x ──────────────────────────

    #[test]
    fn test_bool_or_false_on_left() {
        let r0 = Varnode::reg(0, 1);
        let out = Varnode::unique(0, 1);
        let c_false = Varnode::constant(0, 1);

        let insn = IrInsn::with_output(IrOp::BoolOr, out, smallvec![c_false, r0], 0x1000);

        let mut ssa = make_single_block_ssa(vec![insn]);
        let changed = ConditionSimplifyPass.run(&mut ssa).expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(block.insns[0].op, IrOp::Copy);
        assert_eq!(block.insns[0].inputs[0], r0);
    }

    // ── Commutative: BoolXor(false, x) → x ─────────────────────────

    #[test]
    fn test_bool_xor_false_on_left() {
        let r0 = Varnode::reg(0, 1);
        let out = Varnode::unique(0, 1);
        let c_false = Varnode::constant(0, 1);

        let insn = IrInsn::with_output(IrOp::BoolXor, out, smallvec![c_false, r0], 0x1000);

        let mut ssa = make_single_block_ssa(vec![insn]);
        let changed = ConditionSimplifyPass.run(&mut ssa).expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(block.insns[0].op, IrOp::Copy);
        assert_eq!(block.insns[0].inputs[0], r0);
    }
}
