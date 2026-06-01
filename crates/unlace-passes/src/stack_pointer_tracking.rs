//! Stack-pointer tracking & frame-hole detection.
//!
//! Mirrors IDA's `add_auto_stkpnt` / `func_has_stkframe_hole`. Walks the CFG
//! in dominator order maintaining the SP delta relative to function entry at
//! every instruction, then scans the recovered local frame for byte ranges
//! that no `stack_var` covers (struct-return holes, red-zone usage, alignment
//! padding past 8 B).
//!
//! Detected effects, all written into [`SsaFunction`]:
//!
//! * [`sp_delta_at`](unlace_ir::ssa::SsaFunction::sp_delta_at) — per-insn SP
//!   delta (negative = below entry RSP).
//! * [`stack_holes`](unlace_ir::ssa::SsaFunction::stack_holes) — uncovered
//!   byte ranges in `[min_sp_depth, 0)` keyed by RSP-relative start offset.
//! * [`dynamic_sp`](unlace_ir::ssa::SsaFunction::dynamic_sp) — true when
//!   `IntAdd(rsp, var)` / `IntSub(rsp, var)` is observed (alloca / VLA).
//! * [`block_entry_sp_delta`](unlace_ir::ssa::SsaFunction::block_entry_sp_delta)
//!   — SP delta at the entry of each block (CFG fall-through threading).
//! * [`frame_holes`](unlace_ir::ssa::SsaFunction::frame_holes) — explicit
//!   inter-slot gaps too wide for a saved register but narrower than a
//!   known primitive type.
//! * [`saved_register_slots`](unlace_ir::ssa::SsaFunction::saved_register_slots)
//!   — RSP-relative slot offsets that hold callee-saved registers stashed
//!   by the prologue.

use std::collections::{BTreeMap, BTreeSet, VecDeque};

use unlace_ir::ssa::{CallingConvention, FrameHole, PrimitiveType, SsaFunction, StackAccess};
use unlace_ir::stack::StackSpec;
use unlace_ir::{BlockId, IrOp, SpaceId, Varnode};

use crate::pass::{Pass, PassError};

pub struct StackPointerTrackingPass;

impl Pass for StackPointerTrackingPass {
    fn name(&self) -> &str {
        "stack-pointer-tracking"
    }

    fn phase(&self) -> crate::pass::PassPhase {
        crate::pass::PassPhase::StackRecovery
    }

    fn run(&self, func: &mut SsaFunction) -> Result<bool, PassError> {
        // Batch 2: stack recovery is per-arch. When the spec is missing
        // (Unknown / unsupported arch) the pass is a no-op rather than
        // panicking on hard-coded x86 offsets — preserves the old behaviour
        // for arches that didn't have working stack recovery before.
        let Some(spec) = StackSpec::for_arch(func.arch) else {
            return Ok(false);
        };
        let (sp_delta_at, block_entry_sp_delta, dynamic_sp, min_depth) =
            walk_sp_deltas(func, &spec);
        let stack_holes = compute_stack_holes(func, min_depth);
        let saved_register_slots =
            classify_saved_register_slots(func, &spec, &block_entry_sp_delta);
        let frame_holes = compute_frame_holes(func, &spec, &saved_register_slots);
        let stack_accesses = collect_stack_accesses(func, &spec, &sp_delta_at);
        stack_access_trace_line(
            func,
            format_args!(
                "summary changed_pending={} sp_points={} block_entries={} stack_holes={} frame_holes={} saved_slots={} accesses={} resolved={} lost={} frame_present={}",
                sp_delta_at != func.sp_delta_at
                    || stack_holes != func.stack_holes
                    || dynamic_sp != func.dynamic_sp
                    || block_entry_sp_delta != func.block_entry_sp_delta
                    || frame_holes != func.frame_holes
                    || saved_register_slots != func.saved_register_slots
                    || stack_accesses != func.stack_accesses,
                sp_delta_at.len(),
                block_entry_sp_delta.len(),
                stack_holes.len(),
                frame_holes.len(),
                saved_register_slots.len(),
                stack_accesses.len(),
                stack_accesses
                    .iter()
                    .filter(|acc| acc.resolved_slot.is_some())
                    .count(),
                stack_accesses
                    .iter()
                    .filter(|acc| acc.lost_provenance)
                    .count(),
                func.stack_frame.is_some(),
            ),
        );

        let changed = sp_delta_at != func.sp_delta_at
            || stack_holes != func.stack_holes
            || dynamic_sp != func.dynamic_sp
            || block_entry_sp_delta != func.block_entry_sp_delta
            || frame_holes != func.frame_holes
            || saved_register_slots != func.saved_register_slots
            || stack_accesses != func.stack_accesses;

        func.sp_delta_at = sp_delta_at;
        func.stack_holes = stack_holes;
        func.dynamic_sp = dynamic_sp;
        func.block_entry_sp_delta = block_entry_sp_delta;
        func.frame_holes = frame_holes;
        func.saved_register_slots = saved_register_slots;
        func.stack_accesses = stack_accesses;

        Ok(changed)
    }
}

