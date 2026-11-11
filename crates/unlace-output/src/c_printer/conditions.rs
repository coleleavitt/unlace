//! c_printer: conditions.

use super::*;

pub(super) fn resolve_control_cond_expr(sv: &SsaVarnode, ctx: &mut PrintCtx) -> String {
    trace_sequence(format_args!(
        "control-cond-enter cond_sv={sv:?} emit_stmt={}",
        ctx.emit_stmt
    ));
    if let Some(def_stmt) = inlineable_condition_def_stmt(sv, ctx)
        && let Some(def_insn) = ctx.stmt_insns.get(&def_stmt).cloned()
    {
        trace_condition_inputs(sv, def_stmt, &def_insn, "exact-def", ctx);
        let rendered = emit_expr(&def_insn, def_stmt, ctx);
        trace_sequence(format_args!(
            "control-cond-result cond_sv={sv:?} source=exact-def def_stmt={def_stmt} addr=0x{:x} op={:?} rendered={rendered:?}",
            def_insn.addr, def_insn.op
        ));
        return rendered;
    }
    if let Some(def_stmt) = latest_inlineable_condition_def_stmt_for_base(sv, ctx)
        && let Some(def_insn) = ctx.stmt_insns.get(&def_stmt).cloned()
    {
        trace_condition_inputs(sv, def_stmt, &def_insn, "latest-base", ctx);
        let rendered = emit_expr(&def_insn, def_stmt, ctx);
        trace_sequence(format_args!(
            "control-cond-result cond_sv={sv:?} source=latest-base def_stmt={def_stmt} addr=0x{:x} op={:?} rendered={rendered:?}",
            def_insn.addr, def_insn.op
        ));
        return rendered;
    }
    let rendered = resolve_sv_expr(sv, ctx);
    trace_sequence(format_args!(
        "control-cond-result cond_sv={sv:?} source=resolve-sv rendered={rendered:?}"
    ));
    rendered
}

pub(super) fn trace_condition_inputs(
    cond_sv: &SsaVarnode,
    def_stmt: u32,
    def_insn: &IrInsn,
    source: &str,
    ctx: &mut PrintCtx,
) {
    if !c_printer_sequence_trace_enabled() {
        return;
    }
    for (raw_idx, input) in def_insn.inputs.iter().enumerate() {
        let input_sv = input_or_latest_sv_for_operand(input, Some(raw_idx), def_stmt, ctx);
        let input_def = input_sv.and_then(|sv| defining_stmt_for_sv(&sv, ctx));
        let input_def_op = input_def.and_then(|stmt| ctx.stmt_insns.get(&stmt).map(|insn| insn.op));
        let known = input_sv.and_then(|sv| known_name_of_sv(ctx, &sv));
        let rendered = emit_operand_with_prec(
            input,
            raw_idx,
            def_stmt,
            ConstContext::Signed,
            ParentCtx::top(),
            ctx,
        );
        trace_sequence(format_args!(
            "control-cond-input cond_sv={cond_sv:?} source={source} def_stmt={def_stmt} raw_idx={raw_idx} input={input:?} input_sv={input_sv:?} input_def={input_def:?} input_def_op={input_def_op:?} known={known:?} rendered={rendered:?} emit_stmt={}",
            ctx.emit_stmt
        ));
    }
}

#[derive(Debug)]
pub(super) struct RebasedCondOperand {
    pub(super) text: String,
    pub(super) original_text: String,
    pub(super) changed: bool,
    pub(super) delta: Option<i128>,
    pub(super) const_value: Option<(u64, u8)>,
}

pub(super) fn resolve_post_body_control_cond_expr(
    sv: &SsaVarnode,
    start_stmt: u32,
    end_stmt: u32,
    ctx: &mut PrintCtx,
) -> Option<String> {
    trace_sequence(format_args!(
        "post-body-cond-enter cond_sv={sv:?} range={start_stmt}..{end_stmt}"
    ));
    let def_stmt = inlineable_condition_def_stmt(sv, ctx)
        .or_else(|| latest_inlineable_condition_def_stmt_for_base(sv, ctx))?;
    let def_insn = ctx.stmt_insns.get(&def_stmt)?.clone();
    let op = comparison_symbol(def_insn.op)?;
    if def_insn.inputs.len() != 2 {
        trace_sequence(format_args!(
            "post-body-cond-skip cond_sv={sv:?} def_stmt={def_stmt} op={:?} reason=input-count inputs={}",
            def_insn.op,
            def_insn.inputs.len()
        ));
        return None;
    }
    trace_sequence(format_args!(
        "post-body-cond-def cond_sv={sv:?} def_stmt={def_stmt} addr=0x{:x} op={:?} cmp_op={} inputs={:?} output={:?}",
        def_insn.addr, def_insn.op, op, def_insn.inputs, def_insn.output
    ));

    let mut lhs =
        rebase_cond_operand_after_body(&def_insn.inputs[0], 0, def_stmt, start_stmt, end_stmt, ctx);
    let mut rhs =
        rebase_cond_operand_after_body(&def_insn.inputs[1], 1, def_stmt, start_stmt, end_stmt, ctx);
    trace_sequence(format_args!(
        "post-body-cond-rebased def_stmt={def_stmt} lhs={lhs:?} rhs={rhs:?}"
    ));

    if let Some(delta) = lhs.delta {
        let (value, size) = rhs.const_value?;
        trace_sequence(format_args!(
            "post-body-cond-adjust def_stmt={def_stmt} side=rhs value=0x{value:x} size={size} delta={delta}"
        ));
        rhs.text = format_constant_ctx(
            adjust_constant_for_delta(value, size, delta),
            size,
            const_context_for_op(def_insn.op),
        );
        rhs.changed = true;
    }
    if let Some(delta) = rhs.delta {
        let (value, size) = lhs.const_value?;
        trace_sequence(format_args!(
            "post-body-cond-adjust def_stmt={def_stmt} side=lhs value=0x{value:x} size={size} delta={delta}"
        ));
        lhs.text = format_constant_ctx(
            adjust_constant_for_delta(value, size, delta),
            size,
            const_context_for_op(def_insn.op),
        );
        lhs.changed = true;
    }

    if lhs.text == rhs.text {
        if lhs.changed && rhs.changed {
            let preserve_lhs = lhs.delta.is_some() && rhs.delta.is_none();
            if preserve_lhs {
                rhs.text = rhs.original_text.clone();
                rhs.changed = false;
                rhs.delta = None;
            } else {
                lhs.text = lhs.original_text.clone();
                lhs.changed = false;
                lhs.delta = None;
            }
        }
        if lhs.text == rhs.text && lhs.changed {
            lhs.text = lhs.original_text.clone();
            lhs.changed = false;
            lhs.delta = None;
        }
        if lhs.text == rhs.text && rhs.changed {
            rhs.text = rhs.original_text.clone();
            rhs.changed = false;
            rhs.delta = None;
        }
    }
    if lhs.text == rhs.text {
        trace_sequence(format_args!(
            "post-body-cond-skip def_stmt={def_stmt} reason=same-text lhs={lhs:?} rhs={rhs:?}"
        ));
        return None;
    }

    tracing::debug!(target: "unlace::cprinter",
        "post-body-cond def_stmt={def_stmt} range={start_stmt}..{end_stmt} op={:?} lhs={:?} rhs={:?}",
        def_insn.op, lhs, rhs
    );

    let changed = lhs.changed || rhs.changed;
    let rendered = changed.then(|| {
        let rendered = format!(
            "{} {} {}",
            simplify_condition_operand_text(&lhs.text),
            op,
            simplify_condition_operand_text(&rhs.text)
        );
        trace_sequence(format_args!(
            "post-body-cond-result def_stmt={def_stmt} changed={changed} rendered={rendered:?} lhs={lhs:?} rhs={rhs:?}"
        ));
        rendered
    });
    if rendered.is_none() {
        trace_sequence(format_args!(
            "post-body-cond-skip def_stmt={def_stmt} reason=unchanged lhs={lhs:?} rhs={rhs:?}"
        ));
    }
    rendered
}

