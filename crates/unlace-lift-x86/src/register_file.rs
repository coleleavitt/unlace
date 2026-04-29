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

        _ => None,
    }
}
