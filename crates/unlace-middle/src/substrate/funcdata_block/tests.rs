use std::rc::Rc;

use unlace_base::address::Address;
use unlace_base::space::{
    AddrSpace, AddrSpaceManager, ConstantSpace, UniqueSpace, addrspace_flags, spacetype,
};
use unlace_num::opcodes::OpCode;

use crate::context::{ArchContext, BlockId, OpId, TypeOp};
use crate::funcdata::Funcdata;
use crate::op::pcodeop_flags;

fn build_manager() -> AddrSpaceManager {
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
    m
}

fn build_fd() -> Funcdata {
    let manage = build_manager();
    let glb = Rc::new(ArchContext::new(manage));
    let ram = Rc::clone(glb.manage().get_space_by_name("ram").unwrap());
    let addr = Address::new(ram, 0x1000);
    Funcdata::new("func", "func", glb, addr, 0x10000000, 0x40).unwrap()
}

/// The `ram` space as a clonable handle (captured once per test so it does
/// not re-borrow `fd` while building ops).
fn ramspace(fd: &Funcdata) -> Rc<AddrSpace> {
    Rc::clone(fd.get_arch().manage().get_space_by_name("ram").unwrap())
}

fn addr(rs: &Rc<AddrSpace>, off: u64) -> Address {
    Address::new(Rc::clone(rs), off)
}

/// Append a terminating op of the given opcode (with the matching cached
/// flags) at address `pc` into basic block `bl`; returns the op.
fn term_op(fd: &mut Funcdata, bl: BlockId, opc: OpCode, flags: u32, pc: Address) -> OpId {
    let op = fd.obank_mut().create_at(1, pc);
    fd.obank_mut()
        .change_opcode(op, TypeOp::new(opc, flags, format!("{opc:?}")));
    // A block op is alive in the real pipeline (create_at starts it dead, the
    // flow lift `mark_alive`s on integration); mark it so `op_destroy`'s
    // `mark_dead` can move it off the alive list.
    fd.obank_mut().mark_alive(op);
    fd.bb_insert_op(op, bl, None);
    op
}

#[test]
fn structure_reset_diamond_dominators_and_reachability() {
    // entry -> {a, b} -> join   (a reducible diamond)
    let mut fd = build_fd();
    let root = fd.bblocks_root_pub();
    let entry = fd.bblocks_mut().new_block_basic(root);
    let a = fd.bblocks_mut().new_block_basic(root);
    let b = fd.bblocks_mut().new_block_basic(root);
    let join = fd.bblocks_mut().new_block_basic(root);
    fd.bblocks_mut().add_edge(entry, a);
    fd.bblocks_mut().add_edge(entry, b);
    fd.bblocks_mut().add_edge(a, join);
    fd.bblocks_mut().add_edge(b, join);
    fd.bblocks_mut().set_start_block(root, entry);

    fd.structure_reset();

    // All four blocks are reachable -> single root -> no unreachable flag.
    assert!(!fd.has_unreachable_blocks());
    // join's immediate dominator is the entry (the diamond join point).
    let jdom = fd.bblocks_ref().block(join).get_immed_dom();
    assert_eq!(jdom, Some(entry));
    // The structured hierarchy was reset to empty.
    assert_eq!(fd.sblocks_get_size(), 0);
}

#[test]
fn structure_reset_flags_unreachable_block() {
    // entry -> a ;  orphan with no in-edge.
    let mut fd = build_fd();
    let root = fd.bblocks_root_pub();
    let entry = fd.bblocks_mut().new_block_basic(root);
    let a = fd.bblocks_mut().new_block_basic(root);
    let _orphan = fd.bblocks_mut().new_block_basic(root);
    fd.bblocks_mut().add_edge(entry, a);
    fd.bblocks_mut().set_start_block(root, entry);

    fd.structure_reset();
    // The orphan is its own root -> rootlist > 1 -> blocks_unreachable set.
    assert!(fd.has_unreachable_blocks());
}