pub(super) fn simplify_condition_operand_text(text: &str) -> String {
    let trimmed = text.trim();
    if let Some(inner) = trimmed
        .strip_prefix("LODWORD(")
        .and_then(|s| s.strip_suffix(')'))
    {
        let inner = inner.trim();
        if let Some(stripped) = strip_return_integer_suffix(inner) {
            return stripped;
        }
        if is_simple_integer_literal(inner) {
            return inner.to_string();
        }
        if is_c_identifier(inner) {
            return inner.to_string();
        }
    }
    trimmed.to_string()
}

pub(super) fn simplify_condition_expr_text(expr: &str) -> String {
    if let Some(inner) = strip_double_negation_condition(expr) {
        return simplify_condition_expr_text(&inner);
    }
    if let Some((lhs, op, rhs)) = split_top_level_comparison(expr) {
        return format!(
            "{} {} {}",
            simplify_condition_operand_text(lhs),
            op,
            simplify_condition_operand_text(rhs)
        );
    }
    expr.trim().to_string()
}

pub(super) fn simplify_double_negation_condition_lines(output: String) -> String {
    output
        .lines()
        .map(simplify_double_negation_condition_line)
        .collect::<Vec<_>>()
        .join("\n")
        + if output.ends_with('\n') { "\n" } else { "" }
}

pub(super) fn simplify_double_negation_condition_line(line: &str) -> String {
    let indent_len = line.len() - line.trim_start().len();
    let indent = &line[..indent_len];
    let trimmed = line.trim_start();

    if let Some(condition) = trimmed
        .strip_prefix("if (")
        .and_then(|rest| rest.strip_suffix(") {"))
    {
        let Some(simplified) = simplify_double_negation_condition_expr(condition) else {
            return line.to_string();
        };
        return format!("{indent}if ({simplified}) {{");
    }
    if let Some(condition) = trimmed
        .strip_prefix("while (")
        .and_then(|rest| rest.strip_suffix(") {"))
    {
        let Some(simplified) = simplify_double_negation_condition_expr(condition) else {
            return line.to_string();
        };
        return format!("{indent}while ({simplified}) {{");
    }
    if let Some(condition) = trimmed
        .strip_prefix("} while (")
        .and_then(|rest| rest.strip_suffix(");"))
    {
        let Some(simplified) = simplify_double_negation_condition_expr(condition) else {
            return line.to_string();
        };
        return format!("{indent}}} while ({simplified});");
    }
    line.to_string()
}

pub(super) fn simplify_double_negation_condition_expr(expr: &str) -> Option<String> {
    strip_double_negation_condition(expr).map(|inner| simplify_condition_expr_text(&inner))
}

pub(super) fn strip_double_negation_condition(expr: &str) -> Option<String> {
    let trimmed = expr.trim();
    if let Some(inner) = strip_single_outer_negation(trimmed) {
        let inner = inner.trim();
        if let Some(positive) = strip_single_outer_negation(inner) {
            return Some(positive);
        }
        if let Some(positive) = inner.strip_prefix('!') {
            let positive = positive.trim();
            if is_condition_atom(positive) {
                return Some(positive.to_string());
            }
        }
    }
    if let Some(positive) = trimmed.strip_prefix("!!") {
        let positive = positive.trim();
        if is_condition_atom(positive) {
            return Some(positive.to_string());
        }
    }
    None
}

pub(super) fn is_condition_atom(expr: &str) -> bool {
    is_c_identifier(expr)
        || is_simple_wrapping_macro(expr, "LODWORD")
        || is_simple_wrapping_macro(expr, "LOBYTE")
        || is_simple_wrapping_macro(expr, "HIDWORD")
        || is_simple_wrapping_macro(expr, "BYTE1")
        || is_simple_wrapping_macro(expr, "BYTE2")
        || is_simple_wrapping_macro(expr, "BYTE3")
        || is_simple_integer_literal(expr)
}

pub(super) fn is_simple_wrapping_macro(expr: &str, name: &str) -> bool {
    expr.strip_prefix(name)
        .and_then(|rest| rest.strip_prefix('('))
        .and_then(|rest| rest.strip_suffix(')'))
        .is_some_and(|inner| !inner.trim().is_empty())
}

