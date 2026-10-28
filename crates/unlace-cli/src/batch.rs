use std::collections::BTreeMap;
use std::fs;
use std::io::{IsTerminal, Read, Write};
use std::path::Path;
use std::sync::Arc;
use std::sync::atomic::{AtomicUsize, Ordering};
use std::time::Duration;

use anyhow::{Context, Result, bail};
use indicatif::{ProgressBar, ProgressDrawTarget, ProgressStyle};
use rayon::prelude::*;
use regex::Regex;
use serde::{Deserialize, Serialize};

use unlace_ir::ssa::SsaFunction;
use unlace_ir::{ArchId, Lifter};
use unlace_lift::get_lifter;
use unlace_loader::{
    BinaryImage, DwarfInfo, ElfLoader, Loader, MachoLoader, PeLoader, import_dwarf_with_sidecar,
};

use crate::args::{BatchProgressStyle, EmitFormat};
use crate::config::Config;
use crate::pipeline::{self, FunctionEntry, PipelineConfig};
use crate::profiling::{self, TraceField};

pub struct BatchConfig {
    pub jobs: usize,
    pub emit: EmitFormat,
    pub timeout_secs: u64,
    /// When true, run whole-program interprocedural analysis between
    /// lift+passes and emit phases.
    pub interproc: bool,
    /// Process every discovered function. No-op today (current default).
    pub all_functions: bool,
    /// Optional regex name filter, compiled once by the caller.
    pub scope: Option<Regex>,
    /// Cap on interproc fixed-point iterations (0 = pass through to default).
    pub max_iterations: usize,
    /// Progress rendering mode for batch decompilation.
    pub progress_style: BatchProgressStyle,
    /// Shared FLIRT/SIG matching configuration.
    pub flirt: pipeline::FlirtConfig,
    /// Raw bytes of an external DWARF sidecar ELF (`--dwarf-sidecar`).
    pub dwarf_sidecar: Option<Vec<u8>>,
    /// Pass, structuring, printer, and batch options from the configuration file.
    pub options: Arc<Config>,
}

/// Drop entries whose name doesn't match `re`. Errors if the filter empties the set.
fn apply_scope_filter(functions: &mut Vec<pipeline::FunctionEntry>, re: &Regex) -> Result<()> {
    let before = functions.len();
    functions.retain(|f| re.is_match(&f.name));
    profiling::diagnostic(
        "info",
        "scope filter",
        [
            TraceField::count("kept", functions.len() as u64),
            TraceField::count("dropped", (before - functions.len()) as u64),
        ],
    );
    if functions.is_empty() {
        bail!("--scope regex matched zero functions");
    }
    Ok(())
}

struct BatchResult {
    addr: u64,
    name: String,
    output: Result<String>,
    written: Option<BatchManifestEntry>,
}

const SEPARATOR_CHAR: char = '═';
const SEPARATOR_LEN: usize = 60;
const BATCH_MANIFEST_FILE: &str = "batch-manifest.json";

#[derive(Clone, Debug, PartialEq, Eq, Serialize, Deserialize)]
struct BatchManifestEntry {
    addr: u64,
    name: String,
    file: String,
    status: String,
}

#[derive(Clone, Debug, PartialEq, Eq, Serialize, Deserialize)]
struct BatchManifest {
    #[serde(default = "default_manifest_version")]
    version: u8,
    #[serde(default)]
    written: Vec<BatchManifestEntry>,
    #[serde(default)]
    skipped: Vec<BatchManifestEntry>,
}

fn default_manifest_version() -> u8 {
    1
}

fn should_serialize_large_function(entry: &FunctionEntry, threshold: u64) -> bool {
    threshold > 0 && entry.size >= threshold
}

#[derive(Clone, Copy, Debug, PartialEq, Eq)]
enum ProgressRenderMode {
    Off,
    Plain,
    Color,
}

fn progress_render_mode(style: BatchProgressStyle) -> ProgressRenderMode {
    if !std::io::stderr().is_terminal() {
        return ProgressRenderMode::Off;
    }
    match style {
        BatchProgressStyle::Off => ProgressRenderMode::Off,
        BatchProgressStyle::Plain => ProgressRenderMode::Plain,
        BatchProgressStyle::Color | BatchProgressStyle::Auto => ProgressRenderMode::Color,
    }
}

fn progress_style_for(mode: ProgressRenderMode) -> ProgressStyle {
    let template = match mode {
        ProgressRenderMode::Color => {
            "{prefix} [{elapsed_precise}] [{bar:32.cyan/blue}] started {pos}/{len} {msg}"
        }
        ProgressRenderMode::Plain => {
            "{prefix} [{elapsed_precise}] [{bar:32}] started {pos}/{len} {msg}"
        }
        ProgressRenderMode::Off => "",
    };
    ProgressStyle::with_template(template)
        .unwrap_or_else(|_| ProgressStyle::default_bar())
        .progress_chars("=>-")
}

struct ProgressPrinter {
    bar: Option<ProgressBar>,
}

impl ProgressPrinter {
    fn new(stage: &'static str, style: BatchProgressStyle, total: usize) -> Self {
        let mode = progress_render_mode(style);
        let bar = match mode {
            ProgressRenderMode::Off => None,
            ProgressRenderMode::Plain | ProgressRenderMode::Color => {
                let pb = ProgressBar::new(total as u64);
                pb.set_style(progress_style_for(mode));
                pb.set_prefix(format!("[unlace {stage}]"));
                pb.set_draw_target(ProgressDrawTarget::stderr_with_hz(4));
                if total > 0 {
                    pb.enable_steady_tick(Duration::from_millis(250));
                }
                Some(pb)
            }
        };
        Self { bar }
    }

    fn bar(&self) -> Option<&ProgressBar> {
        self.bar.as_ref()
    }

    fn ensure_total(&self, total: usize) {
        if total == 0 {
            return;
        }
        if let Some(pb) = self.bar()
            && pb.length() != Some(total as u64)
        {
            pb.set_length(total as u64);
        }
    }

    fn enabled(&self) -> bool {
        self.bar.is_some()
    }

    fn tick(&self, started: usize, total: usize) {
        if !self.enabled() {
            return;
        }
        if total == 0 {
            return;
        }
        self.ensure_total(total);
        if let Some(pb) = self.bar() {
            let pos = started.max(pb.position() as usize).min(total) as u64;
            pb.set_position(pos);
        }
    }

    fn report(
        &self,
        started: usize,
        completed: usize,
        failed: usize,
        active: usize,
        total: usize,
        current: Option<&FunctionEntry>,
    ) {
        if !self.enabled() || total == 0 {
            return;
        }

        self.tick(started, total);
        if let Some(pb) = self.bar() {
            pb.set_message(progress_message(completed, failed, active, current));
            pb.tick();
        }
    }

    fn finish(&self) {
        if let Some(pb) = self.bar() {
            let total = pb.length().unwrap_or_default();
            let done = pb.position();
            pb.finish_with_message(format!("done {done}/{total}"));
        }
    }
}

