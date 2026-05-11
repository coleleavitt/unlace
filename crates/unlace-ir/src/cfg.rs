//! Control-flow graph construction from LIR functions.
//!
//! Builds a [`ControlFlowGraph`] from a [`Function`] by inspecting the last
//! instruction (terminator) of each [`BasicBlock`] and inferring edges.
//!
//! Synthetic "exit" and "unknown" sink blocks handle `RETURN` edges and
//! unresolved indirect jumps respectively.

use std::collections::BTreeMap;
use std::fmt;

use petgraph::Direction;
use petgraph::stable_graph::{NodeIndex, StableDiGraph};
use petgraph::visit::{EdgeRef, IntoEdgeReferences};

use crate::{BasicBlock, BlockId, Function, IrOp};

/// Describes the nature of a control-flow edge between two basic blocks.
#[derive(Copy, Clone, Debug, PartialEq, Eq, Hash, serde::Serialize, serde::Deserialize)]
pub enum EdgeKind {
    /// Unconditional branch to a fixed target.
    Unconditional,
    /// Conditional branch — taken when condition is true.
    ConditionalTrue,
    /// Conditional branch — taken when condition is false (fall-through side).
    ConditionalFalse,
    /// Implicit fall-through to the next sequential block.
    Fallthrough,
    /// Indirect jump with unresolved target.
    IndirectJump,
    /// Call edge to a target (may be direct or indirect).
    Call,
    /// Return edge to the synthetic exit block.
    Return,
}

impl fmt::Display for EdgeKind {
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {
        let label = match self {
            Self::Unconditional => "uncond",
            Self::ConditionalTrue => "true",
            Self::ConditionalFalse => "false",
            Self::Fallthrough => "fallthrough",
            Self::IndirectJump => "indirect",
            Self::Call => "call",
            Self::Return => "return",
        };
        f.write_str(label)
    }
}

/// A control-flow graph built from a [`Function`].
///
/// Wraps a `StableDiGraph<BlockId, EdgeKind>` with auxiliary maps for O(1)
/// lookup by [`BlockId`] and designated entry / exit / unknown-sink nodes.
#[derive(Clone, Debug, serde::Serialize, serde::Deserialize)]
pub struct ControlFlowGraph {
    graph: StableDiGraph<BlockId, EdgeKind>,
    /// Maps each `BlockId` to its petgraph `NodeIndex`.
    node_map: BTreeMap<BlockId, NodeIndex>,
    entry: BlockId,
    /// Synthetic exit block — target of all `RETURN` edges.
    exit: BlockId,
    /// Synthetic unknown sink — target of unresolved indirect jumps.
    unknown: BlockId,
}

impl ControlFlowGraph {
    /// The entry block of the function.
    pub fn entry_block(&self) -> BlockId {
        self.entry
    }

    /// The synthetic exit block (target of `RETURN` edges).
    pub fn exit_block(&self) -> BlockId {
        self.exit
    }

    /// The synthetic unknown sink (target of unresolved indirect jumps).
    pub fn unknown_block(&self) -> BlockId {
        self.unknown
    }

    /// Returns outgoing edges from the given block as `(target_block, edge_kind)`.
    pub fn edges_from(&self, block: BlockId) -> Vec<(BlockId, EdgeKind)> {
        let Some(&ni) = self.node_map.get(&block) else {
            return Vec::new();
        };
        self.graph
            .edges_directed(ni, Direction::Outgoing)
            .map(|e| {
                let target_ni = e.target();
                let target_id = self.graph[target_ni];
                (target_id, *e.weight())
            })
            .collect()
    }

    /// Returns incoming edges to the given block as `(source_block, edge_kind)`.
    pub fn edges_to(&self, block: BlockId) -> Vec<(BlockId, EdgeKind)> {
        let Some(&ni) = self.node_map.get(&block) else {
            return Vec::new();
        };
        self.graph
            .edges_directed(ni, Direction::Incoming)
            .map(|e| {
                let source_ni = e.source();
                let source_id = self.graph[source_ni];
                (source_id, *e.weight())
            })
            .collect()
    }

