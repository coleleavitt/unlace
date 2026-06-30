use std::fs;
use std::io::{Read, Write};
use std::time::Duration;

use anyhow::{Context, Result, bail};
use clap::Parser;
use tracing_subscriber::EnvFilter;

use unlace_ir::ArchId;
use unlace_lift::get_lifter;
use unlace_loader::{
    BinaryImage, ElfLoader, Loader, MachoLoader, PeLoader, import_dwarf_with_sidecar, import_pdb,
    import_pdb_types,
};
use unlace_plugin::PluginManager;

use unlace_cli::annotations::{self, AnnotationDb};
use unlace_cli::args::{self, Args, Cmd, LuminaAction, ProjectAction};
use unlace_cli::batch::{self, BatchConfig};
use unlace_cli::pipeline::{self, PipelineConfig};

fn main() {
    let args = Args::parse();

    let result = match args.cmd {
        Cmd::Project { action } => {
            let _flame_guard = init_tracing(0);
            run_project(action)
        }
        Cmd::Decompile {
            binary,
            function,
            emit,
            arch,
            output,
            capture_dir,
            all: _,
            verbose,
            timeout,
            plugin_dir,
            max_width,
            tab_width,
            dwarf_sidecar,
            annotations_load,
            annotations_save,
            stats,
            no_flirt,
            sig,
            sig_dir,
            flirt_min_confidence,
        } => {
            let _flame_guard = init_tracing(verbose);
            let print_config = if max_width.is_some() || tab_width.is_some() {
                let mut cfg = unlace_output::PrintConfig::from_env();
                if let Some(w) = max_width {
                    cfg.max_line_width = w;
                }
                if let Some(t) = tab_width {
                    cfg.tab_width = t;
                }
                Some(cfg)
            } else {
                None
            };
            let annotation_db = resolve_annotations(&binary, annotations_load.as_deref())
                .unwrap_or_else(|e| {
                    tracing::warn!(err = %e, "failed to load annotations; continuing without");
                    None
                });
            let result = read_dwarf_sidecar(dwarf_sidecar.as_deref())
                .and_then(|dwarf_sidecar_bytes| {
                    build_flirt_config(no_flirt, sig, sig_dir, flirt_min_confidence)
                        .map(|flirt| (dwarf_sidecar_bytes, flirt))
                })
                .and_then(|(dwarf_sidecar_bytes, flirt)| {
                    let config = PipelineConfig {
                        timeout: Duration::from_secs(timeout),
                        print_config,
                        annotations: annotation_db.clone(),
                        flirt,
                        dwarf_sidecar: dwarf_sidecar_bytes,
                    };
                    load_plugins(plugin_dir.as_deref()).and_then(|mgr| {
                        run_decompile(
                            &binary,
                            function.as_deref(),
                            emit,
                            arch.as_deref(),
                            output.as_deref(),
                            capture_dir.as_deref(),
                            &config,
                            &mgr,
                            stats,
                        )
                    })
                });
            if let Some(path) = annotations_save.as_deref() {
                let to_save = annotation_db.unwrap_or_default();
                if let Err(e) = to_save.save(path) {
                    tracing::warn!(err = %e, "failed to write annotations sidecar");
                }
            }
            result
        }
        Cmd::Siggen {
            archive,
            output,
            pattern_len,
            crc_len,
            min_function_len,
            verbose,
        } => {
            let _flame_guard = init_tracing(verbose);
            run_siggen(
                &archive,
                output.as_deref(),
                unlace_loader::SigGenerateOptions {
                    pattern_len,
                    crc_len,
                    min_function_len,
                },
            )
        }
        Cmd::Batch {
            binary,
            jobs,
            emit,
            arch,
            output_dir,
            dwarf_sidecar,
            merged: _,
            timeout,
            interproc,
            all_functions,
            scope,
            max_iterations,
            verbose,
            no_flirt,
            sig,
            sig_dir,
            flirt_min_confidence,
        } => {
            let _flame_guard = init_tracing(verbose);
            build_flirt_config(no_flirt, sig, sig_dir, flirt_min_confidence).and_then(|flirt| {
                run_batch_cmd(
                    binary,
                    jobs,
                    emit,
                    arch,
                    output_dir,
                    dwarf_sidecar,
                    timeout,
                    interproc,
                    all_functions,
                    scope,
                    max_iterations,
                    flirt,
                )
            })
        }
        Cmd::Quality {
            binary,
            format,
            verbose,
            no_flirt,
            sig,
            sig_dir,
            flirt_min_confidence,
        } => {
            let _flame_guard = init_tracing(verbose);
            build_flirt_config(no_flirt, sig, sig_dir, flirt_min_confidence)
                .and_then(|flirt| run_quality(&binary, format, &flirt))
        }
        Cmd::IrDump {
            binary,
            function,
            phase,
            verbose,
        } => {
            let _flame_guard = init_tracing(verbose);
            run_ir_dump(&binary, function.as_deref(), phase.as_deref())
        }
        Cmd::Lumina { action } => run_lumina(action),
        Cmd::Emu {
            binary,
            max_instructions,
            trace,
            verbose,
        } => {
            let _flame_guard = init_tracing(verbose);
            run_emu(&binary, max_instructions, trace)
        }
        Cmd::Dbg {
            pid,
            breakpoint,
            cont,
        } => {
            let _flame_guard = init_tracing(0);
            run_dbg(pid, breakpoint.as_deref(), cont)
        }
        Cmd::Patch {
            binary,
            ea,
            bytes,
            output,
        } => {
            let _flame_guard = init_tracing(0);
            run_patch(&binary, &ea, &bytes, output.as_deref())
        }
        Cmd::Symfetch {
            pdb,
            guid,
            age,
            buildid,
            server,
            fetch,
        } => {
            let _flame_guard = init_tracing(0);
            run_symfetch(
                pdb.as_deref(),
                guid.as_deref(),
                age,
                buildid.as_deref(),
                &server,
                fetch,
            )
        }
        Cmd::Sigload {
            path,
            limit,
            json,
            apply,
            binary,
            force,
            flirt_min_confidence,
        } => {
            let _flame_guard = init_tracing(0);
            run_sigload(
                &path,
                limit,
                json,
                apply,
                binary.as_deref(),
                force,
                flirt_min_confidence,
            )
        }
        Cmd::Tilload {
            path,
            limit,
            json,
            apply,
            binary,
        } => {
            let _flame_guard = init_tracing(0);
            run_tilload(&path, limit, json, apply, binary.as_deref())
        }
        Cmd::Py { script, binary } => {
            let _flame_guard = init_tracing(0);
            run_py(&script, binary.as_deref())
        }
    };

    // Batch 17: per-pass timing dump. The wrapper inside
    // `unlace_passes::run_instrumented` accumulates into a process-global
    // BTreeMap when `UNLACE_TIMING=1`; here we render that table to
    // stderr after the command has run so users get a hot-pass summary.
    // The `pass_timing_enabled()` guard keeps the no-op path free of any
    // string formatting in the common case.
    if unlace_passes::pass_timing_enabled() {
        let table = unlace_passes::dump_pass_timings();
        if !table.is_empty() {
            eprintln!("\n=== UNLACE_TIMING: per-pass wall-clock ===\n{table}");
        }
    }

    // Batch 17 slice 2: per-function CSV export. When
    // `UNLACE_TIMING_CSV=<path>` was set on the parent process, the
    // instrumentation harness has been recording one entry per
    // `(function, pass, iteration)` for the whole run. Flush it now,
    // *after* commands complete, so the file reflects the entire
    // pipeline rather than a partial state. Failure to write the file
    // is reported on stderr but does not fail the command — timing is
    // observability, not correctness.
    if let Some(csv_path) = unlace_passes::pass_timing_csv_path() {
        let csv = unlace_passes::dump_pass_timings_csv();
        if let Err(e) = fs::write(&csv_path, &csv) {
            eprintln!(
                "warning: UNLACE_TIMING_CSV write to '{}' failed: {e}",
                csv_path.display()
            );
        }
    }

    // Batch 16: schedule audit. When `UNLACE_SCHEDULE_AUDIT=<path>` was
    // set, the instrumentation harness recorded a row per
    // `(function, pass, iteration)` invocation with the declared phase.
    // Flush the CSV here so consumers can diff schedules across revisions
    // and a one-line summary of oscillations is surfaced to stderr.
    if let Some(audit_path) = unlace_passes::schedule_audit_path() {
        let csv = unlace_passes::dump_schedule_audit_csv();
        if let Err(e) = fs::write(&audit_path, &csv) {
            eprintln!(
                "warning: UNLACE_SCHEDULE_AUDIT write to '{}' failed: {e}",
                audit_path.display()
            );
        }
        let osc = unlace_passes::schedule_audit_oscillations();
        if !osc.is_empty() {
            eprintln!(
                "\n=== UNLACE_SCHEDULE_AUDIT: {} oscillation(s) detected ===",
                osc.len()
            );
            for v in &osc {
                eprintln!("  {v}");
            }
        }
    }

    if let Err(e) = result {
        eprintln!("Error: {e:#}");
        std::process::exit(1);
    }
}

