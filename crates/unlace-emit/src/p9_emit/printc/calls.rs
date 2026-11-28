//! Call and format-string emission.

use super::*;

impl PrintC {
    pub(super) fn push_rust_format_plan(
        &mut self,
        fd: &Funcdata,
        arch: &Architecture,
        op: OpId,
        plan: super::super::rustfmtargs::Plan,
    ) {
        self.push_rust_format_plan_with_writer(fd, arch, op, plan, None);
    }

    pub(super) fn push_rust_format_plan_with_writer(
        &mut self,
        fd: &Funcdata,
        arch: &Architecture,
        op: OpId,
        plan: super::super::rustfmtargs::Plan,
        writer: Option<super::super::rustfmtargs::Writer>,
    ) {
        self.push_op(&tokens::FUNCTION_CALL, Some(op_key(op)));
        self.push_atom(&Atom::with_op(
            plan.name,
            TagType::OpToken,
            crate::printlanguage::SyntaxHighlight::funcname_color,
            op_key(op),
        ));
        for _ in &plan.arguments {
            self.push_op(&tokens::COMMA, Some(op_key(op)));
        }
        if let Some(writer) = writer {
            self.push_op(&tokens::COMMA, Some(op_key(op)));
            match writer {
                super::super::rustfmtargs::Writer::String {
                    value: writer,
                    pointer_bridge,
                } => {
                    self.push_op(
                        &super::super::langrust::rust_tokens::ADDRESSOF_MUT,
                        Some(op_key(op)),
                    );
                    self.push_op(&tokens::DEREFERENCE, Some(op_key(op)));
                    self.push_op(self.lang().tok_typecast, Some(op_key(op)));
                    if pointer_bridge {
                        self.push_op(self.lang().tok_typecast, Some(op_key(op)));
                    }
                    self.push_vn_ir(fd, arch, writer, op);
                    if pointer_bridge {
                        self.push_atom(&Atom::syntax(
                            "*mut _",
                            TagType::TypeToken,
                            crate::printlanguage::SyntaxHighlight::type_color,
                        ));
                    }
                    self.push_atom(&Atom::syntax(
                        "*mut std::string::String",
                        TagType::TypeToken,
                        crate::printlanguage::SyntaxHighlight::type_color,
                    ));
                }
                super::super::rustfmtargs::Writer::Io(writer) => {
                    super::super::rustfmtio::push_writer(self, fd, arch, op, writer);
                }
            }
        }
        self.push_atom(&Atom::syntax(
            plan.literal,
            TagType::Syntax,
            crate::printlanguage::SyntaxHighlight::const_color,
        ));
        for argument in plan.arguments {
            if let super::super::rustfmtargs::Argument::String {
                data,
                length,
                pointer_bridge,
            } = argument
            {
                self.push_op(&tokens::FUNCTION_CALL, Some(op_key(op)));
                self.push_atom(&Atom::syntax(
                    "std::str::from_utf8_unchecked",
                    TagType::Syntax,
                    crate::printlanguage::SyntaxHighlight::funcname_color,
                ));
                self.push_op(&tokens::FUNCTION_CALL, Some(op_key(op)));
                self.push_atom(&Atom::syntax(
                    "std::slice::from_raw_parts",
                    TagType::Syntax,
                    crate::printlanguage::SyntaxHighlight::funcname_color,
                ));
                self.push_op(&tokens::COMMA, Some(op_key(op)));
                self.push_op(self.lang().tok_typecast, Some(op_key(op)));
                if pointer_bridge {
                    self.push_op(self.lang().tok_typecast, Some(op_key(op)));
                }
                self.push_vn_ir(fd, arch, data, op);
                if pointer_bridge {
                    self.push_atom(&Atom::syntax(
                        "*const _",
                        TagType::TypeToken,
                        crate::printlanguage::SyntaxHighlight::type_color,
                    ));
                }
                self.push_atom(&Atom::syntax(
                    "*const u8",
                    TagType::TypeToken,
                    crate::printlanguage::SyntaxHighlight::type_color,
                ));
                self.push_op(self.lang().tok_typecast, Some(op_key(op)));
                self.push_vn_ir(fd, arch, length, op);
                self.push_atom(&Atom::syntax(
                    "usize",
                    TagType::TypeToken,
                    crate::printlanguage::SyntaxHighlight::type_color,
                ));
                continue;
            }
            let super::super::rustfmtargs::Argument::Primitive { pointer, primitive } = argument
            else {
                unreachable!();
            };
            self.push_op(&tokens::ADDRESSOF, Some(op_key(op)));
            self.push_op(&tokens::DEREFERENCE, Some(op_key(op)));
            self.push_op(self.lang().tok_typecast, Some(op_key(op)));
            self.push_op(self.lang().tok_typecast, Some(op_key(op)));
            self.push_vn_ir(fd, arch, pointer, op);
            self.push_atom(&Atom::syntax(
                "*const _",
                TagType::TypeToken,
                crate::printlanguage::SyntaxHighlight::type_color,
            ));
            self.push_atom(&Atom::syntax(
                format!("*const {primitive}"),
                TagType::TypeToken,
                crate::printlanguage::SyntaxHighlight::type_color,
            ));
        }
    }

