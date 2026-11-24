//! Port of `decompiler/cpp/kuna_console.{cc,hh}` (W9) — the unlace console
//! capability and the stage-registry console commands.
//!
//! This file is **not** part of upstream Ghidra. In C++ it registers all unlace
//! console commands through the upstream `IfaceCapability` discovery mechanism
//! (a static `IfaceUnlaceCapability` singleton collected by
//! `CapabilityPoint::initializeAll`). The unlace Rust console has no static
//! capability registry; instead [`register_unlace_commands`] is called from the
//! console binaries' command-registration step (mirroring how
//! `register_decomp_commands` is invoked), which is the faithful equivalent of
//! `IfaceUnlaceCapability::registerCommands`.
//!
//! # The commands and what is expressible today
//!
//! The unlace stage model is pure static data ([`unlace_decomp::phases`], the
//! W4 registry), so the **registry-only** commands port in full, byte-for-byte:
//!
//! - [`IfcUnlacePhaseList`] — `phase list`: the stages, Band B membership, and the
//!   sub-stage decision catalog (with `LATENT` markers).
//! - [`IfcUnlacePhaseMap`] — `phase map [<name>]`: resolve an action/rule group,
//!   console surface, or sub-stage to its stage (or dump the full tables).
//! - [`IfcUnlacePhaseCatalog`] — `phase catalog [<option>]`: emit the
//!   LLM-settable assertion catalog as JSON, calling the **W4 byte-compatible
//!   emitter** ([`unlace_decomp::phases::emit_catalog_json`]). With a program
//!   loaded the live `current` field is joined per option from the
//!   [`Architecture`] flags ([`unlace_live_value`], the port of
//!   `kuna_console.cc unlaceLiveValue`). `tests/stages/unlace-catalog.toml`
//!   string-matches this output.
//! - [`IfcUnlaceFunctions`] — `functions`: emit the canonical executable
//!   function inventory used by whole-binary decompilation.
//! - [`IfcUnlaceAssert`] — `kassert ...`: validate a typed assertion against the
//!   registry and route it to a store. The **validation + routing decision**
//!   core (parse-error precedence, `kassert list`, the LATENT/unroutable
//!   branches) ports in full via [`unlace_decomp::assert`]; the store
//!   mutation for a *routable* assertion needs the unported engine integration
//!   layer (Override / FuncProto locks / retype / `OptionDatabase::set`) and is
//!   routed through [`engine_unavailable`].
//!
//! The remaining unlace commands read live decompiler state through accessors the
//! merged `rust-port` tree does not yet expose at the `Architecture` level (the
//! same integration gap `ifacedecomp.rs` documents): the print language
//! (`Architecture::print`, for `phase status`'s `arraynotation` line), the
//! restart side-table (`Architecture`-owned `RestartLog`, `STUB(W5)`), the
//! reduced-pipeline decompile drive (`allacts.getCurrent()->reset/perform`,
//! `clearAnalysis`), and `FlowBlock::nextFlowAfter` (for `BlockGoto::gotoPrints`
//! in the `quality` metric). Each of these commands ports faithfully every part
//! that *is* expressible — its `dcp->conf`/`dcp->fd` null guards with exact text
//! — then routes the engine read through [`engine_unavailable`]:
//!
//! - [`IfcUnlacePhaseStatus`] — `phase status`.
//! - [`IfcUnlaceRestarts`] — `restarts`.
//! - [`IfcUnlacePipeline`] — `pipeline [list|<variant>]` (the `list` sub-form is
//!   fully expressible and ported; running a variant needs the drive).
//! - [`IfcUnlaceQuality`] — `quality`.
//!
//! The S7 region commands (`region tree`/`blocks`/`walk`, C++ `IfcUnlaceRegion*`
//! from `kuna_regionid.cc`) register through this capability in C++; their
//! `buildFromBlockGraph` block-graph adapter is explicitly `STUB(W7)` in the
//! ported `unlace_regionid` module, so they are registered with a placeholder that
//! routes through [`engine_unavailable`] (see [`register_unlace_commands`]).
//!
//! Where C++ writes the *bulk* stream (`*status->fileoptr`) the port writes
//! [`IfaceStatus::file_out`] (honoring an open `openfile` redirect, which the
//! datatests use to capture the JSON); where C++ writes `*status->optr` it
//! writes [`IfaceStatus::out`]. The exact text in both streams is what the
//! Python harness and the datatest `<stringmatch>` assertions parse.

use crate::ifacedecomp::{DECOMPILE_MODULE, IfaceDecompData};
use crate::interface::{CommandStream, IfaceCommandAction, IfaceError, IfaceResult, IfaceStatus};
use std::borrow::Cow;
use std::cell::RefCell;
use unlace_decomp::architecture::Architecture;
use unlace_decomp::assert::{AssertLog, Dispatch, UnlaceAssertion, validate_assertion};
use unlace_decomp::phases::{
    UnlacePhase, UnlaceStrength, emit_catalog_json, emit_catalog_json_one, lookup_group,
    lookup_settable, lookup_subphase, lookup_surface, unlace_group_by_index, unlace_num_groups,
    unlace_num_subphases, unlace_num_surfaces, unlace_subphase_by_index, unlace_surface_by_index,
};
use unlace_decomp::printc::ArchPrintExt;
use unlace_decomp::regionid::UnlaceRegionIdentifier;

/// The named pipeline variants built by `ActionDatabase::buildDefaultGroups`
/// (C++ `PIPELINE_VARIANTS`).
const PIPELINE_VARIANTS: [&str; 6] = [
    "decompile",
    "jumptable",
    "normalize",
    "paramid",
    "register",
    "firstpass",
];

/// The stages in registry order P0,S1..S9 — the `for(i=0;i<=9;++i)(UnlacePhase)i`
/// loop of `IfcUnlacePhaseList::execute`.
const STAGES_IN_ORDER: [UnlacePhase; 10] = [
    UnlacePhase::P0,
    UnlacePhase::P1,
    UnlacePhase::P2,
    UnlacePhase::P3,
    UnlacePhase::P4,
    UnlacePhase::P5,
    UnlacePhase::P6,
    UnlacePhase::P7,
    UnlacePhase::P8,
    UnlacePhase::P9,
];

// ---------------------------------------------------------------------------
// dcp access — every unlace command shares the "decompile" module data, exactly
// like the upstream IfaceDecompCommand family (kuna_console.cc reads dcp->...).
// ---------------------------------------------------------------------------

/// Reach the shared [`IfaceDecompData`] from a unlace command.
///
/// The unlace commands share the `"decompile"` module's [`IfaceDecompData`] (in
/// C++ they are `IfaceDecompCommand` subclasses, so `getModule()` is
/// `"decompile"` and `dcp` is the same object the decompiler commands read).
/// A missing entry is an internal wiring bug (never user-reachable) surfaced as
/// a base [`IfaceError`], matching [`crate::ifacedecomp`]'s `dcp_mut`.
fn dcp_mut(status: &mut IfaceStatus) -> IfaceResult<&mut IfaceDecompData> {
    match status.get_data_mut(DECOMPILE_MODULE) {
        Some(d) => match d.as_any_mut().downcast_mut::<IfaceDecompData>() {
            Some(dcp) => Ok(dcp),
            None => Err(IfaceError::base("decompile module data has wrong type")),
        },
        None => Err(IfaceError::base("decompile module data not registered")),
    }
}

/// Reach the shared [`IfaceDecompData`] immutably (the read path of the
/// commands that only inspect `dcp->conf`/`dcp->fd`).
fn dcp_ref(status: &IfaceStatus) -> Option<&IfaceDecompData> {
    status
        .get_data(DECOMPILE_MODULE)
        .and_then(|d| d.as_any().downcast_ref::<IfaceDecompData>())
}

/// The error returned where a unlace command's engine read depends on the
/// unported decompiler integration layer (mirrors `ifacedecomp.rs`'s private
/// `engine_unavailable`, kept local because that one is module-private).
///
/// `entry` names the exact missing C++ entry point so the gap is self-describing
/// in the console; it is an `IfaceExecutionError` (the kind a started-but-failed
/// command throws), which the console driver renders under `"Execution error: "`.
fn engine_unavailable(entry: &str) -> IfaceError {
    IfaceError::execution(format!(
        "engine integration not yet ported: {entry} (Architecture print/loader/context + the \
         decompile drive and STUB(W5/W7/W8) side-tables are a later W-item)"
    ))
}