fn run_project(action: ProjectAction) -> Result<()> {
    match action {
        ProjectAction::New { binary, output } => {
            let project = unlace_session::project::create_for_binary(&binary)?;
            project.save_to(&output)?;
            println!(
                "created {} for {} ({})",
                output.display(),
                binary.display(),
                project.binary.sha256
            );
            Ok(())
        }
        ProjectAction::Open { file, binary, json } => {
            let (_session, loaded) =
                unlace_session::project::open_into_session(&file, binary.as_deref())?;
            let annotations = loaded.annotations();
            if json {
                let summary = serde_json::json!({
                    "file": file,
                    "format": match &loaded {
                        unlace_session::project::LoadedProject::Project(_) => ".unlace",
                        unlace_session::project::LoadedProject::LegacyUnldb(_) => ".unldb",
                    },
                    "binary_path": loaded.binary_path(),
                    "binary_sha256": loaded.binary_sha256(),
                    "selection": loaded.selection(),
                    "annotations": {
                        "renames": annotations.renames.len(),
                        "comments": annotations.comments.len(),
                        "type_overlays": annotations.types.len(),
                        "bookmarks": annotations.bookmarks.len(),
                        "patches": annotations.patches.len(),
                    },
                });
                println!("{}", serde_json::to_string_pretty(&summary)?);
            } else {
                println!("File:          {}", file.display());
                println!(
                    "Format:        {}",
                    match &loaded {
                        unlace_session::project::LoadedProject::Project(_) => ".unlace",
                        unlace_session::project::LoadedProject::LegacyUnldb(_) => ".unldb (legacy)",
                    }
                );
                if let Some(path) = loaded.binary_path() {
                    println!("Binary:        {}", path.display());
                }
                println!("Binary SHA256: {}", loaded.binary_sha256());
                println!(
                    "Annotations:   {} renames, {} comments, {} types, {} bookmarks, {} patches",
                    annotations.renames.len(),
                    annotations.comments.len(),
                    annotations.types.len(),
                    annotations.bookmarks.len(),
                    annotations.patches.len(),
                );
            }
            Ok(())
        }
        ProjectAction::Save { file } => {
            let loaded = unlace_session::project::load_any(&file)?;
            let project = loaded.into_project(None);
            project.save_to(&file)?;
            println!("saved {}", file.display());
            Ok(())
        }
        ProjectAction::ExportAnnotations { file, output } => {
            let loaded = unlace_session::project::load_any(&file)?;
            let json = unlace_session::project::export_annotations_json(&loaded)?;
            if let Some(path) = output {
                fs::write(&path, json)
                    .with_context(|| format!("writing annotations to {}", path.display()))?;
            } else {
                println!("{json}");
            }
            Ok(())
        }
    }
}

fn run_siggen(
    archive_path: &std::path::Path,
    output_path: Option<&std::path::Path>,
    options: unlace_loader::SigGenerateOptions,
) -> Result<()> {
    let patterns =
        unlace_loader::generate_archive_patterns(archive_path, options).with_context(|| {
            format!(
                "failed to generate signatures from '{}'",
                archive_path.display()
            )
        })?;
    let toml = unlace_loader::render_patterns_toml(&patterns);
    if let Some(path) = output_path {
        fs::write(path, toml)
            .with_context(|| format!("failed to write signature output to '{}'", path.display()))?;
    } else {
        let mut stdout = std::io::stdout().lock();
        stdout.write_all(toml.as_bytes())?;
    }
    tracing::info!(count = patterns.len(), archive = %archive_path.display(), "generated FLIRT patterns");
    Ok(())
}

/// Pipeline milestone selected by `ir-dump --phase`.
///
/// `Lift` snapshots the SSA function immediately after construction (no
/// optimisation passes have run). `PostPasses` is the default and matches
/// the IR the C printer would receive. `PostStructuring` re-runs
/// `structure_preserve_returns`, which may rewrite the SSA in place
/// (eager-return splitting, etc.), then dumps the resulting IR.
#[derive(Clone, Copy)]
enum IrDumpPhase {
    Lift,
    PostPasses,
    PostStructuring,
    /// Batch 18: emit the lvar audit table instead of raw SSA.
    Lvars,
    /// Batch 20: emit the type-recovery audit table instead of raw SSA.
    Types,
}

fn parse_ir_dump_phase(s: Option<&str>) -> Result<IrDumpPhase> {
    match s.unwrap_or("post-passes") {
        "lift" => Ok(IrDumpPhase::Lift),
        "post-passes" | "passes" => Ok(IrDumpPhase::PostPasses),
        "post-structuring" | "structuring" | "post-struct" => Ok(IrDumpPhase::PostStructuring),
        "lvars" => Ok(IrDumpPhase::Lvars),
        "types" | "type-audit" => Ok(IrDumpPhase::Types),
        other => bail!(
            "unknown --phase '{other}' (expected: lift, post-passes, post-structuring, lvars, types)"
        ),
    }
}

fn run_ir_dump(
    binary_path: &std::path::Path,
    function_filter: Option<&str>,
    phase_str: Option<&str>,
) -> Result<()> {
    let phase = parse_ir_dump_phase(phase_str)?;

    // Batch 25: mmap path for large binaries, heap path for small ones.
    let input = unlace_cli::binary_input::BinaryInput::open(binary_path)
        .with_context(|| format!("failed to read '{}'", binary_path.display()))?;
    let data = input.as_bytes();

    let image = if ElfLoader::can_load(data) {
        ElfLoader::load(data)
    } else if MachoLoader::can_load(data) {
        MachoLoader::load(data)
    } else if PeLoader::can_load(data) {
        PeLoader::load(data)
    } else {
        bail!(
            "'{}' is not a recognized binary format (ELF, Mach-O, or PE)",
            binary_path.display(),
        );
    }
    .with_context(|| format!("failed to parse '{}'", binary_path.display()))?;

    let lifter = get_lifter(image.arch);
    let functions = pipeline::discover_functions(&image, function_filter)?;

    let mut out = String::new();
    for entry in &functions {
        let ir_func = match pipeline::lift_function(&image, lifter.as_ref(), entry) {
            Ok(f) => f,
            Err(e) => {
                tracing::warn!(name = %entry.name, err = %e, "lift failed; skipping");
                out.push_str(&format!(
                    "// [ir-dump] lift failed for '{}': {}\n",
                    entry.name, e
                ));
                continue;
            }
        };

        let mut ssa = unlace_ir::ssa::build_ssa(ir_func);
        ssa.arch = image.arch;

        match phase {
            IrDumpPhase::Lift => {}
            IrDumpPhase::PostPasses
            | IrDumpPhase::PostStructuring
            | IrDumpPhase::Lvars
            | IrDumpPhase::Types => {
                if let Err(e) = pipeline::run_passes(&mut ssa) {
                    tracing::warn!(name = %entry.name, err = %e, "pass pipeline failed; dumping unoptimized");
                }
                if matches!(phase, IrDumpPhase::PostStructuring)
                    && let Err(e) = unlace_struct::structure_preserve_returns(&mut ssa)
                {
                    tracing::warn!(name = %entry.name, err = ?e, "structurer failed; dumping post-passes IR");
                }
            }
        }

        match phase {
            IrDumpPhase::Lvars => out.push_str(&unlace_output::dump_lvars(&ssa)),
            IrDumpPhase::Types => out.push_str(&unlace_output::dump_type_audit(&ssa)),
            _ => out.push_str(&unlace_output::dump_ir(&ssa)),
        }
    }

    print!("{out}");
    Ok(())
}