fn short_progress_name(name: &str) -> String {
    const MAX_CHARS: usize = 48;
    let mut chars = name.chars();
    let short: String = chars.by_ref().take(MAX_CHARS).collect();
    if chars.next().is_some() {
        format!("{short}...")
    } else {
        short
    }
}

fn progress_message(
    completed: usize,
    failed: usize,
    active: usize,
    current: Option<&FunctionEntry>,
) -> String {
    let mut message = format!("done {completed} active {active}");
    if failed > 0 {
        message.push_str(&format!(" failed {failed}"));
    }
    if let Some(entry) = current {
        message.push_str(&format!(
            " last {}@0x{:x}",
            short_progress_name(&entry.name),
            entry.addr
        ));
    }
    message
}

/// Returns true when any style except `Off` is selected.
fn progress_enabled(style: BatchProgressStyle) -> bool {
    !matches!(style, BatchProgressStyle::Off)
}

fn sort_batch_work(entries: &mut [&FunctionEntry]) {
    entries.sort_by_key(|entry| {
        let unknown_size = entry.size == 0;
        (unknown_size, entry.size, entry.addr)
    });
}

pub fn run_batch(
    binary_path: &Path,
    config: &BatchConfig,
    arch_override: Option<&str>,
    output_dir: Option<&Path>,
) -> Result<()> {
    let data = {
        let _span = profiling::phase("batch.read-binary");
        fs::read(binary_path)
            .with_context(|| format!("failed to read '{}'", binary_path.display()))?
    };
    profiling::record_bytes("batch.read-binary", data.len() as u64);

    let image = {
        let _span = profiling::phase("batch.load-binary");
        if ElfLoader::can_load(&data) {
            ElfLoader::load(&data)
        } else if MachoLoader::can_load(&data) {
            MachoLoader::load(&data)
        } else if PeLoader::can_load(&data) {
            PeLoader::load(&data)
        } else {
            bail!(
                "'{}' is not a recognized binary format (ELF, Mach-O, or PE)",
                binary_path.display(),
            );
        }
        .with_context(|| format!("failed to parse '{}'", binary_path.display()))?
    };

    profiling::diagnostic(
        "info",
        "loaded binary",
        [
            TraceField::text("arch", image.arch.to_string()),
            TraceField::addr("entry", image.entry),
        ],
    );

    if let Some(override_str) = arch_override {
        let requested = crate::parse_arch(override_str)?;
        if requested != image.arch {
            bail!(
                "architecture mismatch: binary is {}, but --arch={} was specified",
                image.arch,
                override_str,
            );
        }
    }

    if !matches!(
        image.arch,
        ArchId::X86_64
            | ArchId::X86
            | ArchId::AArch64
            | ArchId::Mips64
            | ArchId::RiscV64
            | ArchId::V850
            | ArchId::Arc
            | ArchId::Agx
            | ArchId::Ppc
            | ArchId::Ppc64
    ) {
        bail!(
            "architecture {} is not yet supported for decompilation",
            image.arch,
        );
    }
    let lifter = get_lifter(image.arch)?;

    let mut functions = {
        let _span = profiling::phase("batch.discover-functions");
        pipeline::discover_functions(&image, None)?
    };
    profiling::record_items("batch.discover-functions", functions.len() as u64);
    profiling::diagnostic(
        "info",
        "discovered functions for batch",
        [TraceField::count("count", functions.len() as u64)],
    );
    if let Some(re) = config.scope.as_ref() {
        let _span = profiling::phase("batch.scope-filter");
        apply_scope_filter(&mut functions, re)?;
        profiling::record_items("batch.scope-filter", functions.len() as u64);
    }
    let mut skipped_outputs = Vec::new();
    if let Some(dir) = output_dir {
        let _span = profiling::phase("batch.resume-prune");
        skipped_outputs = prune_existing_outputs(dir, &mut functions)?;
        profiling::record_items("batch.resume-prune", skipped_outputs.len() as u64);
        if !skipped_outputs.is_empty() {
            profiling::diagnostic(
                "info",
                "resuming batch from output directory",
                [
                    TraceField::count("skipped", skipped_outputs.len() as u64),
                    TraceField::count("remaining", functions.len() as u64),
                ],
            );
        }
        if functions.is_empty() {
            profiling::diagnostic(
                "info",
                "batch output directory already contains every function output",
                [TraceField::count("skipped", skipped_outputs.len() as u64)],
            );
            write_per_file_with_manifest(dir, &[], &skipped_outputs)?;
            return Ok(());
        }
    }

    let dwarf = {
        let _span = profiling::phase("batch.import-dwarf");
        match import_dwarf_with_sidecar(&image, config.dwarf_sidecar.as_deref()) {
            Ok(d) if !d.functions.is_empty() || !d.structs.is_empty() => {
                profiling::record_items("batch.import-dwarf", d.functions.len() as u64);
                profiling::diagnostic(
                    "info",
                    "loaded DWARF debug info",
                    [
                        TraceField::count("functions", d.functions.len() as u64),
                        TraceField::count("structs", d.structs.len() as u64),
                    ],
                );
                Some(d)
            }
            Ok(_) => None,
            Err(e) => {
                profiling::diagnostic(
                    "debug",
                    "DWARF import failed; continuing without type info",
                    [TraceField::text("err", e.to_string())],
                );
                None
            }
        }
    };

    let thread_count = if config.jobs == 0 {
        std::thread::available_parallelism()
            .map(|n| n.get())
            .unwrap_or(1)
    } else {
        config.jobs
    };

    let pool = {
        let _span = profiling::phase("batch.build-thread-pool");
        let stack_size = config.options.batch.worker_stack_bytes();
        profiling::diagnostic(
            "info",
            "building batch worker pool",
            [
                TraceField::count("threads", thread_count as u64),
                TraceField::bytes("worker_stack", stack_size as u64),
            ],
        );
        rayon::ThreadPoolBuilder::new()
            .num_threads(thread_count)
            .stack_size(stack_size)
            .build()
            .context("failed to create thread pool")?
    };

    profiling::diagnostic(
        "info",
        "starting batch decompilation",
        [
            TraceField::count("threads", thread_count as u64),
            TraceField::count("functions", functions.len() as u64),
        ],
    );

    // RTTI is scanned once and shared across all parallel decompilation
    // jobs — it's read-only and the structured layout is needed by the
    // C printer for class layout / vtable annotations.
    let rtti = {
        let _span = profiling::phase("batch.scan-rtti");
        unlace_loader::scan_rtti(&image)
    };
    let rtti_opt = if rtti.is_empty() { None } else { Some(&rtti) };

    let stream_output_dir = output_dir.filter(|_| !config.interproc);
    if let Some(dir) = stream_output_dir {
        fs::create_dir_all(dir)
            .with_context(|| format!("failed to create output directory '{}'", dir.display()))?;
    }

    let results: Vec<BatchResult> = if config.interproc {
        let _span = profiling::phase("batch.decompile-interproc");
        pool.install(|| {
            decompile_interproc(
                &image,
                lifter.as_ref(),
                &functions,
                config,
                dwarf.as_ref(),
                rtti_opt,
            )
        })
    } else {
        let _span = profiling::phase("batch.decompile-parallel");
        pool.install(|| {
            decompile_all_parallel(
                &image,
                lifter.as_ref(),
                &functions,
                config,
                dwarf.as_ref(),
                rtti_opt,
                stream_output_dir,
            )
        })
    };

    if let Some(dir) = output_dir {
        let _span = profiling::phase("batch.write-output-dir");
        write_per_file_with_manifest(dir, &results, &skipped_outputs)?;
    } else {
        let _span = profiling::phase("batch.write-merged-output");
        write_merged(&results);
    }

    let succeeded = results.iter().filter(|r| r.output.is_ok()).count();
    let failed = results.len() - succeeded;
    profiling::diagnostic(
        "info",
        "batch complete",
        [
            TraceField::count("succeeded", succeeded as u64),
            TraceField::count("failed", failed as u64),
            TraceField::count("total", results.len() as u64),
        ],
    );

    Ok(())
}

