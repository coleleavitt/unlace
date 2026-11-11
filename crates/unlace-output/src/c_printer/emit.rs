//! c_printer: emit.

use super::*;

/// `true` when `ty` is the sentinel used to encode a catch-all clause
/// (`catch (...)`) inside [`HirNode::TryCatch`]'s `catch_arms`.
pub(super) fn is_catch_all_type(ty: &unlace_ir::types::Type) -> bool {
    matches!(
        ty,
        unlace_ir::types::Type::Primitive(unlace_ir::ssa::PrimitiveType::Unknown)
    )
}

pub(super) struct CatchObjectBinding {
    pub(super) name: String,
    /// Indices of the leading handler statements the binding replaces: the
    /// `__cxa_begin_catch` call and the `__eh_exception()` definitions
    /// feeding it.
    pub(super) replaced: Vec<usize>,
}

/// The `__cxa_begin_catch` result among the handler's leading statements,
/// which names the caught object in the `catch (T name)` header.
pub(super) fn catch_object_binding(
    body: &[HirNode],
    ctx: &mut PrintCtx,
) -> Option<CatchObjectBinding> {
    let mut replaced = Vec::new();
    for (idx, node) in body.iter().enumerate() {
        let HirNode::Statement(insn) = node else {
            return None;
        };
        if unlace_ir::eh::EhHelper::of(insn) == Some(unlace_ir::eh::EhHelper::Exception) {
            replaced.push(idx);
            continue;
        }
        if !matches!(insn.op, IrOp::Call | IrOp::Callind) {
            continue;
        }
        let action = cxx_eh_action_for_call(insn, ctx)?;
        if !matches!(
            action,
            unlace_passes::cxx_eh::CxxEhAction::BeginCatch
                | unlace_passes::cxx_eh::CxxEhAction::GetExceptionPtr
        ) {
            return None;
        }
        let call_stmt = ctx.emit_stmt + idx as u32;
        let sv = ctx.stmt_outputs.get(&call_stmt).copied().flatten()?;
        replaced.push(idx);
        return Some(CatchObjectBinding {
            name: ctx.name_of(&sv),
            replaced,
        });
    }
    None
}

pub(super) fn emit_catch_body(
    body: &[HirNode],
    binding: Option<&CatchObjectBinding>,
    depth: usize,
    ctx: &mut PrintCtx,
    out: &mut String,
) {
    let Some(last_replaced) = binding.and_then(|b| b.replaced.last().copied()) else {
        emit_nodes(body, depth, ctx, out);
        return;
    };
    let replaced = &binding.expect("binding has replaced statements").replaced;
    for (idx, node) in body[..=last_replaced].iter().enumerate() {
        if replaced.contains(&idx) {
            ctx.emit_stmt += 1;
        } else {
            emit_nodes(std::slice::from_ref(node), depth, ctx, out);
        }
    }
    emit_nodes(&body[last_replaced + 1..], depth, ctx, out);
}

// ---------------------------------------------------------------------------
// Node emission
// ---------------------------------------------------------------------------

/// `true` if the last node in `body` already transfers control out of the
/// enclosing block (return / unconditional goto / break / continue / tail
/// call / `__noreturn`-style raw RETURN statement). Used by the switch
/// emit path to suppress redundant trailing `break;` markers — emitting
/// `return X; break;` is both ugly and triggers a "statement after return
/// is unreachable" diagnostic on many C compilers.
///
/// Conservative: returns `false` when `body` is empty, or when the last
/// node is anything we don't recognise as a terminator. The cost of a
/// false negative is a redundant `break;`; the cost of a false positive
/// is a switch case that falls through unintentionally. We prefer the
/// former.
pub(super) fn body_ends_with_terminator(body: &[HirNode]) -> bool {
    let Some(last) = body.last() else {
        return false;
    };
    match last {
        HirNode::Block(inner) => body_ends_with_terminator(inner),
        HirNode::Commented { inner, .. } => {
            body_ends_with_terminator(std::slice::from_ref(inner.as_ref()))
        }
        node => node_is_terminal_for_emission(node),
    }
}

pub(super) fn node_is_terminal_for_emission(node: &HirNode) -> bool {
    match node {
        HirNode::Return(_)
        | HirNode::Goto(_)
        | HirNode::Break
        | HirNode::Continue
        | HirNode::TailCall { .. } => true,
        HirNode::Statement(insn) => matches!(insn.op, IrOp::Return | IrOp::Branchind),
        HirNode::Block(inner) => body_ends_with_terminator(inner),
        HirNode::Commented { inner, .. } => {
            body_ends_with_terminator(std::slice::from_ref(inner.as_ref()))
        }
        _ => false,
    }
}

pub(super) fn emit_nodes(nodes: &[HirNode], depth: usize, ctx: &mut PrintCtx, out: &mut String) {
    let _span = cprinter_detail_phase("cprinter.emit.nodes");
    if linkscope::trace_detail_enabled() {
        linkscope::record_items("cprinter.emit.nodes", nodes.len() as u64);
    }
    let mut i = 0;
    let mut last_dowhile_stmt_range: Option<(u32, u32)> = None;
    while i < nodes.len() {
        trace_flow(format_args!(
            "node-enter depth={depth} idx={i} stmt={} kind={}",
            ctx.emit_stmt,
            hir_node_trace_kind(&nodes[i])
        ));
        if let HirNode::Return(Some(sv)) = &nodes[i]
            && !ctx.parent_returns_void
            && let Some((start, end)) = last_dowhile_stmt_range
            && let Some(expr) = resolve_post_dowhile_return_expr(sv, start, end, ctx)
        {
            indent(depth, ctx.config.tab_width, out);
            let _ = writeln!(out, "return {};", canonicalize_return_expr(expr));
            if !has_later_sibling_label(nodes, i + 1) {
                skip_unemitted_nodes(&nodes[i + 1..], ctx);
                break;
            }
            i += 1;
            last_dowhile_stmt_range = None;
            continue;
        }
        if let Some(merged) = try_merge_assign_return(&nodes[i..], ctx) {
            trace_flow(format_args!(
                "merge-assign-return depth={depth} idx={i} stmt={} expr={}",
                ctx.emit_stmt, merged
            ));
            ctx.emit_stmt += 1;
            indent(depth, ctx.config.tab_width, out);
            let _ = writeln!(out, "return {};", canonicalize_return_expr(merged));
            i += 2;
            last_dowhile_stmt_range = None;
            continue;
        }
        if let Some(merged) = try_merge_call_return(&nodes[i..], ctx) {
            trace_flow(format_args!(
                "merge-call-return depth={depth} idx={i} stmt={} stmt_count={} expr={}",
                ctx.emit_stmt, merged.stmt_count, merged.expr
            ));
            ctx.emit_stmt += merged.stmt_count;
            indent(depth, ctx.config.tab_width, out);
            let _ = writeln!(out, "return {};", canonicalize_return_expr(merged.expr));
            i += merged.node_count;
            last_dowhile_stmt_range = None;
            continue;
        }
        let before_inline_stmt = ctx.emit_stmt;
        if let Some(first) = inline_node_text(&nodes[i], ctx) {
            let mut parts = Vec::new();
            let first_is_terminal = node_is_terminal_for_emission(&nodes[i]);
            let mut group_has_terminal = first_is_terminal;
            if !first.is_empty() {
                parts.push(first);
            }
            trace_flow(format_args!(
                "inline-start depth={depth} idx={i} stmt_before={before_inline_stmt} stmt_after={} kind={} text={:?}",
                ctx.emit_stmt,
                hir_node_trace_kind(&nodes[i]),
                parts.last()
            ));
            i += 1;
            while !first_is_terminal && i < nodes.len() && parts.is_empty() {
                if let Some(merged) = try_merge_assign_return(&nodes[i..], ctx) {
                    trace_flow(format_args!(
                        "inline-merge-assign-return depth={depth} idx={i} stmt={} expr={}",
                        ctx.emit_stmt, merged
                    ));
                    ctx.emit_stmt += 1;
                    parts.push(format!("return {};", canonicalize_return_expr(merged)));
                    i += 2;
                    group_has_terminal = true;
                    break;
                }
                if let Some(merged) = try_merge_call_return(&nodes[i..], ctx) {
                    trace_flow(format_args!(
                        "inline-merge-call-return depth={depth} idx={i} stmt={} stmt_count={} expr={}",
                        ctx.emit_stmt, merged.stmt_count, merged.expr
                    ));
                    ctx.emit_stmt += merged.stmt_count;
                    parts.push(format!("return {};", canonicalize_return_expr(merged.expr)));
                    i += merged.node_count;
                    group_has_terminal = true;
                    break;
                }
                let next_stmt_before = ctx.emit_stmt;
                let Some(next) = inline_node_text(&nodes[i], ctx) else {
                    trace_flow(format_args!(
                        "inline-stop-noninline depth={depth} idx={i} stmt_before={next_stmt_before} stmt_after={} kind={}",
                        ctx.emit_stmt,
                        hir_node_trace_kind(&nodes[i])
                    ));
                    break;
                };
                let is_terminal = node_is_terminal_for_emission(&nodes[i]);
                if is_terminal {
                    group_has_terminal = true;
                }
                if !next.is_empty() {
                    parts.push(next);
                }
                trace_flow(format_args!(
                    "inline-next depth={depth} idx={i} stmt_before={next_stmt_before} stmt_after={} kind={} terminal={is_terminal} text={:?}",
                    ctx.emit_stmt,
                    hir_node_trace_kind(&nodes[i]),
                    parts.last()
                ));
                i += 1;
                if is_terminal {
                    break;
                }
            }
            if !parts.is_empty() {
                trace_flow(format_args!(
                    "inline-flush depth={depth} next_idx={i} stmt={} parts={:?}",
                    ctx.emit_stmt, parts
                ));
                indent(depth, ctx.config.tab_width, out);
                let _ = writeln!(out, "{}", parts.join(" "));
            }
            if group_has_terminal && !has_later_sibling_label(nodes, i) {
                trace_flow(format_args!(
                    "inline-terminal-break depth={depth} next_idx={i} stmt={}",
                    ctx.emit_stmt
                ));
                skip_unemitted_nodes(&nodes[i..], ctx);
                break;
            }
            last_dowhile_stmt_range = None;
            continue;
        }
        let is_terminal = node_is_terminal_for_emission(&nodes[i]);
        let start_stmt = ctx.emit_stmt;
        let is_dowhile = matches!(nodes[i], HirNode::DoWhile { .. });
        emit_node(&nodes[i], depth, ctx, out);
        let end_stmt = ctx.emit_stmt;
        trace_flow(format_args!(
            "node-exit depth={depth} idx={i} kind={} stmt_range={start_stmt}..{end_stmt} terminal={is_terminal}",
            hir_node_trace_kind(&nodes[i])
        ));
        last_dowhile_stmt_range = if is_dowhile {
            Some((start_stmt, end_stmt))
        } else {
            None
        };
        if is_terminal {
            // Do not stop before later sibling labels. Real HIR can contain
            // unreachable cleanup/statements between a terminal branch and a
            // later target label; suppressing that label leaves dangling gotos.
            if !has_later_sibling_label(nodes, i + 1) {
                skip_unemitted_nodes(&nodes[i + 1..], ctx);
                break;
            }
        }
        i += 1;
    }
}

