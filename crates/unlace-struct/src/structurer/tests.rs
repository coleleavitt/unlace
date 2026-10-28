use smallvec::smallvec;
use std::time::{Duration, Instant};

use unlace_ir::ssa::build_ssa;
use unlace_ir::{BasicBlock, BlockId, Function, IrInsn, IrOp, Varnode};

use super::*;
use crate::hir::HirNode;

fn ctrl_insn(op: IrOp, addr: u64) -> IrInsn {
    IrInsn::without_output(op, smallvec![], addr)
}

fn arith_insn(output: Varnode, inputs: &[Varnode], addr: u64) -> IrInsn {
    IrInsn::with_output(IrOp::IntAdd, output, smallvec![inputs[0], inputs[1]], addr)
}

fn cbranch_insn(cond: Varnode, addr: u64) -> IrInsn {
    IrInsn::without_output(
        IrOp::Cbranch,
        smallvec![Varnode::constant(0, 8), cond],
        addr,
    )
}

#[test]
fn test_structure_linear() {
    let r0 = Varnode::reg(0, 8);
    let r8 = Varnode::reg(8, 8);
    let c1 = Varnode::constant(1, 8);

    let mut func = Function::new("linear", BlockId(0), 0x1000);

    let mut bb0 = BasicBlock::new(BlockId(0));
    bb0.insns.push(arith_insn(r0, &[r8, c1], 0x1000));

    let mut bb1 = BasicBlock::new(BlockId(1));
    bb1.insns.push(arith_insn(r0, &[r0, c1], 0x1010));
    bb1.insns.push(ctrl_insn(IrOp::Return, 0x1018));

    func.insert_block(bb0);
    func.insert_block(bb1);

    let ssa = build_ssa(func);
    let hir = structure(&ssa).expect("structuring should succeed");

    assert_eq!(hir.name, "linear");
    // Body should contain statements (from BB0 + BB1) and a Return.
    let has_statement = hir.body.iter().any(|n| matches!(n, HirNode::Statement(_)));
    let has_return = hir.body.iter().any(|n| matches!(n, HirNode::Return(_)));
    assert!(has_statement, "linear function should have statements");
    assert!(has_return, "linear function should have a return");
    // No If, While, Goto nodes.
    let has_control = hir.body.iter().any(|n| {
        matches!(
            n,
            HirNode::If { .. } | HirNode::While { .. } | HirNode::Goto(_)
        )
    });
    assert!(
        !has_control,
        "linear function should have no control flow nodes"
    );
}

#[test]
fn test_structure_until_past_deadline_times_out() {
    let mut func = Function::new("deadline_timeout", BlockId(0), 0x1800);
    let mut bb0 = BasicBlock::new(BlockId(0));
    bb0.insns.push(ctrl_insn(IrOp::Return, 0x1800));
    func.insert_block(bb0);

    let ssa = build_ssa(func);
    let err = structure_until(&ssa, Instant::now() - Duration::from_millis(1))
        .expect_err("past deadline should fail");
    assert!(
        matches!(err, StructureError::Timeout { .. }),
        "unexpected error: {err}"
    );
}

#[test]
fn test_unstructured_fallback_budget_predicate() {
    assert!(should_emit_full_unstructured_fallback(10, 20, 10, 20));
    assert!(!should_emit_full_unstructured_fallback(11, 20, 10, 20));
    assert!(!should_emit_full_unstructured_fallback(10, 21, 10, 20));
    assert!(should_emit_full_unstructured_fallback(1000, 1000, 0, 0));
    assert!(should_emit_full_unstructured_fallback(1000, 20, 0, 20));
}

#[test]
fn test_unstructured_fallback_emits_label_and_comment() {
    let mut func = Function::new("fallback", BlockId(0), 0x1900);
    let r0 = Varnode::reg(0, 4);
    let mut bb0 = BasicBlock::new(BlockId(0));
    bb0.insns.push(IrInsn::with_output(
        IrOp::Copy,
        r0,
        smallvec![Varnode::constant(1, 4)],
        0x1900,
    ));
    bb0.insns.push(ctrl_insn(IrOp::Return, 0x1904));
    func.insert_block(bb0);

    let ssa = build_ssa(func);
    let hir = structure_unstructured_fallback(&ssa, "test reason");
    assert!(matches!(
        hir.body.first(),
        Some(HirNode::Commented { pre, .. })
            if pre.iter().any(|line| line.contains("unstructured fallback"))
                && pre.iter().any(|line| line == "test reason")
    ));
    assert!(
        hir.body
            .iter()
            .any(|node| matches!(node, HirNode::Label(_)))
    );
    assert!(
        hir.body
            .iter()
            .any(|node| matches!(node, HirNode::Return(_)))
    );
}

#[test]
fn test_structure_if_else() {
    let r0 = Varnode::reg(0, 8);
    let r8 = Varnode::reg(8, 8);
    let c1 = Varnode::constant(1, 8);
    let c2 = Varnode::constant(2, 8);
    let cond_vn = Varnode::reg(256, 1); // ZF flag

    let mut func = Function::new("if_else", BlockId(0), 0x2000);

    let mut bb0 = BasicBlock::new(BlockId(0));
    bb0.insns.push(arith_insn(r0, &[r8, c1], 0x2000));
    bb0.insns.push(cbranch_insn(cond_vn, 0x2004));
    bb0.successors = smallvec![BlockId(1), BlockId(2)];

    let mut bb1 = BasicBlock::new(BlockId(1));
    bb1.insns.push(arith_insn(r0, &[r8, c1], 0x2010));
    bb1.insns.push(ctrl_insn(IrOp::Branch, 0x2018));
    bb1.successors = smallvec![BlockId(3)];

    let mut bb2 = BasicBlock::new(BlockId(2));
    bb2.insns.push(arith_insn(r0, &[r8, c2], 0x2020));
    bb2.insns.push(ctrl_insn(IrOp::Branch, 0x2028));
    bb2.successors = smallvec![BlockId(3)];

    let mut bb3 = BasicBlock::new(BlockId(3));
    bb3.insns.push(ctrl_insn(IrOp::Return, 0x2030));

    func.insert_block(bb0);
    func.insert_block(bb1);
    func.insert_block(bb2);
    func.insert_block(bb3);

    let ssa = build_ssa(func);
    let hir = structure(&ssa).expect("structuring should succeed");

    assert_eq!(hir.name, "if_else");

    // Should contain an If node somewhere in the body.
    fn contains_if(nodes: &[HirNode]) -> bool {
        nodes.iter().any(|n| match n {
            HirNode::If { .. } => true,
            HirNode::Block(inner) => contains_if(inner),
            _ => false,
        })
    }
    assert!(
        contains_if(&hir.body),
        "diamond CFG should produce an If node"
    );
}

#[test]
fn test_structure_while() {
    let r0 = Varnode::reg(0, 8);
    let r8 = Varnode::reg(8, 8);
    let c1 = Varnode::constant(1, 8);
    let cond_vn = Varnode::reg(256, 1);

    let mut func = Function::new("while_loop", BlockId(0), 0x3000);

    // BB0: header with CBRANCH (exit test at top)
    let mut bb0 = BasicBlock::new(BlockId(0));
    bb0.insns.push(arith_insn(r0, &[r8, c1], 0x3000));
    bb0.insns.push(cbranch_insn(cond_vn, 0x3004));
    bb0.successors = smallvec![BlockId(1), BlockId(2)];

    // BB1: loop body, back-edge to BB0
    let mut bb1 = BasicBlock::new(BlockId(1));
    bb1.insns.push(arith_insn(r0, &[r0, c1], 0x3010));
    bb1.insns.push(ctrl_insn(IrOp::Branch, 0x3014));
    bb1.successors = smallvec![BlockId(0)];

    // BB2: exit
    let mut bb2 = BasicBlock::new(BlockId(2));
    bb2.insns.push(ctrl_insn(IrOp::Return, 0x3020));

    func.insert_block(bb0);
    func.insert_block(bb1);
    func.insert_block(bb2);

    let ssa = build_ssa(func);
    assert!(
        dominates(&ssa.dom_tree, BlockId(0), BlockId(2)),
        "natural loop exits are still dominated by the loop header"
    );
    let hir = structure(&ssa).expect("structuring should succeed");

    fn contains_while(nodes: &[HirNode]) -> bool {
        nodes.iter().any(|n| match n {
            HirNode::While { .. } => true,
            HirNode::Block(inner) => contains_while(inner),
            _ => false,
        })
    }
    assert!(
        contains_while(&hir.body),
        "loop CFG should produce a While node"
    );
    assert!(
        matches!(hir.body.last(), Some(HirNode::Return(_))),
        "loop exit block must remain after the while: {:#?}",
        hir.body
    );
}

#[test]
fn test_structure_irreducible_goto() {
    // Build an irreducible CFG: BB0 -> BB1, BB0 -> BB2, BB1 -> BB2, BB2 -> BB1
    // (BB1 and BB2 form a cycle where neither dominates the other)
    let r0 = Varnode::reg(0, 8);
    let r8 = Varnode::reg(8, 8);
    let c1 = Varnode::constant(1, 8);
    let cond_vn = Varnode::reg(256, 1);

    let mut func = Function::new("irreducible", BlockId(0), 0x4000);

    let mut bb0 = BasicBlock::new(BlockId(0));
    bb0.insns.push(cbranch_insn(cond_vn, 0x4000));
    bb0.successors = smallvec![BlockId(1), BlockId(2)];

    let mut bb1 = BasicBlock::new(BlockId(1));
    bb1.insns.push(arith_insn(r0, &[r8, c1], 0x4010));
    bb1.insns.push(ctrl_insn(IrOp::Branch, 0x4014));
    bb1.successors = smallvec![BlockId(2)];

    let mut bb2 = BasicBlock::new(BlockId(2));
    bb2.insns.push(arith_insn(r0, &[r0, c1], 0x4020));
    bb2.insns.push(cbranch_insn(cond_vn, 0x4024));
    bb2.successors = smallvec![BlockId(1), BlockId(3)];

    let mut bb3 = BasicBlock::new(BlockId(3));
    bb3.insns.push(ctrl_insn(IrOp::Return, 0x4030));

    func.insert_block(bb0);
    func.insert_block(bb1);
    func.insert_block(bb2);
    func.insert_block(bb3);

    let ssa = build_ssa(func);

    // Must not panic!
    let hir = structure(&ssa).expect("irreducible CFG should not panic");
    assert_eq!(hir.name, "irreducible");

    // The function body should not be empty.
    assert!(
        !hir.body.is_empty(),
        "irreducible CFG should produce some HIR nodes"
    );
}

#[test]
fn test_structure_switch_simple() {
    let r0 = Varnode::reg(0, 8);
    let r8 = Varnode::reg(8, 8);
    let c1 = Varnode::constant(1, 8);

    let mut func = Function::new("switch_simple", BlockId(0), 0x5000);

    // BB0: BRANCHIND → BB1, BB2, BB3
    let mut bb0 = BasicBlock::new(BlockId(0));
    bb0.insns.push(arith_insn(r0, &[r8, c1], 0x5000));
    bb0.insns.push(ctrl_insn(IrOp::Branchind, 0x5004));
    bb0.successors = smallvec![BlockId(1), BlockId(2), BlockId(3)];

    let mut bb1 = BasicBlock::new(BlockId(1));
    bb1.insns.push(arith_insn(r0, &[r8, c1], 0x5010));
    bb1.insns.push(ctrl_insn(IrOp::Return, 0x5014));

    let mut bb2 = BasicBlock::new(BlockId(2));
    bb2.insns.push(arith_insn(r0, &[r0, c1], 0x5020));
    bb2.insns.push(ctrl_insn(IrOp::Return, 0x5024));

    let mut bb3 = BasicBlock::new(BlockId(3));
    bb3.insns.push(ctrl_insn(IrOp::Return, 0x5030));

    func.insert_block(bb0);
    func.insert_block(bb1);
    func.insert_block(bb2);
    func.insert_block(bb3);

    let ssa = build_ssa(func);
    let hir = structure(&ssa).expect("structuring should succeed");

    assert_eq!(hir.name, "switch_simple");

    fn contains_switch(nodes: &[HirNode]) -> bool {
        nodes.iter().any(|n| match n {
            HirNode::Switch { .. } => true,
            HirNode::Block(inner) => contains_switch(inner),
            _ => false,
        })
    }
    assert!(
        contains_switch(&hir.body),
        "BRANCHIND with 3 targets should produce a Switch node"
    );
}

/// Table slots that share a block become stacked labels over one body,
/// each labelled with its own slot index.
#[test]
fn test_structure_switch_stacks_shared_table_slots() {
    let r0 = Varnode::reg(0, 8);
    let r8 = Varnode::reg(8, 8);
    let c1 = Varnode::constant(1, 8);

    let mut func = Function::new("switch_shared", BlockId(0), 0x7000);
    let mut bb0 = BasicBlock::new(BlockId(0));
    bb0.insns.push(ctrl_insn(IrOp::Branchind, 0x7004));
    bb0.successors = smallvec![BlockId(1), BlockId(2)];
    let mut bb1 = BasicBlock::new(BlockId(1));
    bb1.insns.push(arith_insn(r0, &[r8, c1], 0x7010));
    bb1.insns.push(ctrl_insn(IrOp::Return, 0x7014));
    let mut bb2 = BasicBlock::new(BlockId(2));
    bb2.insns.push(arith_insn(r0, &[r0, c1], 0x7020));
    bb2.insns.push(ctrl_insn(IrOp::Return, 0x7024));
    func.insert_block(bb0);
    func.insert_block(bb1);
    func.insert_block(bb2);

    let mut ssa = build_ssa(func);
    ssa.resolved_jump_tables.insert(
        0x7004,
        unlace_ir::ssa::JumpTableInfo {
            base: 0x9000,
            entry_size: 8,
            num_entries: 3,
            bound: Some(3),
            endian_little: true,
            targets: vec![0x7010, 0x7020, 0x7010],
            target_blocks: vec![BlockId(1), BlockId(2), BlockId(1)],
        },
    );
    let hir = structure(&ssa).expect("structuring should succeed");

    fn find_switch(nodes: &[HirNode]) -> Option<&HirNode> {
        nodes.iter().find_map(|n| match n {
            HirNode::Switch { .. } => Some(n),
            HirNode::Block(inner) => find_switch(inner),
            _ => None,
        })
    }
    let Some(HirNode::Switch { cases, .. }) = find_switch(&hir.body) else {
        panic!("expected a switch: {:#?}", hir.body);
    };
    let labels: Vec<(SwitchCase, bool, bool)> = cases
        .iter()
        .map(|(case, body, fall_through)| (case.clone(), body.is_empty(), *fall_through))
        .collect();
    assert_eq!(
        labels,
        vec![
            (SwitchCase::Value(0), true, true),
            (SwitchCase::Value(2), false, false),
            (SwitchCase::Value(1), false, false),
        ]
    );
}

#[test]
fn test_structure_switch_with_join() {
    let r0 = Varnode::reg(0, 8);
    let r8 = Varnode::reg(8, 8);
    let c1 = Varnode::constant(1, 8);
    let c2 = Varnode::constant(2, 8);

    let mut func = Function::new("switch_join", BlockId(0), 0x6000);

    // BB0: BRANCHIND → BB1, BB2, BB3; all cases merge at BB4
    let mut bb0 = BasicBlock::new(BlockId(0));
    bb0.insns.push(ctrl_insn(IrOp::Branchind, 0x6000));
    bb0.successors = smallvec![BlockId(1), BlockId(2), BlockId(3)];

    let mut bb1 = BasicBlock::new(BlockId(1));
    bb1.insns.push(arith_insn(r0, &[r8, c1], 0x6010));
    bb1.insns.push(ctrl_insn(IrOp::Branch, 0x6014));
    bb1.successors = smallvec![BlockId(4)];

    let mut bb2 = BasicBlock::new(BlockId(2));
    bb2.insns.push(arith_insn(r0, &[r8, c2], 0x6020));
    bb2.insns.push(ctrl_insn(IrOp::Branch, 0x6024));
    bb2.successors = smallvec![BlockId(4)];

    let mut bb3 = BasicBlock::new(BlockId(3));
    bb3.insns.push(arith_insn(r0, &[r0, c1], 0x6030));
    bb3.insns.push(ctrl_insn(IrOp::Branch, 0x6034));
    bb3.successors = smallvec![BlockId(4)];

    let mut bb4 = BasicBlock::new(BlockId(4));
    bb4.insns.push(ctrl_insn(IrOp::Return, 0x6040));

    func.insert_block(bb0);
    func.insert_block(bb1);
    func.insert_block(bb2);
    func.insert_block(bb3);
    func.insert_block(bb4);

    let ssa = build_ssa(func);
    let hir = structure(&ssa).expect("structuring should succeed");

    fn contains_switch(nodes: &[HirNode]) -> bool {
        nodes.iter().any(|n| match n {
            HirNode::Switch { .. } => true,
            HirNode::Block(inner) => contains_switch(inner),
            _ => false,
        })
    }
    assert!(
        contains_switch(&hir.body),
        "switch with join point should produce Switch node"
    );

    let has_return = hir.body.iter().any(|n| matches!(n, HirNode::Return(_)));
    assert!(
        has_return,
        "code after the switch join should be structured"
    );
}

