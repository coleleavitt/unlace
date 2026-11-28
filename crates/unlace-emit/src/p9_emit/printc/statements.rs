//! Per-block statement emission.

use super::*;

impl PrintC {
    /// [`emit_basic_block_ops`](Self::emit_basic_block_ops) over `ops` when given (a leaf of
    /// the C syntax tree at `statements`), else over the block's own op list.
    pub(super) fn emit_basic_block_ops_in(
        &mut self,
        fd: &Funcdata,
        arch: &Architecture,
        bb: BlockId,
        bblocks: bool,
        ops: Option<&[OpId]>,
    ) {
        // commsorter.setupBlockList(bb) (printc.cc:2833): the comment walk window
        // for this basic block.  The index is the *bblocks* BlockBasic's index
        // (the sblocks node is a BlockCopy mirror, so resolve through `copy`).
        let bb_index = if bblocks {
            fd.bblocks_ref().block(bb).get_index()
        } else {
            sblocks_basic_block_index(fd, bb)
        };
        self.commsorter.setup_block_list(bb_index);
        // only_branch: print only the block's branch instruction (CBRANCH).
        if self.context.is_set(modifiers::ONLY_BRANCH) {
            let last = if bblocks {
                fd.bb_op_tail(bb)
            } else {
                sblocks_basic_tail(fd, bb)
            };
            if let Some(inst) = last
                && fd.obank().get(inst).map(|o| o.is_branch()).unwrap_or(false) {
                    self.emit_expression_ir(fd, arch, inst);
                }
            return;
        }
        let mut separator = false;
        let mut at = 0usize;
        let mut cur = match ops {
            Some(list) => list.first().copied(),
            None if bblocks => fd.bb_op_head(bb),
            None => sblocks_basic_head(fd, bb),
        };
        while let Some(inst) = cur {
            if crate::budget::deadline_passed_in("rendering C") {
                break;
            }
            cur = match ops {
                Some(list) => {
                    at += 1;
                    list.get(at).copied()
                }
                None => fd.bb_op_next(inst),
            };
            let o = match fd.obank().get(inst) {
                Some(o) => o,
                None => continue,
            };
            if self.is_suppressed_statement(fd, inst) {
                continue;
            }
            if !self.java_block_filters.is_empty() && !self.java_visible(fd, bb, inst) {
                continue;
            }
            // (unlace `voidtailreturn`) The function's own trailing bare `return;`.
            // The source it came from just falls off the end of the body, and
            // pyjoern's CFG has no node there, so printing it is both redundant C
            // and a structural divergence.  Elided only when
            // `elidable_void_tail_return` proved it is the LAST statement of a void
            // function reached on exactly one structured path.
            if Some(inst) == self.void_tail_return {
                continue;
            }
            if o.is_branch() {
                if self.context.is_set(modifiers::NO_BRANCH) {
                    continue;
                }
                if o.code() == OpCode::CPUI_BRANCH {
                    continue;
                }
            }
            // Skip ops whose output is an implied varnode (inlined elsewhere).
            if let Some(out) = o.get_out()
                && fd.vbank().get(out).map(|v| v.is_implied()).unwrap_or(false)
                    && !(self.out_lang == crate::lang::OutLang::C
                        && crate::stackbytes::assignment(fd, inst).is_some())
                {
                    continue;
                }
            if separator {
                if self.context.is_set(modifiers::COMMA_SEPARATE) {
                    self.emit
                        .print(self.lang().kw_comma, SyntaxHighlight::NoColor);
                    self.emit.spaces(1, 0);
                } else {
                    self.emit_comment_group(fd, Some(inst));
                    self.emit.tag_line();
                }
            } else if !self.context.is_set(modifiers::COMMA_SEPARATE) {
                self.emit_comment_group(fd, Some(inst));
                self.emit.tag_line();
            }
            if let Some(last) = self.emit_rust_array_init(fd, arch, inst) {
                cur = match ops {
                    Some(list) => list.iter().position(|&op| op == last).and_then(|p| {
                        at = p + 1;
                        list.get(at).copied()
                    }),
                    None => fd.bb_op_next(last),
                };
            } else {
                self.emit_statement(fd, arch, inst);
            }
            // (unlace warnstyle, DIV-39) warnings collected for this statement
            // land after its semicolon — but NEVER inside a comma-separated
            // header (`while (...)` / `for (...)` parens), where an inline
            // `// slug` would comment out the rest of the header line
            // (invalid C); those slugs ride to the header's own flush point.
            if !self.context.is_set(modifiers::COMMA_SEPARATE) {
                self.flush_eol_warnings();
            }
            separator = true;
        }
        // emitCommentGroup(None): any remaining comments in the block.
        if !self.context.is_set(modifiers::COMMA_SEPARATE) {
            self.emit_comment_group(fd, None);
            // (unlace warnstyle) trailing warnings — most commonly one attached
            // to this block's suppressed CBRANCH — stay PENDING here: for a
            // condition block the right line is the upcoming `if (cond)`
            // header, whose emitter flushes them.
        }
    }

