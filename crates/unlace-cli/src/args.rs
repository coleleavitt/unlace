//! CLI argument definitions via `clap` derive.

use std::path::PathBuf;

use clap::{Parser, Subcommand, ValueEnum};

/// unlace — a decompiler for reverse engineering.
#[derive(Parser)]
#[command(name = "unlace", version, about)]
pub struct Args {
    #[command(subcommand)]
    pub cmd: Cmd,
}

#[derive(Subcommand)]
pub enum Cmd {
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

        /// Path to a JSON annotation database to load before printing.
        /// Defaults to `<binary>.unlace.json` when present.
        #[arg(long)]
        annotations_load: Option<PathBuf>,

        /// If set, write the (possibly empty) annotation database back to
        /// this path after the run. Useful for seeding a fresh sidecar.
        #[arg(long)]
        annotations_save: Option<PathBuf>,
    },

    /// Generate FLIRT patterns from a compiled static library archive (.a).
    Siggen {
        /// Path to the input static archive (.a).
        archive: PathBuf,

        /// Write TOML pattern output to a file instead of stdout.
        #[arg(long, short)]
        output: Option<PathBuf>,

        /// Number of leading function bytes to include in each pattern.
        #[arg(long, default_value_t = 32)]
        pattern_len: usize,

        /// Number of tail bytes to checksum for disambiguation.
        #[arg(long, default_value_t = 32)]
        crc_len: usize,

        /// Skip functions shorter than this many bytes.
        #[arg(long, default_value_t = 1)]
        min_function_len: usize,

        /// Increase verbosity (-v, -vv, -vvv).
        #[arg(long, short, action = clap::ArgAction::Count)]
        verbose: u8,
    },

    /// Batch-decompile all functions in a binary in parallel.
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
    },

    /// Dump end-state SSA IR text for one (or all) functions at a chosen
    /// pipeline phase. Complementary to `UNLACE_TRACE_PASSES`, which prints
    /// per-pass diffs *inside* the pipeline — `ir-dump` snapshots the final
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
