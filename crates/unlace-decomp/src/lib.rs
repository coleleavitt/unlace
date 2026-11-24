//! unlace-decomp: the decompiler core of the kuna Rust port.
//!
//! Ports all of DECCORE plus the kuna phase-model additions
//! (`decompiler/cpp/`):
//!
//! - `varnode`, `op`, `block`, `funcdata*` (the SSA function IR -- slotmap
//!   arenas with id newtypes per ADR 0001)
//! - `type*` (`type.cc`, `typeop.cc`, `cast.cc`, `unionresolve.cc`, ...)
//! - `fspec` (prototype models), `database` (symbol scopes), `heritage`
//!   (SSA construction), `merge` (HighVariable merging), `dynamic`
//!   (DynamicHash), `jumptable`, `flow` (instruction following)
//! - `ruleaction` (split by rule family), `coreaction` (split by phase),
//!   `blockaction` (structuring), `subflow`, `transform`, `condexe`,
//!   `paramid`, `varmap`
//! - `print*` (`printlanguage.cc`, `printc.cc`, `printjava.cc`, `prettyprint.cc`)
//! - the kuna phase registry (`kuna_stages.cc` and friends -- regenerated from
//!   `phases.toml` per ADR 0006)
//!
//! Action/Rule dispatch and scheduling follow ADR 0005; re-runability and the
//! P0 store follow ADR 0007.
//!
//! # Source layout (phase-aligned)
//!
//! The module **files** are grouped on disk into phase-named folders that mirror
//! the normative phase model (`docs/phases.md`; normative walk:
//! `docs/spec/00-overview.md`); the
//! module **names** stay flat (`unlace_decomp::flow`, `crate::dtype`) via the
//! `pub use <folder>::*;` re-exports below, so the public and internal APIs are
//! unchanged. An outsider can read the tree to see what each file does in the
//! pipeline (each folder's `mod.rs` carries a one-line phase gloss):
//!
//! - `substrate/`     -- shared IR & containers used by every phase (varnode/op/block/funcdata*, dtype, ...)
//! - `p0_knowledge/`  -- P0: knowledge & configuration plane (symbol DB, options, overrides, the phase registry)
//! - `p1_partition/`  -- P1: image & code partition (architecture/loader binding)
//! - `p2_lift/`       -- P2: flow & op-graph recovery (lift, CFG, jump tables, injection)
//! - `p3_dataflow/`   -- P3: definition web (SSA/heritage + the simplification rule pools)
//! - `p4_calls/`      -- P4: call & prototype model
//! - `p5_types/`      -- P5: value & type facts (type system + inference)
//! - `p6_variables/`  -- P6: variable & storage model (HighVariables, merge, stack layout)
//! - `p7_regions/`    -- P7: region hierarchy (the angr RegionIdentifier port)
//! - `p8_structure/`  -- P8: structured AST & goto quality (the structuring engine)
//! - `p9_emit/`       -- P9: surface rendering & refinement (PrintC, casts, strings, naming); crates/unlace-emit
//! - `infra/`         -- orchestration & framework (the schedule, the Action/Rule engine, ...)
//!
//! The phase folders are private module groups; the `pub use ::*` re-exports keep
//! every module reachable by its flat name (`unlace_decomp::flow`). Module names are
//! unique across folders, so the glob re-exports never collide. Two conventions:
//!
//! - **The folders are a taxonomy, not the schedule.** Execution order is the
//!   declarative `SchedNode` tree built by `infra/universalaction.rs`
//!   (`universal_sched`); phases P3-P6 co-iterate to a mutual fixpoint inside
//!   `mainloop` (Band B), and restarts re-run the whole tree. The normative
//!   pipeline walk is `docs/spec/00-overview.md`.
//! - `foo.rs` + a sibling `foo/tests.rs` (wired by a trailing `mod tests;`) is
//!   the crate-wide unit-test convention -- a same-named directory next to a
//!   module file holds its tests, not a second module.
//!
//! Lints are inherited from the workspace (`[lints] workspace = true`).