pub(super) fn has_later_sibling_label(nodes: &[HirNode], start: usize) -> bool {
    nodes
        .get(start..)
        .is_some_and(|tail| tail.iter().any(|n| matches!(n, HirNode::Label(_))))
}

pub(super) fn inline_node_text(node: &HirNode, ctx: &mut PrintCtx) -> Option<String> {
    let _span = cprinter_detail_phase("cprinter.emit.inline-node");
    match node {
        HirNode::Statement(insn) => inline_statement_text(insn, ctx),
        HirNode::Return(Some(sv)) => {
            if ctx.parent_returns_void {
                Some("return;".to_string())
            } else {
                Some(format!("return {};", resolve_return_expr(sv, ctx)))
            }
        }
        HirNode::Return(None) => Some(nonvoid_or_void_return_text(ctx)),
        HirNode::Goto(label) => Some(format!("goto {};", label)),
        HirNode::TailCall { target, args } => Some(format_tail_call_text(*target, args, ctx)),
        HirNode::Continue => Some("continue;".to_string()),
        HirNode::Break => Some("break;".to_string()),
        HirNode::Ternary { select, .. } => ternary_text(select, ctx),
        _ => None,
    }
}

pub(super) fn emit_node_phase(node: &HirNode) -> Option<linkscope::Span> {
    match node {
        HirNode::Block(_) => cprinter_detail_phase("cprinter.emit.node.block"),
        HirNode::Statement(_) => cprinter_detail_phase("cprinter.emit.node.statement"),
        HirNode::If { .. } => cprinter_detail_phase("cprinter.emit.node.if"),
        HirNode::IfCmp { .. } => cprinter_detail_phase("cprinter.emit.node.ifcmp"),
        HirNode::While { .. } => cprinter_detail_phase("cprinter.emit.node.while"),
        HirNode::DoWhile { .. } => cprinter_detail_phase("cprinter.emit.node.dowhile"),
        HirNode::For { .. } => cprinter_detail_phase("cprinter.emit.node.for"),
        HirNode::Switch { .. } => cprinter_detail_phase("cprinter.emit.node.switch"),
        HirNode::Return(_) => cprinter_detail_phase("cprinter.emit.node.return"),
        HirNode::Goto(_) => cprinter_detail_phase("cprinter.emit.node.goto"),
        HirNode::Label(_) => cprinter_detail_phase("cprinter.emit.node.label"),
        HirNode::Ternary { .. } => cprinter_detail_phase("cprinter.emit.node.ternary"),
        HirNode::GuardedTernary { .. } => {
            cprinter_detail_phase("cprinter.emit.node.guarded-ternary")
        }
        HirNode::CselTernary { .. } => cprinter_detail_phase("cprinter.emit.node.csel-ternary"),
        HirNode::GuardedIf { .. } => cprinter_detail_phase("cprinter.emit.node.guarded-if"),
        HirNode::TailCall { .. } => cprinter_detail_phase("cprinter.emit.node.tail-call"),
        HirNode::Continue => cprinter_detail_phase("cprinter.emit.node.continue"),
        HirNode::Break => cprinter_detail_phase("cprinter.emit.node.break"),
        HirNode::ObjcBlock { .. } => cprinter_detail_phase("cprinter.emit.node.objc-block"),
        HirNode::TryCatch { .. } => cprinter_detail_phase("cprinter.emit.node.try-catch"),
        HirNode::TryFinally { .. } => cprinter_detail_phase("cprinter.emit.node.try-finally"),
        HirNode::TryExcept { .. } => cprinter_detail_phase("cprinter.emit.node.try-except"),
        HirNode::Asm { .. } => cprinter_detail_phase("cprinter.emit.node.asm"),
        HirNode::Commented { .. } => cprinter_detail_phase("cprinter.emit.node.commented"),
    }
}

