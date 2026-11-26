use std::rc::Rc;

use unlace_base::space::{AddrSpace, spacetype};
use unlace_num::opcodes::OpCode;
use unlace_num::pcoderaw::VarnodeData;

use super::*;
use crate::listing::model::FlowKind;

/// A throwaway processor (RAM) space and the constant space, so we can build
/// `VarnodeData` whose `in0` is either an absolute code address (RAM) or a
/// p-code-relative constant.
fn spaces() -> (Rc<AddrSpace>, Rc<AddrSpace>) {
    let ram = Rc::new(AddrSpace::new_for_decode(spacetype::IPTR_PROCESSOR));
    let cst = Rc::new(AddrSpace::new_for_decode(spacetype::IPTR_CONSTANT));
    (ram, cst)
}

/// A varnode at `offset` in the given space, 8 bytes wide.
fn vn(space: &Rc<AddrSpace>, offset: u64) -> VarnodeData {
    VarnodeData {
        space: Some(Rc::clone(space)),
        offset,
        size: 8,
    }
}

fn op(opcode: OpCode, in0: Option<VarnodeData>) -> RawOp {
    RawOp { opcode, in0 }
}

/// CBRANCH to an absolute target: two successors (target + fall-through),
/// ConditionalBranch, is_conditional set, falls through.
#[test]
fn cbranch_target_and_fallthrough() {
    let (ram, _cst) = spaces();
    let ops = vec![op(OpCode::CPUI_CBRANCH, Some(vn(&ram, 0x2000)))];
    let c = classify(&ops, 0x1000, 4);
    assert_eq!(c.flow.kind, FlowKind::ConditionalBranch);
    assert!(c.flow.is_conditional);
    assert!(c.flow.is_jump);
    assert!(c.flow.has_fallthrough);
    assert_eq!(c.flows, vec![0x2000]);
    assert_eq!(c.fall_through, Some(0x1004));
}

/// SPARC's `call`: the CALL, then a CBRANCH to the next instruction ahead of
/// a RETURN that only a `restore`-in-delay-slot callee takes. It falls
/// through, and the skip is not a callee.
#[test]
fn a_call_with_a_guarded_return_falls_through() {
    let (ram, _cst) = spaces();
    let ops = vec![
        op(OpCode::CPUI_CALL, Some(vn(&ram, 0x2000))),
        op(OpCode::CPUI_CBRANCH, Some(vn(&ram, 0x1008))),
        op(OpCode::CPUI_RETURN, Some(vn(&ram, 0))),
    ];
    let c = classify(&ops, 0x1000, 8);
    assert!(c.flow.is_call && c.flow.has_fallthrough);
    assert_eq!(
        (c.flows.clone(), c.fall_through),
        (vec![0x2000], Some(0x1008))
    );
    let elsewhere = vec![
        op(OpCode::CPUI_CALL, Some(vn(&ram, 0x2000))),
        op(OpCode::CPUI_CBRANCH, Some(vn(&ram, 0x3000))),
        op(OpCode::CPUI_RETURN, Some(vn(&ram, 0))),
    ];
    assert_eq!(classify(&elsewhere, 0x1000, 8).fall_through, None);
}

/// A predicated computed jump keeps its skip as a flow and names it as
/// its predicated skip.
#[test]
fn predicated_computed_jump_keeps_its_skip_as_a_flow() {
    let (ram, _cst) = spaces();
    let ops = vec![
        op(OpCode::CPUI_CBRANCH, Some(vn(&ram, 0x1004))),
        op(OpCode::CPUI_BRANCHIND, Some(vn(&ram, 0))),
    ];
    let c = classify(&ops, 0x1000, 4);
    assert_eq!((c.flows.clone(), c.fall_through), (vec![0x1004], None));
    assert_eq!(c.predicated_skip(0x1000, 4), Some(0x1004));
}

/// A conditional branch to the next instruction, or a predicated call, has
/// no predicated skip.
#[test]
fn only_a_computed_jump_has_a_predicated_skip() {
    let (ram, _cst) = spaces();
    let branch = vec![
        op(OpCode::CPUI_CBRANCH, Some(vn(&ram, 0x1004))),
        op(OpCode::CPUI_BRANCH, Some(vn(&ram, 0x2000))),
    ];
    assert_eq!(
        classify(&branch, 0x1000, 4).predicated_skip(0x1000, 4),
        None
    );
    let call = vec![
        op(OpCode::CPUI_CBRANCH, Some(vn(&ram, 0x1004))),
        op(OpCode::CPUI_CALLIND, Some(vn(&ram, 0))),
    ];
    assert_eq!(classify(&call, 0x1000, 4).predicated_skip(0x1000, 4), None);
}

