//! The process-wide `tracing` subscriber for the `unlace` CLI.
//!
//! Diagnostics go to stderr. The filter comes from `--log`, else `RUST_LOG`,
//! else `warn`. Analysis traces use `unlace::<area>` targets, and each analyzed
//! function runs inside a `function{name=..., addr=...}` span, so
//! `RUST_LOG='unlace::sccp[function{name=main}]=debug'` traces one pass on one
//! function.

use std::io::IsTerminal;

use anyhow::{Context, Result};
use tracing_subscriber::EnvFilter;

/// Install the stderr subscriber. `filter` uses `EnvFilter` directive syntax.
pub fn init(filter: Option<&str>) -> Result<()> {
    let filter = match filter {
        Some(directives) => EnvFilter::try_new(directives)
            .with_context(|| format!("invalid --log filter `{directives}`"))?,
        None => EnvFilter::try_from_default_env().unwrap_or_else(|_| EnvFilter::new("warn")),
    };
    tracing_subscriber::fmt()
        .with_env_filter(filter)
        .with_writer(std::io::stderr)
        .with_ansi(std::io::stderr().is_terminal())
        .without_time()
        .try_init()
        .map_err(|err| anyhow::anyhow!("installing tracing subscriber: {err}"))
}
