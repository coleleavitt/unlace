//! (unlace `ctree`) Printing the function body through its C syntax tree
//! (`docs/architecture/ctree.md` §6), for every function not printed flat.
//!
//! `unlace_ctreebuild` builds the tree at `built`, one statement per structured block. The walk
//! here prints the root's statements, a `BlockGraph`'s statements and the leaves itself, and
//! chooses the emitter for every other statement kind (an `if` and its rewrites, the loops, a
//! switch, a list, a goto block); those emitters take their components back through `emit_part`
//! and `emit_block`, and so through the tree. Only an `Opaque` statement (a condition or
//! multi-goto block) reaches the block printer's own dispatch, `emit_block_raw`. Each kind prints
//! what the block printer prints for its origin block, call for call.

use std::cell::RefCell;
use std::collections::BTreeMap;

use super::modifiers;

use unlace_base::types::int4;

use super::{Architecture, Funcdata, PrintC};
use unlace_num::opcodes::OpCode;

use crate::block::BlockType;
use crate::context::BlockId;
use crate::context::OpId;
use crate::context::VarnodeId;
use crate::ctree::{CMaturity, ExprId, ExprKind, StmtId, StmtKind};
use crate::ctreehooks::{TreeCallback, TreeHookRegistry};
use crate::iteboolean::IteBoolMatch;
use crate::iteregion::IteAssignMatch;

/// The form `emit_block_if` gives a two-arm assignment diamond.
pub(super) enum IteForm {
    /// `dest = ( cond );` or `dest = !( cond );` (`iteboolean`).
    Bool(IteBoolMatch),
    /// `dest = ( cond ) ? A : B;` (`iteregion`).
    Ternary(IteAssignMatch),
}
use crate::prettyprint::Emit;

/// One row of the tree schedule: a rewrite of the C syntax tree and the level the tree has
/// when the row runs.
pub(super) struct TreePass<'a> {
    pub name: &'a str,
    pub level: CMaturity,
    run: TreeRun<'a>,
}

/// What a row of the tree schedule runs.
enum TreeRun<'a> {
    /// A built-in rewrite. It reads what only the printer knows: what a leaf prints, its label
    /// and comments, the print plans, the output language.
    Printer(BuiltinRewrite),
    /// A callback an embedder registered (`TreeHookRegistry`).
    Hook(&'a RefCell<TreeCallback>),
}

type BuiltinRewrite = fn(&mut PrintC, &Funcdata, &Architecture);

/// The built-in rows of the tree schedule, in the order they run. The rows of `built` split the
/// leaves into statements and move the print plans into the tree; the rows of `statements` are
/// the structural rewrites, each named after the option or print form it applies; the rows of
/// `rewritten` settle what the printer reads back from the finished tree (the `try` forms of
/// lists, the switch arms, the label lines).
const BUILTIN_REWRITES: [(&str, CMaturity, BuiltinRewrite); 15] = [
    ("statements", CMaturity::Built, |p, fd, _| {
        if let Some(tree) = p.ctree.as_mut() {
            crate::ctreebuild::split_statements(fd, tree);
        }
    }),
    ("plans", CMaturity::Built, |p, _, _| p.ctree_take_plans()),
    ("tryforms", CMaturity::Statements, |p, fd, _| {
        p.ctree_try_forms(fd)
    }),
    ("iteforms", CMaturity::Statements, PrintC::ctree_ite_forms),
    (
        "boolreturn",
        CMaturity::Statements,
        PrintC::ctree_bool_returns,
    ),
    (
        "retternary",
        CMaturity::Statements,
        PrintC::ctree_return_ternaries,
    ),
    (
        "noretfirst",
        CMaturity::Statements,
        PrintC::ctree_noret_first,
    ),
    (
        "returnruns",
        CMaturity::Statements,
        PrintC::ctree_return_runs,
    ),
    ("orexit", CMaturity::Statements, PrintC::ctree_equal_exits),
    (
        "nestedand",
        CMaturity::Statements,
        PrintC::ctree_nested_ands,
    ),
    ("listtries", CMaturity::Rewritten, |p, fd, _| {
        p.ctree_list_tries(fd)
    }),
    ("resttries", CMaturity::Rewritten, |p, fd, _| {
        p.ctree_rest_tries(fd)
    }),
    ("javarests", CMaturity::Rewritten, |p, fd, _| {
        p.ctree_java_rests(fd)
    }),
    ("switcharms", CMaturity::Rewritten, |p, fd, _| {
        p.ctree_switch_arms(fd)
    }),
    ("labels", CMaturity::Rewritten, |p, fd, _| {
        p.ctree_labels(fd)
    }),
];

/// The name a registered callback's row carries.
const HOOK_ROW: &str = "hook";

/// The tree schedule of one print: level by level, lowest first, the callbacks registered at
/// the level (they see the tree as the level defines it) and then the built-in rows that take
/// the tree to the next level.
pub(super) fn tree_schedule(hooks: &TreeHookRegistry) -> impl Iterator<Item = TreePass<'_>> {
    CMaturity::LEVELS.into_iter().flat_map(move |level| {
        let registered = hooks.callbacks(level).iter().map(move |callback| TreePass {
            name: HOOK_ROW,
            level,
            run: TreeRun::Hook(callback),
        });
        let builtin = BUILTIN_REWRITES
            .iter()
            .filter(move |row| row.1 == level)
            .map(|&(name, level, run)| TreePass {
                name,
                level,
                run: TreeRun::Printer(run),
            });
        registered.chain(builtin)
    })
}

impl PrintC {
    /// The function body from the tree's root, when the root is the sequence built from
    /// `sroot` (`emit_block_graph` over the same statements). False when nothing printed.
    pub(super) fn emit_ctree_body(
        &mut self,
        fd: &Funcdata,
        arch: &Architecture,
        sroot: BlockId,
    ) -> bool {
        let Some(children) = self.ctree.as_ref().and_then(|tree| {
            let stmt = tree.stmt(tree.root()?);
            match &stmt.kind {
                StmtKind::Seq(list) if stmt.origin == Some(sroot) => Some(list.clone()),
                _ => None,
            }
        }) else {
            return false;
        };
        for child in children {
            let id = self.emit.begin_block(0);
            self.emit_ctree_arm(fd, arch, child);
            self.emit.end_block(id);
        }
        true
    }

    /// `emit_block`'s tree path: the statement built from `blk`, when the walk models it.
    pub(super) fn emit_ctree_block(
        &mut self,
        fd: &Funcdata,
        arch: &Architecture,
        blk: BlockId,
    ) -> bool {
        let Some(id) = self.ctree.as_ref().and_then(|tree| tree.node_for(blk)) else {
            return false;
        };
        self.emit_ctree_stmt(fd, arch, id)
    }

    /// Component `k` of the structured block `blk` (an `if`'s body or else, a loop's body, a
    /// goto block's body): the statement the tree holds in its place (`CTree::part`), else the
    /// block.
    pub(super) fn emit_part(&mut self, fd: &Funcdata, arch: &Architecture, blk: BlockId, k: int4) {
        let part = self.ctree.as_ref().and_then(|tree| {
            let id = tree.stmt_for(blk)?;
            tree.part(id, usize::try_from(k).ok()?)
        });
        match part {
            Some(id) => self.emit_ctree_arm(fd, arch, id),
            None => {
                let child = fd.sblocks_ref().block(blk).get_block(k);
                self.emit_block(fd, arch, child);
            }
        }
    }

    /// A statement: the walk when it models it, else the block printer on its origin block.
    pub(super) fn emit_ctree_arm(&mut self, fd: &Funcdata, arch: &Architecture, id: StmtId) {
        if self.emit_ctree_stmt(fd, arch, id) {
            return;
        }
        let origin = self.ctree.as_ref().and_then(|tree| tree.stmt(id).origin);
        if let Some(blk) = origin {
            self.emit_block_raw(fd, arch, blk);
        }
    }

    /// (unlace `labelnode`) A `Label` node: the label line of the statement `body` before it. A
    /// copy leaf prints its label and then its statements. A loop head prints its label in the modes
    /// its emitter sets before its own label call, then the loop with that call suppressed
    /// (`label_printed`).
    fn emit_label_node(
        &mut self,
        fd: &Funcdata,
        arch: &Architecture,
        blk: BlockId,
        ty: BlockType,
        body: StmtId,
    ) -> bool {
        if ty == BlockType::Copy {
            self.emit_any_label_statement(fd, blk);
            return self.emit_copy_leaf(fd, arch, body);
        }
        self.context.push_mod();
        self.context
            .unset_mod(modifiers::NO_BRANCH | modifiers::ONLY_BRANCH);
        self.emit_any_label_statement(fd, blk);
        self.context.pop_mod();
        self.label_printed = Some(blk);
        self.emit_ctree_arm(fd, arch, body);
        self.label_printed = None;
        true
    }

    /// The statements of a copy leaf `id` (a `Stmts` or `Ops` statement) without its label line,
    /// which the `Label` node in front of it prints.
    fn emit_copy_leaf(&mut self, fd: &Funcdata, arch: &Architecture, id: StmtId) -> bool {
        let Some(stmt) = self.ctree.as_ref().map(|tree| tree.stmt(id).clone()) else {
            return false;
        };
        match stmt.kind {
            StmtKind::Stmts { leaf, ops } => {
                self.emit_block_copy_body(fd, arch, leaf, Some(ops.as_slice()));
                true
            }
            StmtKind::Ops { leaf } => {
                self.emit_block_copy_body(fd, arch, leaf, None);
                true
            }
            _ => false,
        }
    }

    /// The walk over the kinds it models; false leaves the statement to the block printer.
    fn emit_ctree_stmt(&mut self, fd: &Funcdata, arch: &Architecture, id: StmtId) -> bool {
        let Some(stmt) = self.ctree.as_ref().map(|tree| tree.stmt(id).clone()) else {
            return false;
        };
        let Some(blk) = stmt.origin else {
            return false;
        };
        let ty = fd.sblocks_ref().block(blk).get_type();
        match stmt.kind {
            StmtKind::Label { body } => self.emit_label_node(fd, arch, blk, ty, body),
            StmtKind::Seq(children) if ty == BlockType::Graph => {
                for child in children {
                    let id = self.emit.begin_block(0);
                    self.emit_ctree_arm(fd, arch, child);
                    self.emit.end_block(id);
                }
                true
            }
            StmtKind::Seq(children) if children.is_empty() => true,
            StmtKind::Stmts { leaf, ops } => match ty {
                BlockType::Copy => {
                    self.emit_block_copy_in(fd, arch, leaf, Some(ops.as_slice()));
                    true
                }
                BlockType::Basic => {
                    self.emit_basic_block_ops_in(fd, arch, leaf, false, Some(ops.as_slice()));
                    true
                }
                _ => false,
            },
            StmtKind::Ops { leaf } => match ty {
                BlockType::Copy => {
                    self.emit_block_copy(fd, arch, leaf);
                    true
                }
                BlockType::Basic => {
                    self.emit_block_basic(fd, arch, leaf);
                    true
                }
                _ => false,
            },
            StmtKind::Seq(children) if ty == BlockType::Ls => {
                let list: Vec<BlockId> = fd.sblocks_ref().block(blk).get_list().to_vec();
                self.emit_list_items(fd, arch, blk, &list, Some(children.as_slice()));
                true
            }
            StmtKind::Seq(_) if ty == BlockType::Goto => {
                self.emit_block_goto(fd, arch, blk);
                true
            }
            StmtKind::Seq(_) if ty == BlockType::Condition => {
                self.emit_block_condition(fd, arch, blk);
                true
            }
            StmtKind::Seq(children) if ty == BlockType::MultiGoto => {
                for child in children {
                    self.emit_ctree_arm(fd, arch, child);
                }
                true
            }
            StmtKind::Opaque => false,
            _ if ty == BlockType::If => {
                match self.switch_of(blk) {
                    Some(sw) => self.emit_block_switch(fd, arch, sw),
                    None => self.emit_block_if(fd, arch, blk),
                }
                true
            }
            StmtKind::While { .. } | StmtKind::For { .. } if ty == BlockType::WhileDo => {
                self.emit_block_while_do(fd, arch, blk);
                true
            }
            StmtKind::DoWhile { .. } if ty == BlockType::DoWhile => {
                self.emit_block_do_while(fd, arch, blk);
                true
            }
            StmtKind::Loop { .. } if ty == BlockType::InfLoop => {
                self.emit_block_inf_loop(fd, arch, blk);
                true
            }
            StmtKind::Switch { .. } if ty == BlockType::Switch => {
                self.emit_block_switch(fd, arch, blk);
                true
            }
            _ => false,
        }
    }

