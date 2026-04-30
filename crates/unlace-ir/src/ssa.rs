//! SSA construction via Cytron et al. 1991.
//!
//! Builds a dominator tree, computes dominance frontiers, inserts phi
//! functions (MULTIEQUAL), and performs variable renaming with monotonic
//! SSA version numbers.

use std::collections::{BTreeMap, BTreeSet, VecDeque};

use petgraph::algo::dominators::simple_fast;
use petgraph::stable_graph::StableDiGraph;

use crate::cfg::{build_cfg, ControlFlowGraph};
use crate::{BlockId, Function, Varnode};

#[derive(Copy, Clone, Debug, PartialEq, Eq, Hash, PartialOrd, Ord)]
pub struct SsaVarnode {
    pub base: Varnode,
    pub version: u32,
}

/// A phi (MULTIEQUAL) node at a block entry.
#[derive(Clone, Debug, PartialEq, Eq)]
pub struct PhiNode {
    pub output: SsaVarnode,
    pub inputs: Vec<(BlockId, SsaVarnode)>,
}

/// Wrapper around the petgraph dominator tree result.
pub struct DominatorTree {
    idom: BTreeMap<BlockId, BlockId>,
    children: BTreeMap<BlockId, Vec<BlockId>>,
    root: BlockId,
}

impl DominatorTree {
    pub fn new(
        idom: BTreeMap<BlockId, BlockId>,
        children: BTreeMap<BlockId, Vec<BlockId>>,
        root: BlockId,
    ) -> Self {
        Self { idom, children, root }
    }

    pub fn root(&self) -> BlockId {
        self.root
    }

    pub fn idom(&self, block: BlockId) -> Option<BlockId> {
        self.idom.get(&block).copied()
    }

    pub fn children(&self, block: BlockId) -> &[BlockId] {
        self.children.get(&block).map_or(&[], |v| v.as_slice())
    }
}

/// Detected calling convention for a function.
///
/// Determined by [`CallingConventionDetectPass`](https://docs.rs/unlace-passes)
/// examining which argument registers are read before being written in the
/// function entry block.
#[derive(Copy, Clone, Debug, PartialEq, Eq, Hash)]
pub enum CallingConvention {
    /// System V AMD64 ABI: args in RDI, RSI, RDX, RCX, R8, R9; return in RAX.
    SystemV,
    /// Microsoft x64 ABI: args in RCX, RDX, R8, R9; return in RAX; 32-byte shadow space.
    MicrosoftX64,
    /// AArch64 (AAPCS64): args in X0–X7; return in X0.
    AArch64,
    /// Could not determine (insufficient evidence or unsupported architecture).
    Unknown,
}

impl std::fmt::Display for CallingConvention {
    fn fmt(&self, f: &mut std::fmt::Formatter<'_>) -> std::fmt::Result {
        match self {
            Self::SystemV => f.write_str("System V AMD64"),
            Self::MicrosoftX64 => f.write_str("Microsoft x64"),
            Self::AArch64 => f.write_str("AArch64 AAPCS64"),
            Self::Unknown => f.write_str("unknown"),
        }
    }
}

/// Inferred primitive type for an SSA varnode.
///
/// The type lattice starts at [`Unknown`](Self::Unknown) and is refined by
/// [`TypeInferPass`](https://docs.rs/unlace-passes) as it walks instructions.
/// Width is in **bytes** (matching [`Varnode::size`](crate::Varnode::size)).
#[derive(Copy, Clone, Debug, PartialEq, Eq, Hash, PartialOrd, Ord)]
pub enum PrimitiveType {
    /// No type information yet — joins with anything to become that type.
    Unknown,
    /// Boolean (1 byte, value in {0, 1}).
    Bool,
    /// Integer of the given width in bytes (signedness ambiguous in MVP).
    Int(u8),
    /// Unsigned integer of the given width in bytes (used for zero-extend, unsigned div, etc.).
    UnsignedInt(u8),
    /// IEEE-754 binary32 (4 bytes).
    Float,
    /// IEEE-754 binary64 (8 bytes).
    Double,
    /// Pointer (size = pointer width, typically 8 on 64-bit targets).
    Ptr,
}

