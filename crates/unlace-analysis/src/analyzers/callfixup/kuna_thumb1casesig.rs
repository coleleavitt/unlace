//! (kuna) Recognize libgcc's Thumb-1 switch helpers in a stripped ARM image by
//! their instructions, so the `switch*_r0` call-fixups of the ARM cspecs reach
//! them.
//!
//! gcc compiles a Thumb-1 switch (`-mthumb` on ARMv6-M, or `-Os`) as `bl
//! __gnu_thumb1_case_<kind>` followed by the case table; the helper reads the
//! entry for the index in `r0` and returns into the case. The fixups that model
//! this are installed by name, and a stripped image names nothing: the call
//! then reads as an ordinary call that returns into the table, and every case
//! body is lost.
//!
//! The helpers are fixed hand-written routines (`libgcc/config/arm/lib1funcs.S`,
//! unchanged since gcc 4.x), so each is recognized by its complete instruction
//! stream at a halfword boundary. A hit is reported as a function symbol under
//! the libgcc name, as a rename of its `sub_` name, and as a [`CallFixupFact`].
//!
//! | name | instructions |
//! |---|---|
//! | `__gnu_thumb1_case_uqi`, `_sqi` | `push {r1}; mov r1,lr; lsrs r1,#1; lsls r1,#1; ldrb`/`ldrsb r1,[r1,r0]; lsls r1,#1; add lr,r1; pop {r1}; bx lr` |
//! | `__gnu_thumb1_case_uhi`, `_shi` | `push {r0,r1}; mov r1,lr; lsrs r1,#1; lsls r0,#1; lsls r1,#1; ldrh`/`ldrsh r1,[r1,r0]; lsls r1,#1; add lr,r1; pop {r0,r1}; bx lr` |
//! | `__gnu_thumb1_case_si` | `push {r0,r1}; mov r1,lr; adds r1,#2; lsrs r1,#2; lsls r0,#2; lsls r1,#2; ldr r0,[r1,r0]; adds r0,r1; mov lr,r0; pop {r0,r1}; mov pc,lr` |

use crate::pass::{AnalysisOutput, CallFixupFact, FidMatch, SymFact, SymKind};

/// Each helper's Thumb halfwords, in instruction order.
const HELPERS: [(&str, &[u16]); 5] = [
    (
        "__gnu_thumb1_case_uqi",
        &[
            0xb402, 0x4671, 0x0849, 0x0049, 0x5c09, 0x0049, 0x448e, 0xbc02, 0x4770,
        ],
    ),
    (
        "__gnu_thumb1_case_sqi",
        &[
            0xb402, 0x4671, 0x0849, 0x0049, 0x5609, 0x0049, 0x448e, 0xbc02, 0x4770,
        ],
    ),
    (
        "__gnu_thumb1_case_uhi",
        &[
            0xb403, 0x4671, 0x0849, 0x0040, 0x0049, 0x5a09, 0x0049, 0x448e, 0xbc03, 0x4770,
        ],
    ),
    (
        "__gnu_thumb1_case_shi",
        &[
            0xb403, 0x4671, 0x0849, 0x0040, 0x0049, 0x5e09, 0x0049, 0x448e, 0xbc03, 0x4770,
        ],
    ),
    (
        "__gnu_thumb1_case_si",
        &[
            0xb403, 0x4671, 0x3102, 0x0889, 0x0080, 0x0089, 0x5808, 0x1840, 0x4686, 0xbc03, 0x46f7,
        ],
    ),
];

/// Every helper entry in `code` (mapped at the halfword-aligned `base`), as
/// `(vma, name)`. `big_endian` reads the halfwords big-endian (BE32 code).
pub fn scan_bytes(code: &[u8], base: u64, big_endian: bool) -> Vec<(u64, &'static str)> {
    let mut hits = Vec::new();
    for (name, words) in HELPERS {
        let bytes: Vec<u8> = words
            .iter()
            .flat_map(|w| {
                if big_endian {
                    w.to_be_bytes()
                } else {
                    w.to_le_bytes()
                }
            })
            .collect();
        hits.extend(
            memchr::memmem::find_iter(code, &bytes)
                .filter(|at| at % 2 == 0)
                .map(|at| (base + at as u64, name)),
        );
    }
    hits.sort_unstable();
    hits
}

/// Scan the executable sections of an ARM `file` and report each helper entry.
/// A big-endian image is read both ways: BE8 code is stored little-endian.
pub fn scan(file: &object::File, out: &mut AnalysisOutput) {
    use object::Object;
    if file.architecture() != object::Architecture::Arm {
        return;
    }
    let orders: &[bool] = if file.is_little_endian() {
        &[false]
    } else {
        &[true, false]
    };
    let sections = crate::entry::executable_sections(file);
    let hits = sections
        .iter()
        .filter(|(start, _, _)| start % 2 == 0)
        .flat_map(|(start, _, code)| {
            orders
                .iter()
                .flat_map(move |&big_endian| scan_bytes(code, *start, big_endian))
        });
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
