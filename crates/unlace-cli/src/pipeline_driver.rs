//! pipeline: driver.

use super::*;

/// Phase-1 helper for interproc batch: lift a function, build SSA, apply DWARF
/// and EH info, and run the pass pipeline (with symbol resolver). Returns the
/// fully-optimised `SsaFunction` ready for interprocedural refinement and later
/// emission.
///
/// This deliberately stops *before* `emit_output` — the caller is expected to
/// collect all results into a `BTreeMap<u64, SsaFunction>`, run
/// [`run_whole_program_interproc`] over the map, and then call
/// [`emit_function_interproc`] on each entry.
/// Enter the `function{name, addr}` span that scopes all tracing for one
/// function's analysis, so `[function{name=...}]` filter directives select it.
pub fn function_span(entry: &FunctionEntry) -> tracing::span::EnteredSpan {
    tracing::info_span!(
        target: "unlace::function",
        "function",
        name = %entry.name,
        addr = %format_args!("{:#x}", entry.addr),
    )
    .entered()
}

pub fn lift_and_run_passes(
    image: &BinaryImage,
    lifter: &dyn Lifter,
    entry: &FunctionEntry,
    config: &PipelineConfig,
    dwarf: Option<&DwarfInfo>,
    rtti: Option<&unlace_loader::RttiInfo>,
    discovered: &[FunctionEntry],
) -> Result<SsaFunction> {
    let _function_span = function_span(entry);
    let _profile_function = profile_pipeline_stage("interproc.lift-and-run-passes", entry);
    let deadline = Instant::now() + config.timeout;

    let mut ir_func = {
        let _profile_stage = profile_pipeline_stage("pipeline.lift", entry);
        lift_function(image, lifter, entry)?
    };
    {
        let _profile_stage = profile_pipeline_stage("pipeline.merge-linear-blocks", entry);
        unlace_struct::merge_linear_blocks(&mut ir_func);
    }
    {
        let _profile_stage = profile_pipeline_stage("pipeline.tail-duplicate", entry);
        unlace_struct::tail_duplicate_aggressive(&mut ir_func);
    }
    {
        let _profile_stage = profile_pipeline_stage("pipeline.split-irreducible", entry);
        unlace_struct::split_irreducible_entries(&mut ir_func);
    }
    // Resolve x87 ST(i) stack-relative references to concrete physical slots
    // before SSA construction (no-op for non-x87 functions).
    {
        let _profile_stage = profile_pipeline_stage("pipeline.x87-top", entry);
        unlace_passes::rewrite_x87_top(&mut ir_func);
    }

    check_timeout(deadline, &entry.name)?;

    let mut ssa = {
        let _profile_stage = profile_pipeline_stage("pipeline.build-ssa", entry);
        unlace_ir::ssa::build_ssa(ir_func)
    };
    ssa.arch = image.arch;
    ssa.os_abi = image.os_abi;
    ssa.data_items = data_items_for_ssa(image, &ssa);

    {
        let _profile_stage = profile_pipeline_stage("pipeline.debug-info-overlay", entry);
        if let Some(dwarf_info) = dwarf {
            apply_dwarf_to_ssa(&mut ssa, dwarf_info, entry);
        }
        apply_pdb_debug_to_ssa(&mut ssa, image, entry);

        populate_eh_landing_pads(image, entry, &mut ssa, rtti);
    }
    warn_if_large_ir(&entry.name, &ssa);
    check_timeout(deadline, &entry.name)?;

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

    // Batch 6 (pre-pass): parse printf-family format strings against the
    // raw post-SSA IR. The pre-pass run is load-bearing because the
    // copyprop / sccp clusters inside `run_passes_with_resolver` fold the
    // `Copy(reg, …) ; IntAdd(base, const)` pattern that
    // `find_constant_arg` keys on — once those passes run, the format
    // string's absolute address is no longer reachable from the call
    // site. The post-pass call below remains for completeness and to
    // capture sites the pre-pass missed; `parse_printf_format_strings`
    // is additive and never clobbers existing entries.
    let _variadic_types_pre = {
        let _profile_stage = profile_pipeline_stage("pipeline.parse-printf-pre", entry);
        parse_printf_format_strings(
            &mut ssa,
            &|addr| stable_symbol_names.get(&addr).copied(),
            &image.string_table,
        )
    };
    drop(profile_pre_pass);

    {
        let _profile_stage = profile_pipeline_stage("pipeline.jump-table-pre", entry);
        resolve_jump_tables_for_pipeline(&mut ssa, image, &config.options.passes);
    }

    let pass_result = {
        let _profile_stage = profile_pipeline_stage("pipeline.run-passes", entry);
        run_passes_with_resolver_until(&mut ssa, &resolve_name, deadline, &config.options.passes)
    };
    if let Err(e) = pass_result {
        profiling::diagnostic(
            "warn",
            "pass pipeline failed; continuing with unoptimized",
            [
                TraceField::text("function", entry.name.clone()),
                TraceField::text("err", e.to_string()),
            ],
        );
    }

    check_timeout(deadline, &entry.name)?;
    Ok(ssa)
}