/// Post-emission pass: fold the x86 signed-comparison flag idiom that the
/// lifter emits verbatim back into the C relational operator IDA/Hex-Rays show.
///
/// The hardware computes a signed `a < b` as `SF != OF`. Our printer renders
/// `SF` as `LOBYTE(a < b)` (the raw subtract's sign bit) and `OF` as
/// `__OFSUB__(a, b)`, so a signed less-than leaks as:
///
/// ```text
///     LOBYTE(a < b) ^ __OFSUB__(a, b)        =>  a < b
/// ```
///
/// and the `<=` form (the `jle`/`jng` pattern, `ZF | (SF != OF)`) as:
///
/// ```text
///     a == b || (LOBYTE(a < b) ^ __OFSUB__(a, b))   =>  a <= b
///     a == b || LOBYTE(a < b) ^ __OFSUB__(a, b)     =>  a <= b
/// ```
///
/// The transform is purely textual and conservative: it only fires when the two
/// operand pairs match exactly, so it can never change the meaning of an
/// unrelated XOR. Folding these collapses the `cond_N` flag temporaries that
/// then die in the dead-assignment pass — the dominant source of medium.elf's
/// line bloat.
pub(super) fn simplify_signed_flag_compares(output: String) -> String {
    if !output.contains("__OFSUB__") && !output.contains("__OFADD__") {
        return output;
    }
    let mut out = String::with_capacity(output.len());
    for (i, line) in output.lines().enumerate() {
        if i > 0 {
            out.push('\n');
        }
        // Skip the prelude `#define __OFSUB__` lines.
        if line.trim_start().starts_with("#define") {
            out.push_str(line);
            continue;
        }
        out.push_str(&simplify_signed_flag_line(line));
    }
    if output.ends_with('\n') {
        out.push('\n');
    }
    out
}

/// Apply the signed-flag-compare rewrites to a single line, repeatedly until no
/// further match (a line can hold several idioms, e.g. an `||` chain).
pub(super) fn simplify_signed_flag_line(line: &str) -> String {
    let mut current = line.to_string();
    for _ in 0..8 {
        let Some(next) = rewrite_one_signed_flag_idiom(&current) else {
            break;
        };
        current = next;
    }
    current
}

/// Find the first `LOBYTE(<A> < <B>) ^ __OFSUB__(<A>, <B>)` occurrence (with the
/// operand pairs matching) and rewrite it to `<A> < <B>`, additionally
/// collapsing a preceding `<A> == <B> ||` into `<A> <= <B>`. Returns `None` when
/// no idiom is present.
pub(super) fn rewrite_one_signed_flag_idiom(line: &str) -> Option<String> {
    let xor_pos = line.find(" ^ __OFSUB__(")?;
    // Parse the LOBYTE(...) immediately to the left of ` ^ `.
    let lobyte_close = xor_pos; // index of the space before ^
    let before_xor = &line[..lobyte_close];
    let lobyte_open = before_xor.rfind("LOBYTE(")?;
    let sf_inner = &before_xor[lobyte_open + "LOBYTE(".len()..];
    let sf_inner = sf_inner.strip_suffix(')')?.trim();
    // sf_inner must be `A < B` (the raw subtract sign bit).
    let (sf_a, sf_op, sf_b) = split_top_level_comparison(sf_inner)?;
    if sf_op != "<" {
        return None;
    }
    // Parse the __OFSUB__(A, B) to the right of ` ^ `.
    let of_start = xor_pos + " ^ ".len();
    let of_rest = &line[of_start..];
    let of_inner_start = of_rest.find("__OFSUB__(")? + "__OFSUB__(".len();
    let of_inner_rel_end = matching_paren_end(&of_rest[of_inner_start..])?;
    let of_inner = &of_rest[of_inner_start..of_inner_start + of_inner_rel_end];
    let (of_a, of_b) = split_top_level_comma(of_inner)?;
    // Operand pairs must match exactly (modulo whitespace).
    if sf_a.trim() != of_a.trim() || sf_b.trim() != of_b.trim() {
        return None;
    }
    let a = sf_a.trim();
    let b = sf_b.trim();
    let idiom_start = lobyte_open;
    let idiom_end = of_start + of_inner_start + of_inner_rel_end + 1; // include ')'

    // Check for a preceding `A == B || ` to fold into `<=`.
    let eq_prefix = format!("{a} == {b} || ");
    let head = &line[..idiom_start];
    if let Some(stripped) = head.strip_suffix(&eq_prefix) {
        let replacement = format!("{a} <= {b}");
        return Some(format!("{stripped}{replacement}{}", &line[idiom_end..]));
    }
    // Also accept a parenthesized idiom: `A == B || (IDIOM)`.
    let eq_prefix_paren = format!("{a} == {b} || (");
    if let Some(stripped) = head.strip_suffix(&eq_prefix_paren)
        && line[idiom_end..].starts_with(')')
    {
        let replacement = format!("{a} <= {b}");
        return Some(format!("{stripped}{replacement}{}", &line[idiom_end + 1..]));
    }

    let replacement = format!("{a} < {b}");
    Some(format!(
        "{}{replacement}{}",
        &line[..idiom_start],
        &line[idiom_end..]
    ))
}

/// Return the byte index just past the `)` that closes the paren group opened at
/// the start of `s` (i.e. `s[0]` is the first char *inside* the group). Returns
/// `None` if unbalanced.
pub(super) fn matching_paren_end(s: &str) -> Option<usize> {
    let mut depth = 1i32;
    for (i, b) in s.bytes().enumerate() {
        match b {
            b'(' => depth += 1,
            b')' => {
                depth -= 1;
                if depth == 0 {
                    return Some(i);
                }
            }
            _ => {}
        }
    }
    None
}

/// Split `a, b` at the top-level comma (depth 0). Returns `None` if there isn't
/// exactly one top-level comma.
pub(super) fn split_top_level_comma(s: &str) -> Option<(&str, &str)> {
    let bytes = s.as_bytes();
    let mut depth = 0i32;
    let mut comma: Option<usize> = None;
    for (i, &b) in bytes.iter().enumerate() {
        match b {
            b'(' => depth += 1,
            b')' => depth -= 1,
            b',' if depth == 0 => {
                if comma.is_some() {
                    return None;
                }
                comma = Some(i);
            }
            _ => {}
        }
    }
    let c = comma?;
    Some((&s[..c], &s[c + 1..]))
}