/// Read the live value of a unlace settable from the loaded [`Architecture`], or
/// `None` if it cannot be determined — port of `kuna_console.cc unlaceLiveValue`.
///
/// The C++ `arraynotation` reader dereferences `conf->print` (the owned
/// `PrintC`); that accessor is `STUB(W8)` in the merged tree (no `print` field
/// on [`Architecture`]), so `arraynotation` returns `None` here — exactly the
/// `unlaceLiveValue` `""` path that suppresses the `current` field. Every other
/// option reads a flag/string that [`Architecture`] does expose, so the
/// `current` field is joined for them, matching C++.
pub fn unlace_live_value(conf: &Architecture, option: &str) -> Option<Cow<'static, str>> {
    // C++ returns "" for an unknown option (suppressing the current field).
    let on_off = |b: bool| if b { "on" } else { "off" };
    // (unlace `dyldimage`) The valued live reader whose value is not a fixed
    // token owns its string; every other arm borrows.
    if option == "dyldimage" {
        let _load = conf.load_scope();
        return Some(
            unlace_decomp::dyldcache::selected_image().map_or(Cow::Borrowed("none"), Cow::Owned),
        );
    }
    if option == "typelib" {
        return Some(Cow::Owned(
            conf.unlace_options
                .get::<unlace_decomp::typelib::TypeLib>()
                .as_str(),
        ));
    }
    if option == "comcfg" {
        return Some(Cow::Owned(
            conf.unlace_options
                .get::<unlace_decomp::comcfg::ComCfg>()
                .as_str(),
        ));
    }
    if option == "kernelcache" {
        // The program's load options, or for a program loaded from the
        // environment the env bridge, which the `option` command also sets.
        let _load = conf.load_scope();
        let choice = unlace_decomp::kernelcache::KernelcacheChoice::in_force();
        return Some(Cow::Owned(choice.as_str().to_string()));
    }
    if option == "kernelcache-boot" {
        let _load = conf.load_scope();
        let choice = unlace_decomp::kernelcacheboot::KernelcacheBoot::in_force();
        return Some(Cow::Owned(choice.as_str().into_owned()));
    }
    Some(Cow::Borrowed(match option {
        "bytearrayc" => on_off(conf.print().options.bytearray_c),
        "partialaccess" => on_off(conf.print().options.partial_access),
        "infloopstyle" => {
            if conf.print().options.inf_loop_top {
                "while"
            } else {
                "do"
            }
        }
        "loopcontinue" => on_off(
            conf.unlace_options
                .get::<unlace_decomp::loopcontinue::LoopContinue>()
                .0,
        ),
        "postinc" => on_off(
            conf.unlace_options
                .get::<unlace_decomp::coreoptions::PostIncrement>()
                .0,
        ),
        "compareform" => {
            if conf
                .unlace_options
                .get::<unlace_decomp::compareform::PresentLessequal>()
                .0
            {
                "original"
            } else {
                "canonical"
            }
        }
        // C++ `arraynotation` reads `conf->print` (PrintC::getArrayNotation), now
        // exposed via `Architecture::print()` (the owned `PrintC`).
        "arraynotation" => on_off(conf.print().options.array_notation()),
        "armfloatargs" => on_off(
            conf.unlace_options
                .get::<unlace_decomp::armfloatargs::ArmFloatArgs>()
                .0,
        ),
        "callarrayextent" => on_off(
            conf.unlace_options
                .get::<unlace_decomp::callarrayextent::CallArrayExtent>()
                .0,
        ),
        "stackstruct" => on_off(
            conf.unlace_options
                .get::<unlace_decomp::stackstruct::StackStruct>()
                .0,
        ),
        "globalarrayanchor" => on_off(
            conf.unlace_options
                .get::<unlace_decomp::globalarrayanchor::GlobalArrayAnchor>()
                .0,
        ),
        "opaquepredicate"
            if conf
                .unlace_options
                .get::<unlace_decomp::coreoptions::OpaquePredicate>()
                .globals =>
        {
            "globals"
        }

        "bitidioms" => on_off(
            conf.unlace_options
                .get::<unlace_decomp::bitidioms::BitIdioms>()
                .0,
        ),
        "helperroles" => on_off(
            conf.unlace_options
                .get::<unlace_decomp::helperrole::HelperRoles>()
                .0,
        ),
        "dynalloca" => on_off(
            conf.unlace_options
                .get::<unlace_decomp::dynalloca::DynAlloca>()
                .0,
        ),
        "vaarg" => on_off(conf.unlace_options.get::<unlace_decomp::vaarg::VaArg>().0),
        "indexrescale" => on_off(
            conf.unlace_options
                .get::<unlace_decomp::indexrescale::IndexRescale>()
                .0,
        ),
        "looprotate" => on_off(
            conf.unlace_options
                .get::<unlace_decomp::looprotate::LoopRotate>()
                .0,
        ),
        "vastart" => on_off(
            conf.unlace_options
                .get::<unlace_decomp::vastart::VaStartRewrite>()
                .0,
        ),
        "typevote" => on_off(
            conf.unlace_options
                .get::<unlace_decomp::typevote::TypeVote>()
                .0,
        ),
        "switchguardmerge" => on_off(
            conf.unlace_options
                .get::<unlace_decomp::switchguardmerge::SwitchGuardMerge>()
                .0,
        ),
        "opaquepredicate" => on_off(
            conf.unlace_options
                .get::<unlace_decomp::coreoptions::OpaquePredicate>()
                .on,
        ),
        "memsetrecover" => on_off(
            conf.unlace_options
                .get::<unlace_decomp::memsetsequence::MemsetRecover>()
                .0,
        ),
        "rodatastring" => on_off(
            conf.unlace_options
                .get::<unlace_decomp::rodatastring::RodataString>()
                .0,
        ),
        "returnpair" => {
            if conf
                .unlace_options
                .get::<unlace_decomp::returnpair::ReturnSingle>()
                .0
            {
                "single"
            } else {
                "pair"
            }
        }
        "nulterminator" => on_off(
            conf.unlace_options
                .get::<unlace_decomp::nulterminator::NulTerminator>()
                .0,
        ),
        "retsplitglobal" => on_off(
            conf.unlace_options
                .get::<unlace_decomp::coreoptions::RetSplitGlobal>()
                .0,
        ),
        // (unlace `protoorder`) Three-valued, so it reports its own token.
        "protoorder" => conf
            .unlace_options
            .get::<unlace_decomp::protoorder::ProtoOrderMode>()
            .as_str(),
        // (unlace `calleevote`) Three-valued, so it reports its own token.
        "calleevote" => conf
            .unlace_options
            .get::<unlace_decomp::calleevote::CalleeVoteMode>()
            .as_str(),
        // (unlace `callbacktype`) A mode over an enum field like its two
        // neighbours, so it reports its own token rather than a `live_field`.
        "callbacktype" => conf
            .unlace_options
            .get::<unlace_decomp::callbacktype::CallbackTypeMode>()
            .as_str(),
        // (unlace `calleereginputs`) Three-valued (off|on|custom), reported from
        // its two engine flags.
        "calleereginputs" => {
            if conf
                .unlace_options
                .get::<unlace_decomp::calleereginputs::CalleeRegInputs>()
                .custom
            {
                "custom"
            } else if conf
                .unlace_options
                .get::<unlace_decomp::calleereginputs::CalleeRegInputs>()
                .on
            {
                "on"
            } else {
                "off"
            }
        }
        // (unlace `castwiden`) Three-valued, so it reports its own token.
        "castwiden" => conf
            .unlace_options
            .get::<unlace_decomp::castwiden::CastWidenMode>()
            .as_str(),
        // (unlace `narrowext`) Three-valued, so it reports its own token.
        "narrowext" => conf
            .unlace_options
            .get::<unlace_decomp::narrowext::NarrowExtMode>()
            .as_str(),
        // (unlace `syscallregs`) Three-valued, so it reports its own token.
        "syscallregs" => conf
            .unlace_options
            .get::<unlace_decomp::syscallregs::SyscallRegsMode>()
            .as_str(),
        // (unlace `linuxsyscall`) Three-valued, so it reports its own token.
        "linuxsyscall" => conf
            .unlace_options
            .get::<unlace_decomp::linuxsyscall::LinuxSyscallMode>()
            .as_str(),
        // (unlace `callmechanisms`) Three-valued, so it reports its own token.
        "callmechanisms" => conf
            .unlace_options
            .get::<unlace_decomp::callmechanisms::CallMechanismMode>()
            .as_str(),
        // (unlace `rustabi`) Three-valued, so it reports its own token.
        "rustabi" => conf
            .unlace_options
            .get::<unlace_decomp::rustabi::RustAbiMode>()
            .as_str(),
        // (unlace `fatstr`) Three-valued, so it reports its own token.
        "fatstr" => conf
            .unlace_options
            .get::<unlace_decomp::fatstr::FatStrMode>()
            .as_str(),
        "swiftstr" => conf
            .unlace_options
            .get::<unlace_decomp::swiftstr::SwiftStr>()
            .0
            .as_str(),
        // (unlace `gobool`) Three-valued, so it reports its own token.
        "gobool" => conf
            .unlace_options
            .get::<unlace_decomp::gobool::GoBoolMode>()
            .as_str(),
        // (unlace `fpuemu`) Three-valued, so it reports its own token.
        "fpuemu" => conf
            .unlace_options
            .get::<unlace_decomp::fpuemu::FpuEmuMode>()
            .as_str(),
        "mzdgroup" => on_off(
            conf.unlace_options
                .get::<unlace_decomp::coreoptions::MzDgroupOn>()
                .0,
        ),
        "rustprobestack" => conf
            .unlace_options
            .get::<unlace_decomp::rustprobestack::RustProbestackMode>()
            .as_str(),
        "rustfmt" => conf
            .unlace_options
            .get::<unlace_decomp::rustfmt::RustFmtMode>()
            .as_str(),
        // (unlace `gomorestack`) Three-valued, so it reports its own token.
        "gomorestack" => conf
            .unlace_options
            .get::<unlace_decomp::gomorestack::GoMorestackMode>()
            .as_str(),
        // (unlace `gowritebarrier`) Three-valued, so it reports its own token.
        "gowritebarrier" => conf
            .unlace_options
            .get::<unlace_decomp::gowritebarrier::GoWriteBarrierMode>()
            .as_str(),
        "gonewtype" => on_off(
            conf.unlace_options
                .get::<unlace_decomp::gonewtype::GoNewType>()
                .0,
        ),
        // (unlace `sourcelang`) Reports the OPTION state, not the detected fact:
        // `auto` until a run forces a language.
        "sourcelang" => match conf
            .unlace_options
            .get::<unlace_decomp::sourcelang::SourceLangForced>()
            .0
        {
            Some(lang) => lang.as_str(),
            None => "auto",
        },
        // (unlace `bejoin`) Three-valued, so it reports its own token.
        "bejoin" => conf
            .unlace_options
            .get::<unlace_decomp::bejoin::BeJoinMode>()
            .as_str(),
        "bejoinpass" => conf
            .unlace_options
            .get::<unlace_decomp::bejoinpass::BeJoinPassMode>()
            .as_str(),
        "octeoneffects" => conf
            .unlace_options
            .get::<unlace_decomp::octeoneffects::OcteonEffectsMode>()
            .as_str(),
        "sparcstructret" => on_off(
            conf.unlace_options
                .get::<unlace_decomp::sparcstructret::SparcStructReturn>()
                .0,
        ),
        "arraystride" => on_off(
            conf.unlace_options
                .get::<unlace_decomp::arraystride::RecoverArrayStride>()
                .0,
        ),
        "stackalias" => on_off(
            conf.unlace_options
                .get::<unlace_decomp::heritage::StackAliasDeadstore>()
                .0,
        ),
        "stackviews" => on_off(
            conf.unlace_options
                .get::<unlace_decomp::coreoptions::StackViews>()
                .0,
        ),
        "v850indirectbranch" => on_off(
            conf.unlace_options
                .get::<unlace_decomp::v850indbranch::V850IndirectBranch>()
                .0,
        ),
        "switchmodbound" => on_off(
            conf.unlace_options
                .get::<unlace_decomp::jumptable::SwitchModuloBound>()
                .0,
        ),
        "constselectjump" => conf
            .unlace_options
            .get::<unlace_decomp::constselectjump::ConstSelectMode>()
            .as_str(),
        "switchsharedcase" => on_off(
            conf.unlace_options
                .get::<unlace_decomp::jumptable::SwitchSharedCase>()
                .0,
        ),
        "realtypes" => on_off(
            conf.unlace_options
                .get::<unlace_decomp::printc::Realtypes>()
                .0,
        ),
        // (unlace `calloverlap`) Report the selected overlap policy.
        "calloverlap" => match conf
            .unlace_options
            .get::<unlace_decomp::calloverlap::CallOverlap>()
            .0
        {
            unlace_decomp::calloverlap::LEVEL_OFF => "off",
            unlace_decomp::calloverlap::LEVEL_AUTO => "auto",
            unlace_decomp::calloverlap::LEVEL_IN => "in",
            _ => "full",
        },
        // (unlace) Analysis-pass gates: the live `current` field reflects each pass's
        // per-run enable flag (set by `--option <id> on|off`). Real-ELF path only;
        // with no program loaded these never reach (unlace_live_value's caller passes
        // None), so the no-program catalog byte-compat fixture is untouched.
        "noreturn_known" => on_off(
            conf.unlace_options
                .get::<unlace_decomp::analysisgates::NoreturnKnown>()
                .0,
        ),
        "godwarfsig" => on_off(
            conf.unlace_options
                .get::<unlace_decomp::analysisgates::Godwarfsig>()
                .0,
        ),
        "goitabcalls" => on_off(
            conf.unlace_options
                .get::<unlace_decomp::goitabcalls::GoItabCalls>()
                .0,
        ),
        "libgccsigs" => on_off(
            conf.unlace_options
                .get::<unlace_decomp::analysisgates::Libgccsigs>()
                .0,
        ),
        "gotypeglobals" => on_off(
            conf.unlace_options
                .get::<unlace_decomp::analysisgates::GoTypeGlobals>()
                .0,
        ),
        // (unlace `libctypes`) Valued `off|opaque|glibc`, so the live token is the
        // value, not an on/off word.
        "libctypes" => match conf
            .unlace_options
            .get::<unlace_decomp::libctypes::LibcTypesLayout>()
        {
            unlace_decomp::libctypes::LibcTypesLayout::Off => "off",
            unlace_decomp::libctypes::LibcTypesLayout::Opaque => "opaque",
            unlace_decomp::libctypes::LibcTypesLayout::Glibc => "glibc",
        },
        "strings" => on_off(
            conf.unlace_options
                .get::<unlace_decomp::analysisgates::Strings>()
                .0,
        ),
        "blobs" => on_off(
            conf.unlace_options
                .get::<unlace_decomp::analysisgates::Blobs>()
                .0,
        ),
        "widestrings" => on_off(
            conf.unlace_options
                .get::<unlace_decomp::analysisgates::Widestrings>()
                .0,
        ),
        "widestrings32" => on_off(
            conf.unlace_options
                .get::<unlace_decomp::analysisgates::Widestrings32>()
                .0,
        ),
        "entry_disc" => on_off(
            conf.unlace_options
                .get::<unlace_decomp::analysisgates::EntryDisc>()
                .0,
        ),
        "eh_frame_full" => on_off(
            conf.unlace_options
                .get::<unlace_decomp::analysisgates::EhFrameFull>()
                .0,
        ),
        "unwindstarts" => on_off(
            conf.unlace_options
                .get::<unlace_decomp::analysisgates::Unwindstarts>()
                .0,
        ),

        "machoehframe" => on_off(
            conf.unlace_options
                .get::<unlace_decomp::analysisgates::Machoehframe>()
                .0,
        ),
        "machobinds" => on_off(
            conf.unlace_options
                .get::<unlace_decomp::analysisgates::Machobinds>()
                .0,
        ),
        "exporttrie" => on_off(unlace_decomp::exporttrie::exporttrie_enabled()),
        "ppc32picimports" => conf.analysis_ppc32picimports.as_str(),
        "ifuncfpret" => on_off(
            conf.unlace_options
                .get::<unlace_decomp::ifuncfpret::IfuncFpRet>()
                .0,
        ),
        "ppcapu" => on_off(conf.unlace_options.get::<unlace_decomp::ppcapu::PpcApu>().0),
        "delphiabi" => on_off(
            conf.unlace_options
                .get::<unlace_decomp::delphiabi::DelphiAbi>()
                .0,
        ),

        "debuglink" => on_off(
            conf.unlace_options
                .get::<unlace_decomp::debuglink::DebugLink>()
                .0,
        ),
        // (unlace `goabi`) Two-valued but spelled auto|off, so it reports its token.
        "goabi" => {
            if conf.unlace_options.get::<unlace_decomp::goabi::GoAbi>().0 {
                "auto"
            } else {
                "off"
            }
        }
        "dyldcrossrefs" => on_off(unlace_decomp::dyldcache::dyldcrossrefs_enabled()),
        "cil" => on_off(unlace_decomp::cil::cil_enabled()),
        // (unlace `symbolnamechars`) Three-valued, so it reports its own token.
        "symbolnamechars" => conf
            .unlace_options
            .get::<unlace_decomp::symbolnamechars::NameChars>()
            .as_str(),
        "ruststdsigs" => conf
            .unlace_options
            .get::<unlace_decomp::ruststdsigs::RustStdSigs>()
            .as_str(),
        "dwarf" => on_off(
            conf.unlace_options
                .get::<unlace_decomp::analysisgates::Dwarf>()
                .0,
        ),
        // (unlace) ELF data-symbol naming (DIV-76): committed at `read symbols`
        // like the analysis-pass gates, so the live flag is authoritative.
        // (unlace `cppsig`) Three-valued, so it reports its own token rather than
        // on/off.
        "cppsig" => conf
            .unlace_options
            .get::<unlace_decomp::cppsig::CppSigMode>()
            .as_str(),
        "addrtable" => on_off(
            conf.unlace_options
                .get::<unlace_decomp::analysisgates::Addrtable>()
                .0,
        ),
        "listing" => on_off(
            conf.unlace_options
                .get::<unlace_decomp::analysisgates::Listing>()
                .0,
        ),
        "fid" => {
            if !conf
                .unlace_options
                .get::<unlace_decomp::analysisgates::Fid>()
                .on
            {
                "off"
            } else if conf
                .unlace_options
                .get::<unlace_decomp::analysisgates::Fid>()
                .strict
            {
                "strict"
            } else {
                "on"
            }
        }
        "armframes" => {
            if !conf
                .unlace_options
                .get::<unlace_decomp::analysisgates::ArmFrames>()
                .inventory
            {
                "off"
            } else if conf
                .unlace_options
                .get::<unlace_decomp::analysisgates::ArmFrames>()
                .full
            {
                "on"
            } else {
                "inventory"
            }
        }
        "x86listingswitch" => on_off(
            conf.unlace_options
                .get::<unlace_decomp::analysisgates::X86listingswitch>()
                .0,
        ),
        "addrtakenentry" => on_off(
            conf.unlace_options
                .get::<unlace_decomp::analysisgates::Addrtakenentry>()
                .0,
        ),
        // (unlace `flowmode`) Valued `on|aftercall|off`, so it reports its own token.
        "flowmode" => match (
            conf.unlace_options
                .get::<unlace_decomp::analysisgates::FlowMode>()
                .on,
            conf.unlace_options
                .get::<unlace_decomp::analysisgates::FlowMode>()
                .after_call,
        ) {
            (false, _) => "off",
            (true, false) => "on",
            (true, true) => "aftercall",
        },
        "cvftrace" => match (
            conf.unlace_options
                .get::<unlace_decomp::analysisgates::CvfTrace>()
                .names,
            conf.unlace_options
                .get::<unlace_decomp::analysisgates::CvfTrace>()
                .lines,
        ) {
            (false, _) => "off",
            (true, false) => "on",
            (true, true) => "lines",
        },
        "gopcln" => {
            let g = conf
                .unlace_options
                .get::<unlace_decomp::analysisgates::GoPcln>();
            match (g.on, g.lines) {
                (false, _) => "off",
                (true, false) => "on",
                (true, true) => "lines",
            }
        }
        "elfmain" => on_off(
            conf.unlace_options
                .get::<unlace_decomp::analysisgates::Elfmain>()
                .0,
        ),
        "fast_funcdisc" => on_off(
            conf.unlace_options
                .get::<unlace_decomp::analysisgates::FastFuncdisc>()
                .0,
        ),
        // (unlace `aif`) Four-valued, so it reports its own token.
        "aif" => conf
            .unlace_options
            .get::<unlace_decomp::aif::AifMode>()
            .as_str(),

        "objectview" => on_off(
            conf.unlace_options
                .get::<unlace_decomp::analysisgates::Objectview>()
                .0,
        ),
        "mapglobalsyms" => on_off(
            conf.unlace_options
                .get::<unlace_decomp::mapglobalsyms::Mapglobalsyms>()
                .0,
        ),
        "aifpoolslide" => on_off(
            conf.unlace_options
                .get::<unlace_decomp::analysisgates::Aifpoolslide>()
                .0,
        ),
        "esprom" => conf
            .unlace_options
            .get::<unlace_decomp::esprom::EspRom>()
            .as_str(),
        "armconstshift" => conf
            .unlace_options
            .get::<unlace_decomp::armconstantshift::ConstShiftMode>()
            .as_str(),
        "fpargboxed" => on_off(
            conf.unlace_options
                .get::<unlace_decomp::boxedcompare::FpArgBoxed>()
                .0,
        ),
        "satconvert" => on_off(
            conf.unlace_options
                .get::<unlace_decomp::satconvert::SatConvert>()
                .0,
        ),
        // (PR-8) Mach-O arm64e spec selection: reflects the recorded requested
        // state (the live spec-selection gate is the load-time env var, but the
        // catalog `current` mirrors the `option macho-arm64e on|off` request).
        "macho-arm64e" => on_off(
            conf.unlace_options
                .get::<unlace_decomp::macho_arm64e::MachoArm64e>()
                .0,
        ),
        // No current field (C++ returns "").
        _ => return None,
    }))
}

