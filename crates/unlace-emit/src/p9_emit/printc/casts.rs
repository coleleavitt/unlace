//! Cast emission.

use super::*;

impl PrintC {
    /// C++ `PrintC::opTypeCast` (printc.cc:468): the C cast-notation `(type)operand`
    /// form shared by `opCast` / `opFloatFloat2Float` / `opFloatTrunc`
    /// (printc.hh:332-341, all `{ opTypeCast(op); }`).  The cast's target type is
    /// the op's **output** varnode's def-facing high type
    /// (`op->getOut()->getHighTypeDefFacing()`) — never a hardcoded or opcode-keyed
    /// type — and the operand is in0.
    ///
    /// With `option_nocasts` the cast is suppressed and only the operand prints
    /// (the underlying value flows through, parenthesized by precedence).
    ///
    /// The `isPointerToArray()` / [`check_address_of_cast`](Self::check_address_of_cast)
    /// arm renders a pointer-to-array cast as an address-of `&sym` (dropping the
    /// spurious `(T(*)[n])` cast) when the input is the address of an array Symbol of
    /// the matching size.  It never fires for the scalar `CPUI_CAST` /
    /// float-conversion casts this routes (whose output is a scalar `floatN`/`intN`,
    /// not a pointer-to-array).
    pub(super) fn op_type_cast_ir(&mut self, fd: &Funcdata, arch: &Architecture, op: OpId) {
        self.op_type_cast_ir_with(fd, arch, op, false)
    }

    /// [`op_type_cast_ir`](Self::op_type_cast_ir), leaving the cast out when
    /// `implied` (unlace `castimplied`: C's own conversion performs it).
    pub(super) fn op_type_cast_ir_with(
        &mut self,
        fd: &Funcdata,
        arch: &Architecture,
        op: OpId,
        implied: bool,
    ) {
        if arch
            .unlace_options
            .get::<crate::analysisgates::Godwarfsig>()
            .0
            && let Some(operation) = fd.obank().get(op)
            && let (Some(input), Some(output)) = (operation.get_in(0), operation.get_out())
            && self.push_pair_carrier(fd, arch, input, op, &fd.vn_type_def_facing(output))
        {
            return;
        }
        if self.out_lang == crate::lang::OutLang::Go {
            self.op_go_cast(fd, arch, op);
            return;
        }
        if self.push_container_of(fd, arch, op) {
            return;
        }
        if self.options.bytearray_c
            && self
                .stmt_op
                .and_then(|stmt| fd.obank().get(stmt).and_then(|o| o.get_out()))
                .and_then(|vn| self.bytearray_access(fd, vn))
                .is_some()
            && let Some(input) = crate::bytearrayc::integer_array_cast(fd, op)
        {
            let size = fd.vbank().get(input).unwrap().get_size();
            if let Ok(ty) = arch.types().get_base(size, type_metatype::TYPE_UINT) {
                self.push_cast_open(&ty, op);
                self.push_vn_ir(fd, arch, input, op);
                self.push_cast_close(&ty);
                return;
            }
        }
        // C++ `opTypeCast` (printc.cc:468-484): when the target type is a
        // pointer-to-array, a CAST that is really an address-of an array Symbol
        // renders as `&sym` (dropping the spurious `(T(*)[n])` cast) instead of the
        // C cast form.  `checkAddressOfCast` decides this purely from the in/out
        // high types and the input's symbol/PTRSUB geometry — never opcode- or
        // name-keyed.
        let out_def = fd
            .obank()
            .get(op)
            .and_then(|o| o.get_out())
            .map(|out| fd.vn_type_def_facing(out));
        if self.out_lang == crate::lang::OutLang::Rust
            && !self.options.nocasts
            && let (Some(target), Some(value)) = (
                out_def.as_ref(),
                fd.obank().get(op).and_then(|o| o.get_in(0)),
            )
            && self.push_rust_array_pointer(fd, arch, value, op, target)
        {
            return;
        }
        if out_def
            .as_ref()
            .map(|t| t.is_pointer_to_array())
            .unwrap_or(false)
            && self.check_address_of_cast(fd, op)
        {
            let tok = self.lang_token(&tokens::ADDRESSOF);
            self.push_op(tok, Some(op_key(op)));
            if let Some(vn) = fd.obank().get(op).and_then(|o| o.get_in(0)) {
                self.push_vn_ir(fd, arch, vn, op);
            }
            return;
        }
        // (unlace `signedness`) A `(int)`/`(unsigned int)` whose operand is now
        // declared at that very type is a no-op token: dropping it leaves an
        // expression of exactly the same C type.
        let cast_ty = if self.options.nocasts || implied || self.sign_plan.drop_cast(fd, op) {
            None
        } else {
            fd.obank().get(op).and_then(|o| o.get_out()).map(|out| {
                crate::bitcast::array_float_conversion(fd, op)
                    .unwrap_or_else(|| fd.vn_type_def_facing(out))
            })
        };
        if self.out_lang == crate::lang::OutLang::Rust
            && let (Some(ct), Some(vn)) = (
                cast_ty.as_ref(),
                fd.obank().get(op).and_then(|o| o.get_in(0)),
            )
        {
            if self.push_rust_boolean_conversion(fd, arch, vn, op, ct) {
                return;
            }
            if self.push_rust_array_address_cast(fd, arch, vn, op, ct) {
                return;
            }
            if self.push_rust_integer_conversion(fd, arch, vn, op, ct, true) {
                return;
            }
        }
        if let Some(ct) = &cast_ty {
            self.push_cast_open(ct, op);
        }
        if let Some(vn) = fd.obank().get(op).and_then(|o| o.get_in(0)) {
            self.push_vn_ir(fd, arch, vn, op);
        }
        if let Some(ct) = &cast_ty {
            self.push_cast_close(ct);
        }
    }

