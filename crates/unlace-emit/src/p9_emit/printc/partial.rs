//! Partial-symbol (struct member / array element) access.

use super::*;

/// One resolved member token of a partial-symbol access walk (C++
/// `PartialSymbolEntry`, printc.cc:1985-1994).  A struct/union field becomes a
/// `Member` (`.field`); an array element becomes a `Subscript` (`[index]`).
pub(super) enum PartialEntry {
    /// `object_member` token: `.field` with the field's name + `ident`
    /// (printc.cc:2046-2052).
    Member(String, int4),
    /// `subscript` token: `[index]` for an array element (printc.cc:2062-2070).
    Subscript(int4),
    /// Artificial `object_member` with no backing field (C++ `entry.field == 0`,
    /// printc.cc:2106-2117): renders `unnamedField(offset,size)` = `._<off>_<sz>_`
    /// when a composite member walk lands on an offset/size with no exact field.
    Unnamed(int8, int4),
}

/// The member walk of one partial access, before any token is emitted
/// ([`PrintC::partial_walk`]).
pub(super) struct PartialWalk {
    stack: Vec<PartialEntry>,
    finalcast: Option<std::rc::Rc<crate::dtype::Datatype>>,
    unnamed_in: Option<std::rc::Rc<crate::dtype::Datatype>>,
    result_type: Option<std::rc::Rc<crate::dtype::Datatype>>,
}

impl PrintC {
    /// C++ `PrintC::pushPartialSymbol` (printc.cc:2019-2141), the STRUCT / UNION /
    /// ARRAY arms of the type walk (the symbol-mapped member-access render
    /// `glob.intfield` / `val.c` / `globvar.b.bval1` and the array-element render
    /// `v1.arr[i]` for a struct field that is an array).
    ///
    /// Reconciled with the unlace naming layer: the base symbol name comes from the
    /// HighVariable's `unlace_name` binding (the `pushSymbol(sym,vn,op)` stand-in,
    /// printc.cc:2127) rather than a `Symbol *`; the walked data-type is the
    /// `unlace_symbol_type` (the `sym->getType()` stand-in, printc.cc:2030).  The
    /// UNION `findTruncation` (type.cc:2613-2627) reads the Funcdata union
    /// resolution cache via [`Funcdata::get_union_field`]; the STRUCT
    /// `findTruncation` (type.cc:1878) walks the field table
    /// ([`Datatype::find_truncation`]).
    ///
    /// Returns `true` when the walk produced a genuine member token (the partial
    /// cover render fired) and `false` otherwise — on `false` the caller renders
    /// the bare symbol name, so a non-partial read stays byte-identical.  The
    /// `allowCast` SUBPIECE-cast arm (printc.cc:2094-2105) is not reached from this
    /// entry (`allow_cast == false`); a whole-array Symbol is still handled by the
    /// caller's existing `name[index]` branch (this ARRAY arm only fires for an
    /// array nested inside a struct field, e.g. `mypiece.arr[i]`).
    #[allow(clippy::too_many_arguments)]
    pub(super) fn push_partial_symbol_ir(
        &mut self,
        fd: &Funcdata,
        arch: &Architecture,
        name: &str,
        sym_type: std::rc::Rc<crate::dtype::Datatype>,
        off_in: int8,
        sz_in: int4,
        vn: VarnodeId,
        op: OpId,
        slot: int4,
        allow_cast: bool,
    ) -> bool {
        let whole = std::rc::Rc::clone(&sym_type);
        let PartialWalk {
            mut stack,
            finalcast,
            unnamed_in,
            ..
        } = self.partial_walk(fd, arch, sym_type, off_in, sz_in, vn, op, slot, allow_cast);
        self.push_partial_walk(
            fd, arch, name, &whole, &mut stack, finalcast, unnamed_in, sz_in, vn, op,
        )
    }

