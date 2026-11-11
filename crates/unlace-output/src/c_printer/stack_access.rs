//! c_printer: stack access.

use super::*;

pub(super) fn promote_stack_address_call_arrays(nodes: &[HirNode], ctx: &mut PrintCtx) {
    fn walk(nodes: &[HirNode], ctx: &mut PrintCtx) {
        for node in nodes {
            match node {
                HirNode::Block(children)
                | HirNode::TryFinally {
                    try_body: children, ..
                }
                | HirNode::TryExcept {
                    try_body: children, ..
                } => walk(children, ctx),
                HirNode::If {
                    then_body,
                    else_body,
                    ..
                } => {
                    walk(then_body, ctx);
                    if let Some(else_body) = else_body {
                        walk(else_body, ctx);
                    }
                }
                HirNode::While { body, .. }
                | HirNode::DoWhile { body, .. }
                | HirNode::For { body, .. }
                | HirNode::GuardedIf {
                    then_body: body, ..
                } => walk(body, ctx),
                HirNode::Switch { cases, default, .. } => {
                    for (_, body, _) in cases {
                        walk(body, ctx);
                    }
                    if let Some(default) = default {
                        walk(default, ctx);
                    }
                }
                HirNode::TryCatch {
                    try_body,
                    catch_arms,
                } => {
                    walk(try_body, ctx);
                    for (_, body) in catch_arms {
                        walk(body, ctx);
                    }
                }
                HirNode::Statement(insn) if matches!(insn.op, IrOp::Call | IrOp::Callind) => {
                    let Some(stmt_idx) = stmt_idx_for_insn(insn, ctx) else {
                        trace_decision(format_args!(
                            "stack-promote call addr=0x{:x} decision=skip reason=no-stmt-idx",
                            insn.addr
                        ));
                        continue;
                    };
                    for arg_idx in 1..insn.inputs.len() {
                        let ptr = &insn.inputs[arg_idx];
                        if ptr.space == SpaceId::Const {
                            trace_decision(format_args!(
                                "stack-promote call stmt={stmt_idx} arg={arg_idx} ptr={ptr:?} decision=skip reason=const"
                            ));
                            continue;
                        }
                        let Some(offset) =
                            resolve_stack_offset_for_addr(ptr, Some(arg_idx), stmt_idx, ctx, 0)
                        else {
                            trace_decision(format_args!(
                                "stack-promote call stmt={stmt_idx} arg={arg_idx} ptr={ptr:?} decision=skip reason=no-stack-offset"
                            ));
                            continue;
                        };
                        if let Some(count) = insn.inputs.get(arg_idx + 1)
                            && count.space == SpaceId::Const
                            && count.offset > 1
                            && count.offset <= 1024
                        {
                            let byte_len = count.offset.saturating_mul(4);
                            trace_decision(format_args!(
                                "stack-promote call stmt={stmt_idx} arg={arg_idx} ptr={ptr:?} offset={offset} count={} decision=promote-buffer bytes={byte_len}",
                                count.offset
                            ));
                            promote_stack_buffer(offset, byte_len, ctx);
                        } else if stack_slot_for_offset(offset, ptr.size.max(1), ctx).is_none() {
                            trace_decision(format_args!(
                                "stack-promote call stmt={stmt_idx} arg={arg_idx} ptr={ptr:?} offset={offset} size={} decision=synthesize-scalar reason=no-slot",
                                ptr.size.max(1)
                            ));
                            synthesize_stack_scalar(offset, ptr.size.max(1), ctx);
                        } else {
                            trace_decision(format_args!(
                                "stack-promote call stmt={stmt_idx} arg={arg_idx} ptr={ptr:?} offset={offset} size={} decision=skip reason=slot-exists",
                                ptr.size.max(1)
                            ));
                        }
                    }
                }
                HirNode::Statement(insn) if insn.op == IrOp::Store && insn.inputs.len() >= 3 => {
                    let Some(stmt_idx) = stmt_idx_for_insn(insn, ctx) else {
                        trace_decision(format_args!(
                            "stack-promote store addr=0x{:x} decision=skip reason=no-stmt-idx",
                            insn.addr
                        ));
                        continue;
                    };
                    // Frame-base-relative *variable-indexed* store: the index
                    // term defeats `resolve_stack_offset_for_addr` (it returns
                    // None below), so promote the array slot here. The slot must
                    // own enough space for the indexed access (and the matching
                    // address-taken reads), otherwise the rebased
                    // `((T *)&v_N)[i]` subscript / `&v_N` reads overrun an 8-byte
                    // scalar into neighbouring locals.
                    if let Some(decomp) =
                        decompose_frame_indexed(&insn.inputs[1], Some(1), stmt_idx, ctx, 0)
                        && decomp.stride != 0
                        && !ctx.suppressed_stack_offsets.contains(&decomp.frame_offset)
                    {
                        let span =
                            frame_indexed_buffer_size(decomp.frame_offset, decomp.stride, ctx);
                        // Prefer the matching DWARF array local's real name/type/
                        // size: exactly one array whose element size matches the
                        // store stride and whose byte size fits the available span.
                        // This yields a faithful, name-matched `int buf[16];` and
                        // lets the redundant DWARF comment be suppressed, instead
                        // of an unnamed `char buf_<off>[span]`.
                        let dwarf_match =
                            unique_dwarf_array_for_indexed_store(decomp.stride, span, ctx);
                        if let Some(arr) = dwarf_match {
                            let byte_len = arr.elem_size * arr.elem_count;
                            trace_decision(format_args!(
                                "stack-promote store stmt={stmt_idx} offset={} stride={} decision=promote-dwarf-array name={} bytes={byte_len}",
                                decomp.frame_offset, decomp.stride, arr.name
                            ));
                            promote_stack_buffer(decomp.frame_offset, byte_len, ctx);
                            // Re-key the slot under the DWARF name and record the
                            // typed-array decl so emission renders `int buf[16];`.
                            if let Some(slot) = ctx.stack_frame_slots.get_mut(&decomp.frame_offset)
                            {
                                slot.name = arr.name.clone();
                            }
                            for width in [1u8, 2, 4, 8] {
                                let stk = Varnode::stack(decomp.frame_offset as u64, width);
                                ctx.name_overrides.insert(stk, arr.name.clone());
                            }
                            ctx.dwarf_array_buffer_decls
                                .insert(decomp.frame_offset, arr);
                            continue;
                        }
                        if span > 8 {
                            trace_decision(format_args!(
                                "stack-promote store stmt={stmt_idx} offset={} stride={} decision=promote-indexed-buffer bytes={span}",
                                decomp.frame_offset, decomp.stride
                            ));
                            promote_stack_buffer(decomp.frame_offset, span, ctx);
                            continue;
                        }
                    }
                    let Some(offset) =
                        resolve_stack_offset_for_addr(&insn.inputs[1], Some(1), stmt_idx, ctx, 0)
                    else {
                        trace_decision(format_args!(
                            "stack-promote store stmt={stmt_idx} addr={:?} decision=skip reason=no-stack-offset",
                            insn.inputs.get(1)
                        ));
                        continue;
                    };
                    let size = insn.inputs[2].size.max(1);
                    if ctx.suppressed_stack_offsets.contains(&offset) {
                        trace_decision(format_args!(
                            "stack-promote store stmt={stmt_idx} offset={offset} size={size} decision=skip reason=suppressed-offset"
                        ));
                        continue;
                    }
                    if stack_slot_for_offset(offset, size, ctx).is_none() {
                        trace_decision(format_args!(
                            "stack-promote store stmt={stmt_idx} offset={offset} size={size} decision=synthesize-scalar reason=no-slot"
                        ));
                        synthesize_stack_scalar(offset, size, ctx);
                    } else {
                        trace_decision(format_args!(
                            "stack-promote store stmt={stmt_idx} offset={offset} size={size} decision=skip reason=slot-exists"
                        ));
                    }
                }
                HirNode::Commented { inner, .. } => walk(std::slice::from_ref(inner), ctx),
                _ => {}
            }
        }
    }

    walk(nodes, ctx);
}

