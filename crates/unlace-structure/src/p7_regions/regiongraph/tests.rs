use super::*;

/// Helper: a pool plus a name->id table for building test graphs by addr.
struct Builder {
    pool: UnlaceNodePool,
    next_ident: uint4,
}

impl Builder {
    fn new() -> Builder {
        Builder {
            pool: UnlaceNodePool::new(),
            next_ident: 0,
        }
    }

    /// Allocate a synthetic block node at `addr` (ident auto-increments,
    /// matching the deterministic creation-index tiebreaker).
    fn node(&mut self, addr: uintb) -> UnlaceNodeId {
        let id = self.next_ident;
        self.next_ident += 1;
        self.pool.make(NodeKind::Block, addr, id)
    }

    fn graph(
        &self,
        edges: &[(UnlaceNodeId, UnlaceNodeId)],
        extra: &[UnlaceNodeId],
    ) -> UnlaceRegionGraph {
        let mut g = UnlaceRegionGraph::new();
        for &n in extra {
            g.add_node(&self.pool, n);
        }
        for &(a, b) in edges {
            g.add_edge(&self.pool, a, b);
        }
        g
    }

    fn set(&self, ids: &[UnlaceNodeId]) -> UnlaceNodeSet {
        let mut s = UnlaceNodeSet::new();
        for &i in ids {
            s.insert(self.pool.key(i));
        }
        s
    }
}

/// Reachability after removing one node. This deliberately does not use
/// dominator code or traversal order, so it can serve as a small oracle.
fn reachable_without(
    graph: &UnlaceRegionGraph,
    start: UnlaceNodeId,
    removed: Option<UnlaceNodeId>,
) -> BTreeSet<UnlaceNodeId> {
    if removed == Some(start) {
        return BTreeSet::new();
    }
    let mut reachable = BTreeSet::new();
    let mut pending = vec![start];
    while let Some(node) = pending.pop() {
        if removed == Some(node) || !reachable.insert(node) {
            continue;
        }
        pending.extend_from_slice(graph.get_succs(node).unwrap());
    }
    reachable
}

/// Compute immediate dominators by the definition: a node dominates a
/// reachable target iff deleting it makes that target unreachable.
fn idom_by_removal(
    graph: &UnlaceRegionGraph,
    start: UnlaceNodeId,
) -> BTreeMap<UnlaceNodeId, UnlaceNodeId> {
    let reachable = reachable_without(graph, start, None);
    let mut dominators = BTreeMap::<UnlaceNodeId, BTreeSet<UnlaceNodeId>>::new();
    for &node in &reachable {
        let mut node_dominators = BTreeSet::new();
        for &candidate in &reachable {
            if candidate == node
                || !reachable_without(graph, start, Some(candidate)).contains(&node)
            {
                node_dominators.insert(candidate);
            }
        }
        dominators.insert(node, node_dominators);
    }

    let mut result = BTreeMap::new();
    for &node in &reachable {
        if node == start {
            result.insert(start, start);
            continue;
        }
        let strict_dominators: BTreeSet<UnlaceNodeId> = dominators[&node]
            .iter()
            .copied()
            .filter(|&candidate| candidate != node)
            .collect();
        let immediate = strict_dominators
            .iter()
            .copied()
            .find(|candidate| dominators[candidate] == strict_dominators)
            .expect("every reachable non-entry node has an immediate dominator");
        result.insert(node, immediate);
    }
    result
}

#[test]
fn node_order_addr_then_ident() {
    let mut b = Builder::new();
    let n0 = b.node(0x100); // ident 0
    let n1 = b.node(0x100); // ident 1, same addr
    let n2 = b.node(0x080); // lower addr
    let g = b.graph(&[], &[n0, n1, n2]);
    let mut nodes = Vec::new();
    g.get_nodes(&mut nodes);
    // (addr, ident) order: 0x080/2, 0x100/0, 0x100/1.
    assert_eq!(nodes, vec![n2, n0, n1]);
}

#[test]
fn edge_dedup_and_self_loop() {
    let mut b = Builder::new();
    let a = b.node(0x10);
    let c = b.node(0x20);
    let mut g = b.graph(&[(a, c), (a, c)], &[]); // duplicate
    assert_eq!(g.num_edges(), 1);
    g.add_edge(&b.pool, a, a); // self-loop
    assert!(g.has_edge(a, a));
    assert_eq!(g.size_out(a).unwrap(), 2);
    assert_eq!(g.size_in(a).unwrap(), 1);
    g.remove_node(a);
    assert!(!g.contains_node(a));
    // c's preds list no longer references a.
    assert_eq!(g.size_in(c).unwrap(), 0);
}