    /// The member walk of [`Self::push_partial_symbol_ir`] (C++ `pushPartialSymbol`'s
    /// type descent), without emitting anything: the member tokens, the trailing
    /// truncation cast, and the type an artificial `._<off>_<sz>_` member was taken
    /// out of.
    #[allow(clippy::too_many_arguments)]
    pub(super) fn partial_walk(
        &self,
        fd: &Funcdata,
        arch: &Architecture,
        sym_type: std::rc::Rc<crate::dtype::Datatype>,
        off_in: int8,
        sz_in: int4,
        vn: VarnodeId,
        op: OpId,
        slot: int4,
        allow_cast: bool,
    ) -> PartialWalk {
        use crate::dtype::type_metatype;
        // PartialSymbolEntry stack (C++ `vector<PartialSymbolEntry> stack`,
        // printc.cc:2026): each entry is a resolved member token — either an
        // `object_member` (`.field`) for a struct/union field, or a `subscript`
        // (`[index]`) for an array element (printc.cc:2062-2070).
        let mut stack: Vec<PartialEntry> = Vec::new();
        let stack_views = sym_type.get_name().starts_with("stack_views_");
        let mut ct = Some(sym_type);
        let mut off: int8 = off_in;
        let mut sz: int4 = sz_in;
        // C++ `Datatype *finalcast = 0` (printc.cc:2024): set by the `allowCast`
        // arm when the trailing truncation is a SUBPIECE-style cast (`(undefined1)
        // v1.flagfield`); rendered as a leading `(cast)` before the member tokens.
        let mut finalcast: Option<std::rc::Rc<crate::dtype::Datatype>> = None;
        // (unlace `partialaccess`) The type an artificial `._<off>_<sz>_` member was
        // taken out of.
        let mut unnamed_in: Option<std::rc::Rc<crate::dtype::Datatype>> = None;
        let volatile_annotation = fd
            .vbank()
            .get(vn)
            .is_some_and(|v| v.is_annotation() && v.is_volatile());
        let facing_type = crate::aggregatefields::edge_type(fd, vn, op, slot);

        while let Some(cur) = ct.clone() {
            // (unlace arraycoverwidth) The upstream whole-symbol break exits the
            // walk before the ARRAY arm can see a cover that spans more than one
            // element, so a 16-byte `movaps` transfer through a `char v30[16]`
            // bank left the caller to render `v30[0]` -- a one-byte lvalue for a
            // sixteen-byte access.  Such a cover has no subscript that describes
            // it; letting the walk continue reaches the artificial-field branch
            // below and renders `v30._0_16_`, the same width-carrying notation a
            // PARTIAL multi-element access already gets.  Scalars, structs,
            // unions and single-element covers keep the upstream break.
            let wide_array_cover =
                sz != 0 && crate::arraycoverwidth::spans_multiple_elements(&cur, sz);
            let scalar_frame_cover = stack_views
                && cur.get_metatype() == type_metatype::TYPE_STRUCT
                && fd.vbank().get(vn).is_some_and(|v| {
                    !matches!(
                        v.get_type().get_metatype(),
                        type_metatype::TYPE_STRUCT | type_metatype::TYPE_UNION
                    )
                });
            let aggregate_annotation = volatile_annotation
                && matches!(
                    cur.get_metatype(),
                    type_metatype::TYPE_ARRAY
                        | type_metatype::TYPE_STRUCT
                        | type_metatype::TYPE_UNION
                );
            if off == 0
                && !aggregate_annotation
                && !wide_array_cover
                && !scalar_frame_cover
                && (sz == 0
                    || (sz == cur.get_size()
                        && (!cur.needs_resolution()
                            || cur.get_metatype() == type_metatype::TYPE_PTR
                            || (cur.get_metatype() == type_metatype::TYPE_STRUCT
                                && facing_type
                                    .as_ref()
                                    .is_some_and(|ty| std::rc::Rc::ptr_eq(ty, &cur))))))
            {
                break;
            }
            let mut succeeded = false;
            let meta = cur.get_metatype();
            if meta == type_metatype::TYPE_STRUCT {
                if crate::aggregatefields::resolves_whole_struct(fd, &cur, sz, op, slot) {
                    break;
                }
                match cur.find_truncation(off, sz, op, slot) {
                    Ok(Some((idx, newoff))) => {
                        if let Some(f) = cur.get_field(idx) {
                            off = newoff;
                            stack.push(PartialEntry::Member(f.name.clone(), f.ident));
                            ct = Some(std::rc::Rc::clone(&f.field_type));
                            succeeded = true;
                        }
                    }
                    Ok(None) | Err(_) => {
                        // C++ printc.cc:2057-2059: `else if (op->code()==CPUI_ZPULL ||
                        // CPUI_SPULL) break;` — the final byte field cannot be
                        // resolved because it is a *bit field* extracted by a
                        // ZPULL/SPULL; the Varnode is already fully resolved (the
                        // bitfield op carries the member), so stop WITHOUT emitting an
                        // artificial `._o_s_` token (which would wrongly produce
                        // `v1._0_1_.fieldb`).
                        let opc = fd.obank().get(op).map(|o| o.code());
                        if opc == Some(OpCode::CPUI_ZPULL) || opc == Some(OpCode::CPUI_SPULL) {
                            break;
                        }
                    }
                }
            } else if meta == type_metatype::TYPE_ARRAY {
                // C++ `TypeArray::getSubEntry` (type.cc:1430): the access maps to
                // element `el = off / elementAlignSize`, with `newoff = off %
                // elementAlignSize` the remaining offset INTO that element.  A
                // request spanning more than one element returns null (no subscript).
                if let Some(elem) = cur.get_array_base() {
                    let elsize = elem.get_align_size().max(1);
                    let noff = off % elsize as int8;
                    let nel = (off / elsize as int8) as int4;
                    if noff + sz as int8 <= elsize as int8 {
                        off = noff;
                        stack.push(PartialEntry::Subscript(nel));
                        ct = Some(elem);
                        succeeded = true;
                    }
                }
            } else if meta == type_metatype::TYPE_UNION {
                // TypeUnion::findTruncation (type.cc:2613): read the cached union
                // resolution for this (type, op, slot) edge.  No new scoring.
                let field = if cur.needs_resolution() {
                    fd.get_union_resolution(&cur, op, slot)
                        .map(|r| r.get_field_num())
                        .filter(|&n| n >= 0)
                        .and_then(|n| {
                            cur.get_field(n).map(|f| {
                                (
                                    n,
                                    f.offset,
                                    f.name.clone(),
                                    f.ident,
                                    std::rc::Rc::clone(&f.field_type),
                                )
                            })
                        })
                } else {
                    None
                };
                match field {
                    Some((_n, foff, fname, fident, ftype)) => {
                        // newoff = offset - field->offset; truncation must fit the
                        // field (type.cc:2621-2624).
                        let newoff = off - foff as int8;
                        if newoff + sz as int8 > ftype.get_size() as int8 {
                            // Truncation spans more than one field: findTruncation
                            // returns null.  Fall to the `else if size==sz` check.
                            if cur.get_size() == sz && !volatile_annotation {
                                break;
                            }
                            // !succeeded artificial-field fallthrough below.
                        } else {
                            off = newoff;
                            stack.push(PartialEntry::Member(fname, fident));
                            ct = Some(ftype);
                            succeeded = true;
                        }
                    }
                    None => {
                        // else if (ct->getSize() == sz) break; (printc.cc:2091).
                        if cur.get_size() == sz && !volatile_annotation {
                            break;
                        }
                    }
                }
            } else if allow_cast {
                // C++ `else if (allowCast)` (printc.cc:2094-2105): the walk has
                // reached a scalar leaf (e.g. the `flags` enum field) but the access
                // truncates it (a 1-byte read of the 8-byte `flagfield`).  When the
                // truncation is a low-end SUBPIECE-style cast, render it as a leading
                // `(outtype)` cast over the whole member: `(undefined1)v1.flagfield`.
                // `vn->getHigh()->getType()`: by the W10 print convention the high
                // type is pinned to the Varnode's own type at print-time (the same
                // stand-in `vn_high_type` uses), so read it directly.
                let outtype = fd.vbank().get(vn).map(|v| std::rc::Rc::clone(v.get_type()));
                // `getFirstWholeMap()->getAddr().getSpace()` is the Symbol's storage
                // space (the stack space for a stack local); its endianness gates the
                // SUBPIECE direction.  The Varnode's own space is the same storage
                // here, so use it as the C++ `spc == 0` fallback already does.
                let is_big = fd
                    .vbank()
                    .get(vn)
                    .and_then(|v| v.get_addr().get_space().map(|s| s.is_big_endian()))
                    .unwrap_or(false);
                if let (Some(outtype), Some(strat)) = (outtype, cast_strategy_for(arch)) {
                    let off_u = if off >= 0 { off as uint4 } else { 0 };
                    if strat.is_subpiece_cast_endian(&outtype, &cur, off_u, is_big) {
                        finalcast = Some(outtype);
                        ct = None;
                        succeeded = true;
                    }
                }
                // If the truncation is NOT a plain SUBPIECE-style cast, fall through
                // to the `!succeeded` artificial-field branch (C++ printc.cc:2106):
                // the leftover offset/size renders as `._<off>_<sz>_`.
            } else if !stack.is_empty() {
                // ARRAY/scalar leaf with allowCast disabled, but a member token was
                // already collected: emit the leftover as an artificial `._o_s_`
                // member rather than discarding the resolved prefix (C++ reaches the
                // `!succeeded` branch here too).  Leaving `succeeded == false`.
            }
            // NOTE: two leaves land here with an empty stack.  A SCALAR whose
            // truncation is not a SUBPIECE cast, and an ARRAY whose access spans
            // more than one element (`TypeArray::getSubEntry` returns null): an
            // 8-byte write into `undefined1[16]` has no subscript that describes
            // it, so it renders `v1._0_8_` — the size the subscript could not
            // carry.  C++ `pushPartialSymbol`
            // (printc.cc:2106-2117) takes the `!succeeded` artificial-field branch for a
            // scalar truncation that is not a SUBPIECE cast — the LOSS-245 store LHS
            // `local._2_2_ = big(...)` (an int2 write at offset 2 of the tied int8
            // `local`, `allowCast` off because the assignment output is not a read).
            // So this scalar leaf FALLS THROUGH (no bail) to the `._<off>_<sz>_` token
            // emitter below, matching the C++ render.  (Previously this bailed with
            // `return false` so a scalar rendered its bare name; that suppressed the
            // partial-field render for tied scalar sub-accesses.)
            if !succeeded {
                // Subtype was not good (printc.cc:2106-2117): generate an artificial
                // member name based on offset/size (`unnamedField(off,sz)` →
                // `._<off>_<sz>_`).  Reached when a composite member walk lands on an
                // offset/size with no exact field — the C++ emits the synthetic
                // `_o_s_` token and stops (`ct = 0`).
                if sz == 0 {
                    sz = cur.get_size() - off as int4;
                }
                unnamed_in = Some(std::rc::Rc::clone(&cur));
                stack.push(PartialEntry::Unnamed(off, sz));
                ct = None;
            }
        }

        let result_type = finalcast.clone().or(ct);
        PartialWalk {
            stack,
            finalcast,
            unnamed_in,
            result_type,
        }
    }

