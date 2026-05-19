use std::fs;
use std::io::Write;
use std::time::Duration;

use anyhow::{Context, Result, bail};
use clap::Parser;
use tracing_subscriber::EnvFilter;

use unlace_ir::ArchId;
use unlace_lift::get_lifter;
use unlace_loader::{
    BinaryImage, ElfLoader, Loader, MachoLoader, PeLoader, import_dwarf, import_pdb_types,
};
use unlace_plugin::PluginManager;

use unlace_cli::annotations::{self, AnnotationDb};
use unlace_cli::args::{self, Args, Cmd, LuminaAction};
use unlace_cli::batch::{self, BatchConfig};
use unlace_cli::pipeline::{self, PipelineConfig};

fn main() {
    let args = Args::parse();

    let result = match args.cmd {
        Cmd::Decompile {
            binary,
            function,
            emit,
            arch,
            output,
            all: _,
            verbose,
            timeout,
            plugin_dir,
            max_width,
            tab_width,
            annotations_load,
            annotations_save,
        } => {
            init_tracing(verbose);
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
            let config = PipelineConfig {
                timeout: Duration::from_secs(timeout),
                print_config,
                annotations: annotation_db.clone(),
            };
            let result = load_plugins(plugin_dir.as_deref()).and_then(|mgr| {
                run_decompile(
                    &binary,
                    function.as_deref(),
                    emit,
                    arch.as_deref(),
                    output.as_deref(),
                    &config,
                    &mgr,
                )
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
            init_tracing(verbose);
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
            merged: _,
            timeout,
            interproc,
            all_functions,
            scope,
            max_iterations,
            verbose,
        } => {
            init_tracing(verbose);
            run_batch_cmd(
                binary,
                jobs,
                emit,
                arch,
                output_dir,
                timeout,
                interproc,
                all_functions,
                scope,
                max_iterations,
            )
        }
        Cmd::Quality {
            binary,
            format,
            verbose,
        } => {
            init_tracing(verbose);
            run_quality(&binary, format)
        }
        Cmd::IrDump {
            binary,
            function,
            phase,
            verbose,
        } => {
            init_tracing(verbose);
            run_ir_dump(&binary, function.as_deref(), phase.as_deref())
        }
        Cmd::Lumina { action } => run_lumina(action),
        Cmd::Gui { binary } => {
            init_tracing(0);
            run_gui(binary.as_deref())
        }
        Cmd::Emu {
            binary,
            max_instructions,
            trace,
            verbose,
        } => {
            init_tracing(verbose);
            run_emu(&binary, max_instructions, trace)
        }
        Cmd::Dbg {
            pid,
            breakpoint,
            cont,
        } => {
            init_tracing(0);
            run_dbg(pid, breakpoint.as_deref(), cont)
        }
        Cmd::Patch {
            binary,
            ea,
            bytes,
            output,
        } => {
            init_tracing(0);
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
            init_tracing(0);
            run_symfetch(
                pdb.as_deref(),
                guid.as_deref(),
                age,
                buildid.as_deref(),
                &server,
                fetch,
            )
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
                if matches!(phase, IrDumpPhase::PostStructuring) {
                    if let Err(e) = unlace_struct::structure_preserve_returns(&mut ssa) {
                        tracing::warn!(name = %entry.name, err = ?e, "structurer failed; dumping post-passes IR");
                    }
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

fn run_quality(binary_path: &std::path::Path, format: args::QualityFormat) -> Result<()> {
    let report = unlace_cli::quality::analyze_binary(binary_path)?;
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

fn run_gui(binary: Option<&std::path::Path>) -> Result<()> {
    let session = unlace_session::Session::new();
    if let Some(p) = binary {
        session.load_binary(p).with_context(|| {
            format!("loading {} into GUI session", p.display())
        })?;
    }
    #[cfg(feature = "gui-render")]
    {
        unlace_gui::app::run(session).map_err(|e| anyhow::anyhow!("iced runtime: {e}"))?;
        Ok(())
    }
    #[cfg(not(feature = "gui-render"))]
    {
        let _ = session;
        bail!(
            "unlace-cli was built without the `gui-render` feature; \
             rebuild with `cargo build -p unlace-cli --features gui-render` \
             to enable the iced desktop UI"
        );
    }
}

fn run_emu(binary: &std::path::Path, max_instructions: u64, trace: bool) -> Result<()> {
    let bytes = std::fs::read(binary)
        .with_context(|| format!("reading {}", binary.display()))?;
    let image = dispatch_loader(&bytes)?;
    let cfg = unlace_emu::runner::RunConfig {
        max_instructions,
        trace,
        ..unlace_emu::runner::RunConfig::default()
    };
    let mut interp = unlace_emu::Interpreter::new();
    let result = unlace_emu::runner::run_image(&mut interp, &image, &cfg);
    println!(
        "executed {} IR instructions",
        result.instructions_executed
    );
    if let Some(code) = result.exit_code {
        println!("exited with code {code}");
    }
    if let Some(fault) = &result.fault {
        println!("faulted: {fault}");
    }
    if trace {
        println!("\n--- syscall trace ({} entries) ---", result.syscall_trace.len());
        for entry in &result.syscall_trace {
            println!("  nr={} args={:?} -> {:?}", entry.nr, entry.args, entry.outcome);
        }
    }
    Ok(())
}

fn run_dbg(pid: u32, breakpoint: Option<&str>, cont: bool) -> Result<()> {
    #[cfg(feature = "dbg-ptrace")]
    {
        use unlace_debugger::Debugger;
        let mut dbg = unlace_debugger::LinuxPtraceDebugger::new();
        dbg.attach(pid).with_context(|| format!("ptrace attach pid={pid}"))?;
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
        let _ = (pid, breakpoint, cont);
        bail!(
            "unlace-cli was built without the `dbg-ptrace` feature; \
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
    session.load_binary(binary)
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
            bail!("--fetch is wired but no HTTP client is compiled into this build");
        }
        return Ok(());
    }
    if let Some(bid) = buildid {
        let bid_bytes = parse_hex_bytes(bid)?;
        let url = unlace_loader::symcache::debuginfod_url(server, &bid_bytes);
        println!("{url}");
        if fetch {
            bail!("--fetch is wired but no HTTP client is compiled into this build");
        }
        return Ok(());
    }
    bail!("supply either --pdb + --guid + --age (MSFT) or --buildid (debuginfod)")
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
    let hex = t.strip_prefix("0x").or_else(|| t.strip_prefix("0X")).unwrap_or(t);
    u64::from_str_radix(hex, 16).with_context(|| format!("parsing {s:?} as hex u64"))
}

fn parse_hex_bytes(s: &str) -> Result<Vec<u8>> {
    let t: String = s.chars().filter(|c| !c.is_whitespace() && *c != '-').collect();
    if t.len() % 2 != 0 {
        bail!("hex byte string must have even length");
    }
    let mut out = Vec::with_capacity(t.len() / 2);
    for i in (0..t.len()).step_by(2) {
        out.push(u8::from_str_radix(&t[i..i + 2], 16).with_context(|| format!("parsing byte at {i}"))?);
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
                let _ = c.helo(proto, &user, &password).await?;
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

fn init_tracing(verbose: u8) {
    let filter = match verbose {
        0 => "warn",
        1 => "info",
        2 => "debug",
        _ => "trace",
    };
    tracing_subscriber::fmt()
        .with_env_filter(
            EnvFilter::try_from_default_env().unwrap_or_else(|_| EnvFilter::new(filter)),
        )
        .with_writer(std::io::stderr)
        .init();
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
/// parse its TPI stream into [`unlace_loader::pdb_types::PdbTypes`] and
/// attach it to `image.pdb_types`. Downstream `apply_pdb_types_to_ssa`
/// + the C printer's annotation overlay consume this field.
///
/// Resolution order:
/// 1. Any `DebugRecord.pdb_path` recorded by the PE CodeView parser,
///    interpreted *only by basename* and looked up next to the binary
///    (the absolute path baked into the PE points at the build host).
/// 2. A sibling `<stem>.pdb` next to the binary.
///
/// Failure is non-fatal: we trace and move on, mirroring how DWARF is
/// handled in `run_decompile`.
fn attach_pdb_sidecar(image: &mut BinaryImage, binary_path: &std::path::Path) {
    if image.pdb_types.is_some() {
        return;
    }
    let parent = binary_path
        .parent()
        .unwrap_or_else(|| std::path::Path::new("."));
    let mut candidates: Vec<std::path::PathBuf> = Vec::new();

    for rec in &image.debug_records {
        if let Some(pdb_path) = rec.pdb_path.as_deref() {
            if let Some(name) = std::path::Path::new(pdb_path).file_name() {
                candidates.push(parent.join(name));
            }
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
        match import_pdb_types(&candidate) {
            Ok(types) => {
                tracing::info!(
                    pdb = %candidate.display(),
                    structs = types.structs.len(),
                    "loaded PDB type sidecar",
                );
                image.pdb_types = Some(types);
                return;
            }
            Err(e) => {
                tracing::debug!(
                    pdb = %candidate.display(),
                    err = %e,
                    "PDB sidecar import failed; continuing without it",
                );
            }
        }
    }
}

fn run_decompile(
    binary_path: &std::path::Path,
    function_filter: Option<&str>,
    emit: args::EmitFormat,
    arch_override: Option<&str>,
    output_path: Option<&std::path::Path>,
    config: &PipelineConfig,
    _plugin_mgr: &PluginManager,
) -> Result<()> {
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
    let mut functions = pipeline::discover_functions(&image, function_filter)?;

    let dwarf = match import_dwarf(&image) {
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

    tracing::info!(count = functions.len(), "discovered functions");

    // Scan RTTI once for the whole binary; the C printer uses it to
    // emit class hierarchy + reconstructed vtable layouts.
    let rtti = unlace_loader::scan_rtti(&image);
    let rtti_opt = if rtti.is_empty() { None } else { Some(&rtti) };

    let mut all_output = String::new();

    for func_entry in &functions {
        tracing::info!(name = %func_entry.name, addr = %format_args!("{:#x}", func_entry.addr), "decompiling");

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
            Ok(text) => all_output.push_str(&text),
            Err(e) => {
                tracing::warn!(name = %func_entry.name, err = %e, "function decompilation failed");
                all_output.push_str(&format!(
                    "/* decompilation failed for '{}': {} */\n",
                    func_entry.name, e
                ));
            }
        }
    }

    if matches!(emit, args::EmitFormat::C) {
        all_output = unlace_output::dedupe_ida_typedefs(&all_output);
        all_output = unlace_output::declare_pseudo_c_externals(&all_output);
        all_output = unlace_output::dedupe_rtti_hierarchy(&all_output);
    }

    if let Some(path) = output_path {
        let mut file = fs::File::create(path)
            .with_context(|| format!("failed to create '{}'", path.display()))?;
        file.write_all(all_output.as_bytes())?;
        tracing::info!(path = %path.display(), "wrote output");
    } else {
        print!("{all_output}");
    }

    Ok(())
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
    timeout: u64,
    interproc: bool,
    all_functions: bool,
    scope: Option<String>,
    max_iterations: usize,
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
