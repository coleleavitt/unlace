//! The C syntax tree of a printed function (`docs/architecture/ctree.md`): callbacks that
//! rewrite it before it prints.
//!
//! The engine builds one tree per printed function from the structured control flow, takes it
//! through four levels ([`CMaturity`]) and prints from it. [`Decompiler::with_tree_hook`]
//! registers a callback at one level; the built-in rewrites (`boolreturn`, `orexit`, ...) are
//! rows of the same schedule.

use std::cell::RefCell;
use std::rc::Rc;

use unlace_decomp::architecture::Architecture;
use unlace_decomp::ctreehooks::ArchTreeHookExt as _;

pub use unlace_decomp::context::{BlockId, OpId, VarnodeId};
pub use unlace_decomp::ctree::{CMaturity, CTree, Expr, ExprId, ExprKind, Stmt, StmtId, StmtKind};
pub use unlace_decomp::funcdata::Funcdata;
pub use unlace_num::opcodes::OpCode;

use crate::Decompiler;

type SharedHook = Rc<RefCell<dyn FnMut(&mut CTree, &Funcdata)>>;

/// The tree callbacks of one [`Decompiler`], kept so that every load installs them again.
#[derive(Default)]
pub(crate) struct TreeHooks {
    hooks: Vec<(CMaturity, SharedHook)>,
}

impl TreeHooks {
    /// Register every callback on a freshly loaded architecture.
    pub(crate) fn install(&self, arch: &mut Architecture) {
        for (level, hook) in &self.hooks {
            let hook = Rc::clone(hook);
            arch.on_ctree(*level, move |tree, fd| (hook.borrow_mut())(tree, fd));
        }
    }
}

impl Decompiler {
    /// Run `hook` on the C syntax tree of every function this decompiler prints, when the
    /// tree reaches `level`: `Built` (one statement per structured block), `Statements`
    /// (leaves split into their ops, print plans moved in), `Rewritten` (the built-in
    /// rewrites have run) or `Final` (label lines settled; ready to print). Hooks of one
    /// level run in the order they were added, before the built-in rewrites of that level.
    ///
    /// The hook gets the tree for writing and the function for reading. The printer prints
    /// from the tree and from the structured blocks its statements name, so it honours the
    /// edits the built-in rewrites make: an op removed from a [`StmtKind::Stmts`] leaf is
    /// not printed, a sequence prints its statements in the tree's order, and a statement
    /// replaced by an empty [`StmtKind::Seq`] prints nothing.
    ///
    /// ```no_run
    /// use unlace::unstable::ctree::{CMaturity, OpCode, StmtKind};
    ///
    /// // Print every function without its calls.
    /// let mut decompiler = unlace::Decompiler::open("a.out")?.with_tree_hook(
    ///     CMaturity::Statements,
    ///     |tree, fd| {
    ///         for id in tree.stmt_ids() {
    ///             if let StmtKind::Stmts { ops, .. } = &mut tree.stmt_mut(id).kind {
    ///                 ops.retain(|op| {
    ///                     fd.obank().get(*op).is_none_or(|o| o.code() != OpCode::CPUI_CALL)
    ///                 });
    ///             }
    ///         }
    ///     },
    /// );
    /// println!("{}", decompiler.decompile_named("main")?.c);
    /// # Ok::<(), unlace::Error>(())
    /// ```
    pub fn with_tree_hook(
        mut self,
        level: CMaturity,
        hook: impl FnMut(&mut CTree, &Funcdata) + 'static,
    ) -> Self {
        self.tree_hooks
            .hooks
            .push((level, Rc::new(RefCell::new(hook))));
        self.session = None;
        self
    }
}
