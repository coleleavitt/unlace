//! Annotation, symbol and variable naming at the leaf.

use super::*;

impl PrintC {
    /// C++ `PrintC::pushAnnotation` (printc.cc:1929): render a volatile
    /// read/write annotation operand.  Compute the annotation size from the
    /// userop (`extractAnnotationSize`), query the local scope's container at the
    /// annotation address, and render the whole Symbol (`NVRAM` when it covers
    /// exactly) or the partial-symbol array element (`NVRAM[30]`).  When no Symbol
    /// contains the access, fall to the register-name / `dat_<addr>` unnamed tail
    /// (printc.cc:1957-1974).
    pub(super) fn push_annotation_ir(
        &mut self,
        fd: &Funcdata,
        arch: &Architecture,
        vn: VarnodeId,
        op: OpId,
    ) {
        let v = match fd.vbank().get(vn) {
            Some(v) => v,
            None => return,
        };
        let vaddr = v.get_addr().clone();
        let vsize = v.get_size();
        let opaddr = fd.obank().get(op).map(|o| o.get_addr().clone());

        // size = glb->userops.getOp(userind)->extractAnnotationSize(vn, op) for a
        // CALLOTHER; 0 otherwise.
        let mut size = 0i32;
        if let Some(o) = fd.obank().get(op)
            && o.code() == OpCode::CPUI_CALLOTHER {
                let userind = o
                    .get_in(0)
                    .and_then(|c| fd.vbank().get(c))
                    .map(|cvn| cvn.get_offset())
                    .unwrap_or(0);
                let out_size = o
                    .get_out()
                    .and_then(|x| fd.vbank().get(x))
                    .map(|x| x.get_size());
                let in2_size = if o.num_input() > 2 {
                    o.get_in(2)
                        .and_then(|x| fd.vbank().get(x))
                        .map(|x| x.get_size())
                } else {
                    None
                };
                if let Some(u) = arch.userops.get_op(userind as u32) {
                    size = u.extract_annotation_size(out_size, in2_size);
                }
            }

        // entry = symScope->queryContainer(addr, size||1, op->getAddr()).  The
        // `map addr` global Symbol lives in the architecture's global scope, which
        // the detached per-function `localmap` reaches only through the
        // `GlobalQuery` snapshot (the same wire the high-naming pass uses); query
        // it for the covering Symbol.  When `size` was 0 the C++ queries with 1 and
        // then adopts the entry's own size — here `name_for_global_varnode` already
        // returns the covering Symbol regardless of the probe size.
        let usepoint = opaddr.unwrap_or_else(|| vaddr.clone());
        let query_size = if size != 0 { size } else { 1 };
        let arch_handle = fd.get_arch();
        let entry = arch_handle.name_for_global_varnode(&vaddr, query_size, &usepoint);
        // size adopts vn->getSize() only when the userop reported 0 and no entry.
        let size = if size != 0 { size } else { vsize };

        if let Some((name, sym_off, sym_type)) = entry {
            // The volatile annotation Symbol renders in special_color (C++
            // pushSymbol: `sym->isVolatile()` -> special_color).  The mapped global
            // carried the `volatil` flag (set by `volatile [ram,...]`), so use it.
            let color = crate::printlanguage::SyntaxHighlight::special_color;
            // Whole-symbol when the access starts at the symbol base and spans the
            // whole type (C++ entry->getSize() == size).  Otherwise a partial cover.
            let whole = sym_off == 0
                && sym_type.as_ref().is_some_and(|t| {
                    use crate::dtype::type_metatype::{TYPE_ARRAY, TYPE_STRUCT, TYPE_UNION};
                    t.get_size() == size
                        && !matches!(t.get_metatype(), TYPE_ARRAY | TYPE_STRUCT | TYPE_UNION)
                });
            if !whole {
                // Partial symbol (printc.cc:1953-1954 pushPartialSymbol).  For an
                // array of scalars the access maps to element
                // `sym_off / elsize` — the array-subscript shape
                // push_vn_explicit_ir renders for symbol-bound highs; any other
                // partial cover takes the member walk (`s.b`, `a[2][1]`).
                if let Some(st) = &sym_type {
                    use crate::dtype::type_metatype::{TYPE_ARRAY, TYPE_STRUCT, TYPE_UNION};
                    let composite = st.get_array_base().is_some_and(|elem| {
                        matches!(elem.get_metatype(), TYPE_ARRAY | TYPE_STRUCT | TYPE_UNION)
                    });
                    if st.get_metatype() == TYPE_ARRAY && !composite
                        && let Some(elem) = st.get_array_base() {
                            let elsize = elem.get_align_size().max(1);
                            if sym_off >= 0
                                && (sym_off % elsize) == 0
                                && size == elem.get_size()
                                && st.get_size() >= elsize
                            {
                                let index = sym_off / elsize;
                                self.push_op(&tokens::SUBSCRIPT, Some(op_key(op)));
                                self.push_atom(&Atom::with_op_vn(
                                    name,
                                    TagType::VarToken,
                                    color,
                                    op_key(op),
                                    vn_key(vn),
                                ));
                                // C++ `pushPartialSymbol` ARRAY arm: the subscript
                                // index renders via `push_integer(el, 0, (el < 0),
                                // syntax, 0, op, 0)` (printc.cc:2132) — the
                                // `val<=10 -> dec` / `mostNaturalBase` hex/dec rule,
                                // not an unconditional decimal.
                                let sign = index < 0;
                                self.push_constant_ir_fmt_sign(
                                    index as uintb,
                                    0,
                                    op,
                                    display_format::NONE,
                                    sign,
                                );
                                return;
                            }
                        }
                    if self.push_partial_symbol_ir(
                        fd,
                        arch,
                        &name,
                        std::rc::Rc::clone(st),
                        sym_off as int8,
                        size,
                        vn,
                        op,
                        1,
                        false,
                    ) {
                        return;
                    }
                }
            }
            // Whole symbol, or a partial cover the array/struct walk did not turn
            // into a member token: render the bare Symbol name (printc.cc:1951).
            self.push_atom(&Atom::with_op_vn(
                name,
                TagType::VarToken,
                color,
                op_key(op),
                vn_key(vn),
            ));
            return;
        }

        // No containing Symbol: register name, then unlace `dat_<addr>` / `Space<hex>`
        // (printc.cc:1957-1974).
        let spc = match vaddr.get_space() {
            Some(s) => s,
            None => return,
        };
        let regname = arch
            .translate()
            .get_register_name(spc, vaddr.get_offset(), size);
        let name = if !regname.is_empty() {
            regname
        } else if unlace_global_naming(spc) {
            crate::stringglobalnames::global_name(arch, vaddr.get_offset())
        } else {
            let mut s = String::new();
            let sn = spc.get_name();
            let mut chars = sn.chars();
            if let Some(c0) = chars.next() {
                s.extend(c0.to_uppercase());
            }
            s.push_str(chars.as_str());
            let byte_addr = unlace_base::space::AddrSpace::byte_to_address(
                vaddr.get_offset(),
                spc.get_word_size(),
            );
            s.push_str(&format!(
                "{:0width$x}",
                byte_addr,
                width = 2 * spc.get_addr_size() as usize
            ));
            s
        };
        self.push_atom(&Atom::with_op_vn(
            name,
            TagType::VarToken,
            crate::printlanguage::SyntaxHighlight::special_color,
            op_key(op),
            vn_key(vn),
        ));
    }

    /// C++ `PrintLanguage::pushVnExplicit` (printlanguage.cc:218) + the
    /// `PrintC` leaf-naming (`pushVnExplicit`/`pushUnnamedLocation`, printc.cc:
    /// 1900-2017): annotation -> constant -> SymbolEntry -> register name ->
    /// unlace `dat_<addr>` global -> `Space<hex>` fallback.
    #[doc(hidden)]
    pub fn push_vn_explicit_ir(
        &mut self,
        fd: &Funcdata,
        arch: &Architecture,
        vn: VarnodeId,
        op: OpId,
    ) {
        let constant = fd
            .vbank()
            .get(vn)
            .is_some_and(|v| v.is_constant() && !v.is_annotation());
        let outer = std::mem::replace(&mut self.rpn_constant, constant.then(|| vn_key(vn)));
        self.push_vn_explicit_body(fd, arch, vn, op);
        self.rpn_constant = outer;
    }

