//! The `decompile` command's whole-binary pipeline: load, discover
//! functions, run each one through [`pipeline`], and assemble the combined
//! output.
//!
//! It lives in the library so tests and xtask gates produce exactly the
//! CLI's output in-process, without spawning the `unlace` binary.

use std::fs;

use anyhow::{Context, Result, bail};
use unlace_ir::ArchId;
use unlace_lift::get_lifter;
use unlace_loader::{
    BinaryImage, ElfLoader, Loader, MachoLoader, PeLoader, import_dwarf_with_sidecar, import_pdb,
    import_pdb_types,
};

use crate::args;
use crate::pipeline::{self, PipelineConfig};
use crate::profiling::{self, TraceField};

/// Everything a `decompile` run produced, for callers that also write
/// captures or summaries.
pub struct Decompiled {
    pub data: Vec<u8>,
    pub image: BinaryImage,
    pub function_count: usize,
    pub output: String,
}

/// Decompile `binary_path` with the CLI's default configuration, except for
/// the per-function wall-clock `timeout`, and return the emitted text.
pub fn decompile_to_string(
    binary_path: &std::path::Path,
    function_filter: Option<&str>,
    emit: args::EmitFormat,
    timeout: std::time::Duration,
) -> Result<String> {
    let config = PipelineConfig {
        timeout,
        annotations: crate::annotations::resolve(binary_path, None)?,
        ..PipelineConfig::default()
    };
    let mut stats = DecompileStats::new(false);
    decompile_binary(
        binary_path,
        function_filter,
        emit,
        None,
        &config,
        &mut stats,
    )
    .map(|d| d.output)
}

