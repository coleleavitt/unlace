//! c_printer: folding.

use super::*;

pub(super) const fn is_never_foldable_op(op: IrOp) -> bool {
    matches!(
        op,
        IrOp::Store
            | IrOp::Load
            | IrOp::Call
            | IrOp::Callind
            | IrOp::Branch
            | IrOp::Cbranch
            | IrOp::Branchind
            | IrOp::Return
            | IrOp::New
            | IrOp::Callother
            | IrOp::Cpoolref
            | IrOp::Indirect
            | IrOp::Multiequal
    )
}

pub(super) fn compute_foldable(ctx: &mut PrintCtx) {
    let mut use_counts: BTreeMap<SsaVarnode, usize> = BTreeMap::new();
    let mut sv_consumer_stmt: BTreeMap<SsaVarnode, u32> = BTreeMap::new();

    for (&stmt_idx, inputs) in &ctx.stmt_inputs {
        for sv in inputs {
            *use_counts.entry(*sv).or_insert(0) += 1;
            sv_consumer_stmt.insert(*sv, stmt_idx);
        }
    }

    for sv in &ctx.cond_uses {
        *use_counts.entry(*sv).or_insert(0) += 1;
    }

    for sv in &ctx.ssa_phi_uses {
        *use_counts.entry(*sv).or_insert(0) += 1;
    }

    // Count how many distinct statements define each output SSA value. A value
    // defined in more than one statement is a control-flow merge (the HIR-level
    // analogue of an SSA phi: e.g. `r8` assigned in both arms of an if/else and
    // then returned). Folding such a value would inline ONE arm's expression
    // past the merge and silently drop the others — a correctness bug. These
    // must stay materialised as a named variable assigned in each arm.
    let mut def_counts: BTreeMap<SsaVarnode, usize> = BTreeMap::new();
    for sv in ctx.stmt_outputs.values().flatten() {
        *def_counts.entry(*sv).or_insert(0) += 1;
    }

    for (&stmt_idx, output_sv_opt) in &ctx.stmt_outputs {
        let output_sv = match output_sv_opt {
            Some(sv) => *sv,
            None => continue,
        };

        let insn = match ctx.stmt_insns.get(&stmt_idx) {
            Some(insn) => insn,
            None => continue,
        };

        if ctx.commented_stmts.contains(&stmt_idx) {
            tracing::debug!(target: "unlace::cprinter",
                "fold stmt={stmt_idx} op={:?} output={output_sv:?} decision=commented-keep",
                insn.op
            );
            continue;
        }

        // A statement carrying a USER/debug line comment (keyed by its
        // instruction address) must render standalone so the comment has an
        // anchor — folding it into a consumer would drop it. Same rationale as
        // `commented_stmts` but for address-keyed annotations attached after
        // collection.
        //
        // NOTE: DWARF `source_map` entries are deliberately NOT a fold barrier
        // here. `inline_statement_text` already declines to inline a source-map
        // statement (it returns None for those), so a genuinely consumed
        // statement keeps its `// file:line` provenance, while a foldable
        // single-use temp can still collapse into its consumer. Gating folds on
        // source_map too (the original 84b3eb719 form) suppressed legitimate
        // folding everywhere debug info exists — e.g. debug_structs went from
        // `v4 = *(_DWORD *)(a1 + 8)` back to a 3-line `v3 = a1 + 8; v4 = *v3;`
        // with an interposed comment.
        if ctx.line_comments.contains_key(&insn.addr) {
            tracing::debug!(target: "unlace::cprinter",
                "fold stmt={stmt_idx} op={:?} output={output_sv:?} addr={:#x} decision=line-comment-keep",
                insn.op, insn.addr
            );
            continue;
        }

        if def_counts.get(&output_sv).copied().unwrap_or(0) > 1 {
            tracing::debug!(target: "unlace::cprinter",
                "fold stmt={stmt_idx} op={:?} output={output_sv:?} decision=multi-def-merge",
                insn.op
            );
            continue;
        }

        // `r = COPY t` of a loaded temp keeps the register as the named
        // home of the loaded value; folding it instead leaves the load
        // printed into a `// temp`.
        if insn.op == IrOp::Copy
            && output_sv.base.space == SpaceId::Register
            && ctx
                .stmt_inputs
                .get(&stmt_idx)
                .and_then(|inputs| inputs.first())
                .filter(|input| input.base.space == SpaceId::Unique)
                .and_then(|input| {
                    ctx.stmt_outputs
                        .iter()
                        .find_map(|(def, out)| (*out == Some(*input)).then_some(*def))
                })
                .and_then(|def| ctx.stmt_insns.get(&def).map(|insn| (def, insn)))
                .is_some_and(|(def, load)| {
                    load.op == IrOp::Load && loads_through_register(def, ctx)
                })
        {
            tracing::debug!(target: "unlace::cprinter",
                "fold stmt={stmt_idx} op={:?} output={output_sv:?} decision=load-home-keep",
                insn.op
            );
            continue;
        }

        if is_never_foldable_op(insn.op) {
            if insn.op == IrOp::Load && is_temp_varnode(&output_sv.base) {
                ctx.sv_defining_stmt.insert(output_sv, stmt_idx);
            }
            tracing::debug!(target: "unlace::cprinter",
                "fold stmt={stmt_idx} op={:?} output={output_sv:?} decision=never",
                insn.op
            );
            continue;
        }

        // NOTE: a single-use `Copy` reading a call output (e.g. `v8 = v11;`
        // where `v11 = f();`) used to be blocked unconditionally here. That
        // was over-broad: the call result is itself a materialised statement
        // (`Call` is never-foldable), so substituting the copy into its sole
        // consumer cannot duplicate the call. The genuine hazard — the call's
        // result register being reused before the consumer — is caught
        // precisely below by `copy_like_snapshot_source_redefined_before_consumer`.
        // Removing the blanket guard lets `int v8 = v11;` fold into its use,
        // eliminating a class of leaked single-use temps.

        let use_count = use_counts.get(&output_sv).copied().unwrap_or(0);
        if use_count > 1
            && is_temp_varnode(&output_sv.base)
            && multi_use_temp_inlines_everywhere(&output_sv, stmt_idx, use_count, ctx)
        {
            ctx.foldable_stmts.insert(stmt_idx);
            ctx.sv_defining_stmt.insert(output_sv, stmt_idx);
            tracing::debug!(target: "unlace::cprinter",
                "fold stmt={stmt_idx} op={:?} output={output_sv:?} uses={use_count} decision=fold-every-use",
                insn.op
            );
            continue;
        }
        if use_count != 1 {
            if use_count > 0 && is_temp_varnode(&output_sv.base) {
                ctx.sv_defining_stmt.insert(output_sv, stmt_idx);
            }
            tracing::debug!(target: "unlace::cprinter",
                "fold stmt={stmt_idx} op={:?} output={output_sv:?} uses={use_count} decision=not-single-use",
                insn.op
            );
            continue;
        }

        if !sv_consumer_stmt.contains_key(&output_sv) && ctx.cond_uses.contains(&output_sv) {
            // A returned value defined inside a nested branch (depth > 0) is a
            // control-flow merge: e.g. `r8` assigned in both arms of an
            // if/else then returned. The `cond_uses` set conflates "used by a
            // condition" with "used by a return", so without this guard the
            // first arm's definition gets folded straight into `return …`,
            // dropping the other arm(s). Keep it materialised as `result`.
            let def_depth = ctx.stmt_depths.get(&stmt_idx).copied().unwrap_or(0);
            // A temp has a single definition (duplicates were rejected
            // above), so it cannot be such a merge.
            let is_returned_merge = ctx.returned_svs.contains(&output_sv)
                && def_depth > 0
                && output_sv.base.space != SpaceId::Unique;
            if is_returned_merge {
                tracing::debug!(target: "unlace::cprinter",
                    "fold stmt={stmt_idx} op={:?} output={output_sv:?} uses={use_count} def_depth={def_depth} decision=returned-branch-merge-keep",
                    insn.op
                );
                continue;
            }
            ctx.foldable_stmts.insert(stmt_idx);
            ctx.sv_defining_stmt.insert(output_sv, stmt_idx);
            tracing::debug!(target: "unlace::cprinter",
                "fold stmt={stmt_idx} op={:?} output={output_sv:?} uses={use_count} def_depth={def_depth} decision=cond-only",
                insn.op
            );
            continue;
        }

        let def_depth = ctx.stmt_depths.get(&stmt_idx).copied().unwrap_or(0);
        let consumer_stmt = last_consumer_stmt_for_sv(&output_sv, ctx)
            .or_else(|| sv_consumer_stmt.get(&output_sv).copied());
        if c_printer_trace_enabled()
            && let Some(scanned_consumer) = consumer_stmt
            && sv_consumer_stmt.get(&output_sv).copied() != Some(scanned_consumer)
        {
            tracing::debug!(target: "unlace::cprinter",
                "fold stmt={stmt_idx} op={:?} output={output_sv:?} consumer-map={:?} consumer-scan={scanned_consumer}",
                insn.op,
                sv_consumer_stmt.get(&output_sv)
            );
        }
        let consumer_depth = consumer_stmt
            .and_then(|cid| ctx.stmt_depths.get(&cid).copied())
            .unwrap_or(u32::MAX);

        if consumer_stmt.is_some_and(|consumer| consumer <= stmt_idx) {
            tracing::debug!(target: "unlace::cprinter",
                "fold stmt={stmt_idx} op={:?} output={output_sv:?} uses={use_count} decision=consumer-before-def consumer={consumer_stmt:?}",
                insn.op
            );
            continue;
        }

        if def_depth != consumer_depth {
            tracing::debug!(target: "unlace::cprinter",
                "fold stmt={stmt_idx} op={:?} output={output_sv:?} uses={use_count} decision=depth-mismatch def_depth={def_depth} consumer_depth={consumer_depth}",
                insn.op
            );
            continue;
        }

        if let Some(consumer_stmt) = consumer_stmt
            && copy_like_snapshot_source_redefined_before_consumer(
                &output_sv,
                insn,
                stmt_idx,
                consumer_stmt,
                ctx,
            )
        {
            tracing::debug!(target: "unlace::cprinter",
                "fold stmt={stmt_idx} op={:?} output={output_sv:?} uses={use_count} decision=snapshot-source-redefined consumer={consumer_stmt}",
                insn.op
            );
            continue;
        }

        if let Some(consumer_stmt) = consumer_stmt
            && expression_inputs_aliased_redefined_before_consumer(
                &output_sv,
                insn,
                stmt_idx,
                consumer_stmt,
                ctx,
            )
        {
            tracing::debug!(target: "unlace::cprinter",
                "fold stmt={stmt_idx} op={:?} output={output_sv:?} uses={use_count} decision=expr-input-redefined consumer={consumer_stmt}",
                insn.op
            );
            continue;
        }

        if let Some(consumer_stmt) = consumer_stmt
            && inlined_read_clobbered_before(stmt_idx, consumer_stmt, false, ctx)
        {
            tracing::debug!(target: "unlace::cprinter",
                "fold stmt={stmt_idx} op={:?} output={output_sv:?} uses={use_count} decision=folded-input-redefined consumer={consumer_stmt}",
                insn.op
            );
            continue;
        }

        ctx.foldable_stmts.insert(stmt_idx);
        ctx.sv_defining_stmt.insert(output_sv, stmt_idx);
        tracing::debug!(target: "unlace::cprinter",
            "fold stmt={stmt_idx} op={:?} output={output_sv:?} uses={use_count} consumer={consumer_stmt:?} def_depth={def_depth} consumer_depth={consumer_depth} decision=fold",
            insn.op
        );
    }

    ctx.sv_use_counts = use_counts;
    fold_single_use_call_results(ctx);
    // The transitive fold-pass guard is currently disabled: empirical regressions
    // on small HIR fixtures show it removes folds that are needed for shape
    // tests. The emit-time guard in [`emit_operand_with_prec`] handles the
    // miscompile case (operand inlining past a same-base redefinition) without
    // touching the fold set. Keep [`refuse_folds_past_aliased_input_redef`]
    // available for future use if the emit-time guard proves insufficient.
    let _ = refuse_folds_past_aliased_input_redef;
}