impl PrimitiveType {
    /// Join two types in the lattice. `Unknown` yields the other; two equal
    /// concrete types stay; mismatched concrete types collapse to `Unknown`
    /// (conflict — recorded but not blocking).
    pub fn join(self, other: Self) -> Self {
        match (self, other) {
            (Self::Unknown, t) | (t, Self::Unknown) => t,
            (a, b) if a == b => a,
            // Int and UnsignedInt of same width — keep Int (less specific).
            (Self::Int(w), Self::UnsignedInt(w2)) | (Self::UnsignedInt(w2), Self::Int(w))
                if w == w2 =>
            {
                Self::Int(w)
            }
            // Conflict: collapse back to Unknown.
            _ => Self::Unknown,
        }
    }
}

impl std::fmt::Display for PrimitiveType {
    fn fmt(&self, f: &mut std::fmt::Formatter<'_>) -> std::fmt::Result {
        match self {
            Self::Unknown => f.write_str("unknown"),
            Self::Bool => f.write_str("bool"),
            Self::Int(w) => write!(f, "i{}", w * 8),
            Self::UnsignedInt(w) => write!(f, "u{}", w * 8),
            Self::Float => f.write_str("f32"),
            Self::Double => f.write_str("f64"),
            Self::Ptr => f.write_str("ptr"),
        }
    }
}

/// A recovered stack variable at a fixed RSP-relative offset.
#[derive(Clone, Debug, PartialEq, Eq)]
pub struct StackVar {
    /// RSP-relative offset (negative = below entry RSP, e.g. -8 for first push).
    pub offset: i64,
    /// Human-readable name (e.g. `local_8`, `local_10`).
    pub name: String,
    /// Inferred primitive type from accesses.
    pub ty: PrimitiveType,
    /// SSA varnodes that access this stack slot (loads and stores).
    pub accesses: Vec<SsaVarnode>,
}

#[derive(Clone, Debug, PartialEq, Eq, PartialOrd, Ord, Hash)]
pub enum PanicKind {
    Panic,
    BoundsCheck,
    UnwrapFailed,
    ExpectFailed,
    Abort,
}

impl std::fmt::Display for PanicKind {
    fn fmt(&self, f: &mut std::fmt::Formatter<'_>) -> std::fmt::Result {
        match self {
            Self::Panic => f.write_str("panic"),
            Self::BoundsCheck => f.write_str("index out of bounds"),
            Self::UnwrapFailed => f.write_str("unwrap on Err/None"),
            Self::ExpectFailed => f.write_str("expect failed"),
            Self::Abort => f.write_str("abort"),
        }
    }
}

/// Metadata for an indirect call resolved as a Rust trait object vtable dispatch.
///
/// Rust trait objects are fat pointers `(data_ptr, vtable_ptr)`. The vtable
/// is a struct `{ drop_fn, size, align, method_0, method_1, ... }`. A vtable
/// dispatch loads the vtable pointer from `[obj + 8]`, then loads a method
/// pointer from `[vtable + offset]`, then calls it indirectly.
#[derive(Clone, Debug, PartialEq, Eq)]
pub struct VtableCallInfo {
    /// The SSA varnode holding the base of the fat pointer (the trait object).
    pub base_varnode: SsaVarnode,
    /// Byte offset into the vtable from which the method pointer was loaded.
    pub vtable_offset: u64,
    /// Vtable slot index (`vtable_offset / 8`).
    ///
    /// - Slot 0: `drop_in_place` (destructor)
    /// - Slot 1: `size`
    /// - Slot 2: `align`
    /// - Slot 3+: trait methods in declaration order
    pub slot_index: usize,
}

