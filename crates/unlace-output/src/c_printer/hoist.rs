//! c_printer: hoist.

use super::*;

/// Decide which local declarations to hoist out of the function-top decl
/// block and into the body at the point of first use, matching IDA's
/// `<type> <name> = <expr>;` layout.
///
/// A base varnode qualifies for hoisting when:
///   1. The earliest statement that touches it (input read, output write, or
///      condition use) is itself an assignment that *defines* the variable.
///   2. That defining statement's lexical scope path equals the LCA of the
///      scope paths of every other use of the variable — i.e. the assignment
///      lexically dominates all subsequent reads (same scope or nested).
///   3. The defining statement is not foldable, dead-zero, dead-suppressed,
///      a CSEL/Ternary expansion, or otherwise rewritten by the emitter into
///      a non-`<lhs> = <rhs>;` shape.
///   4. The base is not BYREF (address taken): IDA still emits BYREF locals
///      at the top of the function for clarity, and we follow suit.
///   5. The defining statement is not a compound-op rewrite of the same
///      variable (`v = v + ...` → `v += ...`), which implies the value was
///      already live before the rewrite.
///
/// Names that don't qualify fall through to the original function-top
/// declaration block, preserving prior layout for cases this pass cannot
/// reason about safely.
pub(super) fn stmt_visible_for_hoist(ctx: &PrintCtx, stmt_idx: u32) -> bool {
    let Some(insn) = ctx.stmt_insns.get(&stmt_idx) else {
        // Synthetic condition/return anchors have no direct instruction but
        // are still visible uses from the C emitter's perspective.
        return true;
    };
    !(ctx.foldable_stmts.contains(&stmt_idx)
        || is_dead_zero_init(insn, stmt_idx, ctx)
        || is_dead_suppressible_store(insn, stmt_idx, ctx))
}

pub(super) fn stmt_visible_for_hoist_base(
    ctx: &PrintCtx,
    base: Varnode,
    stmt_idx: u32,
    base_visible: bool,
) -> bool {
    if !base_visible {
        return false;
    }
    let Some(insn) = ctx.stmt_insns.get(&stmt_idx) else {
        return true;
    };
    if let Some(Some(out_sv)) = ctx.stmt_outputs.get(&stmt_idx)
        && out_sv.base == base
        && is_control_only_condition_assignment(stmt_idx, out_sv, insn, ctx)
    {
        return false;
    }
    true
}

pub(super) fn record_hoist_candidate_name(
    candidate_bases: &mut BTreeSet<Varnode>,
    base: Varnode,
    name: &str,
) {
    if is_temp_hoist_name(name) {
        candidate_bases.insert(base);
    }
}

