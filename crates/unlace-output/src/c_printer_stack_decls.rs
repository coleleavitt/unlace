//! c_printer: stack decls.

use super::*;

/// t232: emit `__intN v_<offset>;` (or `char buf_<offset>[N];`) declarations
/// for each [`StackLocal`] in the recovered frame. Called from
/// [`print_c_with_rtti_config`] at the start of the local-decl block.
/// Returns the set of names emitted so the caller can suppress duplicate
/// declarations from the generic `var_names` loop.
///
/// Locals are emitted in ascending offset order (BTreeMap iteration).
pub(super) fn emit_stack_frame_decls(
    func: &HirFunction,
    ctx: &PrintCtx,
    out: &mut String,
) -> std::collections::BTreeSet<String> {
    use unlace_ir::ssa::FrameSlotKind;
    let mut emitted = std::collections::BTreeSet::new();
    for (offset, end, info) in ctx.mem_objects.frame_ranges() {
        trace_stack_text(format_args!(
            "emit-frame-object-decl offset={offset} end={end} name={}",
            info.name
        ));
        let _ = writeln!(out, "{}", mem_objects::local_declaration(info));
        emitted.insert(info.name.clone());
    }
    for (&offset, &size) in &ctx.promoted_stack_buffers {
        if !stack_frame_offset_is_visible_local(func, offset) {
            trace_stack_text(format_args!(
                "emit-promoted-buffer-skip offset={} size={} reason=not-visible-local frame_kind={:?}",
                offset,
                size,
                stack_frame_slot_kind(func, offset),
            ));
            continue;
        }
        // A frame-base-relative indexed buffer recovered onto a DWARF array local
        // renders as the real `int buf[16];` declaration: faithful to source and
        // name-matched to the expected type fact (the redundant `// DWARF locals`
        // comment is suppressed in `emit_dwarf_local_summary`).
        if let Some(arr) = ctx.dwarf_array_buffer_decls.get(&offset) {
            trace_stack_text(format_args!(
                "emit-promoted-dwarf-array-decl offset={} name={} elem={} count={}",
                offset, arr.name, arr.elem_c_type, arr.elem_count
            ));
            let _ = writeln!(
                out,
                "    {} {}[{}];",
                arr.elem_c_type, arr.name, arr.elem_count
            );
            emitted.insert(arr.name.clone());
            continue;
        }
        let name = debug_stack_lvar_name(ctx, offset)
            .unwrap_or_else(|| fallback_stack_name(offset, size, true));
        trace_stack_text(format_args!(
            "emit-promoted-buffer-decl offset={} size={} name={}",
            offset, size, name
        ));
        let source_comment = aggregate_source_decl_comment(ctx.stack_lvars.get(&offset));
        let _ = writeln!(out, "    char {}[{}];{}", name, size, source_comment);
        emitted.insert(name);
    }
    for (&offset, &size) in &ctx.synthetic_stack_scalars {
        let name = debug_stack_lvar_name(ctx, offset)
            .unwrap_or_else(|| fallback_stack_name(offset, u64::from(size), false));
        if !stack_frame_offset_is_visible_local(func, offset) {
            trace_stack_text(format_args!(
                "emit-synthetic-scalar-skip offset={} size={} name={} reason=not-visible-local frame_kind={:?}",
                offset,
                size,
                name,
                stack_frame_slot_kind(func, offset),
            ));
            continue;
        }
        if ctx.suppressed_stack_offsets.contains(&offset) {
            trace_stack_text(format_args!(
                "emit-synthetic-scalar-skip offset={} size={} name={} reason=suppressed-offset",
                offset, size, name
            ));
            continue;
        }
        if emitted.contains(&name) {
            trace_stack_text(format_args!(
                "emit-synthetic-scalar-skip offset={} size={} name={} reason=already-emitted",
                offset, size, name
            ));
            continue;
        }
        let ty = ctx
            .stack_lvars
            .get(&offset)
            .and_then(|ann| ann.c_type.as_deref())
            .unwrap_or_else(|| scalar_stack_type(u64::from(size)));
        trace_stack_text(format_args!(
            "emit-synthetic-scalar-decl offset={} size={} name={} ty={}",
            offset, size, name, ty
        ));
        let _ = writeln!(out, "    {} {};", ty, name);
        emitted.insert(name);
    }
    let frame = match func.stack_frame.as_ref() {
        Some(f) => f,
        None => {
            trace_stack_text(format_args!(
                "emit-frame-decls-skip reason=no-stack-frame emitted={:?}",
                emitted
            ));
            return emitted;
        }
    };
    let absorbed_offsets = absorbed_stack_offsets_by_buffers(func, ctx);
    for local in frame.locals.values() {
        // Suppress saved-register slots, return-address slots, and stack
        // arguments — only emit user-visible local variables.
        if !matches!(local.kind, FrameSlotKind::Local) {
            trace_stack_text(format_args!(
                "emit-frame-slot-skip offset={} size={} kind={:?} reason=not-user-local",
                local.offset, local.size, local.kind
            ));
            continue;
        }
        if absorbed_offsets.contains(&local.offset) {
            trace_stack_text(format_args!(
                "emit-frame-slot-skip offset={} size={} reason=absorbed-by-buffer",
                local.offset, local.size
            ));
            continue;
        }
        if ctx.mem_objects.frame_covers(local.offset) {
            trace_stack_text(format_args!(
                "emit-frame-slot-skip offset={} size={} reason=frame-object",
                local.offset, local.size
            ));
            continue;
        }
        // t233: append `/* BYREF */` to slots whose address escapes.
        let byref_marker = if func.byref_locals.contains(&local.offset) {
            " /* BYREF */"
        } else {
            ""
        };
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
        if is_buffer {
            if emitted.contains(&name) {
                trace_stack_text(format_args!(
                    "emit-frame-buffer-skip offset={} raw_size={} chosen_size={} name={} reason=already-emitted",
                    local.offset, local.size, size, name
                ));
                continue;
            }
            if ann.is_none_or(|ann| ann.c_type.is_none())
                && let Some((elem_ty, elem_count)) =
                    inferred_stack_buffer_array_decl(local.offset, size, ctx)
            {
                trace_stack_text(format_args!(
                    "emit-frame-typed-buffer-decl offset={} raw_size={} chosen_size={} name={} elem_ty={} elem_count={} byref={} ann_present={}",
                    local.offset,
                    local.size,
                    size,
                    name,
                    elem_ty,
                    elem_count,
                    !byref_marker.is_empty(),
                    ann.is_some(),
                ));
                let _ = writeln!(
                    out,
                    "    char {}[{}]{}; // {} {}[{}]",
                    name, size, byref_marker, elem_ty, name, elem_count
                );
                emitted.insert(name);
                continue;
            }
            trace_stack_text(format_args!(
                "emit-frame-buffer-decl offset={} raw_size={} chosen_size={} name={} byref={} ann_present={}",
                local.offset,
                local.size,
                size,
                name,
                !byref_marker.is_empty(),
                ann.is_some(),
            ));
            let source_comment = aggregate_source_decl_comment(ann);
            let _ = writeln!(
                out,
                "    char {}[{}]{};{}",
                name, size, byref_marker, source_comment
            );
            emitted.insert(name);
        } else {
            let ty = ann
                .and_then(|ann| ann.c_type.as_deref())
                .unwrap_or_else(|| scalar_stack_type(size));
            if emitted.contains(&name) {
                trace_stack_text(format_args!(
                    "emit-frame-scalar-skip offset={} raw_size={} chosen_size={} name={} ty={} reason=already-emitted",
                    local.offset, local.size, size, name, ty
                ));
                continue;
            }
            trace_stack_text(format_args!(
                "emit-frame-scalar-decl offset={} raw_size={} chosen_size={} name={} ty={} byref={} ann_present={} ann_from_debug={}",
                local.offset,
                local.size,
                size,
                name,
                ty,
                !byref_marker.is_empty(),
                ann.is_some(),
                ann.is_some_and(|ann| ann.from_debug),
            ));
            let _ = writeln!(out, "    {} {}{};", ty, name, byref_marker);
            emitted.insert(name);
        }
    }
    emitted
}