#[test]
fn set_basic_block_range_sets_cover() {
    let mut fd = build_fd();
    let rs = ramspace(&fd);
    let root = fd.bblocks_root_pub();
    let bl = fd.bblocks_mut().new_block_basic(root);
    let beg = addr(&rs, 0x1000);
    let end = addr(&rs, 0x100f);
    fd.set_basic_block_range(bl, &beg, &end);
    // The block now covers [0x1000, 0x100f].
    let bb = fd.bblocks_ref().block(bl);
    if let crate::block::BlockKind::Basic(b) = bb.kind() {
        assert_eq!(b.cover.num_ranges(), 1);
        let r = b.cover.get_first_range().unwrap();
        assert_eq!(r.get_first(), 0x1000);
        assert_eq!(r.get_last(), 0x100f);
    } else {
        panic!("not basic");
    }
}

#[test]
fn force_goto_labels_edge() {
    // bl0 (CBRANCH at 0x1000) -> bl1 (BRANCH at 0x2000)
    let mut fd = build_fd();
    let rs = ramspace(&fd);
    let root = fd.bblocks_root_pub();
    let bl0 = fd.bblocks_mut().new_block_basic(root);
    let bl1 = fd.bblocks_mut().new_block_basic(root);
    let bl2 = fd.bblocks_mut().new_block_basic(root);
    fd.bblocks_mut().add_edge(bl0, bl1);
    fd.bblocks_mut().add_edge(bl0, bl2);
    // bl0's tail op at 0x1000, bl1's tail op at 0x2000.
    term_op(
        &mut fd,
        bl0,
        OpCode::CPUI_CBRANCH,
        pcodeop_flags::branch,
        addr(&rs, 0x1000),
    );
    term_op(
        &mut fd,
        bl1,
        OpCode::CPUI_BRANCH,
        pcodeop_flags::branch,
        addr(&rs, 0x2000),
    );
    term_op(
        &mut fd,
        bl2,
        OpCode::CPUI_BRANCH,
        pcodeop_flags::branch,
        addr(&rs, 0x3000),
    );

    let pcop = addr(&rs, 0x1000);
    let pcdest = addr(&rs, 0x2000);
    let labeled = fd.force_goto(&pcop, &pcdest).unwrap();
    assert!(labeled);
    // The edge bl0 -> bl1 (out index 0) is now a goto branch.
    assert!(fd.bblocks_ref().block(bl0).is_goto_out(0));
    // A non-matching destination labels nothing.
    let nope = addr(&rs, 0x9999);
    assert!(!fd.force_goto(&pcop, &nope).unwrap());
}

#[test]
fn switch_edge_reroutes_and_resets() {
    // in -> before ; reroute to after.
    let mut fd = build_fd();
    let root = fd.bblocks_root_pub();
    let inb = fd.bblocks_mut().new_block_basic(root);
    let before = fd.bblocks_mut().new_block_basic(root);
    let after = fd.bblocks_mut().new_block_basic(root);
    fd.bblocks_mut().add_edge(inb, before);
    fd.bblocks_mut().set_start_block(root, inb);
    fd.switch_edge(inb, before, after);
    // inb now flows to `after`, not `before`.
    assert_eq!(fd.bblocks_ref().block(inb).get_out(0), after);
    assert_eq!(fd.bblocks_ref().block(inb).size_out(), 1);
}

