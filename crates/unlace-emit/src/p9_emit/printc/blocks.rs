//! List, if/else and condition block emission.

use super::*;

impl PrintC {
    /// C++ `PrintC::emitBlockLs` (printc.cc:2930): emit a list of blocks in
    /// sequence.  The first block keeps its branch suppressed (`no_branch`); the
    /// last block keeps the caller's branch state.  The per-edge `nextInFlow`
    /// goto-insertion (the `nofallthru` arm) is the goto-labeling layer; the
    /// structured list emitted here flows in declaration order.
    pub(super) fn emit_block_ls(&mut self, fd: &Funcdata, arch: &Architecture, blk: BlockId) {
        let list: Vec<BlockId> = fd.sblocks_ref().block(blk).get_list().to_vec();
        self.emit_block_list(fd, arch, blk, &list);
    }

    /// The blocks of `list`, the children of `blk` (all of them, or the rest
    /// of a switch arm), printed in sequence: through the statements the C syntax
    /// tree built from them when it holds one for each block.
    pub(super) fn emit_block_list(
        &mut self,
        fd: &Funcdata,
        arch: &Architecture,
        blk: BlockId,
        list: &[BlockId],
    ) {
        let items: Option<Vec<crate::ctree::StmtId>> = self
            .ctree
            .as_ref()
            .and_then(|tree| list.iter().map(|&b| tree.node_for(b)).collect());
        self.emit_list_items(fd, arch, blk, list, items.as_deref());
    }

    /// One element of a list printed by [`emit_list_items`](Self::emit_list_items): the tree
    /// statement `items[k]` when given, else the block `list[k]`.
    pub(super) fn emit_list_item(
        &mut self,
        fd: &Funcdata,
        arch: &Architecture,
        list: &[BlockId],
        items: Option<&[crate::ctree::StmtId]>,
        k: usize,
    ) {
        match items.and_then(|items| items.get(k)) {
            Some(&id) => self.emit_ctree_arm(fd, arch, id),
            None => self.emit_block(fd, arch, list[k]),
        }
    }

    /// C++ `PrintC::emitBlockLs` (printc.cc:2925) over the blocks `list` of `blk`, each
    /// printed from the tree statement `items` holds for it (one per block) when given.
    pub(super) fn emit_list_items(
        &mut self,
        fd: &Funcdata,
        arch: &Architecture,
        blk: BlockId,
        list: &[BlockId],
        items: Option<&[crate::ctree::StmtId]>,
    ) {
        let items = items.filter(|items| items.len() == list.len());
        if self.context.is_set(modifiers::ONLY_BRANCH) {
            if !list.is_empty() {
                self.emit_list_item(fd, arch, list, items, list.len() - 1);
            }
            return;
        }
        if list.is_empty() {
            return;
        }
        let n = list.len();
        // (unlace `itaniumeh`) An exceptional-edge `if` whose normal path never
        // falls through and whose landing pad starts the rest of the list:
        // `try { call; <normal path> } catch (..) { <pad> }` (`list_try_form`).
        if let Some(found) = self.list_try_form(fd, blk, list) {
            let crate::ctree::ListTry {
                at: k,
                pad,
                keep_open: spine,
            } = found;
            self.context.push_mod();
            self.context.set_mod(modifiers::NO_BRANCH);
            for j in 0..k {
                let id = self.emit.begin_block(0);
                self.emit_list_item(fd, arch, list, items, j);
                self.emit.end_block(id);
            }
            self.context.pop_mod();
            let cond = fd.sblocks_ref().block(list[k]).get_block(0);
            let normal = fd.sblocks_ref().block(list[k]).get_block(1);
            self.emit_eh_try(fd, arch, cond, Some(normal), pad, &list[k + 1..], spine);
            return;
        }
        if self.list_java_try(fd, blk, list) {
            self.emit_block_ls_java_try(fd, arch, list);
            return;
        }
        let id1 = self.emit.begin_block(0);
        // C++ `PrintC::emitBlockLs` (printc.cc:2929-2933): a single-element list
        // emits its one block **once**, in the caller's branch state (before the
        // `no_branch` push), and returns.  Without this early-return the block is
        // emitted a second time below as the "Final block" (`list[0] == list[n-1]`),
        // duplicating it — e.g. the single-block `abort(); return;` tail that
        // `taildup`/`gotoreduce` wrap in a 1-element `BlockList`, which otherwise
        // renders `abort(); abort();`.  The datatest corpus never produces a
        // size-1 `Ls`, so this only surfaced under the unlace structuring passes.
        if n == 1 {
            self.emit_list_item(fd, arch, list, items, 0);
            self.emit.end_block(id1);
            return;
        }
        // First block: no_branch (unless flat).
        self.context.push_mod();
        if !self.is_flat() {
            self.context.set_mod(modifiers::NO_BRANCH);
        }
        self.emit_list_item(fd, arch, list, items, 0);
        self.emit.end_block(id1);
        // Middle blocks: no_branch.
        for j in 1..n.saturating_sub(1) {
            let id2 = self.emit.begin_block(0);
            self.emit_list_item(fd, arch, list, items, j);
            self.emit.end_block(id2);
        }
        self.context.pop_mod();
        // Final block: caller's branch state.
        let id3 = self.emit.begin_block(0);
        self.emit_list_item(fd, arch, list, items, n - 1);
        self.emit.end_block(id3);
    }

