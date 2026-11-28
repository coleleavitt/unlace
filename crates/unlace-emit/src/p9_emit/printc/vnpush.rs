//! Varnode leaf pushing (push_vn_ir and friends).

use super::*;

impl PrintC {
    /// C++ `PrintLanguage::recurse` per-Varnode (printlanguage.cc:533): an
    /// *implied* written Varnode expands its defining op's expression inline; an
    /// *explicit* (or input/free) Varnode becomes a leaf atom.  Resolved
    /// directly (depth-first) rather than via the lazy nodepend queue.
    #[doc(hidden)]
    pub fn push_vn_ir(&mut self, fd: &Funcdata, arch: &Architecture, vn: VarnodeId, op: OpId) {
        if let Some(transfer) = crate::bitcast::stack_float_input(fd, op, vn) {
            self.op_bit_transfer_ir(fd, arch, op, transfer);
            return;
        }
        self.push_vn_ir_body(fd, arch, vn, op);
    }

    #[doc(hidden)]
    pub fn push_vn_ir_body(&mut self, fd: &Funcdata, arch: &Architecture, vn: VarnodeId, op: OpId) {
        let (implied, has_field, def) = {
            let v = match fd.vbank().get(vn) {
                Some(v) => v,
                None => return,
            };
            (v.is_implied(), v.has_implied_field(), v.get_def())
        };
        if implied {
            // C++ `PrintLanguage::recurse` (printlanguage.cc:533): an implied
            // Varnode carrying a resolved union/struct field renders as
            // `<def-expr>.field` via `pushImpliedField`; otherwise just expand the
            // defining op.
            if has_field && self.push_implied_field_ir(fd, arch, vn, op) {
                return;
            }
            if let Some(defop) = def {
                // defOp->getOpcode()->push(this,defOp,op): `op` is the reading op
                // (the C++ `readOp`), threaded so opIntSext/opIntZext can test
                // isExtensionCastImplied against the surrounding expression.
                self.op_push_ir(fd, arch, defop, Some(op));
                return;
            }
        }
        self.push_vn_explicit_ir(fd, arch, vn, op);
    }

    /// C++ `PrintC::pushImpliedField` (printc.cc:2161-2192): an implied Varnode
    /// whose high data-type is a union (or a single-field struct) resolves, via the
    /// per-function union cache, to a specific field; render `<def-expr>.field`.
    ///
    /// Returns `true` when the field render was emitted (the C++ `proceed` arm);
    /// `false` when nothing resolved (the C++ "Just push original op" arm), so the
    /// caller falls back to expanding the defining op.
    ///
    /// STUB(merge high-type retention): the C++ reads the *unresolved* union parent
    /// off `vn->getHigh()->getType()`, then resolves the field through the cache.
    /// In the merged rust tree the implied Varnode's bare `get_type()` (the
    /// print-time high surface) has already been *updated* to the resolved field
    /// data-type by the cast/merge passes, so the union parent is not available
    /// here and `parent.needs_resolution()` is false for the value-member cases
    /// (`glob.intfield`, `(ptr->value).myint`).  This arm is therefore the faithful
    /// port but is *inert* until the HighVariable retains the needs-resolution
    /// union type at print time (a merge-stage surface owned elsewhere); it never
    /// changes a render today (gated on `has_implied_field`, union-resolution-only)
    /// and lights up the value-member renders once that retention lands.
    pub(super) fn push_implied_field_ir(
        &mut self,
        fd: &Funcdata,
        arch: &Architecture,
        vn: VarnodeId,
        op: OpId,
    ) -> bool {
        // The bare type is the print-time high surface here.
        let parent = match fd.vbank().get(vn).map(|v| v.get_type().clone()) {
            Some(t) => t,
            None => return false,
        };
        let mut field: Option<(String, int4)> = None; // (name, ident)
        if parent.needs_resolution()
            && parent.get_metatype() != crate::dtype::type_metatype::TYPE_PTR
        {
            let slot = fd.obank().get(op).map(|o| o.get_slot(vn)).unwrap_or(-1);
            if let Some(res) = fd.get_union_field(&parent, op, slot) {
                let field_num = res.get_field_num();
                if field_num >= 0 {
                    match parent.get_metatype() {
                        // STRUCT with fieldNum == 0: beginField().
                        crate::dtype::type_metatype::TYPE_STRUCT if field_num == 0 => {
                            if let Some(f) = parent.get_field(0) {
                                field = Some((f.name.clone(), f.ident));
                            }
                        }
                        // UNION: getField(fieldNum).
                        crate::dtype::type_metatype::TYPE_UNION => {
                            if let Some(f) = parent.get_field(field_num) {
                                field = Some((f.name.clone(), f.ident));
                            }
                        }
                        _ => {}
                    }
                }
            }
        }
        let def_op = match fd.vbank().get(vn).and_then(|v| v.get_def()) {
            Some(d) => d,
            None => return false,
        };
        let (fieldname, fieldid) = match field {
            Some(f) => f,
            // C++: the no-proceed path pushes the def op; the caller does it here.
            None => return false,
        };
        self.push_op(&tokens::OBJECT_MEMBER, Some(op_key(op)));
        self.op_push_ir(fd, arch, def_op, Some(op));
        let field_atom = Atom::field(
            fieldname,
            TagType::FieldToken,
            crate::printlanguage::SyntaxHighlight::no_color,
            0,
            fieldid,
            op_key(op),
        );
        self.push_atom(&field_atom);
        true
    }

    /// `pushVn(vn, op, m)` — set the value-rendering mods (`print_load_value` /
    /// `print_store_value`) for the recursive descent into `vn`'s defining op, then
    /// restore.  In the direct-recursion RPN engine the mods live on `self.context`
    /// (the C++ stashes them on the deferred `nodepend` entry).
    #[doc(hidden)]
    pub fn push_vn_ir_m(
        &mut self,
        fd: &Funcdata,
        arch: &Architecture,
        vn: VarnodeId,
        op: OpId,
        m: uint4,
    ) {
        let save = self.context.mods();
        self.context.set_mods(m);
        self.push_vn_ir(fd, arch, vn, op);
        self.context.set_mods(save);
    }

