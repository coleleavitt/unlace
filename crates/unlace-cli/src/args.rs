//! CLI argument definitions via `clap` derive.

use std::path::PathBuf;

use clap::{Parser, Subcommand, ValueEnum};
use serde::{Deserialize, Serialize};

/// unlace — a decompiler for reverse engineering.
#[derive(Parser)]
#[command(name = "unlace", version, about)]
pub struct Args {
    #[command(subcommand)]
    pub cmd: Cmd,

    /// Configuration file. Default: `./unlace.toml`, then
    /// `$XDG_CONFIG_HOME/unlace/config.toml`.
    #[arg(long, global = true)]
    pub config: Option<PathBuf>,

    /// Diagnostic filter in `RUST_LOG` syntax, e.g. `unlace::sccp=debug` or
    /// `unlace=debug,[function{name=main}]=trace`. Overrides `RUST_LOG`.
    #[arg(long, global = true)]
    pub log: Option<String>,
}

#[derive(Subcommand)]
pub enum Cmd {
    /// Create, open, save, and export `.unlace` project files.
    Project {
        #[command(subcommand)]
        action: ProjectAction,
    },

    /// Inspect the effective configuration.
    Config {
        #[command(subcommand)]
        action: ConfigAction,
    },

    /// Decompile a binary file.
    Decompile {
        /// Path to the binary file.
        binary: PathBuf,

        /// Function to decompile (name or hex address like 0x401000).
        /// Default: all functions.
        #[arg(long)]
        function: Option<String>,

        /// Output format.
        #[arg(long, default_value = "c")]
        emit: EmitFormat,

        /// Override architecture detection (e.g. "x86_64").
        #[arg(long)]
        arch: Option<String>,

        /// Write output to a file instead of stdout.
        #[arg(long, short)]
        output: Option<PathBuf>,

        /// Also snapshot this run under DIR/<timestamp>-<uuid>/ for diffing.
        #[arg(long)]
        capture_dir: Option<PathBuf>,

        /// Decompile all functions (default behavior).
        #[arg(long)]
        all: bool,

        /// Increase verbosity (-v, -vv, -vvv).
        #[arg(long, short, action = clap::ArgAction::Count)]
        verbose: u8,

        /// Per-function decompilation timeout in seconds (default: 30).
        #[arg(long, default_value = "30")]
        timeout: u64,

        /// Directory containing plugin shared libraries (.so/.dylib/.dll).
        #[arg(long)]
        plugin_dir: Option<PathBuf>,

        /// Soft right-margin column at which the C printer attempts to
        /// wrap long expressions. Mirrors IDA's `module_data + 600` field.
        #[arg(long)]
        max_width: Option<usize>,

        /// Number of space columns emitted per nesting level. Mirrors
        /// IDA's `module_data + 592` indent-step setting.
        #[arg(long)]
        tab_width: Option<usize>,

        /// External DWARF sidecar (a separate ELF carrying `.debug_*`
        /// sections, e.g. from `objcopy --only-keep-debug`). Lets a stripped
        /// binary recover parameter/local/type names from the companion file.
        #[arg(long)]
        dwarf_sidecar: Option<PathBuf>,

        /// Path to a JSON annotation database to load before printing.
        /// Defaults to `<binary>.unlace.json` when present.
        #[arg(long)]
        annotations_load: Option<PathBuf>,

        /// If set, write the (possibly empty) annotation database back to
        /// this path after the run. Useful for seeding a fresh sidecar.
        #[arg(long)]
        annotations_save: Option<PathBuf>,

        /// Print a per-phase performance + quality scorecard to stderr
        /// after the run: load/discover/lift/passes/print timings, a
        /// live progress bar, per-function instruction counts, and
        /// aggregate counters (Unimplemented/Callother/goto/etc.).
        #[arg(long)]
        stats: bool,

        /// Disable FLIRT/SIG matching entirely.
        #[arg(long)]
        no_flirt: bool,

        /// Additional IDA `.sig` signature file to load. May be repeated.
        #[arg(long = "sig")]
        sig: Vec<PathBuf>,

        /// Directory containing IDA `.sig` files. May be repeated.
        #[arg(long = "sig-dir")]
        sig_dir: Vec<PathBuf>,

        /// Minimum FLIRT confidence as an integer percentage.
        #[arg(long, default_value_t = 50, value_parser = clap::value_parser!(u8).range(0..=100))]
        flirt_min_confidence: u8,

        /// Analysis engine (default: `[engine] default` in the config, else `legacy`). `ghidra` is the
        /// `unlace-engine` core (Ghidra's decompiler ported to Rust).
        #[arg(long, value_enum)]
        engine: Option<Engine>,

        /// Naming of `--engine ghidra` output: IDA/Hex-Rays (`int`, `_QWORD`, `sub_401000`) or Ghidra's own.
        #[arg(long, value_enum)]
        engine_style: Option<EngineStyle>,

        /// Print a JSON array with one object per function (`name`, `address`,
        /// `size`, `ok`, `line_count`, `code`) instead of the plain listing.
        #[arg(long)]
        json: bool,
    },