    pub(super) fn push_vn_explicit_body(
        &mut self,
        fd: &Funcdata,
        arch: &Architecture,
        vn: VarnodeId,
        op: OpId,
    ) {
        let v = match fd.vbank().get(vn) {
            Some(v) => v,
            None => return,
        };
        // C++ `PrintLanguage::pushVnExplicit` (printlanguage.cc:221): an annotation
        // operand (the volatile read/write address ref) routes through
        // `pushAnnotation`, never the constant/symbol paths.
        if v.is_annotation() {
            self.push_annotation_ir(fd, arch, vn, op);
            return;
        }
        if v.is_constant() {
            let (off, sz) = (v.get_offset(), v.get_size());
            // C++ `PrintLanguage::pushVnExplicit` (printlanguage.cc:227) calls
            // `pushConstant(vn->getOffset(), ct, ...)` with `ct =
            // vn->getHighTypeReadFacing(op)`.  `pushConstant` (printc.cc:1813)
            // switches on `ct->getMetatype()`: a `TYPE_FLOAT` constant is rendered
            // by `push_float` (the decimal literal), every other metatype reaches
            // `push_integer` with `ct->getDisplayFormat()` as its `displayFormat`.
            let ct = fd.vn_type_read_facing(vn, op);
            if self.out_lang == crate::lang::OutLang::Go
                && ct.get_metatype() == type_metatype::TYPE_BOOL
            {
                self.push_atom(&Atom::with_op_vn(
                    if off == 0 { "false" } else { "true" },
                    TagType::VarToken,
                    crate::printlanguage::SyntaxHighlight::const_color,
                    op_key(op),
                    vn_key(vn),
                ));
                return;
            }
            if ct.get_metatype() == crate::dtype::type_metatype::TYPE_FLOAT {
                // C++ `pushConstant` -> `push_float(val, ct->getSize(), ...)`.  The
                // float arm ignores the integer `displayFormat` entirely.
                self.push_float_ir(arch, off, ct.get_size(), op);
                return;
            }
            // Enum arm.  C++ `pushConstant` (printc.cc:1817-1833) switches on the
            // enum's base metatype (TYPE_INT / TYPE_UINT) and, when
            // `ct->isEnumType()`, delegates to `pushEnumConstant` (printc.cc:1822/
            // 1830) — which decomposes the value into the OR of matched flag names.
            // In unlace an enum carries metatype TYPE_INT/TYPE_UINT plus the
            // `enumtype` flag (dtype.rs:5244-5246), exactly as upstream, so the
            // dispatch is the `is_enum_type()` flag check (not a metatype match).
            if ct.is_enum_type() {
                self.push_enum_constant_ir(&ct, off, op, vn);
                return;
            }
            // Char arm.  C++ `pushConstant` (printc.cc:1819/1827): a TYPE_INT /
            // TYPE_UINT constant whose data-type `isCharPrint()` is rendered as a
            // quoted character literal (`pushCharConstant`, printc.cc:1675).  This
            // is the metatype-driven char render (distinct from the equate-Symbol
            // `force_char` display-format path, which already routes through the
            // integer arm below with a FORCE_CHAR display-format override).
            {
                use crate::dtype::type_metatype::{TYPE_INT, TYPE_UINT};
                if matches!(ct.get_metatype(), TYPE_INT | TYPE_UINT) && ct.is_char_print() {
                    self.push_char_constant_ir(fd, arch, &ct, off, op, vn);
                    return;
                }
            }
            // Pointer arm.  C++ `pushConstant` (printc.cc:1842-1854): a TYPE_PTR /
            // TYPE_PTRREL constant whose pointed-to type `isCharPrint()` is rendered
            // as a quoted string literal when the constant resolves to readonly
            // character data (`pushPtrCharConstant`).  If the pointer does not
            // resolve to a readable readonly string, the C++ falls through to the
            // default integer print — so does this arm (it only short-circuits on a
            // successful string push).  The TYPE_CODE (function-name) sub-arm is a
            // documented LOSS below.
            use crate::dtype::type_metatype::{TYPE_PTR, TYPE_PTRREL};
            if matches!(ct.get_metatype(), TYPE_PTR | TYPE_PTRREL) {
                // (unlace `elemptr`) A pointer the rule gave `char *` says the bytes
                // are indexed, never that they end at a zero byte.
                if !v.is_synthetic_literal()
                    && off != 0
                    && !crate::elemptr::reaches_element_pointer(fd, vn)
                    && let Some(sub) = ct.get_ptr_to() {
                        // (unlace `cfstrings`) An entry reads as its string whatever its type,
                        // and so does a literal (unlace `cstringconst`).
                        let sub = if sub.is_char_print() {
                            Some(sub)
                        } else {
                            cfstring_char(arch, off).or_else(|| {
                                crate::cstringconst::literal_char(arch, off, ct.get_size())
                            })
                        };
                        if let Some(sub) = sub {
                            // point = op->getAddr() (the using op's address; used only
                            // by a segmented resolver — flat spaces ignore it).
                            let point = fd
                                .obank()
                                .get(op)
                                .map(|o| o.get_addr().clone())
                                .unwrap_or_default();
                            // (unlace `elemptr`) A table indexed by a computed value
                            // prints as a literal only when the index cannot run
                            // past it.
                            let bound = if arch.unlace_options.get::<crate::elemptr::ElemPtr>().0 {
                                crate::elemptr::literal_index_bound(fd, op, vn)
                            } else {
                                None
                            };
                            if self.push_ptr_char_constant_ir(
                                arch,
                                off,
                                ct.get_size(),
                                &sub,
                                &point,
                                op,
                                vn,
                                bound,
                            ) {
                                return;
                            }
                        }
                    }
                // C++ `pushConstant` TYPE_PTR/TYPE_PTRREL arm (printc.cc:1842-1880).
                // After the `pushPtrCharConstant` string short-circuit (above) and
                // the TYPE_CODE function-name sub-arm (a documented LOSS) fail, the
                // C++ `break`s to the shared "Default printing" tail: the gated NULL
                // token, the optional leading typecast, then a force_hex integer.
                // This is what renders a pointer-typed null as `(int4 **)0x0` — the
                // for-loop iterator compare `loopvar != (int4 **)0x0` — rather than a
                // bare decimal `0`.  Previously this arm fell straight through to the
                // signed/unsigned integer path below, dropping both the leading
                // typecast and the force_hex, so the pointer constant printed as `0`.
                if (self.options.null || self.out_lang == crate::lang::OutLang::Go) && off == 0 {
                    self.push_atom(&Atom::with_op_vn(
                        self.lang().null_literal.to_string(),
                        if self.out_lang == crate::lang::OutLang::Rust {
                            TagType::LiteralToken
                        } else {
                            TagType::VarToken
                        },
                        crate::printlanguage::SyntaxHighlight::const_color,
                        op_key(op),
                        vn_key(vn),
                    ));
                    return;
                }
                if !v.is_synthetic_literal()
                    && self.out_lang == crate::lang::OutLang::C
                    && self.options.global_ref
                    && ct.get_metatype() == crate::dtype::type_metatype::TYPE_PTR
                    && ct.get_word_size() == Some(1)
                    && ct.get_size() == arch.types().get_size_of_pointer()
                    && ct.get_ptr_to().is_some_and(|to| {
                        to.get_metatype() != crate::dtype::type_metatype::TYPE_CODE
                            && (self.options.struct_defs
                                || self.options.header_carries_types
                                || to.get_metatype() == crate::dtype::type_metatype::TYPE_VOID)
                    })
                    && let Some(expression) = self.named_globals.object_address(fd, arch, off) {
                        if !self.options.nocasts {
                            self.push_cast_open(&ct, op);
                        }
                        self.push_atom(&Atom::with_op_vn(
                            expression,
                            TagType::VarToken,
                            crate::printlanguage::SyntaxHighlight::var_color,
                            op_key(op),
                            vn_key(vn),
                        ));
                        if !self.options.nocasts {
                            self.push_cast_close(&ct);
                        }
                        return;
                    }
                if let Some(addr) = (!v.is_synthetic_literal())
                    .then(|| self.globalref.decide(fd, arch, vn, op, off, &ct))
                    .flatten()
                {
                    self.push_global_ref_ir(arch, addr, op, vn);
                    return;
                }
                if self.out_lang == crate::lang::OutLang::Go {
                    self.push_go_pointer_conversion(&ct, false, op);
                } else if !self.options.nocasts {
                    self.push_cast_open(&ct, op);
                }
                self.context.push_mod();
                if !self.context.is_set(modifiers::FORCE_DEC) {
                    self.context.set_mod(modifiers::FORCE_HEX);
                }
                self.push_constant_ir_fmt_sign(off, sz, op, display_format::NONE, false);
                self.context.pop_mod();
                if !self.options.nocasts {
                    self.push_cast_close(&ct);
                }
                return;
            }
            // (unlace `cstringconst`) A constant at the start of a literal that a
            // call takes as an argument its prototype does not declare a scalar
            // reads as the literal.
            if !v.is_synthetic_literal() && self.out_lang == crate::lang::OutLang::C
                && let Some(sub) = crate::cstringconst::call_literal_char(arch, fd, op, vn, off, sz)
                {
                    let point = fd
                        .obank()
                        .get(op)
                        .map(|o| o.get_addr().clone())
                        .unwrap_or_default();
                    if self.push_ptr_char_constant_ir(arch, off, sz, &sub, &point, op, vn, None) {
                        return;
                    }
                }
            // Integer path.  Inside `push_integer` (printc.cc:1376) the varnode
            // high's equate-Symbol format OVERRIDES the read-facing type's format
            // when present.  So: equate-Symbol format wins; otherwise the
            // read-facing type format (e.g. `force datatype octint4 oct` ->
            // `globaloct = 05555`).
            let mut lit = self.integer_literal(fd, arch, vn, &ct);
            self.signed_decimal(fd, arch, op, off, sz, &mut lit);
            if let Some(unsigned) = self.widen_suffix(fd, arch, vn, op) {
                lit.suffix_as_long(arch, unsigned);
            }
            self.push_constant_ir_fmt_sign_flags(
                off,
                sz,
                op,
                lit.display_fmt,
                lit.sign,
                lit.force_unsigned,
                lit.force_sized,
                lit.size_suffix,
            );
            return;
        }
        if let Some(name) = arch
            .unlace_options
            .get::<crate::printc::ImportData>()
            .0
            .then(|| import_slot_address(fd, arch, vn, op))
            .flatten()
        {
            self.push_op(&tokens::ADDRESSOF, Some(op_key(op)));
            self.push_atom(&Atom::with_op_vn(
                name,
                TagType::VarToken,
                crate::printlanguage::SyntaxHighlight::global_color,
                op_key(op),
                vn_key(vn),
            ));
            return;
        }
        // HighVariable name resolution (C++ `pushSymbolDetail`: `high->getSymbol()`
        // -> `pushSymbol` -> `sym->getDisplayName()`).  The merged tree binds the
        // angr default name directly on the HighVariable (`ActionNameVars` ->
        // `HighVariable::unlace_name`; the W4 `Symbol`/ScopeLocal stand-in), so a
        // named high renders its bound `vN` name here — for *every* member, which
        // is exactly how the C++ renders all instances of a merged local.
        if let Some(high) = v.get_high() {
            let named = self.emitted_high_symbol(fd, high);
            if let Some((name, sym_off, sym_type)) = named {
                if self.is_value_indirect_input(fd, vn) {
                    if !self
                        .context
                        .is_set(modifiers::PRINT_LOAD_VALUE | modifiers::PRINT_STORE_VALUE)
                    {
                        self.push_op(&tokens::ADDRESSOF, Some(op_key(op)));
                    }
                    self.push_atom(&Atom::with_op_vn(
                        name,
                        TagType::VarToken,
                        crate::printlanguage::SyntaxHighlight::var_color,
                        op_key(op),
                        vn_key(vn),
                    ));
                    return;
                }
                if self.options.bytearray_c
                    && fd.obank().get(op).and_then(|o| o.get_out()) != Some(vn)
                    && self.push_bytearray_read(fd, arch, vn, op)
                {
                    return;
                }
                if self.out_lang == crate::lang::OutLang::C {
                    let write = fd.obank().get(op).and_then(|o| o.get_out()) == Some(vn);
                    self.named_globals.record_named(fd, arch, vn, write, &name);
                }
                // Symbol-mapped struct/union member access (C++ `PrintC::
                // pushSymbolDetail` -> `pushPartialSymbol`, printlanguage.cc:256-258
                // + printc.cc:2019-2141).  When the mapped Symbol's data-type is a
                // composite (a UNION that resolves to a field for this op, or a
                // STRUCT whose member contains the access) the varnode is a partial
                // cover of the larger Symbol and renders `name.field` /
                // `name.b.bval1` rather than its raw name.  This is GUARDED tightly:
                // it fires only when the type walk genuinely yields a member token,
                // so a non-partial-cover read (the common case) is byte-unchanged
                // and falls straight through to the bare-name render below.
                if let Some(st) = &sym_type {
                    let mt = st.get_metatype();
                    // C++ `pushSymbolDetail` (printlanguage.cc:256-258) routes EVERY
                    // composite-cover access through `pushPartialSymbol`, whose walk
                    // descends array/struct/union members uniformly.  The rust leaf
                    // render handled STRUCT/UNION here but split ARRAY off into a
                    // dedicated `name[index]` branch below, which computes
                    // `index = symboloff / elementAlignSize` WITHOUT consulting the
                    // access size — so an 8-byte write at offset 0 of an
                    // `undefined1[16]` rendered `v1[0] = a0`, claiming a one-byte
                    // store.  The walk's own ARRAY arm has the upstream
                    // `TypeArray::getSubEntry` guard (`noff + sz <= elsize`) and
                    // falls to the artificial `._<off>_<size>_` member when the
                    // access spans elements, so routing a plain ARRAY through it
                    // too both keeps `arr[3]` for a genuine in-element access and
                    // repairs the size-losing ones to `v1._0_8_`.  It also lets an
                    // array whose element needs union resolution (`simpunion
                    // arr[10]`, the `arr[3].ffield` access) descend past the
                    // subscript into the cached union field.  A whole-symbol cover
                    // still returns `false` and falls through to the branch below.
                    if mt == crate::dtype::type_metatype::TYPE_STRUCT
                        || mt == crate::dtype::type_metatype::TYPE_UNION
                        || mt == crate::dtype::type_metatype::TYPE_ARRAY
                    {
                        // C++ `pushSymbolDetail`: `isRead` is true when `op` reads
                        // `vn` (the input slot); false when `vn` is the output (the
                        // assignment LHS), where the artificial slot is -1.
                        let is_out = fd.obank().get(op).and_then(|o| o.get_out()) == Some(vn);
                        let is_read = !is_out;
                        let inslot = if is_read {
                            fd.obank().get(op).map(|o| o.get_slot(vn)).unwrap_or(-1)
                        } else {
                            -1
                        };
                        // `symboloff` is the in-symbol byte offset; C++ resets a -1
                        // (whole-symbol) offset to 0 before the partial walk when the
                        // type needs resolution (printlanguage.cc:249-255).
                        let symoff = if sym_off < 0 { 0 } else { sym_off };
                        if self.push_partial_symbol_ir(
                            fd,
                            arch,
                            &name,
                            std::rc::Rc::clone(st),
                            symoff as int8,
                            v.get_size(),
                            vn,
                            op,
                            inslot,
                            is_read,
                        ) {
                            return;
                        }
                    }
                }
                // Array/struct member access: if the mapped Symbol is an array and
                // the access is at a non-base offset (or the symbol is strictly
                // larger than the access), render `name[index]` (C++
                // `PrintC::pushSymbolDetail`'s array branch).
                if let Some(st) = &sym_type
                    && st.get_metatype() == crate::dtype::type_metatype::TYPE_ARRAY
                        && let Some(elem) = st.get_array_base() {
                            // C++ `TypeArray::getSubEntry` (type.cc:1430-1434)
                            // strides by the element's *aligned* size, not its raw
                            // size: e.g. a 10-byte `float10` occupies 16 bytes per
                            // element, so `ldarr[1]` lives at byte offset 0x10.
                            let elsize = elem.get_align_size().max(1);
                            // The access maps to element `index` when it lies
                            // within the array and the offset divides the element.
                            if sym_off >= 0 && (sym_off % elsize) == 0 && st.get_size() > elsize {
                                let index = sym_off / elsize;
                                // `name[index]` via the subscript op-token.
                                self.push_op(&tokens::SUBSCRIPT, Some(op_key(op)));
                                self.push_atom(&Atom::with_op_vn(
                                    name,
                                    TagType::VarToken,
                                    crate::printlanguage::SyntaxHighlight::var_color,
                                    op_key(op),
                                    vn_key(vn),
                                ));
                                // C++ `pushPartialSymbol` ARRAY arm renders the index
                                // via `push_integer(el, 0, (el < 0), syntax, 0, op, 0)`
                                // (printc.cc:2132), so the subscript follows the
                                // `val<=10 -> dec` / `mostNaturalBase` hex/dec rule —
                                // not an unconditional decimal.  Without this an index
                                // whose natural base is 16 (e.g. `arr[0xb]`) lost the
                                // oracle's hex rendering.
                                let sign = index < 0;
                                self.push_constant_ir_fmt_sign(
                                    index as uintb,
                                    0,
                                    op,
                                    display_format::NONE,
                                    sign,
                                );
                                return;
                            }
                        }
                // Scalar partial-cover access (C++ `pushSymbolDetail`,
                // printlanguage.cc:256-258): when a Varnode reads only PART of a
                // mapped SCALAR Symbol — `symboloff + vn->getSize() <=
                // sym->getType()->getSize()` and the access is NOT the whole symbol
                // — C++ routes it through `pushPartialSymbol`, NOT a bare name.  For
                // an int4/int2 sub-access of a tied int8 stack `local` (the
                // `mergeAddrTied`/`groupWith` partial-field members of LOSS-245),
                // `pushPartialSymbol`'s scalar arms render `(int4)local` (a
                // SUBPIECE-style `finalcast` for an off-0 truncation, printc.cc:2094-
                // 2105) or `local._2_2_` (the artificial `unnamedField` token for a
                // non-zero offset, printc.cc:2106-2117).  The composite branches above
                // already covered STRUCT/UNION/ARRAY symbols; this adds the scalar leaf
                // the C++ `pushSymbolDetail` treats identically.  `allowCast == isRead`
                // (the input slot is a read; the assignment LHS is an output), matching
                // the C++ `inslot`/`isRead` derivation.
                if let Some(st) = &sym_type {
                    let mt = st.get_metatype();
                    let is_composite = matches!(
                        mt,
                        crate::dtype::type_metatype::TYPE_STRUCT
                            | crate::dtype::type_metatype::TYPE_UNION
                            | crate::dtype::type_metatype::TYPE_ARRAY
                    );
                    let symoff = if sym_off < 0 { 0 } else { sym_off };
                    let asize = v.get_size();
                    // The C++ `pushSymbolDetail` gate (printlanguage.cc:256): the
                    // access fits within the symbol type and is a genuine PARTIAL
                    // (off > 0 or strictly narrower) — a whole-symbol cover keeps the
                    // bare name below (and `push_partial_symbol_ir` returns false for
                    // it anyway, so this is a no-op for the common full-width read).
                    let is_partial = symoff > 0 || asize < st.get_size();
                    if !is_composite
                        && is_partial
                        && (symoff as int8) + (asize as int8) <= st.get_size() as int8
                    {
                        let is_out = fd.obank().get(op).and_then(|o| o.get_out()) == Some(vn);
                        let is_read = !is_out;
                        let inslot = if is_read {
                            fd.obank().get(op).map(|o| o.get_slot(vn)).unwrap_or(-1)
                        } else {
                            -1
                        };
                        if self.push_partial_symbol_ir(
                            fd,
                            arch,
                            &name,
                            std::rc::Rc::clone(st),
                            symoff as int8,
                            asize,
                            vn,
                            op,
                            inslot,
                            is_read,
                        ) {
                            return;
                        }
                    }
                }
                // C++ `pushSymbolDetail` -> `pushMismatchSymbol` (printc.cc): a global
                // read wider than its Symbol prints the Symbol's name with a leading
                // `_` when it starts at the Symbol, else as unnamed storage.
                let symoff = sym_off.max(0);
                let name = match &sym_type {
                    Some(st)
                        if v.is_persist()
                            && st.get_metatype() != crate::dtype::type_metatype::TYPE_CODE
                            && symoff + v.get_size() > st.get_size() =>
                    {
                        if symoff == 0 {
                            format!("_{name}")
                        } else {
                            match unlace_unnamed_location_name(arch, v.get_addr(), v.get_size()) {
                                Some(n) => n,
                                None => name,
                            }
                        }
                    }
                    _ => name,
                };
                self.push_atom(&Atom::with_op_vn(
                    name,
                    TagType::VarToken,
                    crate::printlanguage::SyntaxHighlight::var_color,
                    op_key(op),
                    vn_key(vn),
                ));
                return;
            }
        }
        // No bound name: fall to the register / unnamed-location naming, which is
        // the faithful `pushUnnamedLocation` tail (printc.cc:1957-1974).
        //
        // (unlace) C++ `PrintC::pushSymbolDetail` renders EVERY member of a
        // HighVariable through `high->getSymbol()` — one shared name for the whole
        // variable.  A HighVariable that copy-shadow-merges a register/`unique`
        // scratch value with an addr-tied persistent GLOBAL — the `global =
        // COPY(reg)` store folded into the global's high, exactly as upstream's
        // variable-merge does (Ghidra's `goal_width` phi has all-register-EAX inputs
        // that every carry `hv=goal_width`) — therefore renders as the GLOBAL at
        // every member, never as the raw register.  unlace instead renders an unnamed
        // location from the *member's own* address, so a register/`unique` member of
        // such a mixed high would leak a stray `EAX` / `Unique<hex>`.  Mirror the C++
        // `getSymbol()` behavior: resolve the member to its high's canonical global
        // storage first — if any instance of this high lives at a real memory global
        // (a non-register `IPTR_PROCESSOR` address that renders `dat_<addr>`), render
        // THIS member from that global's (address,size) so the whole variable reads
        // one `dat_<addr>`.  A leaf that is itself a global, or whose high owns no
        // global member (an ordinary register/`unique` temp), is unaffected.
        let renders_as_global = |a: &unlace_base::address::Address, sz: int4| -> bool {
            match a.get_space() {
                Some(s) => {
                    arch.translate()
                        .get_register_name(s, a.get_offset(), sz)
                        .is_empty()
                        && unlace_global_naming(s)
                }
                None => false,
            }
        };
        let mut loc = v.get_addr().clone();
        let mut size = v.get_size();
        let mut stack_pointer_storage = false;
        if let Some(h) = v.get_high()
            && let Some(hv) = fd.high_bank().get(h) {
                for i in 0..hv.num_instances() {
                    let ivn = hv.get_instance(i);
                    if let Some(iv) = fd.vbank().get(ivn)
                        && iv.is_spacebase() && iv.is_input() && iv.is_unaffected() {
                            loc = iv.get_addr().clone();
                            size = iv.get_size();
                            stack_pointer_storage = true;
                            break;
                        }
                }
            }
        if !stack_pointer_storage && !renders_as_global(&loc, size)
            && let Some(h) = v.get_high()
                && let Some(hv) = fd.high_bank().get(h) {
                    for i in 0..hv.num_instances() {
                        let ivn = hv.get_instance(i);
                        if let Some(iv) = fd.vbank().get(ivn)
                            && iv.is_addr_tied() && renders_as_global(iv.get_addr(), iv.get_size())
                            {
                                loc = iv.get_addr().clone();
                                size = iv.get_size();
                                break;
                            }
                    }
                }
        let name = match if stack_pointer_storage {
            unlace_storage_location_name(&loc)
        } else {
            global_overlap_name(fd, &loc, size)
                .or_else(|| unlace_unnamed_location_name(arch, &loc, size))
        } {
            Some(n) => n,
            None => return,
        };
        self.push_atom(&Atom::with_op_vn(
            name,
            TagType::VarToken,
            crate::printlanguage::SyntaxHighlight::special_color,
            op_key(op),
            vn_key(vn),
        ));
    }

