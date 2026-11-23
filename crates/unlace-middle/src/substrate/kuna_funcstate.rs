//! Typed per-function state: each kuna pass keeps its side tables in a type it owns.
//!
//! A [`FuncStates`] holds one value per [`FuncState`] type, indexed by a dense [`StateId`] the
//! type takes the first time it is used, the per-function counterpart of
//! [`OptionSet`](crate::kuna_optionset::OptionSet). [`Funcdata`](crate::funcdata::Funcdata) owns
//! one, so it never names a pass's type: a pass reads its table with
//! `data.kuna_state::<S>()` and writes it with `data.kuna_state_mut::<S>()`. A slot is created
//! with [`Default`] on first use. `Funcdata::clear` drops every slot whose
//! [`FuncState::KEEP_ACROSS_CLEAR`] is false, so the next read starts from the default again.

use std::any::Any;
use std::cell::OnceCell;
use std::sync::atomic::{AtomicUsize, Ordering};

/// How many state types a process can register.
pub const MAX_STATES: usize = 256;

/// The dense index of a registered state type.
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub struct StateId(usize);

impl StateId {
    /// Take the next free index. Called once per state type, from [`kuna_func_state!`].
    pub fn next() -> StateId {
        static NEXT: AtomicUsize = AtomicUsize::new(0);
        let id = NEXT.fetch_add(1, Ordering::Relaxed);
        assert!(
            id < MAX_STATES,
            "more than {MAX_STATES} per-function state types"
        );
        StateId(id)
    }
}

/// One pass's per-function state.
pub trait FuncState: Any + Default {
    /// Does the value survive `Funcdata::clear` (a restart)?
    const KEEP_ACROSS_CLEAR: bool;

    /// This type's index; implement it with [`kuna_func_state!`].
    fn id() -> StateId;
}

/// Implement [`FuncState`] for a type, saying whether it survives `Funcdata::clear`.
#[macro_export]
macro_rules! kuna_func_state {
    ($ty:ty, keep_across_clear: $keep:expr) => {
        impl $crate::kuna_funcstate::FuncState for $ty {
            const KEEP_ACROSS_CLEAR: bool = $keep;

            #[inline]
            fn id() -> $crate::kuna_funcstate::StateId {
                static ID: std::sync::OnceLock<$crate::kuna_funcstate::StateId> =
                    std::sync::OnceLock::new();
                *ID.get_or_init($crate::kuna_funcstate::StateId::next)
            }
        }
    };
}

struct Slot {
    keep: bool,
    value: Box<dyn Any>,
}

/// The per-function state of every pass that has used one.
#[derive(Default)]
pub struct FuncStates {
    slots: OnceCell<Box<[OnceCell<Slot>]>>,
}

impl FuncStates {
    fn table(&self) -> &[OnceCell<Slot>] {
        self.slots
            .get_or_init(|| (0..MAX_STATES).map(|_| OnceCell::new()).collect())
    }

    #[inline]
    fn slot<S: FuncState>(&self) -> &OnceCell<Slot> {
        &self.table()[S::id().0]
    }

    fn fill<S: FuncState>() -> Slot {
        Slot {
            keep: S::KEEP_ACROSS_CLEAR,
            value: Box::new(S::default()),
        }
    }

    /// The state of `S`, created with its default on first use.
    #[inline]
    pub fn get<S: FuncState>(&self) -> &S {
        self.slot::<S>()
            .get_or_init(Self::fill::<S>)
            .value
            .downcast_ref::<S>()
            .expect("per-function state slot holds its own type")
    }

    /// The state of `S` for writing, created with its default on first use.
    pub fn get_mut<S: FuncState>(&mut self) -> &mut S {
        let id = S::id().0;
        self.table();
        let cell = &mut self.slots.get_mut().expect("state table was just created")[id];
        let _ = cell.get_or_init(Self::fill::<S>);
        cell.get_mut()
            .expect("state slot was just filled")
            .value
            .downcast_mut::<S>()
            .expect("per-function state slot holds its own type")
    }

    /// Has `S` been created (and not dropped by a clear) yet?
    pub fn has<S: FuncState>(&self) -> bool {
        self.slots
            .get()
            .is_some_and(|table| table[S::id().0].get().is_some())
    }

    /// Drop every state that does not survive a clear.
    pub fn clear(&mut self) {
        if let Some(table) = self.slots.get_mut() {
            for cell in table.iter_mut() {
                if cell.get().is_some_and(|slot| !slot.keep) {
                    let _ = cell.take();
                }
            }
        }
    }
}

#[cfg(test)]
mod tests;
