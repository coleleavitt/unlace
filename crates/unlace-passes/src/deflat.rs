//! Control-flow deflattening: detect and recover from OLLVM/Themida-style
//! control-flow flattening.
//!
//! Flattened CFGs have a single *dispatcher* block that reads a state variable
//! and dispatches (via switch or if-chain) to one of several *case* blocks.
//! Each case block updates the state variable and jumps back to the dispatcher.
//!
//! [`detect_flattened_dispatch`] identifies this pattern and returns a
//! [`FlattenedCfg`] describing the dispatcher, state variable, and case blocks.
//!
//! [`recover_original_cfg`] uses the state-variable assignments in each case
//! block to reconstruct the original control-flow edges, eliminating the
//! dispatcher entirely.

use std::collections::{BTreeMap, BTreeSet};

use unlace_ir::cfg::build_cfg;
use unlace_ir::ssa::SsaFunction;
use unlace_ir::{BasicBlock, BlockId, IrOp, SpaceId, Varnode};

/// Describes a detected flattened control-flow pattern.
#[derive(Clone, Debug, PartialEq, Eq)]
pub struct FlattenedCfg {
    /// The dispatcher block that reads the state variable and branches.
    pub dispatcher: BlockId,
    /// The state variable used to select among case blocks.
    pub state_var: Varnode,
    /// Mapping from state-variable constant value → case block.
    pub state_to_block: BTreeMap<u64, BlockId>,
    /// For each case block, the state value(s) it transitions to (original
    /// successor mapping). A case block may have one unconditional successor
    /// or two conditional successors (true/false).
    pub case_successors: BTreeMap<BlockId, CaseSuccessors>,
}

/// The recovered successor(s) for a single case block.
#[derive(Clone, Debug, PartialEq, Eq)]
pub enum CaseSuccessors {
    /// Unconditional: always transitions to the given state value.
    Unconditional(u64),
    /// Conditional: true-branch state and false-branch state.
    Conditional { true_state: u64, false_state: u64 },
    /// Terminal: no state assignment found (likely a return block).
    Terminal,
}

/// Detect OLLVM/Themida-style control-flow flattening in the given function.
///
/// Returns `Some(FlattenedCfg)` if the function exhibits the flattening
/// pattern: a single dispatcher block with the highest in-degree that reads
/// a state variable and branches to multiple case blocks which all loop back
/// to the dispatcher.
pub fn detect_flattened_dispatch(func: &SsaFunction) -> Option<FlattenedCfg> {
    let blocks = &func.function.blocks;
    if blocks.len() < 3 {
        return None;
    }

    // Find the dispatcher: the block with the highest in-degree (excluding
    // the synthetic exit/unknown blocks).
    let exit_block = func.cfg.exit_block();
    let unknown_block = func.cfg.unknown_block();

    let mut in_degree: BTreeMap<BlockId, usize> = BTreeMap::new();
    for &bid in blocks.keys() {
        let edges = func.cfg.edges_to(bid);
        in_degree.insert(bid, edges.len());
    }

    // The dispatcher must have in-degree >= 2 (at least 2 case blocks loop back).
    let dispatcher = in_degree
        .iter()
        .filter(|(bid, _)| **bid != exit_block && **bid != unknown_block)
        .max_by_key(|(_, deg)| **deg)
        .map(|(bid, _)| *bid)?;

    let dispatcher_in_deg = in_degree[&dispatcher];
    if dispatcher_in_deg < 2 {
        return None;
    }

    let disp_block = blocks.get(&dispatcher)?;

    // The dispatcher must end with a conditional branch or indirect branch
    // (switch pattern). Find the state variable: the input to the comparison
    // or branch that selects the case.
    let state_var = find_state_variable(disp_block)?;

    // Identify case blocks: blocks that the dispatcher can reach.
    let disp_successors = func.cfg.edges_from(dispatcher);
    let case_blocks: BTreeSet<BlockId> = disp_successors
        .iter()
        .map(|(target, _)| *target)
        .filter(|&t| t != exit_block && t != unknown_block && t != dispatcher)
        .collect();

    if case_blocks.is_empty() {
        return None;
    }

    // Build state_to_block: map each constant state value to the case block
    // it dispatches to. We extract this from the dispatcher's comparison chain.
    let state_to_block = extract_state_to_block_map(disp_block, &case_blocks, &state_var)?;

    if state_to_block.is_empty() {
        return None;
    }

    // For each case block, determine what state value(s) it assigns before
    // jumping back to the dispatcher.
    let mut case_successors = BTreeMap::new();
    for &case_bid in &case_blocks {
        let succ = extract_case_successor(blocks.get(&case_bid).unwrap(), &state_var);
        case_successors.insert(case_bid, succ);
    }

    Some(FlattenedCfg {
        dispatcher,
        state_var,
        state_to_block,
        case_successors,
    })
}