#[test]
fn node_split_block_edge_duplicates_outs() {
    // a -> b -> c ;  split b on its single in-edge from a.
    let mut fd = build_fd();
    let root = fd.bblocks_root_pub();
    let a = fd.bblocks_mut().new_block_basic(root);
    let b = fd.bblocks_mut().new_block_basic(root);
    let c = fd.bblocks_mut().new_block_basic(root);
    // Two in-edges into b so the in/out structure is non-trivial.
    let a2 = fd.bblocks_mut().new_block_basic(root);
    fd.bblocks_mut().add_edge(a, b);
    fd.bblocks_mut().add_edge(a2, b);
    fd.bblocks_mut().add_edge(b, c);
    // Give b an address cover so copyRange has something to copy.
    let rs = ramspace(&fd);
    fd.set_basic_block_range(b, &addr(&rs, 0x2000), &addr(&rs, 0x2010));

    let inedge = 0; // the edge from `a`
    let bprime = fd.node_split_block_edge(b, inedge);
    // bprime inherits b's out edges (to c) and the moved in-edge from a.
    assert_eq!(fd.bblocks_ref().block(bprime).get_out(0), c);
    // a now flows to bprime, not b.
    assert_eq!(fd.bblocks_ref().block(a).get_out(0), bprime);
    // b keeps the a2 in-edge.
    assert_eq!(fd.bblocks_ref().block(b).size_in(), 1);
    // bprime copied b's address cover.
    if let crate::block::BlockKind::Basic(bd) = fd.bblocks_ref().block(bprime).kind() {
        assert_eq!(bd.cover.num_ranges(), 1);
    } else {
        panic!("bprime not basic");
    }
}

#[test]
fn splice_block_basic_destroys_trailing_branch() {
    // bl (with trailing BRANCH) -> outbl : splice now DESTROYS the trailing
    // branch op (C++ funcdata_block.cc:941) — the W3-op boundary is closed.
    let mut fd = build_fd();
    let root = fd.bblocks_root_pub();
    let rs = ramspace(&fd);
    let bl = fd.bblocks_mut().new_block_basic(root);
    let outbl = fd.bblocks_mut().new_block_basic(root);
    let succ = fd.bblocks_mut().new_block_basic(root);
    fd.bblocks_mut().add_edge(bl, outbl);
    fd.bblocks_mut().add_edge(outbl, succ);
    fd.set_basic_block_range(bl, &addr(&rs, 0x1000), &addr(&rs, 0x1004));
    fd.set_basic_block_range(outbl, &addr(&rs, 0x1008), &addr(&rs, 0x100c));
    let br = term_op(
        &mut fd,
        bl,
        OpCode::CPUI_BRANCH,
        pcodeop_flags::branch,
        addr(&rs, 0x1000),
    );
    let op_out = term_op(&mut fd, outbl, OpCode::CPUI_COPY, 0, addr(&rs, 0x1008));

    fd.splice_block_basic(bl).unwrap();
    // The trailing BRANCH was destroyed; bl now holds only outbl's COPY.
    assert!(fd.obank().get(br).expect("br slot kept").is_dead());
    assert_eq!(fd.bb_ops(bl), vec![op_out]);
    // bl inherited outbl's out edge to succ.
    assert_eq!(fd.bblocks_ref().block(bl).get_out(0), succ);
}

#[test]
fn splice_block_basic_rejects_invalid_chain() {
    // bl with no single-in/single-out successor -> "Cannot splice basic blocks".
    let mut fd = build_fd();
    let root = fd.bblocks_root_pub();
    let bl = fd.bblocks_mut().new_block_basic(root);
    let o1 = fd.bblocks_mut().new_block_basic(root);
    let o2 = fd.bblocks_mut().new_block_basic(root);
    fd.bblocks_mut().add_edge(bl, o1);
    fd.bblocks_mut().add_edge(bl, o2); // two outs -> invalid
    let err = fd.splice_block_basic(bl).unwrap_err();
    assert!(err.to_string().contains("Cannot splice"));
}

