//! Document/function framing and the pointer record.

use super::*;

impl PrintC {
    /// A plain render starts this function's record when asked to. A markup pass
    /// keeps the plain render's record of the same function (provenance and
    /// token renders follow it), never another function's.
    pub(super) fn begin_pointer_record(&mut self, fd: &Funcdata) {
        self.pointer_candidate = None;
        if !self.emit.emits_markup() {
            self.pointer_record = (self.record_pointer_arguments
                && self.out_lang == crate::lang::OutLang::C)
                .then(|| crate::pointerargs::Record::new(fd))
                .flatten();
        } else if self
            .pointer_record
            .as_ref()
            .is_some_and(|r| Some(&r.entry) != crate::pointerargs::entry(fd.get_address()).as_ref())
        {
            self.pointer_record = None;
        }
    }

    /// Record pointer-argument facts during the next plain C render, discarding
    /// any record a previous render left behind.
    pub fn set_record_pointer_arguments(&mut self, on: bool) {
        self.record_pointer_arguments = on;
        self.pointer_record = None;
    }

    /// The facts recorded by the last plain render, whose text was `untrimmed`,
    /// positioned against that text with its leading newlines removed. Stops
    /// recording until the next [`set_record_pointer_arguments`](Self::set_record_pointer_arguments).
    pub fn take_pointer_arguments(
        &mut self,
        untrimmed: &str,
    ) -> Option<crate::pointerargs::Record> {
        self.record_pointer_arguments = false;
        let mut record = self.pointer_record.take()?;
        record.trim_lines(untrimmed);
        Some(record)
    }

    /// The analysis warnings the last plain render, whose text was `untrimmed`,
    /// wrote, positioned against that text with its leading newlines removed.
    pub fn take_warnings(&mut self, untrimmed: &str) -> Vec<crate::functionwarnings::Warning> {
        let mut warnings = std::mem::take(&mut self.warnings);
        crate::functionwarnings::trim_lines(&mut warnings, untrimmed);
        warnings
    }

    /// Record `warning` on the line of the comment `token` just written; a
    /// markup pass records nothing.
    pub(super) fn record_warning(
        &mut self,
        mut warning: crate::functionwarnings::Warning,
        token: &str,
    ) {
        if let PrintEmit::NoMarkup(emit) = &mut self.emit {
            warning.line = emit.position().line - token.matches('\n').count();
            self.warnings.push(warning);
        }
    }

    /// C++ `PrintC::docFunction` (printc.cc:2790), transcribed faithfully and
    /// driven over a real [`Funcdata`] + [`Architecture`]: emit the signature
    /// shell (real return type from the recovered proto), then the **structured
    /// body** (`emitBlockGraph(&fd->getStructure())`) when `sblocks` is present,
    /// and return the plain-text C.
    ///
    /// The emission itself is [`emit_function_document`](PrintC::emit_function_document),
    /// shared verbatim with [`doc_function_markup`](PrintC::doc_function_markup)
    /// so the plain-text and markup entries can never drift; this entry keeps the
    /// active back-end (`EmitNoMarkup`, byte-exact) and returns its text.
    pub fn doc_function_full(&mut self, fd: &Funcdata, arch: &Architecture) -> String {
        self.emit_function_document(fd, arch);
        self.emit.output_str().to_string()
    }

    /// Emit plain C and retain only each statement root's `opref` in the same
    /// pass. This is intentionally smaller than token provenance: it exists so
    /// exact-site presentation repairs can bind a rendered statement to one
    /// p-code occurrence without paying for a second full markup render.
    pub fn doc_function_full_with_statement_provenance(
        &mut self,
        fd: &Funcdata,
        arch: &Architecture,
    ) -> (String, MarkupProvenance) {
        self.emit.set_plain_statement_provenance(true);
        self.emit_function_document(fd, arch);
        let text = self.emit.output_str().to_string();
        let provenance = self.emit.take_plain_statement_provenance();
        self.emit.set_plain_statement_provenance(false);
        (text, provenance)
    }

