//! Goto, loop and label block emission.

use super::*;

impl PrintC {
    /// C++ `PrintC::emitBlockGoto` (printc.cc:2915): emit the block's body
    /// (no_branch) then the trailing `goto`/`break`/`continue` statement.
    ///
    /// `BlockGoto::gotoPrints` is honoured under option `gotonext`
    /// ([`goto_rewrites`](PrintC::goto_rewrites)); off, the goto is emitted whenever
    /// a target is present.
    pub(super) fn emit_block_goto(&mut self, fd: &Funcdata, arch: &Architecture, blk: BlockId) {
        self.emit_block_goto_from(fd, arch, blk, 0);
    }

    /// `emit_block_goto`, printing the body list from its `skip`th block when
    /// `skip > 0` (the rest of a switch arm whose leading switches merged).
    pub(super) fn emit_block_goto_from(
        &mut self,
        fd: &Funcdata,
        arch: &Architecture,
        blk: BlockId,
        skip: usize,
    ) {
        self.context.push_mod();
        self.context.set_mod(modifiers::NO_BRANCH);
        let inner = fd.sblocks_ref().block(blk).get_block(0);
        if skip > 0 {
            let list = fd.sblocks_ref().block(inner).get_list().to_vec();
            self.emit_block_list(fd, arch, inner, &list[skip..]);
        } else {
            self.emit_part(fd, arch, blk, 0);
        }
        self.context.pop_mod();
        let tree_jump = self.tree_goto_type(blk);
        let silent = match tree_jump {
            Some(None) => fd.sblocks_ref().block(blk).get_goto_target().is_some(),
            Some(Some(_)) => false,
            None => self.goto_rewrites.silent.contains(&blk),
        };
        if silent {
            self.flush_eol_warnings();
            return;
        }
        if let Some(target) = fd.sblocks_ref().block(blk).get_goto_target() {
            self.emit.tag_line();
            let gototype = match tree_jump {
                Some(Some(gototype)) => gototype,
                _ => self
                    .goto_rewrites
                    .gototype(blk, fd.sblocks_ref().block(blk).get_goto_type()),
            };
            self.emit_goto_statement(fd, inner, target, gototype);
            // (unlace warnstyle, DIV-39) pending block warnings land after the
            // trailing goto/break/continue.
            self.flush_eol_warnings();
        }
    }

    /// C++ `PrintC::emitForLoop` (printc.cc:3106): emit a `for (init; cond; iter)`
    /// header (with the init/iterate statements hoisted out of the body) followed
    /// by the loop body.  Reached from [`emit_block_while_do`] when the whiledo
    /// node carries an `iterateOp` (set by `Funcdata::finalize_forloop_*`).
    pub(super) fn emit_for_loop(&mut self, fd: &Funcdata, arch: &Architecture, blk: BlockId) {
        self.context.push_mod();
        self.context
            .unset_mod(modifiers::NO_BRANCH | modifiers::ONLY_BRANCH);
        // emitAnyLabelStatement(bl): hoist the loop-head label to its own line
        // above the `for` (it was marked f_label_bumpup, so the inline
        // emit_block_copy suppresses it).
        self.emit_any_label_statement(fd, blk);
        let cond_block = fd.sblocks_ref().block(blk).get_block(0);
        self.emit_comment_block_tree(fd, cond_block);
        self.emit.tag_line();
        self.emit.tag_op(
            self.lang().kw_for,
            SyntaxHighlight::KeywordColor,
            &MarkupRef::none(),
        );
        self.emit.spaces(1, 0);
        let id1 = self.emit.open_paren(crate::printlanguage::OPEN_PAREN, 0);
        self.context.push_mod();
        self.context.set_mod(modifiers::COMMA_SEPARATE);
        // Emit the (optional) initializer statement.
        if let Some(op) = fd.sblocks_ref().block(blk).get_initialize_op() {
            let id3 = self.emit.begin_statement(&MarkupRef::none());
            self.emit_expression_ir(fd, arch, op);
            self.emit.end_statement(id3);
        }
        self.emit
            .print(self.lang().kw_semicolon, SyntaxHighlight::NoColor);
        self.emit.spaces(1, 0);
        // Emit the conditional statement (the condition block, comma-separated).
        self.emit_block(fd, arch, cond_block);
        self.emit
            .print(self.lang().kw_semicolon, SyntaxHighlight::NoColor);
        self.emit.spaces(1, 0);
        // Emit the iterator statement.
        if let Some(op) = fd.sblocks_ref().block(blk).get_iterate_op() {
            let id4 = self.emit.begin_statement(&MarkupRef::none());
            self.emit_expression_ir(fd, arch, op);
            self.emit.end_statement(id4);
        }
        self.context.pop_mod();
        self.emit
            .close_paren(crate::printlanguage::CLOSE_PAREN, id1);
        let indent = self.emit.open_brace_indent(
            self.lang().kw_open_curly,
            self.output_brace(self.options.brace_loop),
        );
        // (unlace warnstyle, DIV-39) condition-attached warnings land after the
        // `for (...) {` header brace.
        self.flush_eol_warnings();
        self.context.set_mod(modifiers::NO_BRANCH); // Don't print goto at bottom of clause
        let id2 = self.emit.begin_block(0);
        self.emit_part(fd, arch, blk, 1);
        self.emit.end_block(id2);
        self.emit
            .close_brace_indent(self.lang().kw_close_curly, indent);
        self.context.pop_mod();
    }

