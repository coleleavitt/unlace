//! c_printer: literals.

use super::*;

#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub(super) enum ConstContext {
    Signed,
    Bitwise,
    Pointer,
    Unsigned,
    /// Char-typed context. Numeric constants in this context render as
    /// C char literals (e.g. `'A'`, `'\n'`, `'\xff'`) instead of integers
    /// when the value lies in a representable byte range. Falls back to
    /// `Signed`/`Unsigned` rendering otherwise.
    Char {
        unsigned: bool,
    },
    /// Float-typed context. The constant's `size` field tells us whether the
    /// raw bit-pattern is `f32` (4) or `f64` (8); we re-interpret the bytes
    /// and emit either an IDA macro literal (`NAN`, `INFINITY`, `-INFINITY`)
    /// or the shortest round-tripping decimal form, matching IDA's
    /// `sub_11C210` float-printer behaviour.
    Float,
}

pub(super) fn const_context_for_op(op: IrOp) -> ConstContext {
    match op {
        IrOp::IntAnd
        | IrOp::IntOr
        | IrOp::IntXor
        | IrOp::IntLeft
        | IrOp::IntRight
        | IrOp::IntSright => ConstContext::Bitwise,

        // Float operations consume float-typed inputs. A constant Varnode
        // appearing as an operand of any of these ops is the bit-pattern of
        // an IEEE-754 value (f32 / f64) and must be rendered as a float
        // literal rather than an integer constant.
        //
        // Note: `FloatInt2float` takes an *integer* input (so it stays
        // Signed); `FloatFloat2int` and `FloatFloat2float` take *float*
        // inputs (so they go Float).
        IrOp::FloatAdd
        | IrOp::FloatSub
        | IrOp::FloatMult
        | IrOp::FloatDiv
        | IrOp::FloatNeg
        | IrOp::FloatAbs
        | IrOp::FloatSqrt
        | IrOp::FloatCeil
        | IrOp::FloatFloor
        | IrOp::FloatRound
        | IrOp::FloatTrunc
        | IrOp::FloatNan
        | IrOp::FloatFloat2float
        | IrOp::FloatFloat2int
        | IrOp::FloatEqual
        | IrOp::FloatNotequal
        | IrOp::FloatLess
        | IrOp::FloatLessequal => ConstContext::Float,

        _ => ConstContext::Signed,
    }
}

#[cfg(test)]
pub(super) fn format_constant(value: u64, size: u8) -> String {
    format_constant_ctx(value, size, ConstContext::Signed)
}