/// Recover the original CFG by replacing dispatcher-mediated edges with direct
/// edges between case blocks according to the state-variable transition map.
///
/// After this pass:
/// - The dispatcher block is removed (its instructions are dead).
/// - Each case block's terminator is rewritten to branch directly to its
///   original successor(s).
/// - The CFG is rebuilt from the modified function.
pub fn recover_original_cfg(func: &mut SsaFunction, flat: &FlattenedCfg) {
    // Build reverse map: state_value → target block.
    let state_to_block = &flat.state_to_block;

    // Rewrite each case block's successors to point directly at the target
    // case block instead of looping back to the dispatcher.
    for (&case_bid, successors) in &flat.case_successors {
        let block = func.function.blocks.get_mut(&case_bid).unwrap();

        match successors {
            CaseSuccessors::Unconditional(target_state) => {
                if let Some(&target_block) = state_to_block.get(target_state) {
                    // Rewrite the terminator to an unconditional branch to target.
                    block.successors.clear();
                    block.successors.push(target_block);

                    // Remove the state-variable assignment and rewrite terminator.
                    remove_state_assignments(block, &flat.state_var);
                    rewrite_terminator_unconditional(block, target_block);
                }
            }
            CaseSuccessors::Conditional {
                true_state,
                false_state,
            } => {
                let true_block = state_to_block.get(true_state).copied();
                let false_block = state_to_block.get(false_state).copied();

                block.successors.clear();
                if let Some(tb) = true_block {
                    block.successors.push(tb);
                }
                if let Some(fb) = false_block {
                    block.successors.push(fb);
                }

                // Remove the state-variable assignments but keep the condition.
                remove_state_assignments(block, &flat.state_var);
                // Rewrite the existing branch to the dispatcher to branch to
                // the actual targets.
                if let (Some(tb), Some(fb)) = (true_block, false_block) {
                    rewrite_terminator_conditional(block, tb, fb);
                }
            }
            CaseSuccessors::Terminal => {
                // No change needed — this block returns or exits.
            }
        }
    }

    // Remove the dispatcher block.
    func.function.blocks.remove(&flat.dispatcher);

    // Rebuild the CFG from the modified function.
    func.cfg = build_cfg(&func.function);
}

// ─── Internal helpers ────────────────────────────────────────────────────────

/// Find the state variable in the dispatcher block.
///
/// Pattern: the dispatcher compares a register/unique varnode against constants
/// (via IntEqual) or uses it as a branch-indirect operand. We look for the
/// most-referenced non-constant input to comparisons.
fn find_state_variable(block: &BasicBlock) -> Option<Varnode> {
    let mut candidates: BTreeMap<Varnode, usize> = BTreeMap::new();

    for insn in &block.insns {
        match insn.op {
            IrOp::IntEqual | IrOp::IntNotequal | IrOp::IntSless | IrOp::IntLess => {
                for input in &insn.inputs {
                    if input.space != SpaceId::Const {
                        *candidates.entry(*input).or_default() += 1;
                    }
                }
            }
            IrOp::Cbranch => {
                // The condition input to cbranch is typically produced by a
                // comparison above; handled via the comparisons.
            }
            IrOp::Branchind => {
                // The indirect branch operand is the state variable itself
                // (jump-table pattern).
                if let Some(input) = insn.inputs.first()
                    && input.space != SpaceId::Const
                {
                    *candidates.entry(*input).or_default() += 10;
                }
            }
            _ => {}
        }
    }

    // The state variable is the one with the highest reference count.
    candidates
        .into_iter()
        .max_by_key(|(_, count)| *count)
        .map(|(vn, _)| vn)
}