#[test]
fn sorted_succs_determinism() {
    let mut b = Builder::new();
    let s = b.node(0x00);
    let hi = b.node(0x300);
    let lo = b.node(0x100);
    let mid = b.node(0x200);
    // Insert edges out of insertion order; getSuccs preserves insertion,
    // getSortedSuccs imposes UnlaceNodeOrder.
    let g = b.graph(&[(s, hi), (s, lo), (s, mid)], &[]);
    assert_eq!(g.get_succs(s).unwrap(), &[hi, lo, mid]);
    assert_eq!(g.get_sorted_succs(&b.pool, s).unwrap(), vec![lo, mid, hi]);
}

#[test]
fn back_edges_simple_loop() {
    // a -> b -> c -> b  (back edge c->b); plus c -> d
    let mut b = Builder::new();
    let a = b.node(0x10);
    let bb = b.node(0x20);
    let c = b.node(0x30);
    let d = b.node(0x40);
    let g = b.graph(&[(a, bb), (bb, c), (c, bb), (c, d)], &[]);
    let mut be = Vec::new();
    unlace_dfs_back_edges(&b.pool, &g, a, &mut be).unwrap();
    assert_eq!(be, vec![(c, bb)]);
}

#[test]
fn back_edges_self_loop() {
    let mut b = Builder::new();
    let a = b.node(0x10);
    let c = b.node(0x20);
    let g = b.graph(&[(a, c), (c, c)], &[]);
    let mut be = Vec::new();
    unlace_dfs_back_edges(&b.pool, &g, a, &mut be).unwrap();
    assert_eq!(be, vec![(c, c)]);
}

#[test]
fn postorder_deterministic_diamond() {
    // a -> b, a -> c, b -> d, c -> d
    let mut b = Builder::new();
    let a = b.node(0x10);
    let bb = b.node(0x20);
    let c = b.node(0x30);
    let d = b.node(0x40);
    let g = b.graph(&[(a, bb), (a, c), (bb, d), (c, d)], &[]);
    let mut po = Vec::new();
    unlace_dfs_postorder_deterministic(&b.pool, &g, a, &mut po).unwrap();
    // Successors pushed ascending => largest (c@0x30) explored first.
    // c -> d (d finishes), c finishes, then b (d already visited) finishes,
    // then a.  Postorder: d, c, b, a.
    assert_eq!(po, vec![d, c, bb, a]);
    // a must be last (root finishes last); d first (sink).
    assert_eq!(*po.last().unwrap(), a);
}

#[test]
fn topo_sort_acyclic_is_reverse_postorder() {
    // Linear chain a -> b -> c: quasi-topo == topological order.
    let mut b = Builder::new();
    let a = b.node(0x10);
    let bb = b.node(0x20);
    let c = b.node(0x30);
    let g = b.graph(&[(a, bb), (bb, c)], &[]);
    let mut order = Vec::new();
    unlace_quasi_topo_sort(&b.pool, &g, &mut order).unwrap();
    assert_eq!(order, vec![a, bb, c]);
}

#[test]
fn topo_sort_single_and_empty() {
    let mut b = Builder::new();
    let a = b.node(0x10);
    let g = b.graph(&[], &[a]);
    let mut order = Vec::new();
    unlace_quasi_topo_sort(&b.pool, &g, &mut order).unwrap();
    assert_eq!(order, vec![a]);

    let g2 = UnlaceRegionGraph::new();
    let mut order2 = Vec::new();
    unlace_quasi_topo_sort(&b.pool, &g2, &mut order2).unwrap();
    assert!(order2.is_empty());
}

#[test]
fn topo_sort_with_scc() {
    // a -> b -> c -> b (SCC {b,c}); c -> d.  Expansion: a, then SCC head b,
    // then the rest of the SCC, then d.
    let mut b = Builder::new();
    let a = b.node(0x10);
    let bb = b.node(0x20);
    let c = b.node(0x30);
    let d = b.node(0x40);
    let g = b.graph(&[(a, bb), (bb, c), (c, bb), (c, d)], &[]);
    let mut order = Vec::new();
    unlace_quasi_topo_sort(&b.pool, &g, &mut order).unwrap();
    // a precedes the SCC; the SCC ({b,c}) precedes d; head of SCC is b
    // (single successor of a inside the SCC).  d last.
    assert_eq!(order.len(), 4);
    assert_eq!(order[0], a);
    let pos_b = order.iter().position(|&x| x == bb).unwrap();
    let pos_c = order.iter().position(|&x| x == c).unwrap();
    let pos_d = order.iter().position(|&x| x == d).unwrap();
    assert!(pos_b < pos_c, "loop head b before c");
    assert!(pos_c < pos_d, "scc before d");
}

