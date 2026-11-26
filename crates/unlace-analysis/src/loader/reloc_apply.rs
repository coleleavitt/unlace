//! Architecture-aware relocation encoding for pre-link objects.
//!
//! `object::Relocation::size()` describes a simple contiguous field. Several
//! ELF instruction relocations consequently report size zero: their bits are
//! scattered through an instruction and must be decoded from `r_type`. This
//! module classifies those entries and applies the ABI formula without touching
//! opcode bits outside the relocation field.
//!
//! Supported instruction families are ARM `CALL`/`JUMP24`, Thumb call/jump,
//! `REL32`, `PREL31`, and the A32/Thumb-2 `MOVW`/`MOVT` pairs; C-SKY `bsr32`;
//! Xtensa `SLOT0_OP` operands;
//! OpenRISC jumps, address halves and split store immediates; AArch64 branch, ADRP page, ADD low-12, and scaled load/
//! store low-12 forms; PowerPC (32- and 64-bit) `REL24`/`PLTREL24`/`LOCAL24PC`
//! and `ADDR24` branches, the 14-bit conditional-branch forms, the absolute,
//! PC-relative (`REL16`) and TOC-relative 16-bit halves, TOC64, and the
//! unaligned and PC-relative data words; AArch64 `ADR_PREL_LO21`,
//! `CONDBR19`/`LD_PREL_LO19`, `TSTBR14` and the `MOVW_UABS_G*` groups; RISC-V
//! `HI20`/`LO12`, the `PCREL_HI20`/`PCREL_LO12` pairs, `CALL`, branches, `JAL`,
//! the compressed branches and the `ADD`/`SUB`/`SET` data forms; the GOT-slot
//! forms (`GOTPCREL*`, `ADR_GOT_PAGE`, `GOT_HI20`, `GOT_PREL`), which address a
//! synthesized GOT slot ([`RelocationSpec::via_got`]); and SPARC
//! `WDISP30`/`WPLT30` calls, the `HI22`/`LO10` and `PC22`/`PC10` `sethi`/`or`
//! pairs, and `DISP32`, plus on SPARC64 the `H44`/`M44`/`L44` and
//! `HH22`/`HM10`/`LM22` address parts, `DISP64` and the `WDISP22`/`WDISP19`/
//! `WDISP16` branches; LoongArch `PCALA_HI20`/`PCALA_LO12`, `CALL36` and the
//! `B26`/`B21`/`B16` branches; Lanai `25`/`21`/`HI16`/`LO16`/`32`; Hexagon
//! PC-relative branches, `immext` payloads and measured `N_X` low bits; and eBPF `64_64` (the two `imm` halves of `lddw`),
//! `64_32` (the subprogram `call` displacement) and the `ABS`/`NODYLD` data
//! words. Generic
//! absolute, relative, PLT-relative, and image-offset relocations support
//! 8/16/32/64-bit fields; an s390x `*DBL` field (`PC32DBL`, `PLT32DBL`, ...)
//! holds the displacement in halfwords. Application preserves REL implicit addends and object
//! endianness, and returns a specific failure classification rather than
//! partially writing a field that is unresolved, malformed, misaligned, outside
//! its range or section, or dependent on a linker veneer or missing TOC.

use object::{
    Architecture, Relocation, RelocationEncoding, RelocationFlags, RelocationKind, elf, macho,
};

#[derive(Debug, Clone, Copy, PartialEq, Eq, Hash, PartialOrd, Ord)]
pub enum RelocationFailure {
    Unsupported,
    UnresolvedTarget,
    MissingToc,
    PastSectionEnd,
    RequiresVeneer,
    Misaligned,
    OutOfRange,
    InvalidEncoding,
}

impl RelocationFailure {
    pub fn label(self) -> &'static str {
        match self {
            Self::Unsupported => "unsupported relocation",
            Self::UnresolvedTarget => "unresolved target",
            Self::MissingToc => "missing .toc section",
            Self::PastSectionEnd => "field extends past section end",
            Self::RequiresVeneer => "interworking target requires a veneer",
            Self::Misaligned => "target displacement is misaligned",
            Self::OutOfRange => "relocation value is out of range",
            Self::InvalidEncoding => "instruction does not match relocation encoding",
        }
    }
}

#[derive(Debug, Clone, Copy)]
enum Specific {
    ArmBranch24,
    ArmThumbBranch24,
    ArmPrel31,
    ArcBranch25 {
        word: bool,
    },
    ArcMiddleEndian32,
    XtensaSlot0,
    XtensaWord,
    Or1kRel26,
    Or1kHalf {
        adjust: bool,
        high: bool,
    },
    Or1kSplit16,
    CskyBsr26,
    ArmMovw {
        thumb: bool,
        top: bool,
        pc: bool,
    },
    PcRelativeData,
    Aarch64Branch26,
    Aarch64AdrPage {
        checked: bool,
    },
    Aarch64AddLo12,
    Aarch64LdstLo12 {
        scale: u8,
    },
    PpcRel24 {
        addend: bool,
    },
    PpcAbs24,
    PpcBranch14 {
        pc: bool,
    },
    PpcHalf16 {
        form: PpcHalf,
        pc: bool,
    },
    Ppc64Toc16 {
        form: PpcHalf,
    },
    Ppc64Toc64,
    Data {
        bytes: u8,
        pc: bool,
    },
    SparcWdisp30,
    SparcHi22 {
        pc: bool,
    },
    SparcLo10 {
        pc: bool,
    },
    SparcSethi {
        shift: u8,
    },
    SparcSimm {
        shift: u8,
        mask: u16,
    },
    SparcDisp {
        bits: u8,
    },
    SparcWdisp16,
    LarchPcalaHi20,
    LarchLo12,
    LarchCall36,
    LarchBranch {
        bits: u8,
    },
    LanaiBranch25,
    LanaiAbs21,
    LanaiHalf {
        high: bool,
    },
    CudaAbs32 {
        high: bool,
    },
    CudaAbs47,
    C28xAbs22,
    C28xData {
        words: u8,
    },
    HexBranch {
        mask: u32,
        extended: bool,
    },
    HexExtender {
        pc: bool,
    },
    HexLow6 {
        form: HexLow6,
    },
    AvrPcrel {
        bits: u8,
    },
    AvrLdi {
        shift: u8,
        neg: bool,
        pm: bool,
    },
    AvrCall,
    AvrWordPm,
    AmdgpuHalf {
        pc: bool,
        high: bool,
    },
    Aarch64AdrLo21,
    Aarch64Imm19 {
        load: bool,
    },
    Aarch64Imm14,
    Aarch64Movw {
        shift: u8,
        checked: bool,
    },
    RiscvHi20,
    RiscvLo12 {
        store: bool,
    },
    RiscvPcrelHi20,
    RiscvPcrelLo12 {
        store: bool,
    },
    RiscvCall,
    RiscvBranch,
    RiscvJal,
    RiscvRvcBranch,
    RiscvRvcJump,
    RiscvAddSub {
        sub: bool,
    },
    RiscvSet,
    Riscv6 {
        sub: bool,
    },
    PcRel32,
    BpfImm64,
    BpfCall,
    /// An AArch64 local-exec TLS relocation (`R_AARCH64_TLSLE_*`): the ADD
    /// high 12 bits (`hi`), or the ADD/LDST low 12 bits of the symbol's
    /// thread-pointer offset, which the caller passes as the symbol.
    Aarch64Tprel {
        hi: bool,
        scale: u8,
        ldst: bool,
    },
    /// An arm64e `ARM64_RELOC_AUTHENTICATED_POINTER` word: the low 32 bits
    /// hold the addend, the high ones the signing schema.
    MachoAuthPointer,
    Generic {
        bits: u8,
    },
}

impl Specific {
    /// An AArch64 instruction field. A64 instructions are little-endian in a
    /// big-endian image too; only data is big-endian there.
    fn is_aarch64_instruction(self) -> bool {
        matches!(
            self,
            Specific::Aarch64Branch26
                | Specific::Aarch64AdrPage { .. }
                | Specific::Aarch64AddLo12
                | Specific::Aarch64LdstLo12 { .. }
                | Specific::Aarch64AdrLo21
                | Specific::Aarch64Imm19 { .. }
                | Specific::Aarch64Imm14
                | Specific::Aarch64Movw { .. }
                | Specific::Aarch64Tprel { .. }
        )
    }
}

/// The Hexagon `N_X` immediate relocations that take the low six bits of an
/// `immext`-extended value.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
enum HexLow6 {
    R16,
    R11,
    R10,
    R6,
}

#[derive(Debug, Clone, Copy)]
enum PpcHalf {
    Plain,
    Lo,
    Hi,
    Ha,
    Ds,
    LoDs,
    High,
    HighA,
    Higher,
    HigherA,
    Highest,
    HighestA,
}

/// A classified relocation. Classification determines the actual byte width,
/// including instruction relocations whose generic size is zero.
#[derive(Debug, Clone, Copy)]
pub struct RelocationSpec {
    specific: Specific,
    width: usize,
    call: bool,
    got: bool,
}

#[derive(Debug, Clone, Copy)]
struct RelocationInfo {
    kind: RelocationKind,
    encoding: RelocationEncoding,
    size: u8,
    addend: i64,
    implicit_addend: bool,
    r_type: Option<u32>,
}

impl From<&Relocation> for RelocationInfo {
    fn from(reloc: &Relocation) -> Self {
        Self {
            kind: reloc.kind(),
            encoding: reloc.encoding(),
            size: reloc.size(),
            addend: reloc.addend(),
            implicit_addend: reloc.has_implicit_addend(),
            r_type: match reloc.flags() {
                RelocationFlags::Elf { r_type } => Some(r_type),
                _ => None,
            },
        }
    }
}

impl RelocationSpec {
    pub fn width(self) -> usize {
        self.width
    }

    pub fn is_call(self) -> bool {
        self.call
    }

    /// The field addresses the target's GOT slot rather than the target: the
    /// caller passes the slot's address as the symbol.
    pub fn via_got(self) -> bool {
        self.got
    }

    /// Refine relocation callness from the instruction field when the ELF
    /// relocation type is shared by branch and call encodings.
    pub fn refine_call_from_field(mut self, field: &[u8], little_endian: bool) -> Self {
        if matches!(self.specific, Specific::ArmBranch24) && !self.call && field.len() == 4 {
            let instruction = read_u32(field, little_endian);
            if instruction & 0x0f00_0000 == 0x0b00_0000 {
                self.call = true;
            }
        }
        if matches!(
            self.specific,
            Specific::PpcRel24 { .. } | Specific::PpcAbs24 | Specific::PpcBranch14 { .. }
        ) && field.len() == 4
        {
            self.call = read_u32(field, little_endian) & 1 != 0;
        }
        self
    }

    /// An AArch64 TLSLE relocation: the caller passes the target's
    /// thread-pointer offset as the symbol.
    pub fn is_tprel(self) -> bool {
        matches!(self.specific, Specific::Aarch64Tprel { .. })
    }

    pub fn requires_symbol(self) -> bool {
        !matches!(self.specific, Specific::Ppc64Toc64)
    }

    /// Whether the patched field is a branch or call instruction, so its target
    /// is code. A tail call to an undefined symbol is spelled as a plain jump
    /// relocation, which is not a call but still needs an extern function slot.
    pub fn targets_code(self) -> bool {
        self.is_call()
            || matches!(
                self.specific,
                Specific::ArmBranch24
                    | Specific::ArmThumbBranch24
                    | Specific::Aarch64Branch26
                    | Specific::PpcRel24 { .. }
                    | Specific::PpcAbs24
                    | Specific::PpcBranch14 { .. }
                    | Specific::SparcWdisp30
                    | Specific::SparcDisp { .. }
                    | Specific::SparcWdisp16
                    | Specific::LarchCall36
                    | Specific::LarchBranch { .. }
                    | Specific::LanaiBranch25
                    | Specific::ArcBranch25 { .. }
                    | Specific::XtensaSlot0
                    | Specific::Or1kRel26
                    | Specific::CskyBsr26
                    | Specific::AvrPcrel { bits: 12 }
                    | Specific::AvrCall
                    | Specific::CudaAbs47
                    | Specific::HexBranch { .. }
                    | Specific::Aarch64Imm19 { load: false }
                    | Specific::Aarch64Imm14
                    | Specific::RiscvCall
                    | Specific::RiscvJal
                    | Specific::RiscvBranch
                    | Specific::RiscvRvcJump
                    | Specific::RiscvRvcBranch
                    | Specific::BpfCall
            )
    }
}

/// [`classify`] for a Mach-O relocation, by its `r_type`: `object` gives every
/// ARM64 instruction form, x86-64's `SIGNED_{1,2,4}`, `GOT`, `GOT_LOAD` and `TLV`
/// no generic kind. `insn` is the little-endian word at the place, which an
/// `ARM64_RELOC_PAGEOFF12` needs: the one type covers `add` and every
/// load/store size. A `GOT` or `TLV` form addresses the target's slot.
pub fn classify_macho(
    arch: Architecture,
    reloc: &Relocation,
    insn: Option<u32>,
) -> Result<Option<RelocationSpec>, RelocationFailure> {
    let RelocationFlags::MachO {
        r_type,
        r_pcrel,
        r_length,
    } = reloc.flags()
    else {
        return classify(arch, reloc);
    };
    let bytes = 1u8 << r_length.min(3);
    let spec = |specific, width, call, got| {
        Ok(Some(RelocationSpec {
            specific,
            width,
            call,
            got,
        }))
    };
    match arch {
        Architecture::Aarch64 | Architecture::Aarch64_Ilp32 => match r_type {
            macho::ARM64_RELOC_UNSIGNED if matches!(bytes, 4 | 8) => spec(
                Specific::Data { bytes, pc: false },
                usize::from(bytes),
                false,
                false,
            ),
            macho::ARM64_RELOC_BRANCH26 => spec(
                Specific::Aarch64Branch26,
                4,
                insn.is_none_or(|i| i & 0x8000_0000 != 0),
                false,
            ),
            macho::ARM64_RELOC_PAGE21 => {
                spec(Specific::Aarch64AdrPage { checked: true }, 4, false, false)
            }
            macho::ARM64_RELOC_PAGEOFF12 => match insn.and_then(macho_lo12_form) {
                Some(form) => spec(form, 4, false, false),
                None => Err(RelocationFailure::InvalidEncoding),
            },
            macho::ARM64_RELOC_GOT_LOAD_PAGE21 | macho::ARM64_RELOC_TLVP_LOAD_PAGE21 => {
                spec(Specific::Aarch64AdrPage { checked: true }, 4, false, true)
            }
            macho::ARM64_RELOC_GOT_LOAD_PAGEOFF12 | macho::ARM64_RELOC_TLVP_LOAD_PAGEOFF12 => {
                match insn.and_then(macho_lo12_form) {
                    Some(form) => spec(form, 4, false, true),
                    None => Err(RelocationFailure::InvalidEncoding),
                }
            }
            macho::ARM64_RELOC_POINTER_TO_GOT if matches!(bytes, 4 | 8) => spec(
                Specific::Data { bytes, pc: r_pcrel },
                usize::from(bytes),
                false,
                true,
            ),
            macho::ARM64_RELOC_AUTHENTICATED_POINTER => {
                spec(Specific::MachoAuthPointer, 8, false, false)
            }
            _ => Err(RelocationFailure::Unsupported),
        },
        Architecture::X86_64 => match r_type {
            macho::X86_64_RELOC_GOT_LOAD | macho::X86_64_RELOC_GOT | macho::X86_64_RELOC_TLV => {
                spec(Specific::PcRel32, 4, false, true)
            }
            macho::X86_64_RELOC_SIGNED_1
            | macho::X86_64_RELOC_SIGNED_2
            | macho::X86_64_RELOC_SIGNED_4 => {
                spec(Specific::Data { bytes: 4, pc: true }, 4, false, false)
            }
            _ => classify(arch, reloc),
        },
        _ => classify(arch, reloc),
    }
}

/// The low-12 form of an ARM64 instruction a `PAGEOFF12` patches: `add`
/// (immediate), or a load/store with an unsigned offset scaled by its access
/// size (`opc<1>:size` for a 128-bit SIMD access).
fn macho_lo12_form(insn: u32) -> Option<Specific> {
    if insn & 0x7f80_0000 == 0x1100_0000 {
        return Some(Specific::Aarch64AddLo12);
    }
    if insn & 0x3b00_0000 != 0x3900_0000 {
        return None;
    }
    let size = (insn >> 30) as u8;
    let simd = insn & 0x0400_0000 != 0;
    let wide = insn & 0x0080_0000 != 0;
    let scale = if simd && size == 0 && wide { 4 } else { size };
    Some(Specific::Aarch64LdstLo12 { scale })
}

/// `EM_LANAI`, which the `object` crate maps to no architecture.
pub const EM_LANAI: u16 = 244;
const R_LANAI_21: u32 = 1;
const R_LANAI_25: u32 = 3;
const R_LANAI_32: u32 = 4;
const R_LANAI_HI16: u32 = 5;
const R_LANAI_LO16: u32 = 6;

/// [`classify`] for an ELF object whose `e_machine` is `machine`: the machines
/// `object` has no architecture for (`Architecture::Unknown`) are told apart
/// by it.
pub fn classify_elf(
    arch: Architecture,
    machine: Option<u16>,
    reloc: &Relocation,
) -> Result<Option<RelocationSpec>, RelocationFailure> {
    match (arch, machine) {
        (Architecture::Unknown, Some(EM_LANAI)) => classify_lanai(RelocationInfo::from(reloc)),
        (Architecture::Unknown, Some(EM_OPENRISC)) => classify_or1k(RelocationInfo::from(reloc)),
        (Architecture::Unknown, Some(EM_CUDA)) => classify_cuda(RelocationInfo::from(reloc)),
        (Architecture::Unknown, Some(EM_TI_C2000)) => classify_c28x(RelocationInfo::from(reloc)),
        (Architecture::Unknown, Some(EM_AMDGPU)) => classify_amdgpu(RelocationInfo::from(reloc)),
        (Architecture::Unknown, Some(EM_ARC_COMPACT2)) => classify_arc(RelocationInfo::from(reloc)),
        _ => classify(arch, reloc),
    }
}

/// `EM_ARC_COMPACT2` (ARC EM/HS), which the `object` crate maps to no architecture.
pub const EM_ARC_COMPACT2: u16 = 195;
const R_ARC_32: u32 = 4;
const R_ARC_S25H_PCREL: u32 = 16;
const R_ARC_S25W_PCREL: u32 = 17;
const R_ARC_32_ME: u32 = 27;
const R_ARC_PC32: u32 = 50;
const R_ARC_S25H_PCREL_PLT: u32 = 61;
const R_ARC_S25W_PCREL_PLT: u32 = 76;

/// ARCv2 (little-endian data, RELA). A 32-bit instruction or long immediate is
/// two halfwords, the high one first ("middle-endian"). `S25W_PCREL` (`bl`)
/// and `S25H_PCREL` (`b`), with their `_PLT` spellings taken to the symbol
/// itself, are the displacement from `P & !3` in 23 word or 24 halfword bits;
/// `32_ME` is a middle-endian long immediate; `32` and `PC32` data words. The
/// small-data (`SDA*`, against `_SDA_BASE_`) and GOT forms are unsupported.
fn classify_arc(reloc: RelocationInfo) -> Result<Option<RelocationSpec>, RelocationFailure> {
    let (specific, call) = match reloc.r_type {
        Some(0) => return Ok(None),
        Some(R_ARC_S25W_PCREL | R_ARC_S25W_PCREL_PLT) => {
            (Specific::ArcBranch25 { word: true }, true)
        }
        Some(R_ARC_S25H_PCREL | R_ARC_S25H_PCREL_PLT) => {
            (Specific::ArcBranch25 { word: false }, false)
        }
        Some(R_ARC_32_ME) => (Specific::ArcMiddleEndian32, false),
        Some(R_ARC_32) => (
            Specific::Data {
                bytes: 4,
                pc: false,
            },
            false,
        ),
        Some(R_ARC_PC32) => (Specific::Data { bytes: 4, pc: true }, false),
        _ => return Err(RelocationFailure::Unsupported),
    };
    Ok(Some(RelocationSpec {
        specific,
        width: 4,
        call,
        got: false,
    }))
}

/// `EM_OPENRISC`, which the `object` crate maps to no architecture.
pub const EM_OPENRISC: u16 = 92;
const R_OR1K_32: u32 = 1;
const R_OR1K_LO_16_IN_INSN: u32 = 4;
const R_OR1K_HI_16_IN_INSN: u32 = 5;
const R_OR1K_INSN_REL_26: u32 = 6;
const R_OR1K_32_PCREL: u32 = 9;
const R_OR1K_PLT26: u32 = 15;
const R_OR1K_AHI16: u32 = 35;
const R_OR1K_SLO16: u32 = 39;

/// OpenRISC 1000 (big-endian, RELA): `INSN_REL_26` (and `PLT26`, taken to the
/// symbol itself) is the word displacement of `l.j`/`l.jal`/`l.bf`/`l.bnf`;
/// `HI_16_IN_INSN`/`AHI16` the high half of `S + A` (`AHI` rounded for the
/// signed low half) and `LO_16_IN_INSN` the low half, in the imm16 of
/// `l.movhi`/`l.ori`/`l.addi`/a load; `SLO16` the low half split as a store's
/// immediate (bits 25..21 and 10..0); `32` and `32_PCREL` data words.
fn classify_or1k(reloc: RelocationInfo) -> Result<Option<RelocationSpec>, RelocationFailure> {
    let (specific, call) = match reloc.r_type {
        Some(0) => return Ok(None),
        Some(R_OR1K_INSN_REL_26 | R_OR1K_PLT26) => (Specific::Or1kRel26, true),
        Some(R_OR1K_LO_16_IN_INSN) => (
            Specific::Or1kHalf {
                adjust: false,
                high: false,
            },
            false,
        ),
        Some(R_OR1K_HI_16_IN_INSN) => (
            Specific::Or1kHalf {
                adjust: false,
                high: true,
            },
            false,
        ),
        Some(R_OR1K_AHI16) => (
            Specific::Or1kHalf {
                adjust: true,
                high: true,
            },
            false,
        ),
        Some(R_OR1K_SLO16) => (Specific::Or1kSplit16, false),
        Some(R_OR1K_32) => (
            Specific::Data {
                bytes: 4,
                pc: false,
            },
            false,
        ),
        Some(R_OR1K_32_PCREL) => (Specific::Data { bytes: 4, pc: true }, false),
        _ => return Err(RelocationFailure::Unsupported),
    };
    Ok(Some(RelocationSpec {
        specific,
        width: 4,
        call,
        got: false,
    }))
}

/// Lanai (big-endian, RELA): `25` is the absolute word address of a `bcc`
/// (bits 24..2), `21` the absolute 21-bit address of an SLS/SLI load, store or
/// `mov` (bits 22..18 and 15..0), `HI16`/`LO16` the halves of `S + A` in an
/// RI immediate, and `32` a data word.
fn classify_lanai(reloc: RelocationInfo) -> Result<Option<RelocationSpec>, RelocationFailure> {
    let specific = match reloc.r_type {
        Some(0) => return Ok(None),
        Some(R_LANAI_25) => Specific::LanaiBranch25,
        Some(R_LANAI_21) => Specific::LanaiAbs21,
        Some(R_LANAI_HI16) => Specific::LanaiHalf { high: true },
        Some(R_LANAI_LO16) => Specific::LanaiHalf { high: false },
        Some(R_LANAI_32) => Specific::Data {
            bytes: 4,
            pc: false,
        },
        _ => return Err(RelocationFailure::Unsupported),
    };
    Ok(Some(RelocationSpec {
        specific,
        width: 4,
        call: false,
        got: false,
    }))
}

const R_AVR_7_PCREL: u32 = 2;
const R_AVR_13_PCREL: u32 = 3;
const R_AVR_16_PM: u32 = 5;
const R_AVR_LO8_LDI: u32 = 6;
const R_AVR_HH8_LDI_PM: u32 = 14;
const R_AVR_CALL: u32 = 18;

/// AVR (little-endian 16-bit words, RELA): `13_PCREL` (`rjmp`/`rcall`) and
/// `7_PCREL` (`brbs`/`brbc`) take the word displacement from the next
/// instruction, `(S + A - P - 2) >> 1`; the `LDI` family (6..14) a byte of
/// `S + A` (`LO8`/`HI8`/`HH8`), of its negation (`_NEG`) or of the word
/// address `(S + A) >> 1` (`_PM`) into `ldi`'s split K; `CALL` the 22-bit word
/// address of `call`/`jmp`; `16_PM` a data word holding a word address.
fn classify_avr(r_type: u32) -> Option<(Specific, bool)> {
    Some(match r_type {
        R_AVR_13_PCREL => (Specific::AvrPcrel { bits: 12 }, false),
        R_AVR_7_PCREL => (Specific::AvrPcrel { bits: 7 }, false),
        R_AVR_LO8_LDI..=R_AVR_HH8_LDI_PM => {
            let n = r_type - R_AVR_LO8_LDI;
            let shift = (n % 3) as u8 * 8;
            (
                Specific::AvrLdi {
                    shift,
                    neg: n / 3 == 1,
                    pm: n / 3 == 2,
                },
                false,
            )
        }
        R_AVR_CALL => (Specific::AvrCall, false),
        R_AVR_16_PM => (Specific::AvrWordPm, false),
        _ => return None,
    })
}

/// `EM_AMDGPU`, which the `object` crate maps to no architecture.
pub const EM_AMDGPU: u16 = 224;
const R_AMDGPU_ABS32_LO: u32 = 1;
const R_AMDGPU_ABS32_HI: u32 = 2;
const R_AMDGPU_ABS64: u32 = 3;
const R_AMDGPU_REL32: u32 = 4;
const R_AMDGPU_REL64: u32 = 5;
const R_AMDGPU_ABS32: u32 = 6;
const R_AMDGPU_REL32_LO: u32 = 10;
const R_AMDGPU_REL32_HI: u32 = 11;

/// AMDGPU (little-endian, RELA): the 32-bit literal halves of `S + A`
/// (`ABS32_LO`/`_HI`) and of `S + A - P` (`REL32_LO`/`_HI`, the
/// `s_getpc_b64` + `s_add_u32`/`s_addc_u32` pair of a call or a global, whose
/// addend already counts from the `s_getpc_b64` result), and the 32- and
/// 64-bit data words.
fn classify_amdgpu(reloc: RelocationInfo) -> Result<Option<RelocationSpec>, RelocationFailure> {
    let half = |pc, high| Specific::AmdgpuHalf { pc, high };
    let (specific, width) = match reloc.r_type {
        Some(0) => return Ok(None),
        Some(R_AMDGPU_ABS32_LO) => (half(false, false), 4),
        Some(R_AMDGPU_ABS32_HI) => (half(false, true), 4),
        Some(R_AMDGPU_REL32_LO) => (half(true, false), 4),
        Some(R_AMDGPU_REL32_HI) => (half(true, true), 4),
        Some(R_AMDGPU_ABS32) => (
            Specific::Data {
                bytes: 4,
                pc: false,
            },
            4,
        ),
        Some(R_AMDGPU_REL32) => (Specific::Data { bytes: 4, pc: true }, 4),
        Some(R_AMDGPU_ABS64) => (
            Specific::Data {
                bytes: 8,
                pc: false,
            },
            8,
        ),
        Some(R_AMDGPU_REL64) => (Specific::Data { bytes: 8, pc: true }, 8),
        _ => return Err(RelocationFailure::Unsupported),
    };
    Ok(Some(RelocationSpec {
        specific,
        width,
        call: false,
        got: false,
    }))
}

/// `EM_TI_C2000`, which the `object` crate maps to no architecture.
pub const EM_TI_C2000: u16 = 141;
const R_C28X_ABS16: u32 = 2;
const R_C28X_ABS32: u32 = 3;
const R_C28X_ABS22: u32 = 5;
/// The type cl2000 puts on `LCR #addr` calls. TI's EABI (SPRAC71C) lists no type 20; its field is
/// the same 22-bit absolute word address as `R_C28X_ABS22` (type 5) on `MOVL XARn, #addr`.
const R_C28X_ABS22_CALL: u32 = 20;