pub struct SsaFunction {
    pub function: Function,
    pub cfg: ControlFlowGraph,
    pub dom_tree: DominatorTree,
    /// Post-dominator tree computed from the reversed CFG.
    /// Used to find join points (convergence) for if/else and switch constructs.
    pub post_dom_tree: Option<DominatorTree>,
    pub phi_map: BTreeMap<BlockId, Vec<PhiNode>>,
    pub var_map: BTreeMap<(BlockId, usize, VarnodeSlot), SsaVarnode>,
    pub var_types: BTreeMap<SsaVarnode, PrimitiveType>,
    pub calling_convention: CallingConvention,
    /// Recovered stack variables keyed by RSP-relative offset.
    pub stack_vars: BTreeMap<i64, StackVar>,
    /// SSA varnodes whose defining instruction can be folded inline as a
    /// sub-expression rather than emitted as a statement.
    /// Populated by [`ExpressionPass`](https://docs.rs/unlace-passes).
    pub foldable_exprs: BTreeSet<SsaVarnode>,
    /// Whether this function never returns to its caller (calls `exit`,
    /// `abort`, `panic`, etc.).
    /// Populated by [`NoreturnDetectPass`](https://docs.rs/unlace-passes).
    pub noreturn: bool,
    /// Blocks whose terminator is a tail call (unconditional branch to an
    /// address outside the function). Maps `BlockId → target address`.
    /// Populated by [`TailCallDetectPass`](https://docs.rs/unlace-passes).
    pub tail_call_map: BTreeMap<BlockId, u64>,
    /// Canonical C variable names after SSA version merging.
    ///
    /// Multiple `SsaVarnode`s sharing the same base [`Varnode`] map to the
    /// same name. Populated by `VariableMergePass`.
    pub merged_names: BTreeMap<SsaVarnode, String>,
    pub enum_discriminants: Vec<EnumDiscriminant>,
    pub panic_sites: BTreeMap<(BlockId, usize), PanicKind>,
    /// Indirect calls resolved as Rust trait object vtable dispatches.
    /// Keyed by `(BlockId, insn_index)` of the `CALLIND` instruction.
    /// Populated by [`RustVtablePass`](https://docs.rs/unlace-passes).
    pub vtable_calls: BTreeMap<(BlockId, usize), VtableCallInfo>,
    /// Inferred function parameters from calling convention register usage.
    /// Each entry is `(name, type)` — e.g. `("a1", PrimitiveType::Int(8))`.
    /// Populated by [`ParamInferPass`](https://docs.rs/unlace-passes).
    pub inferred_params: Vec<(String, PrimitiveType)>,
    /// Inferred return type from RETURN instruction analysis.
    /// Populated by [`ReturnTypeInferPass`](https://docs.rs/unlace-passes).
    pub inferred_return_type: PrimitiveType,
    /// Instructions identified as prologue/epilogue frame setup code.
    /// Keyed by `(BlockId, insn_index)`. Populated by
    /// [`PrologueElimPass`](https://docs.rs/unlace-passes).
    pub frame_setup_insns: BTreeSet<(BlockId, usize)>,
}

#[derive(Clone, Debug, PartialEq, Eq)]
pub struct EnumDiscriminant {
    pub load_sv: SsaVarnode,
    pub load_loc: (BlockId, usize),
    pub variants: BTreeMap<u64, String>,
    pub comparison_locs: Vec<(BlockId, usize)>,
}

#[derive(Clone, Debug, PartialEq, Eq, PartialOrd, Ord, Hash)]
pub enum VarnodeSlot {
    Output,
    Input(usize),
}

pub fn build_ssa(func: Function) -> SsaFunction {
    let cfg = build_cfg(&func);
    let dom_tree = build_dominator_tree(&cfg);
    let post_dom_tree = build_post_dominator_tree(&cfg, &func);
    let df = compute_dominance_frontiers(&cfg, &dom_tree);

    let (defs_per_var, all_blocks) = collect_defs(&func);

    let phi_locations = place_phis(&defs_per_var, &df, &all_blocks);

    let (phi_map, var_map) = rename_variables(
        &func,
        &cfg,
        &dom_tree,
        &phi_locations,
    );

    SsaFunction {
        function: func,
        cfg,
        dom_tree,
        post_dom_tree: Some(post_dom_tree),
        phi_map,
        var_map,
        var_types: BTreeMap::new(),
        calling_convention: CallingConvention::Unknown,
        stack_vars: BTreeMap::new(),
        foldable_exprs: BTreeSet::new(),
        noreturn: false,
        tail_call_map: BTreeMap::new(),
        merged_names: BTreeMap::new(),
        enum_discriminants: Vec::new(),
        panic_sites: BTreeMap::new(),
        vtable_calls: BTreeMap::new(),
        inferred_params: Vec::new(),
        inferred_return_type: PrimitiveType::Unknown,
        frame_setup_insns: BTreeSet::new(),
    }
}

fn build_dominator_tree(cfg: &ControlFlowGraph) -> DominatorTree {
    let entry = cfg.entry_block();
    let Some(entry_ni) = cfg.node_index(entry) else {
        return DominatorTree {
            idom: BTreeMap::new(),
            children: BTreeMap::new(),
            root: entry,
        };
    };

    let dominators = simple_fast(cfg.inner(), entry_ni);

    let mut idom = BTreeMap::new();
    let mut children: BTreeMap<BlockId, Vec<BlockId>> = BTreeMap::new();

    for (&bid, &ni) in cfg.node_map() {
        if bid == entry {
            continue;
        }
        if let Some(dom_ni) = dominators.immediate_dominator(ni) {
            let dom_bid = cfg.inner()[dom_ni];
            idom.insert(bid, dom_bid);
            children.entry(dom_bid).or_default().push(bid);
        }
    }

    for children_list in children.values_mut() {
        children_list.sort();
    }

    DominatorTree { idom, children, root: entry }
}