/// Walk every LOAD / STORE in `func` and record the SP-delta-anchored
/// offset for accesses whose address arithmetic reduces to `SP + const`.
/// Conservative: an access whose base resolves to anything other than the
/// stack-pointer register (after one level of `Copy`/`IntAdd`/`IntSub`)
/// is ignored — that case lives in [`SsaFunction::stack_vars`] already.
fn collect_stack_accesses(
    func: &SsaFunction,
    spec: &StackSpec,
    sp_delta_at: &BTreeMap<(BlockId, usize), i64>,
) -> Vec<StackAccess> {
    let mut out = Vec::new();
    for (&bid, block) in &func.function.blocks {
        for (idx, insn) in block.insns.iter().enumerate() {
            if func.frame_setup_insns.contains(&(bid, idx)) {
                stack_access_trace_line(
                    func,
                    format_args!(
                        "skip-frame-setup bid={bid:?} idx={idx} addr={:#x} op={:?}",
                        insn.addr, insn.op
                    ),
                );
                continue;
            }
            let (is_store, addr_idx) = match insn.op {
                IrOp::Load => (false, 1usize),
                IrOp::Store => (true, 1usize),
                _ => continue,
            };
            if insn.inputs.len() <= addr_idx {
                continue;
            }
            let addr = &insn.inputs[addr_idx];
            let Some(delta) = resolve_addr_to_sp_offset(func, bid, idx, addr, spec, sp_delta_at)
            else {
                stack_access_trace_line(
                    func,
                    format_args!(
                        "unresolved-access bid={bid:?} idx={idx} addr={:#x} op={:?} addr_vn={addr:?}",
                        insn.addr, insn.op
                    ),
                );
                continue;
            };
            // Final width comes from the value operand on STORE (input[2])
            // or the output on LOAD. Default to 8 when the lifter left it
            // unspecified.
            let width = if is_store {
                insn.inputs.get(2).map(|v| v.size).unwrap_or(8)
            } else {
                insn.output.as_ref().map(|v| v.size).unwrap_or(8)
            };
            let resolved_slot = resolved_stack_slot(func, delta, width);
            let lost_provenance = stack_access_lost_provenance(func, delta, resolved_slot);
            stack_access_trace_line(
                func,
                format_args!(
                    "access bid={bid:?} idx={idx} addr={:#x} op={:?} delta={} width={} is_store={} resolved={resolved_slot:?} lost={lost_provenance} frame_present={} stack_vars={}",
                    insn.addr,
                    insn.op,
                    delta,
                    width,
                    is_store,
                    func.stack_frame.is_some(),
                    func.stack_vars.len(),
                ),
            );
            out.push(StackAccess {
                source_addr: insn.addr,
                // No human-readable name for the SP varnode in the spec;
                // record the architecture-neutral "sp" tag instead. Future
                // work can map to "rsp"/"esp"/"sp"/etc. via per-arch tables.
                base_register: "sp".to_string(),
                delta,
                width,
                is_store,
                resolved_slot,
                lost_provenance,
            });
        }
    }
    out
}

fn stack_access_trace_line(func: &SsaFunction, message: impl std::fmt::Display) {
    if !stack_access_trace_enabled() {
        return;
    }
    if let Some(filter) = stack_access_trace_filter()
        && !func.function.name.contains(&filter)
        && !message.to_string().contains(&filter)
    {
        return;
    }
    eprintln!(
        "[unlace stack-access] func={} {message}",
        func.function.name
    );
}

fn stack_access_trace_enabled() -> bool {
    env_flag_enabled("UNLACE_STACK_ACCESS_TRACE")
        || env_flag_enabled("UNLACE_STACK_TRACE")
        || env_flag_enabled("UNLACE_TRACE_ALL")
}

fn stack_access_trace_filter() -> Option<String> {
    std::env::var("UNLACE_STACK_ACCESS_TRACE_FILTER")
        .ok()
        .or_else(|| std::env::var("UNLACE_STACK_TRACE_FILTER").ok())
        .or_else(|| std::env::var("UNLACE_TRACE_FILTER").ok())
        .filter(|s| !s.is_empty())
}

fn env_flag_enabled(name: &str) -> bool {
    std::env::var_os(name)
        .and_then(|v| v.into_string().ok())
        .map(|v| {
            let v = v.trim().to_ascii_lowercase();
            !(v.is_empty() || v == "0" || v == "false" || v == "off" || v == "no")
        })
        .unwrap_or(false)
}

fn resolved_stack_slot(func: &SsaFunction, delta: i64, width: u8) -> Option<i64> {
    if let Some(frame) = &func.stack_frame {
        if frame.locals.contains_key(&delta) {
            return Some(delta);
        }
        let access_end = delta.saturating_add(i64::from(width.max(1)));
        for (&offset, local) in frame.locals.range(..=delta).rev() {
            let slot_end = offset.saturating_add(local.size as i64);
            if delta >= offset && access_end <= slot_end {
                return Some(offset);
            }
            if slot_end <= delta {
                break;
            }
        }
    }
    func.stack_vars.keys().copied().find(|off| *off == delta)
}

fn stack_access_lost_provenance(
    func: &SsaFunction,
    delta: i64,
    resolved_slot: Option<i64>,
) -> bool {
    if resolved_slot.is_some() || delta >= 0 {
        return false;
    }
    !func.saved_register_slots.contains(&delta)
}

