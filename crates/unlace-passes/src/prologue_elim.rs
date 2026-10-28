//! Prologue/epilogue detection and suppression pass.
//!
//! Identifies function prologue and epilogue instruction sequences (frame
//! pointer setup, stack allocation, callee-saved register pushes/pops) and
//! marks them for suppression in the C output. The instructions are **not**
//! removed from the IR — only recorded in
//! [`SsaFunction::frame_setup_insns`](unlace_ir::ssa::SsaFunction::frame_setup_insns)
//! so the structurer and printer can skip them.

// The scanners in this module use `for idx in i..end` index-loops because they
// reach into `insns[idx-1]`, `insns[idx+1]`, etc. to inspect neighbouring
// instructions — iterator-based forms would be substantially less readable.
// They also assign to `i` before an early `return` to communicate the new
// position to the outer driver; this is harmless because the loop exits
// immediately after the assignment.
#![allow(clippy::needless_range_loop, clippy::mut_range_bound)]

use unlace_ir::ssa::SsaFunction;
use unlace_ir::{BlockId, IrOp, SpaceId, Varnode};

use crate::pass::{Pass, PassError};

/// x86-64 register offsets (must match `unlace_lift_x86::register_file`).
const RSP: u64 = 32;
const RBP: u64 = 40;
const RBX: u64 = 24;
const R12: u64 = 96;
const R13: u64 = 104;
const R14: u64 = 112;
const R15: u64 = 120;

/// Callee-saved registers in the System V AMD64 ABI.
const CALLEE_SAVED: &[u64] = &[RBX, R12, R13, R14, R15];

/// Returns `true` if the varnode is a register with the given offset (any size).
fn is_reg(vn: &Varnode, offset: u64) -> bool {
    vn.space == SpaceId::Register && vn.offset == offset
}

/// Returns `true` if the varnode is a constant.
fn is_const(vn: &Varnode) -> bool {
    vn.space == SpaceId::Const
}

/// Returns `true` if the varnode is a callee-saved register.
fn is_callee_saved(vn: &Varnode) -> bool {
    vn.space == SpaceId::Register && CALLEE_SAVED.contains(&vn.offset)
}

/// Prologue/epilogue detection: mark frame setup/teardown instructions for
/// suppression without removing them from the IR.
pub struct PrologueElimPass;

impl Pass for PrologueElimPass {
    fn name(&self) -> &str {
        "prologue-elim"
    }

    fn phase(&self) -> crate::pass::PassPhase {
        crate::pass::PassPhase::PreOpt
    }

    fn run(&self, func: &mut SsaFunction) -> Result<bool, PassError> {
        let mut marked = std::collections::BTreeSet::new();

        // Detect prologue in the entry block.
        detect_prologue(func, &mut marked);
        detect_split_prologues(func, &mut marked);

        // Detect epilogue in exit blocks (blocks containing RETURN).
        detect_epilogues(func, &mut marked);

        let changed = marked != func.frame_setup_insns;
        func.frame_setup_insns = marked;
        Ok(changed)
    }
}

/// Detect prologue patterns at the start of the entry block.
///
/// Scans consecutive instructions from the top, marking:
/// 1. Frame pointer setup: `STORE(RSP-8, RBP); RSP = RSP - 8` (push rbp)
///    followed by `RBP = RSP` (mov rbp, rsp).
/// 2. Stack allocation: `RSP = RSP - const_N` (sub rsp, N).
/// 3. Callee-saved pushes: `STORE(RSP-8, Rxx); RSP = RSP - 8` for callee-saved
///    registers (R15, R14, R13, R12, RBX).
/// 4. Stack canary: `tmp = LOAD(FS_BASE + 0x28); STORE(RBP-offset, tmp)`.
fn detect_prologue(func: &SsaFunction, marked: &mut std::collections::BTreeSet<(BlockId, usize)>) {
    let entry = func.function.entry;
    let block = match func.function.blocks.get(&entry) {
        Some(b) => b,
        None => return,
    };

    let insns = &block.insns;
    let mut i = 0;

    // Phase 1: Frame pointer setup (push rbp; mov rbp, rsp)
    //
    // Pattern A (two-instruction push):
    //   STORE(addr, RBP) where addr involves RSP
    //   RSP = INT_SUB(RSP, 8)     [stack pointer decrement]
    //
    // Pattern B (single COPY or INT_SUB for RBP = RSP):
    //   RBP = COPY(RSP)
    //
    // We scan for STORE of RBP to stack, RSP decrement, and COPY RSP→RBP.
    i = scan_push_rbp(insns, i, entry, marked);
    i = scan_mov_rbp_rsp(insns, i, entry, marked);

    // Phase 2: Stack allocation (sub rsp, N)
    i = scan_stack_alloc(insns, i, entry, marked);

    // Phase 3: Callee-saved pushes (consecutive push patterns)
    i = scan_callee_saved_pushes(insns, i, entry, marked);

    // Phase 4: Stack canary (load from FS:0x28, store to stack)
    let _i = scan_stack_canary(insns, i, entry, marked);
}