    /// C++ `PrintC::emitBlockIf` (printc.cc:3027): the `if (cond) { ... }` form
    /// (with optional `else`).  Block 0 is the condition, block 1 the true body,
    /// block 2 (optional) the else body.
    pub(super) fn emit_block_if(&mut self, fd: &Funcdata, arch: &Architecture, blk: BlockId) {
        use crate::prettyprint::Emit;
        // (unlace `javatry`) A DEX try dispatch prints as `try { } catch`.
        if self.is_java_try(fd, blk)
            && let Some(shape) = self.java_try_shape(fd, blk, &[])
        {
            self.emit_java_try(fd, arch, shape, &[]);
            return;
        }
        // (unlace) iteregion: a two-arm assignment diamond the S8 `iteregion` pass
        // marked (its condition `CBRANCH` carries the `unlace_iteregion` addl-flag)
        // renders as a single `dest = ( cond ) ? A : B;` ternary instead of the
        // if/else.  The mark is set only with `option iteregion on`, so when off
        // this is never taken and the if/else render is byte-identical.
        // (unlace) iteboolean: a `0`/`1` select diamond whose condition is a folded
        // short-circuit chain renders as the single boolean assignment
        // `dest = ( cond );`.  Checked BEFORE the ternary so the more specific
        // form wins when both match; the mark is set only with
        // `option iteboolean on`.
        // (unlace `itaniumeh`) Inside a `try` whose pad this edge also reaches,
        // the edge is the try's own: print the call and the normal path only.
        let open_pad = self.open_try_pad(fd, blk);
        if open_pad.is_some() && self.is_eh_if(fd, blk) && self.eh_if_target(fd, blk) == open_pad {
            let size = fd.sblocks_ref().block(blk).get_size();
            let cond = fd.sblocks_ref().block(blk).get_block(0);
            self.context.push_mod();
            self.context.set_mod(modifiers::NO_BRANCH);
            let b = self.emit.begin_block(0);
            self.emit_block(fd, arch, cond);
            self.emit.end_block(b);
            self.context.pop_mod();
            for k in 1..size {
                let sub = fd.sblocks_ref().block(blk).get_block(k);
                if self.eh_pad_start(fd, sub) != open_pad {
                    let b = self.emit.begin_block(0);
                    self.emit_block(fd, arch, sub);
                    self.emit.end_block(b);
                }
            }
            return;
        }
        // (unlace `itaniumeh`) `if (eh_unwinding()) { pad } [else { normal }]`: the `Try`
        // statement the tree made of it (`ctree_rewrite`).
        if let Some((cond, normal, pad, handler)) = self.try_form(fd, blk) {
            self.emit_eh_try(fd, arch, cond, normal, pad, &[handler], false);
            return;
        }
        match self.ite_form(fd, arch, blk) {
            Some(ctreeprint::IteForm::Bool(m)) => {
                self.emit_block_if_bool(fd, arch, m);
                return;
            }
            Some(ctreeprint::IteForm::Ternary(m)) => {
                self.emit_block_if_ite(fd, arch, m);
                return;
            }
            None => {}
        }
        if let Some((cond_block, ret_op, value)) = self.return_form(blk) {
            self.emit_block_if_return(fd, arch, cond_block, ret_op, value);
            return;
        }
        let size = fd.sblocks_ref().block(blk).get_size();
        let has_else = size == 3 && self.hoisted_after(blk).is_none();
        let cond_block = fd.sblocks_ref().block(blk).get_block(0);

        // When *this* BlockIf is the else-clause of a parent if, the parent set
        // the pending_brace mod; register a brace that opens lazily so a real
        // `else if` collapses.
        let mut registered_pending = false;
        let mut my_pending_gen = 0u64;
        if self.context.is_set(modifiers::PENDING_BRACE) {
            self.emit
                .set_pending_brace(self.output_brace(self.options.brace_ifelse));
            // Remember *our* registration's generation so the close decision below
            // asks whether OUR brace fired, not whether the shared slot holds any
            // fired id (which could be a nested/sibling BlockIf's brace).
            my_pending_gen = self.emit.pending_reg_gen();
            registered_pending = true;
        }

        // if-block never prints final branch: clear no_branch/only_branch/pending_brace.
        self.context.push_mod();
        self.context
            .unset_mod(modifiers::NO_BRANCH | modifiers::ONLY_BRANCH | modifiers::PENDING_BRACE);

        // Emit the condition block's statements (no_branch) ...
        self.context.push_mod();
        self.context.set_mod(modifiers::NO_BRANCH);
        self.emit_block(fd, arch, cond_block);
        self.context.pop_mod();
        // emitCommentBlockTree(condBlock): emit any comments under the condition
        // subtree before deciding `else if` vs `else {` — a comment forces the
        // pending brace to fire (suppressing the `else if` collapse).
        self.emit_comment_block_tree(fd, cond_block);

        // If a pending brace was issued but did not emit (no statements forced a
        // tag_line), cancel it to get `else if`; otherwise start `if` on a new
        // line.  When it *did* fire, snapshot the indent
        // id it opened into a local — the shared emitter slot can be overwritten
        // by a deeper BlockIf's own pending brace before we read it back.
        //
        // C++ asks `emit->hasPendingPrint(&pendingBrace)` — a *pointer-identity*
        // test against this frame's own `PendingBrace`, not "is any brace
        // pending".  Only the frame that registered the brace may collapse it into
        // `else if`; a nested `BlockIf` reached while emitting this if's condition
        // block (a condition list can lead with a whole `if` statement) must let
        // the ancestor's brace fire instead, or the ancestor's own `if` header
        // lands outside the `else` and its body escapes the arm.
        let mut my_pending_indent = -1;
        let my_brace_pending = registered_pending
            && self.emit.has_pending_brace()
            && self.emit.pending_reg_gen() == my_pending_gen;
        let mut my_brace_canceled = false;
        if my_brace_pending {
            self.emit.cancel_pending_brace();
            self.emit.spaces(1, 0);
            my_brace_canceled = true;
        } else {
            if registered_pending {
                // C++ `pendingBrace.getIndentId()`: close a lazy `else { … }`
                // brace only if OUR OWN registration fired.  Reading the shared
                // `pending_brace_indent_id()` here would pick up a stale id left by
                // a nested BlockIf's fire and emit an unmatched `}` (dumping code to
                // file scope) whenever our brace was shadowed but never opened.
                my_pending_indent = self.emit.pending_fired_indent(my_pending_gen);
            }
            self.emit.tag_line();
        }
        // Guard rail for the whole pending-brace family (debug builds only): a
        // frame that registers a lazy `else` brace must resolve its OWN
        // registration — either it fired (a real `else { … }`) or the frame
        // canceled it (the `else if` collapse).  Neither holding means some other
        // frame consumed the brace and this if's header is about to print outside
        // the `else` it belongs to.
        debug_assert!(
            !registered_pending || my_brace_canceled || my_pending_indent >= 0,
            "emit_block_if: pending else-brace consumed by another frame"
        );

        // ... then `if ` + the branch condition (only_branch).
        self.emit.tag_op(
            self.lang().kw_if,
            SyntaxHighlight::KeywordColor,
            &MarkupRef::none(),
        );
        self.emit.spaces(1, 0);
        self.context.push_mod();
        self.context.set_mod(modifiers::ONLY_BRANCH);
        if let Some(chain) = self.and_condition(blk) {
            self.emit_cond_expr(fd, arch, chain);
        } else if !self.emit_rust_option_condition(fd, arch, cond_block) {
            self.emit_block(fd, arch, cond_block);
        }
        self.context.pop_mod();

        // If the if has an unstructured-branch target, emit a goto/break/continue
        // instead of a braced body.
        let goto_target = fd.sblocks_ref().block(blk).get_if_goto_target();
        if let Some(target) = goto_target {
            let gototype = match self.tree_goto_type(blk) {
                Some(Some(gototype)) => gototype,
                _ => self
                    .goto_rewrites
                    .gototype(blk, fd.sblocks_ref().block(blk).get_if_goto_type()),
            };
            // (unlace outlang) C's one-line `if (cond) goto L;` needs no braces; a
            // language that requires block braces gets `if cond { goto-form }`.
            if self.lang().caps.brace_elision {
                self.emit.spaces(1, 0);
                self.emit_goto_statement(fd, cond_block, target, gototype);
                // (unlace warnstyle, DIV-39) condition-attached warnings land at the
                // end of the one-line `if (cond) goto L;` form.
                self.flush_eol_warnings();
            } else {
                let id = self.emit.open_brace_indent(
                    self.lang().kw_open_curly,
                    self.output_brace(self.options.brace_ifelse),
                );
                self.flush_eol_warnings();
                self.emit.tag_line();
                self.emit_goto_statement(fd, cond_block, target, gototype);
                self.emit.close_brace_indent(self.lang().kw_close_curly, id);
            }
        } else if self.if_body_elides(fd, self.if_then_block(fd, blk)) {
            // (unlace braceelide, DIV-38) A single-statement then-body drops its
            // braces: the statement prints on the next line at one extra indent
            // (its own tag_line in emit_basic_block_ops breaks the line).  The
            // predicate is Copy-leaf-only, so the body can never itself be an
            // `if` and the dangling-else hazard cannot arise; the else arm (if
            // any) opens with its own tag_line below, unchanged.
            self.context.set_mod(modifiers::NO_BRANCH);
            // (unlace warnstyle, DIV-39) condition-attached warnings land at the
            // end of the braceless `if (cond)` header line.
            self.flush_eol_warnings();
            let id = self.emit.start_indent();
            let id1 = self.emit.begin_block(0);
            self.emit_part(fd, arch, blk, 1);
            self.emit.end_block(id1);
            self.emit.stop_indent(id);
            if has_else {
                if self.out_lang == crate::lang::OutLang::Go {
                    self.emit.print(" ", SyntaxHighlight::NoColor);
                } else {
                    self.emit.tag_line();
                }
                self.emit
                    .print(self.lang().kw_else, SyntaxHighlight::KeywordColor);
                let else_block = fd.sblocks_ref().block(blk).get_block(2);
                let else_is_if =
                    fd.sblocks_ref().block(else_block).get_type() == crate::block::BlockType::If;
                if else_is_if {
                    self.context.set_mod(modifiers::PENDING_BRACE);
                    let id2 = self.emit.begin_block(0);
                    self.emit_part(fd, arch, blk, 2);
                    self.emit.end_block(id2);
                } else {
                    let id2 = self.emit.open_brace_indent(
                        self.lang().kw_open_curly,
                        self.output_brace(self.options.brace_ifelse),
                    );
                    let id3 = self.emit.begin_block(0);
                    self.emit_part(fd, arch, blk, 2);
                    self.emit.end_block(id3);
                    self.emit
                        .close_brace_indent(self.lang().kw_close_curly, id2);
                }
            }
        } else {
            // The true body in braces.
            self.context.set_mod(modifiers::NO_BRANCH);
            let id = self.emit.open_brace_indent(
                self.lang().kw_open_curly,
                self.output_brace(self.options.brace_ifelse),
            );
            // (unlace warnstyle, DIV-39) condition-attached warnings land after
            // the `if (cond) {` header brace.
            self.flush_eol_warnings();
            let id1 = self.emit.begin_block(0);
            self.emit_part(fd, arch, blk, 1);
            self.emit.end_block(id1);
            self.emit.close_brace_indent(self.lang().kw_close_curly, id);

            // Optional else.
            if has_else {
                if self.out_lang == crate::lang::OutLang::Go {
                    self.emit.print(" ", SyntaxHighlight::NoColor);
                } else {
                    self.emit.tag_line();
                }
                self.emit
                    .print(self.lang().kw_else, SyntaxHighlight::KeywordColor);
                let else_block = fd.sblocks_ref().block(blk).get_block(2);
                let else_is_if =
                    fd.sblocks_ref().block(else_block).get_type() == crate::block::BlockType::If;
                if else_is_if {
                    // Attempt to merge the "else" and "if" syntax: set pending_brace
                    // so the child BlockIf registers a lazy brace.
                    self.context.set_mod(modifiers::PENDING_BRACE);
                    let id2 = self.emit.begin_block(0);
                    self.emit_part(fd, arch, blk, 2);
                    self.emit.end_block(id2);
                } else {
                    let id2 = self.emit.open_brace_indent(
                        self.lang().kw_open_curly,
                        self.output_brace(self.options.brace_ifelse),
                    );
                    let id3 = self.emit.begin_block(0);
                    self.emit_part(fd, arch, blk, 2);
                    self.emit.end_block(id3);
                    self.emit
                        .close_brace_indent(self.lang().kw_close_curly, id2);
                }
            }
        }
        self.context.pop_mod();

        // When our own pending brace actually fired (the else-clause had
        // statements before its `if`, so it rendered `else { ... if`), close
        // that brace.
        if my_pending_indent >= 0 {
            self.emit
                .close_brace_indent(self.lang().kw_close_curly, my_pending_indent);
        }
        // (unlace `noretfirst`) The arm the tree moved out of the `if`, printed after it.
        if let Some(after) = self.hoisted_after(blk) {
            self.context.push_mod();
            self.context.set_mod(modifiers::NO_BRANCH);
            let id = self.emit.begin_block(0);
            self.emit_ctree_arm(fd, arch, after);
            self.emit.end_block(id);
            self.context.pop_mod();
        }
    }