    /// Run the tree schedule (`tree_schedule`): every rewrite of the C syntax tree, a built-in
    /// row or a registered callback, at the level it names, lowest level first. The tree is
    /// raised to a row's level before the row runs and to `final` after the last one. With
    /// `UNLACE_STAGE_DIFF` set, each row reports the lines of the tree's dump it changed, as
    /// stage `ctree:<row name>`.
    pub(super) fn ctree_rewrite(&mut self, fd: &Funcdata, arch: &Architecture) {
        let hooks = arch.unlace_tables.get::<TreeHookRegistry>();
        let trace = crate::stagediff::stage_diff_enabled();
        for pass in tree_schedule(hooks) {
            let Some(tree) = self.ctree.as_mut() else {
                return;
            };
            tree.advance(pass.level);
            let before = trace.then(|| tree.dump());
            match pass.run {
                TreeRun::Printer(run) => run(self, fd, arch),
                TreeRun::Hook(callback) => (callback.borrow_mut())(tree, fd),
            }
            if let (Some(before), Some(tree)) = (before, self.ctree.as_ref()) {
                let stage = format!("ctree:{}", pass.name);
                crate::stagediff::trace_stage_diff(fd.get_name(), &stage, &before, &tree.dump());
            }
        }
        if let Some(tree) = self.ctree.as_mut() {
            tree.advance(CMaturity::Final);
        }
    }

    /// The statements an `if` rewrite visits, in arena order: each statement that is its origin
    /// block's own node and whose block is a `BlockIf`, unless an earlier row already gave it
    /// the form `taken` names.
    fn rewritable_ifs(
        &self,
        fd: &Funcdata,
        taken: fn(&StmtKind) -> bool,
    ) -> Vec<(StmtId, BlockId)> {
        let Some(tree) = self.ctree.as_ref() else {
            return Vec::new();
        };
        tree.stmt_ids()
            .into_iter()
            .filter_map(|id| {
                let stmt = tree.stmt(id);
                let blk = stmt.origin?;
                (tree.node_for(blk) == Some(id)
                    && fd.sblocks_ref().block(blk).get_type() == BlockType::If
                    && !taken(&stmt.kind))
                .then_some((id, blk))
            })
            .collect()
    }

    /// [`rewritable_ifs`](Self::rewritable_ifs) in statement position: the `if`s no earlier row
    /// gave a `try`, an assignment or a `return` form, outside conditions.
    fn plain_ifs(&self, fd: &Funcdata, taken: fn(&StmtKind) -> bool) -> Vec<(StmtId, BlockId)> {
        let mut ifs = self.rewritable_ifs(fd, taken);
        if let Some(tree) = self.ctree.as_ref() {
            ifs.retain(|(id, _)| !tree.is_condition(*id));
        }
        ifs
    }

    /// Row `tryforms`: each `if` that opens a DEX `try` statement on its own becomes a
    /// `JavaTry` statement (`javatry`), and each `if` on an `eh_unwinding()` exceptional edge
    /// that prints as a `try` (`eh_try_match`; `itaniumeh`) a `Try` statement. No later row
    /// touches either.
    fn ctree_try_forms(&mut self, fd: &Funcdata) {
        let Some(ids) = self.ctree.as_ref().map(|tree| tree.stmt_ids()) else {
            return;
        };
        for id in ids {
            let Some(blk) = self.ctree.as_ref().and_then(|tree| {
                let stmt = tree.stmt(id);
                let blk = stmt.origin?;
                (tree.node_for(blk) == Some(id) && matches!(stmt.kind, StmtKind::If { .. }))
                    .then_some(blk)
            }) else {
                continue;
            };
            if self
                .java_try_shape(fd, blk, &[])
                .filter(Self::java_try_standalone)
                .is_some()
            {
                if let Some(tree) = self.ctree.as_mut() {
                    tree.stmt_mut(id).kind = StmtKind::JavaTry;
                }
                continue;
            }
            if let Some((cond, normal, pad, handler)) = self.eh_try_match(fd, blk)
                && let Some(tree) = self.ctree.as_mut()
            {
                tree.stmt_mut(id).kind = StmtKind::Try {
                    cond,
                    normal,
                    pad,
                    handler,
                };
            }
        }
    }

    /// Row `iteforms`: each `if` the `iteboolean` or `iteregion` print form applies to (the
    /// same tests, in the same order, `emit_block_if` used to make while printing) becomes the
    /// assignment statement it prints as.
    fn ctree_ite_forms(&mut self, fd: &Funcdata, arch: &Architecture) {
        for (id, blk) in self.rewritable_ifs(fd, is_try_form) {
            let form = match self.ite_boolean_match(fd, blk) {
                Some(m) => Some(IteForm::Bool(m)),
                None => self.ite_ternary_match(fd, arch, blk).map(IteForm::Ternary),
            };
            let (Some(form), Some(tree)) = (form, self.ctree.as_mut()) else {
                continue;
            };
            let assign = match form {
                IteForm::Bool(m) => {
                    let branch = tree.add_expr(ExprKind::Branch(m.cond_block));
                    let value = if m.negate {
                        tree.add_expr(ExprKind::Not(branch))
                    } else {
                        branch
                    };
                    ExprKind::Assign {
                        dest: m.dest,
                        value,
                        op: m.assign_op,
                    }
                }
                IteForm::Ternary(m) => {
                    let cond = tree.add_expr(ExprKind::Branch(m.cond_block));
                    let yes = tree.add_expr(ExprKind::Op(m.true_op));
                    let no = tree.add_expr(ExprKind::Op(m.else_op));
                    let value = tree.add_expr(ExprKind::Ternary(cond, yes, no));
                    ExprKind::Assign {
                        dest: m.dest,
                        value,
                        op: m.true_op,
                    }
                }
            };
            let expr = tree.add_expr(assign);
            tree.stmt_mut(id).kind = StmtKind::Expr(expr);
        }
    }

    /// Row `boolreturn` (`option boolreturn`, C output): an `if` whose arms only return `1`
    /// and `0` becomes `return c` or `return !c` (`bool_return_shape`).
    fn ctree_bool_returns(&mut self, fd: &Funcdata, arch: &Architecture) {
        if !arch.unlace_options.get::<crate::ctree::Boolreturn>().0
            || self.out_lang != crate::lang::OutLang::C
        {
            return;
        }
        for (id, blk) in self.plain_ifs(fd, is_ite_form) {
            let Some((cond_block, ret_op, negate)) = self.bool_return_shape(fd, blk) else {
                continue;
            };
            let Some(tree) = self.ctree.as_mut() else {
                continue;
            };
            let branch = tree.add_expr(ExprKind::Branch(cond_block));
            let value = if negate {
                tree.add_expr(ExprKind::Not(branch))
            } else {
                branch
            };
            tree.stmt_mut(id).kind = StmtKind::Return {
                value: Some(value),
                op: Some(ret_op),
            };
        }
    }

    /// Row `retternary` (`option retternary`, C output): an `if` whose arms only return a
    /// constant or a variable becomes one `return` (`return_ternary_shape`).
    fn ctree_return_ternaries(&mut self, fd: &Funcdata, arch: &Architecture) {
        if !arch.unlace_options.get::<crate::ctree::Retternary>().0
            || self.out_lang != crate::lang::OutLang::C
        {
            return;
        }
        for (id, blk) in self.plain_ifs(fd, is_value_form) {
            let Some((cond_block, ret_op, shape)) = self.return_ternary_shape(fd, blk) else {
                continue;
            };
            let Some(tree) = self.ctree.as_mut() else {
                continue;
            };
            let cond = tree.add_expr(ExprKind::Branch(cond_block));
            let value = match shape {
                ReturnValue::Ternary { yes, no } => {
                    let yes = tree.add_expr(ExprKind::Op(yes));
                    let no = tree.add_expr(ExprKind::Op(no));
                    tree.add_expr(ExprKind::Ternary(cond, yes, no))
                }
                ReturnValue::Logic { negate, and, other } => {
                    let left = if negate {
                        tree.add_expr(ExprKind::Not(cond))
                    } else {
                        cond
                    };
                    let right = tree.add_expr(ExprKind::Op(other));
                    tree.add_expr(if and {
                        ExprKind::And(left, right)
                    } else {
                        ExprKind::Or(left, right)
                    })
                }
            };
            tree.stmt_mut(id).kind = StmtKind::Return {
                value: Some(value),
                op: Some(ret_op),
            };
        }
    }

    /// Row `noretfirst` (`option noretfirst`, C output): [`noret_first`](Self::noret_first) on
    /// each `if` no earlier row rewrote.
    fn ctree_noret_first(&mut self, fd: &Funcdata, arch: &Architecture) {
        if !arch.unlace_options.get::<crate::ctree::Noretfirst>().0
            || self.out_lang != crate::lang::OutLang::C
        {
            return;
        }
        for (id, blk) in self.plain_ifs(fd, is_value_form) {
            self.noret_first(fd, id, blk);
        }
    }

    /// Row `returnruns` (`option boolreturn`, C output): fold each `if`/`else` of two run
    /// values (`fold_return_ite`) and each list's trailing run of guards (`fold_return_run`)
    /// into one `return`.
    fn ctree_return_runs(&mut self, fd: &Funcdata, arch: &Architecture) {
        if !arch.unlace_options.get::<crate::ctree::Boolreturn>().0
            || self.out_lang != crate::lang::OutLang::C
        {
            return;
        }
        let ids = self
            .ctree
            .as_ref()
            .map(|tree| {
                let mut ids = tree.stmt_ids();
                ids.retain(|id| !tree.is_condition(*id));
                ids
            })
            .unwrap_or_default();
        for id in ids {
            self.fold_return_ite(fd, id);
            self.fold_return_run(fd, id);
        }
    }

