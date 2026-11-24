//! unlace-analysis: the program-prep loader + analyzer layer.
//!
//! Ghidra's C++ decompiler (ported as `unlace-decomp`) consumes a *prepared*
//! program: functions named, imports resolved, data typed, strings detected.
//! In the Ghidra application that preparation is done by the Java **loader +
//! analyzer** tier (the analyzers that run when you import a binary and click
//! "Run Analysis"). A standalone port does not inherit that tier -- so this
//! crate is its home. See [`docs/missing-analyses.md`](../../../docs/missing-analyses.md)
//! for the gap inventory and port roadmap.
//!
//! # Layering
//!
//! `unlace-analysis` sits *above* `unlace-decomp` so an analysis can read the
//! parsed object (via `unlace-sleigh`'s loader + the `object` crate) AND seed the
//! engine's symbol/type tables (`unlace_decomp::{architecture, database}`):
//!
//! ```text
//! unlace-base / unlace-num -> unlace-sleigh -> unlace-decomp -> unlace-analysis -> unlace-console / unlace-cli
//! ```
//!
//! # Layout
//!
//! - [`loadimage_object`] -- the real-object `LoadImage` backend (ELF/Mach-O/
//!   PE/COFF byte mapping + section/segment/symbol enumeration).
//! - [`loadimage_te`] -- bounded UEFI TE header/section parsing and direct
//!   stripped-offset-to-load-address mapping.
//! - [`loadimage_wasm`] -- a WebAssembly module laid out as a flat image, its
//!   bodies lowered to register form.
//! - [`pe_resources`] -- the PE resource directory as flat (type, name, language, RVA, size) records.
//! - [`loader`] -- image-format markup: PLT/GOT import naming, relocations,
//!   ARM/MIPS mapping markers, the known no-return name lists.
//! - [`analyzers`] -- the metadata analyzers, one module per pass (strings,
//!   dwarf, demangle, entry, protos, addrtable, operand_refs, formatstring,
//!   callfixup, sourcelang, noreturn_disc, noreturn_propagate, aif, pclntab,
//!   fid, objc, rtti, pdb); re-exported flat as `unlace_analysis::<analyzer>`.
//! - [`listing`] -- the deferred whole-image Listing tier (decode/classify/
//!   xref walk) and its consumer queries.
//! - [`pass`] / [`passes`] -- the [`pass::AnalysisPass`] interface (a focused,
//!   additive, never-failing producer of facts) and the default pass roster.
//! - [`upx`] -- static unpacking of UPX-packed executables. Not a pass: it runs
//!   *before* loading, because a packed image has no program in it to analyze.
//!
//! # The hand-off contract
//!
//! This crate NEVER calls the per-function decompiler pipeline. Each pass
//! produces an [`pass::AnalysisOutput`] of facts; the console engine stashes
//! them at load (`bootstrap_from_object`) and commits the enabled subset into
//! the engine's `Database`/tables at the `read symbols` boundary
//! (`commit_pending_analysis`). Every pass is a phase-P1 settable option in
//! `phases.toml` (`unlace catalog` lists them; `--option <id> on|off` gates the
//! commit, not the run).
//!
//! Lints are inherited from the workspace (`[lints] workspace = true`).

pub mod analyzers;
pub mod image_bytes;
pub mod listing;
pub mod loader;
pub mod loadimage_cil;
pub mod loadimage_class;
pub mod loadimage_dex;
pub mod loadimage_mz;
pub mod loadimage_object;
pub mod loadimage_te;
pub mod loadimage_wasm;
pub mod neolite;
pub mod pass;
pub mod passes;
pub mod pe_resources;
pub mod pklite;
pub mod upx;

// Flat re-export: analyzer paths stay `unlace_analysis::<analyzer>` (the
// `analyzers/` folder is a layout grouping, not an API namespace).
pub use analyzers::*;