    /// C++ `PrintC::opCall` (printc.cc:613) / `PrintC::opCallind` (printc.cc:657):
    /// the functional `callee(arg1, arg2, ...)` form over the recovered call
    /// inputs.
    ///
    /// For a direct CALL the callee name is recovered from the \e fspec annotation
    /// in0 (the registered call-spec name, else `func_<addr>`/`sub_<addr>`); the
    /// arguments are `in[1..]`.  For a CALLIND the callee is `(*funcptr)` where the
    /// funcptr is `in[0]` and the arguments are `in[1..]`.  The hidden-`this` slot
    /// (`getHiddenThisSlot`) is the C++ method-invocation hook (always -1 here —
    /// the C++ `int4 skip = -1;` for the direct case, no C++ method format yet).
    pub(super) fn op_call_ir(&mut self, fd: &Funcdata, arch: &Architecture, op: OpId) {
        if !arch
            .unlace_options
            .get::<crate::analysisgates::Godwarfsig>()
            .0
        {
            self.op_call_raw_ir(fd, arch, op);
            return;
        }
        let projection = if self.rt_ctx.go_pair_types.is_some() {
            self.push_go_pair_call_adapter(fd, arch, op)
        } else if let Some(index) = super::super::gopairreturns::call_projection(fd, arch, op) {
            self.push_op(&tokens::OBJECT_MEMBER, Some(op_key(op)));
            Some(index)
        } else {
            None
        };
        self.op_call_raw_ir(fd, arch, op);
        if let Some(index) = projection {
            self.push_go_pair_projection(op, index);
        }
    }