#[test]
fn test_non_switch_branchind_unchanged() {
    let mut func = Function::new("single_indirect", BlockId(0), 0x7000);

    // BRANCHIND with only 1 known successor — not a switch
    let mut bb0 = BasicBlock::new(BlockId(0));
    bb0.insns.push(ctrl_insn(IrOp::Branchind, 0x7000));
    bb0.successors = smallvec![BlockId(1)];

    let mut bb1 = BasicBlock::new(BlockId(1));
    bb1.insns.push(ctrl_insn(IrOp::Return, 0x7010));

    func.insert_block(bb0);
    func.insert_block(bb1);

    let ssa = build_ssa(func);
    let hir = structure(&ssa).expect("structuring should succeed");

    fn contains_switch(nodes: &[HirNode]) -> bool {
        nodes.iter().any(|n| match n {
            HirNode::Switch { .. } => true,
            HirNode::Block(inner) => contains_switch(inner),
            _ => false,
        })
    }
    assert!(
        !contains_switch(&hir.body),
        "single-target BRANCHIND should NOT produce a Switch"
    );
}

#[test]
fn test_structure_switch_with_table_pattern() {
    let r0 = Varnode::reg(0, 8);
    let r8 = Varnode::reg(8, 8);
    let c4 = Varnode::constant(4, 8);
    let table_base = Varnode::constant(0x10000, 8);
    let unique_scaled = Varnode::unique(100, 8);
    let unique_addr = Varnode::unique(200, 8);
    let unique_target = Varnode::unique(300, 8);
    let ram_space = Varnode::constant(1, 8);

    let mut func = Function::new("switch_table", BlockId(0), 0x8000);

    // BB0: index * 4, base + scaled, load, branchind
    let mut bb0 = BasicBlock::new(BlockId(0));
    // unique_scaled = INT_MULT(r8, 4)
    bb0.insns.push(IrInsn::with_output(
        IrOp::IntMult,
        unique_scaled,
        smallvec![r8, c4],
        0x8000,
    ));
    // unique_addr = INT_ADD(table_base, unique_scaled)
    bb0.insns.push(IrInsn::with_output(
        IrOp::IntAdd,
        unique_addr,
        smallvec![table_base, unique_scaled],
        0x8004,
    ));
    // unique_target = LOAD(ram_space, unique_addr)
    bb0.insns.push(IrInsn::with_output(
        IrOp::Load,
        unique_target,
        smallvec![ram_space, unique_addr],
        0x8008,
    ));
    // BRANCHIND(unique_target)
    bb0.insns.push(IrInsn::without_output(
        IrOp::Branchind,
        smallvec![unique_target],
        0x800c,
    ));
    bb0.successors = smallvec![BlockId(1), BlockId(2)];

    let mut bb1 = BasicBlock::new(BlockId(1));
    bb1.insns.push(IrInsn::with_output(
        IrOp::IntAdd,
        r0,
        smallvec![r8, Varnode::constant(1, 8)],
        0x8010,
    ));
    bb1.insns.push(ctrl_insn(IrOp::Return, 0x8014));

    let mut bb2 = BasicBlock::new(BlockId(2));
    bb2.insns.push(IrInsn::with_output(
        IrOp::IntAdd,
        r0,
        smallvec![r8, Varnode::constant(2, 8)],
        0x8020,
    ));
    bb2.insns.push(ctrl_insn(IrOp::Return, 0x8024));

    func.insert_block(bb0);
    func.insert_block(bb1);
    func.insert_block(bb2);

    let ssa = build_ssa(func);
    let hir = structure(&ssa).expect("structuring should succeed");

    fn find_switch(nodes: &[HirNode]) -> Option<&HirNode> {
        for n in nodes {
            match n {
                HirNode::Switch { .. } => return Some(n),
                HirNode::Block(inner) => {
                    if let Some(s) = find_switch(inner) {
                        return Some(s);
                    }
                }
                _ => {}
            }
        }
        None
    }
    let switch = find_switch(&hir.body).expect("table pattern should produce Switch");
    if let HirNode::Switch { cond, .. } = switch {
        assert_ne!(
            cond.base,
            Varnode::constant(0, 8),
            "switch cond should be recovered from table pattern, not fallback"
        );
    }
}

fn copy_insn(output: Varnode, input: Varnode, addr: u64) -> IrInsn {
    IrInsn::with_output(IrOp::Copy, output, smallvec![input], addr)
}

fn add_insn(output: Varnode, lhs: Varnode, rhs: Varnode, addr: u64) -> IrInsn {
    IrInsn::with_output(IrOp::IntAdd, output, smallvec![lhs, rhs], addr)
}

fn sub_insn(output: Varnode, lhs: Varnode, rhs: Varnode, addr: u64) -> IrInsn {
    IrInsn::with_output(IrOp::IntSub, output, smallvec![lhs, rhs], addr)
}

fn ssa_of(vn: Varnode) -> SsaVarnode {
    SsaVarnode {
        base: vn,
        version: 0,
    }
}

#[test]
fn test_for_loop_simple_increment() {
    let i = Varnode::reg(0, 4);
    let zero = Varnode::constant(0, 4);
    let one = Varnode::constant(1, 4);

    let body_stmt = Varnode::reg(8, 4);

    let mut hir_body = vec![
        HirNode::Statement(copy_insn(i, zero, 0x1000)),
        HirNode::While {
            cond: ssa_of(i),
            body: vec![
                HirNode::Statement(add_insn(body_stmt, body_stmt, one, 0x1010)),
                HirNode::Statement(add_insn(i, i, one, 0x1018)),
            ],
        },
    ];

    recover_for_loops(&mut hir_body);

    assert_eq!(
        hir_body.len(),
        1,
        "init+while should collapse to single For"
    );
    match &hir_body[0] {
        HirNode::For {
            init,
            update,
            body,
            cond,
        } => {
            let init = init.as_ref().expect("should have init");
            assert_eq!(init.op, IrOp::Copy);
            assert_eq!(init.output, Some(i));
            assert_eq!(update.op, IrOp::IntAdd);
            assert_eq!(update.output, Some(i));
            assert_eq!(cond.base, i);
            assert_eq!(body.len(), 1, "update should be removed from body");
        }
        other => panic!("expected For, got {other:?}"),
    }
}

#[test]
fn test_for_loop_with_step() {
    let i = Varnode::reg(0, 4);
    let zero = Varnode::constant(0, 4);
    let two = Varnode::constant(2, 4);

    let mut hir_body = vec![
        HirNode::Statement(copy_insn(i, zero, 0x1000)),
        HirNode::While {
            cond: ssa_of(i),
            body: vec![HirNode::Statement(add_insn(i, i, two, 0x1018))],
        },
    ];

    recover_for_loops(&mut hir_body);

    assert!(matches!(hir_body[0], HirNode::For { .. }));
    if let HirNode::For { update, .. } = &hir_body[0] {
        assert_eq!(update.op, IrOp::IntAdd);
        let has_step = update
            .inputs
            .iter()
            .any(|v| v.space == SpaceId::Const && v.offset == 2);
        assert!(has_step, "update should reference the step constant");
    }
}

#[test]
fn test_for_loop_condition_compare_reads_induction_var() {
    let i = Varnode::reg(0, 4);
    let bound = Varnode::reg(8, 4);
    let cond = Varnode::unique(0x200, 1);
    let zero = Varnode::constant(0, 4);
    let one = Varnode::constant(1, 4);

    let cmp = IrInsn::with_output(IrOp::IntLess, cond, smallvec![i, bound], 0x1008);
    let mut defs = BTreeMap::new();
    defs.insert(
        cond,
        HirDef {
            op: cmp.op,
            inputs: cmp.inputs.iter().copied().collect(),
        },
    );

    assert!(condition_mentions_counter(cond, &i, &defs));
    assert!(
        condition_mentions_counter(cond, &bound, &BTreeMap::new()),
        "missing def preserves legacy permissive recovery"
    );

    let mut hir_body = vec![
        HirNode::Statement(copy_insn(i, zero, 0x1000)),
        HirNode::While {
            cond: ssa_of(cond),
            body: vec![HirNode::Statement(add_insn(i, i, one, 0x1018))],
        },
    ];
    let mut defs = BTreeMap::new();
    let cmp = IrInsn::with_output(IrOp::IntLess, cond, smallvec![i, bound], 0x1008);
    defs.insert(
        cond,
        HirDef {
            op: cmp.op,
            inputs: cmp.inputs.iter().copied().collect(),
        },
    );

    let replacement = try_recover_for_at(&hir_body, 0, &defs).expect("compare cond should recover");
    hir_body.splice(0..2, [replacement]);

    assert!(matches!(hir_body[0], HirNode::For { .. }));
}

#[test]
fn test_for_loop_decrement() {
    let i = Varnode::reg(0, 4);
    let n = Varnode::reg(8, 4);
    let one = Varnode::constant(1, 4);

    let mut hir_body = vec![
        HirNode::Statement(copy_insn(i, n, 0x1000)),
        HirNode::While {
            cond: ssa_of(i),
            body: vec![HirNode::Statement(sub_insn(i, i, one, 0x1018))],
        },
    ];

    recover_for_loops(&mut hir_body);

    match &hir_body[0] {
        HirNode::For { update, .. } => {
            assert_eq!(update.op, IrOp::IntSub);
            assert_eq!(update.output, Some(i));
        }
        other => panic!("expected For, got {other:?}"),
    }
}

#[test]
fn test_for_loop_no_init_promotes_to_for() {
    let i = Varnode::reg(0, 4);
    let one = Varnode::constant(1, 4);

    let mut hir_body = vec![HirNode::While {
        cond: ssa_of(i),
        body: vec![HirNode::Statement(add_insn(i, i, one, 0x1018))],
    }];

    recover_for_loops(&mut hir_body);

    assert_eq!(hir_body.len(), 1);
    match &hir_body[0] {
        HirNode::For { init, update, .. } => {
            assert!(init.is_none(), "no preceding init → init should be None");
            assert_eq!(update.op, IrOp::IntAdd);
        }
        other => panic!("expected For, got {other:?}"),
    }
}

#[test]
fn test_for_loop_no_init_decrement_to_zero_compare() {
    let i = Varnode::reg(0, 4);
    let cond = Varnode::unique(0x200, 1);
    let zero = Varnode::constant(0, 4);
    let one = Varnode::constant(1, 4);

    let mut hir_body = vec![
        HirNode::Statement(IrInsn::with_output(
            IrOp::IntNotequal,
            cond,
            smallvec![i, zero],
            0x1008,
        )),
        HirNode::While {
            cond: ssa_of(cond),
            body: vec![HirNode::Statement(sub_insn(i, i, one, 0x1018))],
        },
    ];

    recover_for_loops(&mut hir_body);

    match &hir_body[1] {
        HirNode::For { init, update, .. } => {
            assert!(init.is_none());
            assert_eq!(update.op, IrOp::IntSub);
            assert_eq!(update.output, Some(i));
        }
        other => panic!("expected For, got {other:?}"),
    }
}

#[test]
fn test_for_loop_no_init_decrement_to_zero_direct_cond() {
    let i = Varnode::reg(0, 4);
    let one = Varnode::constant(1, 4);

    let mut hir_body = vec![HirNode::While {
        cond: ssa_of(i),
        body: vec![HirNode::Statement(sub_insn(i, i, one, 0x1018))],
    }];

    recover_for_loops(&mut hir_body);

    match &hir_body[0] {
        HirNode::For {
            init, cond, update, ..
        } => {
            assert!(init.is_none());
            assert_eq!(cond.base, i);
            assert_eq!(update.op, IrOp::IntSub);
        }
        other => panic!("expected For, got {other:?}"),
    }
}

#[test]
fn test_for_loop_from_cmp_dec_jne_chain_shape() {
    let reg = Varnode::reg(0, 4);
    let cond = Varnode::unique(0x240, 1);
    let zero = Varnode::constant(0, 4);
    let one = Varnode::constant(1, 4);
    let body_tmp = Varnode::unique(0x300, 4);

    let mut hir_body = vec![
        HirNode::Statement(IrInsn::with_output(
            IrOp::IntNotequal,
            cond,
            smallvec![reg, zero],
            0x1000,
        )),
        HirNode::While {
            cond: ssa_of(cond),
            body: vec![
                HirNode::Statement(copy_insn(body_tmp, reg, 0x1008)),
                HirNode::Statement(sub_insn(reg, reg, one, 0x1010)),
            ],
        },
    ];

    recover_for_loops(&mut hir_body);

    match &hir_body[1] {
        HirNode::For {
            init, update, body, ..
        } => {
            assert!(init.is_none());
            assert_eq!(update.output, Some(reg));
            assert_eq!(body.len(), 1, "dec step should move to for update");
        }
        other => panic!("expected For, got {other:?}"),
    }
}

#[test]
fn test_for_loop_counter_used_after_loop_still_recovers_for() {
    let i = Varnode::reg(0, 4);
    let printed = Varnode::reg(16, 4);
    let zero = Varnode::constant(0, 4);
    let one = Varnode::constant(1, 4);

    let mut hir_body = vec![
        HirNode::Statement(copy_insn(i, zero, 0x1000)),
        HirNode::While {
            cond: ssa_of(i),
            body: vec![HirNode::Statement(add_insn(i, i, one, 0x1018))],
        },
        HirNode::Statement(copy_insn(printed, i, 0x1030)),
    ];

    recover_for_loops(&mut hir_body);

    assert_eq!(hir_body.len(), 2, "init + while should collapse to one For");
    assert!(matches!(hir_body[0], HirNode::For { .. }));
    assert!(matches!(hir_body[1], HirNode::Statement(_)));
}

#[test]
fn test_for_loop_no_update_keeps_while() {
    let i = Varnode::reg(0, 4);
    let other = Varnode::reg(8, 4);
    let zero = Varnode::constant(0, 4);
    let one = Varnode::constant(1, 4);

    let mut hir_body = vec![
        HirNode::Statement(copy_insn(i, zero, 0x1000)),
        HirNode::While {
            cond: ssa_of(i),
            body: vec![HirNode::Statement(add_insn(other, other, one, 0x1018))],
        },
    ];

    recover_for_loops(&mut hir_body);

    assert!(
        matches!(hir_body[1], HirNode::While { .. }),
        "no update of counter → must remain While"
    );
}

#[test]
fn test_for_loop_recurses_into_nested() {
    let outer_i = Varnode::reg(0, 4);
    let inner_j = Varnode::reg(8, 4);
    let zero = Varnode::constant(0, 4);
    let one = Varnode::constant(1, 4);

    let inner_loop = vec![
        HirNode::Statement(copy_insn(inner_j, zero, 0x2000)),
        HirNode::While {
            cond: ssa_of(inner_j),
            body: vec![HirNode::Statement(add_insn(inner_j, inner_j, one, 0x2018))],
        },
    ];

    let mut hir_body = vec![
        HirNode::Statement(copy_insn(outer_i, zero, 0x1000)),
        HirNode::While {
            cond: ssa_of(outer_i),
            body: {
                let mut b = inner_loop;
                b.push(HirNode::Statement(add_insn(outer_i, outer_i, one, 0x1100)));
                b
            },
        },
    ];

    recover_for_loops(&mut hir_body);

    match &hir_body[0] {
        HirNode::For { body, .. } => {
            let has_inner_for = body.iter().any(|n| matches!(n, HirNode::For { .. }));
            assert!(has_inner_for, "inner loop should also be recovered as For");
        }
        other => panic!("expected outer For, got {other:?}"),
    }
}

#[test]
fn test_for_loop_compare_condition_recovers_for() {
    let i = Varnode::reg(0, 4);
    let unrelated = Varnode::reg(64, 4);
    let zero = Varnode::constant(0, 4);
    let one = Varnode::constant(1, 4);

    let mut hir_body = vec![
        HirNode::Statement(copy_insn(i, zero, 0x1000)),
        HirNode::While {
            cond: ssa_of(unrelated),
            body: vec![HirNode::Statement(add_insn(i, i, one, 0x1018))],
        },
    ];

    recover_for_loops(&mut hir_body);

    assert_eq!(hir_body.len(), 1);
    assert!(matches!(hir_body[0], HirNode::For { .. }));
}