    /// Returns the number of real (non-synthetic) blocks.
    pub fn block_count(&self) -> usize {
        self.graph.node_count().saturating_sub(2)
    }

    /// Returns the total number of edges.
    pub fn edge_count(&self) -> usize {
        self.graph.edge_count()
    }

    /// A reference to the underlying petgraph for advanced algorithms.
    pub fn inner(&self) -> &StableDiGraph<BlockId, EdgeKind> {
        &self.graph
    }

    /// Returns the `NodeIndex` for a given `BlockId`, if present.
    pub fn node_index(&self, block: BlockId) -> Option<NodeIndex> {
        self.node_map.get(&block).copied()
    }

    /// Returns a reference to the `BlockId → NodeIndex` mapping.
    pub fn node_map(&self) -> &BTreeMap<BlockId, NodeIndex> {
        &self.node_map
    }

    /// Returns sorted predecessors (source blocks) of the given block.
    pub fn predecessors(&self, block: BlockId) -> Vec<BlockId> {
        let mut preds: Vec<BlockId> = self.edges_to(block).iter().map(|(s, _)| *s).collect();
        preds.sort();
        preds.dedup();
        preds
    }
}

/// Builds a [`ControlFlowGraph`] from a [`Function`] by inspecting terminators.
///
/// # Edge inference rules
///
/// | Terminator       | Edges produced                                             |
/// |------------------|------------------------------------------------------------|
/// | `BRANCH`         | Single `Unconditional` edge to first successor             |
/// | `CBRANCH`        | `ConditionalTrue` to first successor, `ConditionalFalse`   |
/// |                  | to second successor (or next sequential block)             |
/// | `BRANCHIND`      | `IndirectJump` per successor; if none, to unknown sink     |
/// | `RETURN`         | `Return` edge to synthetic exit block                      |
/// | `CALL`/`CALLIND` | `Call` edge to first successor + `Fallthrough` to next     |
/// | *(none)*         | `Fallthrough` to next sequential block                     |
pub fn build_cfg(func: &Function) -> ControlFlowGraph {
    let mut graph = StableDiGraph::<BlockId, EdgeKind>::new();
    let mut node_map = BTreeMap::new();

    let block_ids: Vec<BlockId> = func.blocks.keys().copied().collect();

    let max_id = block_ids.last().map_or(0, |b| b.0);
    let exit_id = BlockId(max_id + 1);
    let unknown_id = BlockId(max_id + 2);

    for &bid in &block_ids {
        let ni = graph.add_node(bid);
        node_map.insert(bid, ni);
    }

    let exit_ni = graph.add_node(exit_id);
    node_map.insert(exit_id, exit_ni);
    let unknown_ni = graph.add_node(unknown_id);
    node_map.insert(unknown_id, unknown_ni);

    let next_sequential = |bid: BlockId| -> Option<BlockId> {
        let pos = block_ids.binary_search(&bid).ok()?;
        block_ids.get(pos + 1).copied()
    };

    for &bid in &block_ids {
        let block = &func.blocks[&bid];
        let from_ni = node_map[&bid];

        let terminator_op = terminator_of(block);

        match terminator_op {
            Some(IrOp::Branch) => {
                if let Some(&target) = block.successors.first() {
                    if let Some(&to_ni) = node_map.get(&target) {
                        graph.add_edge(from_ni, to_ni, EdgeKind::Unconditional);
                    }
                } else if let Some(next) = next_sequential(bid) {
                    graph.add_edge(from_ni, node_map[&next], EdgeKind::Unconditional);
                }
            }
            Some(IrOp::Cbranch) => {
                let true_target = block
                    .successors
                    .first()
                    .copied()
                    .or_else(|| next_sequential(bid));
                let false_target = block
                    .successors
                    .get(1)
                    .copied()
                    .or_else(|| next_sequential(bid));

                if let Some(t) = true_target {
                    if let Some(&to_ni) = node_map.get(&t) {
                        graph.add_edge(from_ni, to_ni, EdgeKind::ConditionalTrue);
                    }
                }
                if let Some(f) = false_target {
                    if let Some(&to_ni) = node_map.get(&f) {
                        graph.add_edge(from_ni, to_ni, EdgeKind::ConditionalFalse);
                    }
                }
            }
            Some(IrOp::Branchind) => {
                if block.successors.is_empty() {
                    graph.add_edge(from_ni, unknown_ni, EdgeKind::IndirectJump);
                } else {
                    for &succ in &block.successors {
                        if let Some(&to_ni) = node_map.get(&succ) {
                            graph.add_edge(from_ni, to_ni, EdgeKind::IndirectJump);
                        }
                    }
                }
            }
            Some(IrOp::Return) => {
                graph.add_edge(from_ni, exit_ni, EdgeKind::Return);
            }
            Some(IrOp::Call | IrOp::Callind) => {
                if let Some(&target) = block.successors.first() {
                    if let Some(&to_ni) = node_map.get(&target) {
                        graph.add_edge(from_ni, to_ni, EdgeKind::Call);
                    }
                }
                if let Some(next) = next_sequential(bid) {
                    graph.add_edge(from_ni, node_map[&next], EdgeKind::Fallthrough);
                }
            }
            Some(_) | None => {
                if let Some(next) = next_sequential(bid) {
                    graph.add_edge(from_ni, node_map[&next], EdgeKind::Fallthrough);
                }
            }
        }
    }

    ControlFlowGraph {
        graph,
        node_map,
        entry: func.entry,
        exit: exit_id,
        unknown: unknown_id,
    }
}

