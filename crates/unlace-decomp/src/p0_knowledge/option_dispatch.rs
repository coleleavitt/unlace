//! Named unlace option handlers and the allowlist used by every frontend.
//!
//! Each declaration defines both the dispatch arm and its registered name.
//! Catalog metadata remains in phases.toml and is checked against this list.

use unlace_base::error::{UnlaceError, UnlaceResult};
use unlace_base::types::uint4;

use crate::architecture::Architecture;
use crate::options::on_or_off;
use crate::printc::ArchPrintExt;

macro_rules! unlace_options {
    ($this:ident, $value:ident; $($name:literal => $apply:expr_2021),* $(,)?) => {
        pub const UNLACE_OPTION_NAMES: &[&str] = &[$($name),*];

        /// The driver's option dispatch on [`Architecture`]; middle code reaches it through
        /// `Architecture::set_unlace_option` and the `set_unlace_option` pass hook.
        pub(crate) trait UnlaceOptionDispatch {
            fn dispatch_unlace_option(&mut self, name: &str, value: &str) -> UnlaceResult<String>;
        }

        impl UnlaceOptionDispatch for Architecture {
            /// Validate and apply a named unlace option to its live configuration.
            fn dispatch_unlace_option(&mut $this, name: &str, $value: &str) -> UnlaceResult<String> {
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
                            <$option as crate::optionset::UnlaceOption>::parse($value)?;
                        $this.unlace_options.set(val);
                        Ok(msg)
                    }};
                }
                match name {
                    $($name => $apply,)*
                    other => Err(UnlaceError::parse(format!("Unknown unlace option: {other}"))),
                }
            }
        }
    };
}

/// The `set_unlace_option` pass hook: the dispatch below.
fn set_unlace_option(arch: &mut Architecture, name: &str, value: &str) -> UnlaceResult<String> {
    arch.dispatch_unlace_option(name, value)
}

/// Fill this module's hooks ([`crate::passhooks`]).
pub fn provide(hooks: &mut crate::passhooks::UnlaceHookSlots) {
    hooks.set_unlace_option = Some(set_unlace_option);
}