    /// C++ `PrintC::checkArrayDeref(vn)` (printc.cc:354): is `vn` an implied value
    /// produced by a PTRSUB/PTRADD (optionally through a SEGMENTOP)?  Such a value
    /// renders with array/member notation rather than an explicit `*` dereference.
    pub(super) fn check_array_deref(&self, fd: &Funcdata, vn: VarnodeId) -> bool {
        let v = match fd.vbank().get(vn) {
            Some(v) => v,
            None => return false,
        };
        if !v.is_implied() || !v.is_written() {
            return false;
        }
        let mut op = match v.get_def() {
            Some(o) => o,
            None => return false,
        };
        if fd.obank().get(op).map(|o| o.code()) == Some(OpCode::CPUI_SEGMENTOP) {
            let vn2 = match fd.obank().get(op).and_then(|o| o.get_in(2)) {
                Some(v) => v,
                None => return false,
            };
            let v2 = match fd.vbank().get(vn2) {
                Some(v) => v,
                None => return false,
            };
            if !v2.is_implied() || !v2.is_written() {
                return false;
            }
            op = match v2.get_def() {
                Some(o) => o,
                None => return false,
            };
        }
        let code = fd.obank().get(op).map(|o| o.code());
        code == Some(OpCode::CPUI_PTRSUB) || code == Some(OpCode::CPUI_PTRADD)
    }

    /// C++ `PrintC::opLoad` (printc.cc:507).  A LOAD renders either as an array/
    /// member value (when the pointer is a PTRSUB/PTRADD, absorbing the deref) or
    /// as an explicit `*ptr`.  A statement LOAD through the byte-copy helper copies
    /// straight into its printed destination member's scalar type.
    pub(super) fn op_load_ir(&mut self, fd: &Funcdata, arch: &Architecture, op: OpId) {
        if self.out_lang == crate::lang::OutLang::Java {
            self.java_load_ir(fd, arch, op);
            return;
        }
        if self.out_lang == crate::lang::OutLang::Go
            && let Some(view) = super::super::gostringindex::prove(fd, op) {
                self.push_op(&tokens::SUBSCRIPT, Some(op_key(op)));
                self.push_go_call("unsafe.String", op);
                self.push_op(&tokens::COMMA, Some(op_key(op)));
                self.push_vn_ir(fd, arch, view.data, op);
                self.push_vn_ir(fd, arch, view.len, op);
                self.push_vn_ir(fd, arch, view.index, op);
                return;
            }
        if self.out_lang == crate::lang::OutLang::C
            && let Some(mut access) = crate::stackmem::access(fd, op) {
                if self.stmt_op == Some(op)
                    && let Some(target) = self.storage_load_member_type(fd, arch, op, access.size) {
                        access.datatype = target;
                    }
                self.op_storage_copy_ir(fd, arch, op, access);
                return;
            }

        let ptr = match fd.obank().get(op).and_then(|o| o.get_in(1)) {
            Some(v) => v,
            None => return,
        };
        if let Some(name) = arch
            .unlace_options
            .get::<crate::printc::ImportData>()
            .0
            .then(|| import_slot_name(fd, ptr))
            .flatten()
        {
            self.push_atom(&Atom::with_op_vn(
                name,
                TagType::VarToken,
                crate::printlanguage::SyntaxHighlight::global_color,
                op_key(op),
                vn_key(ptr),
            ));
            return;
        }
        if self.push_post_increment(fd, arch, op, ptr) {
            return;
        }
        let usearray = self.check_array_deref(fd, ptr) || self.is_value_indirect_input(fd, ptr);
        let mut m = self.context.mods();
        if usearray && !self.context.is_set(modifiers::FORCE_POINTER) {
            m |= modifiers::PRINT_LOAD_VALUE;
        } else {
            self.push_op(&tokens::DEREFERENCE, Some(op_key(op)));
        }
        self.push_vn_ir_m(fd, arch, ptr, op, m);
    }

    /// (unlace `postinc`) `*ptr++` for a LOAD or STORE `unlace_postinc` marked.
    pub(super) fn push_post_increment(
        &mut self,
        fd: &Funcdata,
        arch: &Architecture,
        op: OpId,
        ptr: VarnodeId,
    ) -> bool {
        let marked = fd
            .obank()
            .get(op)
            .is_some_and(|o| o.get_addlflags() & crate::op::pcodeop_addlflags::unlace_postinc != 0);
        if !marked {
            return false;
        }
        self.push_op(&tokens::DEREFERENCE, Some(op_key(op)));
        self.push_op(&tokens::POST_INCREMENT, Some(op_key(op)));
        self.push_vn_explicit_ir(fd, arch, ptr, op);
        self.push_atom(&Atom::syntax(
            "",
            TagType::BlankToken,
            crate::printlanguage::SyntaxHighlight::no_color,
        ));
        true
    }

    pub(super) fn storage_load_member_type(
        &self,
        fd: &Funcdata,
        arch: &Architecture,
        op: OpId,
        size: int4,
    ) -> Option<std::rc::Rc<crate::dtype::Datatype>> {
        let out = fd.obank().get(op)?.get_out()?;
        self.partial_piece_type(fd, arch, out, op, -1)
            .filter(|ty| storage_copy_scalar(ty, size))
    }

