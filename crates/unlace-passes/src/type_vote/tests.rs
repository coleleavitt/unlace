use smallvec::{SmallVec, smallvec};

use unlace_ir::ssa::{PrimitiveType, SsaFunction, SsaVarnode, VarnodeSlot, build_ssa};
use unlace_ir::types::Type;
use unlace_ir::{BasicBlock, BlockId, Function, IrInsn, IrOp, Varnode};

use super::*;
use crate::type_infer::TypeInferPass;

const B0: BlockId = BlockId(0);

fn ssa_of(insns: Vec<IrInsn>) -> SsaFunction {
    let mut func = Function::new("vote", B0, 0x1000);
    let mut bb = BasicBlock::new(B0);
    bb.insns = insns;
    bb.insns
        .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x1fff));
    func.insert_block(bb);
    build_ssa(func)
}

fn output(ssa: &SsaFunction, idx: usize) -> SsaVarnode {
    ssa.var_map[&(B0, idx, VarnodeSlot::Output)]
}

fn input(ssa: &SsaFunction, idx: usize, slot: usize) -> SsaVarnode {
    ssa.var_map[&(B0, idx, VarnodeSlot::Input(slot))]
}

fn op(op: IrOp, out: Varnode, inputs: &[Varnode]) -> IrInsn {
    IrInsn::with_output(op, out, SmallVec::from_slice(inputs), 0x1000)
}

fn reg(n: u64) -> Varnode {
    Varnode::reg(n * 8, 8)
}

#[test]
fn identical_edges_merge_and_add_their_weights() {
    let ssa = ssa_of(vec![
        op(IrOp::FloatAdd, reg(2), &[reg(1), reg(4)]),
        op(IrOp::FloatMult, reg(3), &[reg(1), reg(4)]),
    ]);
    let edges = EdgeSet::collect(&ssa);
    let x = input(&ssa, 0, 0);
    assert_eq!(
        edges.edges[&Edge::Is(x, PrimitiveType::Double)],
        Weight(2 * Trust::Opcode.weight().0)
    );
}

#[test]
fn majority_resolves_a_conflict_the_lattice_froze() {
    // x is used by two float ops and one integer multiply.
    let mut ssa = ssa_of(vec![
        op(IrOp::FloatAdd, reg(2), &[reg(1), reg(4)]),
        op(IrOp::FloatMult, reg(3), &[reg(1), reg(4)]),
        op(IrOp::IntMult, reg(5), &[reg(1), Varnode::constant(3, 8)]),
    ]);
    let x = input(&ssa, 0, 0);
    TypeInferPass.run(&mut ssa).unwrap();
    assert_eq!(ssa.var_types.get(&x), Some(&PrimitiveType::Unknown));

    assert!(TypeVotePass.run(&mut ssa).unwrap());
    assert_eq!(ssa.var_types[&x], PrimitiveType::Double);
}

#[test]
fn pointer_evidence_beats_more_votes_for_a_scalar() {
    let mut ssa = ssa_of(vec![
        op(IrOp::Load, reg(2), &[Varnode::constant(1, 8), reg(1)]),
        op(IrOp::FloatAdd, reg(3), &[reg(1), reg(4)]),
        op(IrOp::FloatMult, reg(5), &[reg(1), reg(4)]),
    ]);
    let x = input(&ssa, 0, 1);
    vote_types(&mut ssa);
    assert_eq!(ssa.var_types[&x], PrimitiveType::Ptr);
}

#[test]
fn not_a_pointer_hint_disables_the_pointer_preference() {
    let mut ssa = ssa_of(vec![
        op(IrOp::Load, reg(2), &[Varnode::constant(1, 8), reg(1)]),
        op(IrOp::IntMult, reg(3), &[reg(1), reg(4)]),
        op(IrOp::IntXor, reg(5), &[reg(1), reg(4)]),
    ]);
    let x = input(&ssa, 0, 1);
    vote_types(&mut ssa);
    assert_eq!(ssa.var_types[&x], PrimitiveType::Int(8));
}

#[test]
fn signedness_follows_the_majority_of_uses() {
    let mut ssa = ssa_of(vec![
        op(IrOp::IntDiv, reg(2), &[reg(1), reg(4)]),
        op(IrOp::IntRem, reg(3), &[reg(1), reg(4)]),
        op(IrOp::IntSdiv, reg(5), &[reg(1), reg(6)]),
    ]);
    let x = input(&ssa, 0, 0);
    vote_types(&mut ssa);
    assert_eq!(ssa.var_types[&x], PrimitiveType::UnsignedInt(8));
}