pub(super) fn stmt_idx_for_insn(insn: &IrInsn, ctx: &PrintCtx) -> Option<u32> {
    ctx.stmt_insns
        .iter()
        .find_map(|(&idx, stmt)| (stmt.addr == insn.addr && stmt.op == insn.op).then_some(idx))
}

/// Find the single DWARF array local that should name a recovered indexed stack
/// buffer: its element size matches the store `stride`, and its total byte size
/// fits the available `span` (so materializing it cannot overrun into the next
/// stack slot). Requires exactly one such candidate — ambiguity (two int arrays)
/// keeps the synthetic fallback so we never misattribute a name.
pub(super) fn unique_dwarf_array_for_indexed_store(
    stride: u64,
    span: u64,
    ctx: &PrintCtx,
) -> Option<DwarfArrayLocal> {
    let mut matches = ctx.dwarf_array_locals.iter().filter(|arr| {
        arr.elem_size == stride
            && arr.elem_count > 0
            && arr.elem_size.saturating_mul(arr.elem_count) <= span
            && !ctx
                .dwarf_array_buffer_decls
                .values()
                .any(|used| used.name == arr.name)
    });
    let first = matches.next()?.clone();
    if matches.next().is_some() {
        return None;
    }
    Some(first)
}

/// Choose the byte length for a stack buffer recovered from a frame-base-relative
/// variable-indexed access at `offset` (element `stride`). The index is not
/// statically bounded, so the buffer must own every byte up to — but not into —
/// the next allocated stack slot above it. Spanning to the next slot is the
/// faithful, clobber-free bound: the original array occupies exactly that gap,
/// and the address-taken reads (`f(&v_N, count)`) operate over the same region.
/// Clamped to a multiple of `stride` so the element count is whole.
pub(super) fn frame_indexed_buffer_size(offset: i64, stride: u64, ctx: &PrintCtx) -> u64 {
    let next_above = ctx
        .stack_frame_slots
        .range((offset + 1)..)
        .map(|(&start, _)| start)
        .next();
    let span = match next_above {
        Some(next) => (next - offset).max(0) as u64,
        // No slot above (unlikely given the saved-rbp/canary slots); fall back to
        // the existing slot size or a single element.
        None => ctx
            .stack_frame_slots
            .get(&offset)
            .map(|slot| slot.size)
            .unwrap_or(stride),
    };
    if stride == 0 {
        return span;
    }
    // Whole number of elements, at least one.
    (span / stride).max(1) * stride
}