    /// C++ `PrintC::opPtrsub` (printc.cc:953).  `&ptr->field` / `ptr->field`
    /// (struct member) or `*ptr` / `ptr[0]` (array element), absorbing or emitting
    /// the dereference per the load/store value mods and the `&base[index]` flex.
    ///
    /// The SPACEBASE arm (a PTRSUB off a stack/global spacebase, requiring the
    /// Symbol/ScopeLocal surface) and the union arm are not on the pointer/array/
    /// struct corpus; they fall through to a functional render.
    /// STUB(W4 spacebase symbol) / STUB(W8 union).
    /// C++ `PrintC::pushTypePointerRel` (printc.hh:372-377): a PTRSUB acting
    /// relative to a `TypePointerRel` parent prints the `ADJ(...)` macro — a
    /// `function_call` op wrapping the `ADJ` token (rendered `funcname_color`).
    pub(super) fn push_type_pointer_rel_ir(&mut self, op: OpId) {
        self.push_op(&tokens::FUNCTION_CALL, Some(op_key(op)));
        // The token is pushed as an *operator* token (C++ `optoken`), but with
        // funcname_color (matching the C++ Atom(typePointerRelToken,optoken,
        // funcname_color,op)).
        self.push_atom(&Atom::with_op(
            self.lang().kw_type_pointer_rel.to_string(),
            TagType::OpToken,
            crate::printlanguage::SyntaxHighlight::funcname_color,
            op_key(op),
        ));
    }