// ── P3-8: Do-while loop recovery tests ──

#[test]
fn test_do_while_basic() {
    // BB0 (header, no CBRANCH) → BB1 (latch with CBRANCH: back→BB0, exit→BB2)
    let r0 = Varnode::reg(0, 8);
    let r8 = Varnode::reg(8, 8);
    let c1 = Varnode::constant(1, 8);
    let cond_vn = Varnode::reg(256, 1);

    let mut func = Function::new("do_while_basic", BlockId(0), 0xA000);

    let mut bb0 = BasicBlock::new(BlockId(0));
    bb0.insns.push(arith_insn(r0, &[r8, c1], 0xA000));
    bb0.insns.push(ctrl_insn(IrOp::Branch, 0xA004));
    bb0.successors = smallvec![BlockId(1)];

    let mut bb1 = BasicBlock::new(BlockId(1));
    bb1.insns.push(arith_insn(r0, &[r0, c1], 0xA010));
    bb1.insns.push(cbranch_insn(cond_vn, 0xA014));
    bb1.successors = smallvec![BlockId(0), BlockId(2)];

    let mut bb2 = BasicBlock::new(BlockId(2));
    bb2.insns.push(ctrl_insn(IrOp::Return, 0xA020));

    func.insert_block(bb0);
    func.insert_block(bb1);
    func.insert_block(bb2);

    let ssa = build_ssa(func);
    let hir = structure(&ssa).expect("structuring should succeed");

    fn contains_do_while(nodes: &[HirNode]) -> bool {
        nodes.iter().any(|n| match n {
            HirNode::DoWhile { .. } => true,
            HirNode::Block(inner) => contains_do_while(inner),
            _ => false,
        })
    }
    assert!(
        contains_do_while(&hir.body),
        "do-while CFG should produce a DoWhile node, got: {:#?}",
        hir.body
    );
}

#[test]
fn test_self_loop_bottom_test_is_do_while() {
    let r0 = Varnode::reg(0, 8);
    let r8 = Varnode::reg(8, 8);
    let c1 = Varnode::constant(1, 8);
    let cond_vn = Varnode::reg(256, 1);

    let mut func = Function::new("self_loop_do_while", BlockId(0), 0xA100);

    let mut bb0 = BasicBlock::new(BlockId(0));
    bb0.insns
        .push(IrInsn::without_output(IrOp::Branch, smallvec![], 0xA100));
    bb0.successors = smallvec![BlockId(1)];

    let mut bb1 = BasicBlock::new(BlockId(1));
    bb1.insns.push(arith_insn(r0, &[r8, c1], 0xA110));
    bb1.insns.push(cbranch_insn(cond_vn, 0xA114));
    bb1.successors = smallvec![BlockId(1), BlockId(2)];

    let mut bb2 = BasicBlock::new(BlockId(2));
    bb2.insns.push(ctrl_insn(IrOp::Return, 0xA120));

    func.insert_block(bb0);
    func.insert_block(bb1);
    func.insert_block(bb2);

    let ssa = build_ssa(func);
    let hir = structure(&ssa).expect("structuring should succeed");

    fn contains_do_while(nodes: &[HirNode]) -> bool {
        nodes.iter().any(|n| match n {
            HirNode::DoWhile { .. } => true,
            HirNode::Block(inner) => contains_do_while(inner),
            _ => false,
        })
    }

    assert!(
        contains_do_while(&hir.body),
        "self-loop bottom test should produce DoWhile, got: {:#?}",
        hir.body
    );
}

#[test]
fn test_do_while_vs_while() {
    let r0 = Varnode::reg(0, 8);
    let c1 = Varnode::constant(1, 8);
    let cond_vn = Varnode::reg(256, 1);

    let mut while_func = Function::new("while_fn", BlockId(0), 0xB000);
    let mut bb0 = BasicBlock::new(BlockId(0));
    bb0.insns.push(cbranch_insn(cond_vn, 0xB000));
    bb0.successors = smallvec![BlockId(1), BlockId(2)];

    let mut bb1 = BasicBlock::new(BlockId(1));
    bb1.insns.push(arith_insn(r0, &[r0, c1], 0xB010));
    bb1.insns.push(ctrl_insn(IrOp::Branch, 0xB014));
    bb1.successors = smallvec![BlockId(0)];

    let mut bb2 = BasicBlock::new(BlockId(2));
    bb2.insns.push(ctrl_insn(IrOp::Return, 0xB020));

    while_func.insert_block(bb0);
    while_func.insert_block(bb1);
    while_func.insert_block(bb2);

    let ssa_while = build_ssa(while_func);
    let hir_while = structure(&ssa_while).expect("while structuring should succeed");

    fn has_while(nodes: &[HirNode]) -> bool {
        nodes.iter().any(|n| match n {
            HirNode::While { .. } => true,
            HirNode::Block(inner) => has_while(inner),
            _ => false,
        })
    }
    fn has_do_while(nodes: &[HirNode]) -> bool {
        nodes.iter().any(|n| match n {
            HirNode::DoWhile { .. } => true,
            HirNode::Block(inner) => has_do_while(inner),
            _ => false,
        })
    }

    assert!(
        has_while(&hir_while.body),
        "while-loop should produce While"
    );
    assert!(
        !has_do_while(&hir_while.body),
        "while-loop should NOT produce DoWhile"
    );

    let mut dw_func = Function::new("do_while_fn", BlockId(0), 0xC000);
    let mut bb0 = BasicBlock::new(BlockId(0));
    bb0.insns.push(arith_insn(r0, &[r0, c1], 0xC000));
    bb0.insns.push(ctrl_insn(IrOp::Branch, 0xC004));
    bb0.successors = smallvec![BlockId(1)];

    let mut bb1 = BasicBlock::new(BlockId(1));
    bb1.insns.push(arith_insn(r0, &[r0, c1], 0xC010));
    bb1.insns.push(cbranch_insn(cond_vn, 0xC014));
    bb1.successors = smallvec![BlockId(0), BlockId(2)];

    let mut bb2 = BasicBlock::new(BlockId(2));
    bb2.insns.push(ctrl_insn(IrOp::Return, 0xC020));

    dw_func.insert_block(bb0);
    dw_func.insert_block(bb1);
    dw_func.insert_block(bb2);

    let ssa_dw = build_ssa(dw_func);
    let hir_dw = structure(&ssa_dw).expect("do-while structuring should succeed");

    assert!(
        has_do_while(&hir_dw.body),
        "do-while should produce DoWhile, got: {:#?}",
        hir_dw.body
    );
    assert!(
        !has_while(&hir_dw.body),
        "do-while should NOT produce While"
    );
}

#[test]
fn test_do_while_exit_found() {
    let r0 = Varnode::reg(0, 8);
    let r8 = Varnode::reg(8, 8);
    let c1 = Varnode::constant(1, 8);
    let cond_vn = Varnode::reg(256, 1);

    let mut func = Function::new("do_while_exit", BlockId(0), 0xD000);

    let mut bb0 = BasicBlock::new(BlockId(0));
    bb0.insns.push(arith_insn(r0, &[r8, c1], 0xD000));
    bb0.insns.push(ctrl_insn(IrOp::Branch, 0xD004));
    bb0.successors = smallvec![BlockId(1)];

    let mut bb1 = BasicBlock::new(BlockId(1));
    bb1.insns.push(arith_insn(r0, &[r0, c1], 0xD010));
    bb1.insns.push(cbranch_insn(cond_vn, 0xD014));
    bb1.successors = smallvec![BlockId(0), BlockId(2)];

    let mut bb2 = BasicBlock::new(BlockId(2));
    bb2.insns.push(arith_insn(r8, &[r0, c1], 0xD020));
    bb2.insns.push(ctrl_insn(IrOp::Return, 0xD024));

    func.insert_block(bb0);
    func.insert_block(bb1);
    func.insert_block(bb2);

    let ssa = build_ssa(func);
    let hir = structure(&ssa).expect("structuring should succeed");

    let has_return = hir.body.iter().any(|n| matches!(n, HirNode::Return(_)));
    assert!(
        has_return,
        "post-loop return should be structured, got: {:#?}",
        hir.body
    );
}

// ── P3-16: Try/catch structuring tests ──

#[test]
fn test_no_landing_pads_unchanged() {
    let r0 = Varnode::reg(0, 8);
    let r8 = Varnode::reg(8, 8);
    let c1 = Varnode::constant(1, 8);

    let mut func = Function::new("no_lp", BlockId(0), 0xE000);

    let mut bb0 = BasicBlock::new(BlockId(0));
    bb0.insns.push(arith_insn(r0, &[r8, c1], 0xE000));
    bb0.insns.push(ctrl_insn(IrOp::Return, 0xE008));

    func.insert_block(bb0);

    let ssa = build_ssa(func);
    let empty_pads = BTreeSet::new();
    let hir =
        super::structure_with_landing_pads(&ssa, &empty_pads).expect("structuring should succeed");

    fn contains_try_catch(nodes: &[HirNode]) -> bool {
        nodes.iter().any(|n| match n {
            HirNode::TryCatch { .. } => true,
            HirNode::Block(inner) => contains_try_catch(inner),
            _ => false,
        })
    }
    assert!(
        !contains_try_catch(&hir.body),
        "no landing pads → no TryCatch nodes, got: {:#?}",
        hir.body
    );
}

#[test]
fn test_try_catch_basic_structure() {
    let r0 = Varnode::reg(0, 8);
    let r8 = Varnode::reg(8, 8);
    let c1 = Varnode::constant(1, 8);

    let mut func = Function::new("with_lp", BlockId(0), 0xF000);

    // BB0: normal code → BB1
    let mut bb0 = BasicBlock::new(BlockId(0));
    bb0.insns.push(arith_insn(r0, &[r8, c1], 0xF000));
    bb0.insns.push(ctrl_insn(IrOp::Branch, 0xF004));
    bb0.successors = smallvec![BlockId(1)];

    // BB1: landing pad handler → return
    let mut bb1 = BasicBlock::new(BlockId(1));
    bb1.insns.push(arith_insn(r0, &[r0, c1], 0xF010));
    bb1.insns.push(ctrl_insn(IrOp::Return, 0xF018));

    func.insert_block(bb0);
    func.insert_block(bb1);

    let ssa = build_ssa(func);
    let mut landing_pads = BTreeSet::new();
    landing_pads.insert(0xF010_u64);

    let hir = super::structure_with_landing_pads(&ssa, &landing_pads)
        .expect("structuring should succeed");

    fn find_try_catch(nodes: &[HirNode]) -> bool {
        nodes.iter().any(|n| match n {
            HirNode::TryCatch { .. } => true,
            HirNode::Block(inner) => find_try_catch(inner),
            _ => false,
        })
    }
    assert!(
        find_try_catch(&hir.body),
        "landing pad at 0xF010 should produce TryCatch, got: {:#?}",
        hir.body
    );

    fn get_try_catch(nodes: &[HirNode]) -> Option<(&[HirNode], &[HirNode])> {
        for n in nodes {
            match n {
                HirNode::TryCatch {
                    try_body,
                    catch_arms,
                } => {
                    let arm = catch_arms.first().expect("at least one catch arm");
                    return Some((try_body, &arm.1));
                }
                HirNode::Block(inner) => {
                    if let Some(tc) = get_try_catch(inner) {
                        return Some(tc);
                    }
                }
                _ => {}
            }
        }
        None
    }
    let (try_body, catch_body) = get_try_catch(&hir.body).expect("should have TryCatch");
    assert!(!try_body.is_empty(), "try body should not be empty");
    assert!(!catch_body.is_empty(), "catch body should not be empty");
}

#[test]
fn test_try_catch_uses_typed_landing_pad_catches() {
    let r0 = Varnode::reg(0, 8);
    let r8 = Varnode::reg(8, 8);
    let c1 = Varnode::constant(1, 8);

    let mut func = Function::new("with_typed_lp", BlockId(0), 0xF000);

    let mut bb0 = BasicBlock::new(BlockId(0));
    bb0.insns.push(arith_insn(r0, &[r8, c1], 0xF000));
    bb0.insns.push(ctrl_insn(IrOp::Branch, 0xF004));
    bb0.successors = smallvec![BlockId(1)];

    let mut bb1 = BasicBlock::new(BlockId(1));
    bb1.insns.push(arith_insn(r0, &[r0, c1], 0xF010));
    bb1.insns.push(ctrl_insn(IrOp::Return, 0xF018));

    func.insert_block(bb0);
    func.insert_block(bb1);

    let mut ssa = build_ssa(func);
    let mut landing_pads = BTreeSet::new();
    landing_pads.insert(0xF010_u64);
    ssa.eh_landing_pad_catches.insert(
        0xF010,
        vec![unlace_ir::types::Type::Struct {
            name: "Dog".to_string(),
            fields: vec![],
        }],
    );

    let hir = super::structure_with_landing_pads(&ssa, &landing_pads)
        .expect("structuring should succeed");

    fn first_catch_type(nodes: &[HirNode]) -> Option<&unlace_ir::types::Type> {
        for n in nodes {
            match n {
                HirNode::TryCatch { catch_arms, .. } => {
                    return catch_arms.first().map(|(ty, _)| ty);
                }
                HirNode::Block(inner) => {
                    if let Some(ty) = first_catch_type(inner) {
                        return Some(ty);
                    }
                }
                _ => {}
            }
        }
        None
    }

    let ty = first_catch_type(&hir.body).expect("typed catch arm");
    assert_eq!(
        ty,
        &unlace_ir::types::Type::Struct {
            name: "Dog".to_string(),
            fields: vec![],
        }
    );
}

#[test]
fn test_cleanup_landing_pad_structures_as_try_finally() {
    let r0 = Varnode::reg(0, 8);
    let r8 = Varnode::reg(8, 8);
    let c1 = Varnode::constant(1, 8);

    let mut func = Function::new("with_cleanup_lp", BlockId(0), 0xF100);

    let mut bb0 = BasicBlock::new(BlockId(0));
    bb0.insns.push(arith_insn(r0, &[r8, c1], 0xF100));
    bb0.insns.push(ctrl_insn(IrOp::Branch, 0xF104));
    bb0.successors = smallvec![BlockId(1)];

    let mut bb1 = BasicBlock::new(BlockId(1));
    bb1.insns.push(arith_insn(r0, &[r0, c1], 0xF110));
    bb1.insns.push(ctrl_insn(IrOp::Return, 0xF118));

    func.insert_block(bb0);
    func.insert_block(bb1);

    let mut ssa = build_ssa(func);
    let mut landing_pads = BTreeSet::new();
    landing_pads.insert(0xF110_u64);
    ssa.eh_cleanup_landing_pads.insert(0xF110);

    let hir = super::structure_with_landing_pads(&ssa, &landing_pads)
        .expect("structuring should succeed");

    fn find_try_finally(nodes: &[HirNode]) -> bool {
        nodes.iter().any(|n| match n {
            HirNode::TryFinally { .. } => true,
            HirNode::Block(inner) => find_try_finally(inner),
            HirNode::TryCatch {
                try_body,
                catch_arms,
            } => {
                find_try_finally(try_body)
                    || catch_arms.iter().any(|(_, body)| find_try_finally(body))
            }
            _ => false,
        })
    }

    assert!(
        find_try_finally(&hir.body),
        "cleanup landing pad should produce TryFinally, got: {:#?}",
        hir.body
    );
}

#[test]
fn test_try_catch_unmatched_landing_pad_ignored() {
    let r0 = Varnode::reg(0, 8);
    let r8 = Varnode::reg(8, 8);
    let c1 = Varnode::constant(1, 8);

    let mut func = Function::new("unmatched_lp", BlockId(0), 0x10000);

    let mut bb0 = BasicBlock::new(BlockId(0));
    bb0.insns.push(arith_insn(r0, &[r8, c1], 0x10000));
    bb0.insns.push(ctrl_insn(IrOp::Return, 0x10008));

    func.insert_block(bb0);

    let ssa = build_ssa(func);
    let mut landing_pads = BTreeSet::new();
    landing_pads.insert(0xDEAD_u64);

    let hir = super::structure_with_landing_pads(&ssa, &landing_pads)
        .expect("structuring should succeed");

    fn contains_try_catch(nodes: &[HirNode]) -> bool {
        nodes.iter().any(|n| match n {
            HirNode::TryCatch { .. } => true,
            HirNode::Block(inner) => contains_try_catch(inner),
            _ => false,
        })
    }
    assert!(
        !contains_try_catch(&hir.body),
        "unmatched LP address should not produce TryCatch",
    );
}

