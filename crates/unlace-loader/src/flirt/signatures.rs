//! Default FLIRT signature table.
//!
//! Every entry was taken from a real object file and checked against it:
//! the C runtime startup code that the toolchain links into every
//! dynamically linked x86-64 Linux executable. That is the only library
//! code such an executable contains; its libc calls go through the PLT and
//! are named from the dynamic symbols. GCC's `crtstuff.c` helpers have no
//! symbols in a stripped binary (some distributions strip them from
//! `crtbeginS.o` already).
//!
//! Sources:
//! - `_start`: glibc `crt1.o`/`Scrt1.o` 2.31 (Debian 11), 2.36 (Debian 12),
//!   2.43 (Gentoo, CET) and zig's glibc build. `main` and
//!   `__libc_start_main` are loaded through the GOT; the linker may relax
//!   those loads to `lea`, `mov $imm32` or `addr32 call`, so the opcode bytes
//!   are wildcards.
//! - `deregister_tm_clones`, `register_tm_clones`, `__do_global_dtors_aux`,
//!   `frame_dummy`: GCC 10 (Debian 11), 12 (Debian 12) and 15 (Gentoo)
//!   `crtbeginS.o` (PIE), `crtbegin.o` (non-PIE) and `crtbeginT.o` (static).
//!
//! Patterns run to the function's last instruction. `frame_dummy` is a bare
//! jump on some builds, so it and `__do_global_dtors_aux` carry a reference
//! to the `crtstuff.c` helper they branch to.

use super::{FlirtDb, FlirtRef, FlirtSignature};

/// One table entry. `pattern` is hex bytes separated by spaces, `??` for a
/// wildcard byte; `refs` are `(opcode offset, callee name)` pairs.
struct Bundled {
    name: &'static str,
    pattern: &'static str,
    refs: &'static [(usize, &'static str)],
}

