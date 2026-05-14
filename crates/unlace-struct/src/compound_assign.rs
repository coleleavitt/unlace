//! Post-structuring pass: recover compound assignment operators (`+=`, `-=`, etc.).
//!
//! Detects the pattern `Assign(target, BinOp(op, target, rhs))` where the
//! assignment target is also an operand of the binary operation and transforms
//! it into a [`CompoundAssign`](crate::hir::HirNode::CompoundAssign) HIR node.
//!
//! This covers register-level patterns like:
//! ```text
//! x = x + 1;    →  x += 1;
//! x = x & mask; →  x &= mask;
//! ```
//!
//! The target must be a "pure" expression (no side effects) — registers, stack
//! slots, and unique temporaries qualify. Function call results do not.

use unlace_ir::{IrOp, SpaceId};

use crate::hir::{CompoundAssignOp, HirFunction, HirNode};

/// Walk the HIR and convert eligible `Statement` nodes into `CompoundAssign` nodes.
///
/// Eligibility requires:
/// 1. The instruction has exactly 2 inputs and an output.
/// 2. The output varnode matches one of the inputs (the "target").
/// 3. The opcode maps to a valid compound assignment operator.
/// 4. For non-commutative operators (sub, div, mod, shifts), the target must
///    be the *first* operand.
/// 5. The target must be a "pure" varnode (register, stack, or unique space —
///    not a constant, not RAM which would require a Load).
pub fn compound_assign_recovery(func: &mut HirFunction) {
    func.body = recover_compound(std::mem::take(&mut func.body));
}

fn recover_compound(nodes: Vec<HirNode>) -> Vec<HirNode> {
    nodes.into_iter().map(recover_node).collect()
}

fn recover_node(node: HirNode) -> HirNode {
    match node {
        HirNode::Statement(ref insn) => {
            if let Some(ca_node) = try_as_compound_assign(insn) {
                ca_node
            } else {
                node
            }
        }

        HirNode::Block(children) => HirNode::Block(recover_compound(children)),

        HirNode::If {
            cond,
            then_body,
            else_body,
        } => HirNode::If {
            cond,
            then_body: recover_compound(then_body),
            else_body: else_body.map(recover_compound),
        },

        HirNode::While { cond, body } => HirNode::While {
            cond,
            body: recover_compound(body),
        },

        HirNode::DoWhile { body, cond } => HirNode::DoWhile {
            body: recover_compound(body),
            cond,
        },

        HirNode::For {
            init,
            cond,
            update,
            body,
        } => HirNode::For {
            init,
            cond,
            update,
            body: recover_compound(body),
        },

        HirNode::Switch {
            cond,
            cases,
            default,
        } => HirNode::Switch {
            cond,
            cases: cases
                .into_iter()
                .map(|(c, body, ft)| (c, recover_compound(body), ft))
                .collect(),
            default: default.map(recover_compound),
        },

        HirNode::TryCatch {
            try_body,
            catch_arms,
        } => HirNode::TryCatch {
            try_body: recover_compound(try_body),
            catch_arms: catch_arms
                .into_iter()
                .map(|(ty, body)| (ty, recover_compound(body)))
                .collect(),
        },

        HirNode::TryFinally {
            try_body,
            finally_body,
        } => HirNode::TryFinally {
            try_body: recover_compound(try_body),
            finally_body: recover_compound(finally_body),
        },

        other => other,
    }
}

/// Attempt to convert a single IR instruction into a CompoundAssign node.
///
/// Returns `Some(CompoundAssign { .. })` if the instruction matches the pattern,
/// or `None` if it doesn't qualify.
fn try_as_compound_assign(insn: &unlace_ir::IrInsn) -> Option<HirNode> {
    // Must have exactly 2 inputs and an output.
    if insn.inputs.len() != 2 {
        return None;
    }
    let output = insn.output?;

    // Determine the compound op from the IR opcode.
    let ca_op = CompoundAssignOp::from_ir_op(insn.op)?;

    // Check if output matches the first input.
    let target_is_first = insn.inputs[0] == output;
    // Check if output matches the second input.
    let target_is_second = insn.inputs[1] == output;

    if !target_is_first && !target_is_second {
        return None;
    }

    // For non-commutative ops, the target must be the first operand.
    if target_is_second && !target_is_first && !ca_op.is_commutative() {
        return None;
    }

    // The target must be a "pure" expression — register, stack, or unique space.
    // Constants make no sense as assignment targets, and RAM would need Load semantics.
    if !is_pure_target(output.space) {
        return None;
    }

    // Skip the trivial `x = x + 1` / `x = x - 1` patterns — those are handled
    // by the C printer's `try_emit_increment_form` as `x++` / `x--`.
    if is_increment_or_decrement(insn) {
        return None;
    }

    Some(HirNode::CompoundAssign {
        op: ca_op,
        insn: insn.clone(),
    })
}

