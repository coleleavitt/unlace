use super::*;
use crate::regiongraph::{NodeKind, UnlaceNodePool};

#[test]
fn deep_chain_uses_an_iterative_traversal() {
    let mut pool = UnlaceNodePool::new();
    let mut graph = UnlaceRegionGraph::new();
    let nodes: Vec<_> = (0..10_000)
        .map(|i| pool.make(NodeKind::Block, i as u64, i))
        .collect();
    for &node in &nodes {
        graph.add_node(&pool, node);
    }
    for edge in nodes.windows(2) {
        graph.add_edge(&pool, edge[0], edge[1]);
    }
    let doms = UnlaceIncrementalDominators::new(&pool, &graph, nodes[0], false).unwrap();
    let index = DominanceIndex::new(&doms, &graph);
    for &node in &nodes {
        assert!(index.dominates(nodes[0], node));
        assert!(index.dominates(node, nodes[9999]));
        assert_eq!(index.dominates(node, nodes[0]), node == nodes[0]);
    }
}

#[test]
fn agrees_with_chain_walk_on_four_node_digraphs() {
    let mut pool = UnlaceNodePool::new();
    let nodes: Vec<_> = (0..4)
        .map(|i| pool.make(NodeKind::Block, i as u64, i))
        .collect();
    let edges: Vec<_> = (0..4)
        .flat_map(|a| (0..4).filter(move |&b| a != b).map(move |b| (a, b)))
        .collect();
    for mask in 0..(1 << edges.len()) {
        let mut graph = UnlaceRegionGraph::new();
        for &node in &nodes {
            graph.add_node(&pool, node);
        }
        for (bit, &(a, b)) in edges.iter().enumerate() {
            if mask & (1 << bit) != 0 {
                graph.add_edge(&pool, nodes[a], nodes[b]);
            }
        }
        for post in [false, true] {
            let doms = UnlaceIncrementalDominators::new(&pool, &graph, nodes[0], post).unwrap();
            let index = DominanceIndex::new(&doms, &graph);
            let queries: Vec<_> = nodes.iter().copied().chain([UnlaceNodeId(99)]).collect();
            for &a in &queries {
                for &b in &queries {
                    assert_eq!(
                        index.dominates(a, b),
                        doms.dominates(a, b),
                        "mask={mask} post={post} {a:?} -> {b:?}"
                    );
                }
            }
        }
    }
}
