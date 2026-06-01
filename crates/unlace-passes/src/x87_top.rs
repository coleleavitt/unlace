//! x87 FPU top-of-stack (TOP) tracking.
//!
//! The x86 lifter emits x87 operations as `Callother` instructions that
//! reference the eight FPU stack slots `ST(0)..ST(7)` as *fixed* register
//! varnodes (offset `FPU_BASE + i*FPU_STRIDE`, see
//! `unlace-lift-x86::register_file`). But `ST(i)` is **relative** to a 3-bit
//! top-of-stack pointer (`top(f) = fsw[13:11]`, Intel SDM Vol.1 ch.8 / the
//! Saarland formal x87 spec — see `docs/x87-top-tracking-research.md`):
//!
//! ```text
//!     ST(i)  ==  physical R[(TOP + i) mod 8]
//! ```
//!
//! Without modelling TOP, two consecutive `FLD`s both write `ST(0)` (the first
//! def is dead/overwritten) and arithmetic reads `ST(1)` which no push ever
//! defined (read-uninitialised). This pass runs on the **pre-SSA** lifted
//! `Function`, statically tracks TOP through the CFG, and rewrites every x87
//! `ST(i)` operand to its concrete physical slot `R[(TOP+i) mod 8]`. After the
//! rewrite the colliding-`ST0` artifacts disappear and ordinary
//! copy-prop / DCE / folding clean up naturally.
//!
//! TOP starts at 0 at function entry (the value is arbitrary — only *relative*
//! slot identity matters, and a balanced function returns to its entry TOP).
//! At a CFG join the predecessors' exit-TOPs must agree; if they don't
//! (irreducible control flow, hand-written asm) the block is left UNTOUCHED —
//! a conservative fallback that is no worse than the pre-pass behaviour.

use std::collections::BTreeMap;

use unlace_ir::{Function, IrOp, SpaceId, Varnode};

/// Base register-file offset of the x87 stack slots. Mirrors
/// `unlace-lift-x86::register_file::FPU_BASE`.
const FPU_BASE: u64 = 0x300;
/// Byte stride between consecutive x87 stack slots. Mirrors
/// `unlace-lift-x86::register_file::FPU_STRIDE`.
const FPU_STRIDE: u64 = 16;
const FPU_SLOTS: u64 = 8;

fn env_flag_enabled(name: &str) -> bool {
    std::env::var_os(name)
        .map(|v| !v.is_empty() && v != "0")
        .unwrap_or(false)
}

fn x87_trace_enabled() -> bool {
    env_flag_enabled("UNLACE_X87_TRACE")
        || env_flag_enabled("UNLACE_TYPE_TRACE")
        || env_flag_enabled("UNLACE_TRACE_ALL")
}

fn x87_trace_verbose_enabled() -> bool {
    env_flag_enabled("UNLACE_X87_TRACE_VERBOSE")
        || env_flag_enabled("UNLACE_TYPE_TRACE_VERBOSE")
        || env_flag_enabled("UNLACE_TRACE_VERBOSE")
        || env_flag_enabled("UNLACE_TRACE_ALL")
}

fn x87_trace_filter() -> Option<String> {
    std::env::var("UNLACE_X87_TRACE_FILTER")
        .ok()
        .or_else(|| std::env::var("UNLACE_TYPE_TRACE_FILTER").ok())
        .or_else(|| std::env::var("UNLACE_TRACE_FILTER").ok())
        .filter(|s| !s.is_empty())
}

fn x87_trace_line(func_name: &str, message: impl std::fmt::Display) {
    if !x87_trace_enabled() {
        return;
    }
    let message = message.to_string();
    if let Some(filter) = x87_trace_filter()
        && !func_name.contains(&filter)
        && !message.contains(&filter)
    {
        return;
    }
    eprintln!("[unlace x87-top] func={func_name} {message}");
}

fn x87_trace_line_verbose(func_name: &str, message: impl std::fmt::Display) {
    if x87_trace_verbose_enabled() {
        x87_trace_line(func_name, message);
    }
}

