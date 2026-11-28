use super::*;

#[test]
fn on_matches_the_angr_policy_constants() {
    // angr PhoenixStructurer._multistmtexpr_stmt_threshold default (phoenix.py:103)
    assert_eq!(MAX_PREFIX_STMTS_ANGR, 5);
    // angr MultiStmtExprMode.MAX_ONE_CALL (phoenix.py:73-80, ctor default :102).
    // The *value* matches; the counting does not — `prefix_eligible` charges only
    // statement-root calls (see MAX_PREFIX_ROOT_CALLS' docs), so a folded operand
    // can render more than one call when the extras are implied.
    assert_eq!(MAX_PREFIX_ROOT_CALLS, 1);
    // `wide` only ever loosens the shared printed-width budget, never a call cap,
    // never the shape allowlist, never a cross-leaf cap.
    const _: () = assert!(MAX_PREFIX_STMTS_WIDE > MAX_PREFIX_STMTS_ANGR);
}

#[test]
fn the_width_budget_is_shared_by_both_rules() {
    // The consolidation's reviewer found Rule B admitting a block that scored 2
    // and rendered 7 comma elements, so `on` emitted the option's WIDEST operands.
    // `shape_score` now takes the same `max_stmts` budget `prefix_eligible` does,
    // measured by the same `printed_shape` walk.  These assertions pin the two
    // facts that made that bug possible, so it cannot silently return:
    //   1. the scored cap is NOT a width cap and is far below the width budget;
    //   2. the budget an operator sets is the width one.
    const _: () = assert!(MAX_SHAPE_STMTS < MAX_PREFIX_STMTS_ANGR);
    assert_eq!(
        OptionCondFold.apply("on").expect("on").0,
        MAX_PREFIX_STMTS_ANGR
    );
    assert_eq!(
        OptionCondFold.apply("wide").expect("wide").0,
        MAX_PREFIX_STMTS_WIDE
    );
}

#[test]
fn rule_b_caps_are_tighter_per_block_than_rule_a() {
    // Rule B admits a *shape*, not a length: its per-block scored budget is
    // deliberately far below the shared width budget, and it pays for that with a
    // nested-operand recursion Rule A does not have.
    const _: () = assert!(MAX_SHAPE_STMTS < MAX_PREFIX_STMTS_ANGR);
    // Rule B counts every call, so its cap is allowed to be higher than Rule A's
    // statement-root-only count.
    const _: () = assert!(MAX_SHAPE_CALLS >= MAX_PREFIX_ROOT_CALLS);
    // The cross-leaf caps must at least admit the #56 target (3 leaves).
    const _: () = assert!(MAX_JOIN_LEAVES >= 3);
    const _: () = assert!(MAX_JOIN_TOTAL_STMTS >= MAX_SHAPE_STMTS);
}

#[test]
fn element_id_is_unique_in_the_41xx_range() {
    assert_eq!(ELEM_CONDFOLD.get_id(), 4113);
    assert_eq!(ELEM_CONDFOLD.get_name(), "condfold");
}

#[test]
fn empty_sets_mean_the_option_is_off() {
    let s = CondFoldSets::default();
    assert!(s.is_empty());
}

#[test]
fn option_parses_off_on_and_wide_into_the_width_budget() {
    let (v, msg) = OptionCondFold.apply("on").expect("on parses");
    assert_eq!(v, MAX_PREFIX_STMTS_ANGR);
    assert!(msg.contains("on"));
    // An empty parameter reads as `on`, matching `options::on_or_off`.
    assert_eq!(
        OptionCondFold.apply("").expect("empty parses").0,
        MAX_PREFIX_STMTS_ANGR
    );
    let (v, msg) = OptionCondFold.apply("wide").expect("wide parses");
    assert_eq!(v, MAX_PREFIX_STMTS_WIDE);
    assert!(msg.contains("wide"));
    // `off` is the sentinel 0 cap: `compute_condfold_sets` short-circuits on it
    // and every gate disjunct stays dead.
    let (v, msg) = OptionCondFold.apply("off").expect("off parses");
    assert_eq!(v, 0);
    assert!(msg.contains("off"));
    assert!(OptionCondFold.apply("maybe").is_err());
    assert!(OptionCondFold.apply("7").is_err());
}