    /// Emit a walked partial access: the member path over `name`, whose whole
    /// type is `whole`, with the trailing truncation cast, or the typed rendering
    /// `partialaccess` gives an artificial `._<off>_<sz>_` member. Returns
    /// `false` for a whole-symbol cover, which the caller renders as the bare
    /// name.
    #[allow(clippy::too_many_arguments)]
    pub(super) fn push_partial_walk(
        &mut self,
        fd: &Funcdata,
        arch: &Architecture,
        name: &str,
        whole: &std::rc::Rc<crate::dtype::Datatype>,
        stack: &mut Vec<PartialEntry>,
        finalcast: Option<std::rc::Rc<crate::dtype::Datatype>>,
        unnamed_in: Option<std::rc::Rc<crate::dtype::Datatype>>,
        sz_in: int4,
        vn: VarnodeId,
        op: OpId,
    ) -> bool {
        // No member tokens collected and no trailing cast: this is a whole-symbol
        // cover, render bare (the caller emits the plain name).
        if stack.is_empty() && finalcast.is_none() {
            return false;
        }

        if self.out_lang == crate::lang::OutLang::Go && finalcast.is_none() && sz_in > 0
            && let (Some(PartialEntry::Unnamed(offset, size)), Some(container)) =
                (stack.last(), unnamed_in.as_deref())
            {
                let offset = *offset;
                let rendered = self.go_value_type(fd, arch, vn, op);
                if let Some(view) =
                    crate::gobyteview::plan(fd, arch, vn, op, container, offset, *size, rendered)
                {
                    stack.pop();
                    if let crate::gobyteview::View::Integer(pointer) = &view {
                        self.push_op(&tokens::DEREFERENCE, Some(op_key(op)));
                        self.push_cast_open(pointer, op);
                        self.push_go_call("unsafe.Add", op);
                        self.push_op(&tokens::COMMA, Some(op_key(op)));
                        self.push_go_call("unsafe.Pointer", op);
                        self.push_op(&tokens::ADDRESSOF, Some(op_key(op)));
                    }
                    self.push_partial_path(name, stack, vn, op);
                    if matches!(view, crate::gobyteview::View::Integer(_)) {
                        self.push_constant_ir_fmt_sign(
                            offset as uintb,
                            0,
                            op,
                            display_format::NONE,
                            false,
                        );
                    }
                    return true;
                }
            }

        let piece = match stack.last() {
            Some(PartialEntry::Unnamed(o, s))
                if *s > 0
                    && self.options.partial_access
                    && self.out_lang == crate::lang::OutLang::C =>
            {
                crate::partialaccess::Piece::plan(
                    fd,
                    arch,
                    vn,
                    op,
                    *o,
                    *s,
                    sz_in == 0,
                    unnamed_in.as_deref(),
                )
            }
            _ => None,
        };
        if piece.is_some() {
            stack.pop();
        }
        if let Some(p) = &piece {
            self.push_piece_open(p, op);
        }

        // A leading `(cast)` over the whole member access (Rust: a trailing
        // `as T`, closed at the single exit below).
        let final_cast_open = match (&finalcast, self.options.nocasts) {
            (Some(fc), false)
                if !(stack.is_empty()
                    && self.partial_cast_drops(fd, arch, vn, op, fc, whole, name)) =>
            {
                self.push_cast_open(fc, op);
                Some(fc.clone())
            }
            _ => None,
        };
        self.push_partial_path(name, stack, vn, op);
        if let Some(fc) = &final_cast_open {
            self.push_cast_close(fc);
        }
        if let Some(p) = &piece {
            self.push_piece_close(p, op);
        }
        true
    }