/// Fold each call whose result is read once into that reader, as Hex-Rays'
/// propagation (hexx64 `sub_17D8C0`) does for a call with a destination:
/// `v = f(x); y = v + 1;` prints as `y = f(x) + 1;`.
///
/// The call then runs where the reader is printed instead of at its own
/// statement. Nothing in between may have side effects or read memory, the
/// arguments must keep their values, and the reader must not read memory or
/// call another function, because C leaves the order of those against the
/// call unspecified. Runs after the other fold decisions, which it depends
/// on.
pub(super) fn fold_single_use_call_results(ctx: &mut PrintCtx) {
    let calls: Vec<(u32, SsaVarnode)> = ctx
        .stmt_outputs
        .iter()
        .filter_map(|(&stmt_idx, output)| {
            let insn = ctx.stmt_insns.get(&stmt_idx)?;
            matches!(insn.op, IrOp::Call | IrOp::Callind).then_some((stmt_idx, (*output)?))
        })
        .collect();
    for (stmt_idx, out_sv) in calls {
        if ctx.call_fold_veto.contains(&stmt_idx) {
            tracing::debug!(target: "unlace::cprinter",
                "fold stmt={stmt_idx} op=Call output={out_sv:?} decision=call-keep reason=vetoed"
            );
            continue;
        }
        if let Err(reason) = call_result_read_site(stmt_idx, out_sv, ctx) {
            tracing::debug!(target: "unlace::cprinter",
                "fold stmt={stmt_idx} op=Call output={out_sv:?} decision=call-keep reason={reason}"
            );
            continue;
        }
        ctx.foldable_stmts.insert(stmt_idx);
        ctx.folded_calls.insert(stmt_idx);
        ctx.sv_defining_stmt.insert(out_sv, stmt_idx);
        tracing::debug!(target: "unlace::cprinter",
            "fold stmt={stmt_idx} op=Call output={out_sv:?} decision=fold-call"
        );
    }
}