pub(super) fn rebase_cond_operand_after_body(
    vn: &Varnode,
    raw_idx: usize,
    stmt_idx: u32,
    start_stmt: u32,
    end_stmt: u32,
    ctx: &mut PrintCtx,
) -> RebasedCondOperand {
    if vn.space == SpaceId::Const {
        let text = format_constant_ctx(vn.offset, vn.size, ConstContext::Signed);
        trace_sequence(format_args!(
            "rebase-cond-operand-const stmt={stmt_idx} raw_idx={raw_idx} range={start_stmt}..{end_stmt} vn={vn:?} text={text:?}"
        ));
        return RebasedCondOperand {
            original_text: text.clone(),
            text,
            changed: false,
            delta: None,
            const_value: Some((vn.offset, vn.size)),
        };
    }

    let sv =
        input_or_latest_sv_for_operand(vn, Some(raw_idx), stmt_idx, ctx).unwrap_or(SsaVarnode {
            base: *vn,
            version: 0,
        });

    let original_text = emit_operand_with_prec(
        vn,
        raw_idx,
        stmt_idx,
        ConstContext::Signed,
        ParentCtx::top(),
        ctx,
    );
    trace_sequence(format_args!(
        "rebase-cond-operand-enter stmt={stmt_idx} raw_idx={raw_idx} range={start_stmt}..{end_stmt} vn={vn:?} sv={sv:?} original={original_text:?}"
    ));
    tracing::debug!(target: "unlace::cprinter",
        "rebase-cond operand stmt={stmt_idx} raw_idx={raw_idx} vn={vn:?} sv={sv:?} original={original_text}"
    );

    let candidate_bases = condition_rebase_candidate_bases(&sv, ctx);
    trace_sequence(format_args!(
        "rebase-cond-candidates stmt={stmt_idx} raw_idx={raw_idx} sv={sv:?} bases={candidate_bases:?}"
    ));

    if let Some(rebased) = rebase_compare_copy_source_after_body(
        &sv,
        vn,
        raw_idx,
        stmt_idx,
        start_stmt,
        end_stmt,
        &original_text,
        ctx,
    ) {
        return rebased;
    }

    for candidate_base in &candidate_bases {
        if let Some(alias_sv) =
            latest_visible_copy_from_base_in_range(candidate_base, start_stmt, end_stmt, ctx)
        {
            let text = ctx.name_of(&alias_sv);
            trace_sequence(format_args!(
                "rebase-cond-alias-hit stmt={stmt_idx} raw_idx={raw_idx} base={candidate_base:?} alias_sv={alias_sv:?} text={text:?}"
            ));
            return RebasedCondOperand {
                text,
                original_text,
                changed: true,
                delta: None,
                const_value: None,
            };
        }
    }

    for candidate_base in &candidate_bases {
        if let Some((alias_sv, delta)) =
            latest_linear_update_copy_for_base_in_range(candidate_base, start_stmt, end_stmt, ctx)
            && !value_chain_reaches(&sv, &alias_sv, ctx)
        {
            let text = ctx.name_of(&alias_sv);
            trace_sequence(format_args!(
                "rebase-cond-linear-hit stmt={stmt_idx} raw_idx={raw_idx} base={candidate_base:?} alias_sv={alias_sv:?} delta={delta} text={text:?}"
            ));
            return RebasedCondOperand {
                text,
                original_text,
                changed: true,
                delta: Some(delta),
                const_value: None,
            };
        }
    }

    trace_sequence(format_args!(
        "rebase-cond-miss stmt={stmt_idx} raw_idx={raw_idx} sv={sv:?} original={original_text:?}"
    ));
    RebasedCondOperand {
        text: original_text.clone(),
        original_text,
        changed: false,
        delta: None,
        const_value: None,
    }
}

pub(super) fn rebase_compare_copy_source_after_body(
    sv: &SsaVarnode,
    vn: &Varnode,
    raw_idx: usize,
    stmt_idx: u32,
    start_stmt: u32,
    end_stmt: u32,
    original_text: &str,
    ctx: &mut PrintCtx,
) -> Option<RebasedCondOperand> {
    let def_stmt = defining_stmt_for_sv(sv, ctx)?;
    if def_stmt < start_stmt || def_stmt >= end_stmt || def_stmt >= stmt_idx {
        return None;
    }
    let def_insn = ctx.stmt_insns.get(&def_stmt)?.clone();
    if def_insn.op != IrOp::Copy || def_insn.output != Some(*vn) || def_insn.inputs.len() != 1 {
        return None;
    }
    let source = def_insn.inputs[0];
    if let Some(materialized_sv) =
        latest_materialized_value_for_same_source(sv, &def_insn, def_stmt, stmt_idx, ctx)
    {
        let materialized_text = ctx.name_of(&materialized_sv);
        if materialized_text == original_text {
            trace_sequence(format_args!(
                "rebase-cond-copy-source-skip stmt={stmt_idx} raw_idx={raw_idx} copy_stmt={def_stmt} materialized={materialized_sv:?} text={materialized_text:?} reason=already-materialized"
            ));
            return None;
        }
    }
    if source_is_reassigned_before_condition(&source, def_stmt, stmt_idx, ctx)
        || source_operands_reassigned_before_condition(&source, def_stmt, stmt_idx, ctx, 0)
    {
        return None;
    }
    let text = pure_condition_source_text(&source, def_stmt, ctx, 0)?;
    if text.trim().is_empty() || text == original_text {
        return None;
    }
    trace_sequence(format_args!(
        "rebase-cond-copy-source-hit stmt={stmt_idx} raw_idx={raw_idx} copy_stmt={def_stmt} source={source:?} text={text:?}"
    ));
    Some(RebasedCondOperand {
        text,
        original_text: original_text.to_string(),
        changed: true,
        delta: None,
        const_value: (source.space == SpaceId::Const).then_some((source.offset, source.size)),
    })
}