    /// (unlace braceelide, DIV-38) Does this if-body render braceless?  True when
    /// `option braceelide` is on and the body is a plain single-statement
    /// `BlockCopy` leaf: no label line (an unstructured-goto target keeps its
    /// braces), exactly ONE op that `emit_basic_block_ops` would print under
    /// NO_BRANCH (not-printed ops, branches, and implied-output ops are
    /// skipped, exactly mirroring its filter), and no comment positioned in the
    /// block (a comment renders as its own line).  Copy-leaf-only also rules
    /// out a nested `if` body, so eliding can never capture a dangling else.
    #[doc(hidden)]
    pub fn if_body_elides(&mut self, fd: &Funcdata, body: BlockId) -> bool {
        use crate::block::BlockType;
        // (unlace outlang) braceelide (DIV-38) drops the braces from a
        // single-statement body; a language that requires block braces must
        // never take that path, whatever the option says.
        if !self.options.brace_elide || !self.lang().caps.brace_elision {
            return false;
        }
        if fd.sblocks_ref().block(body).get_type() != BlockType::Copy {
            return false;
        }
        // Would emit_any_label_statement print a `label_xxx:` line?
        if !fd.sblocks_ref().block(body).is_label_bump_up() {
            if let Some(front) = fd.sblocks_ref().get_front_leaf(body) {
                if fd.sblocks_ref().block(front).is_unstructured_target()
                    && !self.goto_rewrites.labels.contains(&front)
                {
                    return false;
                }
            }
        }
        let Some(under) = fd.sblocks_ref().block(body).get_copy() else {
            return false;
        };
        let mut printed = 0;
        let mut cur = fd.bb_op_head(under);
        while let Some(inst) = cur {
            cur = fd.bb_op_next(inst);
            let o = match fd.obank().get(inst) {
                Some(o) => o,
                None => continue,
            };
            if self.is_suppressed_statement(fd, inst) {
                continue;
            }
            // The body always prints under NO_BRANCH: every branch op is skipped.
            if o.is_branch() {
                continue;
            }
            if let Some(out) = o.get_out() {
                if fd.vbank().get(out).map(|v| v.is_implied()).unwrap_or(false)
                    && !(self.out_lang == crate::lang::OutLang::C
                        && crate::stackbytes::assignment(fd, inst).is_some())
                {
                    continue;
                }
            }
            printed += 1;
            if printed > 1 {
                return false;
            }
        }
        if printed != 1 {
            return false;
        }
        // A comment positioned in this block forces its own line; keep braces.
        // (unlace warnstyle, DIV-39: a WARNING comment under `warn_inline`
        // renders at end-of-line instead, so it does NOT force braces.)
        // The probe re-positions the sorter window without marking anything
        // emitted; emit_basic_block_ops sets the window again for the real walk.
        let bb_index = fd.bblocks_ref().block(under).get_index();
        self.commsorter.setup_block_list(bb_index);
        // setup_block_list sets start/stop but NOT the has_next() bound
        // (opstop); setup_op_list(None) widens it to the whole block window,
        // exactly as the real statement walk does before its has_next loop.
        self.commsorter.setup_op_list(None);
        while self.commsorter.has_next() {
            let (emitted, tp, elided) = {
                let c = self.commsorter.get_next();
                let tp = c.get_type();
                let elided = self.options.warn_caveats
                    && (tp & crate::comment::comment_type::WARNING) != 0
                    && crate::warnlevel::elided(
                        fd,
                        &String::from_utf8_lossy(c.get_text()),
                        c.get_addr(),
                        false,
                    );
                (c.is_emitted(), tp, elided)
            };
            if emitted || elided {
                continue;
            }
            let inline_ok =
                self.options.warn_inline && (tp & crate::comment::comment_type::WARNING) != 0;
            if !inline_ok {
                return false;
            }
        }
        true
    }