/// Detect prologue fragments that start a successor block after an early guard.
///
/// Optimized ELF startup helpers often test a global before executing the real
/// `push rbp` sequence. The classic entry-block-only scan misses the pattern:
///
/// ```text
/// tmp = rsp - 8
/// rsp = tmp
/// STORE ram, tmp, rbp
/// ```
///
/// This scanner is intentionally limited to the start of non-entry blocks and
/// to saved/frame-register stores so it does not hide ordinary stack writes.
fn detect_split_prologues(
    func: &SsaFunction,
    marked: &mut std::collections::BTreeSet<(BlockId, usize)>,
) {
    let entry = func.function.entry;
    for (&bid, block) in &func.function.blocks {
        if bid == entry {
            continue;
        }
        let insns = &block.insns;
        let mut i = 0usize;
        while let Some((end, _stored_reg)) = split_push_range(insns, i) {
            for idx in i..=end {
                marked.insert((bid, idx));
            }
            i = end + 1;
            i = scan_mov_rbp_rsp(insns, i, bid, marked);
            if i >= 8 {
                break;
            }
        }
    }
}

/// Scan for `push rbp` pattern: STORE to stack of RBP, then RSP decrement.
fn scan_push_rbp(
    insns: &[unlace_ir::IrInsn],
    mut i: usize,
    bid: BlockId,
    marked: &mut std::collections::BTreeSet<(BlockId, usize)>,
) -> usize {
    if i >= insns.len() {
        return i;
    }

    // Lifted x86 `push rbp`: `tmp = RSP - 8; RSP = tmp; STORE(tmp, RBP)`.
    if let Some((start, end)) = (i..=i + 3).find_map(|start| {
        split_push_range(insns, start)
            .filter(|&(_, reg)| reg == RBP)
            .map(|(end, _)| (start, end))
    }) {
        for idx in start..=end {
            marked.insert((bid, idx));
        }
        return end + 1;
    }

    // Look for STORE of RBP to a stack address involving RSP.
    let store_idx = find_store_of_reg(insns, i, RBP);
    if let Some(si) = store_idx {
        // Next: look for RSP = RSP - 8 (the push decrement).
        let dec_idx = find_rsp_decrement(insns, si + 1, 8);
        if let Some(di) = dec_idx {
            // Mark all instructions from i..=di as frame setup.
            for idx in si..=di {
                marked.insert((bid, idx));
            }
            i = di + 1;
        } else {
            // Sometimes the decrement comes before the store.
            // Check if RSP decrement is at position si-1.
            if si > 0 && find_rsp_decrement(&insns[si - 1..si], 0, 8).is_some() {
                marked.insert((bid, si - 1));
                marked.insert((bid, si));
                i = si + 1;
            }
        }
    }

    i
}

fn split_push_range(insns: &[unlace_ir::IrInsn], start: usize) -> Option<(usize, u64)> {
    if start + 2 >= insns.len() || start > 3 {
        return None;
    }

    let sub = &insns[start];
    if sub.op != IrOp::IntSub || sub.inputs.len() != 2 {
        return None;
    }
    let temp = sub.output?;
    if temp.space != SpaceId::Unique && !is_reg(&temp, RSP) {
        return None;
    }
    if !is_reg(&sub.inputs[0], RSP) || !is_const(&sub.inputs[1]) || sub.inputs[1].offset != 8 {
        return None;
    }

    let copy = &insns[start + 1];
    if copy.op != IrOp::Copy
        || !copy.output.is_some_and(|out| is_reg(&out, RSP))
        || copy.inputs.first() != Some(&temp)
    {
        return None;
    }

    let store = &insns[start + 2];
    if store.op != IrOp::Store || store.inputs.len() < 3 {
        return None;
    }
    if store.inputs[1] != temp {
        return None;
    }
    let value = store.inputs[2];
    if value.space != SpaceId::Register {
        return None;
    }
    if value.offset != RBP && !is_callee_saved(&value) {
        return None;
    }
    Some((start + 2, value.offset))
}

