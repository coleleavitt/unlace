//! Dominator-tree intervals for repeated queries on one immutable P8 snapshot.
//!
//! Interval slots are indexed by arena id, so the index is sized by the
//! largest node id in the graph; P8 snapshots come from a fresh pool.

use crate::regiongraph::{UnlaceIncrementalDominators, UnlaceNodeId, UnlaceRegionGraph};

const ABSENT: u32 = u32::MAX;

#[doc(hidden)]
pub struct DominanceIndex {
    intervals: Vec<(u32, u32)>,
}

impl DominanceIndex {
    #[doc(hidden)]
    pub fn new(doms: &UnlaceIncrementalDominators, graph: &UnlaceRegionGraph) -> Self {
        let mut nodes = Vec::new();
        graph.get_nodes(&mut nodes);
        let slots = nodes
            .iter()
            .map(|node| node.0 as usize + 1)
            .max()
            .unwrap_or(0);
        let mut first_child = vec![ABSENT; slots];
        let mut next_sibling = vec![ABSENT; slots];
        let mut roots = Vec::new();
        for &node in &nodes {
            match doms.idom(node) {
                Some(parent) if parent == node => roots.push(node.0),
                Some(parent) if (parent.0 as usize) < slots => {
                    next_sibling[node.0 as usize] = first_child[parent.0 as usize];
                    first_child[parent.0 as usize] = node.0;
                }
                _ => {}
            }
        }
        let mut intervals = vec![(ABSENT, ABSENT); slots];
        let mut clock = 0u32;
        let mut stack: Vec<(u32, bool)> = roots.into_iter().map(|root| (root, false)).collect();
        while let Some((node, exiting)) = stack.pop() {
            if exiting {
                intervals[node as usize].1 = clock;
                continue;
            }
            intervals[node as usize] = (clock, clock);
            clock += 1;
            stack.push((node, true));
            let mut child = first_child[node as usize];
            while child != ABSENT {
                stack.push((child, false));
                child = next_sibling[child as usize];
            }
        }
        Self { intervals }
    }

    #[doc(hidden)]
    pub fn dominates(&self, dominator: UnlaceNodeId, node: UnlaceNodeId) -> bool {
        if dominator == node {
            return true;
        }
        let slot = |id: UnlaceNodeId| {
            self.intervals
                .get(id.0 as usize)
                .copied()
                .filter(|&(begin, _)| begin != ABSENT)
        };
        match (slot(dominator), slot(node)) {
            (Some((begin, end)), Some((position, _))) => begin <= position && position < end,
            _ => false,
        }
    }
}

#[cfg(test)]
mod tests {
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
}
