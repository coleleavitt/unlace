//! c_printer: calls.

use super::*;

/// If this Call's target is an IAT slot whose forwarder chain has been
/// resolved (via [`PrinterAnnotations::forwarded_resolutions`]), return
/// the trailing `/* <raw> -> dll!sym */` comment text the printer should
/// append to the call statement. Returns `None` for non-CALL insns or when
/// the target VA is not a key in the resolution map.
///
/// The raw import symbol (e.g. `kernel32!HeapAlloc`) is included when the
/// rendered call target had to be sanitised to a valid C identifier
/// (`kernel32_HeapAlloc`): the comment is the only place the original
/// `dll!sym` spelling survives, so a reader can still map it back.
pub(super) fn forwarded_call_comment(insn: &IrInsn, ctx: &PrintCtx) -> Option<String> {
    if !matches!(insn.op, IrOp::Call | IrOp::Callind) {
        return None;
    }
    if ctx.forwarded_resolutions.is_empty() {
        return None;
    }
    let target = insn.inputs.first()?;
    if target.space != SpaceId::Const {
        return None;
    }
    let resolved = ctx.forwarded_resolutions.get(&target.offset)?;
    match ctx.symbols.get(&target.offset) {
        Some(raw) if !is_c_identifier(raw) => Some(format!("/* {raw} -> {resolved} */")),
        _ => Some(format!("/* -> {resolved} */")),
    }
}

/// §5.5: If this Call's *target* function was identified by FLIRT,
/// return the trailing `/* flirt: <canonical>@<conf> */` comment text
/// the printer should append at the call site. Returns `None` for
/// non-direct calls, when the FLIRT map is empty, or when the target
/// VA is not a key in the map. Confidence is rendered with two decimal
/// digits (e.g. `1.00`, `0.90`, `0.50`) so the output is byte-stable
/// across runs.
pub(super) fn flirt_call_comment(insn: &IrInsn, ctx: &PrintCtx) -> Option<String> {
    if !matches!(insn.op, IrOp::Call) {
        return None;
    }
    if ctx.flirt_call_annotations.is_empty() {
        return None;
    }
    let target = insn.inputs.first()?;
    if target.space != SpaceId::Const {
        return None;
    }
    let (name, conf) = ctx.flirt_call_annotations.get(&target.offset)?;
    Some(format!("/* flirt: {}@{:.2} */", name, conf))
}

pub(super) fn resolve_call_target(insn: &IrInsn, stmt_idx: u32, ctx: &mut PrintCtx) -> String {
    if insn.inputs.is_empty() {
        return "/* unknown */".to_string();
    }
    // t229: when the libc family classifier (`annotate_libc_calls`)
    // recognised this call's target as an alias for a libc function,
    // prefer the canonical lowercase name (`memcpy`, `malloc`) over the
    // raw symbol (`__memcpy_chk`, `_Znwm`). The canonical map is keyed
    // by the Call instruction's VA, which the printer always sees, so
    // both direct (Const target) and indirect (resolved-elsewhere) calls
    // can be rewritten if the annotator decided they classify.
    if let Some(canonical) = ctx.libc_call_canonical.get(&insn.addr) {
        return canonical.clone();
    }
    if let Some(go_name) = ctx.go_iface_devirtualized_calls.get(&insn.addr) {
        return go_name.clone();
    }
    let target_vn = &insn.inputs[0];
    if target_vn.space == SpaceId::Const {
        if let Some(name) = ctx.symbols.get(&target_vn.offset) {
            return demangle_callee_name(name);
        }
        return format!("sub_{:x}", target_vn.offset);
    }
    emit_operand_resolved(target_vn, 0, stmt_idx, ctx)
}

/// The `__except (...)` filter: the `EXCEPTION_EXECUTE_HANDLER` constant,
/// or a call of the filter funclet, named like any other call target.
pub(super) fn render_seh_filter(filter: SehFilter, ctx: &PrintCtx) -> String {
    match filter {
        SehFilter::ExecuteHandler => "EXCEPTION_EXECUTE_HANDLER".to_string(),
        SehFilter::Funclet(addr) => match ctx.symbols.get(&addr) {
            Some(name) => format!("{}()", demangle_callee_name(name)),
            None => format!("sub_{addr:x}()"),
        },
    }
}

pub(super) fn demangle_callee_name(raw: &str) -> String {
    match crate::demangle::demangle(raw) {
        Some(d) => crate::demangle::sanitize_for_c(&d.short_name),
        None => c_symbol_name(raw),
    }
}

pub(super) fn c_symbol_name(raw: &str) -> String {
    if is_c_identifier(raw) {
        raw.to_string()
    } else {
        crate::demangle::sanitize_for_c(raw)
    }
}