    /// List the functions a binary would be decompiled into, one
    /// `0x<address> <name>` per line.
    Functions {
        /// Path to the binary file.
        binary: PathBuf,

        /// Print a JSON array of `{name, address, size}` objects instead.
        #[arg(long)]
        json: bool,
    },

    /// Generate a FLIRT `.sig` file (or unlace TOML patterns) from static
    /// libraries (`.a`, `.rlib`, `.lib`) and relocatable objects.
    Siggen {
        /// Input archives and object files; all must target one architecture.
        #[arg(required = true)]
        inputs: Vec<PathBuf>,

        /// Output file. Required for `--format sig`; TOML goes to stdout
        /// without it.
        #[arg(long, short)]
        output: Option<PathBuf>,

        /// Output format.
        #[arg(long, value_enum, default_value = "sig")]
        format: SigFormat,

        /// Library name recorded in the `.sig` header (default: the first
        /// input's file name).
        #[arg(long)]
        name: Option<String>,

        /// `.sig` only: skip functions with fewer fixed (non-relocated)
        /// bytes in their 32-byte pattern and CRC range.
        #[arg(long, default_value_t = unlace_flirt::sig::make::SigSpec::DEFAULT_MIN_FIXED_BYTES)]
        min_fixed_bytes: usize,

        /// `.sig` only: leave out functions whose name starts with this
        /// prefix (e.g. `main.` and `cmd/` when the input is a Go program's
        /// `go.o`). May be repeated.
        #[arg(long = "exclude-prefix")]
        exclude_prefixes: Vec<String>,

        /// TOML only: number of leading function bytes in each pattern.
        #[arg(long, default_value_t = 32)]
        pattern_len: usize,

        /// TOML only: number of tail bytes to checksum for disambiguation.
        #[arg(long, default_value_t = 32)]
        crc_len: usize,

        /// TOML only: skip functions shorter than this many bytes.
        #[arg(long, default_value_t = 1)]
        min_function_len: usize,

        /// Increase verbosity (-v, -vv, -vvv).
        #[arg(long, short, action = clap::ArgAction::Count)]
        verbose: u8,
    },