fn run_quality(
    binary_path: &std::path::Path,
    format: args::QualityFormat,
    flirt: &pipeline::FlirtConfig,
) -> Result<()> {
    let report = unlace_cli::quality::analyze_binary_with_flirt(binary_path, flirt)?;
    let rendered = match format {
        args::QualityFormat::Md => unlace_cli::quality::render_markdown(&report),
        args::QualityFormat::Json => unlace_cli::quality::render_json(&report)?,
    };
    print!("{rendered}");
    if !rendered.ends_with('\n') {
        println!();
    }
    Ok(())
}

fn run_emu(binary: &std::path::Path, max_instructions: u64, trace: bool) -> Result<()> {
    let bytes = std::fs::read(binary).with_context(|| format!("reading {}", binary.display()))?;
    let image = dispatch_loader(&bytes)?;
    let cfg = unlace_emu::runner::RunConfig {
        max_instructions,
        trace,
        ..unlace_emu::runner::RunConfig::default()
    };
    let mut interp = unlace_emu::Interpreter::new();
    let result = unlace_emu::runner::run_image(&mut interp, &image, &cfg);
    println!("executed {} IR instructions", result.instructions_executed);
    if let Some(code) = result.exit_code {
        println!("exited with code {code}");
    }
    if let Some(fault) = &result.fault {
        println!("faulted: {fault}");
    }
    if trace {
        println!(
            "\n--- syscall trace ({} entries) ---",
            result.syscall_trace.len()
        );
        for entry in &result.syscall_trace {
            println!(
                "  nr={} args={:?} -> {:?}",
                entry.nr, entry.args, entry.outcome
            );
        }
    }
    Ok(())
}

fn run_dbg(pid: u32, breakpoint: Option<&str>, cont: bool) -> Result<()> {
    #[cfg(feature = "dbg-ptrace")]
    {
        use unlace_debugger::Debugger;
        let mut dbg = unlace_debugger::LinuxPtraceDebugger::new();
        dbg.attach(pid)
            .with_context(|| format!("ptrace attach pid={pid}"))?;
        println!("attached to pid {pid}");
        if let Some(s) = breakpoint {
            let ea = parse_hex_u64(s)?;
            let id = dbg.set_breakpoint(ea)?;
            println!("set breakpoint id={id} at {:#x}", ea);
        }
        if cont {
            let reason = dbg.cont()?;
            println!("continued; stopped: {:?}", reason);
        }
        Ok(())
    }
    #[cfg(not(feature = "dbg-ptrace"))]
    {
        bail!(
            "cannot attach to pid {pid} (breakpoint={breakpoint:?}, cont={cont}): \
             unlace-cli was built without the `dbg-ptrace` feature; \
             rebuild with `cargo build -p unlace-cli --features dbg-ptrace` \
             to enable the Linux ptrace debugger backend"
        );
    }
}

fn run_patch(
    binary: &std::path::Path,
    ea: &str,
    bytes_hex: &str,
    output: Option<&std::path::Path>,
) -> Result<()> {
    let addr = parse_hex_u64(ea)?;
    let patch_bytes = parse_hex_bytes(bytes_hex)?;
    let session = unlace_session::Session::new();
    session
        .load_binary(binary)
        .with_context(|| format!("loading {}", binary.display()))?;
    session.add_patch(unlace_session::Patch {
        ea: addr,
        bytes: patch_bytes,
        comment: String::new(),
        source: unlace_session::PatchSource::UserHex,
    });
    let out_path = output.map(std::path::PathBuf::from).unwrap_or_else(|| {
        let mut p = binary.to_path_buf();
        let mut name = p.file_name().unwrap_or_default().to_owned();
        name.push(".patched");
        p.set_file_name(name);
        p
    });
    let report = unlace_session::patches::apply_patches_to(&session, binary, &out_path)?;
    println!(
        "patched {} → {} ({} applied, {} skipped)",
        binary.display(),
        report.output_path.display(),
        report.patches_applied,
        report.patches_skipped,
    );
    Ok(())
}

#[cfg(feature = "python")]
fn run_py(script: &std::path::Path, binary: Option<&std::path::Path>) -> Result<()> {
    let session = unlace_session::Session::new();
    if let Some(b) = binary {
        session
            .load_binary(b)
            .with_context(|| format!("loading {}", b.display()))?;
    }
    let source =
        std::fs::read_to_string(script).with_context(|| format!("reading {}", script.display()))?;
    unlace_idapython::pybridge::run_script(session, &source)
        .map_err(|e| anyhow::anyhow!("python: {e}"))
}

#[cfg(not(feature = "python"))]
fn run_py(_script: &std::path::Path, _binary: Option<&std::path::Path>) -> Result<()> {
    bail!(
        "unlace-cli was built without the `python` feature; \
         rebuild with `cargo build -p unlace-cli --features python` \
         to enable IDAPython script execution"
    )
}

fn run_sigload(
    path: &std::path::Path,
    limit: usize,
    json: bool,
    apply: bool,
    binary: Option<&std::path::Path>,
    force: bool,
    min_confidence: u8,
) -> Result<()> {
    let sig = unlace_flirt::sig::SigFile::load(path)
        .with_context(|| format!("parsing {}", path.display()))?;
    if apply {
        let bin =
            binary.ok_or_else(|| anyhow::anyhow!("--apply requires --binary <path-to-binary>"))?;
        let session = unlace_session::Session::new();
        session
            .load_binary(bin)
            .with_context(|| format!("loading {}", bin.display()))?;
        let matcher = unlace_flirt::FlirtMatcher::from_sig(&sig);
        let report = matcher.apply_to_session_with_min_confidence(&session, force, min_confidence);
        if json {
            let summary = serde_json::json!({
                "sig_path": path,
                "binary": bin,
                "force": force,
                "min_confidence": min_confidence,
                "signatures_loaded": matcher.len(),
                "functions_inspected": report.inspected,
                "functions_renamed": report.renamed,
                "applied": report.applied,
                "applied_details": report.applied_details.iter()
                    .map(|m| serde_json::json!({
                        "addr": m.addr,
                        "name": m.name,
                        "confidence": m.confidence,
                        "signature_id": m.signature_id,
                    }))
                    .collect::<Vec<_>>(),
            });
            println!("{}", serde_json::to_string_pretty(&summary)?);
        } else {
            println!(
                "applied {} sigs from {} to {}: {} of {} functions renamed (min confidence {}%)",
                matcher.len(),
                path.display(),
                bin.display(),
                report.renamed,
                report.inspected,
                min_confidence,
            );
            for detail in report.applied_details.iter().take(limit) {
                println!(
                    "  {:#010x} -> {} (confidence {:.2}, sig #{})",
                    detail.addr, detail.name, detail.confidence, detail.signature_id,
                );
            }
        }
        return Ok(());
    }
    if json {
        let summary = serde_json::json!({
            "version": sig.version,
            "arch": sig.arch,
            "features": sig.features,
            "file_types": sig.file_types,
            "os_types": sig.os_types,
            "app_types": sig.app_types,
            "library_name": sig.library_name,
            "n_functions": sig.n_functions,
            "extracted_functions": sig.functions.len(),
            "sample": sig.functions.iter()
                .take(limit)
                .map(|f| serde_json::json!({
                    "name": f.name,
                    "pattern_hex": hex::encode(&f.pattern),
                }))
                .collect::<Vec<_>>(),
        });
        println!("{}", serde_json::to_string_pretty(&summary)?);
    } else {
        println!(
            "IDASGN v{} arch={} features={:#x}",
            sig.version, sig.arch, sig.features
        );
        println!("library: {:?}", sig.library_name);
        println!(
            "declared n_functions={}, extracted ascii names={}",
            sig.n_functions,
            sig.functions.len()
        );
        println!(
            "sample of first {} functions:",
            limit.min(sig.functions.len())
        );
        for f in sig.functions.iter().take(limit) {
            println!("  {} pattern={} bytes", f.name, f.pattern.len());
        }
    }
    Ok(())
}