    /// The `symbol == 0` arm of C++ `PrintC::opPtrsub` (printc.cc:1096-1101): a
    /// spacebase `PTRSUB` whose offset no Symbol covers renders as the *storage*
    /// it names — `TypeSpacebase::getAddress(in1const, ptrsize, op->getAddr())`
    /// (type.cc:3542) pushed through `pushUnnamedLocation`, under the `&` the
    /// caller's value modifiers ask for.
    ///
    /// `sb_type` is the `TYPE_SPACEBASE` data-type `in0` points to.  A spacebase
    /// carrying no space (a hand-built fixture) is the one case with no storage to
    /// name; it keeps the functional render.
    pub(super) fn push_spacebase_unnamed_ir(
        &mut self,
        fd: &Funcdata,
        arch: &Architecture,
        op: OpId,
        sb_type: &std::rc::Rc<crate::dtype::Datatype>,
        in1const: uintb,
        ptr_size: int4,
        valueon: bool,
    ) {
        let loc = spacebase_unnamed_address(arch, fd, op, sb_type, in1const, ptr_size);
        let constant_offset = fd
            .obank()
            .get(op)
            .and_then(|o| o.get_in(1))
            .and_then(|v| fd.vbank().get(v))
            .is_some_and(|v| v.is_constant());
        if !valueon && constant_offset && self.out_lang() == crate::lang::OutLang::C
            && let Some(address) = loc
                .as_ref()
                .and_then(|loc| crate::callerstack::address(arch, fd, loc, ptr_size))
            {
                self.push_atom(&Atom::with_op(
                    address,
                    TagType::VarToken,
                    crate::printlanguage::SyntaxHighlight::special_color,
                    op_key(op),
                ));
                return;
            }
        let name = loc.and_then(|loc| unlace_unnamed_location_name(arch, &loc, ptr_size));
        let name = match name {
            Some(n) => n,
            None => {
                self.op_func_ir(fd, arch, op);
                return;
            }
        };
        if !valueon {
            // EMIT  &name  (printc.cc:1091)
            let tok = self.lang_token(&tokens::ADDRESSOF);
            self.push_op(tok, Some(op_key(op)));
        }
        self.push_atom(&Atom::with_op(
            name,
            TagType::VarToken,
            crate::printlanguage::SyntaxHighlight::special_color,
            op_key(op),
        ));
    }