/// Build a post-dominator tree by reversing the CFG and running the
/// dominator algorithm with the synthetic exit node as root.
pub fn build_post_dominator_tree(cfg: &ControlFlowGraph, _func: &Function) -> DominatorTree {
    let exit_bid = cfg.exit_block();
    let unknown_bid = cfg.unknown_block();

    let mut rev_graph = StableDiGraph::<BlockId, ()>::new();
    let mut rev_node_map: BTreeMap<BlockId, petgraph::stable_graph::NodeIndex> = BTreeMap::new();

    for &bid in cfg.node_map().keys() {
        let ni = rev_graph.add_node(bid);
        rev_node_map.insert(bid, ni);
    }

    for (&bid, &_ni) in cfg.node_map() {
        if bid == unknown_bid {
            continue;
        }
        for (target, _kind) in cfg.edges_from(bid) {
            if target == unknown_bid {
                continue;
            }
            if let (Some(&from_ni), Some(&to_ni)) =
                (rev_node_map.get(&target), rev_node_map.get(&bid))
            {
                rev_graph.add_edge(from_ni, to_ni, ());
            }
        }
    }

    // Dead-end blocks (no successors except synthetic) implicitly exit.
    for (&bid, &_ni) in cfg.node_map() {
        if bid == exit_bid || bid == unknown_bid {
            continue;
        }
        let has_real_succ = cfg
            .edges_from(bid)
            .iter()
            .any(|(t, _)| *t != unknown_bid);
        if !has_real_succ {
            if let (Some(&exit_ni), Some(&bid_ni)) =
                (rev_node_map.get(&exit_bid), rev_node_map.get(&bid))
            {
                rev_graph.add_edge(exit_ni, bid_ni, ());
            }
        }
    }

    let Some(&exit_ni) = rev_node_map.get(&exit_bid) else {
        return DominatorTree {
            idom: BTreeMap::new(),
            children: BTreeMap::new(),
            root: exit_bid,
        };
    };

    let dominators = simple_fast(&rev_graph, exit_ni);

    let mut idom = BTreeMap::new();
    let mut children: BTreeMap<BlockId, Vec<BlockId>> = BTreeMap::new();

    for (&bid, &ni) in &rev_node_map {
        if bid == exit_bid {
            continue;
        }
        if let Some(dom_ni) = dominators.immediate_dominator(ni) {
            let dom_bid = rev_graph[dom_ni];
            idom.insert(bid, dom_bid);
            children.entry(dom_bid).or_default().push(bid);
        }
    }

    for children_list in children.values_mut() {
        children_list.sort();
    }

    DominatorTree { idom, children, root: exit_bid }
}

/// Cytron et al. 1991, Section 4.2: for each CFG edge (P → X),
/// walk P up the dominator tree to idom(X), adding X to DF(node)
/// at each step.
fn compute_dominance_frontiers(
    cfg: &ControlFlowGraph,
    dom_tree: &DominatorTree,
) -> BTreeMap<BlockId, BTreeSet<BlockId>> {
    let mut df: BTreeMap<BlockId, BTreeSet<BlockId>> = BTreeMap::new();

    let exit = cfg.exit_block();
    let unknown = cfg.unknown_block();

    for (&bid, &_ni) in cfg.node_map() {
        if bid == exit || bid == unknown {
            continue;
        }

        let preds = cfg.predecessors(bid);

        let idom_bid = dom_tree.idom(bid);

        for pred in preds {
            if pred == exit || pred == unknown {
                continue;
            }
            let mut runner = pred;
            while Some(runner) != idom_bid {
                df.entry(runner).or_default().insert(bid);
                match dom_tree.idom(runner) {
                    Some(parent) => runner = parent,
                    None => break,
                }
            }
        }
    }

    df
}

fn collect_defs(func: &Function) -> (BTreeMap<Varnode, BTreeSet<BlockId>>, Vec<BlockId>) {
    let mut defs: BTreeMap<Varnode, BTreeSet<BlockId>> = BTreeMap::new();
    let mut all_blocks = Vec::new();

    for (&bid, block) in &func.blocks {
        all_blocks.push(bid);
        for insn in &block.insns {
            if let Some(output) = insn.output {
                defs.entry(output).or_default().insert(bid);
            }
        }
    }

    (defs, all_blocks)
}