    /// Batch-decompile all functions in a binary in parallel.
    ///
    /// Alias: `dump-all`.
    #[command(visible_alias = "dump-all")]
    Batch {
        /// Path to the binary file.
        binary: PathBuf,

        /// Number of parallel threads (default: number of CPUs).
        #[arg(long, short, default_value_t = 0)]
        jobs: usize,

        /// Output format.
        #[arg(long, default_value = "c")]
        emit: EmitFormat,

        /// Override architecture detection (e.g. "x86_64").
        #[arg(long)]
        arch: Option<String>,

        /// Write one .c file per function into this directory.
        #[arg(long)]
        output_dir: Option<PathBuf>,

        /// External DWARF sidecar (a separate ELF carrying `.debug_*`
        /// sections, e.g. from `objcopy --only-keep-debug`). Lets a stripped
        /// binary recover parameter/local/type names from the companion file.
        #[arg(long)]
        dwarf_sidecar: Option<PathBuf>,

        /// Write single merged output (default when --output-dir is absent).
        #[arg(long)]
        merged: bool,

        /// Per-function decompilation timeout in seconds (default: 30).
        #[arg(long, default_value = "30")]
        timeout: u64,

        /// Run whole-program interprocedural analysis between lift+passes and emit.
        /// Refines cross-function signatures via fixed-point iteration.
        #[arg(long)]
        interproc: bool,

        /// Process every discovered function (default behavior — flag is
        /// surfaced for future "main+exports-only" gating; currently a no-op).
        #[arg(long)]
        all_functions: bool,

        /// Regex restricting which functions are decompiled by name match.
        /// Combines with `--all-functions`: discovery runs first, then filter.
        #[arg(long)]
        scope: Option<String>,

        /// Cap on interprocedural fixed-point iterations (0 = use default).
        /// Only relevant when `--interproc` is set.
        #[arg(long, default_value_t = 0)]
        max_iterations: usize,

        /// Increase verbosity (-v, -vv, -vvv).
        #[arg(long, short, action = clap::ArgAction::Count)]
        verbose: u8,

        /// Emit live progress while decompiling. `dump-all` turns this on by
        /// default; `batch` keeps the historical default (off) unless this flag
        /// is set.
        #[arg(long)]
        progress: bool,

        /// Progress rendering mode. Progress is drawn on stderr only when
        /// stderr is a terminal; logs and pipes never receive it.
        ///
        /// - `auto`: same as `color`
        /// - `plain`: uncolored progress bar
        /// - `color`: ANSI-colored progress bar
        /// - `off`: disable progress output
        #[arg(long, value_enum, default_value = "auto")]
        progress_style: BatchProgressStyle,

        /// Disable FLIRT/SIG matching entirely.
        #[arg(long)]
        no_flirt: bool,

        /// Additional IDA `.sig` signature file to load. May be repeated.
        #[arg(long = "sig")]
        sig: Vec<PathBuf>,

        /// Directory containing IDA `.sig` files. May be repeated.
        #[arg(long = "sig-dir")]
        sig_dir: Vec<PathBuf>,

        /// Minimum FLIRT confidence as an integer percentage.
        #[arg(long, default_value_t = 50, value_parser = clap::value_parser!(u8).range(0..=100))]
        flirt_min_confidence: u8,

        /// Analysis engine (default: `[engine] default` in the config, else `legacy`). `ghidra` is the
        /// `unlace-engine` core (Ghidra's decompiler ported to Rust).
        #[arg(long, value_enum)]
        engine: Option<Engine>,

        /// Naming of `--engine ghidra` output: IDA/Hex-Rays (`int`, `_QWORD`, `sub_401000`) or Ghidra's own.
        #[arg(long, value_enum)]
        engine_style: Option<EngineStyle>,
    },

    /// Dump end-state SSA IR text for one (or all) functions at a chosen
    /// pipeline phase. Complementary to `--log unlace::pass::ir=trace`, which
    /// prints per-pass diffs *inside* the pipeline — `ir-dump` snapshots the final
    /// IR after a named milestone instead.
    IrDump {
        /// Path to the binary file.
        binary: PathBuf,
        /// Function to dump (name or hex address like 0x401000).
        /// Default: dump every discovered function.
        #[arg(long)]
        function: Option<String>,
        /// Pipeline phase whose end-state IR to dump.
        /// One of: `lift` (SSA built, no passes), `post-passes` (default;
        /// after the full pass pipeline), `post-structuring` (passes +
        /// structurer; structurer may rewrite the SSA in place via
        /// `structure_preserve_returns`).
        #[arg(long, default_value = "post-passes")]
        phase: Option<String>,
        /// Increase verbosity (-v, -vv, -vvv).
        #[arg(long, short, action = clap::ArgAction::Count)]
        verbose: u8,
    },