pub(super) fn source_is_reassigned_before_condition(
    source: &Varnode,
    copy_stmt: u32,
    cond_stmt: u32,
    ctx: &PrintCtx,
) -> bool {
    if source.space == SpaceId::Const {
        return false;
    }
    let Some(source_sv) = input_or_latest_sv_for_operand(source, Some(0), copy_stmt, ctx) else {
        return false;
    };
    ctx.stmt_outputs
        .range((copy_stmt + 1)..cond_stmt)
        .any(|(_stmt, output)| output.is_some_and(|out| out.base == source_sv.base))
}

/// Whether a storage operand read by the temporary `source` expression is
/// overwritten before the condition. Rendering `source` as text at the
/// condition is only sound while every storage it reads still holds the same
/// value; `rax = rax + 1` followed by `rax != n` must not become `rax + 1 != n`.
pub(super) fn source_operands_reassigned_before_condition(
    source: &Varnode,
    use_stmt: u32,
    cond_stmt: u32,
    ctx: &PrintCtx,
    depth: u8,
) -> bool {
    if source.space != SpaceId::Unique || depth >= 4 {
        return false;
    }
    let Some(source_sv) = input_or_latest_sv_for_operand(source, Some(0), use_stmt, ctx) else {
        return false;
    };
    let Some(def_stmt) = defining_stmt_for_sv(&source_sv, ctx) else {
        return false;
    };
    let Some(def_insn) = ctx.stmt_insns.get(&def_stmt) else {
        return false;
    };
    def_insn.inputs.iter().any(|input| match input.space {
        SpaceId::Const => false,
        SpaceId::Unique => {
            source_operands_reassigned_before_condition(input, def_stmt, cond_stmt, ctx, depth + 1)
        }
        _ => ctx
            .stmt_outputs
            .range((def_stmt + 1)..cond_stmt)
            .any(|(_stmt, output)| {
                output.is_some_and(|out| {
                    out.base.space == input.space && out.base.offset == input.offset
                })
            }),
    })
}

pub(super) fn pure_condition_source_text(
    source: &Varnode,
    stmt_idx: u32,
    ctx: &mut PrintCtx,
    depth: u8,
) -> Option<String> {
    if source.space == SpaceId::Const {
        return Some(format_constant_ctx(
            source.offset,
            source.size,
            ConstContext::Signed,
        ));
    }
    if depth >= 4 {
        return Some(emit_operand_resolved(source, 0, stmt_idx, ctx));
    }
    let source_sv = input_or_latest_sv_for_operand(source, Some(0), stmt_idx, ctx)?;
    if source_sv.base.space != SpaceId::Unique {
        return Some(ctx.name_of(&source_sv));
    }
    let Some(def_stmt) = defining_stmt_for_sv(&source_sv, ctx) else {
        return Some(emit_operand_resolved(source, 0, stmt_idx, ctx));
    };
    if def_stmt >= stmt_idx {
        return Some(emit_operand_resolved(source, 0, stmt_idx, ctx));
    }
    let def_insn = ctx.stmt_insns.get(&def_stmt)?.clone();
    if instr_has_side_effects(&def_insn) {
        return None;
    }
    if matches!(
        def_insn.op,
        IrOp::Copy | IrOp::Subpiece | IrOp::IntZext | IrOp::IntSext | IrOp::Cast
    ) {
        return Some(emit_expr(&def_insn, def_stmt, ctx));
    }
    Some(emit_operand_resolved(source, 0, stmt_idx, ctx))
}

pub(super) fn condition_rebase_candidate_bases(sv: &SsaVarnode, ctx: &PrintCtx) -> Vec<Varnode> {
    let mut bases = vec![sv.base];
    let mut current = *sv;
    for _ in 0..4 {
        if !bases.contains(&current.base) {
            bases.push(current.base);
        }
        let Some(def_stmt) = defining_stmt_for_sv(&current, ctx) else {
            tracing::debug!(target: "unlace::cprinter", "rebase-candidates no def for {current:?}");
            break;
        };
        let Some(def_insn) = ctx.stmt_insns.get(&def_stmt) else {
            break;
        };
        tracing::debug!(target: "unlace::cprinter",
            "rebase-candidates current={current:?} def_stmt={def_stmt} op={:?} inputs={:?}",
            def_insn.op, def_insn.inputs
        );
        if !matches!(
            def_insn.op,
            IrOp::Copy | IrOp::Subpiece | IrOp::IntZext | IrOp::IntSext | IrOp::Cast
        ) {
            break;
        }
        let Some(input) = def_insn.inputs.first().copied() else {
            break;
        };
        if input.space == SpaceId::Const {
            break;
        }
        if !bases.contains(&input) {
            bases.push(input);
        }
        let Some(input_sv) = input_or_latest_sv_for_operand(&input, Some(0), def_stmt, ctx) else {
            break;
        };
        if input_sv == current {
            break;
        }
        current = input_sv;
    }
    bases
}

/// `true` when `sv` is `target` or a copy/extension chain of it: the operand
/// already reads the value a linear update produced, so it needs no rebase.
pub(super) fn value_chain_reaches(sv: &SsaVarnode, target: &SsaVarnode, ctx: &PrintCtx) -> bool {
    let mut current = *sv;
    for _ in 0..4 {
        if current == *target {
            return true;
        }
        let Some(def_stmt) = defining_stmt_for_sv(&current, ctx) else {
            return false;
        };
        let Some(def_insn) = ctx.stmt_insns.get(&def_stmt) else {
            return false;
        };
        if !matches!(
            def_insn.op,
            IrOp::Copy | IrOp::Subpiece | IrOp::IntZext | IrOp::IntSext | IrOp::Cast
        ) {
            return false;
        }
        let Some(input) = def_insn.inputs.first().copied() else {
            return false;
        };
        let Some(input_sv) = input_or_latest_sv_for_operand(&input, Some(0), def_stmt, ctx) else {
            return false;
        };
        if input_sv == current {
            return false;
        }
        current = input_sv;
    }
    current == *target
}

pub(super) fn comparison_symbol(op: IrOp) -> Option<&'static str> {
    match op {
        IrOp::IntEqual | IrOp::FloatEqual => Some("=="),
        IrOp::IntNotequal | IrOp::FloatNotequal => Some("!="),
        IrOp::IntLess | IrOp::IntSless | IrOp::FloatLess => Some("<"),
        IrOp::IntLessequal | IrOp::IntSlessequal | IrOp::FloatLessequal => Some("<="),
        _ => None,
    }
}