/// Render an integer constant using a radix heuristic that's friendlier
/// to human readers than the default `0x…` form (t208).
///
/// The rules, applied **in order** — the first that matches wins:
///
/// 1. **Printable ASCII character** (0x20..=0x7E, no escape needed) →
///    `'x'` literal. Excludes `'\\'` and `'\''` because those would
///    require a C escape.
/// 2. **Byte-sized literal** (`width == 1` and `value < 256`) →
///    decimal. Bytes are almost always counts, masks, or character
///    codes; decimal reads more naturally than `0xff`.
/// 3. **Power of two with bit position >= 8** → `1 << N`. Large
///    single-bit constants are nearly always flag masks; surfacing the
///    bit index makes the intent obvious.
/// 4. **0 / 1 / -1** → decimal. These are universal sentinels and
///    deserve their canonical signed form even when other rules
///    would otherwise route them to hex.
/// 5. **Small magnitude** (`value < 16`) → decimal. Tiny indices,
///    loop counters, and field offsets read better as `7` than `0x7`.
/// 6. **Everything else** → `0x…` hexadecimal, the existing default.
///
/// `ctx` is currently unused but is retained in the signature so a
/// future revision can consult per-function display preferences
/// (e.g. enum bindings) without breaking call sites.
#[allow(dead_code)]
pub(super) fn format_int_literal(value: u64, width: u8, _ctx: &PrintCtx) -> String {
    // 1. Printable ASCII character — emit a C char literal. We exclude
    //    backslash and single-quote because rendering those requires an
    //    escape sequence, and the spec says "no escape needed".
    if (0x20..=0x7E).contains(&value) && value != b'\\' as u64 && value != b'\'' as u64 {
        return format!("'{}'", value as u8 as char);
    }

    // 2. Byte-sized literal — decimal is more readable than hex for
    //    the [0, 255] range when the user knows the slot is a byte.
    if width == 1 && value < 256 {
        return format!("{value}");
    }

    // 3. Power of two with bit position >= 8 — render as `1 << N`.
    //    `is_power_of_two()` is false for 0, and `trailing_zeros` on a
    //    power of two equals the bit index, so the comparison is exact.
    if value.is_power_of_two() && value.trailing_zeros() >= 8 {
        return format!("1 << {}", value.trailing_zeros());
    }

    // 4. 0 / 1 / -1 sentinels — decimal, with -1 rendered against the
    //    width's unsigned wrap-around (0xFF for u8, 0xFFFF for u16,
    //    etc.). For widths outside the standard set, fall back to
    //    `u64::MAX`.
    if value == 0 || value == 1 {
        return format!("{value}");
    }
    let neg_one = match width {
        1 => 0xFFu64,
        2 => 0xFFFFu64,
        4 => 0xFFFF_FFFFu64,
        8 => u64::MAX,
        _ => u64::MAX,
    };
    if value == neg_one {
        return "-1".to_string();
    }

    // 5. Small magnitude — `0..16` in decimal.
    if value < 16 {
        return format!("{value}");
    }

    // 6. Default — hex.
    format!("0x{value:x}")
}

pub(super) fn format_constant_ctx(value: u64, size: u8, context: ConstContext) -> String {
    if context == ConstContext::Pointer && value == 0 {
        return "nullptr".to_string();
    }

    if let ConstContext::Char { unsigned } = context {
        if size == 1
            && let Some(lit) = format_char_literal(value, unsigned)
        {
            return lit;
        }
        // Fall through to the appropriate numeric rendering when the value
        // can't be represented as a char literal (oversized, out-of-range).
        let fallback = if unsigned {
            ConstContext::Unsigned
        } else {
            ConstContext::Signed
        };
        return format_constant_ctx(value, size, fallback);
    }

    if context == ConstContext::Float {
        // Constants that flow into float ops always have size 4 (f32) or 8
        // (f64) — long-double constants don't survive packing into a
        // `Varnode::offset: u64`, so we never see them here. For unexpected
        // sizes we fall back to the Signed integer rendering rather than
        // crashing or printing a bogus literal.
        if size == 4 || size == 8 {
            let bytes = value.to_le_bytes();
            return format_float_literal(&bytes[..size as usize], size as usize);
        }
        return format_constant_ctx(value, size, ConstContext::Signed);
    }

    let msb_threshold = match size {
        1 => 0x80u64,
        2 => 0x8000,
        4 => 0x8000_0000,
        8 => 0x8000_0000_0000_0000,
        _ => u64::MAX,
    };

    let has_msb = size <= 8 && value >= msb_threshold;

    if has_msb && context == ConstContext::Signed {
        let signed = sign_extend(value, size);
        let abs_val = signed.unsigned_abs();
        let should_negate = size >= 4 || (size == 2 && abs_val <= 128);
        if should_negate {
            return if size == 8 {
                format!("{}LL", signed)
            } else {
                format!("{}", signed)
            };
        }
    }

    if has_msb {
        return format!("0x{:x}ULL", value);
    }

    if context == ConstContext::Unsigned {
        return if value < 10 {
            if size == 8 {
                format!("{}ULL", value)
            } else if size == 4 {
                format!("{}u", value)
            } else {
                format!("{}", value)
            }
        } else if size == 8 {
            format!("0x{:x}ULL", value)
        } else if size == 4 {
            format!("0x{:x}u", value)
        } else {
            format!("0x{:x}", value)
        };
    }

    if value < 10 {
        if size == 8 {
            format!("{}LL", value)
        } else {
            format!("{}", value)
        }
    } else if size == 8 {
        format!("0x{:x}LL", value)
    } else {
        format!("0x{:x}", value)
    }
}