    /// C++ `PrintC::emitBlockWhileDo` (printc.cc:3150): the top-tested loop.
    /// Block 0 is the condition, block 1 the body.  When the loop carries an
    /// `iterateOp` (recorded by the for-loop reroll), it is emitted as a `for`
    /// loop ([`emit_for_loop`]); otherwise the plain `while` form is emitted.
    pub(super) fn emit_block_while_do(&mut self, fd: &Funcdata, arch: &Architecture, blk: BlockId) {
        match self.lang().forms.while_loop {
            crate::lang::WhileForm::CParenWhile => self.emit_block_while_do_c(fd, arch, blk),
            crate::lang::WhileForm::GoForCondition => self.emit_block_while_go(fd, arch, blk),
            crate::lang::WhileForm::RustBareWhile => self.emit_block_while_do_rust(fd, arch, blk),
        }
    }

    pub(super) fn emit_block_while_do_c(
        &mut self,
        fd: &Funcdata,
        arch: &Architecture,
        blk: BlockId,
    ) {
        if fd.sblocks_ref().block(blk).get_iterate_op().is_some() {
            self.emit_for_loop(fd, arch, blk);
            return;
        }
        // whiledo block NEVER prints the final branch.
        self.context.push_mod();
        self.context
            .unset_mod(modifiers::NO_BRANCH | modifiers::ONLY_BRANCH);
        // emitAnyLabelStatement(bl) (printc.cc:3146): hoist the loop-head label
        // above the `while` (suppressed inline via f_label_bumpup).
        self.emit_any_label_statement(fd, blk);
        let cond_block = fd.sblocks_ref().block(blk).get_block(0);
        let indent;
        if fd.sblocks_ref().block(blk).has_overflow_syntax() {
            // Renders: while( true ) { conditionbody...; break-on-branch }
            self.emit.tag_line();
            self.emit.tag_op(
                self.lang().kw_while,
                SyntaxHighlight::KeywordColor,
                &MarkupRef::none(),
            );
            let id1 = self.emit.open_paren(crate::printlanguage::OPEN_PAREN, 0);
            self.emit.spaces(1, 0);
            self.emit
                .print(self.lang().kw_true, SyntaxHighlight::ConstColor);
            self.emit.spaces(1, 0);
            self.emit
                .close_paren(crate::printlanguage::CLOSE_PAREN, id1);
            indent = self.emit.open_brace_indent(
                self.lang().kw_open_curly,
                self.output_brace(self.options.brace_loop),
            );
            self.context.push_mod();
            self.context.set_mod(modifiers::NO_BRANCH);
            self.emit_block(fd, arch, cond_block);
            self.context.pop_mod();
            self.emit.tag_line();
            self.emit.tag_op(
                self.lang().kw_if,
                SyntaxHighlight::KeywordColor,
                &MarkupRef::none(),
            );
            self.emit.spaces(1, 0);
            self.context.push_mod();
            self.context.set_mod(modifiers::ONLY_BRANCH);
            self.emit_block(fd, arch, cond_block);
            self.context.pop_mod();
            self.emit.spaces(1, 0);
            self.emit_goto_statement(
                fd,
                cond_block,
                cond_block,
                crate::block::block_flags::f_break_goto,
            );
        } else {
            // Renders: while(condition) { ... }
            self.emit_comment_block_tree(fd, cond_block);
            self.emit.tag_line();
            self.emit.tag_op(
                self.lang().kw_while,
                SyntaxHighlight::KeywordColor,
                &MarkupRef::none(),
            );
            self.emit.spaces(1, 0);
            let id1 = self.emit.open_paren(crate::printlanguage::OPEN_PAREN, 0);
            self.context.push_mod();
            self.context.set_mod(modifiers::COMMA_SEPARATE);
            self.emit_block(fd, arch, cond_block);
            self.context.pop_mod();
            self.emit
                .close_paren(crate::printlanguage::CLOSE_PAREN, id1);
            indent = self.emit.open_brace_indent(
                self.lang().kw_open_curly,
                self.output_brace(self.options.brace_loop),
            );
            // (unlace warnstyle, DIV-39) condition-attached warnings land after
            // the `while (cond) {` header brace.
            self.flush_eol_warnings();
        }
        self.context.set_mod(modifiers::NO_BRANCH); // don't print goto at bottom of clause
        let id2 = self.emit.begin_block(0);
        self.emit_part(fd, arch, blk, 1);
        self.emit.end_block(id2);
        self.emit
            .close_brace_indent(self.lang().kw_close_curly, indent);
        self.context.pop_mod();
    }