/// TI C28x (SPRAC71C table 11-5). Addresses are in 16-bit words, so a field holds the target's
/// byte address halved. `ABS22` is split over a little-endian word pair: bits 21..16 in the low 6
/// bits of the first word, bits 15..0 in the second. `ABS16`/`ABS32` are data words. REL entries
/// keep their addend in the field.
fn classify_c28x(reloc: RelocationInfo) -> Result<Option<RelocationSpec>, RelocationFailure> {
    let (specific, width, call) = match reloc.r_type {
        Some(0) => return Ok(None),
        Some(R_C28X_ABS16) => (Specific::C28xData { words: 1 }, 2, false),
        Some(R_C28X_ABS32) => (Specific::C28xData { words: 2 }, 4, false),
        Some(R_C28X_ABS22) => (Specific::C28xAbs22, 4, false),
        Some(R_C28X_ABS22_CALL) => (Specific::C28xAbs22, 4, true),
        _ => return Err(RelocationFailure::Unsupported),
    };
    Ok(Some(RelocationSpec {
        specific,
        width,
        call,
        got: false,
    }))
}

/// `EM_CUDA` (cubin), which the `object` crate maps to no architecture.
pub const EM_CUDA: u16 = 190;
const R_CUDA_64: u32 = 2;
const R_CUDA_ABS32_LO_32: u32 = 0x38;
const R_CUDA_ABS32_HI_32: u32 = 0x39;
const R_CUDA_ABS47_34: u32 = 0x3a;
const R_CUDA_YIELD_CLEAR_PRED4_87: u32 = 0x44;
const R_CUDA_YIELD_OPCODE9_0: u32 = 0x45;
const R_CUDA_UNUSED_CLEAR64: u32 = 0x49;

/// CUDA (little-endian 128-bit SASS words, REL and RELA): `ABS32_LO_32`/`ABS32_HI_32` put
/// the low or high word of `S + A` into bits 32..63 (the 32-bit immediate of `MOV`/`IADD3`),
/// `ABS47_34` puts `(S + A) >> 2` into bits 34..80 (the target of `CALL.ABS`), and `64` is a
/// data doubleword. The yield and unused-clear relocations only let the driver patch scheduling
/// bits, so they are no-ops here. Constant-bank offsets (`CONST_FIELD*`) stay unsupported: a
/// bank offset is not the symbol's load address.
fn classify_cuda(reloc: RelocationInfo) -> Result<Option<RelocationSpec>, RelocationFailure> {
    let (specific, width, call) = match reloc.r_type {
        Some(0)
        | Some(R_CUDA_YIELD_CLEAR_PRED4_87)
        | Some(R_CUDA_YIELD_OPCODE9_0)
        | Some(R_CUDA_UNUSED_CLEAR64) => return Ok(None),
        Some(R_CUDA_64) => (
            Specific::Data {
                bytes: 8,
                pc: false,
            },
            8,
            false,
        ),
        Some(R_CUDA_ABS32_LO_32) => (Specific::CudaAbs32 { high: false }, 8, false),
        Some(R_CUDA_ABS32_HI_32) => (Specific::CudaAbs32 { high: true }, 8, false),
        Some(R_CUDA_ABS47_34) => (Specific::CudaAbs47, 16, true),
        _ => return Err(RelocationFailure::Unsupported),
    };
    Ok(Some(RelocationSpec {
        specific,
        width,
        call,
        got: false,
    }))
}

const R_HEX_B22_PCREL: u32 = 1;
const R_HEX_B15_PCREL: u32 = 2;
const R_HEX_B7_PCREL: u32 = 3;
const R_HEX_B13_PCREL: u32 = 14;
const R_HEX_B9_PCREL: u32 = 15;
const R_HEX_B32_PCREL_X: u32 = 16;
const R_HEX_32_6_X: u32 = 17;
const R_HEX_B22_PCREL_X: u32 = 18;
const R_HEX_B15_PCREL_X: u32 = 19;
const R_HEX_B13_PCREL_X: u32 = 20;
const R_HEX_B9_PCREL_X: u32 = 21;
const R_HEX_B7_PCREL_X: u32 = 22;
const R_HEX_16_X: u32 = 23;
const R_HEX_11_X: u32 = 25;
const R_HEX_10_X: u32 = 26;
const R_HEX_6_X: u32 = 30;

/// The Hexagon instruction relocations: the PC-relative branches (`B22`, `B15`,
/// `B13`, `B9`, `B7`) by their ABI masks, the 26-bit `immext` payloads
/// (`B32_PCREL_X`, `32_6_X`), the low six bits the extended branch and
/// immediate forms (`*_X`) keep in the instruction itself.
fn classify_hexagon(r_type: u32) -> Option<(Specific, bool)> {
    let branch = |mask, extended| Specific::HexBranch { mask, extended };
    Some(match r_type {
        R_HEX_B22_PCREL => (branch(0x01ff_3ffe, false), true),
        R_HEX_B15_PCREL => (branch(0x00df_20fe, false), false),
        R_HEX_B13_PCREL => (branch(0x0020_2ffe, false), false),
        R_HEX_B9_PCREL => (branch(0x0030_00fe, false), false),
        R_HEX_B7_PCREL => (branch(0x0000_1f18, false), false),
        R_HEX_B22_PCREL_X => (branch(0x01ff_3ffe, true), true),
        R_HEX_B15_PCREL_X => (branch(0x00df_20fe, true), false),
        R_HEX_B13_PCREL_X => (branch(0x0020_2ffe, true), false),
        R_HEX_B9_PCREL_X => (branch(0x0030_00fe, true), false),
        R_HEX_B7_PCREL_X => (branch(0x0000_1f18, true), false),
        R_HEX_B32_PCREL_X => (Specific::HexExtender { pc: true }, false),
        R_HEX_32_6_X => (Specific::HexExtender { pc: false }, false),
        R_HEX_16_X => (Specific::HexLow6 { form: HexLow6::R16 }, false),
        R_HEX_11_X => (Specific::HexLow6 { form: HexLow6::R11 }, false),
        R_HEX_10_X => (Specific::HexLow6 { form: HexLow6::R10 }, false),
        R_HEX_6_X => (Specific::HexLow6 { form: HexLow6::R6 }, false),
        _ => return None,
    })
}

/// `Ok(None)` means a no-op relocation (`R_*_NONE`).
pub fn classify(
    arch: Architecture,
    reloc: &Relocation,
) -> Result<Option<RelocationSpec>, RelocationFailure> {
    classify_info(arch, RelocationInfo::from(reloc))
}

fn classify_info(
    arch: Architecture,
    reloc: RelocationInfo,
) -> Result<Option<RelocationSpec>, RelocationFailure> {
    let r_type = reloc.r_type;

    let specific = match (arch, r_type) {
        (Architecture::Arm, Some(elf::R_ARM_NONE))
        | (Architecture::Arm, Some(elf::R_ARM_V4BX))
        | (Architecture::Aarch64, Some(elf::R_AARCH64_NONE))
        | (Architecture::PowerPc64, Some(elf::R_PPC64_NONE))
        | (
            Architecture::Sparc | Architecture::Sparc32Plus | Architecture::Sparc64,
            Some(elf::R_SPARC_NONE),
        ) => {
            return Ok(None);
        }

        (Architecture::Arm, Some(elf::R_ARM_CALL)) => Some((Specific::ArmBranch24, true)),
        (Architecture::Arm, Some(elf::R_ARM_JUMP24)) => Some((Specific::ArmBranch24, false)),
        // The ABI's modern name for relocation 10 is R_ARM_THM_CALL; object
        // retains the historical R_ARM_THM_PC22 spelling for the same value.
        (Architecture::Arm, Some(elf::R_ARM_THM_PC22)) => Some((Specific::ArmThumbBranch24, true)),
        (Architecture::Arm, Some(elf::R_ARM_THM_JUMP24)) => {
            Some((Specific::ArmThumbBranch24, false))
        }
        (Architecture::Arm, Some(elf::R_ARM_REL32)) => Some((Specific::PcRelativeData, false)),
        (Architecture::Arm, Some(elf::R_ARM_PREL31)) => Some((Specific::ArmPrel31, false)),
        (Architecture::Arm, Some(t @ 43..=50)) => {
            let n = t - 43;
            Some((
                Specific::ArmMovw {
                    thumb: n >= 4,
                    top: n % 2 == 1,
                    pc: n % 4 >= 2,
                },
                false,
            ))
        }

        (Architecture::Aarch64, Some(elf::R_AARCH64_CALL26)) => {
            Some((Specific::Aarch64Branch26, true))
        }
        (Architecture::Aarch64, Some(elf::R_AARCH64_JUMP26)) => {
            Some((Specific::Aarch64Branch26, false))
        }
        (Architecture::Aarch64, Some(elf::R_AARCH64_ADR_PREL_PG_HI21)) => {
            Some((Specific::Aarch64AdrPage { checked: true }, false))
        }
        (Architecture::Aarch64, Some(elf::R_AARCH64_ADR_PREL_PG_HI21_NC)) => {
            Some((Specific::Aarch64AdrPage { checked: false }, false))
        }
        (Architecture::Aarch64, Some(elf::R_AARCH64_ADD_ABS_LO12_NC)) => {
            Some((Specific::Aarch64AddLo12, false))
        }
        (Architecture::Aarch64, Some(elf::R_AARCH64_LDST8_ABS_LO12_NC)) => {
            Some((Specific::Aarch64LdstLo12 { scale: 0 }, false))
        }
        (Architecture::Aarch64, Some(elf::R_AARCH64_LDST16_ABS_LO12_NC)) => {
            Some((Specific::Aarch64LdstLo12 { scale: 1 }, false))
        }
        (Architecture::Aarch64, Some(elf::R_AARCH64_LDST32_ABS_LO12_NC)) => {
            Some((Specific::Aarch64LdstLo12 { scale: 2 }, false))
        }
        (Architecture::Aarch64, Some(elf::R_AARCH64_LDST64_ABS_LO12_NC)) => {
            Some((Specific::Aarch64LdstLo12 { scale: 3 }, false))
        }
        (Architecture::Aarch64, Some(elf::R_AARCH64_LDST128_ABS_LO12_NC)) => {
            Some((Specific::Aarch64LdstLo12 { scale: 4 }, false))
        }
        (Architecture::Aarch64, Some(elf::R_AARCH64_TLSLE_ADD_TPREL_HI12)) => Some((
            Specific::Aarch64Tprel {
                hi: true,
                scale: 0,
                ldst: false,
            },
            false,
        )),
        (
            Architecture::Aarch64,
            Some(elf::R_AARCH64_TLSLE_ADD_TPREL_LO12 | elf::R_AARCH64_TLSLE_ADD_TPREL_LO12_NC),
        ) => Some((
            Specific::Aarch64Tprel {
                hi: false,
                scale: 0,
                ldst: false,
            },
            false,
        )),
        (
            Architecture::Aarch64,
            Some(
                t @ elf::R_AARCH64_TLSLE_LDST8_TPREL_LO12
                    ..=elf::R_AARCH64_TLSLE_LDST64_TPREL_LO12_NC,
            ),
        ) => Some((
            Specific::Aarch64Tprel {
                hi: false,
                scale: ((t - elf::R_AARCH64_TLSLE_LDST8_TPREL_LO12) / 2) as u8,
                ldst: true,
            },
            false,
        )),
        (
            Architecture::Aarch64,
            Some(
                elf::R_AARCH64_TLSLE_LDST128_TPREL_LO12
                | elf::R_AARCH64_TLSLE_LDST128_TPREL_LO12_NC,
            ),
        ) => Some((
            Specific::Aarch64Tprel {
                hi: false,
                scale: 4,
                ldst: true,
            },
            false,
        )),

        (Architecture::PowerPc, Some(elf::R_PPC_REL24 | elf::R_PPC_LOCAL24PC))
        | (Architecture::PowerPc64, Some(elf::R_PPC64_REL24 | R_PPC64_REL24_NOTOC)) => {
            Some((Specific::PpcRel24 { addend: true }, true))
        }
        // A `-fPIC` object's `PLTREL24` addend locates the caller's `.got2`
        // for the linker's call stub; it is no part of the branch target.
        (Architecture::PowerPc, Some(elf::R_PPC_PLTREL24)) => {
            Some((Specific::PpcRel24 { addend: false }, true))
        }
        (Architecture::PowerPc | Architecture::PowerPc64, Some(elf::R_PPC_ADDR24)) => {
            Some((Specific::PpcAbs24, true))
        }
        (
            Architecture::PowerPc | Architecture::PowerPc64,
            Some(elf::R_PPC_REL14 | elf::R_PPC_REL14_BRTAKEN | elf::R_PPC_REL14_BRNTAKEN),
        ) => Some((Specific::PpcBranch14 { pc: true }, false)),
        (
            Architecture::PowerPc | Architecture::PowerPc64,
            Some(elf::R_PPC_ADDR14 | elf::R_PPC_ADDR14_BRTAKEN | elf::R_PPC_ADDR14_BRNTAKEN),
        ) => Some((Specific::PpcBranch14 { pc: false }, false)),
        (Architecture::PowerPc | Architecture::PowerPc64, Some(r_type))
            if ppc_half(arch, r_type).is_some() =>
        {
            let (form, pc) = ppc_half(arch, r_type).unwrap_or((PpcHalf::Plain, false));
            Some((Specific::PpcHalf16 { form, pc }, false))
        }
        (Architecture::PowerPc | Architecture::PowerPc64, Some(elf::R_PPC_REL32)) => {
            Some((Specific::Data { bytes: 4, pc: true }, false))
        }
        (Architecture::PowerPc | Architecture::PowerPc64, Some(elf::R_PPC_UADDR32)) => Some((
            Specific::Data {
                bytes: 4,
                pc: false,
            },
            false,
        )),
        (Architecture::PowerPc | Architecture::PowerPc64, Some(elf::R_PPC_UADDR16)) => Some((
            Specific::Data {
                bytes: 2,
                pc: false,
            },
            false,
        )),
        (Architecture::PowerPc64, Some(elf::R_PPC64_UADDR64)) => Some((
            Specific::Data {
                bytes: 8,
                pc: false,
            },
            false,
        )),
        (Architecture::PowerPc64, Some(elf::R_PPC64_REL64)) => {
            Some((Specific::Data { bytes: 8, pc: true }, false))
        }
        (Architecture::PowerPc, Some(elf::R_PPC_NONE)) => return Ok(None),
        (Architecture::PowerPc64, Some(elf::R_PPC64_TOC16)) => Some((
            Specific::Ppc64Toc16 {
                form: PpcHalf::Plain,
            },
            false,
        )),
        (Architecture::PowerPc64, Some(elf::R_PPC64_TOC16_LO)) => {
            Some((Specific::Ppc64Toc16 { form: PpcHalf::Lo }, false))
        }
        (Architecture::PowerPc64, Some(elf::R_PPC64_TOC16_HI)) => {
            Some((Specific::Ppc64Toc16 { form: PpcHalf::Hi }, false))
        }
        (Architecture::PowerPc64, Some(elf::R_PPC64_TOC16_HA)) => {
            Some((Specific::Ppc64Toc16 { form: PpcHalf::Ha }, false))
        }
        (Architecture::PowerPc64, Some(elf::R_PPC64_TOC16_DS)) => {
            Some((Specific::Ppc64Toc16 { form: PpcHalf::Ds }, false))
        }
        (Architecture::PowerPc64, Some(elf::R_PPC64_TOC16_LO_DS)) => Some((
            Specific::Ppc64Toc16 {
                form: PpcHalf::LoDs,
            },
            false,
        )),
        (Architecture::PowerPc64, Some(elf::R_PPC64_TOC)) => Some((Specific::Ppc64Toc64, false)),

        (
            Architecture::Sparc | Architecture::Sparc32Plus | Architecture::Sparc64,
            Some(elf::R_SPARC_WDISP30 | elf::R_SPARC_WPLT30),
        ) => Some((Specific::SparcWdisp30, true)),
        (
            Architecture::Sparc | Architecture::Sparc32Plus | Architecture::Sparc64,
            Some(elf::R_SPARC_DISP32),
        ) => Some((Specific::PcRelativeData, false)),
        (
            Architecture::Sparc | Architecture::Sparc32Plus | Architecture::Sparc64,
            Some(elf::R_SPARC_HI22),
        ) => Some((Specific::SparcHi22 { pc: false }, false)),
        (
            Architecture::Sparc | Architecture::Sparc32Plus | Architecture::Sparc64,
            Some(elf::R_SPARC_PC22),
        ) => Some((Specific::SparcHi22 { pc: true }, false)),
        (
            Architecture::Sparc | Architecture::Sparc32Plus | Architecture::Sparc64,
            Some(elf::R_SPARC_LO10),
        ) => Some((Specific::SparcLo10 { pc: false }, false)),
        (
            Architecture::Sparc | Architecture::Sparc32Plus | Architecture::Sparc64,
            Some(elf::R_SPARC_PC10),
        ) => Some((Specific::SparcLo10 { pc: true }, false)),
        (Architecture::Sparc64, Some(elf::R_SPARC_H44)) => {
            Some((Specific::SparcSethi { shift: 22 }, false))
        }
        (Architecture::Sparc64, Some(elf::R_SPARC_M44)) => Some((
            Specific::SparcSimm {
                shift: 12,
                mask: 0x3ff,
            },
            false,
        )),
        (Architecture::Sparc64, Some(elf::R_SPARC_L44)) => Some((
            Specific::SparcSimm {
                shift: 0,
                mask: 0xfff,
            },
            false,
        )),
        (Architecture::Sparc64, Some(elf::R_SPARC_HH22)) => {
            Some((Specific::SparcSethi { shift: 42 }, false))
        }
        (Architecture::Sparc64, Some(elf::R_SPARC_HM10)) => Some((
            Specific::SparcSimm {
                shift: 32,
                mask: 0x3ff,
            },
            false,
        )),
        (Architecture::Sparc64, Some(elf::R_SPARC_LM22)) => {
            Some((Specific::SparcSethi { shift: 10 }, false))
        }
        (
            Architecture::Sparc | Architecture::Sparc32Plus | Architecture::Sparc64,
            Some(elf::R_SPARC_WDISP22),
        ) => Some((Specific::SparcDisp { bits: 22 }, false)),
        (Architecture::Sparc32Plus | Architecture::Sparc64, Some(elf::R_SPARC_WDISP19)) => {
            Some((Specific::SparcDisp { bits: 19 }, false))
        }
        (Architecture::Sparc32Plus | Architecture::Sparc64, Some(elf::R_SPARC_WDISP16)) => {
            Some((Specific::SparcWdisp16, false))
        }
        (Architecture::Sparc64, Some(elf::R_SPARC_DISP64)) => {
            Some((Specific::Data { bytes: 8, pc: true }, false))
        }

        (Architecture::Aarch64, Some(elf::R_AARCH64_ADR_PREL_LO21)) => {
            Some((Specific::Aarch64AdrLo21, false))
        }
        (Architecture::Aarch64, Some(elf::R_AARCH64_CONDBR19)) => {
            Some((Specific::Aarch64Imm19 { load: false }, false))
        }
        (Architecture::Aarch64, Some(elf::R_AARCH64_LD_PREL_LO19)) => {
            Some((Specific::Aarch64Imm19 { load: true }, false))
        }
        (Architecture::Aarch64, Some(elf::R_AARCH64_TSTBR14)) => {
            Some((Specific::Aarch64Imm14, false))
        }
        (
            Architecture::Aarch64,
            Some(t @ elf::R_AARCH64_MOVW_UABS_G0..=elf::R_AARCH64_MOVW_UABS_G3),
        ) => {
            let group = ((t - elf::R_AARCH64_MOVW_UABS_G0) / 2) as u8;
            let checked = (t - elf::R_AARCH64_MOVW_UABS_G0) % 2 == 0;
            Some((
                Specific::Aarch64Movw {
                    shift: group * 16,
                    checked,
                },
                false,
            ))
        }

        (
            Architecture::Riscv32 | Architecture::Riscv64,
            Some(elf::R_RISCV_RELAX | elf::R_RISCV_ALIGN),
        ) => return Ok(None),
        (Architecture::Riscv32 | Architecture::Riscv64, Some(elf::R_RISCV_HI20)) => {
            Some((Specific::RiscvHi20, false))
        }
        (Architecture::Riscv32 | Architecture::Riscv64, Some(elf::R_RISCV_LO12_I)) => {
            Some((Specific::RiscvLo12 { store: false }, false))
        }
        (Architecture::Riscv32 | Architecture::Riscv64, Some(elf::R_RISCV_LO12_S)) => {
            Some((Specific::RiscvLo12 { store: true }, false))
        }
        (Architecture::Riscv32 | Architecture::Riscv64, Some(elf::R_RISCV_PCREL_HI20)) => {
            Some((Specific::RiscvPcrelHi20, false))
        }
        (Architecture::Riscv32 | Architecture::Riscv64, Some(elf::R_RISCV_PCREL_LO12_I)) => {
            Some((Specific::RiscvPcrelLo12 { store: false }, false))
        }
        (Architecture::Riscv32 | Architecture::Riscv64, Some(elf::R_RISCV_PCREL_LO12_S)) => {
            Some((Specific::RiscvPcrelLo12 { store: true }, false))
        }
        (
            Architecture::Riscv32 | Architecture::Riscv64,
            Some(elf::R_RISCV_CALL | elf::R_RISCV_CALL_PLT),
        ) => Some((Specific::RiscvCall, true)),
        (Architecture::Riscv32 | Architecture::Riscv64, Some(elf::R_RISCV_BRANCH)) => {
            Some((Specific::RiscvBranch, false))
        }
        (Architecture::Riscv32 | Architecture::Riscv64, Some(elf::R_RISCV_JAL)) => {
            Some((Specific::RiscvJal, false))
        }
        (Architecture::Riscv32 | Architecture::Riscv64, Some(elf::R_RISCV_RVC_BRANCH)) => {
            Some((Specific::RiscvRvcBranch, false))
        }
        (Architecture::Riscv32 | Architecture::Riscv64, Some(elf::R_RISCV_RVC_JUMP)) => {
            Some((Specific::RiscvRvcJump, false))
        }
        (
            Architecture::Riscv32 | Architecture::Riscv64,
            Some(t @ elf::R_RISCV_ADD8..=elf::R_RISCV_SUB64),
        ) => Some((
            Specific::RiscvAddSub {
                sub: t >= elf::R_RISCV_SUB8,
            },
            false,
        )),
        (
            Architecture::Riscv32 | Architecture::Riscv64,
            Some(elf::R_RISCV_SET8 | elf::R_RISCV_SET16 | elf::R_RISCV_SET32),
        ) => Some((Specific::RiscvSet, false)),
        (Architecture::Riscv32 | Architecture::Riscv64, Some(elf::R_RISCV_SET6)) => {
            Some((Specific::Riscv6 { sub: false }, false))
        }
        (Architecture::Riscv32 | Architecture::Riscv64, Some(elf::R_RISCV_SUB6)) => {
            Some((Specific::Riscv6 { sub: true }, false))
        }
        (Architecture::Riscv32 | Architecture::Riscv64, Some(elf::R_RISCV_32_PCREL)) => {
            Some((Specific::PcRelativeData, false))
        }

        (
            Architecture::LoongArch32 | Architecture::LoongArch64,
            Some(elf::R_LARCH_NONE | elf::R_LARCH_RELAX | elf::R_LARCH_ALIGN),
        ) => return Ok(None),
        (Architecture::LoongArch32 | Architecture::LoongArch64, Some(elf::R_LARCH_PCALA_HI20)) => {
            Some((Specific::LarchPcalaHi20, false))
        }
        (Architecture::LoongArch32 | Architecture::LoongArch64, Some(elf::R_LARCH_PCALA_LO12)) => {
            Some((Specific::LarchLo12, false))
        }
        (Architecture::LoongArch32 | Architecture::LoongArch64, Some(elf::R_LARCH_CALL36)) => {
            Some((Specific::LarchCall36, true))
        }
        (Architecture::LoongArch32 | Architecture::LoongArch64, Some(elf::R_LARCH_B26)) => {
            Some((Specific::LarchBranch { bits: 26 }, false))
        }
        (Architecture::LoongArch32 | Architecture::LoongArch64, Some(elf::R_LARCH_B21)) => {
            Some((Specific::LarchBranch { bits: 21 }, false))
        }
        (Architecture::LoongArch32 | Architecture::LoongArch64, Some(elf::R_LARCH_B16)) => {
            Some((Specific::LarchBranch { bits: 16 }, false))
        }
        (Architecture::Avr, Some(r_type)) if classify_avr(r_type).is_some() => classify_avr(r_type),
        (Architecture::Hexagon, Some(r_type)) if classify_hexagon(r_type).is_some() => {
            classify_hexagon(r_type)
        }
        (Architecture::Csky, Some(elf::R_CKCORE_PCREL_IMM26BY2)) => {
            Some((Specific::CskyBsr26, true))
        }
        (
            Architecture::Xtensa,
            Some(
                elf::R_XTENSA_NONE
                | elf::R_XTENSA_ASM_EXPAND
                | elf::R_XTENSA_ASM_SIMPLIFY
                | elf::R_XTENSA_DIFF8
                | elf::R_XTENSA_DIFF16
                | elf::R_XTENSA_DIFF32,
            ),
        ) => return Ok(None),
        (Architecture::Xtensa, Some(elf::R_XTENSA_SLOT0_OP)) => {
            Some((Specific::XtensaSlot0, false))
        }
        (Architecture::Xtensa, Some(elf::R_XTENSA_32)) => Some((Specific::XtensaWord, false)),
        (Architecture::Xtensa, Some(elf::R_XTENSA_32_PCREL)) => {
            Some((Specific::Data { bytes: 4, pc: true }, false))
        }
        (Architecture::Bpf, Some(elf::R_BPF_NONE)) => return Ok(None),
        (Architecture::Bpf, Some(elf::R_BPF_64_64)) => Some((Specific::BpfImm64, false)),
        (Architecture::Bpf, Some(elf::R_BPF_64_32)) => Some((Specific::BpfCall, true)),
        (Architecture::Bpf, Some(R_BPF_64_ABS64)) => Some((
            Specific::Data {
                bytes: 8,
                pc: false,
            },
            false,
        )),
        (Architecture::Bpf, Some(R_BPF_64_ABS32 | R_BPF_64_NODYLD32)) => Some((
            Specific::Data {
                bytes: 4,
                pc: false,
            },
            false,
        )),
        _ => None,
    };
    let got = match (arch, r_type) {
        (
            Architecture::X86_64,
            Some(elf::R_X86_64_GOTPCREL | elf::R_X86_64_GOTPCRELX | elf::R_X86_64_REX_GOTPCRELX),
        ) => Some(Specific::PcRel32),
        (Architecture::Aarch64, Some(elf::R_AARCH64_ADR_GOT_PAGE)) => {
            Some(Specific::Aarch64AdrPage { checked: true })
        }
        (Architecture::Aarch64, Some(elf::R_AARCH64_LD64_GOT_LO12_NC)) => {
            Some(Specific::Aarch64LdstLo12 { scale: 3 })
        }
        (Architecture::Riscv32 | Architecture::Riscv64, Some(elf::R_RISCV_GOT_HI20)) => {
            Some(Specific::RiscvPcrelHi20)
        }
        (Architecture::Arm, Some(elf::R_ARM_GOT_PREL)) => Some(Specific::PcRelativeData),
        _ => None,
    };
    if let Some(specific) = got {
        return Ok(Some(RelocationSpec {
            specific,
            width: 4,
            call: false,
            got: true,
        }));
    }

    if let Some((specific, call)) = specific {
        let width = match specific {
            Specific::Ppc64Toc16 { .. } | Specific::PpcHalf16 { .. } => 2,
            Specific::RiscvRvcBranch | Specific::RiscvRvcJump => 2,
            Specific::XtensaSlot0 => 3,
            Specific::AvrPcrel { .. } | Specific::AvrLdi { .. } | Specific::AvrWordPm => 2,
            Specific::Ppc64Toc64
            | Specific::RiscvCall
            | Specific::BpfCall
            | Specific::LarchCall36 => 8,
            Specific::BpfImm64 => 16,
            Specific::Data { bytes, .. } => usize::from(bytes),
            Specific::RiscvAddSub { .. } | Specific::RiscvSet | Specific::Riscv6 { .. } => {
                riscv_data_width(r_type.unwrap_or(0))
            }
            _ => 4,
        };
        return Ok(Some(RelocationSpec {
            specific,
            width,
            call,
            got: false,
        }));
    }

    if reloc.kind == RelocationKind::None {
        return Ok(None);
    }
    let bits = reloc.size;
    if !matches!(bits, 8 | 16 | 32 | 64) {
        return Err(RelocationFailure::Unsupported);
    }
    if !matches!(
        reloc.kind,
        RelocationKind::Absolute
            | RelocationKind::Relative
            | RelocationKind::PltRelative
            | RelocationKind::ImageOffset
    ) {
        return Err(RelocationFailure::Unsupported);
    }
    Ok(Some(RelocationSpec {
        specific: Specific::Generic { bits },
        width: usize::from(bits / 8),
        call: matches!(reloc.kind, RelocationKind::PltRelative),
        got: false,
    }))
}