    /// The member path of a partial access over `name`: every member, subscript
    /// and artificial `._<off>_<sz>_` entry of `stack`.
    pub(super) fn push_partial_path(
        &mut self,
        name: &str,
        stack: &[PartialEntry],
        vn: VarnodeId,
        op: OpId,
    ) {
        // Push the member ops in REVERSE stack order (C++ printc.cc:2124-2126:
        // `for(i=stack.size()-1;i>=0;--i) pushOp(stack[i].token,op)`).  The
        // outermost access (the last-resolved element) binds tightest, so e.g. for
        // `v1.arr[i]` the stack is `[Member("arr"), Subscript(i)]` and the ops emit
        // SUBSCRIPT then OBJECT_MEMBER, yielding `(v1.arr)[i]` not `(v1[i]).arr`.
        for entry in stack.iter().rev() {
            match entry {
                PartialEntry::Member(_, _) | PartialEntry::Unnamed(_, _) => {
                    // C++ both the field and the artificial-name entry use
                    // `entry.token = &object_member` (printc.cc:2049 / 2109).
                    self.push_op(&tokens::OBJECT_MEMBER, Some(op_key(op)));
                }
                PartialEntry::Subscript(_) => {
                    self.push_op(&tokens::SUBSCRIPT, Some(op_key(op)));
                }
            }
        }
        // The base name (the unlace_name stand-in for pushSymbol).
        self.push_atom(&Atom::with_op_vn(
            name.to_string(),
            TagType::VarToken,
            crate::printlanguage::SyntaxHighlight::var_color,
            op_key(op),
            vn_key(vn),
        ));
        // Per entry, in forward order (printc.cc:2128-2140): a field emits its name
        // Atom (`Atom(field->name,fieldtoken,...,parent,field->ident,op)`); an array
        // subscript emits the index as a constant-color integer literal
        // (`push_integer(entry.offset,...)`, printc.cc:2133).
        for entry in stack {
            match entry {
                PartialEntry::Member(fname, fident) => {
                    self.push_atom(&Atom::field(
                        fname.clone(),
                        TagType::FieldToken,
                        crate::printlanguage::SyntaxHighlight::no_color,
                        0,
                        *fident,
                        op_key(op),
                    ));
                }
                PartialEntry::Subscript(index) => {
                    // C++ `push_integer(entry.offset, entry.size, (entry.offset < 0),
                    // syntax, 0, op, 0)` (printc.cc:2132): an array-subscript entry
                    // has `entry.size == 0`, so the index renders through the integer
                    // formatter — the `val<=10 -> dec` / `mostNaturalBase` hex/dec
                    // rule, NOT an unconditional decimal.
                    let sign = *index < 0;
                    self.push_constant_ir_fmt_sign(
                        *index as uintb,
                        0,
                        op,
                        display_format::NONE,
                        sign,
                    );
                }
                PartialEntry::Unnamed(eoff, esize) => {
                    // C++ printc.cc:2129-2135 (`entry.field == 0`): a negative/zero
                    // `size` renders the offset as an integer; a positive size emits
                    // the synthetic `_<off>_<size>_` field atom.
                    if *esize <= 0 {
                        self.push_constant_ir_fmt_sign(
                            *eoff as uintb,
                            *esize,
                            op,
                            display_format::NONE,
                            *eoff < 0,
                        );
                    } else {
                        let field = crate::printlanguage::unnamed_field(*eoff as int4, *esize);
                        self.push_atom(&Atom::with_op(
                            field,
                            TagType::Syntax,
                            crate::printlanguage::SyntaxHighlight::no_color,
                            op_key(op),
                        ));
                    }
                }
            }
        }
    }