    /// Select whether `PrintC` emits token-markup (C++
    /// `EmitPrettyPrint::setMarkup`, prettyprint.cc:2531, driven from
    /// `ArchitectureGhidra`'s ctor `print->setMarkup(true)`, ghidra_arch.cc:917).
    /// Swaps the concrete [`PrintEmit`] variant; a fresh buffer either way (each
    /// leaf owns its own sink). The indent increment (`option indentincrement`)
    /// lives on the leaf and is carried into the new one, so a markup render and
    /// the plain renders after it keep the printer's setting. The standalone
    /// datatest path NEVER calls this, so `emit` stays `NoMarkup` and the
    /// 675-assertion byte output is untouched.
    pub fn set_markup(&mut self, val: bool) {
        self.emit = if val {
            let mut markup = PrintEmit::Markup(EmitMarkup::new());
            markup.set_indent_increment(self.emit.get_indent_increment());
            markup
        } else {
            self.plain_emit()
        };
    }

    /// Emit the ghidra-mode `decompileAt` clang token-markup `<function>` document
    /// (C++ `ArchitectureGhidra::print->docFunction(fd)`, ghidra_process.cc:329):
    /// run the IDENTICAL [`emit_function_document`](PrintC::emit_function_document)
    /// sequence that drives `doc_function_full`, but over an [`EmitMarkup`]
    /// back-end so each token carries its `opref`/`varref` (resolved to the SAME
    /// `get_time()` / `get_create_index()` that `Funcdata::encode`'s `<ast>` uses,
    /// so a token resolves against the AST by construction).  Returns the packed
    /// bytes; the back-end is restored to plain text so the printer stays reusable.
    pub fn doc_function_markup(&mut self, fd: &Funcdata, arch: &Architecture) -> Vec<u8> {
        self.doc_function_markup_data(fd, arch).0
    }

    /// Capture the source-line `opref`/`varref` associations produced by the
    /// same token stream as [`Self::doc_function_full`].
    pub fn doc_function_provenance(
        &mut self,
        fd: &Funcdata,
        arch: &Architecture,
    ) -> MarkupProvenance {
        self.doc_function_markup_data(fd, arch).1
    }

    /// The markup pass of [`Self::doc_function_provenance`] with every token
    /// captured at its plain-text position ([`crate::prettyprint::EmitToken`]).
    pub fn doc_function_tokens(
        &mut self,
        fd: &Funcdata,
        arch: &Architecture,
    ) -> (MarkupProvenance, Vec<crate::prettyprint::EmitToken>) {
        self.set_markup(true);
        self.emit.set_capture_tokens(true);
        self.emit_function_document(fd, arch);
        let _ = self.emit.flush();
        let provenance = self.emit.take_markup_provenance();
        let tokens = self.emit.take_markup_tokens();
        self.set_markup(false);
        (provenance, tokens)
    }

    pub(super) fn doc_function_markup_data(
        &mut self,
        fd: &Funcdata,
        arch: &Architecture,
    ) -> (Vec<u8>, MarkupProvenance) {
        self.set_markup(true);
        self.emit_function_document(fd, arch);
        // C++ docFunction ends in emit->flush(); EmitMarkup's flush is a no-op
        // (packed elements are self-delimiting), so the byte stream is complete.
        let _ = self.emit.flush();
        let bytes = self.emit.take_markup_bytes();
        let provenance = self.emit.take_markup_provenance();
        self.set_markup(false);
        (bytes, provenance)
    }