/// Apply a classified relocation to an exactly `spec.width()`-byte field.
pub fn apply(
    spec: RelocationSpec,
    reloc: &Relocation,
    field: &mut [u8],
    little_endian: bool,
    symbol: u64,
    place: u64,
    target_thumb: Option<bool>,
    toc: Option<u64>,
) -> Result<(), RelocationFailure> {
    apply_info(
        spec,
        RelocationInfo::from(reloc),
        field,
        little_endian,
        symbol,
        place,
        target_thumb,
        toc,
    )
}

fn apply_info(
    spec: RelocationSpec,
    reloc: RelocationInfo,
    field: &mut [u8],
    little_endian: bool,
    symbol: u64,
    place: u64,
    target_thumb: Option<bool>,
    toc: Option<u64>,
) -> Result<(), RelocationFailure> {
    debug_assert_eq!(field.len(), spec.width);
    let little_endian = little_endian || spec.specific.is_aarch64_instruction();
    match spec.specific {
        Specific::ArmBranch24 => arm_branch24(
            field,
            little_endian,
            reloc,
            symbol,
            place,
            spec.call,
            target_thumb,
        ),
        Specific::ArmThumbBranch24 => arm_thumb_branch24(
            field,
            little_endian,
            reloc,
            symbol,
            place,
            spec.call,
            target_thumb,
        ),
        Specific::ArmPrel31 => arm_prel31(field, little_endian, reloc, symbol, place),
        Specific::ArcBranch25 { word } => arc_branch25(field, reloc, symbol, place, word),
        Specific::ArcMiddleEndian32 => {
            if reloc.implicit_addend {
                return Err(RelocationFailure::InvalidEncoding);
            }
            let value = (symbol as i128 + reloc.addend as i128) as u32;
            write_u16(&mut field[..2], true, (value >> 16) as u16);
            write_u16(&mut field[2..], true, value as u16);
            Ok(())
        }
        Specific::XtensaSlot0 => xtensa_slot0(field, little_endian, reloc, symbol, place),
        // `R_XTENSA_32` is partial-inplace although Xtensa objects are RELA: GNU `as`
        // leaves part of the addend in the word (a jump table's `.text + 0` row
        // holds the case's offset), and the linker adds both.
        Specific::XtensaWord => {
            let value =
                symbol as i128 + reloc.addend as i128 + i128::from(read_u32(field, little_endian));
            write_u32(field, little_endian, value as u32);
            Ok(())
        }
        Specific::Or1kRel26 => or1k_patch(field, little_endian, reloc, symbol, Some(place), |v| {
            require_aligned(v, 4)?;
            require_signed(v, 28)?;
            Ok((0x03ff_ffff, (v >> 2) as u32))
        }),
        Specific::Or1kHalf { adjust, high } => {
            or1k_patch(field, little_endian, reloc, symbol, None, |v| {
                let v = if adjust { v + 0x8000 } else { v };
                Ok((0xffff, if high { (v >> 16) as u32 } else { v as u32 }))
            })
        }
        Specific::Or1kSplit16 => or1k_patch(field, little_endian, reloc, symbol, None, |v| {
            let x = (v as u32) & 0xffff;
            Ok((0x03e0_07ff, ((x >> 11) << 21) | (x & 0x7ff)))
        }),
        Specific::CskyBsr26 => csky_bsr26(field, little_endian, reloc, symbol, place),
        Specific::ArmMovw { thumb, top, pc } => arm_movw(
            field,
            little_endian,
            reloc,
            symbol,
            pc.then_some(place),
            thumb,
            top,
            target_thumb,
        ),
        Specific::PcRelativeData => pc_relative_data(field, little_endian, reloc, symbol, place),
        Specific::Aarch64Branch26 => aarch64_branch26(field, little_endian, reloc, symbol, place),
        Specific::Aarch64AdrPage { checked } => {
            aarch64_adr_page(field, little_endian, reloc, symbol, place, checked)
        }
        Specific::Aarch64AddLo12 => aarch64_lo12(field, little_endian, reloc, symbol, 0, false),
        Specific::Aarch64Tprel { hi: true, .. } => {
            aarch64_tprel_hi12(field, little_endian, reloc, symbol)
        }
        Specific::Aarch64Tprel { scale, ldst, .. } => {
            aarch64_lo12(field, little_endian, reloc, symbol & 0xfff, scale, ldst)
        }
        Specific::Aarch64LdstLo12 { scale } => {
            aarch64_lo12(field, little_endian, reloc, symbol, scale, true)
        }
        Specific::PpcRel24 { addend } => {
            ppc_rel24(field, little_endian, reloc, symbol, place, addend)
        }
        Specific::PpcAbs24 => ppc_abs24(field, little_endian, reloc, symbol),
        Specific::PpcBranch14 { pc } => {
            ppc_branch14(field, little_endian, reloc, symbol, pc.then_some(place))
        }
        Specific::PpcHalf16 { form, pc } => ppc_half16(
            field,
            little_endian,
            reloc,
            symbol,
            pc.then_some(place),
            form,
        ),
        Specific::Ppc64Toc16 { form } => {
            ppc64_toc16(field, little_endian, reloc, symbol, toc, form)
        }
        Specific::Data { pc, .. } => {
            data_word(field, little_endian, reloc, symbol, pc.then_some(place))
        }
        Specific::Ppc64Toc64 => ppc64_toc64(field, little_endian, reloc, toc),
        Specific::SparcWdisp30 => sparc_wdisp30(field, little_endian, reloc, symbol, place),
        Specific::SparcHi22 { pc } => {
            sparc_hi22(field, little_endian, reloc, symbol, pc.then_some(place))
        }
        Specific::SparcLo10 { pc } => {
            sparc_lo10(field, little_endian, reloc, symbol, pc.then_some(place))
        }
        Specific::SparcSethi { shift } => sparc_sethi(field, little_endian, reloc, symbol, shift),
        Specific::SparcSimm { shift, mask } => {
            sparc_simm(field, little_endian, reloc, symbol, shift, mask)
        }
        Specific::SparcDisp { bits } => {
            sparc_disp(field, little_endian, reloc, symbol, place, bits)
        }
        Specific::SparcWdisp16 => sparc_wdisp16(field, little_endian, reloc, symbol, place),
        Specific::LarchPcalaHi20 => larch_pcala_hi20(field, reloc, symbol, place),
        Specific::LarchLo12 => larch_lo12(field, reloc, symbol),
        Specific::LarchCall36 => larch_call36(field, reloc, symbol, place),
        Specific::LarchBranch { bits } => larch_branch(field, reloc, symbol, place, bits),
        Specific::LanaiBranch25 => lanai_field(field, reloc, symbol, 0x01ff_fffc, true),
        Specific::LanaiAbs21 => lanai_abs21(field, reloc, symbol),
        Specific::AvrPcrel { bits } => avr_pcrel(field, reloc, symbol, place, bits),
        Specific::AvrLdi { shift, neg, pm } => avr_ldi(field, reloc, symbol, shift, neg, pm),
        Specific::AvrCall => avr_call(field, reloc, symbol),
        Specific::AvrWordPm => {
            let value = symbol as i128 + reloc.addend as i128;
            require_aligned(value, 2)?;
            write_u16(field, true, (value >> 1) as u16);
            Ok(())
        }
        Specific::AmdgpuHalf { pc, high } => {
            let value = symbol as i128 + reloc.addend as i128 - if pc { place as i128 } else { 0 };
            let word = if high { value >> 32 } else { value };
            write_u32(field, true, word as u32);
            Ok(())
        }
        Specific::HexBranch { mask, extended } => {
            hexagon_branch(field, reloc, symbol, place, mask, extended)
        }
        Specific::HexExtender { pc } => {
            let value = symbol as i128 + reloc.addend as i128 - if pc { place as i128 } else { 0 };
            hexagon_patch(field, reloc, 0x0fff_3fff, (value >> 6) as u32)
        }
        Specific::HexLow6 { form } => {
            let insn = read_u32(field, true);
            let mask = hexagon_low6_mask(form, insn).ok_or(RelocationFailure::Unsupported)?;
            if reloc.implicit_addend {
                return Err(RelocationFailure::InvalidEncoding);
            }
            // ORed in as the linker does: the field is zero in the object, and
            // a class mask may span bits another operand of a variant holds.
            let value = symbol as i128 + reloc.addend as i128;
            write_u32(
                field,
                true,
                insn | scatter_bits(mask, (value as u32) & 0x3f),
            );
            Ok(())
        }
        Specific::CudaAbs32 { high } => {
            let value = (symbol as i128 + reloc.addend as i128) as u64;
            let word = if high {
                (value >> 32) as u32
            } else {
                value as u32
            };
            write_u32(&mut field[4..8], true, word);
            Ok(())
        }
        Specific::CudaAbs47 => cuda_abs47(field, reloc, symbol),
        Specific::C28xAbs22 => c28x_abs22(field, reloc, symbol),
        Specific::C28xData { words } => c28x_data(field, reloc, symbol, words),
        Specific::LanaiHalf { high } => {
            let value = symbol as i128 + reloc.addend as i128;
            let half = if high { value >> 16 } else { value };
            let mut insn = read_u32(field, false);
            insn = (insn & !0xffff) | ((half as u32) & 0xffff);
            write_u32(field, false, insn);
            Ok(())
        }
        Specific::Aarch64AdrLo21 => aarch64_adr_lo21(field, little_endian, reloc, symbol, place),
        Specific::Aarch64Imm19 { .. } => {
            aarch64_pcrel_imm(field, little_endian, reloc, symbol, place, 19)
        }
        Specific::Aarch64Imm14 => aarch64_pcrel_imm(field, little_endian, reloc, symbol, place, 14),
        Specific::Aarch64Movw { shift, checked } => {
            aarch64_movw(field, little_endian, reloc, symbol, shift, checked)
        }
        Specific::RiscvHi20 => riscv_u_type(field, reloc, symbol as i128 + reloc.addend as i128),
        Specific::RiscvLo12 { store } => {
            riscv_lo12(field, reloc, symbol as i128 + reloc.addend as i128, store)
        }
        Specific::RiscvPcrelHi20 => {
            riscv_u_type(field, reloc, riscv_pcrel_value(reloc, symbol, place))
        }
        // `symbol` is the paired PCREL_HI20's own `S + A - P`.
        Specific::RiscvPcrelLo12 { store } => riscv_lo12(
            field,
            reloc,
            symbol as i64 as i128 + reloc.addend as i128,
            store,
        ),
        Specific::RiscvCall => riscv_call(field, reloc, symbol, place),
        Specific::RiscvBranch => riscv_branch(field, reloc, symbol, place),
        Specific::RiscvJal => riscv_jal(field, reloc, symbol, place),
        Specific::RiscvRvcBranch => riscv_rvc_branch(field, reloc, symbol, place),
        Specific::RiscvRvcJump => riscv_rvc_jump(field, reloc, symbol, place),
        Specific::RiscvAddSub { sub } => {
            let old = read_integer(field, true) as i128;
            let delta = symbol as i128 + reloc.addend as i128;
            write_integer(
                field,
                true,
                (if sub { old - delta } else { old + delta }) as u64,
            );
            Ok(())
        }
        Specific::RiscvSet => {
            write_integer(field, true, (symbol as i128 + reloc.addend as i128) as u64);
            Ok(())
        }
        Specific::Riscv6 { sub } => {
            let old = (field[0] & 0x3f) as i128;
            let delta = symbol as i128 + reloc.addend as i128;
            let value = if sub { old - delta } else { delta };
            field[0] = (field[0] & 0xc0) | ((value as u8) & 0x3f);
            Ok(())
        }
        Specific::PcRel32 => {
            let value = symbol as i128
                + explicit_plus_implicit(reloc, read_signed(field, little_endian))
                - place as i128;
            require_signed(value, 32)?;
            write_integer(field, little_endian, value as u64);
            Ok(())
        }
        Specific::BpfImm64 => bpf_imm64(field, little_endian, reloc, symbol),
        Specific::MachoAuthPointer => {
            let raw = read_signed(field, little_endian) as u64;
            let addend = i128::from(raw as u32 as i32);
            write_integer(field, little_endian, (symbol as i128 + addend) as u64);
            Ok(())
        }
        Specific::BpfCall => bpf_call(field, little_endian, reloc, symbol, place),
        Specific::Generic { bits } => generic(field, little_endian, reloc, symbol, place, bits),
    }
}

/// Byte width of a RISC-V `ADD*`/`SUB*`/`SET*` data relocation.
fn riscv_data_width(r_type: u32) -> usize {
    match r_type {
        elf::R_RISCV_ADD8
        | elf::R_RISCV_SUB8
        | elf::R_RISCV_SET8
        | elf::R_RISCV_SET6
        | elf::R_RISCV_SUB6 => 1,
        elf::R_RISCV_ADD16 | elf::R_RISCV_SUB16 | elf::R_RISCV_SET16 => 2,
        elf::R_RISCV_ADD64 | elf::R_RISCV_SUB64 => 8,
        _ => 4,
    }
}

fn riscv_pcrel_value(reloc: RelocationInfo, symbol: u64, place: u64) -> i128 {
    symbol as i128 + reloc.addend as i128 - place as i128
}

/// `S + A - P` of a RISC-V `PCREL_HI20`, which the `PCREL_LO12_*` naming its
/// label takes the low twelve bits of.
pub fn riscv_pcrel_hi_value(reloc: &Relocation, symbol: u64, place: u64) -> i128 {
    riscv_pcrel_value(RelocationInfo::from(reloc), symbol, place)
}

impl RelocationSpec {
    /// A RISC-V `PCREL_HI20`, whose value the paired low part needs.
    pub fn is_riscv_pcrel_hi(self) -> bool {
        matches!(self.specific, Specific::RiscvPcrelHi20)
    }

    /// A RISC-V `PCREL_LO12_*`, whose symbol is the label of its `PCREL_HI20`.
    pub fn is_riscv_pcrel_lo(self) -> bool {
        matches!(self.specific, Specific::RiscvPcrelLo12 { .. })
    }
}

fn aarch64_adr_lo21(
    field: &mut [u8],
    le: bool,
    reloc: RelocationInfo,
    symbol: u64,
    place: u64,
) -> Result<(), RelocationFailure> {
    let mut insn = read_u32(field, le);
    if insn & 0x9f00_0000 != 0x1000_0000 {
        return Err(RelocationFailure::InvalidEncoding);
    }
    let encoded = ((((insn >> 5) & 0x7ffff) as i128) << 2) | (((insn >> 29) & 3) as i128);
    let value =
        symbol as i128 + explicit_plus_implicit(reloc, sign_extend(encoded, 21)) - place as i128;
    require_signed(value, 21)?;
    let raw = value as u32;
    insn = (insn & !0x60ff_ffe0) | ((raw & 3) << 29) | (((raw >> 2) & 0x7ffff) << 5);
    write_u32(field, le, insn);
    Ok(())
}

/// `CONDBR19`/`LD_PREL_LO19` (19-bit word offset at bit 5) and `TSTBR14`
/// (14-bit word offset at bit 5): `(S + A - P) >> 2`.
fn aarch64_pcrel_imm(
    field: &mut [u8],
    le: bool,
    reloc: RelocationInfo,
    symbol: u64,
    place: u64,
    bits: u8,
) -> Result<(), RelocationFailure> {
    let mut insn = read_u32(field, le);
    let matches = if bits == 14 {
        insn & 0x7e00_0000 == 0x3600_0000
    } else {
        insn & 0xff00_0010 == 0x5400_0000
            || insn & 0x7e00_0000 == 0x3400_0000
            || insn & 0x3b00_0000 == 0x1800_0000
    };
    if !matches {
        return Err(RelocationFailure::InvalidEncoding);
    }
    let mask = (1u32 << bits) - 1;
    let implicit = sign_extend((((insn >> 5) & mask) as i128) << 2, bits + 2);
    let value = symbol as i128 + explicit_plus_implicit(reloc, implicit) - place as i128;
    require_aligned(value, 4)?;
    require_signed(value, bits + 2)?;
    insn = (insn & !(mask << 5)) | ((((value >> 2) as u32) & mask) << 5);
    write_u32(field, le, insn);
    Ok(())
}

/// `MOVW_UABS_G<n>[_NC]`: bits `shift..shift+15` of `S + A` into MOVZ/MOVK's
/// imm16; the checked forms require the value to fit below the group's top.
fn aarch64_movw(
    field: &mut [u8],
    le: bool,
    reloc: RelocationInfo,
    symbol: u64,
    shift: u8,
    checked: bool,
) -> Result<(), RelocationFailure> {
    let mut insn = read_u32(field, le);
    if insn & 0x1f80_0000 != 0x1280_0000 {
        return Err(RelocationFailure::InvalidEncoding);
    }
    let implicit = ((((insn >> 5) & 0xffff) as i128) << shift) as i128;
    let value = symbol as i128 + explicit_plus_implicit(reloc, implicit);
    if checked && (value < 0 || (shift < 48 && value >= 1i128 << (shift + 16))) {
        return Err(RelocationFailure::OutOfRange);
    }
    insn = (insn & !(0xffff << 5)) | ((((value >> shift) as u32) & 0xffff) << 5);
    write_u32(field, le, insn);
    Ok(())
}

/// The high part of a U-type instruction (`lui`/`auipc`): `(value + 0x800) >> 12`.
fn riscv_u_type(
    field: &mut [u8],
    reloc: RelocationInfo,
    value: i128,
) -> Result<(), RelocationFailure> {
    let mut insn = read_u32(field, true);
    if reloc.implicit_addend || !matches!(insn & 0x7f, 0x37 | 0x17) {
        return Err(RelocationFailure::InvalidEncoding);
    }
    require_signed(value + 0x800, 32)?;
    insn = (insn & 0xfff) | (((value + 0x800) as u32) & 0xffff_f000);
    write_u32(field, true, insn);
    Ok(())
}

/// The low twelve bits into an I-type (`addi`, loads, `jalr`) or S-type (stores)
/// immediate.
fn riscv_lo12(
    field: &mut [u8],
    reloc: RelocationInfo,
    value: i128,
    store: bool,
) -> Result<(), RelocationFailure> {
    if reloc.implicit_addend {
        return Err(RelocationFailure::InvalidEncoding);
    }
    let mut insn = read_u32(field, true);
    let lo = (value as u32) & 0xfff;
    insn = if store {
        (insn & 0x01ff_f07f) | ((lo >> 5) << 25) | ((lo & 0x1f) << 7)
    } else {
        (insn & 0x000f_ffff) | (lo << 20)
    };
    write_u32(field, true, insn);
    Ok(())
}

/// `auipc ra, %hi; jalr ra, %lo(ra)`: the 8-byte `CALL`/`CALL_PLT` pair.
fn riscv_call(
    field: &mut [u8],
    reloc: RelocationInfo,
    symbol: u64,
    place: u64,
) -> Result<(), RelocationFailure> {
    let value = riscv_pcrel_value(reloc, symbol, place);
    let jalr = read_u32(&field[4..], true);
    if jalr & 0x707f != 0x0067 {
        return Err(RelocationFailure::InvalidEncoding);
    }
    riscv_u_type(&mut field[..4], reloc, value)?;
    riscv_lo12(&mut field[4..], reloc, value, false)
}

fn riscv_branch(
    field: &mut [u8],
    reloc: RelocationInfo,
    symbol: u64,
    place: u64,
) -> Result<(), RelocationFailure> {
    let mut insn = read_u32(field, true);
    if insn & 0x7f != 0x63 || reloc.implicit_addend {
        return Err(RelocationFailure::InvalidEncoding);
    }
    let value = riscv_pcrel_value(reloc, symbol, place);
    require_aligned(value, 2)?;
    require_signed(value, 13)?;
    let v = value as u32;
    insn = (insn & 0x01ff_f07f)
        | (((v >> 12) & 1) << 31)
        | (((v >> 5) & 0x3f) << 25)
        | (((v >> 1) & 0xf) << 8)
        | (((v >> 11) & 1) << 7);
    write_u32(field, true, insn);
    Ok(())
}

fn riscv_jal(
    field: &mut [u8],
    reloc: RelocationInfo,
    symbol: u64,
    place: u64,
) -> Result<(), RelocationFailure> {
    let mut insn = read_u32(field, true);
    if insn & 0x7f != 0x6f || reloc.implicit_addend {
        return Err(RelocationFailure::InvalidEncoding);
    }
    let value = riscv_pcrel_value(reloc, symbol, place);
    require_aligned(value, 2)?;
    require_signed(value, 21)?;
    let v = value as u32;
    insn = (insn & 0xfff)
        | (((v >> 20) & 1) << 31)
        | (((v >> 1) & 0x3ff) << 21)
        | (((v >> 11) & 1) << 20)
        | (((v >> 12) & 0xff) << 12);
    write_u32(field, true, insn);
    Ok(())
}

fn riscv_rvc_branch(
    field: &mut [u8],
    reloc: RelocationInfo,
    symbol: u64,
    place: u64,
) -> Result<(), RelocationFailure> {
    let mut insn = read_u16(field, true);
    if insn & 0xc003 != 0xc001 || reloc.implicit_addend {
        return Err(RelocationFailure::InvalidEncoding);
    }
    let value = riscv_pcrel_value(reloc, symbol, place);
    require_aligned(value, 2)?;
    require_signed(value, 9)?;
    let v = value as u16;
    insn = (insn & 0xe383)
        | (((v >> 8) & 1) << 12)
        | (((v >> 3) & 3) << 10)
        | (((v >> 6) & 3) << 5)
        | (((v >> 1) & 3) << 3)
        | (((v >> 5) & 1) << 2);
    write_u16(field, true, insn);
    Ok(())
}

fn riscv_rvc_jump(
    field: &mut [u8],
    reloc: RelocationInfo,
    symbol: u64,
    place: u64,
) -> Result<(), RelocationFailure> {
    let mut insn = read_u16(field, true);
    if insn & 0x6003 != 0x2001 || reloc.implicit_addend {
        return Err(RelocationFailure::InvalidEncoding);
    }
    let value = riscv_pcrel_value(reloc, symbol, place);
    require_aligned(value, 2)?;
    require_signed(value, 12)?;
    let v = value as u16;
    insn = (insn & 0xe003)
        | (((v >> 11) & 1) << 12)
        | (((v >> 4) & 1) << 11)
        | (((v >> 8) & 3) << 9)
        | (((v >> 10) & 1) << 8)
        | (((v >> 6) & 1) << 7)
        | (((v >> 7) & 1) << 6)
        | (((v >> 1) & 7) << 3)
        | (((v >> 5) & 1) << 2);
    write_u16(field, true, insn);
    Ok(())
}

fn explicit_plus_implicit(reloc: RelocationInfo, implicit: i128) -> i128 {
    reloc.addend as i128 + if reloc.implicit_addend { implicit } else { 0 }
}

fn arm_branch24(
    field: &mut [u8],
    le: bool,
    reloc: RelocationInfo,
    symbol: u64,
    place: u64,
    call: bool,
    target_thumb: Option<bool>,
) -> Result<(), RelocationFailure> {
    let mut insn = read_u32(field, le);
    if insn & 0x0e00_0000 != 0x0a00_0000 {
        return Err(RelocationFailure::InvalidEncoding);
    }
    let is_blx = insn & 0xfe00_0000 == 0xfa00_0000;
    let is_bl = insn >> 28 != 0xf && insn & 0x0f00_0000 == 0x0b00_0000;
    if call && !is_blx && !is_bl {
        return Err(RelocationFailure::InvalidEncoding);
    }
    if !call && target_thumb == Some(true) {
        return Err(RelocationFailure::RequiresVeneer);
    }
    // BLX <imm> carries the halfword bit of its displacement in bit 24.
    let blx_halfword = if is_blx {
        (((insn >> 24) & 1) as i128) << 1
    } else {
        0
    };
    let implicit = sign_extend((((insn & 0x00ff_ffff) as i128) << 2) | blx_halfword, 26);
    let addend = explicit_plus_implicit(reloc, implicit);
    let target = symbol & !1;
    let value = target as i128 + addend - place as i128;

    let conditional_bl = is_bl && insn >> 28 != 0xe;
    if conditional_bl && target_thumb == Some(true) {
        return Err(RelocationFailure::RequiresVeneer);
    }
    let write_blx = call && target_thumb.unwrap_or(is_blx);
    if write_blx {
        require_aligned(value, 2)?;
        require_signed(value, 26)?;
        insn = 0xfa00_0000 | (((value as u32) & 2) << 23) | (((value >> 2) as u32) & 0x00ff_ffff);
    } else {
        require_aligned(value, 4)?;
        require_signed(value, 26)?;
        if call && target_thumb == Some(false) && is_blx {
            insn = 0xeb00_0000 | (insn & 0x00ff_ffff);
        }
        insn = (insn & !0x00ff_ffff) | (((value >> 2) as u32) & 0x00ff_ffff);
    }
    write_u32(field, le, insn);
    Ok(())
}

/// ARM `MOVW`/`MOVT` (`43`..`46`, A32 `cond 0011 0x00 imm4 Rd imm12`) and the
/// Thumb-2 forms (`47`..`50`, `11110 i 10x100 imm4 / 0 imm3 Rd imm8`): the low
/// half of `(S + A) | T` (`MOVW_*_NC`) or the high half of `S + A` (`MOVT_*`),
/// less `P` for the `PREL` forms. ARM objects are REL: `A` is the signed
/// imm16 already in the instruction.
#[allow(clippy::too_many_arguments)]
fn arm_movw(
    field: &mut [u8],
    le: bool,
    reloc: RelocationInfo,
    symbol: u64,
    place: Option<u64>,
    thumb: bool,
    top: bool,
    target_thumb: Option<bool>,
) -> Result<(), RelocationFailure> {
    let (imm, form) = if thumb {
        let hi = read_u16(&field[..2], le);
        let lo = read_u16(&field[2..], le);
        let imm =
            ((hi & 0xf) << 12) | (((hi >> 10) & 1) << 11) | (((lo >> 12) & 7) << 8) | (lo & 0xff);
        let op = if top { 0xf2c0 } else { 0xf240 };
        (imm, hi & 0xfbf0 == op && lo & 0x8000 == 0)
    } else {
        let insn = read_u32(field, le);
        let imm = (((insn >> 4) & 0xf000) | (insn & 0xfff)) as u16;
        let op = if top { 0x0340_0000 } else { 0x0300_0000 };
        (imm, insn & 0x0ff0_0000 == op)
    };
    if !form {
        return Err(RelocationFailure::InvalidEncoding);
    }
    let mut value = symbol as i128 + explicit_plus_implicit(reloc, i128::from(imm as i16));
    if !top && target_thumb == Some(true) {
        value |= 1;
    }
    value -= place.map_or(0, i128::from);
    let x = (if top { value >> 16 } else { value } as u32 & 0xffff) as u16;
    if thumb {
        let hi = read_u16(&field[..2], le);
        let lo = read_u16(&field[2..], le);
        let hi = (hi & 0xfbf0) | ((x >> 12) & 0xf) | (((x >> 11) & 1) << 10);
        let lo = (lo & 0x8f00) | (((x >> 8) & 7) << 12) | (x & 0xff);
        write_u16(&mut field[..2], le, hi);
        write_u16(&mut field[2..], le, lo);
    } else {
        let insn = read_u32(field, le);
        let x = u32::from(x);
        write_u32(
            field,
            le,
            (insn & 0xfff0_f000) | ((x & 0xf000) << 4) | (x & 0xfff),
        );
    }
    Ok(())
}

/// C-SKY `bsr32 label` (`PCREL_IMM26BY2`): `111000` then a 26-bit halfword
/// displacement `(S + A - P) >> 1`. A 32-bit C-SKY instruction is two halfwords,
/// the high one first, each in the object's byte order.
fn csky_bsr26(
    field: &mut [u8],
    le: bool,
    reloc: RelocationInfo,
    symbol: u64,
    place: u64,
) -> Result<(), RelocationFailure> {
    let insn = (u32::from(read_u16(&field[..2], le)) << 16) | u32::from(read_u16(&field[2..], le));
    if insn >> 26 != 0x38 || reloc.implicit_addend {
        return Err(RelocationFailure::InvalidEncoding);
    }
    let value = symbol as i128 + reloc.addend as i128 - place as i128;
    require_aligned(value, 2)?;
    require_signed(value, 27)?;
    let insn = (insn & !0x03ff_ffff) | (((value >> 1) as u32) & 0x03ff_ffff);
    write_u16(&mut field[..2], le, (insn >> 16) as u16);
    write_u16(&mut field[2..], le, insn as u16);
    Ok(())
}

