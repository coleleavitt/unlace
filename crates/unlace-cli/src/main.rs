use std::fs;
use std::io::{Read, Write};
use std::sync::Arc;
use std::time::Duration;

use anyhow::{Context, Result, bail};
use clap::Parser;

use unlace_lift::get_lifter;
use unlace_loader::{BinaryImage, ElfLoader, Loader, MachoLoader, PeLoader};
use unlace_passes::PassOptions;
use unlace_plugin::PluginManager;

use unlace_cli::annotations;
use unlace_cli::args::{self, Args, Cmd, ConfigAction, LuminaAction, ProjectAction};
use unlace_cli::batch::{self, BatchConfig};
use unlace_cli::config::Config;
use unlace_cli::decompile::{self, DecompileStats, Decompiled};
use unlace_cli::pipeline::{self, PipelineConfig};
use unlace_cli::profiling::{self, TraceField};

fn main() {
    // `batch` has a visible alias `dump-all`; we use the invoked
    // subcommand token to provide dump-all-specific defaults (progress on +
    // output-dir=./all when not explicitly overridden).
    let invoked_dump_all = std::env::args_os()
        .nth(1)
        .is_some_and(|arg| arg == "dump-all");
    let args = Args::parse();
    if let Err(e) = unlace_cli::logging::init(args.log.as_deref()) {
        eprintln!("Error: {e:#}");
        std::process::exit(1);
    }
    let config = match Config::load(args.config.as_deref()) {
        Ok(config) => Arc::new(config),
        Err(e) => {
            eprintln!("Error: {e:#}");
            std::process::exit(1);
        }
    };
    let linkscope_guard = unlace_cli::profiling::init(&config.linkscope);

    let result = match args.cmd {
        Cmd::Project { action } => run_project(action),
        Cmd::Config {
            action: ConfigAction::Show,
        } => config.to_toml().map(|text| print!("{text}")),
        Cmd::Decompile {
            binary,
            function,
            emit,
            arch,
            output,
            capture_dir,
            all: _,
            verbose: _,
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
            let options = if max_width.is_some() || tab_width.is_some() {
                let mut options = Config::clone(&config);
                if let Some(w) = max_width {
                    options.printer.max_line_width = w;
                }
                if let Some(t) = tab_width {
                    options.printer.tab_width = t;
                }
                Arc::new(options)
            } else {
                Arc::clone(&config)
            };
            let annotation_db = annotations::resolve(&binary, annotations_load.as_deref())
                .unwrap_or_else(|e| {
                    profiling::diagnostic(
                        "warn",
                        "failed to load annotations; continuing without",
                        [TraceField::text("err", e.to_string())],
                    );
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
                        options,
                        annotations: annotation_db.clone(),
                        flirt,
                        dwarf_sidecar: dwarf_sidecar_bytes,
                        symbol_context: None,
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
                    profiling::diagnostic(
                        "warn",
                        "failed to write annotations sidecar",
                        [
                            TraceField::text("path", path.display().to_string()),
                            TraceField::text("err", e.to_string()),
                        ],
                    );
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
            verbose: _,
        } => run_siggen(
            &archive,
            output.as_deref(),
            unlace_loader::SigGenerateOptions {
                pattern_len,
                crc_len,
                min_function_len,
            },
        ),
        Cmd::Batch {
            binary,
            jobs,
            emit,
            arch,
            output_dir,
            dwarf_sidecar,
            merged,
            timeout,
            interproc,
            all_functions,
            scope,
            max_iterations,
            verbose: _,
            progress,
            progress_style,
            no_flirt,
            sig,
            sig_dir,
            flirt_min_confidence,
        } => build_flirt_config(no_flirt, sig, sig_dir, flirt_min_confidence).and_then(|flirt| {
            run_batch_cmd(
                binary,
                jobs,
                emit,
                arch,
                output_dir,
                merged,
                dwarf_sidecar,
                timeout,
                interproc,
                all_functions,
                scope,
                max_iterations,
                progress,
                progress_style,
                invoked_dump_all,
                flirt,
                Arc::clone(&config),
            )
        }),
        Cmd::Quality {
            binary,
            format,
            verbose: _,
            no_flirt,
            sig,
            sig_dir,
            flirt_min_confidence,
        } => build_flirt_config(no_flirt, sig, sig_dir, flirt_min_confidence)
            .and_then(|flirt| run_quality(&binary, format, &flirt, &config)),
        Cmd::IdentifyPacker { binary, format } => run_identify_packer(&binary, format),
        Cmd::IrDump {
            binary,
            function,
            phase,
            verbose: _,
        } => run_ir_dump(&binary, function.as_deref(), phase.as_deref(), &config),
        Cmd::Lumina { action } => run_lumina(action),
        Cmd::Emu {
            binary,
            max_instructions,
            trace,
            verbose: _,
        } => run_emu(&binary, max_instructions, trace),
        Cmd::Dbg {
            pid,
            breakpoint,
            cont,
        } => run_dbg(pid, breakpoint.as_deref(), cont),
        Cmd::Patch {
            binary,
            ea,
            bytes,
            output,
        } => run_patch(&binary, &ea, &bytes, output.as_deref()),
        Cmd::Symfetch {
            pdb,
            guid,
            age,
            buildid,
            server,
            fetch,
        } => run_symfetch(
            pdb.as_deref(),
            guid.as_deref(),
            age,
            buildid.as_deref(),
            &server,
            fetch,
        ),
        Cmd::Sigload {
            path,
            limit,
            json,
            apply,
            binary,
            force,
            flirt_min_confidence,
        } => run_sigload(
            &path,
            limit,
            json,
            apply,
            binary.as_deref(),
            force,
            flirt_min_confidence,
        ),
        Cmd::Tilload {
            path,
            limit,
            json,
            apply,
            binary,
        } => run_tilload(&path, limit, json, apply, binary.as_deref()),
        Cmd::Py { script, binary } => run_py(&script, binary.as_deref(), &config),
    };

    write_pass_diagnostics(&config.passes);

    drop(linkscope_guard);

    if let Err(e) = result {
        eprintln!("Error: {e:#}");
        std::process::exit(1);
    }
}

/// Flush the pass-run records requested by `passes.diagnostics` and the
/// `unlace::timing` filter once the command has finished. Write failures are
/// reported but do not fail the command.
fn write_pass_diagnostics(passes: &PassOptions) {
    if unlace_passes::pass_timing_enabled() {
        let table = unlace_passes::dump_pass_timings();
        if !table.is_empty() {
            tracing::info!(target: "unlace::timing", "per-pass wall-clock\n{table}");
        }
    }
    if let Some(path) = &passes.diagnostics.timing_csv
        && let Err(e) = fs::write(path, unlace_passes::dump_pass_timings_csv())
    {
        eprintln!(
            "warning: passes.diagnostics.timing_csv write to '{}' failed: {e}",
            path.display()
        );
    }
    if let Some(path) = &passes.diagnostics.schedule_audit {
        if let Err(e) = fs::write(path, unlace_passes::dump_schedule_audit_csv()) {
            eprintln!(
                "warning: passes.diagnostics.schedule_audit write to '{}' failed: {e}",
                path.display()
            );
        }
        let osc = unlace_passes::schedule_audit_oscillations();
        if !osc.is_empty() {
            eprintln!(
                "\n=== schedule audit: {} oscillation(s) detected ===",
                osc.len()
            );
            for v in &osc {
                eprintln!("  {v}");
            }
        }
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
    profiling::diagnostic(
        "info",
        "generated FLIRT patterns",
        [
            TraceField::count("count", patterns.len() as u64),
            TraceField::text("archive", archive_path.display().to_string()),
        ],
    );
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
    options: &Config,
) -> Result<()> {
    let _profile_command = profiling::phase("cmd.ir-dump");
    let _profile_trace = profiling::trace_fields(
        "cmd.ir-dump",
        [
            TraceField::text("binary", binary_path.display().to_string()),
            TraceField::text("function_filter", function_filter.unwrap_or("<all>")),
            TraceField::text("phase", phase_str.unwrap_or("post-passes")),
        ],
    );
    let phase = parse_ir_dump_phase(phase_str)?;

    // Batch 25: mmap path for large binaries, heap path for small ones.
    let input = {
        let _span = profiling::phase("ir-dump.open-binary");
        unlace_cli::binary_input::BinaryInput::open(binary_path)
            .with_context(|| format!("failed to read '{}'", binary_path.display()))?
    };
    let data = input.as_bytes();
    profiling::record_bytes("ir-dump.open-binary", data.len() as u64);

    let image = {
        let _span = profiling::phase("ir-dump.load-binary");
        if ElfLoader::can_load(data) {
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
        .with_context(|| format!("failed to parse '{}'", binary_path.display()))?
    };

    let lifter = {
        let _span = profiling::phase("ir-dump.get-lifter");
        get_lifter(image.arch)
    };
    let functions = {
        let _span = profiling::phase("ir-dump.discover-functions");
        let functions = pipeline::discover_functions(&image, function_filter)?;
        profiling::record_items("ir-dump.discover-functions", functions.len() as u64);
        functions
    };

    let mut out = String::new();
    for entry in &functions {
        let _profile_function = profiling::phase("ir-dump.function");
        let _profile_trace = profiling::trace_fields(
            "ir-dump.function",
            [
                TraceField::text("function", entry.name.clone()),
                TraceField::addr("addr", entry.addr),
                TraceField::count("size", entry.size),
            ],
        );
        profiling::record_items("ir-dump.function", 1);
        let _function_span = pipeline::function_span(entry);
        let lift_result = {
            let _span = profiling::phase("ir-dump.lift");
            pipeline::lift_function(&image, lifter.as_ref(), entry)
        };
        let ir_func = match lift_result {
            Ok(f) => f,
            Err(e) => {
                profiling::diagnostic(
                    "warn",
                    "ir-dump lift failed; skipping",
                    [
                        TraceField::text("function", entry.name.clone()),
                        TraceField::text("err", e.to_string()),
                    ],
                );
                out.push_str(&format!(
                    "// [ir-dump] lift failed for '{}': {}\n",
                    entry.name, e
                ));
                continue;
            }
        };

        let mut ssa = {
            let _span = profiling::phase("ir-dump.build-ssa");
            unlace_ir::ssa::build_ssa(ir_func)
        };
        ssa.arch = image.arch;

        match phase {
            IrDumpPhase::Lift => {}
            IrDumpPhase::PostPasses
            | IrDumpPhase::PostStructuring
            | IrDumpPhase::Lvars
            | IrDumpPhase::Types => {
                let pass_result = {
                    let _span = profiling::phase("ir-dump.run-passes");
                    pipeline::run_passes(&mut ssa, &options.passes)
                };
                if let Err(e) = pass_result {
                    profiling::diagnostic(
                        "warn",
                        "ir-dump pass pipeline failed; dumping unoptimized",
                        [
                            TraceField::text("function", entry.name.clone()),
                            TraceField::text("err", format!("{e:#}")),
                        ],
                    );
                }
                if matches!(phase, IrDumpPhase::PostStructuring)
                    && let Err(e) = {
                        let _span = profiling::phase("ir-dump.structure-preserve-returns");
                        unlace_struct::structure_preserve_returns(&mut ssa)
                    }
                {
                    profiling::diagnostic(
                        "warn",
                        "ir-dump structurer failed; dumping post-passes IR",
                        [
                            TraceField::text("function", entry.name.clone()),
                            TraceField::text("err", format!("{e:?}")),
                        ],
                    );
                }
            }
        }

        match phase {
            IrDumpPhase::Lvars => {
                let _span = profiling::phase("ir-dump.emit-lvars");
                out.push_str(&unlace_output::dump_lvars(&ssa));
            }
            IrDumpPhase::Types => {
                let _span = profiling::phase("ir-dump.emit-types");
                out.push_str(&unlace_output::dump_type_audit(&ssa));
            }
            _ => {
                let _span = profiling::phase("ir-dump.emit-ir");
                out.push_str(&unlace_output::dump_ir(&ssa));
            }
        }
    }

    {
        let _span = profiling::phase("ir-dump.write-stdout");
        print!("{out}");
    }
    Ok(())
}

fn run_quality(
    binary_path: &std::path::Path,
    format: args::QualityFormat,
    flirt: &pipeline::FlirtConfig,
    options: &Config,
) -> Result<()> {
    let report = unlace_cli::quality::analyze_binary_with_flirt(binary_path, flirt, options)?;
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

fn run_identify_packer(binary_path: &std::path::Path, format: args::QualityFormat) -> Result<()> {
    let bytes =
        std::fs::read(binary_path).with_context(|| format!("reading {}", binary_path.display()))?;
    let image = dispatch_loader(&bytes)?;
    let report = unlace_cli::identify_packer::analyze(&image);
    let rendered = match format {
        args::QualityFormat::Md => unlace_cli::identify_packer::render_text(&report),
        args::QualityFormat::Json => unlace_cli::identify_packer::render_json(&report)?,
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
fn run_py(
    script: &std::path::Path,
    binary: Option<&std::path::Path>,
    options: &Config,
) -> Result<()> {
    let session = unlace_session::Session::new();
    if let Some(b) = binary {
        session
            .load_binary(b)
            .with_context(|| format!("loading {}", b.display()))?;
        if let Err(err) = populate_python_instruction_xrefs(&session) {
            profiling::diagnostic(
                "debug",
                "failed to stage instruction xrefs for python session",
                [TraceField::text("err", err.to_string())],
            );
        }
        if let Err(err) = populate_python_decompiled_functions(&session, options) {
            profiling::diagnostic(
                "debug",
                "failed to stage decompiled functions for python session",
                [TraceField::text("err", err.to_string())],
            );
        }
    }
    let source =
        std::fs::read_to_string(script).with_context(|| format!("reading {}", script.display()))?;
    unlace_idapython::pybridge::run_script(session, &source)
        .map_err(|e| anyhow::anyhow!("python: {e}"))
}

#[cfg(feature = "python")]
fn populate_python_instruction_xrefs(session: &unlace_session::Session) -> Result<usize> {
    let xrefs = session
        .with_binary(|image| -> Result<Vec<unlace_ir::xref::InstructionXref>> {
            let functions = pipeline::discover_functions(image, None)?;
            let lifter = get_lifter(image.arch);
            let mut lifted = std::collections::BTreeMap::new();
            for entry in &functions {
                match pipeline::lift_function(image, lifter.as_ref(), entry) {
                    Ok(function) => {
                        lifted.insert(entry.addr, function);
                    }
                    Err(err) => {
                        profiling::diagnostic(
                            "debug",
                            "skipping xref lift failure",
                            [
                                TraceField::text("function", entry.name.clone()),
                                TraceField::text("err", err.to_string()),
                            ],
                        );
                    }
                }
            }
            Ok(unlace_ir::xref::build_instruction_xrefs(&lifted))
        })
        .transpose()?
        .unwrap_or_default();
    let count = xrefs.len();
    session.add_instruction_xrefs(xrefs);
    Ok(count)
}

#[cfg(feature = "python")]
fn populate_python_decompiled_functions(
    session: &unlace_session::Session,
    options: &Config,
) -> Result<usize> {
    populate_python_decompiled_functions_with_limit(session, options.py.max_staged_functions)
}

#[cfg(feature = "python")]
fn populate_python_decompiled_functions_with_limit(
    session: &unlace_session::Session,
    limit: usize,
) -> Result<usize> {
    let staged = session
        .with_binary(|image| -> Result<Vec<(u64, u64, String, String)>> {
            let functions = pipeline::discover_functions(image, None)?;
            let lifter = get_lifter(image.arch);
            let config = PipelineConfig::default();
            let rtti = unlace_loader::scan_rtti(image);
            let rtti = (!rtti.is_empty()).then_some(&rtti);
            let mut staged = Vec::new();
            for entry in functions.iter().take(limit) {
                match pipeline::decompile_function_with_symbols(
                    image,
                    lifter.as_ref(),
                    entry,
                    args::EmitFormat::C,
                    &config,
                    None,
                    &functions,
                    rtti,
                ) {
                    Ok(text) => staged.push((entry.addr, entry.size, entry.name.clone(), text)),
                    Err(err) => {
                        profiling::diagnostic(
                            "debug",
                            "skipping python decompile staging failure",
                            [
                                TraceField::text("function", entry.name.clone()),
                                TraceField::text("err", err.to_string()),
                            ],
                        );
                    }
                }
            }
            Ok(staged)
        })
        .transpose()?
        .unwrap_or_default();
    let count = staged.len();
    for (addr, size, name, text) in staged {
        session.set_decompiled_function(addr, size, name, text);
    }
    Ok(count)
}

#[cfg(not(feature = "python"))]
fn run_py(
    _script: &std::path::Path,
    _binary: Option<&std::path::Path>,
    _options: &Config,
) -> Result<()> {
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
    eprintln!("fetching {url}");
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
                profiling::diagnostic(
                    "info",
                    "starting Lumina v6 server",
                    [
                        TraceField::text("addr", addr.to_string()),
                        TraceField::text("db", db.clone()),
                    ],
                );
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
        profiling::diagnostic(
            "info",
            "loaded plugins",
            [
                TraceField::count("count", count as u64),
                TraceField::text("dir", dir.display().to_string()),
            ],
        );
    }
    Ok(mgr)
}

/// Read the optional `--dwarf-sidecar` file into memory. Returns `Ok(None)`
/// when no path was supplied, and a contextual error when the path is set but
/// unreadable (rather than silently degrading to no debug info).
fn read_dwarf_sidecar(path: Option<&std::path::Path>) -> Result<Option<Vec<u8>>> {
    match path {
        Some(p) => {
            let bytes = fs::read(p)
                .with_context(|| format!("failed to read --dwarf-sidecar '{}'", p.display()))?;
            profiling::diagnostic(
                "info",
                "loaded DWARF sidecar",
                [
                    TraceField::text("sidecar", p.display().to_string()),
                    TraceField::bytes("bytes", bytes.len() as u64),
                ],
            );
            Ok(Some(bytes))
        }
        None => Ok(None),
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
    let _profile_command = profiling::phase("cmd.decompile");
    let _profile_trace = profiling::trace_fields(
        "cmd.decompile",
        [
            TraceField::text("binary", binary_path.display().to_string()),
            TraceField::text("function_filter", function_filter.unwrap_or("<all>")),
        ],
    );
    let mut stats = DecompileStats::new(stats);
    let Decompiled {
        data,
        image,
        function_count,
        output: all_output,
    } = decompile::decompile_binary(
        binary_path,
        function_filter,
        emit,
        arch_override,
        config,
        &mut stats,
    )?;

    if let Some(capture_root) = capture_dir {
        let capture_path = {
            let _span = profiling::phase("decompile.write-capture");
            write_decompile_capture(
                capture_root,
                binary_path,
                &data,
                &image,
                function_filter,
                emit,
                output_path,
                function_count,
                &all_output,
            )?
        };
        eprintln!("unlace decompile capture: {}", capture_path.display());
    }

    if let Some(path) = output_path {
        let _span = profiling::phase("decompile.write-output-file");
        let mut file = fs::File::create(path)
            .with_context(|| format!("failed to create '{}'", path.display()))?;
        file.write_all(all_output.as_bytes())?;
        profiling::diagnostic(
            "info",
            "wrote output",
            [TraceField::text("path", path.display().to_string())],
        );
    } else {
        let _span = profiling::phase("decompile.write-stdout");
        print!("{all_output}");
    }

    stats.emit_summary(binary_path);
    Ok(())
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

// `parse_arch` moved to `unlace_cli::parse_arch` (lib.rs) so the
// library's `batch` module can also use it.

#[allow(clippy::too_many_arguments)]
fn run_batch_cmd(
    binary: std::path::PathBuf,
    jobs: usize,
    emit: args::EmitFormat,
    arch: Option<String>,
    output_dir: Option<std::path::PathBuf>,
    merged: bool,
    dwarf_sidecar: Option<std::path::PathBuf>,
    timeout: u64,
    interproc: bool,
    all_functions: bool,
    scope: Option<String>,
    max_iterations: usize,
    progress: bool,
    progress_style: args::BatchProgressStyle,
    invoked_dump_all: bool,
    flirt: pipeline::FlirtConfig,
    options: Arc<Config>,
) -> Result<()> {
    let scope_re = match scope.as_deref() {
        Some(pat) => {
            Some(regex::Regex::new(pat).with_context(|| format!("invalid --scope regex: {pat}"))?)
        }
        None => None,
    };
    let progress_style = if progress || invoked_dump_all {
        progress_style
    } else {
        args::BatchProgressStyle::Off
    };
    let output_dir = if invoked_dump_all && output_dir.is_none() && !merged {
        Some(std::path::PathBuf::from("all"))
    } else {
        output_dir
    };

    let config = BatchConfig {
        jobs,
        emit,
        timeout_secs: timeout,
        interproc,
        all_functions,
        scope: scope_re,
        max_iterations,
        progress_style,
        flirt,
        dwarf_sidecar: read_dwarf_sidecar(dwarf_sidecar.as_deref())?,
        options,
    };
    batch::run_batch(&binary, &config, arch.as_deref(), output_dir.as_deref())
}

#[cfg(all(test, feature = "python"))]
mod tests {
    use super::*;

    #[cfg(feature = "python")]
    #[test]
    fn populate_python_instruction_xrefs_stages_direct_edges() {
        let manifest = env!("CARGO_MANIFEST_DIR");
        let binary = std::path::PathBuf::from(format!("{manifest}/../../fixtures/hello_world.elf"));
        let session = unlace_session::Session::new();
        session.load_binary(&binary).expect("load fixture");

        let staged = populate_python_instruction_xrefs(&session).expect("stage xrefs");

        assert!(
            staged > 0,
            "hello_world should stage at least one direct xref"
        );
    }

    #[cfg(feature = "python")]
    #[test]
    fn populate_python_decompiled_functions_stages_text() {
        let manifest = env!("CARGO_MANIFEST_DIR");
        let binary = std::path::PathBuf::from(format!("{manifest}/../../fixtures/hello_world.elf"));
        let session = unlace_session::Session::new();
        session.load_binary(&binary).expect("load fixture");

        let staged = populate_python_decompiled_functions(&session).expect("stage pseudocode");

        assert!(
            staged > 0,
            "hello_world should stage at least one decompile"
        );
        assert!(
            session.decompiled_function(0x1060).is_some(),
            "hello_world main should have staged pseudocode"
        );
    }

    #[cfg(feature = "python")]
    #[test]
    fn populate_python_decompiled_functions_respects_limit() {
        let manifest = env!("CARGO_MANIFEST_DIR");
        let binary = std::path::PathBuf::from(format!("{manifest}/../../fixtures/hello_world.elf"));
        let session = unlace_session::Session::new();
        session.load_binary(&binary).expect("load fixture");

        let staged = populate_python_decompiled_functions_with_limit(&session, 1)
            .expect("stage bounded pseudocode");

        assert_eq!(staged, 1);
    }
}
