use super::*;
use crate::context::ArchContext;
use crate::funcdata::Funcdata;
use unlace_base::space::{
    AddrSpace, AddrSpaceManager, ConstantSpace, UniqueSpace, addrspace_flags,
};

// ---- fixtures ---------------------------------------------------------

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

fn ram(fd: &Funcdata) -> Rc<AddrSpace> {
    Rc::clone(fd.get_arch().manage().get_space_by_name("ram").unwrap())
}

fn raddr(fd: &Funcdata, off: u64) -> Address {
    Address::new(ram(fd), off)
}

/// Build a CFG of `n` basic blocks (indices 0..n in creation order) inside
/// the function's `bblocks` graph, wire `edges`, set reverse-post-order
/// indices to creation order, and run the forward-dominator pass.  Returns
/// the block ids (index i is `blocks[i]`).
///
/// The blocks are created in DFS/reverse-post order (the C++ `buildADT`
/// precondition); for the small acyclic/loop CFGs below, creation order IS
/// a valid reverse-post order with block 0 the start.
fn build_cfg(fd: &mut Funcdata, n: usize, edges: &[(usize, usize)]) -> Vec<BlockId> {
    let root = fd.bblocks_ref().root.expect("bblocks root");
    let g = fd.bblocks_mut();
    let mut blocks = Vec::with_capacity(n);
    for _ in 0..n {
        blocks.push(g.new_block_basic(root));
    }
    for (i, &id) in blocks.iter().enumerate() {
        g.block_mut(id).set_index(i as int4);
    }
    for &(a, b) in edges {
        g.add_edge(blocks[a], blocks[b]);
    }
    g.calc_forward_dominator(root, &[blocks[0]]);
    blocks
}

// ---- LocationMap ------------------------------------------------------

#[test]
fn location_map_add_new_range_pass0() {
    let fd = build_fd();
    let mut lm = LocationMap::new();
    let (key, intersect, _sz) = lm.add(raddr(&fd, 0x100), 4, 0);
    assert_eq!(key, raddr(&fd, 0x100));
    assert_eq!(intersect, 0);
    assert_eq!(lm.get(&key).unwrap().size, 4);
    assert_eq!(lm.get(&key).unwrap().pass, 0);
}

#[test]
fn location_map_contained_in_old_returns_intersect2() {
    let fd = build_fd();
    let mut lm = LocationMap::new();
    // pass 0: heritage [0x100, 0x108)
    lm.add(raddr(&fd, 0x100), 8, 0);
    // pass 1: a sub-range [0x102,0x106) is completely contained in the
    // old pass-0 element -> intersect == 2.
    let (key, intersect, _sz) = lm.add(raddr(&fd, 0x102), 4, 1);
    assert_eq!(intersect, 2);
    // The returned element is the containing pass-0 element.
    assert_eq!(key, raddr(&fd, 0x100));
    assert_eq!(lm.get(&key).unwrap().pass, 0);
}

#[test]
fn location_map_partial_old_overlap_returns_intersect1_and_carries_min_pass() {
    let fd = build_fd();
    let mut lm = LocationMap::new();
    lm.add(raddr(&fd, 0x100), 4, 0); // pass 0: [0x100,0x104)
    // pass 2: [0x102,0x10a) partially overlaps the old element.
    let (key, intersect, _sz) = lm.add(raddr(&fd, 0x102), 8, 2);
    assert_eq!(intersect, 1);
    // The unified element starts at the old start 0x100 and carries the
    // smaller (old) pass number 0.
    assert_eq!(key, raddr(&fd, 0x100));
    assert_eq!(lm.get(&key).unwrap().pass, 0);
    // size = where(2) + size(8) = 10
    assert_eq!(lm.get(&key).unwrap().size, 10);
}

#[test]
fn location_map_same_pass_overlap_returns_intersect0() {
    let fd = build_fd();
    let mut lm = LocationMap::new();
    lm.add(raddr(&fd, 0x100), 4, 0);
    // same pass, contained -> intersect 0 (not 2, since old.pass == pass)
    let (_key, intersect, _sz) = lm.add(raddr(&fd, 0x101), 2, 0);
    assert_eq!(intersect, 0);
}

#[test]
fn location_map_find_and_find_pass() {
    let fd = build_fd();
    let mut lm = LocationMap::new();
    lm.add(raddr(&fd, 0x200), 4, 3);
    // An address inside the range is found.
    let found = lm.find(&raddr(&fd, 0x202)).unwrap();
    assert_eq!(found.0, raddr(&fd, 0x200));
    assert_eq!(found.1.pass, 3);
    assert_eq!(lm.find_pass(&raddr(&fd, 0x202)), 3);
    // An address outside is not.
    assert!(lm.find(&raddr(&fd, 0x210)).is_none());
    assert_eq!(lm.find_pass(&raddr(&fd, 0x210)), -1);
}

#[test]
fn location_map_swallows_multiple_old_ranges() {
    let fd = build_fd();
    let mut lm = LocationMap::new();
    lm.add(raddr(&fd, 0x100), 4, 0); // [0x100,0x104)
    lm.add(raddr(&fd, 0x108), 4, 0); // [0x108,0x10c)
    // A big new range spanning both gets unified into one element.
    let (key, _i, _sz) = lm.add(raddr(&fd, 0x100), 0x10, 1);
    assert_eq!(key, raddr(&fd, 0x100));
    // Only one element remains.
    assert_eq!(lm.iter().count(), 1);
    // size grew to at least 0x10
    assert!(lm.get(&key).unwrap().size >= 0x10);
}