#[test]
fn test_try_catch_multiple_landing_pads() {
    let r0 = Varnode::reg(0, 8);
    let r8 = Varnode::reg(8, 8);
    let c1 = Varnode::constant(1, 8);
    let c2 = Varnode::constant(2, 8);

    let mut func = Function::new("multi_lp", BlockId(0), 0x11000);

    // BB0: normal → BB1
    let mut bb0 = BasicBlock::new(BlockId(0));
    bb0.insns.push(arith_insn(r0, &[r8, c1], 0x11000));
    bb0.insns.push(ctrl_insn(IrOp::Branch, 0x11004));
    bb0.successors = smallvec![BlockId(1)];

    // BB1: first landing pad → BB2
    let mut bb1 = BasicBlock::new(BlockId(1));
    bb1.insns.push(arith_insn(r0, &[r0, c1], 0x11010));
    bb1.insns.push(ctrl_insn(IrOp::Branch, 0x11014));
    bb1.successors = smallvec![BlockId(2)];

    // BB2: normal code → BB3
    let mut bb2 = BasicBlock::new(BlockId(2));
    bb2.insns.push(arith_insn(r0, &[r0, c2], 0x11020));
    bb2.insns.push(ctrl_insn(IrOp::Branch, 0x11024));
    bb2.successors = smallvec![BlockId(3)];

    // BB3: second landing pad → return
    let mut bb3 = BasicBlock::new(BlockId(3));
    bb3.insns.push(arith_insn(r8, &[r0, c1], 0x11030));
    bb3.insns.push(ctrl_insn(IrOp::Return, 0x11038));

    func.insert_block(bb0);
    func.insert_block(bb1);
    func.insert_block(bb2);
    func.insert_block(bb3);

    let ssa = build_ssa(func);
    let mut landing_pads = BTreeSet::new();
    landing_pads.insert(0x11010_u64);
    landing_pads.insert(0x11030_u64);

    let hir = super::structure_with_landing_pads(&ssa, &landing_pads)
        .expect("structuring should succeed");

    fn count_try_catch(nodes: &[HirNode]) -> usize {
        nodes
            .iter()
            .map(|n| match n {
                HirNode::TryCatch {
                    try_body,
                    catch_arms,
                } => {
                    1 + count_try_catch(try_body)
                        + catch_arms
                            .iter()
                            .map(|(_, body)| count_try_catch(body))
                            .sum::<usize>()
                }
                HirNode::TryFinally {
                    try_body,
                    finally_body,
                } => 1 + count_try_catch(try_body) + count_try_catch(finally_body),
                HirNode::Block(inner) => count_try_catch(inner),
                _ => 0,
            })
            .sum()
    }
    let tc_count = count_try_catch(&hir.body);
    assert!(
        tc_count >= 2,
        "two landing pads should produce at least 2 TryCatch nodes, got {tc_count}: {:#?}",
        hir.body
    );
}

// ── P4-13: Break statement tests ──

#[test]
fn test_break_in_while_loop() {
    // while(true) with conditional exit in body:
    // BB0: header (no cbranch), branch → BB1
    // BB1: body + cbranch → BB2 (continue loop) or BB3 (exit)
    // BB2: latch, branch → BB0
    // BB3: return (exit)
    let r0 = Varnode::reg(0, 8);
    let r8 = Varnode::reg(8, 8);
    let c1 = Varnode::constant(1, 8);
    let cond_vn = Varnode::reg(256, 1);

    let mut func = Function::new("break_while", BlockId(0), 0x20000);

    let mut bb0 = BasicBlock::new(BlockId(0));
    bb0.insns.push(arith_insn(r0, &[r8, c1], 0x20000));
    bb0.insns.push(ctrl_insn(IrOp::Branch, 0x20008));
    bb0.successors = smallvec![BlockId(1)];

    let mut bb1 = BasicBlock::new(BlockId(1));
    bb1.insns.push(arith_insn(r0, &[r0, c1], 0x20010));
    bb1.insns.push(cbranch_insn(cond_vn, 0x20018));
    bb1.successors = smallvec![BlockId(2), BlockId(3)];

    let mut bb2 = BasicBlock::new(BlockId(2));
    bb2.insns.push(arith_insn(r0, &[r0, c1], 0x20020));
    bb2.insns.push(ctrl_insn(IrOp::Branch, 0x20028));
    bb2.successors = smallvec![BlockId(0)];

    let mut bb3 = BasicBlock::new(BlockId(3));
    bb3.insns.push(ctrl_insn(IrOp::Return, 0x20030));

    func.insert_block(bb0);
    func.insert_block(bb1);
    func.insert_block(bb2);
    func.insert_block(bb3);

    let ssa = build_ssa(func);
    let hir = structure(&ssa).expect("structuring should succeed");

    fn contains_break(nodes: &[HirNode]) -> bool {
        nodes.iter().any(|n| match n {
            HirNode::Break => true,
            HirNode::Block(inner) => contains_break(inner),
            HirNode::While { body, .. } | HirNode::DoWhile { body, .. } => contains_break(body),
            HirNode::If {
                then_body,
                else_body,
                ..
            } => {
                contains_break(then_body) || else_body.as_ref().is_some_and(|eb| contains_break(eb))
            }
            _ => false,
        })
    }

    assert!(
        contains_break(&hir.body),
        "loop with conditional exit should contain Break, got: {:#?}",
        hir.body
    );
}

#[test]
fn test_break_replaces_goto_to_exit() {
    // Same structure as above — should use Break, not Goto.
    let r0 = Varnode::reg(0, 8);
    let r8 = Varnode::reg(8, 8);
    let c1 = Varnode::constant(1, 8);
    let cond_vn = Varnode::reg(256, 1);

    let mut func = Function::new("break_no_goto", BlockId(0), 0x21000);

    let mut bb0 = BasicBlock::new(BlockId(0));
    bb0.insns.push(arith_insn(r0, &[r8, c1], 0x21000));
    bb0.insns.push(ctrl_insn(IrOp::Branch, 0x21008));
    bb0.successors = smallvec![BlockId(1)];

    let mut bb1 = BasicBlock::new(BlockId(1));
    bb1.insns.push(arith_insn(r0, &[r0, c1], 0x21010));
    bb1.insns.push(cbranch_insn(cond_vn, 0x21018));
    bb1.successors = smallvec![BlockId(2), BlockId(3)];

    let mut bb2 = BasicBlock::new(BlockId(2));
    bb2.insns.push(arith_insn(r0, &[r0, c1], 0x21020));
    bb2.insns.push(ctrl_insn(IrOp::Branch, 0x21028));
    bb2.successors = smallvec![BlockId(0)];

    let mut bb3 = BasicBlock::new(BlockId(3));
    bb3.insns.push(ctrl_insn(IrOp::Return, 0x21030));

    func.insert_block(bb0);
    func.insert_block(bb1);
    func.insert_block(bb2);
    func.insert_block(bb3);

    let ssa = build_ssa(func);
    let hir = structure(&ssa).expect("structuring should succeed");

    fn has_goto(nodes: &[HirNode]) -> bool {
        nodes.iter().any(|n| match n {
            HirNode::Goto(_) => true,
            HirNode::Block(inner) => has_goto(inner),
            HirNode::While { body, .. } | HirNode::DoWhile { body, .. } => has_goto(body),
            HirNode::If {
                then_body,
                else_body,
                ..
            } => has_goto(then_body) || else_body.as_ref().is_some_and(|eb| has_goto(eb)),
            _ => false,
        })
    }

    fn has_break(nodes: &[HirNode]) -> bool {
        nodes.iter().any(|n| match n {
            HirNode::Break => true,
            HirNode::Block(inner) => has_break(inner),
            HirNode::While { body, .. } | HirNode::DoWhile { body, .. } => has_break(body),
            HirNode::If {
                then_body,
                else_body,
                ..
            } => has_break(then_body) || else_body.as_ref().is_some_and(|eb| has_break(eb)),
            _ => false,
        })
    }

    assert!(
        has_break(&hir.body),
        "exit edge should produce Break: {:#?}",
        hir.body
    );
    assert!(
        !has_goto(&hir.body),
        "exit edge should NOT produce Goto: {:#?}",
        hir.body
    );
}

#[test]
fn test_join_point_matches_postdom() {
    let r0 = Varnode::reg(0, 8);
    let r8 = Varnode::reg(8, 8);
    let c1 = Varnode::constant(1, 8);
    let c2 = Varnode::constant(2, 8);
    let cond_vn = Varnode::reg(256, 1);

    let mut func = Function::new("postdom_join", BlockId(0), 0x30000);

    let mut bb0 = BasicBlock::new(BlockId(0));
    bb0.insns.push(arith_insn(r0, &[r8, c1], 0x30000));
    bb0.insns.push(cbranch_insn(cond_vn, 0x30004));
    bb0.successors = smallvec![BlockId(1), BlockId(2)];

    let mut bb1 = BasicBlock::new(BlockId(1));
    bb1.insns.push(arith_insn(r0, &[r8, c1], 0x30010));
    bb1.insns.push(ctrl_insn(IrOp::Branch, 0x30018));
    bb1.successors = smallvec![BlockId(3)];

    let mut bb2 = BasicBlock::new(BlockId(2));
    bb2.insns.push(arith_insn(r0, &[r8, c2], 0x30020));
    bb2.insns.push(ctrl_insn(IrOp::Branch, 0x30028));
    bb2.successors = smallvec![BlockId(3)];

    let mut bb3 = BasicBlock::new(BlockId(3));
    bb3.insns.push(arith_insn(r0, &[r0, c1], 0x30030));
    bb3.insns.push(ctrl_insn(IrOp::Return, 0x30038));

    func.insert_block(bb0);
    func.insert_block(bb1);
    func.insert_block(bb2);
    func.insert_block(bb3);

    let ssa = build_ssa(func);

    let pdom = ssa
        .post_dom_tree
        .as_ref()
        .expect("should have post_dom_tree");
    assert_eq!(pdom.idom(BlockId(0)), Some(BlockId(3)));

    let hir = structure(&ssa).expect("structuring should succeed");

    fn contains_if(nodes: &[HirNode]) -> bool {
        nodes.iter().any(|n| match n {
            HirNode::If { .. } => true,
            HirNode::Block(inner) => contains_if(inner),
            _ => false,
        })
    }
    assert!(
        contains_if(&hir.body),
        "should produce If node using post-dom join"
    );

    let has_return = hir.body.iter().any(|n| matches!(n, HirNode::Return(_)));
    assert!(has_return, "post-join code should appear after if/else");
}

#[test]
fn test_join_point_deep_nesting() {
    let r0 = Varnode::reg(0, 8);
    let r8 = Varnode::reg(8, 8);
    let c1 = Varnode::constant(1, 8);
    let cond_vn = Varnode::reg(256, 1);

    let mut func = Function::new("deep_nesting", BlockId(0), 0x40000);

    // BB0: if → BB1 / BB2
    let mut bb0 = BasicBlock::new(BlockId(0));
    bb0.insns.push(cbranch_insn(cond_vn, 0x40000));
    bb0.successors = smallvec![BlockId(1), BlockId(2)];

    // BB1: then chain through 20 blocks to BB22
    let mut bb1 = BasicBlock::new(BlockId(1));
    bb1.insns.push(arith_insn(r0, &[r8, c1], 0x40010));
    bb1.insns.push(ctrl_insn(IrOp::Branch, 0x40018));
    bb1.successors = smallvec![BlockId(3)];
    func.insert_block(bb0);
    func.insert_block(bb1);

    // Chain: BB3→BB4→...→BB21
    for i in 3..22 {
        let mut bb = BasicBlock::new(BlockId(i));
        bb.insns
            .push(arith_insn(r0, &[r0, c1], 0x40000 + (i as u64) * 0x10));
        bb.insns
            .push(ctrl_insn(IrOp::Branch, 0x40008 + (i as u64) * 0x10));
        bb.successors = smallvec![BlockId(i + 1)];
        func.insert_block(bb);
    }

    // BB22: join point
    let mut bb22 = BasicBlock::new(BlockId(22));
    bb22.insns.push(ctrl_insn(IrOp::Return, 0x40160));
    func.insert_block(bb22);

    // BB2: else, direct to join
    let mut bb2 = BasicBlock::new(BlockId(2));
    bb2.insns.push(arith_insn(r0, &[r8, c1], 0x40020));
    bb2.insns.push(ctrl_insn(IrOp::Branch, 0x40028));
    bb2.successors = smallvec![BlockId(22)];
    func.insert_block(bb2);

    let ssa = build_ssa(func);

    let pdom = ssa
        .post_dom_tree
        .as_ref()
        .expect("should have post_dom_tree");
    assert_eq!(
        pdom.idom(BlockId(0)),
        Some(BlockId(22)),
        "post-dom should find BB22 as join regardless of depth"
    );

    let hir = structure(&ssa).expect("structuring should succeed");

    fn contains_if(nodes: &[HirNode]) -> bool {
        nodes.iter().any(|n| match n {
            HirNode::If { .. } => true,
            HirNode::Block(inner) => contains_if(inner),
            _ => false,
        })
    }
    assert!(
        contains_if(&hir.body),
        "deep nesting (depth > 16) should still find join via post-dom"
    );
}

#[test]
fn test_postdom_switch_join() {
    let r0 = Varnode::reg(0, 8);
    let r8 = Varnode::reg(8, 8);
    let c1 = Varnode::constant(1, 8);
    let c2 = Varnode::constant(2, 8);

    let mut func = Function::new("switch_postdom", BlockId(0), 0x50000);

    let mut bb0 = BasicBlock::new(BlockId(0));
    bb0.insns.push(ctrl_insn(IrOp::Branchind, 0x50000));
    bb0.successors = smallvec![BlockId(1), BlockId(2), BlockId(3)];

    let mut bb1 = BasicBlock::new(BlockId(1));
    bb1.insns.push(arith_insn(r0, &[r8, c1], 0x50010));
    bb1.insns.push(ctrl_insn(IrOp::Branch, 0x50014));
    bb1.successors = smallvec![BlockId(4)];

    let mut bb2 = BasicBlock::new(BlockId(2));
    bb2.insns.push(arith_insn(r0, &[r8, c2], 0x50020));
    bb2.insns.push(ctrl_insn(IrOp::Branch, 0x50024));
    bb2.successors = smallvec![BlockId(4)];

    let mut bb3 = BasicBlock::new(BlockId(3));
    bb3.insns.push(arith_insn(r0, &[r0, c1], 0x50030));
    bb3.insns.push(ctrl_insn(IrOp::Branch, 0x50034));
    bb3.successors = smallvec![BlockId(4)];

    let mut bb4 = BasicBlock::new(BlockId(4));
    bb4.insns.push(ctrl_insn(IrOp::Return, 0x50040));

    func.insert_block(bb0);
    func.insert_block(bb1);
    func.insert_block(bb2);
    func.insert_block(bb3);
    func.insert_block(bb4);

    let ssa = build_ssa(func);
    let pdom = ssa
        .post_dom_tree
        .as_ref()
        .expect("should have post_dom_tree");
    assert_eq!(pdom.idom(BlockId(0)), Some(BlockId(4)));

    let hir = structure(&ssa).expect("structuring should succeed");

    fn contains_switch(nodes: &[HirNode]) -> bool {
        nodes.iter().any(|n| match n {
            HirNode::Switch { .. } => true,
            HirNode::Block(inner) => contains_switch(inner),
            _ => false,
        })
    }
    assert!(
        contains_switch(&hir.body),
        "switch with post-dom join should produce Switch"
    );

    let has_return = hir.body.iter().any(|n| matches!(n, HirNode::Return(_)));
    assert!(has_return, "post-switch join code should be structured");
}