pub(super) fn adjust_constant_for_delta(value: u64, size: u8, delta: i128) -> u64 {
    let adjusted = if delta >= 0 {
        value.wrapping_add(delta as u64)
    } else {
        value.wrapping_sub((-delta) as u64)
    };
    if size >= 8 {
        adjusted
    } else {
        let bits = u32::from(size.max(1)) * 8;
        adjusted & ((1u64 << bits) - 1)
    }
}

pub(super) fn latest_linear_update_copy_for_base_in_range(
    base: &Varnode,
    start_stmt: u32,
    end_stmt: u32,
    ctx: &PrintCtx,
) -> Option<(SsaVarnode, i128)> {
    tracing::debug!(target: "unlace::cprinter",
        "linear-rebase search base={base:?} range={start_stmt}..{end_stmt}"
    );
    ctx.stmt_outputs
        .range(start_stmt..end_stmt)
        .rev()
        .find_map(|(&stmt_idx, output)| {
            let output_sv = (*output)?;
            if output_sv.base != *base || is_suppressible_storage(&output_sv.base, ctx) {
                return None;
            }
            let copy = ctx.stmt_insns.get(&stmt_idx)?;
            tracing::debug!(target: "unlace::cprinter",
                "linear-rebase candidate stmt={stmt_idx} output={output_sv:?} op={:?} inputs={:?}",
                copy.op, copy.inputs
            );
            if !matches!(
                copy.op,
                IrOp::Copy | IrOp::IntZext | IrOp::IntSext | IrOp::Cast
            ) || copy.inputs.len() != 1
            {
                return None;
            }
            let source = copy.inputs[0];
            if source.space == SpaceId::Const {
                return None;
            }
            let source_sv = input_or_latest_sv_for_operand(&source, Some(0), stmt_idx, ctx)?;
            let source_def_stmt = defining_stmt_for_sv(&source_sv, ctx)?;
            if source_def_stmt < start_stmt || source_def_stmt >= end_stmt {
                return None;
            }
            let source_def = ctx.stmt_insns.get(&source_def_stmt)?;
            tracing::debug!(target: "unlace::cprinter",
                "linear-rebase source stmt={source_def_stmt} op={:?} inputs={:?}",
                source_def.op, source_def.inputs
            );
            linear_update_delta_from_base_resolved(source_def, source_def_stmt, base, ctx)
                .map(|delta| (output_sv, delta))
        })
}

pub(super) fn linear_update_delta_from_base(insn: &IrInsn, base: &Varnode) -> Option<i128> {
    match insn.op {
        IrOp::IntAdd if insn.inputs.len() >= 2 => {
            if same_linear_update_base(&insn.inputs[0], base)
                && insn.inputs[1].space == SpaceId::Const
            {
                Some(insn.inputs[1].offset as i128)
            } else if same_linear_update_base(&insn.inputs[1], base)
                && insn.inputs[0].space == SpaceId::Const
            {
                Some(insn.inputs[0].offset as i128)
            } else {
                None
            }
        }
        IrOp::IntSub if insn.inputs.len() >= 2 => {
            if same_linear_update_base(&insn.inputs[0], base)
                && insn.inputs[1].space == SpaceId::Const
            {
                Some(-(insn.inputs[1].offset as i128))
            } else {
                None
            }
        }
        _ => None,
    }
}

pub(super) fn same_linear_update_base(candidate: &Varnode, base: &Varnode) -> bool {
    candidate == base
        || (candidate.space == SpaceId::Register
            && base.space == SpaceId::Register
            && candidate.offset == base.offset)
}

pub(super) fn linear_update_delta_from_base_resolved(
    insn: &IrInsn,
    stmt_idx: u32,
    base: &Varnode,
    ctx: &PrintCtx,
) -> Option<i128> {
    let input_matches = |idx: usize, input: &Varnode| {
        same_linear_update_base(input, base)
            || input_or_latest_sv_for_operand(input, Some(idx), stmt_idx, ctx)
                .is_some_and(|sv| same_linear_update_base(&sv.base, base))
    };

    match insn.op {
        IrOp::IntAdd if insn.inputs.len() >= 2 => {
            if input_matches(0, &insn.inputs[0]) && insn.inputs[1].space == SpaceId::Const {
                Some(insn.inputs[1].offset as i128)
            } else if input_matches(1, &insn.inputs[1]) && insn.inputs[0].space == SpaceId::Const {
                Some(insn.inputs[0].offset as i128)
            } else {
                linear_update_delta_from_base(insn, base)
            }
        }
        IrOp::IntSub if insn.inputs.len() >= 2 => {
            if input_matches(0, &insn.inputs[0]) && insn.inputs[1].space == SpaceId::Const {
                Some(-(insn.inputs[1].offset as i128))
            } else {
                linear_update_delta_from_base(insn, base)
            }
        }
        _ => linear_update_delta_from_base(insn, base),
    }
}

pub(super) fn negate_condition_expr(expr: &str) -> String {
    let expr = expr.trim();
    if let Some((lhs, op, rhs)) = split_top_level_comparison(expr) {
        let negated = match op {
            "==" => "!=",
            "!=" => "==",
            "<" => ">=",
            "<=" => ">",
            ">" => "<=",
            ">=" => "<",
            _ => return format!("!({expr})"),
        };
        return format!("{} {} {}", lhs.trim(), negated, rhs.trim());
    }
    format!("!({expr})")
}

