//! Integer, float, character and string literal formatting.

use super::*;

// ===========================================================================
// Self-contained constant / type formatting
// ===========================================================================

/// The first run of decimal digits in `s`, parsed — the `{changes}` count a
/// count-carrying warning text embeds.
pub(super) fn first_integer(s: &str) -> Option<u64> {
    let mut started = false;
    let mut out = String::new();
    for c in s.chars() {
        if c.is_ascii_digit() {
            started = true;
            out.push(c);
        } else if started {
            break;
        }
    }
    out.parse().ok()
}

/// (unlace warnstyle, DIV-39) Map a stored warning text (which carries its
/// `WARNING: ` / `WARNING (jumptable): ` prefix from `Funcdata::warning_prefix`)
/// to the terse `// slug` form.  Producer-tagged unlace warnings (`branchflip:`,
/// `taildup:`, ...) map by their stable prefix; upstream texts by their stable
/// stem; anything unrecognized keeps its full text behind a `warn:` marker so
/// no information is silently dropped.  Count-carrying header warnings
/// (`earlyreturn: hoisted 3 ...`) keep the count as an ` xN` suffix.
pub fn warning_slug(text: &str) -> String {
    let (body, jumptable) = if let Some(rest) = text.strip_prefix("WARNING (jumptable): ") {
        (rest, true)
    } else if let Some(rest) = text.strip_prefix("WARNING: ") {
        (rest, false)
    } else {
        (text, false)
    };
    // First integer in the body (the `{changes}` count of the P8 header warnings).
    let count: Option<u64> = first_integer(body);
    let xn = |slug: &str| -> String {
        match count {
            Some(n) if n > 1 => format!("{slug} x{n}"),
            _ => slug.to_string(),
        }
    };
    let slug =
        if body.starts_with("Subroutine does not return") || body.starts_with("Does not return") {
            "no-return".to_string()
        } else if body.starts_with("Treating indirect jump as call") {
            "jump-as-call".to_string()
        } else if body.starts_with("Treating indirect jump as return") {
            "jump-as-return".to_string()
        } else if body.starts_with("Could not inline here")
            || body.starts_with("No fallthrough prevents inlining here")
            || body.starts_with("Return address prevents inlining here")
        {
            "inline-failed".to_string()
        } else if body.starts_with("Read-only address") {
            "writes-rodata".to_string()
        } else if body.starts_with("branchflip:") {
            "branch-flip".to_string()
        } else if body.starts_with("tailcalljump:") {
            "tail-call".to_string()
        } else if body.starts_with("taildup:") {
            "return-dupe".to_string()
        } else if body.starts_with("crossjumprevert:") {
            "crossjump-dupe".to_string()
        } else if let Some(rest) = body.strip_prefix("int3pad:") {
            // The count is read from the text AFTER the tag: the tag itself carries a
            // digit, so the shared `count` above would report it as the pad length.
            match first_integer(rest) {
                Some(n) if n > 1 => format!("int3-pad x{n}"),
                _ => "int3-pad".to_string(),
            }
        } else if body.starts_with("outline:") {
            xn("outlined")
        } else if body.starts_with("returndup:") {
            xn("return-dupe")
        } else if body.starts_with("earlyreturn:") {
            xn("early-return")
        } else if body.starts_with("switchreturn:") {
            xn("switch-return")
        } else if body.starts_with("dedupitetail:") {
            xn("ite-dedupe")
        } else if body.starts_with("iteregion:") {
            xn("ternary")
        } else if body.starts_with("ifelseflatten:") {
            xn("else-flattened")
        } else if let Some(name) = body.strip_prefix("Inlined function: ") {
            format!("inlined: {name}")
        } else if body.starts_with("Function: ") && body.contains("replaced with injection") {
            "injected".to_string()
        } else if body.starts_with("Unable to use symbol") {
            "symbol-size-mismatch".to_string()
        } else {
            format!("warn: {body}")
        };
    if jumptable {
        format!("jt: {slug}")
    } else {
        slug
    }
}

/// C++ `PrintC::printCharHexEscape` (printc.cc:1580-1591).
///
/// Append `\x` followed by `val` in lowercase hex, zero-padded to 2/4/8 digits
/// by magnitude.  Transcribed including the `setfill('0')`/`setw` widths.
pub fn print_char_hex_escape(s: &mut String, val: int4) {
    use std::fmt::Write;
    if val < 256 {
        let _ = write!(s, "\\x{val:02x}");
    } else if val < 65536 {
        let _ = write!(s, "\\x{val:04x}");
    } else {
        let _ = write!(s, "\\x{val:08x}");
    }
}