pub(super) fn promote_stack_buffer(offset: i64, byte_len: u64, ctx: &mut PrintCtx) {
    if byte_len == 0 {
        return;
    }
    let name = debug_stack_lvar_name(ctx, offset)
        .unwrap_or_else(|| fallback_stack_name(offset, byte_len, true));
    let size = byte_len.max(
        ctx.stack_frame_slots
            .get(&offset)
            .map(|slot| slot.size)
            .unwrap_or(0),
    );
    trace_stack_text(format_args!(
        "promote-buffer offset={} requested={} chosen_size={} name={} debug_name={}",
        offset,
        byte_len,
        size,
        name,
        debug_stack_lvar_name(ctx, offset).is_some(),
    ));
    ctx.promoted_stack_buffers.insert(offset, size);
    ctx.has_stack_address_targets = true;
    ctx.stack_frame_slots.insert(
        offset,
        StackSlotName {
            name: name.clone(),
            size,
            is_buffer: true,
        },
    );
    let stk = Varnode::stack(offset as u64, size.min(255) as u8);
    ctx.name_overrides.insert(stk, name);
}

pub(super) fn synthesize_stack_scalar(offset: i64, size: u8, ctx: &mut PrintCtx) {
    if size == 0 {
        return;
    }
    if ctx.suppressed_stack_offsets.contains(&offset) {
        trace_stack_text(format_args!(
            "synthesize-scalar-skip offset={} size={} reason=suppressed-offset",
            offset, size,
        ));
        return;
    }
    let name = debug_stack_lvar_name(ctx, offset)
        .unwrap_or_else(|| fallback_stack_name(offset, u64::from(size), false));
    trace_stack_text(format_args!(
        "synthesize-scalar offset={} size={} name={} debug_name={}",
        offset,
        size,
        name,
        debug_stack_lvar_name(ctx, offset).is_some(),
    ));
    ctx.synthetic_stack_scalars
        .entry(offset)
        .and_modify(|old| {
            let before = *old;
            *old = (*old).max(size);
            trace_stack_text(format_args!(
                "synthesize-scalar-merge offset={} requested_size={} old_size={} new_size={} name={}",
                offset, size, before, *old, name
            ));
        })
        .or_insert(size);
    match ctx.stack_frame_slots.entry(offset) {
        std::collections::btree_map::Entry::Vacant(entry) => {
            trace_stack_text(format_args!(
                "synthesize-scalar-slot-insert offset={} size={} name={}",
                offset, size, name
            ));
            ctx.has_stack_address_targets = true;
            entry.insert(StackSlotName {
                name: name.clone(),
                size: u64::from(size),
                is_buffer: false,
            });
        }
        std::collections::btree_map::Entry::Occupied(entry) => {
            let existing = entry.get();
            trace_stack_text(format_args!(
                "synthesize-scalar-slot-keep offset={} requested_size={} requested_name={} existing_name={} existing_size={} existing_kind={}",
                offset,
                size,
                name,
                existing.name,
                existing.size,
                if existing.is_buffer {
                    "buffer"
                } else {
                    "scalar"
                },
            ));
        }
    }
    for width in [size, 8, 4, 2, 1] {
        if width == 0 {
            continue;
        }
        let stk = Varnode::stack(offset as u64, width);
        ctx.name_overrides
            .entry(stk)
            .or_insert_with(|| name.clone());
    }
}