/// Stack effect of an x87 op on TOP, keyed by the `Callother` tag constant in
/// `inputs[0]` (mirrors `unlace-lift-x86::ops::fpu::fpu_tag`).
#[derive(Clone, Copy, PartialEq, Eq, Debug)]
enum StackEffect {
    /// `TOP -= 1` (a load/push: FLD/FILD/constant loads).
    Push,
    /// `TOP += 1` (a store-and-pop or popping arithmetic: FSTP/FADDP/…).
    Pop,
    /// `TOP += 2` (FCOMPP/FUCOMPP — compare then pop twice).
    PopTwice,
    /// No TOP change (FST without pop, non-popping arith/compare, FXCH).
    None,
}

/// Classify an x87 `Callother` tag into its TOP effect. Tag values are the
/// stable lifter ABI from `unlace-lift-x86::ops::fpu::fpu_tag`; kept in sync by
/// the `x87_tag_values_match_lifter` doc and the lift-x86 unit tests.
fn stack_effect(tag: u64) -> Option<StackEffect> {
    match tag {
        // FLD — push.
        0x310 => Some(StackEffect::Push),
        // FSTP — store + pop.
        0x311 => Some(StackEffect::Pop),
        // FADD / FSUB / FMUL / FDIV / FCOM (non-popping) — no TOP change.
        0x312..=0x316 => Some(StackEffect::None),
        // FXCH — exchange, no TOP change.
        0x317 => Some(StackEffect::None),
        // FST (no pop) — no TOP change.
        0x318 => Some(StackEffect::None),
        // Popping arithmetic: FADDP/FSUBP/FSUBRP/FMULP/FDIVP/FDIVRP — pop once.
        0x360..=0x365 => Some(StackEffect::Pop),
        // FCOMP / FUCOMP — compare then pop once.
        0x366 => Some(StackEffect::Pop),
        // FCOMPP / FUCOMPP — compare then pop twice.
        0x367 => Some(StackEffect::PopTwice),
        _ => None,
    }
}

/// True when `vn` is one of the eight fixed x87 stack-slot register varnodes.
fn st_slot_index(vn: &Varnode) -> Option<u64> {
    if vn.space != SpaceId::Register || vn.offset < FPU_BASE {
        return None;
    }
    let rel = vn.offset - FPU_BASE;
    if !rel.is_multiple_of(FPU_STRIDE) {
        return None;
    }
    let idx = rel / FPU_STRIDE;
    (idx < FPU_SLOTS).then_some(idx)
}

/// Physical slot varnode `R[phys]` preserving the original size.
fn phys_slot(phys: u64, size: u8) -> Varnode {
    Varnode::new(SpaceId::Register, FPU_BASE + phys * FPU_STRIDE, size)
}

/// True when an instruction is an x87 `Callother` (its `inputs[0]` is a const
/// tag we recognise).
fn x87_tag(insn: &unlace_ir::IrInsn) -> Option<u64> {
    if insn.op != IrOp::Callother {
        return None;
    }
    let tag = insn.inputs.first()?;
    if tag.space != SpaceId::Const {
        return None;
    }
    stack_effect(tag.offset).map(|_| tag.offset)
}