#[test]
fn splice_block_basic_merges_op_lists() {
    // bl (one plain op) -> outbl (one plain op).  No branch, no MULTIEQUAL:
    // the op lists merge, cover merges, blocks splice.
    let mut fd = build_fd();
    let rs = ramspace(&fd);
    let root = fd.bblocks_root_pub();
    let bl = fd.bblocks_mut().new_block_basic(root);
    let outbl = fd.bblocks_mut().new_block_basic(root);
    let succ = fd.bblocks_mut().new_block_basic(root);
    fd.bblocks_mut().add_edge(bl, outbl);
    fd.bblocks_mut().add_edge(outbl, succ);
    fd.set_basic_block_range(bl, &addr(&rs, 0x1000), &addr(&rs, 0x1004));
    fd.set_basic_block_range(outbl, &addr(&rs, 0x1008), &addr(&rs, 0x100c));
    let op_bl = term_op(&mut fd, bl, OpCode::CPUI_COPY, 0, addr(&rs, 0x1000));
    let op_out = term_op(&mut fd, outbl, OpCode::CPUI_COPY, 0, addr(&rs, 0x1008));

    fd.splice_block_basic(bl).unwrap();
    // bl now holds both ops in order; outbl is gone.
    assert_eq!(fd.bb_ops(bl), vec![op_bl, op_out]);
    // bl inherited outbl's out edge to succ.
    assert_eq!(fd.bblocks_ref().block(bl).get_out(0), succ);
    // bl's cover now spans both ranges.
    if let crate::block::BlockKind::Basic(bd) = fd.bblocks_ref().block(bl).kind() {
        assert_eq!(bd.cover.num_ranges(), 2);
    } else {
        panic!("bl not basic");
    }
}

// -----------------------------------------------------------------------
// do-nothing predicates + removeDoNothingBlock + isComplex
// -----------------------------------------------------------------------

#[test]
fn has_only_markers_and_is_do_nothing() {
    // A block with only a MULTIEQUAL marker + a BRANCH, one in, one out, is a
    // do-nothing block; adding a real COPY makes it not.
    let mut fd = build_fd();
    let rs = ramspace(&fd);
    let root = fd.bblocks_root_pub();
    let pred = fd.bblocks_mut().new_block_basic(root);
    let bb = fd.bblocks_mut().new_block_basic(root);
    let succ = fd.bblocks_mut().new_block_basic(root);
    fd.bblocks_mut().add_edge(pred, bb);
    fd.bblocks_mut().add_edge(bb, succ);

    // MULTIEQUAL marker (flags=marker) + BRANCH (flags=branch).
    let _mq = term_op(
        &mut fd,
        bb,
        OpCode::CPUI_MULTIEQUAL,
        pcodeop_flags::marker,
        addr(&rs, 0x2000),
    );
    let _br = term_op(
        &mut fd,
        bb,
        OpCode::CPUI_BRANCH,
        pcodeop_flags::branch,
        addr(&rs, 0x2004),
    );
    assert!(fd.bb_has_only_markers(bb));
    assert!(fd.bb_is_do_nothing(bb));
    assert!(!fd.bb_is_complex(bb)); // marker + single branch -> statement <= 1

    // Insert a real calculation op -> no longer marker-only / do-nothing.
    let _copy = term_op(&mut fd, bb, OpCode::CPUI_COPY, 0, addr(&rs, 0x2008));
    assert!(!fd.bb_has_only_markers(bb));
    assert!(!fd.bb_is_do_nothing(bb));
}

#[test]
fn is_do_nothing_rejects_zero_in_and_multi_out() {
    let mut fd = build_fd();
    let rs = ramspace(&fd);
    let root = fd.bblocks_root_pub();
    // Starting block (no in-edges) is never do-nothing (global placeholder).
    let start = fd.bblocks_mut().new_block_basic(root);
    let s_out = fd.bblocks_mut().new_block_basic(root);
    fd.bblocks_mut().add_edge(start, s_out);
    let _br = term_op(
        &mut fd,
        start,
        OpCode::CPUI_BRANCH,
        pcodeop_flags::branch,
        addr(&rs, 0x3000),
    );
    assert!(!fd.bb_is_do_nothing(start)); // sizeIn() == 0

    // A two-out block (CBRANCH) is never do-nothing (sizeOut != 1).
    let pred = fd.bblocks_mut().new_block_basic(root);
    let twoout = fd.bblocks_mut().new_block_basic(root);
    let o1 = fd.bblocks_mut().new_block_basic(root);
    let o2 = fd.bblocks_mut().new_block_basic(root);
    fd.bblocks_mut().add_edge(pred, twoout);
    fd.bblocks_mut().add_edge(twoout, o1);
    fd.bblocks_mut().add_edge(twoout, o2);
    assert!(!fd.bb_is_do_nothing(twoout)); // sizeOut() == 2
}

