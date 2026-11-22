//! unlace-console: console front-end of the kuna Rust port.
//!
//! Ports the interactive/test command surface (`decompiler/cpp/`):
//!
//! - `interface.{hh,cc}` (IfaceStatus command dispatch)
//! - `ifaceterm.{hh,cc}` (terminal handling)
//! - `ifacedecomp.{hh,cc}` (every `decomp_dbg` console command)
//! - `testfunction.{hh,cc}` (the XML datatest runner)
//! - the C-declaration parser behind `parse line` (`grammar.{hh,cc}`,
//!   hand-ported from the bison grammar)
//!
//! Binaries: `decomp_dbg` and `decomp_test_dbg` (exact upstream names), so
//! the XML datatests under `tests/datatests/` and the Python harness
//! (`kuna/run_tests.py`, `kuna/decompile.py`) drive the Rust engine through
//! the identical command surface, unchanged.
//!
//! Lints are inherited from the workspace (`[lints] workspace = true`).

pub mod assertions;
pub mod assertsyntax;
pub mod classify;
pub mod codedata;
pub mod consolemain;
pub mod decompile_step;
pub mod disasm;
pub mod engine;
mod entry_selector;
pub mod funcextent;
pub mod grammar;
pub mod ifacedecomp;
pub mod ifaceterm;
pub mod inspect;
pub mod interface;
mod kuna_bootstrap;
pub mod kuna_buildstamp;
#[cfg(test)]
mod kuna_buildstamp_fingerprint;
pub mod kuna_calleeoverride;
mod kuna_callproto;
pub mod kuna_callwide;
pub mod kuna_cheader;
pub mod kuna_console;
pub mod kuna_constformat;
pub mod kuna_declaredbytes;
mod kuna_dwarfstack;
pub mod kuna_framebase;
pub mod kuna_hightarget;
mod kuna_importslots;
pub mod kuna_lazyfuncs;
mod kuna_paramasserts;
mod kuna_qualifiedstorage;
pub mod kuna_retcallchain;
pub mod litpool;
pub mod project;
pub mod project_stream;
pub mod rulecompile;
pub mod unify;

mod kuna_projectfunctionnames;

mod kuna_blobdata;
mod kuna_dataidentifiers;
mod kuna_stringoverlaps;
