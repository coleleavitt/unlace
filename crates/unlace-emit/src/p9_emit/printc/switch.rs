//! Switch block emission.

use super::*;

impl PrintC {
    /// C++ `PrintC::emitBlockSwitch` (printc.cc:3470): emit a `BlockSwitch` — the
    /// statements before the switch, the `switch(v)` header, then the braced body
    /// of `case N:` / `default:` arms.
    pub(super) fn emit_block_switch(&mut self, fd: &Funcdata, arch: &Architecture, blk: BlockId) {
        match self.lang().forms.switch {
            crate::lang::SwitchForm::CSwitch => self.emit_block_switch_c(fd, arch, blk),
            crate::lang::SwitchForm::RustMatch => self.emit_block_match_rust(fd, arch, blk),
            crate::lang::SwitchForm::GoSwitch => self.emit_block_switch_go(fd, arch, blk),
        }
    }

    pub(super) fn emit_block_switch_c(&mut self, fd: &Funcdata, arch: &Architecture, blk: BlockId) {
        // getSwitchBlock() == getBlock(0) (the switch component).
        let switch_block = fd.sblocks_ref().block(blk).get_block(0);

        self.context.push_mod();
        self.context
            .unset_mod(modifiers::NO_BRANCH | modifiers::ONLY_BRANCH);
        // Statements before the branch (no_branch).
        self.context.push_mod();
        self.context.set_mod(modifiers::NO_BRANCH);
        self.emit_block(fd, arch, switch_block);
        self.context.pop_mod();
        self.emit.tag_line();
        // The `switch(v)` header (only_branch|comma_separate).
        self.context.push_mod();
        self.context
            .set_mod(modifiers::ONLY_BRANCH | modifiers::COMMA_SEPARATE);
        self.emit_block(fd, arch, switch_block);
        self.context.pop_mod();
        let brace_id = self.emit.open_brace_indent(
            self.lang().kw_open_curly,
            self.output_brace(self.options.brace_switch),
        );
        // (unlace warnstyle, DIV-39) warnings pending from the switch block land
        // after the `switch (v) {` header brace.
        self.flush_eol_warnings();

        let arms = self.switch_arms(fd, blk);
        let ncase = arms.len();
        for (i, arm) in arms.iter().enumerate() {
            let owner = arm.owner;
            if owner != blk && arms[..i].iter().all(|a| a.owner != owner) {
                self.emit_comment_block_tree(fd, fd.sblocks_ref().block(owner).get_block(0));
            }
            self.emit_switch_case(fd, arch, *arm);
            let id = self.emit.start_indent();
            let case = fd.sblocks_ref().block(owner).switch_caseblocks()[arm.index].clone();
            let record = self.tree_switch_arm(blk, i);
            let goto_type = match record {
                Some(record) => record.goto,
                None => (case.gototype != 0).then(|| {
                    self.goto_rewrites
                        .case_gototype(owner, case.block, case.gototype)
                }),
            };
            if let Some((guard, _)) = arm.guard {
                let id2 = self.emit.begin_block(0);
                self.emit_block(fd, arch, fd.sblocks_ref().block(guard).get_block(1));
                self.emit.end_block(id2);
            } else if let Some(gototype) = goto_type {
                self.emit.tag_line();
                let head = fd.sblocks_ref().block(owner).get_block(0);
                self.emit_goto_statement(fd, head, case.block, gototype);
            } else {
                let caseblk = case.block;
                let id2 = self.emit.begin_block(0);
                if arm.skip > 0 {
                    self.emit_arm_rest(fd, arch, caseblk, arm.skip);
                } else {
                    self.emit_block(fd, arch, caseblk);
                }
                // Blocks that formally exit the switch need an explicit `break;`
                // (unless it is the last case, whose fall-through is the close).
                let last = i == ncase - 1;
                let exits_here = record.map_or(case.isexit && !last, |record| record.exit_break);
                let dangling =
                    record.is_some_and(|record| record.ends_on_label) || self.emit.label_dangling();
                if exits_here || (last && dangling) {
                    self.emit.tag_line();
                    self.emit_goto_statement(
                        fd,
                        caseblk,
                        caseblk,
                        crate::block::block_flags::f_break_goto,
                    );
                }
                self.emit.end_block(id2);
            }
            self.emit.stop_indent(id);
        }
        self.emit.tag_line();
        self.emit
            .close_brace_indent(self.lang().kw_close_curly, brace_id);
        self.context.pop_mod();
    }