    /// C++ `PrintC::emitBlockDoWhile` (printc.cc:3217): the bottom-tested loop.
    /// `do { block0-body } while (block0-branch);`.
    pub(super) fn emit_block_do_while(&mut self, fd: &Funcdata, arch: &Architecture, blk: BlockId) {
        match self.lang().forms.do_while {
            crate::lang::DoWhileForm::CDoWhile => self.emit_block_do_while_c(fd, arch, blk),
            crate::lang::DoWhileForm::GoBottomTest => self.emit_block_do_while_go(fd, arch, blk),
            crate::lang::DoWhileForm::RustLoopBreakIf => {
                self.emit_block_do_while_rust(fd, arch, blk)
            }
        }
    }

    pub(super) fn emit_block_do_while_c(
        &mut self,
        fd: &Funcdata,
        arch: &Architecture,
        blk: BlockId,
    ) {
        if fd.sblocks_ref().block(blk).get_flags() & crate::block::block_flags::f_unlace_top_test
            != 0
        {
            self.emit_block_top_tested_c(fd, arch, blk);
            return;
        }
        // dowhile block NEVER prints the final branch.
        self.context.push_mod();
        self.context
            .unset_mod(modifiers::NO_BRANCH | modifiers::ONLY_BRANCH);
        // emitAnyLabelStatement(bl) (printc.cc:3208): hoist the loop-head label
        // above the `do` (suppressed inline via f_label_bumpup).
        self.emit_any_label_statement(fd, blk);
        self.emit.tag_line();
        self.emit
            .print(self.lang().kw_do, SyntaxHighlight::KeywordColor);
        let id = self.emit.open_brace_indent(
            self.lang().kw_open_curly,
            self.output_brace(self.options.brace_loop),
        );
        let body = fd.sblocks_ref().block(blk).get_block(0);
        self.context.push_mod();
        let id2 = self.emit.begin_block(0);
        self.context.set_mod(modifiers::NO_BRANCH);
        self.emit_part(fd, arch, blk, 0);
        self.emit.end_block(id2);
        self.context.pop_mod();
        self.emit.close_brace_indent(self.lang().kw_close_curly, id);
        self.emit.spaces(1, 0);
        self.emit.tag_op(
            self.lang().kw_while,
            SyntaxHighlight::KeywordColor,
            &MarkupRef::none(),
        );
        self.emit.spaces(1, 0);
        self.context.set_mod(modifiers::ONLY_BRANCH);
        self.emit_block(fd, arch, body);
        self.emit
            .print(self.lang().kw_semicolon, SyntaxHighlight::NoColor);
        // (unlace warnstyle, DIV-39) body/condition warnings still pending land
        // at the end of the `} while (cond);` line.
        self.flush_eol_warnings();
        self.context.pop_mod();
    }

    /// (unlace `guardedloop`) A do-while whose test runs first on entry anyway:
    /// `while (block0-branch) { block0-body }`.
    pub(super) fn emit_block_top_tested_c(
        &mut self,
        fd: &Funcdata,
        arch: &Architecture,
        blk: BlockId,
    ) {
        self.context.push_mod();
        self.context
            .unset_mod(modifiers::NO_BRANCH | modifiers::ONLY_BRANCH);
        self.emit_any_label_statement(fd, blk);
        self.emit.tag_line();
        self.emit.tag_op(
            self.lang().kw_while,
            SyntaxHighlight::KeywordColor,
            &MarkupRef::none(),
        );
        self.emit.spaces(1, 0);
        let body = fd.sblocks_ref().block(blk).get_block(0);
        self.context.push_mod();
        self.context.set_mod(modifiers::ONLY_BRANCH);
        self.emit_block(fd, arch, body);
        self.context.pop_mod();
        let id = self.emit.open_brace_indent(
            self.lang().kw_open_curly,
            self.output_brace(self.options.brace_loop),
        );
        self.flush_eol_warnings();
        self.context.set_mod(modifiers::NO_BRANCH);
        let id2 = self.emit.begin_block(0);
        self.emit_part(fd, arch, blk, 0);
        self.emit.end_block(id2);
        self.emit.close_brace_indent(self.lang().kw_close_curly, id);
        self.context.pop_mod();
    }