pub(super) fn emit_node(node: &HirNode, depth: usize, ctx: &mut PrintCtx, out: &mut String) {
    let _span = emit_node_phase(node);
    trace_flow(format_args!(
        "emit-node depth={depth} stmt={} kind={}",
        ctx.emit_stmt,
        hir_node_trace_kind(node)
    ));
    match node {
        HirNode::Block(children) => emit_nodes(children, depth, ctx, out),

        HirNode::Statement(insn) => emit_statement(insn, depth, ctx, out),

        HirNode::If {
            cond,
            then_body,
            else_body,
        } => {
            trace_flow(format_args!(
                "emit-if depth={depth} stmt={} then_len={} else_len={}",
                ctx.emit_stmt,
                then_body.len(),
                else_body.as_ref().map_or(0, |body| body.len())
            ));
            if body_is_stack_chk_fail_only(then_body, ctx) {
                skip_unemitted_nodes(then_body, ctx);
                if let Some(eb) = else_body {
                    emit_nodes(eb, depth, ctx, out);
                }
                return;
            }
            if let Some(eb) = else_body
                .as_deref()
                .filter(|eb| body_is_stack_chk_fail_only(eb, ctx))
            {
                emit_nodes(then_body, depth, ctx, out);
                skip_unemitted_nodes(eb, ctx);
                return;
            }
            // Stack-canary guard `if (canary != reloaded) { __stack_chk_fail();
            // goto exit; }`: the fail branch (the one containing the call) is
            // the trap and is dropped; the other branch is the normal path.
            // Detected by condition so it fires even when the trap body carries
            // a trailing goto (irreducible-region shape) that defeats the
            // body-only check above.
            if cond_sv_is_stack_canary_compare(cond, ctx) {
                if body_contains_stack_chk_fail_call(then_body, ctx) {
                    skip_unemitted_nodes(then_body, ctx);
                    if let Some(eb) = else_body {
                        emit_nodes(eb, depth, ctx, out);
                    }
                    return;
                }
                if let Some(eb) = else_body
                    .as_deref()
                    .filter(|eb| body_contains_stack_chk_fail_call(eb, ctx))
                {
                    emit_nodes(then_body, depth, ctx, out);
                    skip_unemitted_nodes(eb, ctx);
                    return;
                }
            }

            trace_sequence(format_args!(
                "emit-if-enter depth={depth} stmt={} cond_sv={cond:?} then_len={} else_len={}",
                ctx.emit_stmt,
                then_body.len(),
                else_body.as_ref().map_or(0, |body| body.len())
            ));
            let cond_expr = resolve_control_cond_expr(cond, ctx);
            trace_sequence(format_args!(
                "emit-if-cond depth={depth} stmt={} cond_sv={cond:?} cond={cond_expr:?}",
                ctx.emit_stmt
            ));
            if then_body.is_empty()
                && let Some(eb) = else_body
                && !eb.is_empty()
            {
                trace_flow(format_args!(
                    "emit-if-empty-then-invert depth={depth} stmt={} cond={} else_len={} else_first={}",
                    ctx.emit_stmt,
                    cond_expr,
                    eb.len(),
                    eb.first().map_or("<none>", hir_node_trace_kind)
                ));
                indent(depth, ctx.config.tab_width, out);
                let _ = writeln!(out, "if ({}) {{", negate_condition_expr(&cond_expr));
                emit_nodes(eb, depth + 1, ctx, out);
                indent(depth, ctx.config.tab_width, out);
                let _ = writeln!(out, "}}");
                return;
            }
            indent(depth, ctx.config.tab_width, out);
            let _ = writeln!(out, "if ({}) {{", cond_expr);
            emit_nodes(then_body, depth + 1, ctx, out);
            if let Some(eb) = else_body {
                indent(depth, ctx.config.tab_width, out);
                let _ = writeln!(out, "}} else {{");
                emit_nodes(eb, depth + 1, ctx, out);
            }
            indent(depth, ctx.config.tab_width, out);
            let _ = writeln!(out, "}}");
        }

        HirNode::IfCmp {
            cmp_op,
            cmp_lhs,
            cmp_rhs,
            then_body,
            else_body,
            ..
        } => {
            // Mirror `CselTernary`'s operand rendering for the predicate.
            fn render_one(vn: &Varnode, ctx: &mut PrintCtx) -> String {
                if vn.space == SpaceId::Const {
                    format!("0x{:x}", vn.offset)
                } else {
                    let ver = ctx.current_version(vn);
                    ctx.name_of(&SsaVarnode {
                        base: *vn,
                        version: ver,
                    })
                }
            }
            let lhs_s = render_one(cmp_lhs, ctx);
            let rhs_s = render_one(cmp_rhs, ctx);
            let op_str = match cmp_op {
                IrOp::IntEqual => "==",
                IrOp::IntNotequal => "!=",
                IrOp::IntLess => "<",
                IrOp::IntLessequal => "<=",
                IrOp::IntSless => "<",
                IrOp::IntSlessequal => "<=",
                _ => "/*?*/",
            };
            let cond_expr = format!("{lhs_s} {op_str} {rhs_s}");
            if then_body.is_empty()
                && let Some(eb) = else_body
                && !eb.is_empty()
            {
                trace_flow(format_args!(
                    "emit-ifcmp-empty-then-invert depth={depth} stmt={} cond={} else_len={} else_first={}",
                    ctx.emit_stmt,
                    cond_expr,
                    eb.len(),
                    eb.first().map_or("<none>", hir_node_trace_kind)
                ));
                indent(depth, ctx.config.tab_width, out);
                let _ = writeln!(out, "if ({}) {{", negate_condition_expr(&cond_expr));
                emit_nodes(eb, depth + 1, ctx, out);
                indent(depth, ctx.config.tab_width, out);
                let _ = writeln!(out, "}}");
                return;
            }
            indent(depth, ctx.config.tab_width, out);
            let _ = writeln!(out, "if ({cond_expr}) {{");
            emit_nodes(then_body, depth + 1, ctx, out);
            if let Some(eb) = else_body {
                indent(depth, ctx.config.tab_width, out);
                let _ = writeln!(out, "}} else {{");
                emit_nodes(eb, depth + 1, ctx, out);
            }
            indent(depth, ctx.config.tab_width, out);
            let _ = writeln!(out, "}}");
        }

        HirNode::While { cond, body } => {
            trace_sequence(format_args!(
                "emit-while-enter depth={depth} stmt={} cond_sv={cond:?} body_len={}",
                ctx.emit_stmt,
                body.len()
            ));
            let cond_expr = resolve_control_cond_expr(cond, ctx);
            trace_sequence(format_args!(
                "emit-while-cond depth={depth} stmt={} cond_sv={cond:?} cond={cond_expr:?}",
                ctx.emit_stmt
            ));
            trace_flow(format_args!(
                "emit-while depth={depth} stmt={} cond={cond_expr:?} body_len={}",
                ctx.emit_stmt,
                body.len()
            ));
            indent(depth, ctx.config.tab_width, out);
            let _ = writeln!(out, "while ({}) {{", cond_expr);
            let body_start_stmt = ctx.emit_stmt;
            emit_nodes(body, depth + 1, ctx, out);
            let body_end_stmt = ctx.emit_stmt;
            indent(depth, ctx.config.tab_width, out);
            let _ = writeln!(out, "}}");
            trace_sequence(format_args!(
                "emit-while-exit depth={depth} range={body_start_stmt}..{body_end_stmt} cond={cond_expr:?}"
            ));
        }

        HirNode::DoWhile { body, cond } => {
            trace_sequence(format_args!(
                "emit-dowhile-enter depth={depth} stmt={} cond_sv={cond:?} body_len={}",
                ctx.emit_stmt,
                body.len()
            ));
            indent(depth, ctx.config.tab_width, out);
            let _ = writeln!(out, "do {{");
            let body_start_stmt = ctx.emit_stmt;
            emit_nodes(body, depth + 1, ctx, out);
            let body_end_stmt = ctx.emit_stmt;
            trace_sequence(format_args!(
                "emit-dowhile-body-done depth={depth} range={body_start_stmt}..{body_end_stmt} cond_sv={cond:?}"
            ));
            let cond_expr = match resolve_post_body_control_cond_expr(
                cond,
                body_start_stmt,
                body_end_stmt,
                ctx,
            ) {
                Some(expr) => {
                    trace_sequence(format_args!(
                        "emit-dowhile-cond-post-body depth={depth} range={body_start_stmt}..{body_end_stmt} cond={expr:?}"
                    ));
                    expr
                }
                None => {
                    let raw = resolve_control_cond_expr(cond, ctx);
                    let simplified = simplify_condition_expr_text(&raw);
                    trace_sequence(format_args!(
                        "emit-dowhile-cond-fallback depth={depth} range={body_start_stmt}..{body_end_stmt} raw={raw:?} simplified={simplified:?}"
                    ));
                    simplified
                }
            };
            indent(depth, ctx.config.tab_width, out);
            let _ = writeln!(out, "}} while ({});", cond_expr);
            trace_sequence(format_args!(
                "emit-dowhile-exit depth={depth} range={body_start_stmt}..{body_end_stmt} cond={cond_expr:?}"
            ));
        }

        HirNode::For {
            init,
            cond,
            update,
            body,
        } => {
            let init_str = if let Some(init_insn) = init {
                let init_idx = ctx.emit_stmt;
                ctx.emit_stmt += 1;
                emit_for_clause(init_insn, init_idx, ctx)
            } else {
                String::new()
            };

            trace_sequence(format_args!(
                "emit-for-cond-enter depth={depth} stmt={} cond_sv={cond:?} body_len={}",
                ctx.emit_stmt,
                body.len()
            ));
            let cond_expr = resolve_control_cond_expr(cond, ctx);
            trace_sequence(format_args!(
                "emit-for-cond depth={depth} stmt={} cond_sv={cond:?} cond={cond_expr:?}",
                ctx.emit_stmt
            ));

            let mut body_buf = String::new();
            let body_start_stmt = ctx.emit_stmt;
            emit_nodes(body, depth + 1, ctx, &mut body_buf);
            let body_end_stmt = ctx.emit_stmt;

            let update_idx = ctx.emit_stmt;
            ctx.emit_stmt += 1;
            let update_str = emit_for_clause(update, update_idx, ctx);

            indent(depth, ctx.config.tab_width, out);
            let _ = writeln!(out, "for ({}; {}; {}) {{", init_str, cond_expr, update_str);
            out.push_str(&body_buf);
            indent(depth, ctx.config.tab_width, out);
            let _ = writeln!(out, "}}");
            trace_sequence(format_args!(
                "emit-for-exit depth={depth} body_range={body_start_stmt}..{body_end_stmt} update_stmt={update_idx} init={init_str:?} cond={cond_expr:?} update={update_str:?}"
            ));
        }

        HirNode::Switch {
            cond,
            cases,
            default,
            ..
        } => {
            let cond_expr = resolve_sv_expr(cond, ctx);
            let cond_is_char = matches!(
                ctx.var_types
                    .get(cond)
                    .copied()
                    .unwrap_or(PrimitiveType::Unknown),
                PrimitiveType::Int(1) | PrimitiveType::UnsignedInt(1),
            );
            indent(depth, ctx.config.tab_width, out);
            let _ = writeln!(out, "switch ({}) {{", cond_expr);
            for (case, body, fall_through) in cases {
                indent(depth, ctx.config.tab_width, out);
                match case {
                    SwitchCase::Value(v) => {
                        if let Some(lit) = format_char_case(*v, cond_is_char) {
                            let _ = writeln!(out, "case {}:", lit);
                        } else if let Some(s) = ctx.string_hash_table.get(v) {
                            let _ =
                                writeln!(out, "case 0x{:X}u:  /* \"{}\" */", v, s.escape_default());
                            let _ =
                                writeln!(out, "case 0x{:X}u:  /* \"{}\" */", v, s.escape_default());
                        } else if let Some(names) = i64::try_from(*v)
                            .ok()
                            .and_then(|value| ctx.pdb_constants_by_value.get(&value))
                        {
                            let _ = writeln!(
                                out,
                                "case {}:  /* {} */",
                                v,
                                names
                                    .iter()
                                    .map(|name| name.as_str())
                                    .collect::<Vec<_>>()
                                    .join(", ")
                            );
                        } else {
                            let _ = writeln!(out, "case {}:", v);
                        }
                    }
                    SwitchCase::Range(lo, hi) => {
                        let _ = writeln!(out, "case {} ... {}:", lo, hi);
                    }
                }
                if *fall_through {
                    if body.is_empty() {
                        // Stacked case label (Batch 9 slice 2 dedup
                        // chain): just emit `case X:` with no body and
                        // no comment — the next iteration will print
                        // the next label, and the terminal case will
                        // carry the shared body.
                    } else {
                        // Explicit fall-through: body runs, then control
                        // intentionally flows into the next case. Surface
                        // the intent with a `/* fall through */` marker.
                        emit_nodes(body, depth + 1, ctx, out);
                        indent(depth + 1, ctx.config.tab_width, out);
                        let _ = writeln!(out, "/* fall through */");
                    }
                } else {
                    emit_nodes(body, depth + 1, ctx, out);
                    if !body_ends_with_terminator(body) {
                        indent(depth + 1, ctx.config.tab_width, out);
                        let _ = writeln!(out, "break;");
                    }
                }
            }
            if let Some(def) = default {
                indent(depth, ctx.config.tab_width, out);
                let _ = writeln!(out, "default:");
                emit_nodes(def, depth + 1, ctx, out);
                if !body_ends_with_terminator(def) {
                    indent(depth + 1, ctx.config.tab_width, out);
                    let _ = writeln!(out, "break;");
                }
            }
            indent(depth, ctx.config.tab_width, out);
            let _ = writeln!(out, "}}");
        }

        HirNode::Return(Some(sv)) => {
            indent(depth, ctx.config.tab_width, out);
            if ctx.parent_returns_void {
                let _ = writeln!(out, "return;");
            } else {
                let name = resolve_return_expr(sv, ctx);
                let _ = writeln!(out, "return {};", name);
            }
        }

        HirNode::Return(None) => {
            indent(depth, ctx.config.tab_width, out);
            let _ = writeln!(out, "{}", nonvoid_or_void_return_text(ctx));
        }

        HirNode::Goto(label) => {
            trace_flow(format_args!(
                "emit-goto depth={depth} stmt={} label={label}",
                ctx.emit_stmt
            ));
            indent(depth, ctx.config.tab_width, out);
            let _ = writeln!(out, "goto {};", label);
        }

        HirNode::Label(label) => {
            trace_flow(format_args!(
                "emit-label depth={depth} stmt={} label={label}",
                ctx.emit_stmt
            ));
            if depth > 0 {
                indent(depth - 1, ctx.config.tab_width, out);
            }
            let _ = writeln!(out, "{}:;", label);
        }

        HirNode::Ternary { select, .. } => emit_ternary(select, depth, ctx, out),

        HirNode::TailCall { target, args } => {
            indent(depth, ctx.config.tab_width, out);
            let _ = writeln!(out, "{}", format_tail_call_text(*target, args, ctx));
        }

        HirNode::Continue => {
            indent(depth, ctx.config.tab_width, out);
            let _ = writeln!(out, "continue;");
        }

        HirNode::Break => {
            indent(depth, ctx.config.tab_width, out);
            let _ = writeln!(out, "break;");
        }

        HirNode::TryCatch {
            try_body,
            catch_arms,
        } => {
            // C++ `try { ... } catch (T e) { ... }` arms; a catch-all arm
            // renders as `catch (...)`.
            indent(depth, ctx.config.tab_width, out);
            let _ = writeln!(out, "try {{");
            emit_nodes(try_body, depth + 1, ctx, out);
            for (ty, body) in catch_arms {
                indent(depth, ctx.config.tab_width, out);
                if is_catch_all_type(ty) {
                    let _ = writeln!(out, "}} catch (...) {{");
                    emit_nodes(body, depth + 1, ctx, out);
                } else {
                    let captured_c = render_type_as_c(ty);
                    let binding = catch_object_binding(body, ctx);
                    let name = binding.as_ref().map(|b| b.name.as_str()).unwrap_or("e");
                    let _ = writeln!(out, "}} catch ({} {}) {{", captured_c, name);
                    emit_catch_body(body, binding.as_ref(), depth + 1, ctx, out);
                }
            }
            indent(depth, ctx.config.tab_width, out);
            let _ = writeln!(out, "}}");
        }

        HirNode::TryFinally {
            try_body,
            finally_body,
        } => {
            // t183: MSVC `__try { ... } __finally { ... }`. The finally
            // block runs on both normal and exceptional control-flow
            // paths, distinguishing it from `__except`.
            indent(depth, ctx.config.tab_width, out);
            let _ = writeln!(out, "__try {{");
            emit_nodes(try_body, depth + 1, ctx, out);
            indent(depth, ctx.config.tab_width, out);
            let _ = writeln!(out, "}} __finally {{");
            ctx.cleanup_depth += 1;
            emit_nodes(finally_body, depth + 1, ctx, out);
            ctx.cleanup_depth -= 1;
            indent(depth, ctx.config.tab_width, out);
            let _ = writeln!(out, "}}");
        }

        HirNode::TryExcept {
            try_body,
            filter,
            except_body,
        } => {
            indent(depth, ctx.config.tab_width, out);
            let _ = writeln!(out, "__try {{");
            emit_nodes(try_body, depth + 1, ctx, out);
            indent(depth, ctx.config.tab_width, out);
            let _ = writeln!(out, "}} __except ({}) {{", render_seh_filter(*filter, ctx));
            emit_nodes(except_body, depth + 1, ctx, out);
            indent(depth, ctx.config.tab_width, out);
            let _ = writeln!(out, "}}");
        }

        HirNode::Commented { pre, post, inner } => {
            let tab = ctx.config.tab_width;
            for line in pre {
                emit_comment_line(line, depth, tab, out);
            }
            emit_node(inner, depth, ctx, out);
            for line in post {
                emit_comment_line(line, depth, tab, out);
            }
        }

        HirNode::Asm { instructions } => {
            indent(depth, ctx.config.tab_width, out);
            let _ = writeln!(out, "__asm {{");
            for line in instructions {
                indent(depth + 1, ctx.config.tab_width, out);
                let _ = writeln!(out, "{}", line);
            }
            indent(depth, ctx.config.tab_width, out);
            let _ = writeln!(out, "}}");
        }

        HirNode::GuardedIf {
            cond_code,
            then_body,
            else_body,
        } => {
            let mnem = arm_cond_mnemonic(*cond_code);
            indent(depth, ctx.config.tab_width, out);
            let _ = writeln!(out, "if (cond_{}) {{", mnem);
            emit_nodes(then_body, depth + 1, ctx, out);
            indent(depth, ctx.config.tab_width, out);
            if else_body.is_empty() {
                let _ = writeln!(out, "}}");
            } else {
                let _ = writeln!(out, "}} else {{");
                emit_nodes(else_body, depth + 1, ctx, out);
                indent(depth, ctx.config.tab_width, out);
                let _ = writeln!(out, "}}");
            }
        }

        HirNode::ObjcBlock { invoke, captures } => {
            indent(depth, ctx.config.tab_width, out);
            if captures.is_empty() {
                let _ = writeln!(out, "^{{ /* invoke=0x{:x} */ }};", invoke);
            } else {
                // Cross-reference each capture's SSA varnode against
                // `ctx.byref_boxes` (lifted from `HirFunction::byref_boxes`,
                // t176). When the varnode is recognised as a `__block`
                // box, render the capture as `__block T name`; otherwise
                // fall back to the plain capture name. This is the
                // printer side of t184 — block detection (t119) feeds
                // captures with SSA varnodes, byref detection (t176)
                // populates `byref_boxes`, and the printer joins them.
                let rendered: Vec<String> = captures
                    .iter()
                    .map(|cap| {
                        if let Some(sv) = &cap.varnode
                            && let Some(bx) = ctx.byref_boxes.get(&sv.base)
                        {
                            let captured_c = render_type_as_c(&bx.captured_type);
                            return format!("__block {} {}", captured_c, cap.name);
                        }
                        cap.name.clone()
                    })
                    .collect();
                let _ = writeln!(
                    out,
                    "^{{ /* invoke=0x{:x} captures=[{}] */ }};",
                    invoke,
                    rendered.join(", ")
                );
            }
        }

        HirNode::GuardedTernary {
            cond_code,
            then_insn,
            else_insn,
            output: _,
        } => {
            // Mirror `Ternary` rendering but with the ARM cond_code mnemonic
            // as the predicate. Statement slots were allocated in the same
            // order during `collect_varnodes` so we draw the LHS name from
            // the then-arm slot.
            let then_idx = ctx.emit_stmt;
            ctx.emit_stmt += 1;
            let else_idx = ctx.emit_stmt;
            ctx.emit_stmt += 1;

            let lhs = if let Some(Some(sv)) = ctx.stmt_outputs.get(&then_idx).cloned() {
                ctx.name_of(&sv)
            } else {
                "/* guarded-ternary */".to_string()
            };

            let then_expr = emit_expr(then_insn, then_idx, ctx);
            let else_expr = emit_expr(else_insn, else_idx, ctx);
            let mnem = arm_cond_mnemonic(*cond_code);

            indent(depth, ctx.config.tab_width, out);
            let _ = writeln!(
                out,
                "{} = cond_{} ? {} : {};",
                lhs, mnem, then_expr, else_expr
            );
        }

        HirNode::CselTernary {
            cmp_op,
            cmp_lhs,
            cmp_rhs,
            true_val,
            false_val,
            output,
            ..
        } => {
            // The collect pass allocated one stmt slot for this node and
            // bumped versions for `output`, so we can recover the LHS
            // name. Reads of cmp_lhs/cmp_rhs/true_val/false_val use the
            // *current* version (the latest write visible to this point).
            let idx = ctx.emit_stmt;
            ctx.emit_stmt += 1;
            let lhs = if let Some(Some(sv)) = ctx.stmt_outputs.get(&idx).cloned() {
                ctx.name_of(&sv)
            } else {
                let ver = ctx.current_version(output);
                ctx.name_of(&SsaVarnode {
                    base: *output,
                    version: ver,
                })
            };
            fn render_one(vn: &Varnode, ctx: &mut PrintCtx) -> String {
                if vn.space == SpaceId::Const {
                    format!("0x{:x}", vn.offset)
                } else {
                    let ver = ctx.current_version(vn);
                    ctx.name_of(&SsaVarnode {
                        base: *vn,
                        version: ver,
                    })
                }
            }
            let lhs_s = render_one(cmp_lhs, ctx);
            let rhs_s = render_one(cmp_rhs, ctx);
            let tv_s = render_one(true_val, ctx);
            let fv_s = render_one(false_val, ctx);
            let op_str = match cmp_op {
                IrOp::IntEqual => "==",
                IrOp::IntNotequal => "!=",
                IrOp::IntLess => "<",
                IrOp::IntLessequal => "<=",
                IrOp::IntSless => "<",
                IrOp::IntSlessequal => "<=",
                _ => "/*?*/",
            };
            indent(depth, ctx.config.tab_width, out);
            let _ = writeln!(
                out,
                "{} = ({} {} {}) ? {} : {};",
                lhs, lhs_s, op_str, rhs_s, tv_s, fv_s,
            );
        }
    }
}