fn decompile_all_parallel(
    image: &BinaryImage,
    lifter: &dyn Lifter,
    functions: &[FunctionEntry],
    config: &BatchConfig,
    dwarf: Option<&DwarfInfo>,
    rtti: Option<&unlace_loader::RttiInfo>,
    stream_output_dir: Option<&Path>,
) -> Vec<BatchResult> {
    let symbol_context = {
        let _span = profiling::phase("batch.symbol-context");
        Arc::new(pipeline::build_symbol_context_with_config(
            image,
            functions,
            &config.flirt,
        ))
    };
    let pipeline_config = PipelineConfig {
        timeout: std::time::Duration::from_secs(config.timeout_secs),
        options: config.options.clone(),
        annotations: None,
        flirt: config.flirt.clone(),
        dwarf_sidecar: None,
        symbol_context: Some(symbol_context),
    };

    let mut indexed: BTreeMap<u64, &FunctionEntry> = BTreeMap::new();
    for entry in functions {
        indexed.entry(entry.addr).or_insert(entry);
    }

    let mut sorted: Vec<&FunctionEntry> = indexed.into_values().collect();
    sort_batch_work(&mut sorted);
    let total = sorted.len();
    let report = progress_enabled(config.progress_style);
    let progress = Arc::new(ProgressPrinter::new("batch", config.progress_style, total));
    let started = AtomicUsize::new(0);
    let completed = AtomicUsize::new(0);
    let failed = AtomicUsize::new(0);
    let active = AtomicUsize::new(0);

    let large_threshold = config.options.batch.large_function_serial_bytes;
    let mut parallel_entries = Vec::new();
    let mut serial_entries = Vec::new();
    for entry in sorted {
        if should_serialize_large_function(entry, large_threshold) {
            serial_entries.push(entry);
        } else {
            parallel_entries.push(entry);
        }
    }
    if !serial_entries.is_empty() {
        profiling::diagnostic(
            "info",
            "serializing large batch functions to cap peak RSS",
            [
                TraceField::count("large_functions", serial_entries.len() as u64),
                TraceField::bytes("threshold", large_threshold),
            ],
        );
    }

    let process_entry = |entry: &FunctionEntry| {
        let _profile_span = profiling::phase("batch.function");
        let _profile_trace = profiling::trace_fields(
            "batch.function",
            [
                TraceField::text("name", entry.name.clone()),
                TraceField::addr("addr", entry.addr),
                TraceField::count("size", entry.size),
            ],
        );
        profiling::record_items("batch.function", 1);
        if report {
            let started_now = started.fetch_add(1, Ordering::Relaxed) + 1;
            let active_now = active.fetch_add(1, Ordering::Relaxed) + 1;
            progress.report(
                started.load(Ordering::Relaxed).max(started_now),
                completed.load(Ordering::Relaxed),
                failed.load(Ordering::Relaxed),
                active_now,
                total,
                Some(entry),
            );
        }
        let output = pipeline::decompile_function_with_symbols(
            image,
            lifter,
            entry,
            config.emit,
            &pipeline_config,
            dwarf,
            functions,
            rtti,
        );
        if report {
            let failed_now = if output.is_err() {
                failed.fetch_add(1, Ordering::Relaxed) + 1
            } else {
                failed.load(Ordering::Relaxed)
            };
            let active_now = active.fetch_sub(1, Ordering::Relaxed).saturating_sub(1);
            let completed_now = completed.fetch_add(1, Ordering::Relaxed) + 1;
            progress.report(
                started.load(Ordering::Relaxed),
                completed_now,
                failed_now,
                active_now,
                total,
                None,
            );
        }
        let result = BatchResult {
            addr: entry.addr,
            name: entry.name.clone(),
            output,
            written: None,
        };
        if let Some(dir) = stream_output_dir {
            stream_batch_result(dir, result)
        } else {
            result
        }
    };

    let mut results = parallel_entries
        .par_iter()
        .map(|entry| process_entry(entry))
        .collect::<Vec<_>>();

    results.extend(serial_entries.iter().map(|entry| process_entry(entry)));
    progress.finish();
    results
}

