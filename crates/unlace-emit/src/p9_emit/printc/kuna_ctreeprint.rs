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
use crate::block::BlockType;
use crate::context::BlockId;
use crate::kuna_ctree::{CMaturity, ExprKind, StmtId, StmtKind};
use crate::kuna_iteboolean::IteBoolMatch;
use crate::kuna_iteregion::IteAssignMatch;

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
            let id = tree.node_for(blk)?;
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
    fn emit_ctree_arm(&mut self, fd: &Funcdata, arch: &Architecture, id: StmtId) {
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
    /// printing) becomes the assignment statement it prints as.
    pub(super) fn ctree_rewrite(&mut self, fd: &Funcdata, arch: &Architecture) {
        let Some(ids) = self.ctree.as_ref().map(|tree| tree.stmt_ids()) else {
            return;
        };
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
                    crate::kuna_iteregion::match_ite_assignment(fd, blk).map(IteForm::Ternary)
                }
                _ => crate::kuna_iteboolean::match_ite_boolean(fd, blk).map(IteForm::Bool),
            };
        }
        if let Some(m) = self.ite_boolean_match(fd, blk) {
            return Some(IteForm::Bool(m));
        }
        self.ite_ternary_match(fd, arch, blk).map(IteForm::Ternary)
    }
}
