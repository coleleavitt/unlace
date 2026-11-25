use super::*;
use crate::block::{BlockKind, FlowBlock};

fn graph(n: usize, edges: &[(usize, usize)]) -> (BlockGraph, BlockId, Vec<BlockId>) {
    let mut g = BlockGraph::new();
    let root = g.arena.insert(FlowBlock::new_kind(BlockKind::Graph));
    g.root = Some(root);
    let b: Vec<BlockId> = (0..n).map(|_| g.new_block(root)).collect();
    for &(s, d) in edges {
        g.add_edge(b[s], b[d]);
    }
    (g, root, b)
}

fn switch_graph(
    n: usize,
    edges: &[(usize, usize)],
    back: &[usize],
) -> (BlockGraph, BlockId, Vec<BlockId>) {
    let (mut g, root, b) = graph(n, edges);
    for &block in &b[2..] {
        let original = g.arena.insert(FlowBlock::new_kind(BlockKind::Graph));
        *g.block_mut(block).kind_mut() = BlockKind::Copy {
            copy: Some(original),
        };
    }
    g.block_mut(b[2])
        .set_flag(crate::block::block_flags::f_switch_out);
    let flags = crate::block::edge_flags::f_back_edge | crate::block::edge_flags::f_loop_edge;
    for &block in back {
        g.set_out_edge_flag(b[block], 0, flags);
    }
    (g, root, b)
}

fn fold_switch(g: &mut BlockGraph, root: BlockId, b: &[BlockId]) -> Option<BlockId> {
    let copy = |g: &BlockGraph, id: BlockId| match g.block(id).kind() {
        BlockKind::Copy { copy } => copy.unwrap(),
        _ => unreachable!(),
    };
    let head = copy(g, b[2]);
    let maps = (3..b.len())
        .map(|i| ((head, copy(g, b[i])), (i as int4 - 3, false)))
        .collect();
    let mut st =
        RegionStructurer::new(g, root).with_switch_maps([(head, 0)].into_iter().collect(), maps);
    assert!(st.graph.block(b[3]).is_back_edge_out(0));
    if !st.try_switch_cases(b[2]).unwrap() {
        return None;
    }
    (0..g.block(root).get_size())
        .map(|i| g.block(root).get_block(i))
        .find(|&id| g.block(id).get_type() == crate::block::BlockType::Switch)
}

#[test]
fn switch_case_backedges_keep_their_actual_loop_header() {
    for returns_to_switch in [true, false] {
        let destination = if returns_to_switch { 2 } else { 1 };
        let (mut g, root, b) =
            switch_graph(5, &[(0, 1), (1, 2), (2, 3), (2, 4), (3, destination)], &[3]);
        let sw = fold_switch(&mut g, root, &b).unwrap();
        assert_eq!(g.block(sw).size_out(), 1, "{returns_to_switch}");
        assert_eq!(
            g.block(sw).get_out(0),
            if returns_to_switch { sw } else { b[1] }
        );
    }
}

#[test]
fn a_switch_backedge_beside_another_exit_is_not_folded_away() {
    let edges = [(0, 1), (1, 2), (1, 5), (2, 3), (2, 4), (2, 5), (3, 2)];
    let (mut g, root, b) = switch_graph(6, &edges, &[3]);
    assert!(fold_switch(&mut g, root, &b).is_none());
    assert_eq!(g.block(b[3]).get_out(0), b[2]);
    let enclosing = [(0, 1), (1, 2), (1, 5), (2, 3), (2, 4), (2, 5), (3, 1)];
    let (mut g, root, b) = switch_graph(6, &enclosing, &[3]);
    let sw = fold_switch(&mut g, root, &b).unwrap();
    let outs: Vec<_> = (0..g.block(sw).size_out())
        .map(|i| g.block(sw).get_out(i))
        .collect();
    assert!(outs.contains(&b[1]) && outs.contains(&b[5]), "{outs:?}");
}

