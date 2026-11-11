//! pipeline: emit.

use super::*;

pub fn emit_output(
    format: EmitFormat,
    ssa: &SsaFunction,
    dwarf: Option<&DwarfInfo>,
    symbols: &BTreeMap<u64, String>,
    string_table: &BTreeMap<u64, String>,
    rtti: Option<&unlace_loader::RttiInfo>,
    options: &crate::config::Config,
    annotations: Option<&unlace_output::PrinterAnnotations>,
    jump_table_sections: &[unlace_struct::SectionView<'_>],
    deadline: Option<Instant>,
) -> Result<String> {
    match format {
        EmitFormat::Ir => Ok(unlace_output::dump_ir(ssa)),
        EmitFormat::CfgDot => Ok(unlace_output::emit_cfg_dot(ssa)),
        EmitFormat::C => {
            let mut hir = {
                let _span = profiling::phase("output.structure");
                let structured = unlace_struct::structure_with_options(
                    ssa,
                    ArchId::X86_64,
                    deadline,
                    &options.structure,
                );
                match structured {
                    Ok(hir) => hir,
                    Err(err @ unlace_struct::StructureError::ComplexityLimit { .. }) => {
                        let reason = err.to_string();
                        profiling::diagnostic(
                            "warn",
                            "control-flow structuring fell back to unstructured labels",
                            [
                                TraceField::text("function", ssa.function.name.clone()),
                                TraceField::text("reason", reason.clone()),
                            ],
                        );
                        {
                            let _span = profiling::phase("output.structure-unstructured-fallback");
                            unlace_struct::structure_unstructured_fallback_with_options(
                                ssa,
                                ArchId::X86_64,
                                reason,
                                &options.structure,
                            )
                        }
                    }
                    Err(err) => return Err(err).context("control-flow structuring failed"),
                }
            };
            check_output_deadline(deadline, &ssa.function.name, "output.structure")?;
            trace_hir_pipeline("structure", &hir);
            // Batch 9: post-structuring switch recovery, followed by
            // jump-table-aware refinement. `recover_switches` walks the
            // HIR and normalises any `HirNode::Switch` produced by the
            // structurer; `refine_switches_with_tables` then promotes
            // those switches' arm labels from synthetic indices to the
            // concrete case values decoded from the binary's jump
            // tables (populated upstream by
            // `IndirectJumpResolvePass` + `resolve_jump_table_targets`).
            {
                let _span = profiling::phase("output.hir-switch-recovery");
                {
                    let _span = profiling::phase("output.hir.recover-switches");
                    unlace_struct::recover_switches(&mut hir);
                }
                check_output_deadline(deadline, &ssa.function.name, "output.hir.recover-switches")?;
                trace_hir_pipeline("recover_switches", &hir);
                if !ssa.resolved_jump_tables.is_empty() && !jump_table_sections.is_empty() {
                    let tables_for_refine = {
                        let _span = profiling::phase("output.hir.jump-table-info-map");
                        jump_table_info_map_to_struct(&ssa.resolved_jump_tables)
                    };
                    check_output_deadline(
                        deadline,
                        &ssa.function.name,
                        "output.hir.jump-table-info-map",
                    )?;
                    if !tables_for_refine.is_empty() {
                        {
                            let _span = profiling::phase("output.hir.refine-switches-with-tables");
                            unlace_struct::refine_switches_with_tables(
                                &mut hir,
                                &tables_for_refine,
                                jump_table_sections,
                            );
                        }
                        check_output_deadline(
                            deadline,
                            &ssa.function.name,
                            "output.hir.refine-switches-with-tables",
                        )?;
                        trace_hir_pipeline("refine_switches", &hir);
                    }
                }
            }
            post_process_hir(&mut hir, ssa, deadline)?;
            let header = {
                let _span = profiling::phase("output.function-header");
                unlace_output::FunctionHeaderInfo::from_ssa(ssa, symbols)
            };
            check_output_deadline(deadline, &ssa.function.name, "output.function-header")?;

            // t224: precompute the recovered-composite preamble from the
            // SsaFunction here — the printer sees only HirFunction and so
            // can't reach `inferred_structs` / `array_struct_layouts`
            // directly.  Splice the rendered block onto a local clone of
            // the caller's annotations (or build a fresh one) so the
            // upstream `AnnotationDb`-derived view is left untouched.
            //
            // t231: alongside the preamble, compute the
            // `array_struct_indices` map (same numbering as the
            // preamble) and clone the layouts themselves through so the
            // printer's `try_array_struct_field_access` can rewrite
            // Load/Store sites into `arr<N>[i].field_<offset>` form.
            let (inferred_preamble, array_indices) = {
                let _span = profiling::phase("output.annotation-preamble");
                (
                    unlace_output::emit_inferred_struct_preamble(ssa),
                    unlace_output::compute_array_struct_indices(ssa),
                )
            };
            check_output_deadline(deadline, &ssa.function.name, "output.annotation-preamble")?;
            let has_arrays = !ssa.array_struct_layouts.is_empty();
            let mut ann_clone = annotations.cloned().unwrap_or_default();
            if !inferred_preamble.is_empty() || has_arrays {
                if !inferred_preamble.is_empty() {
                    ann_clone.inferred_struct_preamble = Some(inferred_preamble);
                }
                if has_arrays {
                    ann_clone.array_struct_layouts = ssa.array_struct_layouts.clone();
                    ann_clone.array_struct_indices = array_indices;
                }
            }
            {
                let _span = profiling::phase("output.annotation-maps");
                ann_clone.ssa_statement_slots = collect_ssa_statement_slots(ssa);
                ann_clone.ssa_phi_uses = collect_ssa_phi_uses(ssa);
                ann_clone.return_value_aliases = collect_return_value_aliases(ssa, symbols);
                ann_clone.stack_lvars = unlace_output::stack_lvar_annotations_from_ssa(ssa);
                ann_clone.vector_var_types = ssa
                    .var_types
                    .iter()
                    .filter_map(|(sv, ty)| match ty {
                        PrimitiveType::Vector(v) => Some((*sv, *v)),
                        _ => None,
                    })
                    .collect();
            }
            check_output_deadline(deadline, &ssa.function.name, "output.annotation-maps")?;
            ann_clone.arch = Some(ssa.arch);
            ann_clone.object_types = ssa.object_types.clone();
            let ann_owned = Some(ann_clone);
            let ann_ref = ann_owned.as_ref();

            let rendered = {
                let _span = profiling::phase("output.print-c");
                let print_symbols = symbols_for_ssa(ssa, symbols);
                let print_string_table = string_table_for_ssa(ssa, string_table);
                unlace_output::print_c_with_annotations(
                    &hir,
                    dwarf,
                    Some(&header),
                    Some(&print_symbols),
                    Some(&print_string_table),
                    rtti,
                    Some(options.printer),
                    ann_ref,
                )
            };
            check_output_deadline(deadline, &ssa.function.name, "output.print-c")?;
            profiling::record_bytes("output.print-c", rendered.len() as u64);
            Ok(rendered)
        }
    }
}

/// The HIR cleanup every C emission applies after structuring: control-flow
/// recovery passes, goto elimination and label repair, in the order the
/// printed output depends on. `unlace quality` measures through the same
/// sequence so its counters describe the emitted C.
pub(crate) fn post_process_hir(
    hir: &mut unlace_struct::HirFunction,
    ssa: &SsaFunction,
    deadline: Option<Instant>,
) -> Result<()> {
    let _span = profiling::phase("output.hir-post-process");
    macro_rules! hir_step {
        ($phase:literal, $stage:literal, $body:block) => {{
            {
                let _step = profiling::phase($phase);
                $body
            }
            check_output_deadline(deadline, &ssa.function.name, $phase)?;
            trace_hir_pipeline($stage, hir);
        }};
    }

    hir_step!("output.hir.ternary", "ternary", {
        unlace_struct::ternary_recovery(hir);
    });
    hir_step!("output.hir.short-circuit", "short_circuit", {
        unlace_struct::short_circuit_recovery(hir);
    });
    hir_step!("output.hir.flatten-if-else", "flatten_if_else", {
        unlace_struct::flatten_if_else_chains(hir);
    });
    hir_step!(
        "output.hir.simplify-chain-conditions",
        "simplify_chain_conditions",
        {
            unlace_struct::simplify_chain_conditions(hir, ssa);
        }
    );
    hir_step!(
        "output.hir.normalize-conditions1",
        "normalize_conditions1",
        {
            unlace_struct::normalize_conditions(hir);
        }
    );
    hir_step!("output.hir.if-chain-to-switch", "if_chain_to_switch", {
        unlace_struct::if_chain_to_switch(hir, ssa);
    });
    hir_step!(
        "output.hir.recover-cmov-switches",
        "recover_cmov_switches",
        {
            unlace_struct::recover_cmov_switches(hir, ssa);
        }
    );
    hir_step!("output.hir.goto-to-break", "goto_to_break", {
        unlace_struct::goto_to_break(hir);
    });
    hir_step!("output.hir.goto-to-continue", "goto_to_continue", {
        unlace_struct::goto_to_continue(hir);
    });
    hir_step!("output.hir.merge-loop-exits", "merge_loop_exits", {
        unlace_struct::merge_loop_exits(hir, ssa);
    });
    hir_step!(
        "output.hir.detect-continue-break1",
        "detect_continue_break1",
        {
            unlace_struct::detect_continue_break(&mut hir.body);
        }
    );
    hir_step!(
        "output.hir.reverse-loop-rotation",
        "reverse_loop_rotation",
        {
            unlace_struct::reverse_loop_rotation(hir);
        }
    );
    hir_step!(
        "output.hir.normalize-dowhile-to-while",
        "normalize_dowhile_to_while",
        {
            unlace_struct::normalize_dowhile_to_while(hir);
        }
    );
    hir_step!("output.hir.while-to-for", "while_to_for", {
        unlace_struct::while_to_for(hir);
    });
    hir_step!(
        "output.hir.eliminate-forward-gotos1",
        "eliminate_forward_gotos1",
        {
            unlace_struct::eliminate_forward_gotos(hir);
        }
    );
    hir_step!(
        "output.hir.hoist-cross-branch-labels",
        "hoist_cross_branch_labels",
        {
            unlace_struct::hoist_cross_branch_labels(hir);
        }
    );
    hir_step!(
        "output.hir.coalesce-goto-chains1",
        "coalesce_goto_chains1",
        {
            unlace_struct::coalesce_goto_chains(hir);
        }
    );
    hir_step!(
        "output.hir.collapse-label-fallthroughs1",
        "collapse_label_fallthroughs1",
        {
            unlace_struct::collapse_label_fallthroughs(hir);
        }
    );
    hir_step!(
        "output.hir.duplicate-goto-conditions",
        "duplicate_goto_conditions",
        {
            unlace_struct::duplicate_goto_conditions(hir);
        }
    );
    hir_step!(
        "output.hir.duplicate-simple-label-tails1",
        "duplicate_simple_label_tails1",
        {
            unlace_struct::duplicate_simple_label_tails(hir);
        }
    );
    hir_step!(
        "output.hir.normalize-conditions2",
        "normalize_conditions2",
        {
            unlace_struct::normalize_conditions(hir);
        }
    );
    hir_step!(
        "output.hir.detect-continue-break2",
        "detect_continue_break2",
        {
            unlace_struct::detect_continue_break(&mut hir.body);
        }
    );
    hir_step!(
        "output.hir.eliminate-forward-gotos2",
        "eliminate_forward_gotos2",
        {
            unlace_struct::eliminate_forward_gotos(hir);
        }
    );
    hir_step!(
        "output.hir.coalesce-goto-chains2",
        "coalesce_goto_chains2",
        {
            unlace_struct::coalesce_goto_chains(hir);
        }
    );
    hir_step!(
        "output.hir.collapse-label-fallthroughs2",
        "collapse_label_fallthroughs2",
        {
            unlace_struct::collapse_label_fallthroughs(hir);
        }
    );
    hir_step!(
        "output.hir.cleanup-unreachable-labels1",
        "cleanup_unreachable_labels",
        {
            unlace_struct::cleanup_unreachable_labels(hir);
        }
    );
    hir_step!("output.hir.return-merge", "return_merge", {
        unlace_struct::return_merge(hir);
    });
    hir_step!(
        "output.hir.duplicate-simple-label-tails2",
        "duplicate_simple_label_tails2",
        {
            unlace_struct::duplicate_simple_label_tails(hir);
        }
    );
    hir_step!(
        "output.hir.detect-continue-break3",
        "detect_continue_break3",
        {
            unlace_struct::detect_continue_break(&mut hir.body);
        }
    );
    hir_step!(
        "output.hir.eliminate-forward-gotos3",
        "eliminate_forward_gotos3",
        {
            unlace_struct::eliminate_forward_gotos(hir);
        }
    );
    hir_step!(
        "output.hir.coalesce-goto-chains3",
        "coalesce_goto_chains3",
        {
            unlace_struct::coalesce_goto_chains(hir);
        }
    );
    hir_step!(
        "output.hir.collapse-label-fallthroughs3",
        "collapse_label_fallthroughs3",
        {
            unlace_struct::collapse_label_fallthroughs(hir);
        }
    );
    hir_step!(
        "output.hir.cleanup-unreachable-labels-final1",
        "cleanup_unreachable_labels_final",
        {
            unlace_struct::cleanup_unreachable_labels(hir);
        }
    );
    hir_step!(
        "output.hir.eliminate-forward-gotos4",
        "eliminate_forward_gotos4",
        {
            unlace_struct::eliminate_forward_gotos(hir);
        }
    );
    hir_step!(
        "output.hir.cleanup-unreachable-labels-final2",
        "cleanup_unreachable_labels_final2",
        {
            unlace_struct::cleanup_unreachable_labels(hir);
        }
    );
    hir_step!("output.hir.resolve-gotos", "resolve_gotos", {
        unlace_struct::resolve_gotos(hir);
    });
    hir_step!(
        "output.hir.recover-guarded-whiles",
        "recover_guarded_whiles",
        {
            unlace_struct::recover_guarded_whiles(hir);
        }
    );
    hir_step!("output.hir.cleanup-empty-ifs", "cleanup_empty_ifs", {
        unlace_struct::cleanup_empty_ifs(hir);
    });
    hir_step!(
        "output.hir.expression-recovery",
        "batch19_expression_recovery",
        {
            hir_recovery::apply_expression_recovery(hir);
        }
    );
    // Batch 9 slice 2: collapse consecutive cases with equal
    // bodies and drop redundant `default:` arms so the printer
    // emits IDA-style stacked case labels.
    hir_step!("output.hir.cleanup-switches", "cleanup_switches", {
        unlace_struct::cleanup_switches(hir);
    });
    hir_step!(
        "output.hir.repair-missing-goto-labels",
        "repair_missing_goto_labels",
        {
            unlace_struct::repair_missing_goto_labels(hir);
        }
    );
    Ok(())
}

pub(super) fn trace_hir_pipeline(stage: &str, hir: &unlace_struct::hir::HirFunction) {
    let linkscope_enabled = profiling::is_enabled();
    let stderr_enabled = tracing::enabled!(target: "unlace::hir", tracing::Level::DEBUG);
    if !linkscope_enabled && !stderr_enabled {
        return;
    }
    let mut counts = HirTraceCounts::default();
    count_hir_nodes(&hir.body, &mut counts);
    if linkscope_enabled {
        profiling::event_fields(
            "output.hir-stage",
            [
                TraceField::text("stage", stage),
                TraceField::count("top", hir.body.len() as u64),
                TraceField::count("nodes", counts.nodes as u64),
                TraceField::count("stmts", counts.statements as u64),
                TraceField::count("calls", counts.calls as u64),
                TraceField::count("returns", counts.returns as u64),
                TraceField::count("gotos", counts.gotos as u64),
                TraceField::count("labels", counts.labels as u64),
                TraceField::count("breaks", counts.breaks as u64),
                TraceField::count("continues", counts.continues as u64),
                TraceField::count("empty_ifs", counts.empty_ifs as u64),
            ],
        );
    }
    if !stderr_enabled {
        return;
    }
    tracing::debug!(
        target: "unlace::hir",
        "stage={stage} top={} nodes={} stmts={} calls={} returns={} gotos={} labels={} breaks={} continues={} empty_ifs={}",
        hir.body.len(),
        counts.nodes,
        counts.statements,
        counts.calls,
        counts.returns,
        counts.gotos,
        counts.labels,
        counts.breaks,
        counts.continues,
        counts.empty_ifs
    );
    if tracing::enabled!(target: "unlace::hir", tracing::Level::TRACE) {
        let mut details = Vec::new();
        collect_hir_trace_details(&hir.body, "body".to_string(), &mut details);
        for detail in details.into_iter().take(64) {
            tracing::trace!(target: "unlace::hir", "detail stage={stage} {detail}");
        }
    }
}

#[derive(Default)]
pub(super) struct HirTraceCounts {
    pub(super) nodes: usize,
    pub(super) statements: usize,
    pub(super) calls: usize,
    pub(super) returns: usize,
    pub(super) gotos: usize,
    pub(super) labels: usize,
    pub(super) breaks: usize,
    pub(super) continues: usize,
    pub(super) empty_ifs: usize,
}

pub(super) fn count_hir_nodes(nodes: &[unlace_struct::hir::HirNode], counts: &mut HirTraceCounts) {
    use unlace_struct::hir::HirNode;
    for node in nodes {
        counts.nodes += 1;
        match node {
            HirNode::Statement(insn) => {
                counts.statements += 1;
                if matches!(insn.op, IrOp::Call | IrOp::Callind) {
                    counts.calls += 1;
                }
            }
            HirNode::Block(children) => count_hir_nodes(children, counts),
            HirNode::If {
                then_body,
                else_body,
                ..
            } => {
                if then_body.is_empty() && else_body.as_ref().is_none_or(Vec::is_empty) {
                    counts.empty_ifs += 1;
                }
                count_hir_nodes(then_body, counts);
                if let Some(else_body) = else_body {
                    count_hir_nodes(else_body, counts);
                }
            }
            HirNode::IfCmp {
                then_body,
                else_body,
                ..
            } => {
                if then_body.is_empty() && else_body.as_ref().is_none_or(Vec::is_empty) {
                    counts.empty_ifs += 1;
                }
                count_hir_nodes(then_body, counts);
                if let Some(else_body) = else_body {
                    count_hir_nodes(else_body, counts);
                }
            }
            HirNode::While { body, .. }
            | HirNode::DoWhile { body, .. }
            | HirNode::For { body, .. } => count_hir_nodes(body, counts),
            HirNode::GuardedIf {
                then_body,
                else_body,
                ..
            } => {
                count_hir_nodes(then_body, counts);
                count_hir_nodes(else_body, counts);
            }
            HirNode::Switch { cases, default, .. } => {
                for (_, body, _) in cases {
                    count_hir_nodes(body, counts);
                }
                if let Some(default) = default {
                    count_hir_nodes(default, counts);
                }
            }
            HirNode::TryCatch {
                try_body,
                catch_arms,
            } => {
                count_hir_nodes(try_body, counts);
                for (_, body) in catch_arms {
                    count_hir_nodes(body, counts);
                }
            }
            HirNode::TryFinally {
                try_body,
                finally_body,
            } => {
                count_hir_nodes(try_body, counts);
                count_hir_nodes(finally_body, counts);
            }
            HirNode::TryExcept {
                try_body,
                except_body,
                ..
            } => {
                count_hir_nodes(try_body, counts);
                count_hir_nodes(except_body, counts);
            }
            HirNode::Commented { inner, .. } => {
                count_hir_nodes(std::slice::from_ref(inner.as_ref()), counts)
            }
            HirNode::Return(_) => counts.returns += 1,
            HirNode::Goto(_) => counts.gotos += 1,
            HirNode::Label(_) => counts.labels += 1,
            HirNode::Break => counts.breaks += 1,
            HirNode::Continue => counts.continues += 1,
            HirNode::GuardedTernary { .. }
            | HirNode::CselTernary { .. }
            | HirNode::Ternary { .. }
            | HirNode::TailCall { .. }
            | HirNode::ObjcBlock { .. }
            | HirNode::Asm { .. } => {}
        }
    }
}

pub(super) fn collect_hir_trace_details(
    nodes: &[unlace_struct::hir::HirNode],
    path: String,
    details: &mut Vec<String>,
) {
    use unlace_struct::hir::HirNode;
    for (idx, node) in nodes.iter().enumerate() {
        let here = format!("{path}.{idx}");
        match node {
            HirNode::Goto(label) => details.push(format!("{here} goto={:?}", label)),
            HirNode::Label(label) => details.push(format!("{here} label={:?}", label)),
            HirNode::Break => details.push(format!("{here} break")),
            HirNode::Continue => details.push(format!("{here} continue")),
            HirNode::If {
                then_body,
                else_body,
                ..
            } => {
                if then_body.is_empty() && else_body.as_ref().is_none_or(Vec::is_empty) {
                    details.push(format!("{here} empty_if"));
                }
                collect_hir_trace_details(then_body, format!("{here}.then"), details);
                if let Some(else_body) = else_body {
                    collect_hir_trace_details(else_body, format!("{here}.else"), details);
                }
            }
            HirNode::IfCmp {
                then_body,
                else_body,
                ..
            } => {
                if then_body.is_empty() && else_body.as_ref().is_none_or(Vec::is_empty) {
                    details.push(format!("{here} empty_ifcmp"));
                }
                collect_hir_trace_details(then_body, format!("{here}.then"), details);
                if let Some(else_body) = else_body {
                    collect_hir_trace_details(else_body, format!("{here}.else"), details);
                }
            }
            HirNode::Block(children) => {
                collect_hir_trace_details(children, format!("{here}.block"), details);
            }
            HirNode::While { body, .. } => {
                details.push(format!("{here} while body_len={}", body.len()));
                collect_hir_trace_details(body, format!("{here}.while"), details);
            }
            HirNode::DoWhile { body, .. } => {
                details.push(format!("{here} dowhile body_len={}", body.len()));
                collect_hir_trace_details(body, format!("{here}.dowhile"), details);
            }
            HirNode::For { body, .. } => {
                details.push(format!("{here} for body_len={}", body.len()));
                collect_hir_trace_details(body, format!("{here}.for"), details);
            }
            HirNode::Switch { cases, default, .. } => {
                for (case_idx, (_, body, _)) in cases.iter().enumerate() {
                    collect_hir_trace_details(body, format!("{here}.case{case_idx}"), details);
                }
                if let Some(default) = default {
                    collect_hir_trace_details(default, format!("{here}.default"), details);
                }
            }
            HirNode::GuardedIf {
                then_body,
                else_body,
                ..
            } => {
                collect_hir_trace_details(then_body, format!("{here}.guard_then"), details);
                collect_hir_trace_details(else_body, format!("{here}.guard_else"), details);
            }
            HirNode::TryCatch {
                try_body,
                catch_arms,
            } => {
                collect_hir_trace_details(try_body, format!("{here}.try"), details);
                for (arm_idx, (_, body)) in catch_arms.iter().enumerate() {
                    collect_hir_trace_details(body, format!("{here}.catch{arm_idx}"), details);
                }
            }
            HirNode::TryFinally {
                try_body,
                finally_body,
            } => {
                collect_hir_trace_details(try_body, format!("{here}.try"), details);
                collect_hir_trace_details(finally_body, format!("{here}.finally"), details);
            }
            HirNode::TryExcept {
                try_body,
                except_body,
                ..
            } => {
                collect_hir_trace_details(try_body, format!("{here}.try"), details);
                collect_hir_trace_details(except_body, format!("{here}.except"), details);
            }
            HirNode::Commented { inner, .. } => {
                collect_hir_trace_details(
                    std::slice::from_ref(inner.as_ref()),
                    format!("{here}.commented"),
                    details,
                );
            }
            _ => {}
        }
    }
}