    /// (unlace) Is `blk` a two-arm assignment diamond that the S8 `iteregion` pass
    /// selected for `?:` rendering?  Returns the [`IteAssignMatch`] iff both (a) the
    /// structure still matches the narrow diamond schema and (b) its condition
    /// `CBRANCH` carries the [`unlace_iteregion`](crate::op::pcodeop_addlflags::unlace_iteregion)
    /// mark (set only under `option iteregion on`).  The flag is the gate, so with
    /// the option off this is always `None` and the if/else render is byte-identical.
    pub(super) fn ite_ternary_match(
        &self,
        fd: &Funcdata,
        arch: &Architecture,
        blk: BlockId,
    ) -> Option<crate::iteregion::IteAssignMatch> {
        if self.out_lang == crate::lang::OutLang::Go {
            return None;
        }
        let m = crate::iteregion::match_ite_assignment(fd, blk)?;
        let marked = fd
            .obank()
            .get(m.cbranch)
            .map(|o| (o.get_addlflags() & crate::op::pcodeop_addlflags::unlace_iteregion) != 0)
            .unwrap_or(false);
        if marked
            && !self.needs_storage_assignment(fd, m.true_op)
            && !self.needs_storage_assignment(fd, m.else_op)
            && !self.converts_storage_load(fd, arch, m.true_op)
            && !self.converts_storage_load(fd, arch, m.else_op)
        {
            Some(m)
        } else {
            None
        }
    }