/// Three-phase interprocedural decompilation (Phase 1 parallel, Phase 2 sequential, Phase 3 parallel).
/// NOTE: The SSA map for a large binary can consume significant memory since we hold *all* functions' SSA simultaneously.
fn decompile_interproc(
    image: &BinaryImage,
    lifter: &dyn Lifter,
    functions: &[FunctionEntry],
    config: &BatchConfig,
    dwarf: Option<&DwarfInfo>,
    rtti: Option<&unlace_loader::RttiInfo>,
) -> Vec<BatchResult> {
    let symbol_context = {
        let _span = profiling::phase("batch.symbol-context");
        Arc::new(pipeline::build_symbol_context_with_config(
            image,
            functions,
            &config.flirt,
        ))
    };
    let pipeline_config = PipelineConfig {
        timeout: std::time::Duration::from_secs(config.timeout_secs),
        options: config.options.clone(),
        annotations: None,
        flirt: config.flirt.clone(),
        dwarf_sidecar: None,
        symbol_context: Some(symbol_context),
    };
    let mut indexed: BTreeMap<u64, &FunctionEntry> = BTreeMap::new();
    for entry in functions {
        indexed.entry(entry.addr).or_insert(entry);
    }
    let mut sorted: Vec<&FunctionEntry> = indexed.into_values().collect();
    sort_batch_work(&mut sorted);

    // Memory-bound check: interproc holds *every* function's SSA in
    // memory simultaneously (a documented hazard — see comment on
    // `decompile_interproc`). When the function count crosses the
    // configured bound we emit a single warning so operators know
    // *why* RSS will climb and have a knob to opt out (rerun without
    // `--interproc` to fall back to the per-function path).
    let interproc_bound = config.options.batch.interproc_max_functions;
    if sorted.len() > interproc_bound {
        profiling::diagnostic(
            "warn",
            "interproc memory bound exceeded",
            [
                TraceField::count("functions", sorted.len() as u64),
                TraceField::count("bound", interproc_bound as u64),
                TraceField::text(
                    "hint",
                    "peak RSS will be proportional to function count; raise batch.interproc_max_functions or rerun without --interproc",
                ),
            ],
        );
    }

    let total_phase1 = sorted.len();
    let report = progress_enabled(config.progress_style);
    let progress_phase1 = Arc::new(ProgressPrinter::new(
        "interproc-phase1",
        config.progress_style,
        total_phase1,
    ));
    let started_phase1 = AtomicUsize::new(0);
    let completed_phase1 = AtomicUsize::new(0);
    let failed_phase1 = AtomicUsize::new(0);
    let active_phase1 = AtomicUsize::new(0);

    // Phase 1: parallel lift + passes
    profiling::diagnostic(
        "info",
        "interproc phase 1: lift + passes (parallel)",
        [TraceField::count("count", total_phase1 as u64)],
    );
    let phase1: Vec<(u64, String, Result<SsaFunction, anyhow::Error>)> = sorted
        .par_iter()
        .map(|entry| {
            let _profile_span = profiling::phase("batch.interproc.phase1.function");
            let _profile_trace = profiling::trace_fields(
                "batch.interproc.phase1.function",
                [
                    TraceField::text("name", entry.name.clone()),
                    TraceField::addr("addr", entry.addr),
                    TraceField::count("size", entry.size),
                ],
            );
            profiling::record_items("batch.interproc.phase1.function", 1);
            if report {
                let started_now = started_phase1.fetch_add(1, Ordering::Relaxed) + 1;
                let active_now = active_phase1.fetch_add(1, Ordering::Relaxed) + 1;
                progress_phase1.report(
                    started_phase1.load(Ordering::Relaxed).max(started_now),
                    completed_phase1.load(Ordering::Relaxed),
                    failed_phase1.load(Ordering::Relaxed),
                    active_now,
                    total_phase1,
                    Some(entry),
                );
            }
            let r = pipeline::lift_and_run_passes(
                image,
                lifter,
                entry,
                &pipeline_config,
                dwarf,
                rtti,
                functions,
            );
            if report {
                let failed_now = if r.is_err() {
                    failed_phase1.fetch_add(1, Ordering::Relaxed) + 1
                } else {
                    failed_phase1.load(Ordering::Relaxed)
                };
                let active_now = active_phase1
                    .fetch_sub(1, Ordering::Relaxed)
                    .saturating_sub(1);
                let completed_now = completed_phase1.fetch_add(1, Ordering::Relaxed) + 1;
                progress_phase1.report(
                    started_phase1.load(Ordering::Relaxed),
                    completed_now,
                    failed_now,
                    active_now,
                    total_phase1,
                    None,
                );
            }
            (entry.addr, entry.name.clone(), r)
        })
        .collect();
    progress_phase1.finish();
    let mut ssa_map: BTreeMap<u64, SsaFunction> = BTreeMap::new();
    let mut failures: Vec<BatchResult> = Vec::new();
    for (addr, name, result) in phase1 {
        match result {
            Ok(ssa) => {
                ssa_map.insert(addr, ssa);
            }
            Err(e) => {
                failures.push(BatchResult {
                    addr,
                    name,
                    output: Err(e),
                    written: None,
                });
            }
        }
    }

    // Phase 1.5: whole-program printf format-string parse. The
    // per-function pre-pass inside `lift_and_run_passes` already
    // populates `variadic_call_types` for each function in isolation; this
    // whole-program sweep is a belt-and-braces safety net using the union
    // of all discovered functions as the symbol-resolution context, which
    // catches sites whose Call target was only resolvable once every
    // function was lifted. Additive merge guarantees idempotence.
    let total_variadic_sites =
        pipeline::run_whole_program_printf_parse(&mut ssa_map, image, functions);
    profiling::diagnostic(
        "info",
        "interproc phase 1.5: whole-program printf format-string parse",
        [TraceField::count(
            "variadic_call_sites",
            total_variadic_sites as u64,
        )],
    );

    // Phase 2: sequential interproc fixpoint
    profiling::diagnostic(
        "info",
        "interproc phase 2: whole-program fixed-point (sequential)",
        [TraceField::count("functions", ssa_map.len() as u64)],
    );
    if let Err(e) = pipeline::run_whole_program_interproc(
        &mut ssa_map,
        config.max_iterations,
        &config.options.passes,
    ) {
        profiling::diagnostic(
            "warn",
            "interprocedural fixed-point failed; emitting with per-function results",
            [TraceField::text("err", e.to_string())],
        );
    }

    match pipeline::run_whole_program_quality_refinement(
        &mut ssa_map,
        config.max_iterations,
        &config.options.passes,
    ) {
        Ok(report) => {
            profiling::diagnostic(
                "info",
                "interproc phase 2.5: whole-program quality refinement",
                [
                    TraceField::count("caller_param_changed", report.caller_param_changed as u64),
                    TraceField::count("registry_applied", report.registry_applied as u64),
                    TraceField::count("cc_iters", report.calling_conv.iterations as u64),
                    TraceField::count("params_dropped", report.calling_conv.params_dropped as u64),
                    TraceField::count("returns_voided", report.calling_conv.returns_voided as u64),
                    TraceField::count(
                        "conventions_unified",
                        report.calling_conv.conventions_unified as u64,
                    ),
                    TraceField::count(
                        "canonical_struct_layouts",
                        report.canonical_struct_layouts as u64,
                    ),
                    TraceField::count(
                        "struct_name_rewrite_functions",
                        report.struct_name_rewrite_functions as u64,
                    ),
                    TraceField::count("final_refresh_changes", report.final_refresh_changes as u64),
                    TraceField::text("cc_hit_cap", report.calling_conv.hit_cap.to_string()),
                ],
            );
        }
        Err(e) => {
            profiling::diagnostic(
                "warn",
                "whole-program quality refinement failed; emitting current interproc results",
                [TraceField::text("err", e.to_string())],
            );
        }
    }

    // Phase 3: parallel emit
    profiling::diagnostic(
        "info",
        "interproc phase 3: emit output (parallel)",
        [TraceField::count("functions", ssa_map.len() as u64)],
    );
    let emit_entries: Vec<(u64, String, SsaFunction)> = ssa_map
        .into_iter()
        .map(|(addr, ssa)| {
            let name = sorted
                .iter()
                .find(|e| e.addr == addr)
                .map(|e| e.name.clone())
                .unwrap_or_else(|| format!("sub_{addr:x}"));
            (addr, name, ssa)
        })
        .collect();
    let total_phase3 = emit_entries.len();
    let started_phase3 = AtomicUsize::new(0);
    let completed_phase3 = AtomicUsize::new(0);
    let failed_phase3 = AtomicUsize::new(0);
    let active_phase3 = AtomicUsize::new(0);
    let progress_phase3 = Arc::new(ProgressPrinter::new(
        "interproc-phase3",
        config.progress_style,
        total_phase3,
    ));

    let mut emit_results: Vec<BatchResult> = emit_entries
        .into_par_iter()
        .map(|(addr, name, mut ssa)| {
            let entry = sorted
                .iter()
                .find(|e| e.addr == addr)
                .map(|e| FunctionEntry {
                    name: e.name.clone(),
                    addr: e.addr,
                    size: e.size,
                })
                .unwrap_or(FunctionEntry {
                    name: name.clone(),
                    addr,
                    size: 0,
                });
            let _profile_span = profiling::phase("batch.interproc.phase3.emit");
            let _profile_trace = profiling::trace_fields(
                "batch.interproc.phase3.emit",
                [
                    TraceField::text("name", entry.name.clone()),
                    TraceField::addr("addr", entry.addr),
                    TraceField::count("size", entry.size),
                ],
            );
            profiling::record_items("batch.interproc.phase3.emit", 1);
            if report {
                let started_now = started_phase3.fetch_add(1, Ordering::Relaxed) + 1;
                let active_now = active_phase3.fetch_add(1, Ordering::Relaxed) + 1;
                progress_phase3.report(
                    started_phase3.load(Ordering::Relaxed).max(started_now),
                    completed_phase3.load(Ordering::Relaxed),
                    failed_phase3.load(Ordering::Relaxed),
                    active_now,
                    total_phase3,
                    Some(&entry),
                );
            }
            let output = pipeline::emit_function_interproc(
                &mut ssa,
                image,
                &entry,
                config.emit,
                &pipeline_config,
                dwarf,
                functions,
                rtti,
            );
            if report {
                let failed_now = if output.is_err() {
                    failed_phase3.fetch_add(1, Ordering::Relaxed) + 1
                } else {
                    failed_phase3.load(Ordering::Relaxed)
                };
                let active_now = active_phase3
                    .fetch_sub(1, Ordering::Relaxed)
                    .saturating_sub(1);
                let completed_now = completed_phase3.fetch_add(1, Ordering::Relaxed) + 1;
                progress_phase3.report(
                    started_phase3.load(Ordering::Relaxed),
                    completed_now,
                    failed_now,
                    active_now,
                    total_phase3,
                    None,
                );
            }
            BatchResult {
                addr,
                name,
                output,
                written: None,
            }
        })
        .collect();
    progress_phase3.finish();
    emit_results.append(&mut failures);
    emit_results
}