/// An OpenRISC instruction field: `fields(S + A [- P])` gives the field mask and
/// its bits, which replace the masked bits of the word.
fn or1k_patch(
    field: &mut [u8],
    le: bool,
    reloc: RelocationInfo,
    symbol: u64,
    place: Option<u64>,
    fields: impl Fn(i128) -> Result<(u32, u32), RelocationFailure>,
) -> Result<(), RelocationFailure> {
    if reloc.implicit_addend {
        return Err(RelocationFailure::InvalidEncoding);
    }
    let value = symbol as i128 + reloc.addend as i128 - place.map_or(0, i128::from);
    let (mask, bits) = fields(value)?;
    let insn = read_u32(field, le);
    write_u32(field, le, (insn & !mask) | (bits & mask));
    Ok(())
}

/// Xtensa `SLOT0_OP` (little-endian cores): the operand of the relocated
/// instruction, chosen by its opcode. `L32R` takes the (negative) word offset of
/// the literal from `(P + 3) & !3`; `CALLn` the word offset from
/// `(P & !3) + 4`; `J` the 18-bit, `BRI12` (`beqz`..) the 12-bit and `BRI8`/`RRI8`
/// branches the 8-bit byte offset from `P + 4`, unsigned for `LOOP`/`LOOPNEZ`/
/// `LOOPGTZ`; the narrow `beqz.n`/`bnez.n` the unsigned 6-bit one. The field
/// is three bytes; a narrow instruction uses the first two. GNU `as` already
/// writes local displacements, which this reproduces.
fn xtensa_slot0(
    field: &mut [u8],
    le: bool,
    reloc: RelocationInfo,
    symbol: u64,
    place: u64,
) -> Result<(), RelocationFailure> {
    if !le {
        return Err(RelocationFailure::Unsupported);
    }
    if reloc.implicit_addend {
        return Err(RelocationFailure::InvalidEncoding);
    }
    let insn = u32::from(field[0]) | (u32::from(field[1]) << 8) | (u32::from(field[2]) << 16);
    let target = symbol as i128 + reloc.addend as i128;
    let p = place as i128;
    let next = p + 4;
    let signed = |d: i128, bits: u8| require_signed(d, bits).map(|()| d as u32);
    let unsigned = |d: i128, bits: u8| {
        if (0..1 << bits).contains(&d) {
            Ok(d as u32)
        } else {
            Err(RelocationFailure::OutOfRange)
        }
    };
    let op0 = insn & 0xf;
    let (n, m) = ((insn >> 4) & 3, (insn >> 6) & 3);
    let (insn, width) = match op0 {
        0x1 => {
            let d = target - ((p + 3) & !3);
            require_aligned(d, 4)?;
            if !(-(1 << 18)..0).contains(&d) {
                return Err(RelocationFailure::OutOfRange);
            }
            ((insn & 0xff) | ((((d >> 2) as u32) & 0xffff) << 8), 3)
        }
        0x5 => {
            let d = target - ((p & !3) + 4);
            require_aligned(d, 4)?;
            let w = signed(d >> 2, 18)?;
            ((insn & 0x3f) | ((w & 0x3_ffff) << 6), 3)
        }
        0x6 if n == 0 => (
            (insn & 0x3f) | ((signed(target - next, 18)? & 0x3_ffff) << 6),
            3,
        ),
        0x6 if n == 1 => (
            (insn & 0xfff) | ((signed(target - next, 12)? & 0xfff) << 12),
            3,
        ),
        0x6 if n == 2 || (n == 3 && m >= 2) => (
            (insn & 0xffff) | ((signed(target - next, 8)? & 0xff) << 16),
            3,
        ),
        0x6 if n == 3 && m == 1 => {
            let r = (insn >> 12) & 0xf;
            let d = match r {
                8..=10 => unsigned(target - next, 8)?,
                0 | 1 => signed(target - next, 8)?,
                _ => return Err(RelocationFailure::InvalidEncoding),
            };
            ((insn & 0xffff) | ((d & 0xff) << 16), 3)
        }
        0x7 => (
            (insn & 0xffff) | ((signed(target - next, 8)? & 0xff) << 16),
            3,
        ),
        0xc if m >= 2 => {
            let d = unsigned(target - next, 6)?;
            (
                (insn & 0x0fcf) | ((d & 0xf) << 12) | (((d >> 4) & 3) << 4),
                2,
            )
        }
        _ => return Err(RelocationFailure::InvalidEncoding),
    };
    for (i, byte) in field.iter_mut().take(width).enumerate() {
        *byte = (insn >> (8 * i)) as u8;
    }
    Ok(())
}

/// ARCv2 `bl` (`S25W`: s[10:2] at bits 26..18, s[20:11] at 15..6, s[24:21] at
/// 3..0) and `b` (`S25H`: s[10:1] at 26..17, s[20:11] at 15..6, s[24:21] at 3..0),
/// `s = S + A - (P & !3)`, over the middle-endian instruction word.
fn arc_branch25(
    field: &mut [u8],
    reloc: RelocationInfo,
    symbol: u64,
    place: u64,
    word: bool,
) -> Result<(), RelocationFailure> {
    let insn =
        (u32::from(read_u16(&field[..2], true)) << 16) | u32::from(read_u16(&field[2..], true));
    let major = insn >> 27;
    if (word && major != 1) || (!word && major != 0) || reloc.implicit_addend {
        return Err(RelocationFailure::InvalidEncoding);
    }
    let value = symbol as i128 + reloc.addend as i128 - (place & !3) as i128;
    require_aligned(value, if word { 4 } else { 2 })?;
    require_signed(value, 25)?;
    let insn = if word {
        let s = ((value >> 2) as u32) & 0x7f_ffff;
        (insn & !((0x1ff << 18) | (0x3ff << 6) | 0xf))
            | ((s & 0x1ff) << 18)
            | (((s >> 9) & 0x3ff) << 6)
            | ((s >> 19) & 0xf)
    } else {
        let s = ((value >> 1) as u32) & 0xff_ffff;
        (insn & !((0x3ff << 17) | (0x3ff << 6) | 0xf))
            | ((s & 0x3ff) << 17)
            | (((s >> 10) & 0x3ff) << 6)
            | ((s >> 20) & 0xf)
    };
    write_u16(&mut field[..2], true, (insn >> 16) as u16);
    write_u16(&mut field[2..], true, insn as u16);
    Ok(())
}

fn arm_thumb_branch24(
    field: &mut [u8],
    le: bool,
    reloc: RelocationInfo,
    symbol: u64,
    place: u64,
    call: bool,
    target_thumb: Option<bool>,
) -> Result<(), RelocationFailure> {
    let mut hi = read_u16(&field[..2], le);
    let mut lo = read_u16(&field[2..], le);
    // BL/BLX set both of the low halfword's top bits; the T4 `B.W` this
    // relocation pair otherwise targets sets bit 15 and bit 12 only. A T3
    // conditional `B.W` matches neither and uses a different immediate layout.
    let form_matches = if call {
        lo & 0xc000 == 0xc000
    } else {
        lo & 0xd000 == 0x9000
    };
    if hi & 0xf800 != 0xf000 || !form_matches {
        return Err(RelocationFailure::InvalidEncoding);
    }
    let is_blx = lo & 0x1000 == 0;
    if !call && target_thumb == Some(false) {
        return Err(RelocationFailure::RequiresVeneer);
    }
    let s = ((hi >> 10) & 1) as i128;
    let j1 = ((lo >> 13) & 1) as i128;
    let j2 = ((lo >> 11) & 1) as i128;
    let i1 = (!(j1 ^ s)) & 1;
    let i2 = (!(j2 ^ s)) & 1;
    let encoded = (s << 24)
        | (i1 << 23)
        | (i2 << 22)
        | (((hi & 0x03ff) as i128) << 12)
        | (((lo & 0x07ff) as i128) << 1);
    let implicit = sign_extend(encoded, 25);
    let addend = explicit_plus_implicit(reloc, implicit);
    let mut value = (symbol & !1) as i128 + addend - place as i128;
    require_aligned(value, 2)?;
    let write_blx = call && !target_thumb.unwrap_or(!is_blx);
    if write_blx {
        // Thumb BLX branches from Align(PC, 4), even when its own address is
        // only halfword-aligned. Adjust the halfword-aligned displacement to
        // that architectural base (a correction of 0 or 2) before encoding it.
        value += (-value).rem_euclid(4);
        lo &= !0x1000;
    } else if call {
        lo |= 0x1000;
    }
    require_signed(value, 25)?;
    let raw = value as u32;
    let new_s = (raw >> 24) & 1;
    let new_i1 = (raw >> 23) & 1;
    let new_i2 = (raw >> 22) & 1;
    let new_j1 = (!(new_i1 ^ new_s)) & 1;
    let new_j2 = (!(new_i2 ^ new_s)) & 1;
    hi = (hi & !0x07ff) | ((new_s as u16) << 10) | (((raw >> 12) as u16) & 0x03ff);
    lo = (lo & !0x2fff)
        | ((new_j1 as u16) << 13)
        | ((new_j2 as u16) << 11)
        | (((raw >> 1) as u16) & 0x07ff);
    write_u16(&mut field[..2], le, hi);
    write_u16(&mut field[2..], le, lo);
    Ok(())
}

fn arm_prel31(
    field: &mut [u8],
    le: bool,
    reloc: RelocationInfo,
    symbol: u64,
    place: u64,
) -> Result<(), RelocationFailure> {
    let old = read_u32(field, le);
    let implicit = sign_extend((old & 0x7fff_ffff) as i128, 31);
    let value = symbol as i128 + explicit_plus_implicit(reloc, implicit) - place as i128;
    require_signed(value, 31)?;
    write_u32(
        field,
        le,
        (old & 0x8000_0000) | ((value as u32) & 0x7fff_ffff),
    );
    Ok(())
}

/// `R_ARM_REL32`. AAELF32 classifies it as a no-overflow-check relocation, so
/// the result is truncated to the field width rather than range-checked.
fn pc_relative_data(
    field: &mut [u8],
    le: bool,
    reloc: RelocationInfo,
    symbol: u64,
    place: u64,
) -> Result<(), RelocationFailure> {
    let value =
        symbol as i128 + explicit_plus_implicit(reloc, read_signed(field, le)) - place as i128;
    write_integer(field, le, value as u64);
    Ok(())
}

fn aarch64_branch26(
    field: &mut [u8],
    le: bool,
    reloc: RelocationInfo,
    symbol: u64,
    place: u64,
) -> Result<(), RelocationFailure> {
    let mut insn = read_u32(field, le);
    if insn & 0x7c00_0000 != 0x1400_0000 {
        return Err(RelocationFailure::InvalidEncoding);
    }
    let implicit = sign_extend(((insn & 0x03ff_ffff) as i128) << 2, 28);
    let value = symbol as i128 + explicit_plus_implicit(reloc, implicit) - place as i128;
    require_aligned(value, 4)?;
    require_signed(value, 28)?;
    insn = (insn & !0x03ff_ffff) | (((value >> 2) as u32) & 0x03ff_ffff);
    write_u32(field, le, insn);
    Ok(())
}

fn aarch64_adr_page(
    field: &mut [u8],
    le: bool,
    reloc: RelocationInfo,
    symbol: u64,
    place: u64,
    checked: bool,
) -> Result<(), RelocationFailure> {
    let mut insn = read_u32(field, le);
    if insn & 0x9f00_0000 != 0x9000_0000 {
        return Err(RelocationFailure::InvalidEncoding);
    }
    let encoded = ((((insn >> 5) & 0x7ffff) as i128) << 2) | (((insn >> 29) & 3) as i128);
    let implicit_pages = sign_extend(encoded, 21);
    let implicit = implicit_pages << 12;
    let target = symbol as i128 + explicit_plus_implicit(reloc, implicit);
    let pages = (target >> 12) - ((place as i128) >> 12);
    if checked {
        require_signed(pages, 21)?;
    }
    let raw = pages as u32;
    insn = (insn & !0x60ff_ffe0) | ((raw & 3) << 29) | (((raw >> 2) & 0x7ffff) << 5);
    write_u32(field, le, insn);
    Ok(())
}

/// `*_ABS_LO12_NC`: the ABI writes bits 11:`scale` of `S + A`, so the low 12
/// bits are taken first and the scaled field is what remains.
fn aarch64_lo12(
    field: &mut [u8],
    le: bool,
    reloc: RelocationInfo,
    symbol: u64,
    scale: u8,
    ldst: bool,
) -> Result<(), RelocationFailure> {
    let mut insn = read_u32(field, le);
    if !lo12_encoding_matches(insn, scale, ldst) {
        return Err(RelocationFailure::InvalidEncoding);
    }
    let old_imm = ((insn >> 10) & 0xfff) as i128;
    let implicit = old_imm << scale;
    let value = symbol as i128 + explicit_plus_implicit(reloc, implicit);
    let mask = (1i128 << scale) - 1;
    if value & mask != 0 {
        return Err(RelocationFailure::Misaligned);
    }
    let imm = ((value & 0xfff) >> scale) as u32;
    insn = (insn & !(0xfff << 10)) | (imm << 10);
    write_u32(field, le, insn);
    Ok(())
}

/// `R_AARCH64_TLSLE_ADD_TPREL_HI12`: bits 12..23 of the thread-pointer offset
/// `S + A` into an `add ..., lsl #12`; an offset of 2^24 or more overflows.
fn aarch64_tprel_hi12(
    field: &mut [u8],
    le: bool,
    reloc: RelocationInfo,
    symbol: u64,
) -> Result<(), RelocationFailure> {
    let mut insn = read_u32(field, le);
    if insn & 0x7fc0_0000 != 0x1140_0000 {
        return Err(RelocationFailure::InvalidEncoding);
    }
    let implicit = (((insn >> 10) & 0xfff) as i128) << 12;
    let value = symbol as i128 + explicit_plus_implicit(reloc, implicit);
    if !(0..1i128 << 24).contains(&value) {
        return Err(RelocationFailure::OutOfRange);
    }
    insn = (insn & !(0xfff << 10)) | ((((value >> 12) & 0xfff) as u32) << 10);
    write_u32(field, le, insn);
    Ok(())
}

/// ADD (immediate) for the ADD form; load/store register (unsigned immediate)
/// with a size field matching `scale` for the LDST forms. A SIMD 128-bit access
/// spells its scale as `opc<1>:size`.
fn lo12_encoding_matches(insn: u32, scale: u8, ldst: bool) -> bool {
    if !ldst {
        return insn & 0x7f80_0000 == 0x1100_0000;
    }
    if insn & 0x3b00_0000 != 0x3900_0000 {
        return false;
    }
    let size = insn >> 30;
    let encoded = if insn & 0x0400_0000 != 0 {
        (((insn >> 23) & 1) << 2) | size
    } else {
        size
    };
    encoded == u32::from(scale)
}

/// The PowerPC 16-bit half a `_LO`/`_HI`/`_HA`/... relocation names, and
/// whether its value is PC-relative (`REL16*`). 64-bit only: the `DS` and
/// `HIGHER`/`HIGHEST` forms.
fn ppc_half(arch: Architecture, r_type: u32) -> Option<(PpcHalf, bool)> {
    let common = match r_type {
        elf::R_PPC_ADDR16 => Some((PpcHalf::Plain, false)),
        elf::R_PPC_ADDR16_LO => Some((PpcHalf::Lo, false)),
        elf::R_PPC_ADDR16_HI => Some((PpcHalf::Hi, false)),
        elf::R_PPC_ADDR16_HA => Some((PpcHalf::Ha, false)),
        elf::R_PPC_REL16 => Some((PpcHalf::Plain, true)),
        elf::R_PPC_REL16_LO => Some((PpcHalf::Lo, true)),
        elf::R_PPC_REL16_HI => Some((PpcHalf::Hi, true)),
        elf::R_PPC_REL16_HA => Some((PpcHalf::Ha, true)),
        _ => None,
    };
    if common.is_some() || arch != Architecture::PowerPc64 {
        return common;
    }
    match r_type {
        elf::R_PPC64_ADDR16_DS => Some((PpcHalf::Ds, false)),
        elf::R_PPC64_ADDR16_LO_DS => Some((PpcHalf::LoDs, false)),
        elf::R_PPC64_ADDR16_HIGH => Some((PpcHalf::High, false)),
        elf::R_PPC64_ADDR16_HIGHA => Some((PpcHalf::HighA, false)),
        elf::R_PPC64_ADDR16_HIGHER => Some((PpcHalf::Higher, false)),
        elf::R_PPC64_ADDR16_HIGHERA => Some((PpcHalf::HigherA, false)),
        elf::R_PPC64_ADDR16_HIGHEST => Some((PpcHalf::Highest, false)),
        elf::R_PPC64_ADDR16_HIGHESTA => Some((PpcHalf::HighestA, false)),
        _ => None,
    }
}

/// `R_PPC64_REL24_NOTOC`, which the `object` crate does not name.
const R_PPC64_REL24_NOTOC: u32 = 116;

/// `b`/`bl` with a PC-relative 24-bit word displacement. `PLTREL24` passes
/// `addend: false`: its addend is the `.got2` offset of a PIC call stub.
fn ppc_rel24(
    field: &mut [u8],
    le: bool,
    reloc: RelocationInfo,
    symbol: u64,
    place: u64,
    addend: bool,
) -> Result<(), RelocationFailure> {
    let mut insn = read_u32(field, le);
    if insn & 0xfc00_0002 != 0x4800_0000 {
        return Err(RelocationFailure::InvalidEncoding);
    }
    let implicit = sign_extend((insn & 0x03ff_fffc) as i128, 26);
    let addend = if addend {
        explicit_plus_implicit(reloc, implicit)
    } else {
        0
    };
    let value = symbol as i128 + addend - place as i128;
    require_aligned(value, 4)?;
    require_signed(value, 26)?;
    insn = (insn & !0x03ff_fffc) | ((value as u32) & 0x03ff_fffc);
    write_u32(field, le, insn);
    Ok(())
}

/// `ba`/`bla`: the absolute target in the 24-bit word field.
fn ppc_abs24(
    field: &mut [u8],
    le: bool,
    reloc: RelocationInfo,
    symbol: u64,
) -> Result<(), RelocationFailure> {
    let mut insn = read_u32(field, le);
    if insn & 0xfc00_0002 != 0x4800_0002 {
        return Err(RelocationFailure::InvalidEncoding);
    }
    let implicit = sign_extend((insn & 0x03ff_fffc) as i128, 26);
    let value = symbol as i128 + explicit_plus_implicit(reloc, implicit);
    require_aligned(value, 4)?;
    require_signed(value, 26)?;
    insn = (insn & !0x03ff_fffc) | ((value as u32) & 0x03ff_fffc);
    write_u32(field, le, insn);
    Ok(())
}

/// `bc` (`REL14`, PC-relative) or `bca` (`ADDR14`): the 14-bit word field of
/// a conditional branch. The branch-prediction bits are kept as they are.
fn ppc_branch14(
    field: &mut [u8],
    le: bool,
    reloc: RelocationInfo,
    symbol: u64,
    place: Option<u64>,
) -> Result<(), RelocationFailure> {
    let mut insn = read_u32(field, le);
    if insn >> 26 != 16 || (insn & 2 != 0) == place.is_some() {
        return Err(RelocationFailure::InvalidEncoding);
    }
    let implicit = sign_extend((insn & 0xfffc) as i128, 16);
    let value =
        symbol as i128 + explicit_plus_implicit(reloc, implicit) - place.unwrap_or(0) as i128;
    require_aligned(value, 4)?;
    require_signed(value, 16)?;
    insn = (insn & !0xfffc) | ((value as u32) & 0xfffc);
    write_u32(field, le, insn);
    Ok(())
}

/// The absolute (`ADDR16*`) or PC-relative (`REL16*`) 16-bit halves.
fn ppc_half16(
    field: &mut [u8],
    le: bool,
    reloc: RelocationInfo,
    symbol: u64,
    place: Option<u64>,
    form: PpcHalf,
) -> Result<(), RelocationFailure> {
    if reloc.implicit_addend {
        return Err(RelocationFailure::InvalidEncoding);
    }
    let value = symbol as i128 + reloc.addend as i128 - place.unwrap_or(0) as i128;
    if matches!(form, PpcHalf::Plain) && place.is_none() {
        // `ADDR16` checks a bitfield: a signed or an unsigned 16-bit value.
        if !(-0x8000..=0xffff).contains(&value) {
            return Err(RelocationFailure::OutOfRange);
        }
        write_u16(field, le, value as u16);
        return Ok(());
    }
    write_half(field, le, value, form)
}

fn ppc64_toc16(
    field: &mut [u8],
    le: bool,
    reloc: RelocationInfo,
    symbol: u64,
    toc: Option<u64>,
    form: PpcHalf,
) -> Result<(), RelocationFailure> {
    let toc = toc.ok_or(RelocationFailure::MissingToc)?;
    // PPC64 uses RELA for these split fields. Reconstructing a full implicit
    // addend from one half is impossible, so reject a malformed REL spelling.
    if reloc.implicit_addend {
        return Err(RelocationFailure::InvalidEncoding);
    }
    let value = symbol as i128 + reloc.addend as i128 - toc as i128;
    write_half(field, le, value, form)
}

/// Encode `value` into one PowerPC 16-bit field. `Plain` and `Ds` are range
/// checked as signed; the `DS` forms keep the instruction's two low bits.
fn write_half(
    field: &mut [u8],
    le: bool,
    value: i128,
    form: PpcHalf,
) -> Result<(), RelocationFailure> {
    let old = read_u16(field, le);
    let encoded = match form {
        PpcHalf::Plain => {
            require_signed(value, 16)?;
            value as u16
        }
        PpcHalf::Lo => value as u16,
        PpcHalf::Hi | PpcHalf::High => (value >> 16) as u16,
        PpcHalf::Ha | PpcHalf::HighA => ((value + 0x8000) >> 16) as u16,
        PpcHalf::Higher => (value >> 32) as u16,
        PpcHalf::HigherA => ((value + 0x8000_8000) >> 32) as u16,
        PpcHalf::Highest => (value >> 48) as u16,
        PpcHalf::HighestA => ((value + 0x8000_8000_8000) >> 48) as u16,
        PpcHalf::Ds => {
            require_signed(value, 16)?;
            require_aligned(value, 4)?;
            (old & 3) | ((value as u16) & !3)
        }
        PpcHalf::LoDs => {
            require_aligned(value, 4)?;
            (old & 3) | ((value as u16) & !3)
        }
    };
    write_u16(field, le, encoded);
    Ok(())
}

/// An absolute (`UADDR*`) or PC-relative (`REL32`/`REL64`) data field of the
/// width the relocation names, truncated as the GNU linker's 32-bit forms are
/// only when the field spans the address.
fn data_word(
    field: &mut [u8],
    le: bool,
    reloc: RelocationInfo,
    symbol: u64,
    place: Option<u64>,
) -> Result<(), RelocationFailure> {
    let value = symbol as i128 + explicit_plus_implicit(reloc, read_signed(field, le))
        - place.unwrap_or(0) as i128;
    let bits = (field.len() * 8) as u8;
    if bits < 64 && place.is_some() {
        require_signed(value, bits)?;
    } else if bits < 64 && !(-(1i128 << (bits - 1))..(1i128 << bits)).contains(&value) {
        return Err(RelocationFailure::OutOfRange);
    }
    write_integer(field, le, value as u64);
    Ok(())
}

fn ppc64_toc64(
    field: &mut [u8],
    le: bool,
    reloc: RelocationInfo,
    toc: Option<u64>,
) -> Result<(), RelocationFailure> {
    let toc = toc.ok_or(RelocationFailure::MissingToc)?;
    let value = toc as i128 + explicit_plus_implicit(reloc, read_signed(field, le));
    write_integer(field, le, value as u64);
    Ok(())
}

/// `call disp30`: format 1 (`op` = 01), word displacement `(S + A - P) >> 2`.
/// The 30-bit word field spans the whole 32-bit address space. Compute the
/// byte displacement with wrapping 32-bit arithmetic before shifting it.
fn sparc_wdisp30(
    field: &mut [u8],
    le: bool,
    reloc: RelocationInfo,
    symbol: u64,
    place: u64,
) -> Result<(), RelocationFailure> {
    let mut insn = read_u32(field, le);
    if insn >> 30 != 0b01 {
        return Err(RelocationFailure::InvalidEncoding);
    }
    let implicit = sign_extend(((insn & 0x3fff_ffff) as i128) << 2, 32);
    let (Ok(symbol), Ok(place)) = (u32::try_from(symbol), u32::try_from(place)) else {
        // SPARC64 above 4 GiB: a signed 32-bit byte displacement.
        let value = symbol as i128 + explicit_plus_implicit(reloc, implicit) - place as i128;
        require_aligned(value, 4)?;
        require_signed(value, 32)?;
        insn = (insn & 0xc000_0000) | (((value >> 2) as u32) & 0x3fff_ffff);
        write_u32(field, le, insn);
        return Ok(());
    };
    let value = symbol
        .wrapping_add(explicit_plus_implicit(reloc, implicit) as u32)
        .wrapping_sub(place);
    require_aligned(i128::from(value), 4)?;
    insn = (insn & 0xc000_0000) | ((value >> 2) & 0x3fff_ffff);
    write_u32(field, le, insn);
    Ok(())
}

/// `sethi %hi(S + A), rd` (`HI22`) or `%pc22(S + A - P)` (`PC22`): format 2
/// with `op2` = 100, imm22 = bits 31..10. Like the GNU linker, the value is
/// truncated to 32 bits rather than range-checked. SPARC uses RELA; a REL
/// spelling cannot carry the low 10 bits of an addend, so it is rejected.
fn sparc_hi22(
    field: &mut [u8],
    le: bool,
    reloc: RelocationInfo,
    symbol: u64,
    place: Option<u64>,
) -> Result<(), RelocationFailure> {
    let mut insn = read_u32(field, le);
    if insn & 0xc1c0_0000 != 0x0100_0000 || reloc.implicit_addend {
        return Err(RelocationFailure::InvalidEncoding);
    }
    let value = symbol as i128 + reloc.addend as i128 - place.unwrap_or(0) as i128;
    insn = (insn & !0x003f_ffff) | (((value >> 10) as u32) & 0x003f_ffff);
    write_u32(field, le, insn);
    Ok(())
}

/// `%lo(S + A)` (`LO10`) or `%pc10(S + A - P)` (`PC10`): the low 10 bits into
/// the simm13 field of a format-3 instruction (`op` = 1x) with the immediate
/// bit `i` set. Only the ten relocated bits are replaced, as the GNU linker
/// does, and nothing is range-checked: the value is a truncation by definition.
fn sparc_lo10(
    field: &mut [u8],
    le: bool,
    reloc: RelocationInfo,
    symbol: u64,
    place: Option<u64>,
) -> Result<(), RelocationFailure> {
    let mut insn = read_u32(field, le);
    if insn >> 31 != 1 || insn & 0x2000 == 0 || reloc.implicit_addend {
        return Err(RelocationFailure::InvalidEncoding);
    }
    let value = symbol as i128 + reloc.addend as i128 - place.unwrap_or(0) as i128;
    insn = (insn & !0x3ff) | ((value as u32) & 0x3ff);
    write_u32(field, le, insn);
    Ok(())
}

/// SPARC64 `sethi` forms: `H44` (bits 43..22 of `S + A`), `HH22` (63..42) and
/// `LM22` (31..10, untruncated) into imm22. RELA only, like `HI22`.
fn sparc_sethi(
    field: &mut [u8],
    le: bool,
    reloc: RelocationInfo,
    symbol: u64,
    shift: u8,
) -> Result<(), RelocationFailure> {
    let mut insn = read_u32(field, le);
    if insn & 0xc1c0_0000 != 0x0100_0000 || reloc.implicit_addend {
        return Err(RelocationFailure::InvalidEncoding);
    }
    let value = symbol as i128 + reloc.addend as i128;
    insn = (insn & !0x003f_ffff) | (((value >> shift) as u32) & 0x003f_ffff);
    write_u32(field, le, insn);
    Ok(())
}