    pub(super) fn needs_storage_assignment(&self, fd: &Funcdata, op: OpId) -> bool {
        self.out_lang == crate::lang::OutLang::C
            && crate::stackviews::enabled(fd)
            && (crate::stackbytes::assignment(fd, op).is_some()
                || crate::stackassign::assignment(fd, op).is_some())
    }

    /// (unlace) Is `op` Dalvik's `throwException(x)`, which java-language output
    /// prints as `throw x`?
    pub(super) fn is_java_throw(&self, fd: &Funcdata, op: OpId) -> bool {
        let Some(o) = fd.obank().get(op) else {
            return false;
        };
        if self.out_lang != crate::lang::OutLang::Java
            || o.code() != OpCode::CPUI_CALLOTHER
            || o.num_input() != 2
        {
            return false;
        }
        let Some(id) = o
            .get_in(0)
            .and_then(|v| fd.vbank().get(v))
            .map(|v| v.get_offset())
        else {
            return false;
        };
        self.java_throw_userop == Some(id)
    }

    /// (unlace `javatry`) Does the list, nested lists included, hold a `try`
    /// dispatch?
    pub(super) fn list_has_java_try(&self, fd: &Funcdata, list: &[BlockId]) -> bool {
        list.iter()
            .any(|&b| match fd.sblocks_ref().block(b).get_type() {
                crate::block::BlockType::Ls => {
                    self.list_has_java_try(fd, fd.sblocks_ref().block(b).get_list())
                }
                _ => self.java_try_shape(fd, b, &[]).is_some(),
            })
    }