/// Returns the terminator opcode of a block, if the last instruction is a
/// control-flow operation. `IrOp::Unimplemented` at the end is *not* treated
/// as a terminator — blocks ending in it fall through.
fn terminator_of(block: &BasicBlock) -> Option<IrOp> {
    let last = block.insns.last()?;
    match last.op {
        IrOp::Branch
        | IrOp::Cbranch
        | IrOp::Branchind
        | IrOp::Call
        | IrOp::Callind
        | IrOp::Return => Some(last.op),
        _ => None,
    }
}

/// Produces a Graphviz DOT string for the given [`ControlFlowGraph`].
///
/// Nodes are labeled with their `BlockId` display form (e.g., `BB_0`). Edges
/// carry their [`EdgeKind`] as a label and are styled per kind.
pub fn dot_export(cfg: &ControlFlowGraph) -> String {
    use std::fmt::Write;

    let mut out = String::with_capacity(512);
    // `writeln!` to `String` is infallible; ignore the result.
    let _ = writeln!(out, "digraph CFG {{");
    let _ = writeln!(out, "    rankdir=TB;");
    let _ = writeln!(out, "    node [shape=box, fontname=\"monospace\"];");
    let _ = writeln!(out, "    edge [fontname=\"monospace\", fontsize=10];");

    for (&bid, &ni) in &cfg.node_map {
        let shape = if bid == cfg.exit {
            "doubleoctagon"
        } else if bid == cfg.unknown {
            "octagon"
        } else if bid == cfg.entry {
            "Mrecord"
        } else {
            "box"
        };
        let _ = writeln!(
            out,
            "    {} [label=\"{}\", shape={}];",
            ni.index(),
            bid,
            shape
        );
    }

    for edge in cfg.graph.edge_references() {
        let kind = edge.weight();
        let style = match kind {
            EdgeKind::Unconditional => "style=bold",
            EdgeKind::ConditionalTrue => "color=green",
            EdgeKind::ConditionalFalse => "color=red",
            EdgeKind::Fallthrough => "style=dashed",
            EdgeKind::IndirectJump => "style=dotted, color=orange",
            EdgeKind::Call => "color=blue",
            EdgeKind::Return => "color=purple",
        };
        let _ = writeln!(
            out,
            "    {} -> {} [label=\"{}\", {}];",
            edge.source().index(),
            edge.target().index(),
            kind,
            style,
        );
    }

    let _ = writeln!(out, "}}");
    out
}

#[cfg(test)]
mod tests {
    use smallvec::smallvec;

    use super::*;
    use crate::{IrInsn, IrOp, Varnode};