/// Whether a varnode space is suitable as a compound assignment target.
///
/// Only registers, stack slots, and unique temporaries qualify. Constants
/// cannot be assigned to, and RAM locations would require explicit Load/Store
/// semantics.
fn is_pure_target(space: SpaceId) -> bool {
    matches!(space, SpaceId::Register | SpaceId::Stack | SpaceId::Unique)
}

/// Detect `x + 1` or `x - 1` patterns that the C printer already handles
/// as `x++` / `x--`.
fn is_increment_or_decrement(insn: &unlace_ir::IrInsn) -> bool {
    if insn.inputs.len() != 2 {
        return false;
    }
    let output = match insn.output {
        Some(o) => o,
        None => return false,
    };

    let (counter_in, const_in) = match (insn.inputs[0].space, insn.inputs[1].space) {
        (SpaceId::Const, _) => (&insn.inputs[1], &insn.inputs[0]),
        (_, SpaceId::Const) => (&insn.inputs[0], &insn.inputs[1]),
        _ => return false,
    };

    if *counter_in != output {
        return false;
    }
    if const_in.offset != 1 {
        return false;
    }

    matches!(insn.op, IrOp::IntAdd | IrOp::IntSub)
}

#[cfg(test)]
mod tests {
    use std::collections::{BTreeMap, BTreeSet};

    use smallvec::smallvec;

    use unlace_ir::ssa::{PrimitiveType, SsaVarnode};
    use unlace_ir::{IrInsn, IrOp, Varnode};

    use super::*;
    use crate::hir::{CompoundAssignOp, HirFunction, HirNode};

    fn sv(offset: u64, size: u8, version: u32) -> SsaVarnode {
        SsaVarnode {
            base: Varnode::reg(offset, size),
            version,
        }
    }

    fn make_func(body: Vec<HirNode>) -> HirFunction {
        HirFunction {
            name: "test".to_string(),
            params: vec![],
            return_type: PrimitiveType::Int(4),
            body,
            addr: 0x1000,
            foldable_exprs: BTreeSet::new(),
            panic_sites: BTreeMap::new(),
            go_defer_sites: Vec::new(),
            rust_async: None,
            noreturn: false,
            composite_var_types: BTreeMap::new(),
            cpp_vtable_calls: BTreeMap::new(),
        }
    }

    #[test]
    fn test_add_assign() {
        let r0 = Varnode::reg(0, 4);
        let c5 = Varnode::constant(5, 4);
        let insn = IrInsn::with_output(IrOp::IntAdd, r0, smallvec![r0, c5], 0x1000);
        let body = vec![HirNode::Statement(insn.clone())];

        let mut func = make_func(body);
        compound_assign_recovery(&mut func);

        assert_eq!(func.body.len(), 1);
        match &func.body[0] {
            HirNode::CompoundAssign { op, insn: i } => {
                assert_eq!(*op, CompoundAssignOp::Add);
                assert_eq!(i.op, IrOp::IntAdd);
                assert_eq!(i.output, Some(r0));
            }
            other => panic!("expected CompoundAssign, got {other:?}"),
        }
    }

    #[test]
    fn test_sub_assign() {
        let r0 = Varnode::reg(0, 4);
        let c3 = Varnode::constant(3, 4);
        let insn = IrInsn::with_output(IrOp::IntSub, r0, smallvec![r0, c3], 0x1000);
        let body = vec![HirNode::Statement(insn)];

        let mut func = make_func(body);
        compound_assign_recovery(&mut func);

        assert_eq!(func.body.len(), 1);
        match &func.body[0] {
            HirNode::CompoundAssign { op, .. } => {
                assert_eq!(*op, CompoundAssignOp::Sub);
            }
            other => panic!("expected CompoundAssign, got {other:?}"),
        }
    }

