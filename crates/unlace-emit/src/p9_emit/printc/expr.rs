//! IR expression emission (the per-op push dispatch).

use super::*;

impl PrintC {
    /// C++ `PrintC::emitExpression` (printc.cc:2544): if the op has an output,
    /// open an assignment to it, then push the op's expression and recurse.
    #[doc(hidden)]
    pub fn emit_expression_ir(&mut self, fd: &Funcdata, arch: &Architecture, op: OpId) {
        if self.rt_ctx.go_pair_types.is_some() && self.emit_go_pair_assignment(fd, arch, op) {
            return;
        }
        if self.out_lang == crate::lang::OutLang::C {
            if let Some(assignment) = crate::stackbytes::assignment(fd, op) {
                self.emit_byte_assignment_ir(fd, arch, op, assignment);
                return;
            }
            if let Some(assignment) = crate::stackassign::assignment(fd, op) {
                self.emit_storage_assignment_ir(fd, arch, op, assignment);
                return;
            }
        }
        if self.out_lang == crate::lang::OutLang::C
            && let Some(assignment) = self.local_array_assignment(fd, arch, op)
        {
            self.emit_storage_assignment_ir(fd, arch, op, assignment);
            return;
        }
        if self.emit_wide_copy(fd, arch, op) {
            return;
        }
        if self.emit_half_store(fd, arch, op) {
            return;
        }
        if self.options.bytearray_c && self.emit_bytearray_store(fd, arch, op) {
            return;
        }
        // C++ `if (option_inplace_ops && emitInplaceOp(op)) return;`
        // (printc.cc:2546) — the in-place `OP=` render, unlace DIV-36 default-on
        // (`option inplaceops off` restores the upstream `out = out OP y` form).
        // Applied to standalone `;`-terminated statements only: comma contexts
        // (for-loop headers, condition-block side effects) keep the upstream
        // `out = out OP y` form, so `for (...; i = i + 1)` renders unchanged.
        if self.out_lang != crate::lang::OutLang::Go
            && self.options.inplace_ops
            && !self.context.is_set(modifiers::COMMA_SEPARATE)
            && self.emit_inplace_op(fd, arch, op)
        {
            return;
        }
        // C++ special-printing dispatch (printc.cc:2547-2566): a STORE/INSERT
        // marked by the bitfield transforms renders as `ptr->field = value`
        // (the constructor and SUBPIECE special-print arms are other surfaces).
        if fd
            .obank()
            .get(op)
            .map(|o| o.does_special_printing())
            .unwrap_or(false)
        {
            match fd.obank().get(op).map(|o| o.code()) {
                Some(OpCode::CPUI_STORE) => {
                    self.emit_bitfield_store(fd, arch, op);
                    return;
                }
                Some(OpCode::CPUI_INSERT) => {
                    self.emit_bitfield_expression(fd, arch, op);
                    return;
                }
                // CPUI_SUBPIECE: don't modify printing here (printc.cc:2561).
                // The constructor arm and any other special-print op are other
                // surfaces; fall through to the normal render.
                _ => {}
            }
        }
        let outvn = fd.obank().get(op).and_then(|o| o.get_out());
        if let Some(out) = outvn {
            self.push_op(&tokens::ASSIGNMENT, Some(op_key(op)));
            self.push_vn_explicit_ir(fd, arch, out, op);
        }
        let storage_cast = (self.out_lang == crate::lang::OutLang::C && !self.options.nocasts)
            .then(|| {
                outvn.and_then(|out| {
                    crate::pointerstorecast::target(fd, op, || {
                        self.partial_piece_type(fd, arch, out, op, -1)
                    })
                })
            })
            .flatten();
        if let Some(target) = &storage_cast {
            if crate::pointerstorecast::null_source(fd, op) {
                self.push_constant_ir_fmt_sign(
                    0,
                    target.get_size(),
                    op,
                    display_format::NONE,
                    false,
                );
                return;
            }
            self.push_cast_open(target, op);
        }
        if self.out_lang == crate::lang::OutLang::Go
            && let Some(out) = outvn
        {
            let declared = self.go_value_type(fd, arch, out, op);
            if self.push_go_constant_copy(fd, arch, op, &declared) {
                return;
            }
            let actual = fd.vn_type_def_facing(out);
            if declarator_parts(&declared, self.rt_ctx.clone()).0
                != declarator_parts(&actual, self.rt_ctx.clone()).0
            {
                self.push_go_conversion(&declared, &actual, op);
            }
        }
        self.stmt_op = outvn.map(|_| op);
        self.op_push_ir(fd, arch, op, None);
        self.stmt_op = None;
        if let Some(target) = &storage_cast {
            self.push_cast_close(target);
        }
    }

    /// C++ `op->getOpcode()->push(this,op,readop)` — the per-opcode RPN push
    /// (the `PrintC::op*` overrides, dispatched via [`op_emit_kind`] plus the
    /// hand-written cases the structured boolless body reaches).
    ///
    /// `read_op` is the C++ `readOp` argument threaded by `getOpcode()->push`:
    /// the op that *reads* `op`'s output when `op` is being pushed as an implied
    /// value (`pushVnImplied`/`pushImpliedField` pass the reader; printc.cc:2186),
    /// else `None` at the top of an expression (printc.cc:2579 passes `(PcodeOp *)0`).
    /// Only `opIntSext`/`opIntZext` consume it (the extension-cast-implied test,
    /// printc.cc:806-830); every other override ignores it.
    #[doc(hidden)]
    pub fn op_push_ir(
        &mut self,
        fd: &Funcdata,
        arch: &Architecture,
        op: OpId,
        read_op: Option<OpId>,
    ) {
        let opc = fd.obank().get(op).expect("op_push_ir: stale op").code();
        // (unlace truthycond, DIV-37) CONDITION_CONTEXT only survives through the
        // boolean-preserving operators; any other operator's operands are value
        // context, so scope the bit off across this dispatch (the mod-stack
        // frame restores it for our siblings).
        let scope_off_cond = self.context.is_set(modifiers::CONDITION_CONTEXT)
            && !matches!(
                opc,
                OpCode::CPUI_INT_EQUAL
                    | OpCode::CPUI_INT_NOTEQUAL
                    | OpCode::CPUI_FLOAT_EQUAL
                    | OpCode::CPUI_FLOAT_NOTEQUAL
                    | OpCode::CPUI_BOOL_AND
                    | OpCode::CPUI_BOOL_OR
                    | OpCode::CPUI_BOOL_NEGATE
                    | OpCode::CPUI_CBRANCH
            );
        if scope_off_cond {
            self.context.push_mod();
            self.context.unset_mod(modifiers::CONDITION_CONTEXT);
        }
        self.op_push_ir_inner(fd, arch, op, read_op, opc);
        if scope_off_cond {
            self.context.pop_mod();
        }
    }

