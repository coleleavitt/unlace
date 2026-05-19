//! Shared analysis context — cached, lazily-computed cross-pass facts.
//!
//! Modeled loosely on LLVM's `AnalysisManager`: passes query results by kind,
//! computations are cached, and any IR mutation invalidates stale entries.
//!
//! Key design choices vs. LLVM:
//!
//! - No template / trait-object generics: analyses are enumerated in
//!   [`AnalysisKind`] and results stored in a flat `BTreeMap`.
//! - Invalidation is *manual*: after mutating the IR, call
//!   [`AnalysisContext::invalidate_all`] or per-kind.
//! - All internal collections are deterministic (`BTreeMap`/`BTreeSet`).

use std::collections::{BTreeMap, BTreeSet};

use unlace_ir::BlockId;
use unlace_ir::ssa::{DominatorTree, SsaFunction};

use crate::licm::{NaturalLoop, find_natural_loops};

/// Which analysis a pass is requesting.
#[derive(Copy, Clone, Debug, PartialEq, Eq, PartialOrd, Ord, Hash)]
pub enum AnalysisKind {
    /// Natural loops (back-edge based).
    Loops,
    /// Dominator tree (already on SsaFunction, but tracked for invalidation).
    Dominators,
    /// Reverse-postorder block ordering.
    ReversePostorder,
    /// Def-use chains: for each SsaVarnode, which (block, idx, slot) uses it.
    DefUseChains,
    /// Loop SCEV info (from scalar_evolution).
    ScalarEvolution,
}

/// Cached analysis results for a single function.
///
/// Created before a pipeline stage, shared across passes within that stage,
/// and discarded or invalidated when the IR changes.
pub struct AnalysisContext {
    /// Cached natural loops.
    loops: Option<Vec<NaturalLoop>>,
    /// Cached reverse-postorder traversal.
    rpo: Option<Vec<BlockId>>,
    /// Cached def-use chains: maps each SsaVarnode to the set of (block, idx)
    /// instructions that *use* it as an input.
    def_use: Option<BTreeMap<unlace_ir::ssa::SsaVarnode, Vec<(BlockId, usize)>>>,
    /// Invalidation generation counter — bumped on each invalidate.
    generation: u64,
    /// Tracks which analyses have been computed this generation.
    valid: BTreeSet<AnalysisKind>,
}

impl AnalysisContext {
    /// Create a fresh, empty context.
    pub fn new() -> Self {
        Self {
            loops: None,
            rpo: None,
            def_use: None,
            generation: 0,
            valid: BTreeSet::new(),
        }
    }

    /// Current generation counter (for debugging / test assertions).
    pub fn generation(&self) -> u64 {
        self.generation
    }

    /// Invalidate all cached analyses (call after any IR mutation).
    pub fn invalidate_all(&mut self) {
        self.loops = None;
        self.rpo = None;
        self.def_use = None;
        self.valid.clear();
        self.generation += 1;
    }

    /// Invalidate a specific analysis kind.
    pub fn invalidate(&mut self, kind: AnalysisKind) {
        match kind {
            AnalysisKind::Loops => self.loops = None,
            AnalysisKind::Dominators => { /* lives on SsaFunction directly */ }
            AnalysisKind::ReversePostorder => self.rpo = None,
            AnalysisKind::DefUseChains => self.def_use = None,
            AnalysisKind::ScalarEvolution => { /* lives externally */ }
        }
        self.valid.remove(&kind);
        self.generation += 1;
    }

    /// Whether a given analysis is currently cached and valid.
    pub fn is_valid(&self, kind: AnalysisKind) -> bool {
        self.valid.contains(&kind)
    }

    // ------------------------------------------------------------------
    // Natural Loops
    // ------------------------------------------------------------------

    /// Get natural loops, computing and caching if needed.
    pub fn loops(&mut self, func: &SsaFunction) -> &[NaturalLoop] {
        if !self.valid.contains(&AnalysisKind::Loops) {
            self.loops = Some(find_natural_loops(func));
            self.valid.insert(AnalysisKind::Loops);
        }
        self.loops.as_deref().unwrap()
    }

    // ------------------------------------------------------------------
    // Reverse Postorder
    // ------------------------------------------------------------------

    /// Get reverse-postorder block ordering, computing and caching if needed.
    pub fn reverse_postorder(&mut self, func: &SsaFunction) -> &[BlockId] {
        if !self.valid.contains(&AnalysisKind::ReversePostorder) {
            self.rpo = Some(compute_rpo(func));
            self.valid.insert(AnalysisKind::ReversePostorder);
        }
        self.rpo.as_deref().unwrap()
    }

    // ------------------------------------------------------------------
    // Def-Use Chains
    // ------------------------------------------------------------------

