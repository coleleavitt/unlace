//! Named kuna option handlers and the allowlist used by every frontend.
//!
//! Each declaration defines both the dispatch arm and its registered name.
//! Catalog metadata remains in phases.toml and is checked against this list.

use unlace_base::error::{KunaError, KunaResult};
use unlace_base::types::uint4;

use crate::architecture::Architecture;
use crate::options::on_or_off;

macro_rules! kuna_options {
    ($this:ident, $value:ident; $($name:literal => $apply:expr_2021),* $(,)?) => {
        pub const KUNA_OPTION_NAMES: &[&str] = &[$($name),*];

        impl Architecture {
            /// Validate and apply a named kuna option to its live configuration.
            pub fn set_kuna_option(&mut $this, name: &str, $value: &str) -> KunaResult<String> {
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

kuna_options! { self, p1;
    "outlang" => {
        self.set_print_language_checked(p1)?;
        Ok(format!("Output language set to {}", self.print().get_name()))
    },
    "compareform" => {
        let (form, msg) = crate::kuna_compareform::parse_compare_form(p1)?;
        self.present_lessequal = form.present_lessequal();
        Ok(msg)
    },
    "wrapadd" => registered!(crate::kuna_widenedadd::WrapAdd),
    "armconstshift" => registered!(crate::p9_emit::kuna_armconstantshift::ConstShiftMode),
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
    "returnpair" => {
        let (form, msg) = crate::kuna_returnpair::parse_return_pair_form(p1)?;
        self.return_single = form.return_single();
        Ok(msg)
    },
    "bitidioms" => registered!(crate::kuna_bitidioms::BitIdioms),
    "helperroles" => registered!(crate::kuna_helperrole::HelperRoles),
    "dynalloca" => registered!(crate::kuna_dynalloca::DynAlloca),
    "vaarg" => registered!(crate::kuna_vaarg::VaArg),
    "indexrescale" => registered!(crate::kuna_indexrescale::IndexRescale),
    "looprotate" => registered!(crate::kuna_looprotate::LoopRotate),
    "guardedloop" => on_off!(guarded_loop, "Guarded do-while loops printed as while loops"),
    "loweredswitchbits" => registered!(crate::kuna_loweredswitchbits::LoweredSwitchBits),
    "vastart" => registered!(crate::kuna_vastart::VaStartRewrite),
    "switchguardmerge" => registered!(crate::kuna_switchguardmerge::SwitchGuardMerge),
    "returnbranch" => registered!(crate::kuna_returnbranch::ReturnBranch),
    "globalarrayanchor" => registered!(crate::kuna_globalarrayanchor::GlobalArrayAnchor),
    "opaquepredicate" => {
        let (on, globals) = crate::kuna_opaquepredicate::parse_mode(p1)?;
        self.opaque_predicate = on;
        self.opaque_globals = globals;
        Ok(format!("Constant-comparison folding set to {p1}"))
    },
    "callresultuse" => registered!(crate::p4_calls::kuna_callresultuse::CallResultUse),
    "signedness" => registered!(crate::kuna_typeround::SignPolicy),
    "retsplitglobal" => {
        let (val, msg) =
            crate::p8_structure::kuna_retsplitglobal::OptionRetSplitGlobal.apply(p1)?;
        self.ret_split_global = val;
        Ok(msg)
    },
    "retsplitlimit" => registered!(crate::p8_structure::kuna_retsplitlimit::RetSplitLimit),
    "v850indirectbranch" => registered!(crate::kuna_v850indbranch::V850IndirectBranch),
    "ptrauthtrap" => on_off!(ptrauth_trap, "arm64e pointer-auth failure-check removal"),
    "relronoreturn" => registered!(crate::decompile_drive::RelroNoreturn),
    "outlinedinline" => registered!(crate::flow::OutlinedInline),
    "calleeretpurge" => registered!(crate::kuna_calleeretpurge::CalleeRetPurge),
    "stackexitanchor" => registered!(crate::kuna_stackexitanchor::StackExitAnchor),
    "fdeflowbound" => registered!(crate::flow::FdeFlowBound),
    "int3pad" => registered!(crate::kuna_int3pad::Int3PadMode),
    "x64syscall" => registered!(crate::kuna_x64syscall::X64SyscallMode),
    "fpuemu" => {
        let (mode, msg) = crate::kuna_fpuemu::parse_fpuemu_mode(p1).map_err(KunaError::parse)?;
        self.fpu_emu = mode.as_u8();
        crate::kuna_fpuemu::apply(self);
        Ok(msg)
    },
    "mzdgroup" => {
        let msg = on_off!(mz_dgroup_on, "MS-DOS data segment in DS");
        crate::kuna_mzdgroup::apply(self);
        msg
    },
    "syscallregs" => {
        let (mode, msg) = crate::kuna_syscallregs::OptionSyscallRegs.apply(p1)?;
        self.syscall_regs = mode;
        Ok(msg)
    },
    "pebnames" => registered!(crate::kuna_pebnames::PebNamesMode),
    "structsynth" => registered!(crate::kuna_structsynth::StructSynthMode),
    "structmerge" => registered!(crate::kuna_structmerge::StructMergeMode),
    "structheadless" => registered!(crate::kuna_structheadless::StructHeadlessMode),
    "fieldtype" => {
        let (val, msg) = crate::kuna_fieldtype::OptionFieldType.apply(p1)?;
        self.field_type = val;
        Ok(msg)
    },
    "chkstkdarwin" => on_off!(chkstk_darwin, "Darwin stack-probe call removal"),
    "spsolve" => on_off!(sp_solve, "x86-32 stack-pointer delta solve"),

    "arithhelpers" => registered!(crate::kuna_arithhelpers::ArithHelpers),
    "objcarc" => registered!(crate::kuna_objcarc::ObjcArc),
    "objcrettype" => registered!(crate::kuna_objcrettype::ObjcRettype),
    "objcresolve" => registered!(crate::kuna_objcrettype::ObjcResolve),
    "typevote" => registered!(crate::kuna_typevote::TypeVote),
    "oslog" => registered!(crate::kuna_oslog::OsLogArgs),
    "tailcalljump" => {
        let (jumps, tables, msg) = crate::kuna_tailcalljump::tail_call_mode(p1)?;
        self.tail_call_jumps = jumps;
        self.tail_call_tables = tables;
        Ok(msg.to_string())
    },
    "tailcallframe" => registered!(crate::kuna_tailcallframe::TailCallFrame),
    "funcboundflow" => registered!(crate::decompile_drive::FuncboundFlow),
    "overlapbranch" => registered!(crate::kuna_overlapbranch::OverlapBranch),
    "cleanupcode" => registered!(crate::kuna_cleanupcode::RemoveCleanupCode),
    "linuxsyscall" => registered!(crate::kuna_linuxsyscall::LinuxSyscallMode),
    "msvcstrappend" => registered!(crate::kuna_msvcstrappend::MsvcStrAppend),
    "switchselector" => registered!(crate::kuna_loweredswitch::SwitchSelectorGuard),
    "stackaddrargtrial" => registered!(crate::kuna_stackaddrargtrial::StackAddrArgTrial),
    "calleefilledarg" => registered!(crate::kuna_calleefilledarg::CalleeFilledArg),
    "callwide" => {
        let enabled = on_or_off(p1)?;
        self.kuna_callwide.clear();
        self.call_wide = enabled;
        Ok(format!("Caller-proved register-pair returns turned {}", if enabled { "on" } else { "off" }))
    },
    "bejoin" => {
        let (mode, msg) = crate::kuna_bejoin::BeJoinMode::parse(p1)?;
        self.kuna_callwide.clear();
        self.kuna_options.set(mode);
        Ok(msg)
    },
    "octeoneffects" => registered!(crate::kuna_octeoneffects::OcteonEffectsMode),
    "bejoinpass" => {
        let (mode, msg) = crate::kuna_bejoinpass::BeJoinPassMode::parse(p1)?;
        if mode != self.kuna_options.get::<crate::kuna_bejoinpass::BeJoinPassMode>() {
            self.kuna_wide.forget_verdicts();
        }
        self.kuna_options.set(mode);
        Ok(msg)
    },
    "rustabi" => {
        let (mode, msg) = crate::kuna_rustabi::parse_rust_abi_mode(p1)?;
        self.rust_abi = mode.as_u8();
        Ok(msg)
    },
    "fatstr" => {
        let (mode, msg) = crate::kuna_fatstr::parse_fatstr_mode(p1).map_err(KunaError::parse)?;
        self.fat_str = mode.as_u8();
        Ok(msg)
    },
    "swiftstr" => {
        let (mode, msg) = crate::kuna_swiftstr::parse_mode(p1).map_err(KunaError::parse)?;
        self.swift_str = mode.as_u8();
        Ok(msg)
    },
    "gobool" => registered!(crate::kuna_gobool::GoBoolMode),
    "gonewtype" => registered!(crate::kuna_gonewtype::GoNewType),
    "rustprobestack" => registered!(crate::kuna_rustprobestack::RustProbestackMode),
    "gomorestack" => registered!(crate::kuna_gomorestack::GoMorestackMode),
    "goabi" => {
        let on = crate::kuna_goabi::parse_goabi(p1).map_err(KunaError::parse)?;
        self.load_options_mut().goabi = on;
        crate::kuna_goabi::set_goabi_env(on);
        self.analysis_goabi = on;
        Ok(format!("Golang compiler-spec selection turned {}", if on { "auto" } else { "off" }))
    },
    "gowritebarrier" => registered!(crate::kuna_gowritebarrier::GoWriteBarrierMode),
    "sourcelang" => {
        let forced = crate::kuna_sourcelang::parse_option_value(p1).map_err(KunaError::parse)?;
        self.load_options_mut().sourcelang = forced;
        crate::kuna_sourcelang::set_sourcelang_env(forced);
        self.source_lang_forced = forced;
        Ok(match forced {
            Some(lang) => format!("Source language forced to {}", lang.as_str()),
            None => "Source language follows detection (auto)".to_string(),
        })
    },
    "sparcstructret" => registered!(crate::kuna_sparcstructret::SparcStructReturn),
    "arraystride" => registered!(crate::kuna_arraystride::RecoverArrayStride),
    "stackalias" => registered!(crate::heritage::StackAliasDeadstore),
    "readonlycalls" => {
        let field = p1.trim();
        let (val, msg) = match field {
            "off" => (None, "Unguarded read-only memory at calls turned off".to_string()),
            "on" => (Some(1), "Read-only memory is unguarded at every call".to_string()),
            _ => {
                let n = field
                    .parse::<u64>()
                    .ok()
                    .filter(|_| !field.is_empty() && field.bytes().all(|b| b.is_ascii_digit()))
                    .ok_or_else(|| KunaError::parse("Must specify off, on or a decimal guard count"))?;
                (Some(n), format!("Read-only memory is unguarded at calls from {n} guards"))
            }
        };
        self.readonly_calls = val;
        Ok(msg)
    },
    "persistcalls" => {
        let field = p1.trim();
        let (val, msg) = match field {
            "off" => (None, "Persistent globals are guarded at every call".to_string()),
            "on" => (Some(1), "Persistent globals are guarded only next to their accesses".to_string()),
            _ => {
                let n = field
                    .parse::<u64>()
                    .ok()
                    .filter(|_| !field.is_empty() && field.bytes().all(|b| b.is_ascii_digit()))
                    .ok_or_else(|| KunaError::parse("Must specify off, on or a decimal guard count"))?;
                (Some(n), format!("Persistent globals are guarded only next to their accesses from {n} guards"))
            }
        };
        self.persist_calls = val;
        Ok(msg)
    },
    "stackviews" => {
        let (value, message) = crate::kuna_stackviews::OptionStackViews.apply(p1)?;
        self.stack_views = value;
        Ok(message)
    },
    "memsetrecover" => {
        let (form, msg) = crate::kuna_memsetsequence::parse_memset_recover_form(p1)?;
        self.memset_recover = form.memset_recover();
        Ok(msg)
    },
    "rodatastring" => {
        let (form, msg) = crate::kuna_rodatastring::parse_rodata_string_form(p1)?;
        self.rodata_string = form.rodata_string();
        Ok(msg)
    },
    "switchmodbound" => registered!(crate::jumptable::SwitchModuloBound),
    "switchextent" => registered!(crate::jumptable::SwitchExtent),
    "constselectjump" => registered!(crate::kuna_constselectjump::ConstSelectMode),
    "switchguardbound" => registered!(crate::jumptable::SwitchGuardBound),
    "highsliceguard" => registered!(crate::jumptable::HighsliceGuard),
    "switchsharedcase" => registered!(crate::jumptable::SwitchSharedCase),
    "switchmultipred" => registered!(crate::jumptable::SwitchMultiPred),
    "switchtrim" => registered!(crate::jumptable::SwitchTrim),
    "unrolledguard" => registered!(crate::flow::UnrolledGuard),
    "jtsharepartial" => registered!(crate::funcdata_block::JumptableSharePartial),
    "deadcascade" => {
        let field = p1.trim();
        let (val, msg) = match field {
            "off" => (None, "Dead-op removal takes one link of a dead chain per pass".to_string()),
            "on" => (Some(0), "Dead-op removal takes a dead chain of joins and guards out at once".to_string()),
            _ => {
                let n = field
                    .parse::<u32>()
                    .ok()
                    .filter(|_| !field.is_empty() && field.bytes().all(|b| b.is_ascii_digit()))
                    .ok_or_else(|| KunaError::parse("Must specify off, on or a decimal pass count"))?;
                (Some(n), format!("Dead-op removal takes a dead chain of joins and guards out at once once a pool run has made {n} passes"))
            }
        };
        self.dead_cascade = val;
        Ok(msg)
    },
    "loweredswitch" => {
        let (mode, msg) = crate::kuna_loweredswitch::OptionLowerSwitch.apply(p1)?;
        self.recover_lowered_switch = mode.enabled();
        self.lowered_switch_linear = mode.linear();
        self.lowered_switch_tree = mode.tree();
        Ok(msg)
    },
    "nulterminator" => registered!(crate::kuna_nulterminator::NulTerminator),
    "endptrbound" => registered!(crate::kuna_endptrbound::EndPtrBound),
    "castobject" => registered!(crate::kuna_castobject::CastObject),
    "calleeargs" => registered!(crate::kuna_calleestackargs::KunaCalleeargs),
    "argclobber" => registered!(crate::kuna_argclobber::ArgClobber),
    "armfloatargs" => {
        self.arm_float_args = on_or_off(p1)?;
        Ok(format!("ARM floating argument recovery turned {p1}"))
    },
    "narrowargs" => {
        let (body, callers) = match p1 {
            "callers" => (true, true),
            _ => (on_or_off(p1)?, false),
        };
        self.narrow_args = body;
        self.narrow_args_callers = callers;
        Ok(format!("Narrow register parameter recovery set to {p1}"))
    },
    "regnarrow" => {
        self.narrow_locals = on_or_off(p1)?;
        Ok(format!("Narrow register local recovery turned {p1}"))
    },
    "pairparam" => {
        self.pair_params = on_or_off(p1)?;
        Ok(format!("Double-precision input pairing turned {p1}"))
    },
    "narrowret" => {
        self.narrow_ret = on_or_off(p1)?;
        Ok(format!("Narrow call result recovery turned {p1}"))
    },
    "regsigned" => {
        self.narrow_signed = on_or_off(p1)?;
        Ok(format!("Signed narrow register local recovery turned {p1}"))
    },
    "narrowext" => {
        let (mode, msg) = crate::kuna_narrowext::OptionNarrowExt.apply(p1)?;
        if self.narrow_ext != mode {
            self.kuna_callwide.clear();
        }
        self.narrow_ext = mode;
        Ok(msg)
    },
    "armfloatreturn" => {
        self.arm_float_return = on_or_off(p1)?;
        Ok(format!("ARM floating return recovery turned {p1}"))
    },
    "passthrough" => registered!(crate::kuna_passthrough::PassThrough),
    "mixedtailret" => registered!(crate::kuna_mixedtailret::MixedTailRet),
    "cachereturn" => registered!(crate::kuna_cachereturn::CacheReturn),
    "varargsharedfloat" => registered!(crate::kuna_varargsharedfloat::VarargSharedFloat),
    "calloverlap" => registered!(crate::p3_dataflow::kuna_calloverlap::CallOverlap),
    "spillargtrial" => registered!(crate::kuna_spillargtrial::SpillArgTrial),
    "indexaliasguard" => registered!(crate::p3_dataflow::kuna_indexaliasguard::IndexAliasGuard),
    "callarrayextent" => registered!(crate::kuna_callarrayextent::CallArrayExtent),
    "stackstruct" => registered!(crate::kuna_stackstruct::StackStruct),
    "arrayextent" => registered!(crate::p6_variables::kuna_arrayextent::ArrayExtent),
    "arraysize" => registered!(crate::p6_variables::kuna_arraysize::ArraySize),
    "devectorize" => registered!(crate::kuna_devectorize::DevectorizeReduction),
    "strlenscan" => registered!(crate::kuna_strlenscan::StrlenScan),
    "repstring" => registered!(crate::kuna_repstring::RepString),
    "copyrun" => registered!(crate::kuna_copyrun::CopyRun),
    "regionstructure" => registered!(crate::region_structurer::RegionStructure),
    "guardarm" => registered!(crate::kuna_ifnoexit::GuardArm),
    "loopcondhoist" => registered!(crate::kuna_ifnoexit::LoopCondHoist),
    "loopcontinue" => registered!(crate::kuna_loopcontinue::LoopContinue),
    "postinc" => on_off!(post_increment, "Pointer steps folded into *p++"),
    "regionlooprefine" => registered!(crate::region_structurer::RegionLoopRefine),
    "regionedgeorder" => registered!(crate::region_structurer::RegionEdgeOrder),
    "outline" => registered!(crate::kuna_outline::OutlineOption),
    "condfold" => registered!(crate::p8_structure::kuna_condfold::CondFold),
    "implweight" => {
        let field = p1.trim();
        if field == "off" {
            self.impl_weight = 0;
            return Ok("Implied-expression weight limit turned off".to_string());
        }
        match field.parse::<i32>() {
            Ok(n) if (2..=64).contains(&n) => {
                self.impl_weight = n;
                Ok(format!("An expression prints inline while its terms times its uses is at most {n}"))
            }
            _ => Err(KunaError::parse("Must specify off or a weight from 2 to 64")),
        }
    },
    "condstmts" => registered!(crate::p8_structure::kuna_condstmts::CondStmts),
    "gotoreduce" => registered!(crate::p8_structure::kuna_gotoreduce::GotoReduceMode),
    "ifelseflatten" => registered!(crate::kuna_ifelseflatten::FlattenIfelse),
    "crossjumprevert" => registered!(crate::kuna_crossjumpreverter::RevertCrossJumps),
    "dedupitetail" => registered!(crate::kuna_dedupitetail::DedupIteTail),
    "iteregion" => registered!(crate::kuna_iteregion::Iteregion),
    "iteexpr" => registered!(crate::kuna_iteregion::Iteexpr),
    "iteboolean" => registered!(crate::kuna_iteboolean::Iteboolean),
    "paramcopyhoist" => registered!(crate::kuna_paramcopyhoist::ParamCopyHoist),
    "returndup" => {
        let (val, calls, msg) =
            crate::p8_structure::kuna_returndup::OptionReturnDup.apply(p1)?;
        self.duplicate_shared_returns = val;
        self.duplicate_call_returns = calls;
        Ok(msg)
    },
    "rettriangle" => {
        let (val, msg) = crate::p8_structure::kuna_rettriangle::OptionRetTriangle.apply(p1)?;
        self.returndup_triangle = val;
        Ok(msg)
    },
    "earlyreturn" => registered!(crate::kuna_earlyreturn::EarlyReturn),
    "switchreturn" => registered!(crate::kuna_switchreturn::SwitchReturn),
    "foldcallret" => registered!(crate::kuna_callretfold::FoldCallReturns),
    "indirectonly" => registered!(crate::kuna_indirectonly::MarkIndirectOnly),
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
    "namestyle" => {
        let (val, msg) = crate::kuna_naming::OptionNameStyle.apply(p1)?;
        self.name_style_angr = val;
        Ok(msg)
    },
    "realtypes" => registered!(crate::printc::Realtypes),
    "ctypes" => on_off!(ctypes, "valid-C core type spelling"),
    "callmechanisms" => registered!(crate::kuna_callmechanisms::CallMechanismMode),
    "dexmodel" => on_off!(dex_model, "DEX constant pool and register payloads"),
    "jumpassist" => on_off!(jump_assist, "jump-assist switch recovery"),
    "javanew" => registered!(crate::kuna_javanew::JavaNew),
    "javatry" => on_off!(java_try, "Java try/catch from a DEX method's try items"),
    "voidtailreturn" => registered!(crate::printc::Voidtailreturn),
    "dirtypool" => registered!(crate::action::DirtyPool),
    "latecse" => registered!(crate::kuna_latecse::LateCse),
    "gotosink" => registered!(crate::kuna_gotosink::GotoSink),
    "cmpmerge" => registered!(crate::kuna_cmpmerge::CmpMerge),
    "switchmerge" => registered!(crate::kuna_switchmerge::Switchmerge),
    "gotonext" => registered!(crate::funcdata_block::GotoNext),
    "importdata" => registered!(crate::printc::ImportData),
    "rangefold" => registered!(crate::kuna_rangefold::RangeFold),
    "pow2select" => registered!(crate::kuna_selectdiv::Pow2Select),
    "castimplied" => registered!(crate::kuna_castimplied::CastImplied),
    "castsign" => registered!(crate::kuna_castsign::CastSign),
    "castternary" => registered!(crate::kuna_castternary::CastTernary),
    "callrettype" => registered!(crate::kuna_callrettype::CallRetType),
    "castnarrow" => registered!(crate::kuna_castnarrow::CastNarrow),
    "libcnames" => registered!(crate::kuna_libcnames::LibcNames),
    "contextnames" => registered!(crate::kuna_contextnames::ContextNames),
    "declorder" => registered!(crate::kuna_declorder::DeclOrder),
    "castwiden" => registered!(crate::kuna_castwiden::CastWidenMode),
    "ptrdepthcap" => registered!(crate::coreaction_infertypes::Ptrdepthcap),
    "calltargettype" => on_off!(call_target_type, "indirect-call target types"),
    "floatglobals" => on_off!(float_globals, "float typing of globals moved only through float registers"),
    "itaniumeh" => {
        let catch = p1.trim().eq_ignore_ascii_case("catch");
        self.itanium_eh = catch || on_or_off(p1)?;
        self.itanium_eh_catch_only = catch;
        Ok(format!("Itanium exception edges to landing pads turned {}", if catch { "catch" } else if self.itanium_eh { "on" } else { "off" }))
    },
    "vexzeroupper" => on_off!(vex_zero_upper, "VEX zero-upper writes split at the result width"),
    "vectorabi" => on_off!(vector_abi, "SysV x86-64 vector arguments and returns"),
    "lanefuse" => {
        let v = p1.trim().to_ascii_lowercase();
        let (on, all) = match v.as_str() {
            "all" => (true, true),
            _ => (on_or_off(p1)?, false),
        };
        self.lane_fuse = on;
        self.lane_fuse_all = all;
        Ok(format!("Per-lane vector p-code re-fused into one intrinsic turned {}", if all { "all" } else if on { "on" } else { "off" }))
    },
    "strcodelen" => registered!(crate::kuna_analysisgates::Strcodelen),
    "mba" => registered!(crate::kuna_mba::Mba),
    "avxintrinsics" => registered!(crate::printc::AvxIntrinsics),
    "x87depth" => registered!(crate::kuna_x87depth::X87Depth),
    "trapaftercall" => on_off!(trap_after_call, "no-return evidence from a trap after a call"),
    "retpolinethunk" => registered!(crate::kuna_retpolinethunk::RetpolineThunk),
    "varargsave" => registered!(crate::kuna_varargsave::VarargSave),
    "alloca" => registered!(crate::kuna_alloca::AllocaCalls),
    "boolbyte" => registered!(crate::kuna_boolbyte::BoolByte),
    "charbyte" => registered!(crate::kuna_charbyte::CharByte),
    "castarith" => on_off!(cast_arith, "pointer arithmetic in pointer terms"),
    "castindex" => on_off!(cast_index, "variable indexes and pointer differences in pointer terms"),
    "ptrfromuse" => registered!(crate::p5_types::kuna_ptrfromuse::PtrFromUseMode),
    "charptr" => registered!(crate::kuna_charptr::CharPtr),
    "cstringconst" => registered!(crate::kuna_cstringconst::CstringConst),
    "elemptr" => registered!(crate::kuna_elemptr::ElemPtr),
    "protoorder" => registered!(crate::kuna_protoorder::ProtoOrderMode),
    "calleevote" => registered!(crate::kuna_calleevote::CalleeVoteMode),
    "callerptr" => registered!(crate::kuna_callerptr::CallerPtr),
    "calleereginputs" => {
        let (on, custom) = match p1.trim().to_ascii_lowercase().as_str() {
            "custom" => (true, true),
            "" | "on" => (true, false),
            "off" => (false, false),
            _ => return Err(KunaError::parse("Must specify off, on or custom")),
        };
        self.callee_reginputs = on;
        self.callee_reginputs_custom = custom;
        Ok(format!(
            "Callee register-input call models set to {}",
            if custom { "custom" } else if on { "on" } else { "off" }
        ))
    },

    "storetype" => {
        let mode = crate::kuna_storetype::StoreTypeMode::parse(p1.trim()).map_err(KunaError::parse)?;
        self.storetype = mode;
        Ok(format!("global typing from stored values set to {}", mode.as_str()))
    },
    "callbacktype" => registered!(crate::kuna_callbacktype::CallbackTypeMode),
    "cortexmpriv" => registered!(crate::kuna_cortexmpriv::Cortexmpriv),
    "acleintrinsics" => registered!(crate::kuna_memtag::AcleIntrinsics),
    "dedupvardecls" => registered!(crate::kuna_dedupvardecls::DedupVarDecls),
    "noreturn_known" => registered!(crate::kuna_analysisgates::NoreturnKnown),
    "libgccsigs" => registered!(crate::kuna_analysisgates::Libgccsigs),
    "gotypeglobals" => registered!(crate::kuna_analysisgates::GoTypeGlobals),

    "arm64evcall" => registered!(crate::kuna_analysisgates::Arm64evcall),
    "libctypes" => {
        use crate::kuna_libctypes::LibcTypesLayout;
        let layout = match p1.trim().to_ascii_lowercase().as_str() {
            "opaque" | "on" | "1" | "true" => LibcTypesLayout::Opaque,
            "glibc" => LibcTypesLayout::Glibc,
            "off" | "0" | "false" => LibcTypesLayout::Off,
            other => {
                return Err(KunaError::lowlevel(format!(
                    "libctypes: expected `off`, `opaque` or `glibc`, got `{other}`"
                )))
            }
        };
        self.analysis_libctypes = layout != LibcTypesLayout::Off;
        self.analysis_libctypes_glibc = layout == LibcTypesLayout::Glibc;
        self.load_options_mut().libctypes = layout;
        crate::kuna_libctypes::set_libctypes_env_layout(layout);
        Ok(format!(
            "Named libc aggregate types turned {}",
            match layout {
                LibcTypesLayout::Off => "off",
                LibcTypesLayout::Opaque => "on (opaque)",
                LibcTypesLayout::Glibc => "on (glibc layouts)",
            }
        ))
    },
    "tlsnames" => registered!(crate::kuna_tlsnames::Tlsnames),
    "uefi" => registered!(crate::kuna_analysisgates::Uefi),
    "cortexmscs" => registered!(crate::kuna_analysisgates::Cortexmscs),
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
    "flowmode" => {
        let (on, after_call) = match p1.trim().to_ascii_lowercase().as_str() {
            "on" | "1" | "true" => (true, false),
            "aftercall" => (true, true),
            "off" | "0" | "false" => (false, false),
            other => {
                return Err(KunaError::lowlevel(format!(
                    "flowmode: expected `on`, `aftercall` or `off`, got `{other}`"
                )))
            }
        };
        self.analysis_flowmode = on;
        self.analysis_flowmode_aftercall = after_call;
        Ok(format!(
            "ARM flow-proven decode-mode paints turned {}",
            match (on, after_call) {
                (false, _) => "off",
                (true, false) => "on",
                (true, true) => "on, past calls proven to return",
            }
        ))
    },
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
    "importvote" => registered!(crate::kuna_importvote::Importvote),
    "ehnote" => registered!(crate::kuna_analysisgates::Ehnote),
    "funcstart_patterns" => {
        registered!(crate::kuna_analysisgates::FuncstartPatterns)
    },
    "armframes" => {
        let (inventory, full) = if p1 == "inventory" {
            (true, false)
        } else {
            let on = on_or_off(p1)?;
            (on, on)
        };
        self.analysis_armframes = inventory;
        self.analysis_armframes_full = full;
        Ok(format!("Validated ARM frame recovery set to {p1}"))
    },
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
        let val = on_or_off(p1)?;
        self.analysis_ppcapu = val;
        self.load_options_mut().ppcapu = val;
        crate::kuna_ppcapu::set_ppcapu_env(val);
        Ok(format!(
            "PowerPC APU-note language selection turned {}",
            if val { "on" } else { "off" }
        ))
    },
    "ifuncfpret" => {
        let val = on_or_off(p1)?;
        self.analysis_ifuncfpret = val;
        self.load_options_mut().ifuncfpret = val;
        crate::kuna_ifuncfpret::set_ifuncfpret_env(val);
        Ok(format!(
            "IFUNC PLT-stub naming turned {}",
            if val { "on" } else { "off" }
        ))
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
        let val = on_or_off(p1)?;
        self.analysis_debuglink = val;
        crate::kuna_debuglink::set_debuglink_env(val);
        Ok(format!("separate debug file lookup turned {}", if val { "on" } else { "off" }))
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
        let mode = crate::kuna_symbolnamechars::NameChars::parse(p1).ok_or_else(|| {
            KunaError::lowlevel(format!(
                "symbolnamechars must be off|safe|ident, got `{p1}`"
            ))
        })?;
        self.analysis_symbolnamechars = mode;
        self.load_options_mut().symbolnamechars = mode;
        crate::kuna_symbolnamechars::set_symbolnamechars_env(mode);
        Ok(format!("symbol-name character sanitizing set to {}", mode.as_str()))
    },
    "dwarf" => registered!(crate::kuna_analysisgates::Dwarf),
    "cvftrace" => {
        let (names, lines) = match p1.trim().to_ascii_lowercase().as_str() {
            "on" | "1" | "true" => (true, false),
            "lines" => (true, true),
            "off" | "0" | "false" => (false, false),
            other => {
                return Err(KunaError::lowlevel(format!(
                    "cvftrace: expected `on`, `lines` or `off`, got `{other}`"
                )))
            }
        };
        self.analysis_cvftrace = names;
        self.analysis_cvftrace_lines = lines;
        Ok(format!(
            "CVF .trace routine names turned {}",
            match (names, lines) {
                (false, _) => "off",
                (true, false) => "on",
                (true, true) => "on, with source-line comments",
            }
        ))
    },
    "dwarf_lines" => {
        registered!(crate::kuna_analysisgates::DwarfLines)
    },
    "dwarfnocall" => registered!(crate::kuna_analysisgates::Dwarfnocall),
    "godwarfsig" => registered!(crate::kuna_analysisgates::Godwarfsig),
    "cppsig" => registered!(crate::kuna_cppsig::CppSigMode),
    "dwarfglobaltypes" => registered!(crate::kuna_analysisgates::Dwarfglobaltypes),
    "dwarfscopes" => {
        let val = on_or_off(p1)?;
        self.analysis_dwarfscopes = val;
        // FIXME: Audit that the environment access only happens in single-threaded code.
        unsafe { std::env::set_var("KUNA_DWARFSCOPES", if val { "on" } else { "off" }) };
        Ok(format!("DWARF lexical-block and location-list locals turned {}", if val { "on" } else { "off" }))
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
    "fid" => {
        let (enabled, strict) = match p1 {
            "off" => (false, false),
            "" | "on" => (true, false),
            "strict" => (true, true),
            _ => return Err(KunaError::parse("fid expects on, off, or strict")),
        };
        self.analysis_fid = enabled;
        self.analysis_fid_strict = strict;
        let state = if strict { "strict" } else if enabled { "on" } else { "off" };
        Ok(format!("FID fingerprint matcher set to {state}"))
    },
    "rtti" => registered!(crate::kuna_analysisgates::Rtti),
    "itaniumrtti" => {
        registered!(crate::kuna_analysisgates::Itaniumrtti)
    },
    "vtabletypes" => on_off!(analysis_vtabletypes, "typed C++ vtables and vtable slot folding"),
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
        registered!(crate::kuna_analysisgates::Nameladder)
    },
    "flirt" => {
        on_off!(analysis_flirt, "FLIRT signature matching")
    },
    "fidproto" => {
        registered!(crate::kuna_fidproto::Fidproto)
    },
    "codestrings" => {
        registered!(crate::kuna_analysisgates::Codestrings)
    },
    "protomerge" => {
        on_off!(analysis_protomerge, "Slot-by-slot merge of load-time prototypes")
    },

    "calltable" => registered!(crate::kuna_analysisgates::Calltable),
    "stubbinds" => registered!(crate::kuna_analysisgates::Stubbinds),
    "thunknames" => registered!(crate::kuna_analysisgates::Thunknames),
    "objc" => registered!(crate::kuna_analysisgates::Objc),
    "panicloc" => registered!(crate::kuna_analysisgates::Panicloc),
    "swiftmetadata" => registered!(crate::kuna_analysisgates::Swiftmetadata),
    "cfstrings" => {
        let (pass, annotate) = match p1 {
            "annotate" => (true, true),
            other => (on_or_off(other)?, false),
        };
        self.analysis_cfstrings = pass;
        self.cfstrings_annotate = annotate;
        let state = if annotate { "on, annotated" } else if pass { "on" } else { "off" };
        Ok(format!("Mach-O __cfstring constant-string recovery pass turned {state}"))
    },
    "blobs" => registered!(crate::kuna_analysisgates::Blobs),
    "swifttypes" => registered!(crate::kuna_analysisgates::Swifttypes),
    "swifthelpers" => registered!(crate::kuna_analysisgates::Swifthelpers),
    "objcivars" => {
        let val = on_or_off(p1)?;
        self.analysis_objcivars = val;
        self.load_options_mut().objcivars = val;
        crate::kuna_objcivars::set_objcivars_env(val);
        Ok(format!("Objective-C instance layouts turned {}", if val { "on" } else { "off" }))
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
    "iokitclasses" => {
        let (names, types) = match p1 {
            "on" => (true, true),
            "names" => (true, false),
            "off" => (false, false),
            other => {
                return Err(KunaError::parse(format!(
                    "iokitclasses takes on|names|off, not {other:?}"
                )));
            }
        };
        self.analysis_iokitclasses = names;
        self.analysis_iokittypes = types;
        Ok(format!("IOKit class and vtable recovery set to {p1}"))
    },
    "xnutables" => registered!(crate::kuna_analysisgates::Xnutables),
    "osclassinfo" => registered!(crate::kuna_analysisgates::Osclassinfo),
    "swiftcall" => registered!(crate::kuna_swiftcall::Swiftcall),
    "swiftruntime" => registered!(crate::kuna_analysisgates::Swiftruntime),
    "typelib" => {
        let choice = crate::kuna_typelib::TypeLib::parse(p1).map_err(KunaError::parse)?;
        let msg = format!("Type library set to {}", choice.as_str());
        self.analysis_typelib = choice;
        Ok(msg)
    },
    "pdb" => registered!(crate::kuna_analysisgates::Pdb),
    "macho-arm64e" => {
        let val = on_or_off(p1)?;
        self.macho_arm64e = val;
        self.load_options_mut().macho_arm64e = val;
        crate::kuna_macho_arm64e::set_macho_arm64e_env(val);
        Ok(format!(
            "Mach-O arm64e Apple-Silicon spec selection turned {}",
            if val { "on" } else { "off" }
        ))
    },
}
