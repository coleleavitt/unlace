//! The RPN expression engine (`push_op`/`push_atom`/`emit_op`).

use super::*;

impl PrintC {
    /// Construct the c-language printer (C++ `PrintC::PrintC` +
    /// `resetDefaultsPrintC`, printc.cc:118 / 1649).
    pub fn new() -> PrintC {
        PrintC {
            options: PrintCOptions::new(),
            context: PrintContext::new(),
            name: CAPABILITY_NAME.to_string(),
            flat: false,
            emit: PrintEmit::NoMarkup(EmitNoMarkup::new()),
            plain_line_size: None,
            emit_fd: None,
            revpol: Vec::new(),
            nodepend: Vec::new(),
            pending: 0,
            commsorter: crate::comment::CommentSorter::new(),
            void_tail_return: None,
            eh_open_pad: None,
            eh_open_catch: Vec::new(),
            java_new: std::collections::HashMap::new(),
            java_ctor_calls: std::collections::HashMap::new(),
            java_catches: None,
            java_caught_shown: std::collections::HashSet::new(),
            java_idioms: std::collections::BTreeMap::new(),
            java_hidden: std::collections::HashSet::new(),
            java_sync_enters: std::collections::BTreeMap::new(),
            java_throw_userop: None,
            java_block_filters: std::collections::HashMap::new(),
            goto_rewrites: Default::default(),
            switch_plans: Default::default(),
            rt_ctx: RealTypeCtx::OFF,
            out_lang: crate::lang::OutLang::C,
            flavour: None,
            eol_warns: Vec::new(),
            warnings: Vec::new(),
            local_name_overrides: std::collections::HashMap::new(),
            indirect_input_aliases: std::collections::HashSet::new(),
            signature_param_names: std::collections::HashMap::new(),
            go_suppressed_labels: Default::default(),
            label_printed: None,
            oslog_hidden: Default::default(),
            local_name_aliases: std::collections::HashMap::new(),
            local_name_standalones: std::collections::HashSet::new(),
            declared_locals: Vec::new(),
            declared_local_index: Default::default(),
            declared_entry: None,
            pointer_decls: crate::pointerargs::Declarations::default(),
            record_pointer_arguments: false,
            pointer_record: None,
            pointer_candidate: None,
            sign_plan: crate::typeround::SignPlan::default(),
            cast_implied: crate::castimplied::ImpliedCasts::default(),
            stmt_op: None,
            globalref: crate::globalref::Plan::default(),
            named_globals: crate::namedglobals::References::default(),
            label_names: std::collections::BTreeMap::new(),
            ctree: None,
            rpn_record: None,
            rpn_constant: None,
            flipped_branches: std::collections::BTreeSet::new(),
        }
    }

