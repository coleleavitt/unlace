//! Tests moved out of `architecture` because they read higher-band modules. They live in the
//! driver so the middle band can become its own crate (unlace-middle).

#![allow(unused_imports, dead_code)]

use crate::action::ActionDatabase;
use crate::architecture::*;
use crate::context::ArchContext;
use crate::context::ArchHandle;
use crate::database::Database;
use crate::dtype::TypeFactory;
use crate::dtype::TypeFactoryImpl;
use crate::dtype::type_metatype;
use crate::engine_translate::EngineTranslate;
use crate::flow_flags;
use crate::fspec::ProtoModel;
use crate::funcdata::Funcdata;
use crate::inject_sleigh::PcodeInjectLibrarySleigh;
use crate::options::ArchOptionContext;
use crate::options::BraceCategory;
use crate::options::BraceStyle;
use crate::options::NamespaceStrategy;
use crate::options::OptionDatabase;
use crate::options::split_datatype;
use crate::printc::ArchPrintExt;
use crate::printc::PrintC;
use crate::userop::UserOpManage;
use std::cell::RefCell;
use std::path::PathBuf;
use std::rc::Rc;
use std::sync::Arc;
use unlace_base::address::Address;
use unlace_base::error::KunaError;
use unlace_base::error::KunaResult;
use unlace_base::space::AddrSpace;
use unlace_base::space::AddrSpaceManager;
use unlace_base::types::int4;
use unlace_base::types::uint4;
use unlace_base::types::uintb;
use unlace_sleigh::globalcontext::ContextInternal;
use unlace_sleigh::loadimage::LoadImage;
use unlace_sleigh::sleigh::Sleigh;
use unlace_sleigh::translate::Translate;
use unlace_sleigh::translate::UniqueLayout;

struct DummyImg;

impl LoadImage for DummyImg {
    fn get_file_name(&self) -> &str {
        "dummy"
    }
    fn load_fill(&mut self, _ptr: &mut [u8], _addr: &Address) -> KunaResult<()> {
        Err(KunaError::data_unavail("dummy"))
    }
    fn get_arch_type(&self) -> Vec<u8> {
        Vec::new()
    }
    fn adjust_vma(&mut self, _adjust: i64) {}
}

/// A bare (uninitialized) Sleigh — enough to construct an `Architecture` and
/// read its defaults; it has no spaces (no `.sla`), so it cannot lift.
fn bare_sleigh() -> Sleigh {
    Sleigh::new(Box::new(DummyImg), Box::new(ContextInternal::new()))
}

#[test]
fn kuna_anchor_flags_default_to_div_values() {
    let arch = Architecture::new("test:LE:32", bare_sleigh());
    // DIV-2/DIV-3 default-on (architecture.cc:1430-1451).
    assert!(
        arch.kuna_options
            .get::<crate::memsetsequence::MemsetRecover>()
            .0
    );
    assert!(
        arch.kuna_options
            .get::<crate::arraystride::RecoverArrayStride>()
            .0
    );
    assert!(
        arch.kuna_options
            .get::<crate::loweredswitch::LoweredSwitchMode>()
            .enabled()
    );
    assert!(
        arch.kuna_options
            .get::<crate::coreoptions::NameStyleAngr>()
            .0
    );
    assert!(
        arch.kuna_options
            .get::<crate::compareform::PresentLessequal>()
            .0
    );
    // (kuna) signedness ships `auto` -- a declaration is re-signed when every
    // signedness-sensitive reader of the value agrees.
    assert_eq!(
        arch.kuna_options.get::<crate::typeround::SignPolicy>(),
        crate::typeround::SignPolicy::Auto
    );
    // (kuna) DIV-13 default-on sweep: the 10 angr structuring/switch flags are now
    // default-on (per-test opt-out keeps the datatest/stage corpora at parity).
    assert!(
        arch.kuna_options
            .get::<crate::tailcalljump::TailCallJump>()
            .jumps
    );
    assert!(
        arch.kuna_options
            .get::<crate::tailcalljump::TailCallJump>()
            .tables
    );
    assert!(
        arch.kuna_options
            .get::<crate::jumptable::SwitchMultiPred>()
            .0
    );
    assert!(
        arch.kuna_options
            .get::<crate::region_structurer::RegionLoopRefine>()
            .0
    );
    assert_eq!(
        arch.kuna_options.get::<crate::gotoreduce::GotoReduceMode>(),
        crate::gotoreduce::GotoReduceMode::On
    );
    assert!(
        arch.kuna_options
            .get::<crate::ifelseflatten::FlattenIfelse>()
            .0
    );
    assert!(
        arch.kuna_options
            .get::<crate::crossjumpreverter::RevertCrossJumps>()
            .0
    );
    assert!(
        arch.kuna_options
            .get::<crate::dedupitetail::DedupIteTail>()
            .0
    );
    assert!(
        arch.kuna_options
            .get::<crate::callretfold::FoldCallReturns>()
            .0
    );
    // (kuna) foldcallretphi default-on (docs/features/foldcallretphi/flip.md).
    assert!(arch.kuna_options.get::<crate::blockaction::BranchFlip>().0);
    // (kuna) DIV-14 default-on sweep: 3 more flags default-on (2 of them REMOVE
    // CODE — stackguard/noreturn_propagate). Per-test opt-out
    // (stackguard on the 2 Partial-splitting datatests) keeps the corpora at
    // parity; noreturn_propagate is Listing-gated so it is inert on every gate.
    assert!(
        arch.kuna_options
            .get::<crate::stackguard::StripStackGuard>()
            .0
    ); // stackguard (REMOVES CODE)
    assert!(
        arch.kuna_options
            .get::<crate::analysisgates::NoreturnPropagate>()
            .0
    ); // noreturn_propagate (REMOVES CODE, Listing-gated)
    assert!(
        arch.kuna_options
            .get::<crate::jumptable::SwitchSharedCase>()
            .0
    ); // switchsharedcase
    assert!(
        arch.kuna_options
            .get::<crate::sparcstructret::SparcStructReturn>()
            .0
    ); // sparcstructret (SPARC-gated)
    assert!(
        arch.kuna_options
            .get::<crate::v850indbranch::V850IndirectBranch>()
            .0
    ); // v850indirectbranch (V850-gated)
    // default-off (upstream byte-identical).
    assert!(!arch.kuna_options.get::<crate::returnpair::ReturnSingle>().0);
    assert!(
        !arch
            .kuna_options
            .get::<crate::jumptable::SwitchModuloBound>()
            .0
    );
    assert!(!arch.kuna_options.get::<crate::flow::UnrolledGuard>().0);
    assert!(
        !arch
            .kuna_options
            .get::<crate::heritage::StackAliasDeadstore>()
            .0
    );
}

