//! c_printer: stack names.

use super::*;

/// Map DWARF local variable names onto stack-backed Varnode bases.
///
/// For each `LocalVariable` with a known `frame_offset`, derive the
/// equivalent positive RSP offset using the recovered frame size and
/// register the DWARF name in `ctx.name_overrides` for the matching
/// `SpaceId::Stack` Varnode. Stack variables that DWARF does not name
/// keep their generated `vN`/`local_X` identifier.
pub(super) fn compute_dwarf_locals(
    dwarf_func: Option<&unlace_loader::FunctionDebugInfo>,
    header: Option<&FunctionHeaderInfo>,
    ctx: &mut PrintCtx,
) {
    let dwarf_func = match dwarf_func {
        Some(df) => df,
        None => return,
    };
    let frame_size = match header.map(|h| h.stack_frame).filter(|fs| *fs > 0) {
        Some(fs) => fs as i64,
        None => return,
    };

    for local in &dwarf_func.locals {
        // Record array-typed aggregate locals so a recovered frame-base-relative
        // indexed stack buffer can adopt this name/type/size instead of the
        // synthetic `buf_<offset>` fallback.
        if let Some(type_name) = local.type_name.as_deref()
            && !local.name.is_empty()
            && let Some(arr) = parse_dwarf_array_local(&local.name, type_name)
            && !ctx.dwarf_array_locals.iter().any(|a| a.name == arr.name)
        {
            ctx.dwarf_array_locals.push(arr);
        }
        let mut frame_offsets = Vec::new();
        if let Some(o) = local.frame_offset {
            frame_offsets.push(o);
        }
        for (_, loc) in &local.locations_dwarf_v5 {
            if let unlace_loader::SimpleLocation::FrameOffset(o) = loc {
                frame_offsets.push(*o);
            }
        }
        frame_offsets.sort_unstable();
        frame_offsets.dedup();

        for frame_off in frame_offsets {
            let mut candidate_offsets = vec![frame_off as u64];
            let rsp_off = frame_size + frame_off;
            if rsp_off >= 0 {
                candidate_offsets.push(rsp_off as u64);
            }
            candidate_offsets.sort_unstable();
            candidate_offsets.dedup();

            for raw_off in candidate_offsets {
                for size in [1u8, 2, 4, 8] {
                    let stk = Varnode::stack(raw_off, size);
                    ctx.name_overrides
                        .entry(stk)
                        .or_insert_with(|| local.name.clone());
                    if let Some(type_name) = local.type_name.as_deref() {
                        ctx.dwarf_local_types
                            .entry(stk)
                            .or_insert_with(|| dwarf_type_to_c(type_name));
                    }
                }
            }
        }
    }
}

/// t232: register recovered stack-frame slots in [`PrintCtx::name_overrides`]
/// so accesses through `Varnode::stack(offset, size)` print as the
/// synthesized local name (`v_<abs(offset)>` for scalars or
/// `buf_<abs(offset)>` for arrays).
///
/// One override is installed per common access width (1/2/4/8) so a
/// narrower load at a wider slot — e.g. an 8-bit MOV out of an 8-byte
/// long — still resolves to the same name.
///
/// DWARF entries take priority: this function never overwrites an
/// existing key in `name_overrides`.
pub(super) fn compute_stack_frame_names(func: &HirFunction, ctx: &mut PrintCtx) {
    use unlace_ir::ssa::FrameSlotKind;
    let frame = match func.stack_frame.as_ref() {
        Some(f) => f,
        None => return,
    };
    let absorbed_offsets = absorbed_stack_offsets_by_buffers(func, ctx);
    for local in frame.locals.values() {
        // Only name user-visible locals — saved registers, return addresses,
        // and stack arguments are suppressed from the output.
        if !matches!(local.kind, FrameSlotKind::Local) {
            continue;
        }
        if absorbed_offsets.contains(&local.offset) {
            trace_stack_text(format_args!(
                "frame-name-skip offset={} raw_size={} reason=absorbed-by-buffer",
                local.offset, local.size
            ));
            continue;
        }
        let ann = ctx.stack_lvars.get(&local.offset);
        let mut size = ann
            .map(|ann| ann.size.max(local.size))
            .unwrap_or(local.size);
        let is_buffer = ann.is_some_and(|ann| ann.is_buffer) || size > 8;
        if is_buffer {
            size = effective_stack_buffer_size(func, local.offset, size, ctx);
        }
        let mut name = ann
            .and_then(|ann| (!ann.name.is_empty()).then(|| ann.name.clone()))
            .unwrap_or_else(|| fallback_stack_name(local.offset, size, is_buffer));
        if is_buffer && ann.is_none_or(|ann| !ann.from_debug) {
            name = canonical_stack_buffer_name(func, &name);
        }
        trace_stack_text(format_args!(
            "frame-name offset={} raw_size={} chosen_size={} name={} buffer={} ann_present={} ann_c_type={:?} ann_from_debug={}",
            local.offset,
            local.size,
            size,
            name,
            is_buffer,
            ann.is_some(),
            ann.and_then(|ann| ann.c_type.as_deref()),
            ann.is_some_and(|ann| ann.from_debug),
        ));
        ctx.stack_frame_slots.insert(
            local.offset,
            StackSlotName {
                name: name.clone(),
                size,
                is_buffer,
            },
        );
        // Register the override under every plausible access width so a
        // partial (1/2/4) read of a wider slot still picks up the name.
        // The base varnode stored in `name_overrides` is keyed by full
        // `Varnode` identity (space + offset + size), so we expand here.
        let raw_offset = local.offset as u64;
        for size in [1u8, 2, 4, 8] {
            let stk = Varnode::stack(raw_offset, size);
            ctx.name_overrides
                .entry(stk)
                .or_insert_with(|| name.clone());
        }
        if size > 8 {
            // Wide buffers may also be addressed at their declared size.
            let stk = Varnode::stack(raw_offset, size.min(255) as u8);
            ctx.name_overrides
                .entry(stk)
                .or_insert_with(|| name.clone());
        }
    }
}