    /// The per-opcode dispatch body of [`op_push_ir`](Self::op_push_ir) (split
    /// out so the CONDITION_CONTEXT scoping wraps every arm uniformly).
    pub(super) fn op_push_ir_inner(
        &mut self,
        fd: &Funcdata,
        arch: &Architecture,
        op: OpId,
        read_op: Option<OpId>,
        opc: OpCode,
    ) {
        if arch.unlace_options.get::<crate::wideconst::WideConst>().0
            && let Some(tok) = crate::wideconst::wide_literal(fd, op)
        {
            self.push_atom(&Atom::with_op(
                tok,
                TagType::Syntax,
                crate::printlanguage::SyntaxHighlight::const_color,
                op_key(op),
            ));
            return;
        }
        if matches!(
            opc,
            OpCode::CPUI_INT_EQUAL
                | OpCode::CPUI_INT_NOTEQUAL
                | OpCode::CPUI_BOOL_AND
                | OpCode::CPUI_BOOL_OR
        ) && let Some((fold, equal)) = self.strcmp_op_fold(fd, arch, op)
        {
            let negated = self.context.is_set(modifiers::NEGATETOKEN);
            if negated {
                self.context.unset_mod(modifiers::NEGATETOKEN);
            }
            self.push_strcmp_fold(fd, arch, &fold, equal != negated, op);
            return;
        }
        if self.out_lang == crate::lang::OutLang::C {
            if opc == OpCode::CPUI_INT_ADD && self.op_named_pointer_add_ir(fd, arch, op, read_op) {
                return;
            }
            if let Some(transfer) = crate::aggregatecast::storage_transfer(fd, op) {
                self.op_aggregate_transfer_ir(fd, arch, op, transfer);
                return;
            }
        }
        if self.lang().caps.ternary
            && arch.unlace_options.get::<crate::selectmul::SelectMul>().0
            && let Some(plan) = crate::selectmul::select_plan(fd, op)
        {
            self.op_select_ir(fd, arch, op, plan);
            return;
        }
        let printed = |vn, slot| self.partial_piece_type(fd, arch, vn, op, slot);
        if let Some(transfer) = crate::bitcast::storage_transfer(fd, op, printed) {
            self.op_bit_transfer_ir(fd, arch, op, transfer);
            return;
        }
        if !matches!(opc, OpCode::CPUI_CALL | OpCode::CPUI_CALLIND) {
            self.push_word_result_open(fd, arch, op);
        }
        match opc {
            // INT_SEXT (printc.cc:819 opIntSext) / INT_ZEXT (printc.cc:806 opIntZext):
            // the cast-strategy decides whether the extension renders as an explicit
            // `(intN)`/`(uintN)` cast, is hidden (implied by integer promotion), or
            // falls back to the functional `SEXT(x)`/`ZEXT(x)` form.
            OpCode::CPUI_INT_SEXT => self.op_int_sext_ir(fd, arch, op, read_op),
            OpCode::CPUI_INT_ZEXT => self.op_int_zext_ir(fd, arch, op, read_op),
            // CBRANCH: the structured-if condition (printc.cc:556 opCbranch).
            // In the non-flat path opCbranch only emits the `( condition )`; the
            // `if` keyword is printed by emit_block_if.  yesparen = !comma_separate.
            OpCode::CPUI_CBRANCH => {
                // (unlace outlang) A language without parenthesised conditions
                // (`if c {` rather than `if (c)`) suppresses the paren; the
                // grouping token still opens so line breaking is unchanged.
                let yesparen = !self.context.is_set(modifiers::COMMA_SEPARATE)
                    && self.lang().caps.paren_conditions;
                let mut booleanflip = fd
                    .obank()
                    .get(op)
                    .map(|o| o.is_boolean_flip())
                    .unwrap_or(false)
                    ^ self.flipped_branches.contains(&op);
                let in1 = fd.obank().get(op).and_then(|o| o.get_in(1));
                let id = if yesparen {
                    self.emit.open_paren(crate::printlanguage::OPEN_PAREN, 0)
                } else {
                    self.emit.open_group()
                };
                // C++ opCbranch (printc.cc:578): if the condition op can be
                // negated as a token (INT_EQUAL->INT_NOTEQUAL etc.), absorb the
                // `!` into the comparison via the `negatetoken` modifier instead
                // of emitting an explicit BOOL_NEGATE.
                let use_negate_token = booleanflip
                    && in1
                        .map(|vn| self.check_print_negation(fd, vn))
                        .unwrap_or(false);
                if use_negate_token {
                    booleanflip = false;
                }
                if booleanflip {
                    self.push_op(&tokens::BOOLEAN_NOT, Some(op_key(op)));
                }
                // (unlace truthycond, DIV-37) The condition value is consumed as
                // a boolean — mark the context so a `!= 0`/`== 0` comparison
                // renders in truthy form; same mod-stack frame carries the
                // negate-token absorption.
                self.context.push_mod();
                self.context.set_mod(modifiers::CONDITION_CONTEXT);
                if use_negate_token {
                    self.context.set_mod(modifiers::NEGATETOKEN);
                }
                if let Some(vn) = in1 {
                    self.push_vn_ir(fd, arch, vn, op);
                }
                self.context.pop_mod();
                // recurse() drains the stack: direct resolution above already
                // drained it (the RPN engine unwinds on the final push_atom), so
                // the paren can close now.
                if yesparen {
                    self.emit.close_paren(crate::printlanguage::CLOSE_PAREN, id);
                } else {
                    self.emit.close_group(id);
                }
            }
            // BRANCHIND (printc.cc:602 opBranchind): the switch header `switch(v)`.
            // The structured switch body (`{ case N: ... }`) is emitted by
            // `emit_block_switch`; here only the `switch(in0)` expression prints.
            OpCode::CPUI_BRANCHIND => {
                let kw_markup = self.op_markup(fd, op);
                self.emit.tag_op(
                    self.lang().kw_switch,
                    SyntaxHighlight::KeywordColor,
                    &kw_markup,
                );
                // (unlace outlang) `switch (v)` in C, `match v` in Rust.
                let paren = self.lang().caps.paren_conditions;
                let id = if paren {
                    self.emit.open_paren(crate::printlanguage::OPEN_PAREN, 0)
                } else {
                    self.emit.spaces(1, 0);
                    self.emit.open_group()
                };
                if let Some(vn) = fd.obank().get(op).and_then(|o| o.get_in(0)) {
                    let cast =
                        lowered_switch_label_form(fd, arch, op, self.lang().caps.signed_text_byte)
                            .and_then(|(_, cast)| cast)
                            .or_else(|| self.narrow_selector_cast(fd, arch, op, vn));
                    if let Some(ct) = &cast {
                        self.push_cast_open(ct, op);
                    }
                    self.push_vn_ir(fd, arch, vn, op);
                    if let Some(ct) = &cast {
                        self.push_cast_close(ct);
                    }
                }
                if paren {
                    self.emit.close_paren(crate::printlanguage::CLOSE_PAREN, id);
                } else {
                    self.emit.close_group(id);
                }
            }
            // RETURN (printc.cc:774 opReturn).
            OpCode::CPUI_RETURN => {
                let kw_markup = self.op_markup(fd, op);
                // (unlace decodehalt) The `getHaltType()` arms of the upstream
                // switch: a RETURN unlace planted because the bytes would not
                // decode is a pseudo-call naming the failure, not a return.
                let halt = fd.obank().get(op).map(|o| o.get_halt_type()).unwrap_or(0);
                if let Some(nm) = crate::decodehalt::halt_call_name(halt) {
                    self.emit
                        .tag_func_name(nm, SyntaxHighlight::FuncnameColor, &kw_markup);
                    self.emit
                        .print(crate::printlanguage::OPEN_PAREN, SyntaxHighlight::NoColor);
                    self.emit
                        .print(crate::printlanguage::CLOSE_PAREN, SyntaxHighlight::NoColor);
                    return;
                }
                self.emit.tag_op(
                    self.lang().kw_return,
                    SyntaxHighlight::KeywordColor,
                    &kw_markup,
                );
                let nin = fd.obank().get(op).map(|o| o.num_input()).unwrap_or(0);
                if nin > 1 {
                    self.emit.spaces(1, 0);
                    if let Some(vn) = fd.obank().get(op).and_then(|o| o.get_in(1)) {
                        if self.out_lang == crate::lang::OutLang::Go {
                            let emitted_pair = self.rt_ctx.go_pair_types.is_some()
                                && self.push_go_pair_return(fd, arch, vn, op);
                            if !emitted_pair && !self.push_go_zero_record_return(fd, vn, op) {
                                if let Some(target) = fd.get_func_proto().get_output_type() {
                                    self.push_go_value_as(fd, arch, vn, op, target);
                                } else {
                                    self.push_vn_ir(fd, arch, vn, op);
                                }
                            }
                        } else if self.out_lang == crate::lang::OutLang::Rust
                            && !self.options.nocasts
                        {
                            let converted =
                                fd.get_func_proto().get_output_type().is_some_and(|target| {
                                    self.push_rust_value_as(fd, arch, vn, op, target)
                                });
                            if !converted {
                                self.push_vn_ir(fd, arch, vn, op);
                            }
                        } else {
                            self.push_vn_ir(fd, arch, vn, op);
                        }
                    }
                }
            }
            // COPY (printc.cc:501 opCopy): just push the input.
            OpCode::CPUI_COPY => {
                if let Some(vn) = fd.obank().get(op).and_then(|o| o.get_in(0)) {
                    if self.out_lang == crate::lang::OutLang::Go {
                        let target = fd
                            .obank()
                            .get(op)
                            .and_then(|o| o.get_out())
                            .map(|out| fd.vn_type_def_facing(out));
                        if let Some(target) = target {
                            self.push_go_value_as(fd, arch, vn, op, &target);
                        } else {
                            self.push_vn_ir(fd, arch, vn, op);
                        }
                    } else if self.out_lang == crate::lang::OutLang::Rust && !self.options.nocasts {
                        let target = fd
                            .obank()
                            .get(op)
                            .and_then(|o| o.get_out())
                            .map(|out| self.rust_integer_output_type(fd, arch, out));
                        let converted = target.as_ref().is_some_and(|target| {
                            self.push_rust_value_as(fd, arch, vn, op, target)
                        });
                        if !converted {
                            self.push_vn_ir(fd, arch, vn, op);
                        }
                    } else {
                        self.push_vn_ir(fd, arch, vn, op);
                    }
                }
            }
            // LOAD (printc.cc:507 opLoad) / STORE (printc.cc:520 opStore).
            OpCode::CPUI_LOAD => self.op_load_ir(fd, arch, op),
            OpCode::CPUI_STORE => self.op_store_ir(fd, arch, op),
            // ZPULL (printc.cc:1294 opZpullOp) / SPULL (printc.cc:1320 opSpullOp):
            // a bitfield read.  Both render `ptr->field` / `symbol.field` via the
            // shared `op_pull_ir`, falling back to `ZPULL(...)`/`SPULL(...)` when
            // the structure/bitfield can't be recovered.
            OpCode::CPUI_ZPULL | OpCode::CPUI_SPULL => self.op_pull_ir(fd, arch, op),
            // BOOL_NEGATE (printc.cc:834 opBoolNegate): the `!x` unary, with the
            // double-negation cancellation (`negatetoken`) and the
            // flip-the-next-operator optimization (`checkPrintNegation`).
            OpCode::CPUI_BOOL_NEGATE => self.op_bool_negate_ir(fd, arch, op),
            // SUBPIECE (printc.cc:863 opSubpiece): a field-extraction special-print
            // (`symbol.field`) or the cast/functional dispatch.
            OpCode::CPUI_SUBPIECE
                if self.rt_ctx.go_pair_types.is_some()
                    && self.push_go_pair_extract(fd, arch, op) => {}
            OpCode::CPUI_SUBPIECE => self.op_subpiece_ir(fd, arch, op, read_op),
            OpCode::CPUI_PIECE
                if self.rt_ctx.go_pair_types.is_some() && self.push_go_pair_piece(fd, arch, op) => {
            }
            OpCode::CPUI_PIECE if self.op_partial_concat_ir(fd, arch, op) => {}
            // SEGMENTOP (printc.cc:1169 opSegmentOp): only the near pointer in
            // slot 2 prints; slot 0 is the space and slot 1 the segment.
            OpCode::CPUI_SEGMENTOP => {
                if let Some(vn) = fd.obank().get(op).and_then(|o| o.get_in(2)) {
                    self.push_vn_ir(fd, arch, vn, op);
                }
            }
            // PTRADD (printc.cc:900 opPtradd) / PTRSUB (printc.cc:953 opPtrsub).
            OpCode::CPUI_PTRADD => self.op_ptradd_ir(fd, arch, op),
            OpCode::CPUI_PTRSUB => self.op_ptrsub_ir(fd, arch, op),
            // CALL / CALLIND (printc.cc:613 opCall / 657 opCallind): the functional
            // `callee(arg1, arg2, ...)` form over the recovered call inputs.
            OpCode::CPUI_CALL | OpCode::CPUI_CALLIND => {
                self.op_call_ir(fd, arch, op);
            }
            // CALLOTHER (printc.cc:693 opCallother): a user p-code op.  The display
            // class (`userop->getDisplay()`) chooses the form: functional
            // `name(arg,...)` for a black-box op, `display_string` for the
            // internal-string builtin, or the no-operator/annotation forms.
            OpCode::CPUI_CALLOTHER => self.op_callother_ir(fd, arch, op),
            OpCode::CPUI_CPOOLREF => self.op_cpoolref_ir(fd, arch, op),
            OpCode::CPUI_NEW => self.op_new_ir(fd, arch, op),
            // FLOAT_INT2FLOAT (printc.cc:850 opFloatInt2Float): the int->float
            // conversion renders as a `(floatN)input` cast (NOT a functional
            // `FLOAT_INT2FLOAT(input)`), absorbing an implied INT_ZEXT on its
            // input so the widened source prints once.
            OpCode::CPUI_FLOAT_INT2FLOAT => self.op_float_int2float_ir(fd, arch, op),
            // MULTIEQUAL / INDIRECT: no-op (printc.hh:337-338 opMultiequal/
            // opIndirect) — copy markers, never printed as an operator.  The
            // phi's value is whatever its (single, post-merge) instance reads.
            OpCode::CPUI_MULTIEQUAL | OpCode::CPUI_INDIRECT => {
                // Push in0 so the assignment has a RHS (degenerate phi rendering;
                // faithful multi-instance phi rendering is the merge layer).
                if let Some(vn) = fd.obank().get(op).and_then(|o| o.get_in(0)) {
                    self.push_vn_ir(fd, arch, vn, op);
                }
            }
            _ => {
                // Table-driven binary / unary / functional forms.
                match op_emit_kind(opc) {
                    OpEmitKind::Binary(tok) => {
                        let tok = self.lang_token(tok);
                        self.op_binary_ir(fd, arch, tok, op)
                    }
                    OpEmitKind::Unary(tok) => {
                        let tok = self.lang_token(tok);
                        self.op_unary_ir(fd, arch, tok, op)
                    }
                    // opTypeCast (printc.cc:468): the C cast-notation `(type)operand`
                    // form.  CPUI_CAST / CPUI_FLOAT_FLOAT2FLOAT / CPUI_FLOAT_TRUNC
                    // all reduce to opTypeCast (printc.hh:332-341) — they render as
                    // a parenthesized type cast, not a functional `OPC(args)`.
                    OpEmitKind::TypeCast if opc == OpCode::CPUI_FLOAT_FLOAT2FLOAT => {
                        if self.op_float_quiet_ir(fd, arch, op) {
                            return;
                        }
                        let implied = self.float_widening_is_c_promoted(fd, arch, op, read_op);
                        self.op_type_cast_ir_with(fd, arch, op, implied)
                    }
                    OpEmitKind::TypeCast if opc == OpCode::CPUI_CAST => {
                        if self.float_widening_is_c_promoted(fd, arch, op, read_op) {
                            self.op_type_cast_ir_with(fd, arch, op, true);
                        } else if self.widen_drops(fd, arch, op, read_op) {
                            self.op_hidden_func_ir(fd, arch, op);
                        } else {
                            let implied = self.implied_cast_drops(fd, arch, op, read_op);
                            self.op_type_cast_ir_with(fd, arch, op, implied)
                        }
                    }
                    OpEmitKind::TypeCast => self.op_type_cast_ir(fd, arch, op),
                    OpEmitKind::Func | OpEmitKind::Custom => {
                        // opFunc / hand-written: the functional `OPC(args)` form.
                        // (The userop name resolution for true user p-code ops is
                        // a separate layer.)
                        self.op_func_ir(fd, arch, op);
                    }
                }
            }
        }
    }