#[test]
fn immediate_dominators_diamond() {
    // a -> b, a -> c, b -> d, c -> d.  idom(d) == a.
    let mut b = Builder::new();
    let a = b.node(0x10);
    let bb = b.node(0x20);
    let c = b.node(0x30);
    let d = b.node(0x40);
    let g = b.graph(&[(a, bb), (a, c), (bb, d), (c, d)], &[]);
    let mut idom = BTreeMap::new();
    unlace_immediate_dominators(&b.pool, &g, a, &mut idom).unwrap();
    assert_eq!(idom[&a], a);
    assert_eq!(idom[&bb], a);
    assert_eq!(idom[&c], a);
    assert_eq!(idom[&d], a);
    assert!(unlace_dominates(&idom, a, d));
    assert!(!unlace_dominates(&idom, bb, d));
}

#[test]
fn immediate_dominators_chain() {
    // a -> b -> c -> d (idom is the predecessor each step).
    let mut b = Builder::new();
    let a = b.node(0x10);
    let bb = b.node(0x20);
    let c = b.node(0x30);
    let d = b.node(0x40);
    let g = b.graph(&[(a, bb), (bb, c), (c, d)], &[]);
    let mut idom = BTreeMap::new();
    unlace_immediate_dominators(&b.pool, &g, a, &mut idom).unwrap();
    assert_eq!(idom[&bb], a);
    assert_eq!(idom[&c], bb);
    assert_eq!(idom[&d], c);
}

#[test]
fn immediate_dominators_match_removal_oracle_on_loops_and_unreachable_preds() {
    let mut b = Builder::new();
    let start = b.node(0x10);
    let loop_head = b.node(0x20);
    let loop_body = b.node(0x30);
    let irreducible_a = b.node(0x40);
    let irreducible_b = b.node(0x50);
    let irreducible_join = b.node(0x60);
    let exit = b.node(0x70);
    let unreachable_a = b.node(0x80);
    let unreachable_b = b.node(0x90);
    let unrelated = b.node(0xa0);
    let edges = [
        (start, loop_head),
        (loop_head, loop_body),
        (loop_body, loop_head),
        (loop_body, exit),
        (start, irreducible_a),
        (start, irreducible_b),
        (irreducible_a, irreducible_join),
        (irreducible_b, irreducible_join),
        (irreducible_join, irreducible_a),
        (irreducible_join, irreducible_b),
        (irreducible_join, irreducible_join),
        (irreducible_join, exit),
        (unreachable_a, unreachable_b),
        (unreachable_b, unreachable_a),
        (unreachable_a, exit),
    ];
    let nodes = [
        start,
        loop_head,
        loop_body,
        irreducible_a,
        irreducible_b,
        irreducible_join,
        exit,
    ];
    let graph = b.graph(&edges, &nodes);
    let mut reversed_edges = edges.to_vec();
    reversed_edges.reverse();
    let permuted_graph = b.graph(&reversed_edges, &nodes);
    let expected = idom_by_removal(&graph, start);

    let mut actual = BTreeMap::new();
    actual.insert(unrelated, unrelated);
    unlace_immediate_dominators(&b.pool, &graph, start, &mut actual).unwrap();
    for (&node, &parent) in &expected {
        assert_eq!(actual.get(&node), Some(&parent), "node {node:?}");
    }
    assert_eq!(actual.get(&unrelated), Some(&unrelated));
    assert!(!actual.contains_key(&unreachable_a));
    assert!(!actual.contains_key(&unreachable_b));

    let mut permuted = BTreeMap::new();
    permuted.insert(unrelated, unrelated);
    unlace_immediate_dominators(&b.pool, &permuted_graph, start, &mut permuted).unwrap();
    assert_eq!(
        permuted, actual,
        "edge insertion order must not change dominators"
    );
}