/// Rewrite x87 `ST(i)` references to concrete physical slots by statically
/// tracking TOP across the CFG. Returns the number of instructions rewritten.
///
/// Operates on the pre-SSA `Function`. Idempotent only in the sense that a
/// second run over already-rewritten code with the same entry TOP is a no-op
/// for straight-line code; it is intended to run once, before `build_ssa`.
pub fn rewrite_x87_top(func: &mut Function) -> usize {
    // Cheap bail: skip functions with no x87 ops at all.
    let x87_insns = func
        .blocks
        .values()
        .map(|b| b.insns.iter().filter(|i| x87_tag(i).is_some()).count())
        .sum::<usize>();
    if x87_insns == 0 {
        x87_trace_line_verbose(&func.name, "skip reason=no-x87-callothers");
        return 0;
    }

    let block_ids: Vec<_> = func.blocks.keys().copied().collect();
    x87_trace_line(
        &func.name,
        format!("start blocks={} x87_insns={x87_insns}", block_ids.len()),
    );

    // Predecessor map from successors.
    let mut preds: BTreeMap<unlace_ir::BlockId, Vec<unlace_ir::BlockId>> = BTreeMap::new();
    for (&bid, block) in &func.blocks {
        for &succ in &block.successors {
            preds.entry(succ).or_default().push(bid);
        }
    }
    x87_trace_line_verbose(&func.name, format!("preds={preds:?}"));

    // Forward dataflow to a fixed point: entry-TOP and exit-TOP per block.
    // `None` = unknown / conflicting (leave that block's x87 refs untouched).
    let mut entry_top: BTreeMap<unlace_ir::BlockId, Option<u8>> = BTreeMap::new();
    let mut exit_top: BTreeMap<unlace_ir::BlockId, Option<u8>> = BTreeMap::new();
    entry_top.insert(func.entry, Some(0));

    // Bounded fixpoint: TOP lattice is tiny (8 values + unknown), converges fast.
    for iter in 0..(block_ids.len() + 2) {
        let mut changed = false;
        for &bid in &block_ids {
            // Reconcile entry TOP from predecessor exits.
            let in_top = if bid == func.entry {
                Some(0u8)
            } else {
                reconcile(preds.get(&bid).map(Vec::as_slice).unwrap_or(&[]), &exit_top)
            };
            if entry_top.get(&bid).copied().flatten() != in_top {
                // Only widen toward a decision; record the new entry value.
                entry_top.insert(bid, in_top);
                changed = true;
            }
            // Propagate through the block (analysis only; no mutation here).
            let out = in_top.map(|t| block_exit_top(&func.blocks[&bid], t));
            if exit_top.get(&bid).copied().flatten() != out {
                exit_top.insert(bid, out);
                changed = true;
            }
            x87_trace_line_verbose(
                &func.name,
                format!(
                    "dataflow iter={iter} block={} entry_top={in_top:?} exit_top={out:?}",
                    bid.0
                ),
            );
        }
        if !changed {
            x87_trace_line_verbose(&func.name, format!("dataflow converged iter={iter}"));
            break;
        }
    }

    // Rewrite pass: for each block with a known entry TOP, remap ST(i) refs.
    let mut rewritten = 0usize;
    for &bid in &block_ids {
        let Some(top) = entry_top.get(&bid).copied().flatten() else {
            x87_trace_line(
                &func.name,
                format!(
                    "skip-block block={} reason=unknown-or-conflicting-top",
                    bid.0
                ),
            );
            continue;
        };
        let block = func.blocks.get_mut(&bid).expect("block id from keys");
        rewritten += rewrite_block_slots(&func.name, bid, block, top);
    }
    x87_trace_line(
        &func.name,
        format!("done rewritten={rewritten} entry_top={entry_top:?} exit_top={exit_top:?}"),
    );
    rewritten
}

/// Rewrite every x87 instruction in one block, threading TOP from `entry_top`.
/// Returns the count of instructions whose ST operands were remapped.
fn rewrite_block_slots(
    func_name: &str,
    bid: unlace_ir::BlockId,
    block: &mut unlace_ir::BasicBlock,
    entry_top: u8,
) -> usize {
    let mut top = entry_top;
    let mut rewritten = 0usize;
    for insn in &mut block.insns {
        let Some(tag) = x87_tag(insn) else {
            continue;
        };
        let effect = stack_effect(tag).expect("x87_tag validated effect");
        // A push decrements TOP *before* defining the new ST(0), so the
        // destination slot uses the post-decrement TOP. For every other op the
        // operands address the current ST positions and TOP advances after.
        let slot_top = match effect {
            StackEffect::Push => top.wrapping_sub(1) % 8,
            _ => top,
        };
        x87_trace_line_verbose(
            func_name,
            format!(
                "rewrite-insn block={} addr={:#x} tag={tag:#x} effect={effect:?} top_before={top} slot_top={slot_top}",
                bid.0, insn.addr
            ),
        );
        if remap_insn_slots(func_name, bid, insn, slot_top) {
            rewritten += 1;
        }
        top = apply_effect(top, effect);
        x87_trace_line_verbose(
            func_name,
            format!(
                "rewrite-insn-done block={} addr={:#x} tag={tag:#x} top_after={top}",
                bid.0, insn.addr
            ),
        );
    }
    rewritten
}