pub(super) fn try_stack_frame_access_name(
    addr_vn: &Varnode,
    addr_raw_idx: Option<usize>,
    stmt_idx: u32,
    access_size: u8,
    ctx: &PrintCtx,
) -> Option<String> {
    if !ctx.has_stack_address_targets {
        return None;
    }
    let offset = resolve_stack_offset_for_addr(addr_vn, addr_raw_idx, stmt_idx, ctx, 0)?;
    let slot = stack_slot_for_offset(offset, access_size, ctx)?;
    let rendered = if slot.is_buffer || slot.delta != 0 {
        let cast = ida_ptr_type(access_size);
        let cast_prim = cast.trim_end_matches(" *");
        let addr = stack_slot_address_expr(&slot);
        format!("*({cast_prim} *){addr}")
    } else {
        slot.name.clone()
    };
    trace_stack_resolution(
        "access",
        stmt_idx,
        addr_raw_idx,
        addr_vn,
        Some(offset),
        Some(access_size),
        Some(&slot),
        Some(rendered.as_str()),
    );
    Some(rendered)
}

pub(super) fn try_stack_frame_address_expr(
    addr_vn: &Varnode,
    addr_raw_idx: Option<usize>,
    stmt_idx: u32,
    ctx: &PrintCtx,
) -> Option<String> {
    if !may_resolve_stack_offset(addr_vn, addr_raw_idx, stmt_idx, ctx) {
        return None;
    }
    let offset = resolve_stack_offset_for_addr(addr_vn, addr_raw_idx, stmt_idx, ctx, 0)?;
    let slot = stack_slot_for_address_offset(offset, ctx)?;
    let rendered = if slot.is_buffer {
        format!("(uintptr_t){}", stack_slot_address_expr(&slot))
    } else if slot.delta == 0 {
        format!("(uintptr_t)&{}", slot.name)
    } else {
        format!("(uintptr_t)((char *)&{} + {})", slot.name, slot.delta)
    };
    trace_stack_resolution(
        "address",
        stmt_idx,
        addr_raw_idx,
        addr_vn,
        Some(offset),
        None,
        Some(&slot),
        Some(rendered.as_str()),
    );
    Some(rendered)
}

pub(super) fn may_resolve_stack_offset(
    vn: &Varnode,
    raw_idx: Option<usize>,
    stmt_idx: u32,
    ctx: &PrintCtx,
) -> bool {
    if vn.space == SpaceId::Stack || is_x86_frame_base_ctx(vn, ctx) {
        return true;
    }
    if vn.space == SpaceId::Const {
        return false;
    }
    let Some(sv) = input_or_latest_sv_for_operand(vn, raw_idx, stmt_idx, ctx) else {
        return false;
    };
    let Some(def_stmt) = defining_stmt_for_sv(&sv, ctx) else {
        return false;
    };
    ctx.stmt_insns
        .get(&def_stmt)
        .is_some_and(|def| matches!(def.op, IrOp::Copy | IrOp::IntAdd | IrOp::IntSub))
}