#[test]
fn generated_graph_dominators_match_removal_oracle_in_both_edge_orders() {
    let mut random = 0x3a96_fda7_104d_b82cu64;
    for sample in 0..64 {
        let mut b = Builder::new();
        for n in 0..32 {
            b.node(0x1000 + n);
        }
        let nodes: Vec<_> = (0..2 + sample % 6)
            .map(|n| b.node((n % 3) * 0x10))
            .collect();
        let mut edges = Vec::new();
        for &from in &nodes {
            for &to in &nodes {
                random = random.wrapping_mul(6364136223846793005).wrapping_add(1);
                if random >> 62 == 0 {
                    edges.push((from, to));
                }
            }
        }
        let graph = b.graph(&edges, &nodes);
        let expected = idom_by_removal(&graph, nodes[0]);
        let mut actual = BTreeMap::new();
        unlace_immediate_dominators(&b.pool, &graph, nodes[0], &mut actual).unwrap();
        assert_eq!(actual, expected, "generated graph {sample}");
        edges.reverse();
        let reversed = b.graph(&edges, &nodes);
        let mut actual = BTreeMap::new();
        unlace_immediate_dominators(&b.pool, &reversed, nodes[0], &mut actual).unwrap();
        assert_eq!(actual, expected, "reversed edge order in graph {sample}");
    }
}

#[test]
fn subgraph_between_nodes_basic() {
    // a -> b -> c -> e ; a -> d -> e ; b -> f (dead-ends, pruned).
    // source=a, frontier={e}, includeFrontier=true.
    let mut b = Builder::new();
    let a = b.node(0x10);
    let bb = b.node(0x20);
    let c = b.node(0x30);
    let d = b.node(0x40);
    let e = b.node(0x50);
    let f = b.node(0x60); // dead-end off b
    let g = b.graph(&[(a, bb), (bb, c), (c, e), (a, d), (d, e), (bb, f)], &[]);
    let frontier = b.set(&[e]);
    let mut res = UnlaceRegionGraph::new();
    unlace_subgraph_between_nodes(&b.pool, &g, a, &frontier, true, &mut res).unwrap();
    // f can't reach e -> pruned; e kept (includeFrontier).
    assert!(!res.contains_node(f));
    assert!(res.contains_node(e));
    assert!(res.contains_node(a));
    assert!(res.contains_node(bb));
    assert!(res.contains_node(c));
    assert!(res.contains_node(d));

    // Now exclude the frontier.
    let mut res2 = UnlaceRegionGraph::new();
    unlace_subgraph_between_nodes(&b.pool, &g, a, &frontier, false, &mut res2).unwrap();
    assert!(!res2.contains_node(e));
}

/// angr's `subgraph_between_nodes` as first ported: cut the edges into
/// `source` on a copy of the graph, then walk the copy.
fn slice_on_a_copy(
    pool: &UnlaceNodePool,
    g: &UnlaceRegionGraph,
    source: UnlaceNodeId,
    frontier: &UnlaceNodeSet,
    include_frontier: bool,
) -> UnlaceRegionGraph {
    let mut graph = g.clone();
    let mut src_in = Vec::new();
    graph.in_edges(source, &mut src_in).unwrap();
    for (a, b) in src_in {
        graph.remove_edge(a, b);
    }
    let mut can_reach = BTreeSet::new();
    let mut queue: Vec<UnlaceNodeId> = frontier.iter().map(|k| k.id).collect();
    can_reach.extend(queue.iter().copied());
    let mut pos = 0;
    while pos < queue.len() {
        let cur = queue[pos];
        pos += 1;
        for p in graph.get_preds(cur).unwrap().to_vec() {
            if can_reach.insert(p) {
                queue.push(p);
            }
        }
    }
    let mut res = UnlaceRegionGraph::new();
    let mut queue = vec![source];
    let mut traversed = BTreeSet::new();
    let mut pos = 0;
    while pos < queue.len() {
        let node = queue[pos];
        pos += 1;
        if !traversed.insert(node) {
            continue;
        }
        for succ in graph.get_succs(node).unwrap().to_vec() {
            if res.has_edge(node, succ) {
                continue;
            }
            res.add_edge(pool, node, succ);
            if !traversed.contains(&succ)
                && !frontier.contains(&pool.key(succ))
                && can_reach.contains(&succ)
            {
                queue.push(succ);
            }
        }
    }
    loop {
        let dangling: Vec<UnlaceNodeId> = res
            .iter_adj()
            .filter(|(k, adj)| {
                k.id != source
                    && !frontier.contains(k)
                    && (adj.succs.is_empty() || adj.preds.is_empty())
            })
            .map(|(k, _)| k.id)
            .collect();
        if dangling.is_empty() {
            break;
        }
        for n in dangling {
            res.remove_node(n);
        }
    }
    if !include_frontier {
        for fk in frontier.iter() {
            res.remove_node(fk.id);
        }
    }
    res
}