/// Resolve `addr` to a numeric SP-delta if and only if its definition
/// chain reduces to `SP_register + const`. Conservative: we walk back at
/// most one [`IrOp::IntAdd`] / [`IrOp::IntSub`] from the address temp.
fn resolve_addr_to_sp_offset(
    func: &SsaFunction,
    bid: BlockId,
    insn_idx: usize,
    addr: &Varnode,
    spec: &StackSpec,
    sp_delta_at: &BTreeMap<(BlockId, usize), i64>,
) -> Option<i64> {
    let entry_delta = sp_delta_at.get(&(bid, insn_idx)).copied().unwrap_or(0);
    if spec.is_sp(addr) {
        return Some(entry_delta);
    }
    if addr.space != SpaceId::Unique {
        return None;
    }
    let block = func.function.blocks.get(&bid)?;
    for prev_idx in (0..insn_idx).rev() {
        let prev = &block.insns[prev_idx];
        let Some(out) = prev.output.as_ref() else {
            continue;
        };
        if out.space != SpaceId::Unique || out.offset != addr.offset {
            continue;
        }
        match prev.op {
            IrOp::IntAdd | IrOp::IntSub => {
                if prev.inputs.len() < 2 {
                    return None;
                }
                let (sp_pos, other) = if spec.is_sp(&prev.inputs[0]) {
                    (0usize, &prev.inputs[1])
                } else if spec.is_sp(&prev.inputs[1]) {
                    (1usize, &prev.inputs[0])
                } else {
                    return None;
                };
                let _ = sp_pos;
                if other.space != SpaceId::Const {
                    return None;
                }
                let k = other.offset as i64;
                let signed = if prev.op == IrOp::IntAdd { k } else { -k };
                return Some(entry_delta + signed);
            }
            IrOp::Copy => {
                // One-level copy passthrough.
                if let Some(src) = prev.inputs.first()
                    && spec.is_sp(src)
                {
                    return Some(entry_delta);
                }
                return None;
            }
            _ => return None,
        }
    }
    None
}

/// Dominator-order traversal of all blocks reachable from the dom-tree
/// root, with unreachable blocks appended deterministically.
fn dom_order(func: &SsaFunction) -> Vec<BlockId> {
    let mut out = Vec::new();
    let mut q = VecDeque::new();
    q.push_back(func.dom_tree.root());
    while let Some(b) = q.pop_front() {
        if !func.function.blocks.contains_key(&b) {
            continue;
        }
        out.push(b);
        for child in func.dom_tree.children(b) {
            q.push_back(*child);
        }
    }
    for &bid in func.function.blocks.keys() {
        if !out.contains(&bid) {
            out.push(bid);
        }
    }
    out
}

/// Walk every block in dom-order, threading the SP delta through every
/// instruction. Returns `(sp_delta_at, block_entry_sp_delta, dynamic_sp,
/// min_depth_seen)`. The block-entry map starts with `0` for the entry
/// block and propagates per-block deltas to CFG successors fall-through.
fn walk_sp_deltas(
    func: &SsaFunction,
    spec: &StackSpec,
) -> (
    BTreeMap<(BlockId, usize), i64>,
    BTreeMap<BlockId, i64>,
    bool,
    i64,
) {
    let mut entry_delta: BTreeMap<BlockId, i64> = BTreeMap::new();
    entry_delta.insert(func.dom_tree.root(), 0);

    let mut sp_delta_at: BTreeMap<(BlockId, usize), i64> = BTreeMap::new();
    let mut dynamic_sp = false;
    let mut min_depth: i64 = 0;

    for bid in dom_order(func) {
        let block = match func.function.blocks.get(&bid) {
            Some(b) => b,
            None => continue,
        };
        let mut delta = entry_delta.get(&bid).copied().unwrap_or(0);

        for (idx, insn) in block.insns.iter().enumerate() {
            sp_delta_at.insert((bid, idx), delta);

            // RSP only changes when an instruction whose *output* is RSP
            // executes. Two shapes occur in lifted x86:
            //
            //   1. Direct: `IntAdd/IntSub` whose output is RSP (rare).
            //   2. Indirect: `Copy(rsp <- u)` where `u` was just produced
            //      by `IntAdd/IntSub(rsp, K)` in this block.
            let writes_rsp = insn.output.as_ref().is_some_and(|v| spec.is_sp(v));

            match insn.op {
                IrOp::IntSub if writes_rsp => {
                    if let Some((_, k, is_dynamic)) = match_sp_arith(insn, spec) {
                        if is_dynamic {
                            dynamic_sp = true;
                        } else {
                            delta -= k;
                        }
                    }
                }
                IrOp::IntAdd if writes_rsp => {
                    if let Some((_, k, is_dynamic)) = match_sp_arith(insn, spec) {
                        if is_dynamic {
                            dynamic_sp = true;
                        } else {
                            delta += k;
                        }
                    }
                }
                IrOp::Copy if writes_rsp => {
                    if let Some(src) = insn.inputs.first()
                        && let Some((sign, k, is_dynamic)) =
                            trace_copy_source(func, bid, idx, src, spec)
                    {
                        if is_dynamic {
                            dynamic_sp = true;
                        } else {
                            delta += sign * k;
                        }
                    }
                }
                _ => {}
            }

            min_depth = min_depth.min(delta);
        }

        if let Some(node) = func.cfg.node_index(bid) {
            for succ_ni in func
                .cfg
                .inner()
                .neighbors_directed(node, petgraph::Direction::Outgoing)
            {
                let succ = func.cfg.inner()[succ_ni];
                entry_delta.entry(succ).or_insert(delta);
            }
        }
    }

    (sp_delta_at, entry_delta, dynamic_sp, min_depth)
}