/// Remap every `ST(i)` operand (inputs after the tag, and the output) of one
/// x87 insn to physical `R[(slot_top + i) mod 8]`. Returns true if anything
/// changed.
fn remap_insn_slots(
    func_name: &str,
    bid: unlace_ir::BlockId,
    insn: &mut unlace_ir::IrInsn,
    slot_top: u8,
) -> bool {
    let mut changed = false;
    if let Some(out) = insn.output.as_mut()
        && let Some(i) = st_slot_index(out)
    {
        let phys = (slot_top as u64 + i) % FPU_SLOTS;
        let new = phys_slot(phys, out.size);
        if *out != new {
            x87_trace_line_verbose(
                func_name,
                format!(
                    "remap-output block={} addr={:#x} st={} old={:?} new={:?}",
                    bid.0, insn.addr, i, out, new
                ),
            );
            *out = new;
            changed = true;
        }
    }
    // inputs[0] is the const tag; ST refs are inputs[1..].
    for inp in insn.inputs.iter_mut().skip(1) {
        if let Some(i) = st_slot_index(inp) {
            let phys = (slot_top as u64 + i) % FPU_SLOTS;
            let new = phys_slot(phys, inp.size);
            if *inp != new {
                x87_trace_line_verbose(
                    func_name,
                    format!(
                        "remap-input block={} addr={:#x} st={} old={:?} new={:?}",
                        bid.0, insn.addr, i, inp, new
                    ),
                );
                *inp = new;
                changed = true;
            }
        }
    }
    changed
}

/// TOP after applying one op's effect.
fn apply_effect(top: u8, effect: StackEffect) -> u8 {
    match effect {
        StackEffect::Push => top.wrapping_sub(1) % 8,
        StackEffect::Pop => (top + 1) % 8,
        StackEffect::PopTwice => (top + 2) % 8,
        StackEffect::None => top,
    }
}

/// TOP at the end of a block given its entry TOP.
fn block_exit_top(block: &unlace_ir::BasicBlock, entry: u8) -> u8 {
    let mut top = entry;
    for insn in &block.insns {
        if let Some(tag) = x87_tag(insn) {
            top = apply_effect(top, stack_effect(tag).expect("validated"));
        }
    }
    top
}

/// Reconcile a join: all known predecessor exits must agree. Returns the agreed
/// value, or `None` if there are no resolved predecessors or they disagree.
fn reconcile(
    preds: &[unlace_ir::BlockId],
    exit_top: &BTreeMap<unlace_ir::BlockId, Option<u8>>,
) -> Option<u8> {
    let mut agreed: Option<u8> = None;
    let mut saw_known = false;
    for p in preds {
        if let Some(v) = exit_top.get(p).copied().flatten() {
            if saw_known && agreed != Some(v) {
                return None; // disagreement → conservative unknown
            }
            agreed = Some(v);
            saw_known = true;
        }
    }
    agreed
}

#[cfg(test)]
mod tests {
    use super::*;
    use smallvec::smallvec;
    use unlace_ir::{BasicBlock, BlockId, IrInsn};

    const FLD: u64 = 0x310;
    const FADDP: u64 = 0x360;
    const FXCH: u64 = 0x317;
    const FCOMPP: u64 = 0x367;

    fn st(i: u64) -> Varnode {
        Varnode::new(SpaceId::Register, FPU_BASE + i * FPU_STRIDE, 10)
    }
    fn tag(t: u64) -> Varnode {
        Varnode::constant(t, 8)
    }
    fn mem(addr: u64) -> Varnode {
        Varnode::constant(addr, 8)
    }

    fn single_block(insns: Vec<IrInsn>) -> Function {
        let mut f = Function::new("x87", BlockId(0), 0x1000);
        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns = insns;
        f.insert_block(bb);
        f
    }

    #[test]
    fn two_flds_resolve_to_distinct_physical_slots() {
        // FLD A; FLD B  → first lands in R7 (TOP 0→7), second in R6 (7→6).
        let mut f = single_block(vec![
            IrInsn::with_output(
                IrOp::Callother,
                st(0),
                smallvec![tag(FLD), mem(0x10)],
                0x1000,
            ),
            IrInsn::with_output(
                IrOp::Callother,
                st(0),
                smallvec![tag(FLD), mem(0x18)],
                0x1004,
            ),
        ]);
        let n = rewrite_x87_top(&mut f);
        assert_eq!(n, 2);
        let insns = &f.blocks[&BlockId(0)].insns;
        // First push: TOP 0 → slot_top 7 → R7.
        assert_eq!(insns[0].output.unwrap().offset, FPU_BASE + 7 * FPU_STRIDE);
        // Second push: TOP 7 → slot_top 6 → R6.
        assert_eq!(insns[1].output.unwrap().offset, FPU_BASE + 6 * FPU_STRIDE);
    }