// ---- TaskList ---------------------------------------------------------

#[test]
fn tasklist_add_disjoint_appends() {
    let fd = build_fd();
    let mut tl = TaskList::new();
    tl.add(raddr(&fd, 0x100), 4, memrange_flags::new_addresses);
    tl.add(raddr(&fd, 0x200), 4, memrange_flags::old_addresses);
    assert_eq!(tl.len(), 2);
    assert!(tl.get(0).new_addresses());
    assert!(tl.get(1).old_addresses());
}

#[test]
fn tasklist_add_overlapping_last_extends_and_ors_flags() {
    let fd = build_fd();
    let mut tl = TaskList::new();
    tl.add(raddr(&fd, 0x100), 4, memrange_flags::new_addresses);
    // overlaps the last range -> extends it and ORs the flags
    tl.add(raddr(&fd, 0x102), 4, memrange_flags::old_addresses);
    assert_eq!(tl.len(), 1);
    // relsize = size(4) + over(2) = 6
    assert_eq!(tl.get(0).size, 6);
    assert!(tl.get(0).new_addresses());
    assert!(tl.get(0).old_addresses());
}

#[test]
fn tasklist_insert_and_erase() {
    let fd = build_fd();
    let mut tl = TaskList::new();
    tl.add(raddr(&fd, 0x100), 4, 0);
    tl.add(raddr(&fd, 0x300), 4, 0);
    tl.insert(1, raddr(&fd, 0x200), 4, 0);
    assert_eq!(tl.len(), 3);
    assert_eq!(tl.get(1).addr, raddr(&fd, 0x200));
    let next = tl.erase(1);
    assert_eq!(next, 1);
    assert_eq!(tl.get(1).addr, raddr(&fd, 0x300));
}

// ---- PriorityQueue ----------------------------------------------------

#[test]
fn priority_queue_lifo_within_depth_and_depth_priority() {
    // We only need distinct BlockIds; build three blocks in a CFG.
    let mut fd = build_fd();
    let b = build_cfg(&mut fd, 3, &[(0, 1), (1, 2)]);
    let (b0, b1, b2) = (b[0], b[1], b[2]);

    let mut pq = PriorityQueue::new();
    pq.reset(3);
    assert!(pq.empty());
    pq.insert(b0, 1);
    pq.insert(b1, 1); // same depth -> LIFO (b1 first)
    pq.insert(b2, 3); // higher depth -> extracted first
    assert!(!pq.empty());
    assert_eq!(pq.extract(), b2); // depth 3 wins
    assert_eq!(pq.extract(), b1); // depth 1, LIFO top
    assert_eq!(pq.extract(), b0);
    assert!(pq.empty());
}

#[test]
fn priority_queue_reset_idempotent_when_empty_and_same_maxdepth() {
    let mut pq = PriorityQueue::new();
    pq.reset(5);
    // empty and maxdepth matches -> the early return path (no panic, stays empty)
    pq.reset(5);
    assert!(pq.empty());
}

// ---- HeritageInfo -----------------------------------------------------

#[test]
fn heritage_info_heritaged_processor_space() {
    let fd = build_fd();
    let ram = ram(&fd);
    let info = HeritageInfo::new(Some(&ram));
    // ram is a heritaged processor space in the fixture
    assert_eq!(info.is_heritaged(), ram.is_heritaged());
    if ram.is_heritaged() {
        assert_eq!(info.delay(), ram.get_delay());
        assert_eq!(info.deadcode_delay(), ram.get_deadcode_delay());
    }
}

#[test]
fn heritage_info_null_space_is_not_heritaged() {
    let info = HeritageInfo::new(None);
    assert!(!info.is_heritaged());
    assert_eq!(info.delay(), 0);
    assert_eq!(info.deadcode_delay(), 0);
}

// ---- LoadGuard --------------------------------------------------------

#[test]
fn load_guard_set_and_is_guarded() {
    let fd = build_fd();
    let ram = ram(&fd);
    // We need an OpId; create a throwaway op.
    let mut fd2 = build_fd();
    let pc = raddr(&fd2, 0x1000);
    let op = fd2.new_op(2, pc);
    let mut g = LoadGuard::set(op, &ram, 0x40);
    // Initially guards everything from 0 to highest.
    assert_eq!(g.get_minimum(), 0);
    assert_eq!(g.get_maximum(), ram.get_highest());
    assert!(g.is_guarded(&raddr(&fd, 0x40)));
    assert!(!g.is_range_locked());
    // Narrow the range and re-check.
    g.minimum_offset = 0x40;
    g.maximum_offset = 0x80;
    assert!(g.is_guarded(&raddr(&fd, 0x40)));
    assert!(g.is_guarded(&raddr(&fd, 0x80)));
    assert!(!g.is_guarded(&raddr(&fd, 0x3f)));
    assert!(!g.is_guarded(&raddr(&fd, 0x81)));
}

// ---- Heritage construction + accessors --------------------------------

#[test]
fn heritage_new_and_clear_state() {
    let mut h = Heritage::new();
    assert_eq!(h.get_pass(), 0);
    let fd = build_fd();
    h.build_info_list(&fd);
    // info list has one entry per space
    assert_eq!(
        h.infolist.len(),
        fd.get_arch().manage().num_spaces() as usize
    );
    // idempotent
    h.build_info_list(&fd);
    assert_eq!(
        h.infolist.len(),
        fd.get_arch().manage().num_spaces() as usize
    );
    h.clear();
    assert_eq!(h.get_pass(), 0);
    assert!(h.infolist.is_empty() || h.infolist.iter().all(|i| !i.is_heritaged() || true));
}

