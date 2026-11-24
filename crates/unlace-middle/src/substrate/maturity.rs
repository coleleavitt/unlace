//! (unlace) Maturity: how far the scheduler has got through one pass of the `universal` restart
//! group over a function, and which facts are settled from there on (`docs/spec/00-overview.md`
//! §0.10).
//!
//! The level rises only when a schedule node the driver marked completes
//! ([`ActionBase::settles`](crate::action::ActionBase::settles), advanced by `ActionGroup::apply`),
//! lives in a per-function state slot that `Funcdata::clear` drops, and so falls back to
//! [`Maturity::Raw`] on a restart. It records the schedule; no analysis reads it to decide
//! anything it did not decide before.

use std::fmt;

use crate::funcdata::Funcdata;

/// How far the current pass has got, in schedule order.
#[derive(Clone, Copy, Debug, Default, PartialEq, Eq, PartialOrd, Ord, Hash)]
pub enum Maturity {
    /// No marked node has completed: a freshly built or cleared function.
    #[default]
    Raw,
    /// `start`: the ops are lifted and the block graph is built.
    Lifted,
    /// `funclink` (or `funclink_outonly`): every CALL has its call spec.
    CallsLinked,
    /// `fullloop` reached its fixed point: heritage, parameter/return recovery and type
    /// inference are final for this pass.
    BandB,
    /// The `cleanup` rule pool is done.
    CleanedUp,
    /// `copymarker`: HighVariables are merged.
    Merged,
    /// The final `blockstructure`: the structured block tree exists.
    Structured,
    /// `inputprototype`: the function's own prototype is fixed.
    PrototypeFixed,
    /// `setcasts`: casts are inserted.
    Casts,
    /// `stop`: the pass is over.
    Complete,
}

impl Maturity {
    /// Every level, in order.
    pub const ALL: [Maturity; 10] = [
        Maturity::Raw,
        Maturity::Lifted,
        Maturity::CallsLinked,
        Maturity::BandB,
        Maturity::CleanedUp,
        Maturity::Merged,
        Maturity::Structured,
        Maturity::PrototypeFixed,
        Maturity::Casts,
        Maturity::Complete,
    ];

    /// The level's name as the spec and `phase status` spell it.
    pub fn name(self) -> &'static str {
        match self {
            Maturity::Raw => "raw",
            Maturity::Lifted => "lifted",
            Maturity::CallsLinked => "calls-linked",
            Maturity::BandB => "band-b",
            Maturity::CleanedUp => "cleaned-up",
            Maturity::Merged => "merged",
            Maturity::Structured => "structured",
            Maturity::PrototypeFixed => "prototype-fixed",
            Maturity::Casts => "casts",
            Maturity::Complete => "complete",
        }
    }
}

impl fmt::Display for Maturity {
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {
        f.write_str(self.name())
    }
}

/// A fact a pass can rely on once it is settled.
#[derive(Clone, Copy, Debug, PartialEq, Eq, Hash)]
pub enum Fact {
    /// Heritage has run at least once (the heritage pass counter is non-zero); before it, a
    /// pass sees the pre-SSA window.
    Ssa,
    /// HighVariables are assigned (`assignhigh`, `Funcdata::is_high_on`).
    HighVariables,
    /// [`Maturity::Lifted`].
    Flow,
    /// [`Maturity::CallsLinked`].
    CallSpecs,
    /// [`Maturity::BandB`].
    Dataflow,
    /// [`Maturity::CleanedUp`].
    CleanUp,
    /// [`Maturity::Merged`].
    Merge,
    /// [`Maturity::Structured`].
    BlockStructure,
    /// [`Maturity::PrototypeFixed`].
    Prototype,
    /// [`Maturity::Casts`].
    Casts,
    /// [`Maturity::Complete`].
    Complete,
}

impl Fact {
    /// Every fact.
    pub const ALL: [Fact; 11] = [
        Fact::Ssa,
        Fact::HighVariables,
        Fact::Flow,
        Fact::CallSpecs,
        Fact::Dataflow,
        Fact::CleanUp,
        Fact::Merge,
        Fact::BlockStructure,
        Fact::Prototype,
        Fact::Casts,
        Fact::Complete,
    ];