#[test]
fn test_postdom_fallback_to_bfs() {
    let r0 = Varnode::reg(0, 8);
    let r8 = Varnode::reg(8, 8);
    let c1 = Varnode::constant(1, 8);
    let cond_vn = Varnode::reg(256, 1);

    let mut func = Function::new("fallback_bfs", BlockId(0), 0x60000);

    let mut bb0 = BasicBlock::new(BlockId(0));
    bb0.insns.push(cbranch_insn(cond_vn, 0x60000));
    bb0.successors = smallvec![BlockId(1), BlockId(2)];

    let mut bb1 = BasicBlock::new(BlockId(1));
    bb1.insns.push(arith_insn(r0, &[r8, c1], 0x60010));
    bb1.insns.push(ctrl_insn(IrOp::Branch, 0x60018));
    bb1.successors = smallvec![BlockId(3)];

    let mut bb2 = BasicBlock::new(BlockId(2));
    bb2.insns.push(arith_insn(r0, &[r8, c1], 0x60020));
    bb2.insns.push(ctrl_insn(IrOp::Branch, 0x60028));
    bb2.successors = smallvec![BlockId(3)];

    let mut bb3 = BasicBlock::new(BlockId(3));
    bb3.insns.push(ctrl_insn(IrOp::Return, 0x60030));

    func.insert_block(bb0);
    func.insert_block(bb1);
    func.insert_block(bb2);
    func.insert_block(bb3);

    let mut ssa = build_ssa(func);
    ssa.post_dom_tree = None;

    let hir = structure(&ssa).expect("structuring should succeed without post_dom_tree");

    fn contains_if(nodes: &[HirNode]) -> bool {
        nodes.iter().any(|n| match n {
            HirNode::If { .. } => true,
            HirNode::Block(inner) => contains_if(inner),
            _ => false,
        })
    }
    assert!(
        contains_if(&hir.body),
        "BFS fallback should still find join point"
    );
}

#[test]
fn test_postdom_early_return_no_join() {
    let cond_vn = Varnode::reg(256, 1);

    let mut func = Function::new("early_return", BlockId(0), 0x70000);

    let mut bb0 = BasicBlock::new(BlockId(0));
    bb0.insns.push(cbranch_insn(cond_vn, 0x70000));
    bb0.successors = smallvec![BlockId(1), BlockId(2)];

    let mut bb1 = BasicBlock::new(BlockId(1));
    bb1.insns.push(ctrl_insn(IrOp::Return, 0x70010));

    let mut bb2 = BasicBlock::new(BlockId(2));
    bb2.insns.push(ctrl_insn(IrOp::Return, 0x70020));

    func.insert_block(bb0);
    func.insert_block(bb1);
    func.insert_block(bb2);

    let ssa = build_ssa(func);

    let pdom = ssa
        .post_dom_tree
        .as_ref()
        .expect("should have post_dom_tree");
    let exit = ssa.cfg.exit_block();
    assert_eq!(
        pdom.idom(BlockId(0)),
        Some(exit),
        "both branches return → post-dom is exit"
    );

    let hir = structure(&ssa).expect("structuring should succeed");
    assert!(!hir.body.is_empty());
}

fn count_returns(nodes: &[HirNode]) -> usize {
    nodes
        .iter()
        .map(|n| match n {
            HirNode::Return(_) => 1,
            HirNode::Block(inner) => count_returns(inner),
            HirNode::If {
                then_body,
                else_body,
                ..
            } => count_returns(then_body) + else_body.as_ref().map_or(0, |eb| count_returns(eb)),
            HirNode::While { body, .. } | HirNode::DoWhile { body, .. } => count_returns(body),
            HirNode::For { body, .. } => count_returns(body),
            HirNode::Switch { cases, default, .. } => {
                cases
                    .iter()
                    .map(|(_, b, _)| count_returns(b))
                    .sum::<usize>()
                    + default.as_ref().map_or(0, |d| count_returns(d))
            }
            HirNode::TryCatch {
                try_body,
                catch_arms,
            } => {
                count_returns(try_body)
                    + catch_arms
                        .iter()
                        .map(|(_, body)| count_returns(body))
                        .sum::<usize>()
            }
            HirNode::TryFinally {
                try_body,
                finally_body,
            } => count_returns(try_body) + count_returns(finally_body),
            _ => 0,
        })
        .sum()
}

#[test]
fn test_multiple_returns_preserved() {
    let r0 = Varnode::reg(0, 8);
    let r8 = Varnode::reg(8, 8);
    let c1 = Varnode::constant(1, 8);
    let c2 = Varnode::constant(2, 8);
    let c3 = Varnode::constant(3, 8);
    let cond_vn = Varnode::reg(256, 1);

    let mut func = Function::new("multi_ret_shared", BlockId(0), 0x80000);

    let mut bb0 = BasicBlock::new(BlockId(0));
    bb0.insns.push(cbranch_insn(cond_vn, 0x80000));
    bb0.successors = smallvec![BlockId(1), BlockId(2)];

    let mut bb1 = BasicBlock::new(BlockId(1));
    bb1.insns.push(arith_insn(r0, &[r8, c1], 0x80010));
    bb1.insns.push(ctrl_insn(IrOp::Branch, 0x80014));
    bb1.successors = smallvec![BlockId(4)];

    let mut bb2 = BasicBlock::new(BlockId(2));
    bb2.insns.push(cbranch_insn(cond_vn, 0x80020));
    bb2.successors = smallvec![BlockId(3), BlockId(4)];

    let mut bb3 = BasicBlock::new(BlockId(3));
    bb3.insns.push(arith_insn(r0, &[r8, c2], 0x80030));
    bb3.insns.push(ctrl_insn(IrOp::Branch, 0x80034));
    bb3.successors = smallvec![BlockId(4)];

    let mut bb4 = BasicBlock::new(BlockId(4));
    bb4.insns.push(arith_insn(r0, &[r0, c3], 0x80040));
    bb4.insns.push(ctrl_insn(IrOp::Return, 0x80048));

    func.insert_block(bb0);
    func.insert_block(bb1);
    func.insert_block(bb2);
    func.insert_block(bb3);
    func.insert_block(bb4);

    let mut ssa = build_ssa(func);
    assert_eq!(ssa.cfg.predecessors(BlockId(4)).len(), 3);

    let hir_collapsed = structure(&ssa).expect("structuring should succeed");
    assert_eq!(
        count_returns(&hir_collapsed.body),
        1,
        "without eager_returns, shared exit collapses to 1 return"
    );

    let hir = structure_preserve_returns(&mut ssa).expect("structuring should succeed");

    assert_eq!(
        count_returns(&hir.body),
        3,
        "3 predecessors of shared return block must each emit a Return: {:#?}",
        hir.body,
    );
}

#[test]
fn test_single_return_unchanged() {
    let r0 = Varnode::reg(0, 8);
    let r8 = Varnode::reg(8, 8);
    let c1 = Varnode::constant(1, 8);

    let mut func = Function::new("single_ret", BlockId(0), 0x90000);

    let mut bb0 = BasicBlock::new(BlockId(0));
    bb0.insns.push(arith_insn(r0, &[r8, c1], 0x90000));
    bb0.insns.push(ctrl_insn(IrOp::Return, 0x90008));

    func.insert_block(bb0);

    let mut ssa = build_ssa(func);
    let hir = structure_preserve_returns(&mut ssa).expect("ok");

    assert_eq!(
        count_returns(&hir.body),
        1,
        "single return remains a single return: {:#?}",
        hir.body,
    );
}

fn count_gotos(nodes: &[HirNode]) -> usize {
    nodes
        .iter()
        .map(|n| match n {
            HirNode::Goto(_) => 1,
            HirNode::Block(inner) => count_gotos(inner),
            HirNode::If {
                then_body,
                else_body,
                ..
            } => count_gotos(then_body) + else_body.as_ref().map_or(0, |eb| count_gotos(eb)),
            HirNode::While { body, .. } | HirNode::DoWhile { body, .. } => count_gotos(body),
            HirNode::Switch { cases, default, .. } => {
                cases.iter().map(|(_, b, _)| count_gotos(b)).sum::<usize>()
                    + default.as_ref().map_or(0, |d| count_gotos(d))
            }
            HirNode::TryCatch {
                try_body,
                catch_arms,
            } => {
                count_gotos(try_body)
                    + catch_arms
                        .iter()
                        .map(|(_, body)| count_gotos(body))
                        .sum::<usize>()
            }
            HirNode::TryFinally {
                try_body,
                finally_body,
            } => count_gotos(try_body) + count_gotos(finally_body),
            HirNode::For { body, .. } => count_gotos(body),
            _ => 0,
        })
        .sum()
}

fn count_labels(nodes: &[HirNode]) -> usize {
    nodes
        .iter()
        .map(|n| match n {
            HirNode::Label(_) => 1,
            HirNode::Block(inner) => count_labels(inner),
            HirNode::If {
                then_body,
                else_body,
                ..
            } => count_labels(then_body) + else_body.as_ref().map_or(0, |eb| count_labels(eb)),
            HirNode::While { body, .. } | HirNode::DoWhile { body, .. } => count_labels(body),
            HirNode::Switch { cases, default, .. } => {
                cases.iter().map(|(_, b, _)| count_labels(b)).sum::<usize>()
                    + default.as_ref().map_or(0, |d| count_labels(d))
            }
            HirNode::TryCatch {
                try_body,
                catch_arms,
            } => {
                count_labels(try_body)
                    + catch_arms
                        .iter()
                        .map(|(_, body)| count_labels(body))
                        .sum::<usize>()
            }
            HirNode::TryFinally {
                try_body,
                finally_body,
            } => count_labels(try_body) + count_labels(finally_body),
            HirNode::For { body, .. } => count_labels(body),
            _ => 0,
        })
        .sum()
}

/// P6-5 regression: a clean diamond CFG (BB0 → BB1/BB2 → BB3 → return)
/// must NOT emit any goto/label. This ensures the new goto-emission path
/// doesn't fire on every multi-pred join point — only irreducible ones.
#[test]
fn test_no_goto_for_clean_diamond() {
    let r0 = Varnode::reg(0, 8);
    let r8 = Varnode::reg(8, 8);
    let c1 = Varnode::constant(1, 8);
    let c2 = Varnode::constant(2, 8);
    let cond_vn = Varnode::reg(256, 1);

    let mut func = Function::new("clean_diamond", BlockId(0), 0xC0000);

    let mut bb0 = BasicBlock::new(BlockId(0));
    bb0.insns.push(cbranch_insn(cond_vn, 0xC0000));
    bb0.successors = smallvec![BlockId(1), BlockId(2)];

    let mut bb1 = BasicBlock::new(BlockId(1));
    bb1.insns.push(arith_insn(r0, &[r8, c1], 0xC0010));
    bb1.insns.push(ctrl_insn(IrOp::Branch, 0xC0018));
    bb1.successors = smallvec![BlockId(3)];

    let mut bb2 = BasicBlock::new(BlockId(2));
    bb2.insns.push(arith_insn(r0, &[r8, c2], 0xC0020));
    bb2.insns.push(ctrl_insn(IrOp::Branch, 0xC0028));
    bb2.successors = smallvec![BlockId(3)];

    let mut bb3 = BasicBlock::new(BlockId(3));
    bb3.insns.push(ctrl_insn(IrOp::Return, 0xC0030));

    func.insert_block(bb0);
    func.insert_block(bb1);
    func.insert_block(bb2);
    func.insert_block(bb3);

    let ssa = build_ssa(func);
    let hir = structure(&ssa).expect("structuring should succeed");

    assert_eq!(
        count_gotos(&hir.body),
        0,
        "clean diamond must not emit any goto: {:#?}",
        hir.body,
    );
    assert_eq!(
        count_labels(&hir.body),
        0,
        "clean diamond must not emit any label: {:#?}",
        hir.body,
    );
}

/// P6-5: an irreducible CFG (two predecessors entering a non-loop-header
/// join along independent paths that have already been linearized) must
/// emit at least one goto + label pair. Construct: BB0 → BB1 → BB3,
/// BB0 → BB2 → BB3, then BB3's other predecessor is reached via a path
/// the structurer cannot express with `if`/`while`. We force this by
/// having BB3 reachable via BB1 *and* via a back-edge BB2 → BB1
/// (creating an irreducible component).
#[test]
fn test_goto_emitted_for_irreducible_cycle() {
    let r0 = Varnode::reg(0, 8);
    let r8 = Varnode::reg(8, 8);
    let c1 = Varnode::constant(1, 8);
    let cond_vn = Varnode::reg(256, 1);

    let mut func = Function::new("irreducible_goto", BlockId(0), 0xD0000);

    // BB0: cbranch → BB1 / BB2 (both enter the irreducible loop)
    let mut bb0 = BasicBlock::new(BlockId(0));
    bb0.insns.push(cbranch_insn(cond_vn, 0xD0000));
    bb0.successors = smallvec![BlockId(1), BlockId(2)];

    // BB1: arith, cbranch → BB2 / BB3
    let mut bb1 = BasicBlock::new(BlockId(1));
    bb1.insns.push(arith_insn(r0, &[r8, c1], 0xD0010));
    bb1.insns.push(cbranch_insn(cond_vn, 0xD0018));
    bb1.successors = smallvec![BlockId(2), BlockId(3)];

    // BB2: arith, cbranch → BB1 / BB3 (BB2 → BB1 makes BB1 multi-entry)
    let mut bb2 = BasicBlock::new(BlockId(2));
    bb2.insns.push(arith_insn(r0, &[r0, c1], 0xD0020));
    bb2.insns.push(cbranch_insn(cond_vn, 0xD0028));
    bb2.successors = smallvec![BlockId(1), BlockId(3)];

    let mut bb3 = BasicBlock::new(BlockId(3));
    bb3.insns.push(ctrl_insn(IrOp::Return, 0xD0030));

    func.insert_block(bb0);
    func.insert_block(bb1);
    func.insert_block(bb2);
    func.insert_block(bb3);

    let ssa = build_ssa(func);
    let hir = structure(&ssa).expect("irreducible CFG must not panic");

    let gotos = count_gotos(&hir.body);
    let labels = count_labels(&hir.body);
    assert!(
        gotos >= 1,
        "irreducible CFG must emit at least one goto, got {gotos}: {:#?}",
        hir.body,
    );
    assert!(
        labels >= 1,
        "irreducible CFG must emit a matching label, got {labels}: {:#?}",
        hir.body,
    );
}

/// P6-5: every emitted goto must have a matching label in the same HIR
/// tree. Otherwise a downstream C-printer would produce code that
/// references an undefined label.
#[test]
fn test_goto_label_pairs_match() {
    let r0 = Varnode::reg(0, 8);
    let r8 = Varnode::reg(8, 8);
    let c1 = Varnode::constant(1, 8);
    let cond_vn = Varnode::reg(256, 1);

    let mut func = Function::new("paired_goto_label", BlockId(0), 0xE0000);

    let mut bb0 = BasicBlock::new(BlockId(0));
    bb0.insns.push(cbranch_insn(cond_vn, 0xE0000));
    bb0.successors = smallvec![BlockId(1), BlockId(2)];

    let mut bb1 = BasicBlock::new(BlockId(1));
    bb1.insns.push(arith_insn(r0, &[r8, c1], 0xE0010));
    bb1.insns.push(cbranch_insn(cond_vn, 0xE0018));
    bb1.successors = smallvec![BlockId(2), BlockId(3)];

    let mut bb2 = BasicBlock::new(BlockId(2));
    bb2.insns.push(arith_insn(r0, &[r0, c1], 0xE0020));
    bb2.insns.push(cbranch_insn(cond_vn, 0xE0028));
    bb2.successors = smallvec![BlockId(1), BlockId(3)];

    let mut bb3 = BasicBlock::new(BlockId(3));
    bb3.insns.push(ctrl_insn(IrOp::Return, 0xE0030));

    func.insert_block(bb0);
    func.insert_block(bb1);
    func.insert_block(bb2);
    func.insert_block(bb3);

    let ssa = build_ssa(func);
    let hir = structure(&ssa).expect("structuring should succeed");

    fn collect_label_ids(nodes: &[HirNode], labels: &mut BTreeSet<u32>) {
        for n in nodes {
            match n {
                HirNode::Label(LabelId(id)) => {
                    labels.insert(*id);
                }
                HirNode::Block(inner) => collect_label_ids(inner, labels),
                HirNode::If {
                    then_body,
                    else_body,
                    ..
                } => {
                    collect_label_ids(then_body, labels);
                    if let Some(eb) = else_body {
                        collect_label_ids(eb, labels);
                    }
                }
                HirNode::While { body, .. } | HirNode::DoWhile { body, .. } => {
                    collect_label_ids(body, labels);
                }
                _ => {}
            }
        }
    }
    fn collect_goto_ids(nodes: &[HirNode], gotos: &mut BTreeSet<u32>) {
        for n in nodes {
            match n {
                HirNode::Goto(LabelId(id)) => {
                    gotos.insert(*id);
                }
                HirNode::Block(inner) => collect_goto_ids(inner, gotos),
                HirNode::If {
                    then_body,
                    else_body,
                    ..
                } => {
                    collect_goto_ids(then_body, gotos);
                    if let Some(eb) = else_body {
                        collect_goto_ids(eb, gotos);
                    }
                }
                HirNode::While { body, .. } | HirNode::DoWhile { body, .. } => {
                    collect_goto_ids(body, gotos);
                }
                _ => {}
            }
        }
    }

    let mut labels = BTreeSet::new();
    let mut gotos = BTreeSet::new();
    collect_label_ids(&hir.body, &mut labels);
    collect_goto_ids(&hir.body, &mut gotos);

    for goto_id in &gotos {
        assert!(
            labels.contains(goto_id),
            "goto {goto_id} has no matching label; labels={labels:?}, gotos={gotos:?}, hir={:#?}",
            hir.body,
        );
    }
}