    /// (unlace) Render ONLY the function's prototype declaration —
    /// `<ret> <name>(<params>);` — as plain text, for the `unlace
    /// decompile-project` `.h` artifact.
    ///
    /// Mirrors [`doc_function_full`](PrintC::doc_function_full)'s capture
    /// harness (`set_output_stream()` reset → emit → `output_str()`), driving
    /// the IDENTICAL [`emit_prototype_declaration`](PrintC::emit_prototype_declaration)
    /// token sequence the full function document emits, so the `.h` prototype
    /// (minus the trailing `;` added here) matches the `.c` definition line
    /// char-for-char.  Deliberately does NOT emit the header warning comments
    /// (`emit_comment_func_header`) — prototype only.
    pub fn doc_prototype(&mut self, fd: &Funcdata, arch: &Architecture) -> String {
        self.emit.set_output_stream();
        // Same per-function realtypes context resolution as
        // `emit_function_document` — the type-name chokepoints read `rt_ctx`.
        self.rt_ctx = RealTypeCtx::for_function(fd, arch, self.out_lang);
        let markup = MarkupRef::none();
        self.emit_prototype_declaration(fd, arch, &markup);
        self.emit.print(";", SyntaxHighlight::NoColor);
        // C++ docFunction ends in emit->flush(); EmitNoMarkup writes straight
        // to its sink so this is a formality (kept for harness parity).
        let _ = self.emit.flush();
        self.emit.output_str().to_string()
    }

    /// (unlace) C++ `PrintC::docTypeDefinitions` (decompiler/cpp/printc.cc:2779):
    /// emit a C definition for every user-defined data-type in the factory, in
    /// [`TypeFactoryImpl::dependent_order`](crate::dtype::TypeFactoryImpl::dependent_order)
    /// (definition-before-use), skipping core types — the `.h` artifact of
    /// `unlace decompile-project`.
    ///
    /// Documented `(unlace)` divergences from the upstream emission (which prints
    /// one `typedef struct {…} name;` per type through the emitter):
    ///
    ///   * **forward-declaration block first**: every struct/union gets a
    ///     `typedef struct <n> <n>;` up front, then bodies follow as plain
    ///     `struct <n> { … };` in dependency order.  Upstream's anonymous
    ///     `typedef struct {…} n;` form cannot express a self-referential or
    ///     mutually-recursive pointer field; the tag+typedef split always can.
    ///     An incomplete (fieldless) struct emits ONLY the forward declaration,
    ///     annotated `/* opaque */`.
    ///   * **padding fields**: struct field-offset gaps and trailing padding
    ///     render as explicit `undefined1 _pad<hexoff>[N];` members so
    ///     `sizeof(struct <n>)` matches the decompiler's layout when recompiled.
    ///   * **name sanitisation + dedup**: a non-C identifier is rewritten
    ///     (annotated `/* renamed from "…" */`); a later duplicate name emits
    ///     `/* duplicate type name skipped: <n> */` instead of a redefinition.
    ///
    /// Emission is direct string building (no emitter markup exists for type
    /// definitions); the per-type body renderers are pure functions
    /// ([`compose_type_body`] etc.) for unit-testability.
    pub fn doc_type_definitions(&mut self, arch: &Architecture) -> String {
        let deporder =
            crate::structsynth::ledger::in_name_order(arch.types_impl().dependent_order());
        render_type_definitions(&deporder, RealTypeCtx::from_arch(arch, self.out_lang))
    }