    /// C++ `PrintC::checkAddressOfCast` (printc.cc:396-438): check that the output
    /// data-type is a pointer to an array and the input data-type is a pointer to
    /// the element type, and that the input variable represents a Symbol with an
    /// array data-type of the same total size.  When this holds the CAST is the
    /// implicit array-to-pointer decay of taking `&sym`, so the cast is dropped in
    /// favor of `&sym`.  Returns `true` if the CAST can be rendered as `&`.
    pub(super) fn check_address_of_cast(&self, fd: &Funcdata, op: OpId) -> bool {
        use crate::dtype::type_metatype;
        let dt0 = match fd
            .obank()
            .get(op)
            .and_then(|o| o.get_out())
            .and_then(|out| fd.vbank().get(out).map(|_| fd.vn_type_def_facing(out)))
        {
            Some(t) => t,
            None => return false,
        };
        let vnin = match fd.obank().get(op).and_then(|o| o.get_in(0)) {
            Some(v) => v,
            None => return false,
        };
        let dt1 = match fd
            .vbank()
            .get(vnin)
            .map(|_| fd.vn_type_read_facing(vnin, op))
        {
            Some(t) => t,
            None => return false,
        };
        if dt0.get_metatype() != type_metatype::TYPE_PTR
            || dt1.get_metatype() != type_metatype::TYPE_PTR
        {
            return false;
        }
        let base0 = match dt0.get_ptr_to() {
            Some(b) => b,
            None => return false,
        };
        let mut base1 = match dt1.get_ptr_to() {
            Some(b) => b,
            None => return false,
        };
        if base0.get_metatype() != type_metatype::TYPE_ARRAY {
            return false;
        }
        let array_size = base0.get_size();
        let mut base0 = match base0.get_array_base() {
            Some(b) => b,
            None => return false,
        };
        while let Some(t) = base0.get_typedef().cloned() {
            base0 = t;
        }
        while let Some(t) = base1.get_typedef().cloned() {
            base1 = t;
        }
        // C++ tests Datatype *pointer* identity; the unlace factory interns every
        // data-type to a unique allocation, so `Rc::ptr_eq` is the faithful identity
        // check.  As a structural fallback (the element types here are scalars whose
        // `compare` is implemented) a `compare == 0` also counts as equal; a compare
        // STUB (`Err`) is treated as not-equal (conservative: never collapses a cast
        // it cannot prove redundant).
        let base_eq =
            std::rc::Rc::ptr_eq(&base0, &base1) || matches!(base0.compare(&base1, 10), Ok(0));
        if !base_eq {
            return false;
        }
        // The unlace `getSymbolEntry()` stand-in is the high's bound Symbol — a
        // `unlace_name` with the mapped `unlace_symbol_type`; `getSymbolOffset()==-1`
        // is the whole-symbol match.
        let mut symbol_type: Option<std::rc::Rc<crate::dtype::Datatype>> = None;
        let vnin_high = fd.vbank().get(vnin).and_then(|v| v.get_high());
        let whole_sym = vnin_high.and_then(|h| fd.high_bank().get(h)).and_then(|h| {
            if h.unlace_symbol_offset() == -1 {
                h.unlace_symbol_type().cloned()
            } else {
                None
            }
        });
        if let Some(st) = whole_sym {
            symbol_type = Some(st);
        } else if fd
            .vbank()
            .get(vnin)
            .map(|v| v.is_written())
            .unwrap_or(false)
        {
            let ptrsub = fd.vbank().get(vnin).and_then(|v| v.get_def());
            if let Some(ptrsub) = ptrsub
                && fd.obank().get(ptrsub).map(|o| o.code()) == Some(OpCode::CPUI_PTRSUB)
            {
                let root_in0 = fd.obank().get(ptrsub).and_then(|o| o.get_in(0));
                let root_type = root_in0.and_then(|vn| {
                    fd.vbank()
                        .get(vn)
                        .map(|_| fd.vn_type_read_facing(vn, ptrsub))
                });
                if let Some(root_type) = root_type
                    && root_type.get_metatype() == type_metatype::TYPE_PTR
                    && let Some(root_ptr_to) = root_type.get_ptr_to()
                {
                    let off = fd
                        .obank()
                        .get(ptrsub)
                        .and_then(|o| o.get_in(1))
                        .and_then(|v| fd.vbank().get(v))
                        .map(|v| v.get_offset())
                        .unwrap_or(0) as int8;
                    // The virtual `getSubType` is `TypeSpacebase::getSubType`
                    // (type.cc:3411) for a spacebase root — it indexes the
                    // symbol-table Scope, which the bare `Datatype::get_sub_type`
                    // cannot reach (it routes to a `STUB(W6)` Err).  Route a
                    // spacebase through `Funcdata::spacebase_get_sub_type` (the
                    // ported `TypeSpacebase::getSubType`, funcdata_spacebase.rs),
                    // exactly as the spacebase-PTRSUB cast wave does; every other
                    // root keeps the pure `Datatype::get_sub_type`.
                    let resolved: Option<(std::rc::Rc<crate::dtype::Datatype>, int8)> =
                        if root_ptr_to.get_metatype() == type_metatype::TYPE_SPACEBASE {
                            fd.spacebase_get_sub_type(&root_ptr_to, off)
                        } else {
                            match root_ptr_to.get_sub_type(off) {
                                Ok((sub, newoff)) => sub.map(|s| (s, newoff)),
                                Err(_) => return false,
                            }
                        };
                    match resolved {
                        Some((sub, newoff)) => {
                            if newoff != 0 {
                                return false;
                            }
                            symbol_type = Some(sub);
                        }
                        None => return false,
                    }
                }
            }
        }
        let symbol_type = match symbol_type {
            Some(s) => s,
            None => return false,
        };
        !(symbol_type.get_metatype() != type_metatype::TYPE_ARRAY
            || symbol_type.get_size() != array_size)
    }