pub(super) const X86_SYSV_PARAM_REGS: [u64; 6] = [56, 48, 16, 8, 64, 72];

/// Arity of every direct-call target of `ssa`, estimated from the target's
/// own lifted body: the `va_start` register save area when the target is
/// variadic, otherwise (x86-64 only) the argument registers it reads before
/// writing them.
pub(super) fn estimate_direct_target_arities(
    image: &BinaryImage,
    lifter: &dyn Lifter,
    discovered: &[FunctionEntry],
    ssa: &SsaFunction,
) -> BTreeMap<u64, CalleeArity> {
    if !matches!(image.arch, ArchId::X86_64 | ArchId::AArch64) {
        return BTreeMap::new();
    }

    let entries: BTreeMap<u64, &FunctionEntry> =
        discovered.iter().map(|entry| (entry.addr, entry)).collect();
    let mut out = BTreeMap::new();
    for target in direct_call_targets(ssa) {
        let entry = entries
            .get(&target)
            .map(|entry| (*entry).clone())
            .or_else(|| {
                image.symbols.get(&target).and_then(|symbol| {
                    (symbol.kind == SymbolKind::Function).then(|| FunctionEntry {
                        name: symbol.name.clone(),
                        addr: symbol.addr,
                        size: symbol.size,
                    })
                })
            });
        let Some(entry) = entry else {
            continue;
        };
        let Ok(func) = lift_function(image, lifter, &entry) else {
            continue;
        };
        let arity = match unlace_passes::detect_register_save_area(&func, image.arch, image.os_abi)
        {
            Some(variadic) => CalleeArity {
                params: variadic.fixed_params,
                variadic: true,
            },
            None if image.arch == ArchId::X86_64 => {
                CalleeArity::fixed(estimate_sysv_param_count(&func))
            }
            None => continue,
        };
        tracing::debug!(
            target: "unlace::call_args",
            "estimated-arity target=0x{target:x} name={} params={} variadic={}",
            entry.name,
            arity.params,
            arity.variadic
        );
        out.insert(target, arity);
    }
    out
}

/// Whether the function being analyzed takes `...`. Debug info states the
/// prototype outright; without it, a known name (libc, also reached through
/// FLIRT) or the prologue's register save area decides.
pub(super) fn detect_variadic(
    ssa: &SsaFunction,
    entry: &FunctionEntry,
    symbols: &BTreeMap<u64, String>,
    dwarf: Option<&DwarfInfo>,
) -> Option<unlace_ir::ssa::Variadic> {
    if let Some(debug) = dwarf.and_then(|d| d.functions.get(&entry.addr)) {
        return debug.variadic.then_some(unlace_ir::ssa::Variadic {
            fixed_params: debug.params.len(),
        });
    }
    let name = symbols.get(&entry.addr).unwrap_or(&entry.name);
    unlace_passes::detect_variadic_definition(name, &ssa.function, ssa.arch, ssa.os_abi)
}

pub(super) fn direct_call_targets(ssa: &SsaFunction) -> BTreeSet<u64> {
    let mut targets = BTreeSet::new();
    for block in ssa.function.blocks.values() {
        for insn in &block.insns {
            if matches!(insn.op, IrOp::Call | IrOp::Branch)
                && let Some(target) = insn.inputs.first()
                && target.space == SpaceId::Const
            {
                targets.insert(target.offset);
            }
        }
    }
    targets
}

pub(super) fn estimate_sysv_param_count(func: &Function) -> usize {
    let mut read_before_def = [false; 6];
    let mut defined = [false; 6];

    for block in func.blocks.values() {
        for insn in &block.insns {
            for input in &insn.inputs {
                if let Some(index) = sysv_param_reg_index(input)
                    && !defined[index]
                {
                    read_before_def[index] = true;
                }
            }
            if let Some(output) = insn.output
                && let Some(index) = sysv_param_reg_index(&output)
            {
                defined[index] = true;
            }
        }
    }

    read_before_def.iter().take_while(|&&read| read).count()
}