    /// Row `orexit` (`option orexit`, C output): [`fold_equal_exits`](Self::fold_equal_exits)
    /// on every sequence, an `if` before the statements inside it.
    fn ctree_equal_exits(&mut self, fd: &Funcdata, arch: &Architecture) {
        if !arch.unlace_options.get::<crate::ctree::Orexit>().0
            || self.out_lang != crate::lang::OutLang::C
        {
            return;
        }
        for id in ids_rev(self.ctree.as_ref()) {
            self.fold_equal_exits(fd, id);
        }
    }

    /// Row `nestedand` (`option nestedand`, C output): [`fold_nested_and`](Self::fold_nested_and)
    /// on every `if`, until it folds no more.
    fn ctree_nested_ands(&mut self, fd: &Funcdata, arch: &Architecture) {
        if !arch.unlace_options.get::<crate::ctree::Nestedand>().0
            || self.out_lang != crate::lang::OutLang::C
        {
            return;
        }
        for id in ids_rev(self.ctree.as_ref()) {
            while self.fold_nested_and(fd, id) {}
        }
    }

    /// (unlace `itaniumeh`) Record on each list sequence the `try` form `emit_list_items`
    /// prints it in (`eh_list_try_match`).
    fn ctree_list_tries(&mut self, fd: &Funcdata) {
        let lists: Vec<(StmtId, BlockId)> = match self.ctree.as_ref() {
            Some(tree) => tree
                .stmt_ids()
                .into_iter()
                .filter_map(|id| {
                    let stmt = tree.stmt(id);
                    let blk = stmt.origin?;
                    (tree.node_for(blk) == Some(id)
                        && matches!(stmt.kind, StmtKind::Seq(_))
                        && fd.sblocks_ref().block(blk).get_type() == BlockType::Ls)
                        .then_some((id, blk))
                })
                .collect(),
            None => return,
        };
        for (id, blk) in lists {
            let list: Vec<BlockId> = fd.sblocks_ref().block(blk).get_list().to_vec();
            if let Some(found) = self.eh_list_try_match(fd, blk, &list)
                && let Some(tree) = self.ctree.as_mut()
            {
                tree.set_list_try(id, found);
            }
            if self.java_catches.is_some()
                && self.list_has_java_try(fd, &list)
                && let Some(tree) = self.ctree.as_mut()
            {
                tree.set_java_list(id);
            }
        }
    }

    /// The test `emit_any_label_statement` makes for the block `blk` in C: a label line for its
    /// front leaf when that leaf is an unstructured target that is not a label-free join.
    fn label_line_wanted(&self, fd: &Funcdata, blk: BlockId) -> bool {
        let sb = fd.sblocks_ref();
        if sb.block(blk).is_label_bump_up() {
            return false;
        }
        let Some(front) = sb.get_front_leaf(blk) else {
            return false;
        };
        let leaf = sb.block(front);
        leaf.is_unstructured_target()
            && !self.goto_rewrites.labels.contains(&front)
            && leaf.get_type() == BlockType::Copy
    }

    /// (unlace `labelnode`) Decide the C label lines in the tree once the rewrites are done. Records,
    /// for every block the tree holds, whether the printer prints a label line for it
    /// (`label_line_wanted`), then wraps each copy leaf that gets one in a `Label` node that prints
    /// the label and then the leaf. Only the C colon form, and not Go (its suppression set is filled
    /// while printing); flat printing and any block past the depth bound keep the block printer's
    /// own call.
    fn ctree_labels(&mut self, fd: &Funcdata) {
        if self.out_lang == crate::lang::OutLang::Go
            || !matches!(self.lang().forms.label, crate::lang::LabelForm::CColon)
        {
            return;
        }
        let Some(tree) = self.ctree.as_ref() else {
            return;
        };
        let lines: BTreeMap<BlockId, bool> = tree
            .stmt_ids()
            .into_iter()
            .filter_map(|id| tree.stmt(id).origin)
            .map(|blk| (blk, self.label_line_wanted(fd, blk)))
            .collect();
        let leaves: Vec<StmtId> = tree
            .stmt_ids()
            .into_iter()
            .filter(|&id| {
                let stmt = tree.stmt(id);
                stmt.origin.is_some_and(|blk| {
                    tree.node_for(blk) == Some(id)
                        && lines.get(&blk) == Some(&true)
                        && labelled_kind(&stmt.kind, fd.sblocks_ref().block(blk).get_type())
                })
            })
            .collect();
        let Some(tree) = self.ctree.as_mut() else {
            return;
        };
        tree.set_label_lines(lines);
        if leaves.is_empty() {
            return;
        }
        let parents = tree.stmt_ids();
        let wrapped: BTreeMap<StmtId, StmtId> = leaves
            .iter()
            .map(|&leaf| (leaf, tree.wrap_label(leaf)))
            .collect();
        for parent in parents {
            for child in tree.children(parent) {
                if let Some(&label) = wrapped.get(&child) {
                    tree.replace_child(parent, child, label);
                }
            }
        }
        if let Some(root) = tree.root()
            && let Some(&label) = wrapped.get(&root)
        {
            tree.set_root(label);
        }
    }

    /// Whether the printer's `label_dangling()` test is true after the arm `arm` (case `case`) is
    /// printed, when that can be proved from the arm alone: a plain arm whose case block is a copy
    /// leaf with a label line and no ops that print. The label is the last thing the arm prints.
    fn arm_ends_on_label(
        &self,
        fd: &Funcdata,
        arm: &crate::switchmerge::PlannedCase,
        case: &crate::block::CaseOrder,
    ) -> bool {
        if arm.guard.is_some() || arm.skip > 0 || case.gototype != 0 {
            return false;
        }
        let sb = fd.sblocks_ref();
        if sb.block(case.block).get_type() != BlockType::Copy
            || !self.label_line_wanted(fd, case.block)
        {
            return false;
        }
        sb.block(case.block)
            .get_copy()
            .is_some_and(|under| self.ops_print_nothing(fd, under))
    }

    /// Record on each switch, per printed arm, the choices `emit_block_switch_c` makes for it:
    /// whether the arm ends in a `break` on its own account (`isexit` and not the last arm), and
    /// the goto type of a bare-goto arm (`case_gototype`, none for a guard or a block arm). The
    /// arms are `switch_arms`, the list the printer walks, and each value is the test the printer
    /// made. A case the arm list names but the switch does not hold leaves no record.
    fn ctree_switch_arms(&mut self, fd: &Funcdata) {
        let switches: Vec<(StmtId, BlockId)> = match self.ctree.as_ref() {
            Some(tree) => tree
                .stmt_ids()
                .into_iter()
                .filter_map(|id| {
                    let stmt = tree.stmt(id);
                    let blk = stmt.origin?;
                    (tree.node_for(blk) == Some(id)
                        && matches!(stmt.kind, StmtKind::Switch { .. })
                        && fd.sblocks_ref().block(blk).get_type() == BlockType::Switch)
                        .then_some((id, blk))
                })
                .collect(),
            None => return,
        };
        for (id, blk) in switches {
            let arms = self.switch_arms(fd, blk);
            let last = arms.len().checked_sub(1);
            let records: Option<Vec<crate::ctree::ArmRecord>> = arms
                .iter()
                .enumerate()
                .map(|(i, arm)| {
                    let owner = fd.sblocks_ref().block(arm.owner);
                    let case = owner.switch_caseblocks().get(arm.index)?;
                    let goto = (arm.guard.is_none() && case.gototype != 0).then(|| {
                        self.goto_rewrites
                            .case_gototype(arm.owner, case.block, case.gototype)
                    });
                    let ends_on_label = Some(i) == last && self.arm_ends_on_label(fd, arm, case);
                    Some(crate::ctree::ArmRecord {
                        exit_break: case.isexit && Some(i) != last,
                        goto,
                        ends_on_label,
                    })
                })
                .collect();
            if let Some(records) = records
                && let Some(tree) = self.ctree.as_mut()
            {
                tree.set_switch_arms(id, records);
            }
        }
    }

    /// The choices the tree recorded for arm `index` of the switch `blk` (`ctree_switch_arms`),
    /// when it holds a record for that switch.
    pub(super) fn tree_switch_arm(
        &self,
        blk: BlockId,
        index: usize,
    ) -> Option<crate::ctree::ArmRecord> {
        let tree = self.ctree.as_ref()?;
        tree.switch_arm(tree.node_for(blk)?, index)
    }

    /// The statement sequences of the tree whose list the printer prints from a rest: each list
    /// and graph sequence, with its block. Empty without a tree.
    fn list_seqs(&self, fd: &Funcdata) -> Vec<(StmtId, BlockId)> {
        let Some(tree) = self.ctree.as_ref() else {
            return Vec::new();
        };
        tree.stmt_ids()
            .into_iter()
            .filter_map(|id| {
                let stmt = tree.stmt(id);
                let blk = stmt.origin?;
                (tree.node_for(blk) == Some(id)
                    && matches!(stmt.kind, StmtKind::Seq(_))
                    && matches!(
                        fd.sblocks_ref().block(blk).get_type(),
                        BlockType::Ls | BlockType::Graph
                    ))
                .then_some((id, blk))
            })
            .collect()
    }

    /// (unlace `itaniumeh`) Record on each list and graph sequence the `try` form of every rest
    /// of it: `eh_list_try_match` on `list[skip..]`, the match a switch arm or goto block
    /// printed from `skip` used to make while printing (`list_try_form`). The match reads only
    /// the function and the language, so it gives the same form at either point.
    fn ctree_rest_tries(&mut self, fd: &Funcdata) {
        if crate::itaniumeh::eh_table(fd.get_arch()).is_none() {
            return;
        }
        for (id, blk) in self.list_seqs(fd) {
            let list: Vec<BlockId> = fd.sblocks_ref().block(blk).get_list().to_vec();
            if list.len() > MAX_REST_TRIES {
                continue;
            }
            let rests: Vec<Option<crate::ctree::ListTry>> = (0..list.len())
                .map(|skip| self.eh_list_try_match(fd, blk, &list[skip..]))
                .collect();
            if let Some(tree) = self.ctree.as_mut() {
                tree.set_rest_tries(id, rests);
            }
        }
    }

    /// (unlace `javatry`) Record on each list and graph sequence whether each rest of it holds a
    /// DEX `try` dispatch: `list_has_java_try` on `list[skip..]`, the test a rest printed from
    /// `skip` used to make while printing (`list_java_try`). It reads the function and the
    /// Java catch table, which is fixed before the body prints.
    fn ctree_java_rests(&mut self, fd: &Funcdata) {
        if self.java_catches.is_none() {
            return;
        }
        for (id, blk) in self.list_seqs(fd) {
            let list: Vec<BlockId> = fd.sblocks_ref().block(blk).get_list().to_vec();
            if list.len() > MAX_REST_TRIES {
                continue;
            }
            let rests: Vec<bool> = (0..list.len())
                .map(|skip| self.list_has_java_try(fd, &list[skip..]))
                .collect();
            if let Some(tree) = self.ctree.as_mut() {
                tree.set_java_rests(id, rests);
            }
        }
    }

