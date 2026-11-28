//! Constant emission.

use super::*;

impl PrintC {
    #[doc(hidden)]
    pub fn push_constant_ir(&mut self, val: uintb, sz: int4, op: OpId) {
        self.push_constant_ir_fmt(val, sz, op, display_format::NONE);
    }

    /// As [`push_constant_ir`](Self::push_constant_ir) but with the caller-resolved
    /// `displayFormat` override (C++ `push_integer`'s `displayFormat` argument,
    /// printc.cc:1360/1394).  A non-`NONE` `display_fmt_in` is the
    /// `vn->getHigh()->getSymbol()->getDisplayFormat()` value (the `force varnode`
    /// equate Symbol); it wins over the `val<=10`/`mostNaturalBase` default exactly
    /// as in [`resolve_integer_format`].
    pub(super) fn push_constant_ir_fmt(
        &mut self,
        val: uintb,
        sz: int4,
        op: OpId,
        display_fmt_in: u32,
    ) {
        self.push_constant_ir_fmt_sign(val, sz, op, display_fmt_in, false);
    }

    /// As [`push_constant_ir_fmt`](Self::push_constant_ir_fmt) but threading the
    /// signedness the way C++ `PrintC::pushConstant` (printc.cc:1813) does: it
    /// switches on the constant's read-facing data-type metatype and calls
    /// `push_integer(..., sign, ...)` with `sign = (metatype == TYPE_INT)`
    /// (printc.cc:1832 vs. the `TYPE_UINT`/`TYPE_UNKNOWN` arms at 1824/1835 which
    /// pass `false`).  `push_integer` (printc.cc:1381-1391) then strips a set top
    /// bit into a leading `-` and the two\'s-complement magnitude, so a negative
    /// signed convert/equate constant renders `-512` / `-0xbb8` / `-0333` /
    /// `-0b...` rather than its full unsigned bit pattern.  `force_char` short-
    /// circuits the sign (printc.cc:1381), preserving the `L\'a\'` char convert.
    #[doc(hidden)]
    pub fn push_constant_ir_fmt_sign(
        &mut self,
        val: uintb,
        sz: int4,
        op: OpId,
        display_fmt_in: u32,
        sign: bool,
    ) {
        self.push_constant_ir_fmt_sign_flags(val, sz, op, display_fmt_in, sign, false, false, "");
    }

    /// As [`push_constant_ir_fmt_sign`](Self::push_constant_ir_fmt_sign) but
    /// threading the Varnode's `isUnsignedPrint()`/`isLongPrint()` flags, exactly
    /// as C++ `PrintC::push_integer` (printc.cc:1378-1379) reads them from the
    /// `vn` argument.  `force_unsigned` appends the `U` suffix and `force_sized`
    /// appends `size_suffix` (the `sizeSuffix` member, "LL"/"L", printc.cc:1430-
    /// 1433).  C++ clears `force_unsigned_token` when the value is printed signed
    /// (printc.cc:1387) — i.e. when `sign` is set and the format is not
    /// `force_char` — so this mirrors that gate before emitting the `U`.
    #[allow(clippy::too_many_arguments)]
    pub(super) fn push_constant_ir_fmt_sign_flags(
        &mut self,
        val: uintb,
        sz: int4,
        op: OpId,
        display_fmt_in: u32,
        sign: bool,
        force_unsigned: bool,
        force_sized: bool,
        size_suffix: &str,
    ) {
        let tok = self.integer_token(
            val,
            sz,
            display_fmt_in,
            sign,
            force_unsigned,
            force_sized,
            size_suffix,
        );
        self.push_atom(&Atom::with_op(
            tok,
            TagType::Syntax,
            crate::printlanguage::SyntaxHighlight::const_color,
            op_key(op),
        ));
    }

    /// The format, sign and suffixes the integer path of
    /// [`push_vn_explicit_ir`](Self::push_vn_explicit_ir) prints the constant `vn`
    /// with, whose read-facing type is `ct`.
    /// (unlace `signeddec`) Print the signed integer constant `val` (`sz` bytes) that `op` reads in
    /// decimal when the option is on and no symbol or type fixes its format.
    pub(super) fn signed_decimal(
        &self,
        fd: &Funcdata,
        arch: &Architecture,
        op: OpId,
        val: uintb,
        sz: int4,
        lit: &mut IntegerLiteral,
    ) {
        if lit.sign
            && lit.display_fmt == display_format::NONE
            && arch.unlace_options.get::<crate::signeddec::SignedDec>().0
            && crate::signeddec::decimal(fd, op, val, sz)
        {
            lit.display_fmt = display_format::FORCE_DEC;
        }
    }