    /// (unlace `javatry`) `emit_block_ls` for a list holding a `try` dispatch: the
    /// `try` takes the statements it protects from the elements after it.
    #[doc(hidden)]
    pub fn emit_block_ls_java_try(&mut self, fd: &Funcdata, arch: &Architecture, list: &[BlockId]) {
        // A nested list prints as its elements in place; flattened, a dispatch
        // sees every statement that follows it.
        let mut flat: Vec<BlockId> = Vec::with_capacity(list.len());
        let mut stack: Vec<BlockId> = list.iter().rev().copied().collect();
        while let Some(b) = stack.pop() {
            if fd.sblocks_ref().block(b).get_type() == crate::block::BlockType::Ls {
                stack.extend(fd.sblocks_ref().block(b).get_list().iter().rev());
            } else {
                flat.push(b);
            }
        }
        let list = flat.as_slice();
        self.java_prepare_synchronized(fd, list);
        let n = list.len();
        let mut k = 0;
        while k < n {
            let last = k + 1 == n;
            let id = self.emit.begin_block(0);
            self.context.push_mod();
            if !last && !self.is_flat() {
                self.context.set_mod(modifiers::NO_BRANCH);
            }
            let rest = &list[k + 1..];
            if let Some(shape) = self.java_try_shape(fd, list[k], rest) {
                k += 1 + self.emit_java_try(fd, arch, shape, rest);
            } else {
                self.emit_block(fd, arch, list[k]);
                k += 1;
            }
            self.context.pop_mod();
            self.emit.end_block(id);
        }
    }

    pub(super) fn is_suppressed_statement(&self, fd: &Funcdata, op: OpId) -> bool {
        let Some(operation) = fd.obank().get(op) else {
            return true;
        };
        if self.java_hidden.contains(&op) {
            return true;
        }
        if operation.not_printed()
            && !(self.out_lang == crate::lang::OutLang::C
                && crate::stackbytes::assignment(fd, op).is_some())
        {
            return true;
        }
        if operation.code() == OpCode::CPUI_NEW
            && self.java_new.values().any(|pair| pair.new_op == op)
        {
            return true;
        }
        if self.java_ctor_calls.get(&op) == Some(&crate::javanew::CtorCall::Implicit) {
            return true;
        }
        if operation.code() == OpCode::CPUI_CBRANCH && crate::javatry::is_throws_edge(fd, op) {
            return true;
        }
        if crate::javatry::caught_handler(fd, op)
            .is_some_and(|h| self.java_caught_shown.contains(&h))
        {
            return true;
        }
        if self.out_lang == crate::lang::OutLang::Java
            && operation.code() == OpCode::CPUI_RETURN
            && fd
                .obank()
                .get(op)
                .and_then(|o| o.basic_neighbours().0)
                .is_some_and(|prev| self.is_java_throw(fd, prev))
        {
            return true;
        }
        if self.oslog_hidden.contains(&op) {
            return true;
        }
        crate::stackmarkers::nonprinting(fd, op)
    }

    /// (unlace) Is `blk` a `0`/`1` select diamond that the S8 `iteboolean` pass
    /// selected for boolean-assignment rendering?  Returns the [`IteBoolMatch`] iff
    /// both (a) the structure still matches the schema and (b) the condition's
    /// terminal `CBRANCH` carries the
    /// [`unlace_iteboolean`](crate::op::pcodeop_addlflags::unlace_iteboolean) mark (set
    /// only under `option iteboolean on`).  The flag is the gate, so with the option
    /// off this is always `None` and the if/else render is byte-identical.
    pub(super) fn ite_boolean_match(
        &self,
        fd: &Funcdata,
        blk: BlockId,
    ) -> Option<crate::iteboolean::IteBoolMatch> {
        let m = crate::iteboolean::match_ite_boolean(fd, blk)?;
        let marked = fd
            .obank()
            .get(m.cbranch)
            .map(|o| (o.get_addlflags() & crate::op::pcodeop_addlflags::unlace_iteboolean) != 0)
            .unwrap_or(false);
        if marked && !self.needs_storage_assignment(fd, m.assign_op) {
            Some(m)
        } else {
            None
        }
    }