/// SPARC64 format-3 immediates: `M44` (bits 21..12 of `S + A` in the low 10
/// bits), `L44` (bits 11..0 in the low 12) and `HM10` (bits 41..32 in the low
/// 10). Only the relocated bits of simm13 are replaced.
fn sparc_simm(
    field: &mut [u8],
    le: bool,
    reloc: RelocationInfo,
    symbol: u64,
    shift: u8,
    mask: u16,
) -> Result<(), RelocationFailure> {
    let mut insn = read_u32(field, le);
    if insn >> 31 != 1 || insn & 0x2000 == 0 || reloc.implicit_addend {
        return Err(RelocationFailure::InvalidEncoding);
    }
    let mask = u32::from(mask);
    let value = symbol as i128 + reloc.addend as i128;
    insn = (insn & !mask) | (((value >> shift) as u32) & mask);
    write_u32(field, le, insn);
    Ok(())
}

/// Format-2 branches: `WDISP22` (`Bicc`/`FBfcc`, disp22) and `WDISP19`
/// (`BPcc`/`FBPfcc`, disp19): the word displacement `(S + A - P) >> 2` in the
/// low `bits` bits, range-checked.
fn sparc_disp(
    field: &mut [u8],
    le: bool,
    reloc: RelocationInfo,
    symbol: u64,
    place: u64,
    bits: u8,
) -> Result<(), RelocationFailure> {
    let mut insn = read_u32(field, le);
    let op2 = (insn >> 22) & 7;
    let form = if bits == 22 {
        matches!(op2, 0b010 | 0b110)
    } else {
        matches!(op2, 0b001 | 0b101)
    };
    if insn >> 30 != 0 || !form || reloc.implicit_addend {
        return Err(RelocationFailure::InvalidEncoding);
    }
    let value = symbol as i128 + reloc.addend as i128 - place as i128;
    require_aligned(value, 4)?;
    require_signed(value, bits + 2)?;
    let mask = (1u32 << bits) - 1;
    insn = (insn & !mask) | (((value >> 2) as u32) & mask);
    write_u32(field, le, insn);
    Ok(())
}

/// `WDISP16`: `BPr` (format 2, op2 = 011), the 16-bit word displacement split
/// into d16hi (bits 21..20) and d16lo (bits 13..0).
fn sparc_wdisp16(
    field: &mut [u8],
    le: bool,
    reloc: RelocationInfo,
    symbol: u64,
    place: u64,
) -> Result<(), RelocationFailure> {
    let mut insn = read_u32(field, le);
    if insn >> 30 != 0 || (insn >> 22) & 7 != 0b011 || reloc.implicit_addend {
        return Err(RelocationFailure::InvalidEncoding);
    }
    let value = symbol as i128 + reloc.addend as i128 - place as i128;
    require_aligned(value, 4)?;
    require_signed(value, 18)?;
    let words = (value >> 2) as u32;
    insn = (insn & !0x0030_3fff) | (((words >> 14) & 3) << 20) | (words & 0x3fff);
    write_u32(field, le, insn);
    Ok(())
}

/// `PCALA_HI20`: `pcalau12i rd, si20` (si20 at bits 24..5), the page delta
/// `((S + A + 0x800) & !0xfff) - (P & !0xfff)` rounded so the paired signed
/// low 12 bits land on `S + A`. LoongArch instructions are little-endian.
fn larch_pcala_hi20(
    field: &mut [u8],
    reloc: RelocationInfo,
    symbol: u64,
    place: u64,
) -> Result<(), RelocationFailure> {
    let mut insn = read_u32(field, true);
    if insn & 0xfe00_0000 != 0x1a00_0000 || reloc.implicit_addend {
        return Err(RelocationFailure::InvalidEncoding);
    }
    let target = symbol as i128 + reloc.addend as i128;
    let value = ((target + 0x800) & !0xfff) - (place as i128 & !0xfff);
    require_signed(value, 32)?;
    insn = (insn & !(0xf_ffff << 5)) | ((((value >> 12) as u32) & 0xf_ffff) << 5);
    write_u32(field, true, insn);
    Ok(())
}

/// `PCALA_LO12`: the low 12 bits of `S + A` into si12/ui12 (bits 21..10) of
/// `addi`, a load or a store.
fn larch_lo12(
    field: &mut [u8],
    reloc: RelocationInfo,
    symbol: u64,
) -> Result<(), RelocationFailure> {
    if reloc.implicit_addend {
        return Err(RelocationFailure::InvalidEncoding);
    }
    let mut insn = read_u32(field, true);
    let lo = ((symbol as i128 + reloc.addend as i128) as u32) & 0xfff;
    insn = (insn & !(0xfff << 10)) | (lo << 10);
    write_u32(field, true, insn);
    Ok(())
}

/// `CALL36`: `pcaddu18i ra, si20; jirl ra, ra, offs16`, the 8-byte pair whose
/// 38-bit displacement `S + A - P` splits as `(v + 0x20000) >> 18` and the
/// signed word count of its low 18 bits.
fn larch_call36(
    field: &mut [u8],
    reloc: RelocationInfo,
    symbol: u64,
    place: u64,
) -> Result<(), RelocationFailure> {
    let mut hi = read_u32(&field[..4], true);
    let mut lo = read_u32(&field[4..], true);
    if hi & 0xfe00_0000 != 0x1e00_0000 || lo & 0xfc00_0000 != 0x4c00_0000 || reloc.implicit_addend {
        return Err(RelocationFailure::InvalidEncoding);
    }
    let value = symbol as i128 + reloc.addend as i128 - place as i128;
    require_aligned(value, 4)?;
    require_signed(value + 0x2_0000, 38)?;
    hi = (hi & !(0xf_ffff << 5)) | (((((value + 0x2_0000) >> 18) as u32) & 0xf_ffff) << 5);
    lo = (lo & !(0xffff << 10)) | ((((value >> 2) as u32) & 0xffff) << 10);
    write_u32(&mut field[..4], true, hi);
    write_u32(&mut field[4..], true, lo);
    Ok(())
}

/// `B26` (`b`/`bl`), `B21` (`beqz`/`bnez`/`bceqz`/`bcnez`) and `B16` (the
/// two-register compares and `jirl`): the word displacement's low 16 bits at
/// bits 25..10 and, for B26 and B21, its high 10 or 5 bits at bit 0.
fn larch_branch(
    field: &mut [u8],
    reloc: RelocationInfo,
    symbol: u64,
    place: u64,
    bits: u8,
) -> Result<(), RelocationFailure> {
    let mut insn = read_u32(field, true);
    let op = insn >> 26;
    let form = match bits {
        26 => matches!(op, 0x14 | 0x15),
        21 => matches!(op, 0x10..=0x12),
        _ => matches!(op, 0x13 | 0x16..=0x1b),
    };
    if !form || reloc.implicit_addend {
        return Err(RelocationFailure::InvalidEncoding);
    }
    let value = symbol as i128 + reloc.addend as i128 - place as i128;
    require_aligned(value, 4)?;
    require_signed(value, bits + 2)?;
    let words = (value >> 2) as u32;
    let high = match bits {
        26 => 0x3ff,
        21 => 0x1f,
        _ => 0,
    };
    insn = (insn & !(0xffff << 10) & !high) | ((words & 0xffff) << 10) | ((words >> 16) & high);
    write_u32(field, true, insn);
    Ok(())
}

/// A Lanai absolute field: `S + A` into the `mask` bits of a big-endian word,
/// range-checked against the field (and word alignment for a branch).
fn lanai_field(
    field: &mut [u8],
    reloc: RelocationInfo,
    symbol: u64,
    mask: u32,
    branch: bool,
) -> Result<(), RelocationFailure> {
    let mut insn = read_u32(field, false);
    if reloc.implicit_addend || (branch && insn >> 28 != 0xe) {
        return Err(RelocationFailure::InvalidEncoding);
    }
    let value = symbol as i128 + reloc.addend as i128;
    if branch {
        require_aligned(value, 4)?;
    }
    if value < 0 || value > i128::from(mask | 3) {
        return Err(RelocationFailure::OutOfRange);
    }
    insn = (insn & !mask) | ((value as u32) & mask);
    write_u32(field, false, insn);
    Ok(())
}

/// C28x `ABS22`: the word address `S/2 + A` into the 6 + 16 bits of an `LCR`/`MOVL #22bit`.
fn c28x_abs22(
    field: &mut [u8],
    reloc: RelocationInfo,
    symbol: u64,
) -> Result<(), RelocationFailure> {
    let w0 = u16::from_le_bytes([field[0], field[1]]);
    let w1 = u16::from_le_bytes([field[2], field[3]]);
    require_aligned(symbol as i128, 2)?;
    let addend = if reloc.implicit_addend {
        (i128::from(w0 & 0x3f) << 16) | i128::from(w1)
    } else {
        i128::from(reloc.addend)
    };
    let value = (symbol / 2) as i128 + addend;
    if !(0..1i128 << 22).contains(&value) {
        return Err(RelocationFailure::OutOfRange);
    }
    let value = value as u32;
    let w0 = (w0 & !0x3f) | ((value >> 16) as u16 & 0x3f);
    field[0..2].copy_from_slice(&w0.to_le_bytes());
    field[2..4].copy_from_slice(&(value as u16).to_le_bytes());
    Ok(())
}

/// C28x `ABS16`/`ABS32`: the word address `S/2 + A` as a little-endian data word.
fn c28x_data(
    field: &mut [u8],
    reloc: RelocationInfo,
    symbol: u64,
    words: u8,
) -> Result<(), RelocationFailure> {
    require_aligned(symbol as i128, 2)?;
    let addend = match (reloc.implicit_addend, words) {
        (true, 1) => i128::from(i16::from_le_bytes([field[0], field[1]])),
        (true, _) => i128::from(u32::from_le_bytes([field[0], field[1], field[2], field[3]])),
        (false, _) => i128::from(reloc.addend),
    };
    let value = (symbol / 2) as i128 + addend;
    if words == 1 {
        field[0..2].copy_from_slice(&(value as u16).to_le_bytes());
    } else {
        field[0..4].copy_from_slice(&(value as u32).to_le_bytes());
    }
    Ok(())
}

/// CUDA `ABS47_34`: the word address `(S + A) >> 2` into bits 34..80 of a little-endian
/// 128-bit instruction.
fn cuda_abs47(
    field: &mut [u8],
    reloc: RelocationInfo,
    symbol: u64,
) -> Result<(), RelocationFailure> {
    let value = symbol as i128 + reloc.addend as i128;
    require_aligned(value, 4)?;
    if !(0..1i128 << 49).contains(&value) {
        return Err(RelocationFailure::OutOfRange);
    }
    let mut bytes = [0u8; 16];
    bytes.copy_from_slice(&field[..16]);
    let mut insn = u128::from_le_bytes(bytes);
    let mask: u128 = ((1u128 << 47) - 1) << 34;
    insn = (insn & !mask) | ((((value as u128) >> 2) << 34) & mask);
    field[..16].copy_from_slice(&insn.to_le_bytes());
    Ok(())
}

/// Lanai `21`: bits 20..16 of `S + A` into bits 22..18, bits 15..0 into 15..0.
fn lanai_abs21(
    field: &mut [u8],
    reloc: RelocationInfo,
    symbol: u64,
) -> Result<(), RelocationFailure> {
    let value = symbol as i128 + reloc.addend as i128;
    if reloc.implicit_addend {
        return Err(RelocationFailure::InvalidEncoding);
    }
    if !(0..1 << 21).contains(&value) {
        return Err(RelocationFailure::OutOfRange);
    }
    let v = value as u32;
    let mut insn = read_u32(field, false);
    insn = (insn & !0x007c_ffff) | (((v >> 16) & 0x1f) << 18) | (v & 0xffff);
    write_u32(field, false, insn);
    Ok(())
}

/// AVR `rjmp`/`rcall` (12-bit k at bits 11..0) and `brbs`/`brbc` (7-bit k at
/// bits 9..3): the signed word displacement from the next instruction, wrapped
/// at 8 KiB for an `rjmp`/`rcall` whose ends both lie below it.
fn avr_pcrel(
    field: &mut [u8],
    reloc: RelocationInfo,
    symbol: u64,
    place: u64,
    bits: u8,
) -> Result<(), RelocationFailure> {
    let mut insn = read_u16(field, true);
    let (form, at) = if bits == 12 {
        (insn & 0xe000 == 0xc000, 0)
    } else {
        (insn & 0xf800 == 0xf000, 3)
    };
    if !form || reloc.implicit_addend {
        return Err(RelocationFailure::InvalidEncoding);
    }
    let target = symbol as i128 + reloc.addend as i128;
    let value = target - place as i128 - 2;
    require_aligned(value, 2)?;
    let mut words = value >> 1;
    // An `rjmp`/`rcall` on a device with at most 8 KiB of flash reaches every
    // word by wrapping at the flash size, which the 16-bit-PC avr8 language
    // models (`rel12addr` masks the target to 4 KiW): when both ends lie in the
    // first 8 KiB, encode the wrapped displacement instead of refusing it.
    if bits == 12
        && require_signed(words, bits).is_err()
        && (0..0x2000).contains(&target)
        && (0..0x2000).contains(&(place as i128))
    {
        words = words.rem_euclid(0x1000);
        if words >= 0x800 {
            words -= 0x1000;
        }
    }
    require_signed(words, bits)?;
    let mask = ((1u16 << bits) - 1) << at;
    insn = (insn & !mask) | (((words as u16) << at) & mask);
    write_u16(field, true, insn);
    Ok(())
}

/// AVR `ldi Rd, K` (`1110 KKKK dddd KKKK`, and the other register-immediate
/// forms): one byte of `S + A`, of its negation, or of its word address.
fn avr_ldi(
    field: &mut [u8],
    reloc: RelocationInfo,
    symbol: u64,
    shift: u8,
    neg: bool,
    pm: bool,
) -> Result<(), RelocationFailure> {
    let mut insn = read_u16(field, true);
    // The register-immediate format `xxxx KKKK dddd KKKK`: `ldi` (E), and the
    // `subi`/`sbci` (5/4) pair gcc adds a negated address with, `cpi` (3),
    // `ori` (6) and `andi` (7).
    if !matches!(insn >> 12, 0x3..=0x7 | 0xe) || reloc.implicit_addend {
        return Err(RelocationFailure::InvalidEncoding);
    }
    let mut value = symbol as i128 + reloc.addend as i128;
    if neg {
        value = -value;
    }
    if pm {
        value >>= 1;
    }
    let k = ((value >> shift) as u16) & 0xff;
    insn = (insn & 0xf0f0) | ((k & 0xf0) << 4) | (k & 0xf);
    write_u16(field, true, insn);
    Ok(())
}

/// AVR `call`/`jmp k` (`1001 010k kkkk 11xk`, then k[15:0]): the 22-bit word
/// address `(S + A) >> 1`.
fn avr_call(field: &mut [u8], reloc: RelocationInfo, symbol: u64) -> Result<(), RelocationFailure> {
    let insn = read_u16(&field[..2], true);
    if insn & 0xfe0c != 0x940c || reloc.implicit_addend {
        return Err(RelocationFailure::InvalidEncoding);
    }
    let value = symbol as i128 + reloc.addend as i128;
    require_aligned(value, 2)?;
    if !(0..1 << 23).contains(&value) {
        return Err(RelocationFailure::OutOfRange);
    }
    let words = (value >> 1) as u32;
    let high = (words >> 16) as u16;
    write_u16(
        &mut field[..2],
        true,
        (insn & !0x01f1) | ((high >> 1) << 4) | (high & 1),
    );
    write_u16(&mut field[2..], true, words as u16);
    Ok(())
}

/// The bits of `value` dealt, low first, into the set bits of `mask`.
fn scatter_bits(mask: u32, value: u32) -> u32 {
    let mut out = 0;
    let mut bit = 0;
    for at in 0..32 {
        if mask >> at & 1 != 0 {
            out |= ((value >> bit) & 1) << at;
            bit += 1;
        }
    }
    out
}

/// Replace the `mask` bits of a little-endian Hexagon word with `value`.
fn hexagon_patch(
    field: &mut [u8],
    reloc: RelocationInfo,
    mask: u32,
    value: u32,
) -> Result<(), RelocationFailure> {
    if reloc.implicit_addend {
        return Err(RelocationFailure::InvalidEncoding);
    }
    let insn = read_u32(field, true);
    write_u32(field, true, (insn & !mask) | scatter_bits(mask, value));
    Ok(())
}

/// A Hexagon PC-relative branch: `(S + A - P) >> 2` into the branch's mask,
/// range-checked; the extended (`_X`) form keeps only the low six bits of
/// `S + A - P`, its `immext` holding the rest.
fn hexagon_branch(
    field: &mut [u8],
    reloc: RelocationInfo,
    symbol: u64,
    place: u64,
    mask: u32,
    extended: bool,
) -> Result<(), RelocationFailure> {
    let value = symbol as i128 + reloc.addend as i128 - place as i128;
    if extended {
        return hexagon_patch(field, reloc, mask, (value as u32) & 0x3f);
    }
    require_aligned(value, 4)?;
    require_signed(value, mask.count_ones() as u8 + 2)?;
    hexagon_patch(field, reloc, mask, (value >> 2) as u32)
}

/// Where the low six bits of an extended immediate sit, by instruction class
/// (the top byte) for the classes measured against `ld.lld` (every `_X` site of
/// the real-code sweep objects, relinked at eleven data bases); `None` for any
/// other class and for `8_X`, `12_X` and the rest, which stay unrelocated. A duplex (parse bits 15..14 zero) keeps
/// them in bits 25..20.
fn hexagon_low6_mask(form: HexLow6, insn: u32) -> Option<u32> {
    let duplex = (insn >> 14) & 3 == 0;
    let top = insn >> 24;
    Some(match (form, duplex, top) {
        (HexLow6::R6, true, _) => 0x03f0_0000,
        (HexLow6::R16, false, 0x48) => 0x0000_003f,
        (HexLow6::R16, false, 0x49 | 0x78 | 0xb0) => 0x0000_07e0,
        (HexLow6::R11, false, 0x91) => 0x0000_07e0,
        (HexLow6::R11, false, 0xa1) => 0x0000_003f,
        (HexLow6::R10, false, 0x75 | 0x76) => 0x0000_07e0,
        (HexLow6::R6, false, 0x7c) => 0x001f_8000,
        (HexLow6::R6, false, 0x9d) => 0x0000_0fc0,
        (HexLow6::R6, false, 0xad) => 0x0000_003f,
        _ => return None,
    })
}

/// `R_BPF_64_ABS64`, `R_BPF_64_ABS32` and `R_BPF_64_NODYLD32`, which the
/// `object` crate does not name: plain data words in `.maps`, `.BTF` and the
/// `.rel.BTF.ext` tables.
const R_BPF_64_ABS64: u32 = 2;
const R_BPF_64_ABS32: u32 = 3;
const R_BPF_64_NODYLD32: u32 = 4;

/// `R_BPF_64_64`: the 16-byte `lddw` (`ld_imm64`) instruction. The 64-bit
/// value is split across the two 32-bit `imm` fields, the low half at +4 and the
/// high half at +12; the opcode, registers and offset bytes are untouched.
fn bpf_imm64(
    field: &mut [u8],
    le: bool,
    reloc: RelocationInfo,
    symbol: u64,
) -> Result<(), RelocationFailure> {
    if field[0] != 0x18 {
        return Err(RelocationFailure::InvalidEncoding);
    }
    let implicit = (u64::from(read_u32(&field[4..8], le))
        | (u64::from(read_u32(&field[12..16], le)) << 32)) as i128;
    let value = symbol as i128 + explicit_plus_implicit(reloc, implicit);
    write_u32(&mut field[4..8], le, value as u32);
    write_u32(&mut field[12..16], le, (value >> 32) as u32);
    Ok(())
}

/// `R_BPF_64_32`: the `call` to a BPF subprogram (`src` = 1, the high register
/// nibble little-endian and the low one big-endian). The `imm` at +4 holds the
/// displacement in instructions from the next instruction, `(S + A - P) / 8 - 1`.
/// The REL addend is `(imm + 1) * 8`: `0` for LLVM's `-1` against a function
/// symbol, the callee's offset for a static callee named by its section symbol.
fn bpf_call(
    field: &mut [u8],
    le: bool,
    reloc: RelocationInfo,
    symbol: u64,
    place: u64,
) -> Result<(), RelocationFailure> {
    let src = if le { field[1] >> 4 } else { field[1] & 0x0f };
    if field[0] != 0x85 || src != 1 {
        return Err(RelocationFailure::InvalidEncoding);
    }
    let implicit = (i128::from(read_u32(&field[4..8], le) as i32) + 1) * 8;
    let value = symbol as i128 + explicit_plus_implicit(reloc, implicit) - place as i128;
    require_aligned(value, 8)?;
    let words = value / 8 - 1;
    require_signed(words, 32)?;
    write_u32(&mut field[4..8], le, words as u32);
    Ok(())
}

fn generic(
    field: &mut [u8],
    le: bool,
    reloc: RelocationInfo,
    symbol: u64,
    place: u64,
    bits: u8,
) -> Result<(), RelocationFailure> {
    let addend = explicit_plus_implicit(reloc, read_signed(field, le));
    let value = match reloc.kind {
        RelocationKind::Absolute => symbol as i128 + addend,
        RelocationKind::Relative | RelocationKind::PltRelative => {
            symbol as i128 + addend - place as i128
        }
        RelocationKind::ImageOffset => {
            symbol as i128 + addend - super::reloc_object::RELOC_BASE as i128
        }
        _ => return Err(RelocationFailure::Unsupported),
    };
    // s390x `*DBL` fields hold a halfword count: `(S + A - P) >> 1`.
    let value = if matches!(reloc.encoding, RelocationEncoding::S390xDbl) {
        require_aligned(value, 2)?;
        value >> 1
    } else {
        value
    };
    if matches!(
        reloc.kind,
        RelocationKind::Relative | RelocationKind::PltRelative
    ) || matches!(reloc.encoding, RelocationEncoding::X86Signed)
    {
        require_signed(value, bits)?;
    } else if value < 0 || (bits < 64 && value >= (1i128 << bits)) {
        return Err(RelocationFailure::OutOfRange);
    }
    write_integer(field, le, value as u64);
    Ok(())
}

fn require_aligned(value: i128, align: i128) -> Result<(), RelocationFailure> {
    if value.rem_euclid(align) == 0 {
        Ok(())
    } else {
        Err(RelocationFailure::Misaligned)
    }
}

fn require_signed(value: i128, bits: u8) -> Result<(), RelocationFailure> {
    let min = -(1i128 << (bits - 1));
    let max = (1i128 << (bits - 1)) - 1;
    if (min..=max).contains(&value) {
        Ok(())
    } else {
        Err(RelocationFailure::OutOfRange)
    }
}

fn sign_extend(value: i128, bits: u8) -> i128 {
    let shift = 128 - bits;
    (value << shift) >> shift
}

fn read_signed(field: &[u8], le: bool) -> i128 {
    let raw = read_integer(field, le);
    sign_extend(raw as i128, (field.len() * 8) as u8)
}

fn read_integer(field: &[u8], le: bool) -> u64 {
    let mut value = 0u64;
    if le {
        for byte in field.iter().rev() {
            value = (value << 8) | u64::from(*byte);
        }
    } else {
        for byte in field {
            value = (value << 8) | u64::from(*byte);
        }
    }
    value
}

fn write_integer(field: &mut [u8], le: bool, value: u64) {
    let len = field.len();
    for (i, byte) in field.iter_mut().enumerate() {
        let shift = if le { i * 8 } else { (len - i - 1) * 8 };
        *byte = (value >> shift) as u8;
    }
}

fn read_u16(field: &[u8], le: bool) -> u16 {
    let bytes: [u8; 2] = field.try_into().expect("u16 relocation field");
    if le {
        u16::from_le_bytes(bytes)
    } else {
        u16::from_be_bytes(bytes)
    }
}

fn write_u16(field: &mut [u8], le: bool, value: u16) {
    let bytes = if le {
        value.to_le_bytes()
    } else {
        value.to_be_bytes()
    };
    field.copy_from_slice(&bytes);
}

fn read_u32(field: &[u8], le: bool) -> u32 {
    let bytes: [u8; 4] = field.try_into().expect("u32 relocation field");
    if le {
        u32::from_le_bytes(bytes)
    } else {
        u32::from_be_bytes(bytes)
    }
}

fn write_u32(field: &mut [u8], le: bool, value: u32) {
    let bytes = if le {
        value.to_le_bytes()
    } else {
        value.to_be_bytes()
    };
    field.copy_from_slice(&bytes);
}

#[cfg(test)]
mod tests {
    use super::*;
    use object::{RelocationEncoding, RelocationKind};

    fn reloc(r_type: u32, implicit: bool) -> RelocationInfo {
        RelocationInfo {
            kind: RelocationKind::Unknown,
            encoding: RelocationEncoding::Unknown,
            size: 0,
            addend: 0,
            implicit_addend: implicit,
            r_type: Some(r_type),
        }
    }

    fn generic_reloc(
        kind: RelocationKind,
        encoding: RelocationEncoding,
        size: u8,
        addend: i64,
        implicit_addend: bool,
    ) -> RelocationInfo {
        RelocationInfo {
            kind,
            encoding,
            size,
            addend,
            implicit_addend,
            r_type: None,
        }
    }

    #[test]
    fn no_op_and_generic_classification_cover_the_supported_widths() {
        for (arch, r_type) in [
            (Architecture::Arm, elf::R_ARM_NONE),
            (Architecture::Arm, elf::R_ARM_V4BX),
            (Architecture::Aarch64, elf::R_AARCH64_NONE),
            (Architecture::PowerPc64, elf::R_PPC64_NONE),
        ] {
            assert!(classify_info(arch, reloc(r_type, false)).unwrap().is_none());
        }
        assert!(
            classify_info(
                Architecture::X86_64,
                generic_reloc(
                    RelocationKind::None,
                    RelocationEncoding::Generic,
                    0,
                    0,
                    false,
                ),
            )
            .unwrap()
            .is_none()
        );

        for bits in [8, 16, 32, 64] {
            let info = generic_reloc(
                RelocationKind::Absolute,
                RelocationEncoding::Generic,
                bits,
                0,
                false,
            );
            let spec = classify_info(Architecture::X86_64, info).unwrap().unwrap();
            assert_eq!(spec.width(), usize::from(bits / 8));
        }

        let unsupported = generic_reloc(
            RelocationKind::Absolute,
            RelocationEncoding::Generic,
            24,
            0,
            false,
        );
        assert!(matches!(
            classify_info(Architecture::X86_64, unsupported),
            Err(RelocationFailure::Unsupported)
        ));
        let unsupported = generic_reloc(
            RelocationKind::SectionOffset,
            RelocationEncoding::Generic,
            32,
            0,
            false,
        );
        assert!(matches!(
            classify_info(Architecture::X86_64, unsupported),
            Err(RelocationFailure::Unsupported)
        ));
    }

    #[test]
    fn bpf_map_reference_patches_both_imm_halves_and_keeps_the_opcode() {
        let r = reloc(elf::R_BPF_64_64, true);
        let spec = classify_info(Architecture::Bpf, r).unwrap().unwrap();
        assert_eq!(spec.width(), 16);
        assert!(!spec.targets_code());
        // lddw r1, 0x10 (the implicit addend sits in the low imm).
        let mut bytes = [0x18, 0x01, 0, 0, 0x10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0];
        apply_info(
            spec,
            r,
            &mut bytes,
            true,
            0x1_2345_6780,
            0x400020,
            None,
            None,
        )
        .unwrap();
        assert_eq!(&bytes[..4], &[0x18, 0x01, 0, 0]);
        assert_eq!(
            u32::from_le_bytes(bytes[4..8].try_into().unwrap()),
            0x2345_6790
        );
        assert_eq!(&bytes[8..12], &[0, 0, 0, 0]);
        assert_eq!(u32::from_le_bytes(bytes[12..16].try_into().unwrap()), 1);

        let mut be = [0x18, 0x10, 0, 0, 0, 0, 0, 0x10, 0, 0, 0, 0, 0, 0, 0, 0];
        apply_info(spec, r, &mut be, false, 0x1_2345_6780, 0x400020, None, None).unwrap();
        assert_eq!(
            u32::from_be_bytes(be[4..8].try_into().unwrap()),
            0x2345_6790
        );
        assert_eq!(u32::from_be_bytes(be[12..16].try_into().unwrap()), 1);

        let mut not_lddw = [0x85u8; 16];
        assert_eq!(
            apply_info(spec, r, &mut not_lddw, true, 0, 0, None, None),
            Err(RelocationFailure::InvalidEncoding)
        );
    }