#[test]
fn a_slice_matches_the_slice_of_a_copy_and_holds_every_node_its_walk_visits() {
    let mut random = 0x9c1d_44e2_0b7f_35a1u64;
    let mut next = |n: u64| {
        random = random
            .wrapping_mul(6364136223846793005)
            .wrapping_add(1442695040888963407);
        (random >> 33) % n
    };
    let mut visited_any = 0;
    for sample in 0..300 {
        let mut b = Builder::new();
        let nodes: Vec<_> = (0..3 + sample % 9)
            .map(|n| b.node(0x10 * (n % 5)))
            .collect();
        let mut edges = Vec::new();
        for &from in &nodes {
            for &to in &nodes {
                if next(4) == 0 {
                    edges.push((from, to));
                }
            }
        }
        let g = b.graph(&edges, &nodes);
        for &source in &nodes {
            let picked: Vec<_> = nodes.iter().copied().filter(|_| next(3) == 0).collect();
            let frontier = b.set(&picked);
            for include in [true, false] {
                let mut res = UnlaceRegionGraph::new();
                unlace_subgraph_between_nodes(&b.pool, &g, source, &frontier, include, &mut res)
                    .unwrap();
                let copy = slice_on_a_copy(&b.pool, &g, source, &frontier, include);
                assert_eq!(format!("{res:?}"), format!("{copy:?}"), "graph {sample}");
            }
            let mut res = UnlaceRegionGraph::new();
            unlace_subgraph_between_nodes(&b.pool, &g, source, &frontier, true, &mut res).unwrap();
            let mut visited = Vec::new();
            let hit = unlace_slice_visits(&g, &b.pool, source, &frontier, |n| {
                visited.push(n);
                false
            });
            assert!(!hit.unwrap());
            for n in visited.iter().filter(|&&n| n != source) {
                assert!(
                    res.contains_node(*n),
                    "graph {sample}: visited {n:?} is not in the slice"
                );
                visited_any += 1;
            }
            let target = visited.last().copied();
            let stops = unlace_slice_visits(&g, &b.pool, source, &frontier, |n| Some(n) == target);
            assert_eq!(stops.unwrap(), target.is_some());
        }
    }
    assert!(visited_any > 500, "{visited_any}");
}

#[test]
fn subgraph_between_nodes_errors() {
    let mut b = Builder::new();
    let a = b.node(0x10);
    let c = b.node(0x20);
    let orphan = b.node(0x99);
    let g = b.graph(&[(a, c)], &[]);
    let empty = UnlaceNodeSet::new();
    // source not in graph.
    assert!(
        unlace_subgraph_between_nodes(
            &b.pool,
            &g,
            orphan,
            &empty,
            true,
            &mut UnlaceRegionGraph::new()
        )
        .is_err()
    );
    // frontier node not in graph.
    let bad_front = b.set(&[orphan]);
    assert!(
        unlace_subgraph_between_nodes(
            &b.pool,
            &g,
            a,
            &bad_front,
            true,
            &mut UnlaceRegionGraph::new()
        )
        .is_err()
    );
    assert!(unlace_slice_visits(&g, &b.pool, orphan, &empty, |_| true).is_err());
    assert!(unlace_slice_visits(&g, &b.pool, a, &bad_front, |_| true).is_err());
}

#[test]
fn incremental_dominators_match_scratch() {
    // a -> b, a -> c, b -> d, c -> d, d -> e.
    let mut b = Builder::new();
    let a = b.node(0x10);
    let bb = b.node(0x20);
    let c = b.node(0x30);
    let d = b.node(0x40);
    let e = b.node(0x50);
    let g = b.graph(&[(a, bb), (a, c), (bb, d), (c, d), (d, e)], &[]);
    let dom = UnlaceIncrementalDominators::new(&b.pool, &g, a, false).unwrap();
    assert_eq!(dom.idom(a), Some(a));
    assert_eq!(dom.idom(d), Some(a));
    assert_eq!(dom.idom(e), Some(d));
    dom.verify(&b.pool, &g).unwrap();
    // dominates climbs the idom chain.
    assert!(dom.dominates(a, e));
    assert!(dom.dominates(d, e));
    assert!(!dom.dominates(bb, e));
}

