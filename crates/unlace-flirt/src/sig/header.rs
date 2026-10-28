//! The fixed `.sig` header (`idasgn_header_t` in the SDK's `libfuncs.hpp`).

use unlace_ir::ArchId;

use crate::FlirtError;

/// Header fields, normalised to the v10 layout.
#[derive(Clone, Debug, PartialEq, Eq)]
pub struct SigHeader {
    /// Version as stored in the file.
    pub version: u8,
    pub arch: SigArch,
    pub file_types: u32,
    pub os_types: u16,
    pub app_types: u16,
    pub features: SigFeatures,
    pub n_modules: u32,
    pub ctype_crc: u16,
    pub ctype_name: String,
    pub ctype_crc_alt: u16,
    pub ctype_crc_3v: u16,
    /// Length of the leading pattern; the CRC range starts right after it.
    pub pattern_size: u16,
    pub library_name: String,
}

impl SigHeader {
    pub const MAGIC: &'static [u8; 6] = b"IDASGN";
    /// Application type bits for the target bitness.
    pub const APPT_16BIT: u16 = 0x0080;
    pub const APPT_32BIT: u16 = 0x0100;
    pub const APPT_64BIT: u16 = 0x0200;

    /// Whether the signature can describe code of `arch`: the processor
    /// must agree and, when the file states a bitness, so must that.
    pub fn applies_to(&self, arch: ArchId) -> bool {
        if !self.arch.covers(arch) {
            return false;
        }
        let bitness = self.app_types & (Self::APPT_16BIT | Self::APPT_32BIT | Self::APPT_64BIT);
        if bitness == 0 {
            return true;
        }
        let wanted = match arch {
            ArchId::X86_64 | ArchId::AArch64 | ArchId::Mips64 | ArchId::Ppc64 | ArchId::RiscV64 => {
                Self::APPT_64BIT
            }
            // unlace models 16-bit x86 as `ArchId::X86` too.
            ArchId::X86 => Self::APPT_16BIT | Self::APPT_32BIT,
            ArchId::Arm | ArchId::Mips | ArchId::Ppc => Self::APPT_32BIT,
            _ => return true,
        };
        bitness & wanted != 0
    }

    /// Decode the header and return it with the offset of the body.
    pub(super) fn decode(bytes: &[u8]) -> Result<(Self, usize), FlirtError> {
        if bytes.len() < 35 || &bytes[..6] != Self::MAGIC {
            return Err(FlirtError::Sig("not an IDASGN file (bad magic)".into()));
        }
        let version = bytes[6];
        // `sub_814C60`: each older version drops trailing header fields.
        let header_len = match version {
            4 => 35,
            5 => 37,
            6 | 7 => 41,
            8 | 9 => 43,
            10 => 45,
            _ => {
                return Err(FlirtError::Sig(format!("unsupported IDASGN version {version}")));
            }
        };
        let name_len = usize::from(bytes[34]);
        let body_start = header_len + name_len;
        if bytes.len() < body_start {
            return Err(FlirtError::Sig("truncated IDASGN header".into()));
        }
        let u16_at = |off: usize| u16::from_le_bytes([bytes[off], bytes[off + 1]]);
        let n_modules = if version >= 6 {
            u32::from_le_bytes([bytes[37], bytes[38], bytes[39], bytes[40]])
        } else {
            u32::from(u16_at(18))
        };
        let header = SigHeader {
            version,
            arch: SigArch(bytes[7]),
            file_types: u32::from_le_bytes([bytes[8], bytes[9], bytes[10], bytes[11]]),
            os_types: u16_at(12),
            app_types: u16_at(14),
            features: SigFeatures(u16_at(16)),
            n_modules,
            ctype_crc: u16_at(20),
            ctype_name: c_string(&bytes[22..34]),
            ctype_crc_alt: if version >= 5 { u16_at(35) } else { 0 },
            ctype_crc_3v: if version >= 10 { u16_at(43) } else { 0 },
            pattern_size: if version >= 8 { u16_at(41) } else { 32 },
            library_name: String::from_utf8_lossy(&bytes[header_len..body_start]).into_owned(),
        };
        Ok((header, body_start))
    }

