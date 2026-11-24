//! Graphviz DOT for a function's basic-block control-flow graph (the `cfg dot`
//! console command and `unlace decompile --cfg-dot`).
//!
//! One node per basic block, in CFG component order, labelled with the block
//! index and its start..stop address range; one edge per out-edge, in each
//! block's own out-list order. The output is deterministic and renders with
//! `dot -Tsvg`.

use std::fmt::Write;

use crate::block::{BlockGraph, block_get_start, block_get_stop};
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