    #[doc(hidden)]
    pub fn op_call_raw_ir(&mut self, fd: &Funcdata, arch: &Architecture, op: OpId) {
        if self.out_lang == crate::lang::OutLang::Rust
            && arch
                .unlace_options
                .get::<crate::rustfmt::RustFmtMode>()
                .writers()
            && let Some(plan) = super::super::rustfmtio::recover(fd, arch, op) {
                let result = if plan.signed_result {
                    &super::super::rustfmtio::WITH_SIGNED_RESULT
                } else {
                    &super::super::rustfmtio::WITH_UNSIGNED_RESULT
                };
                self.push_op(result, Some(op_key(op)));
                self.push_atom(&Atom::syntax(
                    "",
                    TagType::BlankToken,
                    crate::printlanguage::SyntaxHighlight::no_color,
                ));
                self.push_rust_format_plan_with_writer(
                    fd,
                    arch,
                    op,
                    plan.format,
                    Some(super::super::rustfmtargs::Writer::Io(plan.writer)),
                );
                return;
            }
        if self.out_lang == crate::lang::OutLang::Rust
            && arch
                .unlace_options
                .get::<crate::rustfmt::RustFmtMode>()
                .writers()
            && let Some(plan) = super::super::rustfmtwrite::recover(fd, arch, op) {
                if plan.result_type.is_some() {
                    self.push_op(self.lang().tok_typecast, Some(op_key(op)));
                }
                self.push_op(&tokens::FUNCTION_CALL, Some(op_key(op)));
                self.push_op(&tokens::OBJECT_MEMBER, Some(op_key(op)));
                self.push_op(&super::super::rustfmtwrite::WITH_WRITE, Some(op_key(op)));
                self.push_atom(&Atom::syntax(
                    "",
                    TagType::BlankToken,
                    crate::printlanguage::SyntaxHighlight::no_color,
                ));
                self.push_rust_format_plan_with_writer(
                    fd,
                    arch,
                    op,
                    plan.format,
                    Some(super::super::rustfmtargs::Writer::String {
                        value: plan.writer,
                        pointer_bridge: plan.pointer_bridge,
                    }),
                );
                self.push_atom(&Atom::syntax(
                    "is_err",
                    TagType::Syntax,
                    crate::printlanguage::SyntaxHighlight::funcname_color,
                ));
                self.push_atom(&Atom::syntax(
                    "",
                    TagType::BlankToken,
                    crate::printlanguage::SyntaxHighlight::no_color,
                ));
                if let Some(result_type) = plan.result_type {
                    self.push_atom(&Atom::syntax(
                        result_type,
                        TagType::TypeToken,
                        crate::printlanguage::SyntaxHighlight::type_color,
                    ));
                }
                return;
            }
        if self.out_lang == crate::lang::OutLang::Rust
            && arch
                .unlace_options
                .get::<crate::rustfmt::RustFmtMode>()
                .recovers()
            && let Some(plan) = super::super::rustfmtpieces::recover(fd, arch, op) {
                self.push_rust_format_plan(fd, arch, op, plan);
                return;
            }
        if self.out_lang == crate::lang::OutLang::Rust
            && arch
                .unlace_options
                .get::<crate::rustfmt::RustFmtMode>()
                .recovers()
            && let Some(plan) = super::super::rustfmtpanic::recover(fd, arch, op) {
                self.push_rust_format_plan(fd, arch, op, plan);
                return;
            }
        if self.out_lang == crate::lang::OutLang::Rust
            && arch
                .unlace_options
                .get::<crate::rustfmt::RustFmtMode>()
                .recovers()
            && let Some(plan) = super::super::rustfmtresult::recover(fd, arch, op) {
                self.push_op(&tokens::FUNCTION_CALL, Some(op_key(op)));
                self.push_atom(&Atom::with_op(
                    "std::ptr::write",
                    TagType::OpToken,
                    crate::printlanguage::SyntaxHighlight::funcname_color,
                    op_key(op),
                ));
                self.push_op(&tokens::COMMA, Some(op_key(op)));
                self.push_op(self.lang().tok_typecast, Some(op_key(op)));
                if plan.pointer_bridge {
                    self.push_op(self.lang().tok_typecast, Some(op_key(op)));
                }
                self.push_vn_ir(fd, arch, plan.destination, op);
                if plan.pointer_bridge {
                    self.push_atom(&Atom::syntax(
                        "*mut _",
                        TagType::TypeToken,
                        crate::printlanguage::SyntaxHighlight::type_color,
                    ));
                }
                self.push_atom(&Atom::syntax(
                    "*mut std::string::String",
                    TagType::TypeToken,
                    crate::printlanguage::SyntaxHighlight::type_color,
                ));
                self.push_rust_format_plan(fd, arch, op, plan.format);
                return;
            }
        if self.out_lang == crate::lang::OutLang::Rust
            && arch
                .unlace_options
                .get::<crate::rustfmt::RustFmtMode>()
                .recovers()
            && let Some(plan) = super::super::rustfmtargs::recover(fd, arch, op) {
                self.push_rust_format_plan(fd, arch, op, plan);
                return;
            }
        if self.out_lang == crate::lang::OutLang::Rust
            && arch
                .unlace_options
                .get::<crate::rustfmt::RustFmtMode>()
                .recovers()
            && let Some((name, literal)) = super::super::rustfmtliteral::recover(fd, arch, op) {
                self.push_op(&tokens::FUNCTION_CALL, Some(op_key(op)));
                self.push_atom(&Atom::with_op(
                    name,
                    TagType::OpToken,
                    crate::printlanguage::SyntaxHighlight::funcname_color,
                    op_key(op),
                ));
                self.push_atom(&Atom::syntax(
                    literal,
                    TagType::Syntax,
                    crate::printlanguage::SyntaxHighlight::const_color,
                ));
                return;
            }
        if self.out_lang == crate::lang::OutLang::C
            && let Some(plan) = super::super::oslog::recover(fd, arch, op) {
                self.push_oslog_call(fd, arch, op, plan);
                return;
            }
        if self.out_lang == crate::lang::OutLang::C
            && arch
                .unlace_options
                .get::<super::super::structassign::StructAssign>()
                .0
        {
            let callee = self.call_callee_name(fd, op);
            if let Some((dst, src)) = super::super::structassign::recover(fd, arch, op, &callee) {
                self.push_struct_assign(fd, arch, op, dst, src);
                return;
            }
        }
        if self.out_lang == crate::lang::OutLang::C
            && arch.unlace_options.get::<crate::analysisgates::Msvceh>().0
        {
            let callee = self.call_callee_name(fd, op);
            if let Some(throw) = super::super::msvcthrow::recover(fd, arch, op, &callee) {
                self.push_throw_call(fd, arch, op, throw);
                return;
            }
        }
        if self.out_lang == crate::lang::OutLang::C
            && arch
                .unlace_options
                .get::<crate::coreoptions::ItaniumEh>()
                .on
        {
            let callee = fd
                .get_call_specs_index(op)
                .map(|idx| fd.get_call_specs(idx).get_name().to_string())
                .unwrap_or_default();
            if let Some(throw) = super::super::itaniumthrow::recover(fd, arch, op, &callee) {
                self.push_throw_call(fd, arch, op, throw);
                return;
            }
        }
        let opc = fd.obank().get(op).expect("op_call_ir: stale op").code();
        let nin = fd.obank().get(op).map(|o| o.num_input()).unwrap_or(0);
        let proto = fd
            .get_call_specs_index(op)
            .map(|index| fd.get_call_specs(index).proto());
        self.push_word_result_open(fd, arch, op);
        if opc == OpCode::CPUI_CALLIND && self.out_lang == crate::lang::OutLang::Java {
            self.java_callind_ir(fd, arch, op);
            return;
        }
        let result_conversion = self.push_call_result_open(fd, arch, op);
        self.push_op(&tokens::FUNCTION_CALL, Some(op_key(op)));

        if opc == OpCode::CPUI_CALLIND {
            // CALLIND: `(*funcptr)(args)` (C++ `PrintC::opCallind`, printc.cc:657).
            // `function_call` is already pushed above; push the `dereference` that
            // wraps the callee.  The operand push ORDER is load-bearing: the RPN
            // emitter (`pushVnImplied`) pops operands off the stack in reverse, so
            // C++ pushes the implied varnodes in REVERSE so they emit forward.  The
            // `count==1` vs `count>1` split (printc.cc:669-690) also differs in which
            // operand is pushed first, so it must be replicated exactly — pushing
            // the callee first and the args forward (the prior code) mis-associates
            // the unary `dereference` with the first argument, printing a spurious
            // `(*(funcptr,arg0))(arg1)` CONCAT-looking grouping.  No hidden-`this`
            // slot here (`skip = -1`), so `count = numInput - 1`.
            if let Some(name) = super::super::goitabcall::interface_method(fd, arch, op) {
                self.push_atom(&Atom::with_op(
                    name,
                    TagType::FuncToken,
                    crate::printlanguage::SyntaxHighlight::funcname_color,
                    op_key(op),
                ));
                if nin > 1 {
                    for _ in 0..(nin - 2) {
                        self.push_op(&tokens::COMMA, Some(op_key(op)));
                    }
                    for i in 1..nin {
                        if let Some(vn) = fd.obank().get(op).and_then(|o| o.get_in(i)) {
                            self.push_call_argument_ir(fd, arch, vn, op, i, proto);
                        }
                    }
                } else {
                    self.push_atom(&Atom::syntax(
                        "",
                        TagType::BlankToken,
                        crate::printlanguage::SyntaxHighlight::no_color,
                    ));
                }
                self.push_call_result_close(result_conversion, op);
                return;
            }
            let go_function = self.out_lang == crate::lang::OutLang::Go
                && fd
                    .obank()
                    .get(op)
                    .and_then(|o| o.get_in(0))
                    .is_some_and(|callee| {
                        let ty = self.go_value_type(fd, arch, callee, op);
                        declarator_parts(&ty, self.rt_ctx.clone())
                            .0
                            .starts_with("func(")
                    });
            if !go_function {
                self.push_op(&tokens::DEREFERENCE, Some(op_key(op)));
            }
            let count = nin - 1;
            if count >= 1 {
                // One or more parameters (C++ printc.cc:669-686): the callee (in0) is
                // the operand the unary `dereference` wraps, so it MUST be pushed
                // before the argument operands.  C++ pushes the callee first only in
                // its `count>1` arm and (for `count==1`) pushes the arg then callee —
                // because its `pushVnImplied` pops the operand stack LIFO.  The unlace
                // emitter pops the operand list FIFO (the direct-CALL path below
                // already relies on forward push order), so a single unified arm
                // suffices: callee first, then `(count-1)` comma operators, then the
                // args in source order (in[1] .. in[numInput-1]).  Pushing the callee
                // *after* the args (the prior code) mis-associated the dereference
                // with the first argument, printing a spurious `(*(funcptr,arg0))(..)`
                // CONCAT-looking grouping.  No hidden-`this` slot (`skip = -1`), so
                // `count = numInput - 1`.
                if let Some(callee) = fd.obank().get(op).and_then(|o| o.get_in(0)) {
                    self.push_vn_ir(fd, arch, callee, op);
                }
                for _ in 0..(count - 1) {
                    self.push_op(&tokens::COMMA, Some(op_key(op)));
                }
                for i in 1..nin {
                    if let Some(vn) = fd.obank().get(op).and_then(|o| o.get_in(i)) {
                        self.push_call_argument_ir(fd, arch, vn, op, i, proto);
                    }
                }
            } else {
                // Void indirect call: the callee expression then an empty arg token.
                if let Some(callee) = fd.obank().get(op).and_then(|o| o.get_in(0)) {
                    self.push_vn_ir(fd, arch, callee, op);
                }
                self.push_atom(&Atom::syntax(
                    "",
                    TagType::BlankToken,
                    crate::printlanguage::SyntaxHighlight::no_color,
                ));
            }
            self.push_call_result_close(result_conversion, op);
            return;
        }

        // Direct CALL: the callee name from the fspec annotation.
        let first_argument = self.push_go_direct_method(fd, arch, op).unwrap_or_else(|| {
            let name = self.call_callee_name(fd, op);
            for scope in self.call_scope_prefix(fd, arch, op, &name) {
                self.push_op(&tokens::SCOPE, None);
                self.push_atom(&Atom::syntax(
                    scope,
                    TagType::Syntax,
                    crate::printlanguage::SyntaxHighlight::global_color,
                ));
            }
            self.push_atom(&Atom::with_op(
                crate::cppshortnames::function_name(arch, name),
                TagType::FuncToken,
                crate::printlanguage::SyntaxHighlight::funcname_color,
                op_key(op),
            ));
            1
        });
        let count = nin - first_argument;
        if count > 0 {
            for _ in 0..(count - 1) {
                self.push_op(&tokens::COMMA, Some(op_key(op)));
            }
            for i in first_argument..nin {
                if let Some(vn) = fd.obank().get(op).and_then(|o| o.get_in(i)) {
                    self.pointer_candidate =
                        if self.pointer_record.is_some() && !self.emit.emits_markup() {
                            let view = PointerView { pc: self, fd };
                            crate::pointerargs::argument(&view, fd, arch, op, i)
                        } else {
                            None
                        };
                    self.push_call_argument_ir(fd, arch, vn, op, i, proto);
                    self.pointer_candidate = None;
                }
            }
        } else {
            // Void function: empty token (C++ blanktoken).
            self.push_atom(&Atom::syntax(
                "",
                TagType::BlankToken,
                crate::printlanguage::SyntaxHighlight::no_color,
            ));
        }
        self.push_call_result_close(result_conversion, op);
    }