    #[test]
    fn test_and_assign_commutative() {
        // r0 = mask & r0 → r0 &= mask (commutative, target is second)
        let r0 = Varnode::reg(0, 4);
        let mask = Varnode::constant(0xFF, 4);
        let insn = IrInsn::with_output(IrOp::IntAnd, r0, smallvec![mask, r0], 0x1000);
        let body = vec![HirNode::Statement(insn)];

        let mut func = make_func(body);
        compound_assign_recovery(&mut func);

        assert_eq!(func.body.len(), 1);
        match &func.body[0] {
            HirNode::CompoundAssign { op, .. } => {
                assert_eq!(*op, CompoundAssignOp::And);
            }
            other => panic!("expected CompoundAssign, got {other:?}"),
        }
    }

    #[test]
    fn test_sub_not_commutative_target_second() {
        // r0 = c3 - r0 → NOT valid as r0 -= c3 (sub is non-commutative)
        let r0 = Varnode::reg(0, 4);
        let c3 = Varnode::constant(3, 4);
        let insn = IrInsn::with_output(IrOp::IntSub, r0, smallvec![c3, r0], 0x1000);
        let body = vec![HirNode::Statement(insn)];

        let mut func = make_func(body);
        compound_assign_recovery(&mut func);

        assert_eq!(func.body.len(), 1);
        assert!(
            matches!(&func.body[0], HirNode::Statement(_)),
            "non-commutative op with target in second position should remain as Statement"
        );
    }

    #[test]
    fn test_increment_not_converted() {
        // r0 = r0 + 1 → stays as Statement (handled by ++/-- in printer)
        let r0 = Varnode::reg(0, 4);
        let c1 = Varnode::constant(1, 4);
        let insn = IrInsn::with_output(IrOp::IntAdd, r0, smallvec![r0, c1], 0x1000);
        let body = vec![HirNode::Statement(insn)];

        let mut func = make_func(body);
        compound_assign_recovery(&mut func);

        assert_eq!(func.body.len(), 1);
        assert!(
            matches!(&func.body[0], HirNode::Statement(_)),
            "x + 1 should remain as Statement for ++ handling"
        );
    }

    #[test]
    fn test_decrement_not_converted() {
        // r0 = r0 - 1 → stays as Statement (handled by -- in printer)
        let r0 = Varnode::reg(0, 4);
        let c1 = Varnode::constant(1, 4);
        let insn = IrInsn::with_output(IrOp::IntSub, r0, smallvec![r0, c1], 0x1000);
        let body = vec![HirNode::Statement(insn)];

        let mut func = make_func(body);
        compound_assign_recovery(&mut func);

        assert_eq!(func.body.len(), 1);
        assert!(
            matches!(&func.body[0], HirNode::Statement(_)),
            "x - 1 should remain as Statement for -- handling"
        );
    }

    #[test]
    fn test_no_output() {
        // STORE has no output → should not be converted
        let addr = Varnode::reg(8, 8);
        let val = Varnode::reg(0, 4);
        let space = Varnode::constant(0, 8);
        let insn = IrInsn::without_output(IrOp::Store, smallvec![space, addr, val], 0x1000);
        let body = vec![HirNode::Statement(insn)];

        let mut func = make_func(body);
        compound_assign_recovery(&mut func);

        assert_eq!(func.body.len(), 1);
        assert!(matches!(&func.body[0], HirNode::Statement(_)));
    }

    #[test]
    fn test_output_not_matching_inputs() {
        // r0 = r8 + c5 → no compound assign (output doesn't match either input)
        let r0 = Varnode::reg(0, 4);
        let r8 = Varnode::reg(8, 4);
        let c5 = Varnode::constant(5, 4);
        let insn = IrInsn::with_output(IrOp::IntAdd, r0, smallvec![r8, c5], 0x1000);
        let body = vec![HirNode::Statement(insn)];

        let mut func = make_func(body);
        compound_assign_recovery(&mut func);

        assert_eq!(func.body.len(), 1);
        assert!(matches!(&func.body[0], HirNode::Statement(_)));
    }

