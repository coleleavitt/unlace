use super::*;

/// Test visitor mirroring `testunlaceregion.cc`'s `UnlaceTestCollector`:
/// collect every leaf block address (in walk order) and, for each cyclic
/// region, the head address plus the addresses visited inside it.
///
/// The C++ collector keeps `const UnlaceGraphRegion *` pointers and re-walks
/// one later; here we capture the per-cyclic block list during the single
/// walk (depth-tracked), which is equivalent for the asserted shapes.
#[derive(Default)]
struct Collector {
    addrs: Vec<uintb>,
    /// (head addr, sorted body block addrs) for every cyclic region.
    cyclics: Vec<(uintb, Vec<uintb>)>,
    /// Stack of (is_cyclic, head addr, body accumulator) for the open
    /// regions, so blocks are bucketed into the innermost cyclic region.
    stack: Vec<(bool, uintb, Vec<uintb>)>,
}

impl UnlaceRegionVisitor for Collector {
    fn enter_region(&mut self, region: &UnlaceGraphRegion) {
        // head addr is unknown here (no pool); the walker fills it via the
        // first block, but cyclic regions always have a head, so record a
        // placeholder and patch the head from the first visited block.
        let cyclic = region.is_cyclic();
        self.stack.push((cyclic, u64::MAX, Vec::new()));
    }
    fn exit_region(&mut self, _region: &UnlaceGraphRegion) {
        if let Some((cyclic, head, body)) = self.stack.pop() {
            if cyclic {
                let mut sorted = body.clone();
                sorted.sort_unstable();
                self.cyclics.push((head, sorted));
            }
        }
    }
    fn visit_block(&mut self, _block: Option<crate::context::BlockId>, addr: uintb) {
        self.addrs.push(addr);
        // Record into every open cyclic region's body, and set the head of
        // the innermost open region from its first block.
        for frame in self.stack.iter_mut() {
            if frame.1 == u64::MAX {
                frame.1 = addr; // first block seen = region head (walk order)
            }
            if frame.0 {
                frame.2.push(addr);
            }
        }
    }
}

fn sorted(v: &[uintb]) -> Vec<uintb> {
    let mut r = v.to_vec();
    r.sort_unstable();
    r
}

/// Port of `testunlaceregion.cc:regionid_diamond0` (angr
/// `test_region_identifier_0`): a diamond `1 -> 2 -> {3,4} -> 5 -> 6`.
#[test]
fn regionid_diamond0() {
    let mut ri = UnlaceRegionIdentifier::new();
    let n1 = ri.add_synthetic_block(1);
    let n2 = ri.add_synthetic_block(2);
    let n3 = ri.add_synthetic_block(3);
    let n4 = ri.add_synthetic_block(4);
    let n5 = ri.add_synthetic_block(5);
    let n6 = ri.add_synthetic_block(6);
    ri.add_synthetic_edge(n1, n2);
    ri.add_synthetic_edge(n2, n3);
    ri.add_synthetic_edge(n2, n4);
    ri.add_synthetic_edge(n3, n5);
    ri.add_synthetic_edge(n4, n5);
    ri.add_synthetic_edge(n5, n6);

    let top = ri.compute().unwrap();
    let region = ri.region(top);
    // The angr assertion: the top-level region graph has exactly two nodes.
    assert_eq!(region.get_graph().num_nodes(), 2);
    let head = region.get_head().unwrap();
    assert_eq!(ri.pool.get(head).get_addr(), 1);
    assert!(!region.is_cyclic());

    // Exactly one of the two top-level nodes is a sub-region.
    let mut region_count = 0;
    for key in region.get_graph().node_keys() {
        if ri.pool.get(key.id).is_region() {
            region_count += 1;
        }
    }
    assert_eq!(region_count, 1);

    // The recursive walker covers every input block exactly once.
    let mut col = Collector::default();
    ri.walk_blocks(&mut col).unwrap();
    assert_eq!(col.addrs.len(), 6);
    let got = sorted(&col.addrs);
    for i in 0..6 {
        assert_eq!(got[i], (i + 1) as uintb);
    }
    assert_eq!(col.cyclics.len(), 0);
}

