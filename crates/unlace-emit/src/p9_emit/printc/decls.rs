//! Type-definition preamble, prototypes and local declarations.

use super::*;

/// A declaration's original storage key: (space name, space, offset).
pub(super) type StorageKey = Option<(String, std::rc::Rc<unlace_base::space::AddrSpace>, u64)>;
pub(super) type DeclDatatype = Option<std::rc::Rc<crate::dtype::Datatype>>;
pub(super) type RenderedLocalDecl = (
    String,
    String,
    Option<(String, int4)>,
    StorageKey,
    DeclDatatype,
);
pub(super) type LocalDeclTypeAndComment = (((String, String), StorageKey), DeclDatatype);
pub(super) type EmittedHighSymbol = (String, int4, DeclDatatype);

impl PrintC {
    /// (unlace `structdefs`) Emit the definitions of the composite/enum/typedef
    /// types this function's C names, above the function.
    ///
    /// Off by default, and a no-op for a function that names none.  The text is
    /// [`render_type_definitions`] over the referenced subset — the SAME
    /// renderer `unlace decompile-project` builds its `.h` type block with, so a
    /// preamble line and a header line for one type are one line.  A project
    /// export's bodies therefore suppress it (they include that header);
    /// see [`crate::structdefs`].
    ///
    /// Emitted as whole lines rather than tokens: a type definition has no
    /// `Varnode`/`PcodeOp` to bind markup to, so there is nothing for the
    /// markup back-end to reference beyond the line itself.
    pub(super) fn emit_type_definition_preamble(&mut self, fd: &Funcdata) {
        if !self.options.struct_defs {
            return;
        }
        // (unlace outlang) The renderer is C by contract -- it builds a `.h` --
        // and a `struct X { … };` block in a Rust document is neither valid
        // Rust nor readable C. `unlace decompile-project` refuses a non-C output
        // language for the same reason rather than half-honouring it; here the
        // preamble declines and the body is emitted as it would be anyway.
        // Teaching the definition renderer the language plane belongs to that
        // plane, not to this option.
        if self.out_lang != crate::lang::OutLang::C {
            return;
        }
        let types = crate::structdefs::referenced_types(fd);
        if types.is_empty() {
            return;
        }
        let types = crate::calltargettype::with_declared_fields(types, fd);
        let text = render_type_definitions(&types, self.rt_ctx.clone());
        for line in text.trim_end_matches('\n').split('\n') {
            self.emit.tag_line();
            if !line.is_empty() {
                self.emit.print(line, SyntaxHighlight::NoColor);
            }
        }
        self.emit.tag_line();
    }

    /// Emit the function prototype declaration (the `emitFunctionDeclaration`
    /// shell of C++ `PrintC::docFunction`, printc.cc:2790 →
    /// `emitFunctionDeclaration`, printc.cc:2380): the recovered return type,
    /// the function name, and the parenthesised
    /// [`emit_prototype_inputs`](PrintC::emit_prototype_inputs) parameter list —
    /// `<ret> <name>(<params>)`, no trailing `;` or body.
    ///
    /// Pure code motion out of
    /// [`emit_function_document`](PrintC::emit_function_document) (byte-identical
    /// there) so [`doc_prototype`](PrintC::doc_prototype) can emit the IDENTICAL
    /// token sequence standalone — the `.h`-prototype == `.c`-definition-line
    /// contract of `unlace decompile-project`.
    pub(super) fn emit_prototype_declaration(
        &mut self,
        fd: &Funcdata,
        arch: &Architecture,
        markup: &MarkupRef,
    ) {
        match self.lang().forms.proto {
            crate::lang::ProtoForm::CPrefixReturn => {
                self.emit_prototype_declaration_c(fd, arch, markup)
            }
            crate::lang::ProtoForm::RustFnArrow => {
                self.emit_prototype_declaration_rust(fd, arch, markup)
            }
            crate::lang::ProtoForm::GoFunc => self.emit_prototype_declaration_go(fd, arch, markup),
        }
    }

    pub(super) fn emit_prototype_declaration_c(
        &mut self,
        fd: &Funcdata,
        arch: &Architecture,
        markup: &MarkupRef,
    ) {
        let mut display = fd.get_display_name().to_string();
        // (unlace java) `PrintJava::docFunction` prints in the scope of the class, so
        // the method name stands alone.
        let mut java_ctor = false;
        if self.out_lang == crate::lang::OutLang::Java
            && let Some((scope, base)) = display.rsplit_once("::")
        {
            // (unlace javanew) A constructor is declared by its class name.
            java_ctor = arch.unlace_options.get::<crate::javanew::JavaNew>().0
                && (base == "<init>" || base.starts_with("<init>_"));
            display = if java_ctor {
                let class = scope.rsplit("::").next().unwrap_or(scope);
                class.rsplit('$').next().unwrap_or(class).to_string()
            } else {
                base.to_string()
            };
        }
        let display = crate::cppshortnames::function_name(arch, display);
        // Return type from the recovered proto output (C++ `getFuncProto().
        // getOutputType()`), defaulting to "void".  The output storage/type is
        // recovered by `ActionOutputPrototype` (the stand-alone `ProtoStoreInternal`
        // path).  The TYPE NAME is the W8 `ActionInferTypes` surface: until it
        // lands the recovered output type is the size-correct but un-inferred
        // base (metatype UNKNOWN), rendered as `undefined<N>` — the documented
        // residual vs. the oracle's inferred `uint1`.
        let rt = self.rt_ctx.clone();
        let (ret_type, ret_back) = if fd.get_func_proto().has_store() {
            fd.get_func_proto()
                .get_output_type()
                .map(|t| type_name_for_decl(t, rt.clone()))
                .unwrap_or_else(|| ("void".to_string(), String::new()))
        } else {
            ("void".to_string(), String::new())
        };

        self.cast_implied
            .record_return(format!("{ret_type}{ret_back}"));
        let idp = self.emit.begin_func_proto();
        if self.caller_stack_function(fd, arch) {
            self.emit
                .print("__attribute__((noinline)) ", SyntaxHighlight::KeywordColor);
        }
        if !java_ctor {
            let idret = self.emit.begin_return_type(markup);
            self.emit
                .tag_type(&ret_type, SyntaxHighlight::TypeColor, markup);
            self.emit.end_return_type(idret);
            self.emit.spaces(1, 0);
        }
        let id1g = self.emit.open_group();
        // emitSymbolScope(fd->getSymbol()): Ghidra mode's display name is bare.
        if let Some(remote) = arch.remote_scope.as_ref() {
            let scopes = remote
                .function_at(fd.get_address())
                .map(|f| {
                    crate::namespaces::declaration_prefix(
                        self.context.namespace_strategy(),
                        &f.scope_path,
                    )
                })
                .unwrap_or_default();
            let scopes = if arch
                .unlace_options
                .get::<crate::cppshortnames::CppShortNames>()
                .0
            {
                crate::cppshortnames::short_scopes(scopes)
            } else {
                scopes
            };
            for scope in scopes {
                self.emit.print(&scope, SyntaxHighlight::GlobalColor);
                self.emit.print("::", SyntaxHighlight::NoColor);
            }
        }
        self.emit
            .tag_func_name(&display, SyntaxHighlight::FuncnameColor, markup);
        let id2 = self.emit.open_paren("(", 0);
        // emitPrototypeInputs (printc.cc:2298): the recovered proto's parameter
        // list, or `void` when there are none.  Each `ProtoParameter` renders its
        // declared type + name (`twostruct *ptr`, `int8 a`) via the C-declarator
        // builder; the backing-`Symbol` path (`emitVarDecl`) is the W4 scope
        // surface, so the param's own stored name + type are used directly.
        self.emit_prototype_inputs(fd, arch, markup);
        self.emit.close_paren(")", id2);
        if !ret_back.is_empty() {
            self.emit.print(&ret_back, SyntaxHighlight::NoColor);
        }
        self.emit.close_group(id1g);
        self.emit.end_func_proto(idp);
    }

