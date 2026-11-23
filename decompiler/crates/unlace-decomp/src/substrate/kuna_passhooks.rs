//! Pass hooks: the IR calls a pass through a table of plain function pointers.
//!
//! Some IR algorithms (`funcdata*`, `heritage`, the cleanup action) need a decision or a
//! helper that a higher pass owns. Calling the pass directly makes the IR depend on it.
//! Instead the IR calls through [`KunaHooks`], held by every
//! [`ArchContext`](crate::context::ArchContext); each pass module fills its slots in a
//! `provide(&mut KunaHookSlots)` function, and the driver composes them once
//! (`universalaction::PASS_HOOKS`). This is rustc's `rustc_middle::hooks`.
//!
//! [`KunaHookSlots::finish`] refuses a table with an empty slot, so the first
//! `ArchContext` of a run checks that every hook is provided.

use std::collections::BTreeSet;
use std::rc::Rc;

use unlace_base::address::Address;
use unlace_base::space::AddrSpace;
use unlace_base::types::{int4, uint4, uintb};

use unlace_base::error::KunaResult;

use crate::context::{BlockId, OpId, VarnodeId};
use crate::database::SymbolEntry;
use crate::dtype::Datatype;
use crate::fspec::{FuncCallSpecs, ParamTrial};
use crate::funcdata::Funcdata;
use crate::varmap::{AliasChecker, LinkEntryInfo};