    #[test]
    fn test_all_shift_ops() {
        let r0 = Varnode::reg(0, 4);
        let c2 = Varnode::constant(2, 4);

        for (op, expected) in [
            (IrOp::IntLeft, CompoundAssignOp::Shl),
            (IrOp::IntRight, CompoundAssignOp::Shr),
            (IrOp::IntSright, CompoundAssignOp::Sar),
        ] {
            let insn = IrInsn::with_output(op, r0, smallvec![r0, c2], 0x1000);
            let body = vec![HirNode::Statement(insn)];
            let mut func = make_func(body);
            compound_assign_recovery(&mut func);

            match &func.body[0] {
                HirNode::CompoundAssign { op: ca_op, .. } => {
                    assert_eq!(*ca_op, expected, "failed for {:?}", op);
                }
                other => panic!("expected CompoundAssign for {:?}, got {other:?}", op),
            }
        }
    }

    #[test]
    fn test_or_assign() {
        let r0 = Varnode::reg(0, 4);
        let flag = Varnode::constant(0x80, 4);
        let insn = IrInsn::with_output(IrOp::IntOr, r0, smallvec![r0, flag], 0x1000);
        let body = vec![HirNode::Statement(insn)];

        let mut func = make_func(body);
        compound_assign_recovery(&mut func);

        match &func.body[0] {
            HirNode::CompoundAssign { op, .. } => {
                assert_eq!(*op, CompoundAssignOp::Or);
            }
            other => panic!("expected CompoundAssign, got {other:?}"),
        }
    }

    #[test]
    fn test_xor_assign() {
        let r0 = Varnode::reg(0, 4);
        let mask = Varnode::constant(0xDEAD, 4);
        let insn = IrInsn::with_output(IrOp::IntXor, r0, smallvec![r0, mask], 0x1000);
        let body = vec![HirNode::Statement(insn)];

        let mut func = make_func(body);
        compound_assign_recovery(&mut func);

        match &func.body[0] {
            HirNode::CompoundAssign { op, .. } => {
                assert_eq!(*op, CompoundAssignOp::Xor);
            }
            other => panic!("expected CompoundAssign, got {other:?}"),
        }
    }

    #[test]
    fn test_nested_in_while() {
        let r0 = Varnode::reg(0, 4);
        let c5 = Varnode::constant(5, 4);
        let cond = sv(256, 1, 0);
        let insn = IrInsn::with_output(IrOp::IntAdd, r0, smallvec![r0, c5], 0x1000);

        let body = vec![HirNode::While {
            cond,
            body: vec![HirNode::Statement(insn)],
        }];

        let mut func = make_func(body);
        compound_assign_recovery(&mut func);

        match &func.body[0] {
            HirNode::While { body, .. } => {
                assert_eq!(body.len(), 1);
                assert!(
                    matches!(&body[0], HirNode::CompoundAssign { .. }),
                    "nested Statement in While should be converted, got {:?}",
                    body[0]
                );
            }
            other => panic!("expected While, got {other:?}"),
        }
    }

    #[test]
    fn test_nested_in_if() {
        let r0 = Varnode::reg(0, 4);
        let c5 = Varnode::constant(5, 4);
        let cond = sv(256, 1, 0);
        let insn = IrInsn::with_output(IrOp::IntMult, r0, smallvec![r0, c5], 0x1000);

        let body = vec![HirNode::If {
            cond,
            then_body: vec![HirNode::Statement(insn)],
            else_body: None,
        }];

        let mut func = make_func(body);
        compound_assign_recovery(&mut func);

        match &func.body[0] {
            HirNode::If { then_body, .. } => {
                assert_eq!(then_body.len(), 1);
                match &then_body[0] {
                    HirNode::CompoundAssign { op, .. } => {
                        assert_eq!(*op, CompoundAssignOp::Mul);
                    }
                    other => panic!("expected CompoundAssign, got {other:?}"),
                }
            }
            other => panic!("expected If, got {other:?}"),
        }
    }

    #[test]
    fn test_div_and_rem() {
        let r0 = Varnode::reg(0, 4);
        let c3 = Varnode::constant(3, 4);

        for (op, expected) in [
            (IrOp::IntDiv, CompoundAssignOp::Div),
            (IrOp::IntSdiv, CompoundAssignOp::SDiv),
            (IrOp::IntRem, CompoundAssignOp::Rem),
            (IrOp::IntSrem, CompoundAssignOp::SRem),
        ] {
            let insn = IrInsn::with_output(op, r0, smallvec![r0, c3], 0x1000);
            let body = vec![HirNode::Statement(insn)];
            let mut func = make_func(body);
            compound_assign_recovery(&mut func);

            match &func.body[0] {
                HirNode::CompoundAssign { op: ca_op, .. } => {
                    assert_eq!(*ca_op, expected, "failed for {:?}", op);
                }
                other => panic!("expected CompoundAssign for {:?}, got {other:?}", op),
            }
        }
    }

