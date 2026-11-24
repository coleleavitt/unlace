//! IDA Lumina: the function-metadata exchange protocol of IDA Pro (push and pull function names,
//! prototypes and comments keyed by a hash of each function's position-independent bytes).
//!
//! * [`wire`] — frames (`u32` big-endian length, packet id, payload) and IDA's `pack_dd`/`pack_dq`.
//! * [`protocol`] — packet ids and the per-command authorization masks of `lumina_server` v9.3.
//! * [`helo`] — the handshake (`HELO`, `HELO_RESULT`).
//! * [`messages`] — `PULL_MD`, `PUSH_MD`, their results, `RPC_FAIL`.
//! * [`metadata`] — the metadata blob's chunks; [`tinfo`] — the function-type chunk.
//! * [`hash`] — the calcrel MD5 key.
//! * [`privacy`] — the sharing policy `unlace lumina push --share-policy` applies (default-deny).
//! * [`client`], [`server`], [`db`] — a blocking client, a thread-per-connection server and its
//!   sqlite store; [`tls`] — rustls transport (feature `tls`).
//!
//! Nothing here opens a connection on its own: the `unlace lumina` subcommands are the only callers.

pub mod client;
pub mod db;
pub mod hash;
pub mod helo;
pub mod messages;
pub mod metadata;
pub mod privacy;
pub mod protocol;
pub mod server;
pub mod tinfo;
pub mod tls;
pub mod wire;

/// A connected byte stream: plain TCP or TLS.
pub trait Stream: std::io::Read + std::io::Write + Send {}

impl<T: std::io::Read + std::io::Write + Send> Stream for T {}