//=======================================================================
// The two scorers, on REAL op lists
//
// Everything above pins constants and the option parse; the tests below run
// `printed_shape` / `prefix_eligible` / `shape_score` over hand-built
// `BlockBasic`s carrying live p-code, with the real `type_op_for` flag table
// (so `is_call`/`is_branch`/`is_marker`/`is_flow_break` mean what they mean
// in the engine).  The load-bearing one is
// `two_statement_root_calls_are_rule_bs_alone`, the unit-scale form of the
// `tests/stages/ghangr-condfold-ruleb.toml` witness.
//=======================================================================

use std::rc::Rc;

use unlace_base::address::Address;
use unlace_base::space::{
    AddrSpace, AddrSpaceManager, ConstantSpace, UniqueSpace, addrspace_flags, spacetype,
};

use crate::context::{ArchContext, VarnodeId};

/// A minimal `Funcdata` over a `const`/`unique`/`ram` space manager.
fn scorer_fd() -> Funcdata {
    let mut m = AddrSpaceManager::new();
    m.insert_space(Rc::new(ConstantSpace::new())).unwrap();
    m.insert_space(Rc::new(UniqueSpace::new(1, 0, false)))
        .unwrap();
    m.insert_space(Rc::new(AddrSpace::new(
        spacetype::IPTR_PROCESSOR,
        "ram",
        false,
        8,
        1,
        2,
        addrspace_flags::hasphysical,
        1,
        1,
    )))
    .unwrap();
    let glb = Rc::new(ArchContext::new(m));
    let ram = Rc::clone(glb.manage().get_space_by_name("ram").unwrap());
    let entry = Address::new(ram, 0x1000);
    Funcdata::new("g", "g", glb, entry, 0x10000000, 0x40).unwrap()
}

fn ram_at(fd: &Funcdata, off: u64) -> Address {
    Address::new(
        Rc::clone(fd.get_arch().manage().get_space_by_name("ram").unwrap()),
        off,
    )
}

/// A fresh `BlockBasic` covering `off`, with `outs` successors wired.  A
/// short-circuit sibling is a 2-out condition block by construction, so
/// `shape_score` refuses anything else out of hand.
fn scorer_block(fd: &mut Funcdata, off: u64, outs: int4) -> BlockId {
    let root = fd.bblocks_root_pub();
    let bl = fd.bblocks_mut().new_block_basic(root);
    let beg = ram_at(fd, off);
    let end = ram_at(fd, off);
    fd.set_basic_block_range(bl, &beg, &end);
    for _ in 0..outs {
        let sink = fd.bblocks_mut().new_block_basic(root);
        fd.bblocks_mut().add_edge(bl, sink);
    }
    bl
}

/// Append `opc` with `inputs` distinct constant operands to `bl`; no output.
fn push_void(fd: &mut Funcdata, bl: BlockId, off: u64, opc: OpCode, inputs: int4) -> OpId {
    let addr = ram_at(fd, off);
    let op = fd.new_op(inputs, addr);
    fd.op_set_opcode(op, crate::typeop::type_op_for(opc));
    for slot in 0..inputs {
        let c = fd.new_constant(4, off + slot as u64);
        fd.op_set_input(op, c, slot).expect("input slot");
    }
    fd.op_insert_end(op, bl);
    op
}

/// Same, with a fresh `unique` output nothing consumes — which is what the
/// `calc_explicit` approximation calls *printed* (`has_no_descend`), and what
/// the printer emits as its own comma element (not implied).
fn push_out(fd: &mut Funcdata, bl: BlockId, off: u64, opc: OpCode, inputs: int4) -> VarnodeId {
    let op = push_void(fd, bl, off, opc, inputs);
    fd.new_unique_out(4, op).expect("unique out")
}

/// Append the block's terminal `CBRANCH`, reading `cond` in slot 1.
fn push_cbranch(fd: &mut Funcdata, bl: BlockId, off: u64, cond: VarnodeId) -> OpId {
    let addr = ram_at(fd, off);
    let op = fd.new_op(2, addr);
    fd.op_set_opcode(op, crate::typeop::type_op_for(OpCode::CPUI_CBRANCH));
    let target = fd.new_constant(8, 0x9000);
    fd.op_set_input(op, target, 0).expect("branch target");
    fd.op_set_input(op, cond, 1).expect("condition");
    fd.op_insert_end(op, bl);
    op
}