    /// C++ `PrintLanguage::opBinary` over the IR (printlanguage.cc:553).  Pushes
    /// the operator then resolves both operand Varnodes.  The negate-token flip
    /// (the `negatetoken` mod) is honoured.
    pub(super) fn op_binary_ir(
        &mut self,
        fd: &Funcdata,
        arch: &Architecture,
        tok: &'static OpToken,
        op: OpId,
    ) {
        if self.out_lang == crate::lang::OutLang::C && !self.context.is_set(modifiers::NEGATETOKEN)
        {
            if let Some(plan) = crate::armregistershift::plan_arm_register_lsl(fd, arch, op) {
                self.emit_arm_register_lsl(fd, arch, op, plan);
                return;
            }
            if let Some(plan) = self.widened_add_plan(fd, arch, op) {
                if let Some(ty) = &plan.signed {
                    self.push_cast_open(ty, op);
                }
                self.push_op(tok, Some(op_key(op)));
                self.push_cast_open(&plan.unsigned, op);
                self.push_vn_ir(fd, arch, plan.lhs, op);
                self.push_cast_close(&plan.unsigned);
                self.push_vn_ir(fd, arch, plan.rhs, op);
                if let Some(ty) = &plan.signed {
                    self.push_cast_close(ty);
                }
                return;
            }
            if tok.print1 == "<<"
                && let Some(plan) = crate::armconstantshift::plan_arm_constant_lsl(fd, arch, op)
                    .or_else(|| self.fixed64_shift_plan(fd, arch, op))
            {
                self.emit_constant_lsl(fd, arch, op, plan);
                return;
            }
        }
        let tok = if self.context.is_set(modifiers::NEGATETOKEN) {
            self.context.unset_mod(modifiers::NEGATETOKEN);
            token_negate(tok).unwrap_or(tok)
        } else {
            tok
        };
        if self.out_lang == crate::lang::OutLang::Go && self.op_go_binary(fd, arch, tok, op) {
            return;
        }
        if self.out_lang == crate::lang::OutLang::Rust && !self.options.nocasts {
            if self.op_rust_wrapping(fd, arch, op) {
                return;
            }
            if self.op_rust_integer_binary(fd, arch, tok, op) {
                return;
            }
            if let Some(plan) = crate::rustsigned::plan(fd, op) {
                self.emit_rust_signed_text(fd, arch, tok, op, plan);
                return;
            }
        }
        // (unlace truthycond, DIV-37) A comparison consumed as a boolean: after
        // the negate-token flip has settled which comparison actually prints,
        // `x != 0` renders as `x` and `x == 0` as `!x`.  The surviving operand
        // keeps CONDITION_CONTEXT (so `(a != 0) != 0` collapses fully); the
        // non-normalized comparison clears it (its operands are values).
        if self.context.is_set(modifiers::CONDITION_CONTEXT)
            && (tok.print1 == "==" || tok.print1 == "!=")
        {
            self.context.unset_mod(modifiers::CONDITION_CONTEXT);
            // (unlace outlang) truthycond (DIV-37) renders `x != 0` as `x`, which is
            // not a condition in a language without implicit bool conversion.
            if self.options.truthy_cond
                && self.lang().caps.implicit_bool_conditions
                && let Some(other) = self.truthy_other_operand(fd, op)
            {
                if tok.print1 == "==" {
                    self.push_op(&tokens::BOOLEAN_NOT, Some(op_key(op)));
                }
                self.context.push_mod();
                self.context.set_mod(modifiers::CONDITION_CONTEXT);
                self.push_vn_ir(fd, arch, other, op);
                self.context.pop_mod();
                return;
            }
        }
        // (unlace `constright`) `c < x` prints as `x > c`.
        let mirror = (self.out_lang == crate::lang::OutLang::C
            && arch.unlace_options.get::<crate::constright::ConstRight>().0
            && crate::constright::mirrors(fd, op))
        .then(|| token_mirror(tok))
        .flatten();
        let mirrored = mirror.is_some();
        let tok = mirror.unwrap_or(tok);
        self.push_op(tok, Some(op_key(op)));
        // (unlace truthycond) `&&`/`||` operands are boolean contexts themselves
        // (this is semantics-preserving even in value position: both sides of
        // the equivalence yield the same 0/1).
        let boolean_operands = tok.print1 == "&&" || tok.print1 == "||";
        // C++ pushes in1 then in0 onto the LIFO nodepend; resolving directly,
        // push in0 then in1 so the operands print in0 <op> in1.
        let slots = if mirrored { [1, 0] } else { [0, 1] };
        for slot in slots {
            if let Some(v) = fd.obank().get(op).and_then(|o| o.get_in(slot)) {
                if boolean_operands {
                    self.context.push_mod();
                    self.context.set_mod(modifiers::CONDITION_CONTEXT);
                    self.push_vn_ir(fd, arch, v, op);
                    self.context.pop_mod();
                } else {
                    self.push_vn_ir(fd, arch, v, op);
                }
            }
        }
    }

    pub(super) fn emit_rust_signed_text(
        &mut self,
        fd: &Funcdata,
        arch: &Architecture,
        tok: &'static OpToken,
        op: OpId,
        plan: crate::rustsigned::SignedTextPlan,
    ) {
        if let Some(output) = &plan.output {
            self.push_cast_open(output, op);
        }
        self.push_op(tok, Some(op_key(op)));
        for ((input, cast), constant_type) in plan
            .inputs
            .into_iter()
            .zip(plan.casts)
            .zip(plan.constant_types)
        {
            if cast.is_some() {
                self.push_op(self.lang().tok_typecast, Some(op_key(op)));
            }
            if let Some(ty) = &constant_type {
                self.push_cast_open(ty, op);
            }
            self.push_vn_ir(fd, arch, input, op);
            if let Some(ty) = &constant_type {
                self.push_cast_close(ty);
            }
            if let Some(name) = cast {
                self.push_atom(&Atom::syntax(
                    name,
                    TagType::TypeToken,
                    crate::printlanguage::SyntaxHighlight::type_color,
                ));
            }
        }
        if let Some(output) = &plan.output {
            self.push_cast_close(output);
        }
    }

