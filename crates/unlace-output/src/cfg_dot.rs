//! Rich Graphviz DOT output for SSA-form control-flow graphs.
//!
//! Produces a `digraph` string where each node shows the block ID and up to 5
//! IR instructions, edges carry T/F/fallthrough labels, and blocks are colored
//! by role: entry (green), exit (red), loop header (blue).

use std::collections::BTreeSet;
use std::fmt::Write;

use unlace_ir::cfg::{ControlFlowGraph, EdgeKind};
use unlace_ir::ssa::{DominatorTree, SsaFunction};
use unlace_ir::BlockId;

/// Maximum number of IR instructions shown per block node.
const MAX_INSNS_PER_LABEL: usize = 5;

/// Produce a Graphviz DOT string for the given [`SsaFunction`].
///
/// Block nodes include the block ID and the first few IR instructions.  Edges
/// carry labels for conditional, fallthrough, indirect, call, and return edges.
/// The entry block is green, exit blocks (RETURN targets) are red, and loop
/// headers are blue.
///
/// The output is deterministic: nodes and edges are sorted by `BlockId` order.
pub fn emit_cfg_dot(func: &SsaFunction) -> String {
    let cfg = &func.cfg;
    let dom_tree = &func.dom_tree;

    let loop_headers = find_loop_headers(cfg, dom_tree);

    let entry = cfg.entry_block();
    let exit = cfg.exit_block();
    let unknown = cfg.unknown_block();

    // Collect real block IDs in sorted order (exclude synthetic exit/unknown).
    let block_ids: Vec<BlockId> = cfg
        .node_map()
        .keys()
        .copied()
        .filter(|&bid| bid != exit && bid != unknown)
        .collect();

    let mut out = String::with_capacity(1024);
    // `writeln!` to `String` is infallible; ignore the result.
    let _ = writeln!(out, "digraph CFG {{");
    let _ = writeln!(out, "  rankdir=TB;");
    let _ = writeln!(out, "  node [shape=box, fontname=\"monospace\"];");
    let _ = writeln!(out, "  edge [fontname=\"monospace\", fontsize=10];");

    // --- Nodes ---
    for &bid in &block_ids {
        let label = build_node_label(func, bid);
        let fill = node_fill(bid, entry, &loop_headers, cfg);

        if let Some(color) = fill {
            let _ = writeln!(
                out,
                "  {bid} [label=\"{label}\", fillcolor={color}, style=filled];",
            );
        } else {
            let _ = writeln!(out, "  {bid} [label=\"{label}\"];");
        }
    }

    // --- Edges (deterministic: sorted by source then target then kind) ---
    let mut edges: Vec<(BlockId, BlockId, EdgeKind)> = Vec::new();
    for &bid in &block_ids {
        let mut block_edges: Vec<(BlockId, EdgeKind)> = cfg.edges_from(bid);
        // Filter out edges to synthetic exit/unknown — we render return
        // blocks as red nodes instead.
        block_edges.retain(|(target, _)| *target != exit && *target != unknown);
        block_edges.sort_by_key(|(target, kind)| (*target, *kind as u8));
        for (target, kind) in block_edges {
            edges.push((bid, target, kind));
        }
    }

    for (src, dst, kind) in &edges {
        let label = edge_label(*kind);
        if label.is_empty() {
            let _ = writeln!(out, "  {src} -> {dst};");
        } else {
            let _ = writeln!(out, "  {src} -> {dst} [label=\"{label}\"];");
        }
    }

    let _ = writeln!(out, "}}");
    out
}

/// Build the dot-escaped node label for a block: block ID header then up to
/// `MAX_INSNS_PER_LABEL` instruction lines, left-aligned via `\l`.
fn build_node_label(func: &SsaFunction, bid: BlockId) -> String {
    let mut label = format!("{bid}");

    if let Some(block) = func.function.blocks.get(&bid) {
        let count = block.insns.len().min(MAX_INSNS_PER_LABEL);
        for insn in &block.insns[..count] {
            // Escape characters that conflict with DOT syntax.
            let line = insn.to_string();
            let escaped = dot_escape(&line);
            label.push_str("\\l");
            label.push_str(&escaped);
        }
        if block.insns.len() > MAX_INSNS_PER_LABEL {
            let _ = write!(label, "\\l... ({} more)", block.insns.len() - MAX_INSNS_PER_LABEL);
        }
    }

    // Trailing \l for left-alignment of last line.
    label.push_str("\\l");
    label
}

/// Determine the fill color for a node, if any.
fn node_fill(
    bid: BlockId,
    entry: BlockId,
    loop_headers: &BTreeSet<BlockId>,
    cfg: &ControlFlowGraph,
) -> Option<&'static str> {
    if bid == entry {
        return Some("lightgreen");
    }
    // A block is an "exit" block if it has a Return edge to the synthetic exit.
    let is_exit = cfg
        .edges_from(bid)
        .iter()
        .any(|(_, kind)| *kind == EdgeKind::Return);
    if is_exit {
        return Some("lightcoral");
    }
    if loop_headers.contains(&bid) {
        return Some("lightblue");
    }
    None
}