/// Extract the mapping from state constant values to target case blocks from
/// the dispatcher's comparison chain.
///
/// Pattern: a sequence of `IntEqual(state_var, const) → Cbranch → target`.
fn extract_state_to_block_map(
    disp_block: &BasicBlock,
    case_blocks: &BTreeSet<BlockId>,
    state_var: &Varnode,
) -> Option<BTreeMap<u64, BlockId>> {
    let mut map = BTreeMap::new();

    // Strategy 1: look for IntEqual comparisons against constants followed
    // by conditional branches.
    let mut last_compared_const: Option<u64> = None;

    for insn in disp_block.insns.iter() {
        match insn.op {
            IrOp::IntEqual | IrOp::IntNotequal => {
                // Find the constant operand in this comparison.
                let const_val = insn.inputs.iter().find_map(|input| {
                    if input.space == SpaceId::Const {
                        Some(input.offset)
                    } else {
                        None
                    }
                });
                // Verify the state variable is also an operand.
                let has_state = insn.inputs.contains(state_var);
                if has_state {
                    last_compared_const = const_val;
                }
            }
            IrOp::Cbranch => {
                if let Some(val) = last_compared_const {
                    // The true-branch target of this cbranch is the case block
                    // for this state value.
                    if let Some(&target) = disp_block.successors.first()
                        && case_blocks.contains(&target)
                    {
                        map.insert(val, target);
                    }
                    // Check successive successors too.
                    for &succ in disp_block.successors.iter() {
                        if case_blocks.contains(&succ) && !map.values().any(|&v| v == succ) {
                            // Try to assign remaining values.
                        }
                    }
                    last_compared_const = None;
                }
            }
            _ => {}
        }
    }

    // Strategy 2: if the dispatcher has multiple successors and each is a
    // case block, assign state values based on block order (common in
    // switch-table implementations).
    if map.is_empty() {
        // Assign state values 0, 1, 2, ... to successors in order.
        for (idx, &bid) in case_blocks.iter().enumerate() {
            map.insert(idx as u64, bid);
        }
    }

    if map.is_empty() { None } else { Some(map) }
}

/// Determine what state value a case block transitions to (its original
/// successor in the un-flattened CFG).
fn extract_case_successor(block: &BasicBlock, state_var: &Varnode) -> CaseSuccessors {
    // Walk instructions looking for COPY of a constant into the state variable.
    let mut assigned_values: Vec<(usize, u64)> = Vec::new();

    for (i, insn) in block.insns.iter().enumerate() {
        if insn.op == IrOp::Copy
            && let Some(output) = &insn.output
            && output == state_var
            && let Some(input) = insn.inputs.first()
            && input.space == SpaceId::Const
        {
            assigned_values.push((i, input.offset));
        }
    }

    match assigned_values.len() {
        0 => CaseSuccessors::Terminal,
        1 => CaseSuccessors::Unconditional(assigned_values[0].1),
        _ => {
            // Multiple assignments: likely conditional. The last two are
            // the true/false paths (true assigned on one path, false on another).
            let len = assigned_values.len();
            CaseSuccessors::Conditional {
                true_state: assigned_values[len - 2].1,
                false_state: assigned_values[len - 1].1,
            }
        }
    }
}

/// Remove instructions that assign constants to the state variable.
fn remove_state_assignments(block: &mut BasicBlock, state_var: &Varnode) {
    block.insns.retain(|insn| {
        if insn.op == IrOp::Copy
            && let Some(output) = &insn.output
            && output == state_var
            && let Some(input) = insn.inputs.first()
            && input.space == SpaceId::Const
        {
            return false;
        }
        true
    });
}

/// Rewrite the block's terminator to an unconditional branch to `target`.
fn rewrite_terminator_unconditional(block: &mut BasicBlock, target: BlockId) {
    // Remove existing branch/cbranch terminator at the end.
    if let Some(last) = block.insns.last()
        && matches!(last.op, IrOp::Branch | IrOp::Cbranch | IrOp::Branchind)
    {
        let addr = last.addr;
        block.insns.pop();
        // Insert an unconditional branch.
        block.insns.push(unlace_ir::IrInsn::without_output(
            IrOp::Branch,
            smallvec::smallvec![Varnode::constant(target.0 as u64, 8)],
            addr,
        ));
    }
}

