use super::*;
use std::rc::Rc;

use unlace_base::marshal::{IdRegistry, XmlDecode, XmlEncode};
use unlace_base::space::{
    AddrSpace, AddrSpaceManager, ConstantSpace, UniqueSpace, addrspace_flags, spacetype,
};

/// Build a minimal manager with const/unique/ram spaces (the same shape the
/// jumptable tests use), so Address encode/decode round-trips.
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
    m.set_default_code_space(2).unwrap();
    m
}

fn ram(m: &AddrSpaceManager) -> Rc<AddrSpace> {
    m.get_space_by_name("ram").unwrap().clone()
}

fn addr(m: &AddrSpaceManager, off: u64) -> Address {
    Address::new(ram(m), off)
}

fn registry() -> IdRegistry {
    let mut reg = IdRegistry::with_base_ids();
    reg.register_element(&ELEM_CALLGRAPH);
    reg.register_element(&ELEM_NODE);
    reg.register_element(&ELEM_EDGE);
    reg
}

#[test]
fn add_node_and_find() {
    let m = build_manager();
    let mut g = CallGraph::new();
    let n1 = g.add_node_addr(&addr(&m, 0x100), b"foo");
    let n2 = g.add_node_addr(&addr(&m, 0x200), b"bar");
    assert_eq!(g.find_node(&addr(&m, 0x100)), Some(n1));
    assert_eq!(g.find_node(&addr(&m, 0x200)), Some(n2));
    assert_eq!(g.find_node(&addr(&m, 0x300)), None);
    assert_eq!(g.get_node(n1).get_name(), b"foo");
}

#[test]
fn edges_sorted_by_callee_and_complement_linked() {
    let m = build_manager();
    let mut g = CallGraph::new();
    let caller = g.add_node_addr(&addr(&m, 0x100), b"caller");
    let callee_hi = g.add_node_addr(&addr(&m, 0x300), b"hi");
    let callee_lo = g.add_node_addr(&addr(&m, 0x200), b"lo");
    // Add the higher-address callee first; out-edges must end up sorted by
    // callee entry address (lo before hi).
    g.add_edge(caller, callee_hi, &addr(&m, 0x10));
    g.add_edge(caller, callee_lo, &addr(&m, 0x20));
    assert_eq!(g.get_node(caller).num_out_edge(), 2);
    assert_eq!(g.get_node(caller).get_out_node(0), callee_lo);
    assert_eq!(g.get_node(caller).get_out_node(1), callee_hi);
    // Duplicate edge is ignored.
    g.add_edge(caller, callee_lo, &addr(&m, 0x30));
    assert_eq!(g.get_node(caller).num_out_edge(), 2);

    // Complement links are consistent: out-edge[i].complement indexes the
    // matching in-edge on the callee, and vice versa.
    for i in 0..g.get_node(caller).num_out_edge() {
        let oe = g.get_node(caller).get_out_edge(i);
        let callee = oe.to;
        let comp = oe.complement;
        let ie = g.get_node(callee).get_in_edge(comp);
        assert_eq!(ie.from, caller);
        assert_eq!(ie.complement, i);
    }
}

#[test]
fn leaf_walk_bottom_up_simple_chain() {
    // main -> a -> b ; leaf walk yields b, then a, then main.
    let m = build_manager();
    let mut g = CallGraph::new();
    let main = g.add_node_addr(&addr(&m, 0x100), b"main");
    let a = g.add_node_addr(&addr(&m, 0x200), b"a");
    let b = g.add_node_addr(&addr(&m, 0x300), b"b");
    g.add_edge(main, a, &addr(&m, 0x10));
    g.add_edge(a, b, &addr(&m, 0x20));

    let mut order: Vec<NodeIndex> = Vec::new();
    let mut node = g.init_leaf_walk();
    while let Some(n) = node {
        order.push(n);
        node = g.next_leaf(n);
    }
    assert_eq!(order, vec![b, a, main]);
}

#[test]
fn leaf_walk_diamond() {
    // main calls a and b; both a and b call c. Bottom-up visits c first,
    // then a/b, then main; every node appears exactly once.
    let m = build_manager();
    let mut g = CallGraph::new();
    let main = g.add_node_addr(&addr(&m, 0x100), b"main");
    let a = g.add_node_addr(&addr(&m, 0x200), b"a");
    let b = g.add_node_addr(&addr(&m, 0x300), b"b");
    let c = g.add_node_addr(&addr(&m, 0x400), b"c");
    g.add_edge(main, a, &addr(&m, 0x10));
    g.add_edge(main, b, &addr(&m, 0x11));
    g.add_edge(a, c, &addr(&m, 0x20));
    g.add_edge(b, c, &addr(&m, 0x21));

    let mut order: Vec<NodeIndex> = Vec::new();
    let mut node = g.init_leaf_walk();
    while let Some(n) = node {
        order.push(n);
        node = g.next_leaf(n);
    }
    // Every node visited exactly once.
    let mut sorted = order.clone();
    sorted.sort_unstable();
    assert_eq!(sorted, vec![main, a, b, c]);
    assert_eq!(order.len(), 4);
    // c (the only common leaf) must come before both its callers.
    let pos = |x: NodeIndex| order.iter().position(|&y| y == x).unwrap();
    assert!(pos(c) < pos(a));
    assert!(pos(c) < pos(b));
    assert!(pos(a) < pos(main));
    assert!(pos(b) < pos(main));
}