    /// C++ `PrintC::opHiddenFunc` (printc.cc:494): the syntax represents `op`
    /// with a hidden (un-printed) one-input function — the input expression is
    /// printed without adornment, the [`tokens::HIDDEN`] token only guarding
    /// evaluation order.  Used by `opIntSext`/`opIntZext` to suppress an
    /// extension that is implied by integer promotion.
    pub(super) fn op_hidden_func_ir(&mut self, fd: &Funcdata, arch: &Architecture, op: OpId) {
        self.push_op(&tokens::HIDDEN, Some(op_key(op)));
        if let Some(vn) = fd.obank().get(op).and_then(|o| o.get_in(0)) {
            self.push_vn_ir(fd, arch, vn, op);
        }
    }

    /// C++ `PrintC::opIntZext` (printc.cc:806): a zero-extension renders as an
    /// explicit `(uintN)`/`(intN)` cast when the cast strategy says the ZEXT is a
    /// cast (`isZextCast`), is hidden (`opHiddenFunc`) when the extension is
    /// implied by integer promotion in the surrounding expression
    /// (`option_hide_exts && isExtensionCastImplied`), and otherwise falls back to
    /// the functional `ZEXT(x)` form (`opFunc`).
    pub(super) fn op_int_zext_ir(
        &mut self,
        fd: &Funcdata,
        arch: &Architecture,
        op: OpId,
        read_op: Option<OpId>,
    ) {
        let strat = match cast_strategy_for(arch) {
            Some(s) => s,
            // No type factory bound: degrade to the functional form, exactly as
            // the pre-cast-routing dispatch did.
            None => return self.op_func_ir(fd, arch, op),
        };
        let (outtype, intype) = match self.sext_zext_facing_types(fd, op) {
            Some(t) => t,
            None => return self.op_func_ir(fd, arch, op),
        };
        if strat.is_zext_cast(&outtype, &intype) {
            if (self.options.hide_exts && self.is_extension_cast_implied(fd, &strat, op, read_op))
                || self.widen_drops(fd, arch, op, read_op)
            {
                self.op_hidden_func_ir(fd, arch, op);
            } else if self.implied_cast_drops(fd, arch, op, read_op) {
                self.op_type_cast_ir_with(fd, arch, op, true);
            } else {
                self.op_type_cast_ir(fd, arch, op);
            }
        } else {
            self.op_func_ir(fd, arch, op);
        }
    }

    /// C++ `PrintC::opIntSext` (printc.cc:819): the sign-extension analogue of
    /// [`op_int_zext_ir`] — renders as an explicit `(intN)`/`(uintN)` cast
    /// (`isSextCast`), is hidden when implied, or falls back to `SEXT(x)`.
    pub(super) fn op_int_sext_ir(
        &mut self,
        fd: &Funcdata,
        arch: &Architecture,
        op: OpId,
        read_op: Option<OpId>,
    ) {
        let strat = match cast_strategy_for(arch) {
            Some(s) => s,
            None => return self.op_func_ir(fd, arch, op),
        };
        let (outtype, intype) = match self.sext_zext_facing_types(fd, op) {
            Some(t) => t,
            None => return self.op_func_ir(fd, arch, op),
        };
        if self.out_lang == crate::lang::OutLang::Rust
            && !self.options.nocasts
            && let Some(narrow) = crate::rustextend::signed_text_input(&intype, &outtype)
        {
            self.push_cast_open(&outtype, op);
            self.push_op(self.lang().tok_typecast, Some(op_key(op)));
            let input = fd.obank().get(op).unwrap().get_in(0).unwrap();
            self.push_vn_ir(fd, arch, input, op);
            self.push_atom(&Atom::syntax(
                narrow,
                TagType::TypeToken,
                crate::printlanguage::SyntaxHighlight::type_color,
            ));
            self.push_cast_close(&outtype);
            return;
        }
        if strat.is_sext_cast(&outtype, &intype) {
            if (self.options.hide_exts && self.is_extension_cast_implied(fd, &strat, op, read_op))
                || self.widen_drops(fd, arch, op, read_op)
            {
                self.op_hidden_func_ir(fd, arch, op);
            } else if self.implied_cast_drops(fd, arch, op, read_op) {
                self.op_type_cast_ir_with(fd, arch, op, true);
            } else {
                self.op_type_cast_ir(fd, arch, op);
            }
        } else {
            self.op_func_ir(fd, arch, op);
        }
    }