/// Scan for `mov rbp, rsp` pattern: COPY(RSP) → RBP or INT_ADD(RSP, 0) → RBP.
fn scan_mov_rbp_rsp(
    insns: &[unlace_ir::IrInsn],
    mut i: usize,
    bid: BlockId,
    marked: &mut std::collections::BTreeSet<(BlockId, usize)>,
) -> usize {
    if i >= insns.len() {
        return i;
    }

    // Search a small window for COPY RSP→RBP (or INT_SUB RSP, 0 → RBP).
    let window_end = (i + 4).min(insns.len());
    for idx in i..window_end {
        let insn = &insns[idx];
        let output_is_rbp = insn.output.is_some_and(|o| is_reg(&o, RBP));

        if output_is_rbp {
            let is_copy_rsp =
                insn.op == IrOp::Copy && !insn.inputs.is_empty() && is_reg(&insn.inputs[0], RSP);

            let is_sub_zero = insn.op == IrOp::IntSub
                && insn.inputs.len() == 2
                && is_reg(&insn.inputs[0], RSP)
                && is_const(&insn.inputs[1])
                && insn.inputs[1].offset == 0;

            let is_add_zero = insn.op == IrOp::IntAdd
                && insn.inputs.len() == 2
                && ((is_reg(&insn.inputs[0], RSP)
                    && is_const(&insn.inputs[1])
                    && insn.inputs[1].offset == 0)
                    || (is_reg(&insn.inputs[1], RSP)
                        && is_const(&insn.inputs[0])
                        && insn.inputs[0].offset == 0));

            if is_copy_rsp || is_sub_zero || is_add_zero {
                marked.insert((bid, idx));
                i = idx + 1;
                return i;
            }
        }
    }

    i
}

/// Scan for stack allocation: `RSP = RSP - const_N`.
fn scan_stack_alloc(
    insns: &[unlace_ir::IrInsn],
    mut i: usize,
    bid: BlockId,
    marked: &mut std::collections::BTreeSet<(BlockId, usize)>,
) -> usize {
    if i >= insns.len() {
        return i;
    }

    // Look in a small window for RSP = RSP - N where N > 8 (stack frame alloc).
    let window_end = (i + 4).min(insns.len());
    for idx in i..window_end {
        let insn = &insns[idx];
        let output_is_rsp = insn.output.is_some_and(|o| is_reg(&o, RSP));

        if output_is_rsp
            && insn.op == IrOp::IntSub
            && insn.inputs.len() == 2
            && is_reg(&insn.inputs[0], RSP)
            && is_const(&insn.inputs[1])
        {
            let alloc_size = insn.inputs[1].offset;
            // Stack allocation is typically > 0 (sub rsp, N).
            if alloc_size > 0 {
                marked.insert((bid, idx));
                i = idx + 1;
                return i;
            }
        }
    }

    i
}

/// Scan for callee-saved register pushes: STORE of callee-saved reg + RSP
/// decrement, repeated consecutively.
fn scan_callee_saved_pushes(
    insns: &[unlace_ir::IrInsn],
    mut i: usize,
    bid: BlockId,
    marked: &mut std::collections::BTreeSet<(BlockId, usize)>,
) -> usize {
    loop {
        if i >= insns.len() {
            break;
        }

        // Pattern: STORE(addr, callee_saved_reg) then RSP -= 8
        if let Some(si) = find_store_of_callee_saved(insns, i) {
            let dec_idx = find_rsp_decrement(insns, si + 1, 8);
            if let Some(di) = dec_idx {
                for idx in si..=di {
                    marked.insert((bid, idx));
                }
                i = di + 1;
                continue;
            }
            // Also try: RSP -= 8 then STORE
            if si > i && find_rsp_decrement(&insns[si - 1..si], 0, 8).is_some() {
                marked.insert((bid, si - 1));
                marked.insert((bid, si));
                i = si + 1;
                continue;
            }
        }

        break;
    }

    i
}

/// Scan for stack canary: LOAD from segment register offset 0x28, followed
/// by STORE to stack.
fn scan_stack_canary(
    insns: &[unlace_ir::IrInsn],
    mut i: usize,
    bid: BlockId,
    marked: &mut std::collections::BTreeSet<(BlockId, usize)>,
) -> usize {
    if i >= insns.len() {
        return i;
    }

    // Look for LOAD from FS:0x28 pattern in a wider window.
    let window_end = (i + 8).min(insns.len());
    for idx in i..window_end {
        let insn = &insns[idx];
        if insn.op == IrOp::Load && is_canary_load(insn) {
            marked.insert((bid, idx));
            // Look for the subsequent STORE of the loaded value.
            let store_window = (idx + 1 + 4).min(insns.len());
            for sidx in (idx + 1)..store_window {
                if insns[sidx].op == IrOp::Store {
                    marked.insert((bid, sidx));
                    i = sidx + 1;
                    return i;
                }
            }
            i = idx + 1;
            return i;
        }
    }

    i
}