    /// Interact with a Hex-Rays-compatible Lumina v6 server.
    ///
    /// The protocol is the real on-the-wire framing used by IDA Pro's Lumina
    /// (length-prefixed binary frames, vuint32 codec, packet ids 10..49) —
    /// see `crates/unlace-lumina` for details.
    Lumina {
        #[command(subcommand)]
        action: LuminaAction,
    },

    /// Measure decompiler output quality (feature counters, no C emission).
    Quality {
        /// Path to the binary file.
        binary: PathBuf,

        /// Report format.
        #[arg(long, default_value = "md")]
        format: QualityFormat,

        /// Increase verbosity (-v, -vv, -vvv).
        #[arg(long, short, action = clap::ArgAction::Count)]
        verbose: u8,

        /// Disable FLIRT/SIG matching entirely.
        #[arg(long)]
        no_flirt: bool,

        /// Additional IDA `.sig` signature file to load. May be repeated.
        #[arg(long = "sig")]
        sig: Vec<PathBuf>,

        /// Directory containing IDA `.sig` files. May be repeated.
        #[arg(long = "sig-dir")]
        sig_dir: Vec<PathBuf>,

        /// Minimum FLIRT confidence as an integer percentage.
        #[arg(long, default_value_t = 50, value_parser = clap::value_parser!(u8).range(0..=100))]
        flirt_min_confidence: u8,
    },

    /// Identify the packer/protector of a binary with ranked evidence.
    ///
    /// Combines section-name signatures (UPX/ASPack/Themida/MPRESS/Enigma)
    /// with per-section entropy, entrypoint facts, and TLS-callback presence
    /// to emit a ranked list of hypotheses plus the raw evidence. Read-only.
    IdentifyPacker {
        /// Path to the binary file.
        binary: PathBuf,

        /// Report format.
        #[arg(long, default_value = "md")]
        format: QualityFormat,
    },

    /// Run the IR-level interpreter on a binary, sandboxed.
    ///
    /// Loads sections into the emulator's MemoryMap, sets `rip` to the
    /// entry point, then steps lifted IR instructions until syscall_exit
    /// or `--max-instructions`. Syscalls fork/exec/clone are denied; only
    /// stdout/stderr writes are forwarded.
    Emu {
        /// Path to the binary to interpret.
        binary: PathBuf,

        /// Maximum IR instructions to execute.
        #[arg(long, default_value_t = 1_000_000)]
        max_instructions: u64,

        /// Print the per-syscall trace on exit.
        #[arg(long)]
        trace: bool,

        /// Increase verbosity.
        #[arg(long, short, action = clap::ArgAction::Count)]
        verbose: u8,
    },

    /// Attach the Linux ptrace debugger to a running PID.
    ///
    /// Requires the `linux-ptrace` feature; on hosts without that or on
    /// non-Linux, prints an explanatory error and exits non-zero.
    Dbg {
        /// PID of the live process to attach to.
        #[arg(long)]
        pid: u32,

        /// Hex address to set a software breakpoint at on attach.
        #[arg(long)]
        breakpoint: Option<String>,

        /// Continue after attaching (otherwise stops on initial SIGSTOP).
        #[arg(long)]
        cont: bool,
    },

    /// Apply a binary patch and write the result to a new file.
    ///
    /// Searches every section's raw bytes for an address-matching offset,
    /// overwrites with the supplied hex bytes, writes the modified file.
    Patch {
        /// Source binary.
        binary: PathBuf,

        /// Hex address to patch (e.g. `0x401234`).
        #[arg(long)]
        ea: String,

        /// Hex bytes to write (e.g. `9090C3` = nop nop ret).
        #[arg(long)]
        bytes: String,

        /// Output path. Defaults to `<binary>.patched`.
        #[arg(long, short)]
        output: Option<PathBuf>,
    },