// ---------------------------------------------------------------------------
// `phase list` — IfcUnlacePhaseList
// ---------------------------------------------------------------------------

/// (unlace) `phase list`: print the stage model and sub-stage catalog
/// (C++ `IfcUnlacePhaseList`). Pure static data; requires no program.
pub struct IfcUnlacePhaseList;

impl IfaceCommandAction for IfcUnlacePhaseList {
    fn execute(&self, status: &mut IfaceStatus, _s: &mut CommandStream) -> IfaceResult<()> {
        let mut os = String::new();
        os.push_str("Phases (kuna phase model, docs/phases.md):\n");
        for stage in STAGES_IN_ORDER {
            os.push_str("  ");
            os.push_str(stage.code());
            os.push_str("  ");
            os.push_str(stage.name());
            if stage == UnlacePhase::P0 {
                os.push_str("  [orthogonal plane]");
            } else if stage.in_band_b() {
                os.push_str("  [Band B]");
            }
            os.push('\n');
            os.push_str("        artifact: ");
            os.push_str(stage.artifact());
            os.push('\n');
        }
        os.push('\n');
        os.push_str("Sub-phases (named decision points; LATENT = no override surface today):\n");
        for i in 0..unlace_num_subphases() {
            let sub = unlace_subphase_by_index(i);
            os.push_str("  [");
            os.push_str(sub.phase.code());
            os.push_str("] ");
            os.push_str(sub.name);
            if sub.latent {
                os.push_str("  (LATENT)");
            }
            os.push('\n');
            os.push_str("        decision: ");
            os.push_str(sub.decision);
            os.push('\n');
            os.push_str("        assertion: ");
            os.push_str(sub.assertion);
            match sub.strength {
                UnlaceStrength::Hard => os.push_str(" (HARD)"),
                UnlaceStrength::Hint => os.push_str(" (HINT)"),
                UnlaceStrength::None => {}
            }
            os.push_str("   rewind: ");
            os.push_str(sub.rewind.code());
            os.push('\n');
            os.push_str("        exposure: ");
            os.push_str(sub.exposure);
            os.push('\n');
        }
        status.file_out(&os);
        Ok(())
    }
    fn module(&self) -> String {
        DECOMPILE_MODULE.to_string()
    }
}