    pub(super) fn push_go_direct_method(
        &mut self,
        fd: &Funcdata,
        arch: &Architecture,
        op: OpId,
    ) -> Option<i32> {
        use super::super::langgo::identifier;

        if self.out_lang != crate::lang::OutLang::Go {
            return None;
        }
        let method = super::super::gomethod::direct_method(fd, arch, op)?;
        let shadowed = self
            .signature_param_names
            .values()
            .any(|name| name == &method.type_name)
            || self
                .declared_locals
                .iter()
                .any(|local| identifier(&local.name) == method.type_name);
        let (name, first_argument) = if shadowed {
            let receiver = fd.vbank().get(method.receiver)?;
            if receiver.is_implied() || receiver.is_constant() {
                return None;
            }
            let ty = receiver
                .get_high()
                .and_then(|high| self.declared_local(high))
                .and_then(|local| local.ty.clone())
                .or_else(|| declared_variable_type(fd, method.receiver))?;
            if !method.has_selector_type(&ty) {
                return None;
            }
            self.push_op(&tokens::OBJECT_MEMBER, Some(op_key(op)));
            self.push_vn_ir(fd, arch, method.receiver, op);
            (method.member, 2)
        } else {
            (format!("(*{}).{}", method.type_name, method.member), 1)
        };
        self.push_atom(&Atom::with_op(
            name,
            TagType::OpToken,
            crate::printlanguage::SyntaxHighlight::funcname_color,
            op_key(op),
        ));
        Some(first_argument)
    }