    /// Emit the function's header warning comments (C++
    /// `PrintC::emitCommentFuncHeader`, printc.cc:3434): the
    /// `Comment::warningheader` lines the analysis buffered into the comment
    /// database, indexed at the function entry address, rendered as
    /// `/* <text> */` lines before the prototype.
    ///
    /// The full `CommentSorter` (`header_basic`/`header_unplaced` sub-orderings,
    /// the `option_unplaced` / `option_nocasts` synthetic headers) is the comment
    /// item; this carries the `warningheader` subset `head_comment_type` shows by
    /// default, in insertion order (the order the analysis produced them, which is
    /// the order `CommentSorter` keeps for same-address header comments).
    pub(super) fn emit_comment_func_header(&mut self, fd: &Funcdata, arch: &Architecture) {
        use crate::architecture::comment_type;
        let func_addr = fd.get_address();
        let space = match func_addr.get_space() {
            Some(s) => std::rc::Rc::clone(s),
            None => return,
        };
        let off = func_addr.get_offset();
        // (unlace, Phase 3) Plain HEADER (plate) comments render first — the C++
        // emitCommentFuncHeader handles `Comment::header` through the same
        // sorter.  These come from the ghidra-mode getComments fill (Java PLATE
        // comments) and the ghidra-mode `Unlace v…` banner; the standalone
        // pipeline never inserts HEADER-typed comments, so this arm is inert
        // there.  Header comments are informational, never inline-slugged.
        let plates: Vec<String> = arch
            .commentdb
            .comments()
            .iter()
            .filter(|c| c.tp == crate::comment::comment_type::HEADER && &c.func_addr == func_addr)
            .map(|c| c.text.clone())
            .collect();
        for text in plates {
            self.emit.tag_line();
            self.emit.tag_comment(
                &format!("/* {text} */"),
                SyntaxHighlight::CommentColor,
                &space,
                off,
            );
        }
        // Collect the matching header WARNING comments (the commentdb borrow is
        // released before the `&mut self.emit` writes).
        let headers: Vec<String> = arch
            .commentdb
            .comments()
            .iter()
            .filter(|c| c.tp == comment_type::warningheader && &c.func_addr == func_addr)
            .map(|c| c.text.clone())
            .collect();
        for text in super::super::godefer::header_lines(fd, arch) {
            self.emit.tag_line();
            self.emit.tag_comment(
                &format!("/* {text} */"),
                SyntaxHighlight::CommentColor,
                &space,
                off,
            );
        }
        for text in headers {
            if self.options.warn_caveats && crate::warnlevel::elided(fd, &text, func_addr, true) {
                continue;
            }
            // (unlace warnstyle, DIV-39) Inline mode: header warnings collect as
            // slugs and flush at the end of the prototype line.
            let warning = crate::functionwarnings::Warning::new(Some(off), &text);
            if self.options.warn_inline {
                self.eol_warns.push((
                    warning_slug(&text),
                    std::rc::Rc::clone(&space),
                    off,
                    Some(warning),
                ));
                continue;
            }
            // emitLineComment(0, comm): a fresh line then the `/* text */` token.
            self.emit.tag_line();
            let token = format!("/* {text} */");
            self.emit
                .tag_comment(&token, SyntaxHighlight::CommentColor, &space, off);
            self.record_warning(warning, &token);
        }
    }

    /// Emit the function prototype's input parameter list (C++
    /// `PrintC::emitPrototypeInputs`, printc.cc:2298): `void` if there are no
    /// parameters, else the comma-separated `<type> <name>` declarations,
    /// followed by `, ...` for a vararg prototype.
    ///
    /// The C++ emits each parameter through its backing `Symbol` (`emitVarDecl`)
    /// when present, else the type with no name.  The merged-tree `ProtoParameter`
    /// has no backing `Symbol` (W4 scope), but it *does* carry the declared name +
    /// type (set by `update_all_types` from the parsed `PrototypePieces`), so the
    /// name + the C-declarator are rendered directly here — observationally the
    /// same text the C++ `emitVarDecl` produces for a named, typed parameter.
    pub(super) fn emit_prototype_inputs(
        &mut self,
        fd: &Funcdata,
        arch: &Architecture,
        markup: &MarkupRef,
    ) {
        let proto = fd.get_func_proto();
        if !proto.has_store() {
            self.emit
                .tag_type("void", SyntaxHighlight::TypeColor, markup);
            return;
        }
        let sz = proto.num_params();
        let java = self.out_lang == crate::lang::OutLang::Java;
        if sz == 0 {
            if !java {
                self.emit
                    .tag_type("void", SyntaxHighlight::TypeColor, markup);
            }
        } else {
            let mut print_comma = false;
            for i in 0..sz {
                let param = match proto.get_param(i) {
                    Some(p) => p,
                    None => continue,
                };
                // (unlace java) `PrintJava` sets `hide_thisparam`.
                if java && param.is_this_pointer() {
                    self.signature_param_names
                        .insert(i, param.get_name().to_string());
                    continue;
                }
                // hide_thisparam + isThisPointer: the `this`-pointer hiding is the
                // C++ option/class-method surface (no `this` on the recovery path).
                // C++ `emit->print(COMMA)` with `COMMA = ","` — no trailing space.
                if print_comma {
                    self.emit.print(",", SyntaxHighlight::NoColor);
                }
                print_comma = true;
                // The function-being-decompiled's prototype is backed by a
                // `ProtoStoreSymbol` in C++; a recovered (unlocked) parameter with
                // an empty stored name resolves through its scope symbol to the
                // default name (`Scope::buildDefaultName`, the
                // `Symbol::function_parameter` branch).  unlace's merged-tree proto
                // store keeps the literal empty name, so reproduce that default
                // here: angr-style `a<i>`, ghidra-style `param_<i+1>`.
                let default_name;
                let mut name = param.get_name();
                if name.is_empty() {
                    default_name = crate::database::unlace_materialized_param_name(
                        arch.unlace_options
                            .get::<crate::coreoptions::NameStyleAngr>()
                            .0,
                        i,
                        "",
                    );
                    name = default_name.as_str();
                }
                self.signature_param_names.insert(i, name.to_string());
                let ty = if self.out_lang == crate::lang::OutLang::C {
                    crate::indirectargs::source_type(proto, param)
                } else {
                    param.get_type().cloned()
                };
                match ty {
                    Some(ty) => {
                        let (front, back) = declarator_parts(&ty, self.rt_ctx.clone());
                        self.cast_implied
                            .record_param(name, format!("{front}{back}"));
                        self.pointer_decls.record(name, &front, &back, false);
                        if !self.emit.emits_markup()
                            && self.emit_fd.is_some()
                            && !proto.is_dotdotdot()
                            && crate::pointerargs::byte_pointer(&ty)
                        {
                            let slot = self
                                .pointer_record
                                .as_mut()
                                .filter(|r| {
                                    Some(&r.entry)
                                        == crate::pointerargs::entry(fd.get_address()).as_ref()
                                })
                                .and_then(|r| r.parameters.get_mut(i as usize));
                            if let (Some(slot), Some(address)) =
                                (slot, crate::pointerargs::entry(&param.get_address()))
                            {
                                *slot = Some(crate::pointerargs::Parameter {
                                    storage: (address, param.get_size()),
                                    spelling: format!("{front}{back}"),
                                });
                            }
                        }
                        // C++ `pushTypeStart(type, noident)`: the separating token is
                        // `type_expr_nospace` only when there is no identifier AND no
                        // declarator modifier (`noident && typestack.size()==1`); else
                        // `type_expr_space`.  A `*` front glues to the name (no space).
                        let has_modifier = front.ends_with('*') || !back.is_empty();
                        self.emit
                            .tag_type(&front, SyntaxHighlight::TypeColor, markup);
                        let want_space =
                            !front.ends_with('*') && (!name.is_empty() || has_modifier);
                        if want_space {
                            self.emit.spaces(1, 0);
                        }
                        if !name.is_empty() {
                            self.emit
                                .tag_variable(name, SyntaxHighlight::VarColor, markup);
                        }
                        if !back.is_empty() {
                            self.emit.print(&back, SyntaxHighlight::NoColor);
                        }
                    }
                    None => {
                        self.emit
                            .tag_type("void", SyntaxHighlight::TypeColor, markup);
                    }
                }
            }
        }
        if proto.is_dotdotdot() {
            if sz != 0 {
                self.emit.print(",", SyntaxHighlight::NoColor);
            }
            self.emit.print("...", SyntaxHighlight::NoColor);
        }
    }

