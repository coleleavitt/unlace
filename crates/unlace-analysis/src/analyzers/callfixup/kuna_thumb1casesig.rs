//! (kuna) Recognize libgcc's Thumb-1 switch helpers and armcc's
//! `__ARM_common_switch8` in a stripped ARM image by their instructions, so the
//! `switch*_r0` and `switch8_r3` call-fixups of the ARM cspecs reach them.
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
//! | `__ARM_common_switch8` (Thumb-1, saves `r4,r5`) | `push {r4,r5}; mov r4,lr; subs r4,#1; ldrb r5,[r4]; adds r4,#1; cmp r3,r5; bhs +0; mov r5,r3; ldrb r3,[r4,r5]; lsls r3,#1; adds r3,r4,r3; pop {r4,r5}; bx r3` |
//! | `__ARM_common_switch8` (Thumb-1, saves `r0-r3`) | `push {r0-r3}; mov r0,lr; subs r0,#1; ldrb r1,[r0]; adds r0,#1; cmp r3,r1; bhs +0; movs r1,r3; ldrb r3,[r0,r1]; lsls r3,#1; adds r0,r3; mov ip,r0; pop {r0-r3}; bx ip` |
//! | `__ARM_common_switch8` (Thumb-2) | `ldrb ip,[lr,#-1]; cmp r3,ip; ite lo; ldrblo r3,[lr,r3]; ldrbhs r3,[lr,ip]; add ip,lr,r3,lsl #1; bx ip` |
//!
//! All three armcc forms read the table size from the byte before the table,
//! clamp the index in `r3` to it (the last entry is the default) and branch to
//! the table plus twice the entry, which is what `switch8_r3` models.

use crate::pass::{AnalysisOutput, CallFixupFact, FidMatch, SymFact, SymKind};

/// Each helper's Thumb halfwords, in instruction order.
const HELPERS: [(&str, &[u16]); 8] = [
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
    (
        "__ARM_common_switch8",
        &[
            0xb430, 0x4674, 0x1e64, 0x7825, 0x1c64, 0x42ab, 0xd200, 0x461d, 0x5d63, 0x005b, 0x18e3,
            0xbc30, 0x4718,
        ],
    ),
    (
        "__ARM_common_switch8",
        &[
            0xb40f, 0x4670, 0x1e40, 0x7801, 0x1c40, 0x428b, 0xd200, 0x0019, 0x5c43, 0x005b, 0x18c0,
            0x4684, 0xbc0f, 0x4760,
        ],
    ),
    (
        "__ARM_common_switch8",
        &[
            0xf81e, 0xcc01, 0x4563, 0xbf34, 0xf81e, 0x3003, 0xf81e, 0x300c, 0xeb0e, 0x0c43, 0x4760,
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