    /// (unlace `selectmul`) Emit `a * zext(c) + b * zext(!c)` as `c ? a : b`; the
    /// condition is a boolean context, so `x != 0` prints truthy.
    pub(super) fn op_select_ir(
        &mut self,
        fd: &Funcdata,
        arch: &Architecture,
        op: OpId,
        plan: crate::selectmul::SelectPlan,
    ) {
        self.push_op(&tokens::CONDITIONAL, Some(op_key(op)));
        self.context.push_mod();
        self.context.set_mod(modifiers::CONDITION_CONTEXT);
        self.push_vn_ir(fd, arch, plan.cond.0, plan.cond.1);
        self.context.pop_mod();
        self.push_vn_ir(fd, arch, plan.yes.0, plan.yes.1);
        self.push_vn_ir(fd, arch, plan.no.0, plan.no.1);
    }

    /// Emit a planned ARM LSL as a guarded C shift. The unsigned shift avoids
    /// signed-left-shift UB; signed conditional arms preserve later signed
    /// comparisons and arithmetic shifts.
    pub(super) fn emit_arm_register_lsl(
        &mut self,
        fd: &Funcdata,
        arch: &Architecture,
        op: OpId,
        plan: crate::armregistershift::ArmRegisterLslPlan,
    ) {
        use crate::printlanguage::SyntaxHighlight;
        let crate::armregistershift::ArmRegisterLslPlan {
            lhs,
            count,
            lhs_type,
            count_type,
            signed_result_type,
            guarded,
        } = plan;
        if !guarded {
            self.emit_constant_lsl(
                fd,
                arch,
                op,
                crate::constantshift::ConstantLslPlan {
                    lhs,
                    count,
                    unsigned_type: lhs_type,
                    signed_result_type,
                },
            );
            return;
        }
        self.push_op(&tokens::CONDITIONAL, Some(op_key(op)));
        self.push_op(&tokens::LESS_THAN, Some(op_key(op)));
        self.push_cast_open(&count_type, op);
        self.push_vn_ir(fd, arch, count, op);
        self.push_cast_close(&count_type);
        self.push_atom(&Atom::syntax(
            "32u",
            TagType::Syntax,
            SyntaxHighlight::const_color,
        ));
        if let Some(result_type) = &signed_result_type {
            self.push_cast_open(result_type, op);
        }
        self.push_op(&tokens::SHIFT_LEFT, Some(op_key(op)));
        self.push_cast_open(&lhs_type, op);
        self.push_vn_ir(fd, arch, lhs, op);
        self.push_cast_close(&lhs_type);
        self.push_vn_ir(fd, arch, count, op);
        if let Some(result_type) = &signed_result_type {
            self.push_cast_close(result_type);
            self.push_atom(&Atom::syntax(
                "0",
                TagType::Syntax,
                SyntaxHighlight::const_color,
            ));
        } else {
            self.push_atom(&Atom::syntax(
                "0u",
                TagType::Syntax,
                SyntaxHighlight::const_color,
            ));
        }
    }

    pub(super) fn printed_operand_type(
        &self,
        fd: &Funcdata,
        vn: VarnodeId,
        op: OpId,
    ) -> std::rc::Rc<crate::dtype::Datatype> {
        fd.vbank()
            .get(vn)
            .and_then(|v| (!v.is_implied()).then_some(v.get_high()).flatten())
            .and_then(|high| self.declared_local(high))
            .and_then(|local| local.ty.clone())
            .or_else(|| declared_variable_type(fd, vn))
            .unwrap_or_else(|| fd.vn_type_read_facing(vn, op))
    }

    pub(super) fn fixed64_shift_plan(
        &self,
        fd: &Funcdata,
        arch: &Architecture,
        op: OpId,
    ) -> Option<crate::constantshift::ConstantLslPlan> {
        crate::constantshift::plan_fixed64_lsl(fd, arch, op, |vn| {
            self.printed_operand_type(fd, vn, op)
        })
    }

    pub(super) fn widened_add_plan(
        &self,
        fd: &Funcdata,
        arch: &Architecture,
        op: OpId,
    ) -> Option<crate::widenedadd::WidenedAddPlan> {
        crate::widenedadd::plan(fd, arch, op, |vn| self.printed_operand_type(fd, vn, op))
    }

    /// Emit each fixed-shift operand once, converting the shiftee before LSL.
    pub(super) fn emit_constant_lsl(
        &mut self,
        fd: &Funcdata,
        arch: &Architecture,
        op: OpId,
        plan: crate::constantshift::ConstantLslPlan,
    ) {
        if let Some(result_type) = &plan.signed_result_type {
            self.push_cast_open(result_type, op);
        }
        self.push_op(&tokens::SHIFT_LEFT, Some(op_key(op)));
        self.push_cast_open(&plan.unsigned_type, op);
        self.push_vn_ir(fd, arch, plan.lhs, op);
        self.push_cast_close(&plan.unsigned_type);
        self.push_vn_ir(fd, arch, plan.count, op);
        if let Some(result_type) = &plan.signed_result_type {
            self.push_cast_close(result_type);
        }
    }

    /// (unlace truthycond, DIV-37) For an INT_EQUAL/INT_NOTEQUAL comparison with
    /// exactly one zero operand eligible for truthy rendering, return the OTHER
    /// operand.  A zero is eligible when it is a plain constant 0 (directly, or
    /// through one implied CAST — the casted null-pointer shape) whose
    /// read-facing type is not a float or an enum and which carries no
    /// equate/display override.
    pub(super) fn truthy_other_operand(&self, fd: &Funcdata, op: OpId) -> Option<VarnodeId> {
        let o = fd.obank().get(op)?;
        if !matches!(o.code(), OpCode::CPUI_INT_EQUAL | OpCode::CPUI_INT_NOTEQUAL) {
            return None;
        }
        let (a, b) = (o.get_in(0)?, o.get_in(1)?);
        let za = self.is_truthy_zero(fd, a, op);
        let zb = self.is_truthy_zero(fd, b, op);
        match (za, zb) {
            (true, false) => Some(b),
            (false, true) => Some(a),
            _ => None,
        }
    }

    /// Whether `vn` is a zero constant eligible for truthy elision (see
    /// [`truthy_other_operand`](Self::truthy_other_operand)).
    pub(super) fn is_truthy_zero(&self, fd: &Funcdata, vn: VarnodeId, op: OpId) -> bool {
        let eligible_const = |fd: &Funcdata, cvn: VarnodeId, read_op: OpId| -> bool {
            let v = match fd.vbank().get(cvn) {
                Some(v) => v,
                None => return false,
            };
            if !v.is_constant() || v.get_offset() != 0 {
                return false;
            }
            let ct = fd.vn_type_read_facing(cvn, read_op);
            if ct.get_metatype() == crate::dtype::type_metatype::TYPE_FLOAT {
                return false;
            }
            if ct.is_enum_type() {
                return false;
            }
            // An equate symbol names this zero; keep the name visible.
            fd.vn_high_display_format(cvn) == 0
        };
        let v = match fd.vbank().get(vn) {
            Some(v) => v,
            None => return false,
        };
        if v.is_constant() {
            return eligible_const(fd, vn, op);
        }
        // Look through ONE implied CAST (the `(char *)0x0` shape when a real
        // CAST op was inserted rather than the constant being retyped).
        if v.is_implied()
            && v.is_written()
            && let Some(def) = v.get_def()
            && fd.obank().get(def).map(|o| o.code()) == Some(OpCode::CPUI_CAST)
            && let Some(inner) = fd.obank().get(def).and_then(|o| o.get_in(0))
        {
            return eligible_const(fd, inner, def);
        }
        false
    }

    /// C++ `PrintLanguage::opUnary` over the IR (printlanguage.cc:573).
    pub(super) fn op_unary_ir(
        &mut self,
        fd: &Funcdata,
        arch: &Architecture,
        tok: &'static OpToken,
        op: OpId,
    ) {
        if self.out_lang == crate::lang::OutLang::Rust
            && !self.options.nocasts
            && self.op_rust_wrapping(fd, arch, op)
        {
            return;
        }
        self.push_op(tok, Some(op_key(op)));
        if let Some(v0) = fd.obank().get(op).and_then(|o| o.get_in(0)) {
            self.push_vn_ir(fd, arch, v0, op);
        }
    }

    /// C++ `PrintC::checkPrintNegation` (printc.cc:2464): can the value `vn` be
    /// rendered with its *next* operator flipped (so the `!` is absorbed into a
    /// comparison) instead of emitting an explicit `!`?  True when `vn` is an
    /// implied, written value whose defining op-code has a boolean-flip complement
    /// (`get_booleanflip` != `CPUI_MAX`).
    pub(super) fn check_print_negation(&self, fd: &Funcdata, vn: VarnodeId) -> bool {
        let v = match fd.vbank().get(vn) {
            Some(v) => v,
            None => return false,
        };
        if !v.is_implied() {
            return false;
        }
        if !v.is_written() {
            return false;
        }
        let def = match v.get_def() {
            Some(d) => d,
            None => return false,
        };
        let code = match fd.obank().get(def) {
            Some(o) => o.code(),
            None => return false,
        };
        let mut reorder = false;
        unlace_num::opcodes::get_booleanflip(code, &mut reorder) != OpCode::CPUI_MAX
    }