/// Late, text-only cleanup: rewrite `if (!(X)) {}` (an empty then-body with no
/// `else`) to the positive `if (X) {}`.
///
/// WHY this lives at the very end of the cleanup pipeline rather than in the
/// structurer: the emptiness is a *print-time* artifact. Architectures like
/// mips64 / v850 / ppc64 lift a `logic_test`-style stub to the HIR shape
/// `if (!v) { v2 = 0 }` — a negated guard whose then-body holds a register
/// store. That store is a dead assignment removed only by the c_printer's
/// `prune_dead_plain_assignments` + decl-prune passes, AFTER the if-polarity is
/// already locked at structurer time. So at structurer time the body is
/// NON-empty and `empty_if_cleanup` never fires. Running here — after pruning —
/// is the only place where the emptiness is final.
///
/// An empty branch executes nothing regardless of polarity, so flipping the
/// guard is semantically free and matches the golden `if (v) {}` form.
///
/// Conservatism guards (each one prevents a false positive):
///   * The then-body must be GENUINELY empty: the line after the `{` is exactly
///     `}` at the matching indent. This is why `if (!(v1)) { result = 1; }`
///     (the inverted-else merge, asserted by
///     `test_empty_then_else_prints_inverted_condition`) is left untouched.
///   * The closing `}` must NOT be followed by `else` — an `if/else` keeps its
///     inverted guard (`test_print_if_else`).
///   * Only a single balanced outer `!(...)` is stripped. `if (!(a) && b)` is
///     not a leading negation of the whole condition and is skipped.
pub(super) fn depolarize_empty_negated_ifs(output: String) -> String {
    let lines: Vec<&str> = output.lines().collect();
    let mut out_lines: Vec<String> = Vec::with_capacity(lines.len());
    let mut i = 0usize;
    while i < lines.len() {
        if let Some(positive) = empty_negated_if_rewrite(&lines, i) {
            // Replace the guard line; the body (`}`) line is emitted as-is on
            // the next iteration.
            out_lines.push(positive);
            i += 1;
            continue;
        }
        out_lines.push(lines[i].to_string());
        i += 1;
    }
    let mut result = out_lines.join("\n");
    if output.ends_with('\n') {
        result.push('\n');
    }
    result
}

/// If `lines[idx]` is the guard line of an `if (!(X)) {}` with a genuinely empty
/// body and no `else`, return the rewritten `if (X) {` guard line (preserving
/// the original leading indent). Otherwise `None`.
pub(super) fn empty_negated_if_rewrite(lines: &[&str], idx: usize) -> Option<String> {
    let line = lines[idx];
    let indent_len = line.len() - line.trim_start().len();
    let indent = &line[..indent_len];
    let trimmed = line.trim_start();

    // Guard must be exactly `if (<cond>) {` — opening brace on the same line.
    let after_if = trimmed.strip_prefix("if (")?;
    let cond_with_brace = after_if.strip_suffix(" {")?;
    // The condition is everything up to the closing paren that balances the
    // `if (` opener. Require the line to end with `) {`.
    let cond = cond_with_brace.strip_suffix(')')?;

    // Strip exactly one balanced leading `!(...)` that wraps the whole cond.
    let positive = strip_single_outer_negation(cond)?;

    // Next non-blank line must be exactly the matching `}` (empty body), and
    // it must not begin an `else`.
    let mut j = idx + 1;
    while j < lines.len() && lines[j].trim().is_empty() {
        j += 1;
    }
    let close = lines.get(j)?;
    let close_trimmed = close.trim();
    if close_trimmed != "}" {
        return None;
    }
    // The body line must be at the same indent as the guard (matching brace),
    // confirming this `}` closes the `if` and nothing is nested inside.
    let close_indent_len = close.len() - close.trim_start().len();
    if close_indent_len != indent_len {
        return None;
    }
    // No `else` chained onto the closing brace (handled by the trim == "}"
    // check, but a `} else {` would already have failed that).

    Some(format!("{indent}if ({positive}) {{"))
}

/// If `cond` is exactly a single balanced `!(...)` wrapping its whole body,
/// return the inner expression (trimmed). Returns `None` when the leading `!`
/// does not parenthesize the entire condition (e.g. `!(a) && b`) or when there
/// is no leading negation.
pub(super) fn strip_single_outer_negation(cond: &str) -> Option<String> {
    let cond = cond.trim();
    let rest = cond.strip_prefix('!')?;
    let rest = rest.trim_start();
    if !rest.starts_with('(') {
        return None;
    }
    // Find the paren that balances the opening `(`.
    let bytes = rest.as_bytes();
    let mut depth = 0usize;
    let mut close_idx = None;
    for (k, &b) in bytes.iter().enumerate() {
        match b {
            b'(' => depth += 1,
            b')' => {
                depth -= 1;
                if depth == 0 {
                    close_idx = Some(k);
                    break;
                }
            }
            _ => {}
        }
    }
    let close_idx = close_idx?;
    // The `(...)` must span the entire remaining condition; otherwise the `!`
    // negates only a sub-expression (e.g. `!(a) && b`) and stripping it would
    // change semantics.
    if close_idx != bytes.len() - 1 {
        return None;
    }
    let inner = &rest[1..close_idx];
    let inner = inner.trim();
    if inner.is_empty() {
        return None;
    }
    Some(inner.to_string())
}

pub(super) fn split_top_level_comparison(expr: &str) -> Option<(&str, &str, &str)> {
    let bytes = expr.as_bytes();
    let ops = ["==", "!=", ">=", "<=", ">", "<"];
    let mut depth = 0usize;
    let mut found: Option<(usize, &str)> = None;
    let mut i = 0usize;

    'scan: while i < bytes.len() {
        match bytes[i] {
            b'(' => {
                depth += 1;
                i += 1;
                continue;
            }
            b')' => {
                depth = depth.saturating_sub(1);
                i += 1;
                continue;
            }
            _ => {}
        }

        if depth == 0 {
            if bytes[i..].starts_with(b"&&")
                || bytes[i..].starts_with(b"||")
                || bytes[i] == b'?'
                || bytes[i] == b':'
            {
                return None;
            }

            for op in ops {
                if top_level_condition_op_at(bytes, i, op) {
                    if found.replace((i, op)).is_some() {
                        return None;
                    }
                    i += op.len();
                    continue 'scan;
                }
            }
        }

        i += 1;
    }

    let (idx, op) = found?;
    let lhs = &expr[..idx];
    let rhs = &expr[idx + op.len()..];
    (!lhs.trim().is_empty() && !rhs.trim().is_empty()).then_some((lhs, op, rhs))
}