/// Map an [`EdgeKind`] to its DOT edge label.
fn edge_label(kind: EdgeKind) -> &'static str {
    match kind {
        EdgeKind::ConditionalTrue => "T",
        EdgeKind::ConditionalFalse => "F",
        EdgeKind::Fallthrough => "fallthrough",
        EdgeKind::Unconditional => "",
        EdgeKind::IndirectJump => "indirect",
        EdgeKind::Call => "call",
        EdgeKind::Return => "return",
    }
}

/// Detect loop headers: a block is a loop header if some incoming edge is a
/// back-edge (an edge u → v where v dominates u).
fn find_loop_headers(cfg: &ControlFlowGraph, dom_tree: &DominatorTree) -> BTreeSet<BlockId> {
    let exit = cfg.exit_block();
    let unknown = cfg.unknown_block();

    let mut headers = BTreeSet::new();

    for &bid in cfg.node_map().keys() {
        if bid == exit || bid == unknown {
            continue;
        }
        for (src, _kind) in cfg.edges_to(bid) {
            if src == exit || src == unknown {
                continue;
            }
            if dominates(dom_tree, bid, src) {
                headers.insert(bid);
                break;
            }
        }
    }

    headers
}

/// Returns true if `a` dominates `b` in the dominator tree (i.e. `a` is an
/// ancestor of `b`, or `a == b`).
fn dominates(dom_tree: &DominatorTree, a: BlockId, b: BlockId) -> bool {
    let mut cursor = b;
    loop {
        if cursor == a {
            return true;
        }
        match dom_tree.idom(cursor) {
            Some(parent) => cursor = parent,
            None => return cursor == a,
        }
    }
}

/// Escape characters that are special inside DOT label strings.
fn dot_escape(s: &str) -> String {
    let mut out = String::with_capacity(s.len());
    for ch in s.chars() {
        match ch {
            '"' => out.push_str("\\\""),
            '\\' => out.push_str("\\\\"),
            '<' => out.push_str("\\<"),
            '>' => out.push_str("\\>"),
            '{' => out.push_str("\\{"),
            '}' => out.push_str("\\}"),
            '|' => out.push_str("\\|"),
            _ => out.push(ch),
        }
    }
    out
}

#[cfg(test)]
mod tests {
    use smallvec::smallvec;

    use unlace_ir::ssa::build_ssa;
    use unlace_ir::{BasicBlock, BlockId, Function, IrInsn, IrOp, Varnode};

    use super::*;

    fn ctrl_insn(op: IrOp, addr: u64) -> IrInsn {
        IrInsn::without_output(op, smallvec![], addr)
    }

    fn arith_insn(output: Varnode, inputs: &[Varnode], addr: u64) -> IrInsn {
        IrInsn::with_output(op_for_inputs(inputs.len()), output, SmallVec::from(inputs), addr)
    }

    /// Pick an opcode that accepts the given input count.
    fn op_for_inputs(n: usize) -> IrOp {
        match n {
            1 => IrOp::Copy,
            _ => IrOp::IntAdd,
        }
    }

    use smallvec::SmallVec;

    // --- Helper builders ---

    /// Linear: BB_0 -> BB_1 (fallthrough), BB_1 has RETURN.
    fn make_linear() -> SsaFunction {
        let r0 = Varnode::reg(0, 8);
        let r8 = Varnode::reg(8, 8);
        let c1 = Varnode::constant(1, 8);

        let mut func = Function::new("test_linear", BlockId(0), 0x1000);

        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(arith_insn(r0, &[r8, c1], 0x1000));

        let mut bb1 = BasicBlock::new(BlockId(1));
        bb1.insns.push(ctrl_insn(IrOp::Return, 0x1010));

        func.insert_block(bb0);
        func.insert_block(bb1);

        build_ssa(func)
    }

    /// Diamond: BB_0 (CBRANCH) -> BB_1 / BB_2 -> BB_3 (RETURN).
    fn make_diamond() -> SsaFunction {
        let r0 = Varnode::reg(0, 8);
        let r8 = Varnode::reg(8, 8);
        let c1 = Varnode::constant(1, 8);
        let c2 = Varnode::constant(2, 8);

        let mut func = Function::new("test_diamond", BlockId(0), 0x2000);

        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(arith_insn(r0, &[r8, c1], 0x2000));
        bb0.insns.push(ctrl_insn(IrOp::Cbranch, 0x2004));
        bb0.successors = smallvec![BlockId(1), BlockId(2)];

        let mut bb1 = BasicBlock::new(BlockId(1));
        bb1.insns.push(arith_insn(r0, &[r8, c1], 0x2010));
        bb1.insns.push(ctrl_insn(IrOp::Branch, 0x2014));
        bb1.successors = smallvec![BlockId(3)];

        let mut bb2 = BasicBlock::new(BlockId(2));
        bb2.insns.push(arith_insn(r0, &[r8, c2], 0x2020));
        bb2.insns.push(ctrl_insn(IrOp::Branch, 0x2024));
        bb2.successors = smallvec![BlockId(3)];

        let mut bb3 = BasicBlock::new(BlockId(3));
        bb3.insns.push(ctrl_insn(IrOp::Return, 0x2030));

        func.insert_block(bb0);
        func.insert_block(bb1);
        func.insert_block(bb2);
        func.insert_block(bb3);

        build_ssa(func)
    }