    /// C++ `PrintC::emitSwitchCase` (printc.cc:3278): emit the `case N:` /
    /// `default:` label(s) for one case arm.
    #[doc(hidden)]
    pub fn emit_switch_case(
        &mut self,
        fd: &Funcdata,
        arch: &Architecture,
        arm: crate::switchmerge::PlannedCase,
    ) {
        let blk = arm.owner;
        let case = fd.sblocks_ref().block(blk).switch_caseblocks()[arm.index].clone();
        // The case block's first op — used only for markup tagging.
        let firstop = self.case_first_op(fd, case.block);

        if let Some((_, value)) = arm.guard {
            let (_, sz, signed) = self.switch_case_label(fd, arch, blk, &case, 0);
            self.emit_numeric_case_label(value, sz, signed, None);
        } else if case.isdefault || arm.as_default {
            // default: (the label value is informational; default emits no value).
            // C++ `emit->tagCaseLabel(..., op, ...)` with op = the case's first op —
            // `opref = firstop->getTime()`, the `<ast>` `<seqnum uniq>`.
            let case_markup = match firstop {
                Some(o) => self.op_markup(fd, o),
                None => MarkupRef::none(),
            };
            self.emit_default_case_label(case.label, &case_markup);
        } else {
            // case <label>: — one line per index targeting this case.
            for i in 0..self.switch_case_label_count(fd, blk, &case) {
                let (val, sz, signed) = self.switch_case_label(fd, arch, blk, &case, i);
                self.emit_numeric_case_label(
                    val,
                    sz,
                    signed,
                    firstop.or_else(|| self.any_op(fd, case.block)),
                );
            }
        }
    }

    /// How many labels a non-default case arm prints: one per jump-table index
    /// that targets its block.
    #[doc(hidden)]
    pub fn switch_case_label_count(
        &self,
        fd: &Funcdata,
        blk: BlockId,
        case: &crate::block::CaseOrder,
    ) -> int4 {
        match (
            fd.sblocks_ref().block(blk).switch_jt_index(),
            case.basicblock,
        ) {
            (Some(j), Some(bb)) => fd
                .get_jump_table(j as int4)
                .num_indices_by_block(fd, bb)
                .unwrap_or(1)
                .max(1),
            _ => 1,
        }
    }

    /// The `i`th label of a non-default case arm as the value, byte size and
    /// signedness it prints with. Both output languages print labels from this,
    /// so a label always names the value the printed selector holds.
    #[doc(hidden)]
    pub fn switch_case_label(
        &self,
        fd: &Funcdata,
        arch: &Architecture,
        blk: BlockId,
        case: &crate::block::CaseOrder,
        i: int4,
    ) -> (uintb, int4, bool) {
        let jt_index = fd.sblocks_ref().block(blk).switch_jt_index();
        let val = match (jt_index, case.basicblock) {
            (Some(j), Some(bb)) => {
                let jt = fd.get_jump_table(j as int4);
                jt.get_label_by_index(jt.get_index_by_block(fd, bb, i).unwrap_or(0))
            }
            _ => case.label,
        };
        let (sz, mask, signed) = self.switch_label_form(fd, arch, blk);
        (val & mask, sz, signed)
    }

    /// (unlace `switchmerge`) Every label of a non-default case arm, as
    /// [`switch_case_label`](PrintC::switch_case_label) gives them for
    /// `0..switch_case_label_count`, reading the table once instead of once per
    /// label.
    #[doc(hidden)]
    pub fn switch_case_labels(
        &self,
        fd: &Funcdata,
        arch: &Architecture,
        blk: BlockId,
        case: &crate::block::CaseOrder,
    ) -> Vec<(uintb, int4, bool)> {
        let n = self.switch_case_label_count(fd, blk, case) as usize;
        let raw: Vec<uintb> = match (
            fd.sblocks_ref().block(blk).switch_jt_index(),
            case.basicblock,
        ) {
            (Some(j), Some(bb)) => {
                let jt = fd.get_jump_table(j as int4);
                let indices = jt.unlace_indices_by_block(fd, bb).unwrap_or_default();
                (0..n)
                    .map(|i| jt.get_label_by_index(indices.get(i).copied().unwrap_or(0)))
                    .collect()
            }
            _ => vec![case.label; n],
        };
        let (sz, mask, signed) = self.switch_label_form(fd, arch, blk);
        raw.into_iter()
            .map(|val| (val & mask, sz, signed))
            .collect()
    }