    pub(super) fn integer_literal(
        &self,
        fd: &Funcdata,
        arch: &Architecture,
        vn: VarnodeId,
        ct: &crate::dtype::Datatype,
    ) -> IntegerLiteral {
        let sym_fmt = fd.vn_high_display_format(vn);
        let display_fmt = if sym_fmt != display_format::NONE {
            sym_fmt
        } else {
            ct.get_display_format()
        };
        // C++ `pushConstant` (printc.cc:1817-1835) selects the `push_integer`
        // `sign` from the read-facing metatype: TYPE_INT -> signed
        // (printc.cc:1832), TYPE_UINT/TYPE_UNKNOWN -> unsigned (1824/1835).
        // The float/enum/char arms are dispatched before this path, so a plain
        // integer constant rendered here is signed exactly when its type is
        // TYPE_INT — which is what makes a negative `recv_signed(int4)` convert
        // constant print `-512` instead of its unsigned bit pattern.
        let sign = ct.get_metatype() == crate::dtype::type_metatype::TYPE_INT;
        // C++ `push_integer` (printc.cc:1378-1379) reads the explicit-print
        // flags off the Varnode: `isUnsignedPrint()` -> a `U` suffix,
        // `isLongPrint()` -> the `sizeSuffix` ("LL"/"L").  These are set by
        // `CastStrategy::markExplicitUnsigned`/`markExplicitLongSize` during
        // ActionSetCasts; without threading them here the `(val & 1U)` /
        // `<long>L` literals lose their suffix.
        // (unlace outlang) The `U`/`L`/`LL` suffixes are C's way of pinning a
        // literal's type in an expression. A language that infers the literal
        // type has no spelling for them, and inventing one (Rust `u32`) would
        // assert a width this site does not know. Suppressed, not translated.
        let (force_unsigned, force_sized) = if self.lang().caps.integer_suffixes {
            fd.vbank()
                .get(vn)
                .map(|v| (v.is_unsigned_print(), v.is_long_print()))
                .unwrap_or((false, false))
        } else {
            (false, false)
        };
        // C++ `sizeSuffix` (printc.cc:2412-2415): "LL" when long and int are
        // the same width, otherwise "L".
        let size_suffix = if force_sized {
            if arch.types().get_size_of_long() == arch.types().get_size_of_int() {
                "LL"
            } else {
                "L"
            }
        } else {
            ""
        };
        IntegerLiteral {
            display_fmt,
            sign,
            force_unsigned,
            force_sized,
            size_suffix,
        }
    }

    /// (unlace `castternary`) The token the constant `vn` prints as where `op`
    /// reads it, when it takes the integer path of
    /// [`push_vn_explicit_ir`](Self::push_vn_explicit_ir).
    pub(super) fn integer_constant_token(
        &self,
        fd: &Funcdata,
        arch: &Architecture,
        vn: VarnodeId,
        op: OpId,
    ) -> Option<String> {
        use crate::dtype::type_metatype::{TYPE_INT, TYPE_UINT};
        let v = fd.vbank().get(vn)?;
        if !v.is_constant() || v.is_annotation() {
            return None;
        }
        let ct = fd.vn_type_read_facing(vn, op);
        if ct.is_enum_type()
            || ct.is_char_print()
            || !matches!(ct.get_metatype(), TYPE_INT | TYPE_UINT)
        {
            return None;
        }
        let mut lit = self.integer_literal(fd, arch, vn, &ct);
        self.signed_decimal(fd, arch, op, v.get_offset(), v.get_size(), &mut lit);
        Some(self.integer_token(
            v.get_offset(),
            v.get_size(),
            lit.display_fmt,
            lit.sign,
            lit.force_unsigned,
            lit.force_sized,
            lit.size_suffix,
        ))
    }