    /// C++ `PrintC::emitStatement` (printc.cc:2361).
    pub(super) fn emit_statement(&mut self, fd: &Funcdata, arch: &Architecture, inst: OpId) {
        // C++ `emit->beginStatement(inst)`: the statement's root op — `opref =
        // inst->getTime()`, the `<ast>` `<seqnum uniq>` a client clicks to.
        let stmt_markup = self.op_markup(fd, inst);
        let id = self.emit.begin_statement(&stmt_markup);
        self.emit_expression_ir(fd, arch, inst);
        self.emit.end_statement(id);
        if !self.context.is_set(modifiers::COMMA_SEPARATE) {
            self.emit
                .print(self.lang().kw_semicolon, SyntaxHighlight::NoColor);
        }
    }

    /// (unlace) The loop-counter / address-tied store-brake seam for
    /// [`Self::emit_inplace_op`]: when `op` is a `CPUI_COPY` of an IMPLIED
    /// two-input value, answer that value's defining op and its two inputs, so
    /// the in-place render can be decided on the arithmetic rather than on the
    /// store that survived on top of it.  `None` for every other shape, which
    /// leaves upstream's behaviour untouched.
    pub(super) fn inplace_through_copy(
        &self,
        fd: &Funcdata,
        opc: OpCode,
        in0: Option<VarnodeId>,
        num_input: int4,
    ) -> Option<(OpId, VarnodeId, VarnodeId)> {
        if opc != OpCode::CPUI_COPY || num_input != 1 {
            return None;
        }
        let src = in0?;
        let srcvn = fd.vbank().get(src)?;
        if !srcvn.is_implied() {
            return None;
        }
        let def = fd.obank().get(srcvn.get_def()?)?;
        if def.num_input() != 2 {
            return None;
        }
        Some((srcvn.get_def()?, def.get_in(0)?, def.get_in(1)?))
    }