/// If `insn` is `IntAdd/IntSub(sp, X)`, return `(sp_input_pos, |X|, is_dynamic)`.
fn match_sp_arith(insn: &unlace_ir::IrInsn, spec: &StackSpec) -> Option<(usize, i64, bool)> {
    if insn.inputs.len() < 2 {
        return None;
    }
    let (sp_pos, other) = if spec.is_sp(&insn.inputs[0]) {
        (0usize, &insn.inputs[1])
    } else if spec.is_sp(&insn.inputs[1]) {
        (1usize, &insn.inputs[0])
    } else {
        return None;
    };
    if other.space == SpaceId::Const {
        Some((sp_pos, other.offset as i64, false))
    } else {
        Some((sp_pos, 0, true))
    }
}

/// Trace a `Copy(sp <- src)` back to its defining instruction within the
/// same block. Returns `(sign, magnitude, is_dynamic)`.
fn trace_copy_source(
    func: &SsaFunction,
    bid: BlockId,
    copy_idx: usize,
    src: &Varnode,
    spec: &StackSpec,
) -> Option<(i64, i64, bool)> {
    if src.space != SpaceId::Unique {
        return None;
    }
    let block = func.function.blocks.get(&bid)?;
    for prev_idx in (0..copy_idx).rev() {
        let prev = &block.insns[prev_idx];
        let Some(out) = prev.output.as_ref() else {
            continue;
        };
        if out.space != SpaceId::Unique || out.offset != src.offset {
            continue;
        }
        match prev.op {
            IrOp::IntAdd | IrOp::IntSub => {
                let (_, mag, dynamic) = match_sp_arith(prev, spec)?;
                let sign = if prev.op == IrOp::IntAdd { 1 } else { -1 };
                return Some((sign, mag, dynamic));
            }
            _ => return None,
        }
    }
    None
}

/// Compute byte-range holes in `[min_depth, 0)` not covered by any
/// recovered `stack_var`. Mirrors IDA's `func_has_stkframe_hole`.
fn compute_stack_holes(func: &SsaFunction, min_depth: i64) -> BTreeMap<i64, u32> {
    let mut holes = BTreeMap::new();
    if min_depth >= 0 {
        return holes;
    }

    let mut covered: Vec<(i64, i64)> = func
        .stack_vars
        .values()
        .map(|sv| {
            let size = primitive_size(sv.ty);
            (sv.offset, sv.offset + size as i64)
        })
        .collect();
    covered.sort();

    let mut cursor = min_depth;
    for (lo, hi) in covered {
        if lo > cursor {
            let len = (lo - cursor) as u32;
            if len > 0 {
                holes.insert(cursor, len);
            }
        }
        cursor = cursor.max(hi);
        if cursor >= 0 {
            break;
        }
    }
    if cursor < 0 {
        let len = -cursor as u32;
        if len > 0 {
            holes.insert(cursor, len);
        }
    }

    holes
}

/// Callee-saved register offsets for SysV AMD64 (rbx, rbp, r12-r15) and
/// Microsoft x64 (rbp, rsi, rdi, rbx, r12-r15). Offsets match the
/// SLEIGH-style x86_64 register-file layout used by `var_naming.rs`.
fn callee_saved_x86_64(cc: CallingConvention, reg_offset: u64) -> Option<&'static str> {
    let sysv = match reg_offset {
        0x18 => Some("rbx"),
        0x28 => Some("rbp"),
        0x80 => Some("r12"),
        0x88 => Some("r13"),
        0x90 => Some("r14"),
        0x98 => Some("r15"),
        _ => None,
    };
    if sysv.is_some() {
        return sysv;
    }
    if matches!(cc, CallingConvention::MicrosoftX64) {
        return match reg_offset {
            0x30 => Some("rsi"),
            0x38 => Some("rdi"),
            _ => None,
        };
    }
    None
}