#[test]
fn a_switch_that_is_its_own_exit_declines_beside_an_outer_continue() {
    let edges = [(0, 1), (1, 2), (2, 3), (2, 4), (2, 5), (3, 2), (4, 1)];
    let (mut g, root, b) = switch_graph(6, &edges, &[3, 4]);
    assert!(fold_switch(&mut g, root, &b).is_none());
    assert_eq!(
        (g.block(b[3]).get_out(0), g.block(b[4]).get_out(0)),
        (b[2], b[1])
    );
}

#[test]
fn a_direct_switch_self_edge_folds_only_without_an_outer_continue() {
    for outer in [false, true] {
        let edges = [
            (0, 1),
            (1, 2),
            (2, 2),
            (2, 3),
            (2, 4),
            (3, if outer { 1 } else { 2 }),
        ];
        let (mut g, root, b) = switch_graph(5, &edges, &[2, 3]);
        let sw = fold_switch(&mut g, root, &b);
        if outer {
            assert!(sw.is_none());
            assert_eq!(
                (g.block(b[2]).get_out(0), g.block(b[3]).get_out(0)),
                (b[2], b[1])
            );
        } else {
            let sw = sw.unwrap();
            assert_eq!((g.block(sw).size_out(), g.block(sw).get_out(0)), (1, sw));
        }
    }
}

#[test]
fn a_case_that_loops_on_itself_is_not_a_continue() {
    let edges = [(0, 1), (1, 2), (2, 3), (2, 4), (3, 3), (4, 5)];
    let (mut g, root, b) = switch_graph(6, &edges, &[3]);
    assert!(fold_switch(&mut g, root, &b).is_none());
    assert_eq!(g.block(b[3]).get_out(0), b[3]);
}

#[test]
fn stranded_component_declines_before_any_fold() {
    let (mut g, root, _) = graph(3, &[(0, 1)]);
    let mut st = RegionStructurer::new(&mut g, root);
    assert!(st.has_stranded_component());
    assert!(!st.structure(None).unwrap());
    assert_eq!(g.block(root).get_size(), 3);
}

#[test]
fn connected_chain_still_structures() {
    let (mut g, root, _) = graph(3, &[(0, 1), (1, 2)]);
    let mut st = RegionStructurer::new(&mut g, root);
    assert!(!st.has_stranded_component());
    assert!(st.structure(None).unwrap());
    assert_eq!(g.block(root).get_size(), 1);
}

#[test]
fn expired_budget_preserves_the_unfolded_graph() {
    let (mut g, root, _) = graph(3, &[(0, 1), (1, 2)]);
    let mut st = RegionStructurer::new(&mut g, root);
    assert!(!st.structure(Some(std::time::Instant::now())).unwrap());
    assert_eq!(g.block(root).get_size(), 3);
}

#[test]
fn pending_absorb_keeps_an_isolated_body_member_live() {
    let (mut g, root, _) = graph(2, &[(0, 1)]);
    let bb = g.arena.insert(FlowBlock::new_kind(BlockKind::Graph));
    let leaf = g.new_block(root);
    *g.block_mut(leaf).kind_mut() = BlockKind::Copy { copy: Some(bb) };
    let mut st = RegionStructurer::new(&mut g, root).with_loop_refine(
        true,
        Vec::new(),
        [(bb, 0x1000)].into_iter().collect(),
    );
    assert!(st.has_stranded_component());
    st.pending_inf_loops.insert(0x2000);
    st.pending_body_addrs
        .insert(0x2000, [0x1000].into_iter().collect());
    assert!(!st.has_stranded_component());
}

/// (unlace, #1298) Ground-truth source shape for the structurer survey: sequences, if/else
/// and while loops. `lower_root` turns it into the same abstract edge list `graph` takes.
#[derive(Clone, Debug)]
enum SrcShape {
    Basic,
    Seq(Vec<SrcShape>),
    If(Box<SrcShape>, Box<SrcShape>),
    While(Box<SrcShape>),
}