pub(super) fn top_level_condition_op_at(bytes: &[u8], idx: usize, op: &str) -> bool {
    if !bytes[idx..].starts_with(op.as_bytes()) {
        return false;
    }
    match op {
        "<" => bytes.get(idx + 1).copied() != Some(b'<'),
        ">" => {
            bytes.get(idx + 1).copied() != Some(b'>')
                && idx.checked_sub(1).and_then(|prev| bytes.get(prev)).copied() != Some(b'-')
        }
        _ => true,
    }
}

pub(super) fn inlineable_condition_def_stmt(sv: &SsaVarnode, ctx: &PrintCtx) -> Option<u32> {
    let def_stmt = defining_stmt_for_sv(sv, ctx)?;
    let def_insn = ctx.stmt_insns.get(&def_stmt)?;
    (def_insn.op.type_family() == Some('b')).then_some(def_stmt)
}

pub(super) fn latest_inlineable_condition_def_stmt_for_base(
    sv: &SsaVarnode,
    ctx: &PrintCtx,
) -> Option<u32> {
    ctx.stmt_outputs
        .range(..ctx.emit_stmt)
        .rev()
        .find_map(|(&stmt_idx, output)| {
            let output_sv = (*output)?;
            if output_sv.base != sv.base {
                return None;
            }
            let insn = ctx.stmt_insns.get(&stmt_idx)?;
            (insn.op.type_family() == Some('b')).then_some(stmt_idx)
        })
}

pub(super) fn is_control_only_condition_use(sv: &SsaVarnode, ctx: &PrintCtx) -> bool {
    if inlineable_condition_def_stmt(sv, ctx).is_none() {
        return false;
    }
    let control_uses = ctx
        .control_cond_uses
        .iter()
        .filter(|cond| *cond == sv)
        .count();
    control_uses > 0 && ctx.sv_use_counts.get(sv).copied().unwrap_or(0) <= control_uses
}

pub(super) fn is_control_only_condition_use_or_base(sv: &SsaVarnode, ctx: &PrintCtx) -> bool {
    is_control_only_condition_use(sv, ctx)
}

pub(super) fn is_control_condition_stmt(stmt_idx: u32, ctx: &PrintCtx) -> bool {
    ctx.stmt_outputs
        .get(&stmt_idx)
        .and_then(|output| *output)
        .is_some_and(|sv| ctx.control_cond_uses.contains(&sv))
}

pub(super) fn is_control_only_condition_assignment(
    stmt_idx: u32,
    sv: &SsaVarnode,
    insn: &IrInsn,
    ctx: &PrintCtx,
) -> bool {
    if insn.op.type_family() != Some('b') {
        return false;
    }
    if is_flag_register(&sv.base) {
        return false;
    }
    if inlineable_condition_def_stmt(sv, ctx) == Some(stmt_idx) {
        return is_control_only_condition_use(sv, ctx);
    }
    false
}

pub(super) fn body_is_stack_chk_fail_only(body: &[HirNode], ctx: &PrintCtx) -> bool {
    let mut meaningful = body.iter();
    let Some(node) = meaningful.next() else {
        return false;
    };
    meaningful.next().is_none() && node_is_stack_chk_fail_call(node, ctx)
}

pub(super) fn node_is_stack_chk_fail_call(node: &HirNode, ctx: &PrintCtx) -> bool {
    match node {
        HirNode::Statement(insn) => insn_calls_symbol(insn, "__stack_chk_fail", ctx),
        HirNode::Block(children) => body_is_stack_chk_fail_only(children, ctx),
        HirNode::Commented { inner, .. } => node_is_stack_chk_fail_call(inner, ctx),
        _ => false,
    }
}

/// `true` when `body` contains a call to `__stack_chk_fail` somewhere in its
/// direct children (optionally wrapped in a `Block`/`Commented`), regardless of
/// any trailing `goto`/`return`. Unlike [`body_is_stack_chk_fail_only`] this
/// tolerates the extra control-transfer statements the structurer appends to a
/// canary-fail branch inside an irreducible region.
pub(super) fn body_contains_stack_chk_fail_call(body: &[HirNode], ctx: &PrintCtx) -> bool {
    fn node_contains(node: &HirNode, ctx: &PrintCtx) -> bool {
        match node {
            HirNode::Statement(insn) => insn_calls_symbol(insn, "__stack_chk_fail", ctx),
            HirNode::Block(children) => children.iter().any(|n| node_contains(n, ctx)),
            HirNode::Commented { inner, .. } => node_contains(inner, ctx),
            _ => false,
        }
    }
    body.iter().any(|node| node_contains(node, ctx))
}

pub(super) fn insn_calls_symbol(insn: &IrInsn, name: &str, ctx: &PrintCtx) -> bool {
    if !matches!(insn.op, IrOp::Call | IrOp::Callind) {
        return false;
    }
    let Some(target) = insn.inputs.first() else {
        return false;
    };
    target.space == SpaceId::Const
        && ctx
            .symbols
            .get(&target.offset)
            .is_some_and(|sym| sym == name || sym.ends_with(name))
}

/// Runtime/CRT helpers whose C prototype returns `void`. A direct call to one
/// of these must never be rendered as the right-hand side of an assignment
/// (`v = __stack_chk_fail();`) — that is a hard `-Werror` "invalid use of void
/// expression" / type error. The IR may carry a spurious output varnode for
/// these (the lifter models the call's clobber of a return register), but the
/// C-level prototype is `void`, so the assignment is dropped and only the call
/// statement is emitted.
pub(super) fn call_targets_void_runtime_symbol(insn: &IrInsn, ctx: &PrintCtx) -> bool {
    const VOID_RUNTIME_SYMBOLS: &[&str] = &[
        "__stack_chk_fail",
        "__stack_chk_fail_local",
        "abort",
        "__assert_fail",
        "__cxa_rethrow",
        "_Unwind_Resume",
    ];
    if !matches!(insn.op, IrOp::Call | IrOp::Callind) {
        return false;
    }
    let Some(target) = insn.inputs.first() else {
        return false;
    };
    if target.space != SpaceId::Const {
        return false;
    }
    let Some(sym) = ctx.symbols.get(&target.offset) else {
        return false;
    };
    VOID_RUNTIME_SYMBOLS
        .iter()
        .any(|name| sym == name || sym.ends_with(name))
}