/// ARM A8.3 condition-code mnemonic for IT-block guards.
pub(super) fn arm_cond_mnemonic(cc: u8) -> &'static str {
    match cc & 0xF {
        0x0 => "eq",
        0x1 => "ne",
        0x2 => "cs",
        0x3 => "cc",
        0x4 => "mi",
        0x5 => "pl",
        0x6 => "vs",
        0x7 => "vc",
        0x8 => "hi",
        0x9 => "ls",
        0xA => "ge",
        0xB => "lt",
        0xC => "gt",
        0xD => "le",
        0xE => "al",
        _ => "nv",
    }
}

/// Emit a single comment line at the given indent. Multi-line comment
/// strings (containing `\n`) are split into one `// `-prefixed line
/// per source line, preserving paragraph structure.
pub(super) fn emit_comment_line(text: &str, depth: usize, tab_width: usize, out: &mut String) {
    for line in text.split('\n') {
        indent(depth, tab_width, out);
        if line.is_empty() {
            let _ = writeln!(out, "//");
        } else {
            let _ = writeln!(out, "// {}", line);
        }
    }
}

// ---------------------------------------------------------------------------
// Statement emission (single IR instruction)
// ---------------------------------------------------------------------------

pub(super) fn emit_for_clause(insn: &IrInsn, stmt_idx: u32, ctx: &mut PrintCtx) -> String {
    let lhs_sv = match ctx.stmt_outputs.get(&stmt_idx).cloned().flatten() {
        Some(sv) => sv,
        None => return format!("/* {} */", insn.op.name()),
    };
    let lhs = ctx.name_of(&lhs_sv);

    if let Some(short) = try_emit_increment_form(insn, stmt_idx, &lhs, ctx) {
        return short;
    }

    if let Some(short) = try_emit_compound_assign(insn, stmt_idx, &lhs, ctx) {
        return short;
    }

    let rhs = emit_expr(insn, stmt_idx, ctx);
    format!("{} = {}", lhs, rhs)
}