    /// (unlace `javatry`) Does the `BlockIf` `blk` print as a DEX `try` on its own? The
    /// tree's `JavaTry` statement (`ctree_rewrite`); for an `if` the tree holds no
    /// statement for, the match itself.
    pub(super) fn is_java_try(&self, fd: &Funcdata, blk: BlockId) -> bool {
        match self.ctree.as_ref().and_then(|tree| tree.node_for(blk)) {
            Some(id) => self
                .ctree
                .as_ref()
                .is_some_and(|tree| matches!(tree.stmt(id).kind, StmtKind::JavaTry)),
            None => self
                .java_try_shape(fd, blk, &[])
                .filter(Self::java_try_standalone)
                .is_some(),
        }
    }

    /// (unlace `javatry`) Do the blocks `list` of `blk` print through the Java `try` list
    /// printer? What the tree recorded for `blk`'s sequence when `list` is all of it, else
    /// the match itself.
    pub(super) fn list_java_try(&self, fd: &Funcdata, blk: BlockId, list: &[BlockId]) -> bool {
        if self.java_catches.is_none() {
            return false;
        }
        let full = fd.sblocks_ref().block(blk).get_list();
        let whole = full.len() == list.len();
        if let Some(tree) = self.ctree.as_ref()
            && let Some(id) = tree.node_for(blk)
        {
            if whole {
                return tree.is_java_list(id);
            }
            let rest = full
                .len()
                .checked_sub(list.len())
                .filter(|&skip| full[skip..] == *list)
                .and_then(|skip| tree.java_rest(id, skip));
            if let Some(found) = rest {
                return found;
            }
        }
        self.list_has_java_try(fd, list)
    }

    /// (unlace `itaniumeh`) The landing pad of the `try` printed around the block `blk`: the
    /// nearest enclosing `try` whose normal path holds `blk`, a `Try` statement (`try_form`)
    /// whose normal arm is on `blk`'s parent chain or a list's `try` form (`list_try_form`)
    /// whose `if`'s normal path is. Printing descends only into a block's components, so this
    /// is the pad `emit_eh_try` holds open while `blk` prints; without a tree, that pad.
    pub(super) fn open_try_pad(&self, fd: &Funcdata, blk: BlockId) -> Option<u64> {
        if self.ctree.is_none() {
            return self.eh_open_pad;
        }
        crate::itaniumeh::eh_table(fd.get_arch())?;
        let sb = fd.sblocks_ref();
        let mut child = blk;
        for _ in 0..(1usize << 16) {
            let parent = sb.block(child).get_parent()?;
            if sb.block(parent).get_type() == BlockType::If {
                if let Some((_, Some(normal), pad, _)) = self.try_form(fd, parent)
                    && normal == child
                {
                    // A Java `try` prints before it, and an `if` on the enclosing `try`'s
                    // own edge prints its arms without opening a `try`: either way the
                    // enclosing pad stays open.
                    let outer = self.open_try_pad(fd, parent);
                    let java = self.is_java_try(fd, parent);
                    if java || (outer.is_some() && self.eh_if_target(fd, parent) == outer) {
                        return outer;
                    }
                    return Some(pad);
                }
                if sb.block(parent).get_size() == 2
                    && sb.block(parent).get_block(1) == child
                    && let Some(ls) = sb.block(parent).get_parent()
                    && sb.block(ls).get_type() == BlockType::Ls
                {
                    let list: Vec<BlockId> = sb.block(ls).get_list().to_vec();
                    if let Some(form) = self.list_try_form(fd, ls, &list)
                        && list.get(form.at) == Some(&parent)
                    {
                        return Some(form.pad);
                    }
                }
            }
            child = parent;
        }
        None
    }

    /// (unlace `itaniumeh`) The `try` form of the blocks `list` of `blk`: the one the tree
    /// recorded for `blk`'s sequence when `list` is all of it, else the match itself (the rest
    /// of a switch arm or goto block, or a list the tree holds no sequence for).
    pub(super) fn list_try_form(
        &self,
        fd: &Funcdata,
        blk: BlockId,
        list: &[BlockId],
    ) -> Option<crate::ctree::ListTry> {
        let full = fd.sblocks_ref().block(blk).get_list();
        let whole = full.len() == list.len();
        if let Some(tree) = self.ctree.as_ref()
            && let Some(id) = tree.node_for(blk)
        {
            if whole {
                return tree.list_try(id);
            }
            let rest = full
                .len()
                .checked_sub(list.len())
                .filter(|&skip| full[skip..] == *list)
                .and_then(|skip| tree.rest_try(id, skip));
            if let Some(found) = rest {
                return found;
            }
        }
        self.eh_list_try_match(fd, blk, list)
    }

    /// The assignment form of the `BlockIf` `blk`, if any. With a tree, the tree decides: an
    /// `if` it rewrote to an assignment prints in that form, any other statement as an `if`.
    /// Without one, the `iteboolean` test, then the `iteregion` test.
    pub(super) fn ite_form(
        &self,
        fd: &Funcdata,
        arch: &Architecture,
        blk: BlockId,
    ) -> Option<IteForm> {
        let node = self
            .ctree
            .as_ref()
            .and_then(|tree| Some((tree, tree.node_for(blk)?)));
        if let Some((tree, id)) = node {
            let StmtKind::Expr(expr) = &tree.stmt(id).kind else {
                return None;
            };
            let ExprKind::Assign { value, .. } = &tree.expr(*expr).kind else {
                return None;
            };
            return match &tree.expr(*value).kind {
                ExprKind::Ternary(..) => {
                    crate::iteregion::match_ite_assignment(fd, blk).map(IteForm::Ternary)
                }
                _ => crate::iteboolean::match_ite_boolean(fd, blk).map(IteForm::Bool),
            };
        }
        if let Some(m) = self.ite_boolean_match(fd, blk) {
            return Some(IteForm::Bool(m));
        }
        self.ite_ternary_match(fd, arch, blk).map(IteForm::Ternary)
    }

    /// (unlace `itaniumeh`) The `try` form the tree gave the `BlockIf` `blk`
    /// (`eh_try_match`, run by `ctree_rewrite`); for an `if` the tree holds no statement for
    /// (below the builder's depth bound), the match itself.
    pub(super) fn try_form(
        &self,
        fd: &Funcdata,
        blk: BlockId,
    ) -> Option<(BlockId, Option<BlockId>, u64, BlockId)> {
        let Some(tree) = self.ctree.as_ref() else {
            return self.eh_try_match(fd, blk);
        };
        let Some(id) = tree.node_for(blk) else {
            return self.eh_try_match(fd, blk);
        };
        match tree.stmt(id).kind {
            StmtKind::Try {
                cond,
                normal,
                pad,
                handler,
            } => Some((cond, normal, pad, handler)),
            _ => None,
        }
    }

    /// The `return` form the tree gave the `BlockIf` `blk`: its condition block, the body's
    /// `RETURN` op and the returned value.
    pub(super) fn return_form(&self, blk: BlockId) -> Option<(BlockId, OpId, ExprId)> {
        let tree = self.ctree.as_ref()?;
        let StmtKind::Return {
            value: Some(value),
            op: Some(op),
        } = &tree.stmt(tree.stmt_for(blk)?).kind
        else {
            return None;
        };
        Some((first_branch(tree, *value)?, *op, *value))
    }

    /// An `if`/`else` (no goto) whose body and else each print one statement, `return 1;`
    /// and `return 0;` in either order: the condition block, the body's `RETURN` and whether
    /// the body returns `0` (so the condition prints negated).
    fn bool_return_shape(&mut self, fd: &Funcdata, blk: BlockId) -> Option<(BlockId, OpId, bool)> {
        let block = fd.sblocks_ref().block(blk);
        if block.get_size() != 3 || block.get_if_goto_target().is_some() {
            return None;
        }
        let (cond_block, body, other) =
            (block.get_block(0), block.get_block(1), block.get_block(2));
        let (ret_op, body_value) = self.single_const_return(fd, body)?;
        let (_, other_value) = self.single_const_return(fd, other)?;
        match (body_value, other_value) {
            (1, 0) if self.cond_is_boolean(fd, cond_block) => Some((cond_block, ret_op, false)),
            (0, 1) => Some((cond_block, ret_op, true)),
            _ => None,
        }
    }

    /// A `BlockCopy` leaf with no label line and no comment that prints exactly one
    /// statement, a `RETURN` of a value: that op and the value.
    fn single_return(&mut self, fd: &Funcdata, leaf: BlockId) -> Option<(OpId, VarnodeId)> {
        if fd.sblocks_ref().block(leaf).get_type() != BlockType::Copy {
            return None;
        }
        if !fd.sblocks_ref().block(leaf).is_label_bump_up()
            && let Some(front) = fd.sblocks_ref().get_front_leaf(leaf)
            && fd.sblocks_ref().block(front).is_unstructured_target()
            && !self.goto_rewrites.labels.contains(&front)
        {
            return None;
        }
        let under = fd.sblocks_ref().block(leaf).get_copy()?;
        let mut printed = None;
        let mut cur = fd.bb_op_head(under);
        while let Some(inst) = cur {
            cur = fd.bb_op_next(inst);
            let Some(o) = fd.obank().get(inst) else {
                continue;
            };
            if self.is_suppressed_statement(fd, inst) || o.is_branch() {
                continue;
            }
            if let Some(out) = o.get_out()
                && fd.vbank().get(out).is_some_and(|v| v.is_implied())
                && crate::stackbytes::assignment(fd, inst).is_none()
            {
                continue;
            }
            if printed.is_some() {
                return None;
            }
            printed = Some(inst);
        }
        let ret = printed?;
        let o = fd.obank().get(ret)?;
        if o.code() != OpCode::CPUI_RETURN || o.get_halt_type() != 0 || o.num_input() != 2 {
            return None;
        }
        let value = o.get_in(1)?;
        let bb_index = fd.bblocks_ref().block(under).get_index();
        self.commsorter.setup_block_list(bb_index);
        self.commsorter.setup_op_list(None);
        if self.commsorter.has_next() {
            return None;
        }
        Some((ret, value))
    }

    /// [`single_return`](Self::single_return) of the constant `0` or `1`: that op and the
    /// constant.
    fn single_const_return(&mut self, fd: &Funcdata, leaf: BlockId) -> Option<(OpId, u64)> {
        let (ret, value) = self.single_return(fd, leaf)?;
        let vn = fd.vbank().get(value)?;
        if !vn.is_constant() || vn.get_offset() > 1 {
            return None;
        }
        Some((ret, u64::try_from(vn.get_offset()).ok()?))
    }