fn place_phis(
    defs_per_var: &BTreeMap<Varnode, BTreeSet<BlockId>>,
    df: &BTreeMap<BlockId, BTreeSet<BlockId>>,
    _all_blocks: &[BlockId],
) -> BTreeMap<BlockId, BTreeSet<Varnode>> {
    let mut phi_sites: BTreeMap<BlockId, BTreeSet<Varnode>> = BTreeMap::new();

    for (var, def_blocks) in defs_per_var {
        let mut has_phi: BTreeSet<BlockId> = BTreeSet::new();
        let mut worklist: VecDeque<BlockId> = def_blocks.iter().copied().collect();

        while let Some(block) = worklist.pop_front() {
            let empty = BTreeSet::new();
            let frontier = df.get(&block).unwrap_or(&empty);
            for &df_block in frontier {
                if has_phi.insert(df_block) {
                    phi_sites.entry(df_block).or_default().insert(*var);
                    worklist.push_back(df_block);
                }
            }
        }
    }

    phi_sites
}

fn rename_variables(
    func: &Function,
    cfg: &ControlFlowGraph,
    dom_tree: &DominatorTree,
    phi_locations: &BTreeMap<BlockId, BTreeSet<Varnode>>,
) -> (
    BTreeMap<BlockId, Vec<PhiNode>>,
    BTreeMap<(BlockId, usize, VarnodeSlot), SsaVarnode>,
) {
    let mut version_counter: BTreeMap<Varnode, u32> = BTreeMap::new();
    let mut var_stack: BTreeMap<Varnode, Vec<u32>> = BTreeMap::new();
    let mut phi_map: BTreeMap<BlockId, Vec<PhiNode>> = BTreeMap::new();
    let mut var_map: BTreeMap<(BlockId, usize, VarnodeSlot), SsaVarnode> = BTreeMap::new();

    fn new_version(
        base: Varnode,
        counter: &mut BTreeMap<Varnode, u32>,
        stack: &mut BTreeMap<Varnode, Vec<u32>>,
    ) -> u32 {
        let ver = counter.entry(base).or_insert(0);
        let v = *ver;
        *ver += 1;
        stack.entry(base).or_default().push(v);
        v
    }

    fn current_version(base: Varnode, stack: &BTreeMap<Varnode, Vec<u32>>) -> u32 {
        stack
            .get(&base)
            .and_then(|s| s.last().copied())
            .unwrap_or(0)
    }

    let mut work_stack: Vec<(BlockId, bool)> = vec![(dom_tree.root(), false)];
    let mut push_counts: BTreeMap<BlockId, Vec<(Varnode, usize)>> = BTreeMap::new();

    for (bid, vars) in phi_locations {
        let phis: Vec<PhiNode> = vars
            .iter()
            .map(|&var| PhiNode {
                output: SsaVarnode { base: var, version: 0 },
                inputs: Vec::new(),
            })
            .collect();
        phi_map.insert(*bid, phis);
    }

    while let Some((bid, is_cleanup)) = work_stack.pop() {
        if is_cleanup {
            if let Some(counts) = push_counts.remove(&bid) {
                for (var, count) in counts {
                    if let Some(stack) = var_stack.get_mut(&var) {
                        let new_len = stack.len().saturating_sub(count);
                        stack.truncate(new_len);
                    }
                }
            }
            continue;
        }

        work_stack.push((bid, true));

        let mut pushed: Vec<(Varnode, usize)> = Vec::new();

        if let Some(phis) = phi_map.get_mut(&bid) {
            for phi in phis.iter_mut() {
                let ver = new_version(phi.output.base, &mut version_counter, &mut var_stack);
                track_push(&mut pushed, phi.output.base);
                phi.output.version = ver;
            }
        }

        if let Some(block) = func.blocks.get(&bid) {
            for (i, insn) in block.insns.iter().enumerate() {
                for (idx, input) in insn.inputs.iter().enumerate() {
                    if input.space == crate::SpaceId::Const {
                        continue;
                    }
                    let ver = current_version(*input, &var_stack);
                    var_map.insert(
                        (bid, i, VarnodeSlot::Input(idx)),
                        SsaVarnode { base: *input, version: ver },
                    );
                }

                if let Some(output) = insn.output {
                    let ver = new_version(output, &mut version_counter, &mut var_stack);
                    track_push(&mut pushed, output);
                    var_map.insert(
                        (bid, i, VarnodeSlot::Output),
                        SsaVarnode { base: output, version: ver },
                    );
                }
            }
        }

        let successors = cfg.edges_from(bid);
        for (succ, _kind) in &successors {
            if let Some(phis) = phi_map.get_mut(succ) {
                for phi in phis.iter_mut() {
                    let ver = current_version(phi.output.base, &var_stack);
                    phi.inputs.push((bid, SsaVarnode {
                        base: phi.output.base,
                        version: ver,
                    }));
                }
            }
        }

        push_counts.insert(bid, pushed);

        let children = dom_tree.children(bid);
        for &child in children.iter().rev() {
            work_stack.push((child, false));
        }
    }

    (phi_map, var_map)
}