// ---------------------------------------------------------------------------
// `phase map [<name>]` — IfcUnlacePhaseMap
// ---------------------------------------------------------------------------

/// (unlace) `phase map [<name>]`: resolve a group/surface/sub-stage to its stage
/// (C++ `IfcUnlacePhaseMap`). With no argument, dump the full tables.
pub struct IfcUnlacePhaseMap;

impl IfaceCommandAction for IfcUnlacePhaseMap {
    fn execute(&self, status: &mut IfaceStatus, s: &mut CommandStream) -> IfaceResult<()> {
        // C++ builds a space-joined token from the rest of the line.
        let mut token = String::new();
        s.skip_ws();
        while !s.eof() {
            let word = s.read_token();
            s.skip_ws();
            if word.is_empty() {
                break;
            }
            if !token.is_empty() {
                token.push(' ');
            }
            token.push_str(&word);
        }

        let mut os = String::new();
        if token.is_empty() {
            // Dump everything.
            os.push_str("Action/rule groups -> phase (dominant artifact; see docs/history/stage-model.md s15 for straddlers):\n");
            for i in 0..unlace_num_groups() {
                let entry = unlace_group_by_index(i);
                os.push_str("  ");
                os.push_str(entry.phase.code());
                os.push_str("  ");
                os.push_str(entry.group);
                if !entry.subphase.is_empty() {
                    os.push_str("  (");
                    os.push_str(entry.subphase);
                    os.push(')');
                }
                os.push('\n');
                if !entry.note.is_empty() {
                    os.push_str("        ");
                    os.push_str(entry.note);
                    os.push('\n');
                }
            }
            os.push('\n');
            os.push_str("Console surfaces -> phase:\n");
            for i in 0..unlace_num_surfaces() {
                let entry = unlace_surface_by_index(i);
                os.push_str("  ");
                os.push_str(entry.phase.code());
                os.push_str("  ");
                os.push_str(entry.surface);
                if !entry.subphase.is_empty() {
                    os.push_str("  (");
                    os.push_str(entry.subphase);
                    os.push(')');
                }
                if !entry.note.is_empty() {
                    os.push_str("  -- ");
                    os.push_str(entry.note);
                }
                os.push('\n');
            }
            status.file_out(&os);
            return Ok(());
        }

        let mut found = false;
        if let Some(grp) = lookup_group(&token) {
            found = true;
            os.push_str("group ");
            os.push_str(grp.group);
            os.push_str(" -> ");
            os.push_str(grp.phase.code());
            os.push_str(" (");
            os.push_str(grp.phase.name());
            os.push(')');
            if !grp.subphase.is_empty() {
                os.push_str(" sub-phase ");
                os.push_str(grp.subphase);
            }
            os.push('\n');
            if !grp.note.is_empty() {
                os.push_str("  ");
                os.push_str(grp.note);
                os.push('\n');
            }
        }
        if let Some(surf) = lookup_surface(&token) {
            found = true;
            os.push_str("surface \"");
            os.push_str(surf.surface);
            os.push_str("\" -> ");
            os.push_str(surf.phase.code());
            os.push_str(" (");
            os.push_str(surf.phase.name());
            os.push(')');
            if !surf.subphase.is_empty() {
                os.push_str(" sub-phase ");
                os.push_str(surf.subphase);
            }
            os.push('\n');
            if !surf.note.is_empty() {
                os.push_str("  ");
                os.push_str(surf.note);
                os.push('\n');
            }
        }
        if let Some(sub) = lookup_subphase(&token) {
            found = true;
            os.push_str("sub-phase ");
            os.push_str(sub.name);
            os.push_str(" -> ");
            os.push_str(sub.phase.code());
            os.push_str(" (");
            os.push_str(sub.phase.name());
            os.push(')');
            if sub.latent {
                os.push_str("  LATENT");
            }
            os.push('\n');
            os.push_str("  decision: ");
            os.push_str(sub.decision);
            os.push('\n');
            os.push_str("  assertion: ");
            os.push_str(sub.assertion);
            os.push_str("   rewind: ");
            os.push_str(sub.rewind.code());
            os.push('\n');
            os.push_str("  exposure: ");
            os.push_str(sub.exposure);
            os.push('\n');
        }
        if !found {
            return Err(IfaceError::execution(format!(
                "Unknown group/surface/sub-phase: {token}"
            )));
        }
        status.file_out(&os);
        Ok(())
    }
    fn module(&self) -> String {
        DECOMPILE_MODULE.to_string()
    }
}

// ---------------------------------------------------------------------------
// `phase status` — IfcUnlacePhaseStatus
// ---------------------------------------------------------------------------

/// (unlace) `phase status`: report the active pipeline variant and the state of
/// unlace sub-stage options (C++ `IfcUnlacePhaseStatus`), then, for a selected
/// function, its maturity level and settled facts (unlace).
///
/// The first two lines (pipeline variant, compareform) read accessors the
/// merged tree exposes; the third (`arraynotation`) dereferences `conf->print`
/// (`STUB(W8)`), which the architecture does not expose. Because the exact
/// three-line output cannot be reproduced byte-for-byte today, the engine read
/// is routed through [`engine_unavailable`] after the `No load image present`
/// guard, exactly as the merged `ifacedecomp` commands do for unported `print`
/// accessors.
pub struct IfcUnlacePhaseStatus;

impl IfaceCommandAction for IfcUnlacePhaseStatus {
    fn execute(&self, status: &mut IfaceStatus, _s: &mut CommandStream) -> IfaceResult<()> {
        let dcp = dcp_mut(status)?;
        let conf = match dcp.conf.as_ref() {
            Some(c) => c.arch(),
            None => return Err(IfaceError::execution("No load image present")),
        };
        // C++ IfcUnlacePhaseStatus::execute.
        let mut os = String::new();
        os.push_str("pipeline variant: ");
        os.push_str(conf.allacts.get_current_name());
        os.push('\n');
        os.push_str("compareform: ");
        os.push_str(
            if conf
                .unlace_options
                .get::<unlace_decomp::compareform::PresentLessequal>()
                .0
            {
                "original"
            } else {
                "canonical"
            },
        );
        os.push('\n');
        os.push_str("arraynotation: ");
        os.push_str(if conf.print().options.array_notation() {
            "on"
        } else {
            "off"
        });
        os.push('\n');
        // (unlace maturity) How far the selected function's last pass got
        // (`docs/spec/00-overview.md` §0.10), and the facts settled there.
        if let Some(fd) = dcp.fd.as_ref() {
            let settled: Vec<&str> = fd.settled_facts().iter().map(|f| f.name()).collect();
            os.push_str(&format!(
                "maturity: {} (settled: {})\n",
                fd.maturity(),
                if settled.is_empty() {
                    "none".to_string()
                } else {
                    settled.join(", ")
                }
            ));
        }
        // C++ writes the bulk stream (`*status->fileoptr`); the datatest harness
        // sets `fileoptr` to the matched bulk buffer (the interactive console
        // falls back to stdout when no `openfile` redirect is active).
        status.file_out(&os);
        Ok(())
    }
    fn module(&self) -> String {
        DECOMPILE_MODULE.to_string()
    }
}

// ---------------------------------------------------------------------------
// `phase catalog [<option>]` — IfcUnlacePhaseCatalog
// ---------------------------------------------------------------------------

/// (unlace) `phase catalog [<option>]`: emit the LLM-settable assertion catalog as
/// JSON (C++ `IfcUnlacePhaseCatalog`).
///
/// Calls the W4 byte-compatible emitter
/// ([`unlace_decomp::phases::emit_catalog_json`] /
/// [`emit_catalog_json_one`]); the live `current` field is joined per option
/// from the loaded [`Architecture`] via [`unlace_live_value`] (C++
/// `unlaceLiveValue`). Works with no program loaded (the static doc form).
pub struct IfcUnlacePhaseCatalog;

impl IfaceCommandAction for IfcUnlacePhaseCatalog {
    fn execute(&self, status: &mut IfaceStatus, s: &mut CommandStream) -> IfaceResult<()> {
        // C++: s >> ws >> option;
        s.skip_ws();
        let option = s.read_token();

        let dcp = dcp_mut(status)?;
        let conf = dcp.conf.as_ref();

        let out = if !option.is_empty() {
            // Single-option form: `phase catalog <option>`.
            if lookup_settable(&option).is_none() {
                return Err(IfaceError::execution(format!(
                    "Unknown settable option: {option} (try `phase catalog`)"
                )));
            }
            let live = conf.and_then(|c| unlace_live_value(c.arch(), &option));
            let live = live.as_deref();
            // lookup_settable just succeeded, so this is Some.
            emit_catalog_json_one(&option, live).unwrap_or_default()
        } else {
            // Full form: `phase catalog`. The emitter calls the closure per
            // option (in registry order), matching the C++ per-row unlaceLiveValue
            // join. The closure returns &'static str (the registry value table).
            match conf {
                Some(c) => emit_catalog_json(|opt| unlace_live_value(c.arch(), opt)),
                None => emit_catalog_json(|_| None),
            }
        };
        status.file_out(&out);
        Ok(())
    }
    fn module(&self) -> String {
        DECOMPILE_MODULE.to_string()
    }
}