pub fn decompile_binary(
    binary_path: &std::path::Path,
    function_filter: Option<&str>,
    emit: args::EmitFormat,
    arch_override: Option<&str>,
    config: &PipelineConfig,
    stats: &mut DecompileStats,
) -> Result<Decompiled> {
    let t_load = std::time::Instant::now();
    let data = {
        let _span = profiling::phase("decompile.read-binary");
        fs::read(binary_path)
            .with_context(|| format!("failed to read '{}'", binary_path.display()))?
    };
    profiling::record_bytes("decompile.read-binary", data.len() as u64);

    let mut image = {
        let _span = profiling::phase("decompile.load-binary");
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
    stats.phase("load+parse", t_load.elapsed());
    stats.set_input_size(data.len() as u64);

    profiling::diagnostic(
        "info",
        "loaded binary",
        [
            TraceField::text("arch", image.arch.to_string()),
            TraceField::addr("entry", image.entry),
        ],
    );

    {
        let _span = profiling::phase("decompile.attach-pdb");
        attach_pdb_sidecar(&mut image, binary_path);
    }

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

    let lifter = {
        let _span = profiling::phase("decompile.get-lifter");
        get_lifter(image.arch)
    };
    let t_discover = std::time::Instant::now();
    let mut functions = {
        let _span = profiling::phase("decompile.discover-functions");
        pipeline::discover_functions(&image, function_filter)?
    };
    profiling::record_items("decompile.discover-functions", functions.len() as u64);

    let dwarf = {
        let _span = profiling::phase("decompile.import-dwarf");
        match import_dwarf_with_sidecar(&image, config.dwarf_sidecar.as_deref()) {
            Ok(d) if !d.functions.is_empty() || !d.structs.is_empty() => {
                profiling::record_items("decompile.import-dwarf", d.functions.len() as u64);
                profiling::diagnostic(
                    "info",
                    "loaded DWARF debug info",
                    [
                        TraceField::count("functions", d.functions.len() as u64),
                        TraceField::count("structs", d.structs.len() as u64),
                    ],
                );
                pipeline::drop_dwarf_duplicate_subfunctions(&mut functions, &d);
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
    stats.phase("discover+dwarf", t_discover.elapsed());
    stats.set_function_count(functions.len());

    profiling::diagnostic(
        "info",
        "discovered functions",
        [TraceField::count("count", functions.len() as u64)],
    );

    let mut effective_config = config.clone();
    effective_config.symbol_context = Some({
        let _span = profiling::phase("decompile.symbol-context");
        std::sync::Arc::new(pipeline::build_symbol_context_with_config(
            &image,
            &functions,
            &config.flirt,
        ))
    });

    // Scan RTTI once for the whole binary; the C printer uses it to
    // emit class hierarchy + reconstructed vtable layouts.
    let t_rtti = std::time::Instant::now();
    let rtti = {
        let _span = profiling::phase("decompile.scan-rtti");
        unlace_loader::scan_rtti(&image)
    };
    let rtti_opt = if rtti.is_empty() { None } else { Some(&rtti) };
    stats.phase("rtti-scan", t_rtti.elapsed());

    let mut all_output = String::new();

    let t_decompile = std::time::Instant::now();
    let total = functions.len();
    for (idx, func_entry) in functions.iter().enumerate() {
        let _profile_function = profiling::phase("decompile.function");
        let _profile_trace = profiling::trace_fields(
            "decompile.function",
            [
                TraceField::text("function", func_entry.name.clone()),
                TraceField::addr("addr", func_entry.addr),
                TraceField::count("size", func_entry.size),
            ],
        );
        profiling::record_items("decompile.function", 1);
        profiling::event_fields(
            "decompile.function.start",
            [
                TraceField::text("function", func_entry.name.clone()),
                TraceField::addr("addr", func_entry.addr),
            ],
        );
        stats.tick_progress(idx, total, &func_entry.name);

        let t_fn = std::time::Instant::now();
        match pipeline::decompile_function_with_symbols(
            &image,
            lifter.as_ref(),
            func_entry,
            emit,
            &effective_config,
            dwarf.as_ref(),
            &functions,
            rtti_opt,
        ) {
            Ok(text) => {
                stats.record_function(&func_entry.name, t_fn.elapsed(), text.len(), &text);
                all_output.push_str(&text);
            }
            Err(e) => {
                stats.record_failure(&func_entry.name);
                profiling::diagnostic(
                    "warn",
                    "function decompilation failed",
                    [
                        TraceField::text("function", func_entry.name.clone()),
                        TraceField::text("err", e.to_string()),
                    ],
                );
                all_output.push_str(&format!(
                    "/* decompilation failed for '{}': {} */\n",
                    func_entry.name, e
                ));
            }
        }
    }
    stats.phase("decompile (all functions)", t_decompile.elapsed());
    stats.clear_progress();

    let t_post = std::time::Instant::now();
    {
        let _span = profiling::phase("decompile.post-process");
        if matches!(emit, args::EmitFormat::C) {
            all_output = unlace_output::dedupe_ida_typedefs(&all_output);
            all_output = unlace_output::declare_pseudo_c_externals(&all_output);
            all_output = unlace_output::dedupe_rtti_hierarchy(&all_output);
        }
    }
    stats.phase("post-process", t_post.elapsed());
    stats.set_output_size(all_output.len() as u64);

    Ok(Decompiled {
        data,
        image,
        function_count: functions.len(),
        output: all_output,
    })
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
                    profiling::diagnostic(
                        "info",
                        "loaded PDB type sidecar",
                        [
                            TraceField::text("pdb", candidate.display().to_string()),
                            TraceField::count("structs", types.structs.len() as u64),
                        ],
                    );
                    image.pdb_types = Some(types);
                    loaded_sidecar = true;
                }
                Err(e) => {
                    profiling::diagnostic(
                        "debug",
                        "PDB type sidecar import failed; continuing without it",
                        [
                            TraceField::text("pdb", candidate.display().to_string()),
                            TraceField::text("err", e.to_string()),
                        ],
                    );
                }
            }
        }
        if image.pdb_info.is_none() {
            match import_pdb(&candidate) {
                Ok(info) => {
                    profiling::diagnostic(
                        "info",
                        "loaded PDB debug sidecar",
                        [
                            TraceField::text("pdb", candidate.display().to_string()),
                            TraceField::count("local_functions", info.function_locals.len() as u64),
                        ],
                    );
                    image.pdb_info = Some(info);
                    loaded_sidecar = true;
                }
                Err(e) => {
                    profiling::diagnostic(
                        "debug",
                        "PDB debug sidecar import failed; continuing without it",
                        [
                            TraceField::text("pdb", candidate.display().to_string()),
                            TraceField::text("err", e.to_string()),
                        ],
                    );
                }
            }
        }
        if loaded_sidecar {
            return;
        }
    }
}

/// Collects timing + counter data across the decompile pipeline and
/// prints a scorecard to stderr at the end. All collection is gated on
/// the `--stats` flag; when off, every method is a near-noop so the hot
/// path stays clean.
pub struct DecompileStats {
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

impl DecompileStats {
    pub fn new(on: bool) -> Self {
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

    pub fn emit_summary(&self, binary: &std::path::Path) {
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
