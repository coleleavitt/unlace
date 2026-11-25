//! The base of Band B, split out of unlace-bandb (crate-split step 10).
//!
//! Band B (P3-P6) is one fixpoint, but only part of its module graph is cyclic: this crate holds
//! the modules the cyclic core (unlace-bandb-core) reads and the passes unrelated to it, all of
//! which form a DAG over the crates below. It keeps the phase folders of unlace-decomp; every
//! module is re-exported flat at the crate root, unlace-structure (which re-exports the bands
//! below it) is re-exported too, and the crates above re-export this one, so `crate::<module>`
//! paths read the same in every crate (`notes/crate-architecture.md`, step 10).
//!
//! Lints are inherited from the workspace (`[lints] workspace = true`).

mod p3_dataflow;
mod p4_calls;
mod p5_types;
mod p6_variables;

pub use p3_dataflow::*;
pub use p4_calls::*;
pub use p5_types::*;
pub use p6_variables::*;
#[doc(hidden)]
pub use unlace_structure::*;

/// The pass hooks this crate's own modules provide: each module's `provide`, in the driver's
/// order. The driver composes the crates' tables into the default pipeline's
/// (`unlace_decomp::PASS_HOOKS`); a crate's unit tests compose the crates at or below it.
pub fn provide_all(slots: &mut crate::passhooks::UnlaceHookSlots) {
    crate::calltransport::provide(slots);
    crate::funcdata_union::provide(slots);
    crate::exclusivearguse::provide(slots);
    crate::exclusivecallret::provide(slots);
    crate::multiregargs::provide(slots);
    crate::noreturnretuse::provide(slots);
    crate::sharedpush::provide(slots);
    crate::spillargtrial::provide(slots);
    crate::zeroidiomuse::provide(slots);
    crate::indirectanchor::provide(slots);
    crate::calleeprotostack::provide(slots);
    crate::inputtile::provide(slots);
    crate::msvcbyval::provide(slots);
    crate::splitstorekeep::provide(slots);
    crate::stackreadscope::provide(slots);
    crate::varargretreg::provide(slots);
    crate::haltloopguard::provide(slots);
    crate::memoryguard::provide(slots);
    crate::renamereads::provide(slots);
    crate::spillstoreguard::provide(slots);
    crate::wrapsplit::provide(slots);
    crate::dynamiclocals::provide(slots);
    crate::joincalloutput::provide(slots);
    crate::octeoneffects::provide(slots);
    crate::varargtransfer::provide(slots);
    crate::globalvalue::provide(slots);
    crate::pointeevalue::provide(slots);
    crate::tiedphitrim::provide(slots);
    crate::isolated::provide(slots);
    crate::stablenames::provide(slots);
    crate::guardedreadtrim::provide(slots);
    crate::protomerge::provide(slots);
    crate::spsolve::provide(slots);
    crate::stackparamalign::provide(slots);
    crate::vectorabi::provide(slots);
    crate::floatregister::provide(slots);
    crate::inputparamgap::provide(slots);
    crate::inputrefinement::provide(slots);
    crate::inputstorage::provide(slots);
    crate::narrowext::provide(slots);
    crate::nulterminator::provide(slots);
    crate::stackaddrargtrial::provide(slots);
    crate::stackarggap::provide(slots);
    crate::swifterror::provide(slots);
    crate::varargstackargs::provide(slots);
    crate::partialglobalload::provide(slots);
    crate::persistcalls::provide(slots);
    crate::prunedssa::provide(slots);
    crate::swiftcall::provide(slots);
    crate::dfunaffected::provide(slots);
    crate::x87intrinsic::provide(slots);
    crate::retpushedhalf::provide(slots);
    crate::customreturn::provide(slots);
    crate::varargsave::provide(slots);
    crate::arraysize::provide(slots);
    crate::condexeretuse::provide(slots);
    crate::calleepurge::provide(slots);
}

/// This crate's unit tests link without the driver, so they define the driver's hook symbol
/// themselves: the hooks of this crate and the crates below it, and a stub that panics, naming
/// itself, for each hook a higher crate provides (`UnlaceHookSlots::finish_with_stubs`).
#[cfg(test)]
mod unprovided;