mod infra;
mod p0_knowledge;

pub use infra::*;
pub use p0_knowledge::*;
#[doc(hidden)]
pub use unlace_bandb::*;
#[doc(hidden)]
pub use unlace_emit::*;
#[doc(hidden)]
pub use unlace_lift::*;
#[doc(hidden)]
pub use unlace_middle::*;
#[doc(hidden)]
pub use unlace_structure::*;

/// The pass hooks the driver's own modules provide (the option dispatch and the embedder
/// hooks); [`PASS_HOOKS`] adds every lower crate's `provide_all` and the universal action.
pub fn provide_all(slots: &mut crate::passhooks::KunaHookSlots) {
    crate::option_dispatch::provide(slots);
    crate::hooks::provide(slots);
}

/// The `Funcdata`/`Datatype` extension traits whose methods were inherent before they moved
/// out of the IR module; `use unlace_decomp::prelude::*;` brings every one into scope.
pub mod prelude {
    pub use crate::atomicxadd::FuncdataAtomicxaddExt;
    pub use crate::bejoin::FuncdataBejoinExt;
    pub use crate::bejoin::WidePairEvidenceExt;
    pub use crate::calleedeadarg::FuncdataCalleedeadargExt;
    pub use crate::calleememory::FuncdataCalleememoryExt;
    pub use crate::calleevote::FuncdataCalleevoteExt;
    pub use crate::callerargs::FuncdataCallerargsExt;
    pub use crate::callrettype::FuncdataCallrettypeExt;
    pub use crate::calltargettype::FuncdataCalltargettypeExt;
    pub use crate::calltransport::FuncdataCallTransportExt;
    pub use crate::callwide::FuncdataCallwideExt;
    pub use crate::coreaction_casts::FuncdataCastExt;
    pub use crate::elemptr::FuncdataElemptrExt;
    pub use crate::elfmaindecl::FuncdataElfmaindeclExt;
    pub use crate::entryreads::FuncdataEntryreadsExt;
    pub use crate::funcdata_facing::FuncdataFacingExt;
    pub use crate::funcdata_merge::FuncdataMergeExt;
    pub use crate::funcdata_resolveflow::FuncdataResolveFlowExt;
    pub use crate::funcdata_spacebase::FuncdataAliasExt;
    pub use crate::funcdata_spacebase::FuncdataSpacebaseExt;
    pub use crate::funcdata_union::FuncdataUnionExt;
    pub use crate::inputhints::FuncdataInputhintsExt;
    pub use crate::libcnames::FuncdataLibcnamesExt;
    pub use crate::localstackviews::FuncdataLocalstackviewsExt;
    pub use crate::narrowret::FuncdataNarrowretExt;
    pub use crate::passthrough::FuncdataPassthroughExt;
    pub use crate::ppc32piccalls::FuncdataPpc32piccallsExt;
    pub use crate::protoorder::FuncdataProtoorderExt;
    pub use crate::retpushedhalf::FuncdataRetpushedhalfExt;
    pub use crate::rustabi::FuncdataRustabiExt;
    pub use crate::slotptr::FuncdataSlotptrExt;
    pub use crate::stablenames::FuncdataStablenamesExt;
    pub use crate::stackobjectasserts::FuncdataStackobjectassertsExt;
    pub use crate::stackobjects::FuncdataStackobjectsExt;
    pub use crate::stackreadscope::FuncdataStackreadscopeExt;
    pub use crate::stackstruct::FuncdataStackstructExt;
    pub use crate::stackviews::FuncdataStackviewsExt;
    pub use crate::storereach::FuncdataStorereachExt;
    pub use crate::typequal::DatatypeQualExt;
    pub use crate::unionresolve::FuncdataUnionresolveExt;
    pub use crate::voidret::FuncdataVoidretExt;
}
