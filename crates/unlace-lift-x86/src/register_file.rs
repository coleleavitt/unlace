use unlace_ir::{SpaceId, Varnode};

// x86-64 register offsets in the Register space.
// Each 64-bit GP register occupies 8 bytes at its offset.
pub const RAX: u64 = 0;
pub const RCX: u64 = 8;
pub const RDX: u64 = 16;
pub const RBX: u64 = 24;
pub const RSP: u64 = 32;
pub const RBP: u64 = 40;
pub const RSI: u64 = 48;
pub const RDI: u64 = 56;
pub const R8: u64 = 64;
pub const R9: u64 = 72;
pub const R10: u64 = 80;
pub const R11: u64 = 88;
pub const R12: u64 = 96;
pub const R13: u64 = 104;
pub const R14: u64 = 112;
pub const R15: u64 = 120;
pub const RIP: u64 = 128;

// RFLAGS individual bits at offsets 256+.
pub const CF: u64 = 256;
pub const PF: u64 = 257;
pub const AF: u64 = 258;
pub const ZF: u64 = 259;
pub const SF: u64 = 260;
pub const OF: u64 = 261;

// ── SSE/AVX vector registers ──────────────────────────────────────────
//
// Layout: base offset 0x400, stride 32 bytes per register slot.
//   XMMn  at  0x400 + n * 32, size 16 (lower half of YMMn).
//   YMMn  at  0x400 + n * 32, size 32.

/// Base offset for the vector register file (XMM/YMM).
const VEC_BASE: u64 = 0x400;
/// Stride between consecutive vector register slots (32 bytes = YMM width).
const VEC_STRIDE: u64 = 32;

const fn vec_offset(index: u64) -> u64 {
    VEC_BASE + index * VEC_STRIDE
}

pub const XMM0: u64 = vec_offset(0);
pub const XMM1: u64 = vec_offset(1);
pub const XMM2: u64 = vec_offset(2);
pub const XMM3: u64 = vec_offset(3);
pub const XMM4: u64 = vec_offset(4);
pub const XMM5: u64 = vec_offset(5);
pub const XMM6: u64 = vec_offset(6);
pub const XMM7: u64 = vec_offset(7);
pub const XMM8: u64 = vec_offset(8);
pub const XMM9: u64 = vec_offset(9);
pub const XMM10: u64 = vec_offset(10);
pub const XMM11: u64 = vec_offset(11);
pub const XMM12: u64 = vec_offset(12);
pub const XMM13: u64 = vec_offset(13);
pub const XMM14: u64 = vec_offset(14);
pub const XMM15: u64 = vec_offset(15);

pub const YMM0: u64 = vec_offset(0);
pub const YMM1: u64 = vec_offset(1);
pub const YMM2: u64 = vec_offset(2);
pub const YMM3: u64 = vec_offset(3);
pub const YMM4: u64 = vec_offset(4);
pub const YMM5: u64 = vec_offset(5);
pub const YMM6: u64 = vec_offset(6);
pub const YMM7: u64 = vec_offset(7);
pub const YMM8: u64 = vec_offset(8);
pub const YMM9: u64 = vec_offset(9);
pub const YMM10: u64 = vec_offset(10);
pub const YMM11: u64 = vec_offset(11);
pub const YMM12: u64 = vec_offset(12);
pub const YMM13: u64 = vec_offset(13);
pub const YMM14: u64 = vec_offset(14);
pub const YMM15: u64 = vec_offset(15);

pub fn reg256(offset: u64) -> Varnode {
    Varnode::new(SpaceId::Register, offset, 32)
}

pub fn reg128(offset: u64) -> Varnode {
    Varnode::new(SpaceId::Register, offset, 16)
}

pub fn reg64(offset: u64) -> Varnode {
    Varnode::new(SpaceId::Register, offset, 8)
}

pub fn reg32(offset: u64) -> Varnode {
    Varnode::new(SpaceId::Register, offset, 4)
}

pub fn reg16(offset: u64) -> Varnode {
    Varnode::new(SpaceId::Register, offset, 2)
}

pub fn reg8(offset: u64) -> Varnode {
    Varnode::new(SpaceId::Register, offset, 1)
}

pub fn flag_vn(offset: u64) -> Varnode {
    Varnode::new(SpaceId::Register, offset, 1)
}

use unlace_ir::{RegisterDef, RegisterFile};

