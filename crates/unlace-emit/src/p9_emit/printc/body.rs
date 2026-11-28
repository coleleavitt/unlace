//! The function-body driver and structured block dispatch.

use super::*;

impl PrintC {
    /// Emit the structured function body into the open brace (C++
    /// `emitLocalVarDecls(fd)` + `emitBlockGraph(&fd->getStructure())`,
    /// printc.cc:2805-2809).  Local var decls need the Symbol table (the merge/
    /// naming layer); the structured block graph walk is driven here.
    pub fn emit_function_body(&mut self, fd: &Funcdata, arch: &Architecture) {
        let sroot = match fd.sblocks_ref().root {
            Some(r) => r,
            None => return,
        };
        // Drop any pending-brace fire log from a previous function so the
        // per-registration `pend_fired` record cannot accumulate across a
        // load-once/decompile-many run (generations are globally unique, so this
        // is purely to bound memory, not for correctness).
        self.emit.reset_pending_fired();
        self.void_tail_return = if arch.unlace_options.get::<crate::printc::Voidtailreturn>().0 {
            elidable_void_tail_return(fd)
        } else {
            None
        };
        if self.out_lang == crate::lang::OutLang::Java
            && arch.unlace_options.get::<crate::javanew::JavaNew>().0
        {
            self.java_new = crate::javanew::pairs(fd);
            self.java_ctor_calls = crate::javanew::ctor_calls(fd);
        }
        let c_switch = matches!(self.lang().forms.switch, crate::lang::SwitchForm::CSwitch);
        self.switch_plans = if arch
            .unlace_options
            .get::<crate::switchmerge::Switchmerge>()
            .0
            && c_switch
        {
            let facts = crate::switchmerge::PrintFacts {
                prints_nothing: &|head| self.header_prints_nothing(fd, head),
                labels: &|sw| self.switch_label_set(fd, arch, sw),
                arm_labels: &|sw, index| {
                    let case = &fd.sblocks_ref().block(sw).switch_caseblocks()[index];
                    self.switch_case_labels(fd, arch, sw, case)
                        .into_iter()
                        .map(|l| l.0)
                        .collect()
                },
                block_prints_nothing: &|bb| self.ops_print_nothing(fd, bb),
            };
            crate::switchmerge::switch_plans(fd, sroot, &facts)
        } else {
            Default::default()
        };
        self.goto_rewrites = if arch
            .unlace_options
            .get::<crate::funcdata_block::GotoNext>()
            .0
            && c_switch
        {
            crate::gotonext::goto_rewrites(
                fd.sblocks_ref(),
                sroot,
                arch.unlace_options
                    .get::<crate::loopbreak_recovery::RecoverLoopBreak>()
                    .0,
                &self.switch_plans,
            )
        } else {
            Default::default()
        };
        self.assign_label_names(fd, sroot);
        self.ctree = if !self.is_flat() {
            crate::ctreebuild::build(fd)
        } else {
            None
        };
        self.ctree_rewrite(fd, arch);
        if !self.emit_ctree_body(fd, arch, sroot) {
            self.emit_block_graph(fd, arch, sroot);
        }
        while let Some(id) = self.eh_open_catch.pop() {
            self.emit.close_brace_indent(self.lang().kw_close_curly, id);
        }
        self.void_tail_return = None;
        self.java_new.clear();
        self.java_ctor_calls.clear();
        self.goto_rewrites = Default::default();
        self.switch_plans = Default::default();
        self.label_names.clear();
        self.ctree = None;
        self.flipped_branches.clear();
    }

    /// Give every printed label a distinct name.  Block duplication (return
    /// splitting, tail duplication, const-return peeling) leaves two leaves
    /// with the same entry address, and both can be goto targets.  Labeled
    /// leaves are visited in tree order; the first keeps `label_<addr>`, the
    /// n-th copy becomes `label_<addr>_<n>`, and a goto resolves its target
    /// leaf through the same map.
    pub(super) fn assign_label_names(&mut self, fd: &Funcdata, sroot: BlockId) {
        use crate::block::BlockType;
        self.label_names.clear();
        let sb = fd.sblocks_ref();
        let mut targets = Vec::new();
        let mut stack = vec![sroot];
        while let Some(b) = stack.pop() {
            let blk = sb.block(b);
            if blk.get_type() == BlockType::Copy {
                if blk.is_unstructured_target() && !self.goto_rewrites.labels.contains(&b) {
                    targets.push(b);
                }
                continue;
            }
            stack.extend(blk.get_list().iter().rev().copied());
        }
        if targets.len() < 2 {
            return;
        }
        let mut seen: std::collections::BTreeMap<String, usize> = std::collections::BTreeMap::new();
        for b in targets {
            let base = self.address_label_name(fd, b);
            let n = seen.entry(base.clone()).or_insert(0);
            *n += 1;
            if *n > 1 {
                self.label_names.insert(b, format!("{base}_{n}"));
            }
        }
    }