#[test]
fn reset_defaults_is_idempotent_after_mutation() {
    let mut arch = Architecture::new("t", bare_sleigh());
    arch.max_instructions = 7;
    arch.kuna_options
        .set(crate::typeround::SignPolicy::Upstream);
    arch.reset_defaults();
    assert_eq!(arch.max_instructions, 100000);
    // (kuna) `signedness` ships `auto`: the struct literal holds the inert
    // `Upstream` arm, so only reset_defaults puts the shipped value in place.
    assert_eq!(
        arch.kuna_options.get::<crate::typeround::SignPolicy>(),
        crate::typeround::SignPolicy::Auto
    );
}

#[test]
fn apply_mode_aggressive_flips_offdefault_flags_but_not_dwarf_lines() {
    let mut arch = Architecture::new("test:LE:32", bare_sleigh());
    // Off-by-default under the shipped defaults.
    assert!(!arch.kuna_options.get::<crate::analysisgates::Listing>().0);
    assert_eq!(
        arch.kuna_options.get::<crate::aif::AifMode>(),
        crate::aif::AifMode::Off
    );
    assert!(
        !arch
            .kuna_options
            .get::<crate::analysisgates::FastFuncdisc>()
            .0
    );
    assert!(
        !arch
            .kuna_options
            .get::<crate::jumptable::SwitchGuardBound>()
            .0
    );
    assert!(
        !arch
            .kuna_options
            .get::<crate::analysisgates::DwarfLines>()
            .0
    );

    arch.apply_mode("aggressive")
        .expect("aggressive mode applies");

    // Representative aggressive members turned on.
    assert!(arch.kuna_options.get::<crate::analysisgates::Listing>().0);
    assert_eq!(
        arch.kuna_options.get::<crate::aif::AifMode>(),
        crate::aif::AifMode::Strict
    );
    assert!(
        arch.kuna_options
            .get::<crate::analysisgates::FastFuncdisc>()
            .0
    );
    assert!(
        arch.kuna_options
            .get::<crate::jumptable::SwitchGuardBound>()
            .0
    );
    // Listed by the preset even though DIV-54 makes it a shipped default, so the
    // preset re-enables it after an earlier `--option returndup off`.
    assert!(
        arch.kuna_options
            .get::<crate::returndup::ReturnDup>()
            .shared
    );
    assert!(
        arch.kuna_options
            .get::<crate::sparcstructret::SparcStructReturn>()
            .0
    ); // SPARC-idiom-gated, safe to enable
    assert!(
        arch.kuna_options
            .get::<crate::v850indbranch::V850IndirectBranch>()
            .0
    ); // V850-gated, listed so the preset owns it
    // The exclusion: annotates every statement of a `-g` binary with a
    // `/* src.c:NNN */` comment — noise, not recovery.
    assert!(
        !arch
            .kuna_options
            .get::<crate::analysisgates::DwarfLines>()
            .0
    );
}