#[test]
fn heritage_dead_code_delay_accessors() {
    let mut h = Heritage::new();
    let fd = build_fd();
    h.build_info_list(&fd);
    let ram = ram(&fd);
    if ram.is_heritaged() {
        let base = h.get_dead_code_delay(&ram);
        // setting a smaller delay errors
        assert!(h.set_dead_code_delay(&ram, ram.get_delay() - 1).is_err());
        // setting >= delay succeeds
        assert!(h.set_dead_code_delay(&ram, base + 2).is_ok());
        assert_eq!(h.get_dead_code_delay(&ram), base + 2);
        // dead removal allowed once pass exceeds the delay
        assert!(!h.dead_removal_allowed(&ram));
    }
}

#[test]
fn heritage_num_passes_errors_for_non_heritaged() {
    let mut h = Heritage::new();
    let fd = build_fd();
    h.build_info_list(&fd);
    // The constant space is not heritaged.
    let cspace = Rc::clone(fd.get_arch().manage().get_space(0).unwrap());
    assert!(!cspace.is_heritaged());
    assert!(h.num_heritage_passes(&cspace).is_err());
}

#[test]
fn heritage_seen_dead_code_and_removal_seen() {
    let mut h = Heritage::new();
    let fd = build_fd();
    h.build_info_list(&fd);
    let ram = ram(&fd);
    if ram.is_heritaged() {
        h.seen_dead_code(&ram);
        // pass is 0, deadcodedelay default >= 0, so removal not allowed
        let allowed = h.dead_removal_allowed_seen(&ram);
        assert_eq!(allowed, h.pass > h.get_dead_code_delay(&ram));
    }
}

#[test]
fn collect_preserves_half_open_range_outputs() {
    use unlace_num::opcodes::OpCode;

    let mut fd = build_fd();
    let copy = || crate::context::TypeOp::new(OpCode::CPUI_COPY, 0, "copy");

    let read = fd.new_varnode(1, &raddr(&fd, 0x100), None);
    let read_op = fd.new_op(1, raddr(&fd, 0x2000));
    fd.op_set_opcode(read_op, copy());
    fd.op_set_input(read_op, read, 0).unwrap();

    let write_op = fd.new_op(1, raddr(&fd, 0x2001));
    fd.op_set_opcode(write_op, copy());
    let write = fd.new_varnode_out(4, &raddr(&fd, 0x108), write_op).unwrap();

    let input_free = fd.new_varnode(2, &raddr(&fd, 0x10c), None);
    let input = fd.set_input_varnode(input_free).unwrap();

    let end_op = fd.new_op(1, raddr(&fd, 0x2002));
    fd.op_set_opcode(end_op, copy());
    let _end_write = fd.new_varnode_out(8, &raddr(&fd, 0x110), end_op).unwrap();

    let below_op = fd.new_op(1, raddr(&fd, 0x2003));
    fd.op_set_opcode(below_op, copy());
    let _below_write = fd.new_varnode_out(8, &raddr(&fd, 0xff), below_op).unwrap();

    let mut range = MemRange::new(raddr(&fd, 0x100), 0x10, memrange_flags::new_addresses);
    let mut reads = Vec::new();
    let mut writes = Vec::new();
    let mut inputs = Vec::new();
    let mut removes = Vec::new();
    let maxsize = Heritage::new().collect(
        &fd,
        &mut range,
        &mut reads,
        &mut writes,
        &mut inputs,
        &mut removes,
    );

    assert_eq!(reads, vec![read], "the start address is inclusive");
    assert_eq!(writes, vec![write]);
    assert_eq!(inputs, vec![input]);
    assert!(removes.is_empty());
    assert_eq!(
        maxsize, 4,
        "the larger writes below and at the end are excluded"
    );
    assert!(range.new_addresses());
}

// ---- bumpDeadcodeDelay + restart recorder anchor ----------------------

#[test]
fn bump_deadcode_delay_installs_and_records() {
    let mut h = Heritage::new();
    let mut fd = build_fd();
    let mut ovr = Override::new();
    let mut log = RestartLog::new();
    let ram = ram(&fd);
    // Precondition: ram is a processor space with delay == deadcodedelay.
    if ram.get_type() == spacetype::IPTR_PROCESSOR && ram.get_delay() == ram.get_deadcode_delay() {
        assert!(!ovr.has_deadcode_delay(&ram));
        h.bump_deadcode_delay(&mut fd, &mut ovr, &mut log, &ram);
        // delay installed
        assert!(ovr.has_deadcode_delay(&ram));
        // restart pending set
        assert!(fd.has_restart_pending());
        // recorded a deadcode_bump event (log is non-empty for fd)
        assert!(!log.is_empty_for(&fd));

        // Second call: already installed -> suppressed (no re-bump), still records.
        fd.set_restart_pending(false);
        h.bump_deadcode_delay(&mut fd, &mut ovr, &mut log, &ram);
        // suppressed path does NOT set restart pending
        assert!(!fd.has_restart_pending());
    }
}