/// A predicated non-branch instruction's skip is its condition skip; a
/// conditional branch to the next instruction is not.
#[test]
fn a_predicated_instruction_skip_is_a_condition_skip() {
    let (ram, _cst) = spaces();
    let load = vec![
        op(OpCode::CPUI_CBRANCH, Some(vn(&ram, 0x1004))),
        op(OpCode::CPUI_LOAD, None),
    ];
    let c = classify(&load, 0x1000, 4);
    assert_eq!(
        (c.flows.clone(), c.fall_through),
        (vec![0x1004], Some(0x1004))
    );
    assert_eq!(c.condition_skip(&load, 0x1000, 4), Some(0x1004));
    let branch = vec![
        op(OpCode::CPUI_COPY, None),
        op(OpCode::CPUI_CBRANCH, Some(vn(&ram, 0x1004))),
    ];
    assert_eq!(
        classify(&branch, 0x1000, 4).condition_skip(&branch, 0x1000, 4),
        None
    );
    let jump = vec![
        op(OpCode::CPUI_CBRANCH, Some(vn(&ram, 0x1004))),
        op(OpCode::CPUI_BRANCHIND, Some(vn(&ram, 0))),
    ];
    assert_eq!(
        classify(&jump, 0x1000, 4).condition_skip(&jump, 0x1000, 4),
        Some(0x1004)
    );
    let call = vec![
        op(OpCode::CPUI_CBRANCH, Some(vn(&ram, 0x1004))),
        op(OpCode::CPUI_CALL, Some(vn(&ram, 0x4000))),
    ];
    assert_eq!(
        classify(&call, 0x1000, 4).condition_skip(&call, 0x1000, 4),
        None
    );
}

/// Unconditional BRANCH: the target, NO fall-through.
#[test]
fn unconditional_branch_no_fallthrough() {
    let (ram, _cst) = spaces();
    let ops = vec![op(OpCode::CPUI_BRANCH, Some(vn(&ram, 0x3000)))];
    let c = classify(&ops, 0x1000, 4);
    assert_eq!(c.flow.kind, FlowKind::UnconditionalBranch);
    assert!(!c.flow.has_fallthrough);
    assert_eq!(c.flows, vec![0x3000]);
    assert_eq!(c.fall_through, None);
}

/// CALL: the callee target, is_call, falls through (a call returns).
#[test]
fn call_target_falls_through() {
    let (ram, _cst) = spaces();
    let ops = vec![op(OpCode::CPUI_CALL, Some(vn(&ram, 0x4000)))];
    let c = classify(&ops, 0x1000, 5);
    assert_eq!(c.flow.kind, FlowKind::Call);
    assert!(c.flow.is_call);
    assert!(c.flow.has_fallthrough);
    assert_eq!(c.flows, vec![0x4000]);
    assert_eq!(c.fall_through, Some(0x1005));
}

/// A predicated call skips to the next instruction when its condition fails:
/// that skip is the fall-through, and the callee is the only call target.
#[test]
fn predicated_call_targets_only_its_callee() {
    let (ram, _cst) = spaces();
    let ops = vec![
        op(OpCode::CPUI_CBRANCH, Some(vn(&ram, 0x1004))),
        op(OpCode::CPUI_CALL, Some(vn(&ram, 0x4000))),
    ];
    let c = classify(&ops, 0x1000, 4);
    assert!(c.flow.is_call);
    assert_eq!(c.flows, vec![0x4000]);
    assert_eq!(c.fall_through, Some(0x1004));
}

/// A branch ahead of a call in one instruction is a jump inside the caller
/// (the ARC zero-overhead loop back-edge), never a second callee.
#[test]
fn branch_ahead_of_a_call_is_not_a_callee() {
    let (ram, _cst) = spaces();
    let ops = vec![
        op(OpCode::CPUI_CBRANCH, Some(vn(&ram, 0x0ff0))),
        op(OpCode::CPUI_CALL, Some(vn(&ram, 0x4000))),
    ];
    let c = classify(&ops, 0x1000, 4);
    assert!(c.flow.is_call);
    assert_eq!(c.flows, vec![0x4000]);
    assert_eq!(c.fall_through, Some(0x1004));
}

/// A call to the next instruction (the i386 `call $+5` get-PC idiom) keeps
/// that target: only a conditional skip is folded into the fall-through.
#[test]
fn call_to_the_next_instruction_keeps_its_target() {
    let (ram, _cst) = spaces();
    let ops = vec![op(OpCode::CPUI_CALL, Some(vn(&ram, 0x1005)))];
    let c = classify(&ops, 0x1000, 5);
    assert_eq!(c.flows, vec![0x1005]);
}

