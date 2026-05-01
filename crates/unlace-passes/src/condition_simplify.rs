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
/// - De Morgan: `BoolNegate(BoolOr(a, b))` → `BoolAnd(BoolNegate(a), BoolNegate(b))`
/// - De Morgan: `BoolNegate(BoolAnd(a, b))` → `BoolOr(BoolNegate(a), BoolNegate(b))`
/// - Xor with false: `BoolXor(x, false)` → `x`
/// - `(x - y) == 0` → `x == y`, `(x - y) != 0` → `x != y`
/// - `x == x` → `1`, `x != x` → `0`
/// - `x < x`, `x <s x` → `0` (any-relational on identical operands)
/// - `unsigned_x < 0` → `0`, `0 <= unsigned_x` → `1`
/// - `(x + c1) == c2` → `x == (c2 - c1)`
/// - `(x - c1) == c2` → `x == (c2 + c1)`
/// - `BoolNegate(IntLessequal(a, b))` → `IntLess(b, a)`
/// - `IntEqual(0, x)` → `IntEqual(x, 0)` (canonicalize commutative ordering)
///
/// Iterates internally to a fixed point.
pub struct ConditionSimplifyPass;

impl Pass for ConditionSimplifyPass {
    fn name(&self) -> &str {
        "condition-simplify"
    }