#[test]
fn structure_does_not_panic_on_stale_panic_site_indices() {
    // Regression: panic_sites populated by an earlier pass may reference
    // (BlockId, idx) pairs that a later pass has removed (e.g. block
    // dropped or instructions truncated). The structurer must not index
    // unconditionally — out-of-range entries are silently dropped.
    use unlace_ir::ssa::PanicKind;

    let r0 = Varnode::reg(0, 8);
    let r8 = Varnode::reg(8, 8);
    let c1 = Varnode::constant(1, 8);

    let mut func = Function::new("stale_panic_sites", BlockId(0), 0x1000);
    let mut bb0 = BasicBlock::new(BlockId(0));
    bb0.insns.push(arith_insn(r0, &[r8, c1], 0x1000));
    bb0.insns.push(ctrl_insn(IrOp::Return, 0x1008));
    func.insert_block(bb0);

    let mut ssa = build_ssa(func);
    ssa.panic_sites.insert((BlockId(0), 99), PanicKind::Panic);
    ssa.panic_sites.insert((BlockId(42), 0), PanicKind::Abort);
    ssa.panic_sites
        .insert((BlockId(0), 0), PanicKind::BoundsCheck);

    let hir = structure(&ssa).expect("structuring should succeed");

    assert_eq!(
        hir.panic_sites.len(),
        1,
        "only the valid (BlockId(0), 0) entry should survive"
    );
    assert!(hir.panic_sites.contains_key(&0x1000));
}

/// t77: A `cmp index, 5; jb dispatch` pattern in the predecessor of a
/// BRANCHIND should yield a `BoundsCheck { case_count: 5, default_target: BB2 }`
/// and propagate `case_count` into `Switch::jumptable_cases`.
#[test]
fn bounds_check_int_less_recovers_case_count() {
    let r_index = Varnode::reg(0x10, 8);
    let cond_vn = Varnode::reg(0x100, 1);
    let table_base = Varnode::constant(0x20000, 8);
    let c4 = Varnode::constant(4, 8);
    let c5 = Varnode::constant(5, 8);
    let scaled = Varnode::unique(100, 8);
    let addr = Varnode::unique(200, 8);
    let target = Varnode::unique(300, 8);
    let ram = Varnode::constant(1, 8);

    let mut func = Function::new("bounds_switch", BlockId(0), 0x9000);

    let mut bb0 = BasicBlock::new(BlockId(0));
    bb0.insns.push(IrInsn::with_output(
        IrOp::IntLess,
        cond_vn,
        smallvec![r_index, c5],
        0x9000,
    ));
    bb0.insns.push(cbranch_insn(cond_vn, 0x9004));
    bb0.successors = smallvec![BlockId(1), BlockId(99)];

    let mut bb1 = BasicBlock::new(BlockId(1));
    bb1.insns.push(IrInsn::with_output(
        IrOp::IntMult,
        scaled,
        smallvec![r_index, c4],
        0x9010,
    ));
    bb1.insns.push(IrInsn::with_output(
        IrOp::IntAdd,
        addr,
        smallvec![table_base, scaled],
        0x9014,
    ));
    bb1.insns.push(IrInsn::with_output(
        IrOp::Load,
        target,
        smallvec![ram, addr],
        0x9018,
    ));
    bb1.insns.push(IrInsn::without_output(
        IrOp::Branchind,
        smallvec![target],
        0x901c,
    ));
    bb1.successors = smallvec![BlockId(10), BlockId(11), BlockId(12)];

    let mut bb10 = BasicBlock::new(BlockId(10));
    bb10.insns.push(ctrl_insn(IrOp::Return, 0x9100));
    let mut bb11 = BasicBlock::new(BlockId(11));
    bb11.insns.push(ctrl_insn(IrOp::Return, 0x9110));
    let mut bb12 = BasicBlock::new(BlockId(12));
    bb12.insns.push(ctrl_insn(IrOp::Return, 0x9120));

    let mut bb99 = BasicBlock::new(BlockId(99));
    bb99.insns.push(ctrl_insn(IrOp::Return, 0x9200));

    func.insert_block(bb0);
    func.insert_block(bb1);
    func.insert_block(bb10);
    func.insert_block(bb11);
    func.insert_block(bb12);
    func.insert_block(bb99);

    let ssa = build_ssa(func);
    let hir = structure(&ssa).expect("structuring should succeed");

    fn find_switch(nodes: &[HirNode]) -> Option<&HirNode> {
        for n in nodes {
            match n {
                HirNode::Switch { .. } => return Some(n),
                HirNode::Block(inner) => {
                    if let Some(s) = find_switch(inner) {
                        return Some(s);
                    }
                }
                HirNode::If {
                    then_body,
                    else_body,
                    ..
                } => {
                    if let Some(s) = find_switch(then_body) {
                        return Some(s);
                    }
                    if let Some(eb) = else_body
                        && let Some(s) = find_switch(eb)
                    {
                        return Some(s);
                    }
                }
                _ => {}
            }
        }
        None
    }
    let switch = find_switch(&hir.body).expect("should produce a Switch");
    match switch {
        HirNode::Switch {
            jumptable_cases, ..
        } => {
            assert_eq!(
                *jumptable_cases,
                Some(5),
                "IntLess(index, 5) should give case_count=5"
            );
        }
        _ => panic!(),
    }
}

/// t77: `IntSub(index, K)` followed by a CBRANCH on the high bit acts as
/// `index >= K` — the switch path is ConditionalFalse and case_count = K.
#[test]
fn bounds_check_int_sub_recovers_case_count() {
    let ctx = make_bounds_ctx_int_sub();
    let switch_block = BlockId(1);
    let index = SsaVarnode {
        base: Varnode::reg(0x10, 8),
        version: 0,
    };
    let bc = ctx
        .extract_bounds_check(switch_block, &index)
        .expect("IntSub bounds pattern should match");
    assert_eq!(bc.case_count, 7, "IntSub(index, 7) → case_count = 7");
}

/// t74: `IntAnd(raw, 0xF)` chained into a multiply-scale should resolve
/// down to `raw` when walked through the bitwise chain.
#[test]
fn bitwise_chain_int_and_resolves_to_source() {
    let raw = Varnode::reg(0x20, 8);
    let masked = Varnode::unique(40, 8);
    let scaled = Varnode::unique(50, 8);
    let mask = Varnode::constant(0xF, 8);
    let scale = Varnode::constant(8, 8);

    let mut func = Function::new("and_chain", BlockId(0), 0xB000);
    let mut bb0 = BasicBlock::new(BlockId(0));
    bb0.insns.push(IrInsn::with_output(
        IrOp::IntAnd,
        masked,
        smallvec![raw, mask],
        0xB000,
    ));
    bb0.insns.push(IrInsn::with_output(
        IrOp::IntMult,
        scaled,
        smallvec![masked, scale],
        0xB002,
    ));
    bb0.insns.push(ctrl_insn(IrOp::Return, 0xB004));
    func.insert_block(bb0);

    let ssa = build_ssa(func);
    let leaked: &'static SsaFunction = Box::leak(Box::new(ssa));
    let ctx = StructureCtx::new(leaked);
    let scaled_sv = SsaVarnode {
        base: scaled,
        version: 0,
    };
    let out = ctx
        .extract_index_from_scale(BlockId(0), &scaled_sv)
        .expect("should resolve");
    assert_eq!(
        out.base, raw,
        "IntAnd(raw, mask) chain should resolve back to raw"
    );
}

/// t74: `IntRight(raw, 4)` chain should walk through to `raw`.
#[test]
fn bitwise_chain_int_right_resolves_to_source() {
    let raw = Varnode::reg(0x20, 8);
    let shifted = Varnode::unique(40, 8);
    let scaled = Varnode::unique(50, 8);
    let four = Varnode::constant(4, 8);
    let scale = Varnode::constant(4, 8);

    let mut func = Function::new("right_chain", BlockId(0), 0xC000);
    let mut bb0 = BasicBlock::new(BlockId(0));
    bb0.insns.push(IrInsn::with_output(
        IrOp::IntRight,
        shifted,
        smallvec![raw, four],
        0xC000,
    ));
    bb0.insns.push(IrInsn::with_output(
        IrOp::IntMult,
        scaled,
        smallvec![shifted, scale],
        0xC002,
    ));
    bb0.insns.push(ctrl_insn(IrOp::Return, 0xC004));
    func.insert_block(bb0);

    let ssa = build_ssa(func);
    let leaked: &'static SsaFunction = Box::leak(Box::new(ssa));
    let ctx = StructureCtx::new(leaked);
    let scaled_sv = SsaVarnode {
        base: scaled,
        version: 0,
    };
    let out = ctx
        .extract_index_from_scale(BlockId(0), &scaled_sv)
        .expect("should resolve");
    assert_eq!(
        out.base, raw,
        "IntRight(raw, shift) chain should resolve back to raw"
    );
}

/// t74: chained `(x >> 4) & 0xF` then scale should resolve all the way
/// through both ops back to `x`.
#[test]
fn bitwise_chain_shift_then_mask_resolves_to_source() {
    let raw = Varnode::reg(0x20, 8);
    let shifted = Varnode::unique(40, 8);
    let masked = Varnode::unique(45, 8);
    let scaled = Varnode::unique(50, 8);
    let four = Varnode::constant(4, 8);
    let mask = Varnode::constant(0xF, 8);
    let scale = Varnode::constant(8, 8);

    let mut func = Function::new("shift_mask_chain", BlockId(0), 0xD000);
    let mut bb0 = BasicBlock::new(BlockId(0));
    bb0.insns.push(IrInsn::with_output(
        IrOp::IntRight,
        shifted,
        smallvec![raw, four],
        0xD000,
    ));
    bb0.insns.push(IrInsn::with_output(
        IrOp::IntAnd,
        masked,
        smallvec![shifted, mask],
        0xD002,
    ));
    bb0.insns.push(IrInsn::with_output(
        IrOp::IntMult,
        scaled,
        smallvec![masked, scale],
        0xD004,
    ));
    bb0.insns.push(ctrl_insn(IrOp::Return, 0xD006));
    func.insert_block(bb0);

    let ssa = build_ssa(func);
    let leaked: &'static SsaFunction = Box::leak(Box::new(ssa));
    let ctx = StructureCtx::new(leaked);
    let scaled_sv = SsaVarnode {
        base: scaled,
        version: 0,
    };
    let out = ctx
        .extract_index_from_scale(BlockId(0), &scaled_sv)
        .expect("should resolve");
    assert_eq!(
        out.base, raw,
        "(x >> 4) & 0xF chain should resolve back to x"
    );
}

fn make_bounds_ctx_int_sub() -> StructureCtx<'static> {
    let r_index = Varnode::reg(0x10, 8);
    let cond_vn = Varnode::reg(0x100, 1);
    let c7 = Varnode::constant(7, 8);
    let sub_out = Varnode::unique(50, 8);

    let mut func = Function::new("sub_bounds", BlockId(0), 0xA000);

    let mut bb0 = BasicBlock::new(BlockId(0));
    bb0.insns.push(IrInsn::with_output(
        IrOp::IntSub,
        sub_out,
        smallvec![r_index, c7],
        0xA000,
    ));
    bb0.insns.push(IrInsn::with_output(
        IrOp::IntLess,
        cond_vn,
        smallvec![r_index, c7],
        0xA002,
    ));
    bb0.insns.push(cbranch_insn(cond_vn, 0xA004));
    bb0.successors = smallvec![BlockId(1), BlockId(99)];

    let mut bb1 = BasicBlock::new(BlockId(1));
    bb1.insns.push(IrInsn::without_output(
        IrOp::Branchind,
        smallvec![sub_out],
        0xA010,
    ));
    bb1.successors = smallvec![BlockId(10), BlockId(11)];

    let mut bb10 = BasicBlock::new(BlockId(10));
    bb10.insns.push(ctrl_insn(IrOp::Return, 0xA100));
    let mut bb11 = BasicBlock::new(BlockId(11));
    bb11.insns.push(ctrl_insn(IrOp::Return, 0xA110));
    let mut bb99 = BasicBlock::new(BlockId(99));
    bb99.insns.push(ctrl_insn(IrOp::Return, 0xA200));

    func.insert_block(bb0);
    func.insert_block(bb1);
    func.insert_block(bb10);
    func.insert_block(bb11);
    func.insert_block(bb99);

    let ssa = build_ssa(func);
    let leaked: &'static SsaFunction = Box::leak(Box::new(ssa));
    StructureCtx::new(leaked)
}

/// t125: an ARM/Thumb byte-table indirect-branch shape (LOAD u8 +
/// INT_ADD + BRANCHIND) should be classified as
/// `IndirectBranchKind::ArmThumbTable` and recorded on
/// `HirFunction::indirect_branch_kinds` keyed by the BRANCHIND VA.
#[test]
fn structurer_classifies_arm_thumb_indirect_branch_when_pattern_matches() {
    let table_base = Varnode::constant(0x8000, 4);
    let idx = Varnode::reg(0x10, 4);
    let off_byte = Varnode::unique(1, 1);
    let off_word = Varnode::unique(2, 4);
    let target = Varnode::unique(3, 4);

    let mut func = Function::new("arm_thumb_tbb", BlockId(0), 0x1000);
    let mut bb0 = BasicBlock::new(BlockId(0));
    bb0.insns.push(IrInsn::with_output(
        IrOp::Load,
        off_byte,
        smallvec![Varnode::constant(1, 8), table_base, idx],
        0x1000,
    ));
    bb0.insns.push(IrInsn::with_output(
        IrOp::IntAdd,
        target,
        smallvec![table_base, off_word],
        0x1004,
    ));
    bb0.insns.push(IrInsn::without_output(
        IrOp::Branchind,
        smallvec![target],
        0x1008,
    ));
    bb0.successors = smallvec![BlockId(1)];

    let mut bb1 = BasicBlock::new(BlockId(1));
    bb1.insns.push(ctrl_insn(IrOp::Return, 0x1010));

    func.insert_block(bb0);
    func.insert_block(bb1);

    let ssa = build_ssa(func);
    let hir = structure_with_arch(&ssa, ArchId::Arm).expect("structuring should succeed");

    assert_eq!(
        hir.indirect_branch_kinds.get(&0x1008),
        Some(&IndirectBranchKind::ArmThumbTable),
        "ARM TBB-shape BRANCHIND should classify as ArmThumbTable"
    );
}

/// t125: An x86 indirect branch whose successors don't form a
/// structured switch should leave `indirect_branch_kinds` empty
/// (the existing generic / x86 switch path already handles those).
#[test]
fn structurer_leaves_indirect_branch_kinds_empty_for_x86() {
    let table_base = Varnode::constant(0x8000, 8);
    let idx = Varnode::reg(0x10, 8);
    let target = Varnode::unique(1, 8);

    let mut func = Function::new("x86_unstructured", BlockId(0), 0x2000);
    let mut bb0 = BasicBlock::new(BlockId(0));
    bb0.insns.push(IrInsn::with_output(
        IrOp::Load,
        target,
        smallvec![Varnode::constant(1, 8), table_base, idx],
        0x2000,
    ));
    bb0.insns.push(IrInsn::without_output(
        IrOp::Branchind,
        smallvec![target],
        0x2004,
    ));
    bb0.successors = smallvec![BlockId(1), BlockId(2)];

    let mut bb1 = BasicBlock::new(BlockId(1));
    bb1.insns.push(ctrl_insn(IrOp::Return, 0x2100));
    let mut bb2 = BasicBlock::new(BlockId(2));
    bb2.insns.push(ctrl_insn(IrOp::Return, 0x2200));

    func.insert_block(bb0);
    func.insert_block(bb1);
    func.insert_block(bb2);

    let ssa = build_ssa(func);
    let hir = structure_with_arch(&ssa, ArchId::X86_64).expect("structuring should succeed");

    assert!(
        hir.indirect_branch_kinds.is_empty(),
        "x86 BRANCHIND with multiple IndirectJump successors is consumed by \
         the structured-switch path and must not appear in indirect_branch_kinds"
    );
}