    /// Get def-use chains: for each SSA varnode, which instructions use it.
    pub fn def_use_chains(
        &mut self,
        func: &SsaFunction,
    ) -> &BTreeMap<unlace_ir::ssa::SsaVarnode, Vec<(BlockId, usize)>> {
        if !self.valid.contains(&AnalysisKind::DefUseChains) {
            self.def_use = Some(compute_def_use(func));
            self.valid.insert(AnalysisKind::DefUseChains);
        }
        self.def_use.as_ref().unwrap()
    }

    // ------------------------------------------------------------------
    // Dominator tree (accessor for the one on SsaFunction)
    // ------------------------------------------------------------------

    /// Access dominator tree. This just delegates to `func.dom_tree` but
    /// marks it as "queried" for tracking purposes.
    pub fn dominators<'a>(&mut self, func: &'a SsaFunction) -> &'a DominatorTree {
        self.valid.insert(AnalysisKind::Dominators);
        &func.dom_tree
    }
}

impl Default for AnalysisContext {
    fn default() -> Self {
        Self::new()
    }
}

// ------------------------------------------------------------------
// Computation helpers
// ------------------------------------------------------------------

/// Compute reverse-postorder traversal from the entry block.
fn compute_rpo(func: &SsaFunction) -> Vec<BlockId> {
    let entry = func.cfg.entry_block();
    let mut visited = BTreeSet::new();
    let mut postorder = Vec::new();
    rpo_dfs(func, entry, &mut visited, &mut postorder);
    postorder.reverse();
    postorder
}

fn rpo_dfs(
    func: &SsaFunction,
    block: BlockId,
    visited: &mut BTreeSet<BlockId>,
    postorder: &mut Vec<BlockId>,
) {
    if !visited.insert(block) {
        return;
    }
    if let Some(b) = func.function.blocks.get(&block) {
        for &succ in &b.successors {
            rpo_dfs(func, succ, visited, postorder);
        }
    }
    postorder.push(block);
}

/// Build def-use chains: for each SsaVarnode defined as an output, collect
/// all (block, insn_idx) where it appears as an input.
fn compute_def_use(
    func: &SsaFunction,
) -> BTreeMap<unlace_ir::ssa::SsaVarnode, Vec<(BlockId, usize)>> {
    use unlace_ir::ssa::VarnodeSlot;

    let mut uses: BTreeMap<unlace_ir::ssa::SsaVarnode, Vec<(BlockId, usize)>> = BTreeMap::new();

    for (&(bid, idx, ref slot), sv) in &func.var_map {
        if matches!(slot, VarnodeSlot::Input(_)) {
            uses.entry(*sv).or_default().push((bid, idx));
        }
    }

    // Also collect phi inputs as uses.
    for (&bid, phis) in &func.phi_map {
        for phi in phis {
            for &(_pred, input_sv) in &phi.inputs {
                uses.entry(input_sv).or_default().push((bid, usize::MAX));
            }
        }
    }

    uses
}

#[cfg(test)]
mod tests {
    use smallvec::smallvec;
    use unlace_ir::ssa::build_ssa;
    use unlace_ir::{BasicBlock, BlockId, Function, IrInsn, IrOp, Varnode};

    use super::*;