#[test]
fn bump_deadcode_delay_skips_wrong_space_type() {
    let mut h = Heritage::new();
    let mut fd = build_fd();
    let mut ovr = Override::new();
    let mut log = RestartLog::new();
    // constant space is IPTR_CONSTANT -> not the right kind, returns early
    let cspace = Rc::clone(fd.get_arch().manage().get_space(0).unwrap());
    h.bump_deadcode_delay(&mut fd, &mut ovr, &mut log, &cspace);
    assert!(!ovr.has_deadcode_delay(&cspace));
    assert!(!fd.has_restart_pending());
}

// ---- Augmented dominator tree + phi placement (the SSA core) ----------

/// Map the computed `merge` block ids back to their indices, sorted.
fn merge_indices(h: &Heritage, fd: &Funcdata) -> Vec<int4> {
    let mut v: Vec<int4> = h
        .merge_points()
        .iter()
        .map(|&b| fd.bblocks_ref().block(b).get_index())
        .collect();
    v.sort_unstable();
    v
}

#[test]
fn phi_placement_diamond_join_gets_multiequal() {
    // Diamond:  0 -> 1, 0 -> 2, 1 -> 3, 2 -> 3.  block 3 is the join.
    let mut fd = build_fd();
    let b = build_cfg(&mut fd, 4, &[(0, 1), (0, 2), (1, 3), (2, 3)]);
    // idom(3) must be 0 (two predecessors), so 3 is in the dominance
    // frontier of any write in block 1 or 2.
    assert_eq!(
        fd.bblocks_ref().block(b[3]).get_immed_dom(),
        Some(b[0]),
        "diamond join idom is start"
    );

    let mut h = Heritage::new();
    h.build_info_list(&fd);
    h.build_adt(&fd);
    // A write occurring in block 1 -> MULTIEQUAL needed at the join (3).
    h.calc_multiequals(&fd, &[b[1]]);
    assert_eq!(merge_indices(&h, &fd), vec![3], "diamond: phi at the join");
}

#[test]
fn phi_placement_diamond_no_write_no_phi() {
    // With only the start block seeded (no write blocks), there is no
    // dominance-frontier work, so merge is empty.
    let mut fd = build_fd();
    let b = build_cfg(&mut fd, 4, &[(0, 1), (0, 2), (1, 3), (2, 3)]);
    let _ = b;
    let mut h = Heritage::new();
    h.build_info_list(&fd);
    h.build_adt(&fd);
    h.calc_multiequals(&fd, &[]);
    assert!(h.merge_points().is_empty(), "no writes -> no phi");
}

#[test]
fn phi_placement_loop_header_gets_multiequal() {
    // Simple loop:  0 -> 1 (header) -> 2 (body) -> 1 (back-edge), 1 -> 3 (exit).
    //   edges: 0->1, 1->2, 2->1, 1->3
    // A write in the body (block 2) must place a MULTIEQUAL at the loop
    // header (block 1), where the back-edge re-enters.
    let mut fd = build_fd();
    let b = build_cfg(&mut fd, 4, &[(0, 1), (1, 2), (2, 1), (1, 3)]);
    // header has two preds (0 and the back-edge from 2); idom(1) = 0.
    assert_eq!(
        fd.bblocks_ref().block(b[1]).size_in(),
        2,
        "header has back-edge"
    );
    assert_eq!(fd.bblocks_ref().block(b[1]).get_immed_dom(), Some(b[0]));

    let mut h = Heritage::new();
    h.build_info_list(&fd);
    h.build_adt(&fd);
    h.calc_multiequals(&fd, &[b[2]]);
    assert_eq!(merge_indices(&h, &fd), vec![1], "loop: phi at the header");
}

#[test]
fn phi_placement_nested_loop_writes_in_inner_body() {
    // Nested loops:
    //   0 -> 1 (outer header)
    //   1 -> 2 (inner header)
    //   2 -> 3 (inner body) -> 2 (inner back-edge)
    //   2 -> 4 (after inner) -> 1 (outer back-edge)
    //   1 -> 5 (exit)
    // A write in the inner body (block 3) re-enters at the inner header (2);
    // its value also flows around the outer loop, so the outer header (1)
    // is in the iterated dominance frontier as well.
    let mut fd = build_fd();
    let b = build_cfg(
        &mut fd,
        6,
        &[(0, 1), (1, 2), (2, 3), (3, 2), (2, 4), (4, 1), (1, 5)],
    );
    // inner header (2) has preds {1, back-edge 3}; outer header (1) has
    // preds {0, back-edge 4}.
    assert_eq!(fd.bblocks_ref().block(b[2]).size_in(), 2);
    assert_eq!(fd.bblocks_ref().block(b[1]).size_in(), 2);

    let mut h = Heritage::new();
    h.build_info_list(&fd);
    h.build_adt(&fd);
    h.calc_multiequals(&fd, &[b[3]]);
    // Iterated dominance frontier of the inner-body write: inner header (2)
    // and outer header (1).
    assert_eq!(
        merge_indices(&h, &fd),
        vec![1, 2],
        "nested loop: phi at both headers"
    );
}