#[test]
fn remove_do_nothing_block_splices_empty_marker_block() {
    // pred -> bb(empty: MULTIEQUAL marker + BRANCH) -> succ.  removeDoNothing
    // deletes bb, reconnecting pred directly to succ, and forces a structure
    // reset (sblocks cleared).
    let mut fd = build_fd();
    let rs = ramspace(&fd);
    let root = fd.bblocks_root_pub();
    let pred = fd.bblocks_mut().new_block_basic(root);
    let bb = fd.bblocks_mut().new_block_basic(root);
    let succ = fd.bblocks_mut().new_block_basic(root);
    fd.bblocks_mut().add_edge(pred, bb);
    fd.bblocks_mut().add_edge(bb, succ);
    // A bare BRANCH (no MULTIEQUAL: no data flow to patch) keeps this test
    // focused on the control-flow splice.
    let _br = term_op(
        &mut fd,
        bb,
        OpCode::CPUI_BRANCH,
        pcodeop_flags::branch,
        addr(&rs, 0x4000),
    );
    assert!(fd.bb_is_do_nothing(bb));
    assert!(fd.bb_unblocked_multi(bb, 0));

    let n_before = fd.bblocks_get_size();
    fd.remove_do_nothing_block(bb).unwrap();
    // bb is gone; pred now flows straight to succ.
    assert_eq!(fd.bblocks_get_size(), n_before - 1);
    assert_eq!(fd.bblocks_ref().block(pred).get_out(0), succ);
    assert_eq!(fd.bblocks_ref().block(succ).get_in(0), pred);
    // sblocks was cleared by structure_reset.
    assert_eq!(fd.sblocks_get_size(), 0);
}

#[test]
fn remove_do_nothing_block_rejects_multi_out() {
    let mut fd = build_fd();
    let root = fd.bblocks_root_pub();
    let pred = fd.bblocks_mut().new_block_basic(root);
    let bb = fd.bblocks_mut().new_block_basic(root);
    let o1 = fd.bblocks_mut().new_block_basic(root);
    let o2 = fd.bblocks_mut().new_block_basic(root);
    fd.bblocks_mut().add_edge(pred, bb);
    fd.bblocks_mut().add_edge(bb, o1);
    fd.bblocks_mut().add_edge(bb, o2);
    let err = fd.remove_do_nothing_block(bb).unwrap_err();
    assert!(err.to_string().contains("Cannot delete a reachable block"));
}

// =======================================================================
// VERIFIER adversarial tests (rport/w10-emptyblock-orform).
//
// Target the hunt-list spots most fragile for this item: the
// `BlockBasic::isComplex` statement-count BOUNDARY (`statement > 2`, the
// off-by-one that gates ruleBlockOr/whileDo), the `unblockedMulti`
// redundant-branch dereference, and the anti-mis-fold guard (a *complex*
// orblock must NOT be absorbed, i.e. `is_complex` genuinely rejects).
// =======================================================================

/// Append a COPY op at `pc` into `bb` whose output is a fresh, no-descend
/// `ram` Varnode at `out_off`.  In `BlockBasic::isComplex` such a calculation
/// (output with `hasNoDescend()`) counts as one statement.
fn copy_with_dead_out(fd: &mut Funcdata, bb: BlockId, pc: Address, out_off: u64) -> OpId {
    let rs = ramspace(fd);
    let op = fd.new_op(1, pc);
    fd.op_set_opcode(op, crate::typeop::type_op_for(OpCode::CPUI_COPY));
    let outvn = fd.new_varnode(4, &addr(&rs, out_off), None);
    fd.op_set_output(op, outvn).unwrap();
    fd.obank_mut().mark_alive(op);
    fd.bb_insert_op(op, bb, None);
    op
}