/// C++ `PrintC::printUnicode` (printc.cc:1494-1538).
///
/// Emit a single (unicode) codepoint into a quoted-string/char context: special
/// C escapes for the small control characters, a generic `\x` escape for other
/// escape-needing codepoints, otherwise the raw UTF-8 bytes.  Transcribed
/// case-for-case from the C++ switch; the final non-escape branch is the C++
/// `StringManager::writeUtf8` (encoded here as a `char` push when the codepoint
/// is a valid scalar value, matching the UTF-8 byte emission).
pub fn print_unicode(s: &mut String, onechar: int4) {
    if unicode_needs_escape(onechar) {
        match onechar {
            0 => {
                s.push_str("\\0");
                return;
            }
            7 => {
                s.push_str("\\a");
                return;
            }
            8 => {
                s.push_str("\\b");
                return;
            }
            9 => {
                s.push_str("\\t");
                return;
            }
            10 => {
                s.push_str("\\n");
                return;
            }
            11 => {
                s.push_str("\\v");
                return;
            }
            12 => {
                s.push_str("\\f");
                return;
            }
            13 => {
                s.push_str("\\r");
                return;
            }
            92 => {
                s.push_str("\\\\");
                return;
            }
            0x22 => {
                // '"'
                s.push_str("\\\"");
                return;
            }
            0x27 => {
                // '\''
                s.push_str("\\\'");
                return;
            }
            _ => {}
        }
        // Generic escape code (C++ printCharHexEscape).
        print_char_hex_escape(s, onechar);
        return;
    }
    // C++ `StringManager::writeUtf8(s, onechar)` — emit the UTF-8 bytes of the
    // codepoint.  `char::from_u32` yields the same bytes Rust's UTF-8 encoder
    // and the C++ writer produce for any valid scalar value.
    if let Some(c) = char::from_u32(onechar as u32) {
        s.push(c);
    }
}

/// One codepoint of a double-quoted C string body: a single quote needs no escape there.
pub fn print_unicode_in_string(s: &mut String, onechar: int4) {
    if onechar == 0x27 {
        s.push('\'');
    } else {
        print_unicode(s, onechar);
    }
}

/// The Rust spelling of one codepoint inside a double-quoted string body.
///
/// (unlace outlang) Rust's escape set is a strict subset of C's in the ways that
/// matter here: it has no `\a`/`\b`/`\v`/`\f`, so those become `\xNN`; and a
/// single quote inside a `"..."` must be BARE, because `\'` is only an escape in
/// a character literal and `"PCRE\'s"` does not tokenize. Everything else --
/// `\0`, `\t`, `\n`, `\r`, `\\`, `\"`, printable ASCII, and any valid scalar
/// value emitted as UTF-8 -- spells identically in both languages.
pub fn print_unicode_rust(s: &mut String, onechar: int4) {
    if unicode_needs_escape(onechar) {
        match onechar {
            0 => s.push_str("\\0"),
            9 => s.push_str("\\t"),
            10 => s.push_str("\\n"),
            13 => s.push_str("\\r"),
            92 => s.push_str("\\\\"),
            0x22 => s.push_str("\\\""),
            // A bare `'` -- escaping it is what breaks the tokenizer.
            0x27 => s.push('\''),
            _ => print_char_hex_escape(s, onechar),
        }
        return;
    }
    if let Some(c) = char::from_u32(onechar as u32) {
        s.push(c);
    }
}

/// The string body of C++ `PrintC::push_integer` (printc.cc:1407-1434) — the
/// byte-for-byte token characters for an integer constant, given the
/// already-resolved sign decision and display format.
///
/// Mirrors the C++ `ostringstream t` construction exactly: optional leading
/// `-`, then the format-specific digits (`0x`+lower-hex / decimal / `0`+octal /
/// quoted char / `0b`+binary), then the optional `U` and size suffix.
///
/// `print_negsign`/`val`/`display_fmt`/`sz` are the values the C++ computes
/// before line 1407 (the sign-stripping at printc.cc:1381-1391 and the
/// hex/dec decision at printc.cc:1393-1405); [`resolve_integer_format`] computes
/// them so callers can reproduce the full path.  `force_unsigned`/`force_sized`
/// are the `vn->isUnsignedPrint()`/`isLongPrint()` flags (printc.cc:1378-1379);
/// `wide_char_prefix` is `doEmitWideCharPrefix()` (printc.cc:1417);
/// `size_suffix` is the `sizeSuffix` member (printc.cc:1433).
#[allow(clippy::too_many_arguments)]
pub fn format_integer_token(
    print_negsign: bool,
    val: uintb,
    display_fmt: u32,
    sz: int4,
    force_unsigned: bool,
    force_sized: bool,
    wide_char_prefix: bool,
    size_suffix: &str,
) -> String {
    use std::fmt::Write;
    let mut t = String::new();
    if print_negsign {
        t.push('-');
    }
    if display_fmt == display_format::FORCE_HEX {
        let _ = write!(t, "0x{val:x}");
    } else if display_fmt == display_format::FORCE_DEC {
        let _ = write!(t, "{val}");
    } else if display_fmt == display_format::FORCE_OCT {
        let _ = write!(t, "0{val:o}");
    } else if display_fmt == display_format::FORCE_CHAR {
        if wide_char_prefix && sz > 1 {
            t.push('L'); // wide character marker
        }
        t.push('\''); // char surrounded with single quotes
        if sz == 1 && val >= 0x80 {
            print_char_hex_escape(&mut t, val as int4);
        } else {
            print_unicode(&mut t, val as int4);
        }
        t.push('\'');
    } else {
        // Must be Symbol::force_bin
        t.push_str("0b");
        format_binary(&mut t, val);
    }
    if force_unsigned {
        t.push('U'); // force unsignedness explicitly
    }
    if force_sized {
        t.push_str(size_suffix);
    }
    t
}