    #[test]
    fn bpf_subprogram_call_encodes_the_instruction_displacement() {
        let r = reloc(elf::R_BPF_64_32, true);
        let spec = classify_info(Architecture::Bpf, r).unwrap().unwrap();
        assert_eq!(spec.width(), 8);
        assert!(spec.is_call() && spec.targets_code());
        // call -1 at 0x400078 to a callee at 0x400000: (S - P) / 8 - 1 = -16.
        let mut bytes = [0x85, 0x10, 0, 0, 0xff, 0xff, 0xff, 0xff];
        apply_info(spec, r, &mut bytes, true, 0x400000, 0x400078, None, None).unwrap();
        assert_eq!(&bytes[..4], &[0x85, 0x10, 0, 0]);
        assert_eq!(i32::from_le_bytes(bytes[4..8].try_into().unwrap()), -16);

        // call 2 against `.text` at 0x400000: the static callee is at 0x400018.
        let mut section = [0x85, 0x10, 0, 0, 2, 0, 0, 0];
        apply_info(spec, r, &mut section, true, 0x400000, 0x400078, None, None).unwrap();
        assert_eq!(i32::from_le_bytes(section[4..8].try_into().unwrap()), -13);
        let mut be = [0x85, 0x01, 0, 0, 0, 0, 0, 2];
        apply_info(spec, r, &mut be, false, 0x400000, 0x400078, None, None).unwrap();
        assert_eq!(be, [0x85, 0x01, 0, 0, 0xff, 0xff, 0xff, 0xf3]);

        let mut misaligned = [0x85, 0x10, 0, 0, 0, 0, 0, 0];
        assert_eq!(
            apply_info(
                spec,
                r,
                &mut misaligned,
                true,
                0x400004,
                0x400078,
                None,
                None
            ),
            Err(RelocationFailure::Misaligned)
        );
        let mut helper = [0x85, 0x00, 0, 0, 1, 0, 0, 0];
        assert_eq!(
            apply_info(spec, r, &mut helper, true, 0x400000, 0x400078, None, None),
            Err(RelocationFailure::InvalidEncoding)
        );
    }

    #[test]
    fn bpf_data_relocations_are_plain_words() {
        assert!(
            classify_info(Architecture::Bpf, reloc(elf::R_BPF_NONE, true))
                .unwrap()
                .is_none()
        );
        let abs64 = classify_info(Architecture::Bpf, reloc(R_BPF_64_ABS64, true))
            .unwrap()
            .unwrap();
        assert_eq!(abs64.width(), 8);
        let abs32 = classify_info(Architecture::Bpf, reloc(R_BPF_64_ABS32, true))
            .unwrap()
            .unwrap();
        assert_eq!(abs32.width(), 4);
        let nodyld = classify_info(Architecture::Bpf, reloc(R_BPF_64_NODYLD32, true))
            .unwrap()
            .unwrap();
        assert_eq!(nodyld.width(), 4);
    }

    #[test]
    fn arm_call_preserves_opcode_and_encodes_implicit_addend() {
        let r = reloc(elf::R_ARM_CALL, true);
        let spec = classify_info(Architecture::Arm, r).unwrap().unwrap();
        let mut bytes = 0xebff_fffeu32.to_le_bytes(); // BL with implicit A=-8
        apply_info(spec, r, &mut bytes, true, 0x400100, 0x400000, None, None).unwrap();
        assert_eq!(u32::from_le_bytes(bytes), 0xeb00_003e);
    }

    #[test]
    fn arm_jump_out_of_range_does_not_mutate_opcode() {
        let r = reloc(elf::R_ARM_JUMP24, true);
        let spec = classify_info(Architecture::Arm, r).unwrap().unwrap();
        let mut bytes = 0xeaff_fffeu32.to_le_bytes();
        let before = bytes;
        assert_eq!(
            apply_info(spec, r, &mut bytes, true, 0x9000_0000, 0x400000, None, None,),
            Err(RelocationFailure::OutOfRange)
        );
        assert_eq!(bytes, before);
    }

    #[test]
    fn arm_thumb_call_encodes_split_immediate_without_touching_opcode_bits() {
        let r = reloc(elf::R_ARM_THM_PC22, false);
        let spec = classify_info(Architecture::Arm, r).unwrap().unwrap();
        let mut bytes = [0x00, 0xf0, 0x00, 0xf8];
        apply_info(spec, r, &mut bytes, true, 0x400100, 0x400000, None, None).unwrap();
        assert_eq!(bytes, [0x00, 0xf0, 0x80, 0xf8]);
    }

    #[test]
    fn arm_data_relocations_preserve_addends_and_prel31_flag_bit() {
        let rel32 = reloc(elf::R_ARM_REL32, true);
        let rel32_spec = classify_info(Architecture::Arm, rel32).unwrap().unwrap();
        let mut relative = (-4i32).to_le_bytes();
        apply_info(
            rel32_spec,
            rel32,
            &mut relative,
            true,
            0x400100,
            0x400000,
            None,
            None,
        )
        .unwrap();
        assert_eq!(i32::from_le_bytes(relative), 0xfc);

        let prel31 = reloc(elf::R_ARM_PREL31, true);
        let prel31_spec = classify_info(Architecture::Arm, prel31).unwrap().unwrap();
        let mut flagged = 0x8000_0004u32.to_le_bytes();
        apply_info(
            prel31_spec,
            prel31,
            &mut flagged,
            true,
            0x400100,
            0x400000,
            None,
            None,
        )
        .unwrap();
        assert_eq!(u32::from_le_bytes(flagged), 0x8000_0104);

        let mut out_of_range = 0x8000_0000u32.to_le_bytes();
        let before = out_of_range;
        assert_eq!(
            apply_info(
                prel31_spec,
                prel31,
                &mut out_of_range,
                true,
                0x8000_0000,
                0,
                None,
                None,
            ),
            Err(RelocationFailure::OutOfRange)
        );
        assert_eq!(out_of_range, before);
    }

    #[test]
    fn arm_calls_convert_between_bl_and_blx_for_typed_targets() {
        let r = reloc(elf::R_ARM_CALL, false);
        let spec = classify_info(Architecture::Arm, r).unwrap().unwrap();

        let mut to_thumb = 0xeb00_0000u32.to_le_bytes();
        apply_info(
            spec,
            r,
            &mut to_thumb,
            true,
            0x400103,
            0x400000,
            Some(true),
            None,
        )
        .unwrap();
        assert_eq!(u32::from_le_bytes(to_thumb), 0xfb00_0040);

        let mut to_arm = 0xfa00_0000u32.to_le_bytes();
        apply_info(
            spec,
            r,
            &mut to_arm,
            true,
            0x400100,
            0x400000,
            Some(false),
            None,
        )
        .unwrap();
        assert_eq!(u32::from_le_bytes(to_arm), 0xeb00_0040);
    }

    #[test]
    fn thumb_call_converts_bl_to_blx_and_aligns_its_pc_base() {
        let r = reloc(elf::R_ARM_THM_PC22, false);
        let spec = classify_info(Architecture::Arm, r).unwrap().unwrap();
        let mut bytes = [0x00, 0xf0, 0x00, 0xf8];
        apply_info(
            spec,
            r,
            &mut bytes,
            true,
            0x400100,
            0x400002,
            Some(false),
            None,
        )
        .unwrap();
        assert_eq!(bytes, [0x00, 0xf0, 0x80, 0xe8]);
    }

    #[test]
    fn cross_state_jumps_require_a_veneer_without_mutating_code() {
        let arm = reloc(elf::R_ARM_JUMP24, false);
        let arm_spec = classify_info(Architecture::Arm, arm).unwrap().unwrap();
        let mut arm_bytes = 0xea00_0000u32.to_le_bytes();
        let arm_before = arm_bytes;
        assert_eq!(
            apply_info(
                arm_spec,
                arm,
                &mut arm_bytes,
                true,
                0x400101,
                0x400000,
                Some(true),
                None,
            ),
            Err(RelocationFailure::RequiresVeneer)
        );
        assert_eq!(arm_bytes, arm_before);

        let thumb = reloc(elf::R_ARM_THM_JUMP24, false);
        let thumb_spec = classify_info(Architecture::Arm, thumb).unwrap().unwrap();
        let mut thumb_bytes = [0x00, 0xf0, 0x00, 0xb8];
        let thumb_before = thumb_bytes;
        assert_eq!(
            apply_info(
                thumb_spec,
                thumb,
                &mut thumb_bytes,
                true,
                0x400100,
                0x400000,
                Some(false),
                None,
            ),
            Err(RelocationFailure::RequiresVeneer)
        );
        assert_eq!(thumb_bytes, thumb_before);
    }

    #[test]
    fn aarch64_call_and_page_pair_keep_opcode_register_bits() {
        let call = reloc(elf::R_AARCH64_CALL26, false);
        let call_spec = classify_info(Architecture::Aarch64, call).unwrap().unwrap();
        let mut branch = 0x9400_0000u32.to_le_bytes();
        apply_info(
            call_spec,
            call,
            &mut branch,
            true,
            0x401000,
            0x400000,
            None,
            None,
        )
        .unwrap();
        assert_eq!(u32::from_le_bytes(branch), 0x9400_0400);

        let adrp = reloc(elf::R_AARCH64_ADR_PREL_PG_HI21, false);
        let adrp_spec = classify_info(Architecture::Aarch64, adrp).unwrap().unwrap();
        let mut page = 0x9000_0013u32.to_le_bytes();
        apply_info(
            adrp_spec, adrp, &mut page, true, 0x412345, 0x400004, None, None,
        )
        .unwrap();
        assert_eq!(u32::from_le_bytes(page) & 0x1f, 0x13);
        assert_eq!(u32::from_le_bytes(page) & 0x9f00_0000, 0x9000_0000);
    }

    #[test]
    fn aarch64_instructions_stay_little_endian_in_a_big_endian_object() {
        // `b fib` in an aarch64_be object: data is big-endian, A64 code is not.
        let jump = reloc(elf::R_AARCH64_JUMP26, false);
        let spec = classify_info(Architecture::Aarch64, jump).unwrap().unwrap();
        let mut branch = 0x1400_0000u32.to_le_bytes();
        apply_info(
            spec,
            jump,
            &mut branch,
            false,
            0x400164,
            0x400160,
            None,
            None,
        )
        .unwrap();
        assert_eq!(u32::from_le_bytes(branch), 0x1400_0001);
        let data = generic_reloc(
            RelocationKind::Absolute,
            RelocationEncoding::Generic,
            64,
            0,
            false,
        );
        let spec = classify_info(Architecture::Aarch64, data).unwrap().unwrap();
        let mut word = [0; 8];
        apply_info(spec, data, &mut word, false, 0x400164, 0, None, None).unwrap();
        assert_eq!(u64::from_be_bytes(word), 0x400164);
    }

    #[test]
    fn aarch64_call_checks_alignment_and_range() {
        let r = reloc(elf::R_AARCH64_CALL26, false);
        let spec = classify_info(Architecture::Aarch64, r).unwrap().unwrap();
        let mut bytes = 0x9400_0000u32.to_le_bytes();
        assert_eq!(
            apply_info(spec, r, &mut bytes, true, 0x400002, 0x400000, None, None,),
            Err(RelocationFailure::Misaligned)
        );
        assert_eq!(
            apply_info(spec, r, &mut bytes, true, 0x4000_0000, 0x400000, None, None,),
            Err(RelocationFailure::OutOfRange)
        );
    }

    #[test]
    fn aarch64_jump_unchecked_page_and_every_low12_scale_apply() {
        let jump = reloc(elf::R_AARCH64_JUMP26, false);
        let jump_spec = classify_info(Architecture::Aarch64, jump).unwrap().unwrap();
        assert!(!jump_spec.is_call());
        let mut branch = 0x1400_0000u32.to_le_bytes();
        apply_info(
            jump_spec,
            jump,
            &mut branch,
            true,
            0x400100,
            0x400000,
            None,
            None,
        )
        .unwrap();
        assert_eq!(u32::from_le_bytes(branch), 0x1400_0040);

        let checked = reloc(elf::R_AARCH64_ADR_PREL_PG_HI21, false);
        let checked_spec = classify_info(Architecture::Aarch64, checked)
            .unwrap()
            .unwrap();
        let unchecked = reloc(elf::R_AARCH64_ADR_PREL_PG_HI21_NC, false);
        let unchecked_spec = classify_info(Architecture::Aarch64, unchecked)
            .unwrap()
            .unwrap();
        let mut checked_page = 0x9000_0007u32.to_le_bytes();
        assert_eq!(
            apply_info(
                checked_spec,
                checked,
                &mut checked_page,
                true,
                0x1_0000_0000,
                0,
                None,
                None,
            ),
            Err(RelocationFailure::OutOfRange)
        );
        let mut unchecked_page = 0x9000_0007u32.to_le_bytes();
        apply_info(
            unchecked_spec,
            unchecked,
            &mut unchecked_page,
            true,
            0x1_0000_0000,
            0,
            None,
            None,
        )
        .unwrap();
        assert_eq!(u32::from_le_bytes(unchecked_page), 0x9080_0007);

        for (r_type, scale, opcode) in [
            (elf::R_AARCH64_ADD_ABS_LO12_NC, 0, 0x9100_0083u32),
            (elf::R_AARCH64_LDST8_ABS_LO12_NC, 0, 0x3940_0083),
            (elf::R_AARCH64_LDST16_ABS_LO12_NC, 1, 0x7940_0083),
            (elf::R_AARCH64_LDST32_ABS_LO12_NC, 2, 0xb940_0083),
            (elf::R_AARCH64_LDST64_ABS_LO12_NC, 3, 0xf940_0083),
            (elf::R_AARCH64_LDST128_ABS_LO12_NC, 4, 0x3dc0_0083),
        ] {
            let info = reloc(r_type, false);
            let spec = classify_info(Architecture::Aarch64, info).unwrap().unwrap();
            // Symbols whose page offset is identical but whose page differs:
            // the encoded immediate must depend only on the low 12 bits.
            for symbol in [0x7f0u64, 0x1040, 0x2ff8, 0x3010, 0x40_4040, 0x40_8040] {
                if symbol & ((1u64 << scale) - 1) != 0 {
                    continue;
                }
                let mut field = opcode.to_le_bytes();
                apply_info(spec, info, &mut field, true, symbol, 0, None, None).unwrap();
                let relocated = u32::from_le_bytes(field);
                assert_eq!(relocated & !(0xfff << 10), opcode & !(0xfff << 10));
                assert_eq!(
                    (relocated >> 10) & 0xfff,
                    ((symbol & 0xfff) >> scale) as u32,
                    "r_type={r_type} symbol={symbol:#x}"
                );
            }

            if scale != 0 {
                let mut misaligned = opcode.to_le_bytes();
                let before = misaligned;
                assert_eq!(
                    apply_info(
                        spec,
                        info,
                        &mut misaligned,
                        true,
                        (1u64 << scale) - 1,
                        0,
                        None,
                        None,
                    ),
                    Err(RelocationFailure::Misaligned),
                    "r_type={r_type}"
                );
                assert_eq!(misaligned, before);
            }
        }
    }

    #[test]
    fn aarch64_low12_rejects_instructions_outside_its_encoding() {
        for (r_type, opcode) in [
            (elf::R_AARCH64_ADD_ABS_LO12_NC, 0xb940_0083u32), // LDR, not ADD
            (elf::R_AARCH64_LDST32_ABS_LO12_NC, 0x9100_0083), // ADD, not LDR
            (elf::R_AARCH64_LDST32_ABS_LO12_NC, 0xf940_0083), // 64-bit LDR at scale 2
            (elf::R_AARCH64_LDST64_ABS_LO12_NC, 0x3dc0_0083), // 128-bit LDR at scale 3
        ] {
            let info = reloc(r_type, false);
            let spec = classify_info(Architecture::Aarch64, info).unwrap().unwrap();
            let mut field = opcode.to_le_bytes();
            let before = field;
            assert_eq!(
                apply_info(spec, info, &mut field, true, 0x40, 0, None, None),
                Err(RelocationFailure::InvalidEncoding),
                "r_type={r_type} opcode={opcode:#x}"
            );
            assert_eq!(field, before);
        }
    }

    #[test]
    fn arm_blx_with_the_halfword_bit_set_is_not_a_conditional_bl() {
        let r = reloc(elf::R_ARM_CALL, true);
        let spec = classify_info(Architecture::Arm, r).unwrap().unwrap();
        let mut bytes = 0xfbff_fffeu32.to_le_bytes(); // BLX with H=1, addend -6
        apply_info(
            spec,
            r,
            &mut bytes,
            true,
            0x400101,
            0x400000,
            Some(true),
            None,
        )
        .unwrap();
        assert_eq!(u32::from_le_bytes(bytes), 0xfb00_003e);
    }

    #[test]
    fn thumb_branch_forms_are_validated_before_the_immediate_is_rewritten() {
        let call = reloc(elf::R_ARM_THM_PC22, false);
        let call_spec = classify_info(Architecture::Arm, call).unwrap().unwrap();
        let mut conditional = [0x00, 0xf0, 0x00, 0x80]; // B<c>.W (T3)
        let before = conditional;
        assert_eq!(
            apply_info(
                call_spec,
                call,
                &mut conditional,
                true,
                0x400100,
                0x400000,
                None,
                None,
            ),
            Err(RelocationFailure::InvalidEncoding)
        );
        assert_eq!(conditional, before);

        let jump = reloc(elf::R_ARM_THM_JUMP24, false);
        let jump_spec = classify_info(Architecture::Arm, jump).unwrap().unwrap();
        let mut as_call = [0x00, 0xf0, 0x00, 0xf8]; // BL (T1)
        let before = as_call;
        assert_eq!(
            apply_info(
                jump_spec,
                jump,
                &mut as_call,
                true,
                0x400100,
                0x400000,
                None,
                None,
            ),
            Err(RelocationFailure::InvalidEncoding)
        );
        assert_eq!(as_call, before);
    }

    #[test]
    fn thumb_blx_reports_a_misaligned_displacement_instead_of_rounding_it() {
        let r = reloc(elf::R_ARM_THM_PC22, false);
        let spec = classify_info(Architecture::Arm, r).unwrap().unwrap();
        let mut bytes = [0x00, 0xf0, 0x00, 0xf8];
        let before = bytes;
        assert_eq!(
            apply_info(
                spec,
                r,
                &mut bytes,
                true,
                0x400100,
                0x400001,
                Some(false),
                None,
            ),
            Err(RelocationFailure::Misaligned)
        );
        assert_eq!(bytes, before);
    }

    #[test]
    fn arm_rel32_truncates_instead_of_reporting_an_overflow() {
        let r = reloc(elf::R_ARM_REL32, true);
        let spec = classify_info(Architecture::Arm, r).unwrap().unwrap();
        let mut field = 0u32.to_le_bytes();
        apply_info(spec, r, &mut field, true, 0x9000_0000, 0x100, None, None).unwrap();
        assert_eq!(u32::from_le_bytes(field), 0x8fff_ff00);
    }

    #[test]
    fn ppc64_rel24_is_big_endian_and_preserves_link_bit() {
        let r = reloc(elf::R_PPC64_REL24, false);
        let spec = classify_info(Architecture::PowerPc64, r).unwrap().unwrap();
        let mut bytes = 0x4800_0001u32.to_be_bytes();
        apply_info(
            spec,
            r,
            &mut bytes,
            false,
            0x400100,
            0x400000,
            None,
            Some(0x408000),
        )
        .unwrap();
        assert_eq!(u32::from_be_bytes(bytes), 0x4800_0101);
    }

    #[test]
    fn ppc64_rel24_callness_comes_from_the_link_bit() {
        let r = reloc(elf::R_PPC64_REL24, false);
        let spec = classify_info(Architecture::PowerPc64, r).unwrap().unwrap();
        assert!(
            !spec
                .refine_call_from_field(&0x4800_0000u32.to_be_bytes(), false)
                .is_call()
        );
        assert!(
            spec.refine_call_from_field(&0x4800_0001u32.to_be_bytes(), false)
                .is_call()
        );
    }

    #[test]
    fn ppc32_calls_encode_their_target_and_pltrel24_drops_its_got2_addend() {
        for (r_type, addend) in [
            (elf::R_PPC_REL24, 0),
            (elf::R_PPC_LOCAL24PC, 0),
            (elf::R_PPC_PLTREL24, 0x8000),
        ] {
            let r = RelocationInfo {
                addend,
                ..reloc(r_type, false)
            };
            let spec = classify_info(Architecture::PowerPc, r).unwrap().unwrap();
            assert!(spec.targets_code());
            let mut bytes = 0x4800_0001u32.to_be_bytes();
            apply_info(spec, r, &mut bytes, false, 0x400100, 0x400040, None, None).unwrap();
            assert_eq!(u32::from_be_bytes(bytes), 0x4800_00c1, "type {r_type}");
        }
        // A `bla` is no `REL24` field.
        let r = reloc(elf::R_PPC_REL24, false);
        let spec = classify_info(Architecture::PowerPc, r).unwrap().unwrap();
        let mut bytes = 0x4800_0003u32.to_be_bytes();
        assert_eq!(
            apply_info(spec, r, &mut bytes, false, 0x400100, 0x400040, None, None),
            Err(RelocationFailure::InvalidEncoding)
        );
    }

    #[test]
    fn ppc_conditional_and_absolute_branches_keep_their_other_bits() {
        let r = reloc(elf::R_PPC_REL14, false);
        let spec = classify_info(Architecture::PowerPc, r).unwrap().unwrap();
        let mut bytes = 0x4082_0000u32.to_be_bytes(); // bne
        apply_info(spec, r, &mut bytes, false, 0x400020, 0x400000, None, None).unwrap();
        assert_eq!(u32::from_be_bytes(bytes), 0x4082_0020);
        let r = reloc(elf::R_PPC_ADDR24, false);
        let spec = classify_info(Architecture::PowerPc, r).unwrap().unwrap();
        let mut bytes = 0x4800_0003u32.to_be_bytes(); // bla
        apply_info(spec, r, &mut bytes, false, 0x1000, 0x400000, None, None).unwrap();
        assert_eq!(u32::from_be_bytes(bytes), 0x4800_1003);
    }

    #[test]
    fn ppc_address_halves_are_absolute_or_pc_relative() {
        for (arch, r_type, symbol, place, expected) in [
            (
                Architecture::PowerPc,
                elf::R_PPC_ADDR16_HA,
                0x41_8000u64,
                0u64,
                0x0042u16,
            ),
            (
                Architecture::PowerPc,
                elf::R_PPC_ADDR16_HI,
                0x41_8000,
                0,
                0x0041,
            ),
            (
                Architecture::PowerPc,
                elf::R_PPC_ADDR16_LO,
                0x41_8000,
                0,
                0x8000,
            ),
            (Architecture::PowerPc, elf::R_PPC_ADDR16, 0xfffe, 0, 0xfffe),
            (
                Architecture::PowerPc,
                elf::R_PPC_REL16_HA,
                0x40_9000,
                0x40_0000,
                0x0001,
            ),
            (
                Architecture::PowerPc,
                elf::R_PPC_REL16_LO,
                0x40_9000,
                0x40_0000,
                0x9000,
            ),
            (
                Architecture::PowerPc64,
                elf::R_PPC64_ADDR16_HIGHESTA,
                0x1234_5678_9abc_def0,
                0,
                0x1234,
            ),
            (
                Architecture::PowerPc64,
                elf::R_PPC64_ADDR16_HIGHERA,
                0x1234_5678_9abc_def0,
                0,
                0x5679,
            ),
        ] {
            let r = reloc(r_type, false);
            let spec = classify_info(arch, r).unwrap().unwrap();
            assert_eq!(spec.width(), 2);
            let mut bytes = [0u8; 2];
            apply_info(spec, r, &mut bytes, false, symbol, place, None, None).unwrap();
            assert_eq!(u16::from_be_bytes(bytes), expected, "type {r_type}");
        }
        let r = reloc(elf::R_PPC_ADDR16, false);
        let spec = classify_info(Architecture::PowerPc, r).unwrap().unwrap();
        assert_eq!(
            apply_info(spec, r, &mut [0u8; 2], false, 0x1_0000, 0, None, None),
            Err(RelocationFailure::OutOfRange)
        );
    }

    #[test]
    fn ppc_data_words_are_absolute_or_pc_relative() {
        for (arch, r_type, width, place, expected) in [
            (
                Architecture::PowerPc,
                elf::R_PPC_REL32,
                4,
                0x40_0010u64,
                0x30u64,
            ),
            (Architecture::PowerPc, elf::R_PPC_UADDR32, 4, 0, 0x40_0040),
            (
                Architecture::PowerPc64,
                elf::R_PPC64_REL64,
                8,
                0x40_0010,
                0x30,
            ),
            (
                Architecture::PowerPc64,
                elf::R_PPC64_UADDR64,
                8,
                0,
                0x40_0040,
            ),
        ] {
            let r = reloc(r_type, false);
            let spec = classify_info(arch, r).unwrap().unwrap();
            assert_eq!(spec.width(), width);
            let mut bytes = vec![0u8; width];
            apply_info(spec, r, &mut bytes, false, 0x40_0040, place, None, None).unwrap();
            assert_eq!(read_integer(&bytes, false), expected, "type {r_type}");
        }
    }

    #[test]
    fn ppc64_toc_split_fields_are_big_endian() {
        let r = reloc(elf::R_PPC64_TOC16_HA, false);
        let spec = classify_info(Architecture::PowerPc64, r).unwrap().unwrap();
        let mut bytes = [0xaa, 0xaa];
        apply_info(
            spec,
            r,
            &mut bytes,
            false,
            0x40_0000,
            0,
            None,
            Some(0x40_8000),
        )
        .unwrap();
        assert_eq!(bytes, [0x00, 0x00]);

        let r = reloc(elf::R_PPC64_TOC16_LO_DS, false);
        let spec = classify_info(Architecture::PowerPc64, r).unwrap().unwrap();
        let mut bytes = [0x00, 0x02];
        apply_info(
            spec,
            r,
            &mut bytes,
            false,
            0x40_0000,
            0,
            None,
            Some(0x40_8000),
        )
        .unwrap();
        assert_eq!(bytes, [0x80, 0x02]);
    }

    #[test]
    fn ppc64_rel24_and_checked_toc_ds_reject_out_of_range_values() {
        let r = reloc(elf::R_PPC64_REL24, false);
        let spec = classify_info(Architecture::PowerPc64, r).unwrap().unwrap();
        let mut branch = 0x4800_0001u32.to_be_bytes();
        assert_eq!(
            apply_info(
                spec,
                r,
                &mut branch,
                false,
                0x8000_0000,
                0x400000,
                None,
                None,
            ),
            Err(RelocationFailure::OutOfRange)
        );

        let r = reloc(elf::R_PPC64_TOC16_DS, false);
        let spec = classify_info(Architecture::PowerPc64, r).unwrap().unwrap();
        let mut field = [0x00, 0x02];
        assert_eq!(
            apply_info(
                spec,
                r,
                &mut field,
                false,
                0x41_0000,
                0,
                None,
                Some(0x40_8000),
            ),
            Err(RelocationFailure::OutOfRange)
        );
    }

    #[test]
    fn ppc64_toc_family_covers_every_form_and_missing_toc() {
        let toc = 0x40_0000;
        for (r_type, symbol, initial, expected) in [
            (elf::R_PPC64_TOC16, toc + 0x1234, 0u16, 0x1234u16),
            (elf::R_PPC64_TOC16_LO, toc + 0x1234_5678, 0, 0x5678),
            (elf::R_PPC64_TOC16_HI, toc + 0x1234_5678, 0, 0x1234),
            (elf::R_PPC64_TOC16_HA, toc + 0x1234_8000, 0, 0x1235),
            (elf::R_PPC64_TOC16_DS, toc - 0x100, 2, 0xff02),
            (elf::R_PPC64_TOC16_LO_DS, toc + 0x1234_5678, 2, 0x567a),
        ] {
            let info = reloc(r_type, false);
            let spec = classify_info(Architecture::PowerPc64, info)
                .unwrap()
                .unwrap();
            let mut field = initial.to_be_bytes();
            apply_info(spec, info, &mut field, false, symbol, 0, None, Some(toc)).unwrap();
            assert_eq!(u16::from_be_bytes(field), expected, "r_type={r_type}");
        }

        let toc64 = reloc(elf::R_PPC64_TOC, false);
        let toc64_spec = classify_info(Architecture::PowerPc64, toc64)
            .unwrap()
            .unwrap();
        assert!(!toc64_spec.requires_symbol());
        let mut field = [0; 8];
        apply_info(
            toc64_spec,
            toc64,
            &mut field,
            false,
            0,
            0,
            None,
            Some(0x40_8000),
        )
        .unwrap();
        assert_eq!(u64::from_be_bytes(field), 0x40_8000);

        let toc16 = reloc(elf::R_PPC64_TOC16, false);
        let toc16_spec = classify_info(Architecture::PowerPc64, toc16)
            .unwrap()
            .unwrap();
        let mut short = [0; 2];
        assert_eq!(
            apply_info(toc16_spec, toc16, &mut short, false, toc, 0, None, None),
            Err(RelocationFailure::MissingToc)
        );
        let mut wide = [0; 8];
        assert_eq!(
            apply_info(toc64_spec, toc64, &mut wide, false, 0, 0, None, None),
            Err(RelocationFailure::MissingToc)
        );

        let malformed = reloc(elf::R_PPC64_TOC16_LO, true);
        let malformed_spec = classify_info(Architecture::PowerPc64, malformed)
            .unwrap()
            .unwrap();
        assert_eq!(
            apply_info(
                malformed_spec,
                malformed,
                &mut short,
                false,
                toc,
                0,
                None,
                Some(toc),
            ),
            Err(RelocationFailure::InvalidEncoding)
        );
    }

