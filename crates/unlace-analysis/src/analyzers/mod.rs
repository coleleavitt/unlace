//! The metadata/markup analyzers of the program-prep tier — one module per
//! analysis pass (each doubles as its settable-option name in `phases.toml`).
//!
//! Grouped here for layout only; `lib.rs` re-exports them flat, so public
//! paths stay `unlace_analysis::<analyzer>` (e.g. `unlace_analysis::dwarf`).

pub mod addrtable;
pub mod aif;
pub mod apihash;
pub mod blobs;
pub mod callfixup;
pub mod cfstring;
pub mod com;
pub mod cortexmscs;
pub mod cvftrace;
pub mod delphi;
pub mod demangle;
pub mod dwarf;
pub mod entry;
pub mod fast_funcdisc;
pub mod fid;
pub mod flirt;
pub mod formatstring;
pub mod gotypes;
pub mod iokit;
pub mod kernelbug;
pub mod noreturn_disc;
pub mod noreturn_propagate;
pub mod objc;
pub mod operand_refs;
pub mod pclntab;
pub mod pdb;
pub mod protos;
pub mod rtti;
pub mod sourcelang;
pub mod strings;
pub mod swift;
pub mod syscallwrappers;
pub mod tls;
pub mod uefi;