fn write_merged(results: &[BatchResult]) {
    let mut sorted: Vec<&BatchResult> = results.iter().collect();
    sorted.sort_by_key(|r| r.addr);

    let mut buf = String::new();
    for result in sorted {
        let sep: String = std::iter::repeat_n(SEPARATOR_CHAR, SEPARATOR_LEN).collect();
        buf.push_str(&format!(
            "// {} {} @ {:#x} {}\n",
            sep, result.name, result.addr, sep
        ));
        match &result.output {
            Ok(text) => buf.push_str(text),
            Err(e) => buf.push_str(&format!(
                "/* FAILED: {} \u{2014} {} */\n",
                result.name,
                format_error_chain(e)
            )),
        }
        buf.push('\n');
    }

    print!("{buf}");
}

fn write_per_file_with_manifest(
    dir: &Path,
    results: &[BatchResult],
    skipped: &[BatchManifestEntry],
) -> Result<()> {
    fs::create_dir_all(dir)
        .with_context(|| format!("failed to create output directory '{}'", dir.display()))?;

    let mut sorted: Vec<&BatchResult> = results.iter().collect();
    sorted.sort_by_key(|r| r.addr);
    let mut written_by_addr: BTreeMap<u64, BatchManifestEntry> = read_existing_manifest(dir)
        .map(|manifest| {
            manifest
                .written
                .into_iter()
                .map(|entry| (entry.addr, entry))
                .collect()
        })
        .unwrap_or_default();

    for entry in skipped {
        let status = written_by_addr
            .get(&entry.addr)
            .map(|existing| existing.status.clone())
            .unwrap_or_else(|| "ok".to_string());
        written_by_addr.insert(
            entry.addr,
            BatchManifestEntry {
                addr: entry.addr,
                name: entry.name.clone(),
                file: entry.file.clone(),
                status,
            },
        );
    }

    for result in sorted {
        if let Some(entry) = result.written.clone() {
            written_by_addr.insert(entry.addr, entry);
        } else {
            let entry = write_batch_result_file(dir, result)?;
            written_by_addr.insert(entry.addr, entry);
        }
    }

    let mut written: Vec<BatchManifestEntry> = written_by_addr.into_values().collect();
    written.sort_by_key(|entry| entry.addr);

    let mut skipped = skipped.to_vec();
    skipped.sort_by_key(|entry| entry.addr);
    let manifest = BatchManifest {
        version: 1,
        written,
        skipped,
    };
    let manifest_path = dir.join(BATCH_MANIFEST_FILE);
    let manifest_json = serde_json::to_string_pretty(&manifest)?;
    fs::write(&manifest_path, manifest_json)
        .with_context(|| format!("failed to write '{}'", manifest_path.display()))?;

    Ok(())
}

fn stream_batch_result(dir: &Path, result: BatchResult) -> BatchResult {
    match write_batch_result_file(dir, &result) {
        Ok(entry) => BatchResult {
            addr: result.addr,
            name: result.name,
            output: result.output.map(|_| String::new()),
            written: Some(entry),
        },
        Err(e) => BatchResult {
            addr: result.addr,
            name: result.name,
            output: Err(e),
            written: None,
        },
    }
}

fn write_batch_result_file(dir: &Path, result: &BatchResult) -> Result<BatchManifestEntry> {
    let filename = sanitize_filename(&result.name, result.addr);
    let path = dir.join(&filename);
    let status = if result.output.is_ok() {
        "ok"
    } else {
        "failed"
    }
    .to_string();
    let mut file = fs::File::create(&path)
        .with_context(|| format!("failed to create '{}'", path.display()))?;
    match &result.output {
        Ok(text) => file.write_all(text.as_bytes())?,
        Err(e) => writeln!(
            file,
            "/* FAILED: {} \u{2014} {} */",
            result.name,
            format_error_chain(e)
        )?,
    }
    profiling::event_fields(
        "batch.write-function-output",
        [
            TraceField::text("path", path.display().to_string()),
            TraceField::text("status", status.clone()),
        ],
    );
    Ok(BatchManifestEntry {
        addr: result.addr,
        name: result.name.clone(),
        file: filename,
        status,
    })
}

fn read_existing_manifest(dir: &Path) -> Option<BatchManifest> {
    let manifest_path = dir.join(BATCH_MANIFEST_FILE);
    let manifest_text = match fs::read_to_string(&manifest_path) {
        Ok(text) => text,
        Err(e) if e.kind() == std::io::ErrorKind::NotFound => return None,
        Err(e) => {
            profiling::diagnostic(
                "warn",
                "failed to read existing batch manifest; continuing without it",
                [
                    TraceField::text("path", manifest_path.display().to_string()),
                    TraceField::text("err", e.to_string()),
                ],
            );
            return None;
        }
    };

    match serde_json::from_str::<BatchManifest>(&manifest_text) {
        Ok(manifest) => Some(manifest),
        Err(e) => {
            profiling::diagnostic(
                "warn",
                "failed to parse existing batch manifest; continuing without it",
                [
                    TraceField::text("path", manifest_path.display().to_string()),
                    TraceField::text("err", e.to_string()),
                ],
            );
            None
        }
    }
}

