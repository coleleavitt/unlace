//! (unlace `ctreehooks`) Embedder callbacks on the C syntax tree, one list per [`CMaturity`]
//! level (`docs/architecture/ctree.md` §10).
//!
//! [`TreeHookRegistry`] lives on the [`Architecture`] and is read by the printer's tree
//! schedule each time a function body is printed: the callbacks of a level are rows of that
//! schedule, run when the tree has reached the level and before the built-in rows that take it
//! to the next one. An empty registry changes nothing. There is no option and no CLI surface;
//! the registry is reachable from code that links the engine ([`ArchTreeHookExt::on_ctree`])
//! and from `unlace::unstable`.
//!
//! A callback gets the tree for writing and the function for reading. The printer prints from
//! the tree and from the structured blocks its statements name (`Stmt::origin`), so it honours
//! the edits the built-in rewrites make: an op taken out of a `Stmts` leaf is not printed, a
//! sequence's statements print in the order the tree lists them, and a statement turned into an
//! empty `Seq` prints nothing.

use std::cell::RefCell;
use std::collections::BTreeMap;

use crate::architecture::Architecture;
use crate::ctree::{CMaturity, CTree};
use crate::funcdata::Funcdata;

/// A callback run on the tree of every printed function at one level.
pub type TreeCallback = Box<dyn FnMut(&mut CTree, &Funcdata)>;

/// The tree callbacks an embedder registered, by the level they run at.
#[derive(Default)]
pub struct TreeHookRegistry {
    levels: BTreeMap<CMaturity, Vec<RefCell<TreeCallback>>>,
}

impl TreeHookRegistry {
    /// Whether nothing is registered.
    pub fn is_empty(&self) -> bool {
        self.levels.is_empty()
    }

    /// Register `callback` at `level`; callbacks of one level run in registration order.
    pub fn on_ctree(&mut self, level: CMaturity, callback: TreeCallback) {
        self.levels
            .entry(level)
            .or_default()
            .push(RefCell::new(callback));
    }

    /// The callbacks registered at `level`, in registration order.
    pub fn callbacks(&self, level: CMaturity) -> &[RefCell<TreeCallback>] {
        self.levels.get(&level).map_or(&[], Vec::as_slice)
    }
}

crate::unlace_arch_table!(TreeHookRegistry);

/// Tree callbacks on the architecture, as `Architecture::on_phase` is for the p-code phases.
pub trait ArchTreeHookExt {
    /// Run `callback` on the C syntax tree of every printed function when the tree reaches
    /// `level` ([`TreeHookRegistry::on_ctree`]).
    fn on_ctree(&mut self, level: CMaturity, callback: impl FnMut(&mut CTree, &Funcdata) + 'static);
}

impl ArchTreeHookExt for Architecture {
    fn on_ctree(
        &mut self,
        level: CMaturity,
        callback: impl FnMut(&mut CTree, &Funcdata) + 'static,
    ) {
        self.unlace_tables
            .get_mut::<TreeHookRegistry>()
            .on_ctree(level, Box::new(callback));
    }
}

#[cfg(test)]
mod tests;