/// The statement where the result of the call at `stmt_idx` is read, or why
/// the call cannot move there.
pub(super) fn call_result_read_site(
    stmt_idx: u32,
    out_sv: SsaVarnode,
    ctx: &PrintCtx,
) -> Result<u32, &'static str> {
    let insn = &ctx.stmt_insns[&stmt_idx];
    if ctx.commented_stmts.contains(&stmt_idx)
        || ctx.line_comments.contains_key(&insn.addr)
        || ctx.panic_sites.contains_key(&insn.addr)
        || cxa_call_annotation(insn, ctx).is_some()
        || ctx.libc_call_canonical.contains_key(&insn.addr)
    {
        return Err("annotated");
    }
    if ctx
        .stmt_outputs
        .values()
        .filter(|output| **output == Some(out_sv))
        .count()
        > 1
    {
        return Err("multi-def-merge");
    }
    if ctx.sv_use_counts.get(&out_sv).copied().unwrap_or(0) != 1 {
        return Err("not-single-use");
    }
    let consumer_stmt = last_consumer_stmt_for_sv(&out_sv, ctx).ok_or("no-consumer")?;
    if consumer_stmt <= stmt_idx {
        return Err("consumer-before-def");
    }
    if consumer_uses_sv_as_indirect_call_target(&out_sv, consumer_stmt, ctx) {
        return Err("call-target");
    }
    let read_site =
        printed_read_site(out_sv, consumer_stmt, ctx).ok_or("loop-or-unknown-read-site")?;
    let (read_stmt, read_path) = (read_site.stmt, read_site.scope);
    let def_path = ctx
        .stmt_scope_paths
        .get(&stmt_idx)
        .map_or(&[][..], Vec::as_slice);
    if read_stmt <= stmt_idx || read_path != def_path {
        return Err("scope");
    }
    if ctx
        .stmt_insns
        .range(stmt_idx + 1..read_stmt)
        .any(|(_, between)| between.op == IrOp::Load || instr_has_side_effects(between))
    {
        return Err("memory-between");
    }
    if inlined_read_clobbered_before(stmt_idx, read_stmt, false, ctx)
        || expression_inputs_aliased_redefined_before_consumer(
            &out_sv,
            insn,
            stmt_idx,
            consumer_stmt,
            ctx,
        )
    {
        return Err("argument-redefined");
    }
    if !read_site.by_condition
        && let Some(reader) = ctx.stmt_insns.get(&read_stmt)
        && (is_dead_zero_init(reader, read_stmt, ctx)
            || is_dead_suppressible_store(reader, read_stmt, ctx)
            || is_dead_suppressed_stack_load(reader, read_stmt, ctx)
            || is_stack_canary_compare_artifact(reader, read_stmt, ctx))
    {
        return Err("reader-not-printed");
    }
    if reader_reads_memory_besides(read_stmt, stmt_idx, ctx) {
        return Err("reader-reads-memory");
    }
    Ok(read_stmt)
}