    /// A byte-copy LOAD whose destination member differs in float-ness from the
    /// helper's own type; only its own statement copies into the member's type.
    pub(super) fn converts_storage_load(
        &self,
        fd: &Funcdata,
        arch: &Architecture,
        op: OpId,
    ) -> bool {
        let float = |ty: &crate::dtype::Datatype| ty.get_metatype() == type_metatype::TYPE_FLOAT;
        self.out_lang == crate::lang::OutLang::C
            && fd
                .obank()
                .get(op)
                .is_some_and(|o| o.code() == OpCode::CPUI_LOAD)
            && crate::stackmem::access(fd, op).is_some_and(|access| {
                self.storage_load_member_type(fd, arch, op, access.size)
                    .is_some_and(|ty| float(&ty) != float(&access.datatype))
            })
    }

    /// C++ `PrintC::opStore` (printc.cc:520).  `*ptr = value` (or member/array
    /// notation absorbing the deref).  A byte-copy helper's compound initializer
    /// takes the rendered source member's scalar type, so it copies those bits.
    pub(super) fn op_store_ir(&mut self, fd: &Funcdata, arch: &Architecture, op: OpId) {
        if self.out_lang == crate::lang::OutLang::Java {
            self.java_store_ir(fd, arch, op);
            return;
        }
        if self.out_lang == crate::lang::OutLang::Rust
            && !self.options.nocasts
            && self.op_rust_store_width(fd, arch, op)
        {
            return;
        }
        if self.out_lang == crate::lang::OutLang::C
            && let Some(mut access) = crate::stackmem::access(fd, op) {
                if let Some(target) = access
                    .value
                    .and_then(|value| self.partial_piece_type(fd, arch, value, op, 2))
                    .filter(|ty| storage_copy_scalar(ty, access.size))
                {
                    access.datatype = target;
                }
                self.op_storage_copy_ir(fd, arch, op, access);
                return;
            }
        let mods = self.context.mods();
        self.push_op(&tokens::ASSIGNMENT, Some(op_key(op)));
        let ptr = match fd.obank().get(op).and_then(|o| o.get_in(1)) {
            Some(v) => v,
            None => return,
        };
        let val = fd.obank().get(op).and_then(|o| o.get_in(2));
        if self.push_post_increment(fd, arch, op, ptr) {
            if let Some(val) = val {
                self.push_vn_ir_m(fd, arch, val, op, mods);
            }
            return;
        }
        let usearray = self.check_array_deref(fd, ptr) || self.is_value_indirect_input(fd, ptr);
        let mut m = mods;
        if usearray && !self.context.is_set(modifiers::FORCE_POINTER) {
            m |= modifiers::PRINT_STORE_VALUE;
        } else {
            self.push_op(&tokens::DEREFERENCE, Some(op_key(op)));
        }
        // C++ pushes value (slot 2) then pointer (slot 1) onto the LIFO
        // nodepend, so the LIFO reversal makes the pointer the LHS:
        // `ptr = value`.  The direct-recursion engine here renders in push
        // order (first push = leftmost operand, the inverse of the C++ LIFO),
        // so to keep the pointer on the LHS of `=` we push the pointer first,
        // then the value — exactly as op_binary_ir inverts in0/in1.
        self.push_vn_ir_m(fd, arch, ptr, op, m);
        if let Some(val) = val {
            if self.out_lang == crate::lang::OutLang::Go
                && self.push_go_store_value(fd, arch, ptr, val, op, mods)
            {
                return;
            }
            if self.out_lang == crate::lang::OutLang::Rust
                && !self.options.nocasts
                && self.push_rust_store_value(fd, arch, ptr, val, op, mods)
            {
                return;
            }
            self.push_vn_ir_m(fd, arch, val, op, mods);
        }
    }

    /// Converts a pointer compound initializer whose rendered operand is not
    /// already a pointer the declared type accepts implicitly (an integer
    /// carrier, a constant, or an unrelated pointer).
    pub(super) fn push_storage_initializer_cast(
        &mut self,
        fd: &Funcdata,
        datatype: &std::rc::Rc<crate::dtype::Datatype>,
        rendered: Option<VarnodeId>,
        op: OpId,
    ) {
        use crate::dtype::type_metatype::{TYPE_PTR, TYPE_VOID};
        if datatype.get_metatype() != TYPE_PTR {
            return;
        }
        let is_void = |t: &std::rc::Rc<crate::dtype::Datatype>| {
            t.get_ptr_to()
                .is_some_and(|p| p.get_metatype() == TYPE_VOID)
        };
        let accepted = rendered.and_then(|vn| fd.vbank().get(vn)).is_some_and(|v| {
            let ty = v.get_type();
            ty.get_metatype() == TYPE_PTR
                && (std::rc::Rc::ptr_eq(ty, datatype)
                    || matches!(ty.compare(datatype, 10), Ok(0))
                    || is_void(ty)
                    || is_void(datatype))
        });
        if !accepted {
            self.push_cast_open(datatype, op);
        }
    }

    pub(super) fn op_storage_copy_ir(
        &mut self,
        fd: &Funcdata,
        arch: &Architecture,
        op: OpId,
        access: crate::stackmem::Access,
    ) {
        use crate::printlanguage::SyntaxHighlight;
        static COMPOUND: OpToken = op_token("", " }", 2, 66, false, TokenType::Postsurround, 0, 0);
        let (front, back) = declarator_parts(&access.datatype, self.rt_ctx.clone());
        let ty = format!("{front}{back}");
        if access.value.is_none() {
            let pointer_size = fd.vbank().get(access.pointer).unwrap().get_size();
            let pointer_type = fd
                .get_arch()
                .types()
                .unwrap()
                .get_type_pointer(pointer_size, std::rc::Rc::clone(&access.datatype), 1)
                .unwrap();
            self.push_op(&tokens::DEREFERENCE, Some(op_key(op)));
            self.push_cast_open(&pointer_type, op);
        }
        self.push_op(&tokens::FUNCTION_CALL, Some(op_key(op)));
        self.push_atom(&Atom::syntax(
            "__builtin_memcpy",
            TagType::FuncToken,
            SyntaxHighlight::funcname_color,
        ));
        self.push_op(&tokens::COMMA, Some(op_key(op)));
        self.push_op(&tokens::COMMA, Some(op_key(op)));
        let mods =
            self.context.mods() & !(modifiers::PRINT_LOAD_VALUE | modifiers::PRINT_STORE_VALUE);
        if let Some(value) = access.value {
            self.push_storage_pointer_ir(fd, arch, op, &access, mods);
            self.push_op(&tokens::ADDRESSOF, Some(op_key(op)));
            self.push_op(&COMPOUND, Some(op_key(op)));
            self.push_atom(&Atom::syntax(
                format!("({ty}){{ "),
                TagType::TypeToken,
                SyntaxHighlight::type_color,
            ));
            self.push_storage_initializer_cast(fd, &access.datatype, Some(value), op);
            self.push_vn_ir_m(fd, arch, value, op, mods);
        } else {
            self.push_atom(&Atom::syntax(
                format!("&({ty}){{0}}"),
                TagType::TypeToken,
                SyntaxHighlight::type_color,
            ));
            self.push_storage_pointer_ir(fd, arch, op, &access, mods);
        }
        self.push_constant_ir(access.size as u64, 4, op);
    }