// ---------------------------------------------------------------------------
// `kassert ...` — IfcUnlaceAssert (class lives in kuna_assert.cc; registered here)
// ---------------------------------------------------------------------------

/// (unlace) `kassert <phase> <subphase> <args...> [hard|hint]` / `kassert list`:
/// write a typed assertion through an existing store (C++ `IfcUnlaceAssert`,
/// `kuna_assert.cc`; registered by the unlace capability in `kuna_console.cc`).
///
/// The **validation + routing decision** core ports in full (the parse-error
/// precedence, `kassert list`, the LATENT/unroutable error arms) on top of
/// [`unlace_decomp::assert`]. The store mutation for a *routable* assertion
/// (Override / FuncProto locks / retype / rename / `OptionDatabase::set`) needs
/// the unported engine integration and is routed through [`engine_unavailable`];
/// because the success path cannot complete the store write, the `assertLog`
/// records nothing for a routable assertion (the `kassert applied` line and
/// `assertLog.push_back` follow the store write in C++).
///
/// `assert_log` is the per-instance equivalent of the C++ file-static
/// `assertLog`: one [`IfcUnlaceAssert`] is registered, so its [`RefCell`] holds
/// the session log for the console's lifetime, matching the C++ semantics.
pub struct IfcUnlaceAssert {
    /// Session log (C++ file-static `assertLog`).
    assert_log: RefCell<AssertLog>,
}

impl IfcUnlaceAssert {
    /// A fresh `kassert` command with an empty session log.
    pub fn new() -> IfcUnlaceAssert {
        IfcUnlaceAssert {
            assert_log: RefCell::new(AssertLog::new()),
        }
    }
}

impl Default for IfcUnlaceAssert {
    fn default() -> Self {
        IfcUnlaceAssert::new()
    }
}

impl IfaceCommandAction for IfcUnlaceAssert {
    fn execute(&self, status: &mut IfaceStatus, s: &mut CommandStream) -> IfaceResult<()> {
        {
            let dcp = dcp_mut(status)?;
            if dcp.conf.is_none() {
                return Err(IfaceError::execution("No load image present"));
            }
        }

        s.skip_ws();
        let stagecode = s.read_token();
        if stagecode == "list" {
            // listAssertions writes the bulk stream.
            let text = self.assert_log.borrow().render_list();
            status.file_out(&text);
            return Ok(());
        }

        s.skip_ws();
        let subname = s.read_token();

        // Collect the rest of the line (C++ tokenizeRest).
        let mut tokens: Vec<String> = Vec::new();
        s.skip_ws();
        while !s.eof() {
            let word = s.read_token();
            s.skip_ws();
            if word.is_empty() {
                break;
            }
            tokens.push(word);
        }

        // C++: optional trailing hard|hint pops off the token list and sets the
        // requested strength override (default to the catalog strength).
        let mut strength_override: Option<UnlaceStrength> = None;
        if let Some(last) = tokens.last() {
            if last == "hard" {
                strength_override = Some(UnlaceStrength::Hard);
                tokens.pop();
            } else if last == "hint" {
                strength_override = Some(UnlaceStrength::Hint);
                tokens.pop();
            }
        }

        // Validate stage/sub-stage and compute strength + minimal rewind + the
        // routing decision (the console-independent core). C++ throws
        // IfaceParseError in this precedence: bad stage code -> missing sub-stage
        // -> unknown sub-stage -> sub-stage/stage mismatch. validate_assertion
        // returns UnlaceError::Parse for all four; surface them as IfaceParseError.
        let validated = validate_assertion(&stagecode, &subname, strength_override)
            .map_err(|e| IfaceError::parse(e.explain().to_string()))?;

        // Assemble the would-be record (matches the C++ `rec` assembly). The
        // fields are computed here so the store-mutation wire site (each routable
        // arm) is the single place to push it on success when the engine lands.
        let func_name = match &dcp_mut(status)?.fd {
            Some(fd) => fd.get_name().to_string(),
            None => "(global)".to_string(),
        };
        let record = UnlaceAssertion {
            func_name,
            phase: validated.phase,
            subphase: validated.subphase.clone(),
            args: join_tokens(&tokens),
            strength: validated.requested,
            applied: validated.applied,
            rewind: validated.rewind,
        };

        // C++ `kassert applied:` confirmation line (written to `*optr`), emitted
        // after a routable store mutation succeeds.
        let applied_line = {
            let mut s = String::new();
            s.push_str("kassert applied: [");
            s.push_str(record.phase.code());
            s.push_str("] ");
            s.push_str(&record.subphase);
            if !record.args.is_empty() {
                s.push(' ');
                s.push_str(&record.args);
            }
            s.push_str("  rewind->");
            s.push_str(record.rewind.code());
            s.push_str(" (Ghidra-actual: whole-function)\n");
            s
        };

        // Dispatch: the store mutation. The LATENT/unroutable arms touch no store
        // and emit their exact text now; every routable arm performs a store
        // mutation through the unported engine layer (Override::insert*,
        // FuncProto locks, retype/rename, OptionDatabase::set, with
        // parse_machaddr/parse_type/readSymbol).
        match validated.dispatch {
            Dispatch::Latent => {
                // C++: throw IfaceExecutionError("Sub-stage <name> is LATENT: ...")
                Err(IfaceError::execution(format!(
                    "Sub-phase {subname} is LATENT: no override surface exists yet (kuna roadmap)"
                )))
            }
            Dispatch::Unroutable => {
                // C++: throw IfaceExecutionError("Sub-stage <name> is not yet
                //   routable through kassert; use its native surface: <exposure>")
                let exposure = lookup_subphase(&subname)
                    .map(|sub| sub.exposure)
                    .unwrap_or("");
                Err(IfaceError::execution(format!(
                    "Sub-phase {subname} is not yet routable through kassert; use its native surface: {exposure}"
                )))
            }
            Dispatch::ForceGoto => Err(engine_unavailable(
                "Override::insertForceGoto (parse_machaddr) for kassert edge-virtualization",
            )),
            Dispatch::DeadcodeDelay => Err(engine_unavailable(
                "Override::insertDeadcodeDelay (Architecture::getSpaceByName) for kassert dead-definition-gate",
            )),
            Dispatch::MultistageJump => Err(engine_unavailable(
                "Override::insertMultistageJump (parse_machaddr) for kassert switch-model",
            )),
            Dispatch::FlowOverride => Err(engine_unavailable(
                "Override::insertFlowOverride (parse_machaddr) for kassert flow-classification",
            )),
            Dispatch::ProtoLock => Err(engine_unavailable(
                "FuncProto::setInputLock/setOutputLock for kassert prototype-source",
            )),
            Dispatch::Retype => Err(engine_unavailable(
                "parse_type + Scope::retypeSymbol (IfaceDecompData::readSymbol) for kassert type-propagation",
            )),
            Dispatch::Isolate => {
                let Some(name) = tokens.first().cloned() else {
                    return Err(IfaceError::parse(
                        "merge-aggressiveness assertion needs <name>",
                    ));
                };
                let dcp = dcp_mut(status)?;
                let maxduplicates = unlace_decomp::dynamichashmax::MAX_DUPLICATES;
                dcp.local_symbol_fd(&name)?;
                let (Some(fd), arch) = (dcp.fd.as_mut(), dcp.conf.as_ref().map(|p| p.arch()))
                else {
                    return Err(IfaceError::execution("no function selected"));
                };
                crate::hightarget::isolate_local(fd, &name, maxduplicates, arch)
                    .map_err(IfaceError::execution)?;
                status.out(&applied_line);
                self.assert_log.borrow_mut().push(record);
                Ok(())
            }
            Dispatch::Rename => {
                if tokens.len() < 2 {
                    return Err(IfaceError::parse(
                        "naming-policy assertion needs <oldname> <newname>",
                    ));
                }
                let oldname = tokens[0].clone();
                let newname = tokens[1].clone();
                let dcp = dcp_mut(status)?;
                let maxduplicates = unlace_decomp::dynamichashmax::MAX_DUPLICATES;
                dcp.local_symbol_fd(&oldname)?;
                let (Some(fd), arch) = (dcp.fd.as_mut(), dcp.conf.as_ref().map(|p| p.arch()))
                else {
                    return Err(IfaceError::execution("no function selected"));
                };
                crate::hightarget::apply_local(fd, &oldname, &newname, None, maxduplicates, arch)
                    .map_err(IfaceError::execution)?;
                status.out(&applied_line);
                self.assert_log.borrow_mut().push(record);
                Ok(())
            }
            Dispatch::Option(name) => {
                // C++ kassert option -> OptionDatabase::set (the unlace options are
                // not in the OptionDatabase; `set_unlace_option` dispatches them into
                // the live architecture flags — e.g. compareform original sets
                // present_lessequal). Then emit the option's confirmation message
                // and the `kassert applied:` line, and record the assertion.
                if tokens.is_empty() {
                    return Err(IfaceError::parse(format!(
                        "option assertion for {name} needs a value"
                    )));
                }
                let dcp = dcp_mut(status)?;
                let conf = dcp
                    .conf
                    .as_mut()
                    .expect("conf checked non-None at command entry");
                let msg = conf
                    .arch_mut()
                    .set_unlace_option(name, &tokens[0])
                    .map_err(|e| IfaceError::execution(e.explain().to_string()))?;
                conf.callwide_changed();
                let mut out = msg;
                out.push('\n');
                out.push_str(&applied_line);
                status.out(&out);
                self.assert_log.borrow_mut().push(record);
                Ok(())
            }
        }
    }
    fn module(&self) -> String {
        DECOMPILE_MODULE.to_string()
    }
}

// ---------------------------------------------------------------------------
// `restarts` — IfcUnlaceRestarts
// ---------------------------------------------------------------------------

/// (unlace) `restarts`: dump recorded restart-trigger events for the current
/// function (C++ `IfcUnlaceRestarts`).
///
/// C++ calls `unlaceDumpRestarts(*status->fileoptr, *dcp->fd)` over the global
/// restart side table; the ported [`unlace_decomp::restartlog::RestartLog`]
/// is `Architecture`-owned, but the architecture does not yet hold one
/// (`STUB(W5)`: the log and its trigger sites land together), so the dump is
/// routed through [`engine_unavailable`] after the `No function selected`
/// guard.
pub struct IfcUnlaceRestarts;