    /// C++ `PrintC::emitBlockGraph` (printc.cc:2895): emit each component block.
    pub(super) fn emit_block_graph(&mut self, fd: &Funcdata, arch: &Architecture, graph: BlockId) {
        let list: Vec<BlockId> = fd.sblocks_ref().block(graph).get_list().to_vec();
        for blk in list {
            let id = self.emit.begin_block(0);
            self.emit_block(fd, arch, blk);
            self.emit.end_block(id);
        }
    }

    /// Dispatch one structured block to its emitter (C++ the virtual
    /// `FlowBlock::emit(PrintLanguage*)` -> `PrintC::emitBlock*`).
    /// The statement the function's C syntax tree built from `blk` prints instead, when the
    /// tree printer models it (`unlace_ctreeprint`).
    #[doc(hidden)]
    pub fn emit_block(&mut self, fd: &Funcdata, arch: &Architecture, blk: BlockId) {
        if self.ctree.is_some() && self.emit_ctree_block(fd, arch, blk) {
            return;
        }
        self.emit_block_raw(fd, arch, blk);
    }

    /// The block printer's own dispatch, for a block the C syntax tree leaves to it.
    pub(super) fn emit_block_raw(&mut self, fd: &Funcdata, arch: &Architecture, blk: BlockId) {
        use crate::block::BlockType;
        match fd.sblocks_ref().block(blk).get_type() {
            BlockType::Copy => self.emit_block_copy(fd, arch, blk),
            BlockType::Basic => self.emit_block_basic(fd, arch, blk),
            BlockType::Ls => self.emit_block_ls(fd, arch, blk),
            BlockType::If => match self.switch_of(blk) {
                Some(sw) => self.emit_block_switch(fd, arch, sw),
                None => self.emit_block_if(fd, arch, blk),
            },
            BlockType::Graph => self.emit_block_graph(fd, arch, blk),
            BlockType::Goto => self.emit_block_goto(fd, arch, blk),
            BlockType::WhileDo => self.emit_block_while_do(fd, arch, blk),
            BlockType::DoWhile => self.emit_block_do_while(fd, arch, blk),
            BlockType::InfLoop => self.emit_block_inf_loop(fd, arch, blk),
            BlockType::Condition => self.emit_block_condition(fd, arch, blk),
            BlockType::Switch => self.emit_block_switch(fd, arch, blk),
            // multigoto: its emitter is the next structuring layer.  Fall through
            // to the component blocks.
            _ => {
                let list: Vec<BlockId> = fd.sblocks_ref().block(blk).get_list().to_vec();
                for c in list {
                    self.emit_block(fd, arch, c);
                }
            }
        }
    }