    pub(super) fn push_stackbyte_source_ir(
        &mut self,
        fd: &Funcdata,
        arch: &Architecture,
        source: VarnodeId,
        op: OpId,
        mods: uint4,
        read_op: Option<OpId>,
    ) {
        use crate::printlanguage::SyntaxHighlight;
        if let Some(load) = crate::stackbytes::safe_load_op(fd, source, op) {
            // Address-tied LOAD outputs can share the destination stackview
            // HighVariable. Expand the proved-safe read itself, bypassing that
            // merged high's field name.
            let float = fd
                .obank()
                .get(load)
                .and_then(|load| load.get_in(1))
                .and_then(|pointer| fd.vn_type_read_facing(pointer, load).get_ptr_to())
                .filter(|ty| {
                    ty.get_metatype() == crate::dtype::type_metatype::TYPE_FLOAT
                        && matches!(ty.get_size(), 4 | 8)
                        && fd
                            .vbank()
                            .get(source)
                            .is_some_and(|value| value.get_size() == ty.get_size())
                });
            if let Some(float) = float {
                // Byte projections consume the representation of the replayed LOAD.
                static BITS: OpToken =
                    op_token("", " }).to", 2, 66, false, TokenType::Postsurround, 0, 0);
                let (front, back) = declarator_parts(&float, self.rt_ctx.clone());
                let word = arch
                    .types()
                    .get_base(float.get_size(), crate::dtype::type_metatype::TYPE_UINT)
                    .unwrap();
                let (word_front, word_back) = declarator_parts(&word, self.rt_ctx.clone());
                self.push_op(&BITS, Some(op_key(op)));
                self.push_atom(&Atom::syntax(
                    format!(
                        "((union {{ {front}{back} from; {word_front}{word_back} to; }}){{ .from = "
                    ),
                    TagType::TypeToken,
                    SyntaxHighlight::type_color,
                ));
            }
            let saved_mods = self.context.mods();
            self.context.set_mods(mods);
            self.op_push_ir(fd, arch, load, Some(op));
            self.context.set_mods(saved_mods);
        } else if let Some(global) = crate::stackbytes::safe_global_source(fd, source, op, read_op)
        {
            // Render the physical data-space address, preserving storage identity
            // even if the RAM Varnode was coalesced with the stackview HighVariable.
            self.push_annotation_ir(fd, arch, global, op);
        } else {
            self.push_vn_ir_m(fd, arch, source, op, mods);
        }
    }

