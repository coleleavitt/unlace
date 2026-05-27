//! Stack frame synthesis pass (Wave 24 / t209).
//!
//! Walks every LOAD / STORE in the SSA function, resolves the access
//! address back to an `RSP`/`RBP`-relative byte offset, and groups the
//! observed access widths into one [`StackLocal`] per distinct offset.
//! Adjacent offsets whose distance is smaller than the observed access
//! width are fused into a single slot (this handles the common pattern
//! of a wide store followed by a narrower partial-load at the same
//! base — they reference *one* variable, not two).
//!
//! The output is a single [`StackFrame`] capturing every recovered slot
//! plus the inferred frame extents (`min_neg_offset` … `max_pos_offset`).
//! Both the locals (negative offsets) and the incoming parameter region
//! (non-negative offsets) live in the same map so downstream type
//! recovery can render them uniformly.
//!
//! Unlike [`crate::stack_vars::StackVarRecoveryPass`] this pass is a
//! pure function (`recover_stack_frame`) returning a fresh value, not a
//! mutating [`crate::pass::Pass`] — the SsaFunction field is populated
//! by the pipeline wiring in `unlace-cli` after the fixed-point loop
//! reaches steady state.

use std::collections::BTreeMap;

use unlace_ir::ssa::{
    CallingConvention, FrameSlotKind, SsaFunction, StackFrame, StackLocal, VarnodeSlot,
};
use unlace_ir::stack::StackSpec;
use unlace_ir::{ArchId, BlockId, IrInsn, IrOp, SpaceId, Varnode};

const MAX_RESOLVE_DEPTH: u32 = 16;

/// Resolve the [`StackSpec`] this pass should consult for the function's
/// architecture. Unknown / unsupported arches fall back to the x86_64 spec
/// — the historical default — so unit-test fixtures that construct an
/// `SsaFunction` without setting `arch` keep working.
fn resolve_spec(func: &SsaFunction) -> StackSpec {
    StackSpec::for_arch(func.arch)
        .or_else(|| StackSpec::for_arch(ArchId::X86_64))
        .expect("x86_64 always has a StackSpec")
}

type DefMap = BTreeMap<Varnode, Vec<(BlockId, usize)>>;
type ResolveCache = BTreeMap<(Varnode, u32), Option<i64>>;