#[derive(Clone, Debug)]
pub(super) struct StackSlotRef {
    pub(super) name: String,
    pub(super) delta: i64,
    pub(super) is_buffer: bool,
}

pub(super) fn stack_slot_for_offset(
    offset: i64,
    access_size: u8,
    ctx: &PrintCtx,
) -> Option<StackSlotRef> {
    let width = i64::from(access_size.max(1));
    let mut scalar_match: Option<StackSlotRef> = None;
    for (&start, slot) in ctx.stack_frame_slots.range(..=offset).rev() {
        let end = start.checked_add(slot.size as i64)?;
        let access_end = offset.checked_add(width)?;
        if offset >= start && access_end <= end {
            let delta = offset - start;
            if slot.is_buffer {
                return Some(StackSlotRef {
                    name: slot.name.clone(),
                    delta,
                    is_buffer: true,
                });
            }
            if delta == 0 && scalar_match.is_none() {
                scalar_match = Some(StackSlotRef {
                    name: slot.name.clone(),
                    delta,
                    is_buffer: false,
                });
            }
        }
        if start
            .checked_add(slot.size as i64)
            .is_some_and(|end| end <= offset)
        {
            break;
        }
    }
    if scalar_match.is_some() {
        return scalar_match;
    }

    for size in [access_size, 8, 4, 2, 1] {
        if size == 0 {
            continue;
        }
        let stk = Varnode::stack(offset as u64, size);
        if let Some(name) = ctx.name_overrides.get(&stk) {
            return Some(StackSlotRef {
                name: name.clone(),
                delta: 0,
                is_buffer: name.starts_with("buf_"),
            });
        }
    }
    None
}

pub(super) fn stack_slot_for_address_offset(offset: i64, ctx: &PrintCtx) -> Option<StackSlotRef> {
    let mut scalar_match: Option<StackSlotRef> = None;
    for (&start, slot) in ctx.stack_frame_slots.range(..=offset).rev() {
        let end = start.checked_add(slot.size as i64)?;
        if offset >= start && offset <= end {
            let delta = offset - start;
            if slot.is_buffer {
                return Some(StackSlotRef {
                    name: slot.name.clone(),
                    delta,
                    is_buffer: true,
                });
            }
            if delta == 0 && scalar_match.is_none() {
                scalar_match = Some(StackSlotRef {
                    name: slot.name.clone(),
                    delta,
                    is_buffer: false,
                });
            }
        }
        if end < offset {
            break;
        }
    }
    if scalar_match.is_some() {
        return scalar_match;
    }

    for size in [8u8, 4, 2, 1] {
        let stk = Varnode::stack(offset as u64, size);
        if let Some(name) = ctx.name_overrides.get(&stk) {
            return Some(StackSlotRef {
                name: name.clone(),
                delta: 0,
                is_buffer: name.starts_with("buf_"),
            });
        }
    }
    None
}

pub(super) fn stack_slot_address_expr(slot: &StackSlotRef) -> String {
    if slot.delta == 0 {
        slot.name.clone()
    } else {
        format!("({} + {})", slot.name, slot.delta)
    }
}

