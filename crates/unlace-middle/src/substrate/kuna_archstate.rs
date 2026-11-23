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
//!
//! An [`ArchTables`] is the mutable counterpart, held by `Architecture` alone: one value per
//! [`ArchTable`] type, created with [`Default`] on first use, for the run-wide ledgers and caches
//! a pass keeps across the functions it decompiles (`arch.kuna_tables.get::<T>()`,
//! `arch.kuna_tables.get_mut::<T>()`).

use std::any::Any;
use std::cell::OnceCell;
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

/// One pass's architecture-wide state: any `'static` type. Its index comes from [`state_index`],
/// keyed by `TypeId`, so a pass crate can use a type it does not own (a type alias of an
/// `Option` or a map) without implementing a trait of this crate for it.
pub trait ArchState: Any {
    /// This type's index.
    #[inline]
    fn id() -> ArchStateId
    where
        Self: Sized,
    {
        state_index(std::any::TypeId::of::<Self>())
    }
}

impl<T: Any> ArchState for T {}

/// The dense index of a state or table type, assigned on first use.
pub fn state_index(ty: std::any::TypeId) -> ArchStateId {
    use std::cell::RefCell;
    use std::collections::BTreeMap;
    use std::sync::Mutex;
    static GLOBAL: Mutex<BTreeMap<std::any::TypeId, ArchStateId>> = Mutex::new(BTreeMap::new());
    thread_local! {
        static LOCAL: RefCell<BTreeMap<std::any::TypeId, ArchStateId>> =
            const { RefCell::new(BTreeMap::new()) };
    }
    if let Some(id) = LOCAL.with(|local| local.borrow().get(&ty).copied()) {
        return id;
    }
    let id = *GLOBAL
        .lock()
        .unwrap_or_else(|poisoned| poisoned.into_inner())
        .entry(ty)
        .or_insert_with(ArchStateId::next);
    LOCAL.with(|local| local.borrow_mut().insert(ty, id));
    id
}

/// Kept for the pass modules that register a state type; every `'static` type is one.
#[macro_export]
macro_rules! kuna_arch_state {
    ($ty:ty) => {};
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

    /// The state of `S` for writing: a fresh default when none is installed, a private copy when
    /// a context still shares it (`Rc::make_mut`).
    pub fn make_mut<S: ArchState + Clone + Default>(&mut self) -> &mut S {
        let index = S::id().0;
        if self.slots.len() <= index {
            self.slots.resize(index + 1, None);
        }
        let unique = self.slots[index]
            .as_mut()
            .is_some_and(|slot| Rc::get_mut(slot).is_some_and(|value| value.is::<S>()));
        if !unique {
            let fresh: S = self.slots[index]
                .as_ref()
                .and_then(|slot| (**slot).downcast_ref::<S>())
                .cloned()
                .unwrap_or_default();
            let value: Rc<dyn Any> = Rc::new(fresh);
            self.slots[index] = Some(value);
        }
        Rc::get_mut(self.slots[index].as_mut().expect("slot was just filled"))
            .expect("slot is unshared")
            .downcast_mut::<S>()
            .expect("architecture state slot holds its own type")
    }

    /// Drop the state of `S`.
    pub fn remove<S: ArchState>(&mut self) {
        if let Some(slot) = self.slots.get_mut(S::id().0) {
            *slot = None;
        }
    }
}

/// How many state and table types a process can register.
pub const MAX_ARCH_TABLES: usize = 256;

/// One pass's run-wide mutable table on the architecture: any `'static` type with a default,
/// indexed like [`ArchState`].
pub trait ArchTable: Any + Default {
    /// This type's index.
    #[inline]
    fn id() -> ArchStateId {
        state_index(std::any::TypeId::of::<Self>())
    }
}

impl<T: Any + Default> ArchTable for T {}

/// Kept for the pass modules that register a table type; every `'static + Default` type is one.
#[macro_export]
macro_rules! kuna_arch_table {
    ($ty:ty) => {};
}

/// The run-wide tables of every pass that has used one.
#[derive(Default)]
pub struct ArchTables {
    slots: OnceCell<Box<[OnceCell<Box<dyn Any>>]>>,
}

impl ArchTables {
    fn table(&self) -> &[OnceCell<Box<dyn Any>>] {
        self.slots
            .get_or_init(|| (0..MAX_ARCH_TABLES).map(|_| OnceCell::new()).collect())
    }

    fn index<T: ArchTable>() -> usize {
        let index = T::id().0;
        assert!(
            index < MAX_ARCH_TABLES,
            "more than {MAX_ARCH_TABLES} architecture state types"
        );
        index
    }

    /// The table of `T`, created with its default on first use.
    #[inline]
    pub fn get<T: ArchTable>(&self) -> &T {
        self.table()[Self::index::<T>()]
            .get_or_init(|| Box::new(T::default()))
            .downcast_ref::<T>()
            .expect("architecture table slot holds its own type")
    }

    /// The table of `T` for writing, created with its default on first use.
    #[inline]
    pub fn get_mut<T: ArchTable>(&mut self) -> &mut T {
        let index = Self::index::<T>();
        self.table();
        let cell = &mut self.slots.get_mut().expect("table was just created")[index];
        let _ = cell.get_or_init(|| Box::new(T::default()));
        cell.get_mut()
            .expect("table slot was just filled")
            .downcast_mut::<T>()
            .expect("architecture table slot holds its own type")
    }
}

#[cfg(test)]
mod tests;