    pub(super) fn emit_byte_assignment_ir(
        &mut self,
        fd: &Funcdata,
        arch: &Architecture,
        op: OpId,
        assignment: crate::stackbytes::Assignment,
    ) {
        use crate::dtype::type_metatype;
        use crate::printlanguage::SyntaxHighlight;
        static COMPOUND: OpToken = op_token("", " }", 2, 66, false, TokenType::Postsurround, 0, 0);
        let factory = arch.types();
        let byte_type = factory.get_base(1, type_metatype::TYPE_UINT).unwrap();
        let mods =
            self.context.mods() & !(modifiers::PRINT_LOAD_VALUE | modifiers::PRINT_STORE_VALUE);
        let stack_big_endian = fd
            .get_arch()
            .manage()
            .get_stack_space()
            .is_some_and(|stack| stack.is_big_endian());
        for _ in 1..assignment.ranges.len() {
            self.push_op(&tokens::COMMA, Some(op_key(op)));
        }
        for range in assignment.ranges {
            let size = range.bytes.len() as i32;
            let datatype = factory
                .get_type_array(size, std::rc::Rc::clone(&byte_type))
                .unwrap();
            let scalar_source = if matches!(size, 1 | 2 | 4 | 8) {
                range.bytes.first().and_then(|first| match first {
                    crate::stackbytes::Byte::Value {
                        source, read_op, ..
                    } => {
                        let full_width = fd
                            .vbank()
                            .get(*source)
                            .is_some_and(|value| value.get_size() == size);
                        let complete_range = full_width
                            && range.bytes.iter().enumerate().all(|(index, byte)| {
                                let expected = if stack_big_endian {
                                    size - 1 - index as i32
                                } else {
                                    index as i32
                                };
                                matches!(
                                    byte,
                                    crate::stackbytes::Byte::Value {
                                        source: candidate,
                                        byte,
                                        read_op: candidate_read_op,
                                    } if *candidate == *source
                                        && *byte == expected
                                        && *candidate_read_op == *read_op
                                )
                            });
                        complete_range.then_some((*source, *read_op))
                    }
                    crate::stackbytes::Byte::Constant(_) => None,
                })
            } else {
                None
            };
            let (front, back) = if let Some((source, _)) = scalar_source {
                let source_size = fd.vbank().get(source).unwrap().get_size();
                let datatype = factory
                    .get_base(source_size, type_metatype::TYPE_UINT)
                    .unwrap();
                declarator_parts(&datatype, self.rt_ctx.clone())
            } else {
                declarator_parts(&datatype, self.rt_ctx.clone())
            };
            let access = crate::stackmem::Access {
                pointer: assignment.output,
                value: None,
                datatype,
                size,
                address: Some(crate::stackmem::ByteAddress {
                    name: assignment.name.clone(),
                    offset: assignment.offset + range.offset,
                    terms: Vec::new(),
                    pointer_size: assignment.pointer_size,
                }),
            };
            self.push_op(&tokens::FUNCTION_CALL, Some(op_key(op)));
            self.push_atom(&Atom::syntax(
                "__builtin_memcpy",
                TagType::FuncToken,
                SyntaxHighlight::funcname_color,
            ));
            self.push_op(&tokens::COMMA, Some(op_key(op)));
            self.push_op(&tokens::COMMA, Some(op_key(op)));
            self.push_storage_pointer_ir(fd, arch, op, &access, mods);
            self.push_op(&tokens::ADDRESSOF, Some(op_key(op)));
            self.push_op(&COMPOUND, Some(op_key(op)));
            self.push_atom(&Atom::syntax(
                format!("({front}{back}){{ "),
                TagType::TypeToken,
                SyntaxHighlight::type_color,
            ));
            if let Some((source, read_op)) = scalar_source {
                self.push_stackbyte_source_ir(fd, arch, source, op, mods, read_op);
            } else {
                for _ in 1..range.bytes.len() {
                    self.push_op(&tokens::COMMA, Some(op_key(op)));
                }
                for byte in range.bytes {
                    match byte {
                        crate::stackbytes::Byte::Constant(value) => {
                            self.push_constant_ir(u64::from(value), 1, op);
                        }
                        crate::stackbytes::Byte::Value {
                            source,
                            byte,
                            read_op,
                        } => {
                            self.push_cast_open(&byte_type, op);
                            let source_size = fd.vbank().get(source).unwrap().get_size();
                            if byte > 0 {
                                self.push_op(&tokens::SHIFT_RIGHT, Some(op_key(op)));
                            }
                            if source_size > 1 {
                                let unsigned = factory
                                    .get_base(source_size, type_metatype::TYPE_UINT)
                                    .unwrap();
                                self.push_cast_open(&unsigned, op);
                            }
                            self.push_stackbyte_source_ir(fd, arch, source, op, mods, read_op);
                            if byte > 0 {
                                self.push_constant_ir((byte * 8) as u64, 4, op);
                            }
                        }
                    }
                }
            }
            self.push_constant_ir(size as u64, 4, op);
        }
    }

    /// The rendered declaration decides whether a whole local is a byte array.
    /// Recovered register values can have that declaration without a frame Symbol.
    pub(super) fn local_byte_array_name(
        &self,
        fd: &Funcdata,
        arch: &Architecture,
        vn: VarnodeId,
    ) -> Option<(String, std::rc::Rc<crate::dtype::Datatype>)> {
        let value = fd.vbank().get(vn)?;
        if value.is_implied() || value.is_persist() || value.is_volatile() {
            return None;
        }
        let high = value.get_high()?;
        if fd.high_bank().get(high)?.unlace_global() {
            return None;
        }
        let (_, _, _, _, declared) = self.rendered_local_decl(fd, arch, high);
        let declared = declared?;
        if !super::super::bytearrayc::byte_array(&declared)
            || declared.get_size() != value.get_size()
        {
            return None;
        }
        let (name, offset, _) = self.emitted_high_symbol(fd, high)?;
        (offset <= 0).then_some((name, declared.get_array_base()?))
    }

    pub(super) fn local_array_assignment(
        &self,
        fd: &Funcdata,
        arch: &Architecture,
        op: OpId,
    ) -> Option<crate::stackassign::Assignment> {
        let operation = fd.obank().get(op)?;
        if !matches!(operation.code(), OpCode::CPUI_COPY | OpCode::CPUI_CAST) {
            return None;
        }
        let output = operation.get_out()?;
        let input = operation.get_in(0)?;
        let size = fd.vbank().get(output)?.get_size();
        if fd.vbank().get(input)?.get_size() != size {
            return None;
        }
        let datatype = fd.vn_type_read_facing(input, op);
        if datatype.get_metatype() != crate::dtype::type_metatype::TYPE_FLOAT
            || datatype.get_size() != size
        {
            return None;
        }
        let (name, _) = self.local_byte_array_name(fd, arch, output)?;
        Some(crate::stackassign::Assignment {
            output,
            operand: Some(input),
            raw_constant: false,
            datatype,
            size,
            name,
            offset: 0,
            pointer_size: arch.manage().get_default_data_space()?.get_addr_size() as i32,
        })
    }