pub(super) fn resolve_stack_offset_for_addr(
    vn: &Varnode,
    raw_idx: Option<usize>,
    stmt_idx: u32,
    ctx: &PrintCtx,
    depth: u8,
) -> Option<i64> {
    const MAX_DEPTH: u8 = 16;
    if depth > MAX_DEPTH {
        trace_stack_offset_step(
            "depth-limit",
            stmt_idx,
            raw_idx,
            vn,
            depth,
            None,
            None,
            None,
        );
        return None;
    }
    if vn.space == SpaceId::Stack {
        let offset = vn.offset as i64;
        trace_stack_offset_step(
            "direct-stack",
            stmt_idx,
            raw_idx,
            vn,
            depth,
            None,
            None,
            Some(offset),
        );
        return Some(offset);
    }
    if is_x86_frame_base_ctx(vn, ctx) {
        let offset = frame_base_offset_ctx(vn, stmt_idx, ctx);
        trace_stack_offset_step(
            "frame-base",
            stmt_idx,
            raw_idx,
            vn,
            depth,
            None,
            None,
            Some(offset),
        );
        return Some(offset);
    }
    if vn.space == SpaceId::Const {
        trace_stack_offset_step(
            "const-not-stack",
            stmt_idx,
            raw_idx,
            vn,
            depth,
            None,
            None,
            None,
        );
        return None;
    }

    let sv = input_or_latest_sv_for_operand(vn, raw_idx, stmt_idx, ctx)?;
    let def_stmt = defining_stmt_for_sv(&sv, ctx)?;
    let def = ctx.stmt_insns.get(&def_stmt)?;
    trace_stack_offset_step(
        "follow-ssa",
        stmt_idx,
        raw_idx,
        vn,
        depth,
        Some(&sv),
        Some((def_stmt, def.op)),
        None,
    );

    let resolved = match def.op {
        IrOp::Copy if !def.inputs.is_empty() => {
            resolve_stack_offset_for_addr(&def.inputs[0], Some(0), def_stmt, ctx, depth + 1)
        }
        IrOp::IntAdd if def.inputs.len() >= 2 => {
            resolve_stack_offset_add(&def.inputs[0], &def.inputs[1], def_stmt, ctx, depth + 1)
        }
        IrOp::IntSub if def.inputs.len() >= 2 => {
            let base =
                resolve_stack_offset_for_addr(&def.inputs[0], Some(0), def_stmt, ctx, depth + 1)?;
            let rhs = &def.inputs[1];
            if rhs.space == SpaceId::Const {
                Some(base.wrapping_sub(rhs.offset as i64))
            } else {
                None
            }
        }
        _ => None,
    };
    trace_stack_offset_step(
        "resolved-via-def",
        stmt_idx,
        raw_idx,
        vn,
        depth,
        Some(&sv),
        Some((def_stmt, def.op)),
        resolved,
    );
    resolved
}

pub(super) fn input_or_latest_sv_for_operand(
    vn: &Varnode,
    raw_idx: Option<usize>,
    stmt_idx: u32,
    ctx: &PrintCtx,
) -> Option<SsaVarnode> {
    if let Some(raw_idx) = raw_idx
        && let Some(sv) = ctx
            .stmt_input_slot_lookup
            .get(&(stmt_idx, raw_idx))
            .copied()
            .or_else(|| {
                ctx.stmt_input_slots
                    .get(&stmt_idx)
                    .and_then(|inputs| inputs.get(&raw_idx).copied())
            })
    {
        if sv.base != *vn {
            tracing::debug!(target: "unlace::cprinter",
                "operand stmt={stmt_idx} raw_idx={raw_idx} raw={vn:?} annotated={sv:?}; using annotated SSA slot",
            );
        }
        trace_operand_resolution("annotated-slot", stmt_idx, Some(raw_idx), vn, Some(sv), ctx);
        return Some(sv);
    }
    if let Some(sv) = ctx
        .stmt_inputs
        .get(&stmt_idx)
        .and_then(|inputs| inputs.iter().find(|sv| sv.base == *vn).copied())
    {
        trace_operand_resolution("stmt-input", stmt_idx, raw_idx, vn, Some(sv), ctx);
        return Some(sv);
    }
    let latest = ctx
        .stmt_outputs
        .range(..stmt_idx)
        .rev()
        .find_map(|(_, output)| output.filter(|sv| sv.base == *vn));
    trace_operand_resolution("latest-output", stmt_idx, raw_idx, vn, latest, ctx);
    latest
}

pub(super) fn defining_stmt_for_sv(sv: &SsaVarnode, ctx: &PrintCtx) -> Option<u32> {
    if let Some(&def_stmt) = ctx.sv_defining_stmt.get(sv) {
        trace_decision(format_args!(
            "defining-stmt sv={sv:?} source=map stmt={def_stmt} op={:?}",
            ctx.stmt_insns.get(&def_stmt).map(|insn| insn.op)
        ));
        return Some(def_stmt);
    }
    let found = ctx.stmt_outputs.iter().find_map(|(&stmt_idx, output)| {
        output.filter(|output_sv| output_sv == sv).map(|_| stmt_idx)
    });
    trace_decision(format_args!(
        "defining-stmt sv={sv:?} source=fallback-scan stmt={found:?} op={:?}",
        found.and_then(|stmt| ctx.stmt_insns.get(&stmt).map(|insn| insn.op))
    ));
    found
}