// -------------------------------------------------------------------
// t148: IT-block guard → HirNode::GuardedIf
// -------------------------------------------------------------------

fn guarded_arith(output: Varnode, inputs: &[Varnode], addr: u64, cc: u8) -> IrInsn {
    let mut insn = arith_insn(output, inputs, addr);
    insn.guard = Some(cc);
    insn
}

fn collect_guarded_ifs(nodes: &[HirNode], out: &mut Vec<(u8, usize, usize)>) {
    for n in nodes {
        match n {
            HirNode::GuardedIf {
                cond_code,
                then_body,
                else_body,
            } => {
                out.push((*cond_code, then_body.len(), else_body.len()));
                collect_guarded_ifs(then_body, out);
                collect_guarded_ifs(else_body, out);
            }
            HirNode::Block(inner) => collect_guarded_ifs(inner, out),
            HirNode::If {
                then_body,
                else_body,
                ..
            } => {
                collect_guarded_ifs(then_body, out);
                if let Some(eb) = else_body {
                    collect_guarded_ifs(eb, out);
                }
            }
            _ => {}
        }
    }
}

#[test]
fn it_block_emits_if_in_hir() {
    let r0 = Varnode::reg(0, 8);
    let r8 = Varnode::reg(8, 8);
    let c1 = Varnode::constant(1, 8);

    let mut func = Function::new("it_single", BlockId(0), 0x5000);
    let mut bb0 = BasicBlock::new(BlockId(0));
    // Single insn carrying an IT-block guard (cond=EQ=0).
    bb0.insns.push(guarded_arith(r0, &[r8, c1], 0x5000, 0));
    bb0.insns.push(ctrl_insn(IrOp::Return, 0x5004));
    func.insert_block(bb0);

    let ssa = build_ssa(func);
    let hir = structure(&ssa).expect("structuring should succeed");

    let mut found = Vec::new();
    collect_guarded_ifs(&hir.body, &mut found);
    assert_eq!(found.len(), 1, "expected one GuardedIf, got {found:?}");
    assert_eq!(found[0].0, 0, "cond_code should be EQ (0)");
    assert_eq!(
        found[0].1, 1,
        "then_body should hold the single guarded insn"
    );
    assert_eq!(found[0].2, 0, "else_body empty for pure IT");
}

#[test]
fn consecutive_same_cond_insns_grouped() {
    let r0 = Varnode::reg(0, 8);
    let r1 = Varnode::reg(8, 8);
    let r2 = Varnode::reg(16, 8);
    let r3 = Varnode::reg(24, 8);
    let c1 = Varnode::constant(1, 8);

    let mut func = Function::new("it_grouped", BlockId(0), 0x6000);
    let mut bb0 = BasicBlock::new(BlockId(0));
    bb0.insns.push(guarded_arith(r0, &[r1, c1], 0x6000, 0));
    bb0.insns.push(guarded_arith(r2, &[r1, c1], 0x6004, 0));
    bb0.insns.push(guarded_arith(r3, &[r1, c1], 0x6008, 0));
    bb0.insns.push(ctrl_insn(IrOp::Return, 0x600C));
    func.insert_block(bb0);

    let ssa = build_ssa(func);
    let hir = structure(&ssa).expect("structuring should succeed");

    let mut found = Vec::new();
    collect_guarded_ifs(&hir.body, &mut found);
    assert_eq!(
        found.len(),
        1,
        "three same-cond insns should fuse into one GuardedIf, got {found:?}"
    );
    assert_eq!(found[0].0, 0);
    assert_eq!(
        found[0].1, 3,
        "all three guarded insns should land in then_body"
    );
    assert_eq!(found[0].2, 0, "else_body empty for pure IT");
}

// -------------------------------------------------------------------
// t149: ITE else-fusion
// -------------------------------------------------------------------

#[test]
fn ite_block_fuses_into_if_else() {
    let r0 = Varnode::reg(0, 8);
    let r1 = Varnode::reg(8, 8);
    let r2 = Varnode::reg(16, 8);
    let r3 = Varnode::reg(24, 8);
    let c1 = Varnode::constant(1, 8);

    let mut func = Function::new("ite_fuse", BlockId(0), 0x7000);
    let mut bb0 = BasicBlock::new(BlockId(0));
    bb0.insns.push(guarded_arith(r0, &[r1, c1], 0x7000, 0));
    bb0.insns.push(guarded_arith(r2, &[r1, c1], 0x7004, 0));
    bb0.insns.push(guarded_arith(r3, &[r1, c1], 0x7008, 1));
    bb0.insns.push(ctrl_insn(IrOp::Return, 0x700C));
    func.insert_block(bb0);

    let ssa = build_ssa(func);
    let hir = structure(&ssa).expect("structuring should succeed");

    let mut found = Vec::new();
    collect_guarded_ifs(&hir.body, &mut found);
    assert_eq!(
        found.len(),
        1,
        "T+E lanes should fuse into one GuardedIf, got {found:?}"
    );
    assert_eq!(found[0].0, 0, "fused cond_code keeps the T-lane cond (EQ)");
    assert_eq!(found[0].1, 2, "then_body has the two T-lane insns");
    assert_eq!(found[0].2, 1, "else_body has the one E-lane insn");
}

#[test]
fn iteee_fuses_then_keeps_else_pure() {
    let r0 = Varnode::reg(0, 8);
    let r1 = Varnode::reg(8, 8);
    let r2 = Varnode::reg(16, 8);
    let r3 = Varnode::reg(24, 8);
    let r4 = Varnode::reg(32, 8);
    let c1 = Varnode::constant(1, 8);

    let mut func = Function::new("iteee_fuse", BlockId(0), 0x8000);
    let mut bb0 = BasicBlock::new(BlockId(0));
    bb0.insns.push(guarded_arith(r0, &[r1, c1], 0x8000, 0));
    bb0.insns.push(guarded_arith(r2, &[r1, c1], 0x8004, 1));
    bb0.insns.push(guarded_arith(r3, &[r1, c1], 0x8008, 1));
    bb0.insns.push(guarded_arith(r4, &[r1, c1], 0x800C, 1));
    bb0.insns.push(ctrl_insn(IrOp::Return, 0x8010));
    func.insert_block(bb0);

    let ssa = build_ssa(func);
    let hir = structure(&ssa).expect("structuring should succeed");

    let mut found = Vec::new();
    collect_guarded_ifs(&hir.body, &mut found);
    assert_eq!(
        found.len(),
        1,
        "ITEEE fuses to one GuardedIf, got {found:?}"
    );
    assert_eq!(found[0].0, 0);
    assert_eq!(found[0].1, 1, "single T-lane insn");
    assert_eq!(found[0].2, 3, "three E-lane insns");
}

#[test]
fn t316_four_slot_alternating_it_fuses_to_one_if_else() {
    let r0 = Varnode::reg(0, 8);
    let r1 = Varnode::reg(8, 8);
    let r2 = Varnode::reg(16, 8);
    let r3 = Varnode::reg(24, 8);
    let r4 = Varnode::reg(32, 8);
    let c1 = Varnode::constant(1, 8);

    let mut func = Function::new("it_alt4_fuse", BlockId(0), 0xA0000);
    let mut bb0 = BasicBlock::new(BlockId(0));
    // ITETE EQ lowers to four guarded slots: T, E, T, E. A shallow
    // pairwise fuse would leave two sibling if/else nodes; deep IT
    // recovery must collect all T lanes and all E lanes into one node.
    bb0.insns.push(guarded_arith(r0, &[r1, c1], 0xA0000, 0));
    bb0.insns.push(guarded_arith(r2, &[r1, c1], 0xA0002, 1));
    bb0.insns.push(guarded_arith(r3, &[r1, c1], 0xA0004, 0));
    bb0.insns.push(guarded_arith(r4, &[r1, c1], 0xA0006, 1));
    bb0.insns.push(ctrl_insn(IrOp::Return, 0xA0008));
    func.insert_block(bb0);

    let ssa = build_ssa(func);
    let hir = structure(&ssa).expect("structuring should succeed");

    let mut found = Vec::new();
    collect_guarded_ifs(&hir.body, &mut found);
    assert_eq!(
        found.len(),
        1,
        "ITETE should become one GuardedIf, got {found:?}"
    );
    assert_eq!(found[0].0, 0);
    assert_eq!(found[0].1, 2, "two T-lane statements in then_body");
    assert_eq!(found[0].2, 2, "two E-lane statements in else_body");
}

#[test]
fn consecutive_unrelated_conds_dont_fuse() {
    let r0 = Varnode::reg(0, 8);
    let r1 = Varnode::reg(8, 8);
    let r2 = Varnode::reg(16, 8);
    let c1 = Varnode::constant(1, 8);

    let mut func = Function::new("no_fuse", BlockId(0), 0x9000);
    let mut bb0 = BasicBlock::new(BlockId(0));
    bb0.insns.push(guarded_arith(r0, &[r1, c1], 0x9000, 0));
    bb0.insns.push(guarded_arith(r2, &[r1, c1], 0x9004, 12));
    bb0.insns.push(ctrl_insn(IrOp::Return, 0x9008));
    func.insert_block(bb0);

    let ssa = build_ssa(func);
    let hir = structure(&ssa).expect("structuring should succeed");

    let mut found = Vec::new();
    collect_guarded_ifs(&hir.body, &mut found);
    assert_eq!(
        found.len(),
        2,
        "non-inverse adjacent guards stay as two GuardedIfs, got {found:?}"
    );
    assert_eq!(found[0].2, 0);
    assert_eq!(found[1].2, 0);
}

// -------------------------------------------------------------------
// t167: GuardedIf → GuardedTernary idiom recognition
// -------------------------------------------------------------------

fn guarded_copy(output: Varnode, input: Varnode, addr: u64, cc: u8) -> IrInsn {
    let mut insn = copy_insn(output, input, addr);
    insn.guard = Some(cc);
    insn
}

fn collect_guarded_ternaries(nodes: &[HirNode], out: &mut Vec<(u8, Varnode)>) {
    for n in nodes {
        match n {
            HirNode::GuardedTernary {
                cond_code, output, ..
            } => out.push((*cond_code, *output)),
            HirNode::Block(inner) => collect_guarded_ternaries(inner, out),
            HirNode::If {
                then_body,
                else_body,
                ..
            } => {
                collect_guarded_ternaries(then_body, out);
                if let Some(eb) = else_body {
                    collect_guarded_ternaries(eb, out);
                }
            }
            HirNode::GuardedIf {
                then_body,
                else_body,
                ..
            } => {
                collect_guarded_ternaries(then_body, out);
                collect_guarded_ternaries(else_body, out);
            }
            _ => {}
        }
    }
}

/// The canonical ITE-fold idiom:
///   IT EQ; movs r0, #1; mov r0, #2  ≈  r0 = cond_eq ? 1 : 2.
/// After `fuse_guarded_if_else` produces a single `GuardedIf` with
/// `else_body`, `fold_guarded_ternary` must collapse it into one
/// `GuardedTernary` carrying the EQ cond and r0 as the shared output.
#[test]
fn t167_ite_with_copies_folds_to_guarded_ternary() {
    let r0 = Varnode::reg(0, 8);
    let c1 = Varnode::constant(1, 8);
    let c2 = Varnode::constant(2, 8);

    let mut func = Function::new("ite_fold_copy", BlockId(0), 0xA000);
    let mut bb0 = BasicBlock::new(BlockId(0));
    // T-lane: r0 = 1  (cond=EQ=0)
    bb0.insns.push(guarded_copy(r0, c1, 0xA000, 0));
    // E-lane: r0 = 2  (cond=NE=1, the inverse of EQ)
    bb0.insns.push(guarded_copy(r0, c2, 0xA004, 1));
    bb0.insns.push(ctrl_insn(IrOp::Return, 0xA008));
    func.insert_block(bb0);

    let ssa = build_ssa(func);
    let hir = structure(&ssa).expect("structuring should succeed");

    // Exactly one GuardedTernary, none of the original GuardedIfs left.
    let mut ternaries = Vec::new();
    collect_guarded_ternaries(&hir.body, &mut ternaries);
    assert_eq!(
        ternaries.len(),
        1,
        "expected 1 GuardedTernary, got {ternaries:?}"
    );
    assert_eq!(ternaries[0].0, 0, "cond_code should be EQ (T-lane cond)");
    assert_eq!(ternaries[0].1, r0, "output should be r0");

    let mut guarded_ifs = Vec::new();
    collect_guarded_ifs(&hir.body, &mut guarded_ifs);
    assert!(
        guarded_ifs.is_empty(),
        "the GuardedIf should have been folded away, got {guarded_ifs:?}"
    );

    // The folded node carries the two Copy insns intact.
    let HirNode::GuardedTernary {
        then_insn,
        else_insn,
        ..
    } = hir
        .body
        .iter()
        .find(|n| matches!(n, HirNode::GuardedTernary { .. }))
        .expect("GuardedTernary present in top-level body")
    else {
        unreachable!()
    };
    assert_eq!(then_insn.op, IrOp::Copy);
    assert_eq!(else_insn.op, IrOp::Copy);
    assert_eq!(then_insn.inputs[0], c1);
    assert_eq!(else_insn.inputs[0], c2);
}

/// Same shape, different cond code (GT/LE pair). Verifies the fold is
/// not hard-coded to EQ/NE and that the chosen `cond_code` is the
/// T-lane's (so the C printer can render `cond_gt ? a : b`).
#[test]
fn t167_ite_with_alt_cond_pair_folds() {
    let r5 = Varnode::reg(40, 8);
    let c10 = Varnode::constant(10, 8);
    let c20 = Varnode::constant(20, 8);

    let mut func = Function::new("ite_fold_gt", BlockId(0), 0xB000);
    let mut bb0 = BasicBlock::new(BlockId(0));
    // T-lane cond=GT=12, E-lane cond=LE=13 (inverses).
    bb0.insns.push(guarded_copy(r5, c10, 0xB000, 12));
    bb0.insns.push(guarded_copy(r5, c20, 0xB004, 13));
    bb0.insns.push(ctrl_insn(IrOp::Return, 0xB008));
    func.insert_block(bb0);

    let ssa = build_ssa(func);
    let hir = structure(&ssa).expect("structuring should succeed");

    let mut ternaries = Vec::new();
    collect_guarded_ternaries(&hir.body, &mut ternaries);
    assert_eq!(ternaries.len(), 1, "GT/LE pair must fold: {ternaries:?}");
    assert_eq!(ternaries[0].0, 12, "cond_code should be GT (T-lane)");
    assert_eq!(ternaries[0].1, r5);
}

/// Negative: if either arm has more than one statement, the fold must
/// NOT fire. The `GuardedIf` must survive intact (we get back zero
/// GuardedTernaries and one GuardedIf with else_body).
#[test]
fn t167_ite_with_multi_insn_then_arm_does_not_fold() {
    let r0 = Varnode::reg(0, 8);
    let r1 = Varnode::reg(8, 8);
    let c1 = Varnode::constant(1, 8);
    let c2 = Varnode::constant(2, 8);
    let c3 = Varnode::constant(3, 8);

    let mut func = Function::new("ite_multi_then", BlockId(0), 0xC000);
    let mut bb0 = BasicBlock::new(BlockId(0));
    // T-lane: two insns (r1 = 1; r0 = 2). The structurer groups both
    // under the same EQ guard so the then_body has length 2 — the
    // single-statement precondition of the fold fails.
    bb0.insns.push(guarded_copy(r1, c1, 0xC000, 0));
    bb0.insns.push(guarded_copy(r0, c2, 0xC004, 0));
    // E-lane: single insn r0 = 3 (cond=NE).
    bb0.insns.push(guarded_copy(r0, c3, 0xC008, 1));
    bb0.insns.push(ctrl_insn(IrOp::Return, 0xC00C));
    func.insert_block(bb0);

    let ssa = build_ssa(func);
    let hir = structure(&ssa).expect("structuring should succeed");

    let mut ternaries = Vec::new();
    collect_guarded_ternaries(&hir.body, &mut ternaries);
    assert!(
        ternaries.is_empty(),
        "multi-insn then-arm must NOT collapse to a ternary, got {ternaries:?}"
    );

    let mut guarded_ifs = Vec::new();
    collect_guarded_ifs(&hir.body, &mut guarded_ifs);
    assert_eq!(
        guarded_ifs.len(),
        1,
        "the original GuardedIf must survive, got {guarded_ifs:?}"
    );
    // cond, then-body length, else-body length.
    assert_eq!(guarded_ifs[0].0, 0);
    assert_eq!(guarded_ifs[0].1, 2, "then-arm keeps its two statements");
    assert_eq!(guarded_ifs[0].2, 1, "else-arm keeps its one statement");
}