macro_rules! declare_hooks {
    ($($(#[$attr:meta])* $name:ident: $ty:ty;)*) => {
        /// The pass hooks, every one provided; call one as `(fd.hooks().name)(args)`.
        #[derive(Clone, Copy)]
        pub struct KunaHooks {
            $($(#[$attr])* pub $name: $ty,)*
        }

        /// A [`KunaHooks`] under construction: each pass module's `provide` fills its slots.
        #[derive(Default)]
        pub struct KunaHookSlots {
            $(pub $name: Option<$ty>,)*
        }

        impl KunaHookSlots {
            /// The finished table, or the names of the slots no module provided.
            pub fn finish(self) -> Result<KunaHooks, Vec<&'static str>> {
                match self {
                    KunaHookSlots { $($name: Some($name),)* } => Ok(KunaHooks { $($name,)* }),
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
    };
}

declare_hooks! {
    /// `ScopeLocal::queryProperties` for a local storage range (`funcdata_spacebase`).
    query_local_properties: fn(&Funcdata, &Address, int4, &Address) -> uint4;
    /// The input varnode holding the base register of a spacebase space (`funcdata_spacebase`).
    find_spacebase_input: fn(&Funcdata, &Rc<AddrSpace>) -> Option<VarnodeId>;
    /// An alias checker over the local stack, built on first use (`funcdata_spacebase`).
    build_alias_checker_deferred: fn(&Funcdata) -> Option<AliasChecker>;
    /// Can a pointer reach the stack slot at the offset: a local or a parameter alias
    /// (`funcdata_spacebase`).
    stack_slot_aliased: fn(&Funcdata, &mut AliasChecker, &Rc<AddrSpace>, uintb) -> bool;
    /// Mark a local range not mapped (`funcdata_spacebase`).
    scope_local_mark_not_mapped: fn(&mut Funcdata, &Rc<AddrSpace>, uintb, int4, bool);
    /// (kuna `calltransport`) Is the varnode a call-argument transport (`kuna_calltransport`).
    is_call_transport: fn(&Funcdata, VarnodeId) -> bool;
    /// (kuna `calltransport`) Record the varnode as a call-argument transport.
    record_call_transport: fn(&mut Funcdata, VarnodeId);
    /// (kuna `calltransport`) Is the byte range of the varnode a projection of a transport.
    is_call_transport_projection: fn(&Funcdata, VarnodeId, int4, int4) -> bool;
    /// (kuna `calltransport`) Does the varnode have a use as local storage.
    has_local_storage_use: fn(&Funcdata, VarnodeId) -> bool;
    /// `ActionSetCasts` over the function (`coreaction_casts`).
    action_set_casts: fn(&mut Funcdata) -> int4;
    /// `Varnode::getTypeDefFacing` against the union cache (`funcdata_facing`).
    vn_type_def_facing: fn(&Funcdata, VarnodeId) -> Rc<Datatype>;
    /// `Varnode::getTypeReadFacing` against the union cache (`funcdata_facing`).
    vn_type_read_facing: fn(&Funcdata, VarnodeId, OpId) -> Rc<Datatype>;
    /// Apply a union-facet symbol to its varnode (`funcdata_union`).
    apply_union_facet: fn(&mut Funcdata, &SymbolEntry) -> KunaResult<bool>;
    /// `Funcdata::forceFacingType` (`funcdata_union`).
    force_facing_type: fn(&mut Funcdata, Rc<Datatype>, int4, OpId, int4) -> KunaResult<()>;
    /// `Funcdata::inheritUnionField` (`funcdata_union`).
    inherit_union_field: fn(&mut Funcdata, &Datatype, OpId, int4, OpId, int4) -> int4;
    /// `kuna_calleereginputs::reads_register`.
    calleereginputs_reads_register: fn(&FuncCallSpecs, &Address, int4) -> bool;
    /// `kuna_callresultuse::scores_trial`.
    callresultuse_scores_trial: fn(&Funcdata, VarnodeId, OpId) -> bool;
    /// `kuna_callresultuse::scoring_argument`.
    callresultuse_scoring_argument: fn(&Funcdata, OpId, VarnodeId) -> bool;
    /// `kuna_callresultuse::scoring_return`.
    callresultuse_scoring_return: fn(&Funcdata, OpId, VarnodeId) -> bool;
    /// `kuna_exclusivearguse::access_cannot_reach_call`.
    exclusivearguse_access_cannot_reach_call: fn(&Funcdata, OpId, OpId, VarnodeId) -> bool;
    /// `kuna_exclusivecallret::applies`.
    exclusivecallret_applies: fn(&Funcdata, OpId, &ParamTrial) -> bool;
    /// `kuna_exclusivecallret::skips_use`.
    exclusivecallret_skips_use: fn(&Funcdata, OpId, OpId, VarnodeId, VarnodeId) -> bool;
    /// `kuna_multiregargs::subpiece_drops_reached_piece`.
    multiregargs_subpiece_drops_reached_piece: fn(&Funcdata, OpId, VarnodeId) -> bool;
    /// `kuna_noreturnretuse::call_cannot_reach_return`.
    noreturnretuse_call_cannot_reach_return: fn(&Funcdata, OpId, OpId) -> bool;
    /// `kuna_sharedpush::declared_arm_shares`.
    sharedpush_declared_arm_shares: fn(&Funcdata, OpId, OpId, VarnodeId, &ParamTrial) -> bool;
    /// `kuna_spillargtrial::store_is_caller_save_spill`.
    spillargtrial_store_is_caller_save_spill: fn(&Funcdata, OpId, VarnodeId) -> bool;
    /// `kuna_stackparamviews::backing_for_address`.
    stackparamviews_backing_for_address: fn(&Funcdata, &Address, i32) -> Option<LinkEntryInfo>;
    /// `kuna_stackviews::enabled`.
    stackviews_enabled: fn(&Funcdata) -> bool;
    /// `kuna_syscallregs::is_error_flag`.
    syscallregs_is_error_flag: fn(&Funcdata, OpId) -> bool;
    /// `kuna_syscallregs::reads_as_argument`.
    syscallregs_reads_as_argument: fn(&Funcdata, OpId, VarnodeId) -> bool;
    /// `kuna_voidret::returned_use`.
    voidret_returned_use: fn(&Funcdata, OpId, VarnodeId) -> bool;
    /// `kuna_voidret::scoring_return`.
    voidret_scoring_return: fn(&Funcdata, OpId) -> bool;
    /// `kuna_zeroidiomuse::op_discards_operand`.
    zeroidiomuse_op_discards_operand: fn(&Funcdata, OpId) -> bool;
    /// `coreaction_infertypes::propagate_type_pub`.
    coreaction_infertypes_propagate_type_pub: fn(&mut Funcdata, Rc<Datatype>, OpId, VarnodeId, VarnodeId, int4, int4) -> Option<Rc<Datatype>>;
    /// `kuna_clonephiorder::order_global_phis`.
    clonephiorder_order_global_phis: fn(&Funcdata, &mut [OpId]);
    /// `kuna_indirectanchor::anchor_of`.
    indirectanchor_anchor_of: fn(&Funcdata, OpId) -> Option<OpId>;
    /// `kuna_indirectreturn::target_encoding`.
    indirectreturn_target_encoding: fn(&Funcdata, OpId) -> Option<(i32, u64)>;
    /// `kuna_loweredswitchexact::raw_install_keeps_values`.
    loweredswitchexact_raw_install_keeps_values: fn(&Funcdata, BlockId, &[BlockId]) -> bool;
    /// `kuna_orchain::shortcircuit_shared_targets`.
    orchain_shortcircuit_shared_targets: fn(&Funcdata) -> BTreeSet<BlockId>;
    /// `kuna_retsplitglobal::is_global_store`.
    retsplitglobal_is_global_store: fn(bool, bool, bool, bool) -> bool;
    /// `kuna_retsplitglobal::split_is_declined`.
    retsplitglobal_split_is_declined: fn(bool, usize) -> bool;
    /// `kuna_retsplitlimit::split_is_declined` under the run's `retsplitlimit` option.
    retsplitlimit_split_is_declined: fn(&crate::kuna_optionset::OptionSet, usize, usize) -> bool;
    /// `kuna_rettriangle::is_triangle_join`.
    rettriangle_is_triangle_join: fn(&Funcdata, BlockId) -> bool;
}