pub(super) fn aggregate_source_decl_comment(ann: Option<&StackLvarAnnotation>) -> String {
    let Some(ann) = ann else {
        return String::new();
    };
    if !ann.from_debug || ann.raw_span.is_none() || ann.name.is_empty() {
        return String::new();
    }
    let Some(source_byte_size) = ann.source_byte_size else {
        return String::new();
    };
    let Some(c_type) = ann
        .c_type
        .as_deref()
        .map(str::trim)
        .filter(|ty| !ty.is_empty())
    else {
        return String::new();
    };
    let source_decl = dwarf_decl_to_c(c_type, &ann.name);
    format!(" // source: {source_decl} ({source_byte_size} bytes)")
}

pub(super) fn scalar_stack_type(size: u64) -> &'static str {
    match size {
        1 => "char",
        2 => "__int16",
        4 => "int",
        8 => "__int64",
        _ => "int",
    }
}

pub(super) fn stack_frame_offset_is_visible_local(func: &HirFunction, offset: i64) -> bool {
    use unlace_ir::ssa::FrameSlotKind;

    func.stack_frame
        .as_ref()
        .and_then(|frame| frame.locals.get(&offset))
        .is_none_or(|local| matches!(local.kind, FrameSlotKind::Local))
}

pub(super) fn stack_frame_slot_kind(
    func: &HirFunction,
    offset: i64,
) -> Option<unlace_ir::ssa::FrameSlotKind> {
    func.stack_frame
        .as_ref()
        .and_then(|frame| frame.locals.get(&offset))
        .map(|local| local.kind)
}

pub(super) fn dwarf_function_for_func<'a>(
    dwarf: &'a unlace_loader::DwarfInfo,
    func: &HirFunction,
    header: Option<&FunctionHeaderInfo>,
) -> Option<&'a unlace_loader::FunctionDebugInfo> {
    dwarf
        .functions
        .values()
        .find(|debug| debug.name == func.name)
        .or_else(|| {
            header.and_then(|h| dwarf.functions.values().find(|debug| debug.name == h.name))
        })
        .or_else(|| header.and_then(|h| dwarf.functions.get(&h.address)))
        .or_else(|| dwarf.functions.get(&func.addr))
}