    /// C++ `PrintC::opSubpiece` (printc.cc:863-898).  A SUBPIECE marked for
    /// special printing (`doesSpecialPrinting`, set by `RuleSubRight` when the
    /// truncated input is a struct/union/array) extracts a composite member; it
    /// renders `symbol.field` via [`push_partial_symbol_ir`] (the symbol-mapped
    /// case, printc.cc:872-881) or `expr.field` via a struct `findTruncation`
    /// (printc.cc:882-888).  A non-special SUBPIECE falls to the cast/functional
    /// dispatch (the existing `is_subpiece_cast` → `opTypeCast` / `opFunc`).
    pub(super) fn op_subpiece_ir(
        &mut self,
        fd: &Funcdata,
        arch: &Architecture,
        op: OpId,
        read_op: Option<OpId>,
    ) {
        if self.out_lang == crate::lang::OutLang::Go {
            let view = fd
                .obank()
                .get(op)
                .and_then(|operation| operation.get_in(0))
                .and_then(|input| {
                    let source = self.go_value_type(fd, arch, input, op);
                    let store_type = read_op.and_then(|read| {
                        let reader = fd.obank().get(read)?;
                        if reader.code() != OpCode::CPUI_STORE {
                            return None;
                        }
                        self.go_value_type(fd, arch, reader.get_in(1)?, read)
                            .get_ptr_to()
                    });
                    let extraction =
                        crate::gobyteextract::plan(fd, arch, op, read_op, &source, store_type)?;
                    let (name, _) = self.local_byte_array_name(fd, arch, input)?;
                    Some((extraction, name))
                });
            if let Some((extraction, name)) = view {
                self.push_op(&tokens::DEREFERENCE, Some(op_key(op)));
                self.push_cast_open(&extraction.pointer, op);
                self.push_go_call("unsafe.Add", op);
                self.push_op(&tokens::COMMA, Some(op_key(op)));
                self.push_go_call("unsafe.Pointer", op);
                self.push_op(&tokens::ADDRESSOF, Some(op_key(op)));
                self.push_atom(&Atom::with_op_vn(
                    name,
                    TagType::VarToken,
                    crate::printlanguage::SyntaxHighlight::var_color,
                    op_key(op),
                    vn_key(extraction.input),
                ));
                self.push_constant_ir_fmt_sign(
                    extraction.offset,
                    0,
                    op,
                    display_format::NONE,
                    false,
                );
                return;
            }
        }
        if self.out_lang == crate::lang::OutLang::C {
            let operation = fd.obank().get(op).unwrap();
            let input = operation.get_in(0).unwrap();
            let output = operation.get_out().and_then(|vn| fd.vbank().get(vn));
            let offset = operation.get_in(1).and_then(|vn| fd.vbank().get(vn));
            if output.is_some_and(|value| value.get_size() == 1)
                && offset.is_some_and(|value| value.is_constant())
                // Keep opaque vector lanes under their own option. Only use
                // byte subscripts for the floating transfer emitted here.
                && fd.vbank().get(input).and_then(|value| value.get_def())
                    .is_some_and(|definition| self.local_array_assignment(fd, arch, definition).is_some())
                && let Some((name, element)) = self.local_byte_array_name(fd, arch, input)
            {
                let byte = subpiece_byte_offset_for_composite(fd, op);
                let size = fd.vbank().get(input).unwrap().get_size() as i64;
                if byte >= 0 && byte < size {
                    let output = operation.get_out().unwrap();
                    let datatype = read_op
                        .map(|read| fd.vn_type_read_facing(output, read))
                        .unwrap_or_else(|| fd.vn_type_def_facing(output));
                    if !matches!(datatype.compare(&element, 10), Ok(0)) {
                        self.push_cast_open(&datatype, op);
                    }
                    self.push_op(&tokens::SUBSCRIPT, Some(op_key(op)));
                    self.push_atom(&Atom::with_op_vn(
                        name,
                        TagType::VarToken,
                        crate::printlanguage::SyntaxHighlight::var_color,
                        op_key(op),
                        vn_key(input),
                    ));
                    self.push_constant_ir(byte as u64, 4, op);
                    return;
                }
            }
        }
        use crate::dtype::type_metatype;
        if fd
            .obank()
            .get(op)
            .map(|o| o.does_special_printing())
            .unwrap_or(false)
        {
            let in0 = fd.obank().get(op).and_then(|o| o.get_in(0));
            if let Some(vn) = in0 {
                let ct = fd.vbank().get(vn).map(|_| fd.vn_type_read_facing(vn, op));
                if let Some(ct) = ct
                    && ct.is_piece_structured()
                {
                    let byte_off = subpiece_byte_offset_for_composite(fd, op);
                    let out_sz = fd
                        .obank()
                        .get(op)
                        .and_then(|o| o.get_out())
                        .and_then(|v| fd.vbank().get(v))
                        .map(|v| v.get_size())
                        .unwrap_or(0);
                    // The unlace_name binding stands in for C++ getSymbol().
                    let high = fd.vbank().get(vn).and_then(|v| v.get_high());
                    let is_explicit = fd.vbank().get(vn).map(|v| v.is_explicit()).unwrap_or(false);
                    let sym = high.and_then(|high| self.emitted_high_symbol(fd, high));
                    match (sym, is_explicit) {
                        (Some((name, sym_off, Some(sym_type))), true) => {
                            let mut boff = byte_off;
                            if sym_off > 0 {
                                boff += sym_off as int8;
                            }
                            let slot = if sym_type.needs_resolution() { 1 } else { 0 };
                            let smt = sym_type.get_metatype();
                            if (smt == type_metatype::TYPE_STRUCT
                                || smt == type_metatype::TYPE_UNION)
                                && self.push_partial_symbol_ir(
                                    fd,
                                    arch,
                                    &name,
                                    std::rc::Rc::clone(&sym_type),
                                    boff,
                                    out_sz,
                                    vn,
                                    op,
                                    slot,
                                    true,
                                )
                            {
                                return;
                            }
                            // Fall through to the cast/functional dispatch below.
                        }
                        _ => {
                            if ct.get_metatype() == type_metatype::TYPE_STRUCT
                                && let Ok(Some((idx, off2))) =
                                    ct.find_truncation(byte_off, out_sz, op, 1)
                                && let Some(f) = ct.get_field(idx)
                            {
                                let extraction =
                                    super::super::fieldextract::plan(fd, op, &ct, idx, off2);
                                if off2 == 0 || extraction.is_some() {
                                    if let Some(extraction) = &extraction {
                                        if !self.options.nocasts {
                                            self.push_cast_open(&extraction.target, op);
                                        }
                                        if extraction.shift != 0 {
                                            self.push_op(&tokens::SHIFT_RIGHT, Some(op_key(op)));
                                        }
                                    }
                                    let fname = f.name.clone();
                                    let fident = f.ident;
                                    self.push_op(&tokens::OBJECT_MEMBER, Some(op_key(op)));
                                    self.push_vn_ir(fd, arch, vn, op);
                                    self.push_atom(&Atom::field(
                                        fname,
                                        TagType::FieldToken,
                                        crate::printlanguage::SyntaxHighlight::no_color,
                                        0,
                                        fident,
                                        op_key(op),
                                    ));
                                    if let Some(extraction) = &extraction {
                                        if extraction.shift != 0 {
                                            self.push_constant_ir(extraction.shift, 4, op);
                                        }
                                        if !self.options.nocasts {
                                            self.push_cast_close(&extraction.target);
                                        }
                                    }
                                    return;
                                }
                            }
                        }
                    }
                    // Fall thru to functional/cast printing (printc.cc:889).
                }
            }
        }
        if let Some(slice) = crate::floatslice::recognize(fd, op) {
            self.op_float_slice_ir(fd, arch, op, slice);
            return;
        }
        if self.out_lang == crate::lang::OutLang::C
            && let Some((slice, cast)) = crate::bytearrayslice::recognize(fd, op)
        {
            self.push_word_slice_ir(fd, arch, op, slice, cast);
            return;
        }
        if let Some((transfer, target)) = crate::bitcast::truncated_float_storage(fd, op) {
            self.push_cast_open(&target, op);
            self.op_bit_transfer_ir(fd, arch, op, transfer);
            self.push_cast_close(&target);
            return;
        }
        if self.push_part_macro(fd, arch, op) {
            return;
        }
        // Non-special-print SUBPIECE (printc.cc:892-897): isSubpieceCast decides
        // between opTypeCast and opFunc.
        // The cast arm was previously gated out because it tripped a spurious
        // `(int4)ptr` cast on condconstsub (a free SUBPIECE the call-return stub
        // had left in the IR).  That IR bug is now fixed (the call-return-recovery
        // + ActionDeindirect wave landed: condconstsub's `process` returns the
        // recovered call output, no spurious SUBPIECE), so the faithful dispatch
        // is restored.
        use crate::boolbyte::TruncationForm;
        match self.subpiece_cast_form(fd, arch, op) {
            Some(TruncationForm::Cast | TruncationForm::CastThroughByte)
                if self.out_lang == crate::lang::OutLang::Rust
                    && fd
                        .obank()
                        .get(op)
                        .and_then(|operation| operation.get_out())
                        .is_some_and(|value| {
                            fd.vn_type_def_facing(value).get_metatype()
                                == crate::dtype::type_metatype::TYPE_BOOL
                        }) =>
            {
                self.op_bool_truncation_ir(fd, arch, op)
            }
            Some(TruncationForm::CastThroughByte) => self.op_bool_truncation_ir(fd, arch, op),
            Some(_) => {
                let implied = self.implied_cast_drops(fd, arch, op, read_op);
                self.op_type_cast_ir_with(fd, arch, op, implied)
            }
            None => self.op_func_ir(fd, arch, op),
        }
    }

