//! (unlace `strcmpfold`) Printing an inlined compare against a constant string as its
//! call: finding the tests that make it (one expression, or the branches of a `&&`/`||`
//! condition the structurer or the C syntax tree built) and pushing
//! `strncmp(base, "text", n) == 0`. The matching is `crate::strcmpfold`.

use super::{Architecture, Atom, Funcdata, OpId, PrintC, TagType, modifiers, op_key, tokens};
use crate::block::BlockType;
use crate::context::{BlockId, VarnodeId};
use crate::ctree::{ExprId, ExprKind};
use crate::lang::OutLang;
use crate::prettyprint::Emit;
use crate::printlanguage::SyntaxHighlight;
use crate::strcmpfold::{Base, Callee, Fold, Object, StrcmpFold, fold, test_pieces, test_vn};
use unlace_num::opcodes::OpCode;

impl PrintC {
    fn strcmp_fold_on(&self, arch: &Architecture) -> bool {
        self.out_lang == OutLang::C && arch.unlace_options.get::<StrcmpFold>().0
    }

    /// A read of a named variable: its printed name, the read's offset inside it and the
    /// variable's type.
    fn strcmp_object(&self, fd: &Funcdata, vn: VarnodeId) -> Option<Object> {
        let v = fd.vbank().get(vn)?;
        if v.is_constant() || v.is_implied() {
            return None;
        }
        let (name, offset, ty) = self.emitted_high_symbol(fd, v.get_high()?)?;
        Some((name, offset, ty?))
    }

    /// The string compare `op`'s value is, and whether the value is the compare's `== 0`
    /// (else its `!= 0`).
    pub(super) fn strcmp_op_fold(
        &self,
        fd: &Funcdata,
        arch: &Architecture,
        op: OpId,
    ) -> Option<(Fold, bool)> {
        if !self.strcmp_fold_on(arch) {
            return None;
        }
        let o = fd.obank().get(op)?;
        let object = |vn| self.strcmp_object(fd, vn);
        [true, false].into_iter().find_map(|equal| {
            let mut pieces = Vec::new();
            test_pieces(fd, o, equal, &object, &mut pieces)?;
            Some((fold(&pieces)?, equal))
        })
    }

    /// The `CBRANCH`es whose tests the condition block `blk` prints, in order, all joined by
    /// `&&` (`and`) or all by `||`; `None` when the block mixes the two, holds anything but
    /// branch leaves, or a leaf after the first prints a statement before its test.
    fn condition_branches(
        &self,
        fd: &Funcdata,
        blk: BlockId,
        and: bool,
        out: &mut Vec<OpId>,
    ) -> Option<()> {
        let b = fd.sblocks_ref().block(blk);
        match b.get_type() {
            BlockType::Condition => {
                if (b.get_condition_opcode()? == OpCode::CPUI_BOOL_AND) != and {
                    return None;
                }
                let (first, second) = (b.get_block(0), b.get_block(1));
                self.condition_branches(fd, first, and, out)?;
                self.condition_branches(fd, second, and, out)
            }
            BlockType::Copy => {
                if !out.is_empty() && self.cond_block_emits_statements(fd, blk) {
                    return None;
                }
                let cbranch = fd.bb_op_tail(b.get_copy()?)?;
                (fd.obank().get(cbranch)?.code() == OpCode::CPUI_CBRANCH).then(|| out.push(cbranch))
            }
            _ => None,
        }
    }

    /// [`condition_branches`](Self::condition_branches) of a `&&`/`||` of the C syntax tree.
    fn expr_branches(
        &self,
        fd: &Funcdata,
        expr: ExprId,
        and: bool,
        out: &mut Vec<OpId>,
    ) -> Option<()> {
        match self.ctree.as_ref()?.expr(expr).kind {
            ExprKind::Branch(block) => self.condition_branches(fd, block, and, out),
            ExprKind::And(left, right) if and => {
                self.expr_branches(fd, left, and, out)?;
                self.expr_branches(fd, right, and, out)
            }
            ExprKind::Or(left, right) if !and => {
                self.expr_branches(fd, left, and, out)?;
                self.expr_branches(fd, right, and, out)
            }
            _ => None,
        }
    }

    /// The string compare a chain of branch tests makes: under `&&` each printed test (the
    /// `CBRANCH` condition, negated when the branch prints flipped) must hold exactly when
    /// its bytes all do, under `||` exactly when one does not. The first branch is returned
    /// for markup.
    fn strcmp_branches_fold(
        &self,
        fd: &Funcdata,
        branches: &[OpId],
        and: bool,
    ) -> Option<(Fold, bool, OpId)> {
        let object = |vn| self.strcmp_object(fd, vn);
        let mut pieces = Vec::new();
        for &cbranch in branches {
            let o = fd.obank().get(cbranch)?;
            let flip = o.is_boolean_flip() ^ self.flipped_branches.contains(&cbranch);
            test_vn(fd, o.get_in(1)?, and != flip, &object, &mut pieces)?;
        }
        Some((fold(&pieces)?, and, *branches.first()?))
    }