/// Whether the expression printed at `read_stmt` reads memory or calls a
/// function other than the call at `call_stmt`: an inlined load, or a folded
/// call, anywhere among its operands.
pub(super) fn reader_reads_memory_besides(read_stmt: u32, call_stmt: u32, ctx: &PrintCtx) -> bool {
    let mut pending = vec![read_stmt];
    let mut visited = BTreeSet::new();
    while let Some(stmt) = pending.pop() {
        if !visited.insert(stmt) {
            continue;
        }
        for input_sv in ctx.stmt_inputs.get(&stmt).into_iter().flatten() {
            let Some(def) = defining_stmt_for_sv(input_sv, ctx) else {
                continue;
            };
            if def == call_stmt {
                continue;
            }
            let Some(def_insn) = ctx.stmt_insns.get(&def) else {
                continue;
            };
            let inlined = ctx.foldable_stmts.contains(&def)
                || (def_insn.op == IrOp::Load
                    && stable_load_expr_is_inlineable(def_insn, def, ctx));
            if !inlined {
                continue;
            }
            if matches!(def_insn.op, IrOp::Load | IrOp::Call | IrOp::Callind) {
                return true;
            }
            pending.push(def);
        }
    }
    false
}

/// Second pass over [`compute_foldable`]: walk each foldable expression's
/// transitive consumer chain to the textual emission point, then unfold any
/// expression whose register inputs would be re-read at an emission point past
/// a same-base SSA redefinition.
///
/// The fold pass marks a stmt foldable when its single use's immediate
/// consumer is fine, but inlining is transitive — a foldable stmt's text gets
/// substituted into its consumer's text, which itself may be folded further.
/// `dedupe_var_names` collapses every SSA version of a given base register to
/// one name, so once we emit the inlined token at the final emission point,
/// the C compiler binds it to whatever was *last* written to that base. If a
/// redefinition of one of our register inputs sits between us and the
/// emission point, the resulting recompiled code reads the wrong value.
pub(super) fn refuse_folds_past_aliased_input_redef(ctx: &mut PrintCtx) {
    let mut changed = true;
    let mut iterations = 0u32;
    while changed && iterations < 64 {
        changed = false;
        iterations += 1;
        let folded: Vec<u32> = ctx.foldable_stmts.iter().copied().collect();
        for stmt_idx in folded {
            let Some(emission_stmt) = transitive_emission_stmt(stmt_idx, ctx) else {
                continue;
            };
            if emission_stmt <= stmt_idx + 1 {
                continue;
            }
            let Some(stmt_inputs) = ctx.stmt_inputs.get(&stmt_idx).cloned() else {
                continue;
            };
            let output_sv = ctx.stmt_outputs.get(&stmt_idx).copied().flatten();
            let mut conflict: Option<(SsaVarnode, u32, SsaVarnode)> = None;
            for input_sv in &stmt_inputs {
                if input_sv.base.space != SpaceId::Register {
                    continue;
                }
                if output_sv.as_ref().is_some_and(|o| o == input_sv) {
                    continue;
                }
                for (&redef_stmt, output) in ctx.stmt_outputs.range((stmt_idx + 1)..=emission_stmt)
                {
                    let Some(candidate) = output else {
                        continue;
                    };
                    if *candidate == *input_sv {
                        continue;
                    }
                    if share_printed_storage(*candidate, *input_sv, ctx) {
                        conflict = Some((*input_sv, redef_stmt, *candidate));
                        break;
                    }
                }
                if conflict.is_some() {
                    break;
                }
            }
            if let Some((input_sv, redef_stmt, candidate)) = conflict {
                ctx.foldable_stmts.remove(&stmt_idx);
                changed = true;
                tracing::debug!(target: "unlace::cprinter",
                    "unfold stmt={stmt_idx} emission={emission_stmt} input={input_sv:?} redef_stmt={redef_stmt} redef={candidate:?} reason=transitive-input-redefined",
                );
            }
        }
    }
}

pub(super) fn transitive_emission_stmt(stmt_idx: u32, ctx: &PrintCtx) -> Option<u32> {
    let mut current = stmt_idx;
    for _ in 0..64 {
        let output_sv = ctx.stmt_outputs.get(&current).copied().flatten()?;
        let consumer = last_consumer_stmt_for_sv(&output_sv, ctx)?;
        if consumer <= current {
            return Some(consumer);
        }
        if !ctx.foldable_stmts.contains(&consumer) {
            return Some(consumer);
        }
        current = consumer;
    }
    None
}

pub(super) fn last_consumer_stmt_for_sv(sv: &SsaVarnode, ctx: &PrintCtx) -> Option<u32> {
    let mut consumer = None;
    for (&stmt_idx, inputs) in &ctx.stmt_inputs {
        if inputs.iter().any(|input| input == sv) {
            consumer = Some(stmt_idx);
        }
    }
    for (&stmt_idx, slots) in &ctx.stmt_input_slots {
        if slots.values().any(|input| input == sv) && consumer.is_none_or(|cur| stmt_idx > cur) {
            consumer = Some(stmt_idx);
        }
    }
    for &(cond_sv, stmt_idx) in &ctx.cond_use_stmts {
        if cond_sv == *sv && consumer.is_none_or(|cur| stmt_idx > cur) {
            consumer = Some(stmt_idx);
        }
    }
    consumer
}

