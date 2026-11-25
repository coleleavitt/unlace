//! Pass hooks: the IR calls a pass through a table of plain function pointers.
//!
//! Some IR algorithms (`funcdata*`, `heritage`, the cleanup action) need a decision or a
//! helper that a higher pass owns. Calling the pass directly makes the IR depend on it.
//! Instead the IR calls through [`UnlaceHooks`], held by every
//! [`ArchContext`](crate::context::ArchContext); each pass module fills its slots in a
//! `provide(&mut UnlaceHookSlots)` function, and the driver composes them once
//! (`universalaction::PASS_HOOKS`). This is rustc's `rustc_middle::hooks`.
//!
//! The driver installs that table at link time: it defines the symbol
//! [`default_pass_hooks`] calls, so no IR module names the driver and every binary or test that
//! links the crate gets the table without a setup call.
//!
//! [`UnlaceHookSlots::finish`] refuses a table with an empty slot, so the first
//! `ArchContext` of a run checks that every hook is provided.

use std::collections::{BTreeMap, BTreeSet, HashMap};
use std::rc::Rc;

use unlace_base::address::Address;
use unlace_base::space::{AddrSpace, AddrSpaceManager};
use unlace_base::types::{int4, intb, uint4, uintb};

use unlace_base::error::UnlaceResult;
use unlace_base::marshal::IdRegistry;
use unlace_base::xml::Element;
use unlace_num::opcodes::OpCode;
use unlace_num::pcoderaw::VarnodeData;

use crate::action::Action;
use crate::architecture::{Architecture, GoLayout, HelperAbi, Regs, Storage, VarargFloats};
use crate::context::{ArchContext, BlockId, HighVariableId, OpId, VarnodeId};
use crate::database::SymbolEntry;
use crate::dtype::{Datatype, TypeFactory};
use crate::fasthash::{FxHashMap, FxHashSet};
use crate::fspec::{
    Extension, FuncCallSpecs, FuncProto, ParamActive, ParamEntry, ParamListStandard, ParamTrial,
    ParameterPieces, ProtoModel, PrototypePieces, Widen,
};
use crate::funcdata::Funcdata;
use crate::funcdata_block::HeadOperand;
use crate::funcdata_varnode::{Forced, Reach};
use crate::heritage::{Guard, LiveCalls, LoadGuard, MemoryOps, StoreBounds, WidePair};
use crate::jumptable::{GuardRecord, JumpModel, JumpTable, LoadTable};
use crate::merge::MergeContext;
use crate::op::PcodeOpBank;
use crate::rangeutil::CircleRange;
use crate::variable::HighIntersectTest;
use crate::varmap::{AliasChecker, LinkEntryInfo, MapState, RangeHint};
use crate::varnode::VarnodeBank;

unsafe extern "Rust" {
    /// The default pipeline's hook table, defined by the driver (`universalaction`).
    safe fn __unlace_default_pass_hooks() -> &'static UnlaceHooks;
}

/// The pass hooks every [`ArchContext`] starts with: the default pipeline's, composed with the
/// universal action tree it schedules.
#[inline]
pub fn default_pass_hooks() -> &'static UnlaceHooks {
    __unlace_default_pass_hooks()
}

