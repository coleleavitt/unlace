//! ELF machines the `object` crate maps to no language stem, or to no
//! `Architecture` at all (Lanai, AMDGPU): the language is chosen from
//! `e_machine` and `e_flags` of the header.
//!
//! - `EM_AVR`: `avr8:LE:16:default`; `EF_AVR_ARCH_AVR6` (EIND, over 128 KiB of
//!   flash) the ATmega256 language, `EF_AVR_ARCH_XMEGA1..7` the Xmega one.
//! - `EM_MSP430`: `TI_MSP430:LE:16:default`.
//! - `EM_HEXAGON`: `Hexagon:LE:32:default`.
//! - `EM_LANAI`: `lanai:BE:32:default`.
//! - `EM_LOONGARCH`: the ilp32/lp64 language of the ELF class, single-float
//!   (`EF_LOONGARCH_ABI_SINGLE_FLOAT`) or double (double and soft-float).
//! - `EM_AMDGPU`: the GFX9, GFX10 or GFX11 language of `EF_AMDGPU_MACH`; wave32 on
//!   RDNA, since the wave size is in the kernel descriptor, not the header.
//!   GFX9.4 (gfx940-gfx950), GCN 1-4 and GFX12 have no language.
//! - `EM_68K`: `68000:BE:32:Coldfire` for a ColdFire ISA in `EF_M68K_CF_MASK`,
//!   `68000:BE:32:default` for `EF_M68K_M68000`, and `68000:BE:32:MC68020` otherwise.
//! - `EM_TI_C2000`: `tms320c28:LE:32:default` (cl2000 EABI objects).
//! - `EM_OPENRISC`, `EM_XTENSA`: the language of the header's byte order.
//! - `EM_CSKY`: ABIv1 (`e_flags` bits 28-31 = 1) or ABIv2, in the header's byte order.
//! - `EM_CUDA`: the SASS language of the `sm_NN` in `e_flags` (bits 8-15 from ELF ABI
//!   version 8, bits 0-7 before); an architecture without a language has none.
use object::Endian;
use object::read::elf::FileHeader;

const EM_AVR: u16 = 83;
const EM_MSP430: u16 = 105;
const EM_HEXAGON: u16 = 164;
const EM_AMDGPU: u16 = 224;
const EM_LANAI: u16 = 244;
const EM_LOONGARCH: u16 = 258;
const EM_68K: u16 = 4;
const EM_OPENRISC: u16 = 92;
const EM_XTENSA: u16 = 94;
const EM_CUDA: u16 = 190;
const EM_CSKY: u16 = 252;
const EM_TI_C2000: u16 = 141;

const GFX9: &[u32] = &[0x2c, 0x2d, 0x2e, 0x2f, 0x30, 0x31, 0x32, 0x3f, 0x51];
const GFX10: &[u32] = &[
    0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39, 0x3d, 0x3e, 0x42, 0x45, 0x52, 0x53,
];
const GFX11: &[u32] = &[0x41, 0x43, 0x44, 0x46, 0x47, 0x4a, 0x54, 0x55, 0x58];

pub(crate) fn language_ids() -> impl Iterator<Item = String> {
    [
        "avr8:LE:16:default:gcc",
        "avr8:LE:16:atmega256:gcc",
        "avr8:LE:24:xmega:gcc",
        "TI_MSP430:LE:16:default:default",
        "Hexagon:LE:32:default:default",
        "lanai:BE:32:default:default",
        "Loongarch:LE:32:ilp32f:default",
        "Loongarch:LE:32:ilp32d:default",
        "Loongarch:LE:64:lp64f:default",
        "Loongarch:LE:64:lp64d:default",
        "AMDGPU:LE:64:GFX9:default",
        "AMDGPU:LE:64:GFX10:default",
        "AMDGPU:LE:64:GFX11:default",
        "68000:BE:32:default:default",
        "tms320c28:LE:32:default:default",
        "68000:BE:32:MC68020:default",
        "68000:BE:32:Coldfire:default",
        "OpenRISC:LE:32:default:default",
        "OpenRISC:BE:32:default:default",
        "Xtensa:LE:32:default:default",
        "Xtensa:BE:32:default:default",
        "CSKY:LE:32:v2:default",
        "CSKY:BE:32:v2:default",
        "CSKY:LE:32:v1:default",
        "CSKY:BE:32:v1:default",
        "SASS:LE:64:SM35:default",
        "SASS:LE:64:SM52:default",
        "SASS:LE:64:SM60:default",
        "SASS:LE:64:SM70:default",
        "SASS:LE:64:SM75:default",
        "SASS:LE:64:SM80:default",
        "SASS:LE:64:SM86:default",
        "SASS:LE:64:SM89:default",
        "SASS:LE:64:SM90:default",
        "SASS:LE:64:SM100:default",
        "SASS:LE:64:SM120:default",
    ]
    .into_iter()
    .map(String::from)
}

