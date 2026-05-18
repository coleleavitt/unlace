//! Hex-Rays IDA Pro Lumina v6 binary protocol — Rust reimplementation.
//!
//! This crate re-implements the on-the-wire Lumina server protocol used by
//! Hex-Rays IDA Pro (server identity `Hex-Rays IDA Pro Lumina Server v9.3,
//! 2026`). The implementation was derived from a full reverse-engineering of
//! `lumina_server` v9.3 (see `research/lumina/all/` in this repo).
//!
//! High-level shape:
//!
//! * [`wire`] — frame codec (`u32 be length` + `u8 packet_id` + payload) and
//!   primitive codec (`vuint32`, `u64` two-half encoding, `cstring`,
//!   length-prefixed raw bytes).
//! * [`protocol`] — strongly-typed packet-id enum, auth/feature mask table
//!   and admin-required predicate. Mirrors `unk_237640` and `dword_1B6840`.
//! * [`helo`] — HELO packet (id 13) encode/decode and the matching
//!   HELO_RESULT (id 49) response.
//! * [`server`] — async TCP server, handshake, per-command dispatch through
//!   the auth mask, [`server::Handler`] trait, and [`server::InMemoryHandler`]
//!   for tests.
//! * [`db`] — sqlite-backed handler implementation.
//! * [`client`] — minimal async client used by the CLI and tests
//!   (`pull_md`, `push_md`).
//! * [`legacy_json`] — original JSON-over-HTTP placeholder, kept compiling
//!   for legacy callers and tests but not part of the v6 protocol.

pub mod client;
pub mod db;
pub mod helo;
pub mod legacy_json;
pub mod protocol;
pub mod server;
pub mod wire;

// Re-export the legacy placeholder API at the crate root so old call sites
// (`unlace_lumina::Annotation`, `unlace_lumina::router`, etc.) keep working.
pub use legacy_json::{
    Annotation, AnnotationKind, AnnotationServer, SharedState, hash_function_bytes, router,
};

// Also surface the additional legacy sub-modules that pre-dated this rewrite.
pub mod collab;
pub mod conflict_ui;
pub mod privacy_client;
pub mod public_db;
pub mod web_ui;
