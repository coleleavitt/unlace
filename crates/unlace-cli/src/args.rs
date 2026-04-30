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
    },
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