/// Check if a LOAD instruction loads from FS_BASE + 0x28 (stack canary).
fn is_canary_load(insn: &unlace_ir::IrInsn) -> bool {
    // The canary load typically involves a constant address containing 0x28
    // or an addition to a segment base.
    for input in &insn.inputs {
        if is_const(input) && input.offset == 0x28 {
            return true;
        }
    }
    false
}

/// Detect epilogue patterns in exit blocks (blocks with RETURN).
fn detect_epilogues(func: &SsaFunction, marked: &mut std::collections::BTreeSet<(BlockId, usize)>) {
    let blocks_with_return: Vec<BlockId> = func
        .function
        .blocks
        .iter()
        .filter(|(_, block)| block.insns.iter().any(|insn| insn.op == IrOp::Return))
        .map(|(&bid, _)| bid)
        .collect();

    for bid in blocks_with_return {
        detect_epilogue_in_block(func, bid, marked);
    }
}

/// Detect epilogue patterns in a single exit block, scanning backwards
/// from the RETURN instruction.
fn detect_epilogue_in_block(
    func: &SsaFunction,
    bid: BlockId,
    marked: &mut std::collections::BTreeSet<(BlockId, usize)>,
) {
    let block = match func.function.blocks.get(&bid) {
        Some(b) => b,
        None => return,
    };

    let insns = &block.insns;
    if insns.is_empty() {
        return;
    }

    // Find the RETURN instruction (usually the last one).
    let ret_idx = match insns.iter().rposition(|insn| insn.op == IrOp::Return) {
        Some(idx) => idx,
        None => return,
    };

    // Scan backwards from just before RETURN looking for epilogue patterns.
    let mut i = ret_idx;

    // Phase 1: Frame pointer restore (leave or pop rbp)
    // Pattern: RSP = RBP; RBP = LOAD(RSP); RSP = RSP + 8
    // Or: RSP = COPY(RBP); then pop sequence
    // Or: RBP = LOAD(stack_addr); RSP = RSP + 8
    i = scan_epilogue_frame_restore(insns, i, bid, marked);

    // Phase 2: Callee-saved restores (pop pattern, scanning backwards)
    // Pattern: REG = LOAD(stack_addr); RSP = RSP + 8
    scan_epilogue_callee_restores(insns, i, bid, marked);
}

/// Scan backwards for frame pointer restore in epilogue.
fn scan_epilogue_frame_restore(
    insns: &[unlace_ir::IrInsn],
    mut i: usize,
    bid: BlockId,
    marked: &mut std::collections::BTreeSet<(BlockId, usize)>,
) -> usize {
    if i == 0 {
        return i;
    }

    // Look for RSP = COPY(RBP) or RSP = RBP pattern (leave instruction first half).
    // Then RBP = LOAD(addr) + RSP += 8.
    let scan_start = i.saturating_sub(6);

    for idx in (scan_start..i).rev() {
        let insn = &insns[idx];
        let output_is_rsp = insn.output.is_some_and(|o| is_reg(&o, RSP));

        // RSP = COPY(RBP) — first part of `leave`.
        if output_is_rsp
            && insn.op == IrOp::Copy
            && !insn.inputs.is_empty()
            && is_reg(&insn.inputs[0], RBP)
        {
            marked.insert((bid, idx));
            // Look for subsequent RBP = LOAD(...) and RSP += 8.
            mark_pop_rbp_after(insns, idx + 1, i, bid, marked);
            i = idx;
            return i;
        }

        // RSP = INT_ADD(RBP, 0) — alternative encoding.
        if output_is_rsp
            && insn.op == IrOp::IntAdd
            && insn.inputs.len() == 2
            && is_reg(&insn.inputs[0], RBP)
            && is_const(&insn.inputs[1])
            && insn.inputs[1].offset == 0
        {
            marked.insert((bid, idx));
            mark_pop_rbp_after(insns, idx + 1, i, bid, marked);
            i = idx;
            return i;
        }
    }

    // Lifted x86 `pop rbp`: `tmp = LOAD(RSP); t = RSP + 8; RSP = t; RBP = tmp`.
    for idx in (scan_start..i).rev() {
        if let Some(end) = lowered_pop_end(insns, idx, RBP)
            && end < i
        {
            for marked_idx in idx..=end {
                marked.insert((bid, marked_idx));
            }
            return idx;
        }
    }

    // Also check for standalone pop rbp pattern:
    // RBP = LOAD(addr); RSP = RSP + 8
    for idx in (scan_start..i).rev() {
        let insn = &insns[idx];
        let output_is_rbp = insn.output.is_some_and(|o| is_reg(&o, RBP));

        if output_is_rbp && insn.op == IrOp::Load {
            // Check next instruction for RSP += 8.
            if idx + 1 < i {
                let next = &insns[idx + 1];
                if is_rsp_increment(next, 8) {
                    marked.insert((bid, idx));
                    marked.insert((bid, idx + 1));
                    i = idx;
                    return i;
                }
            }
        }
    }

    i
}

