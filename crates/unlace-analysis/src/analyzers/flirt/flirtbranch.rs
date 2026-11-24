//! Near branches of x86 code, for the FLIRT patterns of relocatable objects.
//!
//! A `call`, `jmp` or `jcc` with a 32-bit displacement that leaves its
//! function carries no relocation when one linker step lays out all the text,
//! and its displacement then changes with the layout. This module finds those
//! sites with a linear length decoder for the encodings a compiler emits. It
//! stops at the first encoding it does not know, so the branches after it stay
//! unmasked rather than being read from the wrong bytes.

/// A near branch with a 32-bit displacement.
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub(super) struct NearBranch {
    /// Offset of the displacement field within the code.
    pub site: usize,
    /// The address the branch goes to.
    pub target: u64,
}

/// The near branches with a 32-bit displacement in `code`, which starts at
/// `address`, of x86 code with `bitness` 32 or 64.
pub(super) fn near_branches(bitness: u32, address: u64, code: &[u8]) -> Vec<NearBranch> {
    let mut out = Vec::new();
    let mut pos = 0;
    while pos < code.len() {
        let Some(insn) = decode(bitness, &code[pos..]) else {
            break;
        };
        if let Some(disp) = insn.disp {
            let site = pos + disp;
            let Some(bytes) = code.get(site..site + 4) else {
                break;
            };
            let rel = i32::from_le_bytes([bytes[0], bytes[1], bytes[2], bytes[3]]);
            let next = address + (pos + insn.len) as u64;
            out.push(NearBranch {
                site,
                target: next.wrapping_add_signed(i64::from(rel)),
            });
        }
        pos += insn.len;
    }
    out
}

/// One decoded instruction: its length and, for a near branch, the offset of
/// its 32-bit displacement.
struct Insn {
    len: usize,
    disp: Option<usize>,
}

/// The operand layout of an opcode after its prefixes and opcode bytes.
#[derive(Clone, Copy)]
struct Shape {
    modrm: bool,
    imm: usize,
    rel32: bool,
}

const fn bare() -> Shape {
    Shape {
        modrm: false,
        imm: 0,
        rel32: false,
    }
}

const fn with_modrm(imm: usize) -> Shape {
    Shape {
        modrm: true,
        imm,
        rel32: false,
    }
}

const fn with_imm(imm: usize) -> Shape {
    Shape {
        modrm: false,
        imm,
        rel32: false,
    }
}

const REL32: Shape = Shape {
    modrm: false,
    imm: 4,
    rel32: true,
};

/// The length of `code` (x86 instruction) from its first byte, or `None` for
/// an encoding this decoder does not know.
fn decode(bitness: u32, code: &[u8]) -> Option<Insn> {
    let long = bitness == 64;
    let mut p = 0;
    let (mut opsize16, mut addr32) = (false, false);
    loop {
        match *code.get(p)? {
            0x66 => opsize16 = true,
            0x67 if long => addr32 = true,
            0xF0 | 0xF2 | 0xF3 | 0x26 | 0x2E | 0x36 | 0x3E | 0x64 | 0x65 => {}
            _ => break,
        }
        p += 1;
        if p > 14 {
            return None;
        }
    }
    let mut rex_w = false;
    let mut op = *code.get(p)?;
    if long && (0x40..=0x4F).contains(&op) {
        rex_w = op & 8 != 0;
        p += 1;
        op = *code.get(p)?;
    }
    p += 1;
    let z = if opsize16 { 2 } else { 4 };
    let moffs = if long && !addr32 { 8 } else { 4 };
    let (shape, escape) = if op == 0x0F {
        let op2 = *code.get(p)?;
        p += 1;
        let escape = usize::from(op2 == 0x38 || op2 == 0x3A);
        (two_byte(op2)?, escape)
    } else {
        let reg = code.get(p).map_or(0, |m| (m >> 3) & 7);
        (one_byte(op, long, z, moffs, rex_w, reg)?, 0)
    };
    if shape.rel32 && opsize16 {
        return None;
    }
    p += escape;
    let disp = shape.rel32.then_some(p);
    if shape.modrm {
        p += modrm_len(code, p)?;
    }
    p += shape.imm;
    if p > code.len() || p > 15 {
        return None;
    }
    Some(Insn { len: p, disp })
}

/// The length of the ModRM byte at `at` with the SIB and displacement it
/// implies (32-bit or 64-bit addressing).
fn modrm_len(code: &[u8], at: usize) -> Option<usize> {
    let m = *code.get(at)?;
    let (md, rm) = (m >> 6, m & 7);
    if md == 3 {
        return Some(1);
    }
    let mut len = 1;
    if rm == 4 {
        let sib = *code.get(at + 1)?;
        len += 1;
        if md == 0 && sib & 7 == 5 {
            len += 4;
        }
    } else if md == 0 && rm == 5 {
        len += 4;
    }
    match md {
        1 => len += 1,
        2 => len += 4,
        _ => {}
    }
    Some(len)
}