pub(super) fn copy_like_snapshot_source_redefined_before_consumer(
    output_sv: &SsaVarnode,
    insn: &IrInsn,
    stmt_idx: u32,
    consumer_stmt: u32,
    ctx: &PrintCtx,
) -> bool {
    if consumer_stmt <= stmt_idx + 1
        || !matches!(
            insn.op,
            IrOp::Copy | IrOp::Subpiece | IrOp::IntZext | IrOp::IntSext | IrOp::Cast
        )
    {
        return false;
    }
    let Some(source) = insn.inputs.first() else {
        return false;
    };
    if source.space == SpaceId::Const {
        return false;
    }
    let Some(source_sv) = input_or_latest_sv_for_operand(source, Some(0), stmt_idx, ctx) else {
        return false;
    };
    if source_sv == *output_sv {
        return false;
    }
    tracing::debug!(target: "unlace::cprinter",
        "snapshot-source-check stmt={stmt_idx} consumer={consumer_stmt} op={:?} output={output_sv:?} source={source_sv:?}",
        insn.op
    );

    // A source that is itself folded is rendered from its own operands, so
    // another value sharing its printed name does not clobber it; whether
    // those operands survive is checked below.
    let source_inlined = defining_stmt_for_sv(&source_sv, ctx).is_some_and(|def| {
        def < stmt_idx
            && (ctx.foldable_stmts.contains(&def)
                || ctx
                    .stmt_insns
                    .get(&def)
                    .is_some_and(|insn| stable_load_expr_is_inlineable(insn, def, ctx)))
    });
    if !source_inlined
        && ctx
        .stmt_outputs
        .range((stmt_idx + 1)..consumer_stmt)
        .any(|(&redef_stmt, output)| {
            let Some(candidate) = output else {
                return false;
            };
            let redefined = *candidate != source_sv
                && share_printed_storage(*candidate, source_sv, ctx);
            if redefined {
                tracing::debug!(target: "unlace::cprinter",
                    "snapshot-source-redefined stmt={stmt_idx} consumer={consumer_stmt} output={output_sv:?} source={source_sv:?} redef_stmt={redef_stmt} redef={candidate:?}",
                );
            }
            redefined
        })
    {
        return true;
    }

    snapshot_source_expression_input_redefined_before_consumer(
        output_sv,
        insn,
        stmt_idx,
        consumer_stmt,
        &source_sv,
        ctx,
    )
}