    #[test]
    fn faddp_reads_correct_slots_then_pops() {
        // FLD A (→R7, TOP=7); FLD B (→R6, TOP=6); FADDP ST1,ST0.
        // At FADDP, TOP=6: ST(0)=R6, ST(1)=R7. After: TOP=7.
        let mut f = single_block(vec![
            IrInsn::with_output(
                IrOp::Callother,
                st(0),
                smallvec![tag(FLD), mem(0x10)],
                0x1000,
            ),
            IrInsn::with_output(
                IrOp::Callother,
                st(0),
                smallvec![tag(FLD), mem(0x18)],
                0x1004,
            ),
            // FADDP ST(1) = ST(1) + ST(0)  (binop output ST1, inputs ST1, ST0)
            IrInsn::with_output(
                IrOp::Callother,
                st(1),
                smallvec![tag(FADDP), st(1), st(0)],
                0x1008,
            ),
        ]);
        rewrite_x87_top(&mut f);
        let faddp = &f.blocks[&BlockId(0)].insns[2];
        // ST(1) at TOP=6 → R7; ST(0) → R6.
        assert_eq!(faddp.output.unwrap().offset, FPU_BASE + 7 * FPU_STRIDE);
        assert_eq!(faddp.inputs[1].offset, FPU_BASE + 7 * FPU_STRIDE);
        assert_eq!(faddp.inputs[2].offset, FPU_BASE + 6 * FPU_STRIDE);
    }

    #[test]
    fn fxch_does_not_change_top() {
        // FLD A (→R7); FXCH ST1 (no TOP change); FLD B should still go to R6.
        let mut f = single_block(vec![
            IrInsn::with_output(
                IrOp::Callother,
                st(0),
                smallvec![tag(FLD), mem(0x10)],
                0x1000,
            ),
            IrInsn::with_output(
                IrOp::Callother,
                st(0),
                smallvec![tag(FXCH), st(0), st(1)],
                0x1004,
            ),
            IrInsn::with_output(
                IrOp::Callother,
                st(0),
                smallvec![tag(FLD), mem(0x18)],
                0x1008,
            ),
        ]);
        rewrite_x87_top(&mut f);
        let insns = &f.blocks[&BlockId(0)].insns;
        // FXCH at TOP=7: ST0→R7, ST1→R0(=(7+1)%8). TOP unchanged.
        assert_eq!(insns[1].inputs[1].offset, FPU_BASE + 7 * FPU_STRIDE);
        assert_eq!(insns[1].inputs[2].offset, FPU_BASE); // R0
        // Second FLD still pushes to R6 (TOP 7→6), proving FXCH didn't move TOP.
        assert_eq!(insns[2].output.unwrap().offset, FPU_BASE + 6 * FPU_STRIDE);
    }

    #[test]
    fn fcompp_pops_twice() {
        // FLD;FLD (TOP=6); FCOMPP pops twice → TOP=0; trailing FLD → R7 again.
        let mut f = single_block(vec![
            IrInsn::with_output(
                IrOp::Callother,
                st(0),
                smallvec![tag(FLD), mem(0x10)],
                0x1000,
            ),
            IrInsn::with_output(
                IrOp::Callother,
                st(0),
                smallvec![tag(FLD), mem(0x18)],
                0x1004,
            ),
            IrInsn::without_output(
                IrOp::Callother,
                smallvec![tag(FCOMPP), st(0), st(1)],
                0x1008,
            ),
            IrInsn::with_output(
                IrOp::Callother,
                st(0),
                smallvec![tag(FLD), mem(0x20)],
                0x100c,
            ),
        ]);
        rewrite_x87_top(&mut f);
        let insns = &f.blocks[&BlockId(0)].insns;
        // After two pushes TOP=6, FCOMPP pops twice → TOP=0, next FLD → R7.
        assert_eq!(insns[3].output.unwrap().offset, FPU_BASE + 7 * FPU_STRIDE);
    }