// -----------------------------------------------------------------------
// t180: AArch64 CMP+CSEL → HirNode::CselTernary fold tests.
//
// Each test builds a single-block SSA function shaped like the lifter
// output for
//     CMP  X0, X1                 ; IntSub(X0, X1) → unique + NZCV flags
//     CSEL Xd, Xt, Xf, <cc>       ; Callother(0x330, cond, Xt, Xf, cc) → Xd
//     RET
// and asserts the structurer's `fold_csel_ternary` pass collapses the
// pair into a single `HirNode::CselTernary` with the expected
// comparison opcode (EQ→IntEqual, NE→IntNotequal, GE→IntSlessequal
// with operands swapped, LT→IntSless).
// -----------------------------------------------------------------------

/// Build the synthetic `IntSub` an AArch64 CMP/SUBS lifts to.
fn t180_cmp_insn(lhs: Varnode, rhs: Varnode, dst: Varnode, addr: u64) -> IrInsn {
    IrInsn::with_output(IrOp::IntSub, dst, smallvec![lhs, rhs], addr)
}

/// Build the synthetic Callother an AArch64 CSEL lifts to, including
/// the trailing `Varnode::constant(cc, 1)` the lifter appends so the
/// structurer can recover the cc without redoing dataflow.
fn t180_csel_insn(
    rd: Varnode,
    true_val: Varnode,
    false_val: Varnode,
    cond_vn: Varnode,
    cc: u8,
    addr: u64,
) -> IrInsn {
    IrInsn::with_output(
        IrOp::Callother,
        rd,
        smallvec![
            Varnode::constant(0x330, 8),
            cond_vn,
            true_val,
            false_val,
            Varnode::constant(cc as u64, 1),
        ],
        addr,
    )
}

fn collect_csel_ternaries(nodes: &[HirNode], out: &mut Vec<(IrOp, Varnode, Varnode, Varnode)>) {
    for n in nodes {
        match n {
            HirNode::CselTernary {
                cmp_op,
                cmp_lhs,
                cmp_rhs,
                output,
                ..
            } => out.push((*cmp_op, *cmp_lhs, *cmp_rhs, *output)),
            HirNode::Block(inner) => collect_csel_ternaries(inner, out),
            HirNode::If {
                then_body,
                else_body,
                ..
            } => {
                collect_csel_ternaries(then_body, out);
                if let Some(eb) = else_body {
                    collect_csel_ternaries(eb, out);
                }
            }
            _ => {}
        }
    }
}

fn t180_run_csel(cc: u8) -> (Vec<(IrOp, Varnode, Varnode, Varnode)>, Vec<HirNode>) {
    // Operand register varnodes.
    let x0 = Varnode::reg(0, 8); // CMP LHS
    let x1 = Varnode::reg(8, 8); // CMP RHS
    let x2 = Varnode::reg(16, 8); // CSEL Rd
    let x3 = Varnode::reg(24, 8); // CSEL true
    let x4 = Varnode::reg(32, 8); // CSEL false
    let sub_dst = Varnode::unique(0, 8);
    // cond_vn opaque — fold uses inputs[4] cc constant, not this varnode.
    let zf = Varnode::reg(265, 1);

    let mut func = Function::new("csel_fold", BlockId(0), 0xD000);
    let mut bb0 = BasicBlock::new(BlockId(0));
    bb0.insns.push(t180_cmp_insn(x0, x1, sub_dst, 0xD000));
    bb0.insns.push(t180_csel_insn(x2, x3, x4, zf, cc, 0xD004));
    bb0.insns.push(ctrl_insn(IrOp::Return, 0xD008));
    func.insert_block(bb0);

    let ssa = build_ssa(func);
    let hir = structure(&ssa).expect("structuring should succeed");
    let mut ternaries = Vec::new();
    collect_csel_ternaries(&hir.body, &mut ternaries);
    (ternaries, hir.body)
}

#[test]
fn t180_cmp_csel_eq_folds() {
    // CSEL X2, X3, X4, EQ → X2 = (X0 == X1) ? X3 : X4
    let (ternaries, _) = t180_run_csel(1); // ARM64_CC_EQ
    assert_eq!(
        ternaries.len(),
        1,
        "expected 1 CselTernary, got {ternaries:?}"
    );
    let (op, lhs, rhs, out) = ternaries[0];
    assert_eq!(op, IrOp::IntEqual, "EQ → IntEqual");
    assert_eq!(lhs, Varnode::reg(0, 8), "lhs = CMP first operand (X0)");
    assert_eq!(rhs, Varnode::reg(8, 8), "rhs = CMP second operand (X1)");
    assert_eq!(out, Varnode::reg(16, 8), "output = CSEL Rd (X2)");
}

#[test]
fn t180_cmp_csel_ne_folds() {
    // CSEL X2, X3, X4, NE → X2 = (X0 != X1) ? X3 : X4
    let (ternaries, _) = t180_run_csel(2); // ARM64_CC_NE
    assert_eq!(
        ternaries.len(),
        1,
        "expected 1 CselTernary, got {ternaries:?}"
    );
    let (op, lhs, rhs, _) = ternaries[0];
    assert_eq!(op, IrOp::IntNotequal, "NE → IntNotequal");
    assert_eq!(lhs, Varnode::reg(0, 8));
    assert_eq!(rhs, Varnode::reg(8, 8));
}

#[test]
fn t180_cmp_csel_ge_folds() {
    // CSEL X2, X3, X4, GE → X2 = (X0 >= X1) ? X3 : X4 (signed).
    // The fold rewrites `a >= b` as `IntSlessequal(b, a)` (swap=true),
    // so the recovered (lhs, rhs) pair is (X1, X0) — i.e. swapped.
    let (ternaries, _) = t180_run_csel(11); // ARM64_CC_GE
    assert_eq!(
        ternaries.len(),
        1,
        "expected 1 CselTernary, got {ternaries:?}"
    );
    let (op, lhs, rhs, _) = ternaries[0];
    assert_eq!(
        op,
        IrOp::IntSlessequal,
        "GE → IntSlessequal (signed, swapped)"
    );
    assert_eq!(lhs, Varnode::reg(8, 8), "lhs after swap = CMP's Rm (X1)");
    assert_eq!(rhs, Varnode::reg(0, 8), "rhs after swap = CMP's Rn (X0)");
}

#[test]
fn t180_cmp_csel_lt_folds() {
    // CSEL X2, X3, X4, LT → X2 = (X0 < X1) ? X3 : X4 (signed, no swap).
    let (ternaries, _) = t180_run_csel(12); // ARM64_CC_LT
    assert_eq!(
        ternaries.len(),
        1,
        "expected 1 CselTernary, got {ternaries:?}"
    );
    let (op, lhs, rhs, _) = ternaries[0];
    assert_eq!(op, IrOp::IntSless, "LT → IntSless (signed)");
    assert_eq!(lhs, Varnode::reg(0, 8));
    assert_eq!(rhs, Varnode::reg(8, 8));
}

// -----------------------------------------------------------------------
// t189: AArch64 CMP+Bcc → HirNode::IfCmp fold tests.
//
// Each test builds a four-block CFG shaped like the lifter output for
//     CMP   X0, X1                  ; IntSub(X0, X1) → unique + per-flag bytes
//     [BoolNegate/BoolXor over NF/ZF/VF]   ; cc-specific dataflow
//     B.<cc> .then_blk               ; Cbranch reading the resulting bool
//   .then_blk:
//     ... ; trivial
//   .else_blk:
//     ... ; trivial
//   .join:
//     RET
// and asserts the structurer's `fold_aarch64_bcc_if` pass collapses the
// synthesised `If` into a single `HirNode::IfCmp` carrying the explicit
// comparison opcode (EQ→IntEqual, NE→IntNotequal, GE→IntSlessequal w/
// operands swapped, LT→IntSless).
// -----------------------------------------------------------------------

/// Per-flag byte varnodes mirroring `unlace_lift_arm::register_file`
/// (NF=264, ZF=265, CF=266, VF=267 — all 1 byte).
fn t189_nf() -> Varnode {
    Varnode::reg(264, 1)
}
fn t189_zf() -> Varnode {
    Varnode::reg(265, 1)
}
fn t189_cf() -> Varnode {
    Varnode::reg(266, 1)
}
fn t189_vf() -> Varnode {
    Varnode::reg(267, 1)
}

/// Emit the per-flag byte writes a CMP/SUBS would produce.
fn t189_flag_writes(sub_dst: Varnode, addr: u64) -> Vec<IrInsn> {
    let zero = Varnode::constant(0, sub_dst.size);
    vec![
        IrInsn::with_output(IrOp::IntSless, t189_nf(), smallvec![sub_dst, zero], addr),
        IrInsn::with_output(IrOp::IntEqual, t189_zf(), smallvec![sub_dst, zero], addr),
        // C/V writes (shape-only — fold treats them as flag-byte commits).
        IrInsn::with_output(IrOp::IntCarry, t189_cf(), smallvec![sub_dst, zero], addr),
        IrInsn::with_output(IrOp::IntSborrow, t189_vf(), smallvec![sub_dst, zero], addr),
    ]
}

/// Build the synthetic four-block CFG and run the structurer, returning
/// every `IfCmp` recovered in the body (cmp_op, cmp_lhs, cmp_rhs).
fn t189_run_bcc(
    cc_dataflow: Vec<IrInsn>,
    cond_vn: Varnode,
) -> (Vec<(IrOp, Varnode, Varnode)>, Vec<HirNode>) {
    let x0 = Varnode::reg(0, 8); // CMP LHS
    let x1 = Varnode::reg(8, 8); // CMP RHS
    let x2 = Varnode::reg(16, 8); // scratch lvalue for then/else bodies
    let c1 = Varnode::constant(1, 8);
    let c2 = Varnode::constant(2, 8);
    let sub_dst = Varnode::unique(0, 8);

    let mut func = Function::new("bcc_fold", BlockId(0), 0xE000);

    let mut bb0 = BasicBlock::new(BlockId(0));
    // CMP X0, X1.
    bb0.insns.push(t180_cmp_insn(x0, x1, sub_dst, 0xE000));
    // Per-flag byte commits NF/ZF/CF/VF.
    for f in t189_flag_writes(sub_dst, 0xE000) {
        bb0.insns.push(f);
    }
    // cc-specific BoolNegate/BoolXor dataflow.
    for d in cc_dataflow {
        bb0.insns.push(d);
    }
    // B.<cc> reading the recovered cond.
    bb0.insns.push(cbranch_insn(cond_vn, 0xE004));
    bb0.successors = smallvec![BlockId(1), BlockId(2)];

    let mut bb1 = BasicBlock::new(BlockId(1));
    bb1.insns.push(IrInsn::with_output(
        IrOp::IntAdd,
        x2,
        smallvec![x0, c1],
        0xE010,
    ));
    bb1.insns.push(ctrl_insn(IrOp::Branch, 0xE014));
    bb1.successors = smallvec![BlockId(3)];

    let mut bb2 = BasicBlock::new(BlockId(2));
    bb2.insns.push(IrInsn::with_output(
        IrOp::IntAdd,
        x2,
        smallvec![x0, c2],
        0xE020,
    ));
    bb2.insns.push(ctrl_insn(IrOp::Branch, 0xE024));
    bb2.successors = smallvec![BlockId(3)];

    let mut bb3 = BasicBlock::new(BlockId(3));
    bb3.insns.push(ctrl_insn(IrOp::Return, 0xE030));

    func.insert_block(bb0);
    func.insert_block(bb1);
    func.insert_block(bb2);
    func.insert_block(bb3);

    let ssa = build_ssa(func);
    let hir = structure(&ssa).expect("structuring should succeed");

    fn collect_if_cmps(nodes: &[HirNode], out: &mut Vec<(IrOp, Varnode, Varnode)>) {
        for n in nodes {
            match n {
                HirNode::IfCmp {
                    cmp_op,
                    cmp_lhs,
                    cmp_rhs,
                    then_body,
                    else_body,
                    ..
                } => {
                    out.push((*cmp_op, *cmp_lhs, *cmp_rhs));
                    collect_if_cmps(then_body, out);
                    if let Some(eb) = else_body {
                        collect_if_cmps(eb, out);
                    }
                }
                HirNode::Block(inner) => collect_if_cmps(inner, out),
                HirNode::If {
                    then_body,
                    else_body,
                    ..
                } => {
                    collect_if_cmps(then_body, out);
                    if let Some(eb) = else_body {
                        collect_if_cmps(eb, out);
                    }
                }
                _ => {}
            }
        }
    }

    let mut if_cmps = Vec::new();
    collect_if_cmps(&hir.body, &mut if_cmps);
    (if_cmps, hir.body)
}

#[test]
fn t189_cmp_bcc_eq_folds() {
    // B.EQ: cond = ZF directly. No extra dataflow.
    let (if_cmps, _) = t189_run_bcc(vec![], t189_zf());
    assert_eq!(
        if_cmps.len(),
        1,
        "expected 1 IfCmp from B.EQ fold, got {if_cmps:?}"
    );
    let (op, lhs, rhs) = if_cmps[0];
    assert_eq!(op, IrOp::IntEqual, "EQ → IntEqual");
    assert_eq!(lhs, Varnode::reg(0, 8), "lhs = CMP first operand (X0)");
    assert_eq!(rhs, Varnode::reg(8, 8), "rhs = CMP second operand (X1)");
}

#[test]
fn t189_cmp_bcc_ne_folds() {
    // B.NE: cond = BoolNegate(ZF). Single Bool* statement.
    let not_zf = Varnode::unique(8, 1);
    let dataflow = vec![IrInsn::with_output(
        IrOp::BoolNegate,
        not_zf,
        smallvec![t189_zf()],
        0xE004,
    )];
    let (if_cmps, _) = t189_run_bcc(dataflow, not_zf);
    assert_eq!(
        if_cmps.len(),
        1,
        "expected 1 IfCmp from B.NE fold, got {if_cmps:?}"
    );
    let (op, lhs, rhs) = if_cmps[0];
    assert_eq!(op, IrOp::IntNotequal, "NE → IntNotequal");
    assert_eq!(lhs, Varnode::reg(0, 8));
    assert_eq!(rhs, Varnode::reg(8, 8));
}

#[test]
fn t189_cmp_bcc_ge_folds() {
    // B.GE: cond = BoolNegate(BoolXor(NF, VF)). Two Bool* statements.
    // The fold rewrites `a >= b` as `IntSlessequal(b, a)` (swap=true),
    // so the recovered (lhs, rhs) is (X1, X0).
    let n_xor_v = Varnode::unique(8, 1);
    let not_xor = Varnode::unique(16, 1);
    let dataflow = vec![
        IrInsn::with_output(
            IrOp::BoolXor,
            n_xor_v,
            smallvec![t189_nf(), t189_vf()],
            0xE004,
        ),
        IrInsn::with_output(IrOp::BoolNegate, not_xor, smallvec![n_xor_v], 0xE004),
    ];
    let (if_cmps, _) = t189_run_bcc(dataflow, not_xor);
    assert_eq!(
        if_cmps.len(),
        1,
        "expected 1 IfCmp from B.GE fold, got {if_cmps:?}"
    );
    let (op, lhs, rhs) = if_cmps[0];
    assert_eq!(
        op,
        IrOp::IntSlessequal,
        "GE → IntSlessequal (signed, swapped)"
    );
    assert_eq!(lhs, Varnode::reg(8, 8), "lhs after swap = CMP's Rm (X1)");
    assert_eq!(rhs, Varnode::reg(0, 8), "rhs after swap = CMP's Rn (X0)");
}

#[test]
fn t189_cmp_bcc_lt_folds() {
    // B.LT: cond = BoolXor(NF, VF). Single Bool* statement.
    let n_xor_v = Varnode::unique(8, 1);
    let dataflow = vec![IrInsn::with_output(
        IrOp::BoolXor,
        n_xor_v,
        smallvec![t189_nf(), t189_vf()],
        0xE004,
    )];
    let (if_cmps, _) = t189_run_bcc(dataflow, n_xor_v);
    assert_eq!(
        if_cmps.len(),
        1,
        "expected 1 IfCmp from B.LT fold, got {if_cmps:?}"
    );
    let (op, lhs, rhs) = if_cmps[0];
    assert_eq!(op, IrOp::IntSless, "LT → IntSless (signed)");
    assert_eq!(lhs, Varnode::reg(0, 8));
    assert_eq!(rhs, Varnode::reg(8, 8));
}
