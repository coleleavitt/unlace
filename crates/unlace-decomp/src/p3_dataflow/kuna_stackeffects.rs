//! Memory-effect barriers for unresolved writes through escaped frame pointers.

use crate::context::OpId;
use crate::funcdata::Funcdata;
use unlace_base::address::Address;
use unlace_base::space::spacetype;

pub fn enabled_for(fd: &Funcdata, addr: &Address, size: i32) -> bool {
    (fd.get_arch()
        .kuna_options
        .get::<crate::kuna_coreoptions::StackViews>()
        .0
        || crate::kuna_stackparamviews::preserves_range(fd, addr, 1)
        || crate::kuna_localstackviews::preserves_range(fd, addr, size))
        && addr
            .get_space()
            .is_some_and(|s| s.get_type() == spacetype::IPTR_SPACEBASE)
}

/// A literal global address cannot designate this frame. A pointer reloaded
/// from memory can: its store must start a new memory version of escaped slots.
pub fn unresolved_store(fd: &Funcdata, op: OpId) -> bool {
    fd.obank()
        .get(op)
        .and_then(|o| o.get_in(1))
        .and_then(|v| fd.vbank().get(v))
        .is_some_and(|v| !v.is_constant())
}

/// Fill this pass's hooks ([`crate::kuna_passhooks`]).
pub fn provide(hooks: &mut crate::kuna_passhooks::KunaHookSlots) {
    hooks.stackeffects_enabled_for = Some(enabled_for);
    hooks.stackeffects_unresolved_store = Some(unresolved_store);
}