    pub(super) fn emit_storage_assignment_ir(
        &mut self,
        fd: &Funcdata,
        arch: &Architecture,
        op: OpId,
        assignment: crate::stackassign::Assignment,
    ) {
        use crate::printlanguage::SyntaxHighlight;
        static COMPOUND: OpToken = op_token("", " }", 2, 66, false, TokenType::Postsurround, 0, 0);
        let array_source = super::super::bytearrayc::byte_array(&assignment.datatype)
            .then(|| {
                assignment
                    .operand
                    .and_then(|input| crate::stackassign::loaded_bytes(fd, input))
                    .or_else(|| crate::stackassign::load_pointer(fd, op))
            })
            .flatten();
        let (front, back) = declarator_parts(&assignment.datatype, self.rt_ctx.clone());
        let access = crate::stackmem::Access {
            pointer: assignment.output,
            value: assignment.operand,
            datatype: std::rc::Rc::clone(&assignment.datatype),
            size: assignment.size,
            address: Some(crate::stackmem::ByteAddress {
                name: assignment.name,
                offset: assignment.offset,
                terms: Vec::new(),
                pointer_size: assignment.pointer_size,
            }),
        };
        self.push_op(&tokens::FUNCTION_CALL, Some(op_key(op)));
        self.push_atom(&Atom::syntax(
            if array_source.is_some() {
                "__builtin_memmove"
            } else {
                "__builtin_memcpy"
            },
            TagType::FuncToken,
            SyntaxHighlight::funcname_color,
        ));
        self.push_op(&tokens::COMMA, Some(op_key(op)));
        self.push_op(&tokens::COMMA, Some(op_key(op)));
        let mods =
            self.context.mods() & !(modifiers::PRINT_LOAD_VALUE | modifiers::PRINT_STORE_VALUE);
        self.push_storage_pointer_ir(fd, arch, op, &access, mods);
        if let Some((pointer, load, pointer_size)) = array_source {
            let (pointer, reader, cast) = crate::stackassign::memmove_source(fd, pointer, load)
                .unwrap_or((pointer, load, true));
            if cast {
                let types = fd.get_arch().types().unwrap();
                let byte = types
                    .get_base(1, crate::dtype::type_metatype::TYPE_UINT)
                    .unwrap();
                let pointer_type = types.get_type_pointer(pointer_size, byte, 1).unwrap();
                self.push_cast_open(&pointer_type, op);
            }
            self.push_vn_ir_m(fd, arch, pointer, reader, mods);
            self.push_constant_ir(assignment.size as u64, 4, op);
            return;
        }
        self.push_op(&tokens::ADDRESSOF, Some(op_key(op)));
        self.push_op(&COMPOUND, Some(op_key(op)));
        self.push_atom(&Atom::syntax(
            format!("({front}{back}){{ "),
            TagType::TypeToken,
            SyntaxHighlight::type_color,
        ));
        let rendered = match assignment.operand {
            Some(_) if assignment.raw_constant => None,
            Some(input) => Some(input),
            None => Some(assignment.output),
        };
        self.push_storage_initializer_cast(fd, &assignment.datatype, rendered, op);
        if let Some(input) = assignment.operand {
            if assignment.raw_constant {
                self.push_constant_ir(
                    fd.vbank().get(input).unwrap().get_offset(),
                    assignment.size,
                    op,
                );
            } else {
                self.push_vn_ir_m(fd, arch, input, op, mods);
            }
        } else {
            self.stmt_op = Some(op);
            self.op_push_ir(fd, arch, op, None);
            self.stmt_op = None;
        }
        self.push_constant_ir(assignment.size as u64, 4, op);
    }

    pub(super) fn push_storage_pointer_ir(
        &mut self,
        fd: &Funcdata,
        arch: &Architecture,
        op: OpId,
        access: &crate::stackmem::Access,
        mods: u32,
    ) {
        let Some(address) = access.address.as_ref() else {
            self.push_vn_ir_m(fd, arch, access.pointer, op, mods);
            return;
        };
        for term in address.terms.iter().rev() {
            let token = if term.scale < 0 {
                &tokens::BINARY_MINUS
            } else {
                &tokens::BINARY_PLUS
            };
            self.push_op(token, Some(op_key(op)));
        }
        if address.offset != 0 {
            self.push_op(&tokens::BINARY_PLUS, Some(op_key(op)));
        }
        let types = fd.get_arch().types().unwrap();
        let byte = types
            .get_base(1, crate::dtype::type_metatype::TYPE_UINT)
            .unwrap();
        let size = address.pointer_size;
        let pointer = types.get_type_pointer(size, byte, 1).unwrap();
        self.push_cast_open(&pointer, op);
        self.push_op(&tokens::ADDRESSOF, Some(op_key(op)));
        self.push_atom(&Atom::with_op_vn(
            address.name.clone(),
            TagType::VarToken,
            crate::printlanguage::SyntaxHighlight::var_color,
            op_key(op),
            vn_key(access.pointer),
        ));
        if address.offset != 0 {
            self.push_constant_ir(address.offset as u64, 4, op);
        }
        for term in &address.terms {
            if term.scale.unsigned_abs() != 1 {
                self.push_op(&tokens::MULTIPLY, Some(op_key(op)));
            }
            self.push_vn_ir_m(fd, arch, term.value, term.op, mods);
            if term.scale.unsigned_abs() != 1 {
                self.push_constant_ir(term.scale.unsigned_abs(), 4, op);
            }
        }
    }

    /// C++ `PrintC::checkBitFieldMember` (printc.cc:378-389): decide whether a
    /// bitfield access through a LOAD/STORE should use member syntax (`.`) or
    /// pointer syntax (`->`).
    ///
    /// If the bitfield is not at byte offset 0 a PTRSUB must be present accessing
    /// the bitfield storage range; that PTRSUB is skipped and member syntax is
    /// used only when *another* PTRSUB/PTRADD remains underneath
    /// ([`check_array_deref`](Self::check_array_deref)). Divergence: a PTRSUB
    /// whose offset falls inside the bitfield's container is skipped as well; it
    /// reaches part of a container that starts at offset 0, which the C parser
    /// gives a whole run of bitfields.
    pub(super) fn check_bit_field_member(
        &self,
        fd: &Funcdata,
        vn: VarnodeId,
        field: &crate::dtype::TypeBitField,
    ) -> bool {
        let ptrsub = fd
            .vbank()
            .get(vn)
            .and_then(|v| v.get_def())
            .and_then(|op| fd.obank().get(op))
            .filter(|o| o.code() == OpCode::CPUI_PTRSUB);
        let inside = ptrsub
            .and_then(|o| o.get_in(1))
            .and_then(|off| fd.vbank().get(off))
            .is_some_and(|off| (1..field.byte_size as uintb).contains(&off.get_offset()));
        let mut vn = vn;
        if field.byte_offset != 0 || inside {
            vn = match ptrsub.and_then(|o| o.get_in(0)) {
                Some(v) => v,
                None => return false,
            };
        }
        self.check_array_deref(fd, vn)
    }