    /// Helper: build a minimal insn with no output.
    fn ctrl_insn(op: IrOp, addr: u64) -> IrInsn {
        IrInsn::without_output(op, smallvec![], addr)
    }

    /// Helper: build a non-terminator insn (INT_ADD).
    fn arith_insn(addr: u64) -> IrInsn {
        IrInsn::with_output(
            IrOp::IntAdd,
            Varnode::reg(0, 8),
            smallvec![Varnode::reg(8, 8), Varnode::reg(16, 8)],
            addr,
        )
    }

    /// Creates: BB_0 (no terminator) -> BB_1 (no terminator)
    fn make_test_function_linear() -> Function {
        let mut func = Function::new("test_linear", BlockId(0), 0x1000);

        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(arith_insn(0x1000));

        let mut bb1 = BasicBlock::new(BlockId(1));
        bb1.insns.push(arith_insn(0x1010));

        func.insert_block(bb0);
        func.insert_block(bb1);
        func
    }

    /// Creates a diamond:
    ///   BB_0 (CBRANCH) -> true: BB_1, false: BB_2
    ///   BB_1 (BRANCH) -> BB_3
    ///   BB_2 (BRANCH) -> BB_3
    ///   BB_3 (RETURN)
    fn make_test_function_diamond() -> Function {
        let mut func = Function::new("test_diamond", BlockId(0), 0x2000);

        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(arith_insn(0x2000));
        bb0.insns.push(ctrl_insn(IrOp::Cbranch, 0x2004));
        bb0.successors = smallvec![BlockId(1), BlockId(2)];

        let mut bb1 = BasicBlock::new(BlockId(1));
        bb1.insns.push(arith_insn(0x2010));
        bb1.insns.push(ctrl_insn(IrOp::Branch, 0x2014));
        bb1.successors = smallvec![BlockId(3)];

        let mut bb2 = BasicBlock::new(BlockId(2));
        bb2.insns.push(arith_insn(0x2020));
        bb2.insns.push(ctrl_insn(IrOp::Branch, 0x2024));
        bb2.successors = smallvec![BlockId(3)];

        let mut bb3 = BasicBlock::new(BlockId(3));
        bb3.insns.push(arith_insn(0x2030));
        bb3.insns.push(ctrl_insn(IrOp::Return, 0x2034));

        func.insert_block(bb0);
        func.insert_block(bb1);
        func.insert_block(bb2);
        func.insert_block(bb3);
        func
    }

    /// Creates a loop with a back-edge:
    ///   BB_0 (CBRANCH) -> true: BB_1, false: BB_2
    ///   BB_1 (BRANCH) -> BB_0   ← back edge
    ///   BB_2 (RETURN)
    fn make_test_function_loop() -> Function {
        let mut func = Function::new("test_loop", BlockId(0), 0x3000);

        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(arith_insn(0x3000));
        bb0.insns.push(ctrl_insn(IrOp::Cbranch, 0x3004));
        bb0.successors = smallvec![BlockId(1), BlockId(2)];

        let mut bb1 = BasicBlock::new(BlockId(1));
        bb1.insns.push(arith_insn(0x3010));
        bb1.insns.push(ctrl_insn(IrOp::Branch, 0x3014));
        bb1.successors = smallvec![BlockId(0)];

        let mut bb2 = BasicBlock::new(BlockId(2));
        bb2.insns.push(ctrl_insn(IrOp::Return, 0x3020));

        func.insert_block(bb0);
        func.insert_block(bb1);
        func.insert_block(bb2);
        func
    }

    /// Creates switch-like: BB_0 (BRANCHIND) -> BB_1, BB_2, BB_3
    fn make_test_function_switch() -> Function {
        let mut func = Function::new("test_switch", BlockId(0), 0x4000);

        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(ctrl_insn(IrOp::Branchind, 0x4000));
        bb0.successors = smallvec![BlockId(1), BlockId(2), BlockId(3)];

        let mut bb1 = BasicBlock::new(BlockId(1));
        bb1.insns.push(ctrl_insn(IrOp::Return, 0x4010));

        let mut bb2 = BasicBlock::new(BlockId(2));
        bb2.insns.push(ctrl_insn(IrOp::Return, 0x4020));

        let mut bb3 = BasicBlock::new(BlockId(3));
        bb3.insns.push(ctrl_insn(IrOp::Return, 0x4030));

        func.insert_block(bb0);
        func.insert_block(bb1);
        func.insert_block(bb2);
        func.insert_block(bb3);
        func
    }