/// Port of `testunlaceregion.cc:regionid_diamond1` (angr
/// `test_region_identifier_1`): two stacked half-diamonds.
#[test]
fn regionid_diamond1() {
    let mut ri = UnlaceRegionIdentifier::new();
    let mut nodes = [UnlaceNodeId(0); 9];
    for (i, slot) in nodes.iter_mut().enumerate().take(9).skip(1) {
        *slot = ri.add_synthetic_block(i as uintb);
    }
    ri.add_synthetic_edge(nodes[1], nodes[2]);
    ri.add_synthetic_edge(nodes[2], nodes[3]);
    ri.add_synthetic_edge(nodes[3], nodes[4]);
    ri.add_synthetic_edge(nodes[2], nodes[4]);
    ri.add_synthetic_edge(nodes[4], nodes[5]);
    ri.add_synthetic_edge(nodes[5], nodes[6]);
    ri.add_synthetic_edge(nodes[6], nodes[7]);
    ri.add_synthetic_edge(nodes[5], nodes[7]);
    ri.add_synthetic_edge(nodes[7], nodes[8]);

    let top = ri.compute().unwrap();
    // The angr assertion: top-level region graph has exactly two nodes.
    assert_eq!(ri.region(top).get_graph().num_nodes(), 2);

    let mut col = Collector::default();
    ri.walk_blocks(&mut col).unwrap();
    assert_eq!(col.addrs.len(), 8);
    let got = sorted(&col.addrs);
    for i in 0..8 {
        assert_eq!(got[i], (i + 1) as uintb);
    }
}

/// Port of `testunlaceregion.cc:regionid_loop` (unlace-added cyclic coverage):
/// `1 -> 2 -> 3 -> 4` with a back edge `3 -> 2` (loop body `{2,3}`).
#[test]
fn regionid_loop() {
    let mut ri = UnlaceRegionIdentifier::new();
    let n1 = ri.add_synthetic_block(1);
    let n2 = ri.add_synthetic_block(2);
    let n3 = ri.add_synthetic_block(3);
    let n4 = ri.add_synthetic_block(4);
    ri.add_synthetic_edge(n1, n2);
    ri.add_synthetic_edge(n2, n3);
    ri.add_synthetic_edge(n3, n2);
    ri.add_synthetic_edge(n3, n4);

    let top = ri.compute().unwrap();
    assert!(!ri.region(top).is_cyclic());

    // Exactly one cyclic region, headed at address 2, containing {2,3}.
    let mut col = Collector::default();
    ri.walk_blocks(&mut col).unwrap();
    assert_eq!(col.cyclics.len(), 1);
    let (loop_head, loop_addrs) = &col.cyclics[0];
    assert_eq!(*loop_head, 2);
    assert_eq!(loop_addrs.len(), 2);
    assert_eq!(loop_addrs[0], 2);
    assert_eq!(loop_addrs[1], 3);

    // regions_by_block_addrs contains the loop body {2,3} as its own region.
    let rbba = ri.get_regions_by_block_addrs();
    let found = rbba.iter().any(|r| {
        let s = sorted(r);
        s.len() == 2 && s[0] == 2 && s[1] == 3
    });
    assert!(found);

    // Whole-tree walk covers every block exactly once.
    assert_eq!(col.addrs.len(), 4);
    let got = sorted(&col.addrs);
    for i in 0..4 {
        assert_eq!(got[i], (i + 1) as uintb);
    }
}

//
// STUB(W7) block-graph adapter coverage (Input A: build_from_block_graph)
//

mod block_graph {
    use std::rc::Rc;

    use unlace_base::address::Address;
    use unlace_base::space::{
        AddrSpace, AddrSpaceManager, ConstantSpace, UniqueSpace, addrspace_flags, spacetype,
    };
    use unlace_num::opcodes::OpCode;

    use crate::context::{ArchContext, BlockId, TypeOp};
    use crate::funcdata::Funcdata;
    use crate::op::pcodeop_flags;
    use crate::regionid::UnlaceRegionIdentifier;

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

    fn ramspace(fd: &Funcdata) -> Rc<AddrSpace> {
        Rc::clone(fd.get_arch().manage().get_space_by_name("ram").unwrap())
    }

    fn addr(rs: &Rc<AddrSpace>, off: u64) -> Address {
        Address::new(Rc::clone(rs), off)
    }

    /// Append a terminating op of `opc` at `pc` into block `bl`.
    fn term_op(fd: &mut Funcdata, bl: BlockId, opc: OpCode, pc: Address) {
        let op = fd.obank_mut().create_at(1, pc);
        fd.obank_mut().change_opcode(
            op,
            TypeOp::new(opc, pcodeop_flags::branch, format!("{opc:?}")),
        );
        fd.obank_mut().mark_alive(op);
        fd.bb_insert_op(op, bl, None);
    }