/// Deterministic xorshift64 so a failing seed reproduces exactly.
struct ShapeRng(u64);

impl ShapeRng {
    fn step(&mut self) -> u64 {
        let mut x = self.0;
        x ^= x << 13;
        x ^= x >> 7;
        x ^= x << 17;
        self.0 = x;
        x
    }

    fn below(&mut self, n: u64) -> u64 {
        self.step() % n
    }
}

fn seeded_rng(seed: u64) -> ShapeRng {
    ShapeRng(seed.wrapping_mul(0x9E37_79B9_7F4A_7C15) | 1)
}

fn gen_shape(rng: &mut ShapeRng, depth: u32) -> SrcShape {
    if depth == 0 || rng.below(4) == 0 {
        return SrcShape::Basic;
    }
    match rng.below(3) {
        0 => {
            let n = 2 + rng.below(2);
            SrcShape::Seq((0..n).map(|_| gen_shape(rng, depth - 1)).collect())
        }
        1 => SrcShape::If(
            Box::new(gen_shape(rng, depth - 1)),
            Box::new(gen_shape(rng, depth - 1)),
        ),
        _ => SrcShape::While(Box::new(gen_shape(rng, depth - 1))),
    }
}

/// Block 0 is the entry. Every block is fresh when it is created, so each branch and loop
/// body starts in its own block, and a conditional block gets out 0 (then or body) before
/// out 1 (else or exit), in the order `add_edge` is called.
struct ShapeCfg {
    blocks: usize,
    edges: Vec<(usize, usize)>,
}

impl ShapeCfg {
    fn lower_root(shape: &SrcShape) -> ShapeCfg {
        let mut cfg = ShapeCfg {
            blocks: 1,
            edges: Vec::new(),
        };
        cfg.lower(shape, 0);
        cfg
    }

    fn fresh(&mut self) -> usize {
        self.blocks += 1;
        self.blocks - 1
    }

    /// Lowers `shape` after block `cur` (which has no successor yet) and returns the block
    /// control leaves through.
    fn lower(&mut self, shape: &SrcShape, cur: usize) -> usize {
        match shape {
            SrcShape::Basic => {
                let next = self.fresh();
                self.edges.push((cur, next));
                next
            }
            SrcShape::Seq(items) => items.iter().fold(cur, |at, item| self.lower(item, at)),
            SrcShape::If(then_s, else_s) => {
                let then_entry = self.fresh();
                self.edges.push((cur, then_entry));
                let then_end = self.lower(then_s, then_entry);
                let else_entry = self.fresh();
                self.edges.push((cur, else_entry));
                let else_end = self.lower(else_s, else_entry);
                let join = self.fresh();
                self.edges.push((then_end, join));
                self.edges.push((else_end, join));
                join
            }
            SrcShape::While(body) => {
                let header = self.fresh();
                self.edges.push((cur, header));
                let body_entry = self.fresh();
                self.edges.push((header, body_entry));
                let body_end = self.lower(body, body_entry);
                self.edges.push((body_end, header));
                let exit = self.fresh();
                self.edges.push((header, exit));
                exit
            }
        }
    }
}

#[test]
fn shape_lowering_reaches_every_block_with_at_most_two_exits() {
    for seed in 0u64..64 {
        let cfg = ShapeCfg::lower_root(&gen_shape(&mut seeded_rng(seed), 4));
        let mut seen = vec![false; cfg.blocks];
        seen[0] = true;
        let mut stack = vec![0usize];
        while let Some(at) = stack.pop() {
            for &(_, d) in cfg.edges.iter().filter(|e| e.0 == at) {
                if !seen[d] {
                    seen[d] = true;
                    stack.push(d);
                }
            }
        }
        assert!(seen.iter().all(|&s| s), "seed {seed}: unreachable block");
        for b in 0..cfg.blocks {
            let outs = cfg.edges.iter().filter(|e| e.0 == b).count();
            assert!(outs <= 2, "seed {seed}: block {b} has {outs} exits");
        }
    }
}