    #[test]
    fn test_linear_cfg() {
        let func = make_test_function_linear();
        let cfg = build_cfg(&func);

        assert_eq!(cfg.entry_block(), BlockId(0));
        assert_eq!(cfg.block_count(), 2);

        let edges0 = cfg.edges_from(BlockId(0));
        assert_eq!(edges0.len(), 1);
        assert_eq!(edges0[0], (BlockId(1), EdgeKind::Fallthrough));

        let edges1 = cfg.edges_from(BlockId(1));
        assert!(edges1.is_empty());
    }

    #[test]
    fn test_diamond_cfg() {
        let func = make_test_function_diamond();
        let cfg = build_cfg(&func);

        assert_eq!(cfg.entry_block(), BlockId(0));
        assert_eq!(cfg.block_count(), 4);

        let edges0 = cfg.edges_from(BlockId(0));
        assert_eq!(edges0.len(), 2);
        assert!(
            edges0
                .iter()
                .any(|(t, k)| *t == BlockId(1) && *k == EdgeKind::ConditionalTrue)
        );
        assert!(
            edges0
                .iter()
                .any(|(t, k)| *t == BlockId(2) && *k == EdgeKind::ConditionalFalse)
        );

        let edges1 = cfg.edges_from(BlockId(1));
        assert_eq!(edges1.len(), 1);
        assert_eq!(edges1[0], (BlockId(3), EdgeKind::Unconditional));

        let edges2 = cfg.edges_from(BlockId(2));
        assert_eq!(edges2.len(), 1);
        assert_eq!(edges2[0], (BlockId(3), EdgeKind::Unconditional));

        let edges3 = cfg.edges_from(BlockId(3));
        assert_eq!(edges3.len(), 1);
        assert_eq!(edges3[0].1, EdgeKind::Return);
        assert_eq!(edges3[0].0, cfg.exit_block());
    }

    #[test]
    fn test_loop_cfg() {
        let func = make_test_function_loop();
        let cfg = build_cfg(&func);

        assert_eq!(cfg.entry_block(), BlockId(0));

        let edges0 = cfg.edges_from(BlockId(0));
        assert_eq!(edges0.len(), 2);
        assert!(
            edges0
                .iter()
                .any(|(t, k)| *t == BlockId(1) && *k == EdgeKind::ConditionalTrue)
        );
        assert!(
            edges0
                .iter()
                .any(|(t, k)| *t == BlockId(2) && *k == EdgeKind::ConditionalFalse)
        );

        let edges1 = cfg.edges_from(BlockId(1));
        assert_eq!(edges1.len(), 1);
        assert_eq!(edges1[0], (BlockId(0), EdgeKind::Unconditional));

        let edges2 = cfg.edges_from(BlockId(2));
        assert_eq!(edges2.len(), 1);
        assert_eq!(edges2[0].1, EdgeKind::Return);
    }

    #[test]
    fn test_switch_cfg() {
        let func = make_test_function_switch();
        let cfg = build_cfg(&func);

        let edges0 = cfg.edges_from(BlockId(0));
        assert_eq!(edges0.len(), 3);
        assert!(edges0.iter().all(|(_, k)| *k == EdgeKind::IndirectJump));

        let targets: Vec<BlockId> = edges0.iter().map(|(t, _)| *t).collect();
        assert!(targets.contains(&BlockId(1)));
        assert!(targets.contains(&BlockId(2)));
        assert!(targets.contains(&BlockId(3)));
    }

    #[test]
    fn test_branchind_no_successors() {
        let mut func = Function::new("test_branchind_unknown", BlockId(0), 0x5000);

        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(ctrl_insn(IrOp::Branchind, 0x5000));
        func.insert_block(bb0);

        let cfg = build_cfg(&func);
        let edges0 = cfg.edges_from(BlockId(0));
        assert_eq!(edges0.len(), 1);
        assert_eq!(edges0[0], (cfg.unknown_block(), EdgeKind::IndirectJump));
    }