pub(super) fn sign_extend(value: u64, size: u8) -> i64 {
    match size {
        1 => value as u8 as i8 as i64,
        2 => value as u16 as i16 as i64,
        4 => value as u32 as i32 as i64,
        8 => value as i64,
        _ => value as i64,
    }
}

/// Render a single-byte numeric constant as a C char literal.
///
/// Returns `None` when the value lies outside the byte range that maps to a
/// reasonable char literal (`> 0xFF` for unsigned, `> 0x7F` for signed) so
/// the caller can fall back to numeric rendering.
///
/// Escape sequences follow C99 §6.4.4.4:
/// - `0x00` → `'\0'`
/// - `0x07` → `'\a'`, `0x08` → `'\b'`, `0x09` → `'\t'`, `0x0A` → `'\n'`
/// - `0x0B` → `'\v'`, `0x0C` → `'\f'`, `0x0D` → `'\r'`
/// - `0x27` → `'\''`, `0x5C` → `'\\'`
/// - Other printable ASCII (`0x20..=0x7E`) → as-is
/// - Otherwise → `'\xHH'` hex escape
pub(super) fn format_char_literal(value: u64, unsigned: bool) -> Option<String> {
    let max = if unsigned { 0xFFu64 } else { 0x7Fu64 };
    if value > max {
        return None;
    }
    let byte = value as u8;
    let body = match byte {
        0x00 => "\\0".to_string(),
        0x07 => "\\a".to_string(),
        0x08 => "\\b".to_string(),
        0x09 => "\\t".to_string(),
        0x0A => "\\n".to_string(),
        0x0B => "\\v".to_string(),
        0x0C => "\\f".to_string(),
        0x0D => "\\r".to_string(),
        0x27 => "\\'".to_string(),
        0x5C => "\\\\".to_string(),
        0x20..=0x7E => (byte as char).to_string(),
        _ => format!("\\x{:02x}", byte),
    };
    Some(format!("'{}'", body))
}

