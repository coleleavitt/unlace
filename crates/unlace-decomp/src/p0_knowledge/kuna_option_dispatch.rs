//! Named kuna option handlers and the allowlist used by every frontend.
//!
//! Each declaration defines both the dispatch arm and its registered name.
//! Catalog metadata remains in phases.toml and is checked against this list.

use unlace_base::error::{KunaError, KunaResult};
use unlace_base::types::uint4;

use crate::architecture::Architecture;
use crate::options::on_or_off;
use crate::printc::ArchPrintExt;

macro_rules! kuna_options {
    ($this:ident, $value:ident; $($name:literal => $apply:expr_2021),* $(,)?) => {
        pub const KUNA_OPTION_NAMES: &[&str] = &[$($name),*];

        /// The driver's option dispatch on [`Architecture`]; middle code reaches it through
        /// `Architecture::set_kuna_option` and the `set_kuna_option` pass hook.
        pub(crate) trait KunaOptionDispatch {
            fn dispatch_kuna_option(&mut self, name: &str, value: &str) -> KunaResult<String>;
        }

        impl KunaOptionDispatch for Architecture {
            /// Validate and apply a named kuna option to its live configuration.
            fn dispatch_kuna_option(&mut $this, name: &str, $value: &str) -> KunaResult<String> {
                macro_rules! on_off {
                    ($field:ident, $label:literal) => {{
                        let val = on_or_off($value)?;
                        $this.$field = val;
                        Ok(format!(concat!($label, " turned {}"), if val { "on" } else { "off" }))
                    }};
                }
                macro_rules! registered {
                    ($option:ty) => {{
                        let (val, msg) =
                            <$option as crate::kuna_optionset::KunaOption>::parse($value)?;
                        $this.kuna_options.set(val);
                        Ok(msg)
                    }};
                }
                match name {
                    $($name => $apply,)*
                    other => Err(KunaError::parse(format!("Unknown kuna option: {other}"))),
                }
            }
        }
    };
}

/// The `set_kuna_option` pass hook: the dispatch below.
fn set_kuna_option(arch: &mut Architecture, name: &str, value: &str) -> KunaResult<String> {
    arch.dispatch_kuna_option(name, value)
}

/// Fill this module's hooks ([`crate::kuna_passhooks`]).
pub fn provide(hooks: &mut crate::kuna_passhooks::KunaHookSlots) {
    hooks.set_kuna_option = Some(set_kuna_option);
}