/// The one-byte opcode map. `reg` is the ModRM reg field, which selects the
/// immediate of the group 3 opcodes (`test`).
fn one_byte(op: u8, long: bool, z: usize, moffs: usize, rex_w: bool, reg: u8) -> Option<Shape> {
    Some(match op {
        0x00..=0x3F => match op & 7 {
            0..=3 => with_modrm(0),
            4 => with_imm(1),
            5 => with_imm(z),
            _ => return None,
        },
        0x40..=0x4F if !long => bare(),
        0x50..=0x5F => bare(),
        0x63 => with_modrm(0),
        0x68 => with_imm(z),
        0x69 => with_modrm(z),
        0x6A => with_imm(1),
        0x6B => with_modrm(1),
        0x6C..=0x6F => bare(),
        0x70..=0x7F => with_imm(1),
        0x80 | 0x83 => with_modrm(1),
        0x81 => with_modrm(z),
        0x84..=0x8F => with_modrm(0),
        0x90..=0x9F => bare(),
        0xA0..=0xA3 => with_imm(moffs),
        0xA4..=0xA7 | 0xAA..=0xAF => bare(),
        0xA8 => with_imm(1),
        0xA9 => with_imm(z),
        0xB0..=0xB7 => with_imm(1),
        0xB8..=0xBF => with_imm(if rex_w { 8 } else { z }),
        0xC0 | 0xC1 | 0xC6 => with_modrm(1),
        0xC2 | 0xCA => with_imm(2),
        0xC3 | 0xC9 | 0xCB | 0xCC | 0xCF | 0xD7 => bare(),
        0xC7 => with_modrm(z),
        0xC8 => with_imm(3),
        0xCD => with_imm(1),
        0xD0..=0xD3 | 0xD8..=0xDF => with_modrm(0),
        0xE0..=0xE7 => with_imm(1),
        0xE8 | 0xE9 => REL32,
        0xEB => with_imm(1),
        0xEC..=0xEF | 0xF1 | 0xF4 | 0xF5 | 0xF8..=0xFD => bare(),
        0xF6 => with_modrm(if reg <= 1 { 1 } else { 0 }),
        0xF7 => with_modrm(if reg <= 1 { z } else { 0 }),
        0xFE | 0xFF => with_modrm(0),
        _ => return None,
    })
}

/// The two-byte (`0F`) opcode map. The three-byte maps `0F 38` and `0F 3A`
/// add one opcode byte, which the caller skips; the rest of their layout is
/// given here.
fn two_byte(op2: u8) -> Option<Shape> {
    Some(match op2 {
        0x80..=0x8F => REL32,
        0x05..=0x09
        | 0x0B
        | 0x0E
        | 0x30..=0x37
        | 0x77
        | 0xA0..=0xA2
        | 0xA8..=0xAA
        | 0xC8..=0xCF => bare(),
        0x70..=0x73 | 0xA4 | 0xAC | 0xBA | 0xC2 | 0xC4..=0xC6 => with_modrm(1),
        0x00..=0x03
        | 0x0D
        | 0x10..=0x1F
        | 0x20..=0x23
        | 0x28..=0x2F
        | 0x38
        | 0x40..=0x4F
        | 0x50..=0x6F
        | 0x74..=0x76
        | 0x7C..=0x7F
        | 0x90..=0x9F
        | 0xA3
        | 0xA5
        | 0xAB
        | 0xAD..=0xAF
        | 0xB0..=0xB3
        | 0xB6..=0xB9
        | 0xBB..=0xBF
        | 0xC0
        | 0xC1
        | 0xC3
        | 0xC7
        | 0xD0..=0xFF => with_modrm(0),
        0x3A => with_modrm(1),
        _ => return None,
    })
}

#[cfg(test)]
mod tests {
    use super::*;

    fn sites(bitness: u32, code: &[u8]) -> Vec<(usize, u64)> {
        near_branches(bitness, 0x1000, code)
            .into_iter()
            .map(|b| (b.site, b.target))
            .collect()
    }

    #[test]
    fn call_displacement_resolves_from_the_next_instruction() {
        assert_eq!(
            sites(32, &[0xE8, 0x00, 0x01, 0x00, 0x00]),
            vec![(1, 0x1105)]
        );
    }

    #[test]
    fn branches_after_a_frame_setup_and_a_rip_relative_load_are_found() {
        // push rbp; mov rbp, rsp; mov rax, [rip+0]; call -16 (back to 0x1000); ret
        let code = [
            0x55, 0x48, 0x89, 0xE5, 0x48, 0x8B, 0x05, 0, 0, 0, 0, 0xE8, 0xF0, 0xFF, 0xFF, 0xFF,
            0xC3,
        ];
        assert_eq!(sites(64, &code), vec![(12, 0x1000)]);
    }

    #[test]
    fn conditional_near_branch_and_sib_addressing() {
        // mov eax, [0x1000] (SIB, no base); jne +0; jmp rel32 to its next insn
        let code = [
            0x8B, 0x04, 0x25, 0x00, 0x10, 0x00, 0x00, 0x0F, 0x85, 0x00, 0x00, 0x00, 0x00, 0xE9, 0,
            0, 0, 0,
        ];
        assert_eq!(sites(32, &code), vec![(9, 0x1000 + 13), (14, 0x1000 + 18)]);
    }

    #[test]
    fn short_branches_have_no_displacement_field() {
        assert_eq!(sites(64, &[0xEB, 0x05, 0x74, 0x01, 0x90]), Vec::new());
    }

    #[test]
    fn an_unknown_encoding_stops_the_scan() {
        // nop; VEX-prefixed instruction (not decoded); call
        assert_eq!(
            sites(64, &[0x90, 0xC5, 0xF8, 0x77, 0xE8, 0, 0, 0, 0]),
            Vec::new()
        );
    }

    #[test]
    fn operand_size_prefix_on_a_branch_stops_the_scan() {
        assert_eq!(sites(64, &[0x66, 0xE8, 0, 0, 0, 0]), Vec::new());
    }
}