fn output_file_is_failed_stub(path: &Path) -> bool {
    let mut file = match fs::File::open(path) {
        Ok(file) => file,
        Err(_) => return false,
    };
    let mut prefix = [0_u8; 16];
    let read = match file.read(&mut prefix) {
        Ok(read) => read,
        Err(_) => return false,
    };
    std::str::from_utf8(&prefix[..read])
        .map(|text| text.starts_with("/* FAILED:"))
        .unwrap_or(false)
}

fn format_error_chain(error: &anyhow::Error) -> String {
    let mut parts = Vec::new();
    for cause in error.chain() {
        parts.push(cause.to_string());
    }
    parts.join(": ")
}

fn prune_existing_outputs(
    dir: &Path,
    functions: &mut Vec<FunctionEntry>,
) -> Result<Vec<BatchManifestEntry>> {
    if !dir.exists() {
        return Ok(Vec::new());
    }
    let prior_status_by_addr: BTreeMap<u64, String> = read_existing_manifest(dir)
        .map(|manifest| {
            manifest
                .written
                .into_iter()
                .map(|entry| (entry.addr, entry.status))
                .collect()
        })
        .unwrap_or_default();

    let mut skipped = Vec::new();
    functions.retain(|function| {
        let filename = sanitize_filename(&function.name, function.addr);
        let path = dir.join(&filename);
        let exists = path
            .metadata()
            .is_ok_and(|metadata| metadata.is_file() && metadata.len() > 0);
        let should_retry = exists
            && match prior_status_by_addr.get(&function.addr).map(String::as_str) {
                Some("failed") => true,
                Some(_) => false,
                None => output_file_is_failed_stub(&path),
            };
        if exists && !should_retry {
            skipped.push(BatchManifestEntry {
                addr: function.addr,
                name: function.name.clone(),
                file: filename,
                status: "skipped".to_string(),
            });
        }
        !exists || should_retry
    });
    skipped.sort_by_key(|entry| entry.addr);
    Ok(skipped)
}