    /// The token [`push_constant_ir_fmt_sign_flags`](Self::push_constant_ir_fmt_sign_flags)
    /// prints for an integer constant under the current modifiers.
    #[allow(clippy::too_many_arguments)]
    pub(super) fn integer_token(
        &self,
        val: uintb,
        sz: int4,
        display_fmt_in: u32,
        sign: bool,
        force_unsigned: bool,
        force_sized: bool,
        size_suffix: &str,
    ) -> String {
        let force_dec = self.context.is_set(modifiers::FORCE_DEC);
        let force_hex = self.context.is_set(modifiers::FORCE_HEX);
        // C++ `push_integer` (printc.cc:1387): the `U` suffix is suppressed when
        // the constant is rendered as signed (sign && displayFormat != force_char).
        let signed_render = sign && display_fmt_in != display_format::FORCE_CHAR;
        let force_unsigned = force_unsigned && !signed_render;
        let (print_negsign, val, display_fmt) =
            resolve_integer_format(val, sz, sign, display_fmt_in, force_hex, force_dec);
        // C++ `push_integer` (printc.cc:1417) gates the wide-char `L` prefix on
        // `doEmitWideCharPrefix()` (always true for PrintC) AND `sz > 1`.  The
        // earlier port passed `false` here, dropping the `L` from a size>1
        // force_char constant (e.g. the convert `L'a'` equate on a size-4 char).
        // (unlace outlang) A language whose character type is not an integer of the
        // declared width cannot spell every FORCE_CHAR constant. Rust's `char` is
        // a 4-byte Unicode scalar with a validity invariant and has no `'\xff'`;
        // its byte literal `b'a'` covers the 1-byte printable cases and the rest
        // fall back to the integer, which is always exact.
        let display_fmt = if display_fmt == display_format::FORCE_CHAR
            && self.lang().forms.char_lit == crate::lang::CharForm::RustByte
            && !rust_byte_literal_spellable(val, sz)
        {
            if force_hex || !force_dec {
                display_format::FORCE_HEX
            } else {
                display_format::FORCE_DEC
            }
        } else {
            display_fmt
        };
        if display_fmt == display_format::FORCE_CHAR
            && self.lang().forms.char_lit == crate::lang::CharForm::GoRune
            && u32::try_from(val).ok().and_then(char::from_u32).is_some()
        {
            let mut text = if print_negsign {
                "-'".to_string()
            } else {
                "'".to_string()
            };
            crate::langgo::escape(&mut text, val as i32, '\'');
            text.push('\'');
            return text;
        }
        let display_fmt = if display_fmt == display_format::FORCE_CHAR
            && self.lang().forms.char_lit == crate::lang::CharForm::GoRune
        {
            display_format::FORCE_HEX
        } else {
            display_fmt
        };
        let tok = format_integer_token(
            print_negsign,
            val,
            display_fmt,
            sz,
            force_unsigned,
            force_sized,
            true, // doEmitWideCharPrefix() — PrintC
            size_suffix,
        );
        if display_fmt == display_format::FORCE_CHAR
            && self.lang().forms.char_lit == crate::lang::CharForm::RustByte
        {
            format!("b{tok}")
        } else {
            tok
        }
    }