    /// CFA references must retain their own call frame when the C is rebuilt.
    pub(super) fn caller_stack_function(&self, fd: &Funcdata, arch: &Architecture) -> bool {
        if arch.archid != "x86:LE:64:default:gcc" {
            return false;
        }
        fd.obank().iter_alive().any(|op| {
            let Some(o) = fd
                .obank()
                .get(op)
                .filter(|o| o.code() == OpCode::CPUI_PTRSUB)
            else {
                return false;
            };
            let Some(in0) = o.get_in(0) else {
                return false;
            };
            let Some(base) = fd.vbank().get(in0) else {
                return false;
            };
            let Some(offset) = o
                .get_in(1)
                .and_then(|v| fd.vbank().get(v))
                .filter(|v| v.is_constant())
            else {
                return false;
            };
            if offset
                .get_high()
                .and_then(|h| self.emitted_high_symbol(fd, h))
                .is_some()
            {
                return false;
            }
            let Some(output) = o.get_out().and_then(|v| fd.vbank().get(v)) else {
                return false;
            };
            if output.is_implied()
                && output.descend_iter().all(|useop| {
                    fd.obank().get(useop).is_some_and(|u| {
                        matches!(u.code(), OpCode::CPUI_LOAD | OpCode::CPUI_STORE)
                            && u.get_in(1) == o.get_out()
                    })
                })
            {
                return false;
            }
            let Some(ptype) = ptrsub_pointer_type(fd, in0, op) else {
                return false;
            };
            let ct = if ptype.is_formal_pointer_rel()
                && ptype.evaluate_thru_parent(offset.get_offset()) == Some(true)
            {
                ptype.get_rel_parent()
            } else {
                ptype.get_ptr_to()
            };
            ct.as_ref()
                .and_then(|ct| {
                    spacebase_unnamed_address(
                        arch,
                        fd,
                        op,
                        ct,
                        offset.get_offset(),
                        base.get_size(),
                    )
                })
                .and_then(|loc| crate::callerstack::address(arch, fd, &loc, base.get_size()))
                .is_some()
        })
    }

    /// (unlace `globalref`) `&dat_<addr>`: the address of the global a constant
    /// pointer names, in place of the `(T *)0x<addr>` cast.
    pub(super) fn push_global_ref_ir(
        &mut self,
        arch: &Architecture,
        addr: u64,
        op: OpId,
        vn: VarnodeId,
    ) {
        // (unlace `elemptr`) An array's name is already the address of its first
        // element, of exactly the pointer type the constant had.
        if !self.globalref.is_array(addr) {
            let tok = self.lang_token(&tokens::ADDRESSOF);
            self.push_op(tok, Some(op_key(op)));
        }
        self.push_atom(&Atom::with_op_vn(
            crate::stringglobalnames::global_name(arch, addr),
            TagType::VarToken,
            crate::printlanguage::SyntaxHighlight::special_color,
            op_key(op),
            vn_key(vn),
        ));
    }

    /// (unlace `globalref`) The plan of the last function printed: the globals it
    /// names by address and the unnamed data it reads directly.
    pub fn named_global_references(&self) -> &crate::namedglobals::References {
        &self.named_globals
    }

    pub fn globalref_plan(&self) -> &crate::globalref::Plan {
        &self.globalref
    }

    pub(super) fn push_member_base_ir(
        &mut self,
        fd: &Funcdata,
        arch: &Architecture,
        base: VarnodeId,
        op: OpId,
        mods: uint4,
        pointer: &std::rc::Rc<crate::dtype::Datatype>,
    ) {
        let cast = !self.options.nocasts && crate::memberbase::needs_cast(fd, base, pointer);
        if cast {
            if self.out_lang == crate::lang::OutLang::Go {
                self.push_go_conversion(pointer, &fd.vn_type_read_facing(base, op), op);
            } else {
                self.push_cast_open(pointer, op);
            }
        }
        self.push_vn_ir_m(fd, arch, base, op, mods);
        if cast {
            self.push_cast_close(pointer);
        }
    }