    #[test]
    fn s390x_dbl_relocations_count_halfwords() {
        // `larl %r2, .rodata` at 0x4000da: the field is at +2 and the addend 2.
        let info = generic_reloc(
            RelocationKind::Relative,
            RelocationEncoding::S390xDbl,
            32,
            2,
            false,
        );
        let spec = classify_info(Architecture::S390x, info).unwrap().unwrap();
        let mut field = [0; 4];
        apply_info(
            spec, info, &mut field, false, 0x40_0700, 0x40_00dc, None, None,
        )
        .unwrap();
        assert_eq!(field, 0x313u32.to_be_bytes());
        assert_eq!(0x40_00da + 2 * 0x313, 0x40_0700);
        assert_eq!(
            apply_info(
                spec, info, &mut field, false, 0x40_0701, 0x40_00dc, None, None
            ),
            Err(RelocationFailure::Misaligned)
        );
        let call = generic_reloc(
            RelocationKind::PltRelative,
            RelocationEncoding::S390xDbl,
            32,
            2,
            false,
        );
        let spec = classify_info(Architecture::S390x, call).unwrap().unwrap();
        apply_info(
            spec, call, &mut field, false, 0x40_0150, 0x40_010e, None, None,
        )
        .unwrap();
        assert_eq!(
            0x40_010c + 2 * i64::from(i32::from_be_bytes(field)),
            0x40_0150
        );
    }

    #[test]
    fn generic_relocations_cover_kinds_endianness_and_bounds() {
        for (bits, little_endian, symbol, expected) in [
            (8, true, 0x12, vec![0x12]),
            (16, false, 0x1234, vec![0x12, 0x34]),
            (32, true, 0x1234_5678, vec![0x78, 0x56, 0x34, 0x12]),
            (
                64,
                false,
                0x0123_4567_89ab_cdef,
                vec![0x01, 0x23, 0x45, 0x67, 0x89, 0xab, 0xcd, 0xef],
            ),
        ] {
            let info = generic_reloc(
                RelocationKind::Absolute,
                RelocationEncoding::Generic,
                bits,
                0,
                false,
            );
            let spec = classify_info(Architecture::X86_64, info).unwrap().unwrap();
            let mut field = vec![0; spec.width()];
            apply_info(spec, info, &mut field, little_endian, symbol, 0, None, None).unwrap();
            assert_eq!(field, expected, "bits={bits}");
        }

        for kind in [RelocationKind::Relative, RelocationKind::PltRelative] {
            let info = generic_reloc(kind, RelocationEncoding::Generic, 16, 0, false);
            let spec = classify_info(Architecture::X86_64, info).unwrap().unwrap();
            assert_eq!(spec.is_call(), kind == RelocationKind::PltRelative);
            let mut field = [0; 2];
            apply_info(spec, info, &mut field, true, 0x1010, 0x1000, None, None).unwrap();
            assert_eq!(i16::from_le_bytes(field), 0x10);
        }

        let image = generic_reloc(
            RelocationKind::ImageOffset,
            RelocationEncoding::Generic,
            32,
            0,
            false,
        );
        let image_spec = classify_info(Architecture::X86_64, image).unwrap().unwrap();
        let mut image_field = [0; 4];
        apply_info(
            image_spec,
            image,
            &mut image_field,
            true,
            super::super::reloc_object::RELOC_BASE + 0x34,
            0,
            None,
            None,
        )
        .unwrap();
        assert_eq!(u32::from_le_bytes(image_field), 0x34);

        let signed = generic_reloc(
            RelocationKind::Absolute,
            RelocationEncoding::X86Signed,
            8,
            -1,
            false,
        );
        let signed_spec = classify_info(Architecture::X86_64, signed)
            .unwrap()
            .unwrap();
        let mut signed_field = [0];
        apply_info(
            signed_spec,
            signed,
            &mut signed_field,
            true,
            0,
            0,
            None,
            None,
        )
        .unwrap();
        assert_eq!(signed_field, [0xff]);

        let with_addends = generic_reloc(
            RelocationKind::Absolute,
            RelocationEncoding::Generic,
            16,
            2,
            true,
        );
        let with_addends_spec = classify_info(Architecture::X86_64, with_addends)
            .unwrap()
            .unwrap();
        let mut with_addends_field = 3u16.to_le_bytes();
        apply_info(
            with_addends_spec,
            with_addends,
            &mut with_addends_field,
            true,
            5,
            0,
            None,
            None,
        )
        .unwrap();
        assert_eq!(u16::from_le_bytes(with_addends_field), 10);

        let unsigned = generic_reloc(
            RelocationKind::Absolute,
            RelocationEncoding::Generic,
            8,
            0,
            false,
        );
        let unsigned_spec = classify_info(Architecture::X86_64, unsigned)
            .unwrap()
            .unwrap();
        let mut overflow = [0x5a];
        assert_eq!(
            apply_info(
                unsigned_spec,
                unsigned,
                &mut overflow,
                true,
                0x100,
                0,
                None,
                None
            ),
            Err(RelocationFailure::OutOfRange)
        );
        assert_eq!(overflow, [0x5a]);
    }

    #[test]
    fn invalid_instruction_encodings_do_not_mutate_fields() {
        for (arch, r_type, little_endian, mut field) in [
            (Architecture::Arm, elf::R_ARM_CALL, true, vec![0; 4]),
            (Architecture::Arm, elf::R_ARM_THM_PC22, true, vec![0; 4]),
            (
                Architecture::Aarch64,
                elf::R_AARCH64_CALL26,
                true,
                vec![0; 4],
            ),
            (
                Architecture::Aarch64,
                elf::R_AARCH64_ADR_PREL_PG_HI21,
                true,
                vec![0; 4],
            ),
            (
                Architecture::PowerPc64,
                elf::R_PPC64_REL24,
                false,
                vec![0; 4],
            ),
        ] {
            let info = reloc(r_type, false);
            let spec = classify_info(arch, info).unwrap().unwrap();
            let before = field.clone();
            assert_eq!(
                apply_info(spec, info, &mut field, little_endian, 0, 0, None, None),
                Err(RelocationFailure::InvalidEncoding),
                "arch={arch:?} r_type={r_type}"
            );
            assert_eq!(field, before);
        }
    }
}

#[cfg(test)]
mod arm_movw_tests {
    use super::*;

    fn patch(
        r_type: u32,
        bytes: [u8; 4],
        le: bool,
        symbol: u64,
        place: u64,
        thumb: Option<bool>,
    ) -> Result<[u8; 4], RelocationFailure> {
        let info = RelocationInfo {
            kind: RelocationKind::Unknown,
            encoding: RelocationEncoding::Unknown,
            size: 0,
            addend: 0,
            implicit_addend: true,
            r_type: Some(r_type),
        };
        let spec = classify_info(Architecture::Arm, info)?.expect("not a no-op");
        let mut field = bytes;
        apply_info(spec, info, &mut field, le, symbol, place, thumb, None)?;
        Ok(field)
    }

    // Words as ld.lld writes them for the sweep's zig thumb, arm and armeb objects.
    #[test]
    fn movw_movt_pairs_match_the_linker() {
        let g = 0x2_0348;
        assert_eq!(
            patch(47, [0x40, 0xf2, 0x00, 0x01], true, g, 0x1_002a, None),
            Ok([0x40, 0xf2, 0x48, 0x31])
        );
        assert_eq!(
            patch(48, [0xc0, 0xf2, 0x00, 0x01], true, g, 0x1_002e, None),
            Ok([0xc0, 0xf2, 0x02, 0x01])
        );
        let h = 0x2_049c;
        assert_eq!(
            patch(43, [0x00, 0x00, 0x00, 0x93], true, h, 0x1_0044, None),
            Ok([0x9c, 0x04, 0x00, 0x93])
        );
        assert_eq!(
            patch(44, [0x00, 0x00, 0x40, 0x93], true, h, 0x1_0048, None),
            Ok([0x02, 0x00, 0x40, 0x93])
        );
        assert_eq!(
            patch(43, [0x93, 0x00, 0x00, 0x00], false, h, 0x1_0044, None),
            Ok([0x93, 0x00, 0x04, 0x9c])
        );
        assert_eq!(
            patch(44, [0x93, 0x40, 0x00, 0x00], false, h, 0x1_0048, None),
            Ok([0x93, 0x40, 0x00, 0x02])
        );
    }

    #[test]
    fn movw_takes_the_thumb_bit_the_rel_addend_and_the_pc() {
        // `movw r0, #:lower16:f+4` against a Thumb function: (S + A) | 1.
        assert_eq!(
            patch(
                43,
                0xe300_0004u32.to_le_bytes(),
                true,
                0x1_2340,
                0,
                Some(true)
            ),
            Ok(0xe302_0345u32.to_le_bytes())
        );
        // `movt` keeps the high half of S + A, carry included, and ignores T.
        assert_eq!(
            patch(
                44,
                0xe340_0fffu32.to_le_bytes(),
                true,
                0x1_f001,
                0,
                Some(true)
            ),
            Ok(0xe340_0002u32.to_le_bytes())
        );
        // MOVW_PREL_NC: (S + A) - P.
        assert_eq!(
            patch(
                45,
                0xe300_0000u32.to_le_bytes(),
                true,
                0x1_2340,
                0x1_0000,
                None
            ),
            Ok(0xe302_0340u32.to_le_bytes())
        );
        assert_eq!(
            patch(47, 0xe300_0000u32.to_le_bytes(), true, 0x1_2340, 0, None),
            Err(RelocationFailure::InvalidEncoding)
        );
    }
}

#[cfg(test)]
mod csky_tests {
    use super::*;

    fn bsr(
        bytes: [u8; 4],
        le: bool,
        symbol: u64,
        place: u64,
    ) -> Result<[u8; 4], RelocationFailure> {
        let info = RelocationInfo {
            kind: RelocationKind::Unknown,
            encoding: RelocationEncoding::Unknown,
            size: 0,
            addend: 0,
            implicit_addend: false,
            r_type: Some(elf::R_CKCORE_PCREL_IMM26BY2),
        };
        let spec = classify_info(Architecture::Csky, info)?.expect("not a no-op");
        assert!(spec.is_call());
        let mut field = bytes;
        apply_info(spec, info, &mut field, le, symbol, place, None, None)?;
        Ok(field)
    }

    // Words as GNU ld 2.45 writes them for csky-elf-gcc 15.3 objects.
    #[test]
    fn bsr32_matches_the_linker_and_is_range_checked() {
        assert_eq!(
            bsr([0x00, 0xe0, 0x00, 0x00], true, 0x1_0568, 0x1_0310),
            Ok([0x00, 0xe0, 0x2c, 0x01])
        );
        assert_eq!(
            bsr([0x00, 0xe0, 0x00, 0x00], true, 0x1_05d0, 0x1_031a),
            Ok([0x00, 0xe0, 0x5b, 0x01])
        );
        assert_eq!(
            bsr([0xe0, 0x00, 0x00, 0x00], false, 0x1_0310, 0x1_0568),
            Ok([0xe3, 0xff, 0xfe, 0xd4])
        );
        assert_eq!(
            bsr([0x00, 0xe0, 0x00, 0x00], true, 0x1_0569, 0x1_0310),
            Err(RelocationFailure::Misaligned)
        );
        assert_eq!(
            bsr([0x00, 0xe0, 0x00, 0x00], true, 0x400_0000, 0),
            Err(RelocationFailure::OutOfRange)
        );
        assert_eq!(
            bsr([0x00, 0xe8, 0x00, 0x00], true, 0x1_0568, 0x1_0310),
            Err(RelocationFailure::InvalidEncoding)
        );
    }
}

#[cfg(test)]
mod or1k_tests {
    use super::*;

    fn patch(r_type: u32, insn: u32, symbol: u64, place: u64) -> Result<u32, RelocationFailure> {
        let info = RelocationInfo {
            kind: RelocationKind::Unknown,
            encoding: RelocationEncoding::Unknown,
            size: 0,
            addend: 0,
            implicit_addend: false,
            r_type: Some(r_type),
        };
        let spec = classify_or1k(info)?.expect("not a no-op");
        let mut field = insn.to_be_bytes();
        apply_info(spec, info, &mut field, false, symbol, place, None, None)?;
        Ok(u32::from_be_bytes(field))
    }

    // Words as GNU ld 2.45 writes them for or1k-elf-gcc 15.3 objects.
    #[test]
    fn calls_halves_and_store_split_match_the_linker() {
        assert_eq!(
            patch(R_OR1K_INSN_REL_26, 0x0400_0000, 0x1_06a4, 0x1_0430),
            Ok(0x0400_009d)
        );
        assert_eq!(
            patch(R_OR1K_PLT26, 0x0400_0000, 0x1_06e4, 0x1_0448),
            Ok(0x0400_00a7)
        );
        assert_eq!(
            patch(R_OR1K_AHI16, 0x1a20_0000, 0x1_0a0c, 0x1_0444),
            Ok(0x1a20_0001)
        );
        assert_eq!(
            patch(R_OR1K_LO_16_IN_INSN, 0x9c71_0000, 0x1_0a0c, 0x1_0448),
            Ok(0x9c71_0a0c)
        );
        assert_eq!(
            patch(R_OR1K_SLO16, 0xd411_9800, 0x1_2a58, 0x1_0898),
            Ok(0xd4b1_9a58)
        );
        assert_eq!(
            patch(R_OR1K_AHI16, 0x1a20_0000, 0x1_8000, 0),
            Ok(0x1a20_0002)
        );
        assert_eq!(
            patch(R_OR1K_HI_16_IN_INSN, 0x1a20_0000, 0x1_8000, 0),
            Ok(0x1a20_0001)
        );
        assert_eq!(
            patch(R_OR1K_INSN_REL_26, 0x0400_0000, 0x1_0432, 0x1_0430),
            Err(RelocationFailure::Misaligned)
        );
        assert_eq!(
            patch(R_OR1K_INSN_REL_26, 0x0400_0000, 0x900_0000, 0),
            Err(RelocationFailure::OutOfRange)
        );
        assert!(
            classify_or1k(RelocationInfo {
                kind: RelocationKind::Unknown,
                encoding: RelocationEncoding::Unknown,
                size: 0,
                addend: 0,
                implicit_addend: false,
                r_type: Some(14),
            })
            .is_err(),
            "GOT16"
        );
    }
}

#[cfg(test)]
mod xtensa_tests {
    use super::*;

    fn slot0(
        bytes: [u8; 3],
        symbol: u64,
        addend: i64,
        place: u64,
    ) -> Result<[u8; 3], RelocationFailure> {
        let info = RelocationInfo {
            kind: RelocationKind::Unknown,
            encoding: RelocationEncoding::Unknown,
            size: 0,
            addend,
            implicit_addend: false,
            r_type: Some(elf::R_XTENSA_SLOT0_OP),
        };
        let spec = classify_info(Architecture::Xtensa, info)?.expect("not a no-op");
        assert_eq!(spec.width(), 3);
        let mut field = bytes;
        apply_info(spec, info, &mut field, true, symbol, place, None, None)?;
        Ok(field)
    }

    // Words as GNU ld 2.45 (--no-relax) writes them for xtensa-elf-gcc 15.3
    // (XCHAL_HAVE_BE 0, windowed ABI, -mtext-section-literals) objects.
    #[test]
    fn every_operand_form_matches_the_linker() {
        // l32r a10, literal
        assert_eq!(
            slot0([0xa1, 0, 0], 0x1_0000, 0, 0x1_0018),
            Ok([0xa1, 0xfa, 0xff])
        );
        // call8 to an extern slot
        assert_eq!(slot0([0x25, 0, 0], 0, 0, 0x1_0035), Ok([0xa5, 0xfc, 0xef]));
        // j, beqi (BRI8), loop, bnez (BRI12), blt (RRI8), beqz.n
        assert_eq!(
            slot0([0x46, 0, 0], 0x1_0000, 196, 0x1_009f),
            Ok([0x46, 0x08, 0x00])
        );
        assert_eq!(
            slot0([0xa6, 0x12, 0], 0x1_0000, 156, 0x1_0081),
            Ok([0xa6, 0x12, 0x17])
        );
        assert_eq!(
            slot0([0x76, 0x88, 0], 0x1_0000, 153, 0x1_008d),
            Ok([0x76, 0x88, 0x08])
        );
        assert_eq!(
            slot0([0x56, 0x08, 0], 0x1_0000, 574, 0x1_0250),
            Ok([0x56, 0xa8, 0xfe])
        );
        assert_eq!(
            slot0([0x87, 0x29, 0], 0x1_0000, 206, 0x1_00bb),
            Ok([0x87, 0x29, 0x0f])
        );
        assert_eq!(
            slot0([0x8c, 0x08, 0xee], 0x1_0000, 136, 0x1_007d),
            Ok([0x8c, 0x78, 0xee])
        );
    }

    #[test]
    fn a_data_word_adds_the_addend_left_in_place() {
        // A jump-table row `.text + 0` whose word holds the case offset 0x51, with
        // .text at 0x10010: GNU ld writes 0x10061.
        let info = RelocationInfo {
            kind: RelocationKind::Absolute,
            encoding: RelocationEncoding::Generic,
            size: 32,
            addend: 0,
            implicit_addend: false,
            r_type: Some(elf::R_XTENSA_32),
        };
        let spec = classify_info(Architecture::Xtensa, info).unwrap().unwrap();
        assert_eq!(spec.width(), 4);
        let mut field = 0x51u32.to_le_bytes();
        apply_info(spec, info, &mut field, true, 0x1_0010, 0x1_0090, None, None).unwrap();
        assert_eq!(field, 0x1_0061u32.to_le_bytes());
        let mut literal = [0; 4];
        let info = RelocationInfo { addend: 8, ..info };
        apply_info(spec, info, &mut literal, true, 0x2_0000, 0, None, None).unwrap();
        assert_eq!(literal, 0x2_0008u32.to_le_bytes());
    }

    #[test]
    fn literals_behind_and_out_of_range_targets_are_refused() {
        assert_eq!(
            slot0([0xa1, 0, 0], 0x1_0040, 0, 0x1_0018),
            Err(RelocationFailure::OutOfRange)
        );
        assert_eq!(
            slot0([0xa1, 0, 0], 0x1_0002, 0, 0x1_0018),
            Err(RelocationFailure::Misaligned)
        );
        assert_eq!(
            slot0([0x87, 0x29, 0], 0x1_0200, 0, 0x1_0000),
            Err(RelocationFailure::OutOfRange)
        );
        assert_eq!(
            slot0([0x36, 0x41, 0], 0x1_0200, 0, 0x1_0000),
            Err(RelocationFailure::InvalidEncoding)
        );
    }
}

#[cfg(test)]
mod arc_tests {
    use super::*;

    fn patch(
        r_type: u32,
        addend: i64,
        bytes: [u8; 4],
        symbol: u64,
        place: u64,
    ) -> Result<[u8; 4], RelocationFailure> {
        let info = RelocationInfo {
            kind: RelocationKind::Unknown,
            encoding: RelocationEncoding::Unknown,
            size: 0,
            addend,
            implicit_addend: false,
            r_type: Some(r_type),
        };
        let spec = classify_arc(info)?.expect("not a no-op");
        let mut field = bytes;
        apply_info(spec, info, &mut field, true, symbol, place, None, None)?;
        Ok(field)
    }

    // Words as GNU ld 2.45 writes them for arc-elf-gcc 15.3 -mcpu=hs objects.
    #[test]
    fn calls_branches_and_long_immediates_match_the_linker() {
        assert_eq!(
            patch(
                R_ARC_S25W_PCREL_PLT,
                0,
                [0x02, 0x08, 0, 0],
                0x1_0000,
                0x1_0078
            ),
            Ok([0x8a, 0x0f, 0xcf, 0xff])
        );
        assert_eq!(
            patch(
                R_ARC_S25H_PCREL_PLT,
                0,
                [0x01, 0x00, 0x20, 0x00],
                0x1_0000,
                0x1_0074
            ),
            Ok([0x8d, 0x07, 0xef, 0xff])
        );
        assert_eq!(
            patch(R_ARC_32_ME, 0, [0; 4], 0x1_216c, 0x1_0020),
            Ok([0x01, 0x00, 0x6c, 0x21])
        );
        assert_eq!(
            patch(R_ARC_32, 376, [0; 4], 0x1_0000, 0x1_0274),
            Ok([0x78, 0x01, 0x01, 0x00])
        );
        assert_eq!(
            patch(R_ARC_S25W_PCREL, 0, [0x02, 0x08, 0, 0], 0x1_0002, 0x1_0078),
            Err(RelocationFailure::Misaligned)
        );
        assert_eq!(
            patch(R_ARC_S25W_PCREL, 0, [0x01, 0x00, 0, 0], 0x1_0000, 0x1_0078),
            Err(RelocationFailure::InvalidEncoding)
        );
        assert_eq!(
            patch(R_ARC_S25W_PCREL, 0, [0x02, 0x08, 0, 0], 0x200_0000, 0),
            Err(RelocationFailure::OutOfRange)
        );
    }
}

#[cfg(test)]
mod avr_amdgpu_tests {
    use super::*;

    fn info(r_type: u32, addend: i64) -> RelocationInfo {
        RelocationInfo {
            kind: RelocationKind::Unknown,
            encoding: RelocationEncoding::Unknown,
            size: 0,
            addend,
            implicit_addend: false,
            r_type: Some(r_type),
        }
    }

    fn avr(
        r_type: u32,
        addend: i64,
        bytes: &[u8],
        symbol: u64,
        place: u64,
    ) -> Result<Vec<u8>, RelocationFailure> {
        let info = info(r_type, addend);
        let spec = classify_info(Architecture::Avr, info)?.expect("not a no-op");
        let mut field = bytes.to_vec();
        assert_eq!(field.len(), spec.width());
        apply_info(spec, info, &mut field, true, symbol, place, None, None)?;
        Ok(field)
    }

    // Words as ld.lld writes them for clang -mmcu=atmega2560/atmega328p and zig avr objects.
    #[test]
    fn avr_branches_ldi_bytes_and_calls_match_the_linker() {
        assert_eq!(
            avr(R_AVR_13_PCREL, 0, &[0xff, 0xdf], 0, 0x1d4),
            Ok(vec![0x15, 0xdf])
        );
        assert_eq!(
            avr(9, 0, &[0x00, 0x50], 0x2234, 0x12e),
            Ok(vec![0x0c, 0x5c])
        );
        assert_eq!(
            avr(10, 0, &[0x10, 0x40], 0x2234, 0x130),
            Ok(vec![0x1d, 0x4d])
        );
        assert_eq!(
            avr(R_AVR_LO8_LDI, 1, &[0x80, 0xe0], 0x1204, 0x198),
            Ok(vec![0x85, 0xe0])
        );
        assert_eq!(
            avr(7, 1, &[0x90, 0xe0], 0x1204, 0x19a),
            Ok(vec![0x92, 0xe1])
        );
        assert_eq!(avr(13, 0, &[0x90, 0xe0], 0x2468, 0), Ok(vec![0x92, 0xe1]));
        assert_eq!(
            avr(R_AVR_CALL, 0, &[0x0e, 0x94, 0, 0], 0x1234, 0x106),
            Ok(vec![0x0e, 0x94, 0x1a, 0x09])
        );
        assert_eq!(
            avr(R_AVR_CALL, 0, &[0x0e, 0x94, 0, 0], 0x3_4568, 0x106),
            Ok(vec![0x0f, 0x94, 0xb4, 0xa2])
        );
        assert_eq!(
            avr(R_AVR_7_PCREL, 0, &[0x01, 0xf0], 0x120, 0x100),
            Ok(vec![0x79, 0xf0])
        );
        assert_eq!(
            avr(R_AVR_16_PM, 0, &[0, 0], 0x1234, 0),
            Ok(vec![0x1a, 0x09])
        );
        assert_eq!(
            avr(R_AVR_13_PCREL, 0, &[0x00, 0xe0], 0x120, 0x100),
            Err(RelocationFailure::InvalidEncoding)
        );
        // `sbci r29, hi8(-(x))` and `cpi`; an `add` (0x0c00) is not an immediate form.
        assert_eq!(avr(10, 0, &[0x10, 0x40], 0x2234, 0), Ok(vec![0x1d, 0x4d]));
        assert_eq!(
            avr(R_AVR_LO8_LDI, 0, &[0x80, 0x30], 0x1234, 0),
            Ok(vec![0x84, 0x33])
        );
        assert_eq!(
            avr(R_AVR_LO8_LDI, 0, &[0x00, 0x0c], 0x1234, 0),
            Err(RelocationFailure::InvalidEncoding)
        );
        assert_eq!(
            avr(R_AVR_7_PCREL, 0, &[0x01, 0xf0], 0x400, 0x100),
            Err(RelocationFailure::OutOfRange)
        );
    }

    #[test]
    fn amdgpu_literal_halves_and_data_words() {
        let apply = |r_type, addend, symbol, place| {
            let spec = classify_amdgpu(info(r_type, addend)).unwrap().unwrap();
            let mut field = vec![0; spec.width()];
            apply_info(
                spec,
                info(r_type, addend),
                &mut field,
                true,
                symbol,
                place,
                None,
                None,
            )
            .unwrap();
            field
        };
        // `s_add_u32 s6, s6, lit` / `s_addc_u32 s7, s7, lit` of a call 0x100 back.
        assert_eq!(
            apply(R_AMDGPU_REL32_LO, 4, 0x40_0000, 0x40_00fc),
            (-0xf8i32).to_le_bytes()
        );
        assert_eq!(
            apply(R_AMDGPU_REL32_HI, 12, 0x40_0000, 0x40_0104),
            (-1i32).to_le_bytes()
        );
        assert_eq!(
            apply(R_AMDGPU_ABS32_HI, 0, 0x1_2345_6789, 0),
            1u32.to_le_bytes()
        );
        assert_eq!(apply(R_AMDGPU_ABS64, 8, 0x1000, 0), 0x1008u64.to_le_bytes());
        assert!(classify_amdgpu(info(0, 0)).unwrap().is_none());
        assert!(classify_amdgpu(info(7, 0)).is_err(), "GOTPCREL");
    }
}

#[cfg(test)]
mod hexagon_tests {
    use super::*;

    fn patch(
        r_type: u32,
        addend: i64,
        insn: u32,
        symbol: u64,
        place: u64,
    ) -> Result<u32, RelocationFailure> {
        let info = RelocationInfo {
            kind: RelocationKind::Unknown,
            encoding: RelocationEncoding::Unknown,
            size: 0,
            addend,
            implicit_addend: false,
            r_type: Some(r_type),
        };
        let spec = classify_info(Architecture::Hexagon, info)?.expect("not a no-op");
        let mut field = insn.to_le_bytes();
        apply_info(spec, info, &mut field, true, symbol, place, None, None)?;
        Ok(u32::from_le_bytes(field))
    }

    // ld.lld 22.1.8 on a non-duplex `0x7c` `Rd = ##` word: the consumer's low six bits sit at 15..20, and the
    // `immext` carries the value above bit 5 (scattered over 13..0 and 27..16).
    #[test]
    fn low_six_bits_of_a_0x7c_immediate_match_the_linker() {
        assert_eq!(
            patch(R_HEX_32_6_X, 0, 0x0000_4000, 0x1_00b4, 0),
            Ok(0x0000_4402)
        );
        assert_eq!(
            patch(R_HEX_6_X, 0, 0x7c80_4020, 0x1_00b4, 0),
            Ok(0x7c9a_4020)
        );
        assert_eq!(
            patch(R_HEX_6_X, 0, 0x7c80_4080, 0x41_0464, 0),
            Ok(0x7c92_4080)
        );
    }

