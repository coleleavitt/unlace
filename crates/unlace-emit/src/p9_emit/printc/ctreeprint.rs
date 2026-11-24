//! (kuna `ctree`) Printing the function body through its C syntax tree
//! (`docs/architecture/ctree.md` §6), with `option ctree on`.
//!
//! `kuna_ctreebuild` builds the tree at `built`, one statement per structured block. The walk
//! here prints the kinds it models (the root's statements, a `BlockGraph`'s statements, a leaf)
//! and the components the block printers take through `emit_part` (an `if`'s arms, a loop's
//! body, a goto block's body) and hands every other statement to the block printer, whose children come
//! back through `emit_block` and so through the tree. At `built` each modelled kind prints what
//! the block printer prints for its origin block, call for call.

use unlace_base::types::int4;

use super::{Architecture, Funcdata, PrintC};
use unlace_num::opcodes::OpCode;

use crate::block::BlockType;
use crate::context::BlockId;
use crate::context::OpId;
use crate::context::VarnodeId;
use crate::ctree::{CMaturity, ExprId, ExprKind, StmtId, StmtKind};
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
            _ => false,
        }
    }

    /// Take the tree to `rewritten`: each `if` the `iteboolean` or `iteregion` print form
    /// applies to (the same tests, in the same order, `emit_block_if` used to make while
    /// printing) becomes the assignment statement it prints as. With `option boolreturn on`
    /// (C output), an `if` whose arms only return `1` and `0` becomes `return c` or
    /// `return !c` (`bool_return_shape`).
    pub(super) fn ctree_rewrite(&mut self, fd: &Funcdata, arch: &Architecture) {
        let Some(ids) = self.ctree.as_ref().map(|tree| tree.stmt_ids()) else {
            return;
        };
        self.ctree_take_plans();
        let bool_return = arch.kuna_options.get::<crate::ctree::Boolreturn>().0
            && self.out_lang == crate::lang::OutLang::C;
        let ret_ternary = arch.kuna_options.get::<crate::ctree::Retternary>().0
            && self.out_lang == crate::lang::OutLang::C;
        let noret_first = arch.kuna_options.get::<crate::ctree::Noretfirst>().0
            && self.out_lang == crate::lang::OutLang::C;
        let or_exit = arch.kuna_options.get::<crate::ctree::Orexit>().0
            && self.out_lang == crate::lang::OutLang::C;
        let nested_and = arch.kuna_options.get::<crate::ctree::Nestedand>().0
            && self.out_lang == crate::lang::OutLang::C;
        for id in ids {
            let Some(blk) = self.ctree.as_ref().and_then(|tree| {
                let blk = tree.stmt(id).origin?;
                (tree.node_for(blk) == Some(id)).then_some(blk)
            }) else {
                continue;
            };
            if fd.sblocks_ref().block(blk).get_type() != BlockType::If {
                continue;
            }
            let form = match self.ite_boolean_match(fd, blk) {
                Some(m) => Some(IteForm::Bool(m)),
                None => self.ite_ternary_match(fd, arch, blk).map(IteForm::Ternary),
            };
            let Some(form) = form else {
                if bool_return
                    && let Some((cond_block, ret_op, negate)) = self.bool_return_shape(fd, blk)
                {
                    if let Some(tree) = self.ctree.as_mut() {
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
                } else if ret_ternary
                    && let Some((cond_block, ret_op, shape)) = self.return_ternary_shape(fd, blk)
                {
                    if let Some(tree) = self.ctree.as_mut() {
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
                } else if noret_first {
                    self.noret_first(fd, id, blk);
                }
                continue;
            };
            let Some(tree) = self.ctree.as_mut() else {
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
        if bool_return {
            let ids = self
                .ctree
                .as_ref()
                .map(|tree| tree.stmt_ids())
                .unwrap_or_default();
            for id in ids {
                self.fold_return_ite(fd, id);
                self.fold_return_run(fd, id);
            }
        }
        if or_exit {
            for id in ids_rev(self.ctree.as_ref()) {
                self.fold_equal_exits(fd, id);
            }
        }
        if nested_and {
            for id in ids_rev(self.ctree.as_ref()) {
                while self.fold_nested_and(fd, id) {}
            }
        }
        if let Some(tree) = self.ctree.as_mut() {
            tree.advance(CMaturity::Rewritten);
        }
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

    /// (kuna `retternary`) An `if`/`else` (no goto) whose arms each print only a `return` of
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

    /// (kuna `boolreturn`) In the sequence `id` (a `BlockList`), fold the trailing run of
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
            value = next;
            folded.extend(first);
            first = Some(sid);
            if !self.clean_guard_cond(fd, cond) {
                break;
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

    /// (kuna `boolreturn`) Fold the `if`/`else` statement `id` (no goto, not a switch-merge
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

    /// (kuna `noretfirst`) Rewrite the `if`/`else` statement `id` (built from `blk`) when
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

    /// (kuna `nestedand`) Fold the `if` statement `id` with the `if` that is its whole body:
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

    /// (kuna `orexit`) In the sequence `id`, fold each run of adjacent `if`s without else that
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

/// Every statement of `tree`, last added first (an `if` before the statements inside it).
fn ids_rev(tree: Option<&crate::ctree::CTree>) -> Vec<StmtId> {
    let mut ids = tree.map(|tree| tree.stmt_ids()).unwrap_or_default();
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