/// t202 — printf/scanf-family Call rendering with format-inferred casts.
///
/// Returns `Some("printf(\"%d\", (int)x)")`-style output when:
///
///   * The callee is in `printf_type_infer::PRINTF_FAMILY` or `SCANF_FAMILY`.
///   * `inputs[1]` is a `SpaceId::Const` pointer that hits `ctx.string_table`
///     (i.e. a format string literal we can parse).
///
/// Returns `None` otherwise — the caller falls back to the legacy
/// `target()` rendering (which historically drops args anyway, but
/// preserves that behaviour for non-format-string calls).
///
/// Casts are emitted as `(T)expr` where `T` comes from
/// [`unlace_passes::printf_type_infer::infer_printf_arg_types`]. Slots
/// past the inferred-type vector render without a cast — defensive
/// against format strings whose specifier count doesn't match the
/// emitted variadic args (mismatched call sites are a bug, but the
/// printer should still produce valid C).
pub(super) fn try_emit_printf_call(
    insn: &IrInsn,
    stmt_idx: u32,
    ctx: &mut PrintCtx,
) -> Option<String> {
    if insn.op != IrOp::Call || insn.inputs.is_empty() {
        return None;
    }
    let target_vn = &insn.inputs[0];
    if target_vn.space != SpaceId::Const {
        return None;
    }
    let raw_name = ctx.symbols.get(&target_vn.offset)?;
    let name = demangle_callee_name(raw_name);
    let format_arg_index = printf_format_arg_index(&name)?;
    // Need at least the format-string slot (inputs[1]); a printf with
    // zero variadics is still a valid call and rendered as
    // `printf("hello")` — without args, no casts to emit, but the
    // format-string literal still surfaces.
    let fmt_input_idx = 1 + format_arg_index;
    let fmt_vn = insn.inputs.get(fmt_input_idx)?;
    let display_name = ctx
        .libc_call_canonical
        .get(&insn.addr)
        .cloned()
        .unwrap_or_else(|| name.clone());
    let fmt = if fmt_vn.space == SpaceId::Const {
        ctx.string_table.get(&fmt_vn.offset).cloned()
    } else {
        None
    };
    let inferred = fmt
        .as_deref()
        .map(|fmt| unlace_passes::printf_type_infer::infer_printf_arg_types(&display_name, fmt))
        .unwrap_or_default();
    let hidden_fixed_args = hidden_fortify_arg_indices(&name);

    let mut args: Vec<String> = Vec::with_capacity(insn.inputs.len() - 1);
    for arg_index in 0..format_arg_index {
        if hidden_fixed_args.contains(&arg_index) {
            continue;
        }
        let input_idx = 1 + arg_index;
        if let Some(vn) = insn.inputs.get(input_idx) {
            args.push(emit_operand_resolved(vn, input_idx, stmt_idx, ctx));
        }
    }

    // Render the format-string slot as a quoted C literal.
    match fmt {
        Some(fmt) => args.push(format!("\"{}\"", escape_c_string(&fmt))),
        None => args.push(emit_operand_resolved(fmt_vn, fmt_input_idx, stmt_idx, ctx)),
    }

    // Variadic slots after the format string map onto `inferred[0..]`.
    for (slot, vn) in insn.inputs.iter().enumerate().skip(fmt_input_idx + 1) {
        let expr = emit_operand_resolved(vn, slot, stmt_idx, ctx);
        let variadic_idx = slot - fmt_input_idx - 1;
        let cast = inferred
            .get(variadic_idx)
            .map(render_type_as_c)
            .map(|t| format!("({})", t.trim_end()));
        match cast {
            Some(c) => args.push(format!("{}{}", c, expr)),
            None => args.push(expr),
        }
    }

    Some(format!("{}({})", display_name, args.join(", ")))
}

pub(super) fn printf_format_arg_index(name: &str) -> Option<usize> {
    if unlace_passes::printf_type_infer::is_format_string_call(name) {
        return Some(match name {
            "fprintf" | "sprintf" | "dprintf" | "asprintf" | "syslog" | "vfprintf" | "vsprintf"
            | "fscanf" | "sscanf" => 1,
            "snprintf" | "vsnprintf" => 2,
            _ => 0,
        });
    }
    match name {
        "__printf_chk" | "__vprintf_chk" => Some(1),
        "__fprintf_chk" => Some(2),
        "__sprintf_chk" | "__vsprintf_chk" => Some(3),
        "__snprintf_chk" => Some(4),
        _ => None,
    }
}