    pub(super) fn op_float_slice_ir(
        &mut self,
        fd: &Funcdata,
        arch: &Architecture,
        op: OpId,
        slice: crate::floatslice::Slice,
    ) {
        use crate::printlanguage::SyntaxHighlight;
        static C_BITS: OpToken =
            op_token("", " }).to", 2, 66, false, TokenType::Postsurround, 0, 0);
        let rust = self.out_lang == crate::lang::OutLang::Rust;
        let half = slice.width == 2;
        if rust {
            self.push_op(&tokens::FUNCTION_CALL, Some(op_key(op)));
            self.push_atom(&Atom::syntax(
                if half {
                    "f16::from_bits"
                } else {
                    "f32::from_bits"
                },
                TagType::FuncToken,
                SyntaxHighlight::funcname_color,
            ));
        } else {
            self.push_op(&C_BITS, Some(op_key(op)));
            self.push_atom(&Atom::syntax(
                if half {
                    "((union { unsigned short from; _Float16 to; }){ .from = "
                } else {
                    "((union { unsigned int from; float to; }){ .from = "
                },
                TagType::TypeToken,
                SyntaxHighlight::type_color,
            ));
        }
        self.push_word_slice_ir(fd, arch, op, slice, true);
    }

    /// `(target_word)(source bits >> shift)`, reading a floating source's bits;
    /// `cast_source` widens an integer source to `source_word` first.
    pub(super) fn push_word_slice_ir(
        &mut self,
        fd: &Funcdata,
        arch: &Architecture,
        op: OpId,
        slice: crate::floatslice::Slice,
        cast_source: bool,
    ) {
        self.push_cast_open(&slice.target_word, op);
        if slice.shift != 0 {
            self.push_op(&tokens::SHIFT_RIGHT, Some(op_key(op)));
        }
        if slice.source_float {
            let size = slice.source_word.get_size();
            self.op_bit_transfer_ir(
                fd,
                arch,
                op,
                crate::bitcast::Transfer {
                    input: slice.input,
                    target: slice.source_word,
                    size,
                    to_float: false,
                    source_pointer: false,
                },
            );
        } else if cast_source {
            self.push_cast_open(&slice.source_word, op);
            self.push_vn_ir(fd, arch, slice.input, op);
            self.push_cast_close(&slice.source_word);
        } else {
            self.push_vn_ir(fd, arch, slice.input, op);
        }
        if slice.shift != 0 {
            self.push_constant_ir(slice.shift, 4, op);
        }
        self.push_cast_close(&slice.target_word);
    }