pub(super) fn stmt_output_sv(ctx: &PrintCtx, stmt_idx: u32) -> Option<SsaVarnode> {
    ctx.stmt_outputs.get(&stmt_idx).copied().flatten()
}

pub(super) fn stmt_input_sv(ctx: &PrintCtx, stmt_idx: u32, raw_idx: usize) -> Option<SsaVarnode> {
    ctx.stmt_input_slot_lookup
        .get(&(stmt_idx, raw_idx))
        .copied()
        .or_else(|| {
            ctx.stmt_input_slots
                .get(&stmt_idx)
                .and_then(|inputs| inputs.get(&raw_idx).copied())
        })
        .or_else(|| {
            ctx.stmt_inputs
                .get(&stmt_idx)
                .and_then(|inputs| inputs.get(raw_idx).copied())
        })
}

pub(super) fn stmt_has_ssa_identity(ctx: &PrintCtx, stmt_idx: u32) -> bool {
    ctx.stmt_outputs.contains_key(&stmt_idx)
        || ctx
            .stmt_input_slots
            .get(&stmt_idx)
            .is_some_and(|inputs| !inputs.is_empty())
}

pub(super) fn input_is_statement_output(
    insn: &IrInsn,
    stmt_idx: u32,
    input_idx: usize,
    ctx: &PrintCtx,
) -> bool {
    let output_sv = stmt_output_sv(ctx, stmt_idx);
    let input_sv = stmt_input_sv(ctx, stmt_idx, input_idx);
    if stmt_has_ssa_identity(ctx, stmt_idx) {
        let matched = output_sv.is_some() && input_sv == output_sv;
        if !matched {
            tracing::debug!(target: "unlace::cprinter",
                "self-update stmt={stmt_idx} input={input_idx} decision=reject-ssa-mismatch raw_in={:?} raw_out={:?} input_sv={input_sv:?} output_sv={output_sv:?}",
                insn.inputs.get(input_idx),
                insn.output,
            );
        }
        matched
    } else {
        insn.inputs.get(input_idx).copied() == insn.output
    }
}

/// Like [`input_is_statement_output`] but matches on the *base* varnode,
/// ignoring the SSA version. A self-update such as a for-loop counter
/// `i = i + 1` reads version N and writes version N+1 of the same base, so the
/// version-exact check rejects it; for the increment / compound-assignment
/// contraction we only need to know the same storage is read and written.
pub(super) fn input_base_is_statement_output(
    insn: &IrInsn,
    stmt_idx: u32,
    input_idx: usize,
    ctx: &PrintCtx,
) -> bool {
    if input_is_statement_output(insn, stmt_idx, input_idx, ctx) {
        return true;
    }
    let output_sv = stmt_output_sv(ctx, stmt_idx);
    let input_sv = stmt_input_sv(ctx, stmt_idx, input_idx);
    match (input_sv, output_sv) {
        (Some(i), Some(o)) => i.base == o.base,
        _ => insn.inputs.get(input_idx).copied() == insn.output,
    }
}

pub(super) fn try_emit_increment_form(
    insn: &IrInsn,
    stmt_idx: u32,
    lhs: &str,
    ctx: &mut PrintCtx,
) -> Option<String> {
    if insn.inputs.len() != 2 {
        return None;
    }
    if let Some(update) = typed_pointer_update(insn, stmt_idx, lhs, ctx) {
        return Some(update);
    }
    let (counter_idx, const_in) = match (insn.inputs[0].space, insn.inputs[1].space) {
        (SpaceId::Const, _) => (1, &insn.inputs[0]),
        (_, SpaceId::Const) => (0, &insn.inputs[1]),
        _ => return None,
    };
    if !input_base_is_statement_output(insn, stmt_idx, counter_idx, ctx) {
        return None;
    }
    if const_in.offset != 1 {
        return None;
    }
    // Hex-Rays writes a statement-level increment in prefix form.
    match insn.op {
        IrOp::IntAdd => Some(format!("++{}", lhs)),
        IrOp::IntSub if insn.inputs[1].space == SpaceId::Const => Some(format!("--{}", lhs)),
        _ => None,
    }
}

pub(super) fn try_emit_compound_assign(
    insn: &IrInsn,
    stmt_idx: u32,
    lhs: &str,
    ctx: &mut PrintCtx,
) -> Option<String> {
    if insn.inputs.len() != 2 {
        return None;
    }
    // The destination must be read exactly once: `x = x + x` keeps its
    // plain form.
    let counter_idx = match (
        input_base_is_statement_output(insn, stmt_idx, 0, ctx),
        input_base_is_statement_output(insn, stmt_idx, 1, ctx),
    ) {
        (true, false) => 0,
        (false, true) => 1,
        _ => return None,
    };
    let counter_is_first = counter_idx == 0;

    // If the counter input has a foldable definition, its expression expands
    // inline and compound form would be wrong (e.g. `((1) + 2) += 3`).
    let counter_vn = &insn.inputs[counter_idx];
    if counter_vn.space != SpaceId::Const {
        let counter_sv = stmt_input_sv(ctx, stmt_idx, counter_idx).or_else(|| {
            ctx.stmt_inputs
                .get(&stmt_idx)
                .and_then(|inputs| inputs.iter().find(|sv| sv.base == *counter_vn).copied())
        });
        if let Some(csv) = counter_sv
            && ctx.sv_defining_stmt.contains_key(&csv)
        {
            return None;
        }
    }

    // For commutative ops, either operand position is fine.
    // For non-commutative ops (sub, div, mod, shifts), only first-position works.
    let op_str = match insn.op {
        IrOp::IntAdd => "+=",
        IrOp::IntSub if counter_is_first => "-=",
        IrOp::IntMult => "*=",
        IrOp::IntDiv | IrOp::IntSdiv if counter_is_first => "/=",
        IrOp::IntRem | IrOp::IntSrem if counter_is_first => "%=",
        IrOp::IntLeft if counter_is_first => "<<=",
        IrOp::IntRight | IrOp::IntSright if counter_is_first => ">>=",
        IrOp::IntAnd => "&=",
        IrOp::IntOr => "|=",
        IrOp::IntXor => "^=",
        _ => return None,
    };
    let other_idx = 1 - counter_idx;
    let const_ctx = const_context_for_op(insn.op);
    let other = emit_operand_with_prec(
        &insn.inputs[other_idx],
        other_idx,
        stmt_idx,
        const_ctx,
        ParentCtx::top(),
        ctx,
    );
    // An inlined operand can read the destination again (`x = x + f(x)`).
    if contains_identifier(&other, lhs) {
        return None;
    }
    Some(format!("{} {} {}", lhs, op_str, other))
}

pub(super) fn cxx_eh_action_comment(action: unlace_passes::cxx_eh::CxxEhAction) -> &'static str {
    use unlace_passes::cxx_eh::CxxEhAction;
    match action {
        CxxEhAction::BeginCatch => "catch",
        CxxEhAction::EndCatch => "end catch",
        CxxEhAction::UnwindResume => "unwind resume",
        CxxEhAction::Throw | CxxEhAction::Rethrow | CxxEhAction::MsvcThrow => "throw",
        CxxEhAction::AllocateException => "allocate exception",
        CxxEhAction::FreeException => "free exception",
        CxxEhAction::GetExceptionPtr => "get exception ptr",
        CxxEhAction::CurrentExceptionType => "current exception type",
        CxxEhAction::BadCast => "bad cast",
        CxxEhAction::BadTypeid => "bad typeid",
        CxxEhAction::DynamicCast => "dynamic cast",
        CxxEhAction::PureVirtual => "pure virtual",
        CxxEhAction::DeletedVirtual => "deleted virtual",
        CxxEhAction::GuardAcquire => "guard acquire",
        CxxEhAction::GuardRelease => "guard release",
        CxxEhAction::GuardAbort => "guard abort",
        CxxEhAction::Personality => "C++ EH personality",
        CxxEhAction::MsvcFrameHandler => "MSVC C++ frame handler",
    }
}