    /// The byte size, value mask and signedness every label of switch `blk`
    /// prints with.
    pub(super) fn switch_label_form(
        &self,
        fd: &Funcdata,
        arch: &Architecture,
        blk: BlockId,
    ) -> (int4, uintb, bool) {
        let sz = self.switch_var_size(fd, blk);
        let Some(j) = fd.sblocks_ref().block(blk).switch_jt_index() else {
            return (sz, uintb::MAX, false);
        };
        let jt = fd.get_jump_table(j as int4);
        let mask = if jt.unlace_lowered_var().is_none() {
            calc_mask(sz)
        } else {
            uintb::MAX
        };
        let text_signed = self.lang().caps.signed_text_byte;
        let lowered = jt
            .get_indirect_op()
            .and_then(|op| lowered_switch_label_form(fd, arch, op, text_signed));
        let signed = match lowered {
            Some((signed, _)) => signed,
            None if jt.unlace_lowered_var().is_some() => jt.unlace_has_signed_labels(),
            None => jt
                .get_indirect_op()
                .and_then(|op| native_switch_label_signedness(fd, arch, op, text_signed))
                .unwrap_or(jt.unlace_has_signed_labels()),
        };
        (sz, mask, signed)
    }

    /// (unlace `switchmerge`) The arms `emit_block_switch_c` prints for `blk`.
    pub(super) fn switch_arms(
        &self,
        fd: &Funcdata,
        blk: BlockId,
    ) -> Vec<crate::switchmerge::PlannedCase> {
        if let Some(arms) = self.switch_plans.plans.get(&blk) {
            return arms.clone();
        }
        let n = fd.sblocks_ref().block(blk).switch_caseblocks().len();
        (0..n)
            .map(|index| crate::switchmerge::PlannedCase::new(blk, index))
            .collect()
    }

    /// (unlace `switchmerge`) Print a switch arm from the `skip`th block of its
    /// list, keeping the trailing jump of a `BlockGoto` around the list.
    pub(super) fn emit_arm_rest(
        &mut self,
        fd: &Funcdata,
        arch: &Architecture,
        caseblk: BlockId,
        skip: usize,
    ) {
        let (list, _) = crate::switchmerge::arm_list(fd.sblocks_ref(), caseblk);
        if list.is_empty() {
            return;
        }
        if fd.sblocks_ref().block(caseblk).get_type() == crate::block::BlockType::Goto {
            self.emit_block_goto_from(fd, arch, caseblk, skip);
        } else {
            let list = fd.sblocks_ref().block(caseblk).get_list().to_vec();
            self.emit_block_list(fd, arch, caseblk, &list[skip..]);
        }
    }

    /// (unlace `switchmerge`) Does the switch header block `head` print no
    /// statement before its `switch`?  Mirrors the skips of
    /// [`emit_basic_block_ops`](PrintC::emit_basic_block_ops) in `NO_BRANCH` mode.
    #[doc(hidden)]
    pub fn header_prints_nothing(&self, fd: &Funcdata, head: BlockId) -> bool {
        let graph = fd.sblocks_ref();
        let mut head = head;
        while graph.block(head).get_type() == crate::block::BlockType::MultiGoto
            && graph.block(head).get_size() == 1
        {
            head = graph.block(head).get_block(0);
        }
        graph
            .block(head)
            .get_copy()
            .is_some_and(|bb| self.ops_print_nothing(fd, bb))
    }

    /// (unlace `switchmerge`) Does the basic block `bb` print no statement
    /// besides its branch?
    #[doc(hidden)]
    pub fn ops_print_nothing(&self, fd: &Funcdata, bb: BlockId) -> bool {
        let mut cur = fd.bb_op_head(bb);
        while let Some(inst) = cur {
            cur = fd.bb_op_next(inst);
            let Some(o) = fd.obank().get(inst) else {
                continue;
            };
            if self.is_suppressed_statement(fd, inst) || o.is_branch() {
                continue;
            }
            let implied = o
                .get_out()
                .and_then(|out| fd.vbank().get(out))
                .is_some_and(|v| v.is_implied());
            if !implied || crate::stackbytes::assignment(fd, inst).is_some() {
                return false;
            }
        }
        true
    }