    /// Emit one `<type> <name>;  // <storage>` declaration per named local
    /// HighVariable, in the order `declorder` picks, returning `true` if any were emitted (C++
    /// `emitLocalVarDecls` + `emitVarDeclStatement`, printc.cc:2652).  The W4
    /// ScopeLocal symbol walk is the missing surface; the named HighVariables
    /// (`unlace_name`) are the same locals the scope would declare.  A trailing
    /// blank `tag_line` separates the decl block from the body (the C++ blank line
    /// `emitVarDecl`s produce before the statement list).
    pub fn emit_local_var_decls(&mut self, fd: &Funcdata, arch: &Architecture) -> bool {
        // Collect (name, type_name, storage_comment) for each named local high,
        // de-duplicated by high and ordered by name.
        let mut decls: Vec<(crate::context::HighVariableId, String)> = Vec::new();
        let mut seen: std::collections::BTreeSet<crate::context::HighVariableId> =
            std::collections::BTreeSet::new();
        // (unlace) The authoritative signature-parameter name set. The `is_param`
        // storage-containment test below false-positives on a LOCAL high that merely
        // has an instance overlapping a parameter register (a merge artifact: an
        // un-coalesced phi output that picked up a param-register varnode). Such a
        // local was then SKIPPED from body declarations yet still emitted in the
        // statements -> an **undeclared variable / invalid C** (e.g. tar
        // make_directory's `v5`). Ghidra keys declarations on the Symbol category, so a
        // no_category local is always declared even when it overlaps a parameter; gate
        // the skip on the high's name actually being one of the prototype's parameters.
        // This only makes the skip STRICTER (never removes a declaration) — byte-identical
        // on any function that was already valid C.
        let param_names: std::collections::BTreeSet<String> = {
            let proto = fd.get_func_proto();
            let mut s = std::collections::BTreeSet::new();
            if proto.has_store() {
                for i in 0..proto.num_params() {
                    if let Some(p) = proto.get_param(i) {
                        let n = p.get_name();
                        let nm = if n.is_empty() {
                            crate::database::unlace_materialized_param_name(
                                arch.unlace_options
                                    .get::<crate::coreoptions::NameStyleAngr>()
                                    .0,
                                i,
                                "",
                            )
                        } else {
                            n.to_string()
                        };
                        s.insert(nm);
                    }
                }
            }
            s
        };
        let named = SameNamed::new(fd);
        let vlist: Vec<crate::context::VarnodeId> = fd.vbank().iter_loc().collect();
        for (k, vn) in vlist.into_iter().enumerate() {
            if k % 256 == 0 && crate::budget::deadline_passed_in("rendering C") {
                break;
            }
            let high = match fd.vbank().get(vn).and_then(|v| v.get_high()) {
                Some(h) => h,
                None => continue,
            };
            if seen.contains(&high) {
                continue;
            }
            let name = match fd.high_bank().get(high).and_then(|h| h.unlace_name()) {
                Some(n) => n.to_string(),
                None => continue,
            };
            seen.insert(high);
            // (unlace javatry) A catch clause declares its exception variable.
            if self.java_catches.is_some() {
                let only_caught = fd.high_bank().get(high).is_some_and(|h| {
                    let defs: Vec<Option<OpId>> = (0..h.num_instances())
                        .map(|i| fd.vbank().get(h.get_instance(i)).and_then(|v| v.get_def()))
                        .collect();
                    !defs.is_empty()
                        && defs.iter().all(|d| {
                            d.is_some_and(|op| crate::javatry::caught_handler(fd, op).is_some())
                        })
                });
                if only_caught {
                    continue;
                }
            }
            // A `&symbol` reference's offset is a CONSTANT operand of the PTRSUB
            // markup, not a scope Symbol.  When a constant-only reference high
            // SHADOWS a real local that is already declared from its own storage —
            // i.e. there is a whole-symbol sibling (`unlace_symbol_offset == -1`) with
            // the same name — the constant reference must NOT be declared a second
            // time (C++ `emitScopeVarDecls` walks the ScopeLocal Symbols once
            // (printc.cc:2667); the `&val` reference renders inline via the PTRSUB
            // markup).  Skipping it removes the spurious `int8 val;` shadow of the
            // real `int4 val` stack local.  The whole-sibling guard is load-bearing:
            // a constant-only reference with NO real sibling (the stack array `c` in
            // passPtrToArray, materialized only through `&c`) IS the symbol's sole
            // declaration and must still print.
            let all_constant = fd
                .high_bank()
                .get(high)
                .map(|h| {
                    let n = h.num_instances();
                    n > 0
                        && (0..n).all(|i| {
                            fd.vbank()
                                .get(h.get_instance(i))
                                .map(|v| v.is_constant())
                                .unwrap_or(false)
                        })
                })
                .unwrap_or(false);
            // A real local with the same name exists when another HighVariable
            // carries that name and has at least one NON-constant (storage)
            // instance — the stack/register varnodes the printer declares from.
            let has_storage_sibling = all_constant
                && same_named(fd, named.get(&name)).any(|(id, h)| {
                    id != high
                        && h.unlace_name() == Some(name.as_str())
                        && (0..h.num_instances()).any(|i| {
                            fd.vbank()
                                .get(h.get_instance(i))
                                .map(|v| !v.is_constant())
                                .unwrap_or(false)
                        })
                });
            if has_storage_sibling {
                if let Some(owner) = reference_owner(fd, named.get(&name), high, &name) {
                    self.local_name_aliases.insert(high, owner);
                }
                continue;
            }
            // C++ `emitLocalVarDecls` -> `emitScopeVarDecls(fd->getScopeLocal(),
            // no_category)` walks the LOCAL scope only (printc.cc:2336/2667).  A
            // global-mapped Symbol (`glob1`, `globalfree`, `myarray`) lives in the
            // GLOBAL scope, so it is never declared in a function body — it is named
            // in the body's statements but carries no local declaration.  Two global
            // discriminators, both faithful to "not in `fd->getScopeLocal()`":
            //   * `Varnode::isPersist` — a persistent global RAM store/load high
            //     (`glob1 = 0`), whose member varnodes are flagged persist; and
            //   * `HighVariable::unlace_global` — a `&symbol` reference whose
            //     `linkSpacebaseSymbol` resolved through the GLOBAL scope
            //     (`sb->getMap()` == the global scope for a ram spacebase, e.g.
            //     `myarray` materialized as a const base address).  A *local*-frame
            //     spacebase reference (`&a`, `&myval.b`, `&c` in passPtrToArray) is
            //     NOT flagged, so its stack-symbol decl still prints.
            if high_is_global(fd, high) {
                continue;
            }
            // STUB A — C++ `emitScopeVarDecls`: `if (entry->isPiece()) continue;`
            // (printc.cc:2688) plus the multi-entry `getFirstWholeMap() != entry`
            // skip (printc.cc:2697).  A register-returned struct is split into
            // per-field proto-partial pieces (`RulePieceStructure`); each piece's
            // HighVariable is bound to the ROOT's name + the ROOT's whole-struct type
            // + its own in-symbol byte offset (`bind_proto_partial_piece`,
            // coreaction_cleanup.rs).  C++ shares ONE declaration for the whole
            // Symbol (the `getFirstWholeMap()` entry, type `foo`); the pieces are
            // partial entries and emit none.
            //
            // The unlace stand-in for "this entry is a piece of a multi-entry Symbol
            // whose first-whole-map is a different entry": the piece carries a
            // composite `unlace_symbol_type` (the root's struct/array/union whole type,
            // which a scalar field varnode never has on its own) AND a sibling ROOT
            // high exists — same shared name, `unlace_symbol_offset == -1` (the whole
            // keeps the `-1` default; pieces carry `>= 0`).  The sibling root IS the
            // `getFirstWholeMap()` entry and declares the shared `foo v1;` from its
            // own whole-struct varnode type.  A referenced *whole* local (`&a`,
            // `&myval.b` in passPtrToArray) carries a composite `unlace_symbol_type`
            // too but has NO `-1` sibling of the same name, so it stays declarable.
            let is_proto_partial_piece = fd.high_bank().get(high).is_some_and(|h| {
                let composite = h.unlace_symbol_type().is_some_and(|t| {
                    use crate::dtype::type_metatype::*;
                    matches!(t.get_metatype(), TYPE_STRUCT | TYPE_ARRAY | TYPE_UNION)
                });
                composite
                    && h.unlace_symbol_offset() >= 0
                    && high_name_has_whole_sibling(fd, named.get(&name), high, &name)
            });
            if is_proto_partial_piece {
                if let Some(root) = owner_in_group(fd, named.get(&name), high, &name, |_, h| {
                    h.unlace_symbol_offset() == -1
                }) {
                    self.local_name_aliases.insert(high, root);
                }
                continue;
            }
            // STUB A (scalar analogue) — C++ `emitScopeVarDecls` walks the ScopeLocal
            // *Symbol* table ONCE per Symbol (printc.cc:2667/2696), so a tied SCALAR
            // local read at several widths (the int8 `local` of LOSS-245, accessed as
            // int4/int2 sub-fields that `mergeAddrTied`/`groupWith` grouped) yields ONE
            // declaration (`int8 local;`) — not one per partial high.  The unlace printer
            // walks HighVariables, so each partial cover of the one scalar Symbol shows
            // up as its own would-be decl.  Skip a high that is a STRICT PARTIAL of a
            // scalar mapped Symbol (its storage rep is narrower than the whole Symbol
            // type, or it is offset into the symbol) when a WHOLE-cover sibling of the
            // same name exists (an instance-0 storage rep of exactly the symbol type's
            // size at offset 0) — that sibling is the C++ `getFirstWholeMap()` entry and
            // emits the single declaration.  Composites are handled above; this targets
            // the scalar tied-local case only and is inert when no whole sibling exists
            // (the partial then remains the symbol's sole declaration, e.g. a lone
            // mapped sub-access).
            let is_scalar_partial_piece = fd.high_bank().get(high).is_some_and(|h| {
                let scalar_sym = h.unlace_symbol_type().is_some_and(|t| {
                    use crate::dtype::type_metatype::*;
                    !matches!(t.get_metatype(), TYPE_STRUCT | TYPE_ARRAY | TYPE_UNION)
                });
                if !scalar_sym {
                    return false;
                }
                let sym_size = h.unlace_symbol_type().map(|t| t.get_size()).unwrap_or(0);
                let rep_size = if h.num_instances() > 0 {
                    fd.vbank()
                        .get(h.get_instance(0))
                        .map(|v| v.get_size())
                        .unwrap_or(0)
                } else {
                    0
                };
                // A strict partial: offset into the symbol, or narrower than the whole.
                let is_strict_partial = h.unlace_symbol_offset() > 0 || rep_size < sym_size;
                is_strict_partial
                    && high_name_has_scalar_whole_sibling(fd, named.get(&name), high, &name)
            });
            if is_scalar_partial_piece {
                if let Some(whole) =
                    owner_in_group(fd, named.get(&name), high, &name, is_scalar_whole)
                {
                    self.local_name_aliases.insert(high, whole);
                }
                continue;
            }
            // C++ `emitLocalVarDecls` -> `emitScopeVarDecls(scope, no_category)`:
            // only `no_category` Symbols are declared in the body.  A high bound to
            // a `function_parameter` Symbol renders in the signature, never as a body
            // local — skip it. Prefer the linked Symbol's own category; storage
            // containment is a fallback only for highs without a linked Symbol.
            let scope = fd.get_scope_local();
            let is_param = scope
                .map(|lm| {
                    let h = fd.high_bank().get(high);
                    if let Some(sym) = h.and_then(|h| h.unlace_link_symbol()) {
                        return lm.symbol_category(sym)
                            == crate::database::symbol_category::FUNCTION_PARAMETER;
                    }
                    let n = h.map(|h| h.num_instances()).unwrap_or(0);
                    if h.is_some_and(|h| {
                        h.unlace_link_symbol().is_some_and(|symbol| {
                            lm.symbol_category(symbol)
                                == crate::database::symbol_category::FUNCTION_PARAMETER
                        }) && (0..n).any(|index| {
                            fd.vbank()
                                .get(h.get_instance(index))
                                .is_some_and(|value| value.is_input())
                        })
                    }) {
                        return true;
                    }
                    // A high is a parameter (declared in the signature, not the body)
                    // only when a `function_parameter` Symbol *contains* a member's
                    // whole storage — the C++ `emitScopeVarDecls(no_category)` walks
                    // Symbols by their own category, not by storage overlap.  Using a
                    // containing query (not bare overlap) is load-bearing: a wider
                    // local merged onto a register that also holds a narrower
                    // parameter (a `float8` cast result on `XMM0`, which also carries
                    // the `float4` arg) overlaps the parameter entry but is its own
                    // `no_category` local (the C++ `handleSymbolConflict` conflict
                    // spawns a fresh Symbol), so it must still be declared.
                    (0..n).any(|i| {
                        let m = h.unwrap().get_instance(i);
                        fd.vbank()
                            .get(m)
                            .map(|v| (v.get_addr().clone(), v.get_size()))
                            .and_then(|(addr, size)| {
                                lm.containing_category_for_varnode(&addr, size)
                            })
                            == Some(crate::database::symbol_category::FUNCTION_PARAMETER)
                    })
                })
                .unwrap_or(false);
            // Only skip as a signature parameter when the high is ALSO named as one of
            // the prototype's parameters (see `param_names` above): the storage test
            // alone false-positives on a local overlapping a param register, which would
            // then be emitted UNDECLARED (invalid C).
            if is_param && param_names.contains(name.as_str()) {
                continue;
            }
            // (unlace paramrefdecl) The Symbol-identity half of the same C++
            // predicate: an `&parameter` reference high has only the PTRSUB offset
            // CONSTANT as storage, so the containment test above cannot see that it
            // IS the parameter -- and declaring it re-declares the signature
            // parameter under its own name (invalid C).  See
            // `crate::paramrefdecl`.  The `param_names` guard is the same one
            // the storage arm carries: it only ever makes the skip stricter.
            if param_names.contains(name.as_str())
                && crate::paramrefdecl::references_parameter_symbol(fd, high)
            {
                continue;
            }
            decls.push((high, name));
        }
        // (unlace `signedness`) A rounded declaration is only written for a high
        // that owns its declaration line.  Every collapse below pairs two
        // candidates that render the same NAME, so restricting the plan to
        // sole-named candidates keeps a flip from moving a collapse key or
        // re-signing a line a non-flipped sibling reads through.
        // (unlace renumberlocals) Hex-Rays-style spelling of the synthetic locals: `vN`
        // renumbered from `v1` in collection order. Runs before the sign plan and the
        // collapses so every later name-keyed pass sees the final spellings.
        if arch
            .unlace_options
            .get::<crate::renumberlocals::RenumberLocals>()
            .0
        {
            let globals = fd.get_arch().global_name_scope();
            let taken = |name: &str| globals.as_ref().is_some_and(|g| g.has_symbol_name(name));
            let reserved: std::collections::BTreeSet<String> =
                declaration_occupied_names(fd, param_names.iter().cloned())
                    .into_iter()
                    .chain(decls.iter().map(|(_, name)| name.clone()))
                    .filter(|name| !crate::renumberlocals::is_synthetic_local_name(name))
                    .collect();
            let mapping = crate::renumberlocals::renumber_synthetic_locals(
                decls.iter().map(|(_, name)| name.as_str()),
                &reserved,
                &taken,
            );
            for (high, name) in &mut decls {
                if let Some(fresh) = mapping.get(name.as_str()) {
                    self.local_name_overrides.insert(*high, fresh.clone());
                    *name = fresh.clone();
                }
            }
        }
        self.sign_plan
            .retain_sole_named(decls.iter().map(|(h, n)| (*h, n.as_str())));
        // C++ `emitScopeVarDecls` walks the ScopeLocal *Symbol* table and emits
        // exactly one declaration per multi-entry Symbol (the `getFirstWholeMap()`
        // entry; printc.cc:2696).  The unlace printer instead walks HighVariables and
        // dedups by high id, so a single mapped composite Symbol that is
        // represented by several `&symbol`-reference highs (each a piece of the
        // array/struct, all constant-only PTRSUB operands) is declared once per
        // high — a spurious repeat like `int2 arr [32]; int2 arr [32];`.
        //
        // Collapse to one declaration per Symbol: two declared highs are the same
        // Symbol when they share a name AND the same *composite* mapped type by Rc
        // identity.  The type factory interns array/struct/union types, so one
        // mapped Symbol's pieces all carry the identical `unlace_symbol_type` Rc;
        // distinct same-shaped locals are disambiguated by their (unique) names.
        // Restricting to composites is load-bearing: primitive types are shared by
        // every scalar local of that type, so `(name, int4-Rc)` would not identify
        // a single Symbol — scalars keep the per-high behavior.
        {
            let mut seen_sym: std::collections::BTreeMap<
                (String, usize),
                crate::context::HighVariableId,
            > = std::collections::BTreeMap::new();
            let mut collapsed = Vec::new();
            decls.retain(|(high, name)| {
                let composite_rc = fd.high_bank().get(*high).and_then(|h| {
                    let t = h.unlace_symbol_type()?;
                    use crate::dtype::type_metatype::*;
                    matches!(t.get_metatype(), TYPE_ARRAY | TYPE_STRUCT | TYPE_UNION)
                        .then(|| std::rc::Rc::as_ptr(t) as usize)
                });
                let Some(rc) = composite_rc else {
                    return true;
                };
                match seen_sym.entry((name.clone(), rc)) {
                    std::collections::btree_map::Entry::Occupied(first) => {
                        collapsed.push((*high, *first.get()));
                        false
                    }
                    std::collections::btree_map::Entry::Vacant(slot) => {
                        slot.insert(*high);
                        true
                    }
                }
            });
            self.local_name_aliases.extend(collapsed);
        }
        decls.sort_by(|a, b| a.1.cmp(&b.1));
        if decls.is_empty() {
            return false;
        }
        // (unlace) The scalar analogue of the composite collapse above, keyed on the
        // ScopeLocal *Symbol* rather than on the interned type Rc: several highs of
        // one mapped scalar Symbol yield ONE declaration, as C++ `emitScopeVarDecls`
        // does by construction.  Shares `option dedupvardecls` with the rendered-line
        // collapse it generalises.  Returns the `sym->getType()` override for a
        // surviving declaration whose group disagreed on the type.
        let symbol_decl_type = if arch
            .unlace_options
            .get::<crate::dedupvardecls::DedupVarDecls>()
            .0
        {
            self.collapse_symbol_decls(fd, arch, &mut decls)
        } else {
            std::collections::HashMap::new()
        };
        // Run the rendered-line collapse before unique spellings make genuinely
        // distinct declarations differ by construction.  It is lossless only
        // within one object: a shared name is not evidence of shared identity.
        if arch
            .unlace_options
            .get::<crate::dedupvardecls::DedupVarDecls>()
            .0
        {
            let mut dedup = crate::dedupvardecls::DeclDedup::new();
            let mut collapsed = Vec::new();
            decls.retain(|(high, name)| {
                let (mut decl_type, mut decl_back, mut array_count, comment, _) =
                    self.rendered_local_decl(fd, arch, *high);
                if let Some((t, b, a, _)) = symbol_decl_type.get(high) {
                    decl_type = t.clone();
                    decl_back = b.clone();
                    array_count = a.clone();
                }
                let array_sig = array_count.as_ref().map(|(t, c)| (t.clone(), *c));
                let comment_sig = if arch
                    .unlace_options
                    .get::<crate::coreoptions::NameStyleAngr>()
                    .0
                {
                    comment.as_ref().map(|(c, _, off)| (c.clone(), *off))
                } else {
                    None
                };
                let identity = crate::dedupvardecls::DeclIdentity::of(fd, *high);
                let sig = (decl_type, decl_back, name.clone(), array_sig, comment_sig);
                match dedup.earlier(identity, sig, *high) {
                    Some(first) => {
                        collapsed.push((*high, first));
                        false
                    }
                    None => true,
                }
            });
            self.local_name_aliases.extend(collapsed);
        }
        // A VariableGroup can describe AL/AH/AX-style overlap without a mapped
        // ScopeLocal Symbol. After the ordinary Symbol/identity collapses have
        // chosen their survivors, suppress a strict subpiece only when exactly
        // one surviving same-named piece contains every piece in the group. The
        // owner is guaranteed to remain declared, and references alias through it.
        let declared_names: std::collections::HashMap<crate::context::HighVariableId, String> =
            decls.iter().cloned().collect();
        decls.retain(|(high, name)| {
            let owner = fd.high_bank().unique_group_covering_high(*high);
            match owner.filter(|owner| owner != high).and_then(|owner| {
                declared_names
                    .get(&owner)
                    .filter(|owner_name| *owner_name == name)
                    .map(|_| owner)
            }) {
                Some(owner) => {
                    self.local_name_aliases.insert(*high, owner);
                    false
                }
                None => true,
            }
        });
        self.settle_local_name_aliases();
        // If every semantic collapse declined, repeated grouped names are
        // distinct declarations. Their accesses must be relative to their own
        // piece-sized objects; retaining the group's offset/type decoration would
        // produce forms such as `byte_2._1_1_` against a one-byte declaration.
        {
            let mut remaining_name_count = std::collections::HashMap::<&str, usize>::new();
            for (_, name) in &decls {
                *remaining_name_count.entry(name.as_str()).or_default() += 1;
            }
            for (high, name) in &decls {
                if remaining_name_count
                    .get(name.as_str())
                    .copied()
                    .unwrap_or(0)
                    > 1
                    && fd.high_bank().high_piece_id(*high).is_some()
                {
                    self.local_name_standalones.insert(*high);
                }
            }
        }
        // Existing collapses remove declarations proven to denote one Symbol.
        // Repeated names left here are distinct HighVariables: suffix them in
        // deterministic declaration order, reserving parameters, global/callee
        // identifiers, and every original local spelling. Reserving non-locals is
        // semantic: a generated `value_1` local must not capture an existing
        // `value_1` global or direct call. The override is also read by all body
        // render paths.
        let base_names: std::collections::HashMap<crate::context::HighVariableId, String> =
            decls.iter().cloned().collect();
        {
            let occupied = declaration_occupied_names(fd, param_names);
            let mut names = crate::dedupvardecls::DeclNameUniquifier::new(
                decls.iter().map(|(_, name)| name.as_str()),
                occupied.iter().map(String::as_str),
            );
            let globals = fd.get_arch().global_name_scope();
            let taken = |name: &str| globals.as_ref().is_some_and(|g| g.has_symbol_name(name));
            for (high, name) in &mut decls {
                let unique = names.unique_with(name, &taken);
                if unique != *name {
                    self.local_name_overrides.insert(*high, unique.clone());
                    *name = unique;
                }
            }
        }
        crate::declorder::order_decls(
            &mut decls,
            arch.unlace_options.get::<crate::declorder::DeclOrder>(),
            arch.unlace_options
                .get::<crate::coreoptions::NameStyleAngr>()
                .0,
        );
        let mut source_comments = std::collections::HashMap::new();
        if arch
            .unlace_options
            .get::<crate::coreoptions::NameStyleAngr>()
            .0
        {
            for (high, _) in &decls {
                if let Some(comment) = crate::varsources::high_comment(fd, arch, *high) {
                    source_comments.insert(*high, comment);
                }
            }
            let mut aliases: Vec<_> = self
                .local_name_aliases
                .iter()
                .map(|(&high, &owner)| (high, owner))
                .collect();
            aliases.sort_unstable();
            for (high, owner) in aliases {
                let comments = source_comments
                    .remove(&owner)
                    .into_iter()
                    .chain(crate::varsources::high_comment(fd, arch, high));
                if let Some(comment) = crate::varsources::combine_comments(comments) {
                    source_comments.insert(owner, comment);
                }
            }
        }
        for (high, name) in &decls {
            // C++ `emitVarDecl(sym)` always writes the declared symbol's id
            // (prettyprint.cc:154 `writeUnsignedInteger(ATTRIB_SYMREF, sym->getId())`),
            // and Ghidra's `ClangVariableDecl.decode` does a REQUIRED read of `symref`:
            // an ABSENT attribute aborts the whole markup decode with "Attribute symref
            // is not present", so the Decompiler window shows nothing for any function
            // that declares a local.
            //
            // (unlace, ghidra Phase 4) The id must be the LocalSymbolMap id the
            // `<localdb>` encodes — Java resolves `symref` through that map
            // (`ClangVariableDecl.decode` → `pfactory.getSymbol(symref)`), and
            // right-click rename/retype ON THE DECLARATION LINE resolves the
            // HighSymbol exclusively through it.  Phase 2 wrote the
            // declaration representative's varnode create index here as a
            // stand-in (no symbols existed yet); now that real symbols do, an
            // unresolvable create index would log "Invalid symbol reference"
            // once per declaration per decompile AND leave declaration-token
            // rename/retype dead.  The create index survives only as the
            // fallback for a high the naming pass deliberately left
            // symbol-less.
            //
            // NO `varref`: upstream's `emitVarDecl` pushes an explicitly null
            // Varnode (`pushSymbol(sym,(Varnode *)0,(PcodeOp *)0)`,
            // printc.cc:2629-2640), and the omission is load-bearing —
            // `ClangVariableToken.getHighVariable` returns `inst.getHigh()`
            // from INSIDE its `inst != null` block, so a declaration carrying a
            // varref whose Varnode has no `<high>` yields a NULL HighVariable
            // where the (unconditional) parent-declaration fallback would have
            // supplied the symbol's own.
            let mut markup = MarkupRef::none();
            let decl_rep = decl_rep_varnode(fd, *high);
            let decl_rep_index = decl_rep
                .and_then(|vn| fd.vbank().get(vn))
                .map(|v| v.get_create_index() as uintb);
            // The declaration may be keyed on a GROUP MEMBER high while the
            // name (and therefore the Symbol) resolved on the group's naming
            // high — resolve through the declaration representative's own
            // high as well before falling back.
            markup.symref = fd
                .unlace_high_symbol_wire_id(*high)
                .or_else(|| {
                    decl_rep
                        .and_then(|vn| fd.vbank().get(vn))
                        .and_then(|v| v.get_high())
                        .and_then(|h| fd.unlace_high_symbol_wire_id(h))
                })
                .or(decl_rep_index);
            let (mut decl_type, mut decl_back, mut array_count, comment, mut declared) =
                self.rendered_local_decl(fd, arch, *high);
            let comment = source_comments.remove(high).or(comment);
            // (unlace) The Symbol-keyed collapse arbitrated a type disagreement between
            // the several highs of one Symbol.
            if let Some((t, b, a, ty)) = symbol_decl_type.get(high) {
                decl_type = t.clone();
                decl_back = b.clone();
                array_count = a.clone();
                declared = ty.clone();
            }
            // (unlace `signedness`) A cast on this local may only be dropped as
            // redundant when the rounded type is what actually reached the
            // declaration line - not when a Symbol/array/collapse override took
            // it back.
            if let Some(rounded) = self.sign_plan.decl_type(*high).cloned() {
                let want = type_name_for_decl(&rounded, self.rt_ctx.clone());
                if decl_type == want.0 && decl_back == want.1 && array_count.is_none() {
                    self.sign_plan.record_applied(*high, rounded);
                }
            }
            if array_count.is_none() {
                self.cast_implied
                    .record_local(*high, name, format!("{decl_type}{decl_back}"));
            }
            self.declared_local_index
                .entry(*high)
                .or_insert(self.declared_locals.len());
            self.declared_locals.push(DeclaredLocal {
                high: *high,
                base: base_names
                    .get(high)
                    .cloned()
                    .unwrap_or_else(|| name.clone()),
                name: name.clone(),
                decl: match &array_count {
                    Some((_, count)) => format!("{decl_type} [{count}]{decl_back}"),
                    None => format!("{decl_type}{decl_back}"),
                },
                ty: declared,
            });
            self.pointer_decls
                .record(name, &decl_type, &decl_back, array_count.is_some());
            self.emit.tag_line();
            let id = self.emit.begin_var_decl(&markup);
            match self.lang().forms.decl {
                crate::lang::DeclForm::CTypeThenName => {
                    self.emit
                        .tag_type(&decl_type, SyntaxHighlight::TypeColor, &markup);
                    // C++ `ptr_expr` glues the `*` directly to the identifier (no
                    // space); every other base type gets the single
                    // `type_expr_space`.  A pointer declarator front already ends
                    // in `*`, so suppress the separator.
                    if !decl_type.ends_with('*') {
                        self.emit.spaces(1, 0);
                    }
                    self.emit
                        .tag_variable(name, SyntaxHighlight::VarColor, &markup);
                    if let Some((_, count)) = &array_count {
                        // ` [count]` (C++ `emitArrayDecl`: a space then the
                        // bracketed count).
                        self.emit.spaces(1, 0);
                        self.emit.print("[", SyntaxHighlight::NoColor);
                        self.emit
                            .print(&format!("{count}"), SyntaxHighlight::ConstColor);
                        self.emit.print("]", SyntaxHighlight::NoColor);
                    }
                    if !decl_back.is_empty() {
                        self.emit.print(&decl_back, SyntaxHighlight::NoColor);
                    }
                }
                crate::lang::DeclForm::RustLetColon => {
                    let count = array_count.as_ref().map(|(_, c)| *c);
                    self.emit_var_decl_rust(name, &decl_type, count, &markup);
                }
                crate::lang::DeclForm::GoVar => {
                    self.emit_var_decl_go(
                        name,
                        &decl_type,
                        array_count.as_ref().map(|(_, c)| *c),
                        &markup,
                    );
                }
            }
            self.emit.end_var_decl(id);
            self.emit
                .print(self.lang().kw_semicolon, SyntaxHighlight::NoColor);
            if arch
                .unlace_options
                .get::<crate::coreoptions::NameStyleAngr>()
                .0
                && let Some((ctext, spc, off)) = comment
            {
                self.emit.spaces(1, 0);
                self.emit.tag_comment(
                    &format!("// {ctext}"),
                    SyntaxHighlight::CommentColor,
                    &spc,
                    off,
                );
            }
        }
        // (unlace `vaarg`) The `ap` a `va_start(ap,..)` or `va_arg(ap,T)` of the
        // promoted local `va_list` names has no HighVariable, so declare it.
        if matches!(self.lang().forms.decl, crate::lang::DeclForm::CTypeThenName)
            && Self::prints_local_va_list(fd)
            && !decls.iter().any(|(_, name)| name == "ap")
        {
            self.emit.tag_line();
            self.emit.print("va_list", SyntaxHighlight::TypeColor);
            self.emit.spaces(1, 0);
            self.emit.print("ap", SyntaxHighlight::VarColor);
            self.emit
                .print(self.lang().kw_semicolon, SyntaxHighlight::NoColor);
        }
        // Blank separating line before the body (C++ emits a tag_line after the
        // last decl; the body's first statement then starts on its own line).
        self.emit.tag_line();
        true
    }