macro_rules! declare_hooks {
    ($($(#[$attr:meta])* $name:ident: $(for<$($lt:lifetime),*>)? fn($($arg:ty),* $(,)?) $(-> $ret:ty)?;)*) => {
        /// The pass hooks, every one provided; call one as `(fd.hooks().name)(args)`.
        #[derive(Clone, Copy)]
        pub struct UnlaceHooks {
            $($(#[$attr])* pub $name: $(for<$($lt),*>)? fn($($arg),*) $(-> $ret)?,)*
        }

        /// A [`UnlaceHooks`] under construction: each pass module's `provide` fills its slots.
        #[derive(Default)]
        pub struct UnlaceHookSlots {
            $(pub $name: Option<$(for<$($lt),*>)? fn($($arg),*) $(-> $ret)?>,)*
        }

        impl UnlaceHookSlots {
            /// The finished table, or the names of the slots no module provided.
            pub fn finish(self) -> Result<UnlaceHooks, Vec<&'static str>> {
                match self {
                    UnlaceHookSlots { $($name: Some($name),)* } => Ok(UnlaceHooks { $($name,)* }),
                    _ => {
                        let mut missing = Vec::new();
                        $(if self.$name.is_none() {
                            missing.push(stringify!($name));
                        })*
                        Err(missing)
                    }
                }
            }
        }

        impl UnlaceHookSlots {
            /// The table with every slot no module filled set to a stub that panics, naming the
            /// hook: what the unit tests of a crate below the driver run with, after providing
            /// the hooks of their own crate and the crates below it.
            #[doc(hidden)]
            pub fn finish_with_stubs(self) -> UnlaceHooks {
                UnlaceHooks {
                    $($name: self.$name.unwrap_or({
                        fn stub$(<$($lt),*>)?($(_: $arg),*) $(-> $ret)? {
                            panic!(concat!(
                                "pass hook `",
                                stringify!($name),
                                "` is provided by a crate above this test's crate, not linked into this test"
                            ))
                        }
                        stub
                    }),)*
                }
            }
        }

        impl UnlaceHooks {
            /// A table whose every hook panics, naming itself.
            #[doc(hidden)]
            pub fn unprovided() -> UnlaceHooks {
                UnlaceHookSlots::default().finish_with_stubs()
            }
        }
    };
}

/// This crate's unit tests link without the driver, so they define the driver's symbol
/// themselves: this crate's own hooks ([`crate::provide_all`]), and a stub that panics, naming
/// itself, for every hook a higher crate provides ([`UnlaceHookSlots::finish_with_stubs`]).
#[cfg(test)]
mod unprovided {
    #[unsafe(no_mangle)]
    fn __unlace_default_pass_hooks() -> &'static super::UnlaceHooks {
        static HOOKS: std::sync::OnceLock<super::UnlaceHooks> = std::sync::OnceLock::new();
        HOOKS.get_or_init(|| {
            let mut slots = super::UnlaceHookSlots::default();
            crate::provide_all(&mut slots);
            slots.callmechanisms_failed = Some(never_failed);
            slots.finish_with_stubs()
        })
    }

    /// The action loop asks `callmechanisms_failed` before every step, and the call mechanisms
    /// that record a failure are provided by the band tier. Below it no mechanism exists, so
    /// none fails.
    fn never_failed(_: &crate::funcdata::Funcdata) -> bool {
        false
    }
}

declare_hooks! {
    /// The input varnode holding the base register of a spacebase space (`funcdata_spacebase`).
    find_spacebase_input: fn(&Funcdata, &Rc<AddrSpace>) -> Option<VarnodeId>;
    /// An alias checker over the local stack, built on first use (`funcdata_spacebase`).
    build_alias_checker_deferred: fn(&Funcdata) -> Option<AliasChecker>;
    /// Can a pointer reach the stack slot at the offset: a local or a parameter alias
    /// (`funcdata_spacebase`).
    stack_slot_aliased: fn(&Funcdata, &mut AliasChecker, &Rc<AddrSpace>, uintb) -> bool;
    /// Mark a local range not mapped (`funcdata_spacebase`).
    scope_local_mark_not_mapped: fn(&mut Funcdata, &Rc<AddrSpace>, uintb, int4, bool);
    /// (unlace `calltransport`) Is the varnode a call-argument transport (`unlace_calltransport`).
    is_call_transport: fn(&Funcdata, VarnodeId) -> bool;
    /// (unlace `calltransport`) Record the varnode as a call-argument transport.
    record_call_transport: fn(&mut Funcdata, VarnodeId);
    /// (unlace `calltransport`) Is the byte range of the varnode a projection of a transport.
    is_call_transport_projection: fn(&Funcdata, VarnodeId, int4, int4) -> bool;
    /// (unlace `calltransport`) Does the varnode have a use as local storage.
    has_local_storage_use: fn(&Funcdata, VarnodeId) -> bool;
    /// `ActionSetCasts` over the function (`coreaction_casts`).
    action_set_casts: fn(&mut Funcdata) -> int4;
    /// `Varnode::getTypeDefFacing` against the union cache (`funcdata_facing`).
    vn_type_def_facing: fn(&Funcdata, VarnodeId) -> Rc<Datatype>;
    /// `Varnode::getTypeReadFacing` against the union cache (`funcdata_facing`).
    vn_type_read_facing: fn(&Funcdata, VarnodeId, OpId) -> Rc<Datatype>;
    /// Apply a union-facet symbol to its varnode (`funcdata_union`).
    apply_union_facet: fn(&mut Funcdata, &SymbolEntry) -> UnlaceResult<bool>;
    /// `Funcdata::forceFacingType` (`funcdata_union`).
    force_facing_type: fn(&mut Funcdata, Rc<Datatype>, int4, OpId, int4) -> UnlaceResult<()>;
    /// `Funcdata::inheritUnionField` (`funcdata_union`).
    inherit_union_field: fn(&mut Funcdata, &Datatype, OpId, int4, OpId, int4) -> int4;
    /// `calleereginputs::reads_register`.
    calleereginputs_reads_register: fn(&FuncCallSpecs, &Address, int4) -> bool;
    /// `callresultuse::scores_trial`.
    callresultuse_scores_trial: fn(&Funcdata, VarnodeId, OpId) -> bool;
    /// `callresultuse::scoring_argument`.
    callresultuse_scoring_argument: fn(&Funcdata, OpId, VarnodeId) -> bool;
    /// `callresultuse::scoring_return`.
    callresultuse_scoring_return: fn(&Funcdata, OpId, VarnodeId) -> bool;
    /// `exclusivearguse::access_cannot_reach_call`.
    exclusivearguse_access_cannot_reach_call: fn(&Funcdata, OpId, OpId, VarnodeId) -> bool;
    /// `retindexuse::index_only_load`.
    retindexuse_index_only_load: fn(&Funcdata, OpId, OpId, VarnodeId) -> bool;
    /// `carryuse::carry_test`.
    carryuse_carry_test: fn(&Funcdata, OpId, OpId, VarnodeId) -> bool;
    /// `exclusivecallret::applies`.
    exclusivecallret_applies: fn(&Funcdata, OpId, &ParamTrial) -> bool;
    /// `exclusivecallret::skips_use`.
    exclusivecallret_skips_use: fn(&Funcdata, OpId, OpId, VarnodeId, VarnodeId) -> bool;
    /// `multiregargs::subpiece_drops_reached_piece`.
    multiregargs_subpiece_drops_reached_piece: fn(&Funcdata, OpId, VarnodeId) -> bool;
    /// `noreturnretuse::call_cannot_reach_return`.
    noreturnretuse_call_cannot_reach_return: fn(&Funcdata, OpId, OpId) -> bool;
    /// `sharedpush::declared_arm_shares`.
    sharedpush_declared_arm_shares: fn(&Funcdata, OpId, OpId, VarnodeId, &ParamTrial) -> bool;
    /// `spillargtrial::store_is_caller_save_spill`.
    spillargtrial_store_is_caller_save_spill: fn(&Funcdata, OpId, VarnodeId) -> bool;
    /// `stackparamviews::backing_for_address`.
    stackparamviews_backing_for_address: fn(&Funcdata, &Address, i32) -> Option<LinkEntryInfo>;
    /// `stackviews::enabled`.
    stackviews_enabled: fn(&Funcdata) -> bool;
    /// `syscallregs::is_error_flag`.
    syscallregs_is_error_flag: fn(&Funcdata, OpId) -> bool;
    /// `syscallregs::reads_as_argument`.
    syscallregs_reads_as_argument: fn(&Funcdata, OpId, VarnodeId) -> bool;
    /// `voidret::returned_use`.
    voidret_returned_use: fn(&Funcdata, OpId, VarnodeId) -> bool;
    /// `voidret::scoring_return`.
    voidret_scoring_return: fn(&Funcdata, OpId) -> bool;
    /// `zeroidiomuse::op_discards_operand`.
    zeroidiomuse_op_discards_operand: fn(&Funcdata, OpId) -> bool;
    /// `coreaction_infertypes::propagate_type_pub`.
    coreaction_infertypes_propagate_type_pub: fn(&mut Funcdata, Rc<Datatype>, OpId, VarnodeId, VarnodeId, int4, int4) -> Option<Rc<Datatype>>;
    /// `clonephiorder::order_global_phis`.
    clonephiorder_order_global_phis: fn(&Funcdata, &mut [OpId]);
    /// `indirectanchor::anchor_of`.
    indirectanchor_anchor_of: fn(&Funcdata, OpId) -> Option<OpId>;
    /// `indirectreturn::target_encoding`.
    indirectreturn_target_encoding: fn(&Funcdata, OpId) -> Option<(i32, u64)>;
    /// `loweredswitchexact::raw_install_keeps_values`.
    loweredswitchexact_raw_install_keeps_values: fn(&Funcdata, BlockId, &[BlockId]) -> bool;
    /// `orchain::shortcircuit_shared_targets`.
    orchain_shortcircuit_shared_targets: fn(&Funcdata) -> BTreeSet<BlockId>;
    /// `retsplitglobal::is_global_store`.
    retsplitglobal_is_global_store: fn(bool, bool, bool, bool) -> bool;
    /// `retsplitglobal::split_is_declined`.
    retsplitglobal_split_is_declined: fn(bool, usize) -> bool;
    /// `retsplitlimit::split_is_declined` under the run's `retsplitlimit` option.
    retsplitlimit_split_is_declined: fn(&crate::optionset::OptionSet, usize, usize) -> bool;
    /// `rettriangle::is_triangle_join`.
    rettriangle_is_triangle_join: fn(&Funcdata, BlockId) -> bool;
    /// `armfloatargs::stated_singles`.
    armfloatargs_stated_singles: fn(&Funcdata, &FuncCallSpecs, &Address, i32) -> Vec<Address>;
    /// `armfloatreturn::call_input_allowed`.
    armfloatreturn_call_input_allowed: fn(&Funcdata, &FuncCallSpecs, &Address, i32) -> bool;
    /// `calleememory::preserves`.
    calleememory_preserves: fn(&Funcdata, &FuncCallSpecs, &Address, i32) -> bool;
    /// `calleepreserves::callee_preserves_range`.
    calleepreserves_callee_preserves_range: fn(&Funcdata, &FuncCallSpecs, &Address, int4) -> bool;
    /// `calleeprotostack::above_callee_frame`.
    calleeprotostack_above_callee_frame: fn(uintb, int4, int4, int4) -> bool;
    /// `calleeprotostack::declared_caller_frame_floor`.
    calleeprotostack_declared_caller_frame_floor: fn(&FuncProto) -> Option<int4>;
    /// `calleeprotostack::pointer_input_may_alias`.
    calleeprotostack_pointer_input_may_alias: fn(&Funcdata, &FuncCallSpecs, uintb, int4) -> bool;
    /// `calleeprotostack::rebound_frame_base`.
    calleeprotostack_rebound_frame_base: fn(&Funcdata) -> bool;
    /// `calleeretpreserves::callee_preserved_output_within`.
    calleeretpreserves_callee_preserved_output_within: fn(&Funcdata, &FuncCallSpecs, &Address, int4) -> Option<VarnodeData>;
    /// `calleeretpreserves::callee_preserves_return_storage`.
    calleeretpreserves_callee_preserves_return_storage: fn(&Funcdata, &FuncCallSpecs, &Address, int4) -> bool;
    /// `calleeretpreserves::exact_cookie_preserved_output_within`.
    calleeretpreserves_exact_cookie_preserved_output_within: fn(&Funcdata, &FuncCallSpecs, &Address, int4) -> Option<VarnodeData>;
    /// `calleeretpreserves::exact_cookie_preserves_return_storage`.
    calleeretpreserves_exact_cookie_preserves_return_storage: fn(&Funcdata, &FuncCallSpecs, &Address, int4) -> bool;
    /// `calleeretpreserves::exact_cookie_preserves_unjustified_return_slice`.
    calleeretpreserves_exact_cookie_preserves_unjustified_return_slice: fn(&Funcdata, &FuncCallSpecs, &Address, int4) -> bool;
    /// `inputtile::new_tiled_input`.
    inputtile_new_tiled_input: fn(&mut Funcdata, int4, &Address) -> UnlaceResult<VarnodeId>;
    /// `localstackviews::preserves_range`.
    localstackviews_preserves_range: fn(&Funcdata, &Address, i32) -> bool;
    /// `msvcbyval::constructed_ranges`.
    msvcbyval_constructed_ranges: fn(&Funcdata, &[FuncCallSpecs], &Rc<AddrSpace>) -> Vec<(OpId, uintb, int4)>;
    /// `msvcbyval::constructs`.
    msvcbyval_constructs: fn(&[(OpId, uintb, int4)], OpId, &AddrSpace, uintb, int4) -> bool;
    /// `pairrefine::split_pair`.
    pairrefine_split_pair: fn(&Funcdata, &Address, int4, int4, &[VarnodeId], &[VarnodeId], &[VarnodeId]) -> bool;
    /// `pairrefine::straddles_middle`.
    pairrefine_straddles_middle: fn(&Funcdata, VarnodeId, &Address, int4) -> bool;
    /// `passthrough::suppresses_return_trial`.
    passthrough_suppresses_return_trial: fn(&Funcdata, &Address, int4) -> bool;
    /// `registerslots::guard_output`.
    registerslots_guard_output: fn(&mut Funcdata, &mut FuncCallSpecs, &Address, &Address, i32, &mut Vec<VarnodeId>) -> bool;
    /// `registerslots::input_slot`.
    registerslots_input_slot: fn(&FuncCallSpecs, &Address, &Address, i32) -> Option<(Address, i32)>;
    /// `splitstorekeep::keep_store_mark`.
    splitstorekeep_keep_store_mark: fn(&mut Funcdata, VarnodeId, &[VarnodeId]) -> bool;
    /// `stackeffects::enabled_for`.
    stackeffects_enabled_for: fn(&Funcdata, &Address, i32) -> bool;
    /// `stackeffects::unresolved_store`.
    stackeffects_unresolved_store: fn(&Funcdata, OpId) -> bool;
    /// `stackreadscope::mark_guarded_read`.
    stackreadscope_mark_guarded_read: fn(&mut Funcdata, OpId, &Address, i32);
    /// `varargretreg::argument_in_own_output`.
    varargretreg_argument_in_own_output: fn(&Funcdata, &FuncCallSpecs, &Address, int4) -> bool;
    /// `varargretreg::counted_float_entry`.
    varargretreg_counted_float_entry: fn(&Funcdata, &FuncCallSpecs, &Address, int4) -> Option<Address>;
    /// `voidret::planted_overlaps`.
    voidret_planted_overlaps: fn(&Funcdata, &Address, int4) -> bool;
    /// `haltloopguard::exitless_loops`.
    haltloopguard_exitless_loops: fn(&Funcdata) -> Vec<BlockId>;
    /// `haltloopguard::guard`.
    haltloopguard_guard: fn(&Funcdata, &[BlockId], uint4, &Address, &[VarnodeId], &mut BTreeMap<usize, Vec<Address>>);
    /// `haltloopguard::mark`.
    haltloopguard_mark: fn(&mut Funcdata, &[VarnodeId]);
    /// `leafmemory::preserves`.
    leafmemory_preserves: fn(&Funcdata, &FuncCallSpecs, &Address, i32) -> bool;
    /// `memoryguard::guard_memory`.
    memoryguard_guard_memory: fn(&mut Funcdata, &mut Option<Vec<OpId>>, uint4, &Address, int4, &mut Vec<VarnodeId>);
    /// `multiregargs::input_partition`.
    multiregargs_input_partition: fn(&FuncProto, &AddrSpaceManager, &Address, int4) -> Option<Vec<VarnodeData>>;
    /// `renamereads::finish`.
    renamereads_finish: fn(&mut Funcdata, &mut Vec<(OpId, uint4)>);
    /// `renamereads::mark`.
    renamereads_mark: fn(&mut Funcdata, OpId, uint4, &mut Vec<(OpId, uint4)>);
    /// `renamereads::new_indirect`.
    renamereads_new_indirect: fn(&mut Funcdata, OpId, &Address, int4, uint4, &mut Vec<(OpId, uint4)>, &mut FxHashMap<OpId, VarnodeId>) -> OpId;
    /// `renamereads::pending`.
    renamereads_pending: fn(&Funcdata, OpId) -> bool;
    /// `renamereads::storage`.
    renamereads_storage: fn(&Funcdata, OpId) -> Option<(Address, int4)>;
    /// `spillstoreguard::bounds`.
    spillstoreguard_bounds: fn(&Funcdata, &[OpId]) -> HashMap<OpId, (u64, int4)>;
    /// `spillstoreguard::build`.
    spillstoreguard_build: fn(&mut Funcdata, &Address, int4, &[OpId], &[OpId], &HashMap<OpId, (u64, int4)>, &mut Vec<(OpId, OpId)>, &mut Vec<VarnodeId>);
    /// `spillstoreguard::prune`.
    spillstoreguard_prune: fn(&mut Funcdata, &[(OpId, OpId)]);
    /// `spillstoreguard::within_budget`.
    spillstoreguard_within_budget: fn(&Funcdata, &[OpId], &HashMap<OpId, (u64, int4)>) -> bool;
    /// `wrapsplit::wrap_cut`.
    wrapsplit_wrap_cut: fn(u64, int4, u64) -> Option<int4>;
    /// `wrapsplit::wrap_floor`.
    wrapsplit_wrap_floor: fn(u64) -> u64;
    /// `wrapsplit::wrap_refinement`.
    wrapsplit_wrap_refinement: fn(int4, int4) -> Vec<int4>;
    /// `flow::next_fspec_handle`.
    flow_next_fspec_handle: fn() -> unlace_base::types::uintb;
    /// `callmechanisms::requires_reflow`.
    callmechanisms_requires_reflow: fn(&crate::fspec::FuncProto, &crate::fspec::FuncProto) -> bool;
    /// `callmechanisms::failed`: installing a call mechanism failed, so the pipeline stops.
    callmechanisms_failed: fn(&Funcdata) -> bool;
    /// `unlace_callmechanisms`: a context's `(call_mechanism_effects, call_mechanism_reload_only)`
    /// from the options and the image's ELFv1 TOC fact.
    callmechanisms_effects: fn(&crate::optionset::OptionSet, bool) -> (bool, bool);
    /// `unlace_callmechanisms`: compile the call mechanisms out of the loaded inject library.
    callmechanisms_load: fn(&mut Architecture);
    /// `callmechanisms::compiled_ids` for a prototype model's name.
    callmechanisms_compiled_ids: fn(&Architecture, &str) -> (i32, i32);
    /// `callmechanisms::register`: register the compiler spec's prototype p-code.
    callmechanisms_register: fn(Option<&str>, &AddrSpaceManager, &mut Architecture) -> UnlaceResult<()>;
    /// `unlace_callwide`: drop the whole-image caller proof (the image or its facts changed).
    callwide_clear: fn(&mut crate::archstate::ArchTables);
    /// `unlace_callwide`: revoke the whole-image caller proof through a shared borrow.
    callwide_revoke: fn(&crate::archstate::ArchTables);
    /// `globalcallranges::preserves`: does a completely decoded leaf callee leave the range alone?
    globalcallranges_preserves:
        fn(&mut crate::heritage::GlobalCallRanges, &Funcdata, &FuncCallSpecs, &Address, int4) -> bool;
    /// `unlace_inputhints`: did a pass give any method's `this` input hints?
    inputhints_has_this_hints: fn(&crate::archstate::ArchTables) -> bool;
    /// `unlace_hooks`: register an embedder rule on the architecture's registry.
    hooks_add_rule: fn(
        &mut crate::archstate::ArchTables,
        &str,
        crate::action::RuleState,
        Box<dyn crate::action::Rule>,
    ) -> UnlaceResult<()>;
    /// `unlace_hooks`: register an embedder phase callback on the architecture's registry.
    hooks_on_phase: fn(
        &mut crate::archstate::ArchTables,
        crate::phases::UnlacePhase,
        Box<dyn FnMut(&mut Funcdata)>,
    ) -> UnlaceResult<()>;
    /// `printc`: a new output-language printer (C++ `PrintCLanguageCapability::buildLanguage`).
    printer_new: fn() -> Box<dyn crate::printhandle::PrintHandle>;
    /// `printc`: a default printer, standing in while the owned one is lent out.
    printer_default: fn() -> Box<dyn crate::printhandle::PrintHandle>;
    /// `unlace_lang`: does the output language continue a bottom-tested loop (not Rust's
    /// `loop { ...; if !c { break; } }`)?
    lang_do_while_continue: fn(crate::outlang::OutLang) -> bool;
    /// `unlace_lang`: does the output language promote narrow integer operands as C does?
    lang_int_promotion: fn(crate::outlang::OutLang) -> bool;
    /// `unlace_lang`: does the output language have C's `for` header?
    lang_c_for: fn(crate::outlang::OutLang) -> bool;
    /// `unlace_lang`: the language's real name for a residual unknown
    /// (`TypeSpeller::unknown_base`).
    lang_unknown_base: fn(
        crate::outlang::OutLang,
        int4,
        bool,
        bool,
    ) -> Option<std::borrow::Cow<'static, str>>;
    /// `unlace_calleepurge`: forget the x86-32 callee walks (the host's facts changed).
    calleepurge_forget_walks: fn(&mut crate::archstate::ArchTables);
    /// `unlace_jumpassist`: compile the jump assists out of the loaded inject library.
    jumpassist_load: fn(&mut Architecture);
    /// `unlace_segmentize`: compile the registered segment operations into the states.
    segmentize_build: fn(
        &Architecture,
        Rc<AddrSpaceManager>,
        &[Option<Rc<dyn unlace_num::opbehavior::OpBehavior>>],
        &mut crate::archstate::ArchStates,
    ) -> UnlaceResult<()>;
    /// `callmechanisms::install_at_entry`: straight-line p-code at the start of a block.
    callmechanisms_install_at_entry:
        fn(&mut Funcdata, BlockId, &[crate::emittedop::Operation]) -> UnlaceResult<()>;
    /// `dynamiclocals::bind`.
    dynamiclocals_bind: fn(&mut Funcdata, VarnodeId, &SymbolEntry) -> UnlaceResult<bool>;
    /// `highslice_guard::matches`.
    highslice_guard_matches: fn(&Funcdata, OpId, OpId) -> bool;
    /// `joincalloutput::needs_reflow`.
    joincalloutput_needs_reflow: fn(&Funcdata, &FuncCallSpecs, &FuncProto) -> bool;
    /// `octeoneffects::input_type`.
    octeoneffects_input_type: fn(&Funcdata, OpId, int4) -> Option<Rc<Datatype>>;
    /// `octeoneffects::output_type`.
    octeoneffects_output_type: fn(&Funcdata, OpId) -> Option<Rc<Datatype>>;
    /// `atomics::input_type`.
    atomics_input_type: fn(&Funcdata, OpId, int4) -> Option<Rc<Datatype>>;
    /// `atomics::output_type`.
    atomics_output_type: fn(&Funcdata, OpId) -> Option<Rc<Datatype>>;
    /// `segmentize::table_leaves_image`.
    segmentize_table_leaves_image: fn(&Funcdata, OpId, &[Address]) -> bool;
    /// `switchextent::table_read`.
    switchextent_table_read: fn(&Funcdata, OpId) -> Option<(u64, u64, VarnodeId)>;
    /// `switchtrim::trimmed_rows`.
    switchtrim_trimmed_rows: fn(&Funcdata, &[Address], &[LoadTable], Option<&Vec<int4>>) -> usize;
    /// `varargtransfer::pending_trials`.
    varargtransfer_pending_trials: fn(&Funcdata, &FuncCallSpecs) -> Vec<(ParamTrial, VarnodeId)>;
    /// `fputruncviews::keeps_apart`.
    fputruncviews_keeps_apart: fn(&dyn MergeContext, OpId) -> bool;
    /// `fputruncviews::keeps_highs_apart`.
    fputruncviews_keeps_highs_apart: fn(&dyn MergeContext, HighVariableId, HighVariableId) -> bool;
    /// `fputruncviews::keeps_root_alone`.
    fputruncviews_keeps_root_alone: fn(&dyn MergeContext, HighVariableId, HighVariableId) -> bool;
    /// `globalorder::keeps_apart`.
    globalorder_keeps_apart: fn(&mut dyn MergeContext, VarnodeId, VarnodeId) -> bool;
    /// `globalvalue::keeps_apart`.
    globalvalue_keeps_apart: fn(&mut dyn MergeContext, HighVariableId, HighVariableId) -> bool;
    /// `loadorder::keeps_apart`.
    loadorder_keeps_apart: fn(&mut dyn MergeContext, VarnodeId, VarnodeId) -> bool;
    /// `pointeevalue::keeps_apart`.
    pointeevalue_keeps_apart: fn(&mut dyn MergeContext, VarnodeId, VarnodeId) -> bool;
    /// `tiedphitrim::intersects`.
    tiedphitrim_intersects: fn(&[(VarnodeId, Address)], &mut dyn MergeContext, &mut HighIntersectTest, HighVariableId, HighVariableId) -> bool;
    /// `tiedphitrim::tied_slots`.
    tiedphitrim_tied_slots: fn(&mut dyn MergeContext, OpId) -> Option<(Vec<int4>, Address)>;
    /// `armfloatargs::applies`.
    armfloatargs_applies: fn(&Architecture) -> bool;
    /// `armfloatreturn::applies`.
    armfloatreturn_applies: fn(&Architecture) -> bool;
    /// `armfloatreturn::base_pcs_helper`.
    armfloatreturn_base_pcs_helper: fn(&str) -> bool;
    /// `armfloatreturn::model`.
    armfloatreturn_model: fn(&Rc<ProtoModel>, &AddrSpaceManager, bool) -> Rc<ProtoModel>;
    /// `avxintrin::element_kind`.
    avxintrin_element_kind: fn(&str) -> u8;
    /// `avxintrin::intrinsic`.
    avxintrin_intrinsic: fn(&str, i32) -> Option<(String, Vec<usize>)>;
    /// `chkstkdarwin::applies_to`.
    chkstkdarwin_applies_to: fn(&str) -> bool;
    /// `fastfailnoreturn::archid_is_windows`.
    fastfailnoreturn_archid_is_windows: fn(&str) -> bool;
    /// `litpoolconst::contains`.
    litpoolconst_contains: fn(&[(u64, u64)], u64, u32) -> bool;
    /// `protomerge::merge`.
    protomerge_merge: fn(&PrototypePieces, PrototypePieces) -> PrototypePieces;
    /// `qualifiedcall::prototype`.
    qualifiedcall_prototype: fn(&ArchContext, &Address) -> Option<FuncProto>;
    /// `spsolve::applies`.
    spsolve_applies: fn(&Architecture) -> bool;
    /// `stackparamalign::decode`.
    stackparamalign_decode: fn(&Element, &AddrSpace, i32, i32) -> UnlaceResult<u32>;
    /// `typedcallabi::caller_extends_from`.
    typedcallabi_caller_extends_from: fn(&Architecture) -> i32;
    /// `typedcallabi::image_evidence`.
    typedcallabi_image_evidence: fn(&Architecture) -> Option<bool>;
    /// `typedcallabi::soft_model`.
    typedcallabi_soft_model: fn(&Architecture, Option<bool>) -> Option<Rc<ProtoModel>>;
    /// `typedcallabi::without_fpu`.
    typedcallabi_without_fpu: fn(&Architecture) -> bool;
    /// `vectorabi::model`.
    vectorabi_model: fn(&Rc<ProtoModel>, &AddrSpaceManager) -> Rc<ProtoModel>;
    /// `vfpvariadic::applies`.
    vfpvariadic_applies: fn(&Architecture) -> bool;
    /// `floatregister::storage_size`.
    floatregister_storage_size: fn(&ParamEntry, &Datatype, &AddrSpaceManager) -> i32;
    /// `inputparamgap::trial_is_protected`.
    inputparamgap_trial_is_protected: fn(&ParamActive, &ParamTrial, &[ParamEntry]) -> bool;
    /// `inputrefinement::span_straddles_join`.
    inputrefinement_span_straddles_join: fn((usize, usize), usize, usize, usize) -> bool;
    /// `inputstorage::assign`.
    inputstorage_assign: fn(&ParamListStandard, &PrototypePieces, &dyn TypeFactory, &mut Vec<ParameterPieces>, &AddrSpaceManager, &mut [i32]) -> UnlaceResult<()>;
    /// `narrowext::mark`.
    narrowext_mark: fn(&mut Funcdata, OpId);
    /// `nulterminator::close_at_terminator`.
    nulterminator_close_at_terminator: fn(&RangeHint, &RangeHint, Option<&RangeHint>, &MapState) -> Option<RangeHint>;
    /// `revisitrefine::spanned`.
    revisitrefine_spanned: fn(&[(usize, usize)], usize) -> bool;
    /// `stackaddrargtrial::trial_is_protected`.
    stackaddrargtrial_trial_is_protected: fn(&ParamActive, &ParamTrial, &[ParamEntry]) -> bool;
    /// `stackarggap::address_is_spacebase`.
    stackarggap_address_is_spacebase: fn(&Address) -> bool;
    /// `stackparamalign::effective_alignment`.
    stackparamalign_effective_alignment: fn(u32, i32, i32) -> i32;
    /// `swifterror::is_error_op`.
    swifterror_is_error_op: fn(&PcodeOpBank, &VarnodeBank, OpId) -> bool;
    /// `syscallregs::is_error_flag_op`.
    syscallregs_is_error_flag_op: fn(&PcodeOpBank, &VarnodeBank, OpId) -> bool;
    /// `varargstackargs::stack_section_split`.
    varargstackargs_stack_section_split: fn(&ParamActive, int4, int4) -> Option<int4>;
    /// `calloverlap::auto_register`.
    calloverlap_auto_register: fn(&AddrSpaceManager, &FuncProto, &Address, int4, bool) -> bool;
    /// `partialglobalload::apply`.
    partialglobalload_apply: fn(&mut Funcdata, Vec<Guard>);
    /// `persistcalls::applies`.
    persistcalls_applies: fn(&Funcdata, u32, &Address) -> bool;
    /// `persistcalls::crosses_skipped`.
    persistcalls_crosses_skipped: fn(&Funcdata, VarnodeId, &[(int4, u64, int4)], bool) -> bool;
    /// `persistcalls::keep`.
    persistcalls_keep: fn(&Funcdata, &mut MemoryOps, i32, &[OpId], &[VarnodeId], &[OpId], &[OpId]) -> (FxHashSet<OpId>, FxHashSet<OpId>);
    /// `persistcalls::restart_full`.
    persistcalls_restart_full: fn(&mut Funcdata);
    /// `persistcalls::skip_guard`.
    persistcalls_skip_guard: fn(&mut Funcdata);
    /// `persistcalls::skip_join`.
    persistcalls_skip_join: fn(&mut Funcdata, u32);
    /// `persistcalls::stale_calls`.
    persistcalls_stale_calls: fn(&Funcdata, &[OpId], &FxHashSet<OpId>, &[OpId], &[BlockId]) -> Vec<OpId>;
    /// `persistcalls::stale_inputs`.
    persistcalls_stale_inputs: fn(&Funcdata, &[OpId], &FxHashSet<OpId>, &[OpId], &[BlockId]) -> FxHashSet<OpId>;
    /// `prunedssa::applies`.
    prunedssa_applies: fn(u32, &Address, int4, int4) -> bool;
    /// `prunedssa::applies_to_calls`.
    prunedssa_applies_to_calls: fn(&Funcdata, &Address) -> bool;
    /// `prunedssa::live_calls`.
    prunedssa_live_calls: fn(&Funcdata, &[FuncCallSpecs], &Address, int4, &[VarnodeId], &[OpId], &[OpId]) -> LiveCalls;
    /// `prunedssa::prune_merges`.
    prunedssa_prune_merges: fn(&Funcdata, &Address, int4, &mut Vec<BlockId>) -> bool;
    /// `stackstoreguard::enabled`.
    stackstoreguard_enabled: fn(&Funcdata, &Address, &[VarnodeId]) -> bool;
    /// `stackstoreguard::frame_unresolved`.
    stackstoreguard_frame_unresolved: fn(&Funcdata, &Rc<AddrSpace>, &[LoadGuard]) -> bool;
    /// `stackstoreguard::indexed_enabled`.
    stackstoreguard_indexed_enabled: fn(&Funcdata, &Address, &[VarnodeId]) -> bool;
    /// `stackstoreguard::indexed_stores`.
    stackstoreguard_indexed_stores: fn(&Funcdata, &[LoadGuard], &mut StoreBounds, &Address, int4, &[OpId]) -> Vec<OpId>;
    /// `stackstoreguard::prune_indexed`.
    stackstoreguard_prune_indexed: fn(&mut Funcdata, &[LoadGuard], &mut StoreBounds, &[(OpId, OpId)]);
    /// `calleereginputs::virtual_this`.
    calleereginputs_virtual_this: fn(&Architecture) -> Option<(Rc<ProtoModel>, Address, int4, Address)>;
    /// `fpuemu::apply`.
    fpuemu_apply: fn(&Architecture) -> bool;
    /// `goreg::g_symbol_flags`.
    goreg_g_symbol_flags: fn() -> uint4;
    /// `goreg::goroutine_register`.
    goreg_goroutine_register: fn(&str, Option<(u16, u16)>) -> Option<&'static str>;
    /// `goreg::register_abi`.
    goreg_register_abi: fn(&str, Option<(u16, u16)>) -> bool;
    /// `lanefuse::builtins`.
    lanefuse_builtins: fn() -> Vec<(uint4, String)>;
    /// `mzdgroup::apply`.
    mzdgroup_apply: fn(&Architecture);
    /// `swiftcall::derive_model`.
    swiftcall_derive_model: fn(&Element, &str, &str, Option<&str>, Option<&str>) -> Element;
    /// `dfunaffected::assert_direction_flag_unaffected`.
    dfunaffected_assert_direction_flag_unaffected: fn(&mut ProtoModel, &dyn Fn(&[u8]) -> Option<VarnodeData>);
    /// `inputrefinement::coalesce`.
    inputrefinement_coalesce: fn(&mut [int4], &mut dyn FnMut(usize, usize, usize) -> bool);
    /// `msvcftol::decode_payload`.
    msvcftol_decode_payload: fn(&mut dyn FnMut(&std::rc::Rc<Element>) -> UnlaceResult<()>) -> UnlaceResult<()>;
    /// `msvcftol::language_is_x86_32`.
    msvcftol_language_is_x86_32: fn(&dyn Fn(&[u8]) -> bool, i32) -> bool;
    /// `objcarc::decode_payload`.
    objcarc_decode_payload: fn(&str, &mut dyn FnMut(&std::rc::Rc<Element>) -> UnlaceResult<()>) -> UnlaceResult<()>;
    /// `objcarc::payload_xml`.
    objcarc_payload_xml: fn(&dyn Fn(&[u8]) -> bool, i32) -> Option<String>;
    /// `stackarggap::ends_argument_list`.
    stackarggap_ends_argument_list: fn(&ParamActive, int4, int4, &dyn Fn(int4) -> bool) -> bool;
    /// `swiftcall::swift_registers`.
    swiftcall_swift_registers: fn(&dyn Fn(&str) -> Option<int4>) -> Option<(&'static str, &'static str, &'static str)>;
    /// `switchrunon::own_rows`.
    switchrunon_own_rows: fn(u64, &[u64], &dyn Fn(u64) -> Option<u64>) -> Option<usize>;
    /// `x87intrinsic::decode_prototype`.
    x87intrinsic_decode_prototype: fn(&mut dyn FnMut(&std::rc::Rc<Element>) -> UnlaceResult<()>) -> UnlaceResult<()>;
    /// `retpushedhalf::observe_instruction`.
    retpushedhalf_observe_instruction: fn(&mut Funcdata, &[OpId]);
    /// `armfloatreturn::declared_helper_model`.
    armfloatreturn_declared_helper_model: fn(&ArchContext, &str) -> Option<Rc<ProtoModel>>;
    /// `calleeprotostack::resolve_declared_extra_pop`.
    calleeprotostack_resolve_declared_extra_pop: fn(&mut FuncProto);
    /// `localstackviews::record_native`.
    localstackviews_record_native: fn(&mut Funcdata, OpId);
    /// `passthrough::claim_after_go_stack_guard`.
    passthrough_claim_after_go_stack_guard: fn(&mut Funcdata);
    /// `bitcast::reinterprets_to_float`.
    bitcast_reinterprets_to_float: fn(&Funcdata, VarnodeId) -> bool;
    /// `printc::decl_type_representative`.
    printc_decl_type_representative: fn(&Funcdata, &Architecture, HighVariableId) -> Option<VarnodeId>;
    /// `printc::type_to_c_string`.
    printc_type_to_c_string: fn(&Architecture, &Rc<Datatype>) -> String;
    /// `arithhelpers::decode_payloads`.
    arithhelpers_decode_payloads: fn(HelperAbi, &mut dyn FnMut(&std::rc::Rc<Element>) -> UnlaceResult<()>) -> UnlaceResult<()>;
    /// `arithhelpers::helper_abi`.
    arithhelpers_helper_abi: fn(&dyn Fn(&[u8]) -> bool, i32, bool) -> Option<HelperAbi>;
    /// `lanefuse::mask_builtins`.
    lanefuse_mask_builtins: fn(&mut dyn Iterator<Item = (uint4, &[u8])>) -> Vec<(uint4, String)>;
    /// `switchguardrange::intersect`.
    switchguardrange_intersect: fn(&Funcdata, &[GuardRecord], VarnodeId, &mut CircleRange);
    /// `modelrules::register_ids`.
    modelrules_register_ids: fn(&mut IdRegistry);
    /// `customreturn::input_assignment`.
    customreturn_input_assignment: for<'a> fn(
        &'a PrototypePieces,
        &dyn TypeFactory,
    ) -> UnlaceResult<std::borrow::Cow<'a, PrototypePieces>>;
    /// `arrayextent::settle`.
    arrayextent_settle: fn(&mut MapState, &Rc<AddrSpace>, &dyn TypeFactory);
    /// `goreg::g_pointer_type`.
    goreg_g_pointer_type: fn(&dyn TypeFactory, GoLayout) -> UnlaceResult<std::rc::Rc<Datatype>>;
    /// `narrowext::or_model`.
    narrowext_or_model: fn(Option<Widen>, &ParamListStandard, &Address, i32, Option<&Datatype>, &mut VarnodeData) -> (OpCode, bool);
    /// `passthrough::anchors_neutral_run`.
    passthrough_anchors_neutral_run: fn(&ParamActive, &ParamTrial, bool) -> bool;
    /// `passthrough::ends_rescued_run`.
    passthrough_ends_rescued_run: fn(&ParamActive, &ParamTrial, bool) -> bool;
    /// `passthrough::neutral_in_chain`.
    passthrough_neutral_in_chain: fn(&ParamActive, int4, bool) -> bool;
    /// `registerslots::assumed`.
    registerslots_assumed: fn(&[ParamEntry], &Address, i32, &mut VarnodeData) -> Option<OpCode>;
    /// `registerslots::decode`.
    registerslots_decode: fn(&Element, Option<VarnodeData>, i32, i32, u32) -> UnlaceResult<Option<Extension>>;
    /// `varargretreg::image_vararg_floats`.
    varargretreg_image_vararg_floats: fn(&Architecture) -> VarargFloats;
    /// `varargsave::regs`.
    varargsave_regs: fn(&Architecture) -> Option<Regs>;
    /// `x87emptyreturn::storage`.
    x87emptyreturn_storage: fn(&Architecture) -> Option<Storage>;
    /// `arraysize::fit`.
    arraysize_fit: fn(&RangeHint, intb, intb, &MapState) -> Option<int4>;
    /// `condexeretuse::any_retest_merge`.
    condexeretuse_any_retest_merge: fn(&Funcdata, &[(OpId, VarnodeId)]) -> bool;
    /// `condexeretuse::applies`.
    condexeretuse_applies: fn(&Funcdata, OpId) -> bool;
    /// `condexeretuse::cannot_arrive`.
    condexeretuse_cannot_arrive: fn(&Funcdata, Forced, OpId, &mut Reach) -> bool;
    /// `condexeretuse::carried`.
    condexeretuse_carried: fn(&Funcdata, OpId, VarnodeId, Option<Forced>) -> Option<Forced>;
    /// `loweredswitchvalue::head_compare_operand`.
    loweredswitchvalue_head_compare_operand: fn(&Funcdata, BlockId, OpId, &Address, int4) -> Option<HeadOperand>;
    /// `bejoin::wide_pair`.
    bejoin_wide_pair: fn(&ProtoModel, &AddrSpaceManager) -> Option<WidePair>;
    /// The universal action tree for the architecture: its stack space and embedder hooks
    /// (`universalaction::build_universal_action_hooked`).
    universal_action: fn(&Architecture) -> Box<dyn Action>;
    /// `constselectjump::unlace_destination_is_local`.
    constselectjump_destination_is_local: fn(uintb, uintb) -> bool;
    /// `constselectjump::JumpModelConstSelect::from_flow_targets`.
    constselectjump_from_flow_targets: fn(Vec<uintb>, Option<uintb>) -> Box<dyn JumpModel>;
    /// `constselectjump::recover`.
    constselectjump_recover: fn(&JumpTable, &mut Funcdata, OpId, uint4, uint4) -> UnlaceResult<Option<Box<dyn JumpModel>>>;
    /// `rawswitch::recover`.
    rawswitch_recover: fn(&JumpTable, &mut Funcdata, OpId, uint4, uint4) -> UnlaceResult<Option<Box<dyn JumpModel>>>;
    /// `jumpassist::recover`.
    jumpassist_recover: fn(&mut Funcdata, OpId, uint4, uint4) -> UnlaceResult<Option<Box<dyn JumpModel>>>;
    /// `indexaliasguard::stores_into`.
    indexaliasguard_stores_into: fn(&Funcdata, &Rc<AddrSpace>, &dyn Fn(&Funcdata, VarnodeId) -> Option<Rc<AddrSpace>>) -> Vec<OpId>;
    /// `narrowext::rules`.
    narrowext_rules: fn(&Architecture) -> crate::context::NarrowExtRules;
    /// `syscallregs::userop_ids`.
    syscallregs_userop_ids: fn(&crate::userop::UserOpManage, Option<crate::context::SyscallFamily>) -> Vec<uint4>;
    /// `indexaliasguard::loads_from`.
    indexaliasguard_loads_from: fn(&Funcdata, &Rc<AddrSpace>, &dyn Fn(&Funcdata, VarnodeId) -> Option<Rc<AddrSpace>>) -> Vec<(OpId, Option<(u64, u64)>)>;
    /// `stackvalueorder::moves_write`.
    stackvalueorder_moves_write: fn(&Funcdata, crate::context::HighVariableId, crate::context::HighVariableId) -> bool;
    /// `stackparamviews::separates_parameter`.
    stackparamviews_separates_parameter: fn(&Funcdata, crate::context::HighVariableId, crate::context::HighVariableId) -> bool;
    /// `isolated::holds`.
    isolated_holds: fn(&Funcdata, crate::context::HighVariableId) -> bool;
    /// `stablenames::same_variable`.
    stablenames_same_variable: fn(&Funcdata, crate::context::HighVariableId, crate::context::HighVariableId) -> Option<bool>;
    /// `stablenames::variable_groups`.
    stablenames_variable_groups: fn(&Funcdata, &[crate::context::HighVariableId]) -> Vec<Vec<crate::context::HighVariableId>>;
    /// `pointeevalue::load_crosses_write`.
    pointeevalue_load_crosses_write: fn(&Funcdata, VarnodeId) -> bool;
    /// `loadorder::crosses_global_write`.
    loadorder_crosses_global_write: fn(&mut Funcdata, VarnodeId, Option<crate::context::HighVariableId>) -> bool;
    /// `globalorder::copy_moves_write`.
    globalorder_copy_moves_write: fn(&Funcdata, crate::context::HighVariableId, crate::context::HighVariableId) -> bool;
    /// `guardedreadtrim::guarded_block`.
    guardedreadtrim_guarded_block: fn(&Funcdata, VarnodeId, &[OpId]) -> Option<BlockId>;
    /// `unlace_option_dispatch`: validate and apply a named unlace option.
    set_unlace_option: fn(&mut Architecture, &str, &str) -> UnlaceResult<String>;
}