    /// (unlace `retternary`) An `if`/`else` (no goto) whose arms each print only a `return` of
    /// a constant or a named variable: the condition block, the body's `RETURN` and the
    /// returned value as a tree expression over the two `RETURN`s. A `1` or `0` arm against
    /// a `bool` variable `x` folds to `c || x`, `!c || x`, `c && x` or `!c && x`; any
    /// other pair is `c ? A : B`.
    fn return_ternary_shape(
        &mut self,
        fd: &Funcdata,
        blk: BlockId,
    ) -> Option<(BlockId, OpId, ReturnValue)> {
        let block = fd.sblocks_ref().block(blk);
        if block.get_size() != 3 || block.get_if_goto_target().is_some() {
            return None;
        }
        let (cond_block, body, other) =
            (block.get_block(0), block.get_block(1), block.get_block(2));
        let (yes_op, yes) = self.single_return(fd, body)?;
        let (no_op, no) = self.single_return(fd, other)?;
        let atom = |vn: VarnodeId| {
            fd.vbank()
                .get(vn)
                .is_some_and(|v| v.is_constant() || (v.is_explicit() && !v.is_implied()))
        };
        if !atom(yes) || !atom(no) {
            return None;
        }
        let constant = |vn: VarnodeId| {
            fd.vbank()
                .get(vn)
                .filter(|v| v.is_constant() && v.get_offset() <= 1)
                .map(|v| v.get_offset() == 1)
        };
        let boolean = |vn: VarnodeId| {
            fd.vbank().get(vn).is_some_and(|v| {
                !v.is_constant()
                    && v.get_type().get_metatype() == crate::dtype::type_metatype::TYPE_BOOL
            })
        };
        let value = match (constant(yes), constant(no)) {
            (Some(true), None) if boolean(no) => ReturnValue::Logic {
                negate: false,
                and: false,
                other: no_op,
            },
            (None, Some(true)) if boolean(yes) => ReturnValue::Logic {
                negate: true,
                and: false,
                other: yes_op,
            },
            (Some(false), None) if boolean(no) => ReturnValue::Logic {
                negate: true,
                and: true,
                other: no_op,
            },
            (None, Some(false)) if boolean(yes) => ReturnValue::Logic {
                negate: false,
                and: true,
                other: yes_op,
            },
            _ => ReturnValue::Ternary {
                yes: yes_op,
                no: no_op,
            },
        };
        Some((cond_block, yes_op, value))
    }

    /// (unlace `boolreturn`) In the sequence `id` (a `BlockList`), fold the trailing run of
    /// `if`s without else whose body only returns `0`, `1` or a comparison, ending in such a
    /// `return`, into one `return` of a short-circuit expression: `if (!a) return 0;
    /// return b < c;` becomes `return a && b < c;`. Folding right to left, `c ? 0 : T` is
    /// `!c && T`, `c ? 1 : T` is `c || T`, `c ? X : 0` is `c && X`, `c ? X : 1` is
    /// `!c || X`, and two different constants are `c` or `!c`. Only the first folded `if`
    /// may print statements before its test; the others print nothing before it, carry no
    /// label and no comment. The first folded `if` becomes the `return`, the later ones and
    /// the tail become empty sequences.
    fn fold_return_run(&mut self, fd: &Funcdata, id: StmtId) {
        let Some((list, graph)) = self.ctree.as_ref().and_then(|tree| {
            let stmt = tree.stmt(id);
            match &stmt.kind {
                StmtKind::Seq(list) if list.len() > 1 => {
                    let ty = fd.sblocks_ref().block(stmt.origin?).get_type();
                    matches!(ty, BlockType::Ls | BlockType::Graph)
                        .then(|| (list.clone(), ty == BlockType::Graph))
                }
                _ => None,
            }
        }) else {
            return;
        };
        boolreturn_trace(fd, || {
            format!("run {id:?}: {} statements, graph {graph}", list.len())
        });
        let tail = list[list.len() - 1];
        let Some(tail_blk) = self.ctree.as_ref().and_then(|tree| {
            let blk = tree.stmt(tail).origin?;
            (tree.node_for(blk) == Some(tail)).then_some(blk)
        }) else {
            boolreturn_trace(fd, || {
                format!("run {id:?}: tail {tail:?} has no block of its own")
            });
            return;
        };
        let Some((tail_op, mut value)) = self
            .return_term(fd, tail_blk)
            .or_else(|| self.folded_return(fd, tail))
        else {
            boolreturn_trace(fd, || format!("run {id:?}: tail {tail:?} is no run value"));
            return;
        };
        let mut first = None;
        let mut folded = vec![tail];
        for (at, &sid) in list[..list.len() - 1].iter().enumerate().rev() {
            let Some((cond, clause)) = self.return_guard(fd, sid) else {
                boolreturn_trace(fd, || format!("run {id:?}: statement {sid:?} is no guard"));
                break;
            };
            if graph && !self.falls_to(fd, sid, list[at + 1]) {
                boolreturn_trace(fd, || {
                    format!("run {id:?}: guard {sid:?} does not fall through")
                });
                break;
            }
            let Some((_, arm)) = self.return_term(fd, clause).or_else(|| {
                let then = self.ctree.as_ref()?.node_for(clause)?;
                self.folded_return(fd, then)
            }) else {
                boolreturn_trace(fd, || {
                    format!("run {id:?}: guard {sid:?} body is no run value")
                });
                break;
            };
            let Some(next) = combine_return(cond, &arm, &value) else {
                boolreturn_trace(fd, || format!("run {id:?}: guard {sid:?} does not combine"));
                break;
            };
            let rest = std::mem::replace(&mut value, next);
            folded.extend(first);
            first = Some(sid);
            if !self.clean_guard_cond(fd, cond) {
                let Some((peeled, lead)) = self.fold_cond_list_guards(fd, cond, &arm, &rest, 0)
                else {
                    break;
                };
                value = peeled;
                if !self.clean_guard_cond(fd, lead) {
                    break;
                }
            }
        }
        let Some(first) = first else {
            return;
        };
        if let RunTerm::Cond(cond, false) = value
            && !self.cond_is_boolean(fd, cond)
        {
            return;
        }
        let Some(tree) = self.ctree.as_mut() else {
            return;
        };
        let Some(expr) = add_run_term(tree, &value) else {
            return;
        };
        tree.stmt_mut(first).kind = StmtKind::Return {
            value: Some(expr),
            op: Some(tail_op),
        };
        for sid in folded {
            tree.stmt_mut(sid).kind = StmtKind::Seq(Vec::new());
        }
    }

    /// (unlace `boolreturn`) Fold the `if`/`else` statement `id` (no goto, not a switch-merge
    /// or exception `if`, its condition still its block's) whose two arms are each a value of
    /// a return run, a leaf `return_term` accepts or a statement an earlier fold made a
    /// `return` (`folded_return`), into one `return` the way `combine_return` joins a
    /// guard and the rest of a run: `if (c) { ...run... } else return 0;` becomes `return c
    /// && ...;`. The `if` keeps the statements before its test; the body's `RETURN` marks it.
    fn fold_return_ite(&mut self, fd: &Funcdata, id: StmtId) {
        let Some((blk, cond, then, els)) = self.ctree.as_ref().and_then(|tree| {
            let stmt = tree.stmt(id);
            let StmtKind::If {
                cond,
                then,
                els: Some(els),
                ..
            } = &stmt.kind
            else {
                return None;
            };
            let ExprKind::Branch(cond) = tree.expr(*cond).kind else {
                return None;
            };
            let blk = stmt.origin?;
            (tree.node_for(blk) == Some(id)).then_some((blk, cond, *then, *els))
        }) else {
            return;
        };
        let block = fd.sblocks_ref().block(blk);
        if block.get_type() != BlockType::If
            || block.get_size() != 3
            || block.get_if_goto_target().is_some()
            || block.get_block(0) != cond
            || self.switch_plans.ifs.contains_key(&blk)
            || self.is_eh_if(fd, blk)
        {
            return;
        }
        let (body, other) = (block.get_block(1), block.get_block(2));
        boolreturn_trace(fd, || format!("if/else {id:?}"));
        let Some((ret_op, yes)) = self
            .return_term(fd, body)
            .or_else(|| self.folded_return(fd, then))
        else {
            boolreturn_trace(fd, || format!("if/else {id:?}: body is no run value"));
            return;
        };
        let Some((_, no)) = self
            .return_term(fd, other)
            .or_else(|| self.folded_return(fd, els))
        else {
            boolreturn_trace(fd, || format!("if/else {id:?}: else is no run value"));
            return;
        };
        let Some(value) = combine_return(cond, &yes, &no) else {
            boolreturn_trace(fd, || format!("if/else {id:?}: arms do not combine"));
            return;
        };
        if let RunTerm::Cond(c, false) = value
            && !self.cond_is_boolean(fd, c)
        {
            return;
        }
        let Some(tree) = self.ctree.as_mut() else {
            return;
        };
        let Some(expr) = add_run_term(tree, &value) else {
            return;
        };
        tree.stmt_mut(id).kind = StmtKind::Return {
            value: Some(expr),
            op: Some(ret_op),
        };
    }

    /// (unlace `boolreturn`) Fold the guards a condition list carries in front of its test.
    /// When the structurer concatenates a collapsed guard `if` with the next guard's
    /// condition block, that condition is a `BlockList` `[if (g) return K;, test]`, and the
    /// leading guard prints as a statement before the test. With `arm` the folded guard's
    /// returned value and `rest` the run value after it, the run value from the first guard
    /// of the list on, and that guard's condition: every leading component must be a guard
    /// (`cond_list_guard`) whose body is a run value, every test after the first must print
    /// nothing before it (`clean_guard_cond`), and the first guard's own condition list is
    /// folded the same way. `None` leaves the list as the statements before the test.
    fn fold_cond_list_guards(
        &mut self,
        fd: &Funcdata,
        cond: BlockId,
        arm: &RunTerm,
        rest: &RunTerm,
        depth: usize,
    ) -> Option<(RunTerm, BlockId)> {
        let sb = fd.sblocks_ref();
        if depth >= 16 || sb.block(cond).get_type() != BlockType::Ls {
            return None;
        }
        let parts: Vec<BlockId> = (0..sb.block(cond).get_size())
            .map(|k| sb.block(cond).get_block(k))
            .collect();
        let (&test, guards) = parts.split_last()?;
        if guards.is_empty() || !self.clean_guard_cond(fd, test) {
            boolreturn_trace(fd, || format!("condition list {cond:?}: test prints"));
            return None;
        }
        let mut value = combine_return(test, arm, rest)?;
        let mut lead = test;
        for (at, &part) in guards.iter().enumerate().rev() {
            let Some((gcond, body)) = self.cond_list_guard(fd, part) else {
                boolreturn_trace(fd, || {
                    format!("condition list {cond:?}: {part:?} is no guard")
                });
                return None;
            };
            let (_, garm) = self.return_term(fd, body)?;
            if at == 0
                && let Some(found) = self.fold_cond_list_guards(fd, gcond, &garm, &value, depth + 1)
            {
                return Some(found);
            }
            value = combine_return(gcond, &garm, &value)?;
            lead = gcond;
            if at > 0 && !self.clean_guard_cond(fd, gcond) {
                return None;
            }
        }
        Some((value, lead))
    }