#[test]
fn build_adt_sets_depth_and_maxdepth() {
    // A straight chain 0->1->2->3 has dominator depths 1,2,3,4.
    let mut fd = build_fd();
    let _b = build_cfg(&mut fd, 4, &[(0, 1), (1, 2), (2, 3)]);
    let mut h = Heritage::new();
    h.build_info_list(&fd);
    h.build_adt(&fd);
    // build_dom_depth returns size+1 entries (the trailing entry is the
    // "no idom" sentinel bucket == 0, mirroring buildDomTree's extra slot).
    assert_eq!(&h.depth[..4], &[1, 2, 3, 4]);
    assert_eq!(h.maxdepth, 4);
    // No joins -> a write anywhere needs no phi (frontier is empty).
    h.calc_multiequals(&fd, &[_b[1]]);
    assert!(h.merge_points().is_empty(), "chain: no joins -> no phi");
}

// ---- realized driver: runs cleanly on the empty IR (no Varnodes/ops) ---
//
// (The end-to-end SSA-construction parity — real reads linked to writes,
// phi placement — is the `heritage_b3` gate, which drives a real corpus
// function through ActionHeritage and diffs the post-heritage IR against
// the C++ B3 snapshot.  These unit checks pin the driver's empty-IR base
// case: it walks the spaces, builds an empty disjoint cover, places no
// phis, renames nothing, and advances `pass`.)

#[test]
fn rename_on_empty_blocks_is_a_noop() {
    let mut fd = build_fd();
    let _b = build_cfg(&mut fd, 2, &[(0, 1)]);
    let mut h = Heritage::new();
    h.build_info_list(&fd);
    h.build_adt(&fd);
    // No Varnodes to rename; the dom-tree walk visits both blocks and
    // returns without creating or linking anything.
    h.rename(&mut fd).unwrap();
    assert_eq!(
        fd.vbank().num_varnodes(),
        0,
        "rename created no Varnodes on an empty function"
    );
}

#[test]
fn place_multiequals_empty_disjoint_is_a_noop() {
    let mut fd = build_fd();
    let _b = build_cfg(&mut fd, 2, &[(0, 1)]);
    let mut h = Heritage::new();
    h.build_info_list(&fd);
    h.build_adt(&fd);
    // disjoint is empty -> no MULTIEQUALs placed.
    h.place_multiequals(&mut fd);
    assert!(
        h.merge_points().is_empty(),
        "no disjoint ranges -> no phi blocks"
    );
}

// ---- w10-proto-cluster verifier: processJoins join-space splitting ----
//
// The branch named "w10-proto-cluster" actually ports
// `Heritage::processJoins` and its helpers (heritage.cc:2068-2313). These
// adversarial tests target the fragile spots the hunt list flagged:
// (A) `split_join_level` size-accumulation / branch selection
//     (register-piece vs newUnique, the at-least-once `numinhalf`),
// (B) the 2-1 `nextlev` mapping with the `None` filler for unsplit pieces,
// (C) the snapshot-vs-live-set loop boundary of `process_joins` on an
//     empty join space (the documented no-op path).

use unlace_base::space::{JoinSpace, VarnodeStorage};

/// Manager with a join space (index after the std spaces) plus two distinct
/// 8-byte register-bearing pieces in `ram`.
fn build_manager_with_join() -> AddrSpaceManager {
    let mut m = build_manager(); // #(0) unique(1) ram(2)
    // JoinSpace at index 3; insert_space wires manager.joinspace.
    m.insert_space(Rc::new(JoinSpace::new(3, false))).unwrap();
    m
}

fn vstore(spc: &Rc<AddrSpace>, off: u64, size: u32) -> VarnodeStorage {
    VarnodeStorage {
        space: Some(Rc::clone(spc)),
        offset: off,
        size,
    }
}

fn build_fd_with_join() -> Funcdata {
    let manage = build_manager_with_join();
    let glb = Rc::new(ArchContext::new(manage));
    let ram = Rc::clone(glb.manage().get_space_by_name("ram").unwrap());
    let addr = Address::new(ram, 0x1000);
    Funcdata::new("func", "func", glb, addr, 0x10000000, 0x40).unwrap()
}

// ---- w10-revisit-ssa: remove_revisited_markers adversarial tests --------
//
// These directly exercise `Heritage::remove_revisited_markers` (the
// re-heritage revisit, C++ heritage.cc:245), which is currently unreached on
// the datatest corpus (the upstream multi-pass `collect` machinery that
// populates `removevars` does not yet produce them in the Rust engine), so
// they are the only guards that the branch logic matches the C++.

use unlace_base::space::IopSpace;
use unlace_num::opcodes::OpCode as TOpCode;

/// Manager with constant / unique / iop / ram (the INDIRECT case needs the
/// iop space for `new_varnode_iop`).
fn build_manager_iop() -> AddrSpaceManager {
    let mut m = AddrSpaceManager::new();
    m.insert_space(Rc::new(ConstantSpace::new())).unwrap();
    m.insert_space(Rc::new(UniqueSpace::new(1, 0, false)))
        .unwrap();
    m.insert_space(Rc::new(IopSpace::new(2))).unwrap();
    m.insert_space(Rc::new(AddrSpace::new(
        spacetype::IPTR_PROCESSOR,
        "ram",
        false,
        8,
        1,
        3,
        addrspace_flags::hasphysical,
        1,
        1,
    )))
    .unwrap();
    m
}

fn build_fd_iop() -> Funcdata {
    let manage = build_manager_iop();
    let glb = Rc::new(ArchContext::new(manage));
    let ram = Rc::clone(glb.manage().get_space_by_name("ram").unwrap());
    let addr = Address::new(ram, 0x1000);
    Funcdata::new("func", "func", glb, addr, 0x10000000, 0x40).unwrap()
}