fn run_tilload(
    path: &std::path::Path,
    limit: usize,
    json: bool,
    apply: bool,
    binary: Option<&std::path::Path>,
) -> Result<()> {
    let til = unlace_session::til_parser::TilFile::load(path)
        .with_context(|| format!("parsing {}", path.display()))?;
    if apply {
        let bin =
            binary.ok_or_else(|| anyhow::anyhow!("--apply requires --binary <path-to-binary>"))?;
        let session = unlace_session::Session::new();
        session
            .load_binary(bin)
            .with_context(|| format!("loading {}", bin.display()))?;
        let mut catalog = unlace_session::TilCatalog::new();
        catalog.add_from_til(&til);
        let report = catalog.apply_to_session(&session);
        if json {
            let summary = serde_json::json!({
                "til_path": path,
                "binary": bin,
                "catalog_size": report.catalog_size,
                "symbols_annotated": report.annotated,
                "applied": report.applied,
            });
            println!("{}", serde_json::to_string_pretty(&summary)?);
        } else {
            println!(
                "applied til catalog ({} entries from {}) to {}: {} symbols annotated",
                report.catalog_size,
                path.display(),
                bin.display(),
                report.annotated,
            );
            for (addr, name) in report.applied.iter().take(limit) {
                println!("  {:#010x} -> {}", addr, name);
            }
        }
        return Ok(());
    }
    if json {
        let summary = serde_json::json!({
            "version": til.version,
            "flags": til.flags,
            "title": til.title,
            "base": til.base,
            "symbol_count": til.symbols.len(),
            "sample": til.symbols.iter()
                .take(limit)
                .map(|s| serde_json::json!({
                    "name": s.name,
                    "ordinal": s.ordinal,
                    "type_bytes_len": s.type_bytes.len(),
                }))
                .collect::<Vec<_>>(),
        });
        println!("{}", serde_json::to_string_pretty(&summary)?);
    } else {
        println!("IDATIL v{} flags={:#x}", til.version, til.flags);
        println!("title: {:?}", til.title);
        println!("base:  {:?}", til.base);
        println!("symbol_count: {}", til.symbols.len());
        println!("sample of first {} symbols:", limit.min(til.symbols.len()));
        for s in til.symbols.iter().take(limit) {
            println!(
                "  {} ord={} type={} bytes",
                s.name,
                s.ordinal,
                s.type_bytes.len()
            );
        }
    }
    Ok(())
}

fn run_symfetch(
    pdb: Option<&str>,
    guid: Option<&str>,
    age: u32,
    buildid: Option<&str>,
    server: &str,
    fetch: bool,
) -> Result<()> {
    if let (Some(pdb_name), Some(guid_hex)) = (pdb, guid) {
        let guid_bytes = parse_guid(guid_hex)?;
        let url = unlace_loader::symcache::msft_symbol_server_url(pdb_name, &guid_bytes, age);
        println!("{url}");
        if fetch {
            let cache_dir = unlace_loader::symcache::default_cache_dir();
            let target =
                unlace_loader::symcache::msft_cache_path(&cache_dir, pdb_name, &guid_bytes, age);
            return fetch_url_to(&url, &target);
        }
        return Ok(());
    }
    if let Some(bid) = buildid {
        let bid_bytes = parse_hex_bytes(bid)?;
        let url = unlace_loader::symcache::debuginfod_url(server, &bid_bytes);
        println!("{url}");
        if fetch {
            let cache_dir = unlace_loader::symcache::default_cache_dir();
            let target = unlace_loader::symcache::debuginfod_cache_path(&cache_dir, &bid_bytes);
            return fetch_url_to(&url, &target);
        }
        return Ok(());
    }
    bail!("supply either --pdb + --guid + --age (MSFT) or --buildid (debuginfod)")
}

fn fetch_url_to(url: &str, target: &std::path::Path) -> Result<()> {
    println!("fetching {url}");
    let report = unlace_loader::symcache_fetch::fetch_to_path(url, target)
        .map_err(|e| anyhow::anyhow!("{e}"))?;
    println!(
        "wrote {} bytes -> {}",
        report.bytes_written,
        report.destination.display()
    );
    Ok(())
}

fn dispatch_loader(data: &[u8]) -> Result<BinaryImage> {
    if ElfLoader::can_load(data) {
        ElfLoader::load(data).context("ELF load failed")
    } else if MachoLoader::can_load(data) {
        MachoLoader::load(data).context("Mach-O load failed")
    } else if PeLoader::can_load(data) {
        PeLoader::load(data).context("PE load failed")
    } else {
        bail!("unrecognized binary format (not ELF/PE/Mach-O)")
    }
}

fn parse_hex_u64(s: &str) -> Result<u64> {
    let t = s.trim();
    let hex = t
        .strip_prefix("0x")
        .or_else(|| t.strip_prefix("0X"))
        .unwrap_or(t);
    u64::from_str_radix(hex, 16).with_context(|| format!("parsing {s:?} as hex u64"))
}

fn parse_hex_bytes(s: &str) -> Result<Vec<u8>> {
    let t: String = s
        .chars()
        .filter(|c| !c.is_whitespace() && *c != '-')
        .collect();
    if !t.len().is_multiple_of(2) {
        bail!("hex byte string must have even length");
    }
    let mut out = Vec::with_capacity(t.len() / 2);
    for i in (0..t.len()).step_by(2) {
        out.push(
            u8::from_str_radix(&t[i..i + 2], 16).with_context(|| format!("parsing byte at {i}"))?,
        );
    }
    Ok(out)
}

fn parse_guid(s: &str) -> Result<[u8; 16]> {
    let bytes = parse_hex_bytes(s)?;
    if bytes.len() != 16 {
        bail!("GUID must be 16 bytes (32 hex chars), got {}", bytes.len());
    }
    let mut out = [0u8; 16];
    out.copy_from_slice(&bytes);
    Ok(out)
}

/// Run the `unlace lumina` subcommand. The async runtime is spun up here so
/// non-Lumina invocations stay synchronous (and don't pay the tokio cost).
fn run_lumina(action: LuminaAction) -> Result<()> {
    use sha2::{Digest, Sha256};
    use std::net::ToSocketAddrs;
    use std::sync::Arc;
    use unlace_lumina::client::Client;
    use unlace_lumina::db::SqliteStore;
    use unlace_lumina::server::{FuncMetadata, serve};

    let rt = tokio::runtime::Builder::new_multi_thread()
        .enable_all()
        .build()
        .context("build tokio runtime")?;
    rt.block_on(async move {
        match action {
            LuminaAction::Serve { bind, db } => {
                let addr = bind
                    .to_socket_addrs()?
                    .next()
                    .ok_or_else(|| anyhow::anyhow!("could not resolve --bind {bind}"))?;
                let store = if db == ":memory:" {
                    SqliteStore::open_in_memory()?
                } else {
                    SqliteStore::open(&db)?
                };
                tracing::info!(%addr, db = %db, "starting Lumina v6 server");
                serve(addr, Arc::new(store)).await?;
                Ok::<_, anyhow::Error>(())
            }
            LuminaAction::Push {
                server,
                binary,
                name,
                proto,
                user,
                password,
            } => {
                let bytes =
                    std::fs::read(&binary).with_context(|| format!("read {}", binary.display()))?;
                let mut hasher = Sha256::new();
                hasher.update(&bytes);
                let mut hash = [0u8; 32];
                hash.copy_from_slice(&hasher.finalize());
                let addr = server
                    .to_socket_addrs()?
                    .next()
                    .ok_or_else(|| anyhow::anyhow!("could not resolve --server {server}"))?;
                let mut c = Client::connect(addr).await?;
                let outcome = c.helo(proto, &user, &password).await?;
                if let Some(b) = outcome.server_banner {
                    println!("connected: {b}");
                }
                let rec = FuncMetadata {
                    name,
                    size: bytes.len() as u64,
                    metadata: bytes,
                    counter: 1,
                    calcrel_hash: hash,
                };
                let statuses = c.push_md(&[rec]).await?;
                println!("PUSH_MD statuses: {statuses:?}");
                println!("hash: {}", hex_encode(&hash));
                Ok(())
            }
            LuminaAction::Pull {
                server,
                hash,
                proto,
                user,
                password,
            } => {
                let hash_bytes = hex_decode(&hash)
                    .ok_or_else(|| anyhow::anyhow!("--hash must be 64 hex chars"))?;
                let addr = server
                    .to_socket_addrs()?
                    .next()
                    .ok_or_else(|| anyhow::anyhow!("could not resolve --server {server}"))?;
                let mut c = Client::connect(addr).await?;
                _ = c.helo(proto, &user, &password).await?;
                let rows = c.pull_md(&[hash_bytes]).await?;
                match &rows[0] {
                    Some(r) => {
                        println!(
                            "name={} size={} counter={} metadata_len={}",
                            r.name,
                            r.size,
                            r.counter,
                            r.metadata.len()
                        );
                    }
                    None => println!("(no record found for hash)"),
                }
                Ok(())
            }
        }
    })
}