    pub(super) fn emit_indirect_input_aliases(&mut self, fd: &Funcdata) {
        if self.out_lang != crate::lang::OutLang::C {
            return;
        }
        let inputs = crate::indirectargs::mutable_inputs(fd);
        if inputs.is_empty() {
            return;
        }
        let mut occupied: Vec<String> = fd
            .high_bank()
            .iter()
            .filter_map(|(high, _)| self.emitted_high_name(fd, high))
            .collect();
        occupied.extend(self.signature_param_names.values().cloned());
        let occupied = declaration_occupied_names(fd, occupied);
        let mut names = crate::dedupvardecls::DeclNameUniquifier::new(
            std::iter::empty::<&str>(),
            occupied.iter().map(String::as_str),
        );
        let globals = fd.get_arch().global_name_scope();
        let taken = |name: &str| globals.as_ref().is_some_and(|g| g.has_symbol_name(name));
        for input in inputs {
            let parameter = self
                .signature_param_names
                .get(&input.slot)
                .cloned()
                .expect("indirect input alias requires an emitted parameter");
            let high = input.highs[0];
            let mut markup = MarkupRef::none();
            markup.symref = fd.unlace_high_symbol_wire_id(high).or_else(|| {
                decl_rep_varnode(fd, high)
                    .and_then(|vn| fd.vbank().get(vn))
                    .map(|vn| vn.get_create_index() as uintb)
            });
            let name = names.unique_with(&format!("{parameter}_addr"), &taken);
            for high in input.highs {
                self.local_name_overrides.insert(high, name.clone());
                self.indirect_input_aliases.insert(high);
            }
            let (front, back) = declarator_parts(&input.pointer_type, self.rt_ctx.clone());
            self.cast_implied
                .record_param(&name, format!("{front}{back}"));
            self.pointer_decls.record(&name, &front, &back, false);
            self.emit.tag_line();
            let declaration = self.emit.begin_var_decl(&markup);
            self.emit
                .tag_type(&front, SyntaxHighlight::TypeColor, &markup);
            if !front.ends_with('*') {
                self.emit.spaces(1, 0);
            }
            self.emit
                .tag_variable(&name, SyntaxHighlight::VarColor, &markup);
            self.emit
                .print(&format!("{back} = &"), SyntaxHighlight::NoColor);
            self.emit
                .tag_variable(&parameter, SyntaxHighlight::VarColor, &markup);
            self.emit.end_var_decl(declaration);
            self.emit.print(";", SyntaxHighlight::NoColor);
        }
        self.emit.tag_line();
    }