pub(super) fn cxx_eh_action_for_call(
    insn: &IrInsn,
    ctx: &PrintCtx,
) -> Option<unlace_passes::cxx_eh::CxxEhAction> {
    if !matches!(insn.op, IrOp::Call | IrOp::Callind) {
        return None;
    }
    if let Some(action) = ctx.cxx_eh_actions.get(&insn.addr).copied() {
        return Some(action);
    }

    if insn.op != IrOp::Call || insn.inputs.is_empty() {
        return None;
    }
    let target = &insn.inputs[0];
    if target.space != SpaceId::Const {
        return None;
    }
    let name = ctx.symbols.get(&target.offset)?;
    unlace_passes::cxx_eh::classify_eh_call(name)
}

pub(super) fn cxa_call_annotation(insn: &IrInsn, ctx: &PrintCtx) -> Option<&'static str> {
    cxx_eh_action_for_call(insn, ctx).map(cxx_eh_action_comment)
}

pub(super) fn inline_statement_text(insn: &IrInsn, ctx: &mut PrintCtx) -> Option<String> {
    let _span = cprinter_detail_phase("cprinter.emit.inline-statement");
    let idx = ctx.emit_stmt;
    tracing::debug!(target: "unlace::cprinter",
        "inline stmt={idx} addr=0x{:x} op={:?} enter output={:?}",
        insn.addr,
        insn.op,
        ctx.stmt_outputs.get(&idx).copied().flatten()
    );
    if ctx.source_map.contains_key(&insn.addr) {
        tracing::debug!(target: "unlace::cprinter", "inline stmt={idx} decision=defer-source-map");
        return None;
    }
    if ctx.commented_stmts.contains(&idx) || ctx.line_comments.contains_key(&insn.addr) {
        tracing::debug!(target: "unlace::cprinter", "inline stmt={idx} decision=defer-comment");
        return None;
    }
    if matches!(insn.op, IrOp::Call | IrOp::Callind)
        && (ctx.panic_sites.contains_key(&insn.addr) || cxa_call_annotation(insn, ctx).is_some())
    {
        return None;
    }
    // t262 — when a libc-canonicalized Call has an origin comment to
    // emit, defer to emit_statement so the comment goes on its own
    // line above the call rather than inline.
    if matches!(insn.op, IrOp::Call | IrOp::Callind)
        && let Some(canonical) = ctx.libc_call_canonical.get(&insn.addr)
        && let Some(original) = ctx.libc_call_original.get(&insn.addr)
        && canonical != original
    {
        return None;
    }
    // CSEL must go through emit_statement for if-else expansion
    if is_csel_callother(insn) {
        ctx.emit_stmt += 1;
        return None;
    }
    // Hoisted variable declarations must render through emit_statement so
    // the type prefix and `// <location>` trailer can be emitted on a
    // dedicated line.  Inline grouping joins adjacent stmts on one line
    // which is incompatible with mid-line decl annotations.
    if let Some(Some(sv)) = ctx.stmt_outputs.get(&idx).copied()
        && let Some(plan) = ctx.hoist_decl_plan.get(&sv.base)
        && plan.stmt_idx == idx
        && plan.fold_into_assignment
    {
        return None;
    }

    ctx.emit_stmt += 1;
    if ctx.foldable_stmts.contains(&idx)
        || is_dead_zero_init(insn, idx, ctx)
        || is_dead_suppressible_store(insn, idx, ctx)
        || is_dead_suppressed_stack_load(insn, idx, ctx)
        || is_stack_canary_compare_artifact(insn, idx, ctx)
    {
        tracing::debug!(target: "unlace::cprinter", "inline stmt={idx} decision=suppress-fold-dead");
        return Some(String::new());
    }

    if let Some(Some(sv)) = ctx.stmt_outputs.get(&idx).cloned() {
        if is_x86_frame_base_update(insn, &sv.base) {
            tracing::debug!(target: "unlace::cprinter", "inline stmt={idx} decision=suppress-frame-base");
            return Some(String::new());
        }
        if is_control_only_condition_assignment(idx, &sv, insn, ctx) {
            tracing::debug!(target: "unlace::cprinter", "inline stmt={idx} decision=suppress-control-cond");
            return Some(String::new());
        }
        // A void-returning runtime helper (e.g. `__stack_chk_fail`) must never
        // be rendered as an assignment RHS even when its spurious return-reg
        // output appears live — the C prototype is `void`. Drop the LHS and
        // emit the bare call statement.
        if call_targets_void_runtime_symbol(insn, ctx) {
            let call = if insn.op == IrOp::Callind {
                emit_callind_cast(insn, idx, ctx)
            } else {
                emit_direct_call_expr(insn, idx, ctx)
            };
            return Some(format!("{};", call));
        }
        if matches!(insn.op, IrOp::Call | IrOp::Callind)
            && ctx.sv_use_counts.get(&sv).copied().unwrap_or(0) == 0
            && !has_later_alias_use(&sv.base, idx, ctx)
        {
            let call = if insn.op == IrOp::Callind {
                emit_callind_cast(insn, idx, ctx)
            } else if let Some(bracket) = objc_bracket_call(insn, ctx) {
                bracket
            } else {
                emit_direct_call_expr(insn, idx, ctx)
            };
            return Some(format!("{};", call));
        }
        if SyscallConvention::of(insn).is_some()
            && ctx.sv_use_counts.get(&sv).copied().unwrap_or(0) == 0
            && !has_later_alias_use(&sv.base, idx, ctx)
        {
            return Some(format!("{};", emit_callother(insn, idx, ctx)));
        }
        let lhs = ctx.name_of(&sv);
        if let Some(short) = try_emit_increment_form(insn, idx, &lhs, ctx) {
            let rendered = format!("{};", short);
            tracing::debug!(target: "unlace::cprinter", "inline stmt={idx} decision=emit text={rendered}");
            Some(rendered)
        } else if let Some(short) = try_emit_compound_assign(insn, idx, &lhs, ctx) {
            let rendered = format!("{};", short);
            tracing::debug!(target: "unlace::cprinter", "inline stmt={idx} decision=emit text={rendered}");
            Some(rendered)
        } else if insn.op == IrOp::Call {
            if let Some(bracket) = objc_bracket_call(insn, ctx) {
                let rendered = format_inline_assignment(idx, &sv, &lhs, bracket, ctx);
                tracing::debug!(target: "unlace::cprinter", "inline stmt={idx} decision=emit text={rendered}");
                Some(rendered)
            } else {
                let rhs = emit_direct_call_expr(insn, idx, ctx);
                let rendered = format_inline_assignment(idx, &sv, &lhs, rhs, ctx);
                tracing::debug!(target: "unlace::cprinter", "inline stmt={idx} decision=emit text={rendered}");
                Some(rendered)
            }
        } else {
            let rhs = emit_expr(insn, idx, ctx);
            let rendered = format_inline_assignment(idx, &sv, &lhs, rhs, ctx);
            tracing::debug!(target: "unlace::cprinter", "inline stmt={idx} decision=emit text={rendered}");
            Some(rendered)
        }
    } else {
        match insn.op {
            IrOp::Store if insn.inputs.len() >= 3 => {
                if is_suppressed_stack_access(&insn.inputs[1], Some(1), idx, ctx) {
                    return Some(String::new());
                }
                let store_size = insn.inputs[2].size;
                let val = emit_operand_resolved(&insn.inputs[2], 2, idx, ctx);
                if let Some(object) = try_object_access(&insn.inputs[1], idx, store_size, ctx) {
                    Some(format!("{} = {};", object, val))
                } else if let Some(local) =
                    try_stack_frame_access_name(&insn.inputs[1], Some(1), idx, store_size, ctx)
                {
                    Some(format!("{} = {};", local, val))
                } else if let Some(global) =
                    try_global_var_name(&insn.inputs[1], Some(1), idx, store_size, ctx)
                {
                    Some(format!("{} = {};", global, val))
                } else if let Some(field_expr) =
                    try_typed_access(&insn.inputs[1], idx, store_size, ctx)
                {
                    Some(format!("{} = {};", field_expr, val))
                } else if let Some(field_expr) =
                    try_array_struct_field_access(&insn.inputs[1], idx, store_size, ctx)
                {
                    // t231: see the matching hook in `emit_statement` —
                    // `inline_statement_text` is the parallel codepath
                    // used when adjacent stmts get grouped on one line.
                    Some(format!("{} = {};", field_expr, val))
                } else if let Some(sub) = try_array_subscript(&insn.inputs[1], idx, store_size, ctx)
                {
                    // Batch 11 slice 2: route subscript stores through CExpr.
                    let lhs = CExpr::index(CExpr::lit(sub.base), CExpr::lit(sub.index));
                    Some(format!("{} = {};", lhs, val))
                } else {
                    let addr = emit_memory_address_operand(&insn.inputs[1], 1, idx, ctx);
                    // Batch 11 slice 2: route `*(T*)(addr) = val` stores
                    // through CExpr — `Deref(Cast(T*, addr))` renders
                    // byte-identically for simple addr expressions and gets
                    // correct parens when future passes produce non-atomic
                    // addresses.
                    let lhs = CExpr::deref(CExpr::cast(ida_ptr_type(store_size), CExpr::lit(addr)));
                    Some(format!("{} = {};", lhs, val))
                }
            }
            IrOp::Store => Some("/* STORE (bad arity) */;".to_string()),
            IrOp::Callind => {
                let mut s = format!("{};", emit_callind_cast(insn, idx, ctx));
                if let Some(c) = forwarded_call_comment(insn, ctx) {
                    s.push(' ');
                    s.push_str(&c);
                }
                Some(s)
            }
            IrOp::Call => {
                let base = if let Some(bracket) = objc_bracket_call(insn, ctx) {
                    format!("{};", bracket)
                } else {
                    format!("{};", emit_direct_call_expr(insn, idx, ctx))
                };
                let mut s = base;
                if let Some(c) = forwarded_call_comment(insn, ctx) {
                    s.push(' ');
                    s.push_str(&c);
                }
                // §5.5: FLIRT-recognised callee → `/* flirt: <name>@<conf> */`.
                if let Some(c) = flirt_call_comment(insn, ctx) {
                    s.push(' ');
                    s.push_str(&c);
                }
                Some(s)
            }
            IrOp::Unimplemented => Some(format!("__unknown_insn_0x{:X}();", insn.addr)),
            IrOp::Callother => {
                let expr = emit_callother(insn, idx, ctx);
                Some(if is_cmov_callother(insn) {
                    expr
                } else {
                    format!("{};", expr)
                })
            }
            IrOp::Branchind => {
                // A vtable tail-call (`jmp *(*(obj) + N)`) returns the
                // virtual call's result.
                if let Some(call) = emit_virtual_call(insn, idx, ctx) {
                    return Some(format!("return {call};"));
                }
                let target = insn.inputs.first().map_or_else(
                    || "0".to_string(),
                    |input| emit_operand_resolved(input, 0, idx, ctx),
                );
                Some(format!("JUMPOUT({});", target))
            }
            // A dead scalar value op (IntAdd/IntSlessequal/Copy/…) that
            // reached this no-output branch had its result folded into a
            // consumer (or the consumer was DCE'd, e.g. a suppressed
            // CSEL-family intrinsic). Suppress it rather than leaking a
            // side-effect-free `__unlace_int_*` / `__unlace_copy` statement.
            _ if is_dead_no_output_scalar_op(insn, idx, ctx) => {
                tracing::debug!(target: "unlace::cprinter",
                    "inline stmt={idx} decision=suppress-dead-pure-no-output op={:?}",
                    insn.op
                );
                Some(String::new())
            }
            // Batch 19 DOD: unsupported statement-level opcodes render as
            // an annotated helper call (preserves opcode name + operand
            // dataflow) instead of a comment-only `/* OP */;` placeholder.
            _ => Some(format!("{};", emit_unsupported_op_helper(insn, idx, ctx))),
        }
    }
}

