//! Typed per-architecture state: a kuna pass's architecture-wide tables live in a type it owns.
//!
//! An [`ArchStates`] holds one shared value (`Rc`) per [`ArchState`] type, indexed by a dense
//! [`ArchStateId`] the type takes the first time it is used, the architecture-level counterpart of
//! [`FuncStates`](crate::kuna_funcstate::FuncStates).
//! [`Architecture`](crate::architecture::Architecture) owns one, filled while the specs load, and
//! every [`ArchContext`](crate::context::ArchContext) built from it holds a clone that shares the
//! values, so neither names a pass's type: a pass installs its table with
//! `states.set(Rc::new(value))` and reads it with `states.get::<S>()`. A type never set reads as
//! `None`.

use std::any::Any;
use std::rc::Rc;
use std::sync::atomic::{AtomicUsize, Ordering};

/// The dense index of a registered architecture state type.
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub struct ArchStateId(usize);

impl ArchStateId {
    /// Take the next free index. Called once per state type, from [`kuna_arch_state!`].
    pub fn next() -> ArchStateId {
        static NEXT: AtomicUsize = AtomicUsize::new(0);
        ArchStateId(NEXT.fetch_add(1, Ordering::Relaxed))
    }
}

/// One pass's architecture-wide state.
pub trait ArchState: Any {
    /// This type's index; implement it with [`kuna_arch_state!`].
    fn id() -> ArchStateId;
}

/// Implement [`ArchState`] for a type.
#[macro_export]
macro_rules! kuna_arch_state {
    ($ty:ty) => {
        impl $crate::kuna_archstate::ArchState for $ty {
            #[inline]
            fn id() -> $crate::kuna_archstate::ArchStateId {
                static ID: std::sync::OnceLock<$crate::kuna_archstate::ArchStateId> =
                    std::sync::OnceLock::new();
                *ID.get_or_init($crate::kuna_archstate::ArchStateId::next)
            }
        }
    };
}

/// The architecture-wide state of every pass that installed one; a clone shares the values.
#[derive(Clone, Default)]
pub struct ArchStates {
    slots: Vec<Option<Rc<dyn Any>>>,
}

impl ArchStates {
    /// The state of `S`, when one was installed.
    #[inline]
    pub fn get<S: ArchState>(&self) -> Option<&S> {
        let slot = self.slots.get(S::id().0)?.as_ref()?;
        (**slot).downcast_ref::<S>()
    }

    /// The shared state of `S`, when one was installed.
    pub fn get_rc<S: ArchState>(&self) -> Option<Rc<S>> {
        let slot = self.slots.get(S::id().0)?.clone()?;
        slot.downcast::<S>().ok()
    }

    /// Install (or replace) the state of `S`.
    pub fn set<S: ArchState>(&mut self, value: Rc<S>) {
        let index = S::id().0;
        if self.slots.len() <= index {
            self.slots.resize(index + 1, None);
        }
        let value: Rc<dyn Any> = value;
        self.slots[index] = Some(value);
    }

    /// Drop the state of `S`.
    pub fn remove<S: ArchState>(&mut self) {
        if let Some(slot) = self.slots.get_mut(S::id().0) {
            *slot = None;
        }
    }
}

#[cfg(test)]
mod tests;