    #[test]
    fn test_add_with_constant_2_not_increment() {
        // r0 = r0 + 2 → compound assign (not increment, which is only +1)
        let r0 = Varnode::reg(0, 4);
        let c2 = Varnode::constant(2, 4);
        let insn = IrInsn::with_output(IrOp::IntAdd, r0, smallvec![r0, c2], 0x1000);
        let body = vec![HirNode::Statement(insn)];

        let mut func = make_func(body);
        compound_assign_recovery(&mut func);

        match &func.body[0] {
            HirNode::CompoundAssign { op, .. } => {
                assert_eq!(*op, CompoundAssignOp::Add);
            }
            other => panic!("expected CompoundAssign for +=2, got {other:?}"),
        }
    }

    #[test]
    fn test_stack_var_target() {
        // Stack variables should also qualify
        let s0 = Varnode::stack(0, 4);
        let c5 = Varnode::constant(5, 4);
        let insn = IrInsn::with_output(IrOp::IntAdd, s0, smallvec![s0, c5], 0x1000);
        let body = vec![HirNode::Statement(insn)];

        let mut func = make_func(body);
        compound_assign_recovery(&mut func);

        assert_eq!(func.body.len(), 1);
        match &func.body[0] {
            HirNode::CompoundAssign { op, .. } => {
                assert_eq!(*op, CompoundAssignOp::Add);
            }
            other => panic!("expected CompoundAssign for stack target, got {other:?}"),
        }
    }

    #[test]
    fn test_unique_temp_target() {
        // Unique-space temps should qualify (e.g. lifter scratch slots that
        // survive into HIR).
        let u0 = Varnode::unique(0, 4);
        let c7 = Varnode::constant(7, 4);
        let insn = IrInsn::with_output(IrOp::IntXor, u0, smallvec![u0, c7], 0x1000);
        let body = vec![HirNode::Statement(insn)];

        let mut func = make_func(body);
        compound_assign_recovery(&mut func);

        assert_eq!(func.body.len(), 1);
        match &func.body[0] {
            HirNode::CompoundAssign { op, .. } => {
                assert_eq!(*op, CompoundAssignOp::Xor);
            }
            other => panic!("expected CompoundAssign for unique target, got {other:?}"),
        }
    }

    #[test]
    fn test_constant_target_rejected() {
        // A const-space output makes no sense as an assignment target. The
        // pass should leave such (malformed) instructions as Statement.
        let r0 = Varnode::reg(0, 4);
        let c1 = Varnode::constant(1, 4);
        // Synthetic: pretend the lifter emitted an output with Const space
        // (this won't normally happen but we want defensive behaviour).
        let bad_out = c1;
        let insn = IrInsn::with_output(IrOp::IntAdd, bad_out, smallvec![bad_out, r0], 0x1000);
        let body = vec![HirNode::Statement(insn)];

        let mut func = make_func(body);
        compound_assign_recovery(&mut func);

        assert_eq!(func.body.len(), 1);
        assert!(
            matches!(&func.body[0], HirNode::Statement(_)),
            "constant target should not be converted, got {:?}",
            func.body[0]
        );
    }

    #[test]
    fn test_nested_in_for_loop_body() {
        // `For { init, cond, update, body }` — pass should descend into `body`.
        let r0 = Varnode::reg(0, 4);
        let c5 = Varnode::constant(5, 4);
        let cond = sv(256, 1, 0);
        let i_reg = Varnode::reg(8, 4);
        let one = Varnode::constant(1, 4);
        let insn = IrInsn::with_output(IrOp::IntOr, r0, smallvec![r0, c5], 0x1000);
        // Synthetic init/update — the pass shouldn't touch them, but the
        // variant requires concrete IrInsns.
        let init = IrInsn::with_output(IrOp::Copy, i_reg, smallvec![one], 0x1000);
        let update = IrInsn::with_output(IrOp::IntAdd, i_reg, smallvec![i_reg, one], 0x1000);

        let body = vec![HirNode::For {
            init: Some(init),
            cond,
            update,
            body: vec![HirNode::Statement(insn)],
        }];

        let mut func = make_func(body);
        compound_assign_recovery(&mut func);

        match &func.body[0] {
            HirNode::For { body, .. } => {
                assert_eq!(body.len(), 1);
                match &body[0] {
                    HirNode::CompoundAssign { op, .. } => {
                        assert_eq!(*op, CompoundAssignOp::Or);
                    }
                    other => panic!(
                        "expected CompoundAssign in for-body, got {other:?}"
                    ),
                }
            }
            other => panic!("expected For, got {other:?}"),
        }
    }