/// Recover the logical stack-frame layout of `func`.
///
/// This walks every LOAD/STORE instruction. For each, the address operand
/// is traced back through [`IrOp::IntAdd`] / [`IrOp::IntSub`] /
/// [`IrOp::Copy`] until either an RSP/RBP root + constant displacement is
/// found, or the trace exhausts itself. The resulting set of
/// `(offset, access_width)` observations is then collapsed into one
/// [`StackLocal`] per slot — including a width-driven *fusion* step that
/// merges two consecutive offsets whose distance is smaller than the
/// later slot's access width (those are partial reads of one variable).
///
/// Returns an empty [`StackFrame`] when no stack-relative access is
/// detected.
pub fn recover_stack_frame(func: &SsaFunction) -> StackFrame {
    let spec = resolve_spec(func);
    let def_map = build_def_map(func);
    let mut resolve_cache: ResolveCache = BTreeMap::new();

    // First pass: collect every (offset, width) observation.
    // BTreeMap keeps offsets sorted for the later fusion sweep.
    let mut observations: BTreeMap<i64, Vec<u8>> = BTreeMap::new();
    let record = |off: i64, width: u8, obs: &mut BTreeMap<i64, Vec<u8>>| {
        let widths = obs.entry(off).or_default();
        if !widths.contains(&width) {
            widths.push(width);
        }
    };

    for block in func.function.blocks.values() {
        for insn in &block.insns {
            match insn.op {
                IrOp::Store => {
                    if insn.inputs.len() < 3 {
                        continue;
                    }
                    if let Some(offset) =
                        extract_stack_offset(insn, func, &def_map, &mut resolve_cache, &spec)
                    {
                        let width = insn.inputs[2].size;
                        if width > 0 {
                            record(offset, width, &mut observations);
                        }
                    }
                }
                IrOp::Load => {
                    if insn.inputs.len() < 2 {
                        continue;
                    }
                    if let Some(offset) =
                        extract_stack_offset(insn, func, &def_map, &mut resolve_cache, &spec)
                    {
                        let width = insn.output.map(|o| o.size).unwrap_or(0);
                        if width > 0 {
                            record(offset, width, &mut observations);
                        }
                    }
                }
                _ => {}
            }

            // Also pick up direct `SpaceId::Stack` operands — some lifters
            // emit those instead of `LOAD(ram, RSP+K)`.
            if let Some(out) = insn.output
                && out.space == SpaceId::Stack
                && out.size > 0
            {
                record(out.offset as i64, out.size, &mut observations);
            }
            for inp in &insn.inputs {
                if inp.space == SpaceId::Stack && inp.size > 0 {
                    record(inp.offset as i64, inp.size, &mut observations);
                }
            }
        }
    }

    // Second pass: fusion sweep.  Walk offsets in ascending order; whenever
    // the gap to the previous *kept* slot is smaller than the previous
    // slot's max width, fold the new observation into it (partial access).
    let mut locals: BTreeMap<i64, StackLocal> = BTreeMap::new();
    let mut last_kept: Option<i64> = None;
    for (offset, widths) in observations {
        if widths.is_empty() {
            continue;
        }
        let max_w = *widths.iter().max().unwrap();

        if let Some(prev_off) = last_kept {
            let prev = locals.get_mut(&prev_off).expect("kept slot present");
            let prev_max = prev.size as i64;
            if offset - prev_off < prev_max && offset > prev_off {
                // Partial access *inside* the previous slot — fold widths.
                for w in &widths {
                    if !prev.access_widths.contains(w) {
                        prev.access_widths.push(*w);
                    }
                }
                prev.size = prev.size.max(max_w as u64);
                continue;
            }
        }

        locals.insert(
            offset,
            StackLocal {
                offset,
                size: max_w as u64,
                access_widths: widths,
                kind: FrameSlotKind::Local,
            },
        );
        last_kept = Some(offset);
    }

    // Third pass: array detection.  If three or more consecutive locals
    // share the same `size` *and* are spaced by exactly that size we
    // collapse them into one slot whose `size` covers the whole span.
    // The surviving slot keeps every observed access width.
    let array_groups = detect_arrays(&locals);
    for (start, span, widths) in array_groups {
        // Remove fused tail slots; keep the head.
        let to_remove: Vec<i64> = locals
            .range((start + (widths[0] as i64))..(start + span as i64))
            .map(|(k, _)| *k)
            .collect();
        for k in to_remove {
            locals.remove(&k);
        }
        if let Some(head) = locals.get_mut(&start) {
            head.size = span;
            for w in &widths {
                if !head.access_widths.contains(w) {
                    head.access_widths.push(*w);
                }
            }
        }
    }

    // Frame bounds — `min_neg_offset` is the smallest start offset, and
    // `max_pos_offset` is the largest *end* offset (start + size) across
    // every slot. They jointly span the frame's footprint.
    //
    // We track them unconditionally (not clamped at 0) so that a function
    // with only locals — no parameter-region access at all — still reports
    // a meaningful upper edge like `-4` for a 4-byte slot at `-8`.
    let frame_size: u64;
    let min_neg_offset: i64;
    let max_pos_offset: i64;
    if locals.is_empty() {
        frame_size = 0;
        min_neg_offset = 0;
        max_pos_offset = 0;
    } else {
        let mut lo = i64::MAX;
        let mut hi = i64::MIN;
        for (&off, local) in &locals {
            if off < lo {
                lo = off;
            }
            let end = off + local.size as i64;
            if end > hi {
                hi = end;
            }
        }
        min_neg_offset = lo;
        max_pos_offset = hi;
        frame_size = (hi - lo).max(0) as u64;
    }

    classify_slot_kinds(func, &spec, &mut locals);

    StackFrame {
        locals,
        frame_size,
        max_pos_offset,
        min_neg_offset,
    }
}