#[rustfmt::skip]
const BUNDLED: &[Bundled] = &[
    // glibc >= 2.34 crt1.o/Scrt1.o built with CET (Gentoo glibc 2.43)
    Bundled {
        name: "_start",
        pattern: "f3 0f 1e fa 31 ed 49 89 d1 5e 48 89 e2 48 83 e4 f0 50 54 45 31 c0 31 c9 48 ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? f4",
        refs: &[],
    },
    // glibc >= 2.34 crt1.o/Scrt1.o without CET (Debian 12 glibc 2.36, zig)
    Bundled {
        name: "_start",
        pattern: "31 ed 49 89 d1 5e 48 89 e2 48 83 e4 f0 50 54 45 31 c0 31 c9 48 ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? f4",
        refs: &[],
    },
    // glibc < 2.34 crt1.o/Scrt1.o passing __libc_csu_init/fini (Debian 11 glibc 2.31)
    Bundled {
        name: "_start",
        pattern: "31 ed 49 89 d1 5e 48 89 e2 48 83 e4 f0 50 54 ?? ?? ?? ?? ?? ?? ?? 48 ?? ?? ?? ?? ?? ?? 48 ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? f4",
        refs: &[],
    },
    // crtbeginS.o, GCC 10/12/15
    Bundled {
        name: "deregister_tm_clones",
        pattern: "48 8d 3d ?? ?? ?? ?? 48 8d 05 ?? ?? ?? ?? 48 39 f8 74 15 48 ?? ?? ?? ?? ?? ?? 48 85 c0 74 09 ff e0 0f 1f 80 00 00 00 00 c3",
        refs: &[],
    },
    // crtbegin.o/crtbeginT.o, GCC 10/12/15
    Bundled {
        name: "deregister_tm_clones",
        pattern: "b8 ?? ?? ?? ?? 48 3d ?? ?? ?? ?? 74 13 b8 ?? ?? ?? ?? 48 85 c0 74 09 bf ?? ?? ?? ?? ff e0 66 90 c3",
        refs: &[],
    },
    // crtbeginS.o, GCC 15
    Bundled {
        name: "register_tm_clones",
        pattern: "48 8d 3d ?? ?? ?? ?? 48 8d 35 ?? ?? ?? ?? 48 29 fe 48 89 f0 48 c1 f8 03 48 c1 ee 3f 48 01 c6 48 d1 fe 74 14 48 ?? ?? ?? ?? ?? ?? 48 85 c0 74 08 ff e0 66 0f 1f 44 00 00 c3",
        refs: &[],
    },
    // crtbeginS.o, GCC 10/12
    Bundled {
        name: "register_tm_clones",
        pattern: "48 8d 3d ?? ?? ?? ?? 48 8d 35 ?? ?? ?? ?? 48 29 fe 48 89 f0 48 c1 ee 3f 48 c1 f8 03 48 01 c6 48 d1 fe 74 14 48 ?? ?? ?? ?? ?? ?? 48 85 c0 74 08 ff e0 66 0f 1f 44 00 00 c3",
        refs: &[],
    },
    // crtbegin.o/crtbeginT.o, GCC 15
    Bundled {
        name: "register_tm_clones",
        pattern: "be ?? ?? ?? ?? 48 81 ee ?? ?? ?? ?? 48 89 f0 48 c1 f8 03 48 c1 ee 3f 48 01 c6 48 d1 fe 74 11 b8 ?? ?? ?? ?? 48 85 c0 74 07 bf ?? ?? ?? ?? ff e0 c3",
        refs: &[],
    },
    // crtbegin.o/crtbeginT.o, GCC 10/12
    Bundled {
        name: "register_tm_clones",
        pattern: "be ?? ?? ?? ?? 48 81 ee ?? ?? ?? ?? 48 89 f0 48 c1 ee 3f 48 c1 f8 03 48 01 c6 48 d1 fe 74 11 b8 ?? ?? ?? ?? 48 85 c0 74 07 bf ?? ?? ?? ?? ff e0 c3",
        refs: &[],
    },
    // crtbeginS.o, GCC 12/15
    Bundled {
        name: "__do_global_dtors_aux",
        pattern: "f3 0f 1e fa 80 3d ?? ?? ?? ?? 00 75 2b 55 48 83 3d ?? ?? ?? ?? 00 48 89 e5 74 0c 48 8b 3d ?? ?? ?? ?? e8 ?? ?? ?? ?? e8 ?? ?? ?? ?? c6 05 ?? ?? ?? ?? 01 5d c3",
        refs: &[(0x27, "deregister_tm_clones")],
    },
    // crtbeginS.o, GCC 10
    Bundled {
        name: "__do_global_dtors_aux",
        pattern: "80 3d ?? ?? ?? ?? 00 75 2f 55 48 83 3d ?? ?? ?? ?? 00 48 89 e5 74 0c 48 8b 3d ?? ?? ?? ?? e8 ?? ?? ?? ?? e8 ?? ?? ?? ?? c6 05 ?? ?? ?? ?? 01 5d c3",
        refs: &[(0x23, "deregister_tm_clones")],
    },
    // crtbegin.o, GCC 12/15
    Bundled {
        name: "__do_global_dtors_aux",
        pattern: "f3 0f 1e fa 80 3d ?? ?? ?? ?? 00 75 13 55 48 89 e5 e8 ?? ?? ?? ?? c6 05 ?? ?? ?? ?? 01 5d c3",
        refs: &[(0x11, "deregister_tm_clones")],
    },
    // crtbegin.o, GCC 10
    Bundled {
        name: "__do_global_dtors_aux",
        pattern: "80 3d ?? ?? ?? ?? 00 75 17 55 48 89 e5 e8 ?? ?? ?? ?? c6 05 ?? ?? ?? ?? 01 5d c3",
        refs: &[(0x0d, "deregister_tm_clones")],
    },
    // crtbeginT.o, GCC 12/15
    Bundled {
        name: "__do_global_dtors_aux",
        pattern: "f3 0f 1e fa 80 3d ?? ?? ?? ?? 00 75 2b 55 48 89 e5 e8 ?? ?? ?? ?? b8 ?? ?? ?? ?? 48 85 c0 74 0a bf ?? ?? ?? ?? e8 ?? ?? ?? ?? c6 05 ?? ?? ?? ?? 01 5d c3",
        refs: &[(0x11, "deregister_tm_clones")],
    },
    // crtbeginT.o, GCC 10
    Bundled {
        name: "__do_global_dtors_aux",
        pattern: "80 3d ?? ?? ?? ?? 00 75 27 55 48 89 e5 e8 ?? ?? ?? ?? b8 ?? ?? ?? ?? 48 85 c0 74 0a bf ?? ?? ?? ?? e8 ?? ?? ?? ?? c6 05 ?? ?? ?? ?? 01 5d c3",
        refs: &[(0x0d, "deregister_tm_clones")],
    },
    // crtbeginS.o, GCC 12/15
    Bundled {
        name: "frame_dummy",
        pattern: "f3 0f 1e fa e9 ?? ?? ?? ??",
        refs: &[(0x04, "register_tm_clones")],
    },
    // crtbeginS.o, GCC 10
    Bundled {
        name: "frame_dummy",
        pattern: "e9 ?? ?? ?? ??",
        refs: &[(0x00, "register_tm_clones")],
    },
    // crtbegin.o, GCC 12/15
    Bundled {
        name: "frame_dummy",
        pattern: "f3 0f 1e fa eb ??",
        refs: &[(0x04, "register_tm_clones")],
    },
    // crtbegin.o, GCC 10
    Bundled {
        name: "frame_dummy",
        pattern: "eb ??",
        refs: &[(0x00, "register_tm_clones")],
    },
    // crtbeginT.o, GCC 12/15
    Bundled {
        name: "frame_dummy",
        pattern: "f3 0f 1e fa b8 ?? ?? ?? ?? 48 85 c0 74 22 55 be ?? ?? ?? ?? bf ?? ?? ?? ?? 48 89 e5 e8 ?? ?? ?? ?? 5d e9 ?? ?? ?? ??",
        refs: &[(0x22, "register_tm_clones")],
    },
    // crtbeginT.o, GCC 10
    Bundled {
        name: "frame_dummy",
        pattern: "b8 ?? ?? ?? ?? 48 85 c0 74 1e 55 be ?? ?? ?? ?? bf ?? ?? ?? ?? 48 89 e5 e8 ?? ?? ?? ?? 5d e9 ?? ?? ?? ??",
        refs: &[(0x1e, "register_tm_clones")],
    },
];

