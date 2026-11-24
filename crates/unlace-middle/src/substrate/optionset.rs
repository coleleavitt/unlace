//! Typed option registry: each unlace option is a type that lives with the pass reading it.
//!
//! An [`OptionSet`] stores one value per registered [`UnlaceOption`] type, indexed by a dense
//! [`OptionId`] the type takes the first time it is used. [`Architecture`](crate::architecture::Architecture)
//! owns the live set and every [`ArchContext`](crate::context::ArchContext) snapshot carries a copy,
//! so neither names the option types: a pass reads its option with `unlace_options.get::<O>()`, and
//! the driver's dispatch writes it with `unlace_options.set(value)`.

use std::any::Any;
use std::rc::Rc;
use std::sync::atomic::{AtomicUsize, Ordering};

use unlace_base::error::UnlaceResult;

/// The dense index of a registered option type.
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub struct OptionId(usize);

impl OptionId {
    /// Take the next free index. Called once per option type, from [`unlace_option_id!`].
    pub fn next() -> OptionId {
        static NEXT: AtomicUsize = AtomicUsize::new(0);
        OptionId(NEXT.fetch_add(1, Ordering::Relaxed))
    }
}

/// One option's value type.
pub trait UnlaceOption: Any + Clone {
    /// The option's name in `phases.toml` and the dispatch.
    const NAME: &'static str;

    /// This type's index; implement it with [`unlace_option_id!`].
    fn id() -> OptionId;

    /// The value before the shipped defaults are applied: what an [`OptionSet::new`] reads.
    fn unset() -> Self;

    /// The shipped default: what an [`OptionSet`] reads after [`OptionSet::reset_shipped`].
    fn shipped() -> Self;

    /// Parse an option value into the setting and the message the console reports.
    fn parse(value: &str) -> UnlaceResult<(Self, String)>;
}

/// Implement [`UnlaceOption::id`] with a per-type static index.
#[macro_export]
macro_rules! unlace_option_id {
    () => {
        #[inline]
        fn id() -> $crate::optionset::OptionId {
            static ID: std::sync::OnceLock<$crate::optionset::OptionId> =
                std::sync::OnceLock::new();
            *ID.get_or_init($crate::optionset::OptionId::next)
        }
    };
}

/// Declare an `on`/`off` unlace option as a `bool` newtype implementing [`UnlaceOption`].
#[macro_export]
macro_rules! unlace_flag {
    ($(#[$meta:meta])* $ty:ident, $name:literal, $label:literal, unset: $unset:expr, shipped: $shipped:expr) => {
        $(#[$meta])*
        #[derive(Clone, Copy, Debug, PartialEq, Eq)]
        pub struct $ty(pub bool);

        impl $crate::optionset::UnlaceOption for $ty {
            const NAME: &'static str = $name;
            $crate::unlace_option_id!();

            fn unset() -> Self {
                $ty($unset)
            }

            fn shipped() -> Self {
                $ty($shipped)
            }

            fn parse(value: &str) -> unlace_base::error::UnlaceResult<(Self, String)> {
                let on = $crate::options::on_or_off(value)?;
                let state = if on { "on" } else { "off" };
                Ok(($ty(on), format!(concat!($label, " turned {}"), state)))
            }
        }
    };
}

/// The current value of every registered option. Cloning shares the stored values.
#[derive(Clone, Default)]
pub struct OptionSet {
    values: Vec<Option<Rc<dyn Any>>>,
    shipped: bool,
}

impl OptionSet {
    /// A set where every option reads [`UnlaceOption::unset`].
    pub fn new() -> OptionSet {
        OptionSet::default()
    }

    /// Forget every set value; each option then reads its shipped default.
    pub fn reset_shipped(&mut self) {
        self.values.clear();
        self.shipped = true;
    }

    /// The current value of `O`.
    pub fn get<O: UnlaceOption>(&self) -> O {
        let stored = self.values.get(O::id().0).and_then(Option::as_ref);
        match stored.and_then(|value| value.downcast_ref::<O>()) {
            Some(value) => value.clone(),
            None if self.shipped => O::shipped(),
            None => O::unset(),
        }
    }

    /// Set the value of `O`.
    pub fn set<O: UnlaceOption>(&mut self, value: O) {
        let id = O::id().0;
        if self.values.len() <= id {
            self.values.resize(id + 1, None);
        }
        self.values[id] = Some(Rc::new(value));
    }
}