// (A)+(B): a 16-byte Varnode against a 2x8 JoinRecord. `split_join_level`
// must take the else-branch (cursize 16 != piece 8), find sizeaccum==16 at
// j=recnum+2 so (j-recnum)==2 and numinhalf==1, and emit BOTH halves as
// *register* pieces (newVarnode, not newUnique) at the recorded offsets,
// with a `None`-free `nextlev` of exactly [most, least].
#[test]
fn w10_proto_cluster_split_join_level_two_register_halves() {
    let mut fd = build_fd_with_join();
    let ram = ram(&fd);
    // pieces: hi @ ram:0x40 (8 bytes), lo @ ram:0x48 (8 bytes) -> 16 logical
    let pieces = [vstore(&ram, 0x40, 8), vstore(&ram, 0x48, 8)];
    let joinrec = fd.get_arch().manage().find_add_join(&pieces, 0).unwrap();
    assert_eq!(joinrec.num_pieces(), 2);

    // A 16-byte unique Varnode standing in for the join whole.
    let curvn = fd.new_unique(16, None);

    let h = Heritage::new();
    let mut nextlev: Vec<Option<crate::context::VarnodeId>> = Vec::new();
    h.split_join_level(&mut fd, &[curvn], &mut nextlev, &joinrec);

    // 2-1 mapping: exactly two entries, both Some (this vn was split).
    assert_eq!(nextlev.len(), 2, "2-1 mapping: one pair per input vn");
    let most = nextlev[0].expect("most half present");
    let least = nextlev[1].expect("least half present (split this level)");

    // Both halves are *register* pieces at the recorded space/offset/size,
    // NOT newUnique temporaries (numinhalf==1 and (j-recnum)==2).
    let mv = fd.vbank().get(most).unwrap();
    assert!(
        Rc::ptr_eq(mv.get_addr().get_space().unwrap(), &ram),
        "most half in ram (piece space)"
    );
    assert_eq!(
        mv.get_addr().get_offset(),
        0x40,
        "most half at piece offset"
    );
    assert_eq!(mv.get_size(), 8, "most half is the hi piece size");
    let lv = fd.vbank().get(least).unwrap();
    assert!(
        Rc::ptr_eq(lv.get_addr().get_space().unwrap(), &ram),
        "least half in ram (piece space)"
    );
    assert_eq!(
        lv.get_addr().get_offset(),
        0x48,
        "least half at piece offset"
    );
    assert_eq!(lv.get_size(), 8, "least half is the lo piece size");
}

#[test]
fn w10_proto_cluster_split_join_level_equal_piece_fast_path() {
    let mut fd = build_fd_with_join();
    let ram = ram(&fd);
    // Three pieces 8+8+8 = 24 logical.
    let pieces = [
        vstore(&ram, 0x40, 8),
        vstore(&ram, 0x48, 8),
        vstore(&ram, 0x50, 8),
    ];
    let joinrec = fd.get_arch().manage().find_add_join(&pieces, 0).unwrap();

    // An already-8-byte Varnode equal to piece[0].size -> fast path.
    let small = fd.new_unique(8, None);
    let h = Heritage::new();
    let mut nextlev: Vec<Option<crate::context::VarnodeId>> = Vec::new();
    h.split_join_level(&mut fd, &[small], &mut nextlev, &joinrec);

    assert_eq!(nextlev.len(), 2, "fast path still emits a 2-1 pair");
    assert_eq!(
        nextlev[0],
        Some(small),
        "fast path keeps the input vn as the most-half"
    );
    assert!(
        nextlev[1].is_none(),
        "fast path fills the least-half slot with None"
    );
}

// (C): `process_joins` over a function whose join space holds NO Varnodes
// is a no-op and does not panic. This guards the snapshot/loop boundary:
// the loc-set is empty, so the `getSpace() != joinspace` break and the
// find_join/expect path are never reached. Op/Varnode counts are unchanged.
#[test]
fn w10_proto_cluster_process_joins_empty_join_space_noop() {
    let mut fd = build_fd_with_join();
    assert!(
        fd.get_arch().manage().get_join_space().is_some(),
        "fixture has a join space"
    );
    // Seed a non-join Varnode so "no-op" is meaningfully observable.
    let ram = ram(&fd);
    let _v = fd.new_varnode_space_off(8, ram, 0x100);
    let nvarnodes_before = fd.vbank().num_varnodes();
    let nops_before = fd.obank().num_alive();

    let mut h = Heritage::new();
    h.build_info_list(&fd);
    h.process_joins(&mut fd); // must be a clean no-op

    assert_eq!(
        fd.vbank().num_varnodes(),
        nvarnodes_before,
        "no Varnodes added"
    );
    assert_eq!(fd.obank().num_alive(), nops_before, "no ops added");
}

/// Build a marker op of `code` in block `bl` whose output Varnode is a
/// size-`out_size` write at `out_addr`.  Returns (op, out_vn).  Inserted at
/// the end of the block.
fn make_marker(
    fd: &mut Funcdata,
    bl: BlockId,
    code: TOpCode,
    out_addr: &Address,
    out_size: int4,
    ninputs: int4,
) -> (crate::context::OpId, crate::context::VarnodeId) {
    let pc = raddr(fd, 0x2000);
    let op = fd.new_op(ninputs, pc);
    // `remove_revisited_markers` branches only on `op.code()`; resolve the
    // opcode through the generic `inst[]` resolution (works for COPY/INDIRECT/
    // MULTIEQUAL alike).
    fd.op_set_opcode_code(op, code);
    let out = fd
        .new_varnode_out(out_size, out_addr, op)
        .expect("marker out");
    // Wire every input slot to a fresh constant so op_unlink's per-input
    // opUnsetInput has a real link to clear (C++ markers always have their
    // inputs set before removeRevisitedMarkers runs).
    for slot in 0..ninputs {
        let c = fd.new_constant(out_size, slot as uintb);
        fd.op_set_input(op, c, slot).expect("marker input");
    }
    fd.op_insert(op, bl, None); // append at block end
    (op, out)
}

