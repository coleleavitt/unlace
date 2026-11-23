//! The decompiler's IR band, split out of unlace-decomp (crate-split step 9).
//!
//! It holds everything the passes build on and nothing that names a pass: `Funcdata` and its
//! banks (`substrate/`), types, the call model (`fspec`), symbols and scopes, `Architecture` /
//! `ArchContext`, the option registry and catalog tables (`p0_knowledge/`), the action/rule
//! framework, heritage, merge, jump-table recovery and the pass-hook table through which this
//! crate calls the passes. The folders keep the phase layout of unlace-decomp; every module is
//! re-exported flat at the crate root, and unlace-decomp re-exports this crate, so
//! `crate::<module>` paths read the same in both crates.
//!
//! Lints are inherited from the workspace (`[lints] workspace = true`).

mod infra;
mod p0_knowledge;
mod p2_lift;
mod p3_dataflow;
mod p4_calls;
mod p5_types;
mod p6_variables;
mod p9_emit;
mod substrate;

pub use infra::*;
pub use p0_knowledge::*;
pub use p2_lift::*;
pub use p3_dataflow::*;
pub use p4_calls::*;
pub use p5_types::*;
pub use p6_variables::*;
pub use p9_emit::*;
pub use substrate::*;

/// The pass hooks this crate's own modules provide: each module's `provide`, in the driver's
/// order. The driver composes the crates' tables into the default pipeline's
/// (`unlace_decomp::PASS_HOOKS`); a crate's unit tests compose the crates at or below it.
pub fn provide_all(slots: &mut crate::kuna_passhooks::KunaHookSlots) {
    crate::kuna_segmentize::provide(slots);
    crate::kuna_avxintrin::provide(slots);
    crate::kuna_revisitrefine::provide(slots);
    crate::kuna_calloverlap::provide(slots);
    crate::modelrules::provide(slots);
}