pub(super) fn resolve_stack_offset_add(
    a: &Varnode,
    b: &Varnode,
    stmt_idx: u32,
    ctx: &PrintCtx,
    depth: u8,
) -> Option<i64> {
    if b.space == SpaceId::Const {
        let base = resolve_stack_offset_for_addr(a, Some(0), stmt_idx, ctx, depth)?;
        return Some(base.wrapping_add(b.offset as i64));
    }
    if a.space == SpaceId::Const {
        let base = resolve_stack_offset_for_addr(b, Some(1), stmt_idx, ctx, depth)?;
        return Some(base.wrapping_add(a.offset as i64));
    }
    None
}

/// `true` when some statement writes `rbp` with anything but frame setup or a
/// restore: a copy or offset of `rsp`, or a load (`pop rbp`).
pub(super) fn rbp_is_general_register(ctx: &PrintCtx) -> bool {
    const RSP_REG_OFF: u64 = 32;
    const RBP_REG_OFF: u64 = 40;
    let is_reg = |vn: &Varnode, offset| vn.space == SpaceId::Register && vn.offset == offset;
    ctx.stmt_insns.values().any(|insn| {
        insn.output.is_some_and(|out| is_reg(&out, RBP_REG_OFF))
            && !(insn.op == IrOp::Load
                || (matches!(insn.op, IrOp::Copy | IrOp::IntAdd | IrOp::IntSub)
                    && insn
                        .inputs
                        .first()
                        .is_some_and(|src| is_reg(src, RSP_REG_OFF))))
    })
}

/// Frame offset of the value the frame-base register `vn` holds when the
/// statement `stmt_idx` reads it: 0 for the frame pointer, the recorded
/// stack-pointer offset at the statement's machine address for the stack
/// pointer (0 when the frame carries no record, e.g. in unit tests).
pub(super) fn frame_base_offset_ctx(vn: &Varnode, stmt_idx: u32, ctx: &PrintCtx) -> i64 {
    const RSP_REG_OFF: u64 = 32;
    let is_sp = vn.space == SpaceId::Register
        && (ctx
            .stack_spec
            .as_ref()
            .map_or(vn.offset == RSP_REG_OFF, |spec| spec.is_sp(vn)));
    if !is_sp {
        return 0;
    }
    ctx.stmt_insns
        .get(&stmt_idx)
        .and_then(|insn| ctx.sp_frame_offsets.get(&insn.addr))
        .copied()
        .unwrap_or(0)
}

/// [`is_x86_frame_base`] that leaves out `rbp` where it holds data.
pub(super) fn is_x86_frame_base_ctx(vn: &Varnode, ctx: &PrintCtx) -> bool {
    const RBP_REG_OFF: u64 = 40;
    is_x86_frame_base(vn) && !(ctx.rbp_is_general_register && vn.offset == RBP_REG_OFF)
}

pub(super) fn is_x86_frame_base(vn: &Varnode) -> bool {
    const RSP_REG_OFF: u64 = 32;
    const RBP_REG_OFF: u64 = 40;
    vn.space == SpaceId::Register && vn.size == 8 && matches!(vn.offset, RSP_REG_OFF | RBP_REG_OFF)
}

/// Size-agnostic stack/frame-pointer register check (any access width). The
/// frame pointer can be read at a sub-register width (e.g. MIPS `r29d`, a 4-byte
/// view of `r29`), which `is_subscript_unsafe_frame_base` (8-byte-only) misses.
/// Used by `traces_to_frame_base` for `->`/subscript frame-relative detection.
/// Register offsets: x86 RSP=32/RBP=40, AArch64 FP=232/SP=248 (MIPS `r29`/`r30`
/// alias the same 232/248 slots in this lifter's register file).
pub(super) fn is_frame_base_reg(vn: &Varnode) -> bool {
    const RSP: u64 = 32;
    const RBP: u64 = 40;
    const FP_29: u64 = 232;
    const SP_31: u64 = 248;
    vn.space == SpaceId::Register && matches!(vn.offset, RSP | RBP | FP_29 | SP_31)
}