fn hex_encode(b: &[u8; 32]) -> String {
    const HEX: &[u8; 16] = b"0123456789abcdef";
    let mut s = String::with_capacity(64);
    for &byte in b {
        s.push(HEX[(byte >> 4) as usize] as char);
        s.push(HEX[(byte & 0xf) as usize] as char);
    }
    s
}

fn hex_decode(s: &str) -> Option<[u8; 32]> {
    if s.len() != 64 {
        return None;
    }
    let mut out = [0u8; 32];
    for (i, chunk) in s.as_bytes().chunks(2).enumerate() {
        let hi = hex_nibble(chunk[0])?;
        let lo = hex_nibble(chunk[1])?;
        out[i] = (hi << 4) | lo;
    }
    Some(out)
}

fn hex_nibble(b: u8) -> Option<u8> {
    match b {
        b'0'..=b'9' => Some(b - b'0'),
        b'a'..=b'f' => Some(b - b'a' + 10),
        b'A'..=b'F' => Some(b - b'A' + 10),
        _ => None,
    }
}

/// Install the global tracing subscriber.
///
/// Composition (bottom → top):
///   1. `Registry`             — owns span storage so [`tracing-flame`] can walk it.
///   2. `EnvFilter`            — RUST_LOG / -v / -vv / -vvv level filter.
///   3. `fmt::Layer` (stderr)  — pretty-printed lines for humans.
///   4. `FlameLayer` (optional) — when `UNLACE_FLAME=<path>` is set, capture
///      per-span timings and write a folded-stack file readable by
///      `inferno-flamegraph`. Wrapped in a `WorkerGuard` returned to the
///      caller so it stays alive for the lifetime of the process and the
///      folded file is flushed on drop.
///
/// Usage to produce a flamegraph:
///   UNLACE_FLAME=/tmp/u.folded unlace decompile <bin>
///   cat /tmp/u.folded | inferno-flamegraph > /tmp/u.svg
fn init_tracing(
    verbose: u8,
) -> Option<tracing_flame::FlushGuard<std::io::BufWriter<std::fs::File>>> {
    let level = match verbose {
        0 => "warn",
        1 => "info",
        2 => "debug",
        _ => "trace",
    };
    let env_filter = EnvFilter::try_from_default_env().unwrap_or_else(|_| EnvFilter::new(level));

    // DEFAULT PATH (no UNLACE_FLAME): a single global fmt subscriber whose
    // verbosity comes from a GLOBAL `EnvFilter`, not a per-layer `.with_filter()`.
    //
    // The per-layer `Filtered` machinery in tracing-subscriber 0.3.x keeps a
    // thread-local `RefCell` filter state that double-borrows ("RefCell already
    // borrowed") when spans are entered/evaluated re-entrantly across the rayon
    // worker threads `unlace batch` spawns — a deterministic abort. A global
    // env filter is evaluated directly in `enabled()` and never touches that
    // per-layer RefCell, so the concurrent batch path is safe. (The work-stealing
    // pool was never the cause; the per-layer fmt filter was.)
    let Ok(path) = std::env::var("UNLACE_FLAME") else {
        tracing_subscriber::fmt()
            .with_writer(std::io::stderr)
            .with_env_filter(env_filter)
            .init();
        return None;
    };

    // FLAME PATH (opt-in via UNLACE_FLAME): the flame layer must see TRACE-level
    // pass spans independent of the user's verbosity, which requires per-layer
    // filtering. This is single-shot profiling, not the concurrent batch path.
    use tracing_flame::FlameLayer;
    use tracing_subscriber::Layer;
    use tracing_subscriber::layer::SubscriberExt;
    use tracing_subscriber::util::SubscriberInitExt;

    let (flame_layer, flame_guard) = match FlameLayer::with_file(&path) {
        Ok((layer, guard)) => (
            layer.with_filter(tracing_subscriber::filter::LevelFilter::TRACE),
            guard,
        ),
        Err(e) => {
            // Fall back to the safe global-filter default path.
            eprintln!("warning: UNLACE_FLAME='{path}' could not open: {e}");
            tracing_subscriber::fmt()
                .with_writer(std::io::stderr)
                .with_env_filter(env_filter)
                .init();
            return None;
        }
    };

    let fmt_layer = tracing_subscriber::fmt::layer()
        .with_writer(std::io::stderr)
        .with_filter(env_filter);
    tracing_subscriber::registry()
        .with(fmt_layer)
        .with(flame_layer)
        .init();
    Some(flame_guard)
}

/// Resolve which annotation DB (if any) should be loaded for `binary`.
///
/// * Explicit `--annotations-load` always wins (and errors if missing).
/// * Otherwise the default sidecar `<binary>.unlace.json` is used *only* if
///   it already exists — absence is not an error.
fn resolve_annotations(
    binary: &std::path::Path,
    explicit: Option<&std::path::Path>,
) -> Result<Option<AnnotationDb>> {
    if let Some(path) = explicit {
        return AnnotationDb::load(path).map(Some);
    }
    let sidecar = annotations::default_path(binary);
    if sidecar.exists() {
        return AnnotationDb::load(&sidecar).map(Some);
    }
    Ok(None)
}

fn build_flirt_config(
    no_flirt: bool,
    sig_paths: Vec<std::path::PathBuf>,
    sig_dirs: Vec<std::path::PathBuf>,
    min_confidence: u8,
) -> Result<pipeline::FlirtConfig> {
    pipeline::FlirtConfig::from_options(pipeline::FlirtOptions {
        enabled: !no_flirt,
        sig_paths,
        sig_dirs,
        min_confidence,
    })
}

fn load_plugins(dir: Option<&std::path::Path>) -> Result<PluginManager> {
    let mut mgr = PluginManager::new();
    if let Some(dir) = dir {
        let count = mgr
            .load_from_dir(dir)
            .with_context(|| format!("failed to load plugins from '{}'", dir.display()))?;
        tracing::info!(count, dir = %dir.display(), "loaded plugins");
    }
    Ok(mgr)
}

/// Look for a `.pdb` sidecar next to `binary_path` and, if one exists,
/// parse debug metadata into `image.pdb_types` and `image.pdb_info`.
/// Downstream debug overlays and the C printer consume these fields.
///
/// Resolution order:
/// 1. Any `DebugRecord.pdb_path` recorded by the PE CodeView parser,
///    interpreted *only by basename* and looked up next to the binary
///    (the absolute path baked into the PE points at the build host).
/// 2. A sibling `<stem>.pdb` next to the binary.
///
/// Failure is non-fatal: we trace and move on, mirroring how DWARF is
/// handled in `run_decompile`.
/// Read the optional `--dwarf-sidecar` file into memory. Returns `Ok(None)`
/// when no path was supplied, and a contextual error when the path is set but
/// unreadable (rather than silently degrading to no debug info).
fn read_dwarf_sidecar(path: Option<&std::path::Path>) -> Result<Option<Vec<u8>>> {
    match path {
        Some(p) => {
            let bytes = fs::read(p)
                .with_context(|| format!("failed to read --dwarf-sidecar '{}'", p.display()))?;
            tracing::info!(sidecar = %p.display(), bytes = bytes.len(), "loaded DWARF sidecar");
            Ok(Some(bytes))
        }
        None => Ok(None),
    }
}