    /// C++ `PrintC::emitBlockInfLoop` (printc.cc:3246): the infinite loop.
    /// Render the unconditional body using the configured C loop spelling.
    pub(super) fn emit_block_inf_loop(&mut self, fd: &Funcdata, arch: &Architecture, blk: BlockId) {
        match self.lang().forms.inf_loop {
            crate::lang::InfLoopForm::CDoWhileTrue => self.emit_block_inf_loop_c(fd, arch, blk),
            crate::lang::InfLoopForm::RustLoop => self.emit_block_inf_loop_rust(fd, arch, blk),
            crate::lang::InfLoopForm::GoFor => self.emit_block_inf_loop_go(fd, arch, blk),
        }
    }

    pub(super) fn emit_block_inf_loop_c(
        &mut self,
        fd: &Funcdata,
        arch: &Architecture,
        blk: BlockId,
    ) {
        self.context.push_mod();
        self.context
            .unset_mod(modifiers::NO_BRANCH | modifiers::ONLY_BRANCH);
        // Hoist the loop-head label above the loop header.
        self.emit_any_label_statement(fd, blk);
        self.emit.tag_line();
        if self.options.inf_loop_top {
            self.emit_inf_loop_condition();
        } else {
            self.emit
                .print(self.lang().kw_do, SyntaxHighlight::KeywordColor);
        }
        let id = self.emit.open_brace_indent(
            self.lang().kw_open_curly,
            self.output_brace(self.options.brace_loop),
        );
        let id1 = self.emit.begin_block(0);
        self.emit_part(fd, arch, blk, 0);
        self.emit.end_block(id1);
        self.emit.close_brace_indent(self.lang().kw_close_curly, id);
        if !self.options.inf_loop_top {
            self.emit.spaces(1, 0);
            self.emit_inf_loop_condition();
            self.emit
                .print(self.lang().kw_semicolon, SyntaxHighlight::NoColor);
        }
        self.flush_eol_warnings();
        self.context.pop_mod();
    }

    pub(super) fn emit_inf_loop_condition(&mut self) {
        self.emit.tag_op(
            self.lang().kw_while,
            SyntaxHighlight::KeywordColor,
            &MarkupRef::none(),
        );
        let id = self.emit.open_paren(crate::printlanguage::OPEN_PAREN, 0);
        self.emit.spaces(1, 0);
        self.emit
            .print(self.lang().kw_true, SyntaxHighlight::ConstColor);
        self.emit.spaces(1, 0);
        self.emit.close_paren(crate::printlanguage::CLOSE_PAREN, id);
    }

    /// C++ `PrintC::emitGotoStatement` (printc.cc:2379): a `goto`/`break`/
    /// `continue` statement for an unstructured branch.  The destination label is
    /// the target block's reverse-post index (`LAB_<index>` — full address-based
    /// label naming is the label/naming layer).
    #[doc(hidden)]
    pub fn emit_goto_statement(
        &mut self,
        fd: &Funcdata,
        _src: BlockId,
        target: BlockId,
        gototype: uint4,
    ) {
        use crate::block::block_flags;
        let id = self.emit.begin_statement(&MarkupRef::none());
        match gototype {
            x if x == block_flags::f_break_goto => {
                self.emit
                    .print(self.lang().kw_break, SyntaxHighlight::KeywordColor);
            }
            x if x == block_flags::f_continue_goto => {
                self.emit
                    .print(self.lang().kw_continue, SyntaxHighlight::KeywordColor);
            }
            _ => match self.lang().forms.goto {
                crate::lang::GotoForm::CGoto => {
                    self.emit
                        .print(self.lang().kw_goto, SyntaxHighlight::KeywordColor);
                    self.emit.spaces(1, 0);
                    self.emit
                        .print(&self.block_label_name(fd, target), SyntaxHighlight::NoColor);
                }
                crate::lang::GotoForm::Unrepresentable => {
                    self.emit_unrepresentable_goto(fd, target);
                }
            },
        }
        self.emit
            .print(self.lang().kw_semicolon, SyntaxHighlight::NoColor);
        self.emit.end_statement(id);
    }

    /// The op-list walk shared by `emitBlockCopy`/`emitBlockBasic` (C++
    /// `PrintC::emitBlockBasic`, printc.cc:2827).  `bblocks` selects which arena
    /// holds the basic block (a `BlockCopy` points into `bblocks`).
    pub(super) fn emit_basic_block_ops(
        &mut self,
        fd: &Funcdata,
        arch: &Architecture,
        bb: BlockId,
        bblocks: bool,
    ) {
        self.emit_basic_block_ops_in(fd, arch, bb, bblocks, None);
    }
}