    /// (unlace `msvceh`) `throw obj` or `throw` for a `_CxxThrowException` call: the
    /// object is printed as a load through the first argument would be, so
    /// `&local` reads as `local`.
    pub(super) fn push_throw_call(
        &mut self,
        fd: &Funcdata,
        arch: &Architecture,
        op: OpId,
        throw: super::super::msvcthrow::Throw,
    ) {
        let obj = match throw {
            super::super::msvcthrow::Throw::Rethrow => {
                self.push_atom(&Atom::with_op(
                    "throw",
                    TagType::OpToken,
                    crate::printlanguage::SyntaxHighlight::keyword_color,
                    op_key(op),
                ));
                return;
            }
            super::super::msvcthrow::Throw::Object(obj) => obj,
        };
        self.push_op(&super::super::msvcthrow::THROW, Some(op_key(op)));
        let mut m = self.context.mods();
        if self.check_array_deref(fd, obj) && !self.context.is_set(modifiers::FORCE_POINTER) {
            m |= modifiers::PRINT_LOAD_VALUE;
        } else {
            self.push_op(&tokens::DEREFERENCE, Some(op_key(op)));
        }
        self.push_vn_ir_m(fd, arch, obj, op, m);
    }

    /// (unlace `structassign`) `*dst = *src` for a whole-struct `memcpy`: each side
    /// is printed as a load through its pointer would be, so `&local` reads as
    /// `local`. Operands are pushed right side first, as `opStore` does.
    pub(super) fn push_struct_assign(
        &mut self,
        fd: &Funcdata,
        arch: &Architecture,
        op: OpId,
        dst: VarnodeId,
        src: VarnodeId,
    ) {
        self.push_op(&tokens::ASSIGNMENT, Some(op_key(op)));
        for vn in [src, dst] {
            let mut m = self.context.mods();
            if self.check_array_deref(fd, vn) && !self.context.is_set(modifiers::FORCE_POINTER) {
                m |= modifiers::PRINT_LOAD_VALUE;
            } else {
                self.push_op(&tokens::DEREFERENCE, Some(op_key(op)));
            }
            self.push_vn_ir_m(fd, arch, vn, op, m);
        }
    }

