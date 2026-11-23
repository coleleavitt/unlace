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

use std::rc::Rc;

use unlace_base::address::Address;
use unlace_base::space::AddrSpace;
use unlace_base::types::{int4, uint4, uintb};

use unlace_base::error::KunaResult;

use crate::context::{OpId, VarnodeId};
use crate::database::SymbolEntry;
use crate::dtype::Datatype;
use crate::funcdata::Funcdata;
use crate::varmap::AliasChecker;

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
}