    pub(super) fn op_ptrsub_ir(&mut self, fd: &Funcdata, arch: &Architecture, op: OpId) {
        let in0 = match fd.obank().get(op).and_then(|o| o.get_in(0)) {
            Some(v) => v,
            None => return,
        };
        let in1const = fd
            .obank()
            .get(op)
            .and_then(|o| o.get_in(1))
            .and_then(|v| fd.vbank().get(v))
            .map(|v| v.get_offset())
            .unwrap_or(0);
        // ptype = in0->getHighTypeReadFacing(op)  (== get_type for the non-union corpus).
        let ptype = match ptrsub_pointer_type(fd, in0, op) {
            Some(t) => t,
            None => return,
        };
        if ptype.get_metatype() != crate::dtype::type_metatype::TYPE_PTR {
            // C++ throws; fall to the functional render so output stays parseable.
            self.op_func_ir(fd, arch, op);
            return;
        }
        // Relative-pointer parent resolution.
        let is_rel =
            ptype.is_formal_pointer_rel() && ptype.evaluate_thru_parent(in1const) == Some(true);
        let ct = if is_rel {
            ptype.get_rel_parent()
        } else {
            ptype.get_ptr_to()
        };
        let ct = match ct {
            Some(c) => c,
            None => return,
        };
        let ptr_size = fd.vbank().get(in0).map(|v| v.get_size()).unwrap_or(8);
        let m = self.context.mods() & !(modifiers::PRINT_LOAD_VALUE | modifiers::PRINT_STORE_VALUE);
        let mut valueon = (self.context.mods()
            & (modifiers::PRINT_LOAD_VALUE | modifiers::PRINT_STORE_VALUE))
            != 0;
        let flex = self.is_value_flexible_ir(fd, in0) || self.is_value_indirect_input(fd, in0);
        let word_size = ptype.get_word_size().unwrap_or(1);
        let metameta = ct.get_metatype();

        if metameta == crate::dtype::type_metatype::TYPE_STRUCT
            || metameta == crate::dtype::type_metatype::TYPE_UNION
        {
            // suboff = (int4)in1const  (+ relative offset).
            let mut suboff = in1const as int4 as int8;
            if is_rel {
                let addr_off = ptype.get_address_offset().unwrap_or(0) as int8;
                suboff = (((suboff + addr_off) as u64) & calc_mask(ptr_size)) as int8;
                if suboff == 0 {
                    // Special case where we do not print a field (printc.cc:988).
                    self.push_type_pointer_rel_ir(op);
                    let mm = if flex {
                        m | modifiers::PRINT_LOAD_VALUE
                    } else {
                        m
                    };
                    self.push_vn_ir_m(fd, arch, in0, op, mm);
                    return;
                }
            }
            let suboff_bytes = AddrSpace::address_to_byte_int(suboff, word_size);
            let (fieldname, fieldtype, fieldid) = if metameta
                == crate::dtype::type_metatype::TYPE_UNION
            {
                // TYPE_UNION arm (printc.cc:1000-1014).  A non-zero offset is the
                // C++ "PTRSUB accesses union with non-zero offset" throw.
                if suboff_bytes != 0 {
                    // C++ throws; fall to the functional render so output stays
                    // parseable rather than aborting the whole function.
                    self.op_func_ir(fd, arch, op);
                    return;
                }
                // The cast plane (`ActionSetCasts::resolveUnion`) stored the
                // resolution on this PTRSUB's write edge keyed on the
                // pointer-to-union `ptype`; read it back here.
                let res_field = fd
                    .get_union_field(&ptype, op, -1)
                    .map(|r| r.get_field_num())
                    .filter(|&n| n >= 0);
                let field_num = match res_field {
                    Some(n) => n,
                    None => {
                        // C++ throws "PTRSUB for union that does not resolve
                        // to a field"; fall to the functional render.
                        self.op_func_ir(fd, arch, op);
                        return;
                    }
                };
                // fld = ((TypeUnion*)ct)->getField(resUnion->getFieldNum());
                match ct.get_field(field_num) {
                    Some(f) => (f.name.clone(), Some(f.field_type.clone()), f.ident),
                    None => {
                        self.op_func_ir(fd, arch, op);
                        return;
                    }
                }
            } else {
                // TYPE_STRUCT arm (printc.cc:1015-1033).
                // fld = ct->findTruncation(suboff,0,op,0,newoff)
                let fld = ct.find_truncation(suboff_bytes, 0, op, 0).ok().flatten();
                match fld {
                    Some((idx, _newoff)) => {
                        let f = ct.get_field(idx);
                        match f {
                            Some(f) => (f.name.clone(), Some(f.field_type.clone()), f.ident),
                            None => return,
                        }
                    }
                    None => {
                        if ct.get_size() as int8 <= suboff_bytes || suboff_bytes < 0 {
                            self.op_func_ir(fd, arch, op);
                            return;
                        }
                        if self.out_lang == crate::lang::OutLang::Go
                            && !valueon
                            && !ptype.is_formal_pointer_rel()
                            && word_size == 1
                            && self.push_go_record_prefix_address(fd, arch, op, &ct, suboff_bytes)
                        {
                            return;
                        }
                        // Default field name `field_0x<hex>`.
                        (
                            format!("field_0x{suboff_bytes:x}"),
                            None,
                            suboff_bytes as int4,
                        )
                    }
                }
            };
            let mut arrayvalue = false;
            // The '&' is dropped if the field is an array.
            if let Some(ft) = &fieldtype
                && ft.get_metatype() == crate::dtype::type_metatype::TYPE_ARRAY {
                    arrayvalue = valueon; // If printing value, use [0]
                    valueon = true; // Don't print &
                }
            let field_atom = Atom::field(
                fieldname,
                TagType::FieldToken,
                crate::printlanguage::SyntaxHighlight::no_color,
                // The Atom's ct marker is markup-only (the no-markup emitter
                // ignores it); the field name/offset carry the rendering.
                0,
                fieldid,
                op_key(op),
            );
            if !valueon {
                // Printing an ampersand.
                let tok = self.lang_token(&tokens::ADDRESSOF);
                self.push_op(tok, Some(op_key(op)));
                if flex {
                    // EMIT  &( ).name
                    self.push_op(&tokens::OBJECT_MEMBER, Some(op_key(op)));
                    if is_rel {
                        self.push_type_pointer_rel_ir(op);
                    }
                    self.push_vn_ir_m(fd, arch, in0, op, m | modifiers::PRINT_LOAD_VALUE);
                } else {
                    // EMIT  &( )->name
                    self.push_member_through_pointer(Some(op_key(op)));
                    if is_rel {
                        self.push_type_pointer_rel_ir(op);
                    }
                    self.push_member_base_ir(fd, arch, in0, op, m, &ptype);
                }
                self.push_atom(&field_atom);
            } else {
                if arrayvalue {
                    self.push_op(&tokens::SUBSCRIPT, Some(op_key(op)));
                }
                if flex {
                    // EMIT  ( ).name
                    self.push_op(&tokens::OBJECT_MEMBER, Some(op_key(op)));
                    if is_rel {
                        self.push_type_pointer_rel_ir(op);
                    }
                    self.push_vn_ir_m(fd, arch, in0, op, m | modifiers::PRINT_LOAD_VALUE);
                } else {
                    // EMIT  ( )->name
                    self.push_member_through_pointer(Some(op_key(op)));
                    if is_rel {
                        self.push_type_pointer_rel_ir(op);
                    }
                    self.push_member_base_ir(fd, arch, in0, op, m, &ptype);
                }
                self.push_atom(&field_atom);
                if arrayvalue {
                    self.push_constant_ir(0, 4, op);
                }
            }
        } else if metameta == crate::dtype::type_metatype::TYPE_ARRAY {
            // PTRSUB(*,0) drilling a pointer-to-array down to its element type.
            if !valueon {
                if flex {
                    // EMIT ( ) — absorb the dereference into in0.
                    if is_rel {
                        self.push_type_pointer_rel_ir(op);
                    }
                    self.push_vn_ir_m(fd, arch, in0, op, m | modifiers::PRINT_LOAD_VALUE);
                } else {
                    // EMIT *( )
                    self.push_op(&tokens::DEREFERENCE, Some(op_key(op)));
                    if is_rel {
                        self.push_type_pointer_rel_ir(op);
                    }
                    self.push_vn_ir_m(fd, arch, in0, op, m);
                }
            } else if flex {
                // EMIT ( )[0]
                self.push_op(&tokens::SUBSCRIPT, Some(op_key(op)));
                if is_rel {
                    self.push_type_pointer_rel_ir(op);
                }
                self.push_vn_ir_m(fd, arch, in0, op, m | modifiers::PRINT_LOAD_VALUE);
                self.push_constant_ir(0, 4, op);
            } else {
                // EMIT (* )[0]
                self.push_op(&tokens::SUBSCRIPT, Some(op_key(op)));
                self.push_op(&tokens::DEREFERENCE, Some(op_key(op)));
                if is_rel {
                    self.push_type_pointer_rel_ir(op);
                }
                self.push_vn_ir_m(fd, arch, in0, op, m);
                self.push_constant_ir(0, 4, op);
            }
        } else if metameta == crate::dtype::type_metatype::TYPE_SPACEBASE {
            // SPACEBASE arm (C++ `PrintC::opPtrsub`, printc.cc:1081-1121).  A
            // `PTRSUB(spacebase, off)` is a `&symbol` reference into a stack/global
            // frame.  `ActionNameVars::linkSpacebaseSymbol` decoded the reference
            // and parked the Symbol on the offset constant's HighVariable
            // (`Funcdata::link_symbol_reference` -> `unlace_name`/`symbol_offset`/
            // `unlace_symbol_type`), so this reads it back here.
            // The unlace stand-in: read the reference triple off in1's high.
            let in1 = fd.obank().get(op).and_then(|o| o.get_in(1));
            let (sym_name, sym_off, sym_type) = match in1
                .and_then(|v| fd.vbank().get(v))
                .and_then(|v| v.get_high())
            {
                Some(high) => match self.emitted_high_symbol(fd, high) {
                    Some((name, off, ty)) => (Some(name), off, ty),
                    None => (None, -1, None),
                },
                None => (None, -1, None),
            };

            // C++ `opPtrsub` reaches a Symbol here whenever `linkSpacebaseSymbol`
            // attached one, and takes the `symbol == 0` arm otherwise.  In the unlace
            // model `link_symbol_reference` deliberately attaches ONLY a
            // defined-named Symbol (the mapped stack/global vars; an undefined-named
            // auto-local, or a frame whose spacebase could not be tracked to a
            // constant, is left unlinked — see `Funcdata::link_symbol_reference`),
            // so the symbol-less arm is reached far more often than upstream.  It is
            // the C++ `pushUnnamedLocation` leaf: the *storage* named by space and
            // offset (`Stack00000008`), never the functional `PTRSUB(<reg>, off)`
            // form — which is internal p-code leaking an undeclared operator and a
            // raw register name into the emitted C.
            let name = match &sym_name {
                Some(n) => n.clone(),
                None => {
                    self.push_spacebase_unnamed_ir(fd, arch, op, &ct, in1const, ptr_size, valueon);
                    return;
                }
            };

            let mut arrayvalue = false; // arrayvalue = false;
            if let Some(st) = &sym_type {
                // ct = symbol->getType(); (symbol != 0 always here)  (printc.cc:1086)
                let mt = st.get_metatype();
                if mt == crate::dtype::type_metatype::TYPE_ARRAY {
                    // The '&' is dropped if the output type is an array.
                    arrayvalue = valueon; // If printing value, use [0]
                    valueon = true; // If printing ptr, don't use &
                } else if mt == crate::dtype::type_metatype::TYPE_CODE {
                    valueon = true; // If printing ptr, don't use &
                }
            }

            // Readonly char-array string-literal coexistence (the unlace analog of
            // C++ `PrintC::pushConstant`'s TYPE_PTR -> `pushPtrCharConstant` arm,
            // printc.cc:1842-1880).  In upstream Ghidra a constant pointer to a
            // readonly char-printable object renders as the quoted literal even
            // when a data Symbol covers the address — the constant reaches
            // `pushConstant` and short-circuits to `pushPtrCharConstant` BEFORE any
            // symbol-name render.  unlace's analysis tier (StringLiteralPass /
            // ActionMapGlobals) instead promotes the same constant into a global
            // SPACEBASE `PTRSUB(spacebase, 0xADDR)` reference whose bound Symbol is
            // the planted `char[N]`, so the value arrives at THIS arm rather than
            // the `pushConstant` pointer arm — and the bare `pushSymbol` name
            // (`s_400915`) would SHADOW the literal.  To keep the data Symbol and
            // the literal coexisting (the Ghidra-observable behavior), route a
            // whole-symbol (`sym_off == 0`), pointer-value (`!arrayvalue`) reference
            // whose Symbol is a READONLY char-printable ARRAY through the same
            // `push_ptr_char_constant_ir` literal path the constant arm uses.
            // Guarded TIGHTLY (readonly + TYPE_ARRAY + char-printable element +
            // off==0 + printing-ptr) so every other symbol reference renders
            // EXACTLY as before — the XML datatest corpus never reaches this branch
            // with a readonly char-array spacebase symbol.
            if sym_off == 0 && !arrayvalue
                && let Some(st) = &sym_type {
                    // (unlace `cfstrings`) A `__cfstring` entry reads as its string.
                    let cfstr = if valueon {
                        None
                    } else {
                        cfstring_char(arch, in1const)
                    };
                    if (st.get_metatype() == crate::dtype::type_metatype::TYPE_ARRAY
                        || cfstr.is_some())
                        && let Some(elem) = cfstr.or_else(|| st.get_array_base())
                            && elem.is_char_print() {
                                let point = fd
                                    .obank()
                                    .get(op)
                                    .map(|o| o.get_addr().clone())
                                    .unwrap_or_default();
                                if self.push_ptr_char_constant_ir(
                                    arch,
                                    in1const,
                                    ptr_size,
                                    &elem,
                                    &point,
                                    op,
                                    in1.unwrap_or_default(),
                                    None,
                                ) {
                                    return;
                                }
                            }
                }

            if self.out_lang == crate::lang::OutLang::C
                && let Some(address) =
                    spacebase_unnamed_address(arch, fd, op, &ct, in1const, ptr_size)
                {
                    match ptrsub_value_access(fd, op, valueon && !arrayvalue) {
                        Some((value, write)) => self
                            .named_globals
                            .record_access(fd, arch, &address, value, write, !write, &name),
                        None => self.named_globals.record(fd, arch, &address, &name),
                    }
                }

            if !valueon {
                // EMIT  &name  (printc.cc:1095)
                let tok = self.lang_token(&tokens::ADDRESSOF);
                self.push_op(tok, Some(op_key(op)));
            } else if arrayvalue {
                // EMIT  name  with a trailing subscript (printc.cc:1099)
                self.push_op(&tokens::SUBSCRIPT, Some(op_key(op)));
            }

            // int4 off = high->getSymbolOffset();  (printc.cc:1108)
            // off == 0 takes the bare `pushSymbol` arm; a `-1` `symboloffset` (the
            // whole-symbol cover the C++ `setSymbol` records for a size-matching
            // entry) is also a bare-name render, so `off <= 0` covers both.
            if sym_off <= 0 {
                if matches!(
                    self.out_lang,
                    crate::lang::OutLang::C | crate::lang::OutLang::Rust
                ) && sym_type
                    .as_ref()
                    .is_some_and(|ty| ty.get_metatype() == crate::dtype::type_metatype::TYPE_CODE)
                    && let Some(address) =
                        spacebase_unnamed_address(arch, fd, op, &ct, in1const, ptr_size)
                    {
                        let point = fd
                            .obank()
                            .get(op)
                            .map(|o| o.get_addr().clone())
                            .unwrap_or_default();
                        let prefix = if self.out_lang == crate::lang::OutLang::Rust {
                            crate::rustfuncptr::prefix(
                                fd,
                                arch,
                                &address,
                                &point,
                                &name,
                                self.context.namespace_strategy(),
                            )
                        } else {
                            crate::funcptrnames::prefix(
                                fd,
                                arch,
                                &address,
                                &point,
                                &name,
                                self.context.namespace_strategy(),
                            )
                        };
                        if let Some(prefix) = prefix {
                            for scope in prefix {
                                self.push_op(&tokens::SCOPE, None);
                                self.push_atom(&Atom::syntax(
                                    scope,
                                    TagType::Syntax,
                                    crate::printlanguage::SyntaxHighlight::global_color,
                                ));
                            }
                        }
                    }
                // off == 0: pushSymbol(symbol, 0, op) — the bare name.
                let atom = match in1 {
                    Some(vn) => Atom::with_op_vn(
                        name.clone(),
                        TagType::VarToken,
                        crate::printlanguage::SyntaxHighlight::var_color,
                        op_key(op),
                        vn_key(vn),
                    ),
                    None => Atom::with_op(
                        name.clone(),
                        TagType::VarToken,
                        crate::printlanguage::SyntaxHighlight::var_color,
                        op_key(op),
                    ),
                };
                self.push_atom(&atom);
            } else {
                // off != 0: pushPartialSymbol(symbol, off, 0, 0, op, -1, false) —
                // `name.field` (printc.cc:1116).
                let st = sym_type.as_ref().map(std::rc::Rc::clone);
                let pushed = if let Some(st) = st {
                    self.push_partial_symbol_ir(
                        fd,
                        arch,
                        &name,
                        st,
                        sym_off as int8,
                        0,
                        in1.unwrap_or_default(),
                        op,
                        -1,
                        false,
                    )
                } else {
                    false
                };
                if !pushed {
                    // The partial walk produced no member token (a whole-symbol
                    // cover): render the bare name, matching `pushPartialSymbol`'s
                    // degenerate base case.
                    let atom = match in1 {
                        Some(vn) => Atom::with_op_vn(
                            name.clone(),
                            TagType::VarToken,
                            crate::printlanguage::SyntaxHighlight::var_color,
                            op_key(op),
                            vn_key(vn),
                        ),
                        None => Atom::with_op(
                            name.clone(),
                            TagType::VarToken,
                            crate::printlanguage::SyntaxHighlight::var_color,
                            op_key(op),
                        ),
                    };
                    self.push_atom(&atom);
                }
            }

            if arrayvalue {
                // The `[0]` subscript index.
                self.push_constant_ir(0, 4, op);
            }
        } else {
            // Union/other: functional fallback.
            self.op_func_ir(fd, arch, op);
        }
    }