    /// (unlace `oslog`) A direct os_log call: the dso as its header symbol and
    /// the decoded buffer items in place of the buffer and its size.
    pub(super) fn push_oslog_call(
        &mut self,
        fd: &Funcdata,
        arch: &Architecture,
        op: OpId,
        plan: super::super::oslog::Plan,
    ) {
        let Some(call) = fd.obank().get(op) else {
            return;
        };
        let nin = call.num_input();
        let inputs: Vec<VarnodeId> = (1..nin).filter_map(|slot| call.get_in(slot)).collect();
        let proto = fd
            .get_call_specs_index(op)
            .map(|index| fd.get_call_specs(index).proto());
        let count = match &plan.items {
            Some(items) => plan.fixed as usize + items.len(),
            None => inputs.len(),
        };
        self.push_word_result_open(fd, arch, op);
        self.push_op(&tokens::FUNCTION_CALL, Some(op_key(op)));
        let name = crate::cppshortnames::function_name(arch, self.call_callee_name(fd, op));
        self.push_atom(&Atom::with_op(
            name,
            TagType::FuncToken,
            crate::printlanguage::SyntaxHighlight::funcname_color,
            op_key(op),
        ));
        for _ in 1..count {
            self.push_op(&tokens::COMMA, Some(op_key(op)));
        }
        let shown = if plan.items.is_some() {
            plan.fixed as usize
        } else {
            inputs.len()
        };
        for (index, &vn) in inputs.iter().take(shown).enumerate() {
            if index == 0
                && let Some(header) = &plan.dso {
                    self.push_atom(&Atom::syntax(
                        format!("&{header}"),
                        TagType::Syntax,
                        crate::printlanguage::SyntaxHighlight::global_color,
                    ));
                    continue;
                }
            self.push_call_argument_ir(fd, arch, vn, op, index as i32 + 1, proto);
        }
        for item in plan.items.unwrap_or_default() {
            match item {
                super::super::oslog::Item::Value(vn) => self.push_vn_ir(fd, arch, vn, op),
                super::super::oslog::Item::Constant { value, size } => {
                    self.push_constant_ir(value, size, op)
                }
            }
        }
    }

    pub(super) fn push_call_argument_ir(
        &mut self,
        fd: &Funcdata,
        arch: &Architecture,
        vn: VarnodeId,
        op: OpId,
        slot: i32,
        proto: Option<&crate::fspec::FuncProto>,
    ) {
        if self.push_extended_call_argument(fd, arch, vn, op, slot) {
            return;
        }
        if self.out_lang == crate::lang::OutLang::Go {
            if let Some(target) = proto
                .filter(|p| p.has_store())
                .and_then(|p| p.get_param(slot - 1))
                .and_then(|p| p.get_type())
            {
                self.push_go_value_as(fd, arch, vn, op, target);
            } else {
                self.push_vn_ir(fd, arch, vn, op);
            }
            return;
        }
        if self.out_lang == crate::lang::OutLang::Rust && !self.options.nocasts
            && let Some(target) = proto
                .filter(|p| p.has_store())
                .and_then(|p| p.get_param(slot - 1))
                .and_then(|p| p.get_type())
                && (self.push_rust_array_pointer(fd, arch, vn, op, target)
                    || self.push_rust_integer_as(fd, arch, vn, op, target))
                {
                    return;
                }
        if self.out_lang != crate::lang::OutLang::C
            || !crate::indirectargs::is_indirect_value(
                proto,
                slot,
                fd.vbank()
                    .get(vn)
                    .map(|value| value.get_size())
                    .unwrap_or(0),
            )
        {
            self.push_vn_ir(fd, arch, vn, op);
            return;
        }
        let mut mods = self.context.mods();
        if (self.check_array_deref(fd, vn) || self.is_value_indirect_input(fd, vn))
            && !self.context.is_set(modifiers::FORCE_POINTER)
        {
            mods |= modifiers::PRINT_LOAD_VALUE;
        } else {
            self.push_op(&tokens::DEREFERENCE, Some(op_key(op)));
        }
        self.push_vn_ir_m(fd, arch, vn, op, mods);
    }

