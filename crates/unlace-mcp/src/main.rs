//! `unlace-mcp` — a CLI-first Model Context Protocol server.
//!
//! Exposes unlace's **read-only** decompiler capabilities over MCP stdio
//! transport so agents and external tooling can ask unlace to open a binary,
//! list its functions, and decompile one function. This realizes ROADMAP.md
//! Phase F.4 and follows `docs/mcp.md`.
//!
//! The server shells out to the `unlace` binary (resolved from the `UNLACE_BIN`
//! environment variable, else `unlace` on `PATH`). This keeps the MCP surface a
//! thin, stable wrapper over the CLI rather than a second copy of the pipeline
//! orchestration; it can later be upgraded to in-process linking against
//! `unlace-cli` without changing the tool contract.
//!
//! Every tool here is read-only: there is no tool that writes, patches, or
//! mutates project state.

mod server;

use anyhow::Result;
use rmcp::{ServiceExt, transport::stdio};
use tracing_subscriber::EnvFilter;

use crate::server::UnlaceServer;

#[tokio::main]
async fn main() -> Result<()> {
    // Logs go to stderr so they never corrupt the stdio JSON-RPC channel.
    tracing_subscriber::fmt()
        .with_env_filter(
            EnvFilter::try_from_default_env().unwrap_or_else(|_| EnvFilter::new("info")),
        )
        .with_writer(std::io::stderr)
        .with_ansi(false)
        .init();

    tracing::info!("starting unlace-mcp server (stdio)");

    let service = UnlaceServer::new().serve(stdio()).await.inspect_err(|e| {
        tracing::error!("serving error: {e:?}");
    })?;

    service.waiting().await?;
    Ok(())
}
