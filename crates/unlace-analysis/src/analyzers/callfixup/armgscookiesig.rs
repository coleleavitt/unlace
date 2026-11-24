//! (unlace) Recognize the Windows on ARM `/GS` helpers `__security_push_cookie` and
//! `__security_pop_cookie` in a stripped ARM PE by their bytes, so the
//! `security_push_cookie`/`security_pop_cookie` call-fixups of `ARM_win.cspec` reach them.
//!
//! MSVC brackets a protected Thumb-2 function with `bl __security_push_cookie` at entry and
//! `bl` or `b.w __security_pop_cookie` at exit. The push helper allocates a word below its
//! caller's stack pointer, stores the scrambled cookie there and returns with `sp` four bytes
//! lower; the pop helper checks the word and releases it. Read as ordinary calls, every
//! stack reference of the caller after the push is four bytes off: its first stack argument
//! is read as its second. The fixups model the stack effect, which needs the helper's name,
//! and a stripped image names nothing.
//!
//! Both helpers are fixed CRT routines; the only varying operands are the `movw`/`movt`
//! immediates of `__security_cookie`'s address, which are wildcarded (the masks are IDA
//! 9.5 `arm.so` `sub_26770`'s):
//!
//! | name | instructions |
//! |---|---|
//! | `__security_push_cookie` | `sub sp,#4; movw r12,#lo; movt r12,#hi; ldr.w r12,[r12]; sub.w r12,sp,r12; str.w r12,[sp]; bx lr` |
//! | `__security_pop_cookie` | `movw r12,#lo; movt r12,#hi; ldr r3,[sp]; ldr.w r12,[r12]; sub.w r3,sp,r3; cmp r3,r12; bne +2; add sp,#4; bx lr` |

use crate::pass::{AnalysisOutput, CallFixupFact, FidMatch, SymFact, SymKind};

/// `(name, bytes, mask)`: a byte matches where `code & !mask == bytes`.
const HELPERS: [(&str, &[u8], &[u8]); 2] = [
    (
        "__security_push_cookie",
        &[
            0x81, 0xb0, 0x40, 0xf2, 0x00, 0x0c, 0xc0, 0xf2, 0x00, 0x0c, 0xdc, 0xf8, 0x00, 0xc0,
            0xad, 0xeb, 0x0c, 0x0c, 0xcd, 0xf8, 0x00, 0xc0, 0x70, 0x47,
        ],
        &[
            0x00, 0x00, 0x0f, 0x04, 0xff, 0x70, 0x0f, 0x04, 0xff, 0x70, 0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        ],
    ),
    (
        "__security_pop_cookie",
        &[
            0x40, 0xf2, 0x00, 0x0c, 0xc0, 0xf2, 0x00, 0x0c, 0x00, 0x9b, 0xdc, 0xf8, 0x00, 0xc0,
            0xad, 0xeb, 0x03, 0x03, 0x63, 0x45, 0x01, 0xd1, 0x01, 0xb0, 0x70, 0x47,
        ],
        &[
            0x0f, 0x04, 0xff, 0x70, 0x0f, 0x04, 0xff, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        ],
    ),
];

/// Every helper entry in `code` (little-endian Thumb mapped at the halfword-aligned
/// `base`), as `(vma, name)`.
pub fn scan_bytes(code: &[u8], base: u64) -> Vec<(u64, &'static str)> {
    let mut hits = Vec::new();
    for (name, bytes, mask) in HELPERS {
        let mut at = 0;
        while at + bytes.len() <= code.len() {
            let window = &code[at..at + bytes.len()];
            if window
                .iter()
                .zip(bytes.iter().zip(mask))
                .all(|(c, (b, m))| c & !m == *b)
            {
                hits.push((base + at as u64, name));
            }
            at += 2;
        }
    }
    hits.sort_unstable();
    hits
}

/// Scan the executable sections of a little-endian ARM PE and report each helper entry.
pub fn scan(file: &object::File, out: &mut AnalysisOutput) {
    use object::Object;
    if file.architecture() != object::Architecture::Arm
        || file.format() != object::BinaryFormat::Pe
        || !file.is_little_endian()
    {
        return;
    }
    let sections = crate::entry::executable_sections(file);
    let hits = sections
        .iter()
        .filter(|(start, _, _)| start % 2 == 0)
        .flat_map(|(start, _, code)| scan_bytes(code, *start));
    for (addr, name) in hits {
        out.symbols.push(SymFact {
            addr,
            name: name.to_string(),
            kind: SymKind::Function,
        });
        out.fid_names.push(FidMatch {
            addr,
            name: name.to_string(),
            by_signature: false,
        });
        if !out.call_fixups.iter().any(|f| f.func_name == name) {
            out.call_fixups.push(CallFixupFact {
                func_name: name.to_string(),
                addr: None,
            });
        }
    }
}

#[cfg(test)]
mod tests;