pub(super) fn sysv_param_reg_index(vn: &Varnode) -> Option<usize> {
    if vn.space != SpaceId::Register {
        return None;
    }
    X86_SYSV_PARAM_REGS
        .iter()
        .position(|&offset| offset == vn.offset)
}

/// Phase-3 helper for interproc batch: emit output from a refined `SsaFunction`.
pub fn emit_function_interproc(
    ssa: &mut SsaFunction,
    image: &BinaryImage,
    entry: &FunctionEntry,
    emit: EmitFormat,
    config: &PipelineConfig,
    dwarf: Option<&DwarfInfo>,
    discovered: &[FunctionEntry],
    rtti: Option<&unlace_loader::RttiInfo>,
) -> Result<String> {
    let _function_span = function_span(entry);
    let _profile_function = profile_pipeline_stage("interproc.emit-function", entry);
    let profile_post_annotations = profile_pipeline_stage("pipeline.post-pass-annotations", entry);
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
    {
        let _profile_stage = profile_pipeline_stage("pipeline.objc-dispatch", entry);
        run_objc_dispatch_pass(
            ssa,
            symbol_context.objc_dispatch_pass.as_deref(),
            &config.options.passes,
        );
    }
    {
        let _profile_stage = profile_pipeline_stage("pipeline.cpp-virtual-calls", entry);
        unlace_passes::resolve_virtual_calls(ssa, rtti);
    }
    if !symbols.is_empty() {
        let _profile_stage = profile_pipeline_stage("pipeline.detect-go-defer", entry);
        ssa.go_defer_sites = detect_go_defer(ssa, |addr| stable_symbol_names.get(&addr).copied())
            .into_iter()
            .map(|site| unlace_ir::ssa::GoDeferSite {
                defer_block: site.defer_block,
                deferred_func: site.deferred_func,
                has_recover: site.has_recover,
            })
            .collect();
    }
    let _libc = {
        let _profile_stage = profile_pipeline_stage("pipeline.annotate-libc", entry);
        annotate_libc_calls(ssa, &|addr| symbols.get(&addr).cloned())
    };
    let _var = {
        let _profile_stage = profile_pipeline_stage("pipeline.parse-printf-post", entry);
        parse_printf_format_strings(
            ssa,
            &|addr| stable_symbol_names.get(&addr).copied(),
            &image.string_table,
        )
    };
    let go_iface_devirtualized_calls = {
        let _profile_stage = profile_pipeline_stage("pipeline.go-iface-devirt", entry);
        collect_go_iface_devirtualized_calls_with_methods(
            ssa,
            symbols,
            &symbol_context.go_itab_methods,
        )
    };
    let cxx_eh_actions = {
        let _profile_stage = profile_pipeline_stage("pipeline.cxx-eh-actions", entry);
        collect_cxx_eh_actions(ssa, symbols)
    };
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
        collect_readonly_scalars_for_ssa(image, ssa)
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
        unlace_passes::detect_triangular_sum_reduction(ssa).is_some();
    let printer_annotations = Some(printer_annotations);
    drop(profile_post_annotations);
    let jt_sections = {
        let _profile_stage = profile_pipeline_stage("pipeline.jump-table-post", entry);
        resolve_jump_tables_for_pipeline(ssa, image, &config.options.passes);
        build_jump_table_section_views(image)
    };
    {
        let _profile_stage = profile_pipeline_stage("pipeline.unreachable-block-elim", entry);
        remove_unreachable_blocks_for_pipeline(ssa, &config.options.passes);
    }
    {
        let _profile_stage = profile_pipeline_stage("pipeline.emit-output", entry);
        emit_output(
            emit,
            ssa,
            dwarf,
            symbols,
            &image.string_table,
            rtti,
            &config.options,
            printer_annotations.as_ref(),
            &jt_sections,
            None,
        )
    }
}

#[allow(dead_code)]
pub fn decompile_function(
    image: &BinaryImage,
    lifter: &dyn Lifter,
    entry: &FunctionEntry,
    emit: EmitFormat,
    config: &PipelineConfig,
    dwarf: Option<&DwarfInfo>,
) -> Result<String> {
    decompile_function_with_symbols(image, lifter, entry, emit, config, dwarf, &[], None)
}

