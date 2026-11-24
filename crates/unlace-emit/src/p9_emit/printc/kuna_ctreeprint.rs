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
        let bool_return = arch.kuna_options.get::<crate::kuna_ctree::Boolreturn>().0
            && self.out_lang == crate::kuna_lang::OutLang::C;
        let noret_first = arch.kuna_options.get::<crate::kuna_ctree::Noretfirst>().0
            && self.out_lang == crate::kuna_lang::OutLang::C;
        let nested_and = arch.kuna_options.get::<crate::kuna_ctree::Nestedand>().0
            && self.out_lang == crate::kuna_lang::OutLang::C;
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

    /// The `return` form the tree gave the `BlockIf` `blk`: its condition block, the body's
    /// `RETURN` op and whether the condition is negated.
    pub(super) fn return_form(&self, blk: BlockId) -> Option<(BlockId, OpId, bool)> {
        let tree = self.ctree.as_ref()?;
        let StmtKind::Return {
            value: Some(value),
            op: Some(op),
        } = &tree.stmt(tree.stmt_for(blk)?).kind
        else {
            return None;
        };
        match &tree.expr(*value).kind {
            ExprKind::Branch(cond) => Some((*cond, *op, false)),
            ExprKind::Not(inner) => match &tree.expr(*inner).kind {
                ExprKind::Branch(cond) => Some((*cond, *op, true)),
                _ => None,
            },
            _ => None,
        }
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
            (1, 0) => Some((cond_block, ret_op, false)),
            (0, 1) => Some((cond_block, ret_op, true)),
            _ => None,
        }
    }

    /// A `BlockCopy` leaf with no label line and no comment that prints exactly one
    /// statement, a `RETURN` of a constant: that op and the constant.
    fn single_const_return(&mut self, fd: &Funcdata, leaf: BlockId) -> Option<(OpId, u64)> {
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
                && crate::kuna_stackbytes::assignment(fd, inst).is_none()
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
        let value = fd.vbank().get(o.get_in(1)?)?;
        if !value.is_constant() || value.get_offset() > 1 {
            return None;
        }
        let constant = value.get_offset();
        let bb_index = fd.bblocks_ref().block(under).get_index();
        self.commsorter.setup_block_list(bb_index);
        self.commsorter.setup_op_list(None);
        if self.commsorter.has_next() {
            return None;
        }
        Some((ret, u64::try_from(constant).ok()?))
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

    /// The `&&` chain the tree gave the condition of the `BlockIf` `blk` (`nestedand`).
    pub(super) fn and_condition(&self, blk: BlockId) -> Option<crate::kuna_ctree::ExprId> {
        let tree = self.ctree.as_ref()?;
        let StmtKind::If { cond, .. } = &tree.stmt(tree.stmt_for(blk)?).kind else {
            return None;
        };
        matches!(tree.expr(*cond).kind, ExprKind::And(..)).then_some(*cond)
    }
}

/// Every statement of `tree`, last added first (an `if` before the statements inside it).
fn ids_rev(tree: Option<&crate::kuna_ctree::CTree>) -> Vec<StmtId> {
    let mut ids = tree.map(|tree| tree.stmt_ids()).unwrap_or_default();
    ids.reverse();
    ids
}

/// A condition `emit_cond_expr` prints: a `Branch`, or an `And` whose left operand is one of
/// these and whose right operand is a `Branch`.
fn is_and_chain(tree: &crate::kuna_ctree::CTree, expr: crate::kuna_ctree::ExprId) -> bool {
    match tree.expr(expr).kind {
        ExprKind::Branch(_) => true,
        ExprKind::And(left, right) => {
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