/// Mark `pop rbp` instructions after a `leave`-style RSP = RBP.
fn mark_pop_rbp_after(
    insns: &[unlace_ir::IrInsn],
    from: usize,
    limit: usize,
    bid: BlockId,
    marked: &mut std::collections::BTreeSet<(BlockId, usize)>,
) {
    let end = limit.min(insns.len());
    for idx in from..end {
        if marked.contains(&(bid, idx)) {
            continue;
        }
        let insn = &insns[idx];

        // RBP = LOAD(addr) — loading saved RBP.
        if insn.output.is_some_and(|o| is_reg(&o, RBP)) && insn.op == IrOp::Load {
            marked.insert((bid, idx));
            continue;
        }

        // Lowered leave form: tmp = LOAD(addr); RBP = COPY(tmp).
        if insn.op == IrOp::Load
            && let Some(tmp) = insn.output
            && idx + 1 < end
            && copy_from_to(&insns[idx + 1], tmp, RBP)
        {
            marked.insert((bid, idx));
            marked.insert((bid, idx + 1));
            continue;
        }

        // RSP = RSP + 8 — stack pointer increment (pop).
        if is_rsp_increment(insn, 8) {
            marked.insert((bid, idx));
            continue;
        }

        // Lowered pop form: tmp = RSP + 8; RSP = COPY(tmp).
        if is_rsp_increment_temp(insn, 8)
            && let Some(tmp) = insn.output
            && idx + 1 < end
            && copy_from_to(&insns[idx + 1], tmp, RSP)
        {
            marked.insert((bid, idx));
            marked.insert((bid, idx + 1));
            continue;
        }

        // Any RSP adjustment via INT_ADD.
        if insn.output.is_some_and(|o| is_reg(&o, RSP)) && insn.op == IrOp::IntAdd {
            marked.insert((bid, idx));
            continue;
        }

        break;
    }
}

/// Match the lifted `pop reg` sequence starting at `start`:
/// `tmp = LOAD(RSP); t = RSP + 8; RSP = COPY(t); REG = COPY(tmp)`.
/// Returns the index of the final copy.
fn lowered_pop_end(insns: &[unlace_ir::IrInsn], start: usize, reg: u64) -> Option<usize> {
    let [load, inc, sp_copy, reg_copy] = insns.get(start..start + 4)? else {
        return None;
    };
    let tmp = load.output?;
    let reads_rsp = load.op == IrOp::Load && load.inputs.get(1).is_some_and(|a| is_reg(a, RSP));
    let pops = reads_rsp
        && is_rsp_increment_temp(inc, 8)
        && copy_from_to(sp_copy, inc.output?, RSP)
        && copy_from_to(reg_copy, tmp, reg);
    pops.then_some(start + 3)
}

fn copy_from_to(insn: &unlace_ir::IrInsn, src: Varnode, dst_reg: u64) -> bool {
    insn.op == IrOp::Copy
        && insn.output.is_some_and(|o| is_reg(&o, dst_reg))
        && insn.inputs.first().is_some_and(|input| *input == src)
}

/// Scan backwards for callee-saved register restores.
fn scan_epilogue_callee_restores(
    insns: &[unlace_ir::IrInsn],
    limit: usize,
    bid: BlockId,
    marked: &mut std::collections::BTreeSet<(BlockId, usize)>,
) {
    if limit == 0 {
        return;
    }

    let scan_start = limit.saturating_sub(20);

    // Walk backwards looking for consecutive pop patterns:
    //   REG = LOAD(addr); RSP = RSP + 8
    let mut idx = limit;
    while idx > scan_start {
        // Check for RSP increment first (it comes after the LOAD in sequence
        // but we're scanning backwards).
        if idx >= 2 {
            let maybe_rsp = &insns[idx - 1];
            let maybe_load = &insns[idx - 2];

            if is_rsp_increment(maybe_rsp, 8)
                && maybe_load.op == IrOp::Load
                && maybe_load.output.is_some_and(|o| is_callee_saved(&o))
            {
                marked.insert((bid, idx - 2));
                marked.insert((bid, idx - 1));
                idx -= 2;
                continue;
            }
        }

        // Also check single-instruction pattern where RSP is implicitly adjusted.
        if idx >= 1 {
            let maybe_load = &insns[idx - 1];
            if maybe_load.op == IrOp::Load && maybe_load.output.is_some_and(|o| is_callee_saved(&o))
            {
                marked.insert((bid, idx - 1));
                idx -= 1;
                continue;
            }

            // RSP = RSP + N (stack deallocation at function exit).
            if is_rsp_increment(maybe_load, 0) {
                // Any RSP add is epilogue in this context.
                marked.insert((bid, idx - 1));
                idx -= 1;
                continue;
            }
        }

        break;
    }
}