    /// Load and inspect an IDA FLIRT `.sig` signature file.
    ///
    /// Decompresses the IDASGN zlib payload and prints the parsed
    /// header + a sample of the extracted function names. Useful for
    /// confirming a sig file is valid before wiring it into the
    /// FLIRT-match pipeline.
    Sigload {
        /// Path to the `.sig` file.
        path: PathBuf,

        /// Maximum function names to print (default 20).
        #[arg(long, default_value_t = 20)]
        limit: usize,

        /// Emit JSON instead of human-readable text.
        #[arg(long)]
        json: bool,

        /// Apply matched signatures to `--binary` and print a report.
        #[arg(long)]
        apply: bool,

        /// Binary to apply signatures against (required when `--apply` is set).
        #[arg(long)]
        binary: Option<PathBuf>,

        /// Overwrite already-named functions (default: only rename
        /// synthetic `sub_*` symbols).
        #[arg(long)]
        force: bool,

        /// Minimum FLIRT confidence as an integer percentage when --apply is set.
        #[arg(long, default_value_t = 50, value_parser = clap::value_parser!(u8).range(0..=100))]
        flirt_min_confidence: u8,
    },

    /// Load and inspect an IDA `.til` type library.
    ///
    /// Decompresses the IDATIL zlib payload and prints the parsed
    /// header + a sample of the extracted symbol names + ordinals.
    Tilload {
        /// Path to the `.til` file.
        path: PathBuf,

        /// Maximum symbols to print (default 20).
        #[arg(long, default_value_t = 20)]
        limit: usize,

        /// Emit JSON instead of human-readable text.
        #[arg(long)]
        json: bool,

        /// Apply type-library entries to `--binary` and print a report.
        #[arg(long)]
        apply: bool,

        /// Binary to apply type annotations against (required when `--apply` is set).
        #[arg(long)]
        binary: Option<PathBuf>,
    },

    /// Print a symbol-server URL for the given identifier.
    ///
    /// Supports the Microsoft Symbol Server (--pdb + --guid + --age) and
    /// debuginfod (--buildid). With `--fetch`, also downloads via ureq
    /// to the local symcache.
    Symfetch {
        /// MSFT PDB name (e.g. `kernel32.pdb`).
        #[arg(long)]
        pdb: Option<String>,

        /// MSFT GUID (32 hex chars, no dashes). Pairs with --pdb + --age.
        #[arg(long)]
        guid: Option<String>,

        /// MSFT PDB age. Pairs with --pdb + --guid.
        #[arg(long, default_value_t = 1)]
        age: u32,

        /// debuginfod build-id (hex).
        #[arg(long)]
        buildid: Option<String>,

        /// debuginfod server.
        #[arg(long, default_value = "https://debuginfod.elfutils.org/")]
        server: String,

        /// Actually fetch (vs. just print the URL).
        #[arg(long)]
        fetch: bool,
    },
}

/// Sub-actions for `unlace config`.
#[derive(Subcommand)]
pub enum ConfigAction {
    /// Print the effective configuration (file values over defaults) as TOML.
    Show,
}

/// Sub-actions for `unlace project`.
#[derive(Subcommand)]
pub enum ProjectAction {
    /// Create a new empty `.unlace` project bound to a binary SHA-256.
    New {
        /// Binary the project is bound to.
        binary: PathBuf,
        /// Output project path.
        #[arg(long, short)]
        output: PathBuf,
    },
    /// Open a `.unlace` project or legacy `.unldb` database.
    Open {
        /// Project/database file to open.
        file: PathBuf,
        /// Override the binary path recorded in the project.
        #[arg(long)]
        binary: Option<PathBuf>,
        /// Emit a JSON summary.
        #[arg(long)]
        json: bool,
    },
    /// Re-save a project file in the current `.unlace` schema.
    Save {
        /// Project/database file to validate and save.
        file: PathBuf,
    },
    /// Export only user annotations from a `.unlace` or `.unldb` file.
    ExportAnnotations {
        /// Project/database file to read.
        file: PathBuf,
        /// Write JSON to a file instead of stdout.
        #[arg(long, short)]
        output: Option<PathBuf>,
    },
}