/// Arch-aware, size-agnostic frame-base register check. Adds the function's
/// per-arch SP/FP offsets (from `ctx.stack_spec`) to the legacy hard-coded set,
/// ignoring access width (the frame reg may be read as a sub-register, e.g. MIPS
/// `r29d` / RISC-V `spd`). The per-arch offsets are only consulted when the arch
/// is known, so cross-arch offset/argument-register collisions never mis-fire.
pub(super) fn is_frame_base_reg_ctx(vn: &Varnode, ctx: &PrintCtx) -> bool {
    if is_frame_base_reg(vn) {
        return true;
    }
    if vn.space != SpaceId::Register {
        return false;
    }
    if let Some(spec) = ctx.stack_spec.as_ref() {
        if spec.sp.offset == vn.offset {
            return true;
        }
        if let Some(fp) = spec.fp.as_ref()
            && fp.offset == vn.offset
        {
            return true;
        }
    }
    false
}

pub(super) fn is_x86_frame_base_update(insn: &IrInsn, output: &Varnode) -> bool {
    const RSP_REG_OFF: u64 = 32;
    is_x86_frame_base(output)
        && matches!(insn.op, IrOp::Copy | IrOp::IntAdd | IrOp::IntSub)
        && (output.offset == RSP_REG_OFF || insn.inputs.iter().any(is_x86_frame_base))
}

pub(super) fn is_transient_x86_frame_base_update(
    insn: &IrInsn,
    stmt_idx: u32,
    ctx: &PrintCtx,
) -> bool {
    if !matches!(insn.op, IrOp::Copy | IrOp::IntAdd | IrOp::IntSub)
        || !insn.inputs.iter().any(is_x86_frame_base)
    {
        return false;
    }
    let Some(Some(output_sv)) = ctx.stmt_outputs.get(&stmt_idx).copied() else {
        return false;
    };
    if output_sv.base.space != SpaceId::Unique {
        return false;
    }
    if ctx.sv_use_counts.get(&output_sv).copied().unwrap_or(0) != 1 {
        return false;
    }

    ctx.stmt_inputs.iter().any(|(&use_stmt, inputs)| {
        use_stmt > stmt_idx
            && inputs.contains(&output_sv)
            && ctx.stmt_insns.get(&use_stmt).is_some_and(|use_insn| {
                use_insn.op == IrOp::Copy
                    && use_insn
                        .output
                        .is_some_and(|output| is_x86_frame_base(&output))
            })
    })
}

pub(super) fn emit_memory_address_operand(
    vn: &Varnode,
    raw_idx: usize,
    stmt_idx: u32,
    ctx: &mut PrintCtx,
) -> String {
    trace_full(format_args!(
        "memory-addr-enter stmt={stmt_idx} raw_idx={raw_idx} vn={vn:?}"
    ));
    if let Some(addr) = try_stack_frame_address_expr(vn, Some(raw_idx), stmt_idx, ctx) {
        trace_full(format_args!(
            "memory-addr-result stmt={stmt_idx} raw_idx={raw_idx} vn={vn:?} source=stack-frame rendered={addr:?}"
        ));
        return addr;
    }
    let rendered = emit_operand_resolved(vn, raw_idx, stmt_idx, ctx);
    if vn.space != SpaceId::Const
        && is_zero_address_literal(&rendered)
        && let Some(sv) = ctx
            .stmt_inputs
            .get(&stmt_idx)
            .and_then(|inputs| inputs.iter().find(|sv| sv.base == *vn).copied())
    {
        let name = ctx.name_of(&sv);
        trace_full(format_args!(
            "memory-addr-result stmt={stmt_idx} raw_idx={raw_idx} vn={vn:?} source=zero-address-name sv={sv:?} rendered={name:?}"
        ));
        return name;
    }
    trace_full(format_args!(
        "memory-addr-result stmt={stmt_idx} raw_idx={raw_idx} vn={vn:?} source=operand rendered={rendered:?}"
    ));
    rendered
}

pub(super) fn is_zero_address_literal(rendered: &str) -> bool {
    matches!(rendered, "0" | "0LL" | "nullptr")
}

pub(super) fn is_suppressed_stack_access(
    addr_vn: &Varnode,
    addr_raw_idx: Option<usize>,
    stmt_idx: u32,
    ctx: &PrintCtx,
) -> bool {
    resolve_stack_offset_for_addr(addr_vn, addr_raw_idx, stmt_idx, ctx, 0).is_some_and(|offset| {
        ctx.suppressed_stack_offsets.contains(&offset) && !ctx.stack_arg_offsets.contains(&offset)
    })
}