    /// The shared body-emission sequence of C++ `PrintC::docFunction`
    /// (printc.cc:2790), back-end-agnostic: `beginFunction` → header comment →
    /// prototype declaration → `openBraceIndent` → local var decls → block graph →
    /// `closeBraceIndent` → `endFunction`.  Driven by whichever [`PrintEmit`]
    /// variant is active, so [`doc_function_full`](PrintC::doc_function_full)
    /// (plain text) and [`doc_function_markup`](PrintC::doc_function_markup)
    /// (packed markup) share ONE emission path — the token stream (and every
    /// `MarkupRef` populated below) is identical; only the leaf that serializes it
    /// differs.
    pub(super) fn emit_function_document(&mut self, fd: &Funcdata, arch: &Architecture) {
        self.emit.set_output_stream();
        self.local_name_overrides.clear();
        self.indirect_input_aliases.clear();
        self.signature_param_names.clear();
        self.go_suppressed_labels.clear();
        self.oslog_hidden.clear();
        self.local_name_aliases.clear();
        self.local_name_standalones.clear();
        self.declared_locals.clear();
        self.declared_local_index.clear();
        self.declared_entry = Some(fd.get_address().clone());
        self.pointer_decls.clear();
        if self.out_lang == crate::lang::OutLang::C {
            self.oslog_hidden = super::super::oslog::hidden_ops(fd, arch);
        }
        self.begin_pointer_record(fd);
        if !self.emit.emits_markup() {
            self.warnings.clear();
        }
        // (unlace `signedness`) Round the declared signedness of this function's
        // integer locals from the operations applied to them.  Computed before
        // any declaration is written and consumed by
        // `local_decl_type_and_comment` (the declaration) and `op_type_cast_ir`
        // (the casts the new declaration makes redundant).
        let cast_sign = arch.unlace_options.get::<crate::castsign::CastSign>().0
            && self.out_lang.profile().caps.integer_promotion;
        self.sign_plan = crate::typeround::plan(
            fd,
            arch.unlace_options.get::<crate::typeround::SignPolicy>(),
            cast_sign,
            arch.types_impl(),
            |high| {
                decl_type_representative(fd, arch, high)
                    .and_then(|vn| fd.vbank().get(vn))
                    .map(|v| v.get_type().clone())
            },
        );
        let promotes = !self.options.nocasts && self.out_lang.profile().caps.integer_promotion;
        self.cast_implied.begin(
            arch.unlace_options
                .get::<crate::castimplied::CastImplied>()
                .0
                && promotes,
            cast_sign,
            arch.unlace_options
                .get::<crate::castternary::CastTernary>()
                .0
                && promotes
                && arch.types().get_size_of_int() == 4,
            if promotes && arch.types().get_size_of_int() == 4 {
                arch.unlace_options.get::<crate::castwiden::CastWidenMode>()
            } else {
                crate::castwiden::CastWidenMode::Off
            },
            arch.unlace_options.get::<crate::castnarrow::CastNarrow>().0
                && promotes
                && arch.types().get_size_of_int() == 4,
        );
        self.stmt_op = None;
        // (unlace) Publish the fd for the fd-free RPN leaf emitters (emit_atom /
        // emit_op) to resolve op/varnode arena keys to the <ast> ids while markup
        // is active.  SAFETY: `fd` outlives this call; it is only ever read
        // (get_time/get_create_index), never mutated through the pointer, and
        // aliases `fd` (a distinct object from `self`), so no `&mut self` here
        // conflicts.  Cleared before return so the pointer never escapes the call.
        self.emit_fd = Some(fd as *const Funcdata);
        // (unlace) Resolve the `realtypes` rendering context once per function from
        // the live architecture (the gate + the `long`-is-8 data-model fact); every
        // type-name chokepoint below reads `self.rt_ctx`.
        self.rt_ctx = RealTypeCtx::for_function(fd, arch, self.out_lang);
        self.named_globals = crate::namedglobals::References::default();
        self.globalref = crate::globalref::plan(
            fd,
            arch,
            self.options.global_ref,
            self.out_lang == crate::lang::OutLang::C,
        );
        // commsorter.setupFunctionList(...) (C++ printc.cc:2799): place this
        // function's comments into their basic blocks so the body emitters can
        // pick them up in order.
        self.setup_comments(fd, arch);
        let markup = MarkupRef::none();

        self.emit_type_definition_preamble(fd);
        self.emit_bytearray_preamble(fd);

        let id1 = self.emit.begin_function();
        // emitCommentFuncHeader(fd): the header warning comments (C++
        // printc.cc:2801) — the `Comment::warningheader` lines the analysis
        // buffered into `glb->commentdb` (e.g. "Inlined function: X").  The full
        // CommentSorter is a separate item; the header subset that `print C`
        // renders before the prototype is emitted here from the comment database.
        self.emit_comment_func_header(fd, arch);
        self.emit.tag_line(); // emitCommentFuncHeader trailing tagLine

        // emitFunctionDeclaration shell (the prototype segment, shared with
        // `doc_prototype`).
        self.emit_prototype_declaration(fd, arch, &markup);
        // (unlace warnstyle, DIV-39) header-warning slugs collected by
        // emit_comment_func_header land at the end of the prototype line —
        // except under `braceformat function same`, where the brace shares
        // that line and must print BEFORE the comment (a `// slug {` would
        // swallow the brace).
        let id = if self.options.brace_func == BraceStyle::SameLine
            || self.out_lang == crate::lang::OutLang::Go
        {
            let id = self
                .emit
                .open_brace_indent("{", self.output_brace(self.options.brace_func));
            self.flush_eol_warnings();
            id
        } else {
            self.flush_eol_warnings();
            self.emit
                .open_brace_indent("{", self.output_brace(self.options.brace_func))
        };
        // emitLocalVarDecls(fd) (printc.cc:2805 / emitGlobalVarDeclsRecursive +
        // the scope walk): one `<type> <name>;` per named local HighVariable, in
        // name order, followed by a blank separating line before the body.  The
        // ScopeLocal symbol walk is the W4 surface; we emit from the named
        // HighVariables directly (the `unlace_name` stand-in), which is the same set
        // of locals the scope would declare.
        self.java_catches = if self.out_lang == crate::lang::OutLang::Java {
            crate::javatry::CatchTable::new(fd)
        } else {
            None
        };
        self.java_caught_shown.clear();
        self.java_idioms = if self.java_catches.is_some() {
            crate::javasync::method_idioms(fd)
        } else {
            std::collections::BTreeMap::new()
        };
        self.java_hidden.clear();
        self.java_sync_enters.clear();
        self.java_throw_userop = (self.out_lang == crate::lang::OutLang::Java
            && arch.unlace_options.get::<crate::coreoptions::JavaTry>().0)
            .then(|| {
                arch.userops
                    .get_op_by_name(b"throwException")
                    .map(|u| u.get_index() as u64)
            })
            .flatten();
        let atomic_return = if self.out_lang == crate::lang::OutLang::Go
            && !self
                .signature_param_names
                .values()
                .any(|name| name == "atomic" || name == "unsafe")
        {
            super::super::goatomicreturn::plan(fd, arch)
        } else {
            None
        };
        if let Some(plan) = atomic_return {
            crate::renderfault::check(fd.get_address().get_offset());
            if let Some(block) = fd.obank().get(plan.atomic).and_then(|op| op.get_parent()) {
                self.commsorter
                    .setup_block_list(fd.bblocks_ref().block(block).get_index());
            }
            self.emit.reset_pending_fired();
            self.emit_comment_group(fd, Some(plan.atomic));
            self.emit_go_atomic_return(fd, arch, &plan);
            self.emit_comment_group(fd, None);
        } else {
            let _emitted_decls = self.emit_local_var_decls(fd, arch);
            self.emit_indirect_input_aliases(fd);
            crate::renderfault::check(fd.get_address().get_offset());
            if fd.sblocks_get_size() != 0 {
                self.emit_function_body(fd, arch);
            } else {
                // No structured tree: keep the brace-matched shell and name the real
                // cause.  A caught pipeline abort discards the analyzed Funcdata, so
                // what is being rendered is the previous, un-decompiled one — that is
                // a pipeline failure (the driver stamped its reason), NOT structuring
                // declining on analyzed IR.
                self.emit.tag_line();
                let warning = match fd.unlace_pipeline_failure() {
                    Some(reason) => format!("WARNING: decompilation failed: {reason}"),
                    None => {
                        "WARNING: structured blocks unavailable (structuring declined)".to_string()
                    }
                };
                let text = format!("/* {warning} */");
                self.emit.print(&text, SyntaxHighlight::CommentColor);
                self.record_warning(crate::functionwarnings::Warning::new(None, &warning), &text);
            }
        }
        // (unlace warnstyle, DIV-39) drain any slug still pending from a
        // construct with no closer flush point onto the last body line, so no
        // warning is ever silently dropped or carried out of this function.
        self.flush_eol_warnings();
        self.emit.close_brace_indent("}", id);
        self.emit.tag_line();
        self.emit.end_function(id1);
        self.emit.flush().expect("PrintC::docFunction: emit flush");
        // (unlace) Retire the scoped fd pointer (see the field doc): it is valid
        // only for this call's dynamic extent.
        self.emit_fd = None;
    }
}