    /// (unlace `partialaccess`) The member walk `push_vn_explicit_ir` gives `vn`
    /// when it prints as part of a mapped Symbol, with the Symbol's name.
    pub(super) fn piece_walk(
        &self,
        fd: &Funcdata,
        arch: &Architecture,
        vn: VarnodeId,
        op: OpId,
        slot: int4,
        allow_cast: bool,
    ) -> Option<(String, PartialWalk)> {
        use crate::dtype::type_metatype;
        let v = fd.vbank().get(vn)?;
        if v.is_constant() || v.is_implied() {
            return None;
        }
        let (name, sym_off, sym_type) = self.emitted_high_symbol(fd, v.get_high()?)?;
        let st = sym_type?;
        let symoff = sym_off.max(0);
        let asize = v.get_size();
        let composite = matches!(
            st.get_metatype(),
            type_metatype::TYPE_STRUCT | type_metatype::TYPE_UNION | type_metatype::TYPE_ARRAY
        );
        if !composite && !((symoff > 0 || asize < st.get_size()) && symoff + asize <= st.get_size())
        {
            return None;
        }
        Some((
            name,
            self.partial_walk(
                fd,
                arch,
                st,
                symoff as int8,
                asize,
                vn,
                op,
                slot,
                allow_cast,
            ),
        ))
    }

