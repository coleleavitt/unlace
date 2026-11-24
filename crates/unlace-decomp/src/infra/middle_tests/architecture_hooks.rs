//! Tests moved out of `architecture` because they reach pass hooks a higher crate
//! provides. They live in the driver, which links every hook.

#![allow(unused_imports, dead_code)]

/// The imports of `architecture` itself, as a glob so the tests' own imports win.
mod module_scope {
    pub(super) use crate::action::ActionDatabase;
    pub(super) use crate::context::{ArchContext, ArchHandle};
    pub(super) use crate::database::Database;
    pub(super) use crate::dtype::{TypeFactory, TypeFactoryImpl, type_metatype};
    pub(super) use crate::engine_translate::EngineTranslate;
    pub(super) use crate::flow_flags;
    pub(super) use crate::fspec::ProtoModel;
    pub(super) use crate::funcdata::Funcdata;
    pub(super) use crate::inject_sleigh::PcodeInjectLibrarySleigh;
    pub(super) use crate::options::{
        ArchOptionContext, BraceCategory, NamespaceStrategy, OptionDatabase, split_datatype,
    };
    pub(super) use crate::userop::UserOpManage;
    pub(super) use std::rc::Rc;
    pub(super) use std::sync::Arc;
    pub(super) use unlace_base::address::Address;
    pub(super) use unlace_base::error::{UnlaceError, UnlaceResult};
    pub(super) use unlace_base::space::{AddrSpace, AddrSpaceManager};
    pub(super) use unlace_base::types::{int4, uint4, uintb};
    pub(super) use unlace_sleigh::sleigh::Sleigh;
    pub(super) use unlace_sleigh::translate::UniqueLayout;
}
use crate::architecture::*;
use crate::flow_flags;
use crate::options::split_datatype;
use module_scope::*;
use std::rc::Rc;
use unlace_base::address::Address;
use unlace_base::error::{UnlaceError, UnlaceResult};
use unlace_sleigh::globalcontext::ContextInternal;
use unlace_sleigh::loadimage::LoadImage;
use unlace_sleigh::sleigh::Sleigh;
use unlace_sleigh::translate::{Translate, UniqueLayout};

// Porter in-module tests for `architecture.rs`.
//
// Two strands:
//   1. **Defaults + flags + naming**: a minimal `Architecture` over a fresh
//      (uninitialized) Sleigh — exercises the verbatim `resetDefaultsInternal`
//      transcription, the unlace anchor flags, `nameFunction`, and the warning
//      sink without needing a built `.sla`.
//   2. **Real-`.sla` bootstrap**: builds an `Architecture` over a Sleigh with a
//      decoded `.sla` (skips gracefully when specs are unbuilt), then lifts a
//      `Funcdata` through it (the W3 boot seam).

use std::path::PathBuf;

struct DummyImg;