    /// C++ `PrintC::opBoolNegate` (printc.cc:834): print the `!x` boolean negate,
    /// but check for opportunities to flip the next operator instead.
    ///   - If we are negated by a previous BOOL_NEGATE (`negatetoken` is set),
    ///     consume that mod and print our input unmodified (double negation cancels).
    ///   - Else if the input's next operator can be flipped, don't print `!`; print
    ///     the input with `negatetoken` set so its comparison renders its complement.
    ///   - Otherwise print `!` followed by our input.
    pub(super) fn op_bool_negate_ir(&mut self, fd: &Funcdata, arch: &Architecture, op: OpId) {
        let in0 = fd.obank().get(op).and_then(|o| o.get_in(0));
        // (unlace truthycond, DIV-37) Whether the operand may render truthy
        // depends on the arm: when the `!` is PRINTED (arm 3), the printed
        // operator re-booleanizes the value, so its operand is always a
        // boolean context.  When the `!` is ABSORBED (arm 2's negate-token
        // flip) or CANCELLED (arm 1's double negation), no boolean operator
        // remains in the render — eliding a zero-compare there would change
        // the VALUE (`v = !(x == 0)` must stay `v = x != 0`, never `v = x`) —
        // so those arms only propagate a bit that a genuine boolean consumer
        // (CBRANCH / `&&` / `||` / a printed `!`) already established.
        let entry_cond = self.context.is_set(modifiers::CONDITION_CONTEXT);
        if self.context.is_set(modifiers::NEGATETOKEN) {
            // Negated by a previous BOOL_NEGATE: consume the mod, print input as-is.
            self.context.unset_mod(modifiers::NEGATETOKEN);
            self.context.push_mod();
            if entry_cond {
                self.context.set_mod(modifiers::CONDITION_CONTEXT);
            }
            if let Some(vn) = in0 {
                self.push_vn_ir(fd, arch, vn, op);
            }
            self.context.pop_mod();
        } else if in0
            .map(|vn| self.check_print_negation(fd, vn))
            .unwrap_or(false)
        {
            // The next operator can be flipped: print the input with `negatetoken`
            // active (C++ `pushVn(in0, op, mods|negatetoken)`).
            self.context.push_mod();
            self.context.set_mod(modifiers::NEGATETOKEN);
            if entry_cond {
                self.context.set_mod(modifiers::CONDITION_CONTEXT);
            }
            if let Some(vn) = in0 {
                self.push_vn_ir(fd, arch, vn, op);
            }
            self.context.pop_mod();
        } else {
            // Otherwise print ourselves: `!` then the input.
            self.push_op(&tokens::BOOLEAN_NOT, Some(op_key(op)));
            self.context.push_mod();
            self.context.set_mod(modifiers::CONDITION_CONTEXT);
            if let Some(vn) = in0 {
                self.push_vn_ir(fd, arch, vn, op);
            }
            self.context.pop_mod();
        }
    }

    pub(super) fn op_partial_concat_ir(
        &mut self,
        fd: &Funcdata,
        arch: &Architecture,
        op: OpId,
    ) -> bool {
        use crate::dtype::TypeFactory;
        if self.out_lang != crate::lang::OutLang::C {
            return false;
        }
        let Some(plan) = crate::partialconcat::preserved_prefix(fd, op) else {
            return false;
        };
        let types = arch.types_rc();
        let Ok(ty) = types.get_base(plan.size, crate::dtype::type_metatype::TYPE_UINT) else {
            return false;
        };
        self.push_op(&tokens::BITWISE_OR, Some(op_key(op)));
        for (vn, mask) in [(plan.source, plan.high_mask), (plan.low, plan.low_mask)] {
            self.push_op(&tokens::BITWISE_AND, Some(op_key(op)));
            self.push_cast_open(&ty, op);
            self.push_vn_ir(fd, arch, vn, op);
            self.push_cast_close(&ty);
            self.push_atom(&Atom::syntax(
                format!("0x{mask:x}"),
                TagType::Syntax,
                crate::printlanguage::SyntaxHighlight::const_color,
            ));
        }
        true
    }

    /// C++ `PrintC::opFunc` (printc.cc:444) — a functional `name(arg0,arg1,...)`
    /// form.  Pushes `function_call`, the (un-highlighted) operator name, an
    /// `(numInput-1)`-deep comma chain, then the operands.  The function name is
    /// the opcode's operator name (the full type/userop name resolution is the
    /// next layer).
    pub(super) fn op_func_ir(&mut self, fd: &Funcdata, arch: &Architecture, op: OpId) {
        let opc = fd.obank().get(op).expect("op_func_ir: stale op").code();
        if opc == OpCode::CPUI_FLOAT_NAN
            && self.out_lang == crate::lang::OutLang::Go
            && self.op_go_float_nan(fd, arch, op)
        {
            return;
        }
        let name = func_operator_name(fd, op, opc);
        self.push_op(&tokens::FUNCTION_CALL, Some(op_key(op)));
        // The name is pushed as an *operator* token (C++ `optoken`, no_color).
        self.push_atom(&Atom::with_op(
            name,
            TagType::OpToken,
            crate::printlanguage::SyntaxHighlight::no_color,
            op_key(op),
        ));
        let nin = fd.obank().get(op).map(|o| o.num_input()).unwrap_or(0);
        if nin > 0 {
            // (numInput-1) comma operators glue the argument list.
            for _ in 0..(nin - 1) {
                self.push_op(&tokens::COMMA, Some(op_key(op)));
            }
            // C++ pushes args in reverse onto the LIFO queue; resolving directly
            // (the comma chain nests right), push in forward order.
            for i in 0..nin {
                if let Some(vn) = fd.obank().get(op).and_then(|o| o.get_in(i)) {
                    self.push_vn_ir(fd, arch, vn, op);
                }
            }
        } else {
            // Empty token for void (C++ blanktoken).
            self.push_atom(&Atom::syntax(
                "",
                TagType::BlankToken,
                crate::printlanguage::SyntaxHighlight::no_color,
            ));
        }
    }

    /// (unlace `vaarg`) `va_arg(ap,T)`, `T` the type of the call's output; a
    /// pointer to a `va_list` (an array type) prints `*ap`. `vaargconst builtin` spells it
    /// `__builtin_va_arg`.
    pub(super) fn push_va_arg(&mut self, fd: &Funcdata, arch: &Architecture, op: OpId) -> bool {
        let (Some(ap), Some(out)) = (
            fd.obank().get(op).and_then(|o| o.get_in(1)),
            fd.obank().get(op).and_then(|o| o.get_out()),
        ) else {
            return false;
        };
        let Some(ty) = fd
            .vbank()
            .get(out)
            .map(|v| std::rc::Rc::clone(v.get_type()))
        else {
            return false;
        };
        let sse = fd
            .obank()
            .get(op)
            .and_then(|o| o.get_in(2))
            .and_then(|v| fd.vbank().get(v))
            .is_some_and(|v| v.get_offset() == 1);
        use crate::dtype::type_metatype::{TYPE_PARTIALUNION, TYPE_UNKNOWN};
        let untyped = matches!(ty.get_metatype(), TYPE_UNKNOWN | TYPE_PARTIALUNION);
        let (front, back) = match (untyped, ty.get_size(), sse) {
            (_, 8, true) => ("double".to_string(), String::new()),
            (true, 8, false) => ("long".to_string(), String::new()),
            (true, 4, false) => ("int".to_string(), String::new()),
            _ => type_name_for_decl(&ty, self.rt_ctx.clone()),
        };
        let name = match arch.unlace_options.get::<crate::vaargconst::VaArgConst>() {
            crate::vaargconst::VaArgConst::Builtin => "__builtin_va_arg",
            _ => "va_arg",
        };
        self.push_op(&tokens::FUNCTION_CALL, Some(op_key(op)));
        self.push_atom(&Atom::with_op(
            name.to_string(),
            TagType::OpToken,
            crate::printlanguage::SyntaxHighlight::funcname_color,
            op_key(op),
        ));
        self.push_op(&tokens::COMMA, Some(op_key(op)));
        self.push_va_list(fd, arch, ap, op);
        self.push_atom(&Atom::syntax(
            format!("{front}{back}"),
            TagType::TypeToken,
            crate::printlanguage::SyntaxHighlight::type_color,
        ));
        true
    }

    /// (unlace `vaarg`) The `va_list` of a `va_arg`/`va_start` call: `ap` for the
    /// constant that stands for a promoted local one, `*ap` through a pointer
    /// to a `va_list` (an array type).
    pub(super) fn push_va_list(
        &mut self,
        fd: &Funcdata,
        arch: &Architecture,
        ap: VarnodeId,
        op: OpId,
    ) {
        if fd.vbank().get(ap).is_some_and(|v| v.is_constant()) {
            self.push_atom(&Atom::with_op(
                "ap".to_string(),
                TagType::VarToken,
                crate::printlanguage::SyntaxHighlight::var_color,
                op_key(op),
            ));
            return;
        }
        let to_array = fd
            .vbank()
            .get(ap)
            .and_then(|v| v.get_type().get_ptr_to())
            .is_some_and(|t| t.get_metatype() == crate::dtype::type_metatype::TYPE_ARRAY);
        if to_array {
            self.push_op(&tokens::DEREFERENCE, Some(op_key(op)));
        }
        self.push_vn_ir(fd, arch, ap, op);
    }