/// VF1 — `bb_is_complex` boundary: with `max_implied_ref == 2` the block is
/// complex strictly once the statement count EXCEEDS 2.  A single-out block
/// (statement starts at 0) with two dead-output COPYs counts 2 -> NOT
/// complex; a third pushes it to 3 (> 2) -> complex.  This pins the C++
/// `if (statement > 2) return true;` off-by-one (block.cc:2456).
#[test]
fn vf1_bb_is_complex_statement_count_boundary() {
    let mut fd = build_fd();
    let rs = ramspace(&fd);
    let root = fd.bblocks_root_pub();
    let pred = fd.bblocks_mut().new_block_basic(root);
    let bb = fd.bblocks_mut().new_block_basic(root);
    let succ = fd.bblocks_mut().new_block_basic(root);
    fd.bblocks_mut().add_edge(pred, bb);
    fd.bblocks_mut().add_edge(bb, succ); // single out -> statement base 0

    // Two calculations (statement == 2): NOT complex (2 is not > 2).
    let _c1 = copy_with_dead_out(&mut fd, bb, addr(&rs, 0x5000), 0x90);
    let _c2 = copy_with_dead_out(&mut fd, bb, addr(&rs, 0x5004), 0x98);
    assert!(
        !fd.bb_is_complex(bb),
        "two statements must NOT be complex (2 !> 2)"
    );

    // A third calculation (statement == 3): complex (3 > 2).
    let _c3 = copy_with_dead_out(&mut fd, bb, addr(&rs, 0x5008), 0xa0);
    assert!(
        fd.bb_is_complex(bb),
        "three statements MUST be complex (3 > 2)"
    );
}

/// VF2 — `bb_is_complex` two-out branch counts as the first statement.  A
/// CBRANCH block (`sizeOut() >= 2`) starts at statement == 1, so only TWO
/// dead-output calculations are needed to cross the > 2 threshold (1 + 2 ==
/// 3).  This pins the C++ `if (sizeOut()>=2) statement = 1;` seed
/// (block.cc:2414) AND that a marker op (MULTIEQUAL) is skipped, not counted.
#[test]
fn vf2_bb_is_complex_branch_seed_and_marker_skip() {
    let mut fd = build_fd();
    let rs = ramspace(&fd);
    let root = fd.bblocks_root_pub();
    let pred = fd.bblocks_mut().new_block_basic(root);
    let bb = fd.bblocks_mut().new_block_basic(root);
    let o1 = fd.bblocks_mut().new_block_basic(root);
    let o2 = fd.bblocks_mut().new_block_basic(root);
    fd.bblocks_mut().add_edge(pred, bb);
    fd.bblocks_mut().add_edge(bb, o1);
    fd.bblocks_mut().add_edge(bb, o2); // two out -> statement seeded to 1

    // A MULTIEQUAL marker must be SKIPPED (not counted) — add one to prove it.
    let _mq = term_op(
        &mut fd,
        bb,
        OpCode::CPUI_MULTIEQUAL,
        pcodeop_flags::marker,
        addr(&rs, 0x6000),
    );
    // One calculation: statement == 1 (seed) + 1 == 2 -> NOT complex.
    let _c1 = copy_with_dead_out(&mut fd, bb, addr(&rs, 0x6004), 0xb0);
    assert!(
        !fd.bb_is_complex(bb),
        "branch-seed 1 + 1 calc == 2, marker skipped, NOT complex"
    );

    // Second calculation: 1 + 2 == 3 -> complex.  (If the marker had been
    // miscounted, the block would already be complex above.)
    let _c2 = copy_with_dead_out(&mut fd, bb, addr(&rs, 0x6008), 0xb8);
    assert!(
        fd.bb_is_complex(bb),
        "branch-seed 1 + 2 calcs == 3 -> complex"
    );
}

