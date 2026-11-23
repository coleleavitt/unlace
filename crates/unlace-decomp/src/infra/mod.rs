//! Infra -- Orchestration, scheduling & framework.
//!
//! Stage-aligned module group; declared flatly at the crate root via re-export in
//! `lib.rs` so public paths (`unlace_decomp::<module>`) are unchanged.

pub mod action;
pub mod analyzesigs;
pub mod architecture;
pub mod callgraph;
pub mod decompile_drive;
pub mod engine_translate;
pub mod graph;
pub mod kuna_decodekit;
pub mod kuna_fasthash;
pub mod kuna_hooks;
pub mod libdecomp;
pub mod paramid;
pub mod remote_provider;
pub mod signature;
pub mod universalaction;