    /// A component of a condition list as a guard of a return run: an `if` without else and
    /// without goto, not a switch-merge or exception `if`, that the tree did not rewrite. Its
    /// condition block and its body block.
    fn cond_list_guard(&self, fd: &Funcdata, blk: BlockId) -> Option<(BlockId, BlockId)> {
        let block = fd.sblocks_ref().block(blk);
        if block.get_type() != BlockType::If
            || block.get_size() != 2
            || block.get_if_goto_target().is_some()
            || self.switch_plans.ifs.contains_key(&blk)
            || self.is_eh_if(fd, blk)
        {
            return None;
        }
        let (cond, body) = (block.get_block(0), block.get_block(1));
        if let Some(tree) = self.ctree.as_ref()
            && let Some(id) = tree.node_for(blk)
        {
            let StmtKind::If {
                cond: test,
                els: None,
                ..
            } = &tree.stmt(id).kind
            else {
                return None;
            };
            if !matches!(tree.expr(*test).kind, ExprKind::Branch(c) if c == cond) {
                return None;
            }
        }
        Some((cond, body))
    }

    /// In a `BlockGraph`, does the `if` statement `id` fall through to the statement `next`,
    /// its block's one out edge going to `next`'s block (no `goto` between them)?
    fn falls_to(&self, fd: &Funcdata, id: StmtId, next: StmtId) -> bool {
        let Some(tree) = self.ctree.as_ref() else {
            return false;
        };
        let (Some(blk), Some(to)) = (tree.stmt(id).origin, tree.stmt(next).origin) else {
            return false;
        };
        let block = fd.sblocks_ref().block(blk);
        block.size_out() == 1 && block.get_out(0) == to
    }

    /// The statement `id` as one value of a return run when an earlier fold made it a
    /// `return` of a `0`/`1` value (`Branch`, `Not`, `&&` or `||`, never a `?:`), alone or
    /// as the one non-empty statement of a sequence, whose first condition prints nothing
    /// before its test (`clean_guard_cond`): that `RETURN` and the value. Runs fold inner
    /// sequences first, so `if (c) { if (!a) return 0; return b; } return 0;` folds to
    /// `return c && a && b;`.
    fn folded_return(&mut self, fd: &Funcdata, id: StmtId) -> Option<(OpId, RunTerm)> {
        let (op, value, first) = {
            let tree = self.ctree.as_ref()?;
            let mut cur = id;
            for _ in 0..64 {
                let StmtKind::Seq(list) = &tree.stmt(cur).kind else {
                    break;
                };
                let mut live = list
                    .iter()
                    .copied()
                    .filter(|s| !matches!(&tree.stmt(*s).kind, StmtKind::Seq(l) if l.is_empty()));
                let Some(one) = live.next() else {
                    boolreturn_trace(fd, || format!("folded {id:?}: empty sequence"));
                    return None;
                };
                if live.next().is_some() {
                    boolreturn_trace(fd, || format!("folded {id:?}: more than one statement"));
                    return None;
                }
                cur = one;
            }
            let StmtKind::Return {
                value: Some(value),
                op: Some(op),
            } = tree.stmt(cur).kind
            else {
                boolreturn_trace(fd, || format!("folded {id:?}: {cur:?} is no folded return"));
                return None;
            };
            if !matches!(
                tree.expr(value).kind,
                ExprKind::Branch(_) | ExprKind::Not(_) | ExprKind::And(..) | ExprKind::Or(..)
            ) {
                boolreturn_trace(fd, || format!("folded {id:?}: value is not 0 or 1"));
                return None;
            }
            (op, value, first_branch(tree, value)?)
        };
        self.clean_guard_cond(fd, first)
            .then_some((op, RunTerm::Expr(value)))
    }

    /// The `if` statement `id` as a guard of a return run: an `if` without else and without
    /// goto, built from its own block, not a switch-merge or exception `if`, whose condition
    /// is still its block's condition. Its condition block and its body block.
    fn return_guard(&self, fd: &Funcdata, id: StmtId) -> Option<(BlockId, BlockId)> {
        let tree = self.ctree.as_ref()?;
        let stmt = tree.stmt(id);
        let StmtKind::If {
            cond, els: None, ..
        } = &stmt.kind
        else {
            return None;
        };
        let ExprKind::Branch(cond) = tree.expr(*cond).kind else {
            return None;
        };
        let blk = stmt.origin?;
        if tree.node_for(blk) != Some(id) {
            return None;
        }
        let block = fd.sblocks_ref().block(blk);
        if block.get_type() != BlockType::If
            || block.get_size() != 2
            || block.get_if_goto_target().is_some()
            || block.get_block(0) != cond
            || self.switch_plans.ifs.contains_key(&blk)
            || self.is_eh_if(fd, blk)
        {
            return None;
        }
        Some((cond, block.get_block(1)))
    }

    /// A condition a folded `if` after the first may have: a single leaf that prints
    /// nothing before its test, with no label line and no comment, or a `BlockCondition`
    /// (`a && b`, `a || b`) every component of which is one.
    fn clean_guard_cond(&mut self, fd: &Funcdata, cond: BlockId) -> bool {
        self.clean_guard_cond_at(fd, cond, 0)
    }

    fn clean_guard_cond_at(&mut self, fd: &Funcdata, cond: BlockId, depth: usize) -> bool {
        let sb = fd.sblocks_ref();
        if sb.block(cond).get_type() == BlockType::Condition && depth < 64 {
            let parts: Vec<BlockId> = (0..sb.block(cond).get_size())
                .map(|k| sb.block(cond).get_block(k))
                .collect();
            return !parts.is_empty()
                && parts
                    .into_iter()
                    .all(|part| self.clean_guard_cond_at(fd, part, depth + 1));
        }
        let ty = sb.block(cond).get_type();
        let under = match ty {
            BlockType::Copy => sb.block(cond).get_copy(),
            BlockType::Basic => Some(cond),
            _ => None,
        };
        let why = match under {
            None => Some("not a leaf"),
            Some(bb) if !self.ops_print_nothing(fd, bb) => Some("prints before its test"),
            Some(_)
                if sb.block(cond).is_unstructured_target()
                    && !self.goto_rewrites.labels.contains(&cond) =>
            {
                Some("label")
            }
            Some(_) => None,
        };
        if let Some(why) = why {
            boolreturn_trace(fd, || format!("condition {cond:?} ({ty:?}): {why}"));
            return false;
        }
        let Some(under) = under else {
            return false;
        };
        let bb_index = fd.bblocks_ref().block(under).get_index();
        self.commsorter.setup_block_list(bb_index);
        self.commsorter.setup_op_list(None);
        let clean = !self.commsorter.has_next();
        if !clean {
            boolreturn_trace(fd, || format!("condition {cond:?}: comment"));
        }
        clean
    }

    /// The leaf `leaf` as one value of a return run: a [`single_return`](Self::single_return)
    /// of an integer or boolean type whose value is the constant `0` or `1` (directly or
    /// through an implied `COPY`), or a comparison or boolean value that binds tighter than
    /// `&&` (through copies and zero extensions), or a variable holding one.
    fn return_term(&mut self, fd: &Funcdata, leaf: BlockId) -> Option<(OpId, RunTerm)> {
        let (ret, vn) = self.single_return(fd, leaf)?;
        let v = fd.vbank().get(vn)?;
        if !matches!(
            v.get_type().get_metatype(),
            crate::dtype::type_metatype::TYPE_UNKNOWN
                | crate::dtype::type_metatype::TYPE_INT
                | crate::dtype::type_metatype::TYPE_UINT
                | crate::dtype::type_metatype::TYPE_BOOL
        ) {
            return None;
        }
        let constant = if v.is_constant() {
            Some(v.get_offset())
        } else if v.is_implied() {
            v.get_def()
                .and_then(|d| fd.obank().get(d))
                .filter(|d| d.code() == OpCode::CPUI_COPY)
                .and_then(|d| d.get_in(0))
                .and_then(|i| fd.vbank().get(i))
                .filter(|i| i.is_constant())
                .map(|i| i.get_offset())
        } else {
            None
        };
        if let Some(c) = constant {
            return (c <= 1).then_some((ret, RunTerm::Const(c == 1)));
        }
        let mut cur = vn;
        for _ in 0..4 {
            let def = fd.obank().get(fd.vbank().get(cur)?.get_def()?)?;
            if def.is_bool_output() {
                let loose = matches!(
                    def.code(),
                    OpCode::CPUI_BOOL_AND | OpCode::CPUI_BOOL_OR | OpCode::CPUI_BOOL_XOR
                );
                return (!loose || !v.is_implied()).then_some((ret, RunTerm::Value(ret)));
            }
            if !matches!(def.code(), OpCode::CPUI_COPY | OpCode::CPUI_INT_ZEXT) {
                return None;
            }
            cur = def.get_in(0)?;
        }
        None
    }

    /// Does the condition block `cond`, printed alone and not negated, evaluate to `0` or
    /// `1`? A folded `&&`/`||` chain does; a leaf does when its `CBRANCH` tests a
    /// comparison or boolean op that is not a `!` (which prints bare when the branch flips)
    /// and does not print as a bare truth test: `truthycond` prints `x != 0` as `x`, but
    /// `x == 0` as `!x`, which is `0` or `1` (an unflipped `==` or a flipped `!=`).
    fn cond_is_boolean(&self, fd: &Funcdata, cond: BlockId) -> bool {
        let tail = crate::itecondlist::cond_list_tail(fd, cond);
        let sb = fd.sblocks_ref();
        if sb.block(tail).get_type() == BlockType::Condition {
            return true;
        }
        let Some(bb) = sb.block(tail).get_copy() else {
            return false;
        };
        let Some(br) = fd.bb_op_tail(bb).filter(|br| {
            fd.obank()
                .get(*br)
                .is_some_and(|o| o.code() == OpCode::CPUI_CBRANCH)
        }) else {
            return false;
        };
        let Some(o) = fd.obank().get(br) else {
            return false;
        };
        let flip = o.is_boolean_flip() ^ self.flipped_branches.contains(&br);
        let Some(in1) = o.get_in(1) else {
            return false;
        };
        let Some(def) = fd.vbank().get(in1).and_then(|v| v.get_def()) else {
            return false;
        };
        let Some(d) = fd.obank().get(def) else {
            return false;
        };
        if !d.is_bool_output() || d.code() == OpCode::CPUI_BOOL_NEGATE {
            return false;
        }
        if self.truthy_other_operand(fd, def).is_none() {
            return true;
        }
        match d.code() {
            OpCode::CPUI_INT_EQUAL => !flip,
            OpCode::CPUI_INT_NOTEQUAL => flip && self.check_print_negation(fd, in1),
            _ => false,
        }
    }