/// Lazy lifting entry point (Batch 25): decompile *one* function from a
/// binary without driving the whole-binary pipeline.
///
/// Useful for interactive scenarios (LSP / editor integrations) where the caller
/// only wants the C output for the function under the cursor. We still
/// have to discover function boundaries (to satisfy callees and ABI
/// recovery), but the body of every other function never gets lifted.
///
/// `target_addr` selects the function by entry virtual address; the
/// closest discovered function start that is `<= target_addr` wins.
/// Returns the rendered C output on success.
pub fn decompile_one_function(
    image: &BinaryImage,
    target_addr: u64,
    emit: EmitFormat,
) -> Result<String> {
    decompile_one_function_cached(image, target_addr, emit, None, None)
}

/// `decompile_one_function` plus an optional persistent on-disk cache.
///
/// When `cache` is `Some`, the function:
/// 1. Computes `CacheKey { binary_sha256, function_addr, function_size, pipeline_revision }`.
/// 2. Looks up `cache.get(&key)`; on hit, returns the cached string.
/// 3. On miss, runs the pipeline and writes the resulting C string to
///    the cache.
///
/// `binary_sha256` is supplied by the caller so the hash is computed
/// once per binary (not once per function). `None` skips caching for
/// that call.
pub fn decompile_one_function_cached(
    image: &BinaryImage,
    target_addr: u64,
    emit: EmitFormat,
    cache: Option<&crate::cache::DiskCache>,
    binary_sha256: Option<&str>,
) -> Result<String> {
    let _profile_lazy = if profiling::is_enabled() {
        Some((
            profiling::phase("pipeline.lazy-decompile"),
            profiling::trace_fields(
                "pipeline.lazy-decompile",
                [
                    TraceField::addr("target_addr", target_addr),
                    TraceField::text("emit", format!("{emit:?}")),
                ],
            ),
        ))
    } else {
        None
    };
    let lifter = {
        let _profile_stage = profiling::phase("pipeline.lazy-get-lifter");
        unlace_lift::get_lifter(image.arch)?
    };
    let functions = {
        let _profile_stage = profiling::phase("pipeline.lazy-discover-functions");
        let functions = discover_functions(image, None)?;
        profiling::record_items("pipeline.lazy-discover-functions", functions.len() as u64);
        functions
    };

    let entry = {
        let _profile_stage = profiling::phase("pipeline.lazy-select-function");
        functions
            .iter()
            .filter(|f| f.addr <= target_addr)
            .max_by_key(|f| f.addr)
            .ok_or_else(|| {
                anyhow::anyhow!(
                    "no function at or below 0x{target_addr:x} (out of {} discovered)",
                    functions.len()
                )
            })?
    };
    profiling::event_fields(
        "pipeline.lazy-selected-function",
        [
            TraceField::text("function", entry.name.clone()),
            TraceField::addr("addr", entry.addr),
            TraceField::count("size", entry.size),
        ],
    );

    // Cache lookup before the heavy pipeline.
    let cache_key = match (cache, binary_sha256) {
        (Some(_), Some(sha)) => Some(crate::cache::CacheKey::new(sha, entry.addr, entry.size)),
        _ => None,
    };
    let _cache_lookup = profiling::phase("pipeline.lazy-cache-lookup");
    if let (Some(cache), Some(key)) = (cache, cache_key.as_ref())
        && let Ok(Some(body)) = cache.get(key)
        && let Ok(s) = std::str::from_utf8(&body)
    {
        profiling::event_fields(
            "pipeline.lazy-cache-hit",
            [
                TraceField::text("function", entry.name.clone()),
                TraceField::addr("addr", entry.addr),
                TraceField::text("digest", key.digest()),
            ],
        );
        return Ok(s.to_string());
    }
    drop(_cache_lookup);
    profiling::event_fields(
        "pipeline.lazy-cache-miss",
        [
            TraceField::text("function", entry.name.clone()),
            TraceField::addr("addr", entry.addr),
        ],
    );

    let config = PipelineConfig::default();
    let rendered = {
        let _profile_stage = profile_pipeline_stage("pipeline.lazy-run-function", entry);
        decompile_function(image, lifter.as_ref(), entry, emit, &config, None)?
    };

    if let (Some(cache), Some(key)) = (cache, cache_key.as_ref()) {
        let _profile_stage = profiling::phase("pipeline.lazy-cache-put");
        if let Err(e) = cache.put(key, rendered.as_bytes()) {
            profiling::diagnostic(
                "warn",
                "cache put failed",
                [
                    TraceField::text("digest", key.digest()),
                    TraceField::text("err", e.to_string()),
                ],
            );
        }
    }

    Ok(rendered)
}