    /// Recover the printed callee name for a direct CALL (C++ `PrintC::opCall`'s
    /// fspec-name branch): the registered call-spec name, else
    /// `genericFunctionName(entryaddress)` (`func_<addr>` / `sub_<addr>`).
    ///
    /// The name lives in the \e fspec annotation in0; the `FuncCallSpecs` carries
    /// it (looked up by op).  Falls back to the in0 varnode's printed address if no
    /// call spec is registered (an internal-only op — should not occur on the live
    /// CALL path).
    /// The namespaces Ghidra mode prints in front of a direct call's callee
    /// (C++ `opCall`'s `pushSymbolScope(fd->getSymbol())`), outermost first.
    /// The standalone path already carries the qualified name, so it gets none.
    pub(super) fn call_scope_prefix(
        &self,
        fd: &Funcdata,
        arch: &Architecture,
        op: OpId,
        name: &str,
    ) -> Vec<String> {
        let Some(remote) = arch.remote_scope.as_ref() else {
            return Vec::new();
        };
        let Some(idx) = fd.get_call_specs_index(op) else {
            return Vec::new();
        };
        let fc = fd.get_call_specs(idx);
        if fc.get_name().is_empty() {
            return Vec::new();
        }
        let Some(callee) = remote.function_at(fc.get_entry_address()) else {
            return Vec::new();
        };
        let (use_ns, use_ids) = remote
            .function_at(fd.get_address())
            .map(|f| {
                (
                    f.scope_path.into_iter().rev().collect::<Vec<_>>(),
                    f.scope_ids,
                )
            })
            .unwrap_or_default();
        let callee_ids: Vec<u64> = callee.scope_ids.iter().rev().copied().collect();
        // ScopeLocal::isNameUsed: the function's own names, then its namespace
        // (never the global scope, never the terminating scope) on the host.
        let name_used = |nm: &str, levels: usize| {
            if fd
                .get_scope_local()
                .is_some_and(|lm| lm.local_name_used(nm))
            {
                return true;
            }
            let Some(&parent) = use_ids.first() else {
                return false;
            };
            let stop = levels
                .checked_sub(1)
                .and_then(|i| callee_ids.get(i))
                .copied()
                .unwrap_or(0);
            parent != stop && remote.is_name_used(nm, parent, stop)
        };
        let scopes = crate::namespaces::scope_prefix(
            self.context.namespace_strategy(),
            name,
            &callee.scope_path,
            &use_ns,
            &name_used,
        );
        if arch
            .unlace_options
            .get::<crate::cppshortnames::CppShortNames>()
            .0
        {
            crate::cppshortnames::short_scopes(scopes)
        } else {
            scopes
        }
    }

    pub(super) fn call_callee_name(&self, fd: &Funcdata, op: OpId) -> String {
        if let Some(label) = crate::objcrettype::resolved_callee(fd, op) {
            return label;
        }
        if let Some(idx) = fd.get_call_specs_index(op) {
            let fc = fd.get_call_specs(idx);
            let nm = fc.get_name();
            if !nm.is_empty() {
                return nm.to_string();
            }
            // genericFunctionName(entryaddress): angr-style `sub_<addr>` or
            // `func_<addr>` (the architecture's name style).
            return fc.fspec_printed_name(fd.get_arch().unlace_name_style());
        }
        // No call spec (should not happen for a live CALL): print the in0 address.
        crate::printc::generic_function_name(
            fd.obank()
                .get(op)
                .and_then(|o| o.get_in(0))
                .and_then(|vn| fd.vbank().get(vn))
                .map(|v| v.get_addr())
                .unwrap_or(&unlace_base::address::Address::default()),
        )
        .unwrap_or_default()
    }
}
