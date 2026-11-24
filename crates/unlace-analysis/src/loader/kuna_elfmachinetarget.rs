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
use object::read::elf::FileHeader;

const EM_AVR: u16 = 83;
const EM_MSP430: u16 = 105;
const EM_HEXAGON: u16 = 164;
const EM_AMDGPU: u16 = 224;
const EM_LANAI: u16 = 244;
const EM_LOONGARCH: u16 = 258;

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

pub(crate) fn language_id(file: &object::File<'_>) -> Option<String> {
    let (machine, flags, wide) = match file {
        object::File::Elf32(elf) => {
            let h = elf.elf_header();
            (h.e_machine(elf.endian()), h.e_flags(elf.endian()), false)
        }
        object::File::Elf64(elf) => {
            let h = elf.elf_header();
            (h.e_machine(elf.endian()), h.e_flags(elf.endian()), true)
        }
        _ => return None,
    };
    select(machine, flags, wide).map(String::from)
}

#[cfg(test)]
mod tests {
    use super::select;

    #[test]
    fn machines_and_flags_select_their_language() {
        assert_eq!(select(83, 0x82, false), Some("avr8:LE:16:default:gcc"));
        assert_eq!(select(83, 0x06, false), Some("avr8:LE:16:atmega256:gcc"));
        assert_eq!(select(83, 0x6a, false), Some("avr8:LE:24:xmega:gcc"));
        assert_eq!(
            select(105, 0, false),
            Some("TI_MSP430:LE:16:default:default")
        );
        assert_eq!(
            select(164, 0x68, false),
            Some("Hexagon:LE:32:default:default")
        );
        assert_eq!(select(244, 0, false), Some("lanai:BE:32:default:default"));
        assert_eq!(
            select(258, 0x43, true),
            Some("Loongarch:LE:64:lp64d:default")
        );
        assert_eq!(
            select(258, 0x42, true),
            Some("Loongarch:LE:64:lp64f:default")
        );
        assert_eq!(
            select(258, 0x41, false),
            Some("Loongarch:LE:32:ilp32d:default")
        );
        assert_eq!(select(224, 0x12c, true), Some("AMDGPU:LE:64:GFX9:default"));
        assert_eq!(select(224, 0x36, true), Some("AMDGPU:LE:64:GFX10:default"));
        assert_eq!(select(224, 0x41, true), Some("AMDGPU:LE:64:GFX11:default"));
        assert_eq!(select(224, 0x4c, true), None, "gfx942");
        assert_eq!(select(224, 0x2a, true), None, "gfx803");
        assert_eq!(select(40, 0, false), None, "ARM");
    }

    #[test]
    fn every_selected_id_is_enumerated() {
        let ids: Vec<String> = super::language_ids().collect();
        for (m, f, w) in [
            (83, 2, false),
            (83, 6, false),
            (83, 0x65, false),
            (258, 2, false),
            (224, 0x58, true),
        ] {
            assert!(ids.iter().any(|id| Some(id.as_str()) == select(m, f, w)));
        }
    }
}