fn track_push(pushed: &mut Vec<(Varnode, usize)>, var: Varnode) {
    if let Some(entry) = pushed.iter_mut().find(|(v, _)| *v == var) {
        entry.1 += 1;
    } else {
        pushed.push((var, 1));
    }
}

#[cfg(test)]
mod tests {
    use smallvec::smallvec;

    use super::*;
    use crate::{BasicBlock, BlockId, Function, IrInsn, IrOp, Varnode};

    fn ctrl_insn(op: IrOp, addr: u64) -> IrInsn {
        IrInsn::without_output(op, smallvec![], addr)
    }

    fn def_insn(output: Varnode, inputs: &[Varnode], addr: u64) -> IrInsn {
        IrInsn::with_output(
            IrOp::IntAdd,
            output,
            smallvec![inputs[0], inputs[1]],
            addr,
        )
    }

    #[test]
    fn test_ssa_straight_line() {
        let r0 = Varnode::reg(0, 8);
        let r8 = Varnode::reg(8, 8);
        let c1 = Varnode::constant(1, 8);

        let mut func = Function::new("straight_line", BlockId(0), 0x1000);

        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(def_insn(r0, &[r8, c1], 0x1000));

        let mut bb1 = BasicBlock::new(BlockId(1));
        bb1.insns.push(def_insn(r8, &[r0, c1], 0x1010));

        let mut bb2 = BasicBlock::new(BlockId(2));
        bb2.insns.push(ctrl_insn(IrOp::Return, 0x1020));

        func.insert_block(bb0);
        func.insert_block(bb1);
        func.insert_block(bb2);

        let ssa = build_ssa(func);

        for (_bid, phis) in &ssa.phi_map {
            assert!(phis.is_empty(), "no phis expected in straight-line code");
        }
    }

    #[test]
    fn test_ssa_diamond_phi() {
        let r0 = Varnode::reg(0, 8);
        let r8 = Varnode::reg(8, 8);
        let c1 = Varnode::constant(1, 8);
        let c2 = Varnode::constant(2, 8);

        let mut func = Function::new("diamond", BlockId(0), 0x2000);

        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(ctrl_insn(IrOp::Cbranch, 0x2000));
        bb0.successors = smallvec![BlockId(1), BlockId(2)];

        let mut bb1 = BasicBlock::new(BlockId(1));
        bb1.insns.push(def_insn(r0, &[r8, c1], 0x2010));
        bb1.insns.push(ctrl_insn(IrOp::Branch, 0x2014));
        bb1.successors = smallvec![BlockId(3)];

        let mut bb2 = BasicBlock::new(BlockId(2));
        bb2.insns.push(def_insn(r0, &[r8, c2], 0x2020));
        bb2.insns.push(ctrl_insn(IrOp::Branch, 0x2024));
        bb2.successors = smallvec![BlockId(3)];

        let mut bb3 = BasicBlock::new(BlockId(3));
        bb3.insns.push(ctrl_insn(IrOp::Return, 0x2030));

        func.insert_block(bb0);
        func.insert_block(bb1);
        func.insert_block(bb2);
        func.insert_block(bb3);

        let ssa = build_ssa(func);

        let phis_at_3 = ssa.phi_map.get(&BlockId(3)).expect("phi expected at BB3");
        assert!(!phis_at_3.is_empty(), "BB3 must have at least one phi");

        let r0_phi = phis_at_3.iter().find(|p| p.output.base == r0);
        assert!(r0_phi.is_some(), "phi for r0 expected at BB3");

        let phi = r0_phi.expect("phi for r0 at BB3");
        assert_eq!(phi.inputs.len(), 2, "diamond phi must have 2 inputs");
    }