    /// (unlace) Emit an `iteboolean`-selected `0`/`1` select diamond as the single
    /// statement `dest = ( cond );` — or `dest = !( cond );` when the true arm is the
    /// `0` one.  The condition goes through the *same* `ONLY_BRANCH` renderer that
    /// produced the `if (...)` header (a `CBRANCH` leaf via `op_cbranch`, a folded
    /// `&&`/`||` chain via `emit_block_condition`), so it is always parenthesized and
    /// its evaluation order, short-circuiting and comma-expression side effects are
    /// preserved verbatim.  Mirrors [`emit_block_if_ite`]'s pending-brace handling so
    /// a diamond that is itself an `else` clause renders `else { dest = ...; }`.
    pub(super) fn emit_block_if_bool(
        &mut self,
        fd: &Funcdata,
        arch: &Architecture,
        m: crate::iteboolean::IteBoolMatch,
    ) {
        use crate::prettyprint::Emit;

        let mut registered_pending = false;
        let mut my_pending_gen = 0u64;
        if self.context.is_set(modifiers::PENDING_BRACE) {
            self.emit
                .set_pending_brace(self.output_brace(self.options.brace_ifelse));
            my_pending_gen = self.emit.pending_reg_gen();
            registered_pending = true;
        }
        self.context.push_mod();
        self.context
            .unset_mod(modifiers::NO_BRANCH | modifiers::ONLY_BRANCH | modifiers::PENDING_BRACE);

        // The condition block's leading statements, exactly as emit_block_if does.
        self.context.push_mod();
        self.context.set_mod(modifiers::NO_BRANCH);
        self.emit_block(fd, arch, m.cond_block);
        self.context.pop_mod();
        self.emit_comment_block_tree(fd, m.cond_block);

        self.emit.tag_line();
        let mut my_pending_indent = -1;
        if registered_pending {
            my_pending_indent = self.emit.pending_fired_indent(my_pending_gen);
        }

        // dest = ( cond ) ;   /   dest = !( cond ) ;
        let stmt_markup = self.op_markup(fd, m.assign_op);
        let sid = self.emit.begin_statement(&stmt_markup);
        self.push_vn_explicit_ir(fd, arch, m.dest, m.assign_op);
        self.emit.spaces(1, 0);
        self.emit.tag_op(
            self.op_spelling(&tokens::ASSIGNMENT),
            SyntaxHighlight::NoColor,
            &MarkupRef::none(),
        );
        self.emit.spaces(1, 0);
        if m.negate {
            self.emit.tag_op(
                self.op_spelling(&tokens::BOOLEAN_NOT),
                SyntaxHighlight::NoColor,
                &MarkupRef::none(),
            );
        }
        self.context.push_mod();
        self.context.set_mod(modifiers::ONLY_BRANCH);
        self.emit_block(fd, arch, m.cond_block);
        self.context.pop_mod();
        self.emit.end_statement(sid);
        self.emit
            .print(self.lang().kw_semicolon, SyntaxHighlight::NoColor);
        // (unlace warnstyle, DIV-39) condition-attached warnings land at the end of
        // the assignment line.
        self.flush_eol_warnings();

        if my_pending_indent >= 0 {
            self.emit
                .close_brace_indent(self.lang().kw_close_curly, my_pending_indent);
        }
        self.context.pop_mod();
    }

    /// (unlace `boolreturn`) Emit an `if` whose arms only return `1` and `0` as
    /// `return ( cond );`, or `return !( cond );` when the body returns `0`. The
    /// condition goes through the same `ONLY_BRANCH` render as the `if` header, and the
    /// pending-brace and comment handling mirror [`emit_block_if_bool`].
    pub(super) fn emit_block_if_return(
        &mut self,
        fd: &Funcdata,
        arch: &Architecture,
        cond_block: BlockId,
        ret_op: OpId,
        value: crate::ctree::ExprId,
    ) {
        use crate::prettyprint::Emit;

        let mut registered_pending = false;
        let mut my_pending_gen = 0u64;
        if self.context.is_set(modifiers::PENDING_BRACE) {
            self.emit
                .set_pending_brace(self.output_brace(self.options.brace_ifelse));
            my_pending_gen = self.emit.pending_reg_gen();
            registered_pending = true;
        }
        self.context.push_mod();
        self.context
            .unset_mod(modifiers::NO_BRANCH | modifiers::ONLY_BRANCH | modifiers::PENDING_BRACE);

        self.context.push_mod();
        self.context.set_mod(modifiers::NO_BRANCH);
        self.emit_block(fd, arch, cond_block);
        self.context.pop_mod();
        self.emit_comment_block_tree(fd, cond_block);

        self.emit.tag_line();
        let mut my_pending_indent = -1;
        if registered_pending {
            my_pending_indent = self.emit.pending_fired_indent(my_pending_gen);
        }

        let stmt_markup = self.op_markup(fd, ret_op);
        let sid = self.emit.begin_statement(&stmt_markup);
        self.emit.tag_op(
            self.lang().kw_return,
            SyntaxHighlight::KeywordColor,
            &stmt_markup,
        );
        self.emit.spaces(1, 0);
        self.emit_return_value(fd, arch, value);
        self.emit.end_statement(sid);
        self.emit
            .print(self.lang().kw_semicolon, SyntaxHighlight::NoColor);
        self.flush_eol_warnings();

        if my_pending_indent >= 0 {
            self.emit
                .close_brace_indent(self.lang().kw_close_curly, my_pending_indent);
        }
        self.context.pop_mod();
    }