impl Bundled {
    fn signature(&self) -> FlirtSignature {
        let (pattern, mask) = self
            .pattern
            .split_whitespace()
            .map(|byte| match byte {
                "??" => (0, 0),
                hex => (
                    u8::from_str_radix(hex, 16).expect("bundled FLIRT pattern bytes are hex"),
                    0xFF,
                ),
            })
            .unzip();
        FlirtSignature {
            name: self.name.to_string(),
            pattern,
            mask,
            crc16_at: None,
            refs: self
                .refs
                .iter()
                .map(|&(offset, name)| FlirtRef {
                    offset,
                    name: name.to_string(),
                })
                .collect(),
        }
    }
}

/// Build the shipped signature database.
pub fn default_db() -> FlirtDb {
    FlirtDb::from_entries(BUNDLED.iter().map(Bundled::signature).collect())
}

#[cfg(test)]
mod tests {
    use std::collections::BTreeMap;

    use super::super::FunctionCode;
    use super::*;

    /// `.text` 0x1480..0x1569 of `fixtures/medium.elf` (GCC 15, glibc 2.43,
    /// PIE): `_start`, then the `crtbeginS.o` helpers.
    const MEDIUM_CRT: [u8; 233] = [
        0xf3, 0x0f, 0x1e, 0xfa, 0x31, 0xed, 0x49, 0x89, 0xd1, 0x5e, 0x48, 0x89, 0xe2, 0x48, 0x83,
        0xe4, 0xf0, 0x50, 0x54, 0x45, 0x31, 0xc0, 0x31, 0xc9, 0x48, 0x8d, 0x3d, 0xc1, 0xfb, 0xff,
        0xff, 0xff, 0x15, 0x33, 0x2b, 0x00, 0x00, 0xf4, 0x66, 0x2e, 0x0f, 0x1f, 0x84, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x48, 0x8d, 0x3d, 0x59, 0x2b, 0x00, 0x00, 0x48, 0x8d, 0x05, 0x52, 0x2b,
        0x00, 0x00, 0x48, 0x39, 0xf8, 0x74, 0x15, 0x48, 0x8b, 0x05, 0x16, 0x2b, 0x00, 0x00, 0x48,
        0x85, 0xc0, 0x74, 0x09, 0xff, 0xe0, 0x0f, 0x1f, 0x80, 0x00, 0x00, 0x00, 0x00, 0xc3, 0x0f,
        0x1f, 0x80, 0x00, 0x00, 0x00, 0x00, 0x48, 0x8d, 0x3d, 0x29, 0x2b, 0x00, 0x00, 0x48, 0x8d,
        0x35, 0x22, 0x2b, 0x00, 0x00, 0x48, 0x29, 0xfe, 0x48, 0x89, 0xf0, 0x48, 0xc1, 0xf8, 0x03,
        0x48, 0xc1, 0xee, 0x3f, 0x48, 0x01, 0xc6, 0x48, 0xd1, 0xfe, 0x74, 0x14, 0x48, 0x8b, 0x05,
        0xe5, 0x2a, 0x00, 0x00, 0x48, 0x85, 0xc0, 0x74, 0x08, 0xff, 0xe0, 0x66, 0x0f, 0x1f, 0x44,
        0x00, 0x00, 0xc3, 0x0f, 0x1f, 0x80, 0x00, 0x00, 0x00, 0x00, 0xf3, 0x0f, 0x1e, 0xfa, 0x80,
        0x3d, 0xe5, 0x2a, 0x00, 0x00, 0x00, 0x75, 0x2b, 0x55, 0x48, 0x83, 0x3d, 0xc2, 0x2a, 0x00,
        0x00, 0x00, 0x48, 0x89, 0xe5, 0x74, 0x0c, 0x48, 0x8b, 0x3d, 0xc6, 0x2a, 0x00, 0x00, 0xe8,
        0xf9, 0xfa, 0xff, 0xff, 0xe8, 0x64, 0xff, 0xff, 0xff, 0xc6, 0x05, 0xbd, 0x2a, 0x00, 0x00,
        0x01, 0x5d, 0xc3, 0x0f, 0x1f, 0x00, 0xc3, 0x0f, 0x1f, 0x80, 0x00, 0x00, 0x00, 0x00, 0xf3,
        0x0f, 0x1e, 0xfa, 0xe9, 0x77, 0xff, 0xff, 0xff,
    ];