    /// The type of the member or cast this access actually prints, including
    /// the typed pointer used when no member names the Symbol's bytes.
    pub(super) fn partial_piece_type(
        &self,
        fd: &Funcdata,
        arch: &Architecture,
        vn: VarnodeId,
        op: OpId,
        slot: int4,
    ) -> Option<std::rc::Rc<crate::dtype::Datatype>> {
        if self.out_lang != crate::lang::OutLang::C {
            return None;
        }
        let (_, walk) = self.piece_walk(fd, arch, vn, op, slot, slot >= 0)?;
        let Some(PartialEntry::Unnamed(off, size)) = walk.stack.last() else {
            // Named frame members follow the explicit stackviews control too.
            if !crate::stackviews::enabled(fd) {
                let value = fd.vbank().get(vn)?;
                let high = fd.high_bank().get(value.get_high()?)?;
                if (0..high.num_instances()).any(|index| {
                    fd.vbank()
                        .get(high.get_instance(index))
                        .is_some_and(|value| {
                            value.get_space().get_type()
                                == unlace_base::space::spacetype::IPTR_SPACEBASE
                        })
                }) {
                    return None;
                }
            }
            use crate::dtype::type_metatype;
            let width = fd.vbank().get(vn)?.get_size();
            return walk.result_type.filter(|ty| {
                ty.get_size() == width
                    && matches!(
                        ty.get_metatype(),
                        type_metatype::TYPE_BOOL
                            | type_metatype::TYPE_INT
                            | type_metatype::TYPE_UINT
                            | type_metatype::TYPE_UNKNOWN
                            | type_metatype::TYPE_FLOAT
                            | type_metatype::TYPE_PTR
                    )
            });
        };
        if !self.options.partial_access {
            return None;
        }
        if *size <= 0 {
            return None;
        }
        match crate::partialaccess::Piece::plan(
            fd,
            arch,
            vn,
            op,
            *off,
            *size,
            false,
            walk.unnamed_in.as_deref(),
        )? {
            crate::partialaccess::Piece::Pointer {
                pointee: crate::partialaccess::Pointee::Typed(pointer),
                ..
            } => pointer.get_ptr_to(),
            _ => None,
        }
    }

    /// (unlace `partialaccess`) A plain store or copy of a width C has no scalar
    /// for, into bytes no member names, as `memset`/`memcpy` of exactly those
    /// bytes. The source is a constant whose bytes are all equal, the same kind
    /// of piece, or a variable; a whole array variable takes a copy out of such a
    /// piece the same way. Anything else (an intrinsic, an expression) declines
    /// and the statement keeps its assignment.
    /// (unlace `partialaccess`) `v = CONCAT44(((T *)&v)[1], x)` as the store it is,
    /// `*(T *)&v = x` ([`crate::halfstore`]).
    pub(super) fn emit_half_store(&mut self, fd: &Funcdata, arch: &Architecture, op: OpId) -> bool {
        if !self.options.partial_access || self.out_lang != crate::lang::OutLang::C {
            return false;
        }
        let Some(store) = crate::halfstore::plan(fd, op) else {
            return false;
        };
        let Some(out) = fd.obank().get(op).and_then(|o| o.get_out()) else {
            return false;
        };
        let types = arch.types();
        let Ok(pointer) = types
            .get_base(store.size, type_metatype::TYPE_UINT)
            .and_then(|t| types.get_type_pointer(types.get_size_of_pointer(), t, 1))
        else {
            return false;
        };
        self.push_op(&tokens::ASSIGNMENT, Some(op_key(op)));
        self.push_op(&tokens::DEREFERENCE, Some(op_key(op)));
        self.push_cast_open(&pointer, op);
        self.push_op(&tokens::ADDRESSOF, Some(op_key(op)));
        self.push_vn_explicit_ir(fd, arch, out, op);
        self.push_cast_close(&pointer);
        self.push_vn_ir(fd, arch, store.value, op);
        true
    }