    /// Render a constant whose data-type prints as a character — C++
    /// `PrintC::pushCharConstant` (printc.cc:1675).  Resolves the varnode-high's
    /// equate/display-format override exactly as C++ does, honors the
    /// `caresAboutCharRepresentation == false` base-CastStrategy short-circuit
    /// (printc.cc:1693-1698, which routes a non-`force_char` forced format back to
    /// the integer print), then emits the `'a'` literal through the shared
    /// FORCE_CHAR formatter ([`push_constant_ir_fmt_sign`], which reproduces the
    /// printc.cc:1699-1723 size==1/`val>=0x80` and `printUnicode` arms).
    pub(super) fn push_char_constant_ir(
        &mut self,
        fd: &Funcdata,
        arch: &Architecture,
        ct: &crate::dtype::Datatype,
        val: uintb,
        op: OpId,
        vn: VarnodeId,
    ) {
        // C++ `bool isSigned = (ct->getMetatype() == TYPE_INT);` (printc.cc:1679).
        let is_signed = ct.get_metatype() == crate::dtype::type_metatype::TYPE_INT;
        // C++ resolves `displayFormat` from the varnode-high's equate Symbol /
        // type (printc.cc:1680-1692).  The equate short-circuit needs the W7
        // EquateSymbol graph (not yet ported — the equate path renders via the
        // integer arm's `force_char` route instead); here we read the Symbol /
        // read-facing display-format override that `vn_high_display_format`
        // already exposes (the same value C++ `sym->getDisplayFormat()` /
        // `high->getType()->getDisplayFormat()` produces for a non-equate high).
        let mut display_fmt = fd.vn_high_display_format(vn);
        if display_fmt == display_format::NONE {
            display_fmt = ct.get_display_format();
        }
        // printc.cc:1693-1698 — a forced format other than `force_char`, when the
        // CastStrategy does not care about the char representation (the base
        // `caresAboutCharRepresentation` returns false), prints as an integer.
        if display_fmt != display_format::NONE && display_fmt != display_format::FORCE_CHAR {
            self.push_constant_ir_fmt_sign(val, ct.get_size(), op, display_fmt, is_signed);
            return;
        }
        // (unlace `charnum`) A zero or non-printable byte ordered against a value or used in
        // arithmetic prints as a number.
        if ct.get_size() == 1
            && display_fmt == display_format::NONE
            && arch.unlace_options.get::<crate::charnum::CharNum>().0
            && crate::charnum::as_number(fd, op, val)
        {
            self.push_constant_ir_fmt_sign(val, 1, op, display_format::NONE, is_signed);
            return;
        }
        // (unlace) `'\xc8'` is -56 or 200 by the sign of the target's `char`, so a
        // `signed char` or `unsigned char` byte above 0x7f prints as a number, as
        // does a byte compared with one. Rust's `b'a'` is a `u8`, so a `signed
        // char` (`i8`) byte prints as a number there too.
        if ct.get_size() == 1 && display_fmt == display_format::NONE {
            let stated = if ct.is_core_type() {
                compared_byte_sign(fd, op, vn)
            } else {
                Some(is_signed)
            };
            let rust = self.lang().forms.char_lit == crate::lang::CharForm::RustByte;
            if let Some(sign) = stated.filter(|&sign| val >= 0x80 || (sign && rust)) {
                self.push_constant_ir_fmt_sign(val, 1, op, display_format::NONE, sign);
                return;
            }
        }
        // printc.cc:1699-1723: emit the `'a'` / `L'...'` / hex-escape literal.
        // `push_constant_ir_fmt_sign` -> `format_integer_token` reproduces the
        // size==1/`val>=0x80` ASCII guard and the `printUnicode`/`printCharHexEscape`
        // split under a FORCE_CHAR display-format.
        self.push_constant_ir_fmt_sign(
            val,
            ct.get_size(),
            op,
            display_format::FORCE_CHAR,
            is_signed,
        );
    }

    /// Render a floating-point constant — the `TYPE_FLOAT` arm of C++
    /// `PrintC::pushConstant` (printc.cc:1859-1861) which delegates to
    /// `PrintC::push_float` (printc.cc:1448-1492).  Decodes the raw encoding `val`
    /// through `glb->translate->getFloatFormat(sz)`
    /// ([`FloatFormat::get_host_float`]/`extract_sign`/`print_decimal`) and emits
    /// the `INFINITY`/`NAN`/decimal token via [`format_float_token`].  When there
    /// is no `FloatFormat` for the size, the token is `FLOAT_UNKNOWN`.  (unlace) A
    /// finite 4-byte constant in C output takes an `f` suffix where `float` is
    /// 4 bytes, since an unsuffixed literal is a `double`, and a 2-byte
    /// (binary16) constant takes `f16`.
    pub(super) fn push_float_ir(&mut self, arch: &Architecture, val: uintb, sz: int4, op: OpId) {
        use unlace_num::float::floatclass;
        let force_scinote = self.context.is_set(modifiers::FORCE_SCINOTE);
        if self.out_lang == crate::lang::OutLang::Go && matches!(sz, 4 | 8)
            && let Some(format) = arch.translate().get_float_format(sz) {
                let (_, class) = format.get_host_float(val);
                if matches!(class, floatclass::infinity | floatclass::nan)
                    || val == (1u64 << (sz * 8 - 1))
                {
                    self.push_go_call(&format!("math.Float{}frombits", sz * 8), op);
                    self.push_atom(&Atom::syntax(
                        format!("0x{val:x}"),
                        TagType::Syntax,
                        crate::printlanguage::SyntaxHighlight::const_color,
                    ));
                    return;
                }
            }
        let tok = match arch.translate().get_float_format(sz) {
            None => format_float_token(FloatClass::Unknown, false, "", force_scinote),
            Some(format) => {
                let (floatval, class) = format.get_host_float(val);
                let sign = format.extract_sign(val);
                match class {
                    floatclass::infinity => {
                        format_float_token(FloatClass::Infinity, sign, "", force_scinote)
                    }
                    floatclass::nan => format_float_token(FloatClass::Nan, sign, "", force_scinote),
                    // normalized / zero / denormalized all take the printDecimal
                    // path (C++ `push_float` else-branch).
                    _ => {
                        let decimal = format.print_decimal(floatval, force_scinote);
                        let mut token =
                            format_float_token(FloatClass::Normal, sign, &decimal, force_scinote);
                        if self.out_lang == crate::lang::OutLang::C
                            && sz == 4
                            && arch.types().get_size_of_float() == 4
                        {
                            token.push('f');
                        } else if self.out_lang == crate::lang::OutLang::C && sz == 2 {
                            token.push_str("f16");
                        }
                        token
                    }
                }
            }
        };
        self.push_atom(&Atom::with_op(
            tok,
            TagType::Syntax,
            crate::printlanguage::SyntaxHighlight::const_color,
            op_key(op),
        ));
    }