fn attach_pdb_sidecar(image: &mut BinaryImage, binary_path: &std::path::Path) {
    if image.pdb_types.is_some() && image.pdb_info.is_some() {
        return;
    }
    let parent = binary_path
        .parent()
        .unwrap_or_else(|| std::path::Path::new("."));
    let mut candidates: Vec<std::path::PathBuf> = Vec::new();

    for rec in &image.debug_records {
        if let Some(pdb_path) = rec.pdb_path.as_deref()
            && let Some(name) = std::path::Path::new(pdb_path).file_name()
        {
            candidates.push(parent.join(name));
        }
    }
    if let Some(stem) = binary_path.file_stem() {
        let mut sibling = parent.join(stem);
        sibling.set_extension("pdb");
        candidates.push(sibling);
    }

    for candidate in candidates {
        if !candidate.exists() {
            continue;
        }
        let mut loaded_sidecar = false;
        if image.pdb_types.is_none() {
            match import_pdb_types(&candidate) {
                Ok(types) => {
                    tracing::info!(
                        pdb = %candidate.display(),
                        structs = types.structs.len(),
                        "loaded PDB type sidecar",
                    );
                    image.pdb_types = Some(types);
                    loaded_sidecar = true;
                }
                Err(e) => {
                    tracing::debug!(
                        pdb = %candidate.display(),
                        err = %e,
                        "PDB type sidecar import failed; continuing without it",
                    );
                }
            }
        }
        if image.pdb_info.is_none() {
            match import_pdb(&candidate) {
                Ok(info) => {
                    tracing::info!(
                        pdb = %candidate.display(),
                        local_functions = info.function_locals.len(),
                        "loaded PDB debug sidecar",
                    );
                    image.pdb_info = Some(info);
                    loaded_sidecar = true;
                }
                Err(e) => {
                    tracing::debug!(
                        pdb = %candidate.display(),
                        err = %e,
                        "PDB debug sidecar import failed; continuing without it",
                    );
                }
            }
        }
        if loaded_sidecar {
            return;
        }
    }
}