pub(super) fn latest_materialized_value_for_same_source(
    output_sv: &SsaVarnode,
    insn: &IrInsn,
    stmt_idx: u32,
    consumer_stmt: u32,
    ctx: &PrintCtx,
) -> Option<SsaVarnode> {
    trace_materialized_source_scan(format_args!(
        "enter stmt={stmt_idx} consumer={consumer_stmt} output={output_sv:?} op={:?} inputs={:?}",
        insn.op, insn.inputs
    ));
    if consumer_stmt <= stmt_idx + 1 {
        trace_materialized_source_scan(format_args!(
            "skip stmt={stmt_idx} consumer={consumer_stmt} output={output_sv:?} reason=adjacent-or-reversed"
        ));
        return None;
    }
    if !matches!(
        insn.op,
        IrOp::Copy | IrOp::Subpiece | IrOp::IntZext | IrOp::IntSext | IrOp::Cast
    ) {
        trace_materialized_source_scan(format_args!(
            "skip stmt={stmt_idx} consumer={consumer_stmt} output={output_sv:?} reason=op op={:?}",
            insn.op
        ));
        return None;
    }
    let Some(source) = insn.inputs.first() else {
        trace_materialized_source_scan(format_args!(
            "skip stmt={stmt_idx} consumer={consumer_stmt} output={output_sv:?} reason=no-source-input"
        ));
        return None;
    };
    if source.space == SpaceId::Const {
        trace_materialized_source_scan(format_args!(
            "skip stmt={stmt_idx} consumer={consumer_stmt} output={output_sv:?} source={source:?} reason=const-source"
        ));
        return None;
    }
    let Some(source_sv) = input_or_latest_sv_for_operand(source, Some(0), stmt_idx, ctx) else {
        trace_materialized_source_scan(format_args!(
            "skip stmt={stmt_idx} consumer={consumer_stmt} output={output_sv:?} source={source:?} reason=no-source-ssa"
        ));
        return None;
    };
    let Some(source_def_stmt) = defining_stmt_for_sv(&source_sv, ctx) else {
        trace_materialized_source_scan(format_args!(
            "skip stmt={stmt_idx} consumer={consumer_stmt} output={output_sv:?} source={source:?} source_sv={source_sv:?} reason=no-source-def"
        ));
        return None;
    };
    if consumer_stmt <= source_def_stmt + 1 {
        trace_materialized_source_scan(format_args!(
            "skip stmt={stmt_idx} consumer={consumer_stmt} output={output_sv:?} source={source:?} source_sv={source_sv:?} source_def={source_def_stmt} reason=source-def-after-or-adjacent-consumer"
        ));
        return None;
    }
    trace_materialized_source_scan(format_args!(
        "scan stmt={stmt_idx} consumer={consumer_stmt} output={output_sv:?} source={source:?} source_sv={source_sv:?} source_def={source_def_stmt} range={}..{}",
        source_def_stmt + 1,
        consumer_stmt
    ));

    ctx.stmt_outputs
        .range((source_def_stmt + 1)..consumer_stmt)
        .rev()
        .find_map(|(&candidate_stmt, output)| {
            trace_materialized_source_scan(format_args!(
                "candidate stmt={stmt_idx} consumer={consumer_stmt} source_def={source_def_stmt} candidate_stmt={candidate_stmt} raw_output={output:?}"
            ));
            if candidate_stmt == stmt_idx {
                trace_materialized_source_scan(format_args!(
                    "candidate-skip stmt={stmt_idx} consumer={consumer_stmt} candidate_stmt={candidate_stmt} reason=self"
                ));
                return None;
            }
            let Some(candidate_sv) = *output else {
                trace_materialized_source_scan(format_args!(
                    "candidate-skip stmt={stmt_idx} consumer={consumer_stmt} candidate_stmt={candidate_stmt} reason=no-output"
                ));
                return None;
            };
            if candidate_sv == *output_sv
            {
                trace_materialized_source_scan(format_args!(
                    "candidate-skip stmt={stmt_idx} consumer={consumer_stmt} candidate_stmt={candidate_stmt} candidate={candidate_sv:?} reason=same-output"
                ));
                return None;
            }
            if candidate_sv == source_sv {
                trace_materialized_source_scan(format_args!(
                    "candidate-skip stmt={stmt_idx} consumer={consumer_stmt} candidate_stmt={candidate_stmt} candidate={candidate_sv:?} reason=same-source"
                ));
                return None;
            }
            if is_suppressible_storage(&candidate_sv.base, ctx)
            {
                trace_materialized_source_scan(format_args!(
                    "candidate-skip stmt={stmt_idx} consumer={consumer_stmt} candidate_stmt={candidate_stmt} candidate={candidate_sv:?} reason=suppressible-storage"
                ));
                return None;
            }
            let Some(candidate_insn) = ctx.stmt_insns.get(&candidate_stmt) else {
                trace_materialized_source_scan(format_args!(
                    "candidate-skip stmt={stmt_idx} consumer={consumer_stmt} candidate_stmt={candidate_stmt} candidate={candidate_sv:?} reason=no-insn"
                ));
                return None;
            };
            if !matches!(
                candidate_insn.op,
                IrOp::Copy | IrOp::Subpiece | IrOp::IntZext | IrOp::IntSext | IrOp::Cast
            ) {
                trace_materialized_source_scan(format_args!(
                    "candidate-skip stmt={stmt_idx} consumer={consumer_stmt} candidate_stmt={candidate_stmt} candidate={candidate_sv:?} reason=op op={:?} inputs={:?}",
                    candidate_insn.op, candidate_insn.inputs
                ));
                return None;
            }
            let Some(candidate_source) = candidate_insn.inputs.first() else {
                trace_materialized_source_scan(format_args!(
                    "candidate-skip stmt={stmt_idx} consumer={consumer_stmt} candidate_stmt={candidate_stmt} candidate={candidate_sv:?} reason=no-candidate-source op={:?}",
                    candidate_insn.op
                ));
                return None;
            };
            if candidate_source != source
            {
                trace_materialized_source_scan(format_args!(
                    "candidate-skip stmt={stmt_idx} consumer={consumer_stmt} candidate_stmt={candidate_stmt} candidate={candidate_sv:?} reason=source-mismatch expected={source:?} actual={candidate_source:?} op={:?}",
                    candidate_insn.op
                ));
                return None;
            }
            if ctx.foldable_stmts.contains(&candidate_stmt) {
                trace_materialized_source_scan(format_args!(
                    "candidate-skip stmt={stmt_idx} consumer={consumer_stmt} candidate_stmt={candidate_stmt} candidate={candidate_sv:?} reason=foldable op={:?}",
                    candidate_insn.op
                ));
                return None;
            }
            if let Some((redef_stmt, redef_sv)) = materialized_candidate_redefined_before_consumer(
                candidate_sv,
                candidate_stmt,
                consumer_stmt,
                ctx,
            ) {
                trace_materialized_source_scan(format_args!(
                    "candidate-skip stmt={stmt_idx} consumer={consumer_stmt} candidate_stmt={candidate_stmt} candidate={candidate_sv:?} reason=redefined-before-consumer redef_stmt={redef_stmt} redef={redef_sv:?} op={:?}",
                    candidate_insn.op
                ));
                return None;
            }
            if is_dead_zero_init(candidate_insn, candidate_stmt, ctx) {
                trace_materialized_source_scan(format_args!(
                    "candidate-skip stmt={stmt_idx} consumer={consumer_stmt} candidate_stmt={candidate_stmt} candidate={candidate_sv:?} reason=dead-zero-init op={:?}",
                    candidate_insn.op
                ));
                return None;
            }
            if is_dead_suppressible_store(candidate_insn, candidate_stmt, ctx) {
                trace_materialized_source_scan(format_args!(
                    "candidate-skip stmt={stmt_idx} consumer={consumer_stmt} candidate_stmt={candidate_stmt} candidate={candidate_sv:?} reason=dead-suppressible-store op={:?}",
                    candidate_insn.op
                ));
                return None;
            }
            trace_materialized_source_scan(format_args!(
                "hit stmt={stmt_idx} consumer={consumer_stmt} output={output_sv:?} source={source:?} source_sv={source_sv:?} source_def={source_def_stmt} candidate_stmt={candidate_stmt} candidate={candidate_sv:?} op={:?} addr=0x{:x}",
                candidate_insn.op,
                candidate_insn.addr
            ));
            Some(candidate_sv)
        })
}

pub(super) fn materialized_candidate_redefined_before_consumer(
    candidate_sv: SsaVarnode,
    candidate_stmt: u32,
    consumer_stmt: u32,
    ctx: &PrintCtx,
) -> Option<(u32, SsaVarnode)> {
    if consumer_stmt <= candidate_stmt + 1 {
        trace_materialized_source_scan(format_args!(
            "candidate-live-check candidate_stmt={candidate_stmt} consumer={consumer_stmt} candidate={candidate_sv:?} decision=stable reason=adjacent-or-reversed"
        ));
        return None;
    }
    let found = ctx
        .stmt_outputs
        .range((candidate_stmt + 1)..consumer_stmt)
        .find_map(|(&redef_stmt, output)| {
            let redef_sv = (*output)?;
            if redef_sv == candidate_sv {
                return None;
            }
            (redef_sv.base == candidate_sv.base || aliases(redef_sv.base, candidate_sv.base))
                .then_some((redef_stmt, redef_sv))
        });
    match found {
        Some((redef_stmt, redef_sv)) => trace_materialized_source_scan(format_args!(
            "candidate-live-check candidate_stmt={candidate_stmt} consumer={consumer_stmt} candidate={candidate_sv:?} decision=stale redef_stmt={redef_stmt} redef={redef_sv:?}"
        )),
        None => trace_materialized_source_scan(format_args!(
            "candidate-live-check candidate_stmt={candidate_stmt} consumer={consumer_stmt} candidate={candidate_sv:?} decision=stable"
        )),
    }
    found
}

