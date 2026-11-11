//! pipeline: decompile.

use super::*;

pub fn decompile_function_with_symbols(
    image: &BinaryImage,
    lifter: &dyn Lifter,
    entry: &FunctionEntry,
    emit: EmitFormat,
    config: &PipelineConfig,
    dwarf: Option<&DwarfInfo>,
    discovered: &[FunctionEntry],
    rtti: Option<&unlace_loader::RttiInfo>,
) -> Result<String> {
    let _function_span = function_span(entry);
    let _profile_function = profile_pipeline_stage("pipeline.function", entry);
    profiling::record_items("pipeline.function", 1);
    let deadline = Instant::now() + config.timeout;
    if pipeline_trace_enabled() {
        tracing::debug!(
            target: "unlace::pipeline",
            "func={} addr=0x{:x} size=0x{:x} emit={emit:?} timeout_ms={} start",
            entry.name,
            entry.addr,
            entry.size,
            config.timeout.as_millis(),
        );
    }

    let flirt_name = config
        .symbol_context
        .as_deref()
        .map(|context| context.flirt_calls.get(&entry.addr).map(|m| m.name.clone()))
        .unwrap_or_else(|| {
            flirt_match_detailed_with_config(image, entry, &config.flirt).map(|m| m.name)
        });
    let flirt_entry;
    let entry = match flirt_name {
        Some(name) => {
            flirt_entry = FunctionEntry {
                name,
                ..entry.clone()
            };
            &flirt_entry
        }
        None => entry,
    };

    let t = Instant::now();
    pipeline_trace_start(&entry.name, "lift");
    let mut ir_func = {
        let _profile_stage = profile_pipeline_stage("pipeline.lift", entry);
        lift_function(image, lifter, entry)?
    };
    pipeline_trace_ir(&entry.name, "lift", t, deadline, &ir_func);

    let t = Instant::now();
    pipeline_trace_start(&entry.name, "merge-linear-blocks");
    let _merges = {
        let _profile_stage = profile_pipeline_stage("pipeline.merge-linear-blocks", entry);
        unlace_struct::merge_linear_blocks(&mut ir_func)
    };
    pipeline_trace_ir(&entry.name, "merge-linear-blocks", t, deadline, &ir_func);

    let t = Instant::now();
    pipeline_trace_start(&entry.name, "tail-duplicate");
    let _dups = {
        let _profile_stage = profile_pipeline_stage("pipeline.tail-duplicate", entry);
        unlace_struct::tail_duplicate_aggressive(&mut ir_func)
    };
    pipeline_trace_ir(&entry.name, "tail-duplicate", t, deadline, &ir_func);

    let t = Instant::now();
    pipeline_trace_start(&entry.name, "split-irreducible");
    let _splits = {
        let _profile_stage = profile_pipeline_stage("pipeline.split-irreducible", entry);
        unlace_struct::split_irreducible_entries(&mut ir_func)
    };
    pipeline_trace_ir(&entry.name, "split-irreducible", t, deadline, &ir_func);

    let t = Instant::now();
    pipeline_trace_start(&entry.name, "x87-top");
    let _x87_rewrites = {
        let _profile_stage = profile_pipeline_stage("pipeline.x87-top", entry);
        unlace_passes::rewrite_x87_top(&mut ir_func)
    };
    pipeline_trace_ir(&entry.name, "x87-top", t, deadline, &ir_func);

    pipeline_trace_start(&entry.name, "timeout-check-after-lift");
    check_timeout(deadline, &entry.name)?;
    pipeline_trace_done(
        &entry.name,
        "timeout-check-after-lift",
        Instant::now(),
        deadline,
    );

    let t = Instant::now();
    pipeline_trace_start(&entry.name, "build-ssa");
    let mut ssa = {
        let _profile_stage = profile_pipeline_stage("pipeline.build-ssa", entry);
        unlace_ir::ssa::build_ssa(ir_func)
    };
    // Batch 2: tag the SSA function with its target arch so stack-recovery
    // passes consult the right [`unlace_ir::stack::StackSpec`]. Previously
    // every non-x86 binary fell through to a hard-coded RSP=32 lookup and
    // produced `stack_vars.len() == 0`.
    ssa.arch = image.arch;
    ssa.os_abi = image.os_abi;
    ssa.data_items = data_items_for_ssa(image, &ssa);
    pipeline_trace_ssa(&entry.name, "build-ssa", t, deadline, &ssa);

    let t = Instant::now();
    pipeline_trace_start(&entry.name, "debug-info-overlay");
    {
        let _profile_stage = profile_pipeline_stage("pipeline.debug-info-overlay", entry);
        if let Some(dwarf_info) = dwarf {
            apply_dwarf_to_ssa(&mut ssa, dwarf_info, entry);
        }
        apply_pdb_debug_to_ssa(&mut ssa, image, entry);

        populate_eh_landing_pads(image, entry, &mut ssa, rtti);
    }
    pipeline_trace_ssa(&entry.name, "debug-info-overlay", t, deadline, &ssa);

    warn_if_large_ir(&entry.name, &ssa);
    pipeline_trace_start(&entry.name, "timeout-check-after-ssa");
    check_timeout(deadline, &entry.name)?;
    pipeline_trace_done(
        &entry.name,
        "timeout-check-after-ssa",
        Instant::now(),
        deadline,
    );

    // Batch 1: build the call-target VA → name resolver *before* the pass
    // pipeline so symbol-pattern-gated passes (NoreturnDetectPass,
    // RustPanicPass) can match against PLT/import names. The leaked
    // `&'static str`s previously built only for `detect_go_defer` are now
    // also reused as the resolver backing store.
    let t_pre_pass = Instant::now();
    pipeline_trace_start(&entry.name, "pre-pass-analysis");
    let profile_pre_pass = profile_pipeline_stage("pipeline.pre-pass-analysis", entry);
    let owned_symbol_context = config
        .symbol_context
        .is_none()
        .then(|| build_symbol_context_with_config(image, discovered, &config.flirt));
    let symbol_context = config
        .symbol_context
        .as_deref()
        .or(owned_symbol_context.as_ref())
        .expect("symbol context is present");
    let symbols = &symbol_context.symbols;
    let flirt_map = &symbol_context.flirt_calls;
    let stable_symbol_names = &symbol_context.stable_symbol_names;
    {
        let _profile_stage = profile_pipeline_stage("pipeline.symbol-table", entry);
        profiling::event_fields(
            "pipeline.symbol-table.reuse",
            [
                TraceField::text("function", entry.name.clone()),
                TraceField::count("symbols", symbols.len() as u64),
            ],
        );
    }
    ssa.variadic = detect_variadic(&ssa, entry, symbols, dwarf);
    let estimated_arities = {
        let _profile_stage = profile_pipeline_stage("pipeline.estimate-param-counts", entry);
        let arities = estimate_direct_target_arities(image, lifter, discovered, &ssa);
        profiling::record_items("pipeline.estimate-param-counts", arities.len() as u64);
        arities
    };

    let resolve_name =
        |addr: u64| -> Option<&'static str> { stable_symbol_names.get(&addr).copied() };
    let callee_arity = |addr: u64| -> Option<CalleeArity> {
        dwarf
            .and_then(|d| d.functions.get(&addr))
            .map(|f| CalleeArity {
                params: f.params.len(),
                variadic: f.variadic,
            })
            .or_else(|| estimated_arities.get(&addr).copied())
    };

    let _call_args_pre = {
        let _profile_stage = profile_pipeline_stage("pipeline.recover-call-args", entry);
        recover_direct_call_args_with_param_counts(
            &mut ssa,
            &resolve_name,
            &callee_arity,
            &symbol_context.call_site_signatures,
        )
    };

    // Batch 6 (pre-pass): parse printf-family format strings *before*
    // the optimization pipeline runs. The IR pattern that
    // `find_constant_arg` relies on (`Copy(arg_reg, t)` where `t` is
    // defined by `IntAdd(image_base, const)`) is destroyed by copyprop /
    // sccp, so the call must precede `run_passes_with_resolver`. The
    // post-pass call below is kept (additive merge) to cover any sites
    // the pre-pass missed.
    let _variadic_types_pre = {
        let _profile_stage = profile_pipeline_stage("pipeline.parse-printf-pre", entry);
        parse_printf_format_strings(
            &mut ssa,
            &|addr| stable_symbol_names.get(&addr).copied(),
            &image.string_table,
        )
    };
    drop(profile_pre_pass);
    pipeline_trace_ssa(&entry.name, "pre-pass-analysis", t_pre_pass, deadline, &ssa);

    let t_jt_pre = Instant::now();
    pipeline_trace_start(&entry.name, "jump-table-pre");
    {
        let _profile_stage = profile_pipeline_stage("pipeline.jump-table-pre", entry);
        resolve_jump_tables_for_pipeline(&mut ssa, image, &config.options.passes);
    }
    pipeline_trace_ssa(&entry.name, "jump-table-pre", t_jt_pre, deadline, &ssa);

    let t_passes = Instant::now();
    pipeline_trace_start(&entry.name, "run-passes");
    let pass_result = {
        let _profile_stage = profile_pipeline_stage("pipeline.run-passes", entry);
        run_passes_with_resolver_until(&mut ssa, &resolve_name, deadline, &config.options.passes)
    };
    if let Err(e) = pass_result {
        profiling::diagnostic(
            "warn",
            "pass pipeline failed; emitting unoptimized",
            [
                TraceField::text("function", entry.name.clone()),
                TraceField::text("err", format!("{e:#}")),
            ],
        );
        if pipeline_trace_enabled() {
            tracing::debug!(
                target: "unlace::pipeline",
                "func={} stage=run-passes error={e:#}",
                entry.name
            );
        }
    }
    pipeline_trace_ssa(&entry.name, "run-passes", t_passes, deadline, &ssa);

    pipeline_trace_start(&entry.name, "timeout-check-after-passes");
    check_timeout(deadline, &entry.name)?;
    pipeline_trace_done(
        &entry.name,
        "timeout-check-after-passes",
        Instant::now(),
        deadline,
    );

    let t = Instant::now();
    pipeline_trace_start(&entry.name, "post-pass-annotations");
    let profile_post_annotations = profile_pipeline_stage("pipeline.post-pass-annotations", entry);

    {
        let _profile_stage = profile_pipeline_stage("pipeline.objc-dispatch", entry);
        run_objc_dispatch_pass(
            &mut ssa,
            symbol_context.objc_dispatch_pass.as_deref(),
            &config.options.passes,
        );
    }
    {
        let _profile_stage = profile_pipeline_stage("pipeline.cpp-virtual-calls", entry);
        unlace_passes::resolve_virtual_calls(&mut ssa, rtti);
    }

    if !symbols.is_empty() {
        let _profile_stage = profile_pipeline_stage("pipeline.detect-go-defer", entry);
        ssa.go_defer_sites = detect_go_defer(&ssa, |addr| stable_symbol_names.get(&addr).copied())
            .into_iter()
            .map(|site| unlace_ir::ssa::GoDeferSite {
                defer_block: site.defer_block,
                deferred_func: site.deferred_func,
                has_recover: site.has_recover,
            })
            .collect();
    }

    // t229: classify Call targets against the libc family roster
    // (memcpy / malloc / printf-family aliases) and stash the canonical
    // names on ssa.libc_call_annotations. The closure resolves the
    // constant-target VA of each Call against the just-built symbol
    // table — the same map the printer will use, so a name only matches
    // here if the printer would also have rendered it.
    let _libc_annotations_added = {
        let _profile_stage = profile_pipeline_stage("pipeline.annotate-libc", entry);
        annotate_libc_calls(&mut ssa, &|addr| symbols.get(&addr).cloned())
    };

    // Batch 6: recover per-slot variadic argument types for printf-style
    // call sites. Walks each Call to a variadic libc function, resolves
    // the format-string argument's constant address through the string
    // table, parses the conversions, and stashes the inferred
    // `PrimitiveType` list in `ssa.variadic_call_types`. The resolver is
    // the same `&'static str` symbol map the noreturn/rust-panic passes
    // used; the string table is the loader's read-only data map.
    let _variadic_types_added = {
        let _profile_stage = profile_pipeline_stage("pipeline.parse-printf-post", entry);
        parse_printf_format_strings(
            &mut ssa,
            &|addr| stable_symbol_names.get(&addr).copied(),
            &image.string_table,
        )
    };

    // t298 — Go iface-to-concrete devirtualization. When a `Callind`
    // target resolves to a unique method pointer recorded in a
    // `runtime.itab`, surface the concrete method symbol at print time.
    let go_iface_devirtualized_calls = {
        let _profile_stage = profile_pipeline_stage("pipeline.go-iface-devirt", entry);
        collect_go_iface_devirtualized_calls_with_methods(
            &ssa,
            symbols,
            &symbol_context.go_itab_methods,
        )
    };
    let cxx_eh_actions = {
        let _profile_stage = profile_pipeline_stage("pipeline.cxx-eh-actions", entry);
        collect_cxx_eh_actions(&ssa, symbols)
    };

    // Re-key (BlockId, insn_idx) → canonical name to (call_va → canonical
    // name) for the printer, which sees instructions only by their VA.
    let mut libc_call_canonical: BTreeMap<u64, String> = BTreeMap::new();
    for (&(bid, idx), canonical) in &ssa.libc_call_annotations {
        if let Some(block) = ssa.function.blocks.get(&bid)
            && let Some(insn) = block.insns.get(idx)
        {
            libc_call_canonical.insert(insn.addr, canonical.clone());
        }
    }

    let mut printer_annotations = config
        .annotations
        .as_ref()
        .map(|db| build_printer_annotations(db, entry.addr))
        .unwrap_or_default();
    printer_annotations.go_defer_sites = ssa.go_defer_sites.clone();
    let hash_pass = unlace_passes::StringHashSwitchPass::from_strings(&image.string_table);
    printer_annotations.string_hash_table = hash_pass.hash_table().clone();
    printer_annotations.readonly_scalars = {
        let _profile_stage = profile_pipeline_stage("pipeline.collect-readonly-scalars", entry);
        collect_readonly_scalars_for_ssa(image, &ssa)
    };
    if let Some(pdb_types) = image.pdb_types.as_ref() {
        printer_annotations.pdb_constants_by_value = pdb_types.constants_by_value.clone();
    }
    let objc_classes = {
        let _profile_stage = profile_pipeline_stage("pipeline.scan-objc-classlist", entry);
        symbol_context.objc_classes.clone()
    };
    printer_annotations.objc_classes = objc_classes;
    printer_annotations.objc_categories = symbol_context.objc_categories.clone();
    printer_annotations.go_interfaces = image.go_types.clone();
    printer_annotations.libc_call_canonical = libc_call_canonical;
    printer_annotations.go_iface_devirtualized_calls = go_iface_devirtualized_calls;
    printer_annotations.cxx_eh_actions = cxx_eh_actions;
    printer_annotations.msvc_rtti = image
        .msvc_rtti
        .clone()
        .filter(|rtti| !rtti.classes.is_empty());
    // §5.5: surface per-callee FLIRT confidence so the C printer can
    // emit `/* flirt: <name>@<conf> */` trailing comments at Call sites.
    printer_annotations.flirt_call_annotations = flirt_map
        .iter()
        .map(|(addr, fc)| (*addr, (fc.name.clone(), fc.confidence)))
        .collect();
    printer_annotations.recover_triangular_sum_loop =
        unlace_passes::detect_triangular_sum_reduction(&ssa).is_some();
    let printer_annotations = Some(printer_annotations);
    drop(profile_post_annotations);
    pipeline_trace_ssa(&entry.name, "post-pass-annotations", t, deadline, &ssa);

    // Batch 9: section-aware second phase of jump-table recovery.
    // `IndirectJumpResolvePass` (run as a post-loop one-shot above) has
    // already detected candidate `Branchind` table dispatches and stashed
    // their bases on `ssa.resolved_jump_tables`; here we walk the binary
    // image to decode the concrete target addresses out of `.rodata`.
    // No-op when no candidates were detected.
    let t_jt_post = Instant::now();
    pipeline_trace_start(&entry.name, "jump-table-post");
    let jt_sections = {
        let _profile_stage = profile_pipeline_stage("pipeline.jump-table-post", entry);
        resolve_jump_tables_for_pipeline(&mut ssa, image, &config.options.passes);
        build_jump_table_section_views(image)
    };
    pipeline_trace_ssa(&entry.name, "jump-table-post", t_jt_post, deadline, &ssa);

    let t_unreachable = Instant::now();
    pipeline_trace_start(&entry.name, "unreachable-block-elim");
    {
        let _profile_stage = profile_pipeline_stage("pipeline.unreachable-block-elim", entry);
        remove_unreachable_blocks_for_pipeline(&mut ssa, &config.options.passes);
    }
    pipeline_trace_ssa(
        &entry.name,
        "unreachable-block-elim",
        t_unreachable,
        deadline,
        &ssa,
    );

    let t_emit = Instant::now();
    pipeline_trace_start(&entry.name, "emit-output");
    let result = {
        let _profile_stage = profile_pipeline_stage("pipeline.emit-output", entry);
        emit_output(
            emit,
            &ssa,
            dwarf,
            symbols,
            &image.string_table,
            rtti,
            &config.options,
            printer_annotations.as_ref(),
            &jt_sections,
            Some(deadline),
        )
    };
    pipeline_trace_done(&entry.name, "emit-output", t_emit, deadline);
    result
}

pub(super) fn check_timeout(deadline: Instant, func_name: &str) -> Result<()> {
    if Instant::now() >= deadline {
        bail!("timeout exceeded for function '{func_name}'");
    }
    Ok(())
}

pub(super) fn check_output_deadline(
    deadline: Option<Instant>,
    func_name: &str,
    stage: &str,
) -> Result<()> {
    if let Some(deadline) = deadline
        && Instant::now() >= deadline
    {
        bail!("timeout exceeded for function '{func_name}' during {stage}");
    }
    Ok(())
}