    /// Point every declared-through high at the end of its owner chain, so a body
    /// reference reads the spelling of the declaration that finally survived.  An
    /// owner is a declared high or a whole the walk declares through, never a high
    /// that points back, so a chain cannot revisit a high; if one ever did, its
    /// highs keep their own names rather than borrowing an unrelated one.
    pub(super) fn settle_local_name_aliases(&mut self) {
        let aliases = &self.local_name_aliases;
        let settled: Vec<(
            crate::context::HighVariableId,
            Option<crate::context::HighVariableId>,
        )> = aliases
            .keys()
            .map(|&start| {
                let mut visited = std::collections::BTreeSet::from([start]);
                let mut owner = aliases[&start];
                while let Some(&next) = aliases.get(&owner) {
                    if !visited.insert(owner) {
                        return (start, None);
                    }
                    owner = next;
                }
                (start, Some(owner))
            })
            .collect();
        for (start, owner) in settled {
            match owner {
                Some(owner) => {
                    self.local_name_aliases.insert(start, owner);
                }
                None => {
                    debug_assert!(false, "declaration owner chain revisits {start:?}");
                    self.local_name_aliases.remove(&start);
                }
            }
        }
    }

    /// (unlace `vaarg`) Does the body print a `va_start`/`va_arg` on the promoted
    /// local `va_list` (the constant `push_va_list` spells `ap`)?
    pub(super) fn prints_local_va_list(fd: &Funcdata) -> bool {
        fd.obank()
            .iter_code(unlace_num::opcodes::OpCode::CPUI_CALLOTHER)
            .any(|op| {
                let Some(o) = fd.obank().get(op).filter(|o| !o.is_dead()) else {
                    return false;
                };
                let builtin = o
                    .get_in(0)
                    .and_then(|v| fd.vbank().get(v))
                    .map(|v| v.get_offset());
                matches!(
                    builtin,
                    Some(b) if b == crate::userop::BUILTIN_VA_START as u64
                        || b == crate::userop::BUILTIN_VAARG as u64
                ) && o
                    .get_in(1)
                    .and_then(|v| fd.vbank().get(v))
                    .is_some_and(|v| v.is_constant())
            })
    }