kuna_options! { self, p1;
    "outlang" => {
        self.set_print_language_checked(p1)?;
        Ok(format!("Output language set to {}", self.print().get_name()))
    },
    "compareform" => registered!(crate::kuna_compareform::PresentLessequal),
    "wrapadd" => registered!(crate::kuna_widenedadd::WrapAdd),
    "armconstshift" => registered!(crate::kuna_armconstantshift::ConstShiftMode),
    "armshiftguard" => registered!(crate::kuna_armregistershift::ArmShiftGuard),
    "rustarrayzero" => registered!(crate::kuna_rustarrayzero::RustArrayZero),
    "arraynotation" => {
        let (val, msg) = crate::kuna_arraynotation::OptionArrayNotation.apply(p1)?;
        self.print_mut().options.set_array_notation(val);
        Ok(msg)
    },
    "truthycond" => {
        let (val, msg) = crate::kuna_truthycond::OptionTruthyCond.apply(p1)?;
        self.print_mut().options.set_truthy_cond(val);
        Ok(msg)
    },
    "braceelide" => {
        let (val, msg) = crate::kuna_braceelide::OptionBraceElide.apply(p1)?;
        self.print_mut().options.set_brace_elide(val);
        Ok(msg)
    },
    "infloopstyle" => {
        let (top, msg) = crate::kuna_infloopstyle::parse_inf_loop_style(p1)?;
        self.print_mut().options.inf_loop_top = top;
        Ok(msg)
    },
    "warnstyle" => {
        let (val, msg) = crate::kuna_warnstyle::OptionWarnStyle.apply(p1)?;
        self.print_mut().options.set_warn_inline(val);
        Ok(msg)
    },
    "partialaccess" => {
        let value = on_or_off(p1)?;
        self.print_mut().options.partial_access = value;
        Ok(format!("Typed pointer partial accesses turned {}", if value { "on" } else { "off" }))
    },
    "bytearrayc" => {
        let value = on_or_off(p1)?;
        self.print_mut().options.bytearray_c = value;
        Ok(format!("Standard C byte-array transfers turned {}", if value { "on" } else { "off" }))
    },
    "structdefs" => {
        let (val, msg) = crate::kuna_structdefs::OptionStructDefs.apply(p1)?;
        self.print_mut().options.set_struct_defs(val);
        Ok(msg)
    },
    "globalref" => {
        let (val, msg) = crate::kuna_globalref::OptionGlobalRef.apply(p1)?;
        self.print_mut().options.set_global_ref(val);
        Ok(msg)
    },
    "returnpair" => registered!(crate::kuna_returnpair::ReturnSingle),
    "retpairpaths" => registered!(crate::kuna_returnuncomputed::RetPairPaths),
    "bitidioms" => registered!(crate::kuna_bitidioms::BitIdioms),
    "satmul" => registered!(crate::kuna_satmul::SatMul),
    "helperroles" => registered!(crate::kuna_helperrole::HelperRoles),
    "dynalloca" => registered!(crate::kuna_dynalloca::DynAlloca),
    "vaarg" => registered!(crate::kuna_vaarg::VaArg),
    "indexrescale" => registered!(crate::kuna_indexrescale::IndexRescale),
    "looprotate" => registered!(crate::kuna_looprotate::LoopRotate),
    "guardedloop" => registered!(crate::kuna_coreoptions::GuardedLoop),
    "loweredswitchbits" => registered!(crate::kuna_loweredswitchbits::LoweredSwitchBits),
    "vastart" => registered!(crate::kuna_vastart::VaStartRewrite),
    "switchguardmerge" => registered!(crate::kuna_switchguardmerge::SwitchGuardMerge),
    "returnbranch" => registered!(crate::kuna_returnbranch::ReturnBranch),
    "globalarrayanchor" => registered!(crate::kuna_globalarrayanchor::GlobalArrayAnchor),
    "opaquepredicate" => registered!(crate::kuna_coreoptions::OpaquePredicate),
    "callresultuse" => registered!(crate::kuna_callresultuse::CallResultUse),
    "signedness" => registered!(crate::kuna_typeround::SignPolicy),
    "retsplitglobal" => registered!(crate::kuna_coreoptions::RetSplitGlobal),
    "retsplitlimit" => registered!(crate::kuna_retsplitlimit::RetSplitLimit),
    "v850indirectbranch" => registered!(crate::kuna_v850indbranch::V850IndirectBranch),
    "ptrauthtrap" => registered!(crate::kuna_coreoptions::PtrauthTrap),
    "relronoreturn" => registered!(crate::decompile_drive::RelroNoreturn),
    "guarddispatch" => registered!(crate::kuna_guarddispatch::GuardDispatch),
    "outlinedinline" => registered!(crate::flow::OutlinedInline),
    "calleeretpurge" => registered!(crate::kuna_calleeretpurge::CalleeRetPurge),
    "stackexitanchor" => registered!(crate::kuna_stackexitanchor::StackExitAnchor),
    "fdeflowbound" => registered!(crate::flow::FdeFlowBound),
    "int3pad" => registered!(crate::kuna_int3pad::Int3PadMode),
    "x64syscall" => registered!(crate::kuna_x64syscall::X64SyscallMode),
    "fpuemu" => {
        let msg = registered!(crate::kuna_fpuemu::FpuEmuMode);
        crate::kuna_fpuemu::apply(self);
        msg
    },
    "mzdgroup" => {
        let msg = registered!(crate::kuna_coreoptions::MzDgroupOn);
        crate::kuna_mzdgroup::apply(self);
        msg
    },
    "syscallregs" => registered!(crate::kuna_syscallregs::SyscallRegsMode),
    "pebnames" => registered!(crate::kuna_pebnames::PebNamesMode),
    "structsynth" => registered!(crate::kuna_structsynth::StructSynthMode),
    "structmerge" => registered!(crate::kuna_structmerge::StructMergeMode),
    "structheadless" => registered!(crate::kuna_structheadless::StructHeadlessMode),
    "fieldtype" => registered!(crate::kuna_coreoptions::FieldType),
    "chkstkdarwin" => registered!(crate::kuna_coreoptions::ChkstkDarwin),
    "spsolve" => registered!(crate::kuna_coreoptions::SpSolve),

    "arithhelpers" => registered!(crate::kuna_arithhelpers::ArithHelpers),
    "aeabifloat" => registered!(crate::kuna_aeabifloat::AeabiFloat),
    "objcarc" => registered!(crate::kuna_objcarc::ObjcArc),
    "objcrettype" => registered!(crate::kuna_objcrettype::ObjcRettype),
    "objcresolve" => registered!(crate::kuna_objcrettype::ObjcResolve),
    "typevote" => registered!(crate::kuna_typevote::TypeVote),
    "oslog" => registered!(crate::kuna_oslog::OsLogArgs),
    "tailcalljump" => registered!(crate::kuna_tailcalljump::TailCallJump),
    "tailcallframe" => registered!(crate::kuna_tailcallframe::TailCallFrame),
    "funcboundflow" => registered!(crate::decompile_drive::FuncboundFlow),
    "overlapbranch" => registered!(crate::kuna_overlapbranch::OverlapBranch),
    "cleanupcode" => registered!(crate::kuna_cleanupcode::RemoveCleanupCode),
    "armhoist" => registered!(crate::kuna_armhoist::ArmHoist),
    "evmcalls" => registered!(crate::kuna_evmcalls::EvmCalls),
    "linuxsyscall" => registered!(crate::kuna_linuxsyscall::LinuxSyscallMode),
    "msvcstrappend" => registered!(crate::kuna_msvcstrappend::MsvcStrAppend),
    "switchselector" => registered!(crate::kuna_loweredswitch::SwitchSelectorGuard),
    "stackaddrargtrial" => registered!(crate::kuna_stackaddrargtrial::StackAddrArgTrial),
    "calleefilledarg" => registered!(crate::kuna_calleefilledarg::CalleeFilledArg),
    "callwide" => {
        let (enabled, msg) = <crate::kuna_callwide::CallWide as crate::kuna_optionset::KunaOption>::parse(p1)?;
        self.kuna_tables.get_mut::<crate::kuna_callwide::ProofSlot>().clear();
        self.kuna_options.set(enabled);
        Ok(msg)
    },
    "bejoin" => {
        let (mode, msg) = crate::kuna_bejoin::BeJoinMode::parse(p1)?;
        self.kuna_tables.get_mut::<crate::kuna_callwide::ProofSlot>().clear();
        self.kuna_options.set(mode);
        Ok(msg)
    },
    "octeoneffects" => registered!(crate::kuna_octeoneffects::OcteonEffectsMode),
    "bejoinpass" => {
        let (mode, msg) = crate::kuna_bejoinpass::BeJoinPassMode::parse(p1)?;
        if mode != self.kuna_options.get::<crate::kuna_bejoinpass::BeJoinPassMode>() {
            self.kuna_tables.get_mut::<crate::kuna_bejoin::WideCache>().forget_verdicts();
        }
        self.kuna_options.set(mode);
        Ok(msg)
    },
    "rustabi" => registered!(crate::kuna_rustabi::RustAbiMode),
    "fatstr" => registered!(crate::kuna_fatstr::FatStrMode),
    "swiftstr" => registered!(crate::kuna_swiftstr::SwiftStr),
    "gobool" => registered!(crate::kuna_gobool::GoBoolMode),
    "gonewtype" => registered!(crate::kuna_gonewtype::GoNewType),
    "rustprobestack" => registered!(crate::kuna_rustprobestack::RustProbestackMode),
    "gomorestack" => registered!(crate::kuna_gomorestack::GoMorestackMode),
    "goabi" => {
        let (on, msg) = <crate::kuna_goabi::GoAbi as crate::kuna_optionset::KunaOption>::parse(p1)?;
        self.load_options_mut().goabi = on.0;
        crate::kuna_goabi::set_goabi_env(on.0);
        self.kuna_options.set(on);
        Ok(msg)
    },
    "gowritebarrier" => registered!(crate::kuna_gowritebarrier::GoWriteBarrierMode),
    "sourcelang" => {
        let (forced, msg) = <crate::kuna_sourcelang::SourceLangForced as crate::kuna_optionset::KunaOption>::parse(p1)?;
        self.load_options_mut().sourcelang = forced.0;
        crate::kuna_sourcelang::set_sourcelang_env(forced.0);
        self.kuna_options.set(forced);
        Ok(msg)
    },
    "sparcstructret" => registered!(crate::kuna_sparcstructret::SparcStructReturn),
    "arraystride" => registered!(crate::kuna_arraystride::RecoverArrayStride),
    "stackalias" => registered!(crate::heritage::StackAliasDeadstore),
    "readonlycalls" => registered!(crate::heritage::ReadonlyCalls),
    "persistcalls" => registered!(crate::heritage::PersistCalls),
    "stackviews" => registered!(crate::kuna_coreoptions::StackViews),
    "memsetrecover" => registered!(crate::kuna_memsetsequence::MemsetRecover),
    "rodatastring" => registered!(crate::kuna_rodatastring::RodataString),
    "switchmodbound" => registered!(crate::jumptable::SwitchModuloBound),
    "switchextent" => registered!(crate::jumptable::SwitchExtent),
    "honestgaps" => registered!(crate::kuna_honestgaps::HonestGaps),
    "constselectjump" => registered!(crate::kuna_constselectjump::ConstSelectMode),
    "jumptablework" => registered!(crate::kuna_jumptablework::JumpTableWork),
    "switchguardbound" => registered!(crate::jumptable::SwitchGuardBound),
    "highsliceguard" => registered!(crate::jumptable::HighsliceGuard),
    "switchsharedcase" => registered!(crate::jumptable::SwitchSharedCase),
    "switchmultipred" => registered!(crate::jumptable::SwitchMultiPred),
    "switchtrim" => registered!(crate::jumptable::SwitchTrim),
    "unrolledguard" => registered!(crate::flow::UnrolledGuard),
    "jtsharepartial" => registered!(crate::funcdata_block::JumptableSharePartial),
    "deadcascade" => registered!(crate::kuna_coreoptions::DeadCascade),
    "loweredswitch" => registered!(crate::kuna_loweredswitch::LoweredSwitchMode),
    "nulterminator" => registered!(crate::kuna_nulterminator::NulTerminator),
    "endptrbound" => registered!(crate::kuna_endptrbound::EndPtrBound),
    "castobject" => registered!(crate::kuna_castobject::CastObject),
    "calleeargs" => registered!(crate::kuna_calleestackargs::KunaCalleeargs),
    "calleeargsmsvc" => registered!(crate::kuna_calleestackargs::KunaCalleeargsMsvc),
    "argclobber" => registered!(crate::kuna_argclobber::ArgClobber),
    "armfloatargs" => registered!(crate::kuna_armfloatargs::ArmFloatArgs),
    "narrowargs" => registered!(crate::kuna_narrowargs::NarrowArgs),
    "regnarrow" => registered!(crate::kuna_regnarrow::NarrowLocals),
    "pairparam" => registered!(crate::kuna_borrowcompare::PairParams),
    "pairbranch" => registered!(crate::kuna_borrowcompare::PairBranch),
    "armpairparam" => registered!(crate::kuna_armpairparam::ArmPairParams),
    "retindexuse" => registered!(crate::kuna_retindexuse::RetIndexUse),
    "carryuse" => registered!(crate::kuna_carryuse::CarryUse),
    "narrowret" => registered!(crate::kuna_narrowret::NarrowRet),
    "regsigned" => registered!(crate::kuna_regnarrow::NarrowSigned),
    "narrowext" => {
        let (mode, msg) = <crate::kuna_narrowext::NarrowExtMode as crate::kuna_optionset::KunaOption>::parse(p1)?;
        if mode != self.kuna_options.get::<crate::kuna_narrowext::NarrowExtMode>() {
            self.kuna_tables.get_mut::<crate::kuna_callwide::ProofSlot>().clear();
        }
        self.kuna_options.set(mode);
        Ok(msg)
    },
    "armfloatreturn" => registered!(crate::kuna_armfloatreturn::ArmFloatReturn),
    "passthrough" => registered!(crate::kuna_passthrough::PassThrough),
    "mixedtailret" => registered!(crate::kuna_mixedtailret::MixedTailRet),
    "cachereturn" => registered!(crate::kuna_cachereturn::CacheReturn),
    "varargsharedfloat" => registered!(crate::kuna_varargsharedfloat::VarargSharedFloat),
    "calloverlap" => registered!(crate::kuna_calloverlap::CallOverlap),
    "spillargtrial" => registered!(crate::kuna_spillargtrial::SpillArgTrial),
    "indexaliasguard" => registered!(crate::kuna_indexaliasguard::IndexAliasGuard),
    "callarrayextent" => registered!(crate::kuna_callarrayextent::CallArrayExtent),
    "stackstruct" => registered!(crate::kuna_stackstruct::StackStruct),
    "arrayextent" => registered!(crate::kuna_arrayextent::ArrayExtent),
    "arraysize" => registered!(crate::kuna_arraysize::ArraySize),
    "devectorize" => registered!(crate::kuna_devectorize::DevectorizeReduction),
    "strlenscan" => registered!(crate::kuna_strlenscan::StrlenScan),
    "repstring" => registered!(crate::kuna_repstring::RepString),
    "atomics" => registered!(crate::kuna_atomicops::Atomics),
    "llscfold" => registered!(crate::kuna_atomicops::LlscFold),
    "copyrun" => registered!(crate::kuna_copyrun::CopyRun),
    "regionstructure" => registered!(crate::region_structurer::RegionStructure),
    "guardarm" => registered!(crate::kuna_ifnoexit::GuardArm),
    "loopcondhoist" => registered!(crate::kuna_ifnoexit::LoopCondHoist),
    "loopcontinue" => registered!(crate::kuna_loopcontinue::LoopContinue),
    "postinc" => registered!(crate::kuna_coreoptions::PostIncrement),
    "regionlooprefine" => registered!(crate::region_structurer::RegionLoopRefine),
    "regionedgeorder" => registered!(crate::region_structurer::RegionEdgeOrder),
    "outline" => registered!(crate::kuna_outline::OutlineOption),
    "condfold" => registered!(crate::kuna_condfold::CondFold),
    "orchainbool" => registered!(crate::kuna_orchainbool::OrchainBool),
    "orchainlive" => registered!(crate::kuna_orchain::OrchainLive),
    "implweight" => registered!(crate::coreaction_cleanup::ImplWeight),
    "condstmts" => registered!(crate::kuna_condstmts::CondStmts),
    "gotoreduce" => registered!(crate::kuna_gotoreduce::GotoReduceMode),
    "ifelseflatten" => registered!(crate::kuna_ifelseflatten::FlattenIfelse),
    "crossjumprevert" => registered!(crate::kuna_crossjumpreverter::RevertCrossJumps),
    "dedupitetail" => registered!(crate::kuna_dedupitetail::DedupIteTail),
    "iteregion" => registered!(crate::kuna_iteregion::Iteregion),
    "iteexpr" => registered!(crate::kuna_iteregion::Iteexpr),
    "iteboolean" => registered!(crate::kuna_iteboolean::Iteboolean),
    "paramcopyhoist" => registered!(crate::kuna_paramcopyhoist::ParamCopyHoist),
    "returndup" => registered!(crate::kuna_returndup::ReturnDup),
    "rettriangle" => registered!(crate::kuna_coreoptions::RetTriangle),
    "earlyreturn" => registered!(crate::kuna_earlyreturn::EarlyReturn),
    "switchreturn" => registered!(crate::kuna_switchreturn::SwitchReturn),
    "foldcallret" => registered!(crate::kuna_callretfold::FoldCallReturns),
    "indirectonly" => registered!(crate::kuna_indirectonly::MarkIndirectOnly),
    "typemerge" => registered!(crate::kuna_typemerge::TypeMergeMode),
    "phiarm" => registered!(crate::kuna_phiarm::PhiArmSplit),
    "calleesaved" => registered!(crate::kuna_calleesaved::CalleeSavedSplit),
    "impliedrefs" => {
        let (val, msg) = crate::kuna_impliedrefs::OptionImpliedRefs.apply(p1)?;
        self.max_implied_ref = val;
        Ok(msg)
    },
    "termdup" => {
        let (val, msg) = crate::kuna_impliedrefs::OptionTermDup.apply(p1)?;
        self.max_term_duplication = val;
        Ok(msg)
    },
    "jumptablemax" => {
        let field = p1.trim();
        let val = field
            .parse::<uint4>()
            .ok()
            .filter(|&v| v > 0 && field.bytes().all(|b| b.is_ascii_digit()))
            .ok_or_else(|| KunaError::parse("Must specify integer maximum"))?;
        self.max_jumptable_size = val;
        Ok(format!("Maximum jumptable size set to {val}"))
    },
    "stackguard" => registered!(crate::kuna_stackguard::StripStackGuard),
    "canaryglobal" => registered!(crate::kuna_stackguard::CanaryGlobal),
    "msvcstackguard" => {
        registered!(crate::kuna_msvcstackguard::StripMsvcStackGuard)
    },
    "gobounds" => registered!(crate::kuna_gobounds::GoBounds),
    "rustfmt" => registered!(crate::kuna_rustfmt::RustFmtMode),
    "securitycheck" => {
        registered!(crate::kuna_securitycheck::StripSecurityCheck)
    },
    "branchflip" => registered!(crate::blockaction::BranchFlip),
    "loopbreak_recovery" => registered!(crate::kuna_loopbreak_recovery::RecoverLoopBreak),
    "namestyle" => registered!(crate::kuna_coreoptions::NameStyleAngr),
    "realtypes" => registered!(crate::printc::Realtypes),
    "ctypes" => registered!(crate::kuna_coreoptions::CTypes),
    "callmechanisms" => registered!(crate::kuna_callmechanisms::CallMechanismMode),
    "dexmodel" => registered!(crate::kuna_coreoptions::DexModel),
    "jumpassist" => registered!(crate::kuna_coreoptions::JumpAssist),
    "javanew" => registered!(crate::kuna_javanew::JavaNew),
    "javatry" => registered!(crate::kuna_coreoptions::JavaTry),
    "javasync" => registered!(crate::kuna_javasync::JavaSync),
    "voidtailreturn" => registered!(crate::printc::Voidtailreturn),
    "dirtypool" => registered!(crate::action::DirtyPool),
    "latecse" => registered!(crate::kuna_latecse::LateCse),
    "phithread" => registered!(crate::kuna_phithread::PhiThread),
    "gotosink" => registered!(crate::kuna_gotosink::GotoSink),
    "cmpmerge" => registered!(crate::kuna_cmpmerge::CmpMerge),
    "switchmerge" => registered!(crate::kuna_switchmerge::Switchmerge),
    "gotonext" => registered!(crate::funcdata_block::GotoNext),
    "importdata" => registered!(crate::printc::ImportData),
    "rangefold" => registered!(crate::kuna_rangefold::RangeFold),
    "pow2select" => registered!(crate::kuna_selectdiv::Pow2Select),
    "satconvert" => registered!(crate::kuna_satconvert::SatConvert),
    "fpargboxed" => registered!(crate::kuna_boxedcompare::FpArgBoxed),
    "castimplied" => registered!(crate::kuna_castimplied::CastImplied),
    "castsign" => registered!(crate::kuna_castsign::CastSign),
    "castternary" => registered!(crate::kuna_castternary::CastTernary),
    "callrettype" => registered!(crate::kuna_callrettype::CallRetType),
    "castnarrow" => registered!(crate::kuna_castnarrow::CastNarrow),
    "structassign" => registered!(crate::kuna_structassign::StructAssign),
    "libcnames" => registered!(crate::kuna_libcnames::LibcNames),
    "contextnames" => registered!(crate::kuna_contextnames::ContextNames),
    "flownames" => registered!(crate::kuna_flownames::FlowNames),
    "declorder" => registered!(crate::kuna_declorder::DeclOrder),
    "cppshortnames" => registered!(crate::kuna_cppshortnames::CppShortNames),
    "castwiden" => registered!(crate::kuna_castwiden::CastWidenMode),
    "ptrdepthcap" => registered!(crate::coreaction_infertypes::Ptrdepthcap),
    "calltargettype" => registered!(crate::kuna_coreoptions::CallTargetType),
    "floatglobals" => registered!(crate::kuna_coreoptions::FloatGlobalsOn),
    "itaniumeh" => registered!(crate::kuna_itaniumeh::ItaniumEh),
    "vexzeroupper" => registered!(crate::kuna_coreoptions::VexZeroUpper),
    "vectorabi" => registered!(crate::kuna_coreoptions::VectorAbi),
    "syscallnames" => registered!(crate::kuna_syscallnames::SyscallNames),
    "neonintrin" => registered!(crate::kuna_neonintrin::NeonIntrin),
    "lanefuse" => registered!(crate::kuna_coreoptions::LaneFuse),
    "strcodelen" => registered!(crate::kuna_analysisgates::Strcodelen),
    "mba" => registered!(crate::kuna_mba::Mba),
    "egraph" => registered!(crate::kuna_egraph::Egraph),
    "pairlocal" => registered!(crate::kuna_pairphi::PairLocal),
    "avxintrinsics" => registered!(crate::printc::AvxIntrinsics),
    "x87depth" => registered!(crate::kuna_x87depth::X87Depth),
    "trapaftercall" => registered!(crate::kuna_coreoptions::TrapAfterCall),
    "retpolinethunk" => registered!(crate::kuna_retpolinethunk::RetpolineThunk),
    "varargsave" => registered!(crate::kuna_varargsave::VarargSave),
    "alloca" => registered!(crate::kuna_alloca::AllocaCalls),
    "boolbyte" => registered!(crate::kuna_boolbyte::BoolByte),
    "charbyte" => registered!(crate::kuna_charbyte::CharByte),
    "castarith" => registered!(crate::kuna_coreoptions::CastArith),
    "castindex" => registered!(crate::kuna_coreoptions::CastIndex),
    "ptrfromuse" => registered!(crate::kuna_ptrfromuse::PtrFromUseMode),
    "ptrfromlocal" => registered!(crate::kuna_ptrfromuse::PtrFromLocal),
    "charptr" => registered!(crate::kuna_charptr::CharPtr),
    "cstringconst" => registered!(crate::kuna_cstringconst::CstringConst),
    "charnum" => registered!(crate::kuna_charnum::CharNum),
    "constright" => registered!(crate::kuna_constright::ConstRight),
    "signeddec" => registered!(crate::kuna_signeddec::SignedDec),
    "wideconst" => registered!(crate::kuna_wideconst::WideConst),
    "selectmul" => registered!(crate::kuna_selectmul::SelectMul),
    "elemptr" => registered!(crate::kuna_elemptr::ElemPtr),
    "protoorder" => registered!(crate::kuna_protoorder::ProtoOrderMode),
    "calleevote" => registered!(crate::kuna_calleevote::CalleeVoteMode),
    "callerptr" => registered!(crate::kuna_callerptr::CallerPtr),
    "calleereginputs" => registered!(crate::kuna_calleereginputs::CalleeRegInputs),

    "storetype" => registered!(crate::kuna_storetype::StoreTypeMode),
    "callbacktype" => registered!(crate::kuna_callbacktype::CallbackTypeMode),
    "cortexmpriv" => registered!(crate::kuna_cortexmpriv::Cortexmpriv),
    "acleintrinsics" => registered!(crate::kuna_memtag::AcleIntrinsics),
    "dedupvardecls" => registered!(crate::kuna_dedupvardecls::DedupVarDecls),
    "noreturn_known" => registered!(crate::kuna_analysisgates::NoreturnKnown),
    "libgccsigs" => registered!(crate::kuna_analysisgates::Libgccsigs),
    "movwpairs" => registered!(crate::kuna_analysisgates::MovwPairs),
    "gotypeglobals" => registered!(crate::kuna_analysisgates::GoTypeGlobals),

    "arm64evcall" => registered!(crate::kuna_analysisgates::Arm64evcall),
    "libctypes" => {
        let (layout, msg) = <crate::kuna_libctypes::LibcTypesLayout as crate::kuna_optionset::KunaOption>::parse(p1)?;
        self.load_options_mut().libctypes = layout;
        crate::kuna_libctypes::set_libctypes_env_layout(layout);
        self.kuna_options.set(layout);
        Ok(msg)
    },
    "tlsnames" => registered!(crate::kuna_tlsnames::Tlsnames),
    "uefi" => registered!(crate::kuna_analysisgates::Uefi),
    "cortexmscs" => registered!(crate::kuna_analysisgates::Cortexmscs),
    "com" => registered!(crate::kuna_analysisgates::Com),
    "comcfg" => registered!(crate::kuna_comcfg::ComCfg),
    "strings" => registered!(crate::kuna_analysisgates::Strings),
    "widestrings" => {
        registered!(crate::kuna_analysisgates::Widestrings)
    },
    "widestrings32" => {
        registered!(crate::kuna_analysisgates::Widestrings32)
    },
    "entry_disc" => registered!(crate::kuna_analysisgates::EntryDisc),
    "x86listingswitch" => {
        registered!(crate::kuna_analysisgates::X86listingswitch)
    },
    "addrtakenentry" => {
        registered!(crate::kuna_analysisgates::Addrtakenentry)
    },
    "flowmode" => registered!(crate::kuna_analysisgates::FlowMode),
    "elfmain" => {
        registered!(crate::kuna_analysisgates::Elfmain)
    },
    "eh_frame_full" => {
        registered!(crate::kuna_analysisgates::EhFrameFull)
    },
    "unwindstarts" => {
        registered!(crate::kuna_analysisgates::Unwindstarts)
    },
    "exporttrie" => {
        let val = on_or_off(p1)?;
        crate::kuna_exporttrie::set_exporttrie_env(val);
        Ok(format!("Mach-O export-trie naming turned {}", if val { "on" } else { "off" }))
    },
    "machobinds" => registered!(crate::kuna_analysisgates::Machobinds),
    "machoehframe" => {
        registered!(crate::kuna_analysisgates::Machoehframe)
    },
    "ehcold" => registered!(crate::kuna_analysisgates::Ehcold),
    "functails" => registered!(crate::kuna_analysisgates::Functails),
    "mfcmsgmap" => registered!(crate::kuna_analysisgates::Mfcmsgmap),
    "msvcptrentry" => registered!(crate::kuna_analysisgates::Msvcptrentry),
    "importvote" => registered!(crate::kuna_importvote::Importvote),
    "ehnote" => registered!(crate::kuna_analysisgates::Ehnote),
    "funcstart_patterns" => {
        registered!(crate::kuna_analysisgates::FuncstartPatterns)
    },
    "armframes" => registered!(crate::kuna_analysisgates::ArmFrames),
    "cortexmvectors" => {
        registered!(crate::kuna_analysisgates::Cortexmvectors)
    },
    "ptrentry" => {
        registered!(crate::kuna_analysisgates::Ptrentry)
    },
    "poolentry" => {
        registered!(crate::kuna_analysisgates::Poolentry)
    },
    "armwalkmode" => registered!(crate::kuna_analysisgates::Armwalkmode),
    "ppc32picimports" => {
        let mode = crate::kuna_ppc32picimports::Mode::parse(p1)
            .ok_or_else(|| KunaError::parse("Expected ppc32picimports off|on|abi"))?;
        self.analysis_ppc32picimports = mode;
        self.load_options_mut().ppc32picimports = mode;
        mode.set_env();
        Ok(format!("PPC32 PIC import recovery {}", mode.as_str()))
    },
    "ppcapu" => {
        let (val, msg) = <crate::kuna_ppcapu::PpcApu as crate::kuna_optionset::KunaOption>::parse(p1)?;
        self.load_options_mut().ppcapu = val.0;
        crate::kuna_ppcapu::set_ppcapu_env(val.0);
        self.kuna_options.set(val);
        Ok(msg)
    },
    "delphiabi" => {
        let (val, msg) = <crate::kuna_delphiabi::DelphiAbi as crate::kuna_optionset::KunaOption>::parse(p1)?;
        crate::kuna_delphiabi::set_delphiabi_env(val.0);
        self.kuna_options.set(val);
        Ok(msg)
    },
    "ifuncfpret" => {
        let (val, msg) = <crate::kuna_ifuncfpret::IfuncFpRet as crate::kuna_optionset::KunaOption>::parse(p1)?;
        self.load_options_mut().ifuncfpret = val.0;
        crate::kuna_ifuncfpret::set_ifuncfpret_env(val.0);
        self.kuna_options.set(val);
        Ok(msg)
    },
    "kernelcache" => {
        let (choice, msg) = crate::kuna_kernelcache::parse_kernelcache(p1)?;
        crate::kuna_kernelcache::set_kernelcache_env(&choice);
        self.load_options_mut().kernelcache = choice;
        Ok(msg)
    },
    "kernelcache-boot" => {
        let (choice, msg) = crate::kuna_kernelcacheboot::parse_kernelcache_boot(p1)?;
        crate::kuna_kernelcacheboot::set_kernelcache_boot_env(&choice);
        self.load_options_mut().kernelcache_boot = choice;
        Ok(msg)
    },
    "dyldimage" => {
        self.load_options_mut().dyldimage =
            crate::kuna_dyldcache::image_name(p1).map(str::to_string);
        Ok(crate::kuna_dyldcache::set_dyldimage(p1))
    },
    "debuglink" => {
        let (val, msg) = <crate::kuna_debuglink::DebugLink as crate::kuna_optionset::KunaOption>::parse(p1)?;
        crate::kuna_debuglink::set_debuglink_env(val.0);
        self.kuna_options.set(val);
        Ok(msg)
    },
    "cil" => {
        let msg = crate::kuna_cil::set_cil(p1)?;
        self.load_options_mut().cil = crate::options::on_or_off(p1)?;
        Ok(msg)
    },
    "dyldcrossrefs" => {
        let msg = crate::kuna_dyldcache::set_dyldcrossrefs(p1)?;
        self.load_options_mut().dyldcrossrefs = crate::options::on_or_off(p1)?;
        Ok(msg)
    },
    "symbolnamechars" => {
        let (mode, msg) = <crate::kuna_symbolnamechars::NameChars as crate::kuna_optionset::KunaOption>::parse(p1)?;
        self.load_options_mut().symbolnamechars = mode;
        crate::kuna_symbolnamechars::set_symbolnamechars_env(mode);
        self.kuna_options.set(mode);
        Ok(msg)
    },
    "dwarf" => registered!(crate::kuna_analysisgates::Dwarf),
    "cvftrace" => registered!(crate::kuna_analysisgates::CvfTrace),
    "gopcln" => registered!(crate::kuna_analysisgates::GoPcln),
    "dwarf_lines" => {
        registered!(crate::kuna_analysisgates::DwarfLines)
    },
    "dwarfnocall" => registered!(crate::kuna_analysisgates::Dwarfnocall),
    "godwarfsig" => registered!(crate::kuna_analysisgates::Godwarfsig),
    "goitabcalls" => registered!(crate::kuna_goitabcalls::GoItabCalls),
    "cppsig" => registered!(crate::kuna_cppsig::CppSigMode),
    "dwarfglobaltypes" => registered!(crate::kuna_analysisgates::Dwarfglobaltypes),
    "dwarfdecls" => registered!(crate::kuna_analysisgates::Dwarfdecls),
    "dwarfenumtypedef" => {
        let (val, msg) = <crate::kuna_analysisgates::DwarfEnumTypedef as crate::kuna_optionset::KunaOption>::parse(p1)?;
        // FIXME: Audit that the environment access only happens in single-threaded code.
        unsafe { std::env::set_var("KUNA_DWARFENUMTYPEDEF", if val.0 { "on" } else { "off" }) };
        self.kuna_options.set(val);
        Ok(msg)
    },
    "dwarfscopes" => {
        let (val, msg) = <crate::kuna_analysisgates::DwarfScopes as crate::kuna_optionset::KunaOption>::parse(p1)?;
        // FIXME: Audit that the environment access only happens in single-threaded code.
        unsafe { std::env::set_var("KUNA_DWARFSCOPES", if val.0 { "on" } else { "off" }) };
        self.kuna_options.set(val);
        Ok(msg)
    },
    "addrtable" => registered!(crate::kuna_analysisgates::Addrtable),
    "operand_refs" => registered!(crate::kuna_analysisgates::OperandRefs),
    "formatstring" => registered!(crate::kuna_formatstring::FormatStringMode),
    "formatcallees" => registered!(crate::kuna_analysisgates::FormatCallees),
    "listing" => registered!(crate::kuna_analysisgates::Listing),
    "fast_funcdisc" => {
        registered!(crate::kuna_analysisgates::FastFuncdisc)
    },
    "lazyfuncs" => registered!(crate::kuna_analysisgates::Lazyfuncs),
    "mapglobalsyms" => {
        registered!(crate::kuna_mapglobalsyms::Mapglobalsyms)
    },
    "objectview" => {
        registered!(crate::kuna_analysisgates::Objectview)
    },
    "noreturn_disc" => {
        registered!(crate::kuna_analysisgates::NoreturnDisc)
    },
    "noreturn_propagate" => {
        registered!(crate::kuna_analysisgates::NoreturnPropagate)
    },
    "noreturn_reach" => {
        registered!(crate::kuna_analysisgates::NoreturnReach)
    },
    "fid" => registered!(crate::kuna_analysisgates::Fid),
    "rtti" => registered!(crate::kuna_analysisgates::Rtti),
    "msvceh" => registered!(crate::kuna_analysisgates::Msvceh),
    "delphi" => registered!(crate::kuna_analysisgates::Delphi),
    "itaniumrtti" => {
        registered!(crate::kuna_analysisgates::Itaniumrtti)
    },
    "vtabletypes" => registered!(crate::kuna_coreoptions::Vtabletypes),
    "aif" => registered!(crate::kuna_aif::AifMode),
    "esprom" => registered!(crate::kuna_esprom::EspRom),
    "aifpoolslide" => {
        registered!(crate::kuna_analysisgates::Aifpoolslide)
    },
    "tailcallentry" => {
        registered!(crate::kuna_analysisgates::Tailcallentry)
    },
    "funcchunks" => {
        registered!(crate::kuna_analysisgates::Funcchunks)
    },
    "globalwidth" => {
        registered!(crate::kuna_analysisgates::Globalwidth)
    },
    "aifdataveto" => {
        registered!(crate::kuna_analysisgates::Aifdataveto)
    },
    "incrementalwalk" => {
        registered!(crate::kuna_analysisgates::Incrementalwalk)
    },

    "tailcallentryall" => {
        registered!(crate::kuna_analysisgates::Tailcallentryall)
    },
    "nameladder" => {
        let (val, msg) = <crate::kuna_analysisgates::Nameladder as crate::kuna_optionset::KunaOption>::parse(p1)?;
        self.load_options_mut().nameladder = val.0;
        self.load_options().export_env("nameladder");
        self.kuna_options.set(val);
        Ok(msg)
    },
    "flirt" => {
        registered!(crate::kuna_coreoptions::Flirt)
    },
    "ruststdsigs" => {
        let (val, msg) = <crate::kuna_ruststdsigs::RustStdSigs as crate::kuna_optionset::KunaOption>::parse(p1)?;
        crate::kuna_ruststdsigs::set_ruststdsigs_env(val);
        self.kuna_options.set(val);
        Ok(msg)
    },
    "fidproto" => {
        registered!(crate::kuna_fidproto::Fidproto)
    },
    "codestrings" => {
        let (val, msg) = <crate::kuna_analysisgates::Codestrings as crate::kuna_optionset::KunaOption>::parse(p1)?;
        self.load_options_mut().codestrings = val.0;
        self.load_options().export_env("codestrings");
        self.kuna_options.set(val);
        Ok(msg)
    },
    "protomerge" => {
        registered!(crate::kuna_coreoptions::Protomerge)
    },

    "calltable" => registered!(crate::kuna_analysisgates::Calltable),
    "stubbinds" => registered!(crate::kuna_analysisgates::Stubbinds),
    "thunknames" => registered!(crate::kuna_analysisgates::Thunknames),
    "nullsubs" => registered!(crate::kuna_analysisgates::Nullsubs),
    "objc" => registered!(crate::kuna_analysisgates::Objc),
    "panicloc" => registered!(crate::kuna_analysisgates::Panicloc),
    "swiftmetadata" => registered!(crate::kuna_analysisgates::Swiftmetadata),
    "cfstrings" => registered!(crate::kuna_analysisgates::CfStrings),
    "blobs" => registered!(crate::kuna_analysisgates::Blobs),
    "swifttypes" => {
        let (val, msg) = <crate::kuna_analysisgates::Swifttypes as crate::kuna_optionset::KunaOption>::parse(p1)?;
        self.load_options_mut().swifttypes = val.0;
        self.load_options().export_env("swifttypes");
        self.kuna_options.set(val);
        Ok(msg)
    },
    "swifthelpers" => registered!(crate::kuna_analysisgates::Swifthelpers),
    "objcivars" => {
        let (val, msg) = <crate::kuna_objcivars::ObjcIvars as crate::kuna_optionset::KunaOption>::parse(p1)?;
        self.load_options_mut().objcivars = val.0;
        crate::kuna_objcivars::set_objcivars_env(val.0);
        self.kuna_options.set(val);
        Ok(msg)
    },
    "swiftobjcthunk" => registered!(crate::kuna_analysisgates::Swiftobjcthunk),
    "valuewitness" => registered!(crate::kuna_valuewitness::Valuewitness),
    "objcsdk" => {
        let path = crate::kuna_objcsdk::parse_option_value(p1).map_err(KunaError::parse)?;
        crate::kuna_objcsdk::set_objcsdk_env(path.as_deref().and_then(|p| p.to_str()));
        self.load_options_mut().objcsdk = path.clone();
        Ok(match path {
            Some(p) => format!("Objective-C signatures read from {}", p.display()),
            None => "Objective-C SDK headers off".to_string(),
        })
    },
    "iokitclasses" => registered!(crate::kuna_analysisgates::IokitClasses),
    "xnutables" => registered!(crate::kuna_analysisgates::Xnutables),
    "osclassinfo" => registered!(crate::kuna_analysisgates::Osclassinfo),
    "dextrpc" => registered!(crate::kuna_analysisgates::Dextrpc),
    "swiftcall" => registered!(crate::kuna_swiftcall::Swiftcall),
    "swiftruntime" => registered!(crate::kuna_analysisgates::Swiftruntime),
    "typelib" => registered!(crate::kuna_typelib::TypeLib),
    "pdb" => registered!(crate::kuna_analysisgates::Pdb),
    "pdbtypes" => registered!(crate::kuna_analysisgates::Pdbtypes),
    "pdblines" => registered!(crate::kuna_analysisgates::Pdblines),
    "ctree" => registered!(crate::kuna_ctree::Ctree),
    "boolreturn" => registered!(crate::kuna_ctree::Boolreturn),
    "noretfirst" => registered!(crate::kuna_ctree::Noretfirst),
    "nestedand" => registered!(crate::kuna_ctree::Nestedand),
    "condcallpush" => registered!(crate::kuna_condcallpush::CondCallPush),
    "retternary" => registered!(crate::kuna_ctree::Retternary),
    "orexit" => registered!(crate::kuna_ctree::Orexit),
    "macho-arm64e" => {
        let (val, msg) = <crate::kuna_macho_arm64e::MachoArm64e as crate::kuna_optionset::KunaOption>::parse(p1)?;
        self.load_options_mut().macho_arm64e = val.0;
        crate::kuna_macho_arm64e::set_macho_arm64e_env(val.0);
        self.kuna_options.set(val);
        Ok(msg)
    },
}