/// Tag every recovered slot with a [`FrameSlotKind`] using the
/// post-prologue SP delta and the calling convention (Batch 2 slice 2).
///
/// Conventions used here (consistent with [`recover_stack_frame`]'s
/// offset model): the recovered offset is relative to **function-entry
/// RSP**, i.e. the value of RSP *before* the prologue. On x86_64 the
/// return address occupies `[entry_rsp + 0 .. entry_rsp + ptr_size)`,
/// so:
///
/// * negative offsets → callee-local storage (default
///   [`FrameSlotKind::Local`])
/// * offsets in `[0, ptr_size)` → the saved return-address slot. Not
///   strictly part of the user-visible frame; we leave it as `Local` so
///   the caller can still see it if recovery surfaced one.
/// * offsets `>= ptr_size` → caller-pushed stack arguments
///   (SysV / cdecl) — tagged [`FrameSlotKind::StackArg`].
/// * for Microsoft x64 the 32-byte shadow region at
///   `[ptr_size, ptr_size + 32)` is tagged [`FrameSlotKind::ShadowSpace`];
///   slots at `>= ptr_size + 32` are real stack args.
///
/// Slot offsets that also appear in [`SsaFunction::saved_register_slots`]
/// are tagged [`FrameSlotKind::SavedRegister`] regardless of sign; that
/// classification wins because the printer keys saved-register rendering
/// off the same set.
fn classify_slot_kinds(
    func: &SsaFunction,
    spec: &StackSpec,
    locals: &mut BTreeMap<i64, StackLocal>,
) {
    let ptr = spec.ptr_size as i64;
    let cc = func.calling_convention;
    let shadow_size: i64 = match cc {
        CallingConvention::MicrosoftX64 => 32,
        _ => 0,
    };
    for (&offset, slot) in locals.iter_mut() {
        // Saved-register classification wins — those slots are already
        // anchored by `StackPointerTrackingPass` and we must not relabel
        // them as locals/args even if their offset happens to coincide.
        if func.saved_register_slots.contains(&offset) {
            slot.kind = FrameSlotKind::SavedRegister;
            continue;
        }
        if offset < 0 {
            slot.kind = FrameSlotKind::Local;
            continue;
        }
        if offset < ptr {
            // Saved return-address region — keep as Local so existing
            // renderers don't suddenly grow a phantom "stack arg" entry
            // for the return slot.
            slot.kind = FrameSlotKind::Local;
            continue;
        }
        if shadow_size > 0 && offset < ptr + shadow_size {
            slot.kind = FrameSlotKind::ShadowSpace;
            continue;
        }
        slot.kind = FrameSlotKind::StackArg;
    }
}

/// Detect repeated stride accesses indicating an array. Returns one entry
/// per detected array as `(start_offset, total_span, observed_widths)`.
///
/// Heuristic: three or more consecutive slots in `locals` whose `size` is
/// identical and whose spacing equals that size form an array. We bail
/// out as soon as the pattern breaks (different size or non-stride gap),
/// emitting the run we just closed if it had ≥3 elements.
fn detect_arrays(locals: &BTreeMap<i64, StackLocal>) -> Vec<(i64, u64, Vec<u8>)> {
    let mut out = Vec::new();
    let entries: Vec<(i64, u64, Vec<u8>)> = locals
        .iter()
        .map(|(o, l)| (*o, l.size, l.access_widths.clone()))
        .collect();

    let mut i = 0;
    while i < entries.len() {
        let (start_off, stride, _) = entries[i].clone();
        if stride == 0 {
            i += 1;
            continue;
        }
        let mut j = i + 1;
        let mut widths: Vec<u8> = entries[i].2.clone();
        while j < entries.len() {
            let (next_off, next_size, ref next_widths) = entries[j];
            let expected = entries[j - 1].0 + stride as i64;
            if next_off != expected || next_size != stride {
                break;
            }
            for w in next_widths {
                if !widths.contains(w) {
                    widths.push(*w);
                }
            }
            j += 1;
        }
        let count = j - i;
        if count >= 3 {
            let span = stride * count as u64;
            out.push((start_off, span, widths));
            i = j;
        } else {
            i += 1;
        }
    }
    out
}

