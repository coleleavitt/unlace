//! pipeline: symbols.

use super::*;

#[derive(Clone)]
pub struct SymbolContext {
    pub symbols: BTreeMap<u64, String>,
    pub flirt_calls: BTreeMap<u64, FlirtConfidence>,
    pub stable_symbol_names: BTreeMap<u64, &'static str>,
    pub objc_classes: Vec<unlace_loader::ObjcClass>,
    pub objc_categories: Vec<unlace_loader::ObjcCategory>,
    pub objc_dispatch_pass: Option<Arc<ObjcDispatchPass>>,
    pub go_itab_methods: BTreeSet<u64>,
    /// Prototypes guessed from every call site in the image, for callees no
    /// better source describes. Empty unless the context was built by
    /// [`build_shared_symbol_context`].
    pub call_site_signatures: unlace_ir::signature::FunctionSignatureRegistry,
}

impl SymbolContext {
    pub(super) fn new(
        symbols: BTreeMap<u64, String>,
        flirt_calls: BTreeMap<u64, FlirtConfidence>,
        objc_classes: Vec<unlace_loader::ObjcClass>,
        objc_categories: Vec<unlace_loader::ObjcCategory>,
        objc_dispatch_pass: Option<Arc<ObjcDispatchPass>>,
        go_itab_methods: BTreeSet<u64>,
    ) -> Self {
        let stable_symbol_names = symbols
            .iter()
            .map(|(&addr, name)| {
                (
                    addr,
                    Box::leak(name.clone().into_boxed_str()) as &'static str,
                )
            })
            .collect();
        Self {
            symbols,
            flirt_calls,
            stable_symbol_names,
            objc_classes,
            objc_categories,
            objc_dispatch_pass,
            go_itab_methods,
            call_site_signatures: Default::default(),
        }
    }
}

#[derive(Clone)]
pub struct PipelineConfig {
    pub timeout: Duration,
    /// Pass, structuring, and printer options from the configuration file.
    pub options: Arc<crate::config::Config>,
    /// User-authored annotations (function comments, custom names, …) loaded
    /// from a sidecar JSON file.  `None` when no sidecar was found.
    pub annotations: Option<crate::annotations::AnnotationDb>,
    /// FLIRT/SIG matching configuration shared by decompile, batch, and
    /// quality paths.
    pub flirt: FlirtConfig,
    /// Raw bytes of an external DWARF sidecar ELF (`--dwarf-sidecar`). When
    /// present, its debug info is merged into whatever the primary image
    /// yields, letting a stripped binary recover names/types.
    pub dwarf_sidecar: Option<Vec<u8>>,
    /// Whole-binary symbol/FLIRT context shared across per-function pipeline
    /// calls. Batch and decompile commands build this once; interactive callers
    /// can leave it unset and fall back to per-call construction.
    pub symbol_context: Option<Arc<SymbolContext>>,
}

impl Default for PipelineConfig {
    fn default() -> Self {
        Self {
            timeout: Duration::from_secs(30),
            options: Arc::default(),
            annotations: None,
            flirt: FlirtConfig::default(),
            dwarf_sidecar: None,
            symbol_context: None,
        }
    }
}

#[allow(dead_code)]
pub fn build_symbol_table(image: &BinaryImage) -> BTreeMap<u64, String> {
    build_symbol_table_with_functions(image, &[])
}

pub fn build_symbol_table_with_functions(
    image: &BinaryImage,
    discovered: &[FunctionEntry],
) -> BTreeMap<u64, String> {
    build_symbol_table_and_flirt_with_functions(image, discovered).0
}

/// §5.5: extended variant of [`build_symbol_table_with_functions`] that
/// also returns the per-function FLIRT confidence map keyed by function
/// entry address. Downstream consumers (printer annotations, quality
/// counters) use the map to surface confidence at call sites; callers
/// that don't need it should keep using `build_symbol_table_with_functions`
/// (a thin wrapper that drops the second tuple element).
pub fn build_symbol_table_and_flirt_with_functions(
    image: &BinaryImage,
    discovered: &[FunctionEntry],
) -> (BTreeMap<u64, String>, BTreeMap<u64, FlirtConfidence>) {
    let config = FlirtConfig::default();
    build_symbol_table_and_flirt_with_config(image, discovered, &config)
}

pub fn build_symbol_table_and_flirt_with_config(
    image: &BinaryImage,
    discovered: &[FunctionEntry],
    flirt_config: &FlirtConfig,
) -> (BTreeMap<u64, String>, BTreeMap<u64, FlirtConfidence>) {
    let context = build_symbol_context_with_config(image, discovered, flirt_config);
    (context.symbols, context.flirt_calls)
}

/// The symbol context shared by every function of one run: symbols and
/// FLIRT names ([`build_symbol_context_with_config`]) plus the prototypes
/// guessed from every call site in the image, which takes one extra lift of
/// each function.
pub fn build_shared_symbol_context(
    image: &BinaryImage,
    lifter: &dyn Lifter,
    discovered: &[FunctionEntry],
    flirt_config: &FlirtConfig,
) -> SymbolContext {
    let mut context = build_symbol_context_with_config(image, discovered, flirt_config);
    context.call_site_signatures = {
        let _span = profiling::phase("symbol-context.call-site-guess");
        call_site_guess::guess_call_site_signatures(image, lifter, discovered)
    };
    context
}

