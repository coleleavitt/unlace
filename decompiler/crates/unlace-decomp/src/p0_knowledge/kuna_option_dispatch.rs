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
    "callresultuse" => {
        let (mode, msg) = crate::p4_calls::kuna_callresultuse::OptionCallResultUse.apply(p1)?;
        self.call_result_use = mode;
        Ok(msg)
    },
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
    "structsynth" => {
        let (mode, msg) = crate::kuna_structsynth::OptionStructSynth.apply(p1)?;
        self.struct_synth = mode;
        Ok(msg)
    },
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
    "octeoneffects" => {
        let (mode, msg) = crate::kuna_octeoneffects::OcteonEffectsMode::parse(p1)?;
        self.octeon_effects = mode;
        Ok(msg)
    },
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
    "nulterminator" => {
        let (val, msg) =
            crate::p6_variables::kuna_nulterminator::OptionNulTerminator.apply(p1)?;
        self.nul_terminator = val;
        Ok(msg)
    },
    "endptrbound" => {
        let (val, msg) =
            crate::p6_variables::kuna_endptrbound::OptionEndPtrBound.apply(p1)?;
        self.end_ptr_bound = val;
        Ok(msg)
    },
    "castobject" => {
        let (val, msg) =
            crate::p6_variables::kuna_castobject::OptionCastObject.apply(p1)?;
        self.cast_object = val;
        Ok(msg)
    },
    "calleeargs" => {
        let (val, msg) = crate::p4_calls::kuna_calleestackargs::OptionCalleeArgs.apply(p1)?;
        self.kuna_calleeargs = val;
        Ok(msg)
    },
    "argclobber" => {
        let (val, msg) = crate::p4_calls::kuna_argclobber::OptionArgClobber.apply(p1)?;
        self.arg_clobber = val;
        Ok(msg)
    },
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
    "passthrough" => {
        let (val, msg) = crate::p4_calls::kuna_passthrough::OptionPassThrough.apply(p1)?;
        self.pass_through = val;
        Ok(msg)
    },
    "mixedtailret" => {
        let (val, msg) = crate::p4_calls::kuna_mixedtailret::OptionMixedTailRet.apply(p1)?;
        self.mixed_tail_ret = val;
        Ok(msg)
    },
    "cachereturn" => {
        let (val, msg) = crate::p4_calls::kuna_cachereturn::OptionCacheReturn.apply(p1)?;
        self.cache_return = val;
        Ok(msg)
    },
    "varargsharedfloat" => registered!(crate::kuna_varargsharedfloat::VarargSharedFloat),
    "calloverlap" => registered!(crate::p3_dataflow::kuna_calloverlap::CallOverlap),
    "spillargtrial" => {
        let (val, msg) =
            crate::p4_calls::kuna_spillargtrial::OptionSpillArgTrial.apply(p1)?;
        self.spill_arg_trial = val;
        Ok(msg)
    },
    "indexaliasguard" => registered!(crate::p3_dataflow::kuna_indexaliasguard::IndexAliasGuard),
    "callarrayextent" => registered!(crate::kuna_callarrayextent::CallArrayExtent),
    "stackstruct" => registered!(crate::kuna_stackstruct::StackStruct),
    "arrayextent" => registered!(crate::p6_variables::kuna_arrayextent::ArrayExtent),
    "arraysize" => registered!(crate::p6_variables::kuna_arraysize::ArraySize),
    "devectorize" => registered!(crate::kuna_devectorize::DevectorizeReduction),
    "strlenscan" => registered!(crate::kuna_strlenscan::StrlenScan),
    "repstring" => registered!(crate::kuna_repstring::RepString),
    "copyrun" => registered!(crate::kuna_copyrun::CopyRun),
    "regionstructure" => {
        let (val, msg) =
            crate::p8_structure::region_structurer::OptionRegionStructure.apply(p1)?;
        self.region_structure = val;
        Ok(msg)
    },
    "guardarm" => {
        let (val, msg) =
            crate::p8_structure::kuna_ifnoexit::OptionGuardArm.apply(p1)?;
        self.guard_arm = val;
        Ok(msg)
    },
    "loopcondhoist" => {
        let (val, msg) =
            crate::p8_structure::kuna_ifnoexit::OptionLoopCondHoist.apply(p1)?;
        self.loop_cond_hoist = val;
        Ok(msg)
    },
    "loopcontinue" => registered!(crate::kuna_loopcontinue::LoopContinue),
    "postinc" => on_off!(post_increment, "Pointer steps folded into *p++"),
    "regionlooprefine" => registered!(crate::region_structurer::RegionLoopRefine),
    "regionedgeorder" => registered!(crate::region_structurer::RegionEdgeOrder),
    "outline" => {
        let (val, msg) =
            crate::p8_structure::kuna_outline::OptionOutline.apply(p1)?;
        self.outline_spec = val;
        Ok(msg)
    },
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
    "ifelseflatten" => {
        let (val, msg) =
            crate::p8_structure::kuna_ifelseflatten::OptionIfElseFlatten.apply(p1)?;
        self.flatten_ifelse = val;
        Ok(msg)
    },
    "crossjumprevert" => {
        let (val, msg) =
            crate::p8_structure::kuna_crossjumpreverter::OptionCrossJumpReverter.apply(p1)?;
        self.revert_cross_jumps = val;
        Ok(msg)
    },
    "dedupitetail" => {
        let (val, msg) =
            crate::p8_structure::kuna_dedupitetail::OptionDedupIteTail.apply(p1)?;
        self.dedup_ite_tail = val;
        Ok(msg)
    },
    "iteregion" => {
        let (val, msg) = crate::p8_structure::kuna_iteregion::OptionIteRegion.apply(p1)?;
        self.iteregion = val;
        Ok(msg)
    },
    "iteexpr" => registered!(crate::kuna_iteregion::Iteexpr),
    "iteboolean" => {
        let (val, msg) =
            crate::p8_structure::kuna_iteboolean::OptionIteBoolean.apply(p1)?;
        self.iteboolean = val;
        Ok(msg)
    },
    "paramcopyhoist" => {
        let (val, msg) =
            crate::p6_variables::kuna_paramcopyhoist::OptionParamCopyHoist.apply(p1)?;
        self.param_copy_hoist = val;
        Ok(msg)
    },
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
    "earlyreturn" => {
        let (val, msg) =
            crate::p8_structure::kuna_earlyreturn::OptionEarlyReturn.apply(p1)?;
        self.early_return = val;
        Ok(msg)
    },
    "switchreturn" => {
        let (val, msg) =
            crate::p8_structure::kuna_switchreturn::OptionSwitchReturn.apply(p1)?;
        self.switch_return = val;
        Ok(msg)
    },
    "foldcallret" => {
        let (val, msg) = crate::kuna_callretfold::OptionFoldCallRet.apply(p1)?;
        self.fold_call_returns = val;
        Ok(msg)
    },
    "indirectonly" => {
        let (val, msg) = crate::kuna_indirectonly::OptionIndirectOnly.apply(p1)?;
        self.mark_indirect_only = val;
        Ok(msg)
    },
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
    "loopbreak_recovery" => {
        let (val, msg) =
            crate::kuna_loopbreak_recovery::OptionLoopBreakRecovery.apply(p1)?;
        self.recover_loop_break = val;
        Ok(msg)
    },
    "namestyle" => {
        let (val, msg) = crate::kuna_naming::OptionNameStyle.apply(p1)?;
        self.name_style_angr = val;
        Ok(msg)
    },
    "realtypes" => registered!(crate::printc::Realtypes),
    "ctypes" => on_off!(ctypes, "valid-C core type spelling"),
    "callmechanisms" => {
        let (mode, msg) = crate::kuna_callmechanisms::OptionCallMechanisms.apply(p1)?;
        self.call_mechanism_mode = mode;
        Ok(msg)
    },
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
    "strcodelen" => on_off!(analysis_strcodelen, "code-side Rust &str lengths"),
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
    "elemptr" => {
        let (val, msg) = crate::p5_types::kuna_elemptr::OptionElemPtr.apply(p1)?;
        self.elem_ptr = val;
        Ok(msg)
    },
    "protoorder" => {
        let (mode, msg) = crate::kuna_protoorder::OptionProtoOrder.apply(p1)?;
        self.protoorder = mode;
        Ok(msg)
    },
    "calleevote" => {
        let (mode, msg) = crate::kuna_calleevote::OptionCalleeVote.apply(p1)?;
        self.calleevote = mode;
        Ok(msg)
    },
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
    "callbacktype" => {
        let (mode, msg) = crate::kuna_callbacktype::OptionCallbackType.apply(p1)?;
        self.callbacktype = mode;
        Ok(msg)
    },
    "cortexmpriv" => registered!(crate::kuna_cortexmpriv::Cortexmpriv),
    "acleintrinsics" => registered!(crate::kuna_memtag::AcleIntrinsics),
    "dedupvardecls" => {
        let (val, msg) = crate::kuna_dedupvardecls::OptionDedupVarDecls.apply(p1)?;
        self.dedup_var_decls = val;
        Ok(msg)
    },
    "noreturn_known" => on_off!(analysis_noreturn_known, "No-return-known analysis pass"),
    "libgccsigs" => on_off!(analysis_libgccsigs, "libgcc __divdi3 and __stack_chk_fail_local contracts"),
    "gotypeglobals" => on_off!(analysis_go_type_globals, "Go type-descriptor globals"),

    "arm64evcall" => on_off!(analysis_arm64evcall, "arm64e virtual-call resolution"),
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
    "uefi" => on_off!(analysis_uefi, "Gate the UEFI module markup pass (`uefi`); default on."),
    "cortexmscs" => on_off!(analysis_cortexmscs, "Cortex-M System Control Space globals"),
    "strings" => on_off!(analysis_strings, "String-literal analysis pass"),
    "widestrings" => {
        on_off!(analysis_widestrings, "UTF-16LE width of the string-literal pass")
    },
    "widestrings32" => {
        on_off!(analysis_widestrings32, "UTF-32 width of the string-literal pass")
    },
    "entry_disc" => on_off!(analysis_entry_disc, "Entry-discovery analysis pass"),
    "x86listingswitch" => {
        on_off!(analysis_x86listingswitch, "Bounded i386 switch successors in the discovery Listing")
    },
    "addrtakenentry" => {
        on_off!(analysis_addrtakenentry, "Address-taken code function entries")
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
        on_off!(analysis_elfmain, "ELF libc-start main naming + prototype")
    },
    "eh_frame_full" => {
        on_off!(analysis_eh_frame_full, ".eh_frame LSDA landing-pad discovery")
    },
    "unwindstarts" => {
        on_off!(analysis_unwindstarts, "Mach-O __unwind_info function-start discovery")
    },
    "exporttrie" => {
        let val = on_or_off(p1)?;
        crate::kuna_exporttrie::set_exporttrie_env(val);
        Ok(format!("Mach-O export-trie naming turned {}", if val { "on" } else { "off" }))
    },
    "machobinds" => on_off!(analysis_machobinds, "Mach-O bound-slot import naming"),
    "machoehframe" => {
        on_off!(analysis_machoehframe, "Mach-O __eh_frame FDE function-start discovery")
    },
    "ehcold" => on_off!(analysis_ehcold, "Exception-cleanup .cold fragment suppression"),
    "importvote" => on_off!(analysis_importvote, "Undeclared import call-site vote"),
    "ehnote" => on_off!(analysis_ehnote, "Hidden landing-pad note"),
    "funcstart_patterns" => {
        on_off!(analysis_funcstart_patterns, "Full byte-pattern function-start pass")
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
        on_off!(analysis_cortexmvectors, "Widened ARM Cortex-M vector-table signature")
    },
    "ptrentry" => {
        on_off!(analysis_ptrentry, "Pointer-referenced ARM function entries")
    },
    "poolentry" => {
        on_off!(
            analysis_poolentry,
            "ARM literal-pool inference (entry recall + AIF phantom suppression)"
        )
    },
    "armwalkmode" => on_off!(analysis_armwalkmode, "ARM decode mode carried along the Listing walk"),
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
    "dwarf" => on_off!(analysis_dwarf, "DWARF recovery analysis pass"),
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
        on_off!(analysis_dwarf_lines, "DWARF .debug_line source-line comment pass")
    },
    "dwarfnocall" => on_off!(analysis_dwarfnocall, "DWARF nocall parameter drop"),
    "godwarfsig" => on_off!(analysis_godwarfsig, "Go DWARF scalar and pointer signatures"),
    "cppsig" => {
        let (mode, msg) = crate::kuna_cppsig::parse_cppsig_mode(p1)?;
        self.analysis_cppsig = mode;
        Ok(msg)
    },
    "dwarfglobaltypes" => on_off!(analysis_dwarfglobaltypes, "DWARF global types"),
    "dwarfscopes" => {
        let val = on_or_off(p1)?;
        self.analysis_dwarfscopes = val;
        // FIXME: Audit that the environment access only happens in single-threaded code.
        unsafe { std::env::set_var("KUNA_DWARFSCOPES", if val { "on" } else { "off" }) };
        Ok(format!("DWARF lexical-block and location-list locals turned {}", if val { "on" } else { "off" }))
    },
    "addrtable" => on_off!(analysis_addrtable, "Address-table analysis pass"),
    "operand_refs" => on_off!(analysis_operand_refs, "Scalar/operand reference-markup pass"),
    "formatstring" => {
        let (mode, msg) = crate::kuna_formatstring::parse_formatstring_mode(p1)?;
        self.analysis_formatstring = mode;
        Ok(msg)
    },
    "formatcallees" => on_off!(analysis_format_callees, "format-string typing of undeclared format functions"),
    "listing" => on_off!(analysis_listing, "Listing/xref disassembly tier"),
    "fast_funcdisc" => {
        on_off!(analysis_fast_funcdisc, "Fast whole-project function discovery")
    },
    "lazyfuncs" => on_off!(
        analysis_lazyfuncs,
        "Materialize Function objects on demand instead of one per entry"
    ),
    "mapglobalsyms" => {
        registered!(crate::kuna_mapglobalsyms::Mapglobalsyms)
    },
    "objectview" => {
        on_off!(analysis_objectview, "Object-file analysis passes on TE and raw images")
    },
    "noreturn_disc" => {
        on_off!(analysis_noreturn_disc, "Discovered-no-return Listing consumer")
    },
    "noreturn_propagate" => {
        on_off!(analysis_noreturn_propagate, "No-return propagation Listing consumer")
    },
    "noreturn_reach" => {
        on_off!(analysis_noreturn_reach, "CFG-reachability no-return rule (Ghidra targetOnlyCallsNoReturn)")
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
    "rtti" => on_off!(analysis_rtti, "MSVC RTTI / vftable class-name recovery pass"),
    "itaniumrtti" => {
        on_off!(analysis_itaniumrtti, "Itanium (GCC/Clang) RTTI / vtable recovery pass")
    },
    "vtabletypes" => on_off!(analysis_vtabletypes, "typed C++ vtables and vtable slot folding"),
    "aif" => {
        let (mode, msg) = crate::kuna_aif::parse_aif_mode(p1)?;
        self.analysis_aif = mode;
        Ok(msg)
    },
    "esprom" => {
        let (value, msg) = crate::kuna_esprom::parse_esprom(p1)?;
        self.esprom = value;
        Ok(msg)
    },
    "aifpoolslide" => {
        on_off!(analysis_aifpoolslide, "AIF literal-pool candidate slide (GH-299)")
    },
    "tailcallentry" => {
        on_off!(analysis_tailcallentry, "Tail-call function-entry recovery Listing consumer")
    },
    "funcchunks" => {
        on_off!(analysis_funcchunks, "Function chunk bodies (main chunk + shared tails)")
    },
    "globalwidth" => {
        on_off!(analysis_globalwidth, "Data-object typing from access width")
    },
    "aifdataveto" => {
        on_off!(analysis_aifdataveto, "AIF data read/write veto")
    },
    "incrementalwalk" => {
        on_off!(analysis_incrementalwalk, "Incremental Listing walk for callback roots")
    },

    "tailcallentryall" => {
        on_off!(analysis_tailcallentryall, "Tail-call function-entry recovery on non-ARM targets")
    },
    "nameladder" => {
        on_off!(analysis_nameladder, "Prototype/no-return name lookup ladder")
    },
    "flirt" => {
        on_off!(analysis_flirt, "FLIRT signature matching")
    },
    "fidproto" => {
        registered!(crate::kuna_fidproto::Fidproto)
    },
    "codestrings" => {
        on_off!(analysis_codestrings, "Code-section string acceptance rule")
    },
    "protomerge" => {
        on_off!(analysis_protomerge, "Slot-by-slot merge of load-time prototypes")
    },

    "calltable" => on_off!(analysis_calltable, "Call-table recovery and the call-table vs switch vote"),
    "stubbinds" => on_off!(analysis_stubbinds, "Stripped Mach-O stubs named from their slot's chained bind"),
    "thunknames" => on_off!(analysis_thunknames, "Placeholder jump thunks named j_<target>"),
    "objc" => on_off!(analysis_objc, "Mach-O Objective-C metadata recovery pass"),
    "panicloc" => on_off!(analysis_panicloc, "Rust panic Location record pass"),
    "swiftmetadata" => on_off!(analysis_swiftmetadata, "Swift runtime-metadata recovery pass"),
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
    "blobs" => on_off!(analysis_blobs, "Embedded image and archive data symbols"),
    "swifttypes" => on_off!(analysis_swifttypes, "Swift type layouts from static metadata"),
    "swifthelpers" => on_off!(analysis_swifthelpers, "Swift instantiation helpers and lazy witness table accessors"),
    "objcivars" => {
        let val = on_or_off(p1)?;
        self.analysis_objcivars = val;
        self.load_options_mut().objcivars = val;
        crate::kuna_objcivars::set_objcivars_env(val);
        Ok(format!("Objective-C instance layouts turned {}", if val { "on" } else { "off" }))
    },
    "swiftobjcthunk" => on_off!(analysis_swiftobjcthunk, "Swift vtable slot names from @objc thunks"),
    "valuewitness" => on_off!(analysis_valuewitness, "Swift value witness functions and tables"),
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
    "xnutables" => on_off!(analysis_xnutables, "XNU kalloc_type / external-method / pointer-slot naming"),
    "osclassinfo" => on_off!(analysis_osclassinfo, "DriverKit __osclassinfo class records"),
    "swiftcall" => registered!(crate::kuna_swiftcall::Swiftcall),
    "swiftruntime" => on_off!(analysis_swiftruntime, "Swift runtime prototypes"),
    "typelib" => {
        let choice = crate::kuna_typelib::TypeLib::parse(p1).map_err(KunaError::parse)?;
        let msg = format!("Type library set to {}", choice.as_str());
        self.analysis_typelib = choice;
        Ok(msg)
    },
    "pdb" => on_off!(analysis_pdb, "PE PDB metadata recovery pass"),
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