    /// (unlace indirectargs) Is `vn` the ABI pointer input of a parameter printed
    /// as its value, so that `&name` stands for it and `name` for its target?
    pub(super) fn is_value_indirect_input(&self, fd: &Funcdata, vn: VarnodeId) -> bool {
        self.out_lang == crate::lang::OutLang::C
            && fd.vbank().get(vn).is_some_and(|v| {
                v.is_input()
                    && v.get_high().is_some_and(|high| {
                        !self.indirect_input_aliases.contains(&high)
                            && self.emitted_high_symbol(fd, high).is_some()
                    })
            })
            && crate::indirectargs::is_indirect_input(fd, vn)
    }

    /// C++ `isValueFlexible(vn)` (printc.cc:919): the value `vn` is an implied
    /// PTRSUB/PTRADD result (possibly through a COPY) and so can absorb a
    /// dereference.
    pub(super) fn is_value_flexible_ir(&self, fd: &Funcdata, vn: VarnodeId) -> bool {
        let v = match fd.vbank().get(vn) {
            Some(v) => v,
            None => return false,
        };
        if !(v.is_implied() && v.is_written()) {
            return false;
        }
        let def = match v.get_def() {
            Some(d) => d,
            None => return false,
        };
        let mut opc = fd
            .obank()
            .get(def)
            .map(|o| o.code())
            .unwrap_or(OpCode::CPUI_MAX);
        if opc == OpCode::CPUI_COPY {
            let invn = match fd.obank().get(def).and_then(|o| o.get_in(0)) {
                Some(v) => v,
                None => return false,
            };
            let iv = match fd.vbank().get(invn) {
                Some(v) => v,
                None => return false,
            };
            if !iv.is_implied() || !iv.is_written() {
                return false;
            }
            opc = iv
                .get_def()
                .and_then(|d| fd.obank().get(d).map(|o| o.code()))
                .unwrap_or(OpCode::CPUI_MAX);
        }
        opc == OpCode::CPUI_PTRSUB || opc == OpCode::CPUI_PTRADD
    }