    /// How the active output language renders a recovered calling convention.
    #[inline]
    pub fn lang_abi(&self) -> &'static dyn crate::langabi::LangAbi {
        self.out_lang.abi()
    }

    /// The active output language's surface vocabulary and capability record.
    ///
    /// Every language-varying emit site reads through here rather than naming a
    /// `keywords::`/`tokens::` constant directly, so a second language is a new
    /// profile rather than a second emitter.
    #[inline]
    pub fn lang(&self) -> &'static crate::lang::LangProfile {
        match self.flavour {
            Some(flavour) => flavour.profile(),
            None => self.out_lang.profile(),
        }
    }

    /// (unlace) Render `flavour`: its base language's printer over its profile. Selecting a
    /// language by name ([`set_name`](PrintC::set_name)) drops it.
    pub fn set_flavour(&mut self, flavour: &'static crate::langflavour::Flavour) {
        self.set_name(flavour.base().print_name());
        self.flavour = Some(flavour);
    }

    /// (unlace) The text the operator token `tok` opens with: its own, or the one the
    /// flavour being rendered gives it.
    #[inline]
    pub fn op_spelling(&self, tok: &'static OpToken) -> &'static str {
        match self.flavour {
            Some(flavour) => flavour.spelling(tok),
            None => tok.print1,
        }
    }

    /// The printer name (C++ `PrintLanguage::getName`, `"c-language"`).
    pub fn get_name(&self) -> &str {
        &self.name
    }

    /// Set the active print language name (C++ `setPrintLanguage` swaps which
    /// `PrintLanguage` is current; here the single owned printer records the
    /// requested name so `print_is_c_language` reflects it).
    ///
    /// (unlace outlang) The name is the single source of truth for the output
    /// language: it also resolves `out_lang`, so a name unlace owns switches the
    /// emitter and a name it does not leaves the C emitter in place -- an unknown
    /// language never silently renders as something else.
    pub fn set_name(&mut self, name: &str) {
        self.name = name.to_string();
        self.out_lang =
            crate::lang::OutLang::from_print_name(name).unwrap_or(crate::lang::OutLang::C);
        self.flavour = None;
        if self.plain_line_size.is_some() && !self.emit.emits_markup() {
            self.emit = self.plain_emit();
        }
    }

    /// The active output language.
    pub fn out_lang(&self) -> crate::lang::OutLang {
        self.out_lang
    }

    /// `print C flat` toggle (C++ `PrintLanguage::setFlat`).
    pub fn set_flat(&mut self, val: bool) {
        self.flat = val;
    }

    /// Whether `print C flat` is active.
    pub fn is_flat(&self) -> bool {
        self.flat
    }

    /// Reset the emit buffer (C++ `setOutputStream`).
    pub fn set_output_stream(&mut self) {
        self.emit.set_output_stream();
    }

    /// Initialize from the architecture (C++ `PrintLanguage::initializeFromArchitecture`).
    /// The sizes/types coupling is the W6 type factory, already built by the
    /// architecture; the printer needs no per-arch state beyond its options here.
    pub fn initialize_from_architecture(&mut self) {}

    /// The **shell** of C++ `PrintC::docFunction` (printc.cc:2790) +
    /// `emitFunctionDeclaration` (printc.cc:2726), transcribed faithfully,
    /// driving the real [`Emit`] primitives.  The body (`emitBlockGraph`) is the
    /// `// STUB(W9-emit)` RPN driver; this emits a marker line in its place.
    ///
    /// `display_name` is `fd->getDisplayName()`; `model_name` is the prototype
    /// model name when `printModelInDecl()` (None when the model is hidden);
    /// `ret_type` is the return-type token (`fd->getFuncProto()` output type
    /// name, defaulting to `"void"`); `params` are the input parameters'
    /// `(type, name)` tokens.  Returns the rendered C text.
    pub fn doc_function(
        &mut self,
        display_name: &str,
        model_name: Option<&str>,
        ret_type: &str,
        params: &[(String, String)],
    ) -> String {
        self.emit.set_output_stream();
        let markup = MarkupRef::none();

        let id1 = self.emit.begin_function();
        // (unlace warnstyle, DIV-39) defensive: never let a pending slug from a
        // previous function on this shared printer leak into this one.
        self.eol_warns.clear();
        // emitCommentFuncHeader(fd) — the header comment line (the full
        // CommentSorter is the comment item; emit the marker header).
        self.emit.tag_line();

        // --- emitFunctionDeclaration -------------------------------------
        let idp = self.emit.begin_func_proto();
        // emitPrototypeOutput: the return type token.
        let idret = self.emit.begin_return_type(&markup);
        self.emit
            .tag_type(ret_type, SyntaxHighlight::TypeColor, &markup);
        self.emit.end_return_type(idret);
        self.emit.spaces(1, 0);
        // option_convention: print the model name when shown.
        if self.options.convention
            && let Some(m) = model_name {
                self.emit.print(m, SyntaxHighlight::KeywordColor);
                self.emit.spaces(1, 0);
            }
        let id1g = self.emit.open_group();
        self.emit
            .tag_func_name(display_name, SyntaxHighlight::FuncnameColor, &markup);
        // function_call spacing (C++ function_call.spacing==0,bump==0).
        let id2 = self.emit.open_paren("(", 0);
        // emitPrototypeInputs: void or the comma-separated (type name) list.
        if params.is_empty() {
            self.emit
                .tag_type("void", SyntaxHighlight::TypeColor, &markup);
        } else {
            for (i, (ty, nm)) in params.iter().enumerate() {
                if i != 0 {
                    self.emit.print(",", SyntaxHighlight::NoColor);
                    self.emit.spaces(1, 0);
                }
                self.emit.tag_type(ty, SyntaxHighlight::TypeColor, &markup);
                if !nm.is_empty() {
                    self.emit.spaces(1, 0);
                    self.emit
                        .tag_variable(nm, SyntaxHighlight::ParamColor, &markup);
                }
            }
        }
        self.emit.close_paren(")", id2);
        self.emit.close_group(id1g);
        self.emit.end_func_proto(idp);

        let id = self
            .emit
            .open_brace_indent("{", self.output_brace(self.options.brace_func));
        // emitLocalVarDecls(fd) + emitBlockGraph(...).  The RPN body *engine*
        // (push_op/push_atom/op_binary/op_unary/emit_op/emit_atom/parentheses)
        // is now ported and unit-tested in this module (byte-faithful to the
        // C++ emitOp/emitAtom/parentheses).  Driving it over a real function
        // body is blocked NOT in the printer but UPSTREAM: the merged tree's
        // decompilation passes (heritage / simplification / merge / type +
        // proto recovery / block structuring) are stubs, so the IR
        // reaching the printer is raw lifted p-code (no HighVariables with
        // symbols, no recovered types, no structured blocks) — printing it
        // would emit non-C garbage, not byte-parity (see LOSS-130 / W10).
        // Until those passes land, the body slot is a single marker line so the
        // shell is a complete, brace-matched function.
        self.emit.tag_line();
        self.emit.print(
            "/* WARNING: body emission blocked on upstream decompilation passes (raw p-code IR) */",
            SyntaxHighlight::CommentColor,
        );
        // (unlace warnstyle, DIV-39) drain any slug still pending from a
        // construct with no closer flush point onto the last body line, so no
        // warning is ever silently dropped or carried out of this function.
        self.flush_eol_warnings();
        self.emit.close_brace_indent("}", id);
        self.emit.tag_line();
        self.emit.end_function(id1);
        self.emit.flush().expect("PrintC::docFunction: emit flush");
        self.emit.output_str().to_string()
    }

    // --- the options.cc `// STUB(W8)` print setters (now wired) -----------

    /// C++ `PrintC::setNULLPrinting` (options.cc:444).
    pub fn set_null_printing(&mut self, val: bool) {
        self.options.set_null_printing(val);
    }
    /// C++ `PrintC::setInplaceOps` (options.cc:459).
    pub fn set_inplace_ops(&mut self, val: bool) {
        self.options.set_inplace_ops(val);
    }
    /// C++ `PrintC::setConvention` (options.cc:474).
    pub fn set_convention_printing(&mut self, val: bool) {
        self.options.set_convention(val);
    }
    /// C++ `PrintC::setNoCastPrinting` (options.cc:489).
    pub fn set_no_cast_printing(&mut self, val: bool) {
        self.options.set_no_cast_printing(val);
    }
    /// C++ `PrintC::setHideImpliedExts` (options.cc:504).
    pub fn set_hide_implied_exts(&mut self, val: bool) {
        self.options.set_hide_implied_exts(val);
    }
    /// C++ `glb->print->setMaxLineSize(val)` (options.cc:524). Plain-text output
    /// goes through [`EmitPrettyPrint`] from here on, which breaks lines longer
    /// than `val`; the markup back-end is left unbroken.
    pub fn set_max_line_size(&mut self, val: int4) -> UnlaceResult<()> {
        EmitPrettyPrint::new().set_max_line_size_pretty(val)?;
        self.plain_line_size = Some(val);
        if !self.emit.emits_markup() {
            self.emit = self.plain_emit();
        }
        Ok(())
    }
    /// Print unbroken lines until [`Self::restore_line_size`], for a render
    /// whose records (warning lines, line mappings, call-argument positions)
    /// address its text line by line. Returns the line size to restore.
    pub fn suspend_line_size(&mut self) -> Option<int4> {
        let size = self.plain_line_size.take();
        if size.is_some() && !self.emit.emits_markup() {
            self.emit = self.plain_emit();
        }
        size
    }
    /// Undo [`Self::suspend_line_size`].
    pub fn restore_line_size(&mut self, size: Option<int4>) {
        if size.is_some() {
            self.plain_line_size = size;
            if !self.emit.emits_markup() {
                self.emit = self.plain_emit();
            }
        }
    }
    /// A fresh plain-text back-end honoring [`Self::plain_line_size`] for C
    /// output only (Go ends a statement at a line break; Rust and Go print
    /// unbroken), carrying the current indent increment.
    pub(super) fn plain_emit(&self) -> PrintEmit {
        let mut emit = match self
            .plain_line_size
            .filter(|_| self.out_lang == crate::lang::OutLang::C)
        {
            Some(size) => {
                let mut pretty = EmitPrettyPrint::new();
                pretty
                    .set_max_line_size_pretty(size)
                    .expect("plain_line_size was validated when set");
                PrintEmit::Pretty(Box::new(pretty))
            }
            None => PrintEmit::NoMarkup(EmitNoMarkup::new()),
        };
        emit.set_indent_increment(self.emit.get_indent_increment());
        emit
    }
    /// C++ `glb->print->setIndentIncrement(val)` (options.cc:541).
    pub fn set_indent_increment(&mut self, val: int4) {
        self.emit.set_indent_increment(val);
    }
    /// C++ `glb->print->setLineCommentIndent(val)` (options.cc:559).
    pub fn set_line_comment_indent(&mut self, val: int4) -> UnlaceResult<()> {
        self.context
            .set_line_comment_indent(val, self.plain_line_size.unwrap_or(int4::MAX))
    }
    /// C++ `glb->print->getHeaderComment()` (options.cc:583).
    pub fn header_comment_flags(&self) -> uint4 {
        self.context.header_comment()
    }
    /// C++ `glb->print->setHeaderComment(flags)` (options.cc:589).
    pub fn set_header_comment_flags(&mut self, flags: uint4) {
        self.context.set_header_comment(flags);
    }
    /// C++ `glb->print->getInstructionComment()` (options.cc:604).
    pub fn instruction_comment_flags(&self) -> uint4 {
        self.context.instruction_comment()
    }
    /// C++ `glb->print->setInstructionComment(flags)` (options.cc:610).
    pub fn set_instruction_comment_flags(&mut self, flags: uint4) {
        self.context.set_instruction_comment(flags);
    }
    /// C++ `glb->print->setIntegerFormat(p1)` (options.cc:623).
    pub fn set_integer_format(&mut self, fmt: &str) -> UnlaceResult<()> {
        self.context.set_integer_format(fmt)
    }
    /// C++ `glb->print->setNamespaceStrategy(strategy)` (options.cc:1014).
    ///
    /// The option surface (`options::NamespaceStrategy`) and the print-context
    /// surface (`printlanguage::NamespaceStrategy`) are the same 3-variant
    /// `minimal`/`none`/`all` enum (printlanguage.hh); convert across the boundary.
    pub fn set_namespace_strategy(&mut self, strategy: NamespaceStrategy) {
        use crate::printlanguage::NamespaceStrategy as PlStrat;
        let pl = match strategy {
            NamespaceStrategy::Minimal => PlStrat::MinimalNamespaces,
            NamespaceStrategy::None => PlStrat::NoNamespaces,
            NamespaceStrategy::All => PlStrat::AllNamespaces,
        };
        self.context.set_namespace_strategy(pl);
    }
    /// C++ `PrintC::setBraceFormat*` (options.cc:655-664).
    pub fn set_brace_format(&mut self, category: crate::options::BraceCategory, style: BraceStyle) {
        use crate::options::BraceCategory;
        match category {
            BraceCategory::Function => self.options.set_brace_format_function(style),
            BraceCategory::IfElse => self.options.set_brace_format_ifelse(style),
            BraceCategory::Loop => self.options.set_brace_format_loop(style),
            BraceCategory::Switch => self.options.set_brace_format_switch(style),
        }
    }
    /// C++ `PrintC::setCommentStyle` (options.cc:570).
    /// (unlace, Phase 3) Reset the PrintC-proper state the wire options mutate
    /// to the construction defaults — the PrintC share of the upstream
    /// `PrintLanguage::resetDefaults`/`resetDefaultsPrintC` chain the
    /// ghidra-mode `setOptions` reset needs (`Architecture::
    /// reset_wire_defaults`): the [`PrintCOptions`] block (nullprinting,
    /// inplaceops, conventionprinting, nocastprinting, hideimpliedexts, the
    /// four brace formats — plus the unlace rendering toggles, whose
    /// construction defaults ARE the shipped defaults) and the emitter's
    /// indent increment (Java default 2), and the plain-text line size (back
    /// to unbroken lines).  `comment_style` is a recorded-no-op stub with no
    /// state to reset; everything context-held (integer format, comment
    /// indent/flags, namespace strategy, language) is reset by the caller's
    /// fresh [`PrintContext`](crate::printlanguage::PrintContext).
    pub fn reset_wire_option_defaults(&mut self) {
        self.options = PrintCOptions::new();
        self.plain_line_size = None;
        if !self.emit.emits_markup() {
            self.emit = self.plain_emit();
        }
        self.emit.set_indent_increment(2);
    }

    pub fn set_comment_style(&mut self, _style: &str) {
        // STUB(comment): the slash-star vs slash-slash comment delimiters live
        // with the comment item; recorded as a no-op so the option succeeds.
    }

    // =====================================================================
    // The PrintLanguage RPN driver (printlanguage.cc:129-580), realized here
    // because printlanguage.rs deferred its token-emitting driver to this
    // closure (the driver + the PrintC op-emitters are one unit; see the
    // module header).  These methods drive the real [`Emit`] back-end.
    //
    // The IR-coupled leaves of the driver (the implied-varnode `recurse` step
    // `defOp->getOpcode()->push(...)`, and `pushVnExplicit`'s symbol/constant
    // resolution) need the stubbed Symbol/HighVariable/Datatype/TypeOp
    // subsystems and the proto-/type-/heritage-recovery passes, which the
    // merged tree leaves unported (LOSS-130: the decompilation passes are
    // stubs, so the IR reaching the printer is raw lifted p-code).  The
    // RPN *engine* below is therefore transcribed and unit-tested against
    // synthetic atoms/tokens (byte-faithful to `emitOp`/`emitAtom`/
    // `parentheses`); the IR-leaf push is the `// STUB(decompile-passes)`
    // edge handed to the caller via [`push_atom`].
    // =====================================================================

    /// Borrow the emit back-end (so a body driver can interleave `tag_line`
    /// etc. between RPN expressions).  A [`PrintEmit`]; use
    /// [`output_str`](PrintEmit::output_str) for the plain-text buffer.
    pub fn emit_mut(&mut self) -> &mut PrintEmit {
        &mut self.emit
    }

    /// Whether the RPN stack is fully drained (C++ `isStackEmpty`).
    pub fn is_stack_empty(&self) -> bool {
        self.revpol.is_empty() && self.nodepend.is_empty()
    }

    /// C++ `PrintLanguage::clear` (printlanguage.cc:685) — drop any partial RPN
    /// state, leaving the modstack/scope to the [`PrintContext`].
    pub fn clear_rpn(&mut self) {
        self.revpol.clear();
        self.nodepend.clear();
        self.pending = 0;
        if let Some(record) = self.rpn_record.as_mut() {
            record.reset_open();
        }
    }

    /// C++ `PrintLanguage::clear` (printlanguage.cc:682), which `docFunction`
    /// runs when a document throws ("Don't leave printer in partial state"):
    /// drop what an interrupted document left behind, keeping every option.
    /// Beyond the upstream emitter/RPN/mod/scope reset this drops the unlace
    /// per-document state (the scoped `fd` pointer, unflushed end-of-line
    /// warnings, the declared locals, the pointer-argument record, the
    /// tree-capture record) and returns a markup render's back-end to plain text,
    /// the state every document starts from.
    pub fn clear(&mut self) {
        if self.emit.emits_markup() {
            self.set_markup(false);
        }
        self.emit.set_plain_statement_provenance(false);
        self.emit.set_output_stream();
        self.emit.clear();
        self.context.clear();
        self.clear_rpn();
        self.rpn_record = None;
        self.emit_fd = None;
        self.eol_warns.clear();
        self.warnings.clear();
        self.void_tail_return = None;
        self.stmt_op = None;
        self.label_names.clear();
        self.local_name_overrides.clear();
        self.indirect_input_aliases.clear();
        self.signature_param_names.clear();
        self.go_suppressed_labels.clear();
        self.oslog_hidden.clear();
        self.local_name_aliases.clear();
        self.local_name_standalones.clear();
        self.declared_locals.clear();
        self.declared_local_index.clear();
        self.declared_entry = None;
        self.pointer_decls.clear();
        self.record_pointer_arguments = false;
        self.pointer_record = None;
        self.pointer_candidate = None;
    }

    /// C++ `PrintLanguage::pushOp` (printlanguage.cc:129).  Push an operator
    /// token onto the RPN stack, emitting any front part of the enclosing
    /// operator and opening the right group/paren.
    pub fn push_op(&mut self, tok: &'static OpToken, op: Option<crate::printlanguage::IrKey>) {
        if self.pending < self.nodepend.len() {
            self.recurse(); // Pending varnode pushes before op
        }
        let paren;
        let id;
        if self.revpol.is_empty() {
            paren = false;
            self.rpn_open(tok, op, paren);
            id = self.emit.open_group();
        } else {
            let back = self.revpol.last().unwrap().clone();
            self.emit_op(&back);
            // Reflect any id2 mutation emit_op performed back onto the stack.
            *self.revpol.last_mut().unwrap() = back;
            paren = self.parentheses_top(tok);
            self.rpn_open(tok, op, paren);
            if paren {
                let first = self.emit.token_count();
                id = self.emit.open_paren(crate::printlanguage::OPEN_PAREN, 0);
                self.rpn_engine_tokens(first);
            } else {
                id = self.emit.open_group();
            }
        }
        self.revpol.push(ReversePolish {
            tok,
            visited: 0,
            paren,
            op,
            id,
            id2: 0,
        });
    }

    /// C++ `PrintLanguage::pushAtom` (printlanguage.cc:162).  Push a leaf token,
    /// draining as much of the RPN stack as is now complete.
    pub fn push_atom(&mut self, atom: &Atom) {
        if self.pending < self.nodepend.len() {
            self.recurse();
        }
        if self.revpol.is_empty() {
            self.rpn_leaf_open(atom);
            self.emit_atom(atom);
            self.rpn_close();
        } else {
            let back = self.revpol.last().unwrap().clone();
            self.emit_op(&back);
            *self.revpol.last_mut().unwrap() = back;
            self.rpn_leaf_open(atom);
            self.emit_atom(atom);
            self.rpn_close();
            loop {
                {
                    let top = self.revpol.last_mut().unwrap();
                    top.visited += 1;
                    if top.visited != top.tok.stage {
                        break;
                    }
                }
                let entry = self.revpol.last().unwrap().clone();
                self.emit_op(&entry);
                if entry.paren {
                    let first = self.emit.token_count();
                    self.emit
                        .close_paren(crate::printlanguage::CLOSE_PAREN, entry.id);
                    self.rpn_engine_tokens(first);
                } else {
                    self.emit.close_group(entry.id);
                }
                self.revpol.pop();
                self.rpn_close();
                if self.revpol.is_empty() {
                    break;
                }
            }
        }
    }

    /// C++ `PrintLanguage::pushVn` (printlanguage.cc:197).  Queue an implied
    /// Varnode whose producing expression will be recursed.  Inputs of one op
    /// are pushed in reverse order (C++ comment).
    pub fn push_vn(
        &mut self,
        vn: crate::printlanguage::IrKey,
        op: crate::printlanguage::IrKey,
        m: uint4,
    ) {
        self.nodepend
            .push(crate::printlanguage::NodePending::new(vn, op, m));
    }

    /// C++ `PrintLanguage::recurse` (printlanguage.cc:521).  Resolve every
    /// pending Varnode the current op claimed: in C++ an implied one expands its
    /// defining op (`defOp->getOpcode()->push`) and an explicit one becomes a
    /// leaf atom (`pushVnExplicit`).
    ///
    /// STUB(decompile-passes): the implied-op `push` dispatch and the explicit
    /// `pushVnExplicit` symbol/constant resolution need the stubbed
    /// Symbol/HighVariable/Datatype/TypeOp graph (absent in the merged tree).
    /// The `op_binary`/`op_unary` scaffold above therefore pushes already-
    /// resolved leaf [`Atom`]s directly (never via `push_vn`), so on the tested
    /// path `nodepend` is empty and this drains nothing.  When the upstream
    /// passes land and the body driver stages implied varnodes, this restores
    /// the C++ claim/pop loop; the pop-without-dispatch here just guarantees
    /// termination until then.
    pub fn recurse(&mut self) {
        let modsave = self.context.mods();
        let last_pending = self.pending;
        self.pending = self.nodepend.len();
        // C++: while (lastPending < pending) { pop nodepend.back(); ... }
        while self.nodepend.len() > last_pending {
            if let Some(pend) = self.nodepend.pop() {
                self.context.set_mods(pend.vnmod);
                // STUB(decompile-passes): no implied/explicit leaf expansion.
            }
            self.pending = self.nodepend.len();
        }
        self.context.set_mods(modsave);
    }

    /// C++ `PrintLanguage::opBinary` (printlanguage.cc:553) — the data-flow-free
    /// scaffold: push the operator, then its two operand atoms (supplied by the
    /// caller as the IR-leaf hook).  The negate-token flip is applied.
    pub fn op_binary(
        &mut self,
        tok: &'static OpToken,
        op: Option<crate::printlanguage::IrKey>,
        lhs: &Atom,
        rhs: &Atom,
    ) {
        let tok = if self.context.is_set(modifiers::NEGATETOKEN) {
            self.context.unset_mod(modifiers::NEGATETOKEN);
            token_negate(tok).unwrap_or(tok)
        } else {
            tok
        };
        self.push_op(tok, op);
        // C++ pushes in[1] then in[0]; pushAtom drains in stack order, so the
        // operands print in0 <op> in1.
        self.push_atom(lhs);
        self.push_atom(rhs);
    }

    /// C++ `PrintLanguage::opUnary` (printlanguage.cc:573) — the scaffold form.
    pub fn op_unary(
        &mut self,
        tok: &'static OpToken,
        op: Option<crate::printlanguage::IrKey>,
        operand: &Atom,
    ) {
        self.push_op(tok, op);
        self.push_atom(operand);
    }

    /// (unlace) The [`Funcdata`] published for the duration of
    /// [`emit_function_document`](PrintC::emit_function_document), else `None`.
    ///
    /// SAFETY: see the `emit_fd` field doc — the pointer is live only within that
    /// call, `fd` outlives it and is never mutated through the pointer, and it
    /// aliases `fd` (a distinct object from `self`).
    pub(super) fn markup_fd(&self) -> Option<&Funcdata> {
        self.emit_fd.map(|p| unsafe { &*p })
    }

    /// (unlace) The `MarkupRef` for an RPN operator token from its arena key (C++
    /// `EmitMarkup::tagOp` derefs the entry's `PcodeOp *` for `opref =
    /// getTime()`).  The op's `get_time()` is exactly the `<seqnum uniq>`
    /// `PcodeOp::encode` writes into the `<ast>`, so the token resolves by
    /// construction.  Returns `none()` (no deref) unless the markup back-end is
    /// active and `fd` is in scope — a no-op on the byte-exact plain-text path.
    pub(super) fn markup_for_op_key(
        &self,
        op_key: Option<crate::printlanguage::IrKey>,
    ) -> MarkupRef {
        if !self.emit.emits_markup() {
            return MarkupRef::none();
        }
        match self.markup_fd() {
            Some(fd) => MarkupRef::op(resolve_op_ref(fd, op_key)),
            None => MarkupRef::none(),
        }
    }

    /// (unlace) The `MarkupRef` for a leaf [`Atom`] from its carried op/varnode
    /// arena keys (C++ `EmitMarkup::tagVariable`/`tagOp`/`tagField`/`tagCaseLabel`
    /// deref the `Varnode *`/`PcodeOp *`).  `varref = vn->getCreateIndex()` and
    /// `opref = op->getTime()` are the SAME ids `Funcdata::encode` writes into the
    /// `<ast>` (`<addr ref>` / `<seqnum uniq>`), so a clang token resolves against
    /// the AST by construction.  `none()` (no deref) on the plain-text path.
    pub(super) fn markup_for_atom(&self, atom: &Atom) -> MarkupRef {
        if !self.emit.emits_markup() {
            return MarkupRef::none();
        }
        let fd = match self.markup_fd() {
            Some(fd) => fd,
            None => return MarkupRef::none(),
        };
        let mut m = MarkupRef::none();
        m.opref = resolve_op_ref(fd, atom.op);
        if let crate::printlanguage::AtomData::Vn(vn_key) = atom.data {
            m.varref = resolve_var_ref(fd, vn_key);
        }
        m
    }

    /// (unlace) The `MarkupRef` for a DIRECT tag site that already holds an `OpId`
    /// (C++ passes the `PcodeOp *`): `opref = op->getTime()`, the `<ast>`
    /// `<seqnum uniq>`. Gated on the markup back-end or an explicitly requested
    /// plain statement sidecar, so the ordinary plain-text path does no lookup.
    #[doc(hidden)]
    pub fn op_markup(&self, fd: &Funcdata, op: OpId) -> MarkupRef {
        if !self.emit.emits_markup() && !self.emit.captures_plain_statement_provenance() {
            return MarkupRef::none();
        }
        MarkupRef::op(fd.obank().get(op).map(|o| o.get_time() as uintb))
    }

    /// C++ `PrintLanguage::emitOp` (printlanguage.cc:332) — resolve final
    /// spacing / parens for one RPN entry at its current stage.  Mutates the
    /// entry's `id2` for surround tokens (mirrored back by the callers).
    pub(super) fn emit_op(&mut self, entry_in: &ReversePolish) {
        let first = self.emit.token_count();
        self.emit_op_tokens(entry_in);
        self.rpn_engine_tokens(first);
    }

    /// The body of [`emit_op`](Self::emit_op).
    pub(super) fn emit_op_tokens(&mut self, entry_in: &ReversePolish) {
        let mut entry = entry_in.clone();
        // (unlace) The operator's markup (C++ `EmitMarkup::tagOp` derefs the entry's
        // `PcodeOp *` for `opref = getTime()`).  Resolved from the entry's arena
        // key; `none()` (no lookup) on the plain-text path so the datatest bytes
        // are unchanged.
        let op_markup = self.markup_for_op_key(entry.op);
        match entry.tok.token_type {
            TokenType::Binary => {
                let text = match entry.visited {
                    1 => self.op_spelling(entry.tok),
                    2 if !entry.tok.print2.is_empty() => entry.tok.print2,
                    _ => return,
                };
                if self.out_lang == crate::lang::OutLang::Go {
                    self.emit.print(
                        &" ".repeat(entry.tok.spacing.max(0) as usize),
                        SyntaxHighlight::NoColor,
                    );
                } else {
                    self.emit.spaces(entry.tok.spacing, entry.tok.bump);
                }
                self.emit.tag_op(text, SyntaxHighlight::NoColor, &op_markup);
                self.emit.spaces(entry.tok.spacing, entry.tok.bump);
            }
            TokenType::UnaryPrefix => {
                if entry.visited != 0 {
                    return;
                }
                if std::ptr::eq(entry.tok, &tokens::ADDRESSOF)
                    && self
                        .pointer_candidate
                        .as_ref()
                        .is_some_and(|c| Some(op_key(c.address_op)) == entry.op)
                    && let (Some(mut candidate), PrintEmit::NoMarkup(emit), Some(record)) = (
                        self.pointer_candidate.take(),
                        &mut self.emit,
                        self.pointer_record.as_mut(),
                    ) {
                        candidate.call.position = emit.position();
                        record.calls.push(candidate.call);
                    }
                self.emit.tag_op(
                    self.op_spelling(entry.tok),
                    SyntaxHighlight::NoColor,
                    &op_markup,
                );
                self.emit.spaces(entry.tok.spacing, entry.tok.bump);
            }
            TokenType::Postsurround => {
                if entry.visited == 0 {
                    return;
                }
                if entry.visited == 1 {
                    if self.out_lang == crate::lang::OutLang::Go {
                        self.emit.print(
                            &" ".repeat(entry.tok.spacing.max(0) as usize),
                            SyntaxHighlight::NoColor,
                        );
                    } else {
                        self.emit.spaces(entry.tok.spacing, entry.tok.bump);
                    }
                    entry.id2 = self.emit.open_paren(entry.tok.print1, 0);
                    self.emit.spaces(0, entry.tok.bump);
                } else {
                    self.emit.close_paren(entry.tok.print2, entry.id2);
                }
            }
            TokenType::Presurround => {
                if entry.visited == 2 {
                    return;
                }
                if entry.visited == 0 {
                    entry.id2 = self.emit.open_paren(entry.tok.print1, 0);
                } else {
                    self.emit.close_paren(entry.tok.print2, entry.id2);
                    self.emit.spaces(entry.tok.spacing, entry.tok.bump);
                }
            }
            TokenType::Space => {
                if entry.visited != 1 {
                    return;
                }
                self.emit.spaces(entry.tok.spacing, entry.tok.bump);
            }
            TokenType::HiddenFunction => {
                // Never directly prints anything.
            }
        }
        // Persist any id2 update for the corresponding stack entry: find the
        // top entry whose token/id matches and copy id2 (the only mutated
        // field).  push_op/push_atom re-read the top after calling emit_op.
        if let Some(top) = self.revpol.last_mut()
            && std::ptr::eq(top.tok, entry.tok) && top.id == entry.id {
                top.id2 = entry.id2;
            }
    }

    /// C++ `PrintLanguage::emitAtom` (printlanguage.cc:379) — send a leaf token
    /// to the low-level emitter according to its tag type.
    pub(super) fn emit_atom(&mut self, atom: &Atom) {
        // (unlace) Resolve the leaf's markup (C++ `EmitMarkup::tag*` derefs the
        // atom's `Varnode *`/`PcodeOp *` for `varref`/`opref`).  `none()` (no
        // lookup) on the plain-text path, so the datatest bytes are unchanged.
        let markup = self.markup_for_atom(atom);
        // (unlace outlang) A recovered name can be a demangled path (`hello::main`)
        // or carry generic arguments (`driftsort_main<T>`). C emits those verbatim
        // and is equally not-C for it; Rust output is parsed, so the same latent
        // problem has to be fixed rather than tolerated. Off for C, so the corpus
        // cannot move.
        let ident = |p: &PrintC, n: &String| -> Option<String> {
            let s = if p.out_lang == crate::lang::OutLang::Go {
                if atom.highlight == crate::printlanguage::SyntaxHighlight::const_color {
                    return None;
                }
                let qualified = n.replace("::", ".");
                let current = p
                    .markup_fd()
                    .map(|fd| fd.get_display_name().replace("::", "."));
                let bare = current
                    .as_deref()
                    .and_then(|name| name.rsplit_once('.'))
                    .and_then(|(pkg, _)| {
                        qualified
                            .strip_prefix(pkg)
                            .and_then(|tail| tail.strip_prefix('.'))
                    })
                    .unwrap_or(&qualified);
                crate::langgo::path(bare)
            } else {
                crate::rusttypes::sanitize_path(n)
            };
            (p.lang().sanitize_identifiers && &s != n).then_some(s)
        };
        match atom.tag {
            TagType::Syntax => self.emit.print(&atom.name, to_emit_hl(atom.highlight)),
            TagType::LiteralToken => {
                self.emit
                    .tag_variable(&atom.name, to_emit_hl(atom.highlight), &markup)
            }
            TagType::VarToken => {
                let n = ident(self, &atom.name);
                let n = n.as_ref().unwrap_or(&atom.name);
                self.emit
                    .tag_variable(n, to_emit_hl(atom.highlight), &markup)
            }
            TagType::FuncToken => {
                let n = ident(self, &atom.name);
                let n = n.as_ref().unwrap_or(&atom.name);
                self.emit
                    .tag_func_name(n, to_emit_hl(atom.highlight), &markup)
            }
            TagType::OpToken => self
                .emit
                .tag_op(&atom.name, to_emit_hl(atom.highlight), &markup),
            TagType::TypeToken => {
                self.emit
                    .tag_type(&atom.name, to_emit_hl(atom.highlight), &markup)
            }
            TagType::FieldToken => {
                let name = if self.out_lang == crate::lang::OutLang::Go {
                    crate::langgo::identifier(&atom.name)
                } else if self.out_lang == crate::lang::OutLang::C {
                    sanitize_type_name(&atom.name).into_owned()
                } else {
                    atom.name.clone()
                };
                self.emit
                    .tag_field(&name, to_emit_hl(atom.highlight), atom.offset, &markup)
            }
            TagType::BitFieldToken => {
                let name = if self.out_lang == crate::lang::OutLang::Go {
                    crate::langgo::identifier(&atom.name)
                } else if self.out_lang == crate::lang::OutLang::C {
                    sanitize_type_name(&atom.name).into_owned()
                } else {
                    atom.name.clone()
                };
                self.emit
                    .tag_bit_field(&name, to_emit_hl(atom.highlight), atom.offset, &markup)
            }
            TagType::CaseToken => {
                let value = match atom.data {
                    crate::printlanguage::AtomData::IntValue(v) => v,
                    _ => 0,
                };
                self.emit
                    .tag_case_label(&atom.name, to_emit_hl(atom.highlight), &markup, value)
            }
            TagType::BlankToken => {} // Print nothing.
        }
    }

    /// C++ `PrintLanguage::parentheses` against the current RPN top
    /// (printlanguage.cc:270 reads `revpol.back()`).  Delegates to the pure
    /// [`crate::printlanguage::parentheses`] with the previous token for the
    /// `HiddenFunction` arm.
    pub(super) fn parentheses_top(&self, op2: &OpToken) -> bool {
        if op2.paren_before_angle && crate::rustintegers::cast_before_angle(&self.revpol) {
            return true;
        }
        let top = self.revpol.last().expect("parentheses on empty revpol");
        let prev = if self.revpol.len() > 1 {
            Some(self.revpol[self.revpol.len() - 2].tok)
        } else {
            None
        };
        parentheses(top, op2, prev)
    }
}
