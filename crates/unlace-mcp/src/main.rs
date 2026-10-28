//! `unlace-mcp` — a read-only Model Context Protocol server for unlace.
//!
//! Serves MCP over stdio and answers every tool by running unlace's loader,
//! lifter, and decompiler in-process (the `unlace-cli` library), so results
//! are typed JSON rather than scraped CLI text. No tool writes, patches, or
//! mutates anything; see `docs/mcp.md` for the tool contract.

mod analysis;
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