#[allow(clippy::too_many_arguments)]
fn run_decompile(
    binary_path: &std::path::Path,
    function_filter: Option<&str>,
    emit: args::EmitFormat,
    arch_override: Option<&str>,
    output_path: Option<&std::path::Path>,
    capture_dir: Option<&std::path::Path>,
    config: &PipelineConfig,
    _plugin_mgr: &PluginManager,
    stats: bool,
) -> Result<()> {
    let mut sw = StatsCollector::new(stats);
    let t_load = std::time::Instant::now();
    let data = fs::read(binary_path)
        .with_context(|| format!("failed to read '{}'", binary_path.display()))?;

    let mut image = if ElfLoader::can_load(&data) {
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
    .with_context(|| format!("failed to parse '{}'", binary_path.display()))?;
    sw.phase("load+parse", t_load.elapsed());
    sw.set_input_size(data.len() as u64);

    tracing::info!(arch = %image.arch, entry = %format_args!("{:#x}", image.entry), "loaded binary");

    attach_pdb_sidecar(&mut image, binary_path);

    if let Some(override_str) = arch_override {
        let requested = unlace_cli::parse_arch(override_str)?;
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

    let lifter = get_lifter(image.arch);
    let t_discover = std::time::Instant::now();
    let mut functions = pipeline::discover_functions(&image, function_filter)?;

    let dwarf = match import_dwarf_with_sidecar(&image, config.dwarf_sidecar.as_deref()) {
        Ok(d) if !d.functions.is_empty() || !d.structs.is_empty() => {
            tracing::info!(
                functions = d.functions.len(),
                structs = d.structs.len(),
                "loaded DWARF debug info",
            );
            pipeline::drop_dwarf_duplicate_subfunctions(&mut functions, &d);
            Some(d)
        }
        Ok(_) => None,
        Err(e) => {
            tracing::debug!(err = %e, "DWARF import failed; continuing without type info");
            None
        }
    };
    sw.phase("discover+dwarf", t_discover.elapsed());
    sw.set_function_count(functions.len());

    tracing::info!(count = functions.len(), "discovered functions");

    // Scan RTTI once for the whole binary; the C printer uses it to
    // emit class hierarchy + reconstructed vtable layouts.
    let t_rtti = std::time::Instant::now();
    let rtti = unlace_loader::scan_rtti(&image);
    let rtti_opt = if rtti.is_empty() { None } else { Some(&rtti) };
    sw.phase("rtti-scan", t_rtti.elapsed());

    let mut all_output = String::new();

    let t_decompile = std::time::Instant::now();
    let total = functions.len();
    for (idx, func_entry) in functions.iter().enumerate() {
        tracing::info!(name = %func_entry.name, addr = %format_args!("{:#x}", func_entry.addr), "decompiling");
        sw.tick_progress(idx, total, &func_entry.name);

        let t_fn = std::time::Instant::now();
        match pipeline::decompile_function_with_symbols(
            &image,
            lifter.as_ref(),
            func_entry,
            emit,
            config,
            dwarf.as_ref(),
            &functions,
            rtti_opt,
        ) {
            Ok(text) => {
                sw.record_function(&func_entry.name, t_fn.elapsed(), text.len(), &text);
                all_output.push_str(&text);
            }
            Err(e) => {
                sw.record_failure(&func_entry.name);
                tracing::warn!(name = %func_entry.name, err = %e, "function decompilation failed");
                all_output.push_str(&format!(
                    "/* decompilation failed for '{}': {} */\n",
                    func_entry.name, e
                ));
            }
        }
    }
    sw.phase("decompile (all functions)", t_decompile.elapsed());
    sw.clear_progress();

    let t_post = std::time::Instant::now();
    if matches!(emit, args::EmitFormat::C) {
        all_output = unlace_output::dedupe_ida_typedefs(&all_output);
        all_output = unlace_output::declare_pseudo_c_externals(&all_output);
        all_output = unlace_output::dedupe_rtti_hierarchy(&all_output);
    }
    sw.phase("post-process", t_post.elapsed());
    sw.set_output_size(all_output.len() as u64);

    if let Some(capture_root) = resolve_decompile_capture_dir(capture_dir) {
        let capture_path = write_decompile_capture(
            &capture_root,
            binary_path,
            &data,
            &image,
            function_filter,
            emit,
            output_path,
            functions.len(),
            &all_output,
        )?;
        eprintln!("unlace decompile capture: {}", capture_path.display());
    }

    if let Some(path) = output_path {
        let mut file = fs::File::create(path)
            .with_context(|| format!("failed to create '{}'", path.display()))?;
        file.write_all(all_output.as_bytes())?;
        tracing::info!(path = %path.display(), "wrote output");
    } else {
        print!("{all_output}");
    }

    sw.emit_summary(binary_path);
    Ok(())
}

fn resolve_decompile_capture_dir(cli_dir: Option<&std::path::Path>) -> Option<std::path::PathBuf> {
    cli_dir.map(std::path::Path::to_path_buf).or_else(|| {
        std::env::var_os("UNLACE_DECOMPILE_CAPTURE_DIR")
            .filter(|v| !v.is_empty())
            .map(std::path::PathBuf::from)
    })
}

#[allow(clippy::too_many_arguments)]
fn write_decompile_capture(
    capture_root: &std::path::Path,
    binary_path: &std::path::Path,
    binary_bytes: &[u8],
    image: &BinaryImage,
    function_filter: Option<&str>,
    emit: args::EmitFormat,
    output_path: Option<&std::path::Path>,
    function_count: usize,
    output: &str,
) -> Result<std::path::PathBuf> {
    fs::create_dir_all(capture_root).with_context(|| {
        format!(
            "failed to create decompile capture root '{}'",
            capture_root.display()
        )
    })?;

    let unix_ms = current_unix_millis();
    let binary_stem = binary_path
        .file_stem()
        .and_then(|s| s.to_str())
        .map(sanitize_path_component)
        .filter(|s| !s.is_empty())
        .unwrap_or_else(|| "binary".to_string());
    let function_part = function_filter
        .map(sanitize_path_component)
        .filter(|s| !s.is_empty())
        .unwrap_or_else(|| "all".to_string());

    let mut run_dir = None;
    let mut run_uuid = String::new();
    for _ in 0..16 {
        let uuid = generate_uuid_v4();
        let candidate =
            capture_root.join(format!("{unix_ms}-{binary_stem}-{function_part}-{uuid}"));
        match fs::create_dir(&candidate) {
            Ok(()) => {
                run_uuid = uuid;
                run_dir = Some(candidate);
                break;
            }
            Err(e) if e.kind() == std::io::ErrorKind::AlreadyExists => continue,
            Err(e) => {
                return Err(e).with_context(|| {
                    format!(
                        "failed to create decompile capture directory '{}'",
                        candidate.display()
                    )
                });
            }
        }
    }
    let run_dir = run_dir.with_context(|| {
        format!(
            "failed to allocate a unique decompile capture directory under '{}'",
            capture_root.display()
        )
    })?;

    let output_file = capture_output_filename(emit);
    let output_path_in_capture = run_dir.join(output_file);
    fs::write(&output_path_in_capture, output).with_context(|| {
        format!(
            "failed to write decompile capture output '{}'",
            output_path_in_capture.display()
        )
    })?;

    let manifest = serde_json::json!({
        "schema": "unlace-decompile-capture-v1",
        "run_id": run_uuid,
        "timestamp_unix_ms": unix_ms,
        "argv": std::env::args_os()
            .map(|arg| arg.to_string_lossy().to_string())
            .collect::<Vec<_>>(),
        "binary": binary_path.display().to_string(),
        "binary_sha256": unlace_cli::cache::sha256_hex(binary_bytes),
        "binary_size": binary_bytes.len(),
        "arch": image.arch.to_string(),
        "entry": format!("{:#x}", image.entry),
        "emit": format!("{emit:?}"),
        "function_filter": function_filter,
        "function_count": function_count,
        "requested_output_path": output_path.map(|p| p.display().to_string()),
        "captured_output_file": output_file,
        "captured_output_bytes": output.len(),
        "captured_output_sha256": unlace_cli::cache::sha256_hex(output.as_bytes()),
    });
    let manifest_path = run_dir.join("manifest.json");
    let manifest_bytes = serde_json::to_vec_pretty(&manifest)?;
    fs::write(&manifest_path, manifest_bytes).with_context(|| {
        format!(
            "failed to write decompile capture manifest '{}'",
            manifest_path.display()
        )
    })?;

    Ok(run_dir)
}

fn capture_output_filename(emit: args::EmitFormat) -> &'static str {
    match emit {
        args::EmitFormat::C => "output.c",
        args::EmitFormat::Ir => "output.ir",
        args::EmitFormat::CfgDot => "output.dot",
    }
}

fn current_unix_millis() -> u128 {
    std::time::SystemTime::now()
        .duration_since(std::time::UNIX_EPOCH)
        .unwrap_or_default()
        .as_millis()
}

fn sanitize_path_component(input: &str) -> String {
    let mut out = String::with_capacity(input.len().min(80));
    for ch in input.chars() {
        if ch.is_ascii_alphanumeric() || matches!(ch, '-' | '_' | '.') {
            out.push(ch);
        } else {
            out.push('_');
        }
        if out.len() >= 80 {
            break;
        }
    }
    out.trim_matches('_').to_string()
}

fn generate_uuid_v4() -> String {
    let mut bytes = [0u8; 16];
    if fs::File::open("/dev/urandom")
        .and_then(|mut f| f.read_exact(&mut bytes))
        .is_err()
    {
        use sha2::{Digest, Sha256};
        let mut hasher = Sha256::new();
        hasher.update(current_unix_millis().to_le_bytes());
        hasher.update(std::process::id().to_le_bytes());
        hasher.update(format!("{:?}", std::thread::current().id()).as_bytes());
        let digest = hasher.finalize();
        bytes.copy_from_slice(&digest[..16]);
    }

    bytes[6] = (bytes[6] & 0x0f) | 0x40;
    bytes[8] = (bytes[8] & 0x3f) | 0x80;
    format!(
        "{:02x}{:02x}{:02x}{:02x}-{:02x}{:02x}-{:02x}{:02x}-{:02x}{:02x}-{:02x}{:02x}{:02x}{:02x}{:02x}{:02x}",
        bytes[0],
        bytes[1],
        bytes[2],
        bytes[3],
        bytes[4],
        bytes[5],
        bytes[6],
        bytes[7],
        bytes[8],
        bytes[9],
        bytes[10],
        bytes[11],
        bytes[12],
        bytes[13],
        bytes[14],
        bytes[15]
    )
}

// ============================================================================
// --stats: per-phase + per-function performance + quality scorecard
// ============================================================================

/// Collects timing + counter data across the decompile pipeline and
/// prints a scorecard to stderr at the end. All collection is gated on
/// the `--stats` flag; when off, every method is a near-noop so the hot
/// path stays clean.
struct StatsCollector {
    on: bool,
    input_bytes: u64,
    output_bytes: u64,
    function_count: usize,
    phases: Vec<(String, std::time::Duration)>,
    per_func: Vec<FunctionStat>,
    failed_count: usize,
    // Aggregate quality counters scraped from the emitted text. Cheap
    // substring tally — exact match against the C printer's tokens.
    decompile_failed_blocks: usize,
    flirt_matches: usize,
    unimplemented_tokens: usize,
    callother_tokens: usize,
    goto_tokens: usize,
    readfsqword_tokens: usize,
    stack_chk_fail_tokens: usize,
    last_progress_len: usize,
}

struct FunctionStat {
    name: String,
    elapsed_us: u128,
    out_len: usize,
}

impl StatsCollector {
    fn new(on: bool) -> Self {
        Self {
            on,
            input_bytes: 0,
            output_bytes: 0,
            function_count: 0,
            phases: Vec::new(),
            per_func: Vec::new(),
            failed_count: 0,
            decompile_failed_blocks: 0,
            flirt_matches: 0,
            unimplemented_tokens: 0,
            callother_tokens: 0,
            goto_tokens: 0,
            readfsqword_tokens: 0,
            stack_chk_fail_tokens: 0,
            last_progress_len: 0,
        }
    }

    fn phase(&mut self, name: &str, dur: std::time::Duration) {
        if !self.on {
            return;
        }
        self.phases.push((name.to_string(), dur));
    }

    fn set_input_size(&mut self, n: u64) {
        self.input_bytes = n;
    }

    fn set_output_size(&mut self, n: u64) {
        self.output_bytes = n;
    }

    fn set_function_count(&mut self, n: usize) {
        self.function_count = n;
    }

    fn tick_progress(&mut self, idx: usize, total: usize, name: &str) {
        if !self.on || total == 0 {
            return;
        }
        // Only redraw every ~32 functions or for the last one to avoid
        // killing throughput on huge binaries.
        let interval = (total / 100).max(1);
        if !idx.is_multiple_of(interval) && idx + 1 != total {
            return;
        }
        let pct = (idx as f64 / total as f64) * 100.0;
        let bar_width = 30usize;
        let filled = ((pct / 100.0) * bar_width as f64) as usize;
        let bar: String = (0..bar_width)
            .map(|i| if i < filled { '=' } else { ' ' })
            .collect();
        let trimmed_name: String = name.chars().take(40).collect();
        let line = format!(
            "\r[{}] {:>3.0}% {}/{} {}",
            bar, pct, idx, total, trimmed_name
        );
        let pad = self.last_progress_len.saturating_sub(line.len());
        eprint!("{}{}", line, " ".repeat(pad));
        _ = std::io::Write::flush(&mut std::io::stderr());
        self.last_progress_len = line.len();
    }

    fn clear_progress(&mut self) {
        if !self.on || self.last_progress_len == 0 {
            return;
        }
        eprint!("\r{}\r", " ".repeat(self.last_progress_len));
        _ = std::io::Write::flush(&mut std::io::stderr());
        self.last_progress_len = 0;
    }

    fn record_function(
        &mut self,
        name: &str,
        elapsed: std::time::Duration,
        out_len: usize,
        text: &str,
    ) {
        if !self.on {
            return;
        }
        self.per_func.push(FunctionStat {
            name: name.to_string(),
            elapsed_us: elapsed.as_micros(),
            out_len,
        });
        // Tally quality tokens. These match what the C printer emits.
        self.unimplemented_tokens += text.matches("UNIMPLEMENTED").count();
        self.callother_tokens += text.matches("CALLOTHER").count();
        self.goto_tokens += text.matches("goto ").count();
        self.readfsqword_tokens += text.matches("__readfsqword").count();
        self.stack_chk_fail_tokens += text.matches("__stack_chk_fail").count();
        self.flirt_matches += text.matches("/* flirt:").count();
        self.decompile_failed_blocks += text.matches("/* decompilation failed").count();
    }

    fn record_failure(&mut self, _name: &str) {
        if !self.on {
            return;
        }
        self.failed_count += 1;
    }

    fn emit_summary(&self, binary: &std::path::Path) {
        if !self.on {
            return;
        }
        let total_dur: std::time::Duration = self.phases.iter().map(|(_, d)| *d).sum();
        let bin_kb = self.input_bytes as f64 / 1024.0;
        let out_kb = self.output_bytes as f64 / 1024.0;
        let throughput = if total_dur.as_secs_f64() > 0.0 {
            (self.input_bytes as f64) / (1024.0 * total_dur.as_secs_f64())
        } else {
            0.0
        };

        eprintln!();
        eprintln!("====================================================");
        eprintln!("  unlace --stats: {}", binary.display());
        eprintln!("====================================================");
        eprintln!(
            "  input:           {:>10.2} KB    ({} bytes)",
            bin_kb, self.input_bytes
        );
        eprintln!(
            "  output:          {:>10.2} KB    ({} bytes)",
            out_kb, self.output_bytes
        );
        eprintln!(
            "  functions:       {:>10}        ({} failed)",
            self.function_count, self.failed_count
        );
        eprintln!("  total time:      {:>10.3} s", total_dur.as_secs_f64());
        eprintln!(
            "  throughput:      {:>10.2} KB/s   ({:.0} fns/s)",
            throughput,
            self.function_count as f64 / total_dur.as_secs_f64().max(1e-9)
        );
        eprintln!();
        eprintln!("  --- per-phase wall-clock ---");
        for (name, dur) in &self.phases {
            let ms = dur.as_secs_f64() * 1000.0;
            let pct = if total_dur.as_secs_f64() > 0.0 {
                (dur.as_secs_f64() / total_dur.as_secs_f64()) * 100.0
            } else {
                0.0
            };
            eprintln!("    {:<28} {:>10.2} ms  ({:>5.1}%)", name, ms, pct);
        }
        eprintln!();
        // Top 5 slowest functions by wall-clock — usually the structurer
        // hot path or a single giant function in libc.
        let mut top = self.per_func.iter().collect::<Vec<_>>();
        top.sort_by_key(|f| std::cmp::Reverse(f.elapsed_us));
        eprintln!("  --- top 5 slowest functions ---");
        for f in top.iter().take(5) {
            eprintln!(
                "    {:<32} {:>8.2} ms   {} bytes emitted",
                trim_name(&f.name, 32),
                f.elapsed_us as f64 / 1000.0,
                f.out_len
            );
        }
        eprintln!();
        eprintln!("  --- quality tokens scraped from output ---");
        eprintln!("    flirt-annotated calls       {:>8}", self.flirt_matches);
        eprintln!(
            "    Unimplemented IR leaks      {:>8}",
            self.unimplemented_tokens
        );
        eprintln!(
            "    CALLOTHER leaks             {:>8}",
            self.callother_tokens
        );
        eprintln!("    `goto` tokens               {:>8}", self.goto_tokens);
        eprintln!(
            "    __readfsqword (canary read) {:>8}",
            self.readfsqword_tokens
        );
        eprintln!(
            "    __stack_chk_fail calls      {:>8}",
            self.stack_chk_fail_tokens
        );
        eprintln!(
            "    decompilation-failed blocks {:>8}",
            self.decompile_failed_blocks
        );
        eprintln!("====================================================");
    }
}

fn trim_name(s: &str, n: usize) -> String {
    if s.chars().count() <= n {
        return s.to_string();
    }
    s.chars().take(n.saturating_sub(1)).collect::<String>() + "…"
}

// `parse_arch` moved to `unlace_cli::parse_arch` (lib.rs) so the
// library's `batch` module can also use it.

#[allow(clippy::too_many_arguments)]
fn run_batch_cmd(
    binary: std::path::PathBuf,
    jobs: usize,
    emit: args::EmitFormat,
    arch: Option<String>,
    output_dir: Option<std::path::PathBuf>,
    dwarf_sidecar: Option<std::path::PathBuf>,
    timeout: u64,
    interproc: bool,
    all_functions: bool,
    scope: Option<String>,
    max_iterations: usize,
    flirt: pipeline::FlirtConfig,
) -> Result<()> {
    let scope_re = match scope.as_deref() {
        Some(pat) => {
            Some(regex::Regex::new(pat).with_context(|| format!("invalid --scope regex: {pat}"))?)
        }
        None => None,
    };
    let config = BatchConfig {
        jobs,
        emit,
        timeout_secs: timeout,
        interproc,
        all_functions,
        scope: scope_re,
        max_iterations,
        flirt,
        dwarf_sidecar: read_dwarf_sidecar(dwarf_sidecar.as_deref())?,
    };
    batch::run_batch(&binary, &config, arch.as_deref(), output_dir.as_deref())
}

#[cfg(test)]
mod tests {
    use super::*;
    use unlace_loader::{DebugRecord, Endian};

    #[test]
    fn attach_pdb_sidecar_is_noop_when_no_pdb_present() {
        let tmp = tempfile::tempdir().expect("tempdir");
        let bin = tmp.path().join("nopdb.exe");
        std::fs::write(&bin, b"MZ").unwrap();

        let mut image = BinaryImage::empty(ArchId::X86_64, Endian::Little);
        assert!(image.pdb_types.is_none());
        attach_pdb_sidecar(&mut image, &bin);
        assert!(
            image.pdb_types.is_none(),
            "no sidecar should leave pdb_types empty",
        );
    }

    #[test]
    fn attach_pdb_sidecar_skips_when_already_populated() {
        // Pre-populate pdb_types to force the early-return branch and
        // confirm the helper does not stomp existing data.
        let tmp = tempfile::tempdir().expect("tempdir");
        let bin = tmp.path().join("preloaded.exe");
        std::fs::write(&bin, b"MZ").unwrap();

        let mut image = BinaryImage::empty(ArchId::X86_64, Endian::Little);
        image.pdb_types = Some(Default::default());
        let before_ptr = image.pdb_types.as_ref().map(|t| t as *const _);
        attach_pdb_sidecar(&mut image, &bin);
        let after_ptr = image.pdb_types.as_ref().map(|t| t as *const _);
        assert_eq!(
            before_ptr, after_ptr,
            "existing pdb_types must be preserved"
        );
    }

    #[test]
    fn attach_pdb_sidecar_drops_absolute_build_host_path() {
        // PE CodeView records frequently contain a Windows build-host
        // absolute path (e.g. `D:\src\foo\bar.pdb`). The helper must
        // resolve only by basename next to the binary, so a nonexistent
        // absolute path never causes a panic or attempts to load it.
        let tmp = tempfile::tempdir().expect("tempdir");
        let bin = tmp.path().join("absolute-cv.exe");
        std::fs::write(&bin, b"MZ").unwrap();

        let mut image = BinaryImage::empty(ArchId::X86_64, Endian::Little);
        image.debug_records.push(DebugRecord {
            typ: 2, // IMAGE_DEBUG_TYPE_CODEVIEW
            time_stamp: 0,
            pdb_path: Some("D:\\nonexistent\\absolute\\path.pdb".into()),
            pdb_guid: None,
            pdb_age: None,
        });
        attach_pdb_sidecar(&mut image, &bin);
        assert!(
            image.pdb_types.is_none(),
            "no real .pdb on disk → no panic, no spurious load",
        );
    }
}