pub(super) fn compute_hoist_plan(ctx: &mut PrintCtx) {
    use std::collections::BTreeMap;

    // For each base varnode, gather every statement index that touches it.
    let mut use_stmts: BTreeMap<Varnode, Vec<u32>> = BTreeMap::new();
    let mut base_scope_paths: BTreeMap<Varnode, Vec<Vec<u32>>> = BTreeMap::new();
    let mut name_scope_paths: BTreeMap<String, Vec<Vec<u32>>> = BTreeMap::new();
    let mut candidate_bases: BTreeSet<Varnode> = BTreeSet::new();
    let collect_inputs_span = linkscope::phase("cprinter.hoist.collect-inputs");
    for (&stmt_idx, inputs) in &ctx.stmt_inputs {
        for sv in inputs {
            use_stmts.entry(sv.base).or_default().push(stmt_idx);
            base_scope_paths.entry(sv.base).or_default().push(
                ctx.stmt_scope_paths
                    .get(&stmt_idx)
                    .cloned()
                    .unwrap_or_default(),
            );
            if let Some(name) = known_name_of_sv(ctx, sv) {
                record_hoist_candidate_name(&mut candidate_bases, sv.base, &name);
                name_scope_paths.entry(name).or_default().push(
                    ctx.stmt_scope_paths
                        .get(&stmt_idx)
                        .cloned()
                        .unwrap_or_default(),
                );
            }
        }
    }
    linkscope::record_items(
        "cprinter.hoist.collect-inputs",
        ctx.stmt_inputs.len() as u64,
    );
    drop(collect_inputs_span);

    let collect_outputs_span = linkscope::phase("cprinter.hoist.collect-outputs");
    for (&stmt_idx, output_sv_opt) in &ctx.stmt_outputs {
        if let Some(sv) = output_sv_opt {
            use_stmts.entry(sv.base).or_default().push(stmt_idx);
            base_scope_paths.entry(sv.base).or_default().push(
                ctx.stmt_scope_paths
                    .get(&stmt_idx)
                    .cloned()
                    .unwrap_or_default(),
            );
            if let Some(name) = known_name_of_sv(ctx, sv) {
                record_hoist_candidate_name(&mut candidate_bases, sv.base, &name);
                name_scope_paths.entry(name).or_default().push(
                    ctx.stmt_scope_paths
                        .get(&stmt_idx)
                        .cloned()
                        .unwrap_or_default(),
                );
            }
        }
    }
    linkscope::record_items(
        "cprinter.hoist.collect-outputs",
        ctx.stmt_outputs.len() as u64,
    );
    drop(collect_outputs_span);

    let collect_conditions_span = linkscope::phase("cprinter.hoist.collect-conditions");
    for (sv, anchor_stmt) in &ctx.cond_use_stmts {
        // Anchor at the *previous* statement (the one that wrote the cond
        // value) when the recorded anchor is past the end of the stmt list.
        let s = (*anchor_stmt).min(ctx.next_stmt.saturating_sub(1));
        use_stmts.entry(sv.base).or_default().push(s);
    }
    for (sv, path) in &ctx.cond_use_scope_paths {
        base_scope_paths
            .entry(sv.base)
            .or_default()
            .push(path.clone());
        if let Some(name) = known_name_of_sv(ctx, sv) {
            record_hoist_candidate_name(&mut candidate_bases, sv.base, &name);
            name_scope_paths.entry(name).or_default().push(path.clone());
        }
    }
    for ((cond_sv, anchor_stmt), (scope_sv, path)) in ctx
        .cond_use_stmts
        .iter()
        .zip(ctx.cond_use_scope_paths.iter())
    {
        if cond_sv != scope_sv {
            continue;
        }
        let s = (*anchor_stmt).min(ctx.next_stmt.saturating_sub(1));
        let Some(inputs) = ctx.stmt_inputs.get(&s) else {
            continue;
        };
        // A condition renders its folded operands inline, so the bases they
        // read are used at the condition's scope too (a do-while condition
        // sits outside the body that defines them).
        let mut pending: Vec<SsaVarnode> = inputs.clone();
        let mut seen: BTreeSet<SsaVarnode> = BTreeSet::new();
        while let Some(input_sv) = pending.pop() {
            if !seen.insert(input_sv) {
                continue;
            }
            base_scope_paths
                .entry(input_sv.base)
                .or_default()
                .push(path.clone());
            if let Some(name) = known_name_of_sv(ctx, &input_sv) {
                record_hoist_candidate_name(&mut candidate_bases, input_sv.base, &name);
                name_scope_paths.entry(name).or_default().push(path.clone());
            }
            if let Some(def) = ctx.sv_defining_stmt.get(&input_sv)
                && ctx.foldable_stmts.contains(def)
                && let Some(def_inputs) = ctx.stmt_inputs.get(def)
            {
                pending.extend(def_inputs.iter().copied());
            }
        }
    }
    linkscope::record_items(
        "cprinter.hoist.collect-conditions",
        ctx.cond_use_stmts.len() as u64,
    );
    drop(collect_conditions_span);

    let dedupe_scope_paths_span = linkscope::phase("cprinter.hoist.dedupe-scope-paths");
    for paths in base_scope_paths.values_mut() {
        paths.sort();
        paths.dedup();
    }
    for paths in name_scope_paths.values_mut() {
        paths.sort();
        paths.dedup();
    }
    drop(dedupe_scope_paths_span);

    let candidate_bases_span = linkscope::phase("cprinter.hoist.candidate-bases");
    linkscope::record_items(
        "cprinter.hoist.candidate-bases",
        candidate_bases.len() as u64,
    );
    drop(candidate_bases_span);

    let mut stmt_visible_cache: BTreeMap<u32, bool> = BTreeMap::new();
    let mut visible_stmts_by_base: BTreeMap<Varnode, Vec<u32>> = BTreeMap::new();
    let visible_filter_span = linkscope::phase("cprinter.hoist.visible-filter");
    for base in &candidate_bases {
        let Some(stmts) = use_stmts.get(base) else {
            continue;
        };
        let mut unique_stmts = stmts.clone();
        unique_stmts.sort_unstable();
        unique_stmts.dedup();
        let visible: Vec<u32> = unique_stmts
            .into_iter()
            .filter(|stmt_idx| {
                let base_visible = if let Some(base_visible) = stmt_visible_cache.get(stmt_idx) {
                    *base_visible
                } else {
                    let base_visible = stmt_visible_for_hoist(ctx, *stmt_idx);
                    stmt_visible_cache.insert(*stmt_idx, base_visible);
                    base_visible
                };
                stmt_visible_for_hoist_base(ctx, *base, *stmt_idx, base_visible)
            })
            .collect();
        visible_stmts_by_base.insert(*base, visible);
    }
    linkscope::record_items(
        "cprinter.hoist.visible-filter",
        candidate_bases.len() as u64,
    );
    drop(visible_filter_span);

    let mut base_names_by_base: BTreeMap<Varnode, String> = BTreeMap::new();
    let mut name_earliest_stmt: BTreeMap<String, u32> = BTreeMap::new();
    let name_resolution_span = linkscope::phase("cprinter.hoist.name-resolution");
    for (base, stmts) in &visible_stmts_by_base {
        let Some(name) = hoist_name_for_base(ctx, base, stmts) else {
            continue;
        };
        let Some(first_stmt) = stmts.first().copied() else {
            continue;
        };
        base_names_by_base.insert(*base, name.clone());
        name_earliest_stmt
            .entry(name)
            .and_modify(|existing| *existing = (*existing).min(first_stmt))
            .or_insert(first_stmt);
    }
    linkscope::record_items(
        "cprinter.hoist.name-resolution",
        base_names_by_base.len() as u64,
    );
    drop(name_resolution_span);

    let empty_path: Vec<u32> = Vec::new();
    let mut planned_names: BTreeSet<String> = BTreeSet::new();

    let plan_loop_span = linkscope::phase("cprinter.hoist.plan-loop");
    for base in candidate_bases {
        let Some(raw_stmts) = use_stmts.get(&base) else {
            continue;
        };
        let stmts = visible_stmts_by_base
            .get(&base)
            .cloned()
            .unwrap_or_default();
        if stmts.is_empty() {
            trace_hoist_text(format_args!(
                "skip base={base:?} raw_stmts={raw_stmts:?} reason=no-visible-stmts"
            ));
            continue;
        }
        let base_name = base_names_by_base.get(&base).cloned();
        trace_hoist_text(format_args!(
            "candidate base={base:?} name={:?} visible_stmts={:?} raw_stmts={:?}",
            base_name, stmts, raw_stmts
        ));

        // Skip BYREF — these are address-taken and must live at fn top.
        if ctx.byref_bases.contains(&base) {
            trace_hoist_text(format_args!(
                "skip base={base:?} name={:?} reason=byref",
                base_name
            ));
            continue;
        }
        // Skip vars whose name isn't even known yet (defensive).  This must
        // consult `var_names` as well as `base_names`: coalesced/merged temps
        // commonly never populate `base_names`, and those are exactly the
        // generic declarations that otherwise leak into the function-top block.
        let Some(base_name) = base_name else {
            trace_hoist_text(format_args!("skip base={base:?} reason=no-known-name"));
            continue;
        };
        if !is_temp_hoist_name(&base_name) {
            trace_hoist_text(format_args!(
                "skip base={base:?} name={base_name} reason=non-temp-name"
            ));
            continue;
        }
        if planned_names.contains(&base_name) {
            trace_hoist_text(format_args!(
                "skip base={base:?} name={base_name} reason=name-already-hoisted"
            ));
            continue;
        }
        if name_earliest_stmt.get(&base_name).copied() != stmts.first().copied() {
            trace_hoist_text(format_args!(
                "skip base={base:?} name={base_name} first_stmt={} reason=name-earlier-touch earliest={:?}",
                stmts[0],
                name_earliest_stmt.get(&base_name)
            ));
            continue;
        }

        // Compute LCA of all use paths.
        let lca = lca_scope_path(&stmts, &ctx.stmt_scope_paths, &empty_path);
        let base_lca = base_scope_paths
            .get(&base)
            .map(|paths| lca_paths(paths, &empty_path))
            .unwrap_or_else(|| lca.clone());
        let name_lca = name_scope_paths
            .get(&base_name)
            .map(|paths| lca_paths(paths, &empty_path))
            .unwrap_or_else(|| lca.clone());

        let first_stmt = stmts[0];
        let first_path = ctx
            .stmt_scope_paths
            .get(&first_stmt)
            .cloned()
            .unwrap_or_default();

        // The defining statement must live at exactly the LCA scope: if it
        // is deeper, sibling-scope uses would not be dominated and we'd
        // need to emit a bare decl above the construct enclosing the first
        // use — leave that case to the function-top fallback for now.
        if first_path != lca || first_path != base_lca || first_path != name_lca {
            trace_hoist_text(format_args!(
                "skip base={base:?} name={base_name} first_stmt={first_stmt} reason=scope-lca first_path={first_path:?} lca={lca:?} base_lca={base_lca:?} name_lca={name_lca:?}"
            ));
            continue;
        }

        // The first-touched statement must *write* this base (not just read
        // it).  Reads-before-writes happen for parameter/live-in values
        // which must stay declared at fn top (or via the signature).
        let Some(Some(out_sv)) = ctx.stmt_outputs.get(&first_stmt).copied() else {
            trace_hoist_text(format_args!(
                "skip base={base:?} name={base_name} first_stmt={first_stmt} reason=first-not-output"
            ));
            continue;
        };
        if out_sv.base != base {
            trace_hoist_text(format_args!(
                "skip base={base:?} name={base_name} first_stmt={first_stmt} output={out_sv:?} reason=first-output-other-base"
            ));
            continue;
        }
        if let Some(inputs) = ctx.stmt_inputs.get(&first_stmt)
            && inputs.iter().any(|input_sv| {
                input_sv.base != base
                    && base_names_by_base
                        .get(&input_sv.base)
                        .is_some_and(|input_name| input_name == &base_name)
            })
        {
            trace_hoist_text(format_args!(
                "skip base={base:?} name={base_name} first_stmt={first_stmt} reason=same-name-input-at-anchor"
            ));
            continue;
        }

        // Skip statements that the emitter would suppress or rewrite into
        // a non-assignment shape.
        if ctx.foldable_stmts.contains(&first_stmt) {
            trace_hoist_text(format_args!(
                "skip base={base:?} name={base_name} first_stmt={first_stmt} reason=foldable"
            ));
            continue;
        }
        let Some(insn) = ctx.stmt_insns.get(&first_stmt).cloned() else {
            trace_hoist_text(format_args!(
                "skip base={base:?} name={base_name} first_stmt={first_stmt} reason=no-insn"
            ));
            continue;
        };
        if is_dead_zero_init(&insn, first_stmt, ctx) {
            trace_hoist_text(format_args!(
                "skip base={base:?} name={base_name} first_stmt={first_stmt} reason=dead-zero"
            ));
            continue;
        }
        if is_dead_suppressible_store(&insn, first_stmt, ctx) {
            trace_hoist_text(format_args!(
                "skip base={base:?} name={base_name} first_stmt={first_stmt} reason=dead-suppressible"
            ));
            continue;
        }
        if is_stack_canary_compare_artifact(&insn, first_stmt, ctx) {
            trace_hoist_text(format_args!(
                "skip base={base:?} name={base_name} first_stmt={first_stmt} reason=stack-canary"
            ));
            continue;
        }
        if is_csel_callother(&insn) {
            // CSEL emits an `if (...) { lhs = ...; } else ...` — can't fold.
            trace_hoist_text(format_args!(
                "skip base={base:?} name={base_name} first_stmt={first_stmt} reason=csel"
            ));
            continue;
        }
        if SyscallConvention::of(&insn).is_some()
            && ctx.sv_use_counts.get(&out_sv).copied().unwrap_or(0) == 0
        {
            // An unused system-call result renders as a bare call.
            trace_hoist_text(format_args!(
                "skip base={base:?} name={base_name} first_stmt={first_stmt} reason=unused-syscall"
            ));
            continue;
        }

        // Compound (`v += 1`) and increment (`v++`) forms reuse the lhs as
        // both rvalue and lvalue; declaring inside such a stmt is illegal.
        // It also means the value was live before this stmt, so a function-
        // top declaration is the correct shape.
        let lhs_is_self_input = insn
            .inputs
            .iter()
            .any(|i| i.space != SpaceId::Const && Some(*i) == insn.output);
        if lhs_is_self_input {
            trace_hoist_text(format_args!(
                "skip base={base:?} name={base_name} first_stmt={first_stmt} reason=self-input"
            ));
            continue;
        }

        // Don't hoist values that the return-merge pass is poised to fold
        // into `return <expr>;`.  Those are writes to the return register
        // (offset 0 in `SpaceId::Register`) whose SSA varnode has at most
        // one read \u2014 the read is the trailing `Return(Some(sv))`.  Hoisting
        // here would insert a `<type> <name> = <expr>;` line and force the
        // merge pass to give up, regressing the IDA convention.
        if base.space == SpaceId::Register && base.offset == 0 {
            let reads = ctx.sv_use_counts.get(&out_sv).copied().unwrap_or(0);
            if reads <= 1 {
                trace_hoist_text(format_args!(
                    "skip base={base:?} name={base_name} first_stmt={first_stmt} reason=return-merge reads={reads}"
                ));
                continue;
            }
        }

        // Sanity: every other use's path must extend the LCA prefix.
        let mut all_dominated = true;
        for &s in &stmts {
            let p = ctx.stmt_scope_paths.get(&s).cloned().unwrap_or_default();
            if !p.starts_with(&lca) {
                all_dominated = false;
                break;
            }
        }
        if !all_dominated {
            trace_hoist_text(format_args!(
                "skip base={base:?} name={base_name} first_stmt={first_stmt} reason=not-dominated"
            ));
            continue;
        }

        ctx.hoist_decl_plan.insert(
            base,
            HoistPlan {
                stmt_idx: first_stmt,
                fold_into_assignment: true,
            },
        );
        planned_names.insert(base_name.clone());
        trace_hoist_text(format_args!(
            "plan base={base:?} name={base_name} stmt={first_stmt} fold_into_assignment=true"
        ));
    }
    linkscope::record_items("cprinter.hoist.plan-loop", ctx.hoist_decl_plan.len() as u64);
    drop(plan_loop_span);
}