/// Splice an interior op in ahead of `before`.  `op_insert_end` cannot place
/// one: like C++ `Funcdata::opInsertEnd` it steps back over a trailing flow
/// break, so appending after a branch is impossible by construction.
fn push_before(fd: &mut Funcdata, bl: BlockId, off: u64, opc: OpCode, inputs: int4, before: OpId) {
    let addr = ram_at(fd, off);
    let op = fd.new_op(inputs, addr);
    fd.op_set_opcode(op, crate::typeop::type_op_for(opc));
    for slot in 0..inputs {
        let c = fd.new_constant(4, off + slot as u64);
        fd.op_set_input(op, c, slot).expect("input slot");
    }
    fd.op_insert(op, bl, Some(before));
}

#[test]
fn printed_shape_charges_the_terminal_cbranch() {
    // `STORE; v = INT_ADD(..); if (v) ...` renders as a three-element comma
    // chain: the store, the assignment, and the condition itself.  The
    // CBRANCH is the element `UNLACE_CONDFOLD_DEBUG=ops` used to omit.
    let mut fd = scorer_fd();
    let bl = scorer_block(&mut fd, 0x2000, 2);
    push_void(&mut fd, bl, 0x2000, OpCode::CPUI_STORE, 3);
    let v = push_out(&mut fd, bl, 0x2004, OpCode::CPUI_INT_ADD, 2);
    push_cbranch(&mut fd, bl, 0x2008, v);
    let shape = printed_shape(&fd, &fd.bb_ops(bl)).expect("renders as an expression");
    assert_eq!(shape.stmts, 3, "STORE + assignment + the CBRANCH condition");
    assert_eq!(shape.root_calls, 0);
}

#[test]
fn printed_shape_skips_markers_and_the_bare_branch() {
    // The printer emits neither an SSA marker nor an unconditional BRANCH, so
    // neither is an element of the comma chain.
    let mut fd = scorer_fd();
    let bl = scorer_block(&mut fd, 0x2000, 2);
    push_out(&mut fd, bl, 0x2000, OpCode::CPUI_INDIRECT, 2);
    let v = push_out(&mut fd, bl, 0x2008, OpCode::CPUI_INT_ADD, 2);
    let cb = push_cbranch(&mut fd, bl, 0x200c, v);
    push_before(&mut fd, bl, 0x2004, OpCode::CPUI_BRANCH, 1, cb);
    let shape = printed_shape(&fd, &fd.bb_ops(bl)).expect("renders as an expression");
    assert_eq!(
        shape.stmts, 2,
        "only the assignment and the condition print"
    );
}

#[test]
fn printed_shape_refuses_what_cannot_render_as_an_expression() {
    // No terminal CBRANCH: there is no condition to fold.
    let mut fd = scorer_fd();
    let bl = scorer_block(&mut fd, 0x2000, 2);
    push_void(&mut fd, bl, 0x2000, OpCode::CPUI_CALL, 1);
    assert!(printed_shape(&fd, &fd.bb_ops(bl)).is_none());

    // A non-terminal branch survives the skips: angr's
    // `_build_multistatementexpr_statements` refuses the same shape, and a
    // `goto` is not an expression.
    let mut fd = scorer_fd();
    let bl = scorer_block(&mut fd, 0x3000, 2);
    let c0 = push_out(&mut fd, bl, 0x3000, OpCode::CPUI_INT_EQUAL, 2);
    let cb = push_cbranch(&mut fd, bl, 0x3004, c0);
    push_before(&mut fd, bl, 0x3002, OpCode::CPUI_BRANCHIND, 1, cb);
    assert!(printed_shape(&fd, &fd.bb_ops(bl)).is_none());
}

/// Build the unit-scale form of the `tests/stages/ghangr-condfold-ruleb.toml`
/// middle guard: `su_log(); x = su_euid(); if (x != wu)`, i.e. TWO calls that
/// each print as their own comma element.
fn two_call_guard(fd: &mut Funcdata, off: u64) -> BlockId {
    let bl = scorer_block(fd, off, 2);
    // su_log() -- a void call.
    push_void(fd, bl, off, OpCode::CPUI_CALL, 1);
    // x = su_euid() -- an output the block does not consume (the failure arm
    // does), so it is neither implied nor in-block-only: it prints.
    push_out(fd, bl, off + 4, OpCode::CPUI_CALL, 1);
    // if (x != wu) -- the compare feeds only the CBRANCH, so it is inlined.
    let cond = push_out(fd, bl, off + 8, OpCode::CPUI_INT_EQUAL, 2);
    push_cbranch(fd, bl, off + 12, cond);
    bl
}