pub(super) fn snapshot_source_expression_input_redefined_before_consumer(
    output_sv: &SsaVarnode,
    insn: &IrInsn,
    stmt_idx: u32,
    consumer_stmt: u32,
    source_sv: &SsaVarnode,
    ctx: &PrintCtx,
) -> bool {
    if !matches!(
        insn.op,
        IrOp::IntZext | IrOp::IntSext | IrOp::Cast | IrOp::Copy
    ) || output_sv.base.space != SpaceId::Register
        || source_sv.base.space != SpaceId::Unique
    {
        tracing::debug!(target: "unlace::cprinter",
            "snapshot-source-expr-skip stmt={stmt_idx} consumer={consumer_stmt} op={:?} output={output_sv:?} source={source_sv:?} reason=shape",
            insn.op
        );
        return false;
    }

    let Some(source_def_stmt) = defining_stmt_for_sv(source_sv, ctx) else {
        tracing::debug!(target: "unlace::cprinter",
            "snapshot-source-expr-skip stmt={stmt_idx} consumer={consumer_stmt} source={source_sv:?} reason=no-source-def",
        );
        return false;
    };
    if source_def_stmt >= stmt_idx {
        tracing::debug!(target: "unlace::cprinter",
            "snapshot-source-expr-skip stmt={stmt_idx} consumer={consumer_stmt} source={source_sv:?} source_def_stmt={source_def_stmt} reason=source-def-after-copy",
        );
        return false;
    }
    let Some(source_def) = ctx.stmt_insns.get(&source_def_stmt) else {
        return false;
    };
    if source_def.inputs.len() < 2 || instr_has_side_effects(source_def) {
        tracing::debug!(target: "unlace::cprinter",
            "snapshot-source-expr-skip stmt={stmt_idx} consumer={consumer_stmt} source={source_sv:?} source_def_stmt={source_def_stmt} source_op={:?} input_count={} reason=source-not-expression",
            source_def.op,
            source_def.inputs.len()
        );
        return false;
    }
    tracing::debug!(target: "unlace::cprinter",
        "snapshot-source-expr-check stmt={stmt_idx} consumer={consumer_stmt} output={output_sv:?} source={source_sv:?} source_def_stmt={source_def_stmt} source_op={:?}",
        source_def.op
    );

    for (input_idx, input) in source_def.inputs.iter().enumerate() {
        if input.space == SpaceId::Const {
            continue;
        }
        let Some(input_sv) =
            input_or_latest_sv_for_operand(input, Some(input_idx), source_def_stmt, ctx)
        else {
            continue;
        };
        if input_sv.base.space != SpaceId::Register {
            continue;
        }
        tracing::debug!(target: "unlace::cprinter",
            "snapshot-source-expr-input stmt={stmt_idx} source_def_stmt={source_def_stmt} input_idx={input_idx} input={input_sv:?}",
        );
        for (&redef_stmt, output) in ctx.stmt_outputs.range((stmt_idx + 1)..consumer_stmt) {
            let Some(candidate) = output else {
                continue;
            };
            if *candidate == input_sv {
                continue;
            }
            if share_printed_storage(*candidate, input_sv, ctx) {
                tracing::debug!(target: "unlace::cprinter",
                    "snapshot-source-expr-input-redefined stmt={stmt_idx} consumer={consumer_stmt} output={output_sv:?} source={source_sv:?} source_def_stmt={source_def_stmt} input_idx={input_idx} input={input_sv:?} redef_stmt={redef_stmt} redef={candidate:?}",
                );
                return true;
            }
        }
    }

    false
}

/// Refuse to fold a multi-operand expression when one of its register inputs
/// has a same-base SSA redefinition between the def site and the consumer.
///
/// Why: `dedupe_var_names` collapses every SSA version of a given base register
/// to a single name (`var_names_can_share_name` returns `Some("same-base")`
/// unconditionally for matching `base`s). If we fold a flag/arithmetic
/// expression like `IntXor(IntSless(v1, v13_v1), …)` into a later use point
/// where `v13_v2` has overwritten `v13_v1`, the inlined `v13` token reads the
/// wrong version and the recompiled output diverges. The existing
/// `copy_like_*` guards only handle Copy/Cast snapshot patterns. This guard
/// generalizes the same idea to any foldable expression by scanning its own
/// inputs.
pub(super) fn expression_inputs_aliased_redefined_before_consumer(
    output_sv: &SsaVarnode,
    insn: &IrInsn,
    stmt_idx: u32,
    consumer_stmt: u32,
    ctx: &PrintCtx,
) -> bool {
    if consumer_stmt <= stmt_idx + 1 {
        return false;
    }
    // Copy/Subpiece/IntZext/IntSext/Cast are already handled by the dedicated
    // `copy_like_snapshot_source_redefined_before_consumer` check — skip them
    // here so we don't double-fire traces.
    if matches!(
        insn.op,
        IrOp::Copy | IrOp::Subpiece | IrOp::IntZext | IrOp::IntSext | IrOp::Cast
    ) {
        return false;
    }
    let Some(stmt_inputs) = ctx.stmt_inputs.get(&stmt_idx) else {
        return false;
    };
    for input_sv in stmt_inputs {
        if input_sv.base.space != SpaceId::Register {
            continue;
        }
        if *input_sv == *output_sv {
            continue;
        }
        for (&redef_stmt, output) in ctx.stmt_outputs.range((stmt_idx + 1)..consumer_stmt) {
            let Some(candidate) = output else {
                continue;
            };
            if *candidate == *input_sv {
                continue;
            }
            if share_printed_storage(*candidate, *input_sv, ctx) {
                tracing::debug!(target: "unlace::cprinter",
                    "expr-input-redefined stmt={stmt_idx} consumer={consumer_stmt} output={output_sv:?} input={input_sv:?} redef_stmt={redef_stmt} redef={candidate:?}",
                );
                return true;
            }
        }
    }
    false
}