pub(super) fn is_temp_hoist_name(name: &str) -> bool {
    is_v_number_name(name) || is_coalesced_number_name(name) || is_cond_number_name(name)
}

pub(super) fn hoist_name_for_base(
    ctx: &PrintCtx,
    base: &Varnode,
    visible_stmts: &[u32],
) -> Option<String> {
    visible_stmts
        .iter()
        .filter_map(|stmt_idx| ctx.stmt_outputs.get(stmt_idx).copied().flatten())
        .find(|sv| sv.base == *base)
        .and_then(|sv| known_name_of_sv(ctx, &sv))
        .or_else(|| known_name_for_base(ctx, base))
}

/// Longest common prefix of the scope paths for every statement in `stmts`.
pub(super) fn lca_scope_path(
    stmts: &[u32],
    paths: &BTreeMap<u32, Vec<u32>>,
    fallback: &Vec<u32>,
) -> Vec<u32> {
    let mut iter = stmts.iter();
    let first = match iter.next() {
        Some(s) => paths.get(s).unwrap_or(fallback).clone(),
        None => return fallback.clone(),
    };
    let mut lca = first;
    for s in iter {
        let p = paths.get(s).unwrap_or(fallback);
        let common = lca.iter().zip(p.iter()).take_while(|(a, b)| a == b).count();
        lca.truncate(common);
        if lca.is_empty() {
            break;
        }
    }
    lca
}

pub(super) fn lca_paths(paths: &[Vec<u32>], fallback: &[u32]) -> Vec<u32> {
    let mut iter = paths.iter();
    let Some(first) = iter.next() else {
        return fallback.to_vec();
    };
    let mut lca = first.clone();
    for path in iter {
        let common = lca
            .iter()
            .zip(path.iter())
            .take_while(|(a, b)| a == b)
            .count();
        lca.truncate(common);
        if lca.is_empty() {
            break;
        }
    }
    lca
}