    #[test]
    fn test_call_fallthrough() {
        let mut func = Function::new("test_call", BlockId(0), 0x6000);

        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(ctrl_insn(IrOp::Call, 0x6000));
        bb0.successors = smallvec![BlockId(2)];

        let mut bb1 = BasicBlock::new(BlockId(1));
        bb1.insns.push(ctrl_insn(IrOp::Return, 0x6010));

        let mut bb2 = BasicBlock::new(BlockId(2));
        bb2.insns.push(ctrl_insn(IrOp::Return, 0x6020));

        func.insert_block(bb0);
        func.insert_block(bb1);
        func.insert_block(bb2);

        let cfg = build_cfg(&func);
        let edges0 = cfg.edges_from(BlockId(0));
        assert_eq!(edges0.len(), 2);
        assert!(
            edges0
                .iter()
                .any(|(t, k)| *t == BlockId(2) && *k == EdgeKind::Call)
        );
        assert!(
            edges0
                .iter()
                .any(|(t, k)| *t == BlockId(1) && *k == EdgeKind::Fallthrough)
        );
    }

    #[test]
    fn test_empty_function() {
        let func = Function::new("test_empty", BlockId(0), 0x7000);
        let cfg = build_cfg(&func);
        assert_eq!(cfg.block_count(), 0);
        assert_eq!(cfg.edge_count(), 0);
    }

    #[test]
    fn test_edges_to() {
        let func = make_test_function_diamond();
        let cfg = build_cfg(&func);

        let incoming = cfg.edges_to(BlockId(3));
        assert_eq!(incoming.len(), 2);
        let sources: Vec<BlockId> = incoming.iter().map(|(s, _)| *s).collect();
        assert!(sources.contains(&BlockId(1)));
        assert!(sources.contains(&BlockId(2)));
    }

    #[test]
    fn test_node_index_lookup() {
        let func = make_test_function_linear();
        let cfg = build_cfg(&func);

        assert!(cfg.node_index(BlockId(0)).is_some());
        assert!(cfg.node_index(BlockId(1)).is_some());
        assert!(cfg.node_index(BlockId(99)).is_none());
    }

    #[test]
    fn test_dot_export() {
        let func = make_test_function_diamond();
        let cfg = build_cfg(&func);
        let dot = dot_export(&cfg);

        assert!(dot.starts_with("digraph"));
        assert!(dot.contains("BB_0"));
        assert!(dot.contains("BB_1"));
        assert!(dot.contains("BB_2"));
        assert!(dot.contains("BB_3"));
        assert!(dot.contains("true"));
        assert!(dot.contains("false"));
        assert!(dot.contains("return"));

        // Validate with graphviz `dot` if installed.
        use std::process::Command;
        let child = Command::new("dot")
            .arg("-Tpng")
            .stdin(std::process::Stdio::piped())
            .stdout(std::process::Stdio::null())
            .stderr(std::process::Stdio::null())
            .spawn();
        if let Ok(mut child) = child {
            use std::io::Write;
            if let Some(ref mut stdin) = child.stdin {
                let _ = stdin.write_all(dot.as_bytes());
            }
            if let Ok(status) = child.wait() {
                assert!(
                    status.success(),
                    "graphviz `dot` rejected our output:\n{dot}"
                );
            }
        }
    }

    #[test]
    fn test_dot_export_linear() {
        let func = make_test_function_linear();
        let cfg = build_cfg(&func);
        let dot = dot_export(&cfg);

        assert!(dot.starts_with("digraph"));
        assert!(dot.contains("fallthrough"));
    }

    #[test]
    fn test_synthetic_block_ids() {
        let func = make_test_function_diamond();
        let cfg = build_cfg(&func);

        assert!(cfg.exit_block().0 > 3);
        assert!(cfg.unknown_block().0 > 3);
        assert_ne!(cfg.exit_block(), cfg.unknown_block());
    }
}