/// Build a map from defined varnode → list of definition sites.
///
/// Mirrors [`crate::stack_vars::build_def_map`] but kept local so this
/// module can stand alone if the older pass is ever removed.
fn build_def_map(func: &SsaFunction) -> DefMap {
    let mut def_map: DefMap = BTreeMap::new();
    for (&(bid, insn_idx, ref slot), sv) in &func.var_map {
        if *slot == VarnodeSlot::Output {
            def_map.entry(sv.base).or_default().push((bid, insn_idx));
        }
    }
    def_map
}

/// Resolve a LOAD/STORE address operand to a frame offset, returning
/// `None` if the trace doesn't terminate at RSP or RBP.
fn extract_stack_offset(
    insn: &IrInsn,
    func: &SsaFunction,
    def_map: &DefMap,
    resolve_cache: &mut ResolveCache,
    spec: &StackSpec,
) -> Option<i64> {
    let addr = &insn.inputs[1];

    if addr.space == SpaceId::Stack {
        return Some(addr.offset as i64);
    }
    if spec.is_frame_base(addr) {
        return Some(0);
    }
    if addr.space == SpaceId::Unique || addr.space == SpaceId::Register {
        return find_relative_offset(addr, func, def_map, resolve_cache, 0, spec);
    }
    None
}

fn find_relative_offset(
    addr: &Varnode,
    func: &SsaFunction,
    def_map: &DefMap,
    resolve_cache: &mut ResolveCache,
    depth: u32,
    spec: &StackSpec,
) -> Option<i64> {
    if depth > MAX_RESOLVE_DEPTH {
        return None;
    }
    if let Some(&cached) = resolve_cache.get(&(*addr, depth)) {
        return cached;
    }
    let resolved = find_relative_offset_uncached(addr, func, def_map, resolve_cache, depth, spec);
    resolve_cache.insert((*addr, depth), resolved);
    resolved
}

fn find_relative_offset_uncached(
    addr: &Varnode,
    func: &SsaFunction,
    def_map: &DefMap,
    resolve_cache: &mut ResolveCache,
    depth: u32,
    spec: &StackSpec,
) -> Option<i64> {
    let defs = def_map.get(addr)?;
    for &(bid, insn_idx) in defs {
        let block = func.function.blocks.get(&bid)?;
        let def = block.insns.get(insn_idx)?;
        match def.op {
            IrOp::IntAdd => {
                if def.inputs.len() < 2 {
                    continue;
                }
                let (a, b) = (&def.inputs[0], &def.inputs[1]);
                if spec.is_frame_base(a) && b.space == SpaceId::Const {
                    return Some(b.offset as i64);
                }
                if spec.is_frame_base(b) && a.space == SpaceId::Const {
                    return Some(a.offset as i64);
                }
                if b.space == SpaceId::Const
                    && let Some(base) =
                        find_relative_offset(a, func, def_map, resolve_cache, depth + 1, spec)
                {
                    return Some(base.wrapping_add(b.offset as i64));
                }
                if a.space == SpaceId::Const
                    && let Some(base) =
                        find_relative_offset(b, func, def_map, resolve_cache, depth + 1, spec)
                {
                    return Some(base.wrapping_add(a.offset as i64));
                }
            }
            IrOp::IntSub => {
                if def.inputs.len() < 2 {
                    continue;
                }
                let (a, b) = (&def.inputs[0], &def.inputs[1]);
                if spec.is_frame_base(a) && b.space == SpaceId::Const {
                    return Some(-(b.offset as i64));
                }
                if b.space == SpaceId::Const
                    && let Some(base) =
                        find_relative_offset(a, func, def_map, resolve_cache, depth + 1, spec)
                {
                    return Some(base.wrapping_sub(b.offset as i64));
                }
            }
            IrOp::Copy => {
                if def.inputs.is_empty() {
                    continue;
                }
                let src = &def.inputs[0];
                if spec.is_frame_base(src) {
                    return Some(0);
                }
                if src.space == SpaceId::Stack {
                    return Some(src.offset as i64);
                }
                return find_relative_offset(src, func, def_map, resolve_cache, depth + 1, spec);
            }
            _ => {}
        }
    }
    None
}

#[cfg(test)]
mod tests {
    use smallvec::smallvec;

    use super::*;
    use unlace_ir::ssa::build_ssa;
    use unlace_ir::{BasicBlock, BlockId, Function, IrInsn};