#[test]
fn rounds_carry_types_along_a_chain_until_stable() {
    let mut ssa = ssa_of(vec![
        op(IrOp::Copy, reg(2), &[reg(1)]),
        op(IrOp::Copy, reg(3), &[reg(2)]),
    ]);
    let (a, b, c) = (input(&ssa, 0, 0), output(&ssa, 0), output(&ssa, 1));
    ssa.var_types.insert(a, PrimitiveType::Double);

    let summary = vote_types(&mut ssa);
    assert_eq!(ssa.var_types[&b], PrimitiveType::Double);
    assert_eq!(ssa.var_types[&c], PrimitiveType::Double);
    assert_eq!(
        summary,
        VoteSummary {
            rounds: 3,
            changed: 2,
            partial: 0
        }
    );
}

#[test]
fn a_weak_winner_is_replaced_once_strong_evidence_arrives() {
    // x = z, where z is two copies away from a Double; x is also compared
    // with an integer. The comparison types x weakly in round 1; the copy
    // chain reaches x in round 3 and replaces it.
    let mut ssa = ssa_of(vec![
        op(IrOp::Copy, reg(2), &[reg(1)]),
        op(IrOp::Copy, reg(3), &[reg(2)]),
        op(IrOp::Copy, reg(4), &[reg(3)]),
        op(IrOp::IntEqual, reg(5), &[reg(4), reg(6)]),
    ]);
    let (w, x, y) = (input(&ssa, 0, 0), output(&ssa, 2), input(&ssa, 3, 1));
    ssa.var_types.insert(w, PrimitiveType::Double);
    ssa.var_types.insert(y, PrimitiveType::Int(8));

    let summary = vote_types(&mut ssa);
    assert_eq!(ssa.var_types[&x], PrimitiveType::Double);
    assert_eq!(summary.rounds, 4);
    assert_eq!(summary.partial, 0);
}

#[test]
fn comparison_alone_types_a_value_weakly() {
    let mut ssa = ssa_of(vec![op(IrOp::IntSless, reg(5), &[reg(4), reg(6)])]);
    let (x, y) = (input(&ssa, 0, 0), input(&ssa, 0, 1));
    ssa.var_types.insert(y, PrimitiveType::Int(8));

    let summary = vote_types(&mut ssa);
    assert_eq!(ssa.var_types[&x], PrimitiveType::Int(8));
    assert_eq!(summary.partial, 1);
}

#[test]
fn typed_and_declared_varnodes_are_never_revoted() {
    let mut ssa = ssa_of(vec![
        op(IrOp::FloatAdd, reg(2), &[reg(1), reg(3)]),
        op(IrOp::FloatMult, reg(4), &[reg(1), reg(3)]),
    ]);
    let (typed, declared) = (input(&ssa, 0, 0), input(&ssa, 0, 1));
    ssa.var_types.insert(typed, PrimitiveType::Int(8));
    ssa.composite_var_types
        .insert(declared, Type::Named("handle_t".into()));

    vote_types(&mut ssa);
    assert_eq!(ssa.var_types[&typed], PrimitiveType::Int(8));
    assert_eq!(ssa.var_types.get(&declared), None);
}

#[test]
fn width_mismatched_candidates_are_rejected() {
    let mut ballot = Ballot::new(4, 8);
    ballot.vote(PrimitiveType::Ptr, Weight(10), false);
    ballot.vote(PrimitiveType::Double, Weight(10), false);
    assert_eq!(ballot.decide(Hints::default()), None);
    ballot.vote(PrimitiveType::Int(8), Weight(1), false);
    assert_eq!(
        ballot.decide(Hints::default()).map(|v| v.ty),
        Some(PrimitiveType::Int(4))
    );
}

#[test]
fn boolean_votes_support_an_integer_but_not_the_reverse() {
    let mut ballot = Ballot::new(4, 8);
    ballot.vote(PrimitiveType::Bool, Weight(3), false);
    ballot.vote(PrimitiveType::Int(4), Weight(2), false);
    assert_eq!(
        ballot.decide(Hints::default()).map(|v| v.ty),
        Some(PrimitiveType::Int(4))
    );
}

#[test]
fn strong_evidence_outranks_more_weak_votes() {
    let mut ballot = Ballot::new(8, 8);
    ballot.vote(PrimitiveType::Int(8), Weight(9), true);
    ballot.vote(PrimitiveType::Double, Weight(1), false);
    let verdict = ballot.decide(Hints::default()).unwrap();
    assert_eq!(verdict.ty, PrimitiveType::Double);
    assert!(!verdict.is_weak());
}