    /// (unlace) The locals the last printed document declared.
    pub fn declared_locals(&self) -> &[DeclaredLocal] {
        &self.declared_locals
    }

    /// (unlace) The entry of the function the last printed document is of.
    pub fn declared_entry(&self) -> Option<&Address> {
        self.declared_entry.as_ref()
    }

    /// (unlace) A printer of its own that has printed `fd` with `arch`'s
    /// options, so [`declared_locals`](Self::declared_locals) and
    /// [`declared_local`](Self::declared_local) say what a print of `fd` names
    /// each local while `arch`'s printer keeps its state.
    pub fn declarations_of(arch: &Architecture, fd: &Funcdata) -> PrintC {
        let mut print = PrintC::new();
        print.set_name(&arch.print().name);
        print.flavour = arch.print().flavour;
        print.options = arch.print().options;
        print.doc_function_full(fd, arch);
        print
    }

    /// (unlace) The highs of the last printed document that read through another
    /// high's declaration, keyed by the declared high (which is not repeated).
    pub fn declared_through(
        &self,
    ) -> std::collections::BTreeMap<
        crate::context::HighVariableId,
        Vec<crate::context::HighVariableId>,
    > {
        let mut out: std::collections::BTreeMap<_, Vec<_>> = std::collections::BTreeMap::new();
        for (&high, &owner) in &self.local_name_aliases {
            out.entry(owner).or_default().push(high);
        }
        for highs in out.values_mut() {
            highs.sort();
        }
        out
    }