    fn rsp() -> Varnode {
        Varnode::reg(32, 8)
    }

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
        let mut ssa = build_ssa(func);
        // Tag the synthesised function as x86_64 so the new arch-aware spec
        // lookup resolves to the legacy RSP=32 / RBP=40 offsets.
        ssa.arch = ArchId::X86_64;
        ssa
    }

    /// Test 1: simple int local at -8.
    /// Pattern:
    ///   u0 = INT_SUB rsp, 8
    ///   STORE ram, u0, val  (size 4)
    #[test]
    fn t209_simple_int_local_at_minus_8() {
        let u0 = Varnode::unique(0, 8);
        let val = Varnode::reg(0, 4);
        let c8 = Varnode::constant(8, 8);
        let ram = Varnode::constant(1, 8);

        let insns = vec![
            IrInsn::with_output(IrOp::IntSub, u0, smallvec![rsp(), c8], 0x1000),
            IrInsn::without_output(IrOp::Store, smallvec![ram, u0, val], 0x1004),
        ];

        let ssa = make_single_block_ssa(insns);
        let frame = recover_stack_frame(&ssa);

        assert_eq!(frame.locals.len(), 1);
        let local = &frame.locals[&-8];
        assert_eq!(local.offset, -8);
        assert_eq!(local.size, 4);
        assert_eq!(local.access_widths, vec![4]);
        assert_eq!(frame.min_neg_offset, -8);
        assert_eq!(frame.max_pos_offset, -4);
        assert_eq!(frame.frame_size, 4);
    }

    /// Test 2: pair of locals at -8 and -16.  Distinct slots, both 8-byte
    /// wide, must remain separate after the fusion sweep.
    #[test]
    fn t209_pair_of_locals_at_minus_8_and_minus_16() {
        let u0 = Varnode::unique(0, 8);
        let u1 = Varnode::unique(8, 8);
        let v0 = Varnode::reg(0, 8);
        let v1 = Varnode::reg(8, 8);
        let c8 = Varnode::constant(8, 8);
        let c16 = Varnode::constant(16, 8);
        let ram = Varnode::constant(1, 8);

        let insns = vec![
            IrInsn::with_output(IrOp::IntSub, u0, smallvec![rsp(), c8], 0x1000),
            IrInsn::without_output(IrOp::Store, smallvec![ram, u0, v0], 0x1004),
            IrInsn::with_output(IrOp::IntSub, u1, smallvec![rsp(), c16], 0x1008),
            IrInsn::without_output(IrOp::Store, smallvec![ram, u1, v1], 0x100c),
        ];

        let ssa = make_single_block_ssa(insns);
        let frame = recover_stack_frame(&ssa);

        assert_eq!(
            frame.locals.len(),
            2,
            "two distinct slots expected, got {:?}",
            frame.locals
        );
        assert_eq!(frame.locals[&-16].size, 8);
        assert_eq!(frame.locals[&-8].size, 8);
        assert_eq!(frame.min_neg_offset, -16);
        assert_eq!(frame.max_pos_offset, 0);
        assert_eq!(frame.frame_size, 16);
    }

    /// Test 3: 8-element int array starting at -32.  Each element is 4
    /// bytes ⇒ 8 STOREs at -32, -28, -24, ..., -4.  The detector must
    /// collapse them into one slot of size 32 at offset -32.
    #[test]
    fn t209_eight_element_int_array_at_minus_32() {
        let ram = Varnode::constant(1, 8);
        let val = Varnode::reg(0, 4);
        let mut insns = Vec::new();
        let mut addr_id = 0u64;
        for i in 0..8 {
            let offset = 32 - (i * 4); // 32, 28, 24, ..., 4 → -32, -28, ...
            let u_addr = Varnode::unique(addr_id, 8);
            addr_id += 8;
            let cst = Varnode::constant(offset as u64, 8);
            insns.push(IrInsn::with_output(
                IrOp::IntSub,
                u_addr,
                smallvec![rsp(), cst],
                0x1000 + (i as u64) * 8,
            ));
            insns.push(IrInsn::without_output(
                IrOp::Store,
                smallvec![ram, u_addr, val],
                0x1004 + (i as u64) * 8,
            ));
        }

        let ssa = make_single_block_ssa(insns);
        let frame = recover_stack_frame(&ssa);

        assert_eq!(
            frame.locals.len(),
            1,
            "array should collapse to one slot, got {:?}",
            frame.locals.keys().collect::<Vec<_>>()
        );
        let local = &frame.locals[&-32];
        assert_eq!(local.offset, -32);
        assert_eq!(local.size, 32, "8 × 4-byte elements");
        assert_eq!(local.access_widths, vec![4]);
        assert_eq!(frame.min_neg_offset, -32);
        assert_eq!(frame.max_pos_offset, 0);
        assert_eq!(frame.frame_size, 32);
    }

    /// Test 4: byref-taken local.  A LOAD whose address operand is
    /// `INT_ADD(stack_local_addr, K)` — i.e. somebody computed the
    /// address of `-16` and then dereferenced an inner field.  The
    /// outer LOAD's address resolves to `-16`; we should see a single
    /// recovered slot at that offset.
    #[test]
    fn t209_byref_taken_local_is_recovered() {
        let u0 = Varnode::unique(0, 8); // = rsp - 16  (address of local)
        let u1 = Varnode::unique(8, 8); // = u0 + 0    (Copy-style alias)
        let loaded = Varnode::reg(0, 8);
        let c16 = Varnode::constant(16, 8);
        let ram = Varnode::constant(1, 8);

        let insns = vec![
            // u0 = &local_16
            IrInsn::with_output(IrOp::IntSub, u0, smallvec![rsp(), c16], 0x1000),
            // u1 = u0  — propagation of the address-taken pointer.
            IrInsn::with_output(IrOp::Copy, u1, smallvec![u0], 0x1004),
            // Dereference through the propagated alias.
            IrInsn::with_output(IrOp::Load, loaded, smallvec![ram, u1], 0x1008),
        ];

        let ssa = make_single_block_ssa(insns);
        let frame = recover_stack_frame(&ssa);

        assert!(
            frame.locals.contains_key(&-16),
            "byref-taken local at -16 should be recovered through Copy-chain, got {:?}",
            frame.locals.keys().collect::<Vec<_>>()
        );
        let local = &frame.locals[&-16];
        assert_eq!(local.offset, -16);
        assert_eq!(local.size, 8);
        assert_eq!(local.access_widths, vec![8]);
    }

    /// Batch 2 slice 2: negative offsets get tagged `Local`, positive
    /// offsets above `ptr_size` get tagged `StackArg`. Uses an x86_64
    /// SysV calling convention (no shadow space).
    #[test]
    fn b2s2_classifies_negative_local_and_positive_stack_arg() {
        let ram = Varnode::constant(1, 8);
        let u0 = Varnode::unique(0, 8);
        let u1 = Varnode::unique(8, 8);
        let local_val = Varnode::reg(0, 8);
        let arg_dst = Varnode::reg(8, 8);
        let c8 = Varnode::constant(8, 8);
        let c16 = Varnode::constant(16, 8);

        let insns = vec![
            // STORE at rsp-8 → local at offset -8.
            IrInsn::with_output(IrOp::IntSub, u0, smallvec![rsp(), c8], 0x1000),
            IrInsn::without_output(IrOp::Store, smallvec![ram, u0, local_val], 0x1004),
            // LOAD from rsp+16 → stack-arg slot at offset 16.
            IrInsn::with_output(IrOp::IntAdd, u1, smallvec![rsp(), c16], 0x1008),
            IrInsn::with_output(IrOp::Load, arg_dst, smallvec![ram, u1], 0x100c),
        ];

        let mut ssa = make_single_block_ssa(insns);
        ssa.calling_convention = CallingConvention::SystemV;
        let frame = recover_stack_frame(&ssa);

        assert_eq!(frame.locals[&-8].kind, FrameSlotKind::Local);
        assert_eq!(
            frame.locals[&16].kind,
            FrameSlotKind::StackArg,
            "positive offset above ptr_size on SysV must classify as StackArg, got {:?}",
            frame.locals[&16].kind
        );
    }

    /// Batch 2 slice 2: a Microsoft x64 callee sees its shadow space at
    /// `[rsp+8 .. rsp+40)`. Slots in that range must tag as `ShadowSpace`,
    /// and the first real stack arg at `rsp+40` must tag as `StackArg`.
    #[test]
    fn b2s2_microsoft_x64_shadow_space_and_stack_arg() {
        let ram = Varnode::constant(1, 8);
        let u0 = Varnode::unique(0, 8);
        let u1 = Varnode::unique(8, 8);
        let val = Varnode::reg(0, 8);
        let c16 = Varnode::constant(16, 8); // inside shadow region
        let c40 = Varnode::constant(40, 8); // first real stack arg

        let insns = vec![
            IrInsn::with_output(IrOp::IntAdd, u0, smallvec![rsp(), c16], 0x1000),
            IrInsn::without_output(IrOp::Store, smallvec![ram, u0, val], 0x1004),
            IrInsn::with_output(IrOp::IntAdd, u1, smallvec![rsp(), c40], 0x1008),
            IrInsn::with_output(IrOp::Load, val, smallvec![ram, u1], 0x100c),
        ];

        let mut ssa = make_single_block_ssa(insns);
        ssa.calling_convention = CallingConvention::MicrosoftX64;
        let frame = recover_stack_frame(&ssa);

        assert_eq!(
            frame.locals[&16].kind,
            FrameSlotKind::ShadowSpace,
            "offset 16 on Microsoft x64 must be ShadowSpace, got {:?}",
            frame.locals[&16].kind
        );
        assert_eq!(
            frame.locals[&40].kind,
            FrameSlotKind::StackArg,
            "offset 40 on Microsoft x64 must be StackArg (above shadow), got {:?}",
            frame.locals[&40].kind
        );
    }

    /// Batch 2 slice 2: a slot offset listed in
    /// `saved_register_slots` must classify as `SavedRegister`, beating
    /// any sign-based default. Uses a negative offset to verify the
    /// saved-register branch wins over the `Local` default for negative
    /// offsets.
    #[test]
    fn b2s2_saved_register_slot_wins_over_default() {
        let ram = Varnode::constant(1, 8);
        let u0 = Varnode::unique(0, 8);
        let val = Varnode::reg(0, 8);
        let c8 = Varnode::constant(8, 8);

        let insns = vec![
            IrInsn::with_output(IrOp::IntSub, u0, smallvec![rsp(), c8], 0x1000),
            IrInsn::without_output(IrOp::Store, smallvec![ram, u0, val], 0x1004),
        ];

        let mut ssa = make_single_block_ssa(insns);
        ssa.calling_convention = CallingConvention::SystemV;
        ssa.saved_register_slots.insert(-8);
        let frame = recover_stack_frame(&ssa);

        assert_eq!(
            frame.locals[&-8].kind,
            FrameSlotKind::SavedRegister,
            "saved-register classification must override Local, got {:?}",
            frame.locals[&-8].kind
        );
    }

    /// Batch 2 slice 2: the return-address slot at offset `[0, ptr_size)`
    /// must NOT classify as `StackArg` — keeping it tagged `Local`
    /// preserves the legacy renderer's behaviour for the rare case where
    /// recovery surfaces the return slot.
    #[test]
    fn b2s2_return_address_slot_stays_local() {
        let ram = Varnode::constant(1, 8);
        let u0 = Varnode::unique(0, 8);
        let val = Varnode::reg(0, 8);
        let c0 = Varnode::constant(0, 8);

        let insns = vec![
            IrInsn::with_output(IrOp::IntAdd, u0, smallvec![rsp(), c0], 0x1000),
            IrInsn::with_output(IrOp::Load, val, smallvec![ram, u0], 0x1004),
        ];

        let mut ssa = make_single_block_ssa(insns);
        ssa.calling_convention = CallingConvention::SystemV;
        let frame = recover_stack_frame(&ssa);

        if let Some(local) = frame.locals.get(&0) {
            assert_eq!(
                local.kind,
                FrameSlotKind::Local,
                "return-addr slot [0, ptr_size) must stay Local, got {:?}",
                local.kind
            );
        }
    }
}