    /// Versions 5 and 6 are read as version 7 once the header is fixed up.
    pub(super) fn body_version(&self) -> u8 {
        self.version.max(7)
    }
}

fn c_string(bytes: &[u8]) -> String {
    let end = bytes.iter().position(|&b| b == 0).unwrap_or(bytes.len());
    String::from_utf8_lossy(&bytes[..end]).into_owned()
}

/// Signature file flags (`LS_*`).
#[derive(Clone, Copy, Debug, Default, PartialEq, Eq)]
pub struct SigFeatures(u16);

impl SigFeatures {
    /// Startup signature: the first module is the entry point. Its
    /// referenced "name" is a hex byte to compare instead.
    pub const STARTUP: Self = Self(0x0001);
    /// The ctype table can also be recognised by its name.
    pub const CTYPE: Self = Self(0x0002);
    /// ctype elements are two bytes (256 bytes checksummed, not 128).
    pub const CTYPE2: Self = Self(0x0004);
    pub const CTYPE_ALT: Self = Self(0x0008);
    pub const COMPRESSED: Self = Self(0x0010);
    pub const CTYPE_3V: Self = Self(0x0020);

    pub const fn bits(self) -> u16 {
        self.0
    }

    pub const fn contains(self, other: Self) -> bool {
        self.0 & other.0 == other.0
    }
}

/// IDA processor id (`PLFM_*` in the SDK's `idp.hpp`).
#[derive(Clone, Copy, Debug, PartialEq, Eq, PartialOrd, Ord)]
pub struct SigArch(pub u8);

impl SigArch {
    pub const X86: Self = Self(0);
    pub const Z80: Self = Self(1);
    pub const I8051: Self = Self(3);
    pub const MOS6502: Self = Self(5);
    pub const M68K: Self = Self(7);
    pub const MIPS: Self = Self(12);
    pub const ARM: Self = Self(13);
    pub const TI_C6X: Self = Self(14);
    pub const PPC: Self = Self(15);
    pub const SUPERH: Self = Self(18);
    pub const AVR: Self = Self(20);
    pub const SPARC: Self = Self(23);
    pub const TRICORE: Self = Self(27);
    pub const V850: Self = Self(55);
    pub const MSP430: Self = Self(58);
    pub const ARC: Self = Self(63);
    pub const TI_C28X: Self = Self(65);
    pub const SHARC: Self = Self(68);
    pub const XTENSA: Self = Self(71);
    pub const RISCV: Self = Self(72);
    pub const RX: Self = Self(74);
    pub const WASM: Self = Self(75);

    /// Whether code of `arch` belongs to this IDA processor family. IDA
    /// uses one processor id for both widths of x86, ARM, MIPS and PPC.
    pub fn covers(self, arch: ArchId) -> bool {
        let family = match arch {
            ArchId::X86 | ArchId::X86_64 => Self::X86,
            ArchId::Arm | ArchId::AArch64 => Self::ARM,
            ArchId::Mips | ArchId::Mips64 => Self::MIPS,
            ArchId::Ppc | ArchId::Ppc64 => Self::PPC,
            ArchId::RiscV64 => Self::RISCV,
            ArchId::Z80 => Self::Z80,
            ArchId::I8051 => Self::I8051,
            ArchId::Mos6502 => Self::MOS6502,
            ArchId::M68k => Self::M68K,
            ArchId::TiC6x => Self::TI_C6X,
            ArchId::SuperH => Self::SUPERH,
            ArchId::Avr => Self::AVR,
            ArchId::Sparc => Self::SPARC,
            ArchId::TriCore => Self::TRICORE,
            ArchId::V850 => Self::V850,
            ArchId::Msp430 => Self::MSP430,
            ArchId::Arc => Self::ARC,
            ArchId::TiC28x => Self::TI_C28X,
            ArchId::Sharc => Self::SHARC,
            ArchId::Xtensa => Self::XTENSA,
            ArchId::RxRenesas => Self::RX,
            ArchId::Wasm => Self::WASM,
            _ => return false,
        };
        family == self
    }
}