    /// (unlace `vaarg`) `va_start(ap,last)` for the `va_start` of a promoted
    /// local `va_list`.
    pub(super) fn push_va_start(&mut self, fd: &Funcdata, arch: &Architecture, op: OpId) -> bool {
        let Some(o) = fd.obank().get(op) else {
            return false;
        };
        let (Some(ap), last) = (o.get_in(1), o.get_in(2)) else {
            return false;
        };
        if !fd.vbank().get(ap).is_some_and(|v| v.is_constant()) {
            return false;
        }
        self.push_op(&tokens::FUNCTION_CALL, Some(op_key(op)));
        self.push_atom(&Atom::with_op(
            "va_start".to_string(),
            TagType::OpToken,
            crate::printlanguage::SyntaxHighlight::funcname_color,
            op_key(op),
        ));
        match last {
            Some(last) => {
                self.push_op(&tokens::COMMA, Some(op_key(op)));
                self.push_va_list(fd, arch, ap, op);
                self.push_vn_ir(fd, arch, last, op);
            }
            None => self.push_va_list(fd, arch, ap, op),
        }
        true
    }

    /// (unlace `acleintrinsics`) Render a user op under its ACLE spelling.
    pub(super) fn push_acle_intrinsic(
        &mut self,
        fd: &Funcdata,
        arch: &Architecture,
        op: OpId,
        call: &crate::acleintrinsics::Intrinsic,
    ) {
        use crate::acleintrinsics::Arg;
        self.push_op(&tokens::FUNCTION_CALL, Some(op_key(op)));
        self.push_atom(&Atom::with_op(
            call.name.to_string(),
            TagType::OpToken,
            crate::printlanguage::SyntaxHighlight::funcname_color,
            op_key(op),
        ));
        if call.args.is_empty() {
            self.push_atom(&Atom::syntax(
                "",
                TagType::BlankToken,
                crate::printlanguage::SyntaxHighlight::no_color,
            ));
            return;
        }
        for _ in 1..call.args.len() {
            self.push_op(&tokens::COMMA, Some(op_key(op)));
        }
        for arg in &call.args {
            match *arg {
                Arg::Vn(vn) => self.push_vn_ir(fd, arch, vn, op),
                Arg::Dec(val) => {
                    self.push_constant_ir_fmt_sign(val, 4, op, display_format::FORCE_DEC, false)
                }
            }
        }
    }

    /// (unlace `evmstorage`) Print an EVM `sload`/`sstore` user op as a storage access:
    /// `storage[0x0]` for a constant slot, `mapping(v5)` for a slot a KECCAK256 computed and
    /// `storage(v3)` for any other slot. A store prints as an assignment.
    pub(super) fn op_evm_storage_ir(
        &mut self,
        fd: &Funcdata,
        arch: &Architecture,
        op: OpId,
        access: crate::evmstorage::StorageAccess,
    ) {
        if access.store {
            self.push_op(&tokens::ASSIGNMENT, Some(op_key(op)));
        }
        if let Some(slot) = access.constant {
            self.push_atom(&Atom::with_op(
                format!("storage[0x{slot:x}]"),
                TagType::OpToken,
                crate::printlanguage::SyntaxHighlight::funcname_color,
                op_key(op),
            ));
        } else {
            let name = if access.hashed { "mapping" } else { "storage" };
            self.push_op(&tokens::FUNCTION_CALL, Some(op_key(op)));
            self.push_atom(&Atom::with_op(
                name.to_string(),
                TagType::OpToken,
                crate::printlanguage::SyntaxHighlight::funcname_color,
                op_key(op),
            ));
            self.push_vn_ir(fd, arch, access.slot, op);
        }
        if let Some(value) = access.value {
            self.push_vn_ir(fd, arch, value, op);
        }
    }

    /// C++ `PrintC::opCallother` (printc.cc:693): render a CALLOTHER (user
    /// p-code op).  The op's in0 constant indexes a `UserPcodeOp` whose
    /// `getDisplay()` selects the form:
    ///   * `0` (functional): `name(arg1, arg2, ...)` over inputs 1..n-1, with the
    ///     name resolved through the userop table (`getOperatorName`).
    ///   * `annotation_assignment`: `in1 = in2`.
    ///   * `no_operator`: just `in1`.
    ///   * `display_string`: the output Varnode rendered as a quoted string
    ///     literal (the internal-string builtin), via `printCharacterConstant` on
    ///     the hash-keyed constant address in in1.
    pub(super) fn op_callother_ir(&mut self, fd: &Funcdata, arch: &Architecture, op: OpId) {
        use crate::userop::userop_flags;
        let in0_off = match fd.obank().get(op).and_then(|o| o.get_in(0)) {
            Some(v) => fd.vbank().get(v).map(|vn| vn.get_offset()).unwrap_or(0),
            None => 0,
        };
        let rust = self.out_lang == crate::lang::OutLang::Rust;
        let userop = if rust {
            u32::try_from(in0_off)
                .ok()
                .and_then(|index| arch.userops.get_op(index))
        } else {
            arch.userops.get_op(in0_off as u32)
        };
        let display = userop.map_or(0, |op| op.get_display());
        let nin = fd.obank().get(op).map(|o| o.num_input()).unwrap_or(0);
        if self.is_java_throw(fd, op) {
            self.push_op(&crate::langjava::THROW, Some(op_key(op)));
            if let Some(vn) = fd.obank().get(op).and_then(|o| o.get_in(1)) {
                self.push_vn_ir(fd, arch, vn, op);
            }
            return;
        }
        if in0_off == crate::userop::BUILTIN_VAARG as u64
            && nin == 3
            && self.push_va_arg(fd, arch, op)
        {
            return;
        }
        if in0_off == crate::userop::BUILTIN_VA_START as u64 && self.push_va_start(fd, arch, op) {
            return;
        }
        if self.out_lang == crate::lang::OutLang::C
            && arch.unlace_options.get::<crate::evmstorage::EvmStorage>().0
            && let Some(name) = userop.map(|u| u.get_name())
        {
            let keccak = |index: u64| {
                arch.userops
                    .get_op(index as u32)
                    .is_some_and(|u| u.get_name() == &b"keccak256"[..])
            };
            if let Some(access) = crate::evmstorage::access(fd, op, name, keccak) {
                self.op_evm_storage_ir(fd, arch, op, access);
                return;
            }
        }
        if display == 0 {
            let named = userop
                .and_then(|u| syscall_spelling(fd, arch, op, u.get_name()))
                .or_else(|| userop.and_then(|u| neon_spelling(fd, arch, op, u.get_name())));
            if let Some((name, args)) = named {
                self.push_op(&tokens::FUNCTION_CALL, Some(op_key(op)));
                self.push_atom(&Atom::with_op(
                    name,
                    TagType::OpToken,
                    crate::printlanguage::SyntaxHighlight::funcname_color,
                    op_key(op),
                ));
                if args.is_empty() {
                    self.push_atom(&Atom::syntax(
                        "",
                        TagType::BlankToken,
                        crate::printlanguage::SyntaxHighlight::no_color,
                    ));
                } else {
                    for _ in 1..args.len() {
                        self.push_op(&tokens::COMMA, Some(op_key(op)));
                    }
                    for vn in args {
                        self.push_vn_ir(fd, arch, vn, op);
                    }
                }
                return;
            }
            let acle = userop
                .and_then(|u| crate::acleintrinsics::intrinsic(fd, arch, op, u.get_name()))
                .or_else(|| {
                    userop.and_then(|u| {
                        crate::barrierintrinsics::intrinsic(fd, arch, op, u.get_name())
                    })
                });
            if let Some(call) = acle {
                self.push_acle_intrinsic(fd, arch, op, &call);
                return;
            }
            let mut nm = match (rust, userop) {
                (true, op) => crate::rustuserop::operator_name(op.map(|u| u.get_name()), in0_off),
                (false, Some(op)) => String::from_utf8_lossy(op.get_name()).into_owned(),
                (false, None) => format!("CALLOTHER[{:#x}]", in0_off),
            };
            let mut order: Vec<int4> = (1..nin).collect();
            if arch.unlace_options.get::<crate::printc::AvxIntrinsics>().0 {
                let size = fd
                    .obank()
                    .get(op)
                    .and_then(|o| o.get_out().or_else(|| o.get_in(1)))
                    .and_then(|v| fd.vbank().get(v))
                    .map(|v| v.get_size())
                    .unwrap_or(0);
                let src = (nin >= 2)
                    .then(|| fd.obank().get(op).and_then(|o| o.get_in(nin - 1)))
                    .flatten()
                    .and_then(|v| fd.vbank().get(v))
                    .map(|v| v.get_size())
                    .unwrap_or(0);
                if let Some((intr, args)) = crate::avxintrin::intrinsic_sized(&nm, size, src)
                    && args.len() == order.len()
                {
                    nm = intr;
                    order = args.iter().map(|&a| a as int4 + 1).collect();
                }
            }
            self.push_op(&tokens::FUNCTION_CALL, Some(op_key(op)));
            self.push_atom(&Atom::with_op(
                nm,
                TagType::OpToken,
                crate::printlanguage::SyntaxHighlight::funcname_color,
                op_key(op),
            ));
            if nin > 1 {
                // (numInput-2) comma operators glue args 1..numInput-1.
                for _ in 1..(nin - 1) {
                    self.push_op(&tokens::COMMA, Some(op_key(op)));
                }
                for &i in &order {
                    if let Some(vn) = fd.obank().get(op).and_then(|o| o.get_in(i)) {
                        // (unlace kernelbug) a `__WARN(file,line)` line is a decimal.
                        let line = in0_off == crate::userop::BUILTIN_KERNEL_WARN as u64
                            && i == nin - 1
                            && fd
                                .vbank()
                                .get(vn)
                                .is_some_and(|v| v.is_constant() && v.get_size() == 4);
                        if line {
                            let val = fd.vbank().get(vn).map(|v| v.get_offset()).unwrap_or(0);
                            self.push_constant_ir_fmt_sign(
                                val,
                                4,
                                op,
                                display_format::FORCE_DEC,
                                false,
                            );
                        } else {
                            self.push_vn_ir(fd, arch, vn, op);
                        }
                    }
                }
            } else {
                // Empty token for void (C++ blanktoken).
                self.push_atom(&Atom::syntax(
                    "",
                    TagType::BlankToken,
                    crate::printlanguage::SyntaxHighlight::no_color,
                ));
            }
        } else if display == userop_flags::ANNOTATION_ASSIGNMENT {
            // C++ (printc.cc:713): pushOp(assignment); pushVn(in2); pushVn(in1).
            // The C++ pushes onto a LIFO that reverses, so in(1) (the volatile
            // annotation) ends up the LHS and in(2) (the value) the RHS:
            // `NVRAM[20] = 0`.  This direct-recursion engine renders in push
            // order (first push = leftmost), the inverse of the C++ LIFO, so the
            // annotation (in1) is pushed FIRST and the value (in2) second to keep
            // the same `annotation = value` shape (the same inversion op_store_ir
            // applies to its ptr/value pair).
            self.push_op(&tokens::ASSIGNMENT, Some(op_key(op)));
            if let Some(vn) = fd.obank().get(op).and_then(|o| o.get_in(1)) {
                self.push_vn_ir(fd, arch, vn, op);
            }
            if let Some(vn) = fd.obank().get(op).and_then(|o| o.get_in(2)) {
                self.push_vn_ir(fd, arch, vn, op);
            }
        } else if display == userop_flags::NO_OPERATOR {
            if let Some(vn) = fd.obank().get(op).and_then(|o| o.get_in(1)) {
                self.push_vn_ir(fd, arch, vn, op);
            }
        } else if display == userop_flags::DISPLAY_STRING {
            let outvn = fd.obank().get(op).and_then(|o| o.get_out());
            let pointer = outvn
                .and_then(|v| fd.vbank().get(v))
                .map(|v| std::rc::Rc::clone(v.get_type()));
            let mut s = String::new();
            let mut ok = false;
            if let Some(ct) = pointer.as_ref()
                && ct.get_metatype() == crate::dtype::type_metatype::TYPE_PTR
                && let Some(subct) = ct.get_ptr_to()
            {
                // printCharacterConstant(str, op->getIn(1)->getAddr(), subct)
                let in1addr = fd
                    .obank()
                    .get(op)
                    .and_then(|o| o.get_in(1))
                    .and_then(|v| fd.vbank().get(v).map(|vn| vn.get_addr().clone()));
                if let Some(addr) = in1addr {
                    let mut chars_emitted: int4 = 0;
                    if self.print_character_constant(
                        arch,
                        &mut s,
                        &addr,
                        &subct,
                        &mut chars_emitted,
                        false,
                    ) {
                        ok = true;
                    }
                }
            }
            if !ok {
                s.push_str("\"badstring\"");
            } else if self.out_lang == crate::lang::OutLang::Go
                && let Some(pointer) = pointer.as_ref()
            {
                self.push_go_string_pointer(&mut s, pointer, op);
            }
            if let Some(ovn) = outvn {
                self.push_atom(&Atom::with_op_vn(
                    s,
                    TagType::VarToken,
                    crate::printlanguage::SyntaxHighlight::const_color,
                    op_key(op),
                    vn_key(ovn),
                ));
            } else {
                self.push_atom(&Atom::with_op(
                    s,
                    TagType::VarToken,
                    crate::printlanguage::SyntaxHighlight::const_color,
                    op_key(op),
                ));
            }
        }
    }