    #[test]
    fn test_ssa_loop_phi() {
        let r0 = Varnode::reg(0, 8);
        let r8 = Varnode::reg(8, 8);
        let c1 = Varnode::constant(1, 8);

        let mut func = Function::new("loop", BlockId(0), 0x3000);

        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(def_insn(r0, &[r8, c1], 0x3000));
        bb0.insns.push(ctrl_insn(IrOp::Cbranch, 0x3004));
        bb0.successors = smallvec![BlockId(1), BlockId(2)];

        let mut bb1 = BasicBlock::new(BlockId(1));
        bb1.insns.push(def_insn(r0, &[r0, c1], 0x3010));
        bb1.insns.push(ctrl_insn(IrOp::Branch, 0x3014));
        bb1.successors = smallvec![BlockId(0)];

        let mut bb2 = BasicBlock::new(BlockId(2));
        bb2.insns.push(ctrl_insn(IrOp::Return, 0x3020));

        func.insert_block(bb0);
        func.insert_block(bb1);
        func.insert_block(bb2);

        let ssa = build_ssa(func);

        let phis_at_0 = ssa.phi_map.get(&BlockId(0)).expect("phi expected at BB0 (loop header)");
        assert!(!phis_at_0.is_empty(), "BB0 must have a phi (loop header)");

        let r0_phi = phis_at_0.iter().find(|p| p.output.base == r0);
        assert!(r0_phi.is_some(), "phi for r0 expected at loop header BB0");
    }

    #[test]
    fn test_ssa_versions_monotonic() {
        let r0 = Varnode::reg(0, 8);
        let r8 = Varnode::reg(8, 8);
        let c1 = Varnode::constant(1, 8);

        let mut func = Function::new("monotonic", BlockId(0), 0x4000);

        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(def_insn(r0, &[r8, c1], 0x4000));
        bb0.insns.push(def_insn(r0, &[r0, c1], 0x4004));
        bb0.insns.push(def_insn(r0, &[r0, c1], 0x4008));
        bb0.insns.push(ctrl_insn(IrOp::Return, 0x400c));

        func.insert_block(bb0);

        let ssa = build_ssa(func);

        let mut versions: Vec<u32> = Vec::new();
        for i in 0..3 {
            if let Some(sv) = ssa.var_map.get(&(BlockId(0), i, VarnodeSlot::Output)) {
                if sv.base == r0 {
                    versions.push(sv.version);
                }
            }
        }

        assert_eq!(versions.len(), 3, "expected 3 defs of r0");
        for window in versions.windows(2) {
            assert!(
                window[0] < window[1],
                "versions must be strictly increasing: {:?}",
                versions,
            );
        }
    }

    #[test]
    fn test_post_dom_simple_diamond() {
        let r0 = Varnode::reg(0, 8);
        let r8 = Varnode::reg(8, 8);
        let c1 = Varnode::constant(1, 8);

        let mut func = Function::new("diamond_pdom", BlockId(0), 0x5000);

        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(ctrl_insn(IrOp::Cbranch, 0x5000));
        bb0.successors = smallvec![BlockId(1), BlockId(2)];

        let mut bb1 = BasicBlock::new(BlockId(1));
        bb1.insns.push(def_insn(r0, &[r8, c1], 0x5010));
        bb1.insns.push(ctrl_insn(IrOp::Branch, 0x5014));
        bb1.successors = smallvec![BlockId(3)];

        let mut bb2 = BasicBlock::new(BlockId(2));
        bb2.insns.push(def_insn(r0, &[r8, c1], 0x5020));
        bb2.insns.push(ctrl_insn(IrOp::Branch, 0x5024));
        bb2.successors = smallvec![BlockId(3)];

        let mut bb3 = BasicBlock::new(BlockId(3));
        bb3.insns.push(ctrl_insn(IrOp::Return, 0x5030));

        func.insert_block(bb0);
        func.insert_block(bb1);
        func.insert_block(bb2);
        func.insert_block(bb3);

        let ssa = build_ssa(func);
        let pdom = ssa.post_dom_tree.as_ref().expect("post_dom_tree should be Some");

        assert_eq!(pdom.idom(BlockId(0)), Some(BlockId(3)));
        assert_eq!(pdom.idom(BlockId(1)), Some(BlockId(3)));
        assert_eq!(pdom.idom(BlockId(2)), Some(BlockId(3)));
    }