    /// `.text` of Debian 11's GCC 10 `crtbegin.o` (non-PIE, no CET).
    const GCC10_CRTBEGIN: [u8; 162] = [
        0xb8, 0x00, 0x00, 0x00, 0x00, 0x48, 0x3d, 0x00, 0x00, 0x00, 0x00, 0x74, 0x13, 0xb8, 0x00,
        0x00, 0x00, 0x00, 0x48, 0x85, 0xc0, 0x74, 0x09, 0xbf, 0x00, 0x00, 0x00, 0x00, 0xff, 0xe0,
        0x66, 0x90, 0xc3, 0x66, 0x66, 0x2e, 0x0f, 0x1f, 0x84, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f,
        0x1f, 0x40, 0x00, 0xbe, 0x00, 0x00, 0x00, 0x00, 0x48, 0x81, 0xee, 0x00, 0x00, 0x00, 0x00,
        0x48, 0x89, 0xf0, 0x48, 0xc1, 0xee, 0x3f, 0x48, 0xc1, 0xf8, 0x03, 0x48, 0x01, 0xc6, 0x48,
        0xd1, 0xfe, 0x74, 0x11, 0xb8, 0x00, 0x00, 0x00, 0x00, 0x48, 0x85, 0xc0, 0x74, 0x07, 0xbf,
        0x00, 0x00, 0x00, 0x00, 0xff, 0xe0, 0xc3, 0x66, 0x66, 0x2e, 0x0f, 0x1f, 0x84, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x0f, 0x1f, 0x40, 0x00, 0x80, 0x3d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x75,
        0x17, 0x55, 0x48, 0x89, 0xe5, 0xe8, 0x7e, 0xff, 0xff, 0xff, 0xc6, 0x05, 0x00, 0x00, 0x00,
        0x00, 0x01, 0x5d, 0xc3, 0x0f, 0x1f, 0x44, 0x00, 0x00, 0xc3, 0x66, 0x66, 0x2e, 0x0f, 0x1f,
        0x84, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x1f, 0x40, 0x00, 0xeb, 0x8e,
    ];