    /// The level that settles this fact; `None` for a fact read from engine state.
    pub fn level(self) -> Option<Maturity> {
        Some(match self {
            Fact::Ssa | Fact::HighVariables => return None,
            Fact::Flow => Maturity::Lifted,
            Fact::CallSpecs => Maturity::CallsLinked,
            Fact::Dataflow => Maturity::BandB,
            Fact::CleanUp => Maturity::CleanedUp,
            Fact::Merge => Maturity::Merged,
            Fact::BlockStructure => Maturity::Structured,
            Fact::Prototype => Maturity::PrototypeFixed,
            Fact::Casts => Maturity::Casts,
            Fact::Complete => Maturity::Complete,
        })
    }

    /// The fact's name.
    pub fn name(self) -> &'static str {
        match self {
            Fact::Ssa => "ssa",
            Fact::HighVariables => "high-variables",
            Fact::Flow => "flow",
            Fact::CallSpecs => "call-specs",
            Fact::Dataflow => "dataflow",
            Fact::CleanUp => "clean-up",
            Fact::Merge => "merge",
            Fact::BlockStructure => "block-structure",
            Fact::Prototype => "prototype",
            Fact::Casts => "casts",
            Fact::Complete => "complete",
        }
    }
}

impl fmt::Display for Fact {
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {
        f.write_str(self.name())
    }
}

/// The current pass's level and the levels it passed through; dropped by `Funcdata::clear`.
#[derive(Default)]
struct MaturityState {
    level: Maturity,
    reached: Vec<Maturity>,
}

crate::unlace_func_state!(MaturityState, keep_across_clear: false);

/// Whether the full `decompile` drive runs this function, so [`debug_assert_settled!`] holds
/// it to the tree's order; survives a clear.
#[derive(Default)]
struct MaturityTracked(bool);

crate::unlace_func_state!(MaturityTracked, keep_across_clear: true);

impl Funcdata {
    /// How far the current pass has got.
    pub fn maturity(&self) -> Maturity {
        self.unlace_state::<MaturityState>().level
    }

    /// The levels the current pass reached, in the order it reached them.
    pub fn maturity_reached(&self) -> &[Maturity] {
        &self.unlace_state::<MaturityState>().reached
    }

    /// Record that a node settling `level` completed; a lower level changes nothing.
    pub fn advance_maturity(&mut self, level: Maturity) {
        let state = self.unlace_state_mut::<MaturityState>();
        if level > state.level {
            state.level = level;
            state.reached.push(level);
        }
    }

    /// Is `fact` settled for the current pass?
    pub fn is_settled(&self, fact: Fact) -> bool {
        match fact {
            Fact::Ssa => self.get_heritage_pass() != 0,
            Fact::HighVariables => self.is_high_on(),
            _ => fact.level().is_some_and(|level| self.maturity() >= level),
        }
    }

    /// Every settled fact, in [`Fact::ALL`] order.
    pub fn settled_facts(&self) -> Vec<Fact> {
        Fact::ALL
            .into_iter()
            .filter(|&fact| self.is_settled(fact))
            .collect()
    }

    /// Say whether the full `decompile` drive runs this function.
    pub fn set_maturity_tracked(&mut self, tracked: bool) {
        self.unlace_state_mut::<MaturityTracked>().0 = tracked;
    }

    /// Does the full `decompile` drive run this function?
    pub fn maturity_tracked(&self) -> bool {
        self.unlace_state::<MaturityTracked>().0
    }
}

/// The check behind [`debug_assert_settled!`]: panics when a function the full drive runs
/// reaches `site` before `fact` is settled.
#[track_caller]
pub fn check_settled(fd: &Funcdata, fact: Fact, site: &str) {
    if fd.maturity_tracked() && !fd.is_settled(fact) {
        panic!(
            "{site}: {fact} is not settled (maturity {}, function {})",
            fd.maturity(),
            fd.get_name()
        );
    }
}

/// Assert, in debug builds, that a fact is settled where a pass relies on it
/// (`debug_assert_settled!(data, Dataflow)`). Checked only for a function the full
/// `decompile` drive runs ([`Funcdata::maturity_tracked`]).
#[macro_export]
macro_rules! debug_assert_settled {
    ($fd:expr, $fact:ident) => {
        if cfg!(debug_assertions) {
            $crate::maturity::check_settled(
                $fd,
                $crate::maturity::Fact::$fact,
                concat!(file!(), ":", line!()),
            );
        }
    };
}

#[cfg(test)]
mod tests;