pub(super) fn hidden_fortify_arg_indices(name: &str) -> &'static [usize] {
    match name {
        "__printf_chk" | "__vprintf_chk" => &[0],
        "__fprintf_chk" => &[1],
        "__sprintf_chk" | "__vsprintf_chk" => &[1, 2],
        "__snprintf_chk" => &[2, 3],
        _ => &[],
    }
}

pub(super) fn emit_call_args(insn: &IrInsn, stmt_idx: u32, ctx: &mut PrintCtx) -> String {
    insn.inputs
        .iter()
        .enumerate()
        .skip(1)
        .map(|(i, vn)| emit_call_arg(vn, i, stmt_idx, ctx))
        .collect::<Vec<_>>()
        .join(", ")
}

pub(super) fn emit_call_arg(
    vn: &Varnode,
    raw_idx: usize,
    stmt_idx: u32,
    ctx: &mut PrintCtx,
) -> String {
    if let Some(arg) = try_stack_address_call_arg(vn, raw_idx, stmt_idx, ctx) {
        return arg;
    }
    emit_operand_resolved(vn, raw_idx, stmt_idx, ctx)
}

pub(super) fn try_stack_address_call_arg(
    vn: &Varnode,
    raw_idx: usize,
    stmt_idx: u32,
    ctx: &PrintCtx,
) -> Option<String> {
    if vn.space == SpaceId::Const {
        return None;
    }
    let offset = resolve_stack_offset_for_addr(vn, Some(raw_idx), stmt_idx, ctx, 0)?;
    let slot = stack_slot_for_offset(offset, vn.size.max(1), ctx)?;
    let addr = stack_slot_address_expr(&slot);
    if slot.is_buffer {
        Some(addr)
    } else {
        Some(format!("&{addr}"))
    }
}

pub(super) fn emit_direct_call_expr(insn: &IrInsn, stmt_idx: u32, ctx: &mut PrintCtx) -> String {
    if let Some(printf_call) = try_emit_printf_call(insn, stmt_idx, ctx) {
        return printf_call;
    }
    if ctx.cleanup_depth > 0
        && let Some(dtor_call) = try_emit_cxx_destructor_cleanup_call(insn, stmt_idx, ctx)
    {
        return dtor_call;
    }
    let target = resolve_call_target(insn, stmt_idx, ctx);
    let args = emit_call_args(insn, stmt_idx, ctx);
    format!("{}({})", target, args)
}

pub(super) fn try_emit_cxx_destructor_cleanup_call(
    insn: &IrInsn,
    stmt_idx: u32,
    ctx: &mut PrintCtx,
) -> Option<String> {
    if insn.op != IrOp::Call || insn.inputs.len() < 2 {
        return None;
    }
    let target = insn.inputs.first()?;
    if target.space != SpaceId::Const {
        return None;
    }
    let raw = ctx.symbols.get(&target.offset)?;
    let demangled = crate::demangle::demangle(raw)?;
    if !demangled.is_dtor {
        return None;
    }
    let class_name = demangled.class_name.as_deref()?;
    let class_name = crate::demangle::sanitize_for_c(class_name);
    let receiver = emit_operand_resolved(&insn.inputs[1], 1, stmt_idx, ctx);
    if insn.inputs.len() == 2 {
        return Some(format!("({})->~{}()", receiver, class_name));
    }

    let extra_args = insn
        .inputs
        .iter()
        .enumerate()
        .skip(2)
        .map(|(i, vn)| emit_operand_resolved(vn, i, stmt_idx, ctx))
        .collect::<Vec<_>>()
        .join(", ");
    Some(format!(
        "/* cleanup destructor */ ({})->~{}(/* extra */ {})",
        receiver, class_name, extra_args
    ))
}

/// Resolve a tail-call target address to a C identifier. Falls back to the
/// IDA-style `sub_<addr>` name when the symbol table has no entry.
pub(super) fn tail_call_target_name(target: u64, ctx: &PrintCtx) -> String {
    if let Some(name) = ctx.symbols.get(&target) {
        return demangle_callee_name(name);
    }
    format!("sub_{:x}", target)
}

/// Render a `TailCall { target }` as the IDA-style tail-call form.
///
/// * Non-void parent: `return callee();`
/// * Void parent:    `callee();` — the structurer already emits a trailing
///   `Return(None)` after the tail call, so we don't add a
///   second `return;` here (which would render as the ugly
///   `callee(); return; return;` triple).
///
/// The callee is resolved against the symbol table (with demangling) so the
/// emitted form matches the rest of the pretty-printer's call sites instead
/// of the previous `((unsigned long long (*)(void))0x…)()` cast.
pub(super) fn format_tail_call_text(
    target: u64,
    args: &[unlace_struct::hir::HirCallArg],
    ctx: &mut PrintCtx,
) -> String {
    let name = tail_call_target_name(target, ctx);
    let args = args
        .iter()
        .map(|arg| format_tail_call_arg(arg, ctx))
        .collect::<Vec<_>>()
        .join(", ");
    if ctx.parent_returns_void {
        format!("{}({});", name, args)
    } else {
        format!("return {}({});", name, args)
    }
}