pub fn build_symbol_context_with_config(
    image: &BinaryImage,
    discovered: &[FunctionEntry],
    flirt_config: &FlirtConfig,
) -> SymbolContext {
    let mut table = BTreeMap::new();
    let mut flirt = BTreeMap::new();
    {
        let _span = profiling::phase("symbol-context.discovered-functions");
        for entry in discovered {
            table.insert(entry.addr, entry.name.clone());
        }
        profiling::record_items(
            "symbol-context.discovered-functions",
            discovered.len() as u64,
        );
    }
    {
        let _span = profiling::phase("symbol-context.loader-symbols");
        let mut function_symbols = 0u64;
        for (addr, sym) in &image.symbols {
            if sym.kind == SymbolKind::Function {
                table.insert(*addr, sym.name.clone());
                function_symbols += 1;
            }
        }
        profiling::record_items("symbol-context.loader-symbols", function_symbols);
    }
    {
        let _span = profiling::phase("symbol-context.plt-symbols");
        for (addr, name) in &image.plt_symbols {
            table.insert(*addr, name.clone());
        }
        profiling::record_items("symbol-context.plt-symbols", image.plt_symbols.len() as u64);
    }
    // Batch 20: overlay FLIRT/SIG-recovered canonical names. Replaces
    // synthetic `sub_XXXX` stub names with the matched library name
    // (e.g. `memcpy`, `strlen`) so call sites in other functions render
    // the recognised name rather than the stripped-binary placeholder.
    // We only overwrite names that look like stripped-binary stubs;
    // application code keeps its original name.
    //
    // §5.5: collect the full `FlirtConfidence` per entry address so
    // downstream printer annotations and quality counters can see the
    // confidence + signature_id without re-running the matcher.
    if flirt_config.should_scan_for_arch(image.arch) {
        let _span = profiling::phase("symbol-context.flirt-scan");
        let eligible: Vec<&FunctionEntry> = discovered
            .iter()
            .filter(|entry| is_flirt_eligible_name(&entry.name))
            .collect();
        let candidates: Vec<u64> = eligible.iter().map(|entry| entry.addr).collect();
        let mut explicit = flirt_config.sig_hits(image, &candidates);
        let resolved = flirt_resolved_names_with_config(image, flirt_config);
        let mut matched = 0u64;
        for entry in &eligible {
            let bundled = bundled_flirt_match(image, entry, &resolved, flirt_config);
            if let Some(fc) = prefer_flirt_match(explicit.remove(&entry.addr), bundled) {
                tracing::debug!(
                    target: "unlace::flirt",
                    addr = format_args!("{:#x}", entry.addr),
                    name = %fc.name,
                    confidence = fc.confidence,
                    "named"
                );
                table.insert(entry.addr, fc.name.clone());
                flirt.insert(entry.addr, fc);
                matched += 1;
            }
        }
        let eligible = eligible.len() as u64;
        tracing::info!(
            target: "unlace::flirt",
            functions = discovered.len(),
            eligible,
            matched,
            "FLIRT scan"
        );
        profiling::record_items("symbol-context.flirt-scan", eligible);
        profiling::diagnostic(
            "info",
            "symbol-context FLIRT scan complete",
            [
                TraceField::text("arch", image.arch.to_string()),
                TraceField::count("eligible", eligible),
                TraceField::count("matched", matched),
            ],
        );
    } else if flirt_config.enabled() {
        profiling::diagnostic(
            "info",
            "skipping bundled FLIRT scan for unsupported arch without explicit signatures",
            [
                TraceField::text("arch", image.arch.to_string()),
                TraceField::count("functions", discovered.len() as u64),
            ],
        );
    }
    {
        let _span = profiling::phase("symbol-context.stable-names");
        let (objc_classes, objc_categories, objc_dispatch_pass) = {
            let _span = profiling::phase("symbol-context.objc-classlist");
            let objc_info = unlace_loader::scan_objc_classlist(image);
            let classes: Vec<_> = objc_info.classes.into_values().collect();
            let categories = objc_info.categories;
            profiling::record_items("symbol-context.objc-classlist", classes.len() as u64);
            let mut dispatch_pass = ObjcDispatchPass::from_plt_symbols(&image.plt_symbols);
            let dispatch_pass = if dispatch_pass.msgsend_addrs.is_empty() {
                None
            } else {
                let class_symbols = table
                    .iter()
                    .filter_map(|(&addr, name)| {
                        name.strip_prefix("_OBJC_CLASS_$_")
                            .or_else(|| name.strip_prefix("OBJC_CLASS_$_"))
                            .map(|class| (addr, class.to_string()))
                    })
                    .collect();
                dispatch_pass = dispatch_pass
                    .with_class_symbols(class_symbols)
                    .with_selector_strings(image.string_table.clone())
                    .with_categories(&categories);
                Some(Arc::new(dispatch_pass))
            };
            (classes, categories, dispatch_pass)
        };
        let go_itab_methods = {
            let _span = profiling::phase("symbol-context.go-itab-methods");
            let mut methods = BTreeSet::new();
            for itab in image.go_itabs.values() {
                methods.extend(itab.methods.iter().copied());
            }
            profiling::record_items("symbol-context.go-itab-methods", methods.len() as u64);
            methods
        };
        SymbolContext::new(
            table,
            flirt,
            objc_classes,
            objc_categories,
            objc_dispatch_pass,
            go_itab_methods,
        )
    }
}