pub fn x86_64_register_file() -> RegisterFile {
    RegisterFile {
        registers: vec![
            RegisterDef { name: "RAX", varnode: reg64(RAX) },
            RegisterDef { name: "RCX", varnode: reg64(RCX) },
            RegisterDef { name: "RDX", varnode: reg64(RDX) },
            RegisterDef { name: "RBX", varnode: reg64(RBX) },
            RegisterDef { name: "RSP", varnode: reg64(RSP) },
            RegisterDef { name: "RBP", varnode: reg64(RBP) },
            RegisterDef { name: "RSI", varnode: reg64(RSI) },
            RegisterDef { name: "RDI", varnode: reg64(RDI) },
            RegisterDef { name: "R8",  varnode: reg64(R8) },
            RegisterDef { name: "R9",  varnode: reg64(R9) },
            RegisterDef { name: "R10", varnode: reg64(R10) },
            RegisterDef { name: "R11", varnode: reg64(R11) },
            RegisterDef { name: "R12", varnode: reg64(R12) },
            RegisterDef { name: "R13", varnode: reg64(R13) },
            RegisterDef { name: "R14", varnode: reg64(R14) },
            RegisterDef { name: "R15", varnode: reg64(R15) },
            RegisterDef { name: "RIP", varnode: reg64(RIP) },
            RegisterDef { name: "EAX", varnode: reg32(RAX) },
            RegisterDef { name: "ECX", varnode: reg32(RCX) },
            RegisterDef { name: "EDX", varnode: reg32(RDX) },
            RegisterDef { name: "EBX", varnode: reg32(RBX) },
            RegisterDef { name: "ESP", varnode: reg32(RSP) },
            RegisterDef { name: "EBP", varnode: reg32(RBP) },
            RegisterDef { name: "ESI", varnode: reg32(RSI) },
            RegisterDef { name: "EDI", varnode: reg32(RDI) },
            RegisterDef { name: "CF",  varnode: flag_vn(CF) },
            RegisterDef { name: "PF",  varnode: flag_vn(PF) },
            RegisterDef { name: "AF",  varnode: flag_vn(AF) },
            RegisterDef { name: "ZF",  varnode: flag_vn(ZF) },
            RegisterDef { name: "SF",  varnode: flag_vn(SF) },
            RegisterDef { name: "OF",  varnode: flag_vn(OF) },
            // XMM0-XMM15 (128-bit SSE)
            RegisterDef { name: "XMM0",  varnode: reg128(XMM0) },
            RegisterDef { name: "XMM1",  varnode: reg128(XMM1) },
            RegisterDef { name: "XMM2",  varnode: reg128(XMM2) },
            RegisterDef { name: "XMM3",  varnode: reg128(XMM3) },
            RegisterDef { name: "XMM4",  varnode: reg128(XMM4) },
            RegisterDef { name: "XMM5",  varnode: reg128(XMM5) },
            RegisterDef { name: "XMM6",  varnode: reg128(XMM6) },
            RegisterDef { name: "XMM7",  varnode: reg128(XMM7) },
            RegisterDef { name: "XMM8",  varnode: reg128(XMM8) },
            RegisterDef { name: "XMM9",  varnode: reg128(XMM9) },
            RegisterDef { name: "XMM10", varnode: reg128(XMM10) },
            RegisterDef { name: "XMM11", varnode: reg128(XMM11) },
            RegisterDef { name: "XMM12", varnode: reg128(XMM12) },
            RegisterDef { name: "XMM13", varnode: reg128(XMM13) },
            RegisterDef { name: "XMM14", varnode: reg128(XMM14) },
            RegisterDef { name: "XMM15", varnode: reg128(XMM15) },
            // YMM0-YMM15 (256-bit AVX, lower 128 bits alias XMM)
            RegisterDef { name: "YMM0",  varnode: reg256(YMM0) },
            RegisterDef { name: "YMM1",  varnode: reg256(YMM1) },
            RegisterDef { name: "YMM2",  varnode: reg256(YMM2) },
            RegisterDef { name: "YMM3",  varnode: reg256(YMM3) },
            RegisterDef { name: "YMM4",  varnode: reg256(YMM4) },
            RegisterDef { name: "YMM5",  varnode: reg256(YMM5) },
            RegisterDef { name: "YMM6",  varnode: reg256(YMM6) },
            RegisterDef { name: "YMM7",  varnode: reg256(YMM7) },
            RegisterDef { name: "YMM8",  varnode: reg256(YMM8) },
            RegisterDef { name: "YMM9",  varnode: reg256(YMM9) },
            RegisterDef { name: "YMM10", varnode: reg256(YMM10) },
            RegisterDef { name: "YMM11", varnode: reg256(YMM11) },
            RegisterDef { name: "YMM12", varnode: reg256(YMM12) },
            RegisterDef { name: "YMM13", varnode: reg256(YMM13) },
            RegisterDef { name: "YMM14", varnode: reg256(YMM14) },
            RegisterDef { name: "YMM15", varnode: reg256(YMM15) },
        ],
    }
}