#[test]
fn incremental_dominators_frontier() {
    // Classic diamond: df(b) and df(c) are both {d}.
    let mut b = Builder::new();
    let a = b.node(0x10);
    let bb = b.node(0x20);
    let c = b.node(0x30);
    let d = b.node(0x40);
    let g = b.graph(&[(a, bb), (a, c), (bb, d), (c, d)], &[]);
    let mut dom = UnlaceIncrementalDominators::new(&b.pool, &g, a, false).unwrap();
    let dfb = dom.df(&b.pool, &g, bb).unwrap();
    let dfc = dom.df(&b.pool, &g, c).unwrap();
    assert_eq!(dfb, b.set(&[d]));
    assert_eq!(dfc, b.set(&[d]));
    dom.verify(&b.pool, &g).unwrap();
}

#[test]
fn incremental_dominators_patch_after_merge() {
    // Collapse a proper single-entry/single-exit region (a sequential
    // sub-chain) into one node and patch the dominators, then verify
    // against a from-scratch computation on the updated graph.  This is the
    // contract `graph_updated` is built on (angr only ever collapses a real
    // region; the dominatees of the replaced nodes re-point to the new
    // node, and nothing outside the region changes dominator).
    //   before: a -> b -> c -> d -> e
    //   merge {b,c} -> m, replaced_head = b (the region entry)
    //   after:  a -> m -> d -> e
    let mut b = Builder::new();
    let a = b.node(0x10);
    let bb = b.node(0x20);
    let c = b.node(0x30);
    let d = b.node(0x40);
    let e = b.node(0x50);
    let g = b.graph(&[(a, bb), (bb, c), (c, d), (d, e)], &[]);
    let mut dom = UnlaceIncrementalDominators::new(&b.pool, &g, a, false).unwrap();
    // Touch frontiers so patching exercises the dfs path too.
    let _ = dom.df(&b.pool, &g, bb).unwrap();

    // Allocate the merged node and build the updated graph.
    let m = b.node(0x20); // same addr as the replaced head b
    let g2 = b.graph(&[(a, m), (m, d), (d, e)], &[]);

    let replaced = b.set(&[bb, c]);
    dom.graph_updated(&b.pool, m, &replaced, bb).unwrap();

    // After the patch the incremental dominators must equal a from-scratch
    // computation over the updated graph: a -> m -> d -> e.
    assert_eq!(dom.idom(a), Some(a));
    assert_eq!(dom.idom(m), Some(a));
    assert_eq!(dom.idom(d), Some(m));
    assert_eq!(dom.idom(e), Some(d));
    assert_eq!(dom.idom(bb), None); // b folded into m
    assert_eq!(dom.idom(c), None); // c folded into m
    dom.verify(&b.pool, &g2).unwrap();
}

#[test]
fn post_dominators_reversed() {
    // a -> b -> c, computing post-dominators rooted at c (the sink).
    let mut b = Builder::new();
    let a = b.node(0x10);
    let bb = b.node(0x20);
    let c = b.node(0x30);
    let g = b.graph(&[(a, bb), (bb, c)], &[]);
    let dom = UnlaceIncrementalDominators::new(&b.pool, &g, c, true).unwrap();
    // Post-dominator tree over reversed edges: c pdom of b, b pdom of a.
    assert_eq!(dom.idom(c), Some(c));
    assert_eq!(dom.idom(bb), Some(c));
    assert_eq!(dom.idom(a), Some(bb));
    dom.verify(&b.pool, &g).unwrap();
}

#[test]
fn induced_and_reversed_copies() {
    let mut b = Builder::new();
    let a = b.node(0x10);
    let bb = b.node(0x20);
    let c = b.node(0x30);
    let g = b.graph(&[(a, bb), (bb, c), (a, c)], &[]);

    // Induced on {a, b}: only edge a -> b survives.
    let keep = b.set(&[a, bb]);
    let mut ind = UnlaceRegionGraph::new();
    g.induced(&b.pool, &keep, &mut ind);
    assert_eq!(ind.num_nodes(), 2);
    assert!(ind.has_edge(a, bb));
    assert!(!ind.has_edge(a, c));

    // Reversed: every edge flips, node set preserved.
    let mut rev = UnlaceRegionGraph::new();
    g.build_reversed(&b.pool, &mut rev);
    assert!(rev.has_edge(bb, a));
    assert!(rev.has_edge(c, bb));
    assert!(rev.has_edge(c, a));
    assert_eq!(rev.num_nodes(), 3);
}
