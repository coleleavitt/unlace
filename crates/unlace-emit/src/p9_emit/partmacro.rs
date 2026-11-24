//! (unlace `partmacro`) Print a bit range of a value as the part macro that names it:
//! `LOBYTE(x)`, `BYTE1(x)`, `LOWORD(x)`, `HIWORD(x)`, `LODWORD(x)`, `HIDWORD(x)`.
//!
//! A SUBPIECE of a 2-, 4- or 8-byte integer into a 1-, 2- or 4-byte integer at an aligned
//! byte offset is a part of that value, and so is the truncation of a right shift by a whole
//! number of bytes (`(uint1)(x >> 8)`). Nested parts fold into the most direct one: the
//! SUBPIECE of a SUBPIECE reads a byte of the outer value, so `LOBYTE(HIWORD(x))` is `BYTE2(x)`.
//! A part is named only when it lies inside the value it is read from after folding, so an
//! arithmetic shift never prints a sign fill as a part. C output only. The macros are spelled
//! as calls; `prelude` defines them for a recompile header when the option is on.

use crate::architecture::Architecture;
use crate::context::{OpId, VarnodeId};
use crate::dtype::type_metatype;
use crate::funcdata::Funcdata;
use crate::funcdata_facing::FuncdataFacingExt;
use crate::printc::{PrintC, op_key, tokens};
use crate::printlanguage::{Atom, SyntaxHighlight, TagType};
use unlace_num::opcodes::OpCode;

/// The part macro naming `width` bytes at byte `offset` of a `src_size`-byte value, or
/// `None` when the part is unaligned, out of range, or has no macro.
pub fn macro_name(src_size: i32, offset: u64, width: i32) -> Option<String> {
    let width_u = u64::try_from(width).ok()?;
    let src_u = u64::try_from(src_size).ok()?;
    if !matches!(width, 1 | 2 | 4) || offset % width_u != 0 || offset.checked_add(width_u)? > src_u
    {
        return None;
    }
    let index = offset / width_u;
    let name = match (width, src_size, index) {
        (1, _, 0) => "LOBYTE".to_string(),
        (1, _, n) if n < 8 => format!("BYTE{n}"),
        (2, _, 0) => "LOWORD".to_string(),
        (2, 4, 1) => "HIWORD".to_string(),
        (2, _, n) if n < 4 => format!("WORD{n}"),
        (4, _, 0) => "LODWORD".to_string(),
        (4, 8, 1) => "HIDWORD".to_string(),
        _ => return None,
    };
    Some(name)
}

/// The constant value of `vn` when it is a constant.
fn constant(fd: &Funcdata, vn: VarnodeId) -> Option<u64> {
    let value = fd.vbank().get(vn)?;
    value.is_constant().then(|| value.get_offset())
}

/// The integer value a part of `op`'s output reads from, and the byte offset of the part
/// in it, with nested SUBPIECEs and whole-byte right shifts folded in. Returns the value and
/// the macro that names the part, or `None` when the value is not a plain integer.
pub fn recognize(fd: &Funcdata, op: OpId) -> Option<(VarnodeId, String)> {
    const MAX_STEPS: usize = 8;
    let operation = fd.obank().get(op)?;
    if operation.code() != OpCode::CPUI_SUBPIECE {
        return None;
    }
    let width = fd.vbank().get(operation.get_out()?)?.get_size();
    let mut offset = constant(fd, operation.get_in(1)?)?;
    let mut root = operation.get_in(0)?;
    for _ in 0..MAX_STEPS {
        let Some(def) = fd.vbank().get(root).and_then(|value| value.get_def()) else {
            break;
        };
        let Some(inner) = fd.obank().get(def) else {
            break;
        };
        let (source, step) = match inner.code() {
            OpCode::CPUI_SUBPIECE => {
                let Some(source) = inner.get_in(0) else {
                    break;
                };
                let Some(bytes) = inner.get_in(1).and_then(|vn| constant(fd, vn)) else {
                    break;
                };
                (source, bytes)
            }
            OpCode::CPUI_INT_RIGHT | OpCode::CPUI_INT_SRIGHT => {
                let Some(source) = inner.get_in(0) else {
                    break;
                };
                let Some(bits) = inner.get_in(1).and_then(|vn| constant(fd, vn)) else {
                    break;
                };
                if bits == 0 || bits % 8 != 0 {
                    break;
                }
                (source, bits / 8)
            }
            _ => break,
        };
        let Some(source_size) = fd.vbank().get(source).map(|value| value.get_size()) else {
            break;
        };
        let Some(next) = offset.checked_add(step) else {
            break;
        };
        if macro_name(source_size, next, width).is_none() {
            break;
        }
        offset = next;
        root = source;
    }
    let root_value = fd.vbank().get(root)?;
    if root_value.is_constant() || !matches!(root_value.get_size(), 2 | 4 | 8) {
        return None;
    }
    let root_size = root_value.get_size();
    let name = macro_name(root_size, offset, width)?;
    let scalar = |metatype| {
        matches!(
            metatype,
            type_metatype::TYPE_INT | type_metatype::TYPE_UINT | type_metatype::TYPE_UNKNOWN
        )
    };
    if !scalar(fd.vn_type_def_facing(root).get_metatype())
        || !scalar(fd.vn_type_def_facing(operation.get_out()?).get_metatype())
    {
        return None;
    }
    Some((root, name))
}