    /// The string compare the structured `&&`/`||` condition block `blk` tests.
    pub(super) fn strcmp_block_fold(
        &self,
        fd: &Funcdata,
        arch: &Architecture,
        blk: BlockId,
    ) -> Option<(Fold, bool, OpId)> {
        if !self.strcmp_fold_on(arch) {
            return None;
        }
        let and = fd.sblocks_ref().block(blk).get_condition_opcode()? == OpCode::CPUI_BOOL_AND;
        let mut branches = Vec::new();
        self.condition_branches(fd, blk, and, &mut branches)?;
        self.strcmp_branches_fold(fd, &branches, and)
    }

    /// The string compare the `&&`/`||` `expr` of the C syntax tree tests.
    pub(super) fn strcmp_expr_fold(
        &self,
        fd: &Funcdata,
        arch: &Architecture,
        expr: ExprId,
    ) -> Option<(Fold, bool, OpId)> {
        if !self.strcmp_fold_on(arch) {
            return None;
        }
        let and = match self.ctree.as_ref()?.expr(expr).kind {
            ExprKind::And(..) => true,
            ExprKind::Or(..) => false,
            _ => return None,
        };
        let mut branches = Vec::new();
        self.expr_branches(fd, expr, and, &mut branches)?;
        self.strcmp_branches_fold(fd, &branches, and)
    }

    /// Print a folded condition where a branch's condition prints: parenthesized unless it
    /// is the comma-separated operand of an enclosing `&&`/`||`.
    pub(super) fn emit_strcmp_condition(
        &mut self,
        fd: &Funcdata,
        arch: &Architecture,
        fold: &Fold,
        equal: bool,
        op: OpId,
    ) {
        let paren = !self.context.is_set(modifiers::COMMA_SEPARATE);
        let id = if paren {
            self.emit.open_paren(crate::printlanguage::OPEN_PAREN, 0)
        } else {
            self.emit.open_group()
        };
        self.push_strcmp_fold(fd, arch, fold, equal, op);
        if paren {
            self.emit.close_paren(crate::printlanguage::CLOSE_PAREN, id);
        } else {
            self.emit.close_group(id);
        }
    }

    /// Push `callee(base, "text"[, n]) == 0` (`!= 0` unless `equal`); the base is the
    /// variable (`&name[at]` when the bytes start inside it) or the pointer (`p + at`).
    pub(super) fn push_strcmp_fold(
        &mut self,
        fd: &Funcdata,
        arch: &Architecture,
        fold: &Fold,
        equal: bool,
        op: OpId,
    ) {
        let key = op_key(op);
        let constant =
            |text: String| Atom::with_op(text, TagType::Syntax, SyntaxHighlight::const_color, key);
        let compare = if equal {
            &tokens::EQUAL
        } else {
            &tokens::NOT_EQUAL
        };
        self.push_op(compare, Some(key));
        self.push_op(&tokens::FUNCTION_CALL, Some(key));
        self.push_atom(&Atom::with_op(
            fold.callee.name(),
            TagType::FuncToken,
            SyntaxHighlight::funcname_color,
            key,
        ));
        let bounded = fold.callee == Callee::Strncmp;
        self.push_op(&tokens::COMMA, Some(key));
        if bounded {
            self.push_op(&tokens::COMMA, Some(key));
        }
        match &fold.base {
            Base::Variable { name, .. } => {
                if fold.at > 0 {
                    self.push_op(&tokens::ADDRESSOF, Some(key));
                    self.push_op(&tokens::SUBSCRIPT, Some(key));
                }
                self.push_atom(&Atom::with_op_vn(
                    name.clone(),
                    TagType::VarToken,
                    SyntaxHighlight::var_color,
                    key,
                    super::vn_key(fold.vn),
                ));
            }
            Base::Pointer { root, reader, .. } => {
                if fold.at > 0 {
                    self.push_op(&tokens::BINARY_PLUS, Some(key));
                }
                self.push_vn_ir(fd, arch, *root, *reader);
            }
        }
        if fold.at > 0 {
            self.push_atom(&constant(fold.at.to_string()));
        }
        let mut text = String::from("\"");
        for &byte in &fold.text {
            super::print_unicode_in_string(&mut text, i32::from(byte));
        }
        text.push('"');
        self.push_atom(&constant(text));
        if bounded {
            self.push_atom(&constant(fold.len.to_string()));
        }
        self.push_atom(&constant("0".to_string()));
    }
}