    /// Try to push a quoted string literal for a constant pointer to character
    /// data — C++ `PrintC::pushPtrCharConstant` (printc.cc:1767).  Resolves the
    /// constant pointer to a data-space address, requires the location to be
    /// readonly, then reads/escapes the string via [`Self::print_character_constant`].
    /// Returns `true` only when a literal token was pushed (so the caller can fall
    /// through to the integer print otherwise).
    pub(super) fn push_ptr_char_constant_ir(
        &mut self,
        arch: &Architecture,
        val: uintb,
        ptr_size: int4,
        subct: &std::rc::Rc<crate::dtype::Datatype>,
        point: &Address,
        op: OpId,
        vn: VarnodeId,
        indexed: Option<Option<uintb>>,
    ) -> bool {
        if self.out_lang == crate::lang::OutLang::Go && subct.get_size() != 1 {
            return false;
        }
        let spc = match arch.manage().get_default_data_space() {
            Some(s) => std::rc::Rc::clone(s),
            None => return false,
        };
        // `ptr_size` is the pointer-constant's width (C++ `ct->getSize()`).
        let mut full_encoding: uintb = 0;
        let stringaddr = match arch.resolve_constant(&spc, val, ptr_size, point, &mut full_encoding)
        {
            Ok(a) => a,
            Err(_) => return false,
        };
        if stringaddr.is_invalid() {
            return false;
        }
        // Check that the string location is readonly (the global-scope query).
        if !arch.is_global_read_only(&stringaddr, 1) {
            return false;
        }
        let mut s = String::new();
        let mut chars_emitted: int4 = 0;
        let printed = match bounded_char_array(arch, &stringaddr, subct) {
            Some(bytes) => self.print_bounded_literal(&mut s, &bytes, &mut chars_emitted),
            None => self.print_character_constant(
                arch,
                &mut s,
                &stringaddr,
                subct,
                &mut chars_emitted,
                true,
            ),
        };
        if !printed {
            return false;
        }
        // (unlace `elemptr`) `indexed` is `Some(bound)` for the base of an access
        // indexed by a computed value, `bound` the largest index it can take when
        // something bounds it. The literal holds `chars_emitted` characters and
        // its NUL; an index that can reach past them -- or that nothing bounds --
        // reads bytes the literal does not have. A parser table whose bytes happen
        // to escape as text ends at its first zero byte, and the table does not.
        if let Some(bound) = indexed
            && bound.is_none_or(|b| b > chars_emitted as uintb) {
                return false;
            }
        // (unlace emptystrconst) A zero-character literal names no byte of the
        // image, so it is strictly less informative than the address it would
        // displace -- unless the bytes there really are string data, which is
        // what a genuine `""` looks like.  Read the neighbourhood and let the
        // sub-stage decide; an unreadable window is not evidence, so the
        // upstream literal stands.
        if chars_emitted == 0 {
            let mut window = [0u8; crate::emptystrconst::WINDOW];
            let readable = {
                let loader_rc = arch.translate().loader_rc();
                let mut loader = loader_rc.borrow_mut();
                loader.load_fill(&mut window, &stringaddr).is_ok()
            };
            if crate::emptystrconst::declines_literal(
                chars_emitted,
                if readable { Some(&window[..]) } else { None },
            ) {
                return false;
            }
        }
        if self.out_lang == crate::lang::OutLang::Go {
            let Ok(pointer) = arch.types().get_type_pointer(ptr_size, subct.clone(), 1) else {
                return false;
            };
            if !self.push_go_string_pointer(&mut s, &pointer, op) {
                return false;
            }
        }
        if self.out_lang == crate::lang::OutLang::C
            && arch.cfstring_entries.contains(&stringaddr.get_offset())
        {
            s = crate::cfstr::wrap(
                &s,
                stringaddr.get_offset(),
                arch.unlace_options
                    .get::<crate::analysisgates::CfStrings>()
                    .annotate,
            );
        }
        self.push_atom(&Atom::with_op_vn(
            s,
            TagType::VarToken,
            crate::printlanguage::SyntaxHighlight::const_color,
            op_key(op),
            vn_key(vn),
        ));
        true
    }