pub fn iced_reg_to_varnode(reg: iced_x86::Register) -> Option<(u64, u8)> {
    use iced_x86::Register as R;
    match reg {
        R::RAX => Some((RAX, 8)),
        R::RCX => Some((RCX, 8)),
        R::RDX => Some((RDX, 8)),
        R::RBX => Some((RBX, 8)),
        R::RSP => Some((RSP, 8)),
        R::RBP => Some((RBP, 8)),
        R::RSI => Some((RSI, 8)),
        R::RDI => Some((RDI, 8)),
        R::R8  => Some((R8, 8)),
        R::R9  => Some((R9, 8)),
        R::R10 => Some((R10, 8)),
        R::R11 => Some((R11, 8)),
        R::R12 => Some((R12, 8)),
        R::R13 => Some((R13, 8)),
        R::R14 => Some((R14, 8)),
        R::R15 => Some((R15, 8)),
        R::RIP => Some((RIP, 8)),

        R::EAX => Some((RAX, 4)),
        R::ECX => Some((RCX, 4)),
        R::EDX => Some((RDX, 4)),
        R::EBX => Some((RBX, 4)),
        R::ESP => Some((RSP, 4)),
        R::EBP => Some((RBP, 4)),
        R::ESI => Some((RSI, 4)),
        R::EDI => Some((RDI, 4)),
        R::R8D  => Some((R8, 4)),
        R::R9D  => Some((R9, 4)),
        R::R10D => Some((R10, 4)),
        R::R11D => Some((R11, 4)),
        R::R12D => Some((R12, 4)),
        R::R13D => Some((R13, 4)),
        R::R14D => Some((R14, 4)),
        R::R15D => Some((R15, 4)),

        R::AX => Some((RAX, 2)),
        R::CX => Some((RCX, 2)),
        R::DX => Some((RDX, 2)),
        R::BX => Some((RBX, 2)),
        R::SP => Some((RSP, 2)),
        R::BP => Some((RBP, 2)),
        R::SI => Some((RSI, 2)),
        R::DI => Some((RDI, 2)),
        R::R8W  => Some((R8, 2)),
        R::R9W  => Some((R9, 2)),
        R::R10W => Some((R10, 2)),
        R::R11W => Some((R11, 2)),
        R::R12W => Some((R12, 2)),
        R::R13W => Some((R13, 2)),
        R::R14W => Some((R14, 2)),
        R::R15W => Some((R15, 2)),

        R::AL => Some((RAX, 1)),
        R::CL => Some((RCX, 1)),
        R::DL => Some((RDX, 1)),
        R::BL => Some((RBX, 1)),
        R::SPL => Some((RSP, 1)),
        R::BPL => Some((RBP, 1)),
        R::SIL => Some((RSI, 1)),
        R::DIL => Some((RDI, 1)),
        R::R8L  => Some((R8, 1)),
        R::R9L  => Some((R9, 1)),
        R::R10L => Some((R10, 1)),
        R::R11L => Some((R11, 1)),
        R::R12L => Some((R12, 1)),
        R::R13L => Some((R13, 1)),
        R::R14L => Some((R14, 1)),
        R::R15L => Some((R15, 1)),

        // AH, BH, CH, DH: high byte at offset+1, size 1
        R::AH => Some((RAX + 1, 1)),
        R::CH => Some((RCX + 1, 1)),
        R::DH => Some((RDX + 1, 1)),
        R::BH => Some((RBX + 1, 1)),

        R::XMM0  => Some((XMM0, 16)),
        R::XMM1  => Some((XMM1, 16)),
        R::XMM2  => Some((XMM2, 16)),
        R::XMM3  => Some((XMM3, 16)),
        R::XMM4  => Some((XMM4, 16)),
        R::XMM5  => Some((XMM5, 16)),
        R::XMM6  => Some((XMM6, 16)),
        R::XMM7  => Some((XMM7, 16)),
        R::XMM8  => Some((XMM8, 16)),
        R::XMM9  => Some((XMM9, 16)),
        R::XMM10 => Some((XMM10, 16)),
        R::XMM11 => Some((XMM11, 16)),
        R::XMM12 => Some((XMM12, 16)),
        R::XMM13 => Some((XMM13, 16)),
        R::XMM14 => Some((XMM14, 16)),
        R::XMM15 => Some((XMM15, 16)),

        R::YMM0  => Some((YMM0, 32)),
        R::YMM1  => Some((YMM1, 32)),
        R::YMM2  => Some((YMM2, 32)),
        R::YMM3  => Some((YMM3, 32)),
        R::YMM4  => Some((YMM4, 32)),
        R::YMM5  => Some((YMM5, 32)),
        R::YMM6  => Some((YMM6, 32)),
        R::YMM7  => Some((YMM7, 32)),
        R::YMM8  => Some((YMM8, 32)),
        R::YMM9  => Some((YMM9, 32)),
        R::YMM10 => Some((YMM10, 32)),
        R::YMM11 => Some((YMM11, 32)),
        R::YMM12 => Some((YMM12, 32)),
        R::YMM13 => Some((YMM13, 32)),
        R::YMM14 => Some((YMM14, 32)),
        R::YMM15 => Some((YMM15, 32)),

        _ => None,
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    use unlace_ir::SpaceId;

    #[test]
    fn test_xmm0_size_16() {
        let vn = reg128(XMM0);
        assert_eq!(vn.size, 16);
        assert_eq!(vn.space, SpaceId::Register);
    }

    #[test]
    fn test_xmm15_unique_offset() {
        assert_ne!(XMM0, XMM15);
        let vn0 = reg128(XMM0);
        let vn15 = reg128(XMM15);
        assert_ne!(vn0.offset, vn15.offset);
        assert_eq!(vn15.size, 16);
    }

    #[test]
    fn test_xmm_no_overlap_with_gp() {
        let gp_offsets = [
            RAX, RCX, RDX, RBX, RSP, RBP, RSI, RDI,
            R8, R9, R10, R11, R12, R13, R14, R15, RIP,
        ];
        let gp_max = gp_offsets.iter().copied().max().unwrap() + 8;
        let flag_max = OF + 1;
        let gp_end = if gp_max > flag_max { gp_max } else { flag_max };

        let xmm_offsets = [
            XMM0, XMM1, XMM2, XMM3, XMM4, XMM5, XMM6, XMM7,
            XMM8, XMM9, XMM10, XMM11, XMM12, XMM13, XMM14, XMM15,
        ];
        for &xmm in &xmm_offsets {
            assert!(
                xmm >= gp_end,
                "XMM offset {xmm:#x} overlaps GP/flag region ending at {gp_end:#x}"
            );
        }
    }

    #[test]
    fn test_xmm_iced_mapping() {
        use iced_x86::Register as R;
        let (off, sz) = iced_reg_to_varnode(R::XMM0).expect("XMM0 should map");
        assert_eq!(off, XMM0);
        assert_eq!(sz, 16);

        let (off5, sz5) = iced_reg_to_varnode(R::XMM5).expect("XMM5 should map");
        assert_eq!(off5, XMM5);
        assert_eq!(sz5, 16);

        let (off15, sz15) = iced_reg_to_varnode(R::XMM15).expect("XMM15 should map");
        assert_eq!(off15, XMM15);
        assert_eq!(sz15, 16);
    }

    #[test]
    fn test_ymm0_size_32() {
        let vn = reg256(YMM0);
        assert_eq!(vn.size, 32);
        assert_eq!(vn.space, SpaceId::Register);
    }

    #[test]
    fn test_ymm_iced_mapping() {
        use iced_x86::Register as R;
        let (off, sz) = iced_reg_to_varnode(R::YMM0).expect("YMM0 should map");
        assert_eq!(off, YMM0);
        assert_eq!(sz, 32);

        let (off7, sz7) = iced_reg_to_varnode(R::YMM7).expect("YMM7 should map");
        assert_eq!(off7, YMM7);
        assert_eq!(sz7, 32);

        let (off15, sz15) = iced_reg_to_varnode(R::YMM15).expect("YMM15 should map");
        assert_eq!(off15, YMM15);
        assert_eq!(sz15, 32);
    }

    #[test]
    fn test_ymm_xmm_share_base_offset() {
        for i in 0..16u64 {
            let xmm = vec_offset(i);
            let ymm = vec_offset(i);
            assert_eq!(xmm, ymm, "XMM{i} and YMM{i} should share base offset");
        }
    }

    #[test]
    fn test_xmm_consecutive_stride() {
        for i in 0..15u64 {
            let curr = vec_offset(i);
            let next = vec_offset(i + 1);
            assert_eq!(
                next - curr, VEC_STRIDE,
                "stride between XMM{i} and XMM{} should be {VEC_STRIDE}", i + 1
            );
        }
    }

    #[test]
    fn test_register_file_contains_xmm_and_ymm() {
        let rf = x86_64_register_file();
        assert!(rf.registers.iter().any(|r| r.name == "XMM0"));
        assert!(rf.registers.iter().any(|r| r.name == "XMM15"));
        assert!(rf.registers.iter().any(|r| r.name == "YMM0"));
        assert!(rf.registers.iter().any(|r| r.name == "YMM15"));

        let xmm0 = rf.registers.iter().find(|r| r.name == "XMM0").unwrap();
        assert_eq!(xmm0.varnode.size, 16);

        let ymm0 = rf.registers.iter().find(|r| r.name == "YMM0").unwrap();
        assert_eq!(ymm0.varnode.size, 32);
    }
}