    /// C++ `PrintC::opFloatInt2Float` (printc.cc:850): the integer→float
    /// conversion prints as a `(floatN)input` type-cast.  The input is the
    /// op's in0, unless that input is an implied `INT_ZEXT` (the C++
    /// `TypeOpFloatInt2Float::absorbZext`), in which case the ZEXT is absorbed
    /// and its source is the input — the zero-extension to the conversion's
    /// source width is implicit in the cast.  The cast's type is the output
    /// varnode's def-facing high type (`getOut()->getHighTypeDefFacing()`).
    /// With `option_nocasts` set the cast is suppressed and only the input
    /// prints.
    pub(super) fn op_float_int2float_ir(&mut self, fd: &Funcdata, arch: &Architecture, op: OpId) {
        let in0 = fd.obank().get(op).and_then(|o| o.get_in(0));
        let vn0 = absorb_zext(fd, op)
            .and_then(|zext| fd.obank().get(zext).and_then(|o| o.get_in(0)))
            .or(in0);
        let cast_ty = if self.options.nocasts {
            None
        } else {
            fd.obank()
                .get(op)
                .and_then(|o| o.get_out())
                .and_then(|out| fd.vbank().get(out).map(|_| fd.vn_type_def_facing(out)))
        };
        if let Some(ct) = &cast_ty {
            self.push_cast_open(ct, op);
        }
        if let Some(vn) = vn0 {
            self.push_vn_ir(fd, arch, vn, op);
        }
        if let Some(ct) = &cast_ty {
            self.push_cast_close(ct);
        }
    }

    /// A pointer stored through a declared member can retain integer address
    /// arithmetic in the IR. Relocate its mapped base without scaling the byte
    /// offset a second time or treating unrelated integers as addresses; a
    /// consuming CAST already spells the pointer type, so it is not repeated.
    pub(super) fn op_named_pointer_add_ir(
        &mut self,
        fd: &Funcdata,
        arch: &Architecture,
        op: OpId,
        reader: Option<OpId>,
    ) -> bool {
        use crate::dtype::type_metatype;
        if !self.options.header_carries_types && !self.options.struct_defs {
            return false;
        }
        let Some(operation) = fd.obank().get(op) else {
            return false;
        };
        let (Some(out), Some(first), Some(second)) = (
            operation.get_out(),
            operation.get_in(0),
            operation.get_in(1),
        ) else {
            return false;
        };
        let (Some(a), Some(b)) = (fd.vbank().get(first), fd.vbank().get(second)) else {
            return false;
        };
        let (constant, delta) = match (a.is_constant(), b.is_constant()) {
            (true, false) => (first, second),
            (false, true) => (second, first),
            _ => return false,
        };
        let pointer_type = |operation: OpId, output: VarnodeId| {
            self.partial_piece_type(fd, arch, output, operation, -1)
                .or_else(|| crate::bitcast::declared_member_type(fd, output))
                .filter(|ty| ty.get_metatype() == type_metatype::TYPE_PTR)
                .or_else(|| {
                    let ty = fd.vn_type_def_facing(output);
                    (ty.get_metatype() == type_metatype::TYPE_PTR).then_some(ty)
                })
        };
        let reader_op = reader
            .and_then(|r| fd.obank().get(r))
            .filter(|r| r.get_in(0) == Some(out));
        let reader_casts = reader_op.is_some_and(|r| r.code() == OpCode::CPUI_CAST);
        let pointer = pointer_type(op, out).or_else(|| {
            let cast = reader_op?;
            matches!(cast.code(), OpCode::CPUI_CAST | OpCode::CPUI_COPY)
                .then(|| pointer_type(reader?, cast.get_out()?))
                .flatten()
        });
        let Some(pointer) = pointer else { return false };
        let size = pointer.get_size();
        if !matches!(size, 4 | 8)
            || size != arch.types().get_size_of_pointer()
            || pointer.get_word_size() != Some(1)
            || fd.vbank().get(out).is_none_or(|v| v.get_size() != size)
        {
            return false;
        }
        let value = fd.vbank().get(constant).unwrap();
        if value.is_annotation()
            || value.get_size() != size
            || fd.vn_type_read_facing(delta, op).get_metatype() == type_metatype::TYPE_PTR
            || !scaled_index(fd, delta, 4)
        {
            return false;
        }
        let Some(base) = self
            .named_globals
            .object_address(fd, arch, value.get_offset())
        else {
            return false;
        };
        let Ok(word) = arch.types().get_base(size, type_metatype::TYPE_UINT) else {
            return false;
        };
        if !reader_casts {
            self.push_cast_open(&pointer, op);
        }
        self.push_op(&tokens::BINARY_PLUS, Some(op_key(op)));
        self.push_cast_open(&word, op);
        self.push_atom(&Atom::with_op_vn(
            base,
            TagType::VarToken,
            crate::printlanguage::SyntaxHighlight::var_color,
            op_key(op),
            vn_key(constant),
        ));
        self.push_cast_close(&word);
        self.push_vn_ir(fd, arch, delta, op);
        if !reader_casts {
            self.push_cast_close(&pointer);
        }
        true
    }

    pub(super) fn op_aggregate_transfer_ir(
        &mut self,
        fd: &Funcdata,
        arch: &Architecture,
        op: OpId,
        transfer: crate::aggregatecast::Transfer,
    ) {
        use crate::printlanguage::SyntaxHighlight;
        static BITS: OpToken = op_token("", " }).to", 2, 66, false, TokenType::Postsurround, 0, 0);
        let from = type_name_for_decl(&transfer.source, self.rt_ctx.clone()).0;
        let to = type_name_for_decl(&transfer.target, self.rt_ctx.clone()).0;
        self.push_op(&BITS, Some(op_key(op)));
        self.push_atom(&Atom::syntax(
            format!("((union {{ {from} from; {to} to; }}){{ .from = "),
            TagType::TypeToken,
            SyntaxHighlight::type_color,
        ));
        self.push_vn_ir_body(fd, arch, transfer.input, op);
    }