    /// C++ `PrintC::push_integer` leaf for a constant (printc.cc:1360 region),
    /// reduced to [`resolve_integer_format`] + [`format_integer_token`].  No
    /// data-type display-format override (that is the type layer); the default
    /// `val<=10 -> dec` rule reproduces the oracle's `10` rendering.
    ///
    /// (unlace) The persistent integer-format force mods (`option integerformat
    /// dec`/`hex`, printlanguage.cc:705) are honored here so a bare IR constant
    /// follows the same forced-format rule the C++ `push_integer` reads from the
    /// modifier stack (printc.cc:1397-1404).  Without this the `integerformat
    /// dec` datatests (e.g. `divopt.xml`) rendered every divisor in hex.  When
    /// neither force is active the prior `mostNaturalBase` default is preserved.
    /// Render an enumeration constant — the enum arm of C++
    /// `PrintC::pushConstant` (printc.cc:1822/1830) which delegates to
    /// `PrintC::pushEnumConstant` (printc.cc:1735-1756).  `ct->getMatches`
    /// decomposes `val` into a list of flag-name tokens (logically ORed), an
    /// optional bitwise-complement (`~`), and an optional left-shift amount
    /// (the partial-enum `>> 0x20` rendering).  When no representation is
    /// possible (`matchname` empty) it falls back to the raw integer literal,
    /// honoring the enum's display format.
    ///
    /// The C++ RPN push order (printc.cc:1741-1755), transcribed faithfully:
    /// `shift_right` op (if shifted), then `bitwise_not` op (if complemented),
    /// then `matchname.size()-1` `enum_cat` (`|`) ops, then the flag-name atoms
    /// in forward order, then — when shifted — the shift-amount integer.  The
    /// direct-recursion engine emits in push order, so the op stack reads
    /// `(name0 | name1 | ...) >> shift` for a shifted-and-ORed representation.
    pub(super) fn push_enum_constant_ir(
        &mut self,
        ct: &crate::dtype::Datatype,
        val: uintb,
        op: OpId,
        vn: VarnodeId,
    ) {
        // C++ `ct->getMatches(val, rep)` (printc.cc:1740).  Our `get_matches`
        // returns a Result (the Err is the non-enum invariant); the dispatch
        // only reaches here for an `is_enum_type()` data-type, so a `getMatches`
        // failure means a corrupt enum kind — fall back to the raw integer.
        let rep = match ct.get_matches(val) {
            Ok(rep) => rep,
            Err(_) => {
                self.push_constant_ir_fmt(val, ct.get_size(), op, ct.get_display_format());
                return;
            }
        };
        if !rep.match_name.is_empty() {
            // printc.cc:1742-1743 — `if (rep.shiftAmount != 0) pushOp(&shift_right,op);`
            if rep.shift_amount != 0 {
                self.push_op(&tokens::SHIFT_RIGHT, Some(op_key(op)));
            }
            // printc.cc:1744-1745 — `if (rep.complement) pushOp(&bitwise_not,op);`
            if rep.complement {
                let tok = self.lang_token(&tokens::BITWISE_NOT);
                self.push_op(tok, Some(op_key(op)));
            }
            // printc.cc:1746-1747 — `for(i=size-1;i>0;--i) pushOp(&enum_cat,op);`
            // one `|` op per gap between the matched names.
            for _ in 1..rep.match_name.len() {
                self.push_op(&tokens::ENUM_CAT, Some(op_key(op)));
            }
            // printc.cc:1748-1749 — the flag-name atoms in forward order.  The
            // C++ uses `Atom(name,tag,const_color,op,vn,val)` with `tag =
            // vartoken` (the tag pushVnExplicit threaded into pushConstant); for
            // a non-casetoken tag the 6-arg ctor stores the Varnode (not val).
            for name in &rep.match_name {
                self.push_atom(&Atom::with_value(
                    name.clone(),
                    TagType::VarToken,
                    crate::printlanguage::SyntaxHighlight::const_color,
                    op_key(op),
                    vn_key(vn),
                    val,
                ));
            }
            // The `>> 0x20` shift amount, rendered as a 4-byte unsigned literal,
            // no format (printc.cc:1750-1751).
            if rep.shift_amount != 0 {
                self.push_constant_ir_fmt(rep.shift_amount as uintb, 4, op, display_format::NONE);
            }
        } else {
            // printc.cc:1753-1754 — no named representation: the raw integer with
            // the enum's display format.
            self.push_constant_ir_fmt(val, ct.get_size(), op, ct.get_display_format());
        }
    }
}