/// Check if instruction is `RSP = RSP + N` (or RSP = INT_ADD(RSP, N)).
/// If `expected` is 0, any positive increment matches.
fn is_rsp_increment(insn: &unlace_ir::IrInsn, expected: u64) -> bool {
    let output_is_rsp = insn.output.is_some_and(|o| is_reg(&o, RSP));
    if !output_is_rsp || insn.op != IrOp::IntAdd || insn.inputs.len() != 2 {
        return false;
    }

    if is_reg(&insn.inputs[0], RSP) && is_const(&insn.inputs[1]) {
        return expected == 0 || insn.inputs[1].offset == expected;
    }
    if is_reg(&insn.inputs[1], RSP) && is_const(&insn.inputs[0]) {
        return expected == 0 || insn.inputs[0].offset == expected;
    }

    false
}

fn is_rsp_increment_temp(insn: &unlace_ir::IrInsn, expected: u64) -> bool {
    if insn.output.is_none() || insn.op != IrOp::IntAdd || insn.inputs.len() != 2 {
        return false;
    }

    if is_reg(&insn.inputs[0], RSP) && is_const(&insn.inputs[1]) {
        return expected == 0 || insn.inputs[1].offset == expected;
    }
    if is_reg(&insn.inputs[1], RSP) && is_const(&insn.inputs[0]) {
        return expected == 0 || insn.inputs[0].offset == expected;
    }

    false
}

/// Find a STORE instruction at position `start` or later that stores a
/// specific register to an address (typically RSP-relative).
fn find_store_of_reg(insns: &[unlace_ir::IrInsn], start: usize, reg_offset: u64) -> Option<usize> {
    let window = (start + 4).min(insns.len());
    for idx in start..window {
        let insn = &insns[idx];
        if insn.op == IrOp::Store {
            // STORE(space, addr, value) — value is typically inputs[2].
            // In P-code: STORE space, addr, src.
            // Check all inputs for the register being stored.
            for input in &insn.inputs {
                if is_reg(input, reg_offset) {
                    return Some(idx);
                }
            }
        }
    }
    None
}

/// Find a STORE of any callee-saved register starting from position `start`.
fn find_store_of_callee_saved(insns: &[unlace_ir::IrInsn], start: usize) -> Option<usize> {
    let window = (start + 4).min(insns.len());
    for idx in start..window {
        let insn = &insns[idx];
        if insn.op == IrOp::Store {
            for input in &insn.inputs {
                if is_callee_saved(input) {
                    return Some(idx);
                }
            }
        }
    }
    None
}

/// Find an RSP decrement (`RSP = RSP - N`) starting from position `start`.
fn find_rsp_decrement(insns: &[unlace_ir::IrInsn], start: usize, expected: u64) -> Option<usize> {
    let window = (start + 3).min(insns.len());
    for idx in start..window {
        let insn = &insns[idx];
        let output_is_rsp = insn.output.is_some_and(|o| is_reg(&o, RSP));
        if output_is_rsp
            && insn.op == IrOp::IntSub
            && insn.inputs.len() == 2
            && is_reg(&insn.inputs[0], RSP)
            && is_const(&insn.inputs[1])
            && (expected == 0 || insn.inputs[1].offset == expected)
        {
            return Some(idx);
        }
    }
    None
}

#[cfg(test)]
mod tests {
    use smallvec::smallvec;

    use unlace_ir::ssa::{SsaFunction, build_ssa};
    use unlace_ir::{BasicBlock, BlockId, Function, IrInsn, IrOp, Varnode};

    use super::*;
    use crate::pass::Pass;

