//! Extension points with no stability promise.
//!
//! Everything under this module can change or go away in any release. The
//! types it re-exports are the engine's own (`unlace-decomp`), so their
//! methods are the engine's internal API and change with it. A program that
//! needs more of the engine than is re-exported here depends on
//! `unlace-decomp` at the same revision.

pub mod hooks;