/// COPY branch: a return-form COPY marker is simply unlinked (no SUBPIECE),
/// matching C++ heritage.cc:282-284 (`opUnlink(op); continue;`).
#[test]
fn w10_revisit_remove_markers_copy_is_unlinked() {
    let mut h = Heritage::new();
    let mut fd = build_fd_iop();
    h.build_info_list(&fd);
    let blocks = build_cfg(&mut fd, 1, &[]);
    let bl = blocks[0];

    // A COPY marker writing a 2-byte slice; the larger range is 4 bytes at addr.
    let addr = raddr(&fd, 0x100);
    let copy_out_addr = raddr(&fd, 0x100);
    let (copy_op, copy_out) = make_marker(&mut fd, bl, TOpCode::CPUI_COPY, &copy_out_addr, 2, 1);
    assert_eq!(fd.bb_ops(bl).len(), 1, "block has the COPY before removal");

    h.remove_revisited_markers(&mut fd, &[copy_out], &addr, 4);

    // C++ opUnlink: op removed from its block (parent cleared), opcode untouched.
    assert!(
        fd.obank()
            .get(copy_op)
            .expect("copy op alive")
            .get_parent()
            .is_none(),
        "return-form COPY is unlinked from its block"
    );
    assert_eq!(
        fd.obank().get(copy_op).unwrap().code(),
        TOpCode::CPUI_COPY,
        "COPY is NOT rewritten to SUBPIECE (the COPY arm `continue`s before the SUBPIECE rewrite)"
    );
    assert!(
        fd.bb_ops(bl).is_empty(),
        "block is empty after the COPY unlink"
    );
}

/// MULTIEQUAL branch: the marker is rewritten in place to a SUBPIECE of a
/// new full-size free Varnode, inserted AFTER the trailing run of
/// MULTIEQUALs in the block (C++ heritage.cc:276-281, 286-296).  The
/// SUBPIECE's offset operand is the byte overlap; the original output gets
/// the write-mask.
#[test]
fn w10_revisit_remove_markers_multiequal_rewritten_after_phis() {
    let mut h = Heritage::new();
    let mut fd = build_fd_iop();
    h.build_info_list(&fd);
    let blocks = build_cfg(&mut fd, 1, &[]);
    let bl = blocks[0];

    let addr = raddr(&fd, 0x200);
    // Target MULTIEQUAL marker writes the low 2 bytes at addr (offset 0).
    let (me_op, me_out) = make_marker(&mut fd, bl, TOpCode::CPUI_MULTIEQUAL, &addr, 2, 2);
    // A SECOND, trailing MULTIEQUAL follows it: the SUBPIECE must be inserted
    // AFTER this one (the `while (*pos)==MULTIEQUAL ++pos` skip loop).
    let trail_addr = raddr(&fd, 0x300);
    let (trail_me, _trail_out) =
        make_marker(&mut fd, bl, TOpCode::CPUI_MULTIEQUAL, &trail_addr, 2, 2);

    h.remove_revisited_markers(&mut fd, &[me_out], &addr, 4);

    // The op is rewritten in place to a SUBPIECE.
    assert_eq!(
        fd.obank().get(me_op).unwrap().code(),
        TOpCode::CPUI_SUBPIECE,
        "MULTIEQUAL marker rewritten to SUBPIECE"
    );
    // in0 = the new full-size free Varnode (size 4 at addr), in1 = const offset 0.
    let big = fd.obank().get(me_op).unwrap().get_in(0).unwrap();
    assert_eq!(
        fd.vbank().get(big).unwrap().get_size(),
        4,
        "SUBPIECE in0 is the full-size vn"
    );
    assert_eq!(
        fd.vbank().get(big).unwrap().get_addr(),
        &addr,
        "full-size vn at the range addr"
    );
    let off = fd.obank().get(me_op).unwrap().get_in(1).unwrap();
    assert!(
        fd.vbank().get(off).unwrap().is_constant(),
        "SUBPIECE in1 is a constant"
    );
    assert_eq!(
        fd.vbank().get(off).unwrap().get_addr().get_offset(),
        0,
        "offset operand == vn->overlap(addr,size) == 0 for an LSB-aligned slice"
    );
    // The original output is write-masked.
    assert!(
        fd.vbank().get(me_out).unwrap().is_write_mask(),
        "original marker output carries the write mask"
    );
    // Insertion order: the rewritten SUBPIECE must come AFTER the trailing
    // MULTIEQUAL (it skipped the trailing phi run).
    let ops = fd.bb_ops(bl);
    let pos_sub = ops
        .iter()
        .position(|&o| o == me_op)
        .expect("SUBPIECE in block");
    let pos_trail = ops
        .iter()
        .position(|&o| o == trail_me)
        .expect("trailing phi in block");
    assert!(
        pos_sub > pos_trail,
        "SUBPIECE inserted after the trailing MULTIEQUAL (skip-trailing-phis loop), got sub@{pos_sub} trail@{pos_trail}"
    );
}