    /// Build a single-block SsaFunction from a list of instructions.
    fn make_single_block_ssa(insns: Vec<IrInsn>) -> SsaFunction {
        let mut func = Function::new("test", BlockId(0), 0x1000);
        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns = insns;
        bb.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![Varnode::constant(0, 8)],
            0x1FFF,
        ));
        func.insert_block(bb);
        build_ssa(func)
    }

    fn rsp() -> Varnode {
        Varnode::reg(RSP, 8)
    }
    fn rbp() -> Varnode {
        Varnode::reg(RBP, 8)
    }
    fn r15() -> Varnode {
        Varnode::reg(R15, 8)
    }
    fn r14() -> Varnode {
        Varnode::reg(R14, 8)
    }
    #[allow(dead_code)]
    fn rbx() -> Varnode {
        Varnode::reg(RBX, 8)
    }
    fn c8() -> Varnode {
        Varnode::constant(8, 8)
    }
    fn c48() -> Varnode {
        Varnode::constant(48, 8)
    }
    fn addr() -> Varnode {
        Varnode::ram(0x7fff0000, 8)
    }

    /// Simulate `push rbp`: STORE(ram, addr, RBP); RSP = RSP - 8
    fn push_rbp_insns() -> Vec<IrInsn> {
        vec![
            IrInsn::without_output(
                IrOp::Store,
                smallvec![Varnode::ram(0, 8), addr(), rbp()],
                0x1000,
            ),
            IrInsn::with_output(IrOp::IntSub, rsp(), smallvec![rsp(), c8()], 0x1000),
        ]
    }

    /// Simulate `mov rbp, rsp`: RBP = COPY(RSP)
    fn mov_rbp_rsp_insn() -> IrInsn {
        IrInsn::with_output(IrOp::Copy, rbp(), smallvec![rsp()], 0x1001)
    }

    /// Simulate `sub rsp, 48`: RSP = RSP - 48
    fn sub_rsp_48_insn() -> IrInsn {
        IrInsn::with_output(IrOp::IntSub, rsp(), smallvec![rsp(), c48()], 0x1004)
    }

    #[test]
    fn test_prologue_detected() {
        // Entry block: push rbp; mov rbp, rsp → marked as frame setup.
        let mut insns = push_rbp_insns();
        insns.push(mov_rbp_rsp_insn());

        // Add a non-prologue instruction.
        let r0 = Varnode::reg(0, 8);
        let c1 = Varnode::constant(1, 8);
        insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            r0,
            smallvec![r0, c1],
            0x1010,
        ));

        let mut ssa = make_single_block_ssa(insns);
        let pass = PrologueElimPass;
        let changed = pass.run(&mut ssa).expect("pass should succeed");

        assert!(changed, "pass should mark prologue instructions");

        // Instructions 0, 1, 2 should be marked (push rbp + mov rbp, rsp).
        assert!(
            ssa.frame_setup_insns.contains(&(BlockId(0), 0)),
            "STORE (push rbp) should be marked",
        );
        assert!(
            ssa.frame_setup_insns.contains(&(BlockId(0), 1)),
            "RSP decrement should be marked",
        );
        assert!(
            ssa.frame_setup_insns.contains(&(BlockId(0), 2)),
            "COPY RSP→RBP should be marked",
        );

        // Instruction 3 (INT_ADD) should NOT be marked.
        assert!(
            !ssa.frame_setup_insns.contains(&(BlockId(0), 3)),
            "non-prologue INT_ADD should not be marked",
        );
    }

    #[test]
    fn test_prologue_suppressed_in_output() {
        // Build a function with prologue + real work.
        let mut insns = push_rbp_insns();
        insns.push(mov_rbp_rsp_insn());
        insns.push(sub_rsp_48_insn());

        // Real work: r0 = r0 + 1
        let r0 = Varnode::reg(0, 8);
        let c1 = Varnode::constant(1, 8);
        insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            r0,
            smallvec![r0, c1],
            0x1010,
        ));

        let mut ssa = make_single_block_ssa(insns);
        let pass = PrologueElimPass;
        pass.run(&mut ssa).expect("pass should succeed");

        // Verify that prologue insns are marked.
        assert!(
            ssa.frame_setup_insns.len() >= 3,
            "at least push rbp, rsp-=8, copy rsp→rbp, sub rsp should be marked",
        );

        // The real work instruction should NOT be in frame_setup_insns.
        // Instruction index for INT_ADD is 4 (0=store, 1=sub, 2=copy, 3=sub rsp 48, 4=int_add).
        assert!(
            !ssa.frame_setup_insns.contains(&(BlockId(0), 4)),
            "real INT_ADD instruction should not be suppressed",
        );
    }

    #[test]
    fn test_non_prologue_kept() {
        // Block with only non-prologue instructions.
        let r0 = Varnode::reg(0, 8);
        let r8 = Varnode::reg(8, 8);
        let c1 = Varnode::constant(1, 8);

        let insns = vec![
            IrInsn::with_output(IrOp::IntAdd, r0, smallvec![r8, c1], 0x1000),
            IrInsn::with_output(IrOp::IntSub, r8, smallvec![r0, c1], 0x1004),
        ];

        let mut ssa = make_single_block_ssa(insns);
        let pass = PrologueElimPass;
        let changed = pass.run(&mut ssa).expect("pass should succeed");

        assert!(!changed, "no prologue means no changes");
        assert!(
            ssa.frame_setup_insns.is_empty(),
            "no instructions should be marked as frame setup",
        );
    }

    #[test]
    fn test_prologue_with_callee_saved_pushes() {
        let mut insns = push_rbp_insns();
        insns.push(mov_rbp_rsp_insn());
        insns.push(sub_rsp_48_insn());

        // push r15: STORE(..., R15); RSP -= 8
        insns.push(IrInsn::without_output(
            IrOp::Store,
            smallvec![Varnode::ram(0, 8), addr(), r15()],
            0x1008,
        ));
        insns.push(IrInsn::with_output(
            IrOp::IntSub,
            rsp(),
            smallvec![rsp(), c8()],
            0x1008,
        ));

        // push r14: STORE(..., R14); RSP -= 8
        insns.push(IrInsn::without_output(
            IrOp::Store,
            smallvec![Varnode::ram(0, 8), addr(), r14()],
            0x100a,
        ));
        insns.push(IrInsn::with_output(
            IrOp::IntSub,
            rsp(),
            smallvec![rsp(), c8()],
            0x100a,
        ));

        // Real instruction after pushes.
        let r0 = Varnode::reg(0, 8);
        let c1 = Varnode::constant(1, 8);
        insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            r0,
            smallvec![r0, c1],
            0x1020,
        ));

        let mut ssa = make_single_block_ssa(insns);
        let pass = PrologueElimPass;
        pass.run(&mut ssa).expect("pass should succeed");

        // All prologue instructions should be marked (indices 0-7).
        for idx in 0..8 {
            assert!(
                ssa.frame_setup_insns.contains(&(BlockId(0), idx)),
                "instruction {} should be marked as frame setup",
                idx,
            );
        }

        // The real INT_ADD at index 8 should not be marked.
        assert!(
            !ssa.frame_setup_insns.contains(&(BlockId(0), 8)),
            "real instruction at index 8 should not be marked",
        );
    }

    #[test]
    fn test_split_guard_block_push_rbp_detected() {
        let tmp = Varnode::unique(0x100, 8);
        let mut func = Function::new("split_guard", BlockId(0), 0x1000);

        let mut entry = BasicBlock::new(BlockId(0));
        entry.successors.push(BlockId(1));

        let mut prologue = BasicBlock::new(BlockId(1));
        prologue.insns.push(IrInsn::with_output(
            IrOp::IntSub,
            tmp,
            smallvec![rsp(), c8()],
            0x1010,
        ));
        prologue.insns.push(IrInsn::with_output(
            IrOp::Copy,
            rsp(),
            smallvec![tmp],
            0x1011,
        ));
        prologue.insns.push(IrInsn::without_output(
            IrOp::Store,
            smallvec![Varnode::ram(0, 8), tmp, rbp()],
            0x1012,
        ));
        prologue.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            Varnode::unique(0x108, 8),
            smallvec![Varnode::reg(0, 8), Varnode::constant(1, 8)],
            0x1014,
        ));
        prologue.insns.push(IrInsn::with_output(
            IrOp::IntEqual,
            Varnode::unique(0x110, 1),
            smallvec![Varnode::reg(0, 8), Varnode::constant(0, 8)],
            0x1016,
        ));
        prologue.insns.push(IrInsn::with_output(
            IrOp::Copy,
            rbp(),
            smallvec![rsp()],
            0x1017,
        ));
        prologue.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            Varnode::reg(0, 8),
            smallvec![Varnode::reg(0, 8), Varnode::constant(1, 8)],
            0x1018,
        ));
        prologue.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![Varnode::constant(0, 8)],
            0x1020,
        ));

        func.insert_block(entry);
        func.insert_block(prologue);
        let mut ssa = build_ssa(func);

        PrologueElimPass.run(&mut ssa).expect("pass should succeed");

        for idx in 0..=2 {
            assert!(
                ssa.frame_setup_insns.contains(&(BlockId(1), idx)),
                "split prologue instruction {idx} should be marked, got {:?}",
                ssa.frame_setup_insns
            );
        }
        assert!(
            !ssa.frame_setup_insns.contains(&(BlockId(1), 3)),
            "intervening guard work in split block must not be marked"
        );
        assert!(
            ssa.frame_setup_insns.contains(&(BlockId(1), 5)),
            "delayed RBP = RSP setup should be marked"
        );
        assert!(
            !ssa.frame_setup_insns.contains(&(BlockId(1), 6)),
            "real work after delayed RBP setup must not be marked"
        );
    }

    #[test]
    fn test_idempotent() {
        let mut insns = push_rbp_insns();
        insns.push(mov_rbp_rsp_insn());

        let mut ssa = make_single_block_ssa(insns);
        let pass = PrologueElimPass;

        let changed1 = pass.run(&mut ssa).expect("pass 1");
        assert!(changed1);

        let changed2 = pass.run(&mut ssa).expect("pass 2");
        assert!(!changed2, "second run should be a no-op");
    }
}