/// VF3 — `bb_unblocked_multi` rejects a redundant branch carrying a DIFFERENT
/// value through a MULTIEQUAL in the out block.  Two predecessors of `bb`
/// also branch directly to `bb`'s out block `blout`, which has a MULTIEQUAL.
/// When the redundant slot's value differs from `bb`'s slot value, removing
/// `bb` would hide an inconsistent implied copy -> `unblockedMulti` is false.
/// Pins the C++ `if (vnremove != vnredund) return false;` (block.cc:2595).
#[test]
fn vf3_bb_unblocked_multi_rejects_inconsistent_redundant_branch() {
    let mut fd = build_fd();
    let rs = ramspace(&fd);
    let root = fd.bblocks_root_pub();
    // CFG: pred -> bb -> blout ; pred ALSO -> blout (the redundant branch).
    let pred = fd.bblocks_mut().new_block_basic(root);
    let bb = fd.bblocks_mut().new_block_basic(root);
    let blout = fd.bblocks_mut().new_block_basic(root);
    fd.bblocks_mut().add_edge(pred, bb);
    fd.bblocks_mut().add_edge(bb, blout);
    fd.bblocks_mut().add_edge(pred, blout); // redundant edge pred->blout

    // blout's in-edges: [bb, pred] (insertion order).  Build a 2-input
    // MULTIEQUAL there whose slot for `bb` and slot for `pred` differ.
    let in_bb = fd.bblocks_ref().block(blout).get_in_index(bb);
    let in_pred = fd.bblocks_ref().block(blout).get_in_index(pred);
    // The MULTIEQUAL slot values must be WRITTEN (a free varnode may hold only
    // one descendant — the addDescend invariant), so define each by a COPY in
    // `pred`; that lets one value feed two slots in the "identical" half.
    let c_bb = copy_with_dead_out(&mut fd, pred, addr(&rs, 0x6f00), 0xc0);
    let v_bb = fd.obank().get(c_bb).unwrap().get_out().unwrap();
    let c_pred = copy_with_dead_out(&mut fd, pred, addr(&rs, 0x6f04), 0xc8);
    let v_pred = fd.obank().get(c_pred).unwrap().get_out().unwrap(); // DIFFERENT value
    let mq = fd.new_op(2, addr(&rs, 0x7000));
    fd.op_set_opcode(mq, crate::typeop::type_op_for(OpCode::CPUI_MULTIEQUAL));
    let mq_out = fd.new_varnode(4, &addr(&rs, 0xd0), None);
    fd.op_set_output(mq, mq_out).unwrap();
    fd.op_set_input(mq, v_bb, in_bb).unwrap();
    fd.op_set_input(mq, v_pred, in_pred).unwrap();
    fd.obank_mut().mark_alive(mq);
    fd.bb_insert_op(mq, blout, None);

    // The redundant branch (pred->blout) carries v_pred; bb's slot carries
    // v_bb.  They differ -> removing bb is NOT unblocked.
    assert!(
        !fd.bb_unblocked_multi(bb, 0),
        "inconsistent redundant MULTIEQUAL value must block removal"
    );

    // Make the two slots IDENTICAL: now the redundant branch is harmless.
    fd.op_set_input(mq, v_bb, in_pred).unwrap();
    assert!(
        fd.bb_unblocked_multi(bb, 0),
        "identical redundant MULTIEQUAL value -> unblocked"
    );
}

/// NS2 — `node_split` rejects a block with out-flow and a block with a single
/// in edge (C++ `nodeSplit` guards, funcdata_block.cc:867-870).  These are
/// pure structural guards — no function-name/value special-casing.
#[test]
fn ns2_node_split_rejects_outflow_and_single_inedge() {
    let mut fd = build_fd();
    let root = fd.bblocks_root_pub();
    // Block with an out edge -> rejected.
    let p0 = fd.bblocks_mut().new_block_basic(root);
    let p1 = fd.bblocks_mut().new_block_basic(root);
    let b = fd.bblocks_mut().new_block_basic(root);
    let out = fd.bblocks_mut().new_block_basic(root);
    fd.bblocks_mut().add_edge(p0, b);
    fd.bblocks_mut().add_edge(p1, b);
    fd.bblocks_mut().add_edge(b, out); // out flow
    let err = fd.node_split(b, 0).unwrap_err();
    assert!(
        err.to_string().contains("out flow"),
        "out-flow block rejected"
    );

    // Block with a single in edge -> rejected.
    let q0 = fd.bblocks_mut().new_block_basic(root);
    let single = fd.bblocks_mut().new_block_basic(root);
    fd.bblocks_mut().add_edge(q0, single);
    let err2 = fd.node_split(single, 0).unwrap_err();
    assert!(
        err2.to_string().contains("only 1 in edge"),
        "single-in-edge block rejected"
    );
}