    /// Loop: BB_0 (CBRANCH) -> BB_1 (back to BB_0) / BB_2 (RETURN).
    fn make_loop() -> SsaFunction {
        let r0 = Varnode::reg(0, 8);
        let r8 = Varnode::reg(8, 8);
        let c1 = Varnode::constant(1, 8);

        let mut func = Function::new("test_loop", BlockId(0), 0x3000);

        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(arith_insn(r0, &[r8, c1], 0x3000));
        bb0.insns.push(ctrl_insn(IrOp::Cbranch, 0x3004));
        bb0.successors = smallvec![BlockId(1), BlockId(2)];

        let mut bb1 = BasicBlock::new(BlockId(1));
        bb1.insns.push(arith_insn(r0, &[r0, c1], 0x3010));
        bb1.insns.push(ctrl_insn(IrOp::Branch, 0x3014));
        bb1.successors = smallvec![BlockId(0)];

        let mut bb2 = BasicBlock::new(BlockId(2));
        bb2.insns.push(ctrl_insn(IrOp::Return, 0x3020));

        func.insert_block(bb0);
        func.insert_block(bb1);
        func.insert_block(bb2);

        build_ssa(func)
    }

    #[test]
    fn test_dot_basic() {
        let ssa = make_linear();
        let dot = emit_cfg_dot(&ssa);

        assert!(dot.starts_with("digraph CFG {"));
        assert!(dot.contains("BB_0"));
        assert!(dot.contains("BB_1"));
        // Entry block should be green.
        assert!(dot.contains("fillcolor=lightgreen"));
        // BB_1 has RETURN → should be red.
        assert!(dot.contains("fillcolor=lightcoral"));
        // Should end with closing brace.
        assert!(dot.trim_end().ends_with('}'));
    }

    #[test]
    fn test_dot_diamond() {
        let ssa = make_diamond();
        let dot = emit_cfg_dot(&ssa);

        // T/F edges from BB_0.
        assert!(dot.contains("\"T\""), "missing true-edge label");
        assert!(dot.contains("\"F\""), "missing false-edge label");
        // BB_3 is the return block.
        assert!(dot.contains("fillcolor=lightcoral"));
        // BB_0 is entry.
        assert!(dot.contains("fillcolor=lightgreen"));
    }

    #[test]
    fn test_dot_loop() {
        let ssa = make_loop();
        let dot = emit_cfg_dot(&ssa);

        // BB_0 is both entry AND loop header.  Entry takes precedence
        // in our coloring (green), but let's verify the loop header was
        // detected.
        let headers = find_loop_headers(&ssa.cfg, &ssa.dom_tree);
        assert!(headers.contains(&BlockId(0)), "BB_0 should be a loop header");

        // T/F edges present.
        assert!(dot.contains("\"T\""));
        assert!(dot.contains("\"F\""));
    }

    #[test]
    fn test_dot_renders() {
        // Skip if `dot` is not installed.
        let which = std::process::Command::new("which")
            .arg("dot")
            .output();
        match which {
            Ok(output) if output.status.success() => {}
            _ => {
                eprintln!("skipping test_dot_renders: graphviz `dot` not found");
                return;
            }
        }

        let ssa = make_diamond();
        let dot = emit_cfg_dot(&ssa);

        let mut child = std::process::Command::new("dot")
            .arg("-Tpng")
            .stdin(std::process::Stdio::piped())
            .stdout(std::process::Stdio::null())
            .stderr(std::process::Stdio::piped())
            .spawn()
            .expect("failed to spawn dot");

        {
            use std::io::Write;
            let stdin = child.stdin.as_mut().expect("no stdin");
            stdin.write_all(dot.as_bytes()).expect("write failed");
        }

        let status = child.wait().expect("wait failed");
        assert!(status.success(), "graphviz `dot` rejected output:\n{dot}");
    }

    #[test]
    fn test_dot_deterministic() {
        let ssa = make_diamond();
        let dot1 = emit_cfg_dot(&ssa);
        let dot2 = emit_cfg_dot(&ssa);
        assert_eq!(dot1, dot2, "emit_cfg_dot must be deterministic");
    }
}