    /// (unlace `boolbyte`) `(bool)(unsigned char)x`: a truncation into a `bool`
    /// whose operand may carry bits above the destination, which a bare
    /// `(bool)x` would test.
    pub(super) fn op_bool_truncation_ir(&mut self, fd: &Funcdata, arch: &Architecture, op: OpId) {
        let output = fd.obank().get(op).and_then(|o| o.get_out());
        let out = output.and_then(|v| fd.vbank().get(v));
        let out_ty = output.and_then(|vn| fd.vbank().get(vn).map(|_| fd.vn_type_def_facing(vn)));
        let byte_ty = out.and_then(|v| {
            arch.types()
                .get_base(v.get_size(), crate::dtype::type_metatype::TYPE_UINT)
                .ok()
        });
        let (out_ty, byte_ty) = match (out_ty, byte_ty) {
            (Some(o), Some(b)) if !self.options.nocasts => (o, b),
            _ => return self.op_type_cast_ir(fd, arch, op),
        };
        if self.out_lang == crate::lang::OutLang::Rust
            && self.push_rust_truncated_boolean_conversion(fd, arch, op, &out_ty, &byte_ty)
        {
            return;
        }
        self.push_cast_open(&out_ty, op);
        self.push_cast_open(&byte_ty, op);
        if let Some(vn) = fd.obank().get(op).and_then(|o| o.get_in(0)) {
            self.push_vn_ir(fd, arch, vn, op);
        }
        self.push_cast_close(&byte_ty);
        self.push_cast_close(&out_ty);
    }

    /// C++ `castStrategy->isSubpieceCast(out->getHighTypeDefFacing(),
    /// in0->getHighTypeReadFacing(op), (uint4)in1->getOffset())` (printc.cc:892):
    /// `None` prints the functional form, `Some` a cast.
    pub(super) fn subpiece_cast_form(
        &self,
        fd: &Funcdata,
        arch: &Architecture,
        op: OpId,
    ) -> Option<crate::boolbyte::TruncationForm> {
        use crate::boolbyte::TruncationForm;
        let strat = cast_strategy_for(arch)?;
        let outvn = fd.obank().get(op).and_then(|o| o.get_out())?;
        let invn = fd.obank().get(op).and_then(|o| o.get_in(0))?;
        let offset = fd
            .obank()
            .get(op)
            .and_then(|o| o.get_in(1))
            .and_then(|v| fd.vbank().get(v))
            .map(|v| v.get_offset())
            .unwrap_or(0) as uint4;
        let outv = fd.vbank().get(outvn)?;
        let outtype = fd.vn_type_def_facing(outvn);
        let out_size = outv.get_size();
        fd.vbank().get(invn)?;
        let intype = fd.vn_type_read_facing(invn, op);
        let intype = if intype.needs_resolution() {
            let slot = fd.obank().get(op).map(|o| o.get_slot(invn)).unwrap_or(-1);
            fd.find_resolve_facing(&intype, op, slot)
        } else {
            intype
        };
        // (unlace `boolbyte`) `isSubpieceCast` never saw a TYPE_BOOL destination
        // upstream, so a truncation into one falls to the functional arm and
        // prints the raw `SUB41(x,0)` intrinsic -- an undeclared identifier, the
        // class `subright` exists to keep out of the output.
        match crate::boolbyte::truncation_form(
            arch.unlace_options.get::<crate::boolbyte::BoolByte>().0,
            &outtype,
            &intype,
            offset,
            out_size,
            || crate::boolbyte::value_mask(fd, invn),
        ) {
            TruncationForm::Upstream => {}
            form => return Some(form),
        }
        strat
            .is_subpiece_cast(&outtype, &intype, offset)
            .then_some(TruncationForm::Cast)
    }

    /// The `(out->getHighTypeDefFacing(), in0->getHighTypeReadFacing(op))` type
    /// pair the C++ `opIntSext`/`opIntZext` feed to `isSextCast`/`isZextCast`
    /// (printc.cc:809/822).  Resolved through the bare-Varnode facing accessors
    /// (the W10 printc convention: by print-time the merged HighVariable type is
    /// already pinned onto the Varnode, so `getTypeDefFacing`/`getTypeReadFacing`
    /// equal the high-facing types the C++ reads). // STUB(W8 union findResolve)
    pub(super) fn sext_zext_facing_types(
        &self,
        fd: &Funcdata,
        op: OpId,
    ) -> Option<(
        std::rc::Rc<crate::dtype::Datatype>,
        std::rc::Rc<crate::dtype::Datatype>,
    )> {
        let outvn = fd.obank().get(op)?.get_out()?;
        let invn = fd.obank().get(op)?.get_in(0)?;
        let outtype = fd
            .vbank()
            .get(outvn)
            .map(|_| fd.vn_type_def_facing(outvn))?;
        let intype = fd
            .vbank()
            .get(invn)
            .map(|_| fd.vn_type_read_facing(invn, op))?;
        // (unlace) A one-element array read whole is its element (`b[0]`), which
        // extends as the element's type does.
        let intype = match intype.get_array_base() {
            Some(elem) if elem.get_size() == intype.get_size() => elem,
            _ => intype,
        };
        Some((outtype, intype))
    }