    /// (unlace) Emit an `iteregion`-selected assignment diamond as a single ternary
    /// statement `dest = ( cond ) ? A : B;` (angr `ITERegionConverter`).  Reuses the
    /// existing renderers: the LHS via `push_vn_explicit_ir`, the condition via the
    /// normal `ONLY_BRANCH` `CBRANCH` render (`( cond )`, honouring boolean-flip),
    /// and each arm's RHS via `op_push_ir` on the arm's `COPY` — every sub-expression
    /// drains on an empty RPN stack (the direct-resolution engine, as in
    /// `opCbranch`), interleaved with the raw `=`/`?`/`:` tokens (the same
    /// block-then-token pattern as `emit_block_condition`).  Honours the parent's
    /// pending brace so a diamond that is itself an `else` clause renders
    /// `else { dest = ...; }`.
    pub(super) fn emit_block_if_ite(
        &mut self,
        fd: &Funcdata,
        arch: &Architecture,
        m: crate::iteregion::IteAssignMatch,
    ) {
        use crate::prettyprint::Emit;

        // Mirror emit_block_if's pending-brace handling: if this diamond is a
        // parent if's else-clause, register the lazy brace so the ternary statement
        // renders `else { ... }` (a statement can never be `else if`).
        let mut registered_pending = false;
        let mut my_pending_gen = 0u64;
        if self.context.is_set(modifiers::PENDING_BRACE) {
            self.emit
                .set_pending_brace(self.output_brace(self.options.brace_ifelse));
            my_pending_gen = self.emit.pending_reg_gen();
            registered_pending = true;
        }
        self.context.push_mod();
        self.context
            .unset_mod(modifiers::NO_BRANCH | modifiers::ONLY_BRANCH | modifiers::PENDING_BRACE);

        // Emit the condition block's leading statements (everything before the
        // CBRANCH — e.g. the `flags &= ~IFF_x` in front of each `_PF` diamond)
        // exactly as emit_block_if does (NO_BRANCH), so nothing is lost.  For a
        // clean condition (only the CBRANCH) this emits nothing.
        self.context.push_mod();
        self.context.set_mod(modifiers::NO_BRANCH);
        self.emit_block(fd, arch, m.cond_block);
        self.context.pop_mod();
        self.emit_comment_block_tree(fd, m.cond_block);

        // Start the ternary statement on a fresh line; the tag_line fires any
        // pending brace (so an else-clause diamond renders `else { v = ...; }`).
        // Read whether OUR registration fired only *after* the tag_line that fires
        // it, and key it to our own generation (per-frame, like emit_block_if) so a
        // nested/sibling fire can never leave us closing a brace we never opened.
        self.emit.tag_line();
        let mut my_pending_indent = -1;
        if registered_pending {
            my_pending_indent = self.emit.pending_fired_indent(my_pending_gen);
        }

        // dest = ( cond ) ? A : B ;  (opref = the ternary's true-branch assign op)
        let stmt_markup = self.op_markup(fd, m.true_op);
        let sid = self.emit.begin_statement(&stmt_markup);
        // LHS assignment target (drains as a leaf on the empty stack).
        self.push_vn_explicit_ir(fd, arch, m.dest, m.true_op);
        // ` = `
        self.emit.spaces(1, 0);
        self.emit.tag_op(
            self.op_spelling(&tokens::ASSIGNMENT),
            SyntaxHighlight::NoColor,
            &MarkupRef::none(),
        );
        self.emit.spaces(1, 0);
        // (unlace outlang) C spells the选 selection `cond ? A : B`; a language
        // without a ternary spells it `if cond { A } else { B }` -- which in Rust
        // is an EXPRESSION, so the `iteregion` recovery is not lost here, it is
        // rendered in the more natural form. Only the punctuation differs: the
        // condition and both arms are the same three emissions either way.
        let ternary = self.lang().caps.ternary;
        if !ternary {
            self.emit.tag_op(
                self.lang().kw_if,
                SyntaxHighlight::KeywordColor,
                &MarkupRef::none(),
            );
            self.emit.spaces(1, 0);
        }
        // ` ( cond ) ` — the normal ONLY_BRANCH CBRANCH render (boolean-flip aware).
        self.context.push_mod();
        self.context.set_mod(modifiers::ONLY_BRANCH);
        self.emit_block(fd, arch, m.cond_block);
        self.context.pop_mod();
        // ` ? A ` / ` { A }`
        self.emit.spaces(1, 0);
        self.emit.tag_op(
            if ternary { "?" } else { "{" },
            SyntaxHighlight::NoColor,
            &MarkupRef::none(),
        );
        self.emit.spaces(1, 0);
        let arm_drops = self.conditional_arm_drops(fd, arch, &m);
        self.cast_implied.set_arm_drops(arm_drops);
        self.op_push_ir(fd, arch, m.true_op, None);
        if !ternary {
            // The arm has to be fully drained before the `}` token, which is
            // emitted directly rather than through the RPN stack.
            self.recurse();
        }
        // ` : B ` / ` } else { B }`
        self.emit.spaces(1, 0);
        if ternary {
            self.emit
                .tag_op(":", SyntaxHighlight::NoColor, &MarkupRef::none());
        } else {
            let separator = format!("}} {} {{", self.lang().kw_else);
            self.emit
                .tag_op(&separator, SyntaxHighlight::NoColor, &MarkupRef::none());
        }
        self.emit.spaces(1, 0);
        self.op_push_ir(fd, arch, m.else_op, None);
        self.cast_implied.set_arm_drops(Vec::new());
        if !ternary {
            self.recurse();
            self.emit.spaces(1, 0);
            self.emit.print("}", SyntaxHighlight::NoColor);
        }
        self.emit.end_statement(sid);
        self.emit
            .print(self.lang().kw_semicolon, SyntaxHighlight::NoColor);
        // (unlace warnstyle, DIV-39) condition-attached warnings land at the end
        // of the ternary statement line.
        self.flush_eol_warnings();

        // Close the pending brace if it fired (the else-clause `{ ... }`).
        if my_pending_indent >= 0 {
            self.emit
                .close_brace_indent(self.lang().kw_close_curly, my_pending_indent);
        }
        self.context.pop_mod();
    }
}
