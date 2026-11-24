//! unlace-console: console front-end of the unlace Rust port.
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
//! (`unlace/run_tests.py`, `unlace/decompile.py`) drive the Rust engine through
//! the identical command surface, unchanged.
//!
//! Lints are inherited from the workspace (`[lints] workspace = true`).

// Dev-only: take the engine from the dylib (crates/unlace-decomp-dylib).
#[cfg(feature = "dynamic_linking")]
extern crate unlace_decomp_dylib;

pub mod assertions;
pub mod assertsyntax;
mod bootstrap;
pub mod buildstamp;
#[cfg(test)]
mod buildstamp_fingerprint;
pub mod calleeoverride;
mod callproto;
pub mod callwide;
pub mod cheader;
pub mod classify;
pub mod codedata;
pub mod console;
pub mod consolemain;
pub mod constformat;
pub mod declaredbytes;
pub mod decompile_step;
pub mod disasm;
mod dwarfstack;
pub mod engine;
mod entry_selector;
mod esprom;
mod fidproto;
pub mod framebase;
pub mod funcextent;
pub mod grammar;
pub mod hightarget;
pub mod ifacedecomp;
pub mod ifaceterm;
mod importslots;
pub mod inspect;
pub mod interface;
pub mod lazyfuncs;
pub mod litpool;
mod paramasserts;
pub mod project;
pub mod project_stream;
mod qualifiedstorage;
pub mod retcallchain;
pub mod rulecompile;
pub mod typelib;
pub mod unify;

mod projectfunctionnames;

mod blobdata;
mod dataidentifiers;
mod iokittypes;
mod msvcclasses;
mod stringoverlaps;