unlace_options! { self, p1;
    "outlang" => {
        self.set_print_language_checked(p1)?;
        Ok(format!("Output language set to {}", self.print().get_name()))
    },
    "compareform" => registered!(crate::compareform::PresentLessequal),
    "wrapadd" => registered!(crate::widenedadd::WrapAdd),
    "armconstshift" => registered!(crate::armconstantshift::ConstShiftMode),
    "armshiftguard" => registered!(crate::armregistershift::ArmShiftGuard),
    "rustarrayzero" => registered!(crate::rustarrayzero::RustArrayZero),
    "arraynotation" => {
        let (val, msg) = crate::arraynotation::OptionArrayNotation.apply(p1)?;
        self.print_mut().options.set_array_notation(val);
        Ok(msg)
    },
    "truthycond" => {
        let (val, msg) = crate::truthycond::OptionTruthyCond.apply(p1)?;
        self.print_mut().options.set_truthy_cond(val);
        Ok(msg)
    },
    "braceelide" => {
        let (val, msg) = crate::braceelide::OptionBraceElide.apply(p1)?;
        self.print_mut().options.set_brace_elide(val);
        Ok(msg)
    },
    "infloopstyle" => {
        let (top, msg) = crate::infloopstyle::parse_inf_loop_style(p1)?;
        self.print_mut().options.inf_loop_top = top;
        Ok(msg)
    },
    "warnstyle" => {
        let (val, msg) = crate::warnstyle::OptionWarnStyle.apply(p1)?;
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
        let (val, msg) = crate::structdefs::OptionStructDefs.apply(p1)?;
        self.print_mut().options.set_struct_defs(val);
        Ok(msg)
    },
    "globalref" => {
        let (val, msg) = crate::globalref::OptionGlobalRef.apply(p1)?;
        self.print_mut().options.set_global_ref(val);
        Ok(msg)
    },
    "returnpair" => registered!(crate::returnpair::ReturnSingle),
    "retpairpaths" => registered!(crate::returnuncomputed::RetPairPaths),
    "bitidioms" => registered!(crate::bitidioms::BitIdioms),
    "satmul" => registered!(crate::satmul::SatMul),
    "bitfieldarith" => registered!(crate::bitfieldarith::BitFieldArith),
    "helperroles" => registered!(crate::helperrole::HelperRoles),
    "dynalloca" => registered!(crate::dynalloca::DynAlloca),
    "vaarg" => registered!(crate::vaarg::VaArg),
    "vaargconst" => registered!(crate::vaargconst::VaArgConst),
    "indexrescale" => registered!(crate::indexrescale::IndexRescale),
    "looprotate" => registered!(crate::looprotate::LoopRotate),
    "guardedloop" => registered!(crate::coreoptions::GuardedLoop),
    "loweredswitchbits" => registered!(crate::loweredswitchbits::LoweredSwitchBits),
    "vastart" => registered!(crate::vastart::VaStartRewrite),
    "switchguardmerge" => registered!(crate::switchguardmerge::SwitchGuardMerge),
    "returnbranch" => registered!(crate::returnbranch::ReturnBranch),
    "globalarrayanchor" => registered!(crate::globalarrayanchor::GlobalArrayAnchor),
    "opaquepredicate" => registered!(crate::coreoptions::OpaquePredicate),
    "callresultuse" => registered!(crate::callresultuse::CallResultUse),
    "signedness" => registered!(crate::typeround::SignPolicy),
    "retsplitglobal" => registered!(crate::coreoptions::RetSplitGlobal),
    "retsplitlimit" => registered!(crate::retsplitlimit::RetSplitLimit),
    "v850indirectbranch" => registered!(crate::v850indbranch::V850IndirectBranch),
    "ptrauthtrap" => registered!(crate::coreoptions::PtrauthTrap),
    "relronoreturn" => registered!(crate::decompile_drive::RelroNoreturn),
    "guarddispatch" => registered!(crate::guarddispatch::GuardDispatch),
    "outlinedinline" => registered!(crate::flow::OutlinedInline),
    "calleeretpurge" => registered!(crate::calleeretpurge::CalleeRetPurge),
    "stackexitanchor" => registered!(crate::stackexitanchor::StackExitAnchor),
    "fdeflowbound" => registered!(crate::flow::FdeFlowBound),
    "int3pad" => registered!(crate::int3pad::Int3PadMode),
    "antidebug" => registered!(crate::antidebug::AntiDebugMode),
    "x64syscall" => registered!(crate::x64syscall::X64SyscallMode),
    "fpuemu" => {
        let msg = registered!(crate::fpuemu::FpuEmuMode);
        crate::fpuemu::apply(self);
        msg
    },
    "mzdgroup" => {
        let msg = registered!(crate::coreoptions::MzDgroupOn);
        crate::mzdgroup::apply(self);
        msg
    },
    "syscallregs" => registered!(crate::syscallregs::SyscallRegsMode),
    "pebnames" => registered!(crate::pebnames::PebNamesMode),
    "structsynth" => registered!(crate::structsynth::StructSynthMode),
    "structmerge" => registered!(crate::structmerge::StructMergeMode),
    "structheadless" => registered!(crate::structheadless::StructHeadlessMode),
    "fieldtype" => registered!(crate::coreoptions::FieldType),
    "chkstkdarwin" => registered!(crate::coreoptions::ChkstkDarwin),
    "spsolve" => registered!(crate::coreoptions::SpSolve),

    "arithhelpers" => registered!(crate::arithhelpers::ArithHelpers),
    "aeabifloat" => registered!(crate::aeabifloat::AeabiFloat),
    "objcarc" => registered!(crate::objcarc::ObjcArc),
    "objcrettype" => registered!(crate::objcrettype::ObjcRettype),
    "objcresolve" => registered!(crate::objcrettype::ObjcResolve),
    "typevote" => registered!(crate::typevote::TypeVote),
    "oslog" => registered!(crate::oslog::OsLogArgs),
    "tailcalljump" => registered!(crate::tailcalljump::TailCallJump),
    "tailcallframe" => registered!(crate::tailcallframe::TailCallFrame),
    "funcboundflow" => registered!(crate::decompile_drive::FuncboundFlow),
    "overlapbranch" => registered!(crate::overlapbranch::OverlapBranch),
    "cleanupcode" => registered!(crate::cleanupcode::RemoveCleanupCode),
    "armhoist" => registered!(crate::armhoist::ArmHoist),
    "evmcalls" => registered!(crate::evmcalls::EvmCalls),
    "linuxsyscall" => registered!(crate::linuxsyscall::LinuxSyscallMode),
    "msvcstrappend" => registered!(crate::msvcstrappend::MsvcStrAppend),
    "switchselector" => registered!(crate::loweredswitch::SwitchSelectorGuard),
    "stackaddrargtrial" => registered!(crate::stackaddrargtrial::StackAddrArgTrial),
    "calleefilledarg" => registered!(crate::calleefilledarg::CalleeFilledArg),
    "callwide" => {
        let (enabled, msg) = <crate::callwide::CallWide as crate::optionset::UnlaceOption>::parse(p1)?;
        self.unlace_tables.get_mut::<crate::callwide::ProofSlot>().clear();
        self.unlace_options.set(enabled);
        Ok(msg)
    },
    "bejoin" => {
        let (mode, msg) = crate::bejoin::BeJoinMode::parse(p1)?;
        self.unlace_tables.get_mut::<crate::callwide::ProofSlot>().clear();
        self.unlace_options.set(mode);
        Ok(msg)
    },
    "octeoneffects" => registered!(crate::octeoneffects::OcteonEffectsMode),
    "bejoinpass" => {
        let (mode, msg) = crate::bejoinpass::BeJoinPassMode::parse(p1)?;
        if mode != self.unlace_options.get::<crate::bejoinpass::BeJoinPassMode>() {
            self.unlace_tables.get_mut::<crate::bejoin::WideCache>().forget_verdicts();
        }
        self.unlace_options.set(mode);
        Ok(msg)
    },
    "rustabi" => registered!(crate::rustabi::RustAbiMode),
    "fatstr" => registered!(crate::fatstr::FatStrMode),
    "swiftstr" => registered!(crate::swiftstr::SwiftStr),
    "gobool" => registered!(crate::gobool::GoBoolMode),
    "gonewtype" => registered!(crate::gonewtype::GoNewType),
    "rustprobestack" => registered!(crate::rustprobestack::RustProbestackMode),
    "gomorestack" => registered!(crate::gomorestack::GoMorestackMode),
    "goabi" => {
        let (on, msg) = <crate::goabi::GoAbi as crate::optionset::UnlaceOption>::parse(p1)?;
        self.load_options_mut().goabi = on.0;
        self.unlace_options.set(on);
        Ok(msg)
    },
    "gowritebarrier" => registered!(crate::gowritebarrier::GoWriteBarrierMode),
    "sourcelang" => {
        let (forced, msg) = <crate::sourcelang::SourceLangForced as crate::optionset::UnlaceOption>::parse(p1)?;
        self.load_options_mut().sourcelang = forced.0;
        self.unlace_options.set(forced);
        Ok(msg)
    },
    "sparcstructret" => registered!(crate::sparcstructret::SparcStructReturn),
    "arraystride" => registered!(crate::arraystride::RecoverArrayStride),
    "stackalias" => registered!(crate::heritage::StackAliasDeadstore),
    "readonlycalls" => registered!(crate::heritage::ReadonlyCalls),
    "persistcalls" => registered!(crate::heritage::PersistCalls),
    "stackviews" => registered!(crate::coreoptions::StackViews),
    "memsetrecover" => registered!(crate::memsetsequence::MemsetRecover),
    "rodatastring" => registered!(crate::rodatastring::RodataString),
    "switchmodbound" => registered!(crate::jumptable::SwitchModuloBound),
    "switchextent" => registered!(crate::jumptable::SwitchExtent),
    "honestgaps" => registered!(crate::honestgaps::HonestGaps),
    "constselectjump" => registered!(crate::constselectjump::ConstSelectMode),
    "rawswitch" => registered!(crate::rawswitch::RawSwitch),
    "jumptablework" => registered!(crate::jumptablework::JumpTableWork),
    "switchguardbound" => registered!(crate::jumptable::SwitchGuardBound),
    "highsliceguard" => registered!(crate::jumptable::HighsliceGuard),
    "switchsharedcase" => registered!(crate::jumptable::SwitchSharedCase),
    "switchmultipred" => registered!(crate::jumptable::SwitchMultiPred),
    "switchtrim" => registered!(crate::jumptable::SwitchTrim),
    "unrolledguard" => registered!(crate::flow::UnrolledGuard),
    "jtsharepartial" => registered!(crate::funcdata_block::JumptableSharePartial),
    "deadcascade" => registered!(crate::coreoptions::DeadCascade),
    "loweredswitch" => registered!(crate::loweredswitch::LoweredSwitchMode),
    "nulterminator" => registered!(crate::nulterminator::NulTerminator),
    "endptrbound" => registered!(crate::endptrbound::EndPtrBound),
    "castobject" => registered!(crate::castobject::CastObject),
    "calleeargs" => registered!(crate::calleestackargs::UnlaceCalleeargs),
    "calleeargsmsvc" => registered!(crate::calleestackargs::UnlaceCalleeargsMsvc),
    "argclobber" => registered!(crate::argclobber::ArgClobber),
    "armfloatargs" => registered!(crate::armfloatargs::ArmFloatArgs),
    "narrowargs" => registered!(crate::narrowargs::NarrowArgs),
    "regnarrow" => registered!(crate::regnarrow::NarrowLocals),
    "pairparam" => registered!(crate::borrowcompare::PairParams),
    "pairbranch" => registered!(crate::borrowcompare::PairBranch),
    "armpairparam" => registered!(crate::armpairparam::ArmPairParams),
    "retindexuse" => registered!(crate::retindexuse::RetIndexUse),
    "carryuse" => registered!(crate::carryuse::CarryUse),
    "narrowret" => registered!(crate::narrowret::NarrowRet),
    "regsigned" => registered!(crate::regnarrow::NarrowSigned),
    "narrowext" => {
        let (mode, msg) = <crate::narrowext::NarrowExtMode as crate::optionset::UnlaceOption>::parse(p1)?;
        if mode != self.unlace_options.get::<crate::narrowext::NarrowExtMode>() {
            self.unlace_tables.get_mut::<crate::callwide::ProofSlot>().clear();
        }
        self.unlace_options.set(mode);
        Ok(msg)
    },
    "armfloatreturn" => registered!(crate::armfloatreturn::ArmFloatReturn),
    "passthrough" => registered!(crate::passthrough::PassThrough),
    "mixedtailret" => registered!(crate::mixedtailret::MixedTailRet),
    "cachereturn" => registered!(crate::cachereturn::CacheReturn),
    "varargsharedfloat" => registered!(crate::varargsharedfloat::VarargSharedFloat),
    "calloverlap" => registered!(crate::calloverlap::CallOverlap),
    "spillargtrial" => registered!(crate::spillargtrial::SpillArgTrial),
    "indexaliasguard" => registered!(crate::indexaliasguard::IndexAliasGuard),
    "callarrayextent" => registered!(crate::callarrayextent::CallArrayExtent),
    "stackstruct" => registered!(crate::stackstruct::StackStruct),
    "arrayextent" => registered!(crate::arrayextent::ArrayExtent),
    "arraysize" => registered!(crate::arraysize::ArraySize),
    "devectorize" => registered!(crate::devectorize::DevectorizeReduction),
    "strlenscan" => registered!(crate::strlenscan::StrlenScan),
    "repstring" => registered!(crate::repstring::RepString),
    "atomics" => registered!(crate::atomicops::Atomics),
    "llscfold" => registered!(crate::atomicops::LlscFold),
    "copyrun" => registered!(crate::copyrun::CopyRun),
    "regionstructure" => registered!(crate::region_structurer::RegionStructure),
    "guardarm" => registered!(crate::ifnoexit::GuardArm),
    "loopcondhoist" => registered!(crate::ifnoexit::LoopCondHoist),
    "loopcontinue" => registered!(crate::loopcontinue::LoopContinue),
    "postinc" => registered!(crate::coreoptions::PostIncrement),
    "containerof" => registered!(crate::containerof::ContainerOf),
    "regionlooprefine" => registered!(crate::region_structurer::RegionLoopRefine),
    "regionedgeorder" => registered!(crate::region_structurer::RegionEdgeOrder),
    "outline" => registered!(crate::outline::OutlineOption),
    "condfold" => registered!(crate::condfold::CondFold),
    "orchainbool" => registered!(crate::orchainbool::OrchainBool),
    "orchainlive" => registered!(crate::orchain::OrchainLive),
    "implweight" => registered!(crate::coreaction_cleanup::ImplWeight),
    "condstmts" => registered!(crate::condstmts::CondStmts),
    "gotoreduce" => registered!(crate::gotoreduce::GotoReduceMode),
    "ifelseflatten" => registered!(crate::ifelseflatten::FlattenIfelse),
    "crossjumprevert" => registered!(crate::crossjumpreverter::RevertCrossJumps),
    "dedupitetail" => registered!(crate::dedupitetail::DedupIteTail),
    "iteregion" => registered!(crate::iteregion::Iteregion),
    "iteexpr" => registered!(crate::iteregion::Iteexpr),
    "iteboolean" => registered!(crate::iteboolean::Iteboolean),
    "paramcopyhoist" => registered!(crate::paramcopyhoist::ParamCopyHoist),
    "returndup" => registered!(crate::returndup::ReturnDup),
    "rettriangle" => registered!(crate::coreoptions::RetTriangle),
    "earlyreturn" => registered!(crate::earlyreturn::EarlyReturn),
    "switchreturn" => registered!(crate::switchreturn::SwitchReturn),
    "irreduciblesplit" => registered!(crate::irreducible_split::IrreducibleSplit),
    "foldcallret" => registered!(crate::callretfold::FoldCallReturns),
    "indirectonly" => registered!(crate::indirectonly::MarkIndirectOnly),
    "typemerge" => registered!(crate::typemerge::TypeMergeMode),
    "phiarm" => registered!(crate::phiarm::PhiArmSplit),
    "calleesaved" => registered!(crate::calleesaved::CalleeSavedSplit),
    "impliedrefs" => {
        let (val, msg) = crate::impliedrefs::OptionImpliedRefs.apply(p1)?;
        self.max_implied_ref = val;
        Ok(msg)
    },
    "termdup" => {
        let (val, msg) = crate::impliedrefs::OptionTermDup.apply(p1)?;
        self.max_term_duplication = val;
        Ok(msg)
    },
    "jumptablemax" => {
        let field = p1.trim();
        let val = field
            .parse::<uint4>()
            .ok()
            .filter(|&v| v > 0 && field.bytes().all(|b| b.is_ascii_digit()))
            .ok_or_else(|| UnlaceError::parse("Must specify integer maximum"))?;
        self.max_jumptable_size = val;
        Ok(format!("Maximum jumptable size set to {val}"))
    },
    "stackguard" => registered!(crate::stackguard::StripStackGuard),
    "canaryglobal" => registered!(crate::stackguard::CanaryGlobal),
    "msvcstackguard" => {
        registered!(crate::msvcstackguard::StripMsvcStackGuard)
    },
    "gobounds" => registered!(crate::gobounds::GoBounds),
    "rustfmt" => registered!(crate::rustfmt::RustFmtMode),
    "securitycheck" => {
        registered!(crate::securitycheck::StripSecurityCheck)
    },
    "branchflip" => registered!(crate::blockaction::BranchFlip),
    "loopbreak_recovery" => registered!(crate::loopbreak_recovery::RecoverLoopBreak),
    "namestyle" => registered!(crate::coreoptions::NameStyleAngr),
    "realtypes" => registered!(crate::printc::Realtypes),
    "ctypes" => registered!(crate::coreoptions::CTypes),
    "callmechanisms" => registered!(crate::callmechanisms::CallMechanismMode),
    "dexmodel" => registered!(crate::coreoptions::DexModel),
    "jumpassist" => registered!(crate::coreoptions::JumpAssist),
    "javanew" => registered!(crate::javanew::JavaNew),
    "javatry" => registered!(crate::coreoptions::JavaTry),
    "javasync" => registered!(crate::javasync::JavaSync),
    "voidtailreturn" => registered!(crate::printc::Voidtailreturn),
    "dirtypool" => registered!(crate::action::DirtyPool),
    "latecse" => registered!(crate::latecse::LateCse),
    "phithread" => registered!(crate::phithread::PhiThread),
    "gotosink" => registered!(crate::gotosink::GotoSink),
    "gotochain" => registered!(crate::gotochain::GotoChain),
    "cmpmerge" => registered!(crate::cmpmerge::CmpMerge),
    "switchmerge" => registered!(crate::switchmerge::Switchmerge),
    "gotonext" => registered!(crate::funcdata_block::GotoNext),
    "importdata" => registered!(crate::printc::ImportData),
    "rangefold" => registered!(crate::rangefold::RangeFold),
    "addrcompare" => registered!(crate::addrcompare::AddrCompare),
    "pow2select" => registered!(crate::selectdiv::Pow2Select),
    "satconvert" => registered!(crate::satconvert::SatConvert),
    "sfofxor" => registered!(crate::sfofxor::SfOfXor),
    "fpargboxed" => registered!(crate::boxedcompare::FpArgBoxed),
    "castimplied" => registered!(crate::castimplied::CastImplied),
    "castsign" => registered!(crate::castsign::CastSign),
    "castternary" => registered!(crate::castternary::CastTernary),
    "callrettype" => registered!(crate::callrettype::CallRetType),
    "castnarrow" => registered!(crate::castnarrow::CastNarrow),
    "structassign" => registered!(crate::structassign::StructAssign),
    "libcnames" => registered!(crate::libcnames::LibcNames),
    "contextnames" => registered!(crate::contextnames::ContextNames),
    "flownames" => registered!(crate::flownames::FlowNames),
    "declorder" => registered!(crate::declorder::DeclOrder),
    "cppshortnames" => registered!(crate::cppshortnames::CppShortNames),
    "castwiden" => registered!(crate::castwiden::CastWidenMode),
    "ptrdepthcap" => registered!(crate::coreaction_infertypes::Ptrdepthcap),
    "calltargettype" => registered!(crate::coreoptions::CallTargetType),
    "floatglobals" => registered!(crate::coreoptions::FloatGlobalsOn),
    "itaniumeh" => registered!(crate::itaniumeh::ItaniumEh),
    "vexzeroupper" => registered!(crate::coreoptions::VexZeroUpper),
    "vectorabi" => registered!(crate::coreoptions::VectorAbi),
    "neonintrin" => registered!(crate::neonintrin::NeonIntrin),
    "lanefuse" => registered!(crate::coreoptions::LaneFuse),
    "strcodelen" => registered!(crate::analysisgates::Strcodelen),
    "mba" => registered!(crate::mba::Mba),
    "egraph" => registered!(crate::egraph::Egraph),
    "mbawide" => registered!(crate::mba::MbaWide),
    "pairlocal" => registered!(crate::pairphi::PairLocal),
    "spphistack" => registered!(crate::spphistack::SpPhiStack),
    "avxintrinsics" => registered!(crate::printc::AvxIntrinsics),
    "x87depth" => registered!(crate::x87depth::X87Depth),
    "trapaftercall" => registered!(crate::coreoptions::TrapAfterCall),
    "retpolinethunk" => registered!(crate::retpolinethunk::RetpolineThunk),
    "varargsave" => registered!(crate::varargsave::VarargSave),
    "taintcheck" => registered!(crate::taintcheck::TaintCheck),
    "alloca" => registered!(crate::alloca::AllocaCalls),
    "boolbyte" => registered!(crate::boolbyte::BoolByte),
    "charbyte" => registered!(crate::charbyte::CharByte),
    "castarith" => registered!(crate::coreoptions::CastArith),
    "castindex" => registered!(crate::coreoptions::CastIndex),
    "ptrfromuse" => registered!(crate::ptrfromuse::PtrFromUseMode),
    "ptrfromlocal" => registered!(crate::ptrfromuse::PtrFromLocal),
    "charptr" => registered!(crate::charptr::CharPtr),
    "cstringconst" => registered!(crate::cstringconst::CstringConst),
    "stringglobalnames" => registered!(crate::stringglobalnames::StringGlobalNames),
    "charnum" => registered!(crate::charnum::CharNum),
    "partmacro" => registered!(crate::partmacro::PartMacro),
    "constright" => registered!(crate::constright::ConstRight),
    "signeddec" => registered!(crate::signeddec::SignedDec),
    "wideconst" => registered!(crate::wideconst::WideConst),
    "evmstorage" => registered!(crate::evmstorage::EvmStorage),
    "selectmul" => registered!(crate::selectmul::SelectMul),
    "elemptr" => registered!(crate::elemptr::ElemPtr),
    "protoorder" => registered!(crate::protoorder::ProtoOrderMode),
    "calleevote" => registered!(crate::calleevote::CalleeVoteMode),
    "callerptr" => registered!(crate::callerptr::CallerPtr),
    "calleereginputs" => registered!(crate::calleereginputs::CalleeRegInputs),

    "storetype" => registered!(crate::storetype::StoreTypeMode),
    "callbacktype" => registered!(crate::callbacktype::CallbackTypeMode),
    "cortexmpriv" => registered!(crate::cortexmpriv::Cortexmpriv),
    "acleintrinsics" => registered!(crate::memtag::AcleIntrinsics),
    "barrierintrinsics" => registered!(crate::printc::BarrierIntrinsics),
    "dedupvardecls" => registered!(crate::dedupvardecls::DedupVarDecls),
    "renumberlocals" => registered!(crate::renumberlocals::RenumberLocals),
    "noreturn_known" => registered!(crate::analysisgates::NoreturnKnown),
    "libgccsigs" => registered!(crate::analysisgates::Libgccsigs),
    "movwpairs" => registered!(crate::analysisgates::MovwPairs),
    "gotypeglobals" => registered!(crate::analysisgates::GoTypeGlobals),

    "arm64evcall" => registered!(crate::analysisgates::Arm64evcall),
    "libctypes" => {
        let (layout, msg) = <crate::libctypes::LibcTypesLayout as crate::optionset::UnlaceOption>::parse(p1)?;
        self.load_options_mut().libctypes = layout;
        self.unlace_options.set(layout);
        Ok(msg)
    },
    "tlsnames" => registered!(crate::tlsnames::Tlsnames),
    "uefi" => registered!(crate::analysisgates::Uefi),
    "cortexmscs" => registered!(crate::analysisgates::Cortexmscs),
    "uefientry" => registered!(crate::analysisgates::Uefientry),
    "com" => registered!(crate::analysisgates::Com),
    "comcfg" => registered!(crate::comcfg::ComCfg),
    "strings" => registered!(crate::analysisgates::Strings),
    "widestrings" => {
        registered!(crate::analysisgates::Widestrings)
    },
    "widestrings32" => {
        registered!(crate::analysisgates::Widestrings32)
    },
    "entry_disc" => registered!(crate::analysisgates::EntryDisc),
    "x86listingswitch" => {
        registered!(crate::analysisgates::X86listingswitch)
    },
    "addrtakenentry" => {
        registered!(crate::analysisgates::Addrtakenentry)
    },
    "flowmode" => registered!(crate::analysisgates::FlowMode),
    "elfmain" => {
        registered!(crate::analysisgates::Elfmain)
    },
    "eh_frame_full" => {
        registered!(crate::analysisgates::EhFrameFull)
    },
    "unwindstarts" => {
        registered!(crate::analysisgates::Unwindstarts)
    },
    "flirttil" => {
        registered!(crate::analysisgates::FlirtTil)
    },
    "aggressivethunks" => {
        registered!(crate::analysisgates::AggressiveThunks)
    },
    "exporttrie" => {
        let val = on_or_off(p1)?;
        self.load_options_mut().exporttrie = val;
        Ok(format!("Mach-O export-trie naming turned {}", if val { "on" } else { "off" }))
    },
    "machobinds" => registered!(crate::analysisgates::Machobinds),
    "machoehframe" => {
        registered!(crate::analysisgates::Machoehframe)
    },
    "ehcold" => registered!(crate::analysisgates::Ehcold),
    "functails" => registered!(crate::analysisgates::Functails),
    "mfcmsgmap" => registered!(crate::analysisgates::Mfcmsgmap),
    "msvcptrentry" => registered!(crate::analysisgates::Msvcptrentry),
    "importvote" => registered!(crate::importvote::Importvote),
    "ehnote" => registered!(crate::analysisgates::Ehnote),
    "funcstart_patterns" => {
        registered!(crate::analysisgates::FuncstartPatterns)
    },
    "armframes" => registered!(crate::analysisgates::ArmFrames),
    "cortexmvectors" => {
        registered!(crate::analysisgates::Cortexmvectors)
    },
    "ptrentry" => {
        registered!(crate::analysisgates::Ptrentry)
    },
    "poolentry" => {
        registered!(crate::analysisgates::Poolentry)
    },
    "armwalkmode" => registered!(crate::analysisgates::Armwalkmode),
    "ppc32picimports" => {
        let mode = crate::ppc32picimports::Mode::parse(p1)
            .ok_or_else(|| UnlaceError::parse("Expected ppc32picimports off|on|abi"))?;
        self.analysis_ppc32picimports = mode;
        self.load_options_mut().ppc32picimports = mode;
        Ok(format!("PPC32 PIC import recovery {}", mode.as_str()))
    },
    "ppcapu" => {
        let (val, msg) = <crate::ppcapu::PpcApu as crate::optionset::UnlaceOption>::parse(p1)?;
        self.load_options_mut().ppcapu = val.0;
        self.unlace_options.set(val);
        Ok(msg)
    },
    "delphiabi" => {
        let (val, msg) = <crate::delphiabi::DelphiAbi as crate::optionset::UnlaceOption>::parse(p1)?;
        self.load_options_mut().delphiabi = val.0;
        self.unlace_options.set(val);
        Ok(msg)
    },
    "ifuncfpret" => {
        let (val, msg) = <crate::ifuncfpret::IfuncFpRet as crate::optionset::UnlaceOption>::parse(p1)?;
        self.load_options_mut().ifuncfpret = val.0;
        self.unlace_options.set(val);
        Ok(msg)
    },
    "kernelcache" => {
        let (choice, msg) = crate::kernelcache::parse_kernelcache(p1)?;
        self.load_options_mut().kernelcache = choice;
        Ok(msg)
    },
    "kernelcache-boot" => {
        let (choice, msg) = crate::kernelcacheboot::parse_kernelcache_boot(p1)?;
        self.load_options_mut().kernelcache_boot = choice;
        Ok(msg)
    },
    "dyldimage" => {
        self.load_options_mut().dyldimage =
            crate::dyldcache::image_name(p1).map(str::to_string);
        Ok(crate::dyldcache::dyldimage_message(p1))
    },
    "debuglink" => {
        let (val, msg) = <crate::debuglink::DebugLink as crate::optionset::UnlaceOption>::parse(p1)?;
        self.load_options_mut().debuglink = val.0;
        self.unlace_options.set(val);
        Ok(msg)
    },
    "cil" => {
        let msg = crate::cil::cil_message(p1)?;
        self.load_options_mut().cil = crate::options::on_or_off(p1)?;
        Ok(msg)
    },
    "dyldcrossrefs" => {
        let msg = crate::dyldcache::dyldcrossrefs_message(p1)?;
        self.load_options_mut().dyldcrossrefs = crate::options::on_or_off(p1)?;
        Ok(msg)
    },
    "symbolnamechars" => {
        let (mode, msg) = <crate::symbolnamechars::NameChars as crate::optionset::UnlaceOption>::parse(p1)?;
        self.load_options_mut().symbolnamechars = mode;
        self.unlace_options.set(mode);
        Ok(msg)
    },
    "dwarf" => registered!(crate::analysisgates::Dwarf),
    "cvftrace" => registered!(crate::analysisgates::CvfTrace),
    "gopcln" => registered!(crate::analysisgates::GoPcln),
    "dwarf_lines" => {
        registered!(crate::analysisgates::DwarfLines)
    },
    "dwarfnocall" => registered!(crate::analysisgates::Dwarfnocall),
    "godwarfsig" => registered!(crate::analysisgates::Godwarfsig),
    "goitabcalls" => registered!(crate::goitabcalls::GoItabCalls),
    "godefer" => registered!(crate::godefer::GoDefer),
    "nonnullparam" => registered!(crate::nonnullparam::NonNullParam),
    "cppsig" => registered!(crate::cppsig::CppSigMode),
    "cppclassargs" => registered!(crate::cppsig::CppClassArgs),
    "dwarfglobaltypes" => registered!(crate::analysisgates::Dwarfglobaltypes),
    "dwarfdecls" => registered!(crate::analysisgates::Dwarfdecls),
    "dwarfenumtypedef" => {
        let (val, msg) = <crate::analysisgates::DwarfEnumTypedef as crate::optionset::UnlaceOption>::parse(p1)?;
        self.load_options_mut().dwarfenumtypedef = val.0;
        self.unlace_options.set(val);
        Ok(msg)
    },
    "dwarfscopes" => {
        let (val, msg) = <crate::analysisgates::DwarfScopes as crate::optionset::UnlaceOption>::parse(p1)?;
        self.load_options_mut().dwarfscopes = val.0;
        self.unlace_options.set(val);
        Ok(msg)
    },
    "addrtable" => registered!(crate::analysisgates::Addrtable),
    "operand_refs" => registered!(crate::analysisgates::OperandRefs),
    "formatstring" => registered!(crate::formatstring::FormatStringMode),
    "formatcallees" => registered!(crate::analysisgates::FormatCallees),
    "listing" => registered!(crate::analysisgates::Listing),
    "fast_funcdisc" => {
        registered!(crate::analysisgates::FastFuncdisc)
    },
    "lazyfuncs" => registered!(crate::analysisgates::Lazyfuncs),
    "mapglobalsyms" => {
        registered!(crate::mapglobalsyms::Mapglobalsyms)
    },
    "objectview" => {
        registered!(crate::analysisgates::Objectview)
    },
    "noreturn_disc" => {
        registered!(crate::analysisgates::NoreturnDisc)
    },
    "noreturn_propagate" => {
        registered!(crate::analysisgates::NoreturnPropagate)
    },
    "noreturn_reach" => {
        registered!(crate::analysisgates::NoreturnReach)
    },
    "fid" => registered!(crate::analysisgates::Fid),
    "rtti" => registered!(crate::analysisgates::Rtti),
    "msvceh" => registered!(crate::analysisgates::Msvceh),
    "delphi" => registered!(crate::analysisgates::Delphi),
    "itaniumrtti" => {
        registered!(crate::analysisgates::Itaniumrtti)
    },
    "vtabletypes" => registered!(crate::coreoptions::Vtabletypes),
    "aif" => registered!(crate::aif::AifMode),
    "esprom" => registered!(crate::esprom::EspRom),
    "aifpoolslide" => {
        registered!(crate::analysisgates::Aifpoolslide)
    },
    "tailcallentry" => {
        registered!(crate::analysisgates::Tailcallentry)
    },
    "funcchunks" => {
        registered!(crate::analysisgates::Funcchunks)
    },
    "globalwidth" => {
        registered!(crate::analysisgates::Globalwidth)
    },
    "aifdataveto" => {
        registered!(crate::analysisgates::Aifdataveto)
    },
    "swiftcallers" => {
        registered!(crate::analysisgates::Swiftcallers)
    },
    "incrementalwalk" => {
        registered!(crate::analysisgates::Incrementalwalk)
    },

    "tailcallentryall" => {
        registered!(crate::analysisgates::Tailcallentryall)
    },
    "nameladder" => {
        let (val, msg) = <crate::analysisgates::Nameladder as crate::optionset::UnlaceOption>::parse(p1)?;
        self.load_options_mut().nameladder = val.0;
        self.unlace_options.set(val);
        Ok(msg)
    },
    "flirt" => {
        registered!(crate::coreoptions::Flirt)
    },
    "ruststdsigs" => {
        let (val, msg) = <crate::ruststdsigs::RustStdSigs as crate::optionset::UnlaceOption>::parse(p1)?;
        self.load_options_mut().ruststdsigs = val;
        self.unlace_options.set(val);
        Ok(msg)
    },
    "codestrings" => {
        let (val, msg) = <crate::analysisgates::Codestrings as crate::optionset::UnlaceOption>::parse(p1)?;
        self.load_options_mut().codestrings = val.0;
        self.unlace_options.set(val);
        Ok(msg)
    },
    "calltable" => registered!(crate::analysisgates::Calltable),
    "stubbinds" => registered!(crate::analysisgates::Stubbinds),
    "thunknames" => registered!(crate::analysisgates::Thunknames),
    "nullsubs" => registered!(crate::analysisgates::Nullsubs),
    "objc" => registered!(crate::analysisgates::Objc),
    "panicloc" => registered!(crate::analysisgates::Panicloc),
    "swiftmetadata" => registered!(crate::analysisgates::Swiftmetadata),
    "cfstrings" => registered!(crate::analysisgates::CfStrings),
    "blobs" => registered!(crate::analysisgates::Blobs),
    "swifttypes" => {
        let (val, msg) = <crate::analysisgates::Swifttypes as crate::optionset::UnlaceOption>::parse(p1)?;
        self.load_options_mut().swifttypes = val.0;
        self.unlace_options.set(val);
        Ok(msg)
    },
    "swifthelpers" => registered!(crate::analysisgates::Swifthelpers),
    "objcivars" => {
        let (val, msg) = <crate::objcivars::ObjcIvars as crate::optionset::UnlaceOption>::parse(p1)?;
        self.load_options_mut().objcivars = val.0;
        self.unlace_options.set(val);
        Ok(msg)
    },
    "swiftobjcthunk" => registered!(crate::analysisgates::Swiftobjcthunk),
    "valuewitness" => registered!(crate::valuewitness::Valuewitness),
    "objcsdk" => {
        let path = crate::objcsdk::parse_option_value(p1).map_err(UnlaceError::parse)?;
        self.load_options_mut().objcsdk = path.clone();
        Ok(match path {
            Some(p) => format!("Objective-C signatures read from {}", p.display()),
            None => "Objective-C SDK headers off".to_string(),
        })
    },
    "sdktypes" => {
        let path = crate::sdktypes::parse_option_value(p1).map_err(UnlaceError::parse)?;
        Ok(match path {
            Some(p) => format!("SDK C declarations read from {}", p.display()),
            None => "SDK C declarations off".to_string(),
        })
    },
    "iokitclasses" => registered!(crate::analysisgates::IokitClasses),
    "xnutables" => registered!(crate::analysisgates::Xnutables),
    "osclassinfo" => registered!(crate::analysisgates::Osclassinfo),
    "dextrpc" => registered!(crate::analysisgates::Dextrpc),
    "swiftcall" => registered!(crate::swiftcall::Swiftcall),
    "swiftruntime" => registered!(crate::analysisgates::Swiftruntime),
    "typelib" => registered!(crate::typelib::TypeLib),
    "pdb" => registered!(crate::analysisgates::Pdb),
    "pdbtypes" => registered!(crate::analysisgates::Pdbtypes),
    "pdblines" => registered!(crate::analysisgates::Pdblines),
    "boolreturn" => registered!(crate::ctree::Boolreturn),
    "noretfirst" => registered!(crate::ctree::Noretfirst),
    "nestedand" => registered!(crate::ctree::Nestedand),
    "condcallpush" => registered!(crate::condcallpush::CondCallPush),
    "retternary" => registered!(crate::ctree::Retternary),
    "orexit" => registered!(crate::ctree::Orexit),
    "macho-arm64e" => {
        let (val, msg) = <crate::macho_arm64e::MachoArm64e as crate::optionset::UnlaceOption>::parse(p1)?;
        self.load_options_mut().macho_arm64e = val.0;
        self.unlace_options.set(val);
        Ok(msg)
    },
}