    /// Render readonly character data at `addr` as a quoted C string literal —
    /// C++ `PrintC::printCharacterConstant` (printc.cc:1602).  Reads the UTF-8
    /// string bytes through the `StringManager` (over the loadimage), emits the
    /// optional `L` wide prefix, then the escaped contents between quotes (with the
    /// truncation marker when the literal was clipped).  Returns `false` when no
    /// string data is available.
    /// One codepoint of a string literal, escaped for the output language.
    pub(super) fn push_escaped_codepoint(&self, s: &mut String, codepoint: int4) {
        match self.lang().forms.string_escape {
            crate::lang::StringEscape::CEscapes => print_unicode_in_string(s, codepoint),
            crate::lang::StringEscape::RustEscapes => print_unicode_rust(s, codepoint),
            crate::lang::StringEscape::JavaEscapes => {
                crate::langjava::print_unicode_java(s, codepoint)
            }
            crate::lang::StringEscape::GoEscapes => crate::langgo::escape(s, codepoint, '"'),
        }
    }

    /// A bounded literal's exact bytes as a quoted string literal.
    pub(super) fn print_bounded_literal(
        &self,
        s: &mut String,
        bytes: &str,
        chars_emitted: &mut int4,
    ) -> bool {
        s.push('"');
        for c in bytes.chars() {
            self.push_escaped_codepoint(s, c as int4);
            *chars_emitted += 1;
        }
        s.push('"');
        true
    }

    pub(super) fn print_character_constant(
        &self,
        arch: &Architecture,
        s: &mut String,
        addr: &Address,
        char_type: &std::rc::Rc<crate::dtype::Datatype>,
        chars_emitted: &mut int4,
        cut_at_bounded: bool,
    ) -> bool {
        use crate::stringmanage::StringManager;
        // Pull UTF-8 string data through the architecture's persistent
        // `stringManager` (C++ `glb->stringManager`).  Using the shared instance
        // (not a transient one) is what lets `getInternalString`-registered
        // strings — keyed on a constant-space hash address that is *not* in the
        // loadimage — resolve here: `getStringData` returns the cached bytes for a
        // hit and otherwise reads the loadimage exactly as before.
        let loader_rc = arch.translate().loader_rc();
        let mut is_trunc = false;
        let buffer: Vec<u8> = {
            let mut mgr = arch.string_manager.borrow_mut();
            let mut loader = loader_rc.borrow_mut();
            mgr.get_string_data(addr, char_type, &mut **loader, &mut is_trunc)
                .to_vec()
        };
        if buffer.is_empty() {
            return false;
        }
        // doEmitWideCharPrefix() (always true for PrintC) && size>1 && !opaque -> 'L'
        if self.out_lang != crate::lang::OutLang::Go
            && char_type.get_size() > 1
            && !char_type.is_opaque_string()
        {
            s.push('L');
        }
        s.push('"');
        // escapeCharacterData(s, buffer, len, 1, glb->translate->isBigEndian()):
        // the buffer is already UTF-8 (charsize 1); walk codepoints and re-escape.
        let bigend = arch.translate().is_big_endian();
        let mut i: int4 = 0;
        let mut count = buffer.len() as int4;
        if cut_at_bounded && char_type.get_size() == 1
            && let Some(cut) = (1..buffer.len()).find(|&k| {
                addr.get_space().is_some_and(|spc| {
                    bounded_char_array(
                        arch,
                        &Address::new(std::rc::Rc::clone(spc), addr.get_offset() + k as uintb),
                        char_type,
                    )
                    .is_some()
                })
            }) {
                count = cut as int4;
                is_trunc = false;
            }
        while i < count {
            let mut skip: int4 = 1;
            let codepoint =
                StringManager::get_codepoint(&buffer[i as usize..], 1, bigend, &mut skip);
            if codepoint == 0 || codepoint == -1 {
                break;
            }
            self.push_escaped_codepoint(s, codepoint);
            *chars_emitted += 1;
            i += skip;
        }
        if is_trunc {
            s.push_str("...\" /* TRUNCATED STRING LITERAL */");
        } else {
            s.push('"');
        }
        true
    }
}