    fn make_diamond() -> SsaFunction {
        let cond = Varnode::reg(0, 1);
        let r0 = Varnode::reg(8, 4);
        let r1 = Varnode::reg(16, 4);
        let out = Varnode::reg(24, 4);

        let mut func = Function::new("diamond", BlockId(0), 0x1000);

        let mut b0 = BasicBlock::new(BlockId(0));
        b0.insns.push(IrInsn::without_output(
            IrOp::Cbranch,
            smallvec![Varnode::constant(0, 8), cond],
            0x1000,
        ));
        b0.successors = smallvec![BlockId(1), BlockId(2)];

        let mut b1 = BasicBlock::new(BlockId(1));
        b1.insns.push(IrInsn::with_output(
            IrOp::Copy,
            out,
            smallvec![r0],
            0x1100,
        ));
        b1.insns
            .push(IrInsn::without_output(IrOp::Branch, smallvec![], 0x1104));
        b1.successors = smallvec![BlockId(3)];

        let mut b2 = BasicBlock::new(BlockId(2));
        b2.insns.push(IrInsn::with_output(
            IrOp::Copy,
            out,
            smallvec![r1],
            0x1200,
        ));
        b2.insns
            .push(IrInsn::without_output(IrOp::Branch, smallvec![], 0x1204));
        b2.successors = smallvec![BlockId(3)];

        let mut b3 = BasicBlock::new(BlockId(3));
        b3.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![out],
            0x1300,
        ));

        func.insert_block(b0);
        func.insert_block(b1);
        func.insert_block(b2);
        func.insert_block(b3);

        build_ssa(func)
    }

    fn make_loop() -> SsaFunction {
        let i = Varnode::reg(0, 4);
        let cmp = Varnode::reg(8, 1);

        let mut func = Function::new("simple_loop", BlockId(0), 0x1000);

        let mut b0 = BasicBlock::new(BlockId(0));
        b0.insns.push(IrInsn::with_output(
            IrOp::Copy,
            i,
            smallvec![Varnode::constant(0, 4)],
            0x1000,
        ));
        b0.insns
            .push(IrInsn::without_output(IrOp::Branch, smallvec![], 0x1004));
        b0.successors = smallvec![BlockId(1)];

        let mut b1 = BasicBlock::new(BlockId(1));
        b1.insns.push(IrInsn::with_output(
            IrOp::IntLess,
            cmp,
            smallvec![i, Varnode::constant(10, 4)],
            0x1100,
        ));
        b1.insns.push(IrInsn::without_output(
            IrOp::Cbranch,
            smallvec![Varnode::constant(0, 8), cmp],
            0x1104,
        ));
        b1.successors = smallvec![BlockId(2), BlockId(3)];

        let mut b2 = BasicBlock::new(BlockId(2));
        b2.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            i,
            smallvec![i, Varnode::constant(1, 4)],
            0x1200,
        ));
        b2.insns
            .push(IrInsn::without_output(IrOp::Branch, smallvec![], 0x1204));
        b2.successors = smallvec![BlockId(1)];

        let mut b3 = BasicBlock::new(BlockId(3));
        b3.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![i], 0x1300));

        func.insert_block(b0);
        func.insert_block(b1);
        func.insert_block(b2);
        func.insert_block(b3);

        build_ssa(func)
    }

    #[test]
    fn test_analysis_context_loops_cached() {
        let func = make_loop();
        let mut ctx = AnalysisContext::new();

        assert!(!ctx.is_valid(AnalysisKind::Loops));

        let loops = ctx.loops(&func);
        assert_eq!(loops.len(), 1);
        assert_eq!(loops[0].header, BlockId(1));
        assert!(ctx.is_valid(AnalysisKind::Loops));

        // Second call doesn't recompute (same generation).
        let gen_before = ctx.generation();
        let _ = ctx.loops(&func);
        assert_eq!(ctx.generation(), gen_before);
    }

    #[test]
    fn test_analysis_context_invalidation() {
        let func = make_loop();
        let mut ctx = AnalysisContext::new();

        let _ = ctx.loops(&func);
        assert!(ctx.is_valid(AnalysisKind::Loops));

        ctx.invalidate_all();
        assert!(!ctx.is_valid(AnalysisKind::Loops));
        assert_eq!(ctx.generation(), 1);
    }

    #[test]
    fn test_analysis_context_rpo() {
        let func = make_diamond();
        let mut ctx = AnalysisContext::new();

        let rpo = ctx.reverse_postorder(&func);
        // Entry should be first.
        assert_eq!(rpo[0], BlockId(0));
        // Exit (B3) should be last or near-last.
        assert!(rpo.contains(&BlockId(3)));
        assert!(ctx.is_valid(AnalysisKind::ReversePostorder));
    }

    #[test]
    fn test_analysis_context_def_use_chains() {
        let func = make_diamond();
        let mut ctx = AnalysisContext::new();

        let du = ctx.def_use_chains(&func);
        // Should have entries — at least the phi uses of r0/r1 copies.
        assert!(!du.is_empty());
        assert!(ctx.is_valid(AnalysisKind::DefUseChains));
    }

    #[test]
    fn test_analysis_context_selective_invalidation() {
        let func = make_loop();
        let mut ctx = AnalysisContext::new();

        let _ = ctx.loops(&func);
        let _ = ctx.reverse_postorder(&func);
        assert!(ctx.is_valid(AnalysisKind::Loops));
        assert!(ctx.is_valid(AnalysisKind::ReversePostorder));

        ctx.invalidate(AnalysisKind::Loops);
        assert!(!ctx.is_valid(AnalysisKind::Loops));
        assert!(ctx.is_valid(AnalysisKind::ReversePostorder));
    }

    #[test]
    fn test_analysis_context_cross_pass_sharing() {
        // Simulate two passes sharing a context: pass A queries loops,
        // pass B queries def-use. Both remain valid until invalidation.
        let func = make_loop();
        let mut ctx = AnalysisContext::new();

        // "Pass A" queries loops.
        let loops = ctx.loops(&func);
        assert!(!loops.is_empty());

        // "Pass B" queries def-use.
        let du = ctx.def_use_chains(&func);
        assert!(!du.is_empty());

        // Both cached.
        assert!(ctx.is_valid(AnalysisKind::Loops));
        assert!(ctx.is_valid(AnalysisKind::DefUseChains));

        // Simulate IR mutation.
        ctx.invalidate_all();
        assert!(!ctx.is_valid(AnalysisKind::Loops));
        assert!(!ctx.is_valid(AnalysisKind::DefUseChains));
    }
}