    #[test]
    fn test_post_dom_chain() {
        let mut func = Function::new("chain_pdom", BlockId(0), 0x6000);

        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(ctrl_insn(IrOp::Branch, 0x6000));
        bb0.successors = smallvec![BlockId(1)];

        let mut bb1 = BasicBlock::new(BlockId(1));
        bb1.insns.push(ctrl_insn(IrOp::Branch, 0x6010));
        bb1.successors = smallvec![BlockId(2)];

        let mut bb2 = BasicBlock::new(BlockId(2));
        bb2.insns.push(ctrl_insn(IrOp::Return, 0x6020));

        func.insert_block(bb0);
        func.insert_block(bb1);
        func.insert_block(bb2);

        let ssa = build_ssa(func);
        let pdom = ssa.post_dom_tree.as_ref().expect("post_dom_tree should be Some");

        assert_eq!(pdom.idom(BlockId(0)), Some(BlockId(1)));
        assert_eq!(pdom.idom(BlockId(1)), Some(BlockId(2)));
    }

    #[test]
    fn test_post_dom_with_early_return() {
        let r0 = Varnode::reg(0, 8);
        let r8 = Varnode::reg(8, 8);
        let c1 = Varnode::constant(1, 8);

        let mut func = Function::new("early_return_pdom", BlockId(0), 0x7000);

        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(ctrl_insn(IrOp::Cbranch, 0x7000));
        bb0.successors = smallvec![BlockId(1), BlockId(2)];

        let mut bb1 = BasicBlock::new(BlockId(1));
        bb1.insns.push(ctrl_insn(IrOp::Return, 0x7010));

        let mut bb2 = BasicBlock::new(BlockId(2));
        bb2.insns.push(def_insn(r0, &[r8, c1], 0x7020));
        bb2.insns.push(ctrl_insn(IrOp::Branch, 0x7024));
        bb2.successors = smallvec![BlockId(3)];

        let mut bb3 = BasicBlock::new(BlockId(3));
        bb3.insns.push(ctrl_insn(IrOp::Return, 0x7030));

        func.insert_block(bb0);
        func.insert_block(bb1);
        func.insert_block(bb2);
        func.insert_block(bb3);

        let ssa = build_ssa(func);
        let pdom = ssa.post_dom_tree.as_ref().expect("post_dom_tree should be Some");
        let exit = ssa.cfg.exit_block();

        assert_eq!(pdom.idom(BlockId(0)), Some(exit));
    }

    #[test]
    fn test_post_dom_nested_if() {
        let r0 = Varnode::reg(0, 8);
        let r8 = Varnode::reg(8, 8);
        let c1 = Varnode::constant(1, 8);

        let mut func = Function::new("nested_pdom", BlockId(0), 0x8000);

        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(ctrl_insn(IrOp::Cbranch, 0x8000));
        bb0.successors = smallvec![BlockId(1), BlockId(4)];

        let mut bb1 = BasicBlock::new(BlockId(1));
        bb1.insns.push(ctrl_insn(IrOp::Cbranch, 0x8010));
        bb1.successors = smallvec![BlockId(2), BlockId(3)];

        let mut bb2 = BasicBlock::new(BlockId(2));
        bb2.insns.push(def_insn(r0, &[r8, c1], 0x8020));
        bb2.insns.push(ctrl_insn(IrOp::Branch, 0x8024));
        bb2.successors = smallvec![BlockId(4)];

        let mut bb3 = BasicBlock::new(BlockId(3));
        bb3.insns.push(def_insn(r0, &[r8, c1], 0x8030));
        bb3.insns.push(ctrl_insn(IrOp::Branch, 0x8034));
        bb3.successors = smallvec![BlockId(4)];

        let mut bb4 = BasicBlock::new(BlockId(4));
        bb4.insns.push(ctrl_insn(IrOp::Return, 0x8040));

        func.insert_block(bb0);
        func.insert_block(bb1);
        func.insert_block(bb2);
        func.insert_block(bb3);
        func.insert_block(bb4);

        let ssa = build_ssa(func);
        let pdom = ssa.post_dom_tree.as_ref().expect("post_dom_tree should be Some");

        assert_eq!(pdom.idom(BlockId(0)), Some(BlockId(4)));
        assert_eq!(pdom.idom(BlockId(1)), Some(BlockId(4)));
    }

    #[test]
    fn test_post_dom_available_in_build_ssa() {
        let r0 = Varnode::reg(0, 8);
        let r8 = Varnode::reg(8, 8);
        let c1 = Varnode::constant(1, 8);

        let mut func = Function::new("pdom_available", BlockId(0), 0x9000);
        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(def_insn(r0, &[r8, c1], 0x9000));
        bb0.insns.push(ctrl_insn(IrOp::Return, 0x9004));
        func.insert_block(bb0);

        let ssa = build_ssa(func);
        assert!(ssa.post_dom_tree.is_some());
    }
}