/// A MULTIEQUAL that sits behind a non-MULTIEQUAL op still has its input
/// removed when an in-edge is severed.  A phi converted in place
/// (`op_zero_multi`, `analyze_extra_pop`) splits the marker run, and a
/// resync that stopped at the first non-phi left the trailing phis with an
/// arity the block's in-degree no longer matches.
#[test]
fn branch_remove_internal_patches_multiequals_behind_a_converted_op() {
    let mut fd = build_fd();
    let rs = ramspace(&fd);
    let root = fd.bblocks_root_pub();
    let p0 = fd.bblocks_mut().new_block_basic(root);
    let p1 = fd.bblocks_mut().new_block_basic(root);
    let tgt = fd.bblocks_mut().new_block_basic(root);
    fd.bblocks_mut().add_edge(p0, tgt);
    fd.bblocks_mut().add_edge(p1, tgt);
    fd.set_basic_block_range(tgt, &addr(&rs, 0x8000), &addr(&rs, 0x8010));

    let c0 = copy_with_dead_out(&mut fd, p0, addr(&rs, 0x7f00), 0x40);
    let v0 = fd.obank().get(c0).unwrap().get_out().unwrap();
    let c1 = copy_with_dead_out(&mut fd, p1, addr(&rs, 0x7f04), 0x48);
    let v1 = fd.obank().get(c1).unwrap().get_out().unwrap();
    let in0 = fd.bblocks_ref().block(tgt).get_in_index(p0);
    let in1 = fd.bblocks_ref().block(tgt).get_in_index(p1);

    let make_phi = |fd: &mut Funcdata, out_off: u64| {
        let mq = fd.new_op(2, addr(&rs, 0x8000));
        fd.op_set_opcode(mq, crate::typeop::type_op_for(OpCode::CPUI_MULTIEQUAL));
        let out = fd.new_varnode(4, &addr(&rs, out_off), None);
        fd.op_set_output(mq, out).unwrap();
        fd.op_set_input(mq, v0, in0).unwrap();
        fd.op_set_input(mq, v1, in1).unwrap();
        fd.obank_mut().mark_alive(mq);
        fd.bb_insert_op(mq, tgt, None);
        mq
    };
    // Op list: [phi_head, INT_ADD, phi_tail] -- the shape left behind when
    // ActionStackPtrFlow rewrites a solved phi into an INT_ADD in place.
    let phi_head = make_phi(&mut fd, 0x50);
    let add = fd.new_op(2, addr(&rs, 0x8000));
    fd.op_set_opcode(add, crate::typeop::type_op_for(OpCode::CPUI_INT_ADD));
    let add_out = fd.new_varnode(4, &addr(&rs, 0x58), None);
    fd.op_set_output(add, add_out).unwrap();
    fd.op_set_input(add, v0, 0).unwrap();
    let k = fd.new_constant(4, 4);
    fd.op_set_input(add, k, 1).unwrap();
    fd.obank_mut().mark_alive(add);
    fd.bb_insert_op(add, tgt, None);
    let phi_tail = make_phi(&mut fd, 0x60);

    fd.branch_remove_internal(p0, 0)
        .expect("branch_remove_internal");

    assert_eq!(
        fd.bblocks_ref().block(tgt).size_in(),
        1,
        "the p0 edge is gone"
    );
    for (name, mq) in [("leading", phi_head), ("trailing", phi_tail)] {
        let o = fd.obank().get(mq).unwrap();
        assert_eq!(
            o.num_input(),
            1,
            "{name} MULTIEQUAL must drop the severed edge's slot"
        );
        assert_eq!(
            o.code(),
            OpCode::CPUI_COPY,
            "{name} 1-input phi collapses to COPY"
        );
        assert_eq!(
            o.get_in(0),
            Some(v1),
            "{name} keeps the surviving edge's value"
        );
    }
}