    /// C++ `PrintC::emitBlockCondition` (printc.cc:2985): emit a `BlockCondition`
    /// (the two short-circuited `&&`/`||` clauses).
    ///
    /// The condition node has no statement body of its own; it is only emitted as
    /// the boolean expression of an enclosing `if`/loop.  In the `no_branch`
    /// state (the "statements before the branch" pass of `emitBlockIf`) only the
    /// first clause's leading statements print.  In the `only_branch`/
    /// `comma_separate` state (the branch-condition pass) the two clauses print
    /// glued by ` && ` / ` || `, each wrapped in parens — matching the C++
    /// `(a && b)` form.
    pub(super) fn emit_block_condition(
        &mut self,
        fd: &Funcdata,
        arch: &Architecture,
        blk: BlockId,
    ) {
        let b0 = fd.sblocks_ref().block(blk).get_block(0);
        // no_branch: emit only the first clause's leading statements.
        if self.context.is_set(modifiers::NO_BRANCH) {
            let id = self.emit.begin_block(0);
            self.emit_block(fd, arch, b0);
            self.emit.end_block(id);
            return;
        }
        if self.context.is_set(modifiers::ONLY_BRANCH)
            || self.context.is_set(modifiers::COMMA_SEPARATE)
        {
            if let Some((fold, equal, op)) = self.strcmp_block_fold(fd, arch, blk) {
                self.emit_strcmp_condition(fd, arch, &fold, equal, op);
                return;
            }
            let b1 = fd.sblocks_ref().block(blk).get_block(1);
            let opc = fd
                .sblocks_ref()
                .block(blk)
                .get_condition_opcode()
                .unwrap_or(OpCode::CPUI_BOOL_AND);

            if self.out_lang == crate::lang::OutLang::Go
                && opc == OpCode::CPUI_BOOL_AND
                && crate::goorderedcompare::redundant_right(fd, arch, b0, b1).is_some()
                && !self.cond_block_emits_statements(fd, b1)
            {
                self.emit_block(fd, arch, b0);
                return;
            }

            let id = self.emit.open_paren(crate::printlanguage::OPEN_PAREN, 0);
            self.emit_block(fd, arch, b0);
            self.context.push_mod();
            self.context.unset_mod(modifiers::ONLY_BRANCH);
            // comma_separate is placed only on the second block.
            self.context.set_mod(modifiers::COMMA_SEPARATE);

            // Emit the && / || token as if it were on the RPN stack (C++ builds a
            // ReversePolish with op==0, visited==1, and calls emitOp).
            let tok: &'static crate::printlanguage::OpToken = if opc == OpCode::CPUI_BOOL_AND {
                &tokens::BOOLEAN_AND
            } else {
                &tokens::BOOLEAN_OR
            };
            let pol = ReversePolish {
                tok,
                visited: 1,
                paren: false,
                op: None,
                id: 0,
                id2: 0,
            };
            self.emit_op(&pol);

            let id2 = self.emit.open_paren(crate::printlanguage::OPEN_PAREN, 0);
            if self.out_lang == crate::lang::OutLang::Go {
                self.emit_go_condition_expression(fd, arch, b1);
            } else {
                self.emit_block(fd, arch, b1);
            }
            self.emit
                .close_paren(crate::printlanguage::CLOSE_PAREN, id2);
            self.context.pop_mod();
            self.emit.close_paren(crate::printlanguage::CLOSE_PAREN, id);
        }
    }

    /// (unlace `boolreturn`, `retternary`) Print the value of a `return` the C syntax tree made
    /// from an `if`: a `Branch` through the `ONLY_BRANCH` render of its condition block (it
    /// parenthesizes itself), `Not` as `!` unless the branch it negates can print negated
    /// itself (`return_not_flip`), an `Op` as the returned value of that `RETURN` (a
    /// constant or a variable), and `?:`, `&&`, `||` between their operands.
    pub(super) fn emit_return_value(
        &mut self,
        fd: &Funcdata,
        arch: &Architecture,
        expr: crate::ctree::ExprId,
    ) {
        self.emit_return_expr(fd, arch, expr, true);
    }

    /// [`emit_return_value`](Self::emit_return_value) of `expr`; `value` is set when the
    /// printed text is the returned value itself, which must stay `0` or `1`.
    pub(super) fn emit_return_expr(
        &mut self,
        fd: &Funcdata,
        arch: &Architecture,
        expr: crate::ctree::ExprId,
        value: bool,
    ) {
        use crate::ctree::ExprKind;
        use crate::prettyprint::Emit;
        let Some(kind) = self.ctree.as_ref().map(|tree| tree.expr(expr).kind.clone()) else {
            return;
        };
        let token = |emit: &mut PrintEmit, text: &str| {
            emit.spaces(1, 0);
            emit.tag_op(text, SyntaxHighlight::NoColor, &MarkupRef::none());
            emit.spaces(1, 0);
        };
        match kind {
            ExprKind::Branch(block) => {
                self.context.push_mod();
                self.context.set_mod(modifiers::ONLY_BRANCH);
                self.emit_block(fd, arch, block);
                self.context.pop_mod();
            }
            ExprKind::Not(inner) => {
                if let Some(cbranch) = self.return_not_flip(fd, inner, value) {
                    let flipped = self.flipped_branches.remove(&cbranch);
                    if !flipped {
                        self.flipped_branches.insert(cbranch);
                    }
                    self.emit_return_expr(fd, arch, inner, false);
                    if flipped {
                        self.flipped_branches.insert(cbranch);
                    } else {
                        self.flipped_branches.remove(&cbranch);
                    }
                    return;
                }
                self.emit.tag_op(
                    self.op_spelling(&tokens::BOOLEAN_NOT),
                    SyntaxHighlight::NoColor,
                    &MarkupRef::none(),
                );
                self.emit_return_expr(fd, arch, inner, false);
            }
            ExprKind::Op(ret) => {
                if let Some(vn) = fd.obank().get(ret).and_then(|o| o.get_in(1)) {
                    self.push_vn_ir(fd, arch, vn, ret);
                }
            }
            ExprKind::Ternary(cond, yes, no) => {
                self.emit_return_expr(fd, arch, cond, false);
                token(&mut self.emit, "?");
                self.emit_return_expr(fd, arch, yes, value);
                token(&mut self.emit, ":");
                self.emit_return_expr(fd, arch, no, value);
            }
            ExprKind::And(left, right) | ExprKind::Or(left, right) => {
                if let Some((fold, equal, op)) = self.strcmp_expr_fold(fd, arch, expr) {
                    self.emit_strcmp_condition(fd, arch, &fold, equal, op);
                    return;
                }
                let and = matches!(kind, ExprKind::And(..));
                self.emit_return_operand(fd, arch, left, and);
                let text = self.op_spelling(if and {
                    &tokens::BOOLEAN_AND
                } else {
                    &tokens::BOOLEAN_OR
                });
                token(&mut self.emit, text);
                self.emit_return_operand(fd, arch, right, and);
            }
            _ => {}
        }
    }

    /// An operand of a returned `&&` (`and`) or `||`: parenthesized when it is a `||` under
    /// a `&&` or a `?:`, which bind looser, or a `&&` under a `||`, for clarity.
    pub(super) fn emit_return_operand(
        &mut self,
        fd: &Funcdata,
        arch: &Architecture,
        expr: crate::ctree::ExprId,
        and: bool,
    ) {
        use crate::ctree::ExprKind;
        use crate::prettyprint::Emit;
        let wrap = self
            .ctree
            .as_ref()
            .is_some_and(|tree| match tree.expr(expr).kind {
                ExprKind::Or(..) => and,
                ExprKind::And(..) => !and,
                ExprKind::Ternary(..) => true,
                _ => false,
            });
        if !wrap {
            self.emit_return_expr(fd, arch, expr, false);
            return;
        }
        let id = self.emit.open_paren(crate::printlanguage::OPEN_PAREN, 0);
        self.emit_return_expr(fd, arch, expr, false);
        self.emit.close_paren(crate::printlanguage::CLOSE_PAREN, id);
    }

    /// The `CBRANCH` a returned `Not` of `inner` can flip instead of printing `!`, so the
    /// comparison prints its complement (`v1 <= v2` as `v2 < v1`, `!x` as `x`): `inner` is
    /// a `Branch` of a single leaf ending in a `CBRANCH`. When the negation is the returned
    /// `value` itself, only a comparison that still prints as one (not a `truthycond` bare
    /// truth test) and is not a `!` qualifies.
    pub(super) fn return_not_flip(
        &self,
        fd: &Funcdata,
        inner: crate::ctree::ExprId,
        value: bool,
    ) -> Option<OpId> {
        let crate::ctree::ExprKind::Branch(block) = self.ctree.as_ref()?.expr(inner).kind else {
            return None;
        };
        let sb = fd.sblocks_ref();
        if sb.block(block).get_type() != crate::block::BlockType::Copy {
            return None;
        }
        let cbranch = fd.bb_op_tail(sb.block(block).get_copy()?).filter(|op| {
            fd.obank()
                .get(*op)
                .is_some_and(|o| o.code() == OpCode::CPUI_CBRANCH)
        })?;
        if !value {
            return Some(cbranch);
        }
        let in1 = fd.obank().get(cbranch)?.get_in(1)?;
        let def = fd.vbank().get(in1)?.get_def()?;
        let d = fd.obank().get(def)?;
        (self.check_print_negation(fd, in1)
            && d.is_bool_output()
            && d.code() != OpCode::CPUI_BOOL_NEGATE
            && self.truthy_other_operand(fd, def).is_none())
        .then_some(cbranch)
    }

    /// (unlace `nestedand`) Print a condition of the C syntax tree in the `ONLY_BRANCH` state:
    /// a `Branch` as its condition block's branch, an `And` the way
    /// [`emit_block_condition`](Self::emit_block_condition) prints a `&&` of two condition
    /// blocks (the left operand in this state, the right operand comma-separated, each
    /// parenthesized). The right operand of an `And` is always a `Branch`.
    pub(super) fn emit_cond_expr(
        &mut self,
        fd: &Funcdata,
        arch: &Architecture,
        expr: crate::ctree::ExprId,
    ) {
        use crate::ctree::ExprKind;
        let kind = match self.ctree.as_ref() {
            Some(tree) => tree.expr(expr).kind.clone(),
            None => return,
        };
        if let Some((fold, equal, op)) = self.strcmp_expr_fold(fd, arch, expr) {
            self.emit_strcmp_condition(fd, arch, &fold, equal, op);
            return;
        }
        let is_or = matches!(kind, ExprKind::Or(..));
        match kind {
            ExprKind::Branch(block) => self.emit_block(fd, arch, block),
            ExprKind::And(left, right) | ExprKind::Or(left, right) => {
                let right_block = match self
                    .ctree
                    .as_ref()
                    .map(|tree| tree.expr(right).kind.clone())
                {
                    Some(ExprKind::Branch(block)) => block,
                    _ => return,
                };
                let id = self.emit.open_paren(crate::printlanguage::OPEN_PAREN, 0);
                self.emit_cond_expr(fd, arch, left);
                self.context.push_mod();
                self.context.unset_mod(modifiers::ONLY_BRANCH);
                self.context.set_mod(modifiers::COMMA_SEPARATE);
                let pol = ReversePolish {
                    tok: if is_or {
                        &tokens::BOOLEAN_OR
                    } else {
                        &tokens::BOOLEAN_AND
                    },
                    visited: 1,
                    paren: false,
                    op: None,
                    id: 0,
                    id2: 0,
                };
                self.emit_op(&pol);
                let id2 = self.emit.open_paren(crate::printlanguage::OPEN_PAREN, 0);
                self.emit_block(fd, arch, right_block);
                self.emit
                    .close_paren(crate::printlanguage::CLOSE_PAREN, id2);
                self.context.pop_mod();
                self.emit.close_paren(crate::printlanguage::CLOSE_PAREN, id);
            }
            _ => {}
        }
    }

    /// C++ `PrintC::emitBlockCopy` (printc.cc:2908): emit the underlying basic
    /// block (the `BlockCopy.copy` points back into `bblocks`).
    pub(super) fn emit_block_copy(&mut self, fd: &Funcdata, arch: &Architecture, blk: BlockId) {
        self.emit_block_copy_in(fd, arch, blk, None);
    }

    /// [`emit_block_copy`](Self::emit_block_copy) printing `ops` when given (a leaf of the C
    /// syntax tree at `statements`).
    pub(super) fn emit_block_copy_in(
        &mut self,
        fd: &Funcdata,
        arch: &Architecture,
        blk: BlockId,
        ops: Option<&[OpId]>,
    ) {
        // emitBlockCopy -> emitAnyLabelStatement(bl) (printc.cc:2894): a label line
        // for an unstructured-goto target.  Its `tag_line(0)` fires any pending
        // `else if` brace, forcing `else { label: if ... }` (the `else if`
        // collapse is suppressed when the clause carries a goto label).  Routing
        // through `emit_any_label_statement` skips the label when it was hoisted up
        // to an enclosing loop head (`isLabelBumpUp`).
        self.emit_any_label_statement(fd, blk);
        self.emit_block_copy_body(fd, arch, blk, ops);
    }

    /// The statements of a copy leaf, without its label line (the caller prints that).
    pub(super) fn emit_block_copy_body(
        &mut self,
        fd: &Funcdata,
        arch: &Architecture,
        blk: BlockId,
        ops: Option<&[OpId]>,
    ) {
        if let Some(under) = fd.sblocks_ref().block(blk).get_copy() {
            // The copy's `copy` field is a *bblocks* BlockId.
            self.emit_basic_block_ops_in(fd, arch, under, true, ops);
        }
    }

    /// The display name for a goto target / label line (C++ `PrintC::emitLabel`,
    /// printc.cc:3328): the **entry address** of the block's front-leaf basic
    /// block, rendered in unlace's angr style as `label_<addr>`
    /// ([`unlace_label_name`](crate::database::unlace_label_name)).  Falls back to the
    /// reverse-post `LAB_<index>` form only when the block has no resolvable entry
    /// address, keeping a `goto`/target pair always consistent.  A duplicated
    /// leaf takes the suffixed name [`assign_label_names`](PrintC::assign_label_names)
    /// gave it.
    #[doc(hidden)]
    pub fn block_label_name(&self, fd: &Funcdata, bl: BlockId) -> String {
        if !self.label_names.is_empty()
            && let Some(name) = fd
                .sblocks_ref()
                .get_front_leaf(bl)
                .and_then(|f| self.label_names.get(&f))
            {
                return name.clone();
            }
        self.address_label_name(fd, bl)
    }

    pub(super) fn address_label_name(&self, fd: &Funcdata, bl: BlockId) -> String {
        let addr = fd.sblock_entry_addr(bl);
        if addr.is_invalid() {
            let idx = fd.sblocks_ref().block(bl).get_index();
            format!("LAB_{idx:08x}")
        } else if fd.get_arch().unlace_name_style() == crate::database::UnlaceNameStyle::Ghidra {
            // (unlace, Phase 3) ghidra-mode: the GUI label convention LAB_%08x.
            crate::database::ghidra_label_name(&addr)
        } else {
            crate::database::unlace_label_name(&addr)
        }
    }

    /// C++ `PrintC::emitLabelStatement` (printc.cc:3355), structured-print arm: a
    /// `LABEL:` line for a `t_copy` block that is the target of an unstructured
    /// goto.  The label name is the block's entry-address-based `label_<addr>`
    /// ([`block_label_name`]) so a `goto`/target pair render the same name.
    pub(super) fn emit_label_statement(&mut self, fd: &Funcdata, bl: BlockId) {
        if self.out_lang == crate::lang::OutLang::Go && self.go_suppressed_labels.contains(&bl) {
            return;
        }
        match self.lang().forms.label {
            crate::lang::LabelForm::CColon => self.emit_label_statement_c(fd, bl),
            crate::lang::LabelForm::CommentOnly => self.emit_label_statement_rust(fd, bl),
        }
    }

    pub(super) fn emit_label_statement_c(&mut self, fd: &Funcdata, bl: BlockId) {
        use crate::block::BlockType;
        if self.context.is_set(modifiers::ONLY_BRANCH) {
            return;
        }
        // Structured: only print labels for unstructured-jump targets that are
        // t_copy leaves.
        if !fd.sblocks_ref().block(bl).is_unstructured_target()
            || self.goto_rewrites.labels.contains(&bl)
        {
            return;
        }
        if fd.sblocks_ref().block(bl).get_type() != BlockType::Copy {
            return;
        }
        self.emit.tag_line_indent(0);
        self.emit
            .print(&self.block_label_name(fd, bl), SyntaxHighlight::NoColor);
        self.emit
            .print(self.lang().kw_colon, SyntaxHighlight::NoColor);
        self.emit.note_label();
    }

    /// C++ `PrintC::emitAnyLabelStatement` (printc.cc:3354): find the entry basic
    /// block of `bl` and emit any required label statement for it — unless the
    /// label was hoisted up the hierarchy (`isLabelBumpUp`), in which case the
    /// enclosing loop emitter prints it above the loop head instead (so a
    /// loop-head label never lands inside the loop condition).  The block does not
    /// have to be a basic block; `get_front_leaf` finds the entry `t_copy` leaf.
    #[doc(hidden)]
    pub fn emit_any_label_statement(&mut self, fd: &Funcdata, bl: BlockId) {
        if self.label_printed == Some(bl) {
            self.label_printed = None;
            return;
        }
        // The tree decided (C colon form, `ctree_labels`) that no label line is printed here.
        if self.ctree.as_ref().and_then(|tree| tree.label_line(bl)) == Some(false) {
            return;
        }
        // Label printed by someone else.
        if fd.sblocks_ref().block(bl).is_label_bump_up() {
            return;
        }
        let Some(front) = fd.sblocks_ref().get_front_leaf(bl) else {
            return;
        };
        self.emit_label_statement(fd, front);
    }

    /// Seed [`commsorter`](PrintC::commsorter) with this function's comments (C++
    /// `CommentSorter::setupFunctionList`, printc.cc:2799).  The architecture's
    /// warning sink stores comments as flat `ArchWarning` records; rebuild a real
    /// `CommentDatabaseInternal` (which sorts/uniqs by `(fad, addr, uniq)`) from
    /// them so the sorter's block placement reads the same ordered set C++ does.
    pub(super) fn setup_comments(&mut self, fd: &Funcdata, arch: &Architecture) {
        use crate::comment::comment_type as ct;
        use crate::comment::{CommentDatabase, CommentDatabaseInternal};
        // head_comment_type | instr_comment_type (printlanguage.cc:586-589).
        let tp = ct::HEADER | ct::WARNINGHEADER | ct::USER2 | ct::WARNING;
        let mut db = CommentDatabaseInternal::new();
        let fad = fd.get_address();
        for w in arch
            .commentdb
            .comments()
            .iter()
            .filter(|w| &w.func_addr == fad)
        {
            db.add_comment(w.tp, &w.func_addr, &w.addr, w.text.as_bytes());
        }
        for (addr, text) in crate::nonnullparamhint::hints(fd, arch) {
            db.add_comment(ct::USER2, fad, &addr, text.as_bytes());
        }
        // option_unplaced is off by default (C++ resetDefaultsPrintC).
        if let Err(_e) = self.commsorter.setup_function_list(tp, fd, &db, false) {
            // A dead op reaching the sorter is a C++ LowlevelError; degrade to
            // "no comments placed" rather than aborting the whole print.
            self.commsorter = crate::comment::CommentSorter::new();
        }
    }

    /// C++ `PrintC::emitCommentGroup` (printc.cc:3388): emit the comment lines the
    /// sorter has associated with the statement rooted at `inst` (or, for `None`,
    /// any remaining comments in the current block).  Only `instr_comment_type`
    /// comments are shown.
    pub(super) fn emit_comment_group(&mut self, fd: &Funcdata, inst: Option<OpId>) {
        use crate::comment::comment_type as ct;
        let instr_comment_type = ct::USER2 | ct::WARNING;
        let landmark = inst.and_then(|op| {
            let o = fd.obank().get(op)?;
            let parent = o.get_parent()?;
            Some(crate::comment::OpListLandmark {
                index: fd.bblocks_ref().block(parent).get_index(),
                order: o.get_seq_num().get_order(),
            })
        });
        self.commsorter.setup_op_list(landmark);
        while self.commsorter.has_next() {
            let (emitted, tp, text, addr) = {
                let comm = self.commsorter.get_next();
                (
                    comm.is_emitted(),
                    comm.get_type(),
                    comm.get_text().to_vec(),
                    comm.get_addr().clone(),
                )
            };
            if emitted {
                continue;
            }
            if (instr_comment_type & tp) == 0 {
                continue;
            }
            let warning = (tp == ct::WARNING && addr.get_space().is_some()).then(|| {
                crate::functionwarnings::Warning::new(
                    Some(addr.get_offset()),
                    &String::from_utf8_lossy(&text),
                )
            });
            // (unlace warnstyle, DIV-39) Inline mode: a WARNING comment becomes a
            // terse `// slug` collected for the owning line's end; every other
            // comment type keeps the banner-line render.
            if self.options.warn_caveats
                && (tp & ct::WARNING) != 0
                && crate::warnlevel::elided(fd, &String::from_utf8_lossy(&text), &addr, false)
            {
                self.commsorter.mark_last_emitted();
                continue;
            }
            if self.options.warn_inline && (tp & ct::WARNING) != 0
                && let (Some(space), text_str) = (
                    addr.get_space().map(std::rc::Rc::clone),
                    String::from_utf8_lossy(&text),
                ) {
                    self.eol_warns.push((
                        warning_slug(&text_str),
                        space,
                        addr.get_offset(),
                        warning,
                    ));
                    self.commsorter.mark_last_emitted();
                    continue;
                }
            self.emit_line_comment(-1, &text, &addr);
            if let Some(warning) = warning {
                self.record_warning(warning, &String::from_utf8_lossy(&text));
            }
            // emitLineComment sets comm->setEmitted(true) (printlanguage.cc:655),
            // so a later walk over the same window skips it.
            self.commsorter.mark_last_emitted();
        }
    }

    /// (unlace warnstyle, DIV-39) Append the collected warning slugs to the
    /// current line as one `// slug, slug` comment token.  Call sites are the
    /// last token of the line the warnings describe: the statement semicolon,
    /// the `if (cond)` header (brace / goto / elided forms), the loop header
    /// brace, the ternary statement, and the function prototype.  No-op when
    /// nothing was collected.
    #[doc(hidden)]
    pub fn flush_eol_warnings(&mut self) {
        if self.eol_warns.is_empty() {
            return;
        }
        let warns = std::mem::take(&mut self.eol_warns);
        let (space, off) = (std::rc::Rc::clone(&warns[0].1), warns[0].2);
        let joined = warns
            .iter()
            .map(|w| w.0.as_str())
            .collect::<Vec<_>>()
            .join(", ");
        self.emit.spaces(1, 0);
        let token = format!("// {joined}");
        self.emit
            .tag_comment(&token, SyntaxHighlight::CommentColor, &space, off);
        for warning in warns.into_iter().filter_map(|w| w.3) {
            self.record_warning(warning, &token);
        }
    }

    /// C++ `PrintLanguage::emitLineComment` (printlanguage.cc:596): a fresh line
    /// (at the comment indent) carrying `/* <text> */`.  The default C delimiters
    /// are `/* ` / ` */`; a negative `indent` uses the configured comment indent.
    pub(super) fn emit_line_comment(
        &mut self,
        indent: int4,
        text: &[u8],
        addr: &unlace_base::address::Address,
    ) {
        let indent = if indent < 0 {
            self.context.line_comment_indent()
        } else {
            indent
        };
        let (space, off) = match addr.get_space() {
            Some(s) => (std::rc::Rc::clone(s), addr.get_offset()),
            None => return,
        };
        self.emit.tag_line_indent(indent);
        let body = String::from_utf8_lossy(text);
        self.emit.tag_comment(
            &format!("/* {body} */"),
            SyntaxHighlight::CommentColor,
            &space,
            off,
        );
    }

    /// C++ `PrintC::emitCommentBlockTree` (printc.cc:3404): emit any comments
    /// attached to basic blocks under the structured subtree rooted at the sblocks
    /// node `bl`.  Used where statements from several basic blocks land on one
    /// line (the `if (cond)` header) and a normal in-line comment would otherwise
    /// print mid-line — here it forces the pending `else if` brace.
    #[doc(hidden)]
    pub fn emit_comment_block_tree(&mut self, fd: &Funcdata, bl: BlockId) {
        use crate::block::BlockType;
        match fd.sblocks_ref().block(bl).get_type() {
            // BlockCopy: descend to the underlying bblocks BlockBasic.
            BlockType::Copy => {
                if let Some(under) = fd.sblocks_ref().block(bl).get_copy() {
                    // The copy's `copy` is a *bblocks* id (a BlockBasic).
                    self.commsorter
                        .setup_block_list(fd.bblocks_ref().block(under).get_index());
                    self.emit_comment_group(fd, None);
                }
            }
            BlockType::Plain => {}
            // A bare sblocks BlockBasic (rare): its own index.
            BlockType::Basic => {
                self.commsorter
                    .setup_block_list(fd.sblocks_ref().block(bl).get_index());
                self.emit_comment_group(fd, None);
            }
            // BlockGraph subtype: recurse into every component.
            _ => {
                let n = fd.sblocks_ref().block(bl).get_size();
                for i in 0..n {
                    let child = fd.sblocks_ref().block(bl).get_block(i);
                    self.emit_comment_block_tree(fd, child);
                }
            }
        }
    }

    /// C++ `PrintC::emitBlockBasic` for an sblocks Basic node (rare in the
    /// structured tree, but handled for completeness): the node *is* a basic
    /// block in the sblocks arena.
    pub(super) fn emit_block_basic(&mut self, fd: &Funcdata, arch: &Architecture, blk: BlockId) {
        self.emit_basic_block_ops(fd, arch, blk, false);
    }
}
