//! `unlace-mcp` — a read-only Model Context Protocol server for unlace.
//!
//! Serves MCP over stdio and answers every tool by running unlace's loader,
//! lifter, and decompiler in-process (the `unlace-cli` library), so results
//! are typed JSON rather than scraped CLI text. No tool writes, patches, or
//! mutates anything; see `docs/mcp.md` for the tool contract.
//!
//! Pipeline options come from the same `unlace.toml` lookup as the CLI, and
//! diagnostics use the CLI's stderr `tracing` subscriber (`RUST_LOG`), so the
//! stdio JSON-RPC channel stays clean.

mod analysis;
mod server;

use std::sync::Arc;

use anyhow::Result;
use rmcp::{ServiceExt, transport::stdio};
use unlace_cli::config::Config;

use crate::server::UnlaceServer;

#[tokio::main]
async fn main() -> Result<()> {
    unlace_cli::logging::init(None)?;
    let config = Arc::new(Config::load(None)?);

    tracing::info!(target: "unlace::mcp", "starting unlace-mcp server (stdio)");

    let service = UnlaceServer::new(config)
        .serve(stdio())
        .await
        .inspect_err(|e| tracing::error!(target: "unlace::mcp", "serving error: {e:?}"))?;

    service.waiting().await?;
    Ok(())
}