    #[test]
    fn test_nested_in_block() {
        // `Block(Vec<HirNode>)` — pass should descend into block children.
        let r0 = Varnode::reg(0, 4);
        let c8 = Varnode::constant(8, 4);
        let insn = IrInsn::with_output(IrOp::IntLeft, r0, smallvec![r0, c8], 0x1000);

        let body = vec![HirNode::Block(vec![HirNode::Statement(insn)])];

        let mut func = make_func(body);
        compound_assign_recovery(&mut func);

        match &func.body[0] {
            HirNode::Block(children) => {
                assert_eq!(children.len(), 1);
                match &children[0] {
                    HirNode::CompoundAssign { op, .. } => {
                        assert_eq!(*op, CompoundAssignOp::Shl);
                    }
                    other => panic!(
                        "expected CompoundAssign in block, got {other:?}"
                    ),
                }
            }
            other => panic!("expected Block, got {other:?}"),
        }
    }

    #[test]
    fn test_subtract_two_is_compound_not_decrement() {
        // `x = x - 2` → `x -= 2` (not `x--`, which is reserved for ±1).
        let r0 = Varnode::reg(0, 4);
        let c2 = Varnode::constant(2, 4);
        let insn = IrInsn::with_output(IrOp::IntSub, r0, smallvec![r0, c2], 0x1000);
        let body = vec![HirNode::Statement(insn)];

        let mut func = make_func(body);
        compound_assign_recovery(&mut func);

        match &func.body[0] {
            HirNode::CompoundAssign { op, .. } => {
                assert_eq!(*op, CompoundAssignOp::Sub);
            }
            other => panic!("expected CompoundAssign for -=2, got {other:?}"),
        }
    }

    #[test]
    fn test_else_branch_recurses() {
        // The if/else recursion should reach the else_body too.
        let r0 = Varnode::reg(0, 4);
        let c3 = Varnode::constant(3, 4);
        let cond = sv(256, 1, 0);
        let insn = IrInsn::with_output(IrOp::IntAnd, r0, smallvec![r0, c3], 0x1000);

        let body = vec![HirNode::If {
            cond,
            then_body: vec![],
            else_body: Some(vec![HirNode::Statement(insn)]),
        }];

        let mut func = make_func(body);
        compound_assign_recovery(&mut func);

        match &func.body[0] {
            HirNode::If { else_body, .. } => {
                let else_body = else_body.as_ref().expect("else body present");
                match &else_body[0] {
                    HirNode::CompoundAssign { op, .. } => {
                        assert_eq!(*op, CompoundAssignOp::And);
                    }
                    other => panic!("expected CompoundAssign in else, got {other:?}"),
                }
            }
            other => panic!("expected If, got {other:?}"),
        }
    }

    #[test]
    fn test_dowhile_body_recurses() {
        // DoWhile body should also be recursively visited.
        let r0 = Varnode::reg(0, 4);
        let c4 = Varnode::constant(4, 4);
        let cond = sv(256, 1, 0);
        let insn = IrInsn::with_output(IrOp::IntSright, r0, smallvec![r0, c4], 0x1000);

        let body = vec![HirNode::DoWhile {
            body: vec![HirNode::Statement(insn)],
            cond,
        }];

        let mut func = make_func(body);
        compound_assign_recovery(&mut func);

        match &func.body[0] {
            HirNode::DoWhile { body, .. } => {
                match &body[0] {
                    HirNode::CompoundAssign { op, .. } => {
                        assert_eq!(*op, CompoundAssignOp::Sar);
                    }
                    other => panic!("expected CompoundAssign in do-while, got {other:?}"),
                }
            }
            other => panic!("expected DoWhile, got {other:?}"),
        }
    }
}