impl LoadImage for DummyImg {
    fn get_file_name(&self) -> &str {
        "dummy"
    }
    fn load_fill(&mut self, _ptr: &mut [u8], _addr: &Address) -> UnlaceResult<()> {
        Err(UnlaceError::data_unavail("dummy"))
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

fn repo_root() -> PathBuf {
    PathBuf::from(env!("CARGO_MANIFEST_DIR"))
        .join("../..")
        .canonicalize()
        .unwrap()
}

// --- Strand 2: real-`.sla` bootstrap + Funcdata lift -----------------------

fn build_arch_from_sla(sla_rel: &str) -> Option<Architecture> {
    let root = repo_root();
    let sla_path = root.join("specs").join(sla_rel);
    if !sla_path.with_extension("slaspec").is_file() {
        eprintln!(
            "SKIP: {} unavailable (no .slaspec under specs/)",
            sla_path.display()
        );
        return None;
    }
    let sla = unlace_slacomp::slacache::read_sla(&sla_path).expect("read .sla");
    let mut sleigh = Sleigh::new(Box::new(DummyImg), Box::new(ContextInternal::new()));
    sleigh
        .initialize_from_sla(&sla)
        .expect("initialize from sla");
    Some(Architecture::new("ARM:LE:32:v7", sleigh))
}

// ===========================================================================
// w9x-arch-engine-glue: owned-subsystem accessors + ArchOptionContext.
// ===========================================================================

use crate::options::{ArchOptionContext, BraceCategory, BraceStyle, NamespaceStrategy};

#[test]
fn decode_recipe_requires_both_bootstrap_inputs() {
    let mut arch = Architecture::new("test:LE:32", bare_sleigh());
    assert!(
        arch.decode_recipe().is_none(),
        "a bare engine has no recipe"
    );

    arch.set_decode_sla(std::sync::Arc::from(&b"sla"[..]));
    assert!(
        arch.decode_recipe().is_none(),
        "the .sla alone omits the language's active space truncations"
    );

    arch.set_decode_truncations(Vec::new());
    let recipe = arch
        .decode_recipe()
        .expect("both bootstrap inputs complete the recipe");
    assert_eq!(&*recipe.sla, b"sla");
    assert!(recipe.truncations.is_empty());
}

// --- Strand 1: defaults + flags + naming -----------------------------------

#[test]
fn reset_defaults_internal_matches_cpp() {
    let arch = Architecture::new("test:LE:32", bare_sleigh());
    // Verbatim from architecture.cc:1420 (unlace DIV-2/DIV-3 defaults).
    assert_eq!(arch.trim_recurse_max, 5);
    assert_eq!(arch.max_implied_ref, 2);
    assert_eq!(arch.max_term_duplication, 2);
    assert_eq!(arch.max_basetype_size, 10);
    assert_eq!(arch.flowoptions, flow_flags::error_toomanyinstructions);
    assert_eq!(arch.max_instructions, 100000);
    assert_eq!(arch.max_jumptable_size, 1024);
    assert_eq!(arch.alias_block_level, 2);
    assert_eq!(
        arch.split_datatype_config,
        split_datatype::OPTION_STRUCT
            | split_datatype::OPTION_ARRAY
            | split_datatype::OPTION_POINTER
    );
    // ctor one-offs.
    assert_eq!(arch.min_funcsymbol_size, 1);
    assert!(!arch.aggressive_ext_trim);
    assert_eq!(arch.funcptr_align, 0);
    // plain bools.
    assert!(arch.infer_pointers);
    assert!(!arch.readonlypropagate);
    assert!(arch.analyze_for_loops);
    assert!(!arch.nan_ignore_all);
    assert!(arch.nan_ignore_compare);
    assert!(!arch.loadersymbols_parsed);
}

#[test]
fn apply_mode_unknown_errors() {
    let mut arch = Architecture::new("test:LE:32", bare_sleigh());
    assert!(arch.apply_mode("turbo").is_err());
}

#[test]
fn apply_mode_auto_requires_frontend_binary_metadata() {
    let mut arch = Architecture::new("test:LE:32", bare_sleigh());
    let err = arch
        .apply_mode("auto")
        .expect_err("Architecture cannot resolve auto");
    assert!(err.explain().contains("requires input binary size"));
}

#[test]
fn name_function_angr_vs_upstream() {
    let mut arch = Architecture::new("t", bare_sleigh());
    // Need a space to make an address; use a constant-space address (any space
    // suffices for the textual default name).
    let ram = unlace_base::space::AddrSpace::new(
        unlace_base::space::spacetype::IPTR_PROCESSOR,
        "ram",
        false,
        4,
        1,
        7,
        unlace_base::space::addrspace_flags::hasphysical,
        1,
        1,
    );
    let addr = Address::new(Rc::new(ram), 0x401000);

    // angr-style on by default: sub_<addr> (unlace_function_name).
    assert!(
        arch.unlace_options
            .get::<crate::coreoptions::NameStyleAngr>()
            .0
    );
    let n_angr = arch.name_function(&addr);
    assert!(n_angr.starts_with("sub_"), "angr name was {n_angr}");

    // upstream style: func_<raw-addr>, where raw-addr is C++ Address::printRaw
    // (AddrSpace::printRaw): zero-padded to the address width (4 bytes -> 8 hex
    // digits), no space-name prefix, word-size division (wordsize 1 here).
    arch.unlace_options
        .set(crate::coreoptions::NameStyleAngr(false));
    let n_up = arch.name_function(&addr);
    assert_eq!(n_up, "func_0x00401000", "upstream name was {n_up}");
}

#[test]
fn inject_tempbase_comes_from_unique_start() {
    // The injection library's tempbase is translate->getUniqueStart(INJECT)
    // (PcodeInjectLibrarySleigh ctor).  With a fresh engine the unique base is
    // 0, so getUniqueStart(INJECT) == 0x300 (the INJECT offset over base 0).
    let sleigh = bare_sleigh();
    let expected = sleigh.get_unique_start(UniqueLayout::INJECT);
    let arch = Architecture::new("t", sleigh);
    assert_eq!(arch.pcodeinjectlib.base.tempbase, expected);
}

#[test]
fn real_sla_bootstraps_subsystems_and_global_scope() {
    let Some(arch) = build_arch_from_sla("Ghidra/Processors/ARM/data/languages/ARM7_le.sla") else {
        return;
    };
    // The manager has real spaces from the .sla (ram, register, unique, ...).
    assert!(
        arch.manage().num_spaces() > 2,
        "decoded .sla yields multiple spaces"
    );
    assert!(arch.manage().get_constant_space().is_some());
    assert!(arch.manage().get_unique_space().is_some());
    // The symbol table has a global scope attached (buildDatabase).
    assert!(arch.symboltab.get_global_scope().is_some());
}

#[test]
fn real_sla_creates_funcdata_at_entry() {
    let Some(mut arch) = build_arch_from_sla("Ghidra/Processors/ARM/data/languages/ARM7_le.sla")
    else {
        return;
    };
    // C++ `restoreFromSpec` inserts the fspec/iop/join spaces into the single
    // engine manager (LOSS-132); `init_post_engine` is that step in the Rust
    // port.  The funcdata's `glb` then shares that one manager, so it carries
    // const/unique/iop/fspec exactly as the lift+analyze path sees them.
    arch.init_post_engine().expect("init_post_engine");
    // Pick the default code space for the function entry.
    let code = Rc::clone(
        arch.manage()
            .get_default_code_space()
            .expect("default code space"),
    );
    let entry = Address::new(code, 0x8000);
    let fd = arch
        .new_funcdata("main", entry.clone(), 0x40)
        .expect("create funcdata");
    assert_eq!(fd.get_name(), "main");
    assert_eq!(fd.get_address(), &entry);
    assert_eq!(fd.get_size(), 0x40);
    // The funcdata's IR-boundary glb carries const/unique/iop/fspec spaces.
    assert!(fd.get_arch().manage().get_constant_space().is_some());
    assert!(fd.get_arch().manage().get_iop_space().is_some());
    assert!(fd.get_arch().manage().get_fspec_space().is_some());
    // uniq_start was the analysis unique-start (an absolute high offset).
    let analysis_start = arch.translate().get_unique_start(UniqueLayout::ANALYSIS);
    assert!(analysis_start >= 0x1000_0000);
}

#[test]
fn build_instructions_populates_the_inst_table() {
    use crate::op::pcodeop_flags;
    use unlace_num::opcodes::OpCode;
    let mut arch = Architecture::new("t", bare_sleigh());
    arch.build_instructions();
    // A BRANCH resolves to a TypeOp carrying the branch + coderef flags.
    let to = arch.resolve_typeop(OpCode::CPUI_BRANCH);
    assert_eq!(to.get_opcode(), OpCode::CPUI_BRANCH);
    assert!(to.get_flags() & pcodeop_flags::branch != 0);
    assert!(to.get_flags() & pcodeop_flags::coderef != 0);
}

#[test]
fn arch_option_context_mutates_config_fields() {
    let mut arch = Architecture::new("t", bare_sleigh());
    // Plain config fields round-trip through the trait.
    arch.set_readonly_propagate(true);
    assert!(arch.readonlypropagate);
    arch.set_infer_pointers(false);
    assert!(!arch.infer_pointers);
    arch.set_max_jumptable_size(64);
    assert_eq!(arch.max_jumptable_size, 64);
    arch.set_alias_block_level(1);
    assert_eq!(ArchOptionContext::alias_block_level(&arch), 1);
    arch.set_nan_ignore_all(true);
    assert!(arch.nan_ignore_all());
}

#[test]
fn arch_option_context_proto_model_registry() {
    let mut arch = Architecture::new("t", bare_sleigh());
    arch.build_default_proto();
    // set_default_extra_pop mutates the shared default model.
    arch.set_default_extra_pop(8);
    assert_eq!(arch.default_fp().unwrap().get_extra_pop(), 8);
    // set_default_model resolves a registered model and errors on unknown.
    assert!(arch.set_default_model("unknown").is_ok());
    let err = arch.set_default_model("no-such-model").unwrap_err();
    assert!(format!("{err}").contains("Unknown prototype model"));
    // Unknown function (no symbol table function) errors faithfully.
    let err = arch.set_function_extra_pop("nofunc", 4).unwrap_err();
    assert!(format!("{err}").contains("Unknown function name"));
}

/// (unlace) `jumptablemax`: ships at upstream's 1024, takes a positive decimal
/// count, and refuses anything else rather than reading a prefix of it.
#[test]
fn jumptablemax_defaults_to_1024_and_parses_strictly() {
    let mut arch = Architecture::new("t", bare_sleigh());
    arch.reset_defaults_internal();
    assert_eq!(arch.max_jumptable_size, 1024);
    arch.set_unlace_option("jumptablemax", "100000").unwrap();
    assert_eq!(arch.max_jumptable_size, 100000);
    for bad in [
        "",
        "0",
        "wide",
        "12abc",
        "1.5",
        "-5",
        "+5",
        "0x10",
        "4294967296",
    ] {
        assert!(
            arch.set_unlace_option("jumptablemax", bad).is_err(),
            "{bad:?} was accepted"
        );
    }
    assert_eq!(arch.max_jumptable_size, 100000);
}