    /// C++ `castStrategy->isExtensionCastImplied(op, readOp)` (cast.cc:249) bridged
    /// through an immutable [`PrintCastContext`] over `&Funcdata`.  The predicate
    /// reads only IR shape + read-facing types (no mutation), so it runs on the
    /// `&Funcdata` print path.
    pub(super) fn is_extension_cast_implied(
        &self,
        fd: &Funcdata,
        strat: &CastStrategyC,
        op: OpId,
        read_op: Option<OpId>,
    ) -> bool {
        if !self.lang().caps.integer_promotion {
            return false;
        }
        let ctx = PrintCastContext::new(fd);
        let op_ref = ctx.op_ref(op);
        let read_ref = read_op.map(|r| ctx.op_ref(r));
        strat.is_extension_cast_implied(&ctx, op_ref, read_ref)
    }

    /// (unlace) The type the selector `vn` of the switch `op` prints cast to when
    /// C's promotion would carry bits the narrow p-code drops.  See
    /// [`crate::narrowselector`].
    pub(super) fn narrow_selector_cast(
        &self,
        fd: &Funcdata,
        arch: &Architecture,
        op: OpId,
        vn: VarnodeId,
    ) -> Option<std::rc::Rc<crate::dtype::Datatype>> {
        if !self.lang().caps.integer_promotion {
            return None;
        }
        let strat = cast_strategy_for(arch)?;
        let ctx = PrintCastContext::new(fd);
        let vr = ctx.vn_ref(vn);
        crate::narrowselector::cast(fd, arch, &strat, &ctx, vr, op)
    }

    /// (unlace `castimplied`) Does C's own conversion already perform the cast `op`
    /// prints where `read_op` reads it?  See [`crate::castimplied`].
    pub(super) fn implied_cast_drops(
        &self,
        fd: &Funcdata,
        arch: &Architecture,
        op: OpId,
        read_op: Option<OpId>,
    ) -> bool {
        if self.cast_implied.arm_dropped(op) {
            return true;
        }
        if !self.cast_implied.is_enabled() {
            return false;
        }
        let Some(strat) = cast_strategy_for(arch) else {
            return false;
        };
        let view = ImpliedView {
            pc: self,
            fd,
            arch,
            strat,
        };
        self.cast_implied.drops(&view, fd, op, read_op)
    }

    /// (unlace `castnarrow`) Does C's own conversion already perform the `(T)name`
    /// truncation printed for `vn`, the low piece of `name`, where `op` reads it?
    /// See [`crate::castnarrow::drops_partial`].
    #[allow(clippy::too_many_arguments)]
    pub(super) fn partial_cast_drops(
        &self,
        fd: &Funcdata,
        arch: &Architecture,
        vn: VarnodeId,
        op: OpId,
        piece: &std::rc::Rc<crate::dtype::Datatype>,
        whole: &std::rc::Rc<crate::dtype::Datatype>,
        name: &str,
    ) -> bool {
        if !self.cast_implied.narrow_on() {
            return false;
        }
        let Some(strat) = cast_strategy_for(arch) else {
            return false;
        };
        let view = ImpliedView {
            pc: self,
            fd,
            arch,
            strat,
        };
        crate::castnarrow::drops_partial(&self.cast_implied, &view, fd, vn, op, piece, whole, name)
    }

    /// (unlace `castwiden`) Does the arithmetic `read_op` convert the widening `op`
    /// by itself?  The operand then prints as upstream's hidden extension, which
    /// keeps the parentheses the cast gave it (`p + (a + b)`, never `p + a + b`).
    /// See [`crate::castwiden`].
    pub(super) fn widen_drops(
        &self,
        fd: &Funcdata,
        arch: &Architecture,
        op: OpId,
        read_op: Option<OpId>,
    ) -> bool {
        if !self.cast_implied.widen_on() || read_op.is_none() {
            return false;
        }
        let Some(strat) = cast_strategy_for(arch) else {
            return false;
        };
        let view = ImpliedView {
            pc: self,
            fd,
            arch,
            strat,
        };
        self.cast_implied.widen_drops(&view, fd, op, read_op)
    }

    /// (unlace `castwiden`) The suffix the constant `vn` read by `op` prints with
    /// so C converts the other operand itself: `Some(true)` for `UL`.  See
    /// [`crate::castwiden`].
    pub(super) fn widen_suffix(
        &self,
        fd: &Funcdata,
        arch: &Architecture,
        vn: VarnodeId,
        op: OpId,
    ) -> Option<bool> {
        if !self.cast_implied.widen_literal() {
            return None;
        }
        let strat = cast_strategy_for(arch)?;
        let view = ImpliedView {
            pc: self,
            fd,
            arch,
            strat,
        };
        self.cast_implied.widen_suffix(&view, fd, vn, op)
    }