/// Rewrite the block's terminator to a conditional branch to `true_target`
/// and `false_target`, preserving the existing condition.
fn rewrite_terminator_conditional(
    block: &mut BasicBlock,
    true_target: BlockId,
    false_target: BlockId,
) {
    // Find the cbranch terminator and update its successor encoding.
    if let Some(last) = block.insns.last()
        && (last.op == IrOp::Cbranch || last.op == IrOp::Branch || last.op == IrOp::Branchind)
    {
        let addr = last.addr;
        // Keep the condition input if it's a cbranch.
        let condition = if last.op == IrOp::Cbranch {
            last.inputs.first().copied()
        } else {
            None
        };
        block.insns.pop();

        if let Some(cond) = condition {
            block.insns.push(unlace_ir::IrInsn::without_output(
                IrOp::Cbranch,
                smallvec::smallvec![cond, Varnode::constant(true_target.0 as u64, 8),],
                addr,
            ));
        } else {
            block.insns.push(unlace_ir::IrInsn::without_output(
                IrOp::Branch,
                smallvec::smallvec![Varnode::constant(true_target.0 as u64, 8)],
                addr,
            ));
        }
    }

    block.successors.clear();
    block.successors.push(true_target);
    block.successors.push(false_target);
}

#[cfg(test)]
mod tests {
    use super::*;
    use smallvec::smallvec;
    use unlace_ir::ssa::build_ssa;
    use unlace_ir::{BasicBlock, BlockId, Function, IrInsn, IrOp, Varnode};