    /// (unlace) The declaration `high` reads through in the last printed document:
    /// its own, or the one it was collapsed into.
    pub fn declared_local(&self, high: crate::context::HighVariableId) -> Option<&DeclaredLocal> {
        let owner = self.local_name_aliases.get(&high).copied().unwrap_or(high);
        self.declared_local_index
            .get(&owner)
            .and_then(|&i| self.declared_locals.get(i))
    }

    /// Resolve the emitted spelling of a named HighVariable in this function.
    pub(super) fn emitted_high_name(
        &self,
        fd: &Funcdata,
        high: crate::context::HighVariableId,
    ) -> Option<String> {
        let high = self.local_name_aliases.get(&high).copied().unwrap_or(high);
        self.local_name_overrides
            .get(&high)
            .cloned()
            .or_else(|| fd.high_bank().get(high)?.unlace_name().map(str::to_string))
    }

    /// Resolve the emitted name plus the symbol-relative geometry used to render
    /// partial accesses. Independently declared fallback pieces deliberately have
    /// no shared-symbol geometry: their declared identifier denotes the piece.
    pub(super) fn emitted_high_symbol(
        &self,
        fd: &Funcdata,
        high: crate::context::HighVariableId,
    ) -> Option<EmittedHighSymbol> {
        let name = self.emitted_high_name(fd, high)?;
        if self.local_name_standalones.contains(&high) {
            return Some((name, -1, None));
        }
        let h = fd.high_bank().get(high)?;
        Some((
            name,
            h.unlace_symbol_offset(),
            h.unlace_symbol_type().cloned(),
        ))
    }