#[test]
fn apply_mode_reliable_is_a_no_op() {
    let mut arch = Architecture::new("test:LE:32", bare_sleigh());
    arch.apply_mode("reliable").expect("reliable mode applies");
    // reliable == shipped defaults: nothing off-default gets flipped, and nothing
    // on-default gets cleared.
    assert!(!arch.kuna_options.get::<crate::analysisgates::Listing>().0);
    assert_eq!(
        arch.kuna_options.get::<crate::aif::AifMode>(),
        crate::aif::AifMode::Off
    );
    assert!(
        arch.kuna_options
            .get::<crate::returndup::ReturnDup>()
            .shared
    ); // DIV-54 shipped default survives
}

#[test]
fn apply_mode_fast_replaces_exhaustive_with_bounded_discovery() {
    let mut arch = Architecture::new("test:LE:32", bare_sleigh());
    arch.kuna_options.set(crate::analysisgates::Listing(true));
    arch.kuna_options
        .set(crate::analysisgates::FuncstartPatterns(true));
    arch.kuna_options.set(crate::aif::AifMode::Strict);

    arch.apply_mode("fast").expect("fast mode applies");

    assert!(!arch.kuna_options.get::<crate::analysisgates::Listing>().0);
    assert!(
        !arch
            .kuna_options
            .get::<crate::analysisgates::FuncstartPatterns>()
            .0
    );
    assert_eq!(
        arch.kuna_options.get::<crate::aif::AifMode>(),
        crate::aif::AifMode::Off
    );
    assert!(
        arch.kuna_options
            .get::<crate::analysisgates::FastFuncdisc>()
            .0
    );
    assert!(
        arch.kuna_options
            .get::<crate::analysisgates::NoreturnPropagate>()
            .0
    );
    assert!(
        !arch
            .kuna_options
            .get::<crate::jumptable::SwitchGuardBound>()
            .0
    );
}

/// A render that panics hands the printer back with the run's settings and
/// none of the partial document: the indent increment and integer format
/// survive, and so do the modifiers in force before the render, even when the
/// panic hit between a modifier's save and restore with nothing pushed.
#[test]
fn with_print_hands_back_the_configured_printer_after_a_render_panic() {
    use crate::prettyprint::Emit;
    use crate::printlanguage::modifiers;
    let mut arch = Architecture::new("t", bare_sleigh());
    arch.print_mut().context.set_integer_format("hex").unwrap();
    arch.print_mut().emit.set_indent_increment(4);
    for pushed in [false, true] {
        let caught = std::panic::catch_unwind(std::panic::AssertUnwindSafe(|| {
            arch.with_print(|printer, _| {
                let save = printer.context.mods();
                printer.context.set_mods(save | modifiers::PRINT_LOAD_VALUE);
                if pushed {
                    printer.context.push_mod();
                    printer.context.set_mod(modifiers::NO_BRANCH);
                }
                printer.emit.start_indent();
                panic!("render fault");
            })
        }));
        assert!(caught.is_err(), "the panic resumes");
        let print = arch.print();
        assert_eq!(
            print.context.mods(),
            modifiers::FORCE_HEX,
            "pushed {pushed}"
        );
        assert_eq!(print.emit.get_indent_increment(), 4);
        assert_eq!(print.emit.state().indentlevel, 0);
    }
}

#[test]
fn owned_subsystems_are_constructed_and_accessible() {
    let mut arch = Architecture::new("t", bare_sleigh());
    // The type factory + printer exist immediately (empty, as the C++ ctor
    // leaves them null until init; the Rust port default-constructs them).
    assert_eq!(arch.print().get_name(), "c-language");
    // The proto registry starts empty (no cspec parsed).
    assert!(arch.default_fp().is_none());
    assert!(!arch.has_model("unknown"));
    // build_default_proto seeds an `unknown` default model.
    arch.build_default_proto();
    assert!(arch.has_model("unknown"));
    assert!(arch.default_fp().is_some());
    assert_eq!(arch.get_model("unknown").unwrap().get_name(), "unknown");
    // The full type-factory finish (`finish_typegrp` -> `get_default_size`)
    // needs a decoded `.sla`'s default code space; the e2e gate exercises that
    // real path.  Here (a bare Sleigh, no spaces) the factory is the empty
    // container `build_typegrp` produces.
    arch.build_typegrp();
}

#[test]
fn arch_option_context_drives_the_printer() {
    let mut arch = Architecture::new("t", bare_sleigh());
    assert!(arch.print_is_c_language());
    // (kuna) DIV-34: NULL printing is default-on; the option still drives it.
    assert!(arch.print().options.null);
    arch.set_null_printing(false);
    assert!(!arch.print().options.null);
    arch.set_null_printing(true);
    assert!(arch.print().options.null);
    arch.set_convention_printing(false);
    assert!(!arch.print().options.convention);
    arch.set_brace_format(BraceCategory::Function, BraceStyle::SameLine);
    assert_eq!(arch.print().options.brace_func, BraceStyle::SameLine);
    arch.set_namespace_strategy(NamespaceStrategy::None);
    arch.set_integer_format("hex");
    // Switching the print language flips print_is_c_language.
    arch.set_print_language("not-c");
    assert!(!arch.print_is_c_language());
}