pub(super) fn has_later_alias_use(base: &Varnode, stmt_idx: u32, ctx: &PrintCtx) -> bool {
    ctx.stmt_inputs
        .range((stmt_idx + 1)..)
        .any(|(_, inputs)| inputs.iter().any(|sv| aliases(sv.base, *base)))
        || ctx
            .cond_use_stmts
            .iter()
            .any(|(sv, use_stmt)| *use_stmt > stmt_idx && aliases(sv.base, *base))
}

pub(super) fn format_inline_assignment(
    idx: u32,
    sv: &SsaVarnode,
    lhs: &str,
    rhs: String,
    ctx: &PrintCtx,
) -> String {
    if let Some((decl_prefix, decl_trailer)) = hoisted_decl_for_stmt(idx, sv, ctx) {
        format!("{decl_prefix}{lhs} = {rhs}{decl_trailer}")
    } else {
        format!("{lhs} = {rhs};")
    }
}

/// If statement `idx` is the hoist-decl anchor for the variable written by
/// `sv`, return `(prefix, terminator)` where:
///   * `prefix` is `"<type> "` to prepend to the assignment LHS, and
///   * `terminator` is `";"` followed by an optional ` // <location>` comment
///     mirroring the function-top declaration block's annotation.
pub(super) fn hoisted_decl_for_stmt(
    idx: u32,
    sv: &SsaVarnode,
    ctx: &PrintCtx,
) -> Option<(String, String)> {
    let plan = ctx.hoist_decl_plan.get(&sv.base)?;
    if plan.stmt_idx != idx || !plan.fold_into_assignment {
        trace_hoist_text(format_args!(
            "stmt={idx} sv={sv:?} decision=skip-anchor plan={plan:?}"
        ));
        return None;
    }
    if ctx
        .var_names
        .get(sv)
        .is_some_and(|name| ctx.top_declared_names.contains(name))
    {
        trace_hoist_text(format_args!(
            "stmt={idx} sv={sv:?} decision=skip-top-declared name={:?}",
            ctx.var_names.get(sv)
        ));
        return None;
    }
    let ty = ctx
        .var_names
        .get(sv)
        .and_then(|name| ctx.vector_decl_types.get(name))
        .or_else(|| ctx.var_types.get(sv))
        .copied()
        .unwrap_or(PrimitiveType::Unknown);
    let prefix = format!("{} ", c_type_for_var(ctx, &sv.base, &ty));
    let byref_suffix = if ctx.byref_bases.contains(&sv.base) {
        " BYREF"
    } else {
        ""
    };
    let comment = varnode_location_comment(&sv.base, ctx.frame_size);
    let terminator = match (comment, byref_suffix.is_empty()) {
        (Some(c), true) => format!("; // {}", c),
        (Some(c), false) => format!("; // {}{}", c, byref_suffix),
        (None, false) => format!("; //{}", byref_suffix),
        (None, true) => ";".to_string(),
    };
    trace_hoist_text(format_args!(
        "stmt={idx} sv={sv:?} decision=emit prefix={prefix:?} terminator={terminator:?}"
    ));
    Some((prefix, terminator))
}