/// Whether rendering statement `stmt_idx`'s expression at `consumer_stmt`
/// reads a variable that has been written in between.
///
/// The reads are the statement's operands plus, through every operand whose
/// definition is folded, that definition's operands: inlining moves them all
/// to the consumer. `t = c8 + a2; c2 = LODWORD(t); <loop writing a2>;
/// use(c2)` must not render `use(LODWORD(c8 + a2))` after the loop. A write
/// to a different SSA value that prints under the same name (merged
/// temporaries) clobbers the read just like a same-register write. When the
/// statement is also emitted (`def_emitted`), its own assignment counts: after
/// `v28 = v28 >> 1`, re-rendering `v28 >> 1` reads the new value.
pub(super) fn inlined_read_clobbered_before(
    stmt_idx: u32,
    consumer_stmt: u32,
    def_emitted: bool,
    ctx: &PrintCtx,
) -> bool {
    let first_write = if def_emitted { stmt_idx } else { stmt_idx + 1 };
    if consumer_stmt <= first_write {
        return false;
    }
    let mut reads = BTreeSet::new();
    let mut reads_memory = false;
    let mut pending = vec![stmt_idx];
    let mut visited = BTreeSet::new();
    while let Some(stmt) = pending.pop() {
        if !visited.insert(stmt) {
            continue;
        }
        for input_sv in ctx.stmt_inputs.get(&stmt).into_iter().flatten() {
            let def_stmt = ctx.sv_defining_stmt.get(input_sv).copied();
            let def_op = def_stmt
                .and_then(|def| ctx.stmt_insns.get(&def))
                .map(|insn| insn.op);
            match (def_stmt, def_op) {
                (Some(def), _) if ctx.foldable_stmts.contains(&def) => pending.push(def),
                // A load result renders as the load expression when it is
                // stable, so the memory read moves to the consumer too.
                (Some(def), Some(IrOp::Load)) => {
                    reads.insert(*input_sv);
                    reads_memory = true;
                    pending.push(def);
                }
                _ => {
                    reads.insert(*input_sv);
                }
            }
        }
    }
    ctx.stmt_insns
        .range(first_write..consumer_stmt)
        .any(|(writer, insn)| {
            if reads_memory && instr_has_side_effects(insn) {
                return true;
            }
            ctx.stmt_outputs
                .get(writer)
                .copied()
                .flatten()
                .is_some_and(|written| {
                    reads
                        .iter()
                        .any(|read| written != *read && share_printed_storage(written, *read, ctx))
                })
        })
}

/// Whether a temporary read by several statements can be rendered inline at
/// every read, so its own assignment need not be printed.
///
/// A temporary that is not folded is printed as an assignment, yet the
/// operand renderer still inlines its expression at most reads, which leaves
/// the assignment dead and the declaration leaked. Folding is safe when every
/// read is a later statement or condition that sees the same operand values
/// as the definition. Phi reads need the named variable.
pub(super) fn multi_use_temp_inlines_everywhere(
    output_sv: &SsaVarnode,
    stmt_idx: u32,
    use_count: usize,
    ctx: &PrintCtx,
) -> bool {
    if ctx.ssa_phi_uses.contains(output_sv) {
        return false;
    }
    let Some(insn) = ctx.stmt_insns.get(&stmt_idx) else {
        return false;
    };
    // A statement operand renders as the temporary's name, not its
    // expression, when one of the expression's register inputs is redefined
    // before the read; folding the definition away would leave that name
    // unassigned.
    let statement_reads = ctx.stmt_inputs.iter().flat_map(|(&reader, inputs)| {
        inputs
            .iter()
            .filter(|input| *input == output_sv)
            .map(move |_| (reader, true))
    });
    let condition_reads = ctx
        .cond_use_stmts
        .iter()
        .filter(|(sv, _)| sv == output_sv)
        .map(|&(_, position)| (position, false));
    let readers: Vec<(u32, bool)> = statement_reads.chain(condition_reads).collect();
    readers.len() == use_count
        && readers.iter().all(|&(reader, is_statement)| {
            reader > stmt_idx
                && !inlined_read_clobbered_before(stmt_idx, reader, false, ctx)
                && !(is_statement
                    && expression_inputs_aliased_redefined_before_consumer(
                        output_sv, insn, stmt_idx, reader, ctx,
                    ))
        })
}

/// Whether writing `a` overwrites the C variable that reads of `b` render as:
/// the same or an overlapping location, or two SSA values the variable merge
/// gave one name.
pub(super) fn share_printed_storage(a: SsaVarnode, b: SsaVarnode, ctx: &PrintCtx) -> bool {
    // Temps are named per base, so two temps share storage only by name;
    // their offsets are identifiers, not overlapping bytes.
    a.base == b.base
        || (a.base.space != SpaceId::Unique && aliases(a.base, b.base))
        || ctx
            .merged_names
            .get(&a)
            .is_some_and(|name| ctx.merged_names.get(&b) == Some(name))
}

pub(super) fn copy_reads_call_output(stmt_idx: u32, ctx: &PrintCtx) -> bool {
    let Some(insn) = ctx.stmt_insns.get(&stmt_idx) else {
        return false;
    };
    if insn.op != IrOp::Copy {
        return false;
    }
    let Some(input_sv) = ctx
        .stmt_inputs
        .get(&stmt_idx)
        .and_then(|inputs| inputs.first())
    else {
        return false;
    };
    ctx.stmt_outputs
        .iter()
        .find_map(|(def_stmt, output)| (*output == Some(*input_sv)).then_some(def_stmt))
        .and_then(|def_stmt| ctx.stmt_insns.get(def_stmt))
        .is_some_and(|def_insn| matches!(def_insn.op, IrOp::Call | IrOp::Callind))
}