impl IfaceCommandAction for IfcUnlaceRestarts {
    fn execute(&self, status: &mut IfaceStatus, _s: &mut CommandStream) -> IfaceResult<()> {
        let dcp = dcp_mut(status)?;
        let fd = match dcp.fd.as_ref() {
            Some(fd) => fd,
            None => return Err(IfaceError::execution("No function selected")),
        };
        // C++ unlaceDumpRestarts over the Architecture-owned RestartLog.
        let conf = match dcp.conf.as_ref() {
            Some(c) => c.arch(),
            None => return Err(IfaceError::execution("No load image present")),
        };
        let text = conf.restart_log().render(fd);
        status.file_out(&text);
        Ok(())
    }
    fn module(&self) -> String {
        DECOMPILE_MODULE.to_string()
    }
}

// ---------------------------------------------------------------------------
// `pipeline [list|<variant>]` — IfcUnlacePipeline
// ---------------------------------------------------------------------------

/// (unlace) `pipeline [list|<variant>]`: run a named reduced pipeline on the
/// current function as a sub-query (C++ `IfcUnlacePipeline`).
///
/// The `list` sub-form (and the `(current)` marker on the active variant) ports
/// in full. Running a variant mirrors `Funcdata::stageJumpTable`'s
/// save/switch/restore of the root action, but the decompile drive
/// (`allacts.getCurrent()->reset/perform`, `clearAnalysis`) is not assembled at
/// the `Architecture` level in the merged tree, so a valid variant is routed
/// through [`engine_unavailable`] after the guards and the "Unknown pipeline
/// variant" parse error.
pub struct IfcUnlacePipeline;

impl IfcUnlacePipeline {
    /// Print the named pipeline variants: `pipeline list` (C++
    /// `IfcUnlacePipeline::listPipelines`).
    fn list_pipelines(&self, status: &mut IfaceStatus) {
        // C++: if (conf != 0 && allacts.getCurrentName() == variant) "  (current)"
        let current = dcp_ref(status)
            .and_then(|dcp| dcp.conf.as_ref())
            .map(|conf| conf.arch().allacts.get_current_name().to_string());
        let mut os = String::new();
        os.push_str("Named pipeline variants (group filters over the universal action; P0 pipeline-variant sub-phase):\n");
        for v in PIPELINE_VARIANTS {
            os.push_str("  ");
            os.push_str(v);
            if current.as_deref() == Some(v) {
                os.push_str("  (current)");
            }
            os.push('\n');
        }
        status.file_out(&os);
    }
}

impl IfaceCommandAction for IfcUnlacePipeline {
    fn execute(&self, status: &mut IfaceStatus, s: &mut CommandStream) -> IfaceResult<()> {
        s.skip_ws();
        let name = s.read_token();
        if name.is_empty() || name == "list" {
            self.list_pipelines(status);
            return Ok(());
        }
        // C++: validate against PIPELINE_VARIANTS, throw IfaceParseError if unknown.
        if !PIPELINE_VARIANTS.contains(&name.as_str()) {
            return Err(IfaceError::parse(format!(
                "Unknown pipeline variant: {name} (try `pipeline list`)"
            )));
        }
        let dcp = dcp_mut(status)?;
        if dcp.conf.is_none() {
            return Err(IfaceError::execution("No load image present"));
        }
        if dcp.fd.is_none() {
            return Err(IfaceError::execution("No function selected"));
        }
        // hasNoCode IS expressible; the message uses the command stream (optr).
        let fd = dcp.fd.as_ref().expect("fd checked Some above");
        if fd.has_no_code() {
            let line = format!("No code for {}\n", fd.get_name());
            status.out(&line);
            return Ok(());
        }
        // C++ reduced-pipeline sub-query: rebuild the IR, run the named action
        // group as the current root, restore `decompile` (clearAnalysis +
        // allacts.setCurrent/reset/perform/restore).  Mirror IfcDecompile's
        // take-program pattern so the engine work borrows neither status nor dcp.
        let (fname, has_no_code, proc_started, entry, size, mut prog) = {
            let dcp = dcp_mut(status)?;
            let fd = dcp.fd.as_ref().expect("fd checked Some above");
            let info = (
                fd.get_name().to_string(),
                fd.has_no_code(),
                fd.is_proc_started(),
                fd.get_address().clone(),
                fd.get_size(),
            );
            let prog = dcp.conf.take().expect("conf checked Some above");
            (info.0, info.1, info.2, info.3, info.4, prog)
        };
        if has_no_code {
            dcp_mut(status)?.conf = Some(prog);
            status.out(&format!("No code for {fname}\n"));
            return Ok(());
        }
        // C++: clearAnalysis notice if a prior decompilation exists.
        if proc_started {
            status.out("Clearing old decompilation\n");
        }
        status.out(&format!(
            "Processing {fname} under reduced pipeline `{name}`\n"
        ));
        let result = unlace_decomp::decompile_drive::run_named_pipeline_variant(
            prog.arch_mut(),
            &fname,
            entry,
            size,
            &name,
        );
        // Restore the program (and the reduced-pipeline Funcdata on success).
        let dcp = dcp_mut(status)?;
        dcp.conf = Some(prog);
        match result {
            Ok(fd) => {
                dcp.fd = Some(fd);
                status.out("Sub-query complete (root action restored to `decompile`)\n");
                Ok(())
            }
            Err(e) => Err(IfaceError::execution(e.explain().to_string())),
        }
    }
    fn module(&self) -> String {
        DECOMPILE_MODULE.to_string()
    }
}

// ---------------------------------------------------------------------------
// `mode <name>` — IfcUnlaceMode
// ---------------------------------------------------------------------------

/// (unlace) `mode <reliable|aggressive|fast>`: apply a decompiler mode preset — a batch
/// of option overrides fanned out through `Architecture::apply_mode` (see
/// `unlace_decomp::modes`).  Mirrors `IfcOption`'s dcp/conf access; issue it
/// before `read symbols` so an analysis-tier override (`listing`/`aif`/…) is
/// committed, exactly like an `option` command.  A later `option NAME VALUE`
/// overrides the mode (last-write).
pub struct IfcUnlaceMode;

impl IfaceCommandAction for IfcUnlaceMode {
    fn execute(&self, status: &mut IfaceStatus, s: &mut CommandStream) -> IfaceResult<()> {
        s.skip_ws();
        let name = s.read_token();
        s.skip_ws();
        if name.is_empty() {
            return Err(IfaceError::parse(
                "Missing mode name (try `mode reliable`, `mode aggressive`, or `mode fast`)",
            ));
        }
        let dcp = dcp_mut(status)?;
        if dcp.conf.is_none() {
            return Err(IfaceError::execution("No load image present"));
        }
        let prog = dcp.conf.as_mut().expect("conf checked non-None above");
        let res = prog
            .arch_mut()
            .apply_mode(&name)
            .map_err(|e| IfaceError::execution(e.explain().to_string()))?;
        prog.callwide_changed();
        status.out(&format!("{res}\n"));
        Ok(())
    }
    fn module(&self) -> String {
        DECOMPILE_MODULE.to_string()
    }
}

// ---------------------------------------------------------------------------
// `quality` — IfcUnlaceQuality
// ---------------------------------------------------------------------------

/// (unlace) `quality`: goto-count structure-quality metric over the structured
/// result (C++ `IfcUnlaceQuality`).
///
/// The goto-count walk (`unlaceCountGotos`) operates on the ported `BlockGraph` /
/// `FlowBlock` arena, but the `goto nodes: N (printed: M)` line needs
/// `BlockGoto::gotoPrints`, which depends on `FlowBlock::nextFlowAfter`
/// (`STUB(W7)`, unported). Because that exact line cannot be reproduced today,
/// the metric is routed through [`engine_unavailable`] after the `No function
/// selected` and `hasNoStructBlocks` guards (both fully expressible).
pub struct IfcUnlaceQuality;

impl IfaceCommandAction for IfcUnlaceQuality {
    fn execute(&self, status: &mut IfaceStatus, _s: &mut CommandStream) -> IfaceResult<()> {
        let dcp = dcp_mut(status)?;
        if dcp.fd.is_none() {
            return Err(IfaceError::execution("No function selected"));
        }
        let fd = dcp.fd.as_ref().expect("fd checked Some above");
        if fd.has_no_struct_blocks() {
            let line = format!(
                "No structured blocks for {} (decompile first)\n",
                fd.get_name()
            );
            status.file_out(&line);
            return Ok(());
        }
        // C++ IfcUnlaceQuality: count gotos/multi-gotos/if-gotos over the
        // structured tree (unlaceCountGotos), report the goto-count quality signal.
        let name = fd.get_name().to_string();
        let basic_blocks = fd.bblocks_get_size();
        let counts = fd.unlace_quality_counts();
        let unstructured = counts.printed_gotos + counts.multigoto_edges + counts.ifgoto_edges;
        let mut os = String::new();
        os.push_str(&format!("Structure quality for {name}:\n"));
        os.push_str(&format!("  basic blocks: {basic_blocks}\n"));
        os.push_str(&format!(
            "  goto nodes: {} (printed: {})\n",
            counts.goto_nodes, counts.printed_gotos
        ));
        os.push_str(&format!("  multi-goto edges: {}\n", counts.multigoto_edges));
        os.push_str(&format!("  if-goto edges: {}\n", counts.ifgoto_edges));
        os.push_str(&format!("  unstructured total: {unstructured}\n"));
        status.file_out(&os);
        Ok(())
    }
    fn module(&self) -> String {
        DECOMPILE_MODULE.to_string()
    }
}

// ---------------------------------------------------------------------------
// Region commands (IfcUnlaceRegionTree/Blocks/Walk, from kuna_regionid.cc)
// ---------------------------------------------------------------------------

/// (unlace) `region tree` / `region blocks` / `region walk`: inspect the S7
/// region hierarchy (C++ `IfcUnlaceRegion*` from `kuna_regionid.cc`; registered by
/// the unlace capability in `kuna_console.cc`).
///
/// The region identifier is ported (`unlace_decomp::regionid`); its
/// `buildFromBlockGraph` block-graph adapter (the W7 boundary) is now closed
/// ([`UnlaceRegionIdentifier::build_from_block_graph`]), so these three commands
/// drive it over the real decompiled `bblocks` CFG (block start addresses, the
/// CFG out-edges, and the per-block `endsWithBranchindOrCbranch` `lastOp` probe).
///
/// Build a [`UnlaceRegionIdentifier`] from the current function's basic-block
/// graph (the C++ `IfcUnlaceRegion*` `buildFromBlockGraph` adapter): one `k_block`
/// node per basic block (keyed on its start address, carrying the real block)
/// and one edge per CFG out-edge; the entry address is block 0's start.  Returns
/// the computed identifier ready for tree/blocks/walk rendering.
fn build_region_identifier(
    fd: &unlace_decomp::funcdata::Funcdata,
) -> IfaceResult<UnlaceRegionIdentifier> {
    let mut ri = UnlaceRegionIdentifier::new();
    ri.build_from_block_graph(fd)
        .map_err(|e| IfaceError::execution(e.explain().to_string()))?;
    ri.compute()
        .map_err(|e| IfaceError::execution(e.explain().to_string()))?;
    Ok(ri)
}