/// Name the incoming stack-argument slots of stack-passed parameters after
/// the parameter, so `*(_QWORD *)(rsp + 8)` prints as `a1`. The parameter is
/// already declared by the signature, so the slot gets no declaration.
pub(super) fn compute_stack_param_slot_names(func: &HirFunction, ctx: &mut PrintCtx) {
    let (Some(sig), Some(frame)) = (func.finalized_signature.as_ref(), func.stack_frame.as_ref())
    else {
        return;
    };
    for (&idx, &offset) in &sig.stack_param_slots {
        let Some((name, _)) = sig.params.get(idx) else {
            continue;
        };
        let Some(slot) = frame
            .locals
            .get(&offset)
            .filter(|slot| matches!(slot.kind, unlace_ir::ssa::FrameSlotKind::StackArg))
        else {
            continue;
        };
        trace_stack_text(format_args!(
            "stack-param-name offset={offset} size={} param_idx={idx} name={name}",
            slot.size
        ));
        ctx.stack_frame_slots.insert(
            offset,
            StackSlotName {
                name: name.clone(),
                size: slot.size,
                is_buffer: false,
            },
        );
        ctx.suppressed_stack_offsets.remove(&offset);
    }
}

pub(super) fn absorbed_stack_offsets_by_buffers(
    func: &HirFunction,
    ctx: &PrintCtx,
) -> BTreeSet<i64> {
    use unlace_ir::ssa::FrameSlotKind;
    let Some(frame) = func.stack_frame.as_ref() else {
        return BTreeSet::new();
    };
    let mut absorbed = BTreeSet::new();
    for local in frame.locals.values() {
        if !matches!(local.kind, FrameSlotKind::Local) {
            continue;
        }
        let ann = ctx.stack_lvars.get(&local.offset);
        let size = ann
            .map(|ann| ann.size.max(local.size))
            .unwrap_or(local.size);
        let is_buffer = ann.is_some_and(|ann| ann.is_buffer) || size > 8;
        if !is_buffer {
            continue;
        }
        let mut end = match local.offset.checked_add(size as i64) {
            Some(end) => end,
            None => continue,
        };
        while let Some(next) = frame.locals.get(&end) {
            if !matches!(next.kind, FrameSlotKind::Local) || next.size > 8 {
                break;
            }
            if ctx
                .stack_lvars
                .get(&next.offset)
                .is_some_and(|ann| ann.from_debug)
            {
                break;
            }
            trace_stack_text(format_args!(
                "frame-buffer-absorb buffer_offset={} absorbed_offset={} absorbed_size={} absorbed_kind={:?}",
                local.offset, next.offset, next.size, next.kind
            ));
            absorbed.insert(next.offset);
            let Some(next_end) = next.offset.checked_add(next.size as i64) else {
                break;
            };
            end = next_end;
        }
    }
    absorbed
}