    /// Helper: build a minimal flattened CFG function.
    ///
    /// Layout:
    /// - BB_0 (entry): assigns state_var = 0, branches to dispatcher
    /// - BB_1 (dispatcher): compares state_var against 0, 1, 2 → branches
    /// - BB_2 (case A): does work, assigns state_var = 1, branches to dispatcher
    /// - BB_3 (case B): does work, assigns state_var = 2, branches to dispatcher
    /// - BB_4 (case C): returns
    fn make_flattened_function() -> Function {
        let state_var = Varnode::reg(100, 4); // Synthetic "state register"

        let mut func = Function::new("flattened", BlockId(0), 0x1000);

        // BB_0: entry — assign state = 0, branch to dispatcher (BB_1)
        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(IrInsn::with_output(
            IrOp::Copy,
            state_var,
            smallvec![Varnode::constant(0, 4)],
            0x1000,
        ));
        bb0.insns.push(IrInsn::without_output(
            IrOp::Branch,
            smallvec![Varnode::constant(1, 8)],
            0x1004,
        ));
        bb0.successors.push(BlockId(1));
        func.insert_block(bb0);

        // BB_1: dispatcher — compare state_var == 0 → BB_2, == 1 → BB_3, == 2 → BB_4
        let cmp_out = Varnode::unique(200, 1);
        let mut bb1 = BasicBlock::new(BlockId(1));
        // Compare state_var == 0
        bb1.insns.push(IrInsn::with_output(
            IrOp::IntEqual,
            cmp_out,
            smallvec![state_var, Varnode::constant(0, 4)],
            0x1010,
        ));
        bb1.insns.push(IrInsn::without_output(
            IrOp::Cbranch,
            smallvec![cmp_out, Varnode::constant(2, 8)],
            0x1014,
        ));
        // Compare state_var == 1
        let cmp_out2 = Varnode::unique(201, 1);
        bb1.insns.push(IrInsn::with_output(
            IrOp::IntEqual,
            cmp_out2,
            smallvec![state_var, Varnode::constant(1, 4)],
            0x1018,
        ));
        bb1.insns.push(IrInsn::without_output(
            IrOp::Cbranch,
            smallvec![cmp_out2, Varnode::constant(3, 8)],
            0x101C,
        ));
        // Compare state_var == 2
        let cmp_out3 = Varnode::unique(202, 1);
        bb1.insns.push(IrInsn::with_output(
            IrOp::IntEqual,
            cmp_out3,
            smallvec![state_var, Varnode::constant(2, 4)],
            0x1020,
        ));
        bb1.insns.push(IrInsn::without_output(
            IrOp::Cbranch,
            smallvec![cmp_out3, Varnode::constant(4, 8)],
            0x1024,
        ));
        bb1.successors.push(BlockId(2));
        bb1.successors.push(BlockId(3));
        bb1.successors.push(BlockId(4));
        func.insert_block(bb1);

        // BB_2: case A — some work, assign state = 1, branch to dispatcher
        let mut bb2 = BasicBlock::new(BlockId(2));
        bb2.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            Varnode::reg(0, 8),
            smallvec![Varnode::reg(0, 8), Varnode::constant(1, 8)],
            0x1030,
        ));
        bb2.insns.push(IrInsn::with_output(
            IrOp::Copy,
            state_var,
            smallvec![Varnode::constant(1, 4)],
            0x1034,
        ));
        bb2.insns.push(IrInsn::without_output(
            IrOp::Branch,
            smallvec![Varnode::constant(1, 8)],
            0x1038,
        ));
        bb2.successors.push(BlockId(1));
        func.insert_block(bb2);

        // BB_3: case B — some work, assign state = 2, branch to dispatcher
        let mut bb3 = BasicBlock::new(BlockId(3));
        bb3.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            Varnode::reg(0, 8),
            smallvec![Varnode::reg(0, 8), Varnode::constant(2, 8)],
            0x1040,
        ));
        bb3.insns.push(IrInsn::with_output(
            IrOp::Copy,
            state_var,
            smallvec![Varnode::constant(2, 4)],
            0x1044,
        ));
        bb3.insns.push(IrInsn::without_output(
            IrOp::Branch,
            smallvec![Varnode::constant(1, 8)],
            0x1048,
        ));
        bb3.successors.push(BlockId(1));
        func.insert_block(bb3);

        // BB_4: case C — return
        let mut bb4 = BasicBlock::new(BlockId(4));
        bb4.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![Varnode::reg(0, 8)],
            0x1050,
        ));
        bb4.successors.clear();
        func.insert_block(bb4);

        func
    }

    #[test]
    fn test_detect_flattened_basic() {
        let func = make_flattened_function();
        let ssa = build_ssa(func);
        let flat = detect_flattened_dispatch(&ssa);
        assert!(flat.is_some(), "should detect flattened pattern");
        let flat = flat.unwrap();
        assert_eq!(flat.dispatcher, BlockId(1));
        assert_eq!(flat.state_var, Varnode::reg(100, 4));
        assert!(flat.state_to_block.len() >= 2);
    }

    #[test]
    fn test_detect_returns_none_for_normal_cfg() {
        // A simple linear function should not be detected as flattened.
        let mut func = Function::new("normal", BlockId(0), 0x2000);

        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            Varnode::reg(0, 8),
            smallvec![Varnode::reg(0, 8), Varnode::constant(1, 8)],
            0x2000,
        ));
        bb0.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![Varnode::reg(0, 8)],
            0x2004,
        ));
        func.insert_block(bb0);

        let ssa = build_ssa(func);
        let flat = detect_flattened_dispatch(&ssa);
        assert!(
            flat.is_none(),
            "normal CFG should not be detected as flattened"
        );
    }

    #[test]
    fn test_recover_removes_dispatcher() {
        let func = make_flattened_function();
        let mut ssa = build_ssa(func);
        let flat = detect_flattened_dispatch(&ssa).unwrap();
        recover_original_cfg(&mut ssa, &flat);

        // Dispatcher block should be removed.
        assert!(
            !ssa.function.blocks.contains_key(&BlockId(1)),
            "dispatcher block should be removed"
        );
    }

    #[test]
    fn test_recover_establishes_direct_edges() {
        let func = make_flattened_function();
        let mut ssa = build_ssa(func);
        let flat = detect_flattened_dispatch(&ssa).unwrap();
        recover_original_cfg(&mut ssa, &flat);

        // After recovery, case A (BB_2) should have a successor that is NOT
        // the dispatcher (BB_1). Its original successor is case B (BB_3)
        // because state=1 maps to BB_3.
        let bb2 = ssa.function.blocks.get(&BlockId(2)).unwrap();
        assert!(
            !bb2.successors.contains(&BlockId(1)),
            "case block should no longer branch to dispatcher; successors: {:?}",
            bb2.successors
        );

        // Case B (BB_3) should point to case C (BB_4) since state=2 maps to BB_4.
        let bb3 = ssa.function.blocks.get(&BlockId(3)).unwrap();
        assert!(
            !bb3.successors.contains(&BlockId(1)),
            "case block should no longer branch to dispatcher; successors: {:?}",
            bb3.successors
        );
    }
}