/// Render a raw IEEE-754 bit-pattern as a C float literal.
///
/// Mirrors IDA's `sub_11C210` float-printer:
/// 1. **Size → C type.**  `≤4` bytes → `float`, `≤8` → `double`, `>8` →
///    `long double`. The IR can only store 4- or 8-byte float constants in a
///    `Varnode::offset: u64`, so the long-double branch only fires for the
///    raw-bytes API used by tests / future passes that hand-roll a slice.
/// 2. **Classify by exponent / mantissa.**
///     * all exponent bits set + non-zero mantissa → `NAN`
///     * all exponent bits set + zero mantissa + sign 0 → `INFINITY`
///     * all exponent bits set + zero mantissa + sign 1 → `-INFINITY`
///     * otherwise → format as the shortest round-tripping decimal
///       (Rust's `Display` impl is Grisu / Ryu and gives this for free).
/// 3. **Suffix.**  `f` for `f32`, no suffix for `f64`, `L` for long double.
///
/// Returns the resulting C literal string. For unsupported sizes we emit a
/// hex-byte fallback so the output remains compilable.
pub(crate) fn format_float_literal(bytes: &[u8], size: usize) -> String {
    debug_assert_eq!(bytes.len(), size, "byte slice length must equal `size`");

    match size {
        sz if sz <= 4 => {
            // Pad / truncate to exactly 4 bytes, little-endian.
            let mut buf = [0u8; 4];
            let n = sz.min(4);
            buf[..n].copy_from_slice(&bytes[..n]);
            let raw = u32::from_le_bytes(buf);
            // IEEE-754 binary32: sign 1 | exp 8 | mantissa 23.
            let exp = (raw >> 23) & 0xFF;
            let mantissa = raw & 0x007F_FFFF;
            let sign_neg = (raw >> 31) & 1 == 1;
            if exp == 0xFF {
                if mantissa != 0 {
                    return "NAN".to_string();
                }
                return if sign_neg {
                    "-INFINITY".to_string()
                } else {
                    "INFINITY".to_string()
                };
            }
            let v = f32::from_bits(raw);
            // Rust's `{}` for f32 emits the shortest round-trip decimal. We
            // append `.0` if the representation has no `.` / `e` so the
            // result parses as a C float literal rather than an integer.
            let mut s = format!("{}", v);
            if !s.contains('.') && !s.contains('e') && !s.contains('E') {
                s.push_str(".0");
            }
            s.push('f');
            s
        }
        sz if sz <= 8 => {
            let mut buf = [0u8; 8];
            let n = sz.min(8);
            buf[..n].copy_from_slice(&bytes[..n]);
            let raw = u64::from_le_bytes(buf);
            // IEEE-754 binary64: sign 1 | exp 11 | mantissa 52.
            let exp = (raw >> 52) & 0x7FF;
            let mantissa = raw & 0x000F_FFFF_FFFF_FFFF;
            let sign_neg = (raw >> 63) & 1 == 1;
            if exp == 0x7FF {
                if mantissa != 0 {
                    return "NAN".to_string();
                }
                return if sign_neg {
                    "-INFINITY".to_string()
                } else {
                    "INFINITY".to_string()
                };
            }
            let v = f64::from_bits(raw);
            let mut s = format!("{}", v);
            if !s.contains('.') && !s.contains('e') && !s.contains('E') {
                s.push_str(".0");
            }
            s
        }
        _ => {
            // Long double / 80-bit / 128-bit. We don't have a portable parse
            // for these in stable Rust; emit IDA's hex-bytes fallback with a
            // descriptive comment so the output is at least round-trippable
            // by hand.
            let mut s = String::from("/* long double 0x");
            for b in bytes.iter().rev() {
                s.push_str(&format!("{:02x}", b));
            }
            s.push_str(" */ 0.0L");
            s
        }
    }
}

// ---------------------------------------------------------------------------
// Helpers
// ---------------------------------------------------------------------------

/// Render a string literal body with C escape sequences.
///
/// Mirrors the escape table used by IDA's `str2user` (called from
/// `sub_265AA0` for `cot_str` rendering): the standard C single-character
/// escapes (`\\`, `\"`, `\n`, `\r`, `\t`, `\v`, `\f`, `\a`, `\b`, `\0`)
/// followed by `\xHH` for any other non-printable byte. Multi-byte UTF-8
/// codepoints are emitted as a sequence of `\xHH` for each underlying byte
/// so the output is bytewise unambiguous.
///
/// Note: the single-quote (`'`) does not need escaping inside a double-
/// quoted string literal, so we leave it as-is — matching both IDA and the
/// C standard.
pub(super) fn escape_c_string(s: &str) -> String {
    let mut out = String::with_capacity(s.len());
    for ch in s.chars() {
        match ch {
            '\\' => out.push_str("\\\\"),
            '"' => out.push_str("\\\""),
            '\n' => out.push_str("\\n"),
            '\r' => out.push_str("\\r"),
            '\t' => out.push_str("\\t"),
            '\x0b' => out.push_str("\\v"), // vertical tab
            '\x0c' => out.push_str("\\f"), // form feed
            '\x07' => out.push_str("\\a"), // bell
            '\x08' => out.push_str("\\b"), // backspace
            '\0' => out.push_str("\\0"),
            c if c.is_ascii_graphic() || c == ' ' => out.push(c),
            c => {
                for b in c.to_string().bytes() {
                    let _ = write!(out, "\\x{:02x}", b);
                }
            }
        }
    }
    out
}