/// RETURN: terminal — no fall-through, no target.
#[test]
fn return_is_terminal() {
    let ops = vec![op(OpCode::CPUI_RETURN, None)];
    let c = classify(&ops, 0x1000, 1);
    assert_eq!(c.flow.kind, FlowKind::Return);
    assert!(c.flow.is_terminal);
    assert!(!c.flow.has_fallthrough);
    assert!(c.flows.is_empty());
    assert_eq!(c.fall_through, None);
}

/// BRANCHIND: computed/indirect, NO static target, no fall-through.
#[test]
fn branchind_is_computed_no_target() {
    let (ram, _cst) = spaces();
    // in0 of a BRANCHIND is a register/temp, not a code address; classify
    // must NOT treat it as a target regardless.
    let ops = vec![op(OpCode::CPUI_BRANCHIND, Some(vn(&ram, 0x9999)))];
    let c = classify(&ops, 0x1000, 2);
    assert_eq!(c.flow.kind, FlowKind::ComputedJump);
    assert!(c.flow.is_computed);
    assert!(c.flow.is_indirect);
    assert!(c.flow.is_jump);
    assert!(c.flows.is_empty(), "BRANCHIND yields no static target");
    assert_eq!(c.fall_through, None);
}

/// CALLIND: computed/indirect call, NO static target, but FALLS THROUGH.
#[test]
fn callind_is_computed_falls_through() {
    let (ram, _cst) = spaces();
    let ops = vec![op(OpCode::CPUI_CALLIND, Some(vn(&ram, 0x9999)))];
    let c = classify(&ops, 0x1000, 2);
    assert_eq!(c.flow.kind, FlowKind::ComputedCall);
    assert!(c.flow.is_call);
    assert!(c.flow.is_computed);
    assert!(c.flow.is_indirect);
    assert!(c.flows.is_empty(), "CALLIND yields no static target");
    assert_eq!(c.fall_through, Some(0x1002));
}

/// Gotcha 1: a constant-space BRANCH `in0` is p-code-relative (intra-insn),
/// NOT a real target. The instruction still classifies as a branch (so the
/// last-op test drops the fall-through), but it contributes no `flows` entry.
#[test]
fn constant_space_branch_in0_is_not_a_target() {
    let (_ram, cst) = spaces();
    // A relative BRANCH inside a multi-op instruction (offset 1 in the
    // constant space ⇒ "the next p-code op", not VMA 0x1).
    let ops = vec![op(OpCode::CPUI_BRANCH, Some(vn(&cst, 1)))];
    let c = classify(&ops, 0x1000, 4);
    assert_eq!(c.flow.kind, FlowKind::UnconditionalBranch);
    assert!(
        c.flows.is_empty(),
        "a constant-space (p-code-relative) BRANCH in0 must not be a VMA target"
    );
    // Last op is BRANCH ⇒ still no fall-through.
    assert_eq!(c.fall_through, None);
}

/// An ordinary multi-op instruction (no flow break): falls through, no
/// targets, Fallthrough kind.
#[test]
fn plain_instruction_falls_through() {
    let (ram, _cst) = spaces();
    let ops = vec![
        op(OpCode::CPUI_COPY, Some(vn(&ram, 0x10))),
        op(OpCode::CPUI_INT_ADD, Some(vn(&ram, 0x10))),
    ];
    let c = classify(&ops, 0x1000, 3);
    assert_eq!(c.flow.kind, FlowKind::Fallthrough);
    assert!(c.flow.has_fallthrough);
    assert!(c.flows.is_empty());
    assert_eq!(c.fall_through, Some(0x1003));
}

/// Gotcha 2: a CBRANCH followed by trailing non-flow ops still falls through
/// (the LAST op is not a flow break), AND keeps its absolute target.
#[test]
fn cbranch_then_trailing_op_keeps_fallthrough() {
    let (ram, _cst) = spaces();
    let ops = vec![
        op(OpCode::CPUI_CBRANCH, Some(vn(&ram, 0x2000))),
        op(OpCode::CPUI_COPY, Some(vn(&ram, 0x10))),
    ];
    let c = classify(&ops, 0x1000, 4);
    assert_eq!(c.flow.kind, FlowKind::ConditionalBranch);
    assert_eq!(c.flows, vec![0x2000]);
    assert_eq!(c.fall_through, Some(0x1004));
}