pub(super) fn format_tail_call_arg(
    arg: &unlace_struct::hir::HirCallArg,
    ctx: &mut PrintCtx,
) -> String {
    if let Some(sv) = arg.ssa {
        return ctx.name_of(&sv);
    }
    emit_operand_with_prec(
        &arg.operand,
        0,
        u32::MAX,
        ConstContext::Signed,
        ParentCtx::top(),
        ctx,
    )
}

// ---------------------------------------------------------------------------
// CALLIND complex cast emission (P7-18)
// ---------------------------------------------------------------------------

/// Render a recognised C++ virtual dispatch: `obj->speak(args)` when RTTI
/// named the slot's method, `obj->__vftable->method_N(args)` otherwise.
///
/// `inputs[0]` is the method pointer. When the dispatch carries no traced
/// receiver, `inputs[1]` is taken as the receiver; any further inputs are
/// ordinary arguments.
pub(super) fn emit_virtual_call(
    insn: &IrInsn,
    stmt_idx: u32,
    ctx: &mut PrintCtx,
) -> Option<String> {
    let Some(TargetSet::VtableSlot {
        receiver,
        slot_idx,
        method,
        ..
    }) = ctx.vtable_call_targets.get(&insn.addr).cloned()
    else {
        return None;
    };
    let receiver = match receiver {
        Some(sv) => resolve_sv_expr(&sv, ctx),
        None if insn.inputs.len() >= 2 => emit_operand_resolved(&insn.inputs[1], 1, stmt_idx, ctx),
        None => "this".to_string(),
    };
    // `->` binds like `[]`, so a deref/cast receiver needs parentheses.
    let receiver = paren_if_non_atomic_base(&receiver);
    let args = insn
        .inputs
        .iter()
        .enumerate()
        .skip(2)
        .map(|(i, vn)| emit_operand_resolved(vn, i, stmt_idx, ctx))
        .collect::<Vec<_>>()
        .join(", ");
    Some(match method {
        Some(method) => format!("{receiver}->{method}({args})"),
        None => format!("{receiver}->__vftable->method_{slot_idx}({args})"),
    })
}

/// Render a CALLIND in IDA-style function-pointer cast form:
///
/// ```text
/// ((return_type (*)(param_types))target)(args)
/// ```
///
/// `return_type` is taken from the output varnode size (or `void` when no
/// output exists). `param_types` and `args` are derived from `inputs[1..]`.
/// When there are no extra inputs the cast still surfaces the inferred
/// return type, e.g. `((__int64 (*)())pfn)()`.
pub(super) fn emit_callind_cast(insn: &IrInsn, stmt_idx: u32, ctx: &mut PrintCtx) -> String {
    let target = resolve_call_target(insn, stmt_idx, ctx);

    if let Some(call) = emit_virtual_call(insn, stmt_idx, ctx) {
        return call;
    }

    // t201: when this call site is in the auth-call annotation table,
    // render the IDA-cast form as a `__builtin_arm_authcall` intrinsic
    // instead. The builtin signature is
    // `__builtin_arm_authcall(target, key, discriminator)` — keys 0..=3
    // map IA / IB / DA / DB, the discriminator is the 15-bit constant
    // recovered from the dyld v5 chain entry.
    if let Some(ann) = ctx.auth_calls.get(&insn.addr).copied() {
        return format!(
            "__builtin_arm_authcall({}, /*key=*/{}, /*disc=*/{:#x})",
            target, ann.key, ann.diversifier
        );
    }

    let return_ty = match insn.output {
        Some(out) => type_for_size(out.size, true).to_string(),
        None => "void".to_string(),
    };

    let mut params: Vec<String> = Vec::new();
    let mut args: Vec<String> = Vec::new();
    for (i, vn) in insn.inputs.iter().enumerate().skip(1) {
        params.push(type_for_size(vn.size, true).to_string());
        args.push(emit_operand_resolved(vn, i, stmt_idx, ctx));
    }
    let params_str = params.join(", ");
    let args_str = args.join(", ");

    format!(
        "(({} (*)({})){})({})",
        return_ty, params_str, target, args_str,
    )
}