    pub(super) fn emit_wide_copy(&mut self, fd: &Funcdata, arch: &Architecture, op: OpId) -> bool {
        use crate::dtype::type_metatype;
        use crate::partialaccess::is_scalar_width;
        if !self.options.partial_access || self.out_lang != crate::lang::OutLang::C {
            return false;
        }
        let Some((out, input)) = fd
            .obank()
            .get(op)
            .filter(|o| o.code() == OpCode::CPUI_COPY)
            .and_then(|o| Some((o.get_out()?, o.get_in(0)?)))
        else {
            return false;
        };
        let (Some(ov), Some(iv)) = (fd.vbank().get(out), fd.vbank().get(input)) else {
            return false;
        };
        let size = ov.get_size();
        if size <= 0
            || is_scalar_width(size)
            || ov.get_type().get_metatype() == type_metatype::TYPE_FLOAT
        {
            return false;
        }
        let wide = |w: &PartialWalk| -> Option<int8> {
            match w.stack.last() {
                Some(&PartialEntry::Unnamed(off, s)) if s == size && w.finalcast.is_none() => {
                    Some(off)
                }
                _ => None,
            }
        };
        let target = self
            .piece_walk(fd, arch, out, op, -1, false)
            .and_then(|(n, w)| wide(&w).map(|o| (n, w, o)));
        let piece_source = self
            .piece_walk(fd, arch, input, op, 0, true)
            .and_then(|(n, w)| wide(&w).map(|o| (n, w, o)));
        let fill = iv.is_constant().then(|| {
            let value = iv.get_offset();
            let low = (value & 0xff) as u8;
            let equal = (0..size.min(8) as u32).all(|i| ((value >> (8 * i)) & 0xff) as u8 == low)
                && (size <= 8 || value == 0);
            equal.then_some(low)
        });
        let variable = |v: &crate::varnode::Varnode| {
            !v.is_constant() && !v.is_implied() && v.get_high().is_some()
        };
        let whole_array = variable(ov)
            && matches!(
                ov.get_type().get_metatype(),
                type_metatype::TYPE_ARRAY | type_metatype::TYPE_UNKNOWN
            );
        if target.is_none() && !(whole_array && piece_source.is_some()) {
            return false;
        }
        if target.is_some() && piece_source.is_none() && fill.flatten().is_none() && !variable(iv) {
            return false;
        }
        if fill.is_some_and(|f| f.is_none()) && piece_source.is_none() {
            return false;
        }
        let key = Some(op_key(op));
        let filled = fill.flatten();
        self.push_op(&tokens::FUNCTION_CALL, key);
        let callee = if filled.is_some() { "memset" } else { "memcpy" };
        self.push_atom(&Atom::syntax(
            callee,
            TagType::FuncToken,
            crate::printlanguage::SyntaxHighlight::funcname_color,
        ));
        self.push_op(&tokens::COMMA, key);
        self.push_op(&tokens::COMMA, key);
        match target {
            Some((name, walk, off)) => self.push_piece_address(arch, &name, &walk, off, out, op),
            None => {
                self.push_op(&tokens::ADDRESSOF, key);
                self.push_vn_ir(fd, arch, out, op);
            }
        }
        match (filled, piece_source) {
            (Some(byte), _) => {
                self.push_constant_ir_fmt_sign(byte as uintb, 0, op, display_format::NONE, false)
            }
            (None, Some((name, walk, off))) => {
                self.push_piece_address(arch, &name, &walk, off, input, op)
            }
            (None, None) => {
                self.push_op(&tokens::ADDRESSOF, key);
                self.push_vn_ir(fd, arch, input, op);
            }
        }
        self.push_constant_ir_fmt_sign(size as uintb, 0, op, display_format::NONE, false);
        true
    }

    /// (unlace `partialaccess`) The address of the bytes a walk ends in an
    /// artificial member for: `&v` at offset 0, `&buf[off]` in a byte array,
    /// `(char *)&v + off` otherwise.
    pub(super) fn push_piece_address(
        &mut self,
        arch: &Architecture,
        name: &str,
        walk: &PartialWalk,
        off: int8,
        vn: VarnodeId,
        op: OpId,
    ) {
        let key = Some(op_key(op));
        let path = &walk.stack[..walk.stack.len().saturating_sub(1)];
        let bytes_array = walk.unnamed_in.as_ref().is_some_and(|c| {
            c.get_metatype() == crate::dtype::type_metatype::TYPE_ARRAY
                && c.get_array_base().is_some_and(|e| e.get_size() == 1)
        });
        if off == 0 {
            self.push_op(&tokens::ADDRESSOF, key);
            self.push_partial_path(name, path, vn, op);
        } else if bytes_array {
            self.push_op(&tokens::ADDRESSOF, key);
            self.push_op(&tokens::SUBSCRIPT, key);
            self.push_partial_path(name, path, vn, op);
            self.push_constant_ir_fmt_sign(off as uintb, 0, op, display_format::NONE, false);
        } else {
            let types = arch.types();
            let char_ptr = types
                .get_type_char(1)
                .and_then(|c| types.get_type_pointer(types.get_size_of_pointer(), c, 1));
            self.push_op(&tokens::BINARY_PLUS, key);
            if let Ok(cp) = &char_ptr {
                self.push_cast_open(cp, op);
            }
            self.push_op(&tokens::ADDRESSOF, key);
            self.push_partial_path(name, path, vn, op);
            if let Ok(cp) = &char_ptr {
                self.push_cast_close(cp);
            }
            self.push_constant_ir_fmt_sign(off as uintb, 0, op, display_format::NONE, false);
        }
    }