    /// (unlace `switchmerge`) The label values the non-default arms of `sw` print,
    /// with their byte size and signedness.
    #[doc(hidden)]
    pub fn switch_label_set(
        &self,
        fd: &Funcdata,
        arch: &Architecture,
        sw: BlockId,
    ) -> Option<crate::switchmerge::LabelSet> {
        let mut values = std::collections::BTreeSet::new();
        let mut form = None;
        for case in fd
            .sblocks_ref()
            .block(sw)
            .switch_caseblocks()
            .iter()
            .filter(|c| !c.isdefault)
        {
            for (val, sz, signed) in self.switch_case_labels(fd, arch, sw, case) {
                if form.is_some_and(|f| f != (sz, signed)) || !values.insert(val) {
                    return None;
                }
                form = Some((sz, signed));
            }
        }
        let (sz, signed) = form?;
        Some((values, sz, signed))
    }

    pub(super) fn emit_default_case_label(&mut self, value: uintb, markup: &MarkupRef) {
        self.emit.tag_line();
        self.emit.tag_case_label(
            self.lang().kw_default,
            SyntaxHighlight::KeywordColor,
            markup,
            value,
        );
        self.emit
            .print(self.lang().kw_colon, SyntaxHighlight::NoColor);
        self.emit.note_label();
    }

    pub(super) fn emit_numeric_case_label(
        &mut self,
        value: uintb,
        size: int4,
        signed: bool,
        op: Option<OpId>,
    ) {
        self.emit.tag_line();
        self.emit
            .print(self.lang().kw_case, SyntaxHighlight::KeywordColor);
        self.emit.spaces(1, 0);
        match op {
            Some(op) => {
                if signed {
                    self.push_constant_ir_fmt_sign(value, size, op, display_format::NONE, true);
                } else {
                    self.push_constant_ir(value, size, op);
                }
                self.recurse();
            }
            None => {
                let force_dec = self.context.is_set(modifiers::FORCE_DEC);
                let force_hex = self.context.is_set(modifiers::FORCE_HEX);
                let (print_negsign, value, display_fmt) = resolve_integer_format(
                    value,
                    size,
                    signed,
                    display_format::NONE,
                    force_hex,
                    force_dec,
                );
                let token = format_integer_token(
                    print_negsign,
                    value,
                    display_fmt,
                    size,
                    false,
                    false,
                    true,
                    "",
                );
                self.emit.print(&token, SyntaxHighlight::ConstColor);
            }
        }
        self.emit
            .print(self.lang().kw_colon, SyntaxHighlight::NoColor);
        self.emit.note_label();
    }

    /// First op of a case block (C++ `FlowBlock::firstOp` → front-leaf basic
    /// block's first op), used only for case-label markup tagging.
    #[doc(hidden)]
    pub fn case_first_op(&self, fd: &Funcdata, caseblk: BlockId) -> Option<OpId> {
        let front = fd.sblocks_ref().get_front_leaf(caseblk)?;
        let bb = fd.sblocks_ref().sub_block(front, 0)?;
        fd.bb_op_head(bb)
    }

    /// Any op tag in a case block (fallback for markup when the block is empty).
    #[doc(hidden)]
    pub fn any_op(&self, fd: &Funcdata, caseblk: BlockId) -> Option<OpId> {
        self.case_first_op(fd, caseblk)
    }

    /// The byte-size of the switch variable (C++ `getSwitchType()` size), used to
    /// format the case-label constant.  Resolved from the BRANCHIND's `in0`.
    #[doc(hidden)]
    pub fn switch_var_size(&self, fd: &Funcdata, blk: BlockId) -> int4 {
        let jt_index = match fd.sblocks_ref().block(blk).switch_jt_index() {
            Some(j) => j,
            None => return 4,
        };
        let indop = match fd.get_jump_table(jt_index as int4).get_indirect_op() {
            Some(op) => op,
            None => return 4,
        };
        fd.obank()
            .get(indop)
            .and_then(|o| o.get_in(0))
            .and_then(|vn| fd.vbank().get(vn))
            .map(|v| v.get_size())
            .unwrap_or(4)
    }
}
