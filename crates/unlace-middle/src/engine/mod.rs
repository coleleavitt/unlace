//! Engine -- the SLEIGH engine behind `Architecture`: the translator seam, decode recipes,
//! SLEIGH-compiled p-code injection, and the p-code emulator jump-table recovery runs.
//!
//! Stage-aligned module group; declared flatly at the crate root via re-export in
//! `lib.rs` so public paths (`unlace_decomp::<module>`) are unchanged.

pub mod decodekit;
pub mod emulatefunction;
pub mod engine_translate;
pub mod inject_sleigh;