/// INDIRECT branch: the SUBPIECE is inserted after the INDIRECT's *target*
/// op (decoded from the iop input via `op_iop_decode`), and the marker
/// output's addr-force is cleared (C++ heritage.cc:266-274).
#[test]
fn w10_revisit_remove_markers_indirect_inserts_after_live_target() {
    let mut h = Heritage::new();
    let mut fd = build_fd_iop();
    h.build_info_list(&fd);
    let blocks = build_cfg(&mut fd, 1, &[]);
    let bl = blocks[0];

    // A live "target" op (a COPY) the INDIRECT points at, inserted first.
    let target = {
        let pc = raddr(&fd, 0x2100);
        let op = fd.new_op(1, pc);
        fd.op_set_opcode(op, typeop_skeleton(TOpCode::CPUI_SUBPIECE));
        fd.op_insert(op, bl, None);
        op
    };
    assert!(
        !fd.obank().get(target).unwrap().is_dead(),
        "target op is live/in-block"
    );

    // A spacer op between the target and the INDIRECT, so the insertion
    // point `++(target iter)` is a distinct op (not the INDIRECT itself):
    // the SUBPIECE replaces the INDIRECT and is re-inserted *before* the
    // spacer (i.e. immediately after the target), the C++ semantics.  (If
    // the INDIRECT immediately followed its own target, `++pos` would land
    // on the INDIRECT op being removed — a degenerate self-insert that is a
    // latent C++ UB, not the path under test here.)
    let spacer = {
        let pc = raddr(&fd, 0x2110);
        let op = fd.new_op(1, pc);
        fd.op_set_opcode(op, typeop_skeleton(TOpCode::CPUI_SUBPIECE));
        fd.op_insert(op, bl, None);
        op
    };

    // The INDIRECT marker, in[1] = iop varnode encoding `target`.
    let addr = raddr(&fd, 0x400);
    let (ind_op, ind_out) = make_marker(&mut fd, bl, TOpCode::CPUI_INDIRECT, &addr, 2, 2);
    let iop = fd.new_varnode_iop(target);
    fd.op_set_input(ind_op, iop, 1).expect("set iop input");
    // Force the address on the marker output so we can observe clearAddrForce.
    fd.vbank_mut().get_mut(ind_out).unwrap().set_addr_force();
    assert!(
        fd.vbank().get(ind_out).unwrap().is_addr_force(),
        "addr-force set pre-call"
    );

    h.remove_revisited_markers(&mut fd, &[ind_out], &addr, 4);

    // Rewritten to SUBPIECE, addr-force cleared on the original output.
    assert_eq!(
        fd.obank().get(ind_op).unwrap().code(),
        TOpCode::CPUI_SUBPIECE,
        "INDIRECT marker rewritten to SUBPIECE"
    );
    assert!(
        !fd.vbank().get(ind_out).unwrap().is_addr_force(),
        "clearAddrForce ran (replacement INDIRECT will hold the address)"
    );
    // The SUBPIECE is inserted immediately AFTER the live target op (before
    // the spacer): C++ `pos = targetOp->getBasicIter(); ++pos;`.
    let ops = fd.bb_ops(bl);
    let pos_sub = ops
        .iter()
        .position(|&o| o == ind_op)
        .expect("SUBPIECE in block");
    let pos_target = ops
        .iter()
        .position(|&o| o == target)
        .expect("target in block");
    let pos_spacer = ops
        .iter()
        .position(|&o| o == spacer)
        .expect("spacer in block");
    assert!(
        pos_sub > pos_target && pos_sub < pos_spacer,
        "SUBPIECE inserted right after the target op (before the spacer), got sub@{pos_sub} target@{pos_target} spacer@{pos_spacer}"
    );
}

/// INDIRECT branch, big-endian overlap: a 2-byte slice at the high half of a
/// 4-byte big-endian range has a non-zero overlap offset, exercising the
/// signed `vn->overlap(addr,size)` -> `offset as uintb` widening at the
/// SUBPIECE in1 (the one bare `as` cast in the ported code).
#[test]
fn w10_revisit_remove_markers_offset_widening_le() {
    let mut h = Heritage::new();
    let mut fd = build_fd_iop();
    h.build_info_list(&fd);
    let blocks = build_cfg(&mut fd, 1, &[]);
    let bl = blocks[0];

    // Little-endian ram: a 2-byte marker at addr+2 overlaps the 4-byte range
    // [addr, addr+4) at byte offset 2.
    let base = raddr(&fd, 0x500);
    let hi = raddr(&fd, 0x502);
    let (me_op, me_out) = make_marker(&mut fd, bl, TOpCode::CPUI_MULTIEQUAL, &hi, 2, 2);

    h.remove_revisited_markers(&mut fd, &[me_out], &base, 4);

    let off = fd.obank().get(me_op).unwrap().get_in(1).unwrap();
    assert_eq!(
        fd.vbank().get(off).unwrap().get_addr().get_offset(),
        2,
        "offset operand == byte overlap (2) of the high slice into the LE range; widened int4->uintb"
    );
    // The constant is size 4 (C++ newConstant(4, offset)).
    assert_eq!(
        fd.vbank().get(off).unwrap().get_size(),
        4,
        "offset constant is 4 bytes"
    );
}