    /// C++ `PrintC::emitInplaceOp` (printc.cc, directly above `emitExpression`;
    /// gated by the `option_inplace_ops` head at printc.cc:2546 which upstream
    /// never wires beyond the flag — ported here as the flag's consumer,
    /// default-on per unlace DIV-36).
    ///
    /// When the statement is `out = out OP y` — a two-input integer op whose
    /// first input is the SAME high-level variable as the output — render the
    /// C compound-assignment form `out OP= y` instead.  Returns `true` when the
    /// in-place form was emitted (the caller stops), `false` to fall through to
    /// the ordinary `out = expr` render.
    ///
    /// Faithful to the upstream shape: the token map covers the ten integer
    /// ops with `OP=` tokens (printc.cc:62-71); the identity test is HighVariable
    /// equality (same high ⇒ same printed name); `in0` is pushed with
    /// `pushVnExplicit` (never expanded), `in1` with the ordinary `pushVn`.
    pub(super) fn emit_inplace_op(&mut self, fd: &Funcdata, arch: &Architecture, op: OpId) -> bool {
        let (opc, out, in0, in1, num_input) = match fd.obank().get(op) {
            Some(o) => (
                o.code(),
                o.get_out(),
                o.get_in(0),
                o.get_in(1),
                o.num_input(),
            ),
            None => return false,
        };
        // (unlace) See through a surviving store: the loop-counter brake keeps
        // the address-tied `COPY` that writes a loop counter back to its frame
        // slot, so the statement's root op is that `COPY` and the arithmetic
        // hangs off it as an implied expression -- `out = out OP y` reaches here
        // as `out = COPY(t)` with `t = out OP y`.  Render it from the inner op,
        // which is what upstream would have seen had the copy been propagated.
        // Only an IMPLIED input qualifies: an explicit one has a name of its own
        // and the statement really is `out = <that name>`.
        let stmt = op;
        let (opc, in0, in1, num_input, op) =
            match self.inplace_through_copy(fd, opc, in0, num_input) {
                Some((inner_op, i0, i1)) => (
                    fd.obank().get(inner_op).map(|o| o.code()).unwrap_or(opc),
                    Some(i0),
                    Some(i1),
                    2,
                    inner_op,
                ),
                None => (opc, in0, in1, num_input, op),
            };
        let tok: &'static OpToken = match opc {
            OpCode::CPUI_INT_MULT => &tokens::MULTEQUAL,
            OpCode::CPUI_INT_DIV | OpCode::CPUI_INT_SDIV => &tokens::DIVEQUAL,
            OpCode::CPUI_INT_REM | OpCode::CPUI_INT_SREM => &tokens::REMEQUAL,
            OpCode::CPUI_INT_ADD => &tokens::PLUSEQUAL,
            OpCode::CPUI_INT_SUB => &tokens::MINUSEQUAL,
            OpCode::CPUI_INT_LEFT => &tokens::LEFTEQUAL,
            OpCode::CPUI_INT_RIGHT | OpCode::CPUI_INT_SRIGHT => &tokens::RIGHTEQUAL,
            OpCode::CPUI_INT_AND => &tokens::ANDEQUAL,
            OpCode::CPUI_INT_OR => &tokens::OREQUAL,
            OpCode::CPUI_INT_XOR => &tokens::XOREQUAL,
            _ => return false,
        };
        if num_input != 2 {
            return false;
        }
        if self.out_lang == crate::lang::OutLang::Rust
            && !self.options.nocasts
            && (self.rust_wrapping_plan(fd, arch, op).is_some()
                || crate::rustsigned::plan(fd, op).is_some()
                || self.rust_integer_binary_plan(fd, arch, op).is_some())
        {
            return false;
        }
        let (out, in0, in1) = match (out, in0, in1) {
            (Some(a), Some(b), Some(c)) => (a, b, c),
            _ => return false,
        };
        // C++ `op->getOut()->getHigh() != vn->getHigh()` — pre-merge Nones never
        // fold (a None high is "not the same variable").
        let out_high = fd.vbank().get(out).and_then(|v| v.get_high());
        let in0_high = fd.vbank().get(in0).and_then(|v| v.get_high());
        match (out_high, in0_high) {
            (Some(a), Some(b)) if a == b => {}
            _ => return false,
        }
        // Compound assignment cannot guard an overshift or cast its signed shiftee.
        if opc == OpCode::CPUI_INT_LEFT
            && self.out_lang == crate::lang::OutLang::C
            && !self.context.is_set(modifiers::NEGATETOKEN)
            && (crate::armregistershift::plan_arm_register_lsl(fd, arch, op).is_some()
                || crate::armconstantshift::plan_arm_constant_lsl(fd, arch, op)
                    .or_else(|| self.fixed64_shift_plan(fd, arch, op))
                    .is_some())
        {
            return false;
        }
        if self.out_lang == crate::lang::OutLang::C && self.widened_add_plan(fd, arch, op).is_some()
        {
            return false;
        }
        // (unlace) `x += -c` reads poorly: when the INT_ADD addend is a plain
        // negative signed constant (no equate/display override, not char-typed,
        // not the unnegatable type minimum), render `x -= c` with the negated
        // magnitude instead.  The dataflow canonicalizes `sub x, c` into
        // INT_ADD(x, -c), so this restores the source's subtraction form.
        if opc == OpCode::CPUI_INT_ADD
            && let Some(v) = fd.vbank().get(in1)
                && v.is_constant() && fd.vn_high_display_format(in1) == 0 {
                    let ct = fd.vn_type_read_facing(in1, op);
                    let sz = v.get_size();
                    let mask = calc_mask(sz);
                    let val = v.get_offset() & mask;
                    let topbit = (mask >> 1) + 1;
                    if ct.get_metatype() == crate::dtype::type_metatype::TYPE_INT
                        && !ct.is_char_print()
                        && !ct.is_enum_type()
                        && (val & topbit) != 0
                        && val != topbit
                    {
                        let mag = (!val).wrapping_add(1) & mask;
                        self.push_op(&tokens::MINUSEQUAL, Some(op_key(op)));
                        let (lhs, lhs_op) = self.inplace_target(fd, (in0, op), (out, stmt));
                        self.push_vn_explicit_ir(fd, arch, lhs, lhs_op);
                        self.push_constant_ir_fmt_sign(mag, sz, op, 0, true);
                        return true;
                    }
                }
        self.push_op(tok, Some(op_key(op)));
        let (lhs, lhs_op) = self.inplace_target(fd, (in0, op), (out, stmt));
        self.push_vn_explicit_ir(fd, arch, lhs, lhs_op);
        self.push_vn_ir(fd, arch, in1, op);
        true
    }

    /// The varnode an in-place `out OP= y` renders on its left, with the op it
    /// renders against: `in0` as its op reads it, unless it covers only part of
    /// its mapped symbol, whose read form is a cast (`(int)origin`) and not an
    /// lvalue; the statement's output then renders the store form an ordinary
    /// assignment uses (`*(int *)&origin`).
    pub(super) fn inplace_target(
        &self,
        fd: &Funcdata,
        read: (VarnodeId, OpId),
        write: (VarnodeId, OpId),
    ) -> (VarnodeId, OpId) {
        let partial = fd.vbank().get(read.0).is_some_and(|v| {
            v.get_high()
                .and_then(|high| self.emitted_high_symbol(fd, high))
                .and_then(|(_, off, ty)| ty.map(|ty| off > 0 || v.get_size() < ty.get_size()))
                .unwrap_or(false)
        });
        if partial { write } else { read }
    }
}