/// Scan the first few instructions of each block for prologue stores of
/// callee-saved registers (`mov [rsp+N], rbx`, etc.) and return the set of
/// entry-RSP-relative stack slot offsets those stores target.
///
/// Real binaries can split prologue work after an early guard branch; scanning
/// only the entry block misses those saved-register slots and lets them leak as
/// source locals.
fn classify_saved_register_slots(
    func: &SsaFunction,
    spec: &StackSpec,
    block_entry_sp_delta: &BTreeMap<BlockId, i64>,
) -> BTreeSet<i64> {
    const PROLOGUE_WINDOW: usize = 32;
    let mut slots: BTreeSet<i64> = BTreeSet::new();
    let cc = func.calling_convention;
    for (&bid, block) in &func.function.blocks {
        let block_delta = block_entry_sp_delta.get(&bid).copied().unwrap_or(0);
        for (idx, insn) in block.insns.iter().take(PROLOGUE_WINDOW).enumerate() {
            if insn.op != IrOp::Store || insn.inputs.len() < 3 {
                continue;
            }
            // STORE inputs: [space_id, address, value]. Only flag stores
            // whose *value* operand is a physical callee-saved register read.
            let value = &insn.inputs[2];
            if value.space != SpaceId::Register {
                continue;
            }
            if callee_saved_x86_64(cc, value.offset).is_none() {
                continue;
            }
            if let Some(&offset) = func.stack_offset_hints.get(&(bid, idx)) {
                slots.insert(offset);
                continue;
            }
            let addr = &insn.inputs[1];
            if let Some(offset) = resolve_stack_addr_in_block(&block.insns, idx, addr, spec, 0) {
                slots.insert(block_delta + offset);
            }
        }
    }
    slots
}

fn resolve_stack_addr_in_block(
    insns: &[unlace_ir::IrInsn],
    before_idx: usize,
    addr: &Varnode,
    spec: &StackSpec,
    depth: u8,
) -> Option<i64> {
    const MAX_DEPTH: u8 = 16;
    if depth > MAX_DEPTH {
        return None;
    }
    if spec.is_frame_base(addr) {
        return Some(0);
    }
    if addr.space == SpaceId::Stack {
        return Some(addr.offset as i64);
    }
    if addr.space != SpaceId::Unique && addr.space != SpaceId::Register {
        return None;
    }

    for prev_idx in (0..before_idx).rev() {
        let prev = &insns[prev_idx];
        let Some(out) = prev.output.as_ref() else {
            continue;
        };
        if out.space != addr.space || out.offset != addr.offset {
            continue;
        }
        match prev.op {
            IrOp::Copy => {
                let src = prev.inputs.first()?;
                return resolve_stack_addr_in_block(insns, prev_idx, src, spec, depth + 1);
            }
            IrOp::IntAdd if prev.inputs.len() >= 2 => {
                return resolve_stack_addr_add(
                    insns,
                    prev_idx,
                    &prev.inputs[0],
                    &prev.inputs[1],
                    spec,
                    depth + 1,
                );
            }
            IrOp::IntSub if prev.inputs.len() >= 2 => {
                let base =
                    resolve_stack_addr_in_block(insns, prev_idx, &prev.inputs[0], spec, depth + 1)?;
                let rhs = &prev.inputs[1];
                return (rhs.space == SpaceId::Const).then_some(base - rhs.offset as i64);
            }
            _ => return None,
        }
    }
    None
}

fn resolve_stack_addr_add(
    insns: &[unlace_ir::IrInsn],
    before_idx: usize,
    a: &Varnode,
    b: &Varnode,
    spec: &StackSpec,
    depth: u8,
) -> Option<i64> {
    if b.space == SpaceId::Const {
        let base = resolve_stack_addr_in_block(insns, before_idx, a, spec, depth)?;
        return Some(base + b.offset as i64);
    }
    if a.space == SpaceId::Const {
        let base = resolve_stack_addr_in_block(insns, before_idx, b, spec, depth)?;
        return Some(base + a.offset as i64);
    }
    None
}

/// Walk recovered stack slots (sorted by offset) and emit a `FrameHole`
/// for any inter-slot gap whose width is greater than `ptr_size` (so it's
/// not a saved-register stash) and strictly less than the widest
/// primitive type we'd expect to land there. Saved-register slots are
/// excluded so their natural gaps don't pollute the map.
fn compute_frame_holes(
    func: &SsaFunction,
    spec: &StackSpec,
    saved_register_slots: &BTreeSet<i64>,
) -> Vec<FrameHole> {
    let ptr_size = spec.ptr_size as u32;
    let max_known: u32 = 8;
    let mut spans: Vec<(i64, i64)> = func
        .stack_vars
        .iter()
        .filter(|(off, _)| !saved_register_slots.contains(*off))
        .map(|(_, sv)| {
            let size = primitive_size(sv.ty);
            (sv.offset, sv.offset + size as i64)
        })
        .collect();
    spans.sort();

    let mut holes = Vec::new();
    for win in spans.windows(2) {
        let (_, prev_end) = win[0];
        let (next_start, _) = win[1];
        if next_start <= prev_end {
            continue;
        }
        let gap = (next_start - prev_end) as u32;
        if gap > ptr_size && gap < max_known {
            holes.push(FrameHole {
                offset: prev_end,
                size: gap,
            });
        }
    }
    holes
}

fn primitive_size(ty: PrimitiveType) -> u32 {
    match ty {
        PrimitiveType::Int(w) | PrimitiveType::UnsignedInt(w) => w as u32,
        PrimitiveType::Bool => 1,
        PrimitiveType::Float => 4,
        PrimitiveType::Double => 8,
        PrimitiveType::Ptr => 8,
        PrimitiveType::Unknown => 8,
    }
}

#[cfg(test)]
mod tests {
    use smallvec::smallvec;