    /// Push the bitfield-name Atom (C++ `Atom(field->name,bitfieldtoken,no_color,
    /// theStruct,field->ident,op)`, e.g. printc.cc:1311).  The struct marker is
    /// markup-only; the field name + `ident` (carried in the Atom `offset`) drive
    /// the no-markup render.
    pub(super) fn push_bitfield_atom(&mut self, field: &crate::dtype::TypeBitField, op: OpId) {
        self.push_atom(&Atom::field(
            field.name.clone(),
            TagType::BitFieldToken,
            crate::printlanguage::SyntaxHighlight::no_color,
            0,
            field.ident,
            op_key(op),
        ));
    }

    /// C++ `PrintC::opZpullOp` (printc.cc:1294) / `PrintC::opSpullOp`
    /// (printc.cc:1320): render a bitfield read.  Both bodies are identical (the
    /// signed/unsigned distinction lives in the recovery's type, not the render),
    /// so they share this method.
    ///
    /// When the read goes through a LOAD, the structure pointer is pushed with
    /// member (`.`) or pointer (`->`) syntax and the bitfield name follows.  When
    /// the read is of a bound (partial) symbol, the symbol detail is pushed with
    /// member syntax.  On an unrecognized form, fall back to the functional
    /// `ZPULL(...)`/`SPULL(...)` render.
    pub(super) fn op_pull_ir(&mut self, fd: &Funcdata, arch: &Architecture, op: OpId) {
        let expr = crate::bitfield::expression::PullExpression::new(fd, op);
        let bitfield = match (expr.is_valid(), &expr.expr.bitfield) {
            (true, Some(b)) => b.clone(),
            _ => {
                // If no other way to print it, print as functional operator.
                self.op_func_ir(fd, arch, op);
                return;
            }
        };
        if let Some(load_op) = expr.load_op {
            let load_ptr = fd.obank().get(load_op).and_then(|o| o.get_in(1));
            let mut m = self.context.mods();
            let use_member = load_ptr
                .map(|p| self.check_bit_field_member(fd, p, &bitfield))
                .unwrap_or(false);
            if use_member {
                m |= modifiers::PRINT_LOAD_VALUE;
                self.push_op(&tokens::OBJECT_MEMBER, Some(op_key(op)));
            } else {
                self.push_member_through_pointer(Some(op_key(op)));
            }
            if let Some(sp) = expr.struct_ptr {
                self.push_vn_ir_m(fd, arch, sp, load_op, m);
            }
            self.push_bitfield_atom(&bitfield, op);
        } else {
            // Bound-symbol read: `symbol.field`.
            self.push_op(&tokens::OBJECT_MEMBER, Some(op_key(op)));
            if let Some(in0) = fd.obank().get(op).and_then(|o| o.get_in(0)) {
                self.push_vn_ir(fd, arch, in0, op);
            }
            self.push_bitfield_atom(&bitfield, op);
        }
    }

    /// C++ `PrintC::emitBitFieldStore` (printc.cc:2595-2620): render a bitfield
    /// write through a STORE as `ptr->field = value` (or `ptr.field = value`).
    ///
    /// On an unrecognized form, fall back to the normal STORE render.
    pub(super) fn emit_bitfield_store(&mut self, fd: &Funcdata, arch: &Architecture, op: OpId) {
        let expr = crate::bitfield::expression::InsertStoreExpression::new(fd, op);
        let bitfield = match (
            expr.is_valid(),
            &expr.expr.bitfield,
            expr.insert_op,
            expr.struct_ptr,
        ) {
            (true, Some(b), Some(_), Some(_)) => b.clone(),
            _ => {
                // The normal STORE push.
                self.op_store_ir(fd, arch, op);
                return;
            }
        };
        let insert_op = expr.insert_op.unwrap();
        let struct_ptr = expr.struct_ptr.unwrap();
        // We assume the STORE is a statement.
        self.push_op(&tokens::ASSIGNMENT, Some(op_key(op)));
        let store_ptr = fd.obank().get(op).and_then(|o| o.get_in(1));
        let mut m = self.context.mods();
        let use_member = store_ptr
            .map(|p| self.check_bit_field_member(fd, p, &bitfield))
            .unwrap_or(false);
        if use_member {
            m |= modifiers::PRINT_STORE_VALUE;
            self.push_op(&tokens::OBJECT_MEMBER, Some(op_key(insert_op)));
        } else {
            self.push_member_through_pointer(Some(op_key(insert_op)));
        }
        // C++ pushes the LHS (structPtr.field) then the RHS (insert value); the
        // direct RPN engine renders in push order, so push the pointer + bitfield
        // first (LHS of `=`), then the value.
        self.push_vn_ir_m(fd, arch, struct_ptr, op, m);
        self.push_bitfield_atom(&bitfield, op);
        // The value being written.
        if let Some(val) = fd.obank().get(insert_op).and_then(|o| o.get_in(1)) {
            self.push_vn_ir_m(fd, arch, val, op, self.context.mods());
        }
    }