/// (unlace) The sign of the `signed char` or `unsigned char` operand the byte
/// constant `vn` is compared with by `op`, when that operand prints without a
/// cast: C promotes it by that sign, so the constant must be its value.
pub(super) fn compared_byte_sign(fd: &Funcdata, op: OpId, vn: VarnodeId) -> Option<bool> {
    use crate::dtype::type_metatype::TYPE_INT;
    let o = fd.obank().get(op)?;
    if !matches!(
        o.code(),
        OpCode::CPUI_INT_EQUAL
            | OpCode::CPUI_INT_NOTEQUAL
            | OpCode::CPUI_INT_LESS
            | OpCode::CPUI_INT_LESSEQUAL
            | OpCode::CPUI_INT_SLESS
            | OpCode::CPUI_INT_SLESSEQUAL
    ) {
        return None;
    }
    let other = if o.get_in(0)? == vn {
        o.get_in(1)?
    } else {
        o.get_in(0)?
    };
    let v = fd.vbank().get(other)?;
    if v.get_def()
        .and_then(|d| fd.obank().get(d))
        .is_some_and(|d| d.code() == OpCode::CPUI_CAST)
    {
        return None;
    }
    let t = v.get_type_read_facing(op);
    (t.get_size() == 1 && t.is_char_print() && !t.is_core_type())
        .then(|| t.get_metatype() == TYPE_INT)
}

/// Whether `val` at `sz` bytes has a Rust byte-literal spelling.
///
/// Rust byte literals are one byte, and `format_integer_token`'s escape set
/// (`print_unicode`) emits `\n`/`\t`/`\r`/`\0`/`\\`/`\'` plus printable ASCII --
/// all of which a `b'...'` accepts. Anything wider, or a byte outside that set,
/// has no byte-literal form and is rendered as the integer instead.
pub(super) fn rust_byte_literal_spellable(val: uintb, sz: int4) -> bool {
    if sz != 1 {
        return false;
    }
    matches!(val, 0x20..=0x7e) || matches!(val, 0 | 0x09 | 0x0a | 0x0d)
}

/// The `print_negsign`/`val`/`display_fmt` resolution C++ `push_integer`
/// performs before formatting (printc.cc:1381-1405).
///
/// `sign` is the signedness request; `force_hex`/`force_dec` are the active
/// `mods` bits.  Returns `(print_negsign, val_to_print, display_fmt)`.  The
/// caller still owns the `vn`/`Symbol`-driven `displayFormat` override and the
/// equate short-circuit (printc.cc:1368-1380), which need the W7 Varnode/Symbol
/// graph; `display_fmt_in` is whatever override they resolved (`0` for none).
pub fn resolve_integer_format(
    mut val: uintb,
    sz: int4,
    sign: bool,
    display_fmt_in: u32,
    force_hex: bool,
    force_dec: bool,
) -> (bool, uintb, u32) {
    let print_negsign;
    // Sign handling (printc.cc:1381-1391).
    if sign && display_fmt_in != display_format::FORCE_CHAR {
        let mask = calc_mask(sz);
        if sz > 0 {
            val &= mask;
        }
        let flip = val ^ mask;
        print_negsign = flip < val;
        if print_negsign {
            // C++ `val = flip+1;` — two's-complement magnitude.
            val = flip.wrapping_add(1);
        }
    } else {
        print_negsign = false;
    }

    // Hex/dec decision (printc.cc:1393-1405).
    let display_fmt = if display_fmt_in != display_format::NONE {
        display_fmt_in // forced by the Symbol or data-type
    } else if force_hex {
        display_format::FORCE_HEX
    } else if val <= 10 || force_dec {
        display_format::FORCE_DEC
    } else if most_natural_base(val) == 16 {
        display_format::FORCE_HEX
    } else {
        display_format::FORCE_DEC
    };
    (print_negsign, val, display_fmt)
}