    /// (unlace `noretfirst`) Rewrite the `if`/`else` statement `id` (built from `blk`) when
    /// exactly one arm never falls through (its structured block has no out edge: it returns
    /// or calls a no-return function): that arm becomes the `if`'s only body and the other arm
    /// follows the `if` (`Seq[if, arm]`). When the arm that never falls through is the else,
    /// the condition is negated by flipping its `CBRANCH` at print time
    /// (`flipped_branches`), so it prints the way a negated branch always prints. Only for an
    /// `if` in statement position (in a list or graph, not under a condition) whose condition
    /// is a single leaf, and not for an `if` the switch merge or an exception form prints.
    fn noret_first(&mut self, fd: &Funcdata, id: StmtId, blk: BlockId) {
        let sb = fd.sblocks_ref();
        let block = sb.block(blk);
        if block.get_size() != 3
            || block.get_if_goto_target().is_some()
            || self.switch_plans.ifs.contains_key(&blk)
            || self.is_eh_if(fd, blk)
            || !in_statement_position(fd, blk)
        {
            return;
        }
        let cond_block = block.get_block(0);
        let body_exits = sb.block(block.get_block(1)).size_out() == 0;
        let else_exits = sb.block(block.get_block(2)).size_out() == 0;
        if body_exits == else_exits {
            return;
        }
        let flip = if else_exits {
            if sb.block(cond_block).get_type() != BlockType::Copy {
                return;
            }
            let Some(cbranch) = sb
                .block(cond_block)
                .get_copy()
                .and_then(|under| fd.bb_op_tail(under))
                .filter(|op| {
                    fd.obank()
                        .get(*op)
                        .is_some_and(|o| o.code() == OpCode::CPUI_CBRANCH)
                })
            else {
                return;
            };
            Some(cbranch)
        } else {
            None
        };
        let Some(tree) = self.ctree.as_mut() else {
            return;
        };
        let StmtKind::If {
            pre,
            cond,
            then,
            els: Some(els),
        } = tree.stmt(id).kind.clone()
        else {
            return;
        };
        let (first, after, cond) = if flip.is_some() {
            (els, then, tree.add_expr(ExprKind::Not(cond)))
        } else {
            (then, els, cond)
        };
        let lead = tree.add_stmt(
            StmtKind::If {
                pre,
                cond,
                then: first,
                els: None,
            },
            Some(blk),
        );
        tree.stmt_mut(id).kind = StmtKind::Seq(vec![lead, after]);
        if let Some(cbranch) = flip {
            self.flipped_branches.insert(cbranch);
        }
    }

    /// The arm the tree moved out of the `BlockIf` `blk` (`noretfirst`), printed after it.
    pub(super) fn hoisted_after(&self, blk: BlockId) -> Option<StmtId> {
        let tree = self.ctree.as_ref()?;
        let StmtKind::Seq(list) = &tree.stmt(tree.node_for(blk)?).kind else {
            return None;
        };
        let [first, after] = list.as_slice() else {
            return None;
        };
        let first_stmt = tree.stmt(*first);
        (first_stmt.origin == Some(blk) && matches!(first_stmt.kind, StmtKind::If { .. }))
            .then_some(*after)
    }

    /// The block the `if` built from `blk` prints as its body: the tree's body when it has
    /// one built from a block, else component 1.
    pub(super) fn if_then_block(&self, fd: &Funcdata, blk: BlockId) -> BlockId {
        self.ctree
            .as_ref()
            .and_then(|tree| {
                let StmtKind::If { then, .. } = &tree.stmt(tree.stmt_for(blk)?).kind else {
                    return None;
                };
                tree.stmt(*then).origin
            })
            .unwrap_or_else(|| fd.sblocks_ref().block(blk).get_block(1))
    }

    /// (unlace `nestedand`) Fold the `if` statement `id` with the `if` that is its whole body:
    /// `if (a) { if (b) { X } }` becomes `if (a && b) { X }`. Both have no else and no goto;
    /// the inner `if` is not rewritten, prints nothing before its test (no statement, no
    /// comment, no label), its condition is a single leaf, and neither prints as a switch or
    /// an exception form. True when it folded (the new body may fold again).
    fn fold_nested_and(&mut self, fd: &Funcdata, id: StmtId) -> bool {
        let Some((outer_blk, cond, then)) = self.ctree.as_ref().and_then(|tree| {
            let stmt = tree.stmt(id);
            let StmtKind::If {
                cond,
                then,
                els: None,
                ..
            } = &stmt.kind
            else {
                return None;
            };
            Some((stmt.origin?, *cond, *then))
        }) else {
            return false;
        };
        let Some((inner_blk, inner_cond, body)) = self.ctree.as_ref().and_then(|tree| {
            let condition_ok = is_and_chain(tree, cond);
            let stmt = tree.stmt(then);
            let StmtKind::If {
                cond: inner_cond,
                then: body,
                els: None,
                ..
            } = &stmt.kind
            else {
                return None;
            };
            let ExprKind::Branch(inner_cond) = tree.expr(*inner_cond).kind else {
                return None;
            };
            condition_ok.then_some((stmt.origin?, inner_cond, *body))
        }) else {
            return false;
        };
        let sb = fd.sblocks_ref();
        for blk in [outer_blk, inner_blk] {
            let block = sb.block(blk);
            if block.get_type() != BlockType::If
                || block.get_size() != 2
                || block.get_if_goto_target().is_some()
                || self.switch_plans.ifs.contains_key(&blk)
                || self.is_eh_if(fd, blk)
            {
                return false;
            }
        }
        if sb.block(inner_blk).get_block(0) != inner_cond
            || sb.block(inner_cond).get_type() != BlockType::Copy
            || !self.header_prints_nothing(fd, inner_cond)
            || (sb.block(inner_cond).is_unstructured_target()
                && !self.goto_rewrites.labels.contains(&inner_cond))
        {
            return false;
        }
        let Some(under) = sb.block(inner_cond).get_copy() else {
            return false;
        };
        let bb_index = fd.bblocks_ref().block(under).get_index();
        self.commsorter.setup_block_list(bb_index);
        self.commsorter.setup_op_list(None);
        if self.commsorter.has_next() {
            return false;
        }
        let Some(tree) = self.ctree.as_mut() else {
            return false;
        };
        let right = tree.add_expr(ExprKind::Branch(inner_cond));
        let chain = tree.add_expr(ExprKind::And(cond, right));
        if let StmtKind::If { cond, then, .. } = &mut tree.stmt_mut(id).kind {
            *cond = chain;
            *then = body;
        }
        true
    }

    /// (unlace `orexit`) In the sequence `id`, fold each run of adjacent `if`s without else that
    /// leave the same way (the same `goto`/`break`/`continue` target, or a `return` of the same
    /// constant or variable) into the first: `if (a) goto L; if (b) goto L;` becomes
    /// `if ((a) || (b)) goto L;`. A folded `if` stays in the tree as an empty sequence, which
    /// prints nothing.
    fn fold_equal_exits(&mut self, fd: &Funcdata, id: StmtId) {
        let Some(list) = self
            .ctree
            .as_ref()
            .and_then(|tree| match &tree.stmt(id).kind {
                StmtKind::Seq(list) => Some(list.clone()),
                _ => None,
            })
        else {
            return;
        };
        let mut i = 0;
        while i < list.len() {
            let mut j = i + 1;
            while j < list.len() && self.fold_exit_pair(fd, list[i], list[j]) {
                j += 1;
            }
            i = j;
        }
    }

    /// Fold the `if` `second` into the `if` `first` (`fold_equal_exits`); true when it did.
    fn fold_exit_pair(&mut self, fd: &Funcdata, first: StmtId, second: StmtId) -> bool {
        let Some((blk_a, cond_a, then_a, blk_b, cond_b, then_b)) =
            self.ctree.as_ref().and_then(|tree| {
                let a = tree.stmt(first);
                let b = tree.stmt(second);
                let StmtKind::If {
                    cond: cond_a,
                    then: then_a,
                    els: None,
                    ..
                } = &a.kind
                else {
                    return None;
                };
                let StmtKind::If {
                    cond: cond_b,
                    then: then_b,
                    els: None,
                    ..
                } = &b.kind
                else {
                    return None;
                };
                let ExprKind::Branch(cond_b) = tree.expr(*cond_b).kind else {
                    return None;
                };
                if !is_and_chain(tree, *cond_a)
                    || tree.node_for(a.origin?) != Some(first)
                    || tree.node_for(b.origin?) != Some(second)
                {
                    return None;
                }
                Some((a.origin?, *cond_a, *then_a, b.origin?, cond_b, *then_b))
            })
        else {
            return false;
        };
        let sb = fd.sblocks_ref();
        for blk in [blk_a, blk_b] {
            if sb.block(blk).get_type() != BlockType::If
                || self.switch_plans.ifs.contains_key(&blk)
                || self.is_eh_if(fd, blk)
                || !in_statement_position(fd, blk)
            {
                return false;
            }
        }
        if sb.block(blk_b).get_block(0) != cond_b
            || sb.block(cond_b).get_type() != BlockType::Copy
            || !self.header_prints_nothing(fd, cond_b)
            || (sb.block(cond_b).is_unstructured_target()
                && !self.goto_rewrites.labels.contains(&cond_b))
        {
            return false;
        }
        let (block_a, block_b) = (sb.block(blk_a), sb.block(blk_b));
        let same_exit = match (block_a.get_if_goto_target(), block_b.get_if_goto_target()) {
            (Some(target_a), Some(target_b)) => {
                target_a == target_b
                    && self
                        .goto_rewrites
                        .gototype(blk_a, block_a.get_if_goto_type())
                        == self
                            .goto_rewrites
                            .gototype(blk_b, block_b.get_if_goto_type())
            }
            (None, None) if block_a.get_size() == 2 && block_b.get_size() == 2 => {
                let leaves = self
                    .ctree
                    .as_ref()
                    .and_then(|tree| Some((tree.stmt(then_a).origin?, tree.stmt(then_b).origin?)));
                match leaves {
                    Some((leaf_a, leaf_b)) => self.same_return(fd, leaf_a, leaf_b),
                    None => false,
                }
            }
            _ => false,
        };
        if !same_exit {
            return false;
        }
        let Some(under) = sb.block(cond_b).get_copy() else {
            return false;
        };
        let bb_index = fd.bblocks_ref().block(under).get_index();
        self.commsorter.setup_block_list(bb_index);
        self.commsorter.setup_op_list(None);
        if self.commsorter.has_next() {
            return false;
        }
        let Some(tree) = self.ctree.as_mut() else {
            return false;
        };
        let right = tree.add_expr(ExprKind::Branch(cond_b));
        let chain = tree.add_expr(ExprKind::Or(cond_a, right));
        if let StmtKind::If { cond, .. } = &mut tree.stmt_mut(first).kind {
            *cond = chain;
        }
        tree.stmt_mut(second).kind = StmtKind::Seq(Vec::new());
        true
    }

    /// Do the leaves `a` and `b` each print only a `return` of the same value (one constant,
    /// or one explicit variable)?
    fn same_return(&mut self, fd: &Funcdata, a: BlockId, b: BlockId) -> bool {
        let (Some((_, va)), Some((_, vb))) = (self.single_return(fd, a), self.single_return(fd, b))
        else {
            return false;
        };
        let (Some(va), Some(vb)) = (fd.vbank().get(va), fd.vbank().get(vb)) else {
            return false;
        };
        if va.is_constant() || vb.is_constant() {
            return va.is_constant()
                && vb.is_constant()
                && va.get_offset() == vb.get_offset()
                && va.get_size() == vb.get_size();
        }
        va.is_explicit()
            && vb.is_explicit()
            && va.get_high().is_some()
            && va.get_high() == vb.get_high()
    }