    /// (unlace) The fully-rendered declaration of one local high: the final declarator
    /// type, the declarator suffix that follows the name (`)[16]` for a pointer to
    /// an array, else empty), the `[count]` array adornment (when the mapped Symbol
    /// — or the declaration representative itself — is an array), the storage
    /// comment, and the datatype the declarator spells (the array itself for an
    /// array declaration).
    ///
    /// Shared by [`Self::collapse_symbol_decls`] and the emit loop so the collapse
    /// compares exactly the bytes the emit loop would write.
    pub(super) fn rendered_local_decl(
        &self,
        fd: &Funcdata,
        arch: &Architecture,
        high: crate::context::HighVariableId,
    ) -> RenderedLocalDecl {
        // Type: the high's recovered type name (W8-unknown -> `undefined<N>`).
        let ((mut type_name, comment), mut declared) =
            self.local_decl_type_and_comment(fd, arch, high);
        let rt = self.rt_ctx.clone(); // (unlace) realtypes ctx for the composite/array relabel
        if let Some(object) = crate::addressdecl::object_type(fd, high) {
            type_name = type_name_for_decl(&object, rt.clone());
            declared = Some(object);
        }

        if let Some(locked) = locked_scalar_local_type(fd, high) {
            type_name = type_name_for_decl(&locked, rt.clone());
            declared = Some(locked);
        }

        // C++ `emitVarDecl` declares the whole *Symbol*'s type (printc.cc:1719
        // `sym->getType()`), not the partial member Varnode's type.  When the
        // high is a non-array partial cover of a composite Symbol (a struct/
        // union member, `unlace_symbol_offset() >= 0`), the local storage
        // representative carries only the truncated member type (e.g. the
        // 1-byte `flagfield` read => `undefined1`); declare the composite Symbol
        // type (`enumstruct`) so the member access `v1.flagfield` has a base of
        // the right type.  (The array case is handled by `array_count` below, so
        // it is excluded here.)
        if let Some(st) = fd.high_bank().get(high).and_then(|h| {
            if h.unlace_symbol_offset() >= 0 {
                h.unlace_symbol_type()
            } else {
                None
            }
        }) {
            let mt = st.get_metatype();
            if mt == crate::dtype::type_metatype::TYPE_STRUCT
                || mt == crate::dtype::type_metatype::TYPE_UNION
            {
                type_name = type_name_for_decl(st, rt.clone());
                declared = Some(std::rc::Rc::clone(st));
            }
        }
        // Array member: if the mapped Symbol is an array, declare the base
        // type and an `[count]` adornment after the name (C++ `emitVarDecl`'s
        // array branch).
        let array_decl = fd
            .high_bank()
            .get(high)
            .and_then(|h| {
                let st = h.unlace_symbol_type()?;
                array_decl_parts(st, rt.clone()).map(|parts| (parts, std::rc::Rc::clone(st)))
            })
            // No mapped-Symbol array: fall back to the declaration representative's
            // own data-type.  An anonymous `undefined1 [N]` array (an oversize
            // unknown - e.g. a 32-byte YMM FMA accumulator, GH-9184 - that
            // `getBase` widened past `max_basetype_size`) lives on the Varnode
            // itself, never a Symbol; declare it `<base> name [N]` instead of
            // flattening it to a scalar `undefined<N>`.
            .or_else(|| {
                // A partial array member cannot replace the whole record that
                // supplies the base for this variable's member accesses.
                if declared.as_ref().is_some_and(|ty| {
                    matches!(
                        ty.get_metatype(),
                        crate::dtype::type_metatype::TYPE_STRUCT
                            | crate::dtype::type_metatype::TYPE_UNION
                    )
                }) {
                    return None;
                }
                let v = decl_rep_varnode(fd, high).and_then(|vn| fd.vbank().get(vn))?;
                array_decl_parts(v.get_type(), rt.clone())
                    .map(|parts| (parts, std::rc::Rc::clone(v.get_type())))
            });
        let ((decl_type, decl_back), array_count) = match array_decl {
            Some((((front, back), count), array)) => {
                declared = Some(array);
                ((front.clone(), back), Some((front, count)))
            }
            None => (type_name, None),
        };
        if self.options.partial_access
            && self.out_lang == crate::lang::OutLang::C
            && arch.types().get_size_of_pointer() == 8
            && crate::widelocal::scalar_bits(fd, high)
        {
            return (
                "unsigned __int128".into(),
                String::new(),
                None,
                comment,
                None,
            );
        }
        (decl_type, decl_back, array_count, comment, declared)
    }