    /// Opens the union that stores a float result's bits in the explicit word variable
    /// `op` assigns ([`crate::bitcast::word_result`]); the result expression closes it.
    pub(super) fn push_word_result_open(&mut self, fd: &Funcdata, _arch: &Architecture, op: OpId) {
        if self.out_lang != crate::lang::OutLang::C {
            return;
        }
        let Some(ty) = crate::bitcast::word_result(fd, op) else {
            return;
        };
        static WORD_BITS: OpToken =
            op_token("", " }).to", 2, 66, false, TokenType::Postsurround, 0, 0);
        let float = if ty.get_size() == 4 {
            "float"
        } else {
            "double"
        };
        let word = type_name_for_decl(&ty, self.rt_ctx.clone()).0;
        self.push_op(&WORD_BITS, Some(op_key(op)));
        self.push_atom(&Atom::syntax(
            format!("((union {{ {float} from; {word} to; }}){{ .from = "),
            TagType::TypeToken,
            crate::printlanguage::SyntaxHighlight::type_color,
        ));
    }

    pub(super) fn op_bit_transfer_ir(
        &mut self,
        fd: &Funcdata,
        arch: &Architecture,
        op: OpId,
        transfer: crate::bitcast::Transfer,
    ) {
        use crate::dtype::type_metatype;
        use crate::printlanguage::SyntaxHighlight;
        static C_BITS: OpToken =
            op_token("", " }).to", 2, 66, false, TokenType::Postsurround, 0, 0);
        static RUST_BITS: OpToken = op_token(
            "(",
            ").to_bits()",
            2,
            66,
            false,
            TokenType::Postsurround,
            0,
            0,
        );
        if self.out_lang == crate::lang::OutLang::Go {
            self.op_go_bit_transfer(fd, arch, op, transfer);
            return;
        }
        let rust = self.out_lang == crate::lang::OutLang::Rust;
        let signed = transfer.target.get_metatype() == type_metatype::TYPE_INT;
        let pointer = transfer.target.get_metatype() == type_metatype::TYPE_PTR;
        if pointer {
            self.push_cast_open(&transfer.target, op);
        }
        let input = fd.vbank().get(transfer.input).unwrap();
        let bits = if transfer.size == 4 { "u32" } else { "u64" };
        let literal = |v: &crate::varnode::Varnode| {
            Atom::syntax(
                format!(
                    "0x{:x}{bits}",
                    if transfer.size == 4 {
                        u64::from(v.get_offset() as u32)
                    } else {
                        v.get_offset()
                    }
                ),
                TagType::Syntax,
                SyntaxHighlight::const_color,
            )
        };
        if rust && transfer.to_float {
            self.push_op(&tokens::FUNCTION_CALL, Some(op_key(op)));
            self.push_atom(&Atom::syntax(
                if transfer.size == 4 {
                    "f32::from_bits"
                } else {
                    "f64::from_bits"
                },
                TagType::FuncToken,
                SyntaxHighlight::funcname_color,
            ));
            let word = declared_variable_type(fd, transfer.input)
                .is_some_and(|t| type_name_for_decl(&t, self.rt_ctx.clone()).0 == bits);
            if input.is_constant() {
                self.push_atom(&literal(input));
            } else if word {
                self.push_vn_ir_body(fd, arch, transfer.input, op);
            } else {
                self.push_op(self.lang().tok_typecast, Some(op_key(op)));
                self.push_vn_ir_body(fd, arch, transfer.input, op);
                self.push_atom(&Atom::syntax(
                    bits,
                    TagType::TypeToken,
                    SyntaxHighlight::type_color,
                ));
            }
        } else if rust || input.is_constant() && !transfer.to_float {
            if signed {
                self.push_cast_open(&transfer.target, op);
            }
            if !input.is_constant() {
                self.push_op(&RUST_BITS, Some(op_key(op)));
                self.push_atom(&Atom::syntax(
                    "",
                    TagType::BlankToken,
                    SyntaxHighlight::no_color,
                ));
                self.push_vn_ir_body(fd, arch, transfer.input, op);
            } else if rust {
                self.push_atom(&literal(input));
            } else {
                self.push_constant_ir(input.get_offset(), transfer.size, op);
            }
            if signed {
                self.push_cast_close(&transfer.target);
            }
        } else {
            let word = match (transfer.size, signed) {
                (4, false) => "unsigned int",
                (4, true) => "int",
                (_, false) => "unsigned long long",
                (_, true) => "long long",
            };
            let float = if transfer.size == 4 {
                "float"
            } else {
                "double"
            };
            let (from, to) = if transfer.to_float {
                (word, float)
            } else {
                (float, word)
            };
            self.push_op(&C_BITS, Some(op_key(op)));
            self.push_atom(&Atom::syntax(
                format!("((union {{ {from} from; {to} to; }}){{ .from = "),
                TagType::TypeToken,
                SyntaxHighlight::type_color,
            ));
            let source_word = transfer.source_pointer.then(|| {
                arch.types()
                    .get_base(transfer.size, type_metatype::TYPE_UINT)
                    .unwrap()
            });
            if let Some(word) = &source_word {
                self.push_cast_open(word, op);
            }
            self.push_vn_ir_body(fd, arch, transfer.input, op);
            if let Some(word) = &source_word {
                self.push_cast_close(word);
            }
        }
        if pointer {
            self.push_cast_close(&transfer.target);
        }
    }

    /// Does C's arithmetic conversion already perform this float widening?
    ///
    /// A `float` operand of a binary operation is converted to `double` when the
    /// other operand is a double constant.  The native operation remains
    /// double-width in the IR; only its redundant input cast is omitted in C.
    /// This deliberately excludes variable-variable arithmetic, where both
    /// explicit widenings are needed to preserve the operation's precision in
    /// the printed expression.  Rust has no such implicit conversion and keeps
    /// the cast.
    pub(super) fn float_widening_is_c_promoted(
        &self,
        fd: &Funcdata,
        arch: &Architecture,
        op: OpId,
        read_op: Option<OpId>,
    ) -> bool {
        use crate::dtype::type_metatype;

        if self.out_lang != crate::lang::OutLang::C {
            return false;
        }
        let Some(read_op) = read_op else { return false };
        let Some(cast) = fd.obank().get(op) else {
            return false;
        };
        let (Some(source_id), Some(widened_id)) = (cast.get_in(0), cast.get_out()) else {
            return false;
        };
        let model = crate::ctypes::CDataModel::from_types(arch.types());
        let (Some(source), Some(widened)) = (fd.vbank().get(source_id), fd.vbank().get(widened_id))
        else {
            return false;
        };
        // Implied union-field values can retain the union as their def-facing
        // type even though CPUI_FLOAT_FLOAT2FLOAT itself proves the operand is
        // floating.  Generic CPUI_CAST still needs the explicit floating type.
        let source_is_float = source.get_type_def_facing().get_metatype()
            == type_metatype::TYPE_FLOAT
            || cast.code() == OpCode::CPUI_FLOAT_FLOAT2FLOAT;
        if source.get_size() != model.float_size
            || !source_is_float
            || widened.get_size() != model.double_size
            || widened.get_type_def_facing().get_metatype() != type_metatype::TYPE_FLOAT
        {
            return false;
        }

        let Some(reader) = fd.obank().get(read_op) else {
            return false;
        };
        if reader.num_input() != 2
            || !matches!(
                reader.code(),
                OpCode::CPUI_FLOAT_ADD
                    | OpCode::CPUI_FLOAT_SUB
                    | OpCode::CPUI_FLOAT_MULT
                    | OpCode::CPUI_FLOAT_DIV
            )
        {
            return false;
        }
        let Some(result) = reader.get_out().and_then(|vn| fd.vbank().get(vn)) else {
            return false;
        };
        if result.get_size() != model.double_size
            || result.get_type_def_facing().get_metatype() != type_metatype::TYPE_FLOAT
        {
            return false;
        }
        let (Some(in0), Some(in1)) = (reader.get_in(0), reader.get_in(1)) else {
            return false;
        };
        let other = if in0 == widened_id {
            in1
        } else if in1 == widened_id {
            in0
        } else {
            return false;
        };
        let Some(other) = fd.vbank().get(other) else {
            return false;
        };
        if !other.is_constant()
            || other.get_size() != model.double_size
            || other.get_type_def_facing().get_metatype() != type_metatype::TYPE_FLOAT
        {
            return false;
        }
        let Some(format) = arch.translate().get_float_format(model.double_size) else {
            return false;
        };
        let (_, class) = format.get_host_float(other.get_offset());
        !matches!(
            class,
            unlace_num::float::floatclass::infinity | unlace_num::float::floatclass::nan
        )
    }

    /// (unlace) Under `nanignore none`, print a widening that quiets a possibly
    /// signaling NaN and feeds a round trip as a read through a volatile compound
    /// literal, so a C compiler cannot erase the `(float)(double)x` pair. GCC drops
    /// a bare `v = (volatile double){ x }` literal; the `*&` access keeps it.
    pub(super) fn op_float_quiet_ir(
        &mut self,
        fd: &Funcdata,
        arch: &Architecture,
        op: OpId,
    ) -> bool {
        if self.out_lang != crate::lang::OutLang::C {
            return false;
        }
        let Some(cast) = fd.obank().get(op) else {
            return false;
        };
        let (Some(input), Some(output)) = (cast.get_in(0), cast.get_out()) else {
            return false;
        };
        if crate::floatquiet::can_elide(fd, input) || !crate::floatquiet::feeds_round_trip(fd, op) {
            return false;
        }
        let size = fd.vbank().get(output).unwrap().get_size();
        let Ok(ty) = arch.types().get_base(size, type_metatype::TYPE_FLOAT) else {
            return false;
        };
        let name = type_name_for_decl(&ty, self.rt_ctx.clone()).0;
        static MATERIALIZE: OpToken =
            op_token("", " })", 2, 66, false, TokenType::Postsurround, 0, 0);
        self.push_op(&MATERIALIZE, Some(op_key(op)));
        self.push_atom(&Atom::syntax(
            format!("(*&(volatile {name}){{ "),
            TagType::TypeToken,
            crate::printlanguage::SyntaxHighlight::type_color,
        ));
        self.op_type_cast_ir_with(fd, arch, op, false);
        true
    }
}