/// Sub-actions for `unlace lumina`.
#[derive(Subcommand)]
pub enum LuminaAction {
    /// Run a Lumina v6 server backed by a sqlite database.
    Serve {
        /// Address to bind (e.g. `127.0.0.1:1234`).
        #[arg(long, default_value = "127.0.0.1:1234")]
        bind: String,
        /// Path to the sqlite database file. Use `:memory:` for an
        /// ephemeral in-process database.
        #[arg(long, default_value = ":memory:")]
        db: String,
    },
    /// Push a single function record to a Lumina server. The hash is the
    /// 32-byte content hash of the binary file (SHA-256). Intended as a
    /// minimal smoke-test driver, not a full IDA-style pusher.
    Push {
        /// Server address (host:port).
        #[arg(long)]
        server: String,
        /// File to upload as the function's metadata blob; the SHA-256 of
        /// its bytes is also used as the calcrel_hash.
        #[arg(long)]
        binary: PathBuf,
        /// Function name to record.
        #[arg(long, default_value = "anonymous")]
        name: String,
        /// Lumina protocol version (1..=6).
        #[arg(long, default_value_t = 6)]
        proto: u32,
        /// Username for HELO credentials.
        #[arg(long, default_value = "anonymous")]
        user: String,
        /// Password for HELO credentials.
        #[arg(long, default_value = "")]
        password: String,
    },
    /// Pull a single function record by `calcrel_hash` (64 hex chars).
    Pull {
        /// Server address (host:port).
        #[arg(long)]
        server: String,
        /// `calcrel_hash` as 64 hex chars.
        #[arg(long)]
        hash: String,
        /// Lumina protocol version (1..=6).
        #[arg(long, default_value_t = 6)]
        proto: u32,
        /// Username for HELO credentials.
        #[arg(long, default_value = "anonymous")]
        user: String,
        /// Password for HELO credentials.
        #[arg(long, default_value = "")]
        password: String,
    },
}

/// `siggen` output format.
#[derive(Clone, Copy, Debug, PartialEq, Eq, ValueEnum)]
pub enum SigFormat {
    /// IDA FLIRT `.sig` (IDASGN v10), loadable with `--sig`/`--sig-dir`.
    Sig,
    /// unlace TOML patterns.
    Toml,
}

/// Quality report output format.
#[derive(Clone, Copy, Debug, ValueEnum)]
pub enum QualityFormat {
    /// Markdown table for human review.
    Md,
    /// JSON for automation.
    Json,
}

/// Output format selector.
#[derive(Clone, Copy, Debug, ValueEnum)]
pub enum EmitFormat {
    /// Emit pseudo-C output.
    C,
    /// Emit IR text dump.
    Ir,
    /// Emit Graphviz DOT for the CFG.
    CfgDot,
}

/// Batch progress rendering mode.
#[derive(Clone, Copy, Debug, ValueEnum, PartialEq, Eq)]
pub enum BatchProgressStyle {
    /// Colored progress bar when stderr is a terminal.
    Auto,
    /// Disable batch progress output.
    Off,
    /// Uncolored progress bar when stderr is a terminal.
    Plain,
    /// ANSI-colored progress bar when stderr is a terminal.
    Color,
}

/// Analysis engine for `decompile` and `batch`.
#[derive(Clone, Copy, Debug, Default, PartialEq, Eq, ValueEnum, Serialize, Deserialize)]
#[serde(rename_all = "kebab-case")]
pub enum Engine {
    /// unlace's own lifters, passes, structurer, and C printer.
    #[default]
    Legacy,
    /// `unlace-engine`, the Rust port of Ghidra's decompiler.
    Ghidra,
}

/// Naming convention of `--engine ghidra` output.
#[derive(Clone, Copy, Debug, Default, PartialEq, Eq, ValueEnum, Serialize, Deserialize)]
#[serde(rename_all = "kebab-case")]
pub enum EngineStyle {
    #[default]
    Ida,
    Ghidra,
}

impl From<EngineStyle> for unlace_engine::output_style::OutputStyle {
    fn from(style: EngineStyle) -> Self {
        match style {
            EngineStyle::Ida => Self::Ida,
            EngineStyle::Ghidra => Self::Ghidra,
        }
    }
}