    /// Push the structure-carrying Symbol token of a bit-field assignment LHS,
    /// faithful to C++ `pushPartialSymbol(symbol, offsetToBitStruct,
    /// theStruct->getSize(), out, op, -1, false)` (printc.cc:2633).  The key is
    /// `sz = theStruct->getSize()` (the WHOLE struct), so the partial walk stops at
    /// the struct and renders the bare symbol name — the bit-field field token is
    /// appended by the caller.  Falls back to the plain explicit name when the
    /// output high carries no composite Symbol (the bit-field op already validated
    /// the form, so this is the degenerate no-symbol case).
    pub(super) fn push_bitfield_struct_symbol(
        &mut self,
        fd: &Funcdata,
        arch: &Architecture,
        out: VarnodeId,
        op: OpId,
        expr: &crate::bitfield::expression::InsertExpression,
    ) {
        let named = fd
            .vbank()
            .get(out)
            .and_then(|v| v.get_high())
            .and_then(|high| self.emitted_high_symbol(fd, high))
            .map(|(name, _, ty)| (name, ty));
        if let Some((name, Some(st))) = named {
            let mt = st.get_metatype();
            if (mt == crate::dtype::type_metatype::TYPE_STRUCT
                || mt == crate::dtype::type_metatype::TYPE_UNION)
                && self.push_partial_symbol_ir(
                    fd,
                    arch,
                    &name,
                    std::rc::Rc::clone(&st),
                    expr.expr.offset_to_bit_struct as int8,
                    st.get_size(),
                    out,
                    op,
                    -1,
                    false,
                )
            {
                return;
            }
            // Whole-symbol cover (the common bit-field case): render the bare name.
            self.push_atom(&Atom::with_op_vn(
                name,
                TagType::VarToken,
                crate::printlanguage::SyntaxHighlight::var_color,
                op_key(op),
                vn_key(out),
            ));
            return;
        }
        // No composite Symbol bound: fall back to the explicit-name surface.
        self.push_vn_explicit_ir(fd, arch, out, op);
    }

    /// C++ `PrintC::emitBitFieldExpression` (printc.cc:2622-2637): render a
    /// bitfield write into an explicit (mapped) Varnode as `symbol.field = value`.
    ///
    /// On an unrecognized form, fall back to the functional `INSERT(...)` render.
    pub(super) fn emit_bitfield_expression(
        &mut self,
        fd: &Funcdata,
        arch: &Architecture,
        op: OpId,
    ) {
        let expr = crate::bitfield::expression::InsertExpression::new(fd, op);
        let bitfield = match (expr.expr.is_valid(), &expr.expr.bitfield) {
            (true, Some(b)) => b.clone(),
            _ => {
                // If no other way to print it, print as functional operator.
                self.op_func_ir(fd, arch, op);
                return;
            }
        };
        self.push_op(&tokens::ASSIGNMENT, Some(op_key(op)));
        self.push_op(&tokens::OBJECT_MEMBER, Some(op_key(op)));
        // C++ `pushPartialSymbol(symbol, offsetToBitStruct, theStruct->getSize(),
        // out, op, -1, false)` (printc.cc:2633): the (partial) symbol carrying the
        // *structure* — note `sz == theStruct->getSize()`, not the bit-field
        // Varnode's truncated size, so the partial walk stops at the struct
        // (`off==0 && sz==structSize` -> break) and renders the bare symbol name;
        // the bit-field field token is appended by `push_bitfield_atom` below.
        // Passing the truncated Varnode size here instead would drive the walk into
        // the artificial `._<off>_<sz>_` member (`v1._0_1_.fieldb`).
        if let Some(out) = fd.obank().get(op).and_then(|o| o.get_out()) {
            self.push_bitfield_struct_symbol(fd, arch, out, op, &expr);
        }
        self.push_bitfield_atom(&bitfield, op);
        if let Some(val) = fd.obank().get(op).and_then(|o| o.get_in(1)) {
            self.push_vn_ir_m(fd, arch, val, op, self.context.mods());
        }
    }

    /// C++ `PrintC::opPtradd` (printc.cc:900).  `ptr[index]` (value), `&ptr[index]`
    /// (array-notation address), or `ptr + index` (plain pointer arithmetic).
    pub(super) fn op_ptradd_ir(&mut self, fd: &Funcdata, arch: &Architecture, op: OpId) {
        let raw_address = self.context.is_set(modifiers::RUST_RAW_INDEX_ADDRESS);
        if raw_address {
            self.context
                .set_mods(self.context.mods() & !modifiers::RUST_RAW_INDEX_ADDRESS);
        }
        if self.out_lang == crate::lang::OutLang::Go {
            self.op_go_ptradd(fd, arch, op);
            return;
        }
        if self.out_lang == crate::lang::OutLang::Rust
            && !self.options.nocasts
            && (self.op_rust_ptradd(fd, arch, op) || self.op_rust_array_address(fd, arch, op))
        {
            return;
        }
        let printval = self
            .context
            .is_set(modifiers::PRINT_LOAD_VALUE | modifiers::PRINT_STORE_VALUE);
        let m = self.context.mods() & !(modifiers::PRINT_LOAD_VALUE | modifiers::PRINT_STORE_VALUE);
        if printval {
            self.push_op(&tokens::SUBSCRIPT, Some(op_key(op)));
        } else if self.options.array_notation() {
            // (unlace) S9 pointer-notation sub-stage: EMIT &base[index].
            let tok = if raw_address {
                &crate::rustarrayaddr::RAW_ADDRESS
            } else {
                self.lang_token(&tokens::ADDRESSOF)
            };
            self.push_op(tok, Some(op_key(op)));
            self.push_op(&tokens::SUBSCRIPT, Some(op_key(op)));
        } else {
            self.push_op(&tokens::BINARY_PLUS, Some(op_key(op)));
        }
        // C++ pushes in1 (index) then in0 (base) onto the LIFO nodepend; the direct
        // RPN engine drains in push order, so push in0 (base) then in1 (index) to
        // render `base[index]`.
        let in0 = fd.obank().get(op).and_then(|o| o.get_in(0));
        let in1 = fd.obank().get(op).and_then(|o| o.get_in(1));
        if let Some(in0) = in0 {
            self.push_vn_ir_m(fd, arch, in0, op, m);
        }
        if let Some(in1) = in1 {
            if self.out_lang == crate::lang::OutLang::Rust
                && !self.options.nocasts
                && (printval || self.options.array_notation())
                && self.push_rust_array_index(fd, arch, in1, op, m)
            {
                return;
            }
            self.push_vn_ir_m(fd, arch, in1, op, m);
        }
    }
}