/// (unlace) `region tree`: render the nested region hierarchy (C++
/// `IfcUnlaceRegionTree`).
struct IfcUnlaceRegionTree;

impl IfaceCommandAction for IfcUnlaceRegionTree {
    fn execute(&self, status: &mut IfaceStatus, _s: &mut CommandStream) -> IfaceResult<()> {
        let os = {
            let dcp = dcp_mut(status)?;
            dcp.follow_stopped_flow();
            let fd = match dcp.fd.as_ref() {
                Some(fd) => fd,
                None => return Err(IfaceError::execution("No function selected")),
            };
            let prog = dcp
                .conf
                .as_ref()
                .ok_or_else(|| IfaceError::execution("No load image present"))?;
            let fname = fd.get_name().to_string();
            let ri = build_region_identifier(fd)?;
            let mut os = String::new();
            os.push_str("Region tree for ");
            os.push_str(&fname);
            os.push_str(":\n");
            os.push_str(&ri.render_tree_with(&|address| prog.output_code_offset(address)));
            os
        };
        status.file_out(&os);
        Ok(())
    }
    fn module(&self) -> String {
        DECOMPILE_MODULE.to_string()
    }
}

/// (unlace) `region blocks`: list each region's flat block-address set (C++
/// `IfcUnlaceRegionBlocks`).
struct IfcUnlaceRegionBlocks;

impl IfaceCommandAction for IfcUnlaceRegionBlocks {
    fn execute(&self, status: &mut IfaceStatus, _s: &mut CommandStream) -> IfaceResult<()> {
        let os = {
            let dcp = dcp_mut(status)?;
            dcp.follow_stopped_flow();
            let fd = match dcp.fd.as_ref() {
                Some(fd) => fd,
                None => return Err(IfaceError::execution("No function selected")),
            };
            let prog = dcp
                .conf
                .as_ref()
                .ok_or_else(|| IfaceError::execution("No load image present"))?;
            let fname = fd.get_name().to_string();
            let ri = build_region_identifier(fd)?;
            let lists = ri.get_regions_by_block_addrs();
            let mut os = String::new();
            os.push_str("Regions for ");
            os.push_str(&fname);
            os.push_str(": ");
            os.push_str(&lists.len().to_string());
            os.push('\n');
            for list in lists {
                os.push('[');
                for (i, address) in list.iter().enumerate() {
                    if i != 0 {
                        os.push_str(", ");
                    }
                    let address = prog.output_code_offset(*address);
                    os.push_str(&format!("0x{address:x}"));
                }
                os.push_str("]\n");
            }
            os
        };
        status.file_out(&os);
        Ok(())
    }
    fn module(&self) -> String {
        DECOMPILE_MODULE.to_string()
    }
}

/// Visitor for `region walk`: pushes a `walk 0x<addr>` line per leaf block.
struct RegionWalkVisitor {
    addresses: Vec<u64>,
}

impl unlace_decomp::regionid::UnlaceRegionVisitor for RegionWalkVisitor {
    fn visit_block(&mut self, _block: Option<unlace_decomp::context::BlockId>, addr: u64) {
        self.addresses.push(addr);
    }
}

/// (unlace) `region walk`: visit the region tree's leaf blocks in walk order (C++
/// `IfcUnlaceRegionWalk`).
struct IfcUnlaceRegionWalk;

impl IfaceCommandAction for IfcUnlaceRegionWalk {
    fn execute(&self, status: &mut IfaceStatus, _s: &mut CommandStream) -> IfaceResult<()> {
        let os = {
            let dcp = dcp_mut(status)?;
            dcp.follow_stopped_flow();
            let fd = match dcp.fd.as_ref() {
                Some(fd) => fd,
                None => return Err(IfaceError::execution("No function selected")),
            };
            let prog = dcp
                .conf
                .as_ref()
                .ok_or_else(|| IfaceError::execution("No load image present"))?;
            let fname = fd.get_name().to_string();
            let ri = build_region_identifier(fd)?;
            let mut visitor = RegionWalkVisitor {
                addresses: Vec::new(),
            };
            ri.walk_blocks(&mut visitor)
                .map_err(|e| IfaceError::execution(e.explain().to_string()))?;
            let mut os = String::new();
            os.push_str("Region walk for ");
            os.push_str(&fname);
            os.push_str(":\n");
            for address in visitor.addresses {
                let address = prog.output_code_offset(address);
                os.push_str(&format!("walk 0x{address:x}\n"));
            }
            os
        };
        status.file_out(&os);
        Ok(())
    }
    fn module(&self) -> String {
        DECOMPILE_MODULE.to_string()
    }
}

/// (unlace) `functions`: print the canonical executable function inventory.
pub struct IfcUnlaceFunctions;

pub struct IfcCallwidePrepare;

impl IfaceCommandAction for IfcCallwidePrepare {
    fn execute(&self, status: &mut IfaceStatus, _s: &mut CommandStream) -> IfaceResult<()> {
        let prog = dcp_mut(status)?
            .conf
            .as_mut()
            .ok_or_else(|| IfaceError::execution("No load image present"))?;
        if !prog
            .arch()
            .unlace_options
            .get::<unlace_decomp::callwide::CallWide>()
            .0
        {
            return Ok(());
        }
        prog.commit_pending_analysis()
            .map_err(|error| IfaceError::execution(error.explain().to_string()))?;
        crate::callwide::prepare(prog);
        Ok(())
    }

    fn module(&self) -> String {
        DECOMPILE_MODULE.to_string()
    }
}

impl IfaceCommandAction for IfcUnlaceFunctions {
    fn execute(&self, status: &mut IfaceStatus, _s: &mut CommandStream) -> IfaceResult<()> {
        let entries = {
            let dcp = dcp_mut(status)?;
            let prog = dcp
                .conf
                .as_mut()
                .ok_or_else(|| IfaceError::execution("No load image present"))?;
            prog.commit_pending_analysis()
                .map_err(|e| IfaceError::execution(e.explain().to_string()))?;
            prog.function_entries_executable()
                .into_iter()
                .map(|entry| (prog.output_code_offset(entry.addr.get_offset()), entry.name))
                .collect::<Vec<_>>()
        };
        let mut out = String::new();
        for (address, name) in entries {
            out.push_str(&format!("{address:#x} {name}\n"));
        }
        status.file_out(&out);
        Ok(())
    }

    fn module(&self) -> String {
        DECOMPILE_MODULE.to_string()
    }
}

/// (unlace) `function bounds <start> [<end>] [as <name>]`: declare where a
/// function starts and ends.
///
/// The one console primitive for "function F spans `[start,end)`", which unlace
/// otherwise has nowhere to say: every extent is DERIVED (the address-contiguous
/// clip in `funcextent`, and an unbounded flow follow), so on an obfuscated or
/// packed image — where discovery is exactly what fails — the caller had no way
/// to correct it (`docs/re-needs/no-cli-function-boundary-override.md`).
///
/// `start` registers the entry the way `map function` does, so it enumerates,
/// resolves by name and names its call sites.  `end` is EXCLUSIVE and records
/// the entry's declared extent, which bounds every later flow follow of it
/// (`ConsoleProgram::declared_extent` -> `Funcdata::size` -> `FlowInfo::setRange`)
/// and replaces the clip the inventory reports.  Both are plain integers in the
/// default code space — no `parse_machaddr` size grammar, whose `[ram,a,n]` size
/// is indistinguishable from the address width for a small `n` — and the name is
/// keyed by `as` so a declaration that gives a name but no extent cannot have
/// its name read as the end address.
pub struct IfcUnlaceFunctionBounds;

impl IfaceCommandAction for IfcUnlaceFunctionBounds {
    fn execute(&self, status: &mut IfaceStatus, s: &mut CommandStream) -> IfaceResult<()> {
        let start = read_vma(&s.read_token())
            .ok_or_else(|| IfaceError::parse("Missing function start address"))?;
        s.skip_ws();
        let mut tok = s.read_token();
        let mut end = None;
        if !tok.is_empty() && tok != "as" {
            end = Some(
                read_vma(&tok)
                    .ok_or_else(|| IfaceError::parse(format!("Bad end address {tok:?}")))?,
            );
            s.skip_ws();
            tok = s.read_token();
        }
        let name = if tok == "as" {
            s.skip_ws();
            let name = s.read_token();
            if name.is_empty() {
                return Err(IfaceError::parse("Missing name after 'as'"));
            }
            Some(name)
        } else if tok.is_empty() {
            None
        } else {
            return Err(IfaceError::parse(format!(
                "Unexpected token {tok:?} (expected 'as')"
            )));
        };
        if let Some(end) = end {
            if end <= start {
                return Err(IfaceError::parse(format!(
                    "function bounds: end {end:#x} must be above start {start:#x}"
                )));
            }
        }
        let display_start = start;
        let dcp = dcp_mut(status)?;
        let prog = dcp
            .conf
            .as_mut()
            .ok_or_else(|| IfaceError::execution("No load image present"))?;
        let start = prog
            .input_code_offset(start)
            .map_err(|e| IfaceError::execution(e.explain().to_string()))?;
        let size = match end {
            None => 0,
            Some(end) => {
                let end = prog
                    .input_code_offset(end)
                    .map_err(|e| IfaceError::execution(e.explain().to_string()))?;
                let size = end.checked_sub(start).filter(|size| *size > 0).ok_or_else(|| {
                    IfaceError::parse(
                        "function bounds: end must be above start after target address conversion",
                    )
                })?;
                unlace_base::types::int4::try_from(size).map_err(|_| {
                    IfaceError::execution("function bounds: byte extent exceeds supported range")
                })?
            }
        };
        let space = prog
            .arch()
            .manage()
            .get_default_code_space()
            .cloned()
            .ok_or_else(|| IfaceError::execution("No default code space"))?;
        let addr = unlace_base::address::Address::new(space, start);
        let name = prog
            .declare_function(addr, name.as_deref(), size)
            .map_err(|e| IfaceError::execution(e.explain().to_string()))?;
        let unmapped = prog.declaration_note(start);
        status.out(&format!(
            "Declared {name} at {display_start:#x} spanning {size} bytes\n"
        ));
        if let Some(sentence) = unmapped {
            status.out(&crate::declaredbytes::transcript_line(&sentence));
        }
        Ok(())
    }