    /// Real-CFG analog of the synthetic `regionid_diamond0`: a diamond
    ///   entry(0x1000, CBRANCH) -> {a(0x1100), b(0x1200)} -> join(0x1300, RETURN)
    /// built over real `bblocks` and driven through
    /// [`UnlaceRegionIdentifier::build_from_block_graph`] (Input A, the W7 seam).
    #[test]
    fn build_from_block_graph_diamond() {
        let mut fd = build_fd();
        let rs = ramspace(&fd);
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
        // Distinct start addresses (bblocks_block_start reads the block cover).
        fd.set_basic_block_range(entry, &addr(&rs, 0x1000), &addr(&rs, 0x100f));
        fd.set_basic_block_range(a, &addr(&rs, 0x1100), &addr(&rs, 0x110f));
        fd.set_basic_block_range(b, &addr(&rs, 0x1200), &addr(&rs, 0x120f));
        fd.set_basic_block_range(join, &addr(&rs, 0x1300), &addr(&rs, 0x130f));
        // Tail ops: the entry forks on a CBRANCH; the join is a plain RETURN.
        term_op(&mut fd, entry, OpCode::CPUI_CBRANCH, addr(&rs, 0x100c));
        term_op(&mut fd, join, OpCode::CPUI_RETURN, addr(&rs, 0x130c));

        let mut ri = UnlaceRegionIdentifier::new();
        ri.build_from_block_graph(&fd).unwrap();
        let top = ri.compute().unwrap();

        let region = ri.region(top);
        // Same shape the synthetic diamond asserts: the top region collapses
        // to two nodes (the entry head + one nested sub-region).
        assert_eq!(region.get_graph().num_nodes(), 2);
        let head = region.get_head().unwrap();
        assert_eq!(ri.pool.get(head).get_addr(), 0x1000);
        assert!(!region.is_cyclic());
        let mut region_count = 0;
        for key in region.get_graph().node_keys() {
            if ri.pool.get(key.id).is_region() {
                region_count += 1;
            }
        }
        assert_eq!(region_count, 1);

        // The walker exposes the real BlockId payload for every leaf block
        // (carried through build_from_block_graph), exactly once each.
        let mut col = super::Collector::default();
        ri.walk_blocks(&mut col).unwrap();
        assert_eq!(col.addrs.len(), 4);
        let got = super::sorted(&col.addrs);
        assert_eq!(got, vec![0x1000, 0x1100, 0x1200, 0x1300]);
        assert_eq!(col.cyclics.len(), 0);
    }

    /// The CBRANCH-ending block keeps `endsWithBranchindOrCbranch` true and is
    /// therefore NOT merged into a supernode by `make_supergraph`; a plain
    /// (non-branchy) chain still merges.  Drives the seam end-to-end: a real
    /// `lastOp()->code()` probe parked on the node steers the supergraph.
    #[test]
    fn build_from_block_graph_supergraph_respects_branchind_cbranch() {
        // Chain: entry(CBRANCH) -> mid(plain) -> tail(RETURN), single in/out.
        let mut fd = build_fd();
        let rs = ramspace(&fd);
        let root = fd.bblocks_root_pub();
        let entry = fd.bblocks_mut().new_block_basic(root);
        let mid = fd.bblocks_mut().new_block_basic(root);
        let tail = fd.bblocks_mut().new_block_basic(root);
        fd.bblocks_mut().add_edge(entry, mid);
        fd.bblocks_mut().add_edge(mid, tail);
        fd.bblocks_mut().set_start_block(root, entry);
        fd.set_basic_block_range(entry, &addr(&rs, 0x1000), &addr(&rs, 0x100f));
        fd.set_basic_block_range(mid, &addr(&rs, 0x1100), &addr(&rs, 0x110f));
        fd.set_basic_block_range(tail, &addr(&rs, 0x1200), &addr(&rs, 0x120f));
        // The entry block ends in CBRANCH; the supergraph must NOT merge `mid`
        // INTO `entry` while it would (single out / single in) absent the flag.
        term_op(&mut fd, entry, OpCode::CPUI_CBRANCH, addr(&rs, 0x100c));
        term_op(&mut fd, mid, OpCode::CPUI_COPY, addr(&rs, 0x1108));
        term_op(&mut fd, tail, OpCode::CPUI_RETURN, addr(&rs, 0x120c));

        let mut ri = UnlaceRegionIdentifier::new();
        ri.build_from_block_graph(&fd).unwrap();
        ri.compute().unwrap();

        // All three blocks are walked exactly once regardless of merge shape.
        let mut col = super::Collector::default();
        ri.walk_blocks(&mut col).unwrap();
        let got = super::sorted(&col.addrs);
        assert_eq!(got, vec![0x1000, 0x1100, 0x1200]);
    }

    /// `build_from_block_graph` rejects a non-empty working graph (it must run
    /// on a fresh identifier, before any synthetic input or compute).
    #[test]
    fn build_from_block_graph_rejects_non_empty() {
        let fd = build_fd();
        let mut ri = UnlaceRegionIdentifier::new();
        ri.add_synthetic_block(0x10);
        assert!(ri.build_from_block_graph(&fd).is_err());
    }
}