fn select(machine: u16, flags: u32, wide: bool) -> Option<&'static str> {
    Some(match machine {
        EM_AVR => match flags & 0x7f {
            6 => "avr8:LE:16:atmega256:gcc",
            101..=107 => "avr8:LE:24:xmega:gcc",
            _ => "avr8:LE:16:default:gcc",
        },
        EM_MSP430 => "TI_MSP430:LE:16:default:default",
        EM_HEXAGON => "Hexagon:LE:32:default:default",
        EM_LANAI => "lanai:BE:32:default:default",
        EM_LOONGARCH => match (wide, flags & 7 == 2) {
            (true, true) => "Loongarch:LE:64:lp64f:default",
            (true, false) => "Loongarch:LE:64:lp64d:default",
            (false, true) => "Loongarch:LE:32:ilp32f:default",
            (false, false) => "Loongarch:LE:32:ilp32d:default",
        },
        EM_AMDGPU => {
            let mach = flags & 0xff;
            if GFX9.contains(&mach) {
                "AMDGPU:LE:64:GFX9:default"
            } else if GFX10.contains(&mach) {
                "AMDGPU:LE:64:GFX10:default"
            } else if GFX11.contains(&mach) {
                "AMDGPU:LE:64:GFX11:default"
            } else {
                return None;
            }
        }
        _ => return None,
    })
}

/// The machines whose language follows the header's byte order (`big`) or its ELF ABI
/// version (`abi`, the CUDA `e_flags` layout).
fn select_by_header(machine: u16, flags: u32, big: bool, abi: u8) -> Option<&'static str> {
    Some(match machine {
        EM_68K => {
            if flags & 0xff != 0 {
                "68000:BE:32:Coldfire:default"
            } else if flags & 0x0100_0000 != 0 {
                "68000:BE:32:default:default"
            } else {
                "68000:BE:32:MC68020:default"
            }
        }
        EM_TI_C2000 => "tms320c28:LE:32:default:default",
        EM_OPENRISC if big => "OpenRISC:BE:32:default:default",
        EM_OPENRISC => "OpenRISC:LE:32:default:default",
        EM_XTENSA if big => "Xtensa:BE:32:default:default",
        EM_XTENSA => "Xtensa:LE:32:default:default",
        EM_CSKY => match (flags >> 28 == 1, big) {
            (true, true) => "CSKY:BE:32:v1:default",
            (true, false) => "CSKY:LE:32:v1:default",
            (false, true) => "CSKY:BE:32:v2:default",
            (false, false) => "CSKY:LE:32:v2:default",
        },
        EM_CUDA => {
            let sm = if abi >= 8 {
                (flags >> 8) & 0xff
            } else {
                flags & 0xff
            };
            match sm {
                35 | 37 => "SASS:LE:64:SM35:default",
                50 | 52 | 53 => "SASS:LE:64:SM52:default",
                60..=62 => "SASS:LE:64:SM60:default",
                70 | 72 => "SASS:LE:64:SM70:default",
                75 => "SASS:LE:64:SM75:default",
                80 => "SASS:LE:64:SM80:default",
                86 | 87 => "SASS:LE:64:SM86:default",
                89 => "SASS:LE:64:SM89:default",
                90 => "SASS:LE:64:SM90:default",
                100 | 101 | 103 => "SASS:LE:64:SM100:default",
                120 | 121 => "SASS:LE:64:SM120:default",
                _ => return None,
            }
        }
        _ => return None,
    })
}

pub(crate) fn language_id(file: &object::File<'_>) -> Option<String> {
    let (machine, flags, wide, big, abi) = match file {
        object::File::Elf32(elf) => {
            let h = elf.elf_header();
            let e = elf.endian();
            (
                h.e_machine(e),
                h.e_flags(e),
                false,
                e.is_big_endian(),
                h.e_ident().abi_version,
            )
        }
        object::File::Elf64(elf) => {
            let h = elf.elf_header();
            let e = elf.endian();
            (
                h.e_machine(e),
                h.e_flags(e),
                true,
                e.is_big_endian(),
                h.e_ident().abi_version,
            )
        }
        _ => return None,
    };
    select(machine, flags, wide)
        .or_else(|| select_by_header(machine, flags, big, abi))
        .map(String::from)
}

#[cfg(test)]
mod tests;