/// The classification a host float resolves to (C++ `FloatFormat::floatclass`),
/// supplied by the caller of [`format_float_token`] from the
/// `glb->translate->getFloatFormat(sz)` decode plus
/// [`unlace_num::float::FloatFormat::get_host_float`] (W6, unlace-num).
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum FloatClass {
    /// A normal finite value (the `printDecimal` path).
    Normal,
    /// Positive or negative infinity.
    Infinity,
    /// Not-a-number.
    Nan,
    /// No `FloatFormat` for the size (`FLOAT_UNKNOWN`).
    Unknown,
}

/// The string body of C++ `PrintC::push_float` (printc.cc:1449-1492) — the
/// byte-for-byte token characters for a floating-point constant.
///
/// The `FloatFormat` decode (`getHostFloat`/`extractSign`/`printDecimal`) is a
/// W6 boundary (`FloatFormat`, `float.cc`, a separate item).  In particular
/// `printDecimal` is the shortest-round-trip precision loop at float.cc:446-479
/// — **not** a fixed-precision `%g` — so it must come from `FloatFormat`, not be
/// reinvented here.  This function therefore takes the *already-decoded*
/// results: the [`FloatClass`], the sign, and (for [`FloatClass::Normal`]) the
/// [`unlace_num::float::FloatFormat::print_decimal`]`(floatval, force_scinote)`
/// string the caller obtained from `FloatFormat`.  It reproduces only the parts
/// that live in `push_float`
/// itself: the `INFINITY`/`NAN`/`FLOAT_UNKNOWN` names (printc.cc:1454-1469) and
/// the `.0` suffix forced onto a non-scientific decimal that doesn't already
/// look like a float (printc.cc:1477-1487).
///
/// `force_scinote` is the active `mods & force_scinote` bit (printc.cc:1472);
/// when set the C++ skips the `.0` fix-up (the scientific form always has an
/// `e`), so `printed_decimal` is returned verbatim.
pub fn format_float_token(
    class: FloatClass,
    sign: bool,
    printed_decimal: &str,
    force_scinote: bool,
) -> String {
    match class {
        FloatClass::Unknown => "FLOAT_UNKNOWN".to_string(),
        FloatClass::Infinity => {
            if sign {
                "-INFINITY".to_string()
            } else {
                "INFINITY".to_string()
            }
        }
        FloatClass::Nan => {
            if sign {
                "-NAN".to_string()
            } else {
                "NAN".to_string()
            }
        }
        FloatClass::Normal => {
            if force_scinote {
                // C++ `token = format->printDecimal(floatval, true)` — used as is.
                printed_decimal.to_string()
            } else {
                let mut token = printed_decimal.to_string();
                // printc.cc:1477-1487: force the token to look like a float.
                let looks_like_float = token.bytes().any(|c| c == b'.' || c == b'e');
                if !looks_like_float {
                    token.push_str(".0");
                }
                token
            }
        }
    }
}

/// C++ `PrintC::genericFunctionName` (printc.cc:3516-3526), the non-unlace
/// (`func_<addr>`) branch.
///
/// The unlace angr-style `sub_<addr>` branch (printc.cc:3519-3520) is gated on
/// `unlaceAngrNaming(glb)`, an Architecture query the caller owns; pass the
/// already-decided flag.  When `angr_naming` is true the caller substitutes
/// `unlaceFunctionName(addr)` (the `unlace_naming` module); this function produces
/// the plain `func_` + raw address form.
pub fn generic_function_name(addr: &Address) -> UnlaceResult<String> {
    let mut s = String::from("func_");
    addr.print_raw(&mut s)?;
    Ok(s)
}

/// C++ `PrintC::genericTypeName` (printc.cc:3532-3558).
///
/// A generic name for an unnamed data-type: an `unk*` prefix by metatype with
/// the size appended, or a `BADSPACEBASE`/`BADTYPE` sentinel.  Transcribed
/// case-for-case.
pub fn generic_type_name(metatype: type_metatype, size: int4) -> String {
    use std::fmt::Write;
    use type_metatype::*;
    let mut s = String::new();
    let prefix = match metatype {
        TYPE_INT => "unkint",
        TYPE_UINT => "unkuint",
        TYPE_UNKNOWN => "unkbyte",
        TYPE_SPACEBASE => return "BADSPACEBASE".to_string(),
        TYPE_FLOAT => "unkfloat",
        _ => return "BADTYPE".to_string(),
    };
    s.push_str(prefix);
    let _ = write!(s, "{size}");
    s
}