    // Words as ld.lld writes them for the sweep's hexagon objects.
    #[test]
    fn branches_extenders_and_low_six_bits_match_the_linker() {
        assert_eq!(
            patch(R_HEX_B9_PCREL_X, 0, 0x1701_c000, 0x1_0164, 0x1_013c),
            Ok(0x1701_c050)
        );
        assert_eq!(
            patch(R_HEX_16_X, 0, 0x4880_c000, 0x3_0738, 0),
            Ok(0x4880_c038)
        );
        assert_eq!(
            patch(R_HEX_16_X, 0, 0x4980_c000, 0x2_1324, 0),
            Ok(0x4980_c480)
        );
        assert_eq!(
            patch(R_HEX_16_X, 0, 0x7800_c001, 0x3_06fc, 0),
            Ok(0x7800_c781)
        );
        assert_eq!(
            patch(R_HEX_6_X, 0, 0x6802_3c40, 0x3_06fc, 0),
            Ok(0x6bc2_3c40)
        );
        assert_eq!(
            patch(R_HEX_6_X, 0, 0x9d83_f000, 0x2_0568, 0),
            Ok(0x9d83_fa00)
        );
        assert_eq!(
            patch(R_HEX_32_6_X, 0, 0x0000_4000, 0x3_06fc, 0),
            Ok(0x0000_4000 | scatter_bits(0x0fff_3fff, 0x3_06fc >> 6))
        );
        assert_eq!(
            patch(R_HEX_B22_PCREL, 0, 0x5a00_c000, 0x1_0400, 0x1_0000),
            Ok(0x5a00_c000 | scatter_bits(0x01ff_3ffe, 0x100))
        );
        assert_eq!(
            patch(R_HEX_B22_PCREL, 0, 0x5a00_c000, 0x1_0402, 0x1_0000),
            Err(RelocationFailure::Misaligned)
        );
        assert_eq!(
            patch(R_HEX_B22_PCREL, 0, 0x5a00_c000, 0x100_0000, 0),
            Err(RelocationFailure::OutOfRange)
        );
        assert_eq!(
            patch(R_HEX_16_X, 0, 0x1100_c000, 0x3_0738, 0),
            Err(RelocationFailure::Unsupported)
        );
        assert_eq!(scatter_bits(0x0000_0ff0, 0x5), 0x50);
        assert_eq!(scatter_bits(0x0000_1f18, 0x7f), 0x1f18);
    }
}

#[cfg(test)]
mod c28x_tests {
    use super::*;

    fn info(r_type: u32) -> RelocationInfo {
        RelocationInfo {
            kind: RelocationKind::Unknown,
            encoding: RelocationEncoding::Unknown,
            size: 0,
            addend: 0,
            implicit_addend: true,
            r_type: Some(r_type),
        }
    }

    #[test]
    fn calls_and_immediates_take_the_word_address() {
        // `LCR #0` (cl2000, adc.obj ADC_setVREF) to a function at byte 0x400000.
        let spec = classify_c28x(info(R_C28X_ABS22_CALL)).unwrap().unwrap();
        assert!(spec.is_call());
        let mut field = [0x40, 0x76, 0x00, 0x00];
        apply_info(
            spec,
            info(R_C28X_ABS22_CALL),
            &mut field,
            true,
            0x40_0000,
            0,
            None,
            None,
        )
        .unwrap();
        assert_eq!(field, [0x60, 0x76, 0x00, 0x00]); // 0x200000 >> 16 = 0x20 in bits 5..0
        // `MOVL XAR4, #0` with an in-place addend of 3 words, to byte 0x40_0010.
        let spec = classify_c28x(info(R_C28X_ABS22)).unwrap().unwrap();
        let mut field = [0x40, 0x8f, 0x03, 0x00];
        apply_info(
            spec,
            info(R_C28X_ABS22),
            &mut field,
            true,
            0x40_0010,
            0,
            None,
            None,
        )
        .unwrap();
        assert_eq!(field, [0x60, 0x8f, 0x0b, 0x00]);
        assert_eq!(
            apply_info(
                spec,
                info(R_C28X_ABS22),
                &mut [0x40, 0x8f, 0, 0],
                true,
                0x40_0001,
                0,
                None,
                None
            ),
            Err(RelocationFailure::Misaligned)
        );
        // A data word.
        let spec = classify_c28x(info(R_C28X_ABS32)).unwrap().unwrap();
        let mut field = [0u8; 4];
        apply_info(
            spec,
            info(R_C28X_ABS32),
            &mut field,
            true,
            0x40_0020,
            0,
            None,
            None,
        )
        .unwrap();
        assert_eq!(u32::from_le_bytes(field), 0x20_0010);
        assert!(classify_c28x(info(0)).unwrap().is_none());
        assert!(classify_c28x(info(9)).is_err(), "PCREL16");
    }
}

#[cfg(test)]
mod cuda_tests {
    use super::*;

    fn info(r_type: u32, addend: i64) -> RelocationInfo {
        RelocationInfo {
            kind: RelocationKind::Unknown,
            encoding: RelocationEncoding::Unknown,
            size: 0,
            addend,
            implicit_addend: false,
            r_type: Some(r_type),
        }
    }

    #[test]
    fn immediates_and_call_targets_take_the_address() {
        // `MOV R4, 0xffffffff` (sm_80) given the low and high words of 0x1234_5678_9abc.
        let mov = u128::from_le_bytes([
            0x02, 0x78, 0x04, 0x00, 0xff, 0xff, 0xff, 0xff, 0x00, 0x0f, 0x00, 0x00, 0x00, 0xd6,
            0x0f, 0x00,
        ]);
        for (high, want) in [(false, 0x5678_9abcu32), (true, 0x1234)] {
            let r = if high {
                R_CUDA_ABS32_HI_32
            } else {
                R_CUDA_ABS32_LO_32
            };
            let spec = classify_cuda(info(r, 0)).unwrap().unwrap();
            let mut field = mov.to_le_bytes();
            apply_info(
                spec,
                info(r, 0),
                &mut field[..8],
                true,
                0x1234_5678_9abc,
                0,
                None,
                None,
            )
            .unwrap();
            let got = u128::from_le_bytes(field);
            assert_eq!((got >> 32) as u32, want);
            assert_eq!(
                got & !(0xffff_ffffu128 << 32),
                mov & !(0xffff_ffffu128 << 32)
            );
        }
        // `CALL.ABS.NOINC 0x0` to 0x100: nvdisasm prints field 0x40 as 0x100.
        let call = u128::from_le_bytes([
            0x43, 0x79, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x03, 0x00, 0xea,
            0x0f, 0x02,
        ]);
        let spec = classify_cuda(info(R_CUDA_ABS47_34, 0)).unwrap().unwrap();
        assert!(spec.is_call() && spec.targets_code());
        let mut field = call.to_le_bytes();
        apply_info(
            spec,
            info(R_CUDA_ABS47_34, 0),
            &mut field,
            true,
            0x100,
            0,
            None,
            None,
        )
        .unwrap();
        let got = u128::from_le_bytes(field);
        assert_eq!((got >> 34) & ((1u128 << 47) - 1), 0x40);
        assert_eq!(
            got & !(((1u128 << 47) - 1) << 34),
            call & !(((1u128 << 47) - 1) << 34)
        );
        assert_eq!(
            apply_info(
                spec,
                info(R_CUDA_ABS47_34, 2),
                &mut field,
                true,
                0x100,
                0,
                None,
                None
            ),
            Err(RelocationFailure::Misaligned)
        );
        assert!(
            classify_cuda(info(R_CUDA_YIELD_OPCODE9_0, 0x118))
                .unwrap()
                .is_none()
        );
        assert!(
            classify_cuda(info(R_CUDA_UNUSED_CLEAR64, 0))
                .unwrap()
                .is_none()
        );
        assert!(classify_cuda(info(0x42, 0)).is_err(), "CONST_FIELD21_38");
    }
}

#[cfg(test)]
mod lanai_tests {
    use super::*;

    fn patch(r_type: u32, addend: i64, insn: u32, symbol: u64) -> Result<u32, RelocationFailure> {
        let info = RelocationInfo {
            kind: RelocationKind::Unknown,
            encoding: RelocationEncoding::Unknown,
            size: 0,
            addend,
            implicit_addend: false,
            r_type: Some(r_type),
        };
        let spec = classify_lanai(info)?.expect("not a no-op");
        let mut field = insn.to_be_bytes();
        apply_info(spec, info, &mut field, false, symbol, 0, None, None)?;
        Ok(u32::from_be_bytes(field))
    }

    #[test]
    fn branches_halves_and_21_bit_addresses_are_absolute() {
        // `bt .L0+0x18` with .text at 0x400000.
        assert_eq!(
            patch(R_LANAI_25, 0x18, 0xe000_0000, 0x40_0000),
            Ok(0xe040_0018)
        );
        assert_eq!(
            patch(R_LANAI_25, 2, 0xe000_0000, 0x40_0000),
            Err(RelocationFailure::Misaligned)
        );
        assert_eq!(
            patch(R_LANAI_25, 0, 0xe000_0000, 0x200_0000),
            Err(RelocationFailure::OutOfRange)
        );
        assert_eq!(
            patch(R_LANAI_25, 0, 0x0000_0000, 0x40_0000),
            Err(RelocationFailure::InvalidEncoding)
        );
        // `mov hi(g_table), %r9`; `or %r9, lo(g_table), %r9`.
        assert_eq!(
            patch(R_LANAI_HI16, 0, 0x0481_0000, 0x40_0710),
            Ok(0x0481_0040)
        );
        assert_eq!(
            patch(R_LANAI_LO16, 0, 0x5524_0000, 0x40_0710),
            Ok(0x5524_0710)
        );
        assert_eq!(patch(R_LANAI_21, 4, 0xf480_0000, 0x1_2340), Ok(0xf484_2344));
        assert_eq!(patch(R_LANAI_32, 8, 0, 0x40_0700), Ok(0x40_0708));
        assert!(
            classify_lanai(RelocationInfo {
                kind: RelocationKind::Unknown,
                encoding: RelocationEncoding::Unknown,
                size: 0,
                addend: 0,
                implicit_addend: false,
                r_type: Some(0),
            })
            .unwrap()
            .is_none()
        );
    }
}

#[cfg(test)]
mod loongarch_tests {
    use super::*;

    fn patch(r_type: u32, addend: i64, bytes: &[u8], symbol: u64, place: u64) -> Vec<u8> {
        let info = RelocationInfo {
            kind: RelocationKind::Unknown,
            encoding: RelocationEncoding::Unknown,
            size: 0,
            addend,
            implicit_addend: false,
            r_type: Some(r_type),
        };
        let spec = classify_info(Architecture::LoongArch64, info)
            .unwrap()
            .expect("not a no-op");
        let mut field = bytes.to_vec();
        assert_eq!(field.len(), spec.width());
        apply_info(spec, info, &mut field, true, symbol, place, None, None).unwrap();
        field
    }

    fn word(v: u32) -> Vec<u8> {
        v.to_le_bytes().to_vec()
    }

    // Words as ld.lld --no-relax writes them for the sweep's loongarch64 object.
    #[test]
    fn pcala_pair_and_call36_match_the_linker() {
        assert_eq!(
            patch(
                elf::R_LARCH_PCALA_HI20,
                76,
                &word(0x1a00_0005),
                0x2_0630,
                0x1_00dc
            ),
            word(0x1a00_0205)
        );
        assert_eq!(
            patch(
                elf::R_LARCH_PCALA_LO12,
                76,
                &word(0x02c0_00a5),
                0x2_0630,
                0x1_00e0
            ),
            word(0x02d9_f0a5)
        );
        let call = [word(0x1e00_0014), word(0x4c00_0280)].concat();
        assert_eq!(
            patch(elf::R_LARCH_CALL36, 0, &call, 0x1_01a0, 0x1_015c),
            [word(0x1e00_0014), word(0x4c00_4680)].concat()
        );
    }

    #[test]
    fn branches_split_their_word_displacement() {
        assert_eq!(
            patch(elf::R_LARCH_B26, 0, &word(0x5400_0000), 0x1100, 0x1000),
            word(0x5401_0000)
        );
        assert_eq!(
            patch(
                elf::R_LARCH_B26,
                0,
                &word(0x5400_0000),
                0x20_0000,
                0x30_0000
            ),
            word(0x5400_03fc)
        );
        assert_eq!(
            patch(elf::R_LARCH_B21, 0, &word(0x4000_0080), 0x1040, 0x1000),
            word(0x4000_4080)
        );
        assert_eq!(
            patch(elf::R_LARCH_B16, 0, &word(0x5800_0085), 0x0ff0, 0x1000),
            word(0x5bff_f085)
        );
        assert!(
            classify_info(
                Architecture::LoongArch64,
                RelocationInfo {
                    kind: RelocationKind::Unknown,
                    encoding: RelocationEncoding::Unknown,
                    size: 0,
                    addend: 0,
                    implicit_addend: false,
                    r_type: Some(elf::R_LARCH_RELAX),
                },
            )
            .unwrap()
            .is_none()
        );
    }
}

#[cfg(test)]
mod sparc_tests {
    use super::*;

    fn rela(r_type: u32, addend: i64) -> RelocationInfo {
        RelocationInfo {
            kind: RelocationKind::Unknown,
            encoding: RelocationEncoding::Unknown,
            size: 0,
            addend,
            implicit_addend: false,
            r_type: Some(r_type),
        }
    }

    fn patch(
        r_type: u32,
        addend: i64,
        insn: u32,
        symbol: u64,
        place: u64,
    ) -> Result<u32, RelocationFailure> {
        let info = rela(r_type, addend);
        let spec = classify_info(Architecture::Sparc, info)?.expect("not a no-op");
        assert_eq!(spec.width(), 4);
        let mut field = insn.to_be_bytes();
        apply_info(spec, info, &mut field, false, symbol, place, None, None)?;
        Ok(u32::from_be_bytes(field))
    }

    #[test]
    fn sparc_none_is_a_no_op_on_both_32_bit_machines() {
        for arch in [Architecture::Sparc, Architecture::Sparc32Plus] {
            assert!(
                classify_info(arch, rela(elf::R_SPARC_NONE, 0))
                    .unwrap()
                    .is_none()
            );
        }
    }

    #[test]
    fn sparc_wdisp30_encodes_forward_backward_and_addend_displacements() {
        assert_eq!(
            patch(elf::R_SPARC_WDISP30, 0, 0x4000_0000, 0x40_0100, 0x40_0000),
            Ok(0x4000_0040)
        );
        assert_eq!(
            patch(elf::R_SPARC_WDISP30, 0, 0x4000_0000, 0x40_0000, 0x40_0010),
            Ok(0x7fff_fffc)
        );
        assert_eq!(
            patch(elf::R_SPARC_WDISP30, 8, 0x4000_0000, 0x40_0000, 0x40_0000),
            Ok(0x4000_0002)
        );
        assert_eq!(
            patch(elf::R_SPARC_WDISP30, 0, 0x4000_0000, 0x8000_0000, 0x40_0000),
            Ok(0x4000_0000 | (0x7fc0_0000u32 >> 2))
        );
    }

    #[test]
    fn sparc_calls_wrap_displacements_in_the_32_bit_address_space() {
        for r_type in [elf::R_SPARC_WDISP30, elf::R_SPARC_WPLT30] {
            assert_eq!(
                patch(r_type, 0, 0x4000_0000, 0xf000_0000, 0x40_0004),
                Ok(0x7bef_ffff)
            );
            assert_eq!(
                patch(r_type, 0, 0x4000_0000, 0x40_0004, 0xf000_0000),
                Ok(0x4410_0001)
            );
            assert_eq!(
                patch(r_type, 8, 0x4000_0000, 0xffff_fffc, 0x40_0000),
                Ok(0x7ff0_0001)
            );
        }
    }

    #[test]
    fn sparc_pc_relative_forms_subtract_the_place() {
        assert_eq!(
            patch(elf::R_SPARC_WPLT30, 0, 0x4000_0000, 0x40_0100, 0x40_0000),
            Ok(0x4000_0040)
        );
        assert_eq!(
            patch(elf::R_SPARC_DISP32, 4, 0, 0x40_0000, 0x40_0010),
            Ok(0xffff_fff4)
        );
        let (symbol, place) = (0x40_2000u64, 0x40_0008u64);
        let sethi = patch(elf::R_SPARC_PC22, 4, 0x0300_0000, symbol, place).unwrap();
        let or = patch(elf::R_SPARC_PC10, 8, 0x8210_6000, symbol, place + 4).unwrap();
        assert_eq!(
            ((sethi & 0x3f_ffff) << 10) | (or & 0x3ff),
            (symbol + 4 - place) as u32
        );
        let backward = patch(elf::R_SPARC_PC22, 0, 0x0300_0000, 0x40_0000, 0x40_1000).unwrap();
        assert_eq!(backward & 0x3f_ffff, 0x3f_fffc);
    }

    #[test]
    fn sparc_wdisp30_is_a_code_target_and_rejects_bad_fields() {
        let spec = classify_info(Architecture::Sparc, rela(elf::R_SPARC_WDISP30, 0))
            .unwrap()
            .unwrap();
        assert!(spec.is_call() && spec.targets_code());
        assert_eq!(
            patch(elf::R_SPARC_WDISP30, 0, 0x0100_0000, 0x40_0100, 0x40_0000),
            Err(RelocationFailure::InvalidEncoding)
        );
        assert_eq!(
            patch(elf::R_SPARC_WDISP30, 2, 0x4000_0000, 0x40_0100, 0x40_0000),
            Err(RelocationFailure::Misaligned)
        );
        assert_eq!(
            patch(
                elf::R_SPARC_WDISP30,
                0,
                0x4000_0000,
                0x1_0040_0000,
                0x40_0000
            ),
            Err(RelocationFailure::OutOfRange)
        );
    }

    #[test]
    fn sparc_hi22_lo10_pair_reassembles_the_address() {
        let symbol = 0x2000_2108u64;
        let sethi = patch(elf::R_SPARC_HI22, 4, 0x0300_0000, symbol, 0).unwrap();
        let or = patch(elf::R_SPARC_LO10, 4, 0x8210_6000, symbol, 0).unwrap();
        assert_eq!(sethi, 0x0300_0000 | ((symbol as u32 + 4) >> 10));
        assert_eq!(or, 0x8210_6000 | ((symbol as u32 + 4) & 0x3ff));
        assert_eq!(
            ((sethi & 0x3f_ffff) << 10) | (or & 0x3ff),
            symbol as u32 + 4
        );
    }

    #[test]
    fn sparc_lo10_keeps_the_upper_simm13_bits_like_the_gnu_linker() {
        assert_eq!(
            patch(elf::R_SPARC_LO10, 0, 0xc200_7c00, 0x1234_5678, 0),
            Ok(0xc200_7e78)
        );
        assert_eq!(
            patch(elf::R_SPARC_LO10, -4, 0xc200_6000, 0x1000, 0),
            Ok(0xc200_63fc)
        );
    }

    #[test]
    fn sparc_split_fields_reject_wrong_instructions_and_rel_addends() {
        assert_eq!(
            patch(elf::R_SPARC_HI22, 0, 0x8210_6000, 0x1000, 0),
            Err(RelocationFailure::InvalidEncoding)
        );
        assert_eq!(
            patch(elf::R_SPARC_LO10, 0, 0x0300_0000, 0x1000, 0),
            Err(RelocationFailure::InvalidEncoding)
        );
        assert_eq!(
            patch(elf::R_SPARC_LO10, 0, 0x8210_4001, 0x1000, 0),
            Err(RelocationFailure::InvalidEncoding)
        );
        for r_type in [elf::R_SPARC_HI22, elf::R_SPARC_LO10] {
            let mut info = rela(r_type, 0);
            info.implicit_addend = true;
            let spec = classify_info(Architecture::Sparc, info).unwrap().unwrap();
            let before = if r_type == elf::R_SPARC_HI22 {
                0x0300_0000u32
            } else {
                0x8210_6000
            };
            let mut field = before.to_be_bytes();
            assert_eq!(
                apply_info(spec, info, &mut field, false, 0x1000, 0, None, None),
                Err(RelocationFailure::InvalidEncoding)
            );
            assert_eq!(u32::from_be_bytes(field), before);
        }
    }

    fn patch64(
        r_type: u32,
        addend: i64,
        insn: u32,
        symbol: u64,
        place: u64,
    ) -> Result<u32, RelocationFailure> {
        let info = rela(r_type, addend);
        let spec = classify_info(Architecture::Sparc64, info)?.expect("not a no-op");
        let mut field = insn.to_be_bytes();
        apply_info(spec, info, &mut field, false, symbol, place, None, None)?;
        Ok(u32::from_be_bytes(field))
    }

    #[test]
    fn sparc64_medlow_44_bit_address_triple_rebuilds_the_symbol() {
        // `sethi %h44(x),%i0; or %i0,%m44(x),%i0; sllx %i0,12,%i0; ld [%i0+%l44(x)]`
        let x = 0x0123_4567_8abcu64;
        let h = patch64(elf::R_SPARC_H44, 0, 0x3100_0000, x, 0).unwrap();
        let m = patch64(elf::R_SPARC_M44, 0, 0xb016_2000, x, 0).unwrap();
        let l = patch64(elf::R_SPARC_L44, 0, 0xc506_2000, x, 0).unwrap();
        let rebuilt =
            ((u64::from(h & 0x3f_ffff) << 10 | u64::from(m & 0x3ff)) << 12) + u64::from(l & 0xfff);
        assert_eq!(rebuilt, x);
        assert_eq!(h & !0x3f_ffff, 0x3100_0000);
        assert_eq!(m & !0x3ff, 0xb016_2000);
        assert_eq!(l & !0xfff, 0xc506_2000);
    }

    #[test]
    fn sparc64_calls_data_and_hh_hm_lm_forms_apply() {
        assert_eq!(
            patch64(elf::R_SPARC_WDISP30, 0, 0x4000_0000, 0x40_01f4, 0x40_0100),
            Ok(0x4000_003d)
        );
        assert_eq!(
            patch64(
                elf::R_SPARC_WDISP30,
                0,
                0x4000_0000,
                0x1_0000_0100,
                0x1_0000_0000
            ),
            Ok(0x4000_0040)
        );
        let x = 0xfedc_ba98_7654_3210u64;
        let hh = patch64(elf::R_SPARC_HH22, 0, 0x0300_0000, x, 0).unwrap();
        let hm = patch64(elf::R_SPARC_HM10, 0, 0x8210_6000, x, 0).unwrap();
        let lm = patch64(elf::R_SPARC_LM22, 0, 0x0500_0000, x, 0).unwrap();
        let lo = patch64(elf::R_SPARC_LO10, 0, 0x8410_a000, x, 0).unwrap();
        let high = u64::from(hh & 0x3f_ffff) << 10 | u64::from(hm & 0x3ff);
        let low = u64::from(lm & 0x3f_ffff) << 10 | u64::from(lo & 0x3ff);
        assert_eq!(high << 32 | low, x);
        assert!(
            classify_info(Architecture::Sparc64, rela(elf::R_SPARC_NONE, 0))
                .unwrap()
                .is_none()
        );
    }

    #[test]
    fn sparc_v9_branch_displacements_are_range_checked() {
        // `ba` (Bicc), `ba,pt %xcc` (BPcc) and `brz %o0` (BPr), 0x40 bytes ahead.
        assert_eq!(
            patch64(elf::R_SPARC_WDISP22, 0, 0x1080_0000, 0x40_0140, 0x40_0100),
            Ok(0x1080_0010)
        );
        assert_eq!(
            patch64(elf::R_SPARC_WDISP19, 0, 0x1068_0000, 0x40_0140, 0x40_0100),
            Ok(0x1068_0010)
        );
        assert_eq!(
            patch64(elf::R_SPARC_WDISP16, 0, 0x02c2_0000, 0x40_0140, 0x40_0100),
            Ok(0x02c2_0010)
        );
        assert_eq!(
            patch64(
                elf::R_SPARC_WDISP16,
                0,
                0x02c2_0000,
                0x40_0100 - 0x2_0000,
                0x40_0100
            ),
            Ok(0x02c2_0000 | (2 << 20))
        );
        assert_eq!(
            patch64(elf::R_SPARC_WDISP19, 0, 0x1068_0000, 0x60_0000, 0x40_0100),
            Err(RelocationFailure::OutOfRange)
        );
        assert_eq!(
            patch64(elf::R_SPARC_WDISP22, 0, 0x4000_0000, 0x40_0140, 0x40_0100),
            Err(RelocationFailure::InvalidEncoding)
        );
    }
}

#[cfg(test)]
mod family_tests {
    use super::*;
    use object::{RelocationEncoding, RelocationKind};

    fn reloc(r_type: u32, implicit: bool) -> RelocationInfo {
        RelocationInfo {
            kind: RelocationKind::Unknown,
            encoding: RelocationEncoding::Unknown,
            size: 0,
            addend: 0,
            implicit_addend: implicit,
            r_type: Some(r_type),
        }
    }

    #[test]
    fn riscv_split_immediates_encode_branch_jal_and_call_pairs() {
        let branch = reloc(elf::R_RISCV_BRANCH, false);
        let spec = classify_info(Architecture::Riscv64, branch)
            .unwrap()
            .unwrap();
        let mut bytes = 0x0000_0063u32.to_le_bytes(); // beq x0, x0, 0
        apply_info(
            spec,
            branch,
            &mut bytes,
            true,
            0x1000 - 0x10,
            0x1000,
            None,
            None,
        )
        .unwrap();
        assert_eq!(u32::from_le_bytes(bytes), 0xfe00_08e3); // beq x0, x0, -16
        let jal = reloc(elf::R_RISCV_JAL, false);
        let spec = classify_info(Architecture::Riscv64, jal).unwrap().unwrap();
        let mut bytes = 0x0000_00efu32.to_le_bytes(); // jal ra, 0
        apply_info(spec, jal, &mut bytes, true, 0x1800, 0x1000, None, None).unwrap();
        assert_eq!(u32::from_le_bytes(bytes), 0x0010_00ef); // +0x800: imm[11] is bit 20
        let call = reloc(elf::R_RISCV_CALL_PLT, false);
        let spec = classify_info(Architecture::Riscv64, call).unwrap().unwrap();
        assert_eq!(spec.width(), 8);
        let mut bytes = [0x97, 0x00, 0x00, 0x00, 0xe7, 0x80, 0x00, 0x00]; // auipc ra,0; jalr ra
        apply_info(
            spec,
            call,
            &mut bytes,
            true,
            0x2000 + 0x1ff8,
            0x2000,
            None,
            None,
        )
        .unwrap();
        assert_eq!(
            u32::from_le_bytes(bytes[..4].try_into().unwrap()),
            0x0000_2097
        ); // %hi = 2
        assert_eq!(
            u32::from_le_bytes(bytes[4..].try_into().unwrap()) >> 20,
            0xff8
        ); // %lo = -8
    }

    #[test]
    fn aarch64_movw_groups_and_short_branches() {
        let g1 = reloc(elf::R_AARCH64_MOVW_UABS_G1, false);
        let spec = classify_info(Architecture::Aarch64, g1).unwrap().unwrap();
        let mut bytes = 0xd2a0_000au32.to_le_bytes(); // movz x10, #0, lsl 16
        apply_info(spec, g1, &mut bytes, true, 0x0012_3456, 0, None, None).unwrap();
        assert_eq!(u32::from_le_bytes(bytes), 0xd2a0_024a); // #0x12, lsl 16
        assert_eq!(
            apply_info(
                spec,
                g1,
                &mut 0xd2a0_000au32.to_le_bytes(),
                true,
                0x1_0000_0000,
                0,
                None,
                None
            ),
            Err(RelocationFailure::OutOfRange)
        );
        let tbz = reloc(elf::R_AARCH64_TSTBR14, false);
        let spec = classify_info(Architecture::Aarch64, tbz).unwrap().unwrap();
        let mut bytes = 0x3718_0000u32.to_le_bytes(); // tbnz w0, #3, .
        apply_info(spec, tbz, &mut bytes, true, 0x1020, 0x1000, None, None).unwrap();
        assert_eq!(u32::from_le_bytes(bytes), 0x3718_0100);
    }

    #[test]
    fn ppc32_half_relocations_split_the_address() {
        let ha = reloc(elf::R_PPC_ADDR16_HA, false);
        let spec = classify_info(Architecture::PowerPc, ha).unwrap().unwrap();
        assert_eq!(spec.width(), 2);
        let mut bytes = [0, 0];
        apply_info(spec, ha, &mut bytes, false, 0x1234_8000, 0, None, None).unwrap();
        assert_eq!(bytes, [0x12, 0x35]);
    }
}