#[test]
fn leaf_walk_with_cycle_terminates_and_covers() {
    // a <-> b mutual recursion plus a -> c. cycleStructure must snip the
    // back edge; the walk must terminate covering every node once.
    let m = build_manager();
    let mut g = CallGraph::new();
    let a = g.add_node_addr(&addr(&m, 0x100), b"a");
    let b = g.add_node_addr(&addr(&m, 0x200), b"b");
    let c = g.add_node_addr(&addr(&m, 0x300), b"c");
    g.add_edge(a, b, &addr(&m, 0x10));
    g.add_edge(b, a, &addr(&m, 0x20)); // back edge -> cycle
    g.add_edge(a, c, &addr(&m, 0x30));

    let mut order: Vec<NodeIndex> = Vec::new();
    let mut node = g.init_leaf_walk();
    let mut guard = 0;
    while let Some(n) = node {
        order.push(n);
        node = g.next_leaf(n);
        guard += 1;
        assert!(guard < 100, "leaf walk did not terminate");
    }
    let mut sorted = order.clone();
    sorted.sort_unstable();
    sorted.dedup();
    assert_eq!(sorted, vec![a, b, c]);
    assert_eq!(order.len(), 3);
}

#[test]
fn delete_in_edge_removes_both_sides() {
    // `deleteInEdge` removes the in-edge from the callee AND the matching
    // out-edge from the caller (the C++ shifts both vectors down and pops
    // the tail), adjusting the `from`'s out-edge complements.  This checks
    // the structural removal the algorithm guarantees; the complement
    // re-indexing applied to the *deleted node's* surviving in-edges is the
    // narrow case the C++ keeps consistent (single `from`).
    let m = build_manager();
    let mut g = CallGraph::new();
    let caller = g.add_node_addr(&addr(&m, 0x100), b"c");
    let callee_a = g.add_node_addr(&addr(&m, 0x200), b"a");
    let callee_b = g.add_node_addr(&addr(&m, 0x300), b"b");
    // caller -> a and caller -> b ; out-edges sorted (a before b).
    g.add_edge(caller, callee_a, &addr(&m, 0x10));
    g.add_edge(caller, callee_b, &addr(&m, 0x20));
    assert_eq!(g.get_node(caller).num_out_edge(), 2);

    // Delete callee_a's only in-edge: caller's out-edge to a is removed,
    // and the (single) remaining out-edge now goes to b.
    g.delete_in_edge(callee_a, 0);
    assert_eq!(g.get_node(callee_a).num_in_edge(), 0);
    assert_eq!(g.get_node(caller).num_out_edge(), 1);
    assert_eq!(g.get_node(caller).get_out_node(0), callee_b);
    // Faithful C++ quirk: the shifted out-edge's complement (which was 0)
    // is decremented unconditionally by the `>= i` test (i == 0), yielding
    // -1.  The decompiler only calls deleteInEdge in flows where this is
    // benign; we pin the transcribed behavior, not an "ideal" value.
    assert_eq!(g.get_node(caller).get_out_edge(0).complement, -1);
}

#[test]
fn encode_decode_roundtrip() {
    let m = build_manager();
    let reg = registry();
    let mut g = CallGraph::new();
    let main = g.add_node_addr(&addr(&m, 0x100), b"main");
    let a = g.add_node_addr(&addr(&m, 0x200), b"a");
    let b = g.add_node_addr(&addr(&m, 0x300), b"b");
    g.add_edge(main, a, &addr(&m, 0x10));
    g.add_edge(main, b, &addr(&m, 0x11));
    g.add_edge(a, b, &addr(&m, 0x20));

    let mut buf: Vec<u8> = Vec::new();
    {
        let mut enc = XmlEncode::new(&mut buf);
        g.encode(&mut enc).unwrap();
    }
    let mut dec = XmlDecode::new(&m, &reg);
    dec.ingest_stream(&buf).unwrap();
    let mut g2 = CallGraph::new();
    g2.decoder(&mut dec).unwrap();

    // Same node set (by address + name).
    let m2 = g2.find_node(&addr(&m, 0x100)).unwrap();
    let a2 = g2.find_node(&addr(&m, 0x200)).unwrap();
    let b2 = g2.find_node(&addr(&m, 0x300)).unwrap();
    assert_eq!(g2.get_node(m2).get_name(), b"main");
    assert_eq!(g2.get_node(a2).get_name(), b"a");
    assert_eq!(g2.get_node(b2).get_name(), b"b");

    // main -> {a, b} ; a -> b reconstructed.
    assert_eq!(g2.get_node(m2).num_out_edge(), 2);
    assert_eq!(g2.get_node(a2).num_out_edge(), 1);
    assert_eq!(g2.get_node(a2).get_out_node(0), b2);
    // b has two in-edges (from main and from a).
    assert_eq!(g2.get_node(b2).num_in_edge(), 2);
}