    /// Move the per-function print plans the tree can hold into it, so the printer reads them
    /// from the tree: `switchmerge`'s `if`s printed as a switch become `SwitchOf`;
    /// `gotonext`'s goto types go onto the tree's `Goto` statements, and a goto block whose
    /// goto it drops loses its `Goto`; `voidtailreturn`'s elided `RETURN` leaves the op list of
    /// the one leaf that holds it.
    fn ctree_take_plans(&mut self) {
        let ifs: Vec<(BlockId, BlockId)> = self
            .switch_plans
            .ifs
            .iter()
            .map(|(a, b)| (*a, *b))
            .collect();
        let Some(tree) = self.ctree.as_mut() else {
            return;
        };
        for (blk, switch) in ifs {
            if let Some(id) = tree.node_for(blk) {
                tree.stmt_mut(id).kind = StmtKind::SwitchOf { switch };
            }
        }
        for id in tree.stmt_ids() {
            let Some(blk) = tree.stmt(id).origin else {
                continue;
            };
            let jump = match &tree.stmt(id).kind {
                StmtKind::If {
                    then, els: None, ..
                } => Some(*then),
                StmtKind::Seq(list) if list.len() == 2 => Some(list[1]),
                _ => None,
            };
            let Some(jump) = jump else {
                continue;
            };
            let StmtKind::Goto { gototype, .. } = tree.stmt(jump).kind else {
                continue;
            };
            let carrier_is_goto = matches!(tree.stmt(id).kind, StmtKind::Seq(_));
            if carrier_is_goto && self.goto_rewrites.silent.contains(&blk) {
                if let StmtKind::Seq(list) = &mut tree.stmt_mut(id).kind {
                    list.truncate(1);
                }
                continue;
            }
            let mapped = self.goto_rewrites.gototype(blk, gototype);
            if let StmtKind::Goto { gototype, .. } = &mut tree.stmt_mut(jump).kind {
                *gototype = mapped;
            }
        }
        if let Some(ret) = self.void_tail_return {
            let holders: Vec<StmtId> = tree
                .stmt_ids()
                .into_iter()
                .filter(|id| matches!(&tree.stmt(*id).kind, StmtKind::Stmts { ops, .. } if ops.contains(&ret)))
                .collect();
            if let [holder] = holders.as_slice() {
                if let StmtKind::Stmts { ops, .. } = &mut tree.stmt_mut(*holder).kind {
                    ops.retain(|op| *op != ret);
                }
                self.void_tail_return = None;
            }
        }
    }

    /// The switch the tree prints the `BlockIf` `blk` as (`switchmerge`); without a tree,
    /// the switch plan's.
    pub(super) fn switch_of(&self, blk: BlockId) -> Option<BlockId> {
        let node = self
            .ctree
            .as_ref()
            .and_then(|tree| Some(&tree.stmt(tree.node_for(blk)?).kind));
        match node {
            Some(StmtKind::SwitchOf { switch }) => Some(*switch),
            Some(_) => None,
            None => self.switch_plans.ifs.get(&blk).copied(),
        }
    }

    /// The goto type the tree gives the jump of the `if`-goto or goto block `blk`: `Some(None)`
    /// when the tree dropped the goto block's jump, `None` without a tree or a jump.
    pub(super) fn tree_goto_type(&self, blk: BlockId) -> Option<Option<unlace_base::types::uint4>> {
        let tree = self.ctree.as_ref()?;
        let id = tree.stmt_for(blk)?;
        let jump = match &tree.stmt(id).kind {
            StmtKind::If { then, .. } => *then,
            StmtKind::Seq(list) if list.len() == 1 => return Some(None),
            StmtKind::Seq(list) if list.len() == 2 => list[1],
            _ => return None,
        };
        match tree.stmt(jump).kind {
            StmtKind::Goto { gototype, .. } => Some(Some(gototype)),
            _ => None,
        }
    }

    /// The `&&`/`||` chain the tree gave the condition of the `BlockIf` `blk` (`nestedand`,
    /// `orexit`).
    pub(super) fn and_condition(&self, blk: BlockId) -> Option<crate::ctree::ExprId> {
        let tree = self.ctree.as_ref()?;
        let StmtKind::If { cond, .. } = &tree.stmt(tree.stmt_for(blk)?).kind else {
            return None;
        };
        matches!(tree.expr(*cond).kind, ExprKind::And(..) | ExprKind::Or(..)).then_some(*cond)
    }
}

/// Longest list whose rests get their `try` forms recorded (each rest is one match of its suffix,
/// so the work is quadratic in the list length).
const MAX_REST_TRIES: usize = 512;

/// With `UNLACE_BOOLRETURN_DEBUG` set, print to stderr why a `boolreturn` run stopped.
fn boolreturn_trace(fd: &Funcdata, msg: impl FnOnce() -> String) {
    if std::env::var_os("UNLACE_BOOLRETURN_DEBUG").is_some() {
        eprintln!("boolreturn {}: {}", fd.get_name(), msg());
    }
}

/// The value a `retternary` rewrite returns; `OpId`s are the arms' `RETURN`s.
enum ReturnValue {
    /// `c ? yes : no`.
    Ternary { yes: OpId, no: OpId },
    /// `c || other`, `!c || other`, `c && other` or `!c && other`.
    Logic {
        negate: bool,
        and: bool,
        other: OpId,
    },
}

/// One value of a `boolreturn` return run, folded right to left.
#[derive(Clone)]
enum RunTerm {
    /// A returned constant: `true` for `1`.
    Const(bool),
    /// The condition of a condition block, negated when the flag is set.
    Cond(BlockId, bool),
    /// The value a `RETURN` returns.
    Value(OpId),
    /// The `0`/`1` value of a `return` an earlier fold made.
    Expr(ExprId),
    And(Box<RunTerm>, Box<RunTerm>),
    Or(Box<RunTerm>, Box<RunTerm>),
}

/// `cond ? arm : rest` as a short-circuit value, when it has one.
fn combine_return(cond: BlockId, arm: &RunTerm, rest: &RunTerm) -> Option<RunTerm> {
    let test = |negate| Box::new(RunTerm::Cond(cond, negate));
    Some(match (arm, rest) {
        (RunTerm::Const(a), RunTerm::Const(b)) if a != b => RunTerm::Cond(cond, !a),
        (RunTerm::Const(_), RunTerm::Const(_)) => return None,
        (RunTerm::Const(false), rest) => RunTerm::And(test(true), Box::new(rest.clone())),
        (RunTerm::Const(true), rest) => RunTerm::Or(test(false), Box::new(rest.clone())),
        (arm, RunTerm::Const(false)) => RunTerm::And(test(false), Box::new(arm.clone())),
        (arm, RunTerm::Const(true)) => RunTerm::Or(test(true), Box::new(arm.clone())),
        _ => return None,
    })
}

/// The tree expression of a folded run value; `None` for a bare constant.
fn add_run_term(tree: &mut crate::ctree::CTree, term: &RunTerm) -> Option<ExprId> {
    Some(match term {
        RunTerm::Const(_) => return None,
        RunTerm::Cond(block, negate) => {
            let branch = tree.add_expr(ExprKind::Branch(*block));
            if *negate {
                tree.add_expr(ExprKind::Not(branch))
            } else {
                branch
            }
        }
        RunTerm::Value(op) => tree.add_expr(ExprKind::Op(*op)),
        RunTerm::Expr(expr) => *expr,
        RunTerm::And(left, right) | RunTerm::Or(left, right) => {
            let l = add_run_term(tree, left)?;
            let r = add_run_term(tree, right)?;
            tree.add_expr(if matches!(term, RunTerm::And(..)) {
                ExprKind::And(l, r)
            } else {
                ExprKind::Or(l, r)
            })
        }
    })
}

/// The first condition block a returned value names.
fn first_branch(tree: &crate::ctree::CTree, expr: ExprId) -> Option<BlockId> {
    match tree.expr(expr).kind {
        ExprKind::Branch(block) => Some(block),
        ExprKind::Not(inner) => first_branch(tree, inner),
        ExprKind::And(left, _) | ExprKind::Or(left, _) | ExprKind::Ternary(left, _, _) => {
            first_branch(tree, left)
        }
        _ => None,
    }
}

/// A `try` form (row `tryforms`).
fn is_try_form(kind: &StmtKind) -> bool {
    matches!(kind, StmtKind::Try { .. } | StmtKind::JavaTry)
}

/// A `try` form or an assignment form (rows `tryforms`, `iteforms`).
fn is_ite_form(kind: &StmtKind) -> bool {
    is_try_form(kind) || matches!(kind, StmtKind::Expr(_))
}

/// A `try`, an assignment or a `return` form (rows `tryforms` to `retternary`).
fn is_value_form(kind: &StmtKind) -> bool {
    is_ite_form(kind) || matches!(kind, StmtKind::Return { .. })
}

/// Every statement of `tree`, last added first (an `if` before the statements inside it).
fn ids_rev(tree: Option<&crate::ctree::CTree>) -> Vec<StmtId> {
    let Some(tree) = tree else {
        return Vec::new();
    };
    let mut ids = tree.stmt_ids();
    ids.retain(|id| !tree.is_condition(*id));
    ids.reverse();
    ids
}

/// A condition `emit_cond_expr` prints: a `Branch`, or an `And` or `Or` whose left operand is
/// one of these and whose right operand is a `Branch`.
fn is_and_chain(tree: &crate::ctree::CTree, expr: crate::ctree::ExprId) -> bool {
    match tree.expr(expr).kind {
        ExprKind::Branch(_) => true,
        ExprKind::And(left, right) | ExprKind::Or(left, right) => {
            matches!(tree.expr(right).kind, ExprKind::Branch(_)) && is_and_chain(tree, left)
        }
        _ => false,
    }
}

/// Is the `if` `blk` a statement of a list or graph whose enclosing statements never print
/// it as part of a condition? A statement after it then prints right after it.
fn in_statement_position(fd: &Funcdata, blk: BlockId) -> bool {
    let sb = fd.sblocks_ref();
    let mut at = blk;
    let mut first = true;
    while let Some(parent) = sb.block(at).get_parent() {
        let ty = sb.block(parent).get_type();
        if first && !matches!(ty, BlockType::Ls | BlockType::Graph) {
            return false;
        }
        first = false;
        match ty {
            BlockType::Ls | BlockType::Graph => at = parent,
            BlockType::If | BlockType::WhileDo | BlockType::Switch => {
                return sb.block(parent).get_block(0) != at;
            }
            BlockType::InfLoop | BlockType::Goto => return true,
            _ => return false,
        }
    }
    !first
}

/// Whether a statement of block type `ty` is one the `Label` node wraps: a copy leaf, or a loop
/// head whose emitter prints the label above the loop.
fn labelled_kind(kind: &StmtKind, ty: BlockType) -> bool {
    match ty {
        BlockType::Copy => matches!(kind, StmtKind::Stmts { .. } | StmtKind::Ops { .. }),
        BlockType::WhileDo => matches!(kind, StmtKind::While { .. } | StmtKind::For { .. }),
        BlockType::DoWhile => matches!(kind, StmtKind::DoWhile { .. }),
        BlockType::InfLoop => matches!(kind, StmtKind::Loop { .. }),
        _ => false,
    }
}
