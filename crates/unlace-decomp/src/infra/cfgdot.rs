//! Graphviz DOT for a function's basic-block control-flow graph (the `cfg dot`
//! console command and `unlace decompile --cfg-dot`).
//!
//! One node per basic block, in CFG component order, labelled with the block
//! index and its start..stop address range; one edge per out-edge, in each
//! block's own out-list order. The output is deterministic and renders with
//! `dot -Tsvg`.

use std::fmt::Write;

use crate::block::{BlockGraph, BlockType, block_get_start, block_get_stop};
use crate::context::BlockId;

/// Graphviz DOT text for the basic-block graph `graph`, named `name`.
pub fn emit_cfg_dot(name: &str, graph: &BlockGraph) -> String {
    let mut out = String::with_capacity(1024);
    let _ = writeln!(out, "digraph \"{}\" {{", dot_escape(name));
    out.push_str("  node [shape=box, fontname=\"monospace\"];\n");
    let blocks = component_blocks(graph);
    for &bl in &blocks {
        let index = graph.block(bl).get_index();
        let start = block_get_start(&graph.arena, bl).get_offset();
        let stop = block_get_stop(&graph.arena, bl).get_offset();
        let _ = writeln!(
            out,
            "  b{index} [label=\"bb{index}\\l0x{start:x}..0x{stop:x}\\l\"];"
        );
    }
    for &bl in &blocks {
        let blk = graph.block(bl);
        let from = blk.get_index();
        for j in 0..blk.size_out() {
            let to = graph.block(blk.get_out(j)).get_index();
            let _ = writeln!(out, "  b{from} -> b{to};");
        }
    }
    out.push_str("}\n");
    out
}

/// Graphviz DOT for a structuring hierarchy (the `sblocks` of a function, after
/// structuring): one node per structure node in breadth-first order, `n<k>`,
/// labelled with its kind and, for a basic block, its code range; one edge per
/// component. The hierarchy is a tree, so each node has one parent edge.
pub fn emit_sblock_dot(name: &str, graph: &BlockGraph) -> String {
    let mut out = String::with_capacity(1024);
    let _ = writeln!(out, "digraph \"{}\" {{", dot_escape(name));
    out.push_str("  node [shape=box, fontname=\"monospace\"];\n");
    let mut order: Vec<BlockId> = graph.root.into_iter().collect();
    let mut next = 0;
    while next < order.len() {
        let bl = order[next];
        let block = graph.block(bl);
        let kind = format!("{:?}", block.get_type());
        let label = if block.get_type() == BlockType::Basic {
            let start = block_get_start(&graph.arena, bl).get_offset();
            let stop = block_get_stop(&graph.arena, bl).get_offset();
            format!("{kind} {}\\l0x{start:x}..0x{stop:x}\\l", block.get_index())
        } else {
            format!("{kind} {}\\l", block.get_index())
        };
        let _ = writeln!(out, "  n{next} [label=\"{}\"];", dot_escape(&label));
        for &child in block.get_list() {
            order.push(child);
            let _ = writeln!(out, "  n{next} -> n{};", order.len() - 1);
        }
        next += 1;
    }
    out.push_str("}\n");
    out
}

/// The component blocks of the graph in index order; empty for an unbuilt graph.
fn component_blocks(graph: &BlockGraph) -> Vec<BlockId> {
    match graph.root {
        Some(root) => {
            let list = graph.block(root);
            (0..list.get_size()).map(|i| list.get_block(i)).collect()
        }
        None => Vec::new(),
    }
}

/// Escape a string for a double-quoted DOT identifier.
fn dot_escape(s: &str) -> String {
    s.replace('\\', "\\\\").replace('"', "\\\"")
}

#[cfg(test)]
mod tests {
    use super::*;
    use crate::block::{BlockKind, FlowBlock};

    #[test]
    fn sblock_dot_lists_each_component_under_its_parent() {
        let mut graph = BlockGraph::new();
        let root = graph.arena.insert(FlowBlock::new_kind(BlockKind::Graph));
        graph.root = Some(root);
        let first = graph.arena.insert(FlowBlock::new_kind(BlockKind::Plain));
        let second = graph.arena.insert(FlowBlock::new_kind(BlockKind::Plain));
        graph.add_block(root, first);
        graph.add_block(root, second);
        let dot = emit_sblock_dot("f", &graph);
        assert!(dot.contains("  n0 -> n1;\n  n0 -> n2;\n"), "{dot}");
        assert!(dot.contains("n1 [label=\"Plain"), "{dot}");
    }
}