    use unlace_ir::ssa::{StackFrame, StackLocal, StackVar, build_ssa};
    use unlace_ir::{BasicBlock, BlockId, Function, IrInsn, IrOp, Varnode};

    use super::*;

    /// x86-64 RSP varnode — tests synthesise functions tagged as x86_64 so
    /// the `StackSpec` lookup resolves to the legacy offset.
    fn rsp() -> Varnode {
        Varnode::reg(32, 8)
    }

    fn build(insns: Vec<IrInsn>) -> SsaFunction {
        let mut func = Function::new("t", BlockId(0), 0x1000);
        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns = insns;
        bb.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![Varnode::constant(0, 8)],
            0x2000,
        ));
        func.insert_block(bb);
        let mut ssa = build_ssa(func);
        ssa.arch = unlace_ir::ArchId::X86_64;
        ssa
    }

    #[test]
    fn test_static_sp_delta_tracking() {
        let u0 = Varnode::unique(0, 8);
        let u1 = Varnode::unique(8, 8);
        let mut ssa = build(vec![
            IrInsn::with_output(
                IrOp::IntSub,
                u0,
                smallvec![rsp(), Varnode::constant(32, 8)],
                0x1000,
            ),
            IrInsn::with_output(IrOp::Copy, rsp(), smallvec![u0], 0x1004),
            IrInsn::with_output(
                IrOp::IntAdd,
                u1,
                smallvec![rsp(), Varnode::constant(32, 8)],
                0x1008,
            ),
            IrInsn::with_output(IrOp::Copy, rsp(), smallvec![u1], 0x100C),
        ]);

        assert!(StackPointerTrackingPass.run(&mut ssa).unwrap());

        let bid = BlockId(0);
        assert_eq!(ssa.sp_delta_at.get(&(bid, 0)), Some(&0));
        assert_eq!(ssa.sp_delta_at.get(&(bid, 1)), Some(&0));
        assert_eq!(ssa.sp_delta_at.get(&(bid, 2)), Some(&-32));
        assert_eq!(ssa.sp_delta_at.get(&(bid, 3)), Some(&-32));
        assert_eq!(ssa.sp_delta_at.get(&(bid, 4)), Some(&0));
        assert!(!ssa.dynamic_sp);
    }

    #[test]
    fn test_alloca_detection() {
        let u0 = Varnode::unique(0, 8);
        let dyn_size = Varnode::reg(0, 8);
        let mut ssa = build(vec![
            IrInsn::with_output(IrOp::IntSub, u0, smallvec![rsp(), dyn_size], 0x1000),
            IrInsn::with_output(IrOp::Copy, rsp(), smallvec![u0], 0x1004),
        ]);

        assert!(StackPointerTrackingPass.run(&mut ssa).unwrap());
        assert!(ssa.dynamic_sp, "alloca-shaped IR should set dynamic_sp");
    }

    #[test]
    fn test_hole_detection() {
        let u0 = Varnode::unique(0, 8);
        let mut ssa = build(vec![
            IrInsn::with_output(
                IrOp::IntSub,
                u0,
                smallvec![rsp(), Varnode::constant(32, 8)],
                0x1000,
            ),
            IrInsn::with_output(IrOp::Copy, rsp(), smallvec![u0], 0x1004),
        ]);

        ssa.stack_vars.insert(
            -32,
            StackVar {
                offset: -32,
                name: "v1".into(),
                ty: PrimitiveType::Int(8),
                accesses: vec![],
            },
        );
        ssa.stack_vars.insert(
            -16,
            StackVar {
                offset: -16,
                name: "v2".into(),
                ty: PrimitiveType::Int(8),
                accesses: vec![],
            },
        );

        StackPointerTrackingPass.run(&mut ssa).unwrap();

        assert_eq!(ssa.stack_holes.get(&-24), Some(&8));
        assert_eq!(ssa.stack_holes.get(&-8), Some(&8));
        assert_eq!(ssa.stack_holes.len(), 2);
    }

    #[test]
    fn test_no_hole_frame() {
        let u0 = Varnode::unique(0, 8);
        let mut ssa = build(vec![
            IrInsn::with_output(
                IrOp::IntSub,
                u0,
                smallvec![rsp(), Varnode::constant(16, 8)],
                0x1000,
            ),
            IrInsn::with_output(IrOp::Copy, rsp(), smallvec![u0], 0x1004),
        ]);

        ssa.stack_vars.insert(
            -16,
            StackVar {
                offset: -16,
                name: "v1".into(),
                ty: PrimitiveType::Int(8),
                accesses: vec![],
            },
        );
        ssa.stack_vars.insert(
            -8,
            StackVar {
                offset: -8,
                name: "v2".into(),
                ty: PrimitiveType::Int(8),
                accesses: vec![],
            },
        );

        StackPointerTrackingPass.run(&mut ssa).unwrap();

        assert!(
            ssa.stack_holes.is_empty(),
            "fully-covered frame must produce no holes, got {:?}",
            ssa.stack_holes
        );
    }

    /// Block-entry SP delta is zero at the entry block; per-insn delta
    /// matches the post-prologue `sub rsp, 48`.
    #[test]
    fn test_block_entry_sp_delta() {
        let u0 = Varnode::unique(0, 8);
        let mut ssa = build(vec![
            IrInsn::with_output(
                IrOp::IntSub,
                u0,
                smallvec![rsp(), Varnode::constant(48, 8)],
                0x1000,
            ),
            IrInsn::with_output(IrOp::Copy, rsp(), smallvec![u0], 0x1004),
        ]);

        StackPointerTrackingPass.run(&mut ssa).unwrap();

        let entry = BlockId(0);
        assert_eq!(
            ssa.block_entry_sp_delta.get(&entry),
            Some(&0),
            "entry block must start at SP delta 0, got {:?}",
            ssa.block_entry_sp_delta
        );
        assert_eq!(ssa.sp_delta_at.get(&(entry, 2)), Some(&-48));
    }

    /// Saved-register classification: a prologue `mov [rsp], rbx` shape
    /// (Store space_ram, rsp, rbx) gets recorded as a saved-register slot.
    #[test]
    fn test_saved_register_classification() {
        let rbx = Varnode::reg(0x18, 8);
        let space_ram = Varnode::constant(0, 8);
        let mut ssa = build(vec![IrInsn::without_output(
            IrOp::Store,
            smallvec![space_ram, rsp(), rbx],
            0x1000,
        )]);
        ssa.calling_convention = CallingConvention::SystemV;

        StackPointerTrackingPass.run(&mut ssa).unwrap();

        assert!(
            ssa.saved_register_slots.contains(&0),
            "expected slot 0 to be classified as saved register, got {:?}",
            ssa.saved_register_slots
        );
    }

    #[test]
    fn test_saved_register_classification_after_guard_block() {
        let rbp = Varnode::reg(0x28, 8);
        let addr = Varnode::unique(0x100, 8);
        let space_ram = Varnode::constant(0, 8);

        let mut func = Function::new("split_prologue", BlockId(0), 0x1000);
        let mut entry = BasicBlock::new(BlockId(0));
        entry.successors.push(BlockId(1));
        let mut prologue = BasicBlock::new(BlockId(1));
        prologue.insns.push(IrInsn::with_output(
            IrOp::IntSub,
            addr,
            smallvec![rsp(), Varnode::constant(8, 8)],
            0x1010,
        ));
        prologue.insns.push(IrInsn::without_output(
            IrOp::Store,
            smallvec![space_ram, addr, rbp],
            0x1014,
        ));
        prologue.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![Varnode::constant(0, 8)],
            0x1018,
        ));
        func.insert_block(entry);
        func.insert_block(prologue);

        let mut ssa = build_ssa(func);
        ssa.arch = unlace_ir::ArchId::X86_64;
        ssa.calling_convention = CallingConvention::SystemV;

        StackPointerTrackingPass.run(&mut ssa).unwrap();

        assert!(
            ssa.saved_register_slots.contains(&-8),
            "split prologue saved rbp slot should be classified, got {:?}",
            ssa.saved_register_slots
        );
    }

    /// Frame-hole detection on x86_64: ptr_size==max_known==8 suppresses
    /// every candidate hole (gap can't be both > 8 and < 8).
    #[test]
    fn test_frame_hole_detection_x86_64_suppressed() {
        let u0 = Varnode::unique(0, 8);
        let mut ssa = build(vec![
            IrInsn::with_output(
                IrOp::IntSub,
                u0,
                smallvec![rsp(), Varnode::constant(32, 8)],
                0x1000,
            ),
            IrInsn::with_output(IrOp::Copy, rsp(), smallvec![u0], 0x1004),
        ]);
        ssa.stack_vars.insert(
            -16,
            StackVar {
                offset: -16,
                name: "v1".into(),
                ty: PrimitiveType::Int(4),
                accesses: vec![],
            },
        );
        ssa.stack_vars.insert(
            -5,
            StackVar {
                offset: -5,
                name: "v2".into(),
                ty: PrimitiveType::Int(4),
                accesses: vec![],
            },
        );

        StackPointerTrackingPass.run(&mut ssa).unwrap();

        assert!(
            ssa.frame_holes.is_empty(),
            "x86_64 ptr_size==max_known suppresses every candidate hole, got {:?}",
            ssa.frame_holes
        );
    }

    /// Frame-hole detection on a 32-bit ABI: PPC32 has ptr_size==4 so a
    /// 5-byte inter-slot gap (5 > 4 && 5 < 8) surfaces as a FrameHole.
    #[test]
    fn test_frame_hole_detection_narrow_ptr() {
        use unlace_ir::{ArchId, BasicBlock, Function};

        let mut func = Function::new("t", BlockId(0), 0x1000);
        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![Varnode::constant(0, 8)],
            0x2000,
        ));
        func.insert_block(bb);
        let mut ssa = build_ssa(func);
        ssa.arch = ArchId::Ppc;

        ssa.stack_vars.insert(
            -16,
            StackVar {
                offset: -16,
                name: "v1".into(),
                ty: PrimitiveType::Int(4),
                accesses: vec![],
            },
        );
        ssa.stack_vars.insert(
            -7,
            StackVar {
                offset: -7,
                name: "v2".into(),
                ty: PrimitiveType::Int(4),
                accesses: vec![],
            },
        );

        StackPointerTrackingPass.run(&mut ssa).unwrap();

        assert_eq!(
            ssa.frame_holes.len(),
            1,
            "expected exactly one inter-slot frame hole, got {:?}",
            ssa.frame_holes
        );
        assert_eq!(ssa.frame_holes[0].offset, -12);
        assert_eq!(ssa.frame_holes[0].size, 5);
    }

    /// Batch 17: a `[rsp-8]` LOAD inside a prologue-adjusted frame produces
    /// a [`StackAccess`] entry recording the resolved frame offset.
    #[test]
    fn stack_accesses_record_load_at_negative_offset() {
        let u0 = Varnode::unique(0, 8);
        let u1 = Varnode::unique(8, 8);
        let u2 = Varnode::unique(16, 8);
        let mut ssa = build(vec![
            // sub rsp, 16
            IrInsn::with_output(
                IrOp::IntSub,
                u0,
                smallvec![rsp(), Varnode::constant(16, 8)],
                0x1000,
            ),
            IrInsn::with_output(IrOp::Copy, rsp(), smallvec![u0], 0x1004),
            // u1 = rsp + 8
            IrInsn::with_output(
                IrOp::IntAdd,
                u1,
                smallvec![rsp(), Varnode::constant(8, 8)],
                0x1008,
            ),
            // u2 = LOAD ram, u1
            IrInsn::with_output(
                IrOp::Load,
                u2,
                smallvec![Varnode::constant(0, 8), u1],
                0x100C,
            ),
        ]);

        StackPointerTrackingPass.run(&mut ssa).unwrap();

        assert!(
            !ssa.stack_accesses.is_empty(),
            "load through (rsp+8) under a 16-byte prologue should record a stack access; got {:?}",
            ssa.stack_accesses
        );
        let acc = &ssa.stack_accesses[0];
        assert!(!acc.is_store, "this is a LOAD, not a STORE");
        assert_eq!(acc.delta, -8, "expected sp-relative offset -8, got {acc:?}");
        assert_eq!(acc.source_addr, 0x100C);
        assert_eq!(acc.base_register, "sp");
    }

    #[test]
    fn stack_accesses_resolve_against_recovered_frame_slots() {
        let u0 = Varnode::unique(0, 8);
        let u1 = Varnode::unique(8, 8);
        let u2 = Varnode::unique(16, 4);
        let mut ssa = build(vec![
            IrInsn::with_output(
                IrOp::IntSub,
                u0,
                smallvec![rsp(), Varnode::constant(16, 8)],
                0x1000,
            ),
            IrInsn::with_output(IrOp::Copy, rsp(), smallvec![u0], 0x1004),
            IrInsn::with_output(
                IrOp::IntAdd,
                u1,
                smallvec![rsp(), Varnode::constant(10, 8)],
                0x1008,
            ),
            IrInsn::with_output(
                IrOp::Load,
                u2,
                smallvec![Varnode::constant(0, 8), u1],
                0x100C,
            ),
        ]);

        StackPointerTrackingPass.run(&mut ssa).unwrap();
        assert_eq!(ssa.stack_accesses[0].delta, -6);
        assert_eq!(ssa.stack_accesses[0].resolved_slot, None);
        assert!(ssa.stack_accesses[0].lost_provenance);

        let mut locals = BTreeMap::new();
        locals.insert(
            -8,
            StackLocal {
                offset: -8,
                size: 8,
                access_widths: vec![4],
                kind: Default::default(),
            },
        );
        ssa.stack_frame = Some(StackFrame {
            locals,
            frame_size: 8,
            max_pos_offset: 0,
            min_neg_offset: -8,
        });

        StackPointerTrackingPass.run(&mut ssa).unwrap();
        assert_eq!(ssa.stack_accesses[0].resolved_slot, Some(-8));
        assert!(!ssa.stack_accesses[0].lost_provenance);
    }

    /// A STORE through `[rsp-8]` is recorded with `is_store=true` and the
    /// value-width of the source operand.
    #[test]
    fn stack_accesses_record_store_with_value_width() {
        let u0 = Varnode::unique(0, 8);
        let u1 = Varnode::unique(8, 8);
        let value = Varnode::reg(0, 4); // 4-byte store
        let mut ssa = build(vec![
            IrInsn::with_output(
                IrOp::IntSub,
                u0,
                smallvec![rsp(), Varnode::constant(16, 8)],
                0x1000,
            ),
            IrInsn::with_output(IrOp::Copy, rsp(), smallvec![u0], 0x1004),
            IrInsn::with_output(
                IrOp::IntAdd,
                u1,
                smallvec![rsp(), Varnode::constant(8, 8)],
                0x1008,
            ),
            IrInsn::without_output(
                IrOp::Store,
                smallvec![Varnode::constant(0, 8), u1, value],
                0x100C,
            ),
        ]);

        StackPointerTrackingPass.run(&mut ssa).unwrap();

        let acc = ssa
            .stack_accesses
            .iter()
            .find(|a| a.is_store)
            .expect("store should be recorded");
        assert_eq!(acc.delta, -8);
        assert_eq!(acc.width, 4, "store width came from the value operand");
    }
}