#[test]
fn two_statement_root_calls_are_rule_bs_alone() {
    // THE separation between the two admission rules, on a real op list.
    // Rule A's call cap is 1 and does NOT move with the policy level; Rule B
    // allows 2.  So this block is outside Rule A at `on` AND at `wide`, and
    // inside Rule B at both -- which is exactly why the stage witness built on
    // this shape fails if Rule B is deleted.
    let mut fd = scorer_fd();
    let bl = two_call_guard(&mut fd, 0x2000);

    let shape = printed_shape(&fd, &fd.bb_ops(bl)).expect("renders as an expression");
    assert_eq!(shape.stmts, 4, "two calls, the compare, and the condition");
    assert_eq!(shape.root_calls, 2, "both calls print as their own element");

    assert!(
        !prefix_eligible(&fd, bl, MAX_PREFIX_STMTS_ANGR),
        "Rule A refuses a second statement-root call at `on`"
    );
    assert!(
        !prefix_eligible(&fd, bl, MAX_PREFIX_STMTS_WIDE),
        "and at `wide` -- the call cap is not a level knob"
    );

    let verdict = shape_score(&fd, bl, MAX_PREFIX_STMTS_ANGR).expect("Rule B admits");
    assert_eq!(verdict.printed, 4);
    assert_eq!(
        verdict.scored, 2,
        "both calls score; the compare is inlined into the condition"
    );

    // The precompute agrees, and records the block under Rule B only.
    let sets = compute_condfold_sets(&fd, MAX_PREFIX_STMTS_ANGR);
    assert!(!sets.prefix.contains(&bl));
    assert_eq!(sets.shape.get(&bl), Some(&verdict));
}

#[test]
fn the_shared_width_budget_binds_rule_b_too() {
    // The consolidation's fix: Rule B is measured against the SAME budget Rule
    // A is.  The four-element guard above is admitted at `on` (5) and refused
    // below it, even though its `calc_explicit` score is unchanged at 2.
    let mut fd = scorer_fd();
    let bl = two_call_guard(&mut fd, 0x2000);
    assert!(shape_score(&fd, bl, 4).is_some(), "exactly at the budget");
    assert!(shape_score(&fd, bl, 3).is_none(), "one over: refused");
}

#[test]
fn shape_score_refuses_the_shapes_outside_its_allowlist() {
    // A CALLOTHER: userop rendering can be multi-line or special-cased.
    let mut fd = scorer_fd();
    let bl = scorer_block(&mut fd, 0x2000, 2);
    push_void(&mut fd, bl, 0x2000, OpCode::CPUI_CALLOTHER, 1);
    let cond = push_out(&mut fd, bl, 0x2004, OpCode::CPUI_INT_EQUAL, 2);
    push_cbranch(&mut fd, bl, 0x2008, cond);
    assert!(shape_score(&fd, bl, MAX_PREFIX_STMTS_WIDE).is_none());

    // An interior flow break (a RETURN before the tail).
    let mut fd = scorer_fd();
    let bl = scorer_block(&mut fd, 0x3000, 2);
    let cond = push_out(&mut fd, bl, 0x3000, OpCode::CPUI_INT_EQUAL, 2);
    let cb = push_cbranch(&mut fd, bl, 0x3008, cond);
    push_before(&mut fd, bl, 0x3004, OpCode::CPUI_RETURN, 1, cb);
    assert!(shape_score(&fd, bl, MAX_PREFIX_STMTS_WIDE).is_none());

    // A one-out block is not a short-circuit sibling at all.
    let mut fd = scorer_fd();
    let bl = scorer_block(&mut fd, 0x4000, 1);
    let cond = push_out(&mut fd, bl, 0x4000, OpCode::CPUI_INT_EQUAL, 2);
    push_cbranch(&mut fd, bl, 0x4004, cond);
    assert!(shape_score(&fd, bl, MAX_PREFIX_STMTS_WIDE).is_none());
}

#[test]
fn the_precompute_is_dead_at_budget_zero() {
    // `condfold off` is the 0 sentinel: no block is admitted under EITHER rule,
    // so every gate disjunct is dead and the emitted C is upstream's.
    let mut fd = scorer_fd();
    let bl = two_call_guard(&mut fd, 0x2000);
    assert!(shape_score(&fd, bl, MAX_PREFIX_STMTS_ANGR).is_some());
    assert!(compute_condfold_sets(&fd, 0).is_empty());
}