    /// `.text` of Debian 11's glibc 2.31 `Scrt1.o`.
    const GLIBC231_SCRT1: [u8; 43] = [
        0x31, 0xed, 0x49, 0x89, 0xd1, 0x5e, 0x48, 0x89, 0xe2, 0x48, 0x83, 0xe4, 0xf0, 0x50, 0x54,
        0x4c, 0x8b, 0x05, 0x00, 0x00, 0x00, 0x00, 0x48, 0x8b, 0x0d, 0x00, 0x00, 0x00, 0x00, 0x48,
        0x8b, 0x3d, 0x00, 0x00, 0x00, 0x00, 0xff, 0x15, 0x00, 0x00, 0x00, 0x00, 0xf4,
    ];

    fn names(section_addr: u64, section: &[u8], entries: &[u64]) -> Vec<Option<String>> {
        let db = default_db();
        entries
            .iter()
            .map(|&addr| {
                let code = FunctionCode::new(section_addr, section, addr)?;
                db.match_function_with_refs(code, &BTreeMap::new())
                    .map(|m| m.name.to_string())
            })
            .collect()
    }

    #[test]
    fn every_pattern_parses_and_refs_point_at_wildcarded_branches() {
        for entry in BUNDLED {
            let sig = entry.signature();
            for reference in &sig.refs {
                let opcode = sig.pattern[reference.offset];
                let len = if opcode == 0xEB { 2 } else { 5 };
                assert!(
                    matches!(opcode, 0xE8 | 0xE9 | 0xEB),
                    "{}: no branch at {:#x}",
                    entry.name,
                    reference.offset
                );
                assert!(
                    sig.mask[reference.offset + 1..reference.offset + len]
                        .iter()
                        .all(|&m| m == 0),
                    "{}: branch displacement is not a wildcard",
                    entry.name
                );
            }
        }
    }

    #[test]
    fn names_pie_startup_code() {
        let base = 0x1480;
        let found = names(base, &MEDIUM_CRT, &[0x1480, 0x14b0, 0x14e0, 0x1520, 0x1560]);
        let expected = [
            "_start",
            "deregister_tm_clones",
            "register_tm_clones",
            "__do_global_dtors_aux",
            "frame_dummy",
        ];
        assert_eq!(found, expected.map(|name| Some(name.to_string())));
    }

    #[test]
    fn names_non_pie_startup_code_without_cet() {
        let found = names(0, &GCC10_CRTBEGIN, &[0x00, 0x30, 0x70, 0xa0]);
        let expected = [
            "deregister_tm_clones",
            "register_tm_clones",
            "__do_global_dtors_aux",
            "frame_dummy",
        ];
        assert_eq!(found, expected.map(|name| Some(name.to_string())));
        assert_eq!(
            names(0, &GLIBC231_SCRT1, &[0]),
            [Some("_start".to_string())]
        );
    }

    #[test]
    fn frame_dummy_needs_its_jump_to_reach_register_tm_clones() {
        // frame_dummy is `endbr64; jmp register_tm_clones`; aimed elsewhere
        // the same bytes are an anonymous thunk.
        let mut bytes = MEDIUM_CRT;
        bytes[0x1560 - 0x1480 + 5] = bytes[0x1560 - 0x1480 + 5].wrapping_add(4);
        assert_eq!(names(0x1480, &bytes, &[0x1560]), [None]);
    }

    #[test]
    fn ordinary_functions_stay_unnamed() {
        // `int add3(int a, int b, int c)` at -O0 with -fcf-protection.
        let add3 = [
            0xf3, 0x0f, 0x1e, 0xfa, 0x55, 0x48, 0x89, 0xe5, 0x89, 0x7d, 0xfc, 0x89, 0x75, 0xf8,
            0x89, 0x55, 0xf4, 0x8b, 0x55, 0xfc, 0x8b, 0x45, 0xf8, 0x01, 0xc2, 0x8b, 0x45, 0xf4,
            0x01, 0xd0, 0x5d, 0xc3,
        ];
        assert_eq!(default_db().match_function(&add3), None);
    }
}