    fn run(&self, func: &mut SsaFunction) -> Result<bool, PassError> {
        const MAX_INNER: usize = 100;
        let func_name = func.function.name.clone();
        let mut changed_any = false;
        let mut next_unique = find_max_unique_offset(func) + 8;
        let mut iter = 0;
        loop {
            iter += 1;
            if iter > MAX_INNER {
                tracing::error!(
                    func = %func_name,
                    iters = MAX_INNER,
                    "condition_simplify did not converge"
                );
                return Err(PassError::InvariantViolation {
                    message: format!(
                        "condition_simplify did not converge on '{func_name}' after {MAX_INNER} iters",
                    ),
                });
            }
            let def_map = build_def_map(func);
            let mut changed = false;

            for block in func.function.blocks.values_mut() {
                let mut new_insns: Vec<IrInsn> = Vec::with_capacity(block.insns.len());

                for insn in &block.insns {
                    match try_simplify(insn, &def_map, &mut next_unique) {
                        Some(Simplification::Replace(replacement)) => {
                            new_insns.push(replacement);
                            changed = true;
                        }
                        Some(Simplification::InsertAndReplace {
                            prefix,
                            replacement,
                        }) => {
                            new_insns.extend(prefix);
                            new_insns.push(replacement);
                            changed = true;
                        }
                        None => {
                            new_insns.push(insn.clone());
                        }
                    }
                }

                block.insns = new_insns;
            }

            if changed {
                tracing::trace!(func = %func_name, iter, "condition_simplify iter");
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

fn find_max_unique_offset(func: &SsaFunction) -> u64 {
    let mut max_offset = 0u64;
    for block in func.function.blocks.values() {
        for insn in &block.insns {
            if let Some(output) = insn.output {
                if output.space == SpaceId::Unique {
                    max_offset = max_offset.max(output.offset);
                }
            }
            for input in &insn.inputs {
                if input.space == SpaceId::Unique {
                    max_offset = max_offset.max(input.offset);
                }
            }
        }
    }
    max_offset
}

enum Simplification {
    Replace(IrInsn),
    InsertAndReplace {
        prefix: Vec<IrInsn>,
        replacement: IrInsn,
    },
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

fn simplify_eq(
    insn: &IrInsn,
    output: Varnode,
    def_map: &BTreeMap<Varnode, IrInsn>,
) -> Option<Simplification> {
    let (a, b) = two(&insn.inputs)?;

    if a == b && a.space != SpaceId::Const {
        let val = if insn.op == IrOp::IntEqual { 1 } else { 0 };
        return Some(Simplification::Replace(make_copy(
            insn,
            Varnode::constant(val, output.size),
        )));
    }

    if a.space == SpaceId::Const && b.space != SpaceId::Const {
        return Some(Simplification::Replace(replace_op(
            insn,
            insn.op,
            smallvec::smallvec![b, a],
        )));
    }

    if b.space == SpaceId::Const && b.offset == 0 {
        if let Some(inner) = def_map.get(&a) {
            if inner.op == IrOp::IntAnd && inner.inputs.len() == 2 {
                let x = inner.inputs[0];
                let y = inner.inputs[1];
                if inner.output.as_ref() == Some(&a) {
                    if insn.op == IrOp::IntEqual {
                        let negate_input = if x == y && x.space != SpaceId::Const { x } else { a };
                        return Some(Simplification::Replace(replace_op(
                            insn,
                            IrOp::BoolNegate,
                            smallvec::smallvec![negate_input],
                        )));
                    }

                    if x == y && x.space != SpaceId::Const {
                        return Some(Simplification::Replace(make_copy(insn, x)));
                    }
                }
            }

            if inner.op == IrOp::IntSub && inner.inputs.len() == 2 {
                let x = inner.inputs[0];
                let y = inner.inputs[1];
                if is_safe_offset_fold_target(&a, &x, inner) {
                    return Some(Simplification::Replace(replace_op(
                        insn,
                        insn.op,
                        smallvec::smallvec![x, y],
                    )));
                }
            }
        }
    }

    if b.space == SpaceId::Const {
        if let Some(inner) = def_map.get(&a) {
            if inner.inputs.len() == 2 && inner.inputs[1].space == SpaceId::Const {
                let x = inner.inputs[0];
                if !is_safe_offset_fold_target(&a, &x, inner) {
                    return None;
                }
                let c1 = inner.inputs[1].offset;
                let size = b.size;
                let mask = if size >= 8 {
                    u64::MAX
                } else {
                    (1u64 << (size as u32 * 8)) - 1
                };
                let new_const_offset = match inner.op {
                    IrOp::IntAdd => Some(b.offset.wrapping_sub(c1) & mask),
                    IrOp::IntSub => Some(b.offset.wrapping_add(c1) & mask),
                    _ => None,
                };
                if let Some(off) = new_const_offset {
                    return Some(Simplification::Replace(replace_op(
                        insn,
                        insn.op,
                        smallvec::smallvec![x, Varnode::constant(off, size)],
                    )));
                }
            }
        }
    }

    None
}

fn is_safe_offset_fold_target(a: &Varnode, x: &Varnode, inner: &IrInsn) -> bool {
    if inner.output.as_ref() != Some(a) {
        return false;
    }
    if x == a {
        return false;
    }
    if let Some(out) = inner.output {
        if inner.inputs.iter().any(|v| *v == out) {
            return false;
        }
    }
    true
}

fn simplify_less(
    insn: &IrInsn,
    output: Varnode,
    def_map: &BTreeMap<Varnode, IrInsn>,
) -> Option<Simplification> {
    let (a, b) = two(&insn.inputs)?;

    if a == b && a.space != SpaceId::Const {
        return Some(Simplification::Replace(make_copy(
            insn,
            Varnode::constant(0, output.size),
        )));
    }

    if insn.op == IrOp::IntLess && b.space == SpaceId::Const && b.offset == 0 {
        return Some(Simplification::Replace(make_copy(
            insn,
            Varnode::constant(0, output.size),
        )));
    }

    if insn.op == IrOp::IntSless && b.space == SpaceId::Const && b.offset == 0 {
        if let Some(inner) = def_map.get(&a) {
            if inner.op == IrOp::IntSub && inner.inputs.len() == 2 {
                let x = inner.inputs[0];
                let y = inner.inputs[1];
                if is_safe_offset_fold_target(&a, &x, inner) {
                    return Some(Simplification::Replace(replace_op(
                        insn,
                        IrOp::IntSless,
                        smallvec::smallvec![x, y],
                    )));
                }
            }
        }
    }

    None
}

fn simplify_lessequal(
    insn: &IrInsn,
    output: Varnode,
    _def_map: &BTreeMap<Varnode, IrInsn>,
) -> Option<Simplification> {
    let (a, b) = two(&insn.inputs)?;

    if a == b && a.space != SpaceId::Const {
        return Some(Simplification::Replace(make_copy(
            insn,
            Varnode::constant(1, output.size),
        )));
    }

    if insn.op == IrOp::IntLessequal && a.space == SpaceId::Const && a.offset == 0 {
        return Some(Simplification::Replace(make_copy(
            insn,
            Varnode::constant(1, output.size),
        )));
    }

    None
}

fn try_simplify(
    insn: &IrInsn,
    def_map: &BTreeMap<Varnode, IrInsn>,
    next_unique: &mut u64,
) -> Option<Simplification> {
    let output = insn.output?;

    match insn.op {
        // ── BoolNegate ──────────────────────────────────────────────
        IrOp::BoolNegate => {
            let inner = insn.inputs.first()?;

            if let Some(inner_insn) = def_map.get(inner) {
                if let Some(folded) = simplify_negated_flag_chain(insn, inner_insn, def_map) {
                    return Some(folded);
                }

                match inner_insn.op {
                    IrOp::BoolNegate => {
                        let x = inner_insn.inputs.first()?;
                        return Some(Simplification::Replace(make_copy(insn, *x)));
                    }
                    IrOp::IntEqual => {
                        return Some(Simplification::Replace(replace_op(
                            insn,
                            IrOp::IntNotequal,
                            inner_insn.inputs.clone(),
                        )));
                    }
                    IrOp::IntNotequal => {
                        return Some(Simplification::Replace(replace_op(
                            insn,
                            IrOp::IntEqual,
                            inner_insn.inputs.clone(),
                        )));
                    }
                    IrOp::IntLess => {
                        let a = inner_insn.inputs.first()?;
                        let b = inner_insn.inputs.get(1)?;
                        return Some(Simplification::Replace(replace_op(
                            insn,
                            IrOp::IntLessequal,
                            smallvec::smallvec![*b, *a],
                        )));
                    }
                    IrOp::IntLessequal => {
                        let a = inner_insn.inputs.first()?;
                        let b = inner_insn.inputs.get(1)?;
                        return Some(Simplification::Replace(replace_op(
                            insn,
                            IrOp::IntLess,
                            smallvec::smallvec![*b, *a],
                        )));
                    }
                    IrOp::IntSless => {
                        let a = inner_insn.inputs.first()?;
                        let b = inner_insn.inputs.get(1)?;
                        return Some(Simplification::Replace(replace_op(
                            insn,
                            IrOp::IntSlessequal,
                            smallvec::smallvec![*b, *a],
                        )));
                    }
                    IrOp::IntSlessequal => {
                        let a = inner_insn.inputs.first()?;
                        let b = inner_insn.inputs.get(1)?;
                        return Some(Simplification::Replace(replace_op(
                            insn,
                            IrOp::IntSless,
                            smallvec::smallvec![*b, *a],
                        )));
                    }
                    // !(a || b) → (!a) && (!b)
                    IrOp::BoolOr => {
                        let a = *inner_insn.inputs.first()?;
                        let b = *inner_insn.inputs.get(1)?;
                        return Some(demorgan(insn, a, b, IrOp::BoolAnd, output, next_unique));
                    }
                    // !(a && b) → (!a) || (!b)
                    IrOp::BoolAnd => {
                        let a = *inner_insn.inputs.first()?;
                        let b = *inner_insn.inputs.get(1)?;
                        return Some(demorgan(insn, a, b, IrOp::BoolOr, output, next_unique));
                    }
                    _ => {}
                }
            }

            None
        }

        IrOp::IntEqual | IrOp::IntNotequal => simplify_eq(insn, output, def_map),

        IrOp::IntLess | IrOp::IntSless => simplify_less(insn, output, def_map),

        IrOp::IntLessequal | IrOp::IntSlessequal => simplify_lessequal(insn, output, def_map),

        IrOp::IntAnd => {
            let (x, y) = two(&insn.inputs)?;
            if x == y && x.space != SpaceId::Const {
                return Some(Simplification::Replace(make_copy(insn, x)));
            }

            None
        }

        // ── BoolAnd ─────────────────────────────────────────────────
        IrOp::BoolAnd => {
            let (x, y) = two(&insn.inputs)?;

            if is_const_true(&y) {
                return Some(Simplification::Replace(make_copy(insn, x)));
            }
            if is_const_true(&x) {
                return Some(Simplification::Replace(make_copy(insn, y)));
            }

            if is_const_false(&y) {
                return Some(Simplification::Replace(make_copy(
                    insn,
                    Varnode::constant(0, output.size),
                )));
            }
            if is_const_false(&x) {
                return Some(Simplification::Replace(make_copy(
                    insn,
                    Varnode::constant(0, output.size),
                )));
            }

            None
        }

        // ── BoolOr ──────────────────────────────────────────────────
        IrOp::BoolOr => {
            let (x, y) = two(&insn.inputs)?;

            if is_const_true(&y) || is_const_true(&x) {
                return Some(Simplification::Replace(make_copy(
                    insn,
                    Varnode::constant(1, output.size),
                )));
            }

            if is_const_false(&y) {
                return Some(Simplification::Replace(make_copy(insn, x)));
            }
            if is_const_false(&x) {
                return Some(Simplification::Replace(make_copy(insn, y)));
            }

            None
        }

        // ── BoolXor ─────────────────────────────────────────────────
        IrOp::BoolXor => {
            let (x, y) = two(&insn.inputs)?;

            if is_const_false(&y) {
                return Some(Simplification::Replace(make_copy(insn, x)));
            }
            if is_const_false(&x) {
                return Some(Simplification::Replace(make_copy(insn, y)));
            }

            None
        }

        _ => None,
    }
}

fn simplify_negated_flag_chain(
    insn: &IrInsn,
    flag_insn: &IrInsn,
    def_map: &BTreeMap<Varnode, IrInsn>,
) -> Option<Simplification> {
    let (lhs, rhs) = two(&flag_insn.inputs)?;
    if rhs.space != SpaceId::Const || rhs.offset != 0 {
        return None;
    }

    let sub = def_map.get(&lhs)?;
    if sub.op != IrOp::IntSub || sub.inputs.len() != 2 {
        return None;
    }
    let a = sub.inputs[0];
    let b = sub.inputs[1];
    if !is_safe_offset_fold_target(&lhs, &a, sub) {
        return None;
    }

    let (op, inputs) = match flag_insn.op {
        IrOp::IntEqual => (IrOp::IntNotequal, smallvec::smallvec![a, b]),
        IrOp::IntSless => (IrOp::IntSlessequal, smallvec::smallvec![b, a]),
        _ => return None,
    };

    Some(Simplification::Replace(replace_op(insn, op, inputs)))
}

fn demorgan(
    insn: &IrInsn,
    a: Varnode,
    b: Varnode,
    result_op: IrOp,
    output: Varnode,
    next_unique: &mut u64,
) -> Simplification {
    let neg_a_out = Varnode::unique(*next_unique, output.size);
    *next_unique += 8;
    let neg_b_out = Varnode::unique(*next_unique, output.size);
    *next_unique += 8;

    let neg_a = IrInsn::with_output(
        IrOp::BoolNegate,
        neg_a_out,
        smallvec::smallvec![a],
        insn.addr,
    );
    let neg_b = IrInsn::with_output(
        IrOp::BoolNegate,
        neg_b_out,
        smallvec::smallvec![b],
        insn.addr,
    );
    let combined = IrInsn::with_output(
        result_op,
        insn.output.expect("simplifiable insn has output"),
        smallvec::smallvec![neg_a_out, neg_b_out],
        insn.addr,
    );

    Simplification::InsertAndReplace {
        prefix: vec![neg_a, neg_b],
        replacement: combined,
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
        let changed = ConditionSimplifyPass
            .run(&mut ssa)
            .expect("pass should succeed");
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
        let changed = ConditionSimplifyPass
            .run(&mut ssa)
            .expect("pass should succeed");
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
        let changed = ConditionSimplifyPass
            .run(&mut ssa)
            .expect("pass should succeed");
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
        let changed = ConditionSimplifyPass
            .run(&mut ssa)
            .expect("pass should succeed");
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
        let changed = ConditionSimplifyPass
            .run(&mut ssa)
            .expect("pass should succeed");
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
        let changed = ConditionSimplifyPass
            .run(&mut ssa)
            .expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(block.insns[1].op, IrOp::IntNotequal);
        assert_eq!(block.insns[1].inputs[0], r0);
        assert_eq!(block.insns[1].inputs[1], r8);
    }

    #[test]
    fn test_negated_sub_equal_zero_to_notequal() {
        let r0 = Varnode::reg(0, 4);
        let r8 = Varnode::reg(8, 4);
        let zero = Varnode::constant(0, 4);
        let diff = Varnode::unique(0, 4);
        let zf = Varnode::unique(8, 1);
        let cond = Varnode::unique(16, 1);

        let sub = IrInsn::with_output(IrOp::IntSub, diff, smallvec![r0, r8], 0x1000);
        let eq = IrInsn::with_output(IrOp::IntEqual, zf, smallvec![diff, zero], 0x1004);
        let neg = IrInsn::with_output(IrOp::BoolNegate, cond, smallvec![zf], 0x1008);

        let mut ssa = make_single_block_ssa(vec![sub, eq, neg]);
        let changed = ConditionSimplifyPass
            .run(&mut ssa)
            .expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(block.insns[2].op, IrOp::IntNotequal);
        assert_eq!(block.insns[2].inputs[0], r0);
        assert_eq!(block.insns[2].inputs[1], r8);
    }

    #[test]
    fn test_negated_sub_sless_zero_to_slessequal() {
        let r0 = Varnode::reg(0, 4);
        let r8 = Varnode::reg(8, 4);
        let zero = Varnode::constant(0, 4);
        let diff = Varnode::unique(0, 4);
        let sf = Varnode::unique(8, 1);
        let cond = Varnode::unique(16, 1);

        let sub = IrInsn::with_output(IrOp::IntSub, diff, smallvec![r0, r8], 0x1000);
        let sless = IrInsn::with_output(IrOp::IntSless, sf, smallvec![diff, zero], 0x1004);
        let neg = IrInsn::with_output(IrOp::BoolNegate, cond, smallvec![sf], 0x1008);

        let mut ssa = make_single_block_ssa(vec![sub, sless, neg]);
        let changed = ConditionSimplifyPass
            .run(&mut ssa)
            .expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(block.insns[2].op, IrOp::IntSlessequal);
        assert_eq!(block.insns[2].inputs[0], r8);
        assert_eq!(block.insns[2].inputs[1], r0);
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
        let changed = ConditionSimplifyPass
            .run(&mut ssa)
            .expect("pass should succeed");
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
        let changed = ConditionSimplifyPass
            .run(&mut ssa)
            .expect("pass should succeed");
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
        let changed = ConditionSimplifyPass
            .run(&mut ssa)
            .expect("pass should succeed");
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
        let changed = ConditionSimplifyPass
            .run(&mut ssa)
            .expect("pass should succeed");
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
        let changed = ConditionSimplifyPass
            .run(&mut ssa)
            .expect("pass should succeed");
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
        let changed = ConditionSimplifyPass
            .run(&mut ssa)
            .expect("pass should succeed");
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
        let changed = ConditionSimplifyPass
            .run(&mut ssa)
            .expect("pass should succeed");
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
        let changed = ConditionSimplifyPass
            .run(&mut ssa)
            .expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(block.insns[0].op, IrOp::Copy);
        assert_eq!(block.insns[0].inputs[0], r0);
    }

    // ── De Morgan: !(a || b) → (!a) && (!b) ────────────────────────

    #[test]
    fn test_demorgan_negate_or() {
        // v1 = BoolOr(r0, r8)
        // v2 = BoolNegate(v1) → neg_a = BoolNegate(r0), neg_b = BoolNegate(r8), v2 = BoolAnd(neg_a, neg_b)
        let r0 = Varnode::reg(0, 1);
        let r8 = Varnode::reg(8, 1);
        let v1 = Varnode::unique(0, 1);
        let v2 = Varnode::unique(8, 1);

        let or_insn = IrInsn::with_output(IrOp::BoolOr, v1, smallvec![r0, r8], 0x1000);
        let neg_insn = IrInsn::with_output(IrOp::BoolNegate, v2, smallvec![v1], 0x1004);

        let mut ssa = make_single_block_ssa(vec![or_insn, neg_insn]);
        let changed = ConditionSimplifyPass
            .run(&mut ssa)
            .expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        // insn[0] = BoolOr (unchanged)
        assert_eq!(block.insns[0].op, IrOp::BoolOr);
        // insn[1] = BoolNegate(r0)
        assert_eq!(block.insns[1].op, IrOp::BoolNegate);
        assert_eq!(block.insns[1].inputs[0], r0);
        // insn[2] = BoolNegate(r8)
        assert_eq!(block.insns[2].op, IrOp::BoolNegate);
        assert_eq!(block.insns[2].inputs[0], r8);
        // insn[3] = BoolAnd(neg_a, neg_b)
        assert_eq!(block.insns[3].op, IrOp::BoolAnd);
        assert_eq!(block.insns[3].output, Some(v2));
    }

    // ── De Morgan: !(a && b) → (!a) || (!b) ────────────────────────

    #[test]
    fn test_demorgan_negate_and() {
        let r0 = Varnode::reg(0, 1);
        let r8 = Varnode::reg(8, 1);
        let v1 = Varnode::unique(0, 1);
        let v2 = Varnode::unique(8, 1);

        let and_insn = IrInsn::with_output(IrOp::BoolAnd, v1, smallvec![r0, r8], 0x1000);
        let neg_insn = IrInsn::with_output(IrOp::BoolNegate, v2, smallvec![v1], 0x1004);

        let mut ssa = make_single_block_ssa(vec![and_insn, neg_insn]);
        let changed = ConditionSimplifyPass
            .run(&mut ssa)
            .expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(block.insns[0].op, IrOp::BoolAnd);
        assert_eq!(block.insns[1].op, IrOp::BoolNegate);
        assert_eq!(block.insns[1].inputs[0], r0);
        assert_eq!(block.insns[2].op, IrOp::BoolNegate);
        assert_eq!(block.insns[2].inputs[0], r8);
        assert_eq!(block.insns[3].op, IrOp::BoolOr);
        assert_eq!(block.insns[3].output, Some(v2));
    }

    #[test]
    fn test_sub_eq_zero_to_eq() {
        let r0 = Varnode::reg(0, 4);
        let r8 = Varnode::reg(8, 4);
        let zero = Varnode::constant(0, 4);
        let v1 = Varnode::unique(0, 4);
        let v2 = Varnode::unique(8, 1);

        let sub = IrInsn::with_output(IrOp::IntSub, v1, smallvec![r0, r8], 0x1000);
        let eq = IrInsn::with_output(IrOp::IntEqual, v2, smallvec![v1, zero], 0x1004);

        let mut ssa = make_single_block_ssa(vec![sub, eq]);
        let changed = ConditionSimplifyPass
            .run(&mut ssa)
            .expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(block.insns[1].op, IrOp::IntEqual);
        assert_eq!(block.insns[1].inputs[0], r0);
        assert_eq!(block.insns[1].inputs[1], r8);
    }

    #[test]
    fn test_sub_neq_zero_to_neq() {
        let r0 = Varnode::reg(0, 4);
        let r8 = Varnode::reg(8, 4);
        let zero = Varnode::constant(0, 4);
        let v1 = Varnode::unique(0, 4);
        let v2 = Varnode::unique(8, 1);

        let sub = IrInsn::with_output(IrOp::IntSub, v1, smallvec![r0, r8], 0x1000);
        let neq = IrInsn::with_output(IrOp::IntNotequal, v2, smallvec![v1, zero], 0x1004);

        let mut ssa = make_single_block_ssa(vec![sub, neq]);
        let changed = ConditionSimplifyPass
            .run(&mut ssa)
            .expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(block.insns[1].op, IrOp::IntNotequal);
        assert_eq!(block.insns[1].inputs[0], r0);
        assert_eq!(block.insns[1].inputs[1], r8);
    }

    #[test]
    fn test_eq_self_to_true() {
        let r0 = Varnode::reg(0, 4);
        let out = Varnode::unique(0, 1);

        let eq = IrInsn::with_output(IrOp::IntEqual, out, smallvec![r0, r0], 0x1000);

        let mut ssa = make_single_block_ssa(vec![eq]);
        let changed = ConditionSimplifyPass
            .run(&mut ssa)
            .expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(block.insns[0].op, IrOp::Copy);
        assert_eq!(block.insns[0].inputs[0].space, SpaceId::Const);
        assert_eq!(block.insns[0].inputs[0].offset, 1);
    }

    #[test]
    fn test_neq_self_to_false() {
        let r0 = Varnode::reg(0, 4);
        let out = Varnode::unique(0, 1);

        let neq = IrInsn::with_output(IrOp::IntNotequal, out, smallvec![r0, r0], 0x1000);

        let mut ssa = make_single_block_ssa(vec![neq]);
        let changed = ConditionSimplifyPass
            .run(&mut ssa)
            .expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(block.insns[0].op, IrOp::Copy);
        assert_eq!(block.insns[0].inputs[0].space, SpaceId::Const);
        assert_eq!(block.insns[0].inputs[0].offset, 0);
    }

    #[test]
    fn test_less_self_to_false() {
        let r0 = Varnode::reg(0, 4);
        let out = Varnode::unique(0, 1);

        let less = IrInsn::with_output(IrOp::IntLess, out, smallvec![r0, r0], 0x1000);

        let mut ssa = make_single_block_ssa(vec![less]);
        let changed = ConditionSimplifyPass
            .run(&mut ssa)
            .expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(block.insns[0].op, IrOp::Copy);
        assert_eq!(block.insns[0].inputs[0].offset, 0);
    }

    #[test]
    fn test_sless_self_to_false() {
        let r0 = Varnode::reg(0, 4);
        let out = Varnode::unique(0, 1);

        let sless = IrInsn::with_output(IrOp::IntSless, out, smallvec![r0, r0], 0x1000);

        let mut ssa = make_single_block_ssa(vec![sless]);
        let changed = ConditionSimplifyPass
            .run(&mut ssa)
            .expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(block.insns[0].op, IrOp::Copy);
        assert_eq!(block.insns[0].inputs[0].offset, 0);
    }

    #[test]
    fn test_lessequal_self_to_true() {
        let r0 = Varnode::reg(0, 4);
        let out = Varnode::unique(0, 1);

        let le = IrInsn::with_output(IrOp::IntLessequal, out, smallvec![r0, r0], 0x1000);

        let mut ssa = make_single_block_ssa(vec![le]);
        let changed = ConditionSimplifyPass
            .run(&mut ssa)
            .expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(block.insns[0].op, IrOp::Copy);
        assert_eq!(block.insns[0].inputs[0].offset, 1);
    }

    #[test]
    fn test_unsigned_less_zero_to_false() {
        let r0 = Varnode::reg(0, 4);
        let zero = Varnode::constant(0, 4);
        let out = Varnode::unique(0, 1);

        let less = IrInsn::with_output(IrOp::IntLess, out, smallvec![r0, zero], 0x1000);

        let mut ssa = make_single_block_ssa(vec![less]);
        let changed = ConditionSimplifyPass
            .run(&mut ssa)
            .expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(block.insns[0].op, IrOp::Copy);
        assert_eq!(block.insns[0].inputs[0].offset, 0);
    }

    #[test]
    fn test_zero_lessequal_unsigned_to_true() {
        let r0 = Varnode::reg(0, 4);
        let zero = Varnode::constant(0, 4);
        let out = Varnode::unique(0, 1);

        let le = IrInsn::with_output(IrOp::IntLessequal, out, smallvec![zero, r0], 0x1000);

        let mut ssa = make_single_block_ssa(vec![le]);
        let changed = ConditionSimplifyPass
            .run(&mut ssa)
            .expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(block.insns[0].op, IrOp::Copy);
        assert_eq!(block.insns[0].inputs[0].offset, 1);
    }

    #[test]
    fn test_eq_canonicalize_const_on_right() {
        let r0 = Varnode::reg(0, 4);
        let c5 = Varnode::constant(5, 4);
        let out = Varnode::unique(0, 1);

        let eq = IrInsn::with_output(IrOp::IntEqual, out, smallvec![c5, r0], 0x1000);

        let mut ssa = make_single_block_ssa(vec![eq]);
        let changed = ConditionSimplifyPass
            .run(&mut ssa)
            .expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(block.insns[0].op, IrOp::IntEqual);
        assert_eq!(block.insns[0].inputs[0], r0);
        assert_eq!(block.insns[0].inputs[1], c5);
    }

    #[test]
    fn test_add_const_eq_const_fold() {
        let r0 = Varnode::reg(0, 4);
        let c3 = Varnode::constant(3, 4);
        let c10 = Varnode::constant(10, 4);
        let v1 = Varnode::unique(0, 4);
        let out = Varnode::unique(8, 1);

        let add = IrInsn::with_output(IrOp::IntAdd, v1, smallvec![r0, c3], 0x1000);
        let eq = IrInsn::with_output(IrOp::IntEqual, out, smallvec![v1, c10], 0x1004);

        let mut ssa = make_single_block_ssa(vec![add, eq]);
        let changed = ConditionSimplifyPass
            .run(&mut ssa)
            .expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(block.insns[1].op, IrOp::IntEqual);
        assert_eq!(block.insns[1].inputs[0], r0);
        assert_eq!(block.insns[1].inputs[1].offset, 7);
    }

    #[test]
    fn test_sub_const_eq_const_fold() {
        let r0 = Varnode::reg(0, 4);
        let c3 = Varnode::constant(3, 4);
        let c10 = Varnode::constant(10, 4);
        let v1 = Varnode::unique(0, 4);
        let out = Varnode::unique(8, 1);

        let sub = IrInsn::with_output(IrOp::IntSub, v1, smallvec![r0, c3], 0x1000);
        let eq = IrInsn::with_output(IrOp::IntEqual, out, smallvec![v1, c10], 0x1004);

        let mut ssa = make_single_block_ssa(vec![sub, eq]);
        let changed = ConditionSimplifyPass
            .run(&mut ssa)
            .expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(block.insns[1].op, IrOp::IntEqual);
        assert_eq!(block.insns[1].inputs[0], r0);
        assert_eq!(block.insns[1].inputs[1].offset, 13);
    }

    #[test]
    fn test_negate_lessequal_to_less_swapped() {
        let r0 = Varnode::reg(0, 4);
        let r8 = Varnode::reg(8, 4);
        let v1 = Varnode::unique(0, 1);
        let v2 = Varnode::unique(8, 1);

        let cmp = IrInsn::with_output(IrOp::IntLessequal, v1, smallvec![r0, r8], 0x1000);
        let neg = IrInsn::with_output(IrOp::BoolNegate, v2, smallvec![v1], 0x1004);

        let mut ssa = make_single_block_ssa(vec![cmp, neg]);
        let changed = ConditionSimplifyPass
            .run(&mut ssa)
            .expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(block.insns[1].op, IrOp::IntLess);
        assert_eq!(block.insns[1].inputs[0], r8);
        assert_eq!(block.insns[1].inputs[1], r0);
    }

    #[test]
    fn test_negate_sless_to_slessequal_swapped() {
        let r0 = Varnode::reg(0, 4);
        let r8 = Varnode::reg(8, 4);
        let v1 = Varnode::unique(0, 1);
        let v2 = Varnode::unique(8, 1);

        let cmp = IrInsn::with_output(IrOp::IntSless, v1, smallvec![r0, r8], 0x1000);
        let neg = IrInsn::with_output(IrOp::BoolNegate, v2, smallvec![v1], 0x1004);

        let mut ssa = make_single_block_ssa(vec![cmp, neg]);
        let changed = ConditionSimplifyPass
            .run(&mut ssa)
            .expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(block.insns[1].op, IrOp::IntSlessequal);
        assert_eq!(block.insns[1].inputs[0], r8);
        assert_eq!(block.insns[1].inputs[1], r0);
    }

    #[test]
    fn test_eq_const_const_no_canonicalize() {
        let c1 = Varnode::constant(1, 4);
        let c2 = Varnode::constant(2, 4);
        let out = Varnode::unique(0, 1);

        let eq = IrInsn::with_output(IrOp::IntEqual, out, smallvec![c1, c2], 0x1000);

        let mut ssa = make_single_block_ssa(vec![eq]);
        let _ = ConditionSimplifyPass
            .run(&mut ssa)
            .expect("pass should succeed");

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(block.insns[0].op, IrOp::IntEqual);
    }

    #[test]
    fn test_offset_fold_skips_self_referential_def() {
        // Regression: pre-SSA loop counter `u0 = IntSub u0, c` aliases its own output;
        // rebuilding def_map on every inner iteration would re-fire the offset-fold rule
        // forever, shifting the constant by `c` each round. The is_safe_offset_fold_target
        // guard rejects definitions whose first input equals their output.
        let u0 = Varnode::unique(0, 4);
        let r0 = Varnode::reg(0, 1);
        let c10 = Varnode::constant(10, 4);
        let c100 = Varnode::constant(100, 4);
        let self_sub = IrInsn::with_output(IrOp::IntSub, u0, smallvec![u0, c10], 0x1000);
        let cmp = IrInsn::with_output(IrOp::IntEqual, r0, smallvec![u0, c100], 0x1004);
        let mut ssa = make_single_block_ssa(vec![self_sub, cmp]);

        let _ = ConditionSimplifyPass
            .run(&mut ssa)
            .expect("pass must terminate without invariant violation");

        let block = ssa.function.blocks.values().next().expect("has block");
        let cmp = block
            .insns
            .iter()
            .find(|i| i.op == IrOp::IntEqual)
            .expect("comparison preserved");
        assert_eq!(cmp.inputs[1], c100, "constant must not have shifted");
    }

    #[test]
    fn test_offset_fold_applies_to_normal_def() {
        let u0 = Varnode::unique(0, 4);
        let u1 = Varnode::unique(8, 4);
        let r0 = Varnode::reg(0, 1);
        let c10 = Varnode::constant(10, 4);
        let c100 = Varnode::constant(100, 4);
        let add = IrInsn::with_output(IrOp::IntAdd, u1, smallvec![u0, c10], 0x1000);
        let cmp = IrInsn::with_output(IrOp::IntEqual, r0, smallvec![u1, c100], 0x1004);
        let mut ssa = make_single_block_ssa(vec![add, cmp]);

        let changed = ConditionSimplifyPass
            .run(&mut ssa)
            .expect("pass should succeed");
        assert!(changed, "offset fold must fire on non-self-referential def");

        let block = ssa.function.blocks.values().next().expect("has block");
        let cmp = block
            .insns
            .iter()
            .find(|i| i.op == IrOp::IntEqual)
            .expect("comparison preserved");
        assert_eq!(
            cmp.inputs[0], u0,
            "first operand collapses to original input"
        );
        assert_eq!(
            cmp.inputs[1],
            Varnode::constant(90, 4),
            "constant folded to c2 - c1"
        );
    }

    #[test]
    fn test_negate_sub_eq_zero_folds_to_neq() {
        // BoolNegate(IntEqual((x - y), 0)) should fold to IntNotequal(x, y)
        // via fixed-point: iter1 folds (x-y)==0 → x==y, iter2 folds !x==y → x!=y
        let r0 = Varnode::reg(0, 4);
        let r8 = Varnode::reg(8, 4);
        let zero = Varnode::constant(0, 4);
        let v1 = Varnode::unique(0, 4);
        let v2 = Varnode::unique(8, 1);
        let v3 = Varnode::unique(16, 1);

        let sub = IrInsn::with_output(IrOp::IntSub, v1, smallvec![r0, r8], 0x1000);
        let eq = IrInsn::with_output(IrOp::IntEqual, v2, smallvec![v1, zero], 0x1004);
        let neg = IrInsn::with_output(IrOp::BoolNegate, v3, smallvec![v2], 0x1008);

        let mut ssa = make_single_block_ssa(vec![sub, eq, neg]);
        let changed = ConditionSimplifyPass
            .run(&mut ssa)
            .expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        let final_insn = block
            .insns
            .iter()
            .find(|i| i.output == Some(v3))
            .expect("v3 output");
        assert_eq!(
            final_insn.op,
            IrOp::IntNotequal,
            "BoolNegate(IntEqual((x-y),0)) should fold to IntNotequal(x,y): {:?}",
            final_insn,
        );
        assert_eq!(final_insn.inputs[0], r0);
        assert_eq!(final_insn.inputs[1], r8);
    }

    #[test]
    fn test_bool_and_of_sub_eq_zero_folds() {
        // BoolAnd(IntEqual((x-y),0), IntEqual((a-b),0)) → BoolAnd(x==y, a==b)
        let r0 = Varnode::reg(0, 4);
        let r8 = Varnode::reg(8, 4);
        let r16 = Varnode::reg(16, 4);
        let r24 = Varnode::reg(24, 4);
        let zero = Varnode::constant(0, 4);
        let sub1 = Varnode::unique(0, 4);
        let sub2 = Varnode::unique(8, 4);
        let eq1 = Varnode::unique(16, 1);
        let eq2 = Varnode::unique(24, 1);
        let and_out = Varnode::unique(32, 1);

        let insns = vec![
            IrInsn::with_output(IrOp::IntSub, sub1, smallvec![r0, r8], 0x1000),
            IrInsn::with_output(IrOp::IntEqual, eq1, smallvec![sub1, zero], 0x1004),
            IrInsn::with_output(IrOp::IntSub, sub2, smallvec![r16, r24], 0x1008),
            IrInsn::with_output(IrOp::IntEqual, eq2, smallvec![sub2, zero], 0x100C),
            IrInsn::with_output(IrOp::BoolAnd, and_out, smallvec![eq1, eq2], 0x1010),
        ];

        let mut ssa = make_single_block_ssa(insns);
        let changed = ConditionSimplifyPass
            .run(&mut ssa)
            .expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        let eq1_insn = block.insns.iter().find(|i| i.output == Some(eq1)).unwrap();
        assert_eq!(eq1_insn.op, IrOp::IntEqual);
        assert_eq!(eq1_insn.inputs[0], r0);
        assert_eq!(eq1_insn.inputs[1], r8);

        let eq2_insn = block.insns.iter().find(|i| i.output == Some(eq2)).unwrap();
        assert_eq!(eq2_insn.op, IrOp::IntEqual);
        assert_eq!(eq2_insn.inputs[0], r16);
        assert_eq!(eq2_insn.inputs[1], r24);
    }

    #[test]
    fn test_sub_sless_zero_folds_to_sless_operands() {
        let r0 = Varnode::reg(0, 4);
        let r8 = Varnode::reg(8, 4);
        let zero = Varnode::constant(0, 4);
        let diff = Varnode::unique(0, 4);
        let cond = Varnode::unique(8, 1);

        let sub = IrInsn::with_output(IrOp::IntSub, diff, smallvec![r0, r8], 0x1000);
        let sless = IrInsn::with_output(IrOp::IntSless, cond, smallvec![diff, zero], 0x1004);

        let mut ssa = make_single_block_ssa(vec![sub, sless]);
        let changed = ConditionSimplifyPass
            .run(&mut ssa)
            .expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        let final_insn = block.insns.iter().find(|i| i.output == Some(cond)).unwrap();
        assert_eq!(final_insn.op, IrOp::IntSless);
        assert_eq!(final_insn.inputs[0], r0);
        assert_eq!(final_insn.inputs[1], r8);
    }

    #[test]
    fn test_and_equal_zero_folds_to_bool_negate() {
        let r0 = Varnode::reg(0, 4);
        let mask = Varnode::constant(4, 4);
        let masked = Varnode::unique(0, 4);
        let cond = Varnode::unique(8, 1);
        let zero = Varnode::constant(0, 4);

        let and = IrInsn::with_output(IrOp::IntAnd, masked, smallvec![r0, mask], 0x1000);
        let eq = IrInsn::with_output(IrOp::IntEqual, cond, smallvec![masked, zero], 0x1004);

        let mut ssa = make_single_block_ssa(vec![and, eq]);
        let changed = ConditionSimplifyPass
            .run(&mut ssa)
            .expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        let final_insn = block.insns.iter().find(|i| i.output == Some(cond)).unwrap();
        assert_eq!(final_insn.op, IrOp::BoolNegate);
        assert_eq!(final_insn.inputs[0], masked);
    }

    #[test]
    fn test_and_self_equal_zero_folds_to_bool_negate_input() {
        let r0 = Varnode::reg(0, 8);
        let tested = Varnode::unique(0, 8);
        let cond = Varnode::unique(8, 1);
        let zero = Varnode::constant(0, 8);

        let and = IrInsn::with_output(IrOp::IntAnd, tested, smallvec![r0, r0], 0x1000);
        let eq = IrInsn::with_output(IrOp::IntEqual, cond, smallvec![tested, zero], 0x1004);

        let mut ssa = make_single_block_ssa(vec![and, eq]);
        let changed = ConditionSimplifyPass
            .run(&mut ssa)
            .expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        let final_insn = block.insns.iter().find(|i| i.output == Some(cond)).unwrap();
        assert_eq!(final_insn.op, IrOp::BoolNegate);
        assert_eq!(final_insn.inputs[0], r0);
    }
}