pub(super) fn emit_statement(insn: &IrInsn, depth: usize, ctx: &mut PrintCtx, out: &mut String) {
    let _span = cprinter_detail_phase("cprinter.emit.statement");
    let idx = ctx.emit_stmt;
    ctx.emit_stmt += 1;
    trace_flow(format_args!(
        "emit-statement-enter depth={depth} stmt={idx} addr=0x{:x} op={:?} output={:?}",
        insn.addr,
        insn.op,
        ctx.stmt_outputs.get(&idx).copied().flatten()
    ));

    if ctx.foldable_stmts.contains(&idx) {
        trace_flow(format_args!(
            "emit-statement-skip stmt={idx} reason=foldable"
        ));
        return;
    }

    if is_dead_zero_init(insn, idx, ctx) || is_dead_suppressible_store(insn, idx, ctx) {
        trace_flow(format_args!(
            "emit-statement-skip stmt={idx} reason=dead-or-suppressible"
        ));
        return;
    }

    // Drop dead-output AArch64 conditional-select intrinsics (CSEL family):
    // pure value computations into a register that's never read again.
    if is_dead_suppressible_csel(insn, idx, ctx) {
        trace_flow(format_args!(
            "emit-statement-skip stmt={idx} reason=dead-csel"
        ));
        return;
    }

    if is_stack_canary_compare_artifact(insn, idx, ctx) {
        trace_flow(format_args!(
            "emit-statement-skip stmt={idx} reason=stack-canary"
        ));
        return;
    }

    if let Some(Some(sv)) = ctx.stmt_outputs.get(&idx).cloned()
        && is_control_only_condition_assignment(idx, &sv, insn, ctx)
    {
        trace_flow(format_args!(
            "emit-statement-skip stmt={idx} reason=control-cond"
        ));
        return;
    }

    // t264 — when DWARF/PDB line-number info maps this instruction
    // back to a source file:line, emit it as a leading provenance
    // comment. Format is `// file.c:42` to match the task spec; the
    // comment is purely informational and survives only when debug
    // info was present in the original binary.
    if let Some(loc) = ctx.source_map.get(&insn.addr) {
        indent(depth, ctx.config.tab_width, out);
        let _ = writeln!(out, "// {}:{}", loc.file, loc.line);
    }

    if let Some(comment) = ctx.line_comments.get(&insn.addr).cloned() {
        for line in comment.lines() {
            indent(depth, ctx.config.tab_width, out);
            let _ = writeln!(out, "// {}", line);
        }
    }

    // t262 — when a Call's canonical libc name differs from the
    // original (binary's import-table) name, prepend a leading
    // comment so a reader can map the rendered `memcpy(...)` back to
    // the actual binary symbol (`__memcpy_chk`, `_Znwm`, …). Skipped
    // when the names match — no information to surface.
    if matches!(insn.op, IrOp::Call | IrOp::Callind)
        && let Some(canonical) = ctx.libc_call_canonical.get(&insn.addr).cloned()
        && let Some(original) = ctx.libc_call_original.get(&insn.addr).cloned()
        && canonical != original
    {
        indent(depth, ctx.config.tab_width, out);
        let _ = writeln!(out, "// {}(...) — recognized from {}", canonical, original);
    }

    let out_sv = ctx.stmt_outputs.get(&idx).copied().flatten();
    if out_sv.is_some_and(|sv| is_x86_frame_base_update(insn, &sv.base)) {
        trace_flow(format_args!(
            "emit-statement-skip stmt={idx} reason=frame-base"
        ));
        return;
    }
    if out_sv.is_some() && is_dead_suppressed_stack_load(insn, idx, ctx) {
        return;
    }

    indent(depth, ctx.config.tab_width, out);

    if let Some(sv) = out_sv {
        // A call to a void-returning runtime helper (e.g. `__stack_chk_fail`)
        // may carry a spurious IR output varnode for the clobbered return
        // register, but its C prototype is `void`. Emitting `v = f();` is a
        // hard type error, so render the bare call statement instead.
        if call_targets_void_runtime_symbol(insn, ctx) {
            let expr = if insn.op == IrOp::Callind {
                emit_callind_cast(insn, idx, ctx)
            } else {
                emit_direct_call_expr(insn, idx, ctx)
            };
            let _ = writeln!(out, "{};", expr);
            return;
        }
        let lhs = ctx.name_of(&sv);
        if c_printer_name_trace_enabled() {
            let input_names: Vec<String> = ctx
                .stmt_input_slots
                .get(&idx)
                .map(|slots| {
                    slots
                        .iter()
                        .map(|(raw_idx, input_sv)| {
                            format!(
                                "{raw_idx}:{input_sv:?}:{:?}",
                                known_name_of_sv(ctx, input_sv)
                            )
                        })
                        .collect()
                })
                .unwrap_or_default();
            tracing::debug!(target: "unlace::cprinter::name",
                "emit-stmt stmt={idx} addr=0x{:x} op={:?} output={sv:?} lhs={lhs} inputs=[{}]",
                insn.addr,
                insn.op,
                input_names.join(", ")
            );
        }

        if matches!(insn.op, IrOp::Call | IrOp::Callind)
            && let Some(ann) = cxa_call_annotation(insn, ctx)
        {
            let _ = writeln!(out, "/* {} */", ann);
            indent(depth, ctx.config.tab_width, out);
        }

        // CSEL family → ternary assignment (ARM64 conditional select).
        // The false branch is transformed per the specific intrinsic:
        // CSEL → Rm, CSINC → Rm+1, CSINV → ~Rm, CSNEG → -Rm.
        if let Some(tag) = csel_callother_tag(insn) {
            let cond = emit_operand_resolved(&insn.inputs[1], 1, idx, ctx);
            let true_val = emit_operand_resolved(&insn.inputs[2], 2, idx, ctx);
            let false_operand = emit_operand_resolved(&insn.inputs[3], 3, idx, ctx);
            let false_val = csel_false_value_expr(tag, &false_operand);
            // Parenthesise a transformed (non-identity) false branch so the
            // ternary alternative parses unambiguously, e.g. `... : (a4 + 1)`.
            let false_rendered = if tag == 0x330 {
                false_val
            } else {
                format!("({false_val})")
            };
            let _ = writeln!(
                out,
                "{} = {} ? {} : {};",
                lhs, cond, true_val, false_rendered
            );
        } else if let Some(short) = try_emit_increment_form(insn, idx, &lhs, ctx) {
            let _ = writeln!(out, "{};", short);
        } else if let Some(short) = try_emit_compound_assign(insn, idx, &lhs, ctx) {
            let _ = writeln!(out, "{};", short);
        } else {
            let rhs = emit_expr(insn, idx, ctx);
            trace_assignment_render(idx, insn, &sv, &lhs, &rhs, ctx);
            // Hoist the variable's declaration into this assignment if the
            // pre-pass selected this stmt as the variable's declaration site.
            if let Some((decl_prefix, decl_trailer)) = hoisted_decl_for_stmt(idx, &sv, ctx) {
                let _ = writeln!(out, "{}{} = {}{}", decl_prefix, lhs, rhs, decl_trailer);
            } else {
                let _ = writeln!(out, "{} = {};", lhs, rhs);
            }
        }
    } else {
        match insn.op {
            IrOp::Store => {
                if insn.inputs.len() >= 3 {
                    if is_suppressed_stack_access(&insn.inputs[1], Some(1), idx, ctx) {
                        return;
                    }
                    let store_size = insn.inputs[2].size;
                    let val = emit_operand_resolved(&insn.inputs[2], 2, idx, ctx);
                    if let Some(object) = try_object_access(&insn.inputs[1], idx, store_size, ctx) {
                        let _ = writeln!(out, "{} = {};", object, val);
                    } else if let Some(local) =
                        try_stack_frame_access_name(&insn.inputs[1], Some(1), idx, store_size, ctx)
                    {
                        let _ = writeln!(out, "{} = {};", local, val);
                    } else if let Some(global) =
                        try_global_var_name(&insn.inputs[1], Some(1), idx, store_size, ctx)
                    {
                        let _ = writeln!(out, "{} = {};", global, val);
                    } else if let Some(field_expr) =
                        try_typed_access(&insn.inputs[1], idx, store_size, ctx)
                    {
                        let _ = writeln!(out, "{} = {};", field_expr, val);
                    } else if let Some(field_expr) =
                        try_array_struct_field_access(&insn.inputs[1], idx, store_size, ctx)
                    {
                        // t231: array-of-struct typed write — pre-empts
                        // both the generic struct-field and array-subscript
                        // paths so per-element field stores render as
                        // `arr<N>[i].field_<offset> = val;`.
                        let _ = writeln!(out, "{} = {};", field_expr, val);
                    } else if let Some(sub) =
                        try_array_subscript(&insn.inputs[1], idx, store_size, ctx)
                    {
                        // Batch 11 slice 2: route subscript stores through CExpr.
                        let lhs = CExpr::index(CExpr::lit(sub.base), CExpr::lit(sub.index));
                        let _ = writeln!(out, "{} = {};", lhs, val);
                    } else {
                        let addr = emit_memory_address_operand(&insn.inputs[1], 1, idx, ctx);
                        let cast = ida_ptr_type(store_size);
                        // t259: surface MMIO writes by qualifying the cast.
                        let is_mmio = insn.inputs[1].space == SpaceId::Const
                            && ctx.mmio_addrs.contains(&insn.inputs[1].offset);
                        // Batch 11 slice 2: route `*(T*)(addr) = val` stores
                        // through CExpr.  The `volatile` qualifier is folded
                        // into the cast type string (CExpr::Cast is opaque on
                        // the type spelling).
                        let cast_ty = if is_mmio {
                            format!("volatile {}", cast)
                        } else {
                            cast.to_string()
                        };
                        let lhs = CExpr::deref(CExpr::cast(cast_ty, CExpr::lit(addr)));
                        let _ = writeln!(out, "{} = {};", lhs, val);
                    }
                } else {
                    let _ = writeln!(out, "/* STORE (bad arity) */;");
                }
            }
            IrOp::Call | IrOp::Callind => {
                if let Some(kind) = ctx.panic_sites.get(&insn.addr) {
                    let _ = writeln!(out, "/* PANIC: {} */", kind);
                    indent(depth, ctx.config.tab_width, out);
                }
                let cxa_annotation = cxa_call_annotation(insn, ctx);
                if let Some(ref ann) = cxa_annotation {
                    let _ = writeln!(out, "/* {} */", ann);
                    indent(depth, ctx.config.tab_width, out);
                }
                let fwd = forwarded_call_comment(insn, ctx);
                // §5.5: FLIRT match comment (direct-call only; the helper
                // gates on IrOp::Call internally so Callind is a no-op).
                let flirt = flirt_call_comment(insn, ctx);
                let trailing: String = [fwd, flirt]
                    .into_iter()
                    .flatten()
                    .map(|c| format!(" {}", c))
                    .collect();
                if insn.op == IrOp::Callind {
                    let expr = emit_callind_cast(insn, idx, ctx);
                    let _ = writeln!(out, "{};{}", expr, trailing);
                } else {
                    let expr = emit_direct_call_expr(insn, idx, ctx);
                    let _ = writeln!(out, "{};{}", expr, trailing);
                }
            }
            IrOp::Unimplemented => {
                let _ = writeln!(out, "__unknown_insn_0x{:X}();", insn.addr);
            }
            IrOp::Callother => {
                // A pure AArch64 conditional-select intrinsic (CSEL family)
                // that reached the no-output branch has no live consumer for
                // its destination register — it is dead. Drop it (mirroring
                // IDA's DCE) so we don't leak a raw `__csinv__(...)` /
                // `__csneg__(...)` statement, and so the predicate comparison
                // that fed it can also retire instead of orphaning as a
                // standalone `__unlace_int_*` call.
                if is_csel_callother(insn) {
                    trace_flow(format_args!(
                        "emit-statement-skip stmt={idx} reason=dead-csel-no-output"
                    ));
                    return;
                }
                let expr = emit_callother(insn, idx, ctx);
                if is_cmov_callother(insn) {
                    let _ = writeln!(out, "{}", expr);
                } else {
                    let _ = writeln!(out, "{};", expr);
                }
            }
            IrOp::Branchind => {
                if let Some(call) = emit_virtual_call(insn, idx, ctx) {
                    let _ = writeln!(out, "return {call};");
                } else {
                    let target = if !insn.inputs.is_empty() {
                        emit_operand_resolved(&insn.inputs[0], 0, idx, ctx)
                    } else {
                        "0".to_string()
                    };
                    let _ = writeln!(out, "JUMPOUT({});", target);
                }
            }
            // Batch 19 DOD: emit an annotated helper call (preserves
            // opcode name + operand dataflow) rather than a comment-only
            // placeholder that would silently drop inputs.
            _ => {
                // A dead scalar value op (IntAdd/IntSlessequal/Copy/…) that
                // reached this no-output branch had its result folded into a
                // consumer (or its consumer was DCE'd — e.g. a suppressed
                // CSEL-family intrinsic), leaving only this orphan. Emitting
                // `__unlace_int_slessequal(...)` / `__unlace_copy(...)` would
                // be a side-effect-free statement with no observable result,
                // so drop it. Exotic ops still render their helper call.
                if is_dead_no_output_scalar_op(insn, idx, ctx) {
                    trace_flow(format_args!(
                        "emit-statement-skip stmt={idx} reason=dead-pure-no-output op={:?}",
                        insn.op
                    ));
                    return;
                }
                let call = emit_unsupported_op_helper(insn, idx, ctx);
                let _ = writeln!(out, "{call};");
            }
        }
    }
}