    fn module(&self) -> String {
        DECOMPILE_MODULE.to_string()
    }
}

/// `function symbol <start>`: ensure an address-backed `FunctionSymbol` exists
/// without asserting that the address contains a function body.
pub struct IfcUnlaceFunctionSymbol;

impl IfaceCommandAction for IfcUnlaceFunctionSymbol {
    fn execute(&self, status: &mut IfaceStatus, s: &mut CommandStream) -> IfaceResult<()> {
        let display_start = read_vma(&s.read_token())
            .ok_or_else(|| IfaceError::parse("Missing function symbol address"))?;
        let dcp = dcp_mut(status)?;
        let prog = dcp
            .conf
            .as_mut()
            .ok_or_else(|| IfaceError::execution("No load image present"))?;
        let start = prog
            .input_code_offset(display_start)
            .map_err(|e| IfaceError::execution(e.explain().to_string()))?;
        let space = prog
            .arch()
            .manage()
            .get_default_code_space()
            .cloned()
            .ok_or_else(|| IfaceError::execution("No default code space"))?;
        let name = prog
            .ensure_function_symbol(unlace_base::address::Address::new(space, start))
            .map_err(|e| IfaceError::execution(e.explain().to_string()))?;
        status.out(&format!(
            "Registered {name} at {display_start:#x} without a body assertion\n"
        ));
        Ok(())
    }

    fn module(&self) -> String {
        DECOMPILE_MODULE.to_string()
    }
}

/// `function noreturn <func>`: the console form of the `noreturn` assertion
/// (`crate::assertions`): the function, a name or a `0x` entry address, never
/// returns; a function is declared first at an entry nothing starts at.
pub struct IfcUnlaceFunctionNoReturn;

impl IfaceCommandAction for IfcUnlaceFunctionNoReturn {
    fn execute(&self, status: &mut IfaceStatus, s: &mut CommandStream) -> IfaceResult<()> {
        s.skip_ws();
        let func = s.read_token();
        if func.is_empty() {
            return Err(IfaceError::parse("Missing function name or address"));
        }
        let dcp = dcp_mut(status)?;
        let prog = dcp
            .conf
            .as_mut()
            .ok_or_else(|| IfaceError::execution("No load image present"))?;
        crate::assertions::apply_noreturn(prog, &func).map_err(IfaceError::execution)?;
        status.out(&format!("Marked {func} no-return\n"));
        Ok(())
    }

    fn module(&self) -> String {
        DECOMPILE_MODULE.to_string()
    }
}

/// `function containing <selector>`: name the inventory entry whose extent
/// holds the function `selector` resolves to, when that is not itself an
/// entry, so `unlace decompile` can say it is decompiling from inside another
/// function, or (unlace #1288) the function whose flow ended before it
/// (`ConsoleProgram::flow_ended_before`). Silent otherwise: a selector that
/// does not resolve is the `load` command's to report.
pub struct IfcUnlaceFunctionContaining;

impl IfaceCommandAction for IfcUnlaceFunctionContaining {
    fn execute(&self, status: &mut IfaceStatus, s: &mut CommandStream) -> IfaceResult<()> {
        s.skip_ws();
        let token =
            unlace_decomp::symbolnamebound::bound_scope_path(&s.read_token(), "::").into_owned();
        let dcp = dcp_mut(status)?;
        let prog = dcp
            .conf
            .as_mut()
            .ok_or_else(|| IfaceError::execution("No load image present"))?;
        let selector = match crate::engine::EntrySelector::parse(&token) {
            crate::engine::EntrySelector::Numeric(display) => match prog.input_code_offset(display)
            {
                Ok(vma) => crate::engine::EntrySelector::Numeric(vma),
                Err(_) => return Ok(()),
            },
            selector => selector,
        };
        let Some(vma) = prog.selection_address(&selector) else {
            return Ok(());
        };
        let Some(Some(owner)) = prog.entries_containing(&[vma]).pop() else {
            let line = prog.flow_ended_before(vma).map(|(owner, end)| {
                format!(
                    "{:#x} is past the end of {} at {:#x}\n",
                    prog.output_code_offset(vma),
                    owner.name,
                    prog.output_code_offset(end)
                )
            });
            if let Some(line) = line {
                status.out(&line);
            }
            return Ok(());
        };
        let at = prog.output_code_offset(vma);
        let entry = prog.output_code_offset(owner.addr.get_offset());
        status.out(&format!(
            "{at:#x} is interior to {} at {entry:#x} (+{:#x})\n",
            owner.name,
            at - entry
        ));
        Ok(())
    }

    fn module(&self) -> String {
        DECOMPILE_MODULE.to_string()
    }
}

/// (unlace) `map prototype <func> <C declaration>`: bind a declared signature to
/// the function NAMED by `<func>`.
///
/// `parse line extern <decl>` binds by the name inside the declaration, so it
/// can only confirm a signature for a function that is already called what the
/// declaration calls it.  The RE case is the other one: an agent that has worked
/// out that `sub_1400055e0` hashes a buffer writes
/// `void *sha256(void *out,void *input)`, and every such declaration landed on a
/// fresh unrelated symbol while the selected function kept its recovered `void
/// sub_1400055e0(uint4 *,uint8 *)` (`docs/re-needs/text-output-silently-ignores.md`).
/// `<func>` is authoritative over the declaration's own name; the declaration
/// supplies the types and the parameter names.
pub struct IfcUnlaceMapPrototype;

impl IfaceCommandAction for IfcUnlaceMapPrototype {
    fn execute(&self, status: &mut IfaceStatus, s: &mut CommandStream) -> IfaceResult<()> {
        s.skip_ws();
        let func = s.read_token();
        if func.is_empty() {
            return Err(IfaceError::parse("Missing function name"));
        }
        s.skip_ws();
        let decl = s.rest();
        if decl.trim().is_empty() {
            return Err(IfaceError::parse("Missing C declaration"));
        }
        crate::ifacedecomp::bind_prototype(status, &func, &decl)
    }

    fn module(&self) -> String {
        DECOMPILE_MODULE.to_string()
    }
}

/// Read a `0x`-prefixed-or-bare hexadecimal VMA token.  `function bounds` takes
/// plain numbers rather than the console address grammar precisely so its size
/// argument cannot be confused with an address width.
fn read_vma(tok: &str) -> Option<u64> {
    let body = tok
        .strip_prefix("0x")
        .or_else(|| tok.strip_prefix("0X"))
        .unwrap_or(tok);
    if body.is_empty() || !body.chars().all(|c| c.is_ascii_hexdigit()) {
        return None;
    }
    u64::from_str_radix(body, 16).ok()
}

// ---------------------------------------------------------------------------
// Registration — IfaceUnlaceCapability::registerCommands
// ---------------------------------------------------------------------------

/// C++ `IfaceUnlaceCapability::registerCommands(IfaceStatus *status)`
/// (`kuna_console.cc:22`): register every unlace stage-model console command.
///
/// In C++ the capability is a static singleton discovered by
/// `CapabilityPoint::initializeAll`; the unlace Rust console invokes this directly
/// from its command-registration step (alongside `register_decomp_commands`),
/// the faithful equivalent. The token sequences are byte-identical to the C++
/// `registerCom` calls, so the prefix-expansion the datatests drive
/// (`stage cat` -> `phase catalog`, etc.) is preserved.
pub fn register_unlace_commands(status: &mut IfaceStatus) {
    status.register_com(Box::new(IfcUnlacePhaseList), &["phase", "list"]);
    status.register_com(Box::new(IfcUnlacePhaseMap), &["phase", "map"]);
    status.register_com(Box::new(IfcUnlacePhaseStatus), &["phase", "status"]);
    status.register_com(Box::new(IfcUnlacePhaseCatalog), &["phase", "catalog"]);
    // Deprecated aliases: the pre-rename `stage ...` spellings keep working.
    status.register_com(Box::new(IfcUnlacePhaseList), &["stage", "list"]);
    status.register_com(Box::new(IfcUnlacePhaseMap), &["stage", "map"]);
    status.register_com(Box::new(IfcUnlacePhaseStatus), &["stage", "status"]);
    status.register_com(Box::new(IfcUnlacePhaseCatalog), &["stage", "catalog"]);
    status.register_com(Box::new(IfcUnlaceAssert::new()), &["kassert"]);
    status.register_com(Box::new(IfcUnlaceRestarts), &["restarts"]);
    status.register_com(Box::new(IfcUnlacePipeline), &["pipeline"]);
    status.register_com(Box::new(IfcUnlaceMode), &["mode"]);
    status.register_com(Box::new(IfcUnlaceQuality), &["quality"]);
    status.register_com(Box::new(IfcUnlaceFunctions), &["functions"]);
    status.register_com(Box::new(IfcCallwidePrepare), &["callwide", "prepare"]);
    status.register_com(Box::new(IfcUnlaceRegionTree), &["region", "tree"]);
    status.register_com(Box::new(IfcUnlaceRegionBlocks), &["region", "blocks"]);
    status.register_com(Box::new(IfcUnlaceRegionWalk), &["region", "walk"]);
    // (unlace) Not a C++ command: the function-boundary override the `unlace` binary
    // exposes as `--define-function`.
    status.register_com(Box::new(IfcUnlaceFunctionBounds), &["function", "bounds"]);
    status.register_com(Box::new(IfcUnlaceFunctionSymbol), &["function", "symbol"]);
    status.register_com(
        Box::new(IfcUnlaceFunctionNoReturn),
        &["function", "noreturn"],
    );
    status.register_com(
        Box::new(IfcUnlaceFunctionContaining),
        &["function", "containing"],
    );
    // (unlace) Not a C++ command either: `parse line extern` binds a prototype by
    // the name in the declaration, which is the wrong key for an override that
    // exists because the function has no name worth keeping.
    status.register_com(Box::new(IfcUnlaceMapPrototype), &["map", "prototype"]);
    // (unlace) Nor is this one: the bytes a packer writes over itself exist only
    // once it has run, so there is no image a loader could read them from.
    status.register_com(
        Box::new(crate::ifacedecomp::IfcOverrideBytes),
        &["override", "bytes"],
    );
    // (unlace) Nor this: where an indirect call goes is the reader's knowledge.
    status.register_com(
        Box::new(crate::ifacedecomp::IfcOverrideIndirect),
        &["override", "indirect"],
    );
}

/// Join tokens with single spaces — C++ `joinTokens(tokens,0,tokens.size())`.
fn join_tokens(tokens: &[String]) -> String {
    tokens.join(" ")
}

#[cfg(test)]
mod tests;