    /// (unlace `partialaccess`) Open the cast to the pointer an access reads
    /// through.
    pub(super) fn push_pointee_cast_open(
        &mut self,
        pointee: &crate::partialaccess::Pointee,
        op: OpId,
    ) {
        match pointee {
            crate::partialaccess::Pointee::Typed(ptr) => self.push_cast_open(ptr, op),
            crate::partialaccess::Pointee::Int128 { volatile } => {
                self.push_op(&tokens::TYPECAST, Some(op_key(op)));
                self.push_atom(&Atom::syntax(
                    if *volatile {
                        "volatile unsigned __int128 *"
                    } else {
                        "unsigned __int128 *"
                    },
                    TagType::TypeToken,
                    crate::printlanguage::SyntaxHighlight::type_color,
                ));
            }
        }
    }

    /// (unlace `partialaccess`) Close [`Self::push_pointee_cast_open`].
    pub(super) fn push_pointee_cast_close(&mut self, pointee: &crate::partialaccess::Pointee) {
        if let crate::partialaccess::Pointee::Typed(ptr) = pointee {
            self.push_cast_close(ptr);
        }
    }

    /// (unlace `partialaccess`) Open the rendering that replaces a
    /// `._<off>_<size>_` token; the symbol and its member path follow.
    pub(super) fn push_piece_open(&mut self, p: &crate::partialaccess::Piece, op: OpId) {
        use crate::partialaccess::{Form, Piece};
        match p {
            Piece::Sub { name, .. } => {
                self.push_op(&tokens::FUNCTION_CALL, Some(op_key(op)));
                self.push_atom(&Atom::with_op(
                    name.clone(),
                    TagType::OpToken,
                    crate::printlanguage::SyntaxHighlight::no_color,
                    op_key(op),
                ));
                self.push_op(&tokens::COMMA, Some(op_key(op)));
            }
            Piece::Pointer {
                form,
                pointee,
                bytes,
            } => {
                match form {
                    Form::Index(_) => self.push_op(&tokens::SUBSCRIPT, Some(op_key(op))),
                    _ => self.push_op(&tokens::DEREFERENCE, Some(op_key(op))),
                }
                self.push_pointee_cast_open(pointee, op);
                if let (Form::Bytes(_), Some(bytes)) = (form, bytes) {
                    self.push_op(&tokens::BINARY_PLUS, Some(op_key(op)));
                    self.push_cast_open(bytes, op);
                }
                match form {
                    Form::Decay => {}
                    Form::Element(_) => {
                        self.push_op(&tokens::ADDRESSOF, Some(op_key(op)));
                        self.push_op(&tokens::SUBSCRIPT, Some(op_key(op)));
                    }
                    _ => self.push_op(&tokens::ADDRESSOF, Some(op_key(op))),
                }
            }
        }
    }

    /// (unlace `partialaccess`) Close what [`Self::push_piece_open`] opened.
    pub(super) fn push_piece_close(&mut self, p: &crate::partialaccess::Piece, op: OpId) {
        use crate::partialaccess::{Form, Piece};
        match p {
            Piece::Sub { value_offset, .. } => {
                self.push_constant_ir_fmt_sign(
                    *value_offset as uintb,
                    0,
                    op,
                    display_format::NONE,
                    false,
                );
            }
            Piece::Pointer {
                form,
                pointee,
                bytes,
            } => match form {
                Form::Index(k) => {
                    self.push_pointee_cast_close(pointee);
                    self.push_constant_ir_fmt_sign(*k as uintb, 0, op, display_format::NONE, false);
                }
                Form::Base | Form::Decay => self.push_pointee_cast_close(pointee),
                Form::Element(k) => {
                    self.push_constant_ir_fmt_sign(*k as uintb, 0, op, display_format::NONE, false);
                    self.push_pointee_cast_close(pointee);
                }
                Form::Bytes(off) => {
                    if let Some(bytes) = bytes {
                        self.push_cast_close(bytes);
                    }
                    self.push_constant_ir_fmt_sign(
                        *off as uintb,
                        0,
                        op,
                        display_format::NONE,
                        false,
                    );
                    self.push_pointee_cast_close(pointee);
                }
            },
        }
    }
}