    /// (unlace `castternary`) The casts to leave out of the arms of the conditional
    /// `iteregion` prints for `m`.  See [`crate::castternary`].
    pub(super) fn conditional_arm_drops(
        &self,
        fd: &Funcdata,
        arch: &Architecture,
        m: &crate::iteregion::IteAssignMatch,
    ) -> Vec<OpId> {
        if !self.cast_implied.arms_enabled() || !self.lang().caps.ternary {
            return Vec::new();
        }
        let Some(strat) = cast_strategy_for(arch) else {
            return Vec::new();
        };
        let view = ImpliedView {
            pc: self,
            fd,
            arch,
            strat,
        };
        crate::castternary::arm_drops(
            &self.cast_implied,
            &view,
            fd,
            [m.true_op, m.else_op],
            m.dest,
        )
    }

    /// C++ `PrintC::pushType` (printc.cc:1540) for a base type, reduced to the
    /// cast use: emit the type name as a single type-token operand (the
    /// `(type)` half of a [`tokens::TYPECAST`]).  The full `pushTypeStart` /
    /// `buildTypeStack` declarator algorithm (pointer/array casts) is the next
    /// layer; this renders the base-type front of [`declarator_parts`], which
    /// is the only form the int→float cast produces (a scalar `floatN`).
    /// Open a conversion around an operand that is about to be pushed.
    ///
    /// (unlace outlang) C brackets the operand -- `(T)x`, a `Presurround` token
    /// whose type is pushed BEFORE the operand. Rust suffixes it -- `x as T`, a
    /// binary token whose type is the RIGHT operand and so must be pushed
    /// AFTER. Every cast site therefore brackets its operand push with
    /// `push_cast_open` / `push_cast_close` rather than emitting the type inline.
    /// Map a token from the opcode table onto the active language's spelling and
    /// precedence (`LangProfile::map_token`).
    pub(super) fn lang_token(&self, tok: &'static OpToken) -> &'static OpToken {
        (self.lang().map_token)(tok)
    }

    /// Push the operator for a field reached THROUGH a pointer.
    ///
    /// (unlace outlang) C has a dedicated token for it (`p->f`). Rust raw pointers
    /// have no auto-deref, so the same access is `(*p).f` -- the member token
    /// over an explicit dereference of the operand that follows. The
    /// parenthesizer supplies the parens on its own: `*` binds looser than `.`,
    /// so the deref lands in a group.
    pub(super) fn push_member_through_pointer(&mut self, key: Option<crate::printlanguage::IrKey>) {
        match self.lang().forms.member {
            crate::lang::MemberForm::CArrow => {
                self.push_op(&tokens::POINTER_MEMBER, key);
            }
            crate::lang::MemberForm::RustDerefParen => {
                self.push_op(&tokens::OBJECT_MEMBER, key);
                self.push_op(&tokens::DEREFERENCE, key);
            }
        }
    }

    #[doc(hidden)]
    pub fn push_cast_open(&mut self, ct: &std::rc::Rc<crate::dtype::Datatype>, op: OpId) {
        match self.lang().forms.cast {
            crate::lang::CastForm::GoConversion => {
                self.push_op(&tokens::FUNCTION_CALL, Some(op_key(op)));
                self.push_cast_type(ct);
            }
            crate::lang::CastForm::PrefixParen => {
                self.push_op(&tokens::TYPECAST, Some(op_key(op)));
                self.push_cast_type(ct);
            }
            crate::lang::CastForm::PostfixAs => {
                let tok = self.lang().tok_typecast;
                self.push_op(tok, Some(op_key(op)));
            }
        }
    }

    /// Close a conversion opened by [`push_cast_open`], after the operand.
    #[doc(hidden)]
    pub fn push_cast_close(&mut self, ct: &std::rc::Rc<crate::dtype::Datatype>) {
        if self.lang().forms.cast == crate::lang::CastForm::PostfixAs {
            self.push_cast_type(ct);
        }
    }

    pub(super) fn push_cast_type(&mut self, ct: &std::rc::Rc<crate::dtype::Datatype>) {
        let (front, back) = declarator_parts(ct, self.rt_ctx.clone());
        let mut name = front;
        name.push_str(&back);
        if self.out_lang == crate::lang::OutLang::Go
            && (name.starts_with('*') || name.starts_with("func("))
        {
            name = format!("({name})");
        }
        // The C++ pushes a type Atom carrying the Datatype pointer; the unlace
        // emit path renders a TypeToken by its `name` alone (printc/),
        // so a syntax-only TypeToken reproduces the cast's `(floatN)` text.
        self.push_atom(&Atom::syntax(
            name,
            TagType::TypeToken,
            crate::printlanguage::SyntaxHighlight::type_color,
        ));
    }

    #[doc(hidden)]
    pub fn output_brace(&self, style: BraceStyle) -> crate::prettyprint::BraceStyle {
        if self.out_lang == crate::lang::OutLang::Go {
            crate::prettyprint::BraceStyle::SameLineRequired
        } else {
            to_emit_brace(style)
        }
    }

    #[doc(hidden)]
    pub fn remember_go_parameter(&mut self, index: i32, name: &str) {
        self.signature_param_names
            .insert(index, crate::langgo::identifier(name));
    }

    #[doc(hidden)]
    pub fn go_loop_temporary(&self, index: i32) -> String {
        let mut name = format!("_unlace_first_{index}");
        while self.declared_locals.iter().any(|v| v.name == name)
            || self.signature_param_names.values().any(|v| v == &name)
        {
            name.push('_');
        }
        name
    }
}