pub(crate) fn sanitize_filename(name: &str, addr: u64) -> String {
    const MAX_STEM_LEN: usize = 180;
    let mut sanitized: String = name
        .chars()
        .map(|c| {
            if c.is_ascii_alphanumeric() || c == '_' {
                c
            } else {
                '_'
            }
        })
        .collect();

    while sanitized.len() > MAX_STEM_LEN {
        sanitized.pop();
    }

    if sanitized.is_empty() {
        format!("func_{addr:x}.c")
    } else {
        format!("{sanitized}_{addr:x}.c")
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    use std::path::PathBuf;

    fn fixture(name: &str) -> PathBuf {
        let manifest = env!("CARGO_MANIFEST_DIR");
        PathBuf::from(format!("{manifest}/../../fixtures/{name}"))
    }

    #[test]
    fn progress_mode_selection_is_stable() {
        assert!(!progress_enabled(BatchProgressStyle::Off));
        assert!(progress_enabled(BatchProgressStyle::Plain));
        assert!(progress_enabled(BatchProgressStyle::Color));
        assert!(progress_enabled(BatchProgressStyle::Auto));
    }

    #[test]
    fn progress_message_reports_active_work_before_completion() {
        let entry = FunctionEntry {
            name: "very_long_function_name_that_should_be_shortened_for_terminal_progress"
                .to_string(),
            addr: 0x1000,
            size: 0x20,
        };
        let message = progress_message(0, 0, 1, Some(&entry));

        assert!(message.contains("done 0 active 1"));
        assert!(message.contains("last very_long_function_name"));
        assert!(message.contains("...@0x1000"));
    }

    #[test]
    fn batch_work_order_prefers_small_known_functions() {
        let large = FunctionEntry {
            name: "large".to_string(),
            addr: 0x1000,
            size: 0x100,
        };
        let unknown = FunctionEntry {
            name: "unknown".to_string(),
            addr: 0x2000,
            size: 0,
        };
        let small = FunctionEntry {
            name: "small".to_string(),
            addr: 0x3000,
            size: 0x10,
        };

        let mut entries = vec![&large, &unknown, &small];
        sort_batch_work(&mut entries);

        let names: Vec<&str> = entries.iter().map(|entry| entry.name.as_str()).collect();
        assert_eq!(names, ["small", "large", "unknown"]);
    }

    #[test]
    fn large_function_serial_threshold_is_configurable() {
        let small = FunctionEntry {
            name: "small".to_string(),
            addr: 0x1000,
            size: 0x3fff,
        };
        let large = FunctionEntry {
            name: "large".to_string(),
            addr: 0x2000,
            size: 0x4000,
        };

        assert!(!should_serialize_large_function(&small, 0x4000));
        assert!(should_serialize_large_function(&large, 0x4000));
        assert!(!should_serialize_large_function(&large, 0));
    }

    #[test]
    fn test_batch_discovers_functions() {
        let data = fs::read(fixture("medium.elf")).unwrap();
        let image = ElfLoader::load(&data).unwrap();
        let functions = pipeline::discover_functions(&image, None).unwrap();
        assert!(
            functions.len() >= 5,
            "medium.elf should have >=5 functions, found {}",
            functions.len()
        );
    }

    #[test]
    fn test_batch_merged_output() {
        let config = BatchConfig {
            jobs: 2,
            emit: EmitFormat::C,
            timeout_secs: 30,
            interproc: false,
            all_functions: false,
            scope: None,
            max_iterations: 0,
            progress_style: BatchProgressStyle::Off,
            flirt: pipeline::FlirtConfig::default(),
            dwarf_sidecar: None,
            options: Arc::default(),
        };

        let data = fs::read(fixture("medium.elf")).unwrap();
        let image = ElfLoader::load(&data).unwrap();
        let functions = pipeline::discover_functions(&image, None).unwrap();

        let lifter = get_lifter(image.arch).expect("supported arch");
        let results = decompile_all_parallel(
            &image,
            lifter.as_ref(),
            &functions,
            &config,
            None,
            None,
            None,
        );

        let mut output = String::new();
        let mut sorted: Vec<&BatchResult> = results.iter().collect();
        sorted.sort_by_key(|r| r.addr);
        for result in &sorted {
            let sep: String = std::iter::repeat_n(SEPARATOR_CHAR, SEPARATOR_LEN).collect();
            output.push_str(&format!(
                "// {} {} @ {:#x} {}\n",
                sep, result.name, result.addr, sep
            ));
            match &result.output {
                Ok(text) => output.push_str(text),
                Err(e) => {
                    output.push_str(&format!("/* FAILED: {} \u{2014} {} */\n", result.name, e))
                }
            }
            output.push('\n');
        }

        let separator_count = output.matches("// ═").count();
        assert!(
            separator_count >= 2,
            "merged output should have multiple separators, found {separator_count}"
        );
    }

    #[test]
    fn test_batch_output_dir() {
        let tmp = tempfile::tempdir().unwrap();
        let config = BatchConfig {
            jobs: 2,
            emit: EmitFormat::C,
            timeout_secs: 30,
            interproc: false,
            all_functions: false,
            scope: None,
            max_iterations: 0,
            progress_style: BatchProgressStyle::Off,
            flirt: pipeline::FlirtConfig::default(),
            dwarf_sidecar: None,
            options: Arc::default(),
        };

        let data = fs::read(fixture("medium.elf")).unwrap();
        let image = ElfLoader::load(&data).unwrap();
        let functions = pipeline::discover_functions(&image, None).unwrap();
        let lifter = get_lifter(image.arch).expect("supported arch");
        let results = decompile_all_parallel(
            &image,
            lifter.as_ref(),
            &functions,
            &config,
            None,
            None,
            None,
        );

        write_per_file_with_manifest(tmp.path(), &results, &[]).unwrap();

        let c_files: Vec<_> = fs::read_dir(tmp.path())
            .unwrap()
            .filter_map(|e| e.ok())
            .filter(|e| e.path().extension().is_some_and(|ext| ext == "c"))
            .collect();

        assert!(
            c_files.len() >= 2,
            "output-dir should contain .c files, found {}",
            c_files.len()
        );
    }

    #[test]
    fn test_batch_manifest_records_written_and_failed_outputs() {
        let tmp = tempfile::tempdir().unwrap();
        let results = vec![
            BatchResult {
                addr: 0x1000,
                name: "main".into(),
                output: Ok("int main(void) { return 0; }\n".into()),
                written: None,
            },
            BatchResult {
                addr: 0x1020,
                name: "bad/name".into(),
                output: Err(anyhow::anyhow!("boom")),
                written: None,
            },
        ];

        write_per_file_with_manifest(tmp.path(), &results, &[]).unwrap();

        let manifest = fs::read_to_string(tmp.path().join(BATCH_MANIFEST_FILE)).unwrap();
        let json: serde_json::Value = serde_json::from_str(&manifest).unwrap();
        assert_eq!(json["version"], 1);
        assert_eq!(json["written"][0]["addr"], 0x1000);
        assert_eq!(json["written"][0]["name"], "main");
        assert_eq!(json["written"][0]["file"], "main_1000.c");
        assert_eq!(json["written"][0]["status"], "ok");
        assert_eq!(json["written"][1]["addr"], 0x1020);
        assert_eq!(json["written"][1]["file"], "bad_name_1020.c");
        assert_eq!(json["written"][1]["status"], "failed");
        assert!(json["skipped"].as_array().unwrap().is_empty());
    }

    #[test]
    fn failed_output_includes_error_chain() {
        let tmp = tempfile::tempdir().unwrap();
        let results = vec![BatchResult {
            addr: 0x1000,
            name: "bad".into(),
            output: Err(anyhow::anyhow!("root cause").context("outer context")),
            written: None,
        }];

        write_per_file_with_manifest(tmp.path(), &results, &[]).unwrap();

        let output = fs::read_to_string(tmp.path().join("bad_1000.c")).unwrap();
        assert!(
            output.contains("outer context: root cause"),
            "failed output should include full error chain, got {output:?}"
        );
    }

    #[test]
    fn test_batch_output_filenames_are_unique_and_length_capped() {
        let tmp = tempfile::tempdir().unwrap();
        let long_name = "objc:".to_string() + &"method:".repeat(80);
        let results = vec![
            BatchResult {
                addr: 0x1000,
                name: "duplicate".into(),
                output: Ok("int a(void) { return 1; }\n".into()),
                written: None,
            },
            BatchResult {
                addr: 0x1020,
                name: "duplicate".into(),
                output: Ok("int b(void) { return 2; }\n".into()),
                written: None,
            },
            BatchResult {
                addr: 0x1040,
                name: long_name,
                output: Ok("int c(void) { return 3; }\n".into()),
                written: None,
            },
        ];

        write_per_file_with_manifest(tmp.path(), &results, &[]).unwrap();

        let manifest = fs::read_to_string(tmp.path().join(BATCH_MANIFEST_FILE)).unwrap();
        let json: serde_json::Value = serde_json::from_str(&manifest).unwrap();
        let files = json["written"].as_array().unwrap();
        assert_eq!(files[0]["file"], "duplicate_1000.c");
        assert_eq!(files[1]["file"], "duplicate_1020.c");
        for entry in files {
            let file = entry["file"].as_str().unwrap();
            assert!(
                file.len() <= 200,
                "filename should be capped to a filesystem-friendly length: {file}"
            );
            assert!(
                tmp.path().join(file).is_file(),
                "manifest file should exist: {file}"
            );
        }
    }

    #[test]
    fn test_batch_manifest_records_resume_skips() {
        let tmp = tempfile::tempdir().unwrap();
        let mut functions = vec![
            FunctionEntry {
                name: "main".into(),
                addr: 0x1000,
                size: 4,
            },
            FunctionEntry {
                name: "helper".into(),
                addr: 0x1020,
                size: 4,
            },
        ];
        fs::write(
            tmp.path().join("main_1000.c"),
            "int main(void) { return 0; }\n",
        )
        .unwrap();

        let skipped = prune_existing_outputs(tmp.path(), &mut functions).unwrap();
        write_per_file_with_manifest(tmp.path(), &[], &skipped).unwrap();

        let manifest = fs::read_to_string(tmp.path().join(BATCH_MANIFEST_FILE)).unwrap();
        let json: serde_json::Value = serde_json::from_str(&manifest).unwrap();
        assert_eq!(
            json["skipped"],
            serde_json::json!([
                {"addr": 0x1000, "name": "main", "file": "main_1000.c", "status": "skipped"}
            ])
        );
        assert_eq!(functions.len(), 1);
        assert_eq!(functions[0].name, "helper");
    }

    #[test]
    fn test_batch_resume_skips_existing_nonempty_outputs() {
        let tmp = tempfile::tempdir().unwrap();
        let mut functions = vec![
            FunctionEntry {
                name: "main".into(),
                addr: 0x1000,
                size: 4,
            },
            FunctionEntry {
                name: "helper".into(),
                addr: 0x1020,
                size: 4,
            },
        ];
        fs::write(
            tmp.path().join("main_1000.c"),
            "int main(void) { return 0; }\n",
        )
        .unwrap();

        let skipped = prune_existing_outputs(tmp.path(), &mut functions)
            .unwrap()
            .len();

        assert_eq!(skipped, 1);
        assert_eq!(functions.len(), 1);
        assert_eq!(functions[0].name, "helper");
    }

    #[test]
    fn test_batch_resume_keeps_empty_outputs_for_retry() {
        let tmp = tempfile::tempdir().unwrap();
        let mut functions = vec![FunctionEntry {
            name: "main".into(),
            addr: 0x1000,
            size: 4,
        }];
        fs::write(tmp.path().join("main_1000.c"), "").unwrap();

        let skipped = prune_existing_outputs(tmp.path(), &mut functions)
            .unwrap()
            .len();

        assert_eq!(skipped, 0);
        assert_eq!(functions.len(), 1);
    }

    #[test]
    fn test_batch_resume_retries_failed_stub_outputs() {
        let tmp = tempfile::tempdir().unwrap();
        let mut functions = vec![FunctionEntry {
            name: "main".into(),
            addr: 0x1000,
            size: 4,
        }];
        fs::write(
            tmp.path().join("main_1000.c"),
            "/* FAILED: main - control-flow structuring failed */\n",
        )
        .unwrap();

        let skipped = prune_existing_outputs(tmp.path(), &mut functions)
            .unwrap()
            .len();

        assert_eq!(skipped, 0, "failed stubs should be retried");
        assert_eq!(functions.len(), 1, "failed output should stay in worklist");
    }

    #[test]
    fn test_batch_resume_retries_manifest_failed_outputs() {
        let tmp = tempfile::tempdir().unwrap();
        fs::write(
            tmp.path().join("main_1000.c"),
            "int stale(void) { return 0; }\n",
        )
        .unwrap();
        let manifest = BatchManifest {
            version: 1,
            written: vec![BatchManifestEntry {
                addr: 0x1000,
                name: "main".into(),
                file: "main_1000.c".into(),
                status: "failed".into(),
            }],
            skipped: Vec::new(),
        };
        fs::write(
            tmp.path().join(BATCH_MANIFEST_FILE),
            serde_json::to_string_pretty(&manifest).unwrap(),
        )
        .unwrap();

        let mut functions = vec![FunctionEntry {
            name: "main".into(),
            addr: 0x1000,
            size: 4,
        }];
        let skipped = prune_existing_outputs(tmp.path(), &mut functions)
            .unwrap()
            .len();

        assert_eq!(skipped, 0, "manifest failed status should force retry");
        assert_eq!(functions.len(), 1);
    }

    #[test]
    fn test_batch_manifest_merge_preserves_existing_entries() {
        let tmp = tempfile::tempdir().unwrap();
        fs::write(
            tmp.path().join("main_1000.c"),
            "int main(void) { return 0; }\n",
        )
        .unwrap();
        fs::write(
            tmp.path().join("helper_1020.c"),
            "/* FAILED: helper - control-flow structuring failed */\n",
        )
        .unwrap();

        let manifest = BatchManifest {
            version: 1,
            written: vec![
                BatchManifestEntry {
                    addr: 0x1000,
                    name: "main".into(),
                    file: "main_1000.c".into(),
                    status: "ok".into(),
                },
                BatchManifestEntry {
                    addr: 0x1020,
                    name: "helper".into(),
                    file: "helper_1020.c".into(),
                    status: "failed".into(),
                },
            ],
            skipped: Vec::new(),
        };
        fs::write(
            tmp.path().join(BATCH_MANIFEST_FILE),
            serde_json::to_string_pretty(&manifest).unwrap(),
        )
        .unwrap();

        let mut functions = vec![FunctionEntry {
            name: "main".into(),
            addr: 0x1000,
            size: 4,
        }];
        let skipped = prune_existing_outputs(tmp.path(), &mut functions).unwrap();
        write_per_file_with_manifest(tmp.path(), &[], &skipped).unwrap();

        let merged = fs::read_to_string(tmp.path().join(BATCH_MANIFEST_FILE)).unwrap();
        let json: serde_json::Value = serde_json::from_str(&merged).unwrap();
        assert_eq!(json["written"].as_array().unwrap().len(), 2);
        assert_eq!(json["written"][0]["addr"], 0x1000);
        assert_eq!(json["written"][0]["status"], "ok");
        assert_eq!(json["written"][1]["addr"], 0x1020);
        assert_eq!(json["written"][1]["status"], "failed");
    }

    #[test]
    fn test_batch_error_resilience() {
        let config = BatchConfig {
            jobs: 1,
            emit: EmitFormat::C,
            timeout_secs: 0,
            interproc: false,
            all_functions: false,
            scope: None,
            max_iterations: 0,
            progress_style: BatchProgressStyle::Off,
            flirt: pipeline::FlirtConfig::default(),
            dwarf_sidecar: None,
            options: Arc::default(),
        };

        let data = fs::read(fixture("medium.elf")).unwrap();
        let image = ElfLoader::load(&data).unwrap();
        let functions = pipeline::discover_functions(&image, None).unwrap();
        assert!(!functions.is_empty());

        let lifter = get_lifter(image.arch).expect("supported arch");
        let results = decompile_all_parallel(
            &image,
            lifter.as_ref(),
            &functions,
            &config,
            None,
            None,
            None,
        );

        assert_eq!(results.len(), functions.len());
        let has_failures = results.iter().any(|r| r.output.is_err());
        assert!(
            has_failures,
            "timeout=0 should cause at least some failures"
        );
    }

    #[test]
    fn test_batch_jobs_flag() {
        let config = BatchConfig {
            jobs: 1,
            emit: EmitFormat::C,
            timeout_secs: 30,
            interproc: false,
            all_functions: false,
            scope: None,
            max_iterations: 0,
            progress_style: BatchProgressStyle::Off,
            flirt: pipeline::FlirtConfig::default(),
            dwarf_sidecar: None,
            options: Arc::default(),
        };

        let data = fs::read(fixture("hello_world.elf")).unwrap();
        let image = ElfLoader::load(&data).unwrap();
        let functions = pipeline::discover_functions(&image, None).unwrap();

        let lifter = get_lifter(image.arch).expect("supported arch");
        let results = decompile_all_parallel(
            &image,
            lifter.as_ref(),
            &functions,
            &config,
            None,
            None,
            None,
        );
        let succeeded = results.iter().filter(|r| r.output.is_ok()).count();
        assert!(
            succeeded > 0,
            "single-threaded batch should decompile at least one function"
        );
    }

    #[test]
    fn test_sanitize_filename() {
        assert_eq!(sanitize_filename("main", 0x1000), "main_1000.c");
        assert_eq!(
            sanitize_filename("std::vector<int>", 0x2000),
            "std__vector_int__2000.c"
        );
        assert_eq!(sanitize_filename("", 0x3000), "func_3000.c");
    }

    #[test]
    fn test_batch_interproc_produces_output() {
        let config = BatchConfig {
            jobs: 2,
            emit: EmitFormat::C,
            timeout_secs: 60,
            interproc: true,
            all_functions: false,
            scope: None,
            max_iterations: 0,
            progress_style: BatchProgressStyle::Off,
            flirt: pipeline::FlirtConfig::default(),
            dwarf_sidecar: None,
            options: Arc::default(),
        };
        let data = fs::read(fixture("medium.elf")).unwrap();
        let image = ElfLoader::load(&data).unwrap();
        let functions = pipeline::discover_functions(&image, None).unwrap();
        let pool = rayon::ThreadPoolBuilder::new()
            .num_threads(2)
            .build()
            .unwrap();
        let lifter = get_lifter(image.arch).expect("supported arch");
        let results: Vec<BatchResult> = pool.install(|| {
            decompile_interproc(&image, lifter.as_ref(), &functions, &config, None, None)
        });
        let succeeded = results.iter().filter(|r| r.output.is_ok()).count();
        assert!(
            succeeded >= 2,
            "interproc batch should decompile at least 2 functions, got {succeeded}"
        );
    }
}