    /// (unlace) Collapse the declarations of the several HighVariables that share one
    /// ScopeLocal **Symbol** into a single declaration, and report the type the
    /// survivor should carry.
    ///
    /// C++ `PrintC::emitScopeVarDecls` walks the Symbol table (printc.cc:2667/2696),
    /// so one Symbol is one declaration by construction; the unlace printer walks
    /// HighVariables, so a stack slot whose live ranges did not merge is declared once
    /// per high — the same identifier declared twice with two recovered types, which
    /// is invalid C.  Two declarations are the same Symbol when the storage of their
    /// declaration representatives resolves to the same containing ScopeLocal Symbol
    /// **and** they render the same identifier; requiring the name to match keeps the
    /// collapse from ever removing the sole declaration of a referenced name (the
    /// undeclared-variable failure mode of the `declmerge` gate).
    ///
    /// The survivor is the first in emission order.  A group that already agreed on a
    /// rendered type keeps it — the highs recovered it, which is sharper information
    /// than the (usually `undefined<N>`) Symbol type.  A group that did NOT agree is
    /// arbitrated by the returned type override: the Symbol's own type, the direct
    /// analogue of C++ `emitVarDecl`'s `sym->getType()` (printc.cc:1719), unless that
    /// type is **narrower** than the widest storage the group covers, in which case
    /// the widest member's rendering wins.  unlace's `ScopeLocal` ranges can be narrower
    /// than the accesses that reach them (upstream `restructure` would have grown the
    /// Symbol), and a declaration smaller than the object the body writes through is a
    /// fresh correctness bug, not a faithful one.
    pub(super) fn collapse_symbol_decls(
        &mut self,
        fd: &Funcdata,
        arch: &Architecture,
        decls: &mut Vec<(crate::context::HighVariableId, String)>,
    ) -> std::collections::HashMap<crate::context::HighVariableId, DeclTypeOverride> {
        let mut overrides: std::collections::HashMap<
            crate::context::HighVariableId,
            DeclTypeOverride,
        > = std::collections::HashMap::new();
        let scope = match fd.get_scope_local() {
            Some(s) => s,
            None => return overrides,
        };
        // A collapse needs two declarations of one identifier, so nothing outside a
        // repeated name can move.  `decls` is sorted by name, so the repeats are
        // adjacent; when there are none (the overwhelming majority of functions) the
        // Symbol lookups below are skipped entirely.
        let repeated: std::collections::HashSet<&str> = decls
            .windows(2)
            .filter(|w| w[0].1 == w[1].1)
            .map(|w| w[0].1.as_str())
            .collect();
        if repeated.is_empty() {
            return overrides;
        }
        // The Symbol identity of each repeated-name declaration, plus the Symbol's own
        // type.  A high with no containing Symbol (a register/unique temp that never
        // reached the local scope) keeps the per-high behavior.
        let keys: Vec<
            Option<(
                crate::database::SymbolId,
                Option<std::rc::Rc<crate::dtype::Datatype>>,
            )>,
        > = decls
            .iter()
            .map(|(high, name)| {
                if !repeated.contains(name.as_str()) {
                    return None;
                }
                let v = decl_rep_varnode(fd, *high).and_then(|vn| fd.vbank().get(vn))?;
                scope.containing_symbol_for_storage(v.get_addr())
            })
            .collect();
        let mut groups: std::collections::HashMap<(crate::database::SymbolId, String), Vec<usize>> =
            std::collections::HashMap::new();
        for (i, key) in keys.iter().enumerate() {
            if let Some((sym, _)) = key {
                groups
                    .entry((*sym, decls[i].1.clone()))
                    .or_default()
                    .push(i);
            }
        }
        let mut dropped: std::collections::HashSet<usize> = std::collections::HashSet::new();
        for idxs in groups.values() {
            if idxs.len() < 2 {
                continue;
            }
            let keep = idxs[0];
            for &i in &idxs[1..] {
                dropped.insert(i);
                self.local_name_aliases.insert(decls[i].0, decls[keep].0);
            }
            let (rendered, rendered_types): (Vec<_>, Vec<_>) = idxs
                .iter()
                .map(|&i| {
                    let (t, b, a, _, ty) = self.rendered_local_decl(fd, arch, decls[i].0);
                    ((t, b, a), ty)
                })
                .unzip();
            if rendered.iter().all(|r| *r == rendered[0]) {
                continue;
            }
            // The group disagrees about the slot's type.  The widest storage any
            // member covers is the floor: the declared object must hold every access
            // the body renders through this name.
            let widths: Vec<int4> = idxs
                .iter()
                .map(|&i| {
                    decl_rep_varnode(fd, decls[i].0)
                        .and_then(|vn| fd.vbank().get(vn))
                        .map(|v| v.get_size())
                        .unwrap_or(0)
                })
                .collect();
            let wmax = widths.iter().copied().max().unwrap_or(0);
            // C++ declares the Symbol's own type.  A composite Symbol is already
            // collapsed by the type-Rc retain and declares through the array/struct
            // branches, so only a wide-enough scalar Symbol type arbitrates here.
            let symbol_type = keys[keep]
                .as_ref()
                .and_then(|(_, t)| t.as_ref())
                .filter(|st| {
                    use crate::dtype::type_metatype::*;
                    !matches!(st.get_metatype(), TYPE_ARRAY | TYPE_STRUCT | TYPE_UNION)
                        && st.get_size() >= wmax
                });
            match symbol_type {
                Some(st) => {
                    let (front, back) = type_name_for_decl(st, self.rt_ctx.clone());
                    overrides.insert(
                        decls[keep].0,
                        (front, back, None, Some(std::rc::Rc::clone(st))),
                    );
                }
                // No usable Symbol type: declare the widest member's own rendering.
                None => {
                    let pos = widths.iter().position(|&w| w == wmax).unwrap_or(0);
                    if rendered[pos] != rendered[0] {
                        let (t, b, a) = rendered[pos].clone();
                        overrides.insert(decls[keep].0, (t, b, a, rendered_types[pos].clone()));
                    }
                }
            }
        }
        if !dropped.is_empty() {
            let mut i = 0;
            decls.retain(|_| {
                let keep = !dropped.contains(&i);
                i += 1;
                keep
            });
        }
        overrides
    }

    /// The declaration type and original storage key used by declaration collapse,
    /// and the datatype that type spells.
    pub(super) fn local_decl_type_and_comment(
        &self,
        fd: &Funcdata,
        arch: &Architecture,
        high: crate::context::HighVariableId,
    ) -> LocalDeclTypeAndComment {
        if fd.high_bank().get(high).is_none() {
            return ((("undefined1".to_string(), String::new()), None), None);
        }
        let rep = decl_rep_varnode(fd, high);
        // (unlace declhightype) The declared type is the merged high's own -- the
        // one `ActionSetCasts` checked every use in the body against -- not
        // whichever member happens to be address-tied or first.  See
        // `crate::declhightype`.
        let type_rep = crate::declhightype::type_representative(fd, high)
            .filter(|_| crate::declhightype::declares_from_high(fd, high));
        match rep.and_then(|vn| fd.vbank().get(vn)) {
            Some(v) => {
                let decl_ty = type_rep
                    .and_then(|vn| fd.vbank().get(vn))
                    .map(|tv| tv.get_type())
                    .unwrap_or_else(|| v.get_type());
                // (unlace `signedness`) The rounded declaration, when the operation
                // set decided one for this high.
                let decl_ty = self.sign_plan.decl_type(high).unwrap_or(decl_ty);
                let tn = type_name_for_decl(decl_ty, self.rt_ctx.clone());
                let comment = crate::varsources::representative_comment(fd, arch, high, v);
                ((tn, comment), Some(std::rc::Rc::clone(decl_ty)))
            }
            None => ((("undefined1".to_string(), String::new()), None), None),
        }
    }
}
