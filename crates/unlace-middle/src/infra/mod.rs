//! Infra -- Orchestration, scheduling & framework.
//!
//! Stage-aligned module group; declared flatly at the crate root via re-export in
//! `lib.rs` so public paths (`unlace_decomp::<module>`) are unchanged.

pub mod action;
pub mod architecture;
pub mod fasthash;
pub mod remote_provider;