impl PrintC {
    /// Push the part macro for the SUBPIECE `op` (`LOBYTE(x)`, `BYTE1(x)`, ...) when
    /// `option partmacro` is on and the SUBPIECE is a part of a scalar integer.
    pub fn push_part_macro(&mut self, fd: &Funcdata, arch: &Architecture, op: OpId) -> bool {
        if self.out_lang != crate::lang::OutLang::C || !arch.unlace_options.get::<PartMacro>().0 {
            return false;
        }
        let Some((root, name)) = recognize(fd, op) else {
            return false;
        };
        self.push_op(&tokens::FUNCTION_CALL, Some(op_key(op)));
        self.push_atom(&Atom::with_op(
            name,
            TagType::OpToken,
            SyntaxHighlight::funcname_color,
            op_key(op),
        ));
        self.push_vn_ir(fd, arch, root, op);
        true
    }
}

/// The C definitions of the part macros `macro_name` can name, for the recompile prelude
/// of a `decompile-project` header. Each is guarded so a host header that already has it
/// keeps its own.
pub fn prelude(arch: &Architecture) -> String {
    if !arch.unlace_options.get::<PartMacro>().0 {
        return String::new();
    }
    const DEFINITIONS: [(&str, &str); 15] = [
        ("LOBYTE", "((unsigned char)(x))"),
        ("BYTE1", "((unsigned char)((x) >> 8))"),
        ("BYTE2", "((unsigned char)((x) >> 16))"),
        ("BYTE3", "((unsigned char)((x) >> 24))"),
        ("BYTE4", "((unsigned char)((x) >> 32))"),
        ("BYTE5", "((unsigned char)((x) >> 40))"),
        ("BYTE6", "((unsigned char)((x) >> 48))"),
        ("BYTE7", "((unsigned char)((x) >> 56))"),
        ("LOWORD", "((unsigned short)(x))"),
        ("WORD1", "((unsigned short)((x) >> 16))"),
        ("WORD2", "((unsigned short)((x) >> 32))"),
        ("WORD3", "((unsigned short)((x) >> 48))"),
        ("HIWORD", "((unsigned short)((x) >> 16))"),
        ("LODWORD", "((unsigned int)(x))"),
        ("HIDWORD", "((unsigned int)((x) >> 32))"),
    ];
    let mut out = String::from("/* unlace partmacro: part macros of an integer value */\n");
    for (name, body) in DEFINITIONS {
        out.push_str(&format!(
            "#ifndef {name}\n#define {name}(x) {body}\n#endif\n"
        ));
    }
    out.push('\n');
    out
}

crate::unlace_flag!(
    /// (unlace `partmacro`) Print a part of an integer value as the part macro that names it
    /// (LOBYTE, BYTE1, LOWORD, HIWORD, LODWORD, HIDWORD), folding nested parts.
    PartMacro,
    "partmacro",
    "IDA-style part macros for truncations and whole-byte shifts of integers",
    unset: false,
    shipped: false
);

#[cfg(test)]
mod tests {
    use super::macro_name;

    #[test]
    fn names_follow_the_part_macros() {
        assert_eq!(macro_name(4, 0, 1).as_deref(), Some("LOBYTE"));
        assert_eq!(macro_name(4, 1, 1).as_deref(), Some("BYTE1"));
        assert_eq!(macro_name(4, 0, 2).as_deref(), Some("LOWORD"));
        assert_eq!(macro_name(4, 2, 2).as_deref(), Some("HIWORD"));
        assert_eq!(macro_name(8, 0, 4).as_deref(), Some("LODWORD"));
        assert_eq!(macro_name(8, 4, 4).as_deref(), Some("HIDWORD"));
        assert_eq!(macro_name(8, 2, 2).as_deref(), Some("WORD1"));
        assert_eq!(macro_name(8, 7, 1).as_deref(), Some("BYTE7"));
    }

    #[test]
    fn unaligned_or_out_of_range_parts_have_no_macro() {
        assert_eq!(macro_name(4, 1, 2), None);
        assert_eq!(macro_name(4, 2, 4), None);
        assert_eq!(macro_name(4, 4, 1), None);
        assert_eq!(macro_name(4, 0, 8), None);
    }
}