    #[test]
    fn cfg_join_agreement_rewrites() {
        // entry: FLD (TOP 0→7); two succs each FLD (7→6); join: FADDP.
        // Both paths reach the join with TOP=6, so the join is rewritten.
        let mut f = Function::new("x87j", BlockId(0), 0x1000);
        let mut b0 = BasicBlock::new(BlockId(0));
        b0.insns.push(IrInsn::with_output(
            IrOp::Callother,
            st(0),
            smallvec![tag(FLD), mem(0x10)],
            0x1000,
        ));
        b0.successors = smallvec![BlockId(1), BlockId(2)];
        let mut b1 = BasicBlock::new(BlockId(1));
        b1.insns.push(IrInsn::with_output(
            IrOp::Callother,
            st(0),
            smallvec![tag(FLD), mem(0x18)],
            0x1004,
        ));
        b1.successors = smallvec![BlockId(3)];
        let mut b2 = BasicBlock::new(BlockId(2));
        b2.insns.push(IrInsn::with_output(
            IrOp::Callother,
            st(0),
            smallvec![tag(FLD), mem(0x20)],
            0x1008,
        ));
        b2.successors = smallvec![BlockId(3)];
        let mut b3 = BasicBlock::new(BlockId(3));
        b3.insns.push(IrInsn::with_output(
            IrOp::Callother,
            st(1),
            smallvec![tag(FADDP), st(1), st(0)],
            0x100c,
        ));
        f.insert_block(b0);
        f.insert_block(b1);
        f.insert_block(b2);
        f.insert_block(b3);

        rewrite_x87_top(&mut f);
        // Join entry TOP = 6 (both preds agree). FADDP ST0 → R6, ST1 → R7.
        let faddp = &f.blocks[&BlockId(3)].insns[0];
        assert_eq!(faddp.inputs[2].offset, FPU_BASE + 6 * FPU_STRIDE);
        assert_eq!(faddp.inputs[1].offset, FPU_BASE + 7 * FPU_STRIDE);
    }

    #[test]
    fn cfg_join_disagreement_is_conservative() {
        // b1 pushes once (TOP 0→7), b2 pushes twice (0→6); join TOPs disagree
        // (7 vs 6) → join block left UNTOUCHED (ST refs keep fixed offsets).
        let mut f = Function::new("x87d", BlockId(0), 0x1000);
        let mut b0 = BasicBlock::new(BlockId(0));
        b0.successors = smallvec![BlockId(1), BlockId(2)];
        let mut b1 = BasicBlock::new(BlockId(1));
        b1.insns.push(IrInsn::with_output(
            IrOp::Callother,
            st(0),
            smallvec![tag(FLD), mem(0x10)],
            0x1004,
        ));
        b1.successors = smallvec![BlockId(3)];
        let mut b2 = BasicBlock::new(BlockId(2));
        b2.insns.push(IrInsn::with_output(
            IrOp::Callother,
            st(0),
            smallvec![tag(FLD), mem(0x18)],
            0x1008,
        ));
        b2.insns.push(IrInsn::with_output(
            IrOp::Callother,
            st(0),
            smallvec![tag(FLD), mem(0x1c)],
            0x100a,
        ));
        b2.successors = smallvec![BlockId(3)];
        let mut b3 = BasicBlock::new(BlockId(3));
        b3.insns.push(IrInsn::with_output(
            IrOp::Callother,
            st(0),
            smallvec![tag(FLD), mem(0x20)],
            0x100c,
        ));
        f.insert_block(b0);
        f.insert_block(b1);
        f.insert_block(b2);
        f.insert_block(b3);

        rewrite_x87_top(&mut f);
        // Join (b3) has conflicting entry TOP → untouched: ST0 stays at FPU_BASE.
        let join_fld = &f.blocks[&BlockId(3)].insns[0];
        assert_eq!(join_fld.output.unwrap().offset, FPU_BASE);
    }

    #[test]
    fn no_x87_ops_is_noop() {
        let mut f = single_block(vec![IrInsn::without_output(
            IrOp::Return,
            smallvec![Varnode::constant(0, 8)],
            0x1000,
        )]);
        assert_eq!(rewrite_x87_top(&mut f), 0);
    }
}