pub(super) fn effective_stack_buffer_size(
    func: &HirFunction,
    offset: i64,
    base_size: u64,
    ctx: &PrintCtx,
) -> u64 {
    use unlace_ir::ssa::FrameSlotKind;
    let Some(frame) = func.stack_frame.as_ref() else {
        return base_size;
    };
    let mut size = base_size;
    let mut end = match offset.checked_add(size as i64) {
        Some(end) => end,
        None => return size,
    };
    while let Some(next) = frame.locals.get(&end) {
        if !matches!(next.kind, FrameSlotKind::Local) || next.size > 8 {
            break;
        }
        if ctx
            .stack_lvars
            .get(&next.offset)
            .is_some_and(|ann| ann.from_debug)
        {
            break;
        }
        size = size.saturating_add(next.size);
        let Some(next_end) = next.offset.checked_add(next.size as i64) else {
            break;
        };
        end = next_end;
    }
    if size != base_size {
        trace_stack_text(format_args!(
            "frame-buffer-extend offset={offset} base_size={base_size} effective_size={size}"
        ));
    }
    size
}

pub(super) fn fallback_stack_name(offset: i64, size: u64, is_buffer: bool) -> String {
    if is_buffer || size > 8 {
        format!("buf_{}", offset.unsigned_abs())
    } else {
        format!("v_{}", offset.unsigned_abs())
    }
}

pub(super) fn canonical_stack_buffer_name(func: &HirFunction, name: &str) -> String {
    if name.starts_with("buf_") && visible_stack_buffer_count(func) == 1 {
        "buf".to_string()
    } else {
        name.to_string()
    }
}

pub(super) fn visible_stack_buffer_count(func: &HirFunction) -> usize {
    use unlace_ir::ssa::FrameSlotKind;
    func.stack_frame
        .as_ref()
        .map(|frame| {
            frame
                .locals
                .values()
                .filter(|local| matches!(local.kind, FrameSlotKind::Local) && local.size > 8)
                .count()
        })
        .unwrap_or(0)
}

pub(super) fn inferred_stack_buffer_array_decl(
    offset: i64,
    size: u64,
    ctx: &PrintCtx,
) -> Option<(&'static str, u64)> {
    if size < 16 || !size.is_multiple_of(4) {
        return None;
    }
    let end = offset.saturating_add(size as i64);
    let int_subslots = ctx
        .stack_lvars
        .iter()
        .filter(|(slot, ann)| {
            **slot > offset && **slot < end && matches!(ann.ty, Some(TypeKind::Int))
        })
        .count();
    (int_subslots >= 2).then_some(("int", size / 4))
}

pub(super) fn debug_stack_lvar_name(ctx: &PrintCtx, offset: i64) -> Option<String> {
    ctx.stack_lvars
        .get(&offset)
        .filter(|ann| ann.from_debug && !ann.name.is_empty())
        .map(|ann| ann.name.clone())
}

pub(super) fn compute_suppressed_stack_offsets(func: &HirFunction, ctx: &mut PrintCtx) {
    use unlace_ir::ssa::FrameSlotKind;
    let Some(frame) = func.stack_frame.as_ref() else {
        return;
    };
    for local in frame.locals.values() {
        if !matches!(local.kind, FrameSlotKind::Local) {
            ctx.suppressed_stack_offsets.insert(local.offset);
        }
        if matches!(local.kind, FrameSlotKind::StackArg) {
            ctx.stack_arg_offsets.insert(local.offset);
        }
    }
}

pub(super) fn compute_canary_stack_offsets(ctx: &mut PrintCtx) {
    if !ctx
        .stmt_insns
        .values()
        .any(|candidate| insn_calls_symbol(candidate, "__stack_chk_fail", ctx))
    {
        return;
    }

    let candidates: Vec<(u32, IrInsn)> = ctx
        .stmt_insns
        .iter()
        .filter_map(|(&stmt_idx, insn)| {
            (insn.op == IrOp::Store).then_some((stmt_idx, insn.clone()))
        })
        .collect();
    for (stmt_idx, insn) in candidates {
        if insn.inputs.len() < 3 {
            continue;
        }
        let Some(offset) =
            resolve_stack_offset_for_addr(&insn.inputs[1], Some(1), stmt_idx, ctx, 0)
        else {
            trace_decision(format_args!(
                "canary-stack-slot stmt={stmt_idx} decision=skip reason=no-stack-offset"
            ));
            continue;
        };
        if !operand_tree_has_fs_canary_load(&insn.inputs[2], Some(2), stmt_idx, ctx) {
            trace_decision(format_args!(
                "canary-stack-slot stmt={stmt_idx} offset={offset} decision=skip reason=value-not-canary"
            ));
            continue;
        }

        ctx.canary_stack_offsets.insert(offset);
        ctx.suppressed_stack_offsets.insert(offset);
        trace_decision(format_args!(
            "canary-stack-slot stmt={stmt_idx} offset={offset} size={} decision=suppress",
            insn.inputs[2].size.max(1)
        ));
    }
}
