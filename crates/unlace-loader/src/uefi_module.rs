//! UEFI / firmware PE32+ module recovery.
//!
//! UEFI modules are ordinary PE32+ (and occasionally PE32) images whose
//! `Subsystem` field in the optional header is one of the EFI-flavored
//! values defined by the PE/COFF spec:
//!
//! | Value | Name                                  |
//! |-------|---------------------------------------|
//! | 10    | `IMAGE_SUBSYSTEM_EFI_APPLICATION`     |
//! | 11    | `IMAGE_SUBSYSTEM_EFI_BOOT_SERVICE_DRIVER` |
//! | 12    | `IMAGE_SUBSYSTEM_EFI_RUNTIME_DRIVER`  |
//!
//! In addition to the subsystem tag, we attempt to distinguish DXE-phase,
//! PEI-phase, and SMM modules by inspecting the section table for tell-tale
//! names — section names like `.smm`, `.smmcore`, `_smm_` indicate SMM;
//! `.peim`, `.peicore`, `.pei` indicate PEI; everything else with an EFI
//! subsystem is treated as DXE (the dominant module flavor at runtime).
//!
//! This module deliberately parses the PE headers by hand rather than going
//! through the `object` crate so that it can be used as a lightweight
//! "is this a UEFI image?" probe without paying the cost of a full
//! [`PeLoader`](crate::pe::PeLoader) load. The byte-level layout we read is:
//!
//! - DOS header `e_lfanew` at `0x3C` → `nt_offset`
//! - NT signature `"PE\0\0"` at `nt_offset`
//! - COFF file header at `nt_offset + 4` (20 bytes) — `NumberOfSections` and
//!   `SizeOfOptionalHeader` live here.
//! - Optional header starts at `nt_offset + 24`. The `Magic` field tells us
//!   PE32 vs PE32+. The `Subsystem` field is at optional-header offset
//!   `+68` for both PE32 and PE32+ (in PE32, the extra `BaseOfData` field
//!   cancels the smaller `ImageBase`, leaving the offset unchanged).
//! - Section headers begin at `nt_offset + 24 + SizeOfOptionalHeader`.

use object::pe;

use crate::image::{ArchId, BinaryImage, Endian, Section, SectionFlags};

/// EFI subsystem flavor parsed from the PE optional header.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Hash)]
pub enum UefiSubsystem {
    /// `IMAGE_SUBSYSTEM_EFI_APPLICATION` (10) — a loadable EFI app, e.g.
    /// the boot manager or shell utilities.
    Application,
    /// `IMAGE_SUBSYSTEM_EFI_BOOT_SERVICE_DRIVER` (11) — a driver that lives
    /// only until `ExitBootServices()` is called.
    BootServiceDriver,
    /// `IMAGE_SUBSYSTEM_EFI_RUNTIME_DRIVER` (12) — a driver that survives
    /// into the OS runtime phase.
    RuntimeDriver,
}

impl UefiSubsystem {
    fn from_raw(v: u16) -> Option<Self> {
        match v {
            pe::IMAGE_SUBSYSTEM_EFI_APPLICATION => Some(UefiSubsystem::Application),
            pe::IMAGE_SUBSYSTEM_EFI_BOOT_SERVICE_DRIVER => Some(UefiSubsystem::BootServiceDriver),
            pe::IMAGE_SUBSYSTEM_EFI_RUNTIME_DRIVER => Some(UefiSubsystem::RuntimeDriver),
            _ => None,
        }
    }
}

/// Coarse classification of which UEFI execution phase a module belongs to.
///
/// This is a heuristic derived from section names; the PE headers alone do
/// not carry the phase explicitly (it is normally encoded by the surrounding
/// FFS file in the firmware volume).
#[derive(Debug, Clone, Copy, PartialEq, Eq, Hash)]
pub enum UefiModuleKind {
    /// Driver eXecution Environment — the default for almost all DXE-phase
    /// drivers and EFI applications.
    Dxe,
    /// Pre-EFI Initialization — early-phase modules running on the boot
    /// firmware volume (`.peim`, `.peicore`, `.pei`).
    Pei,
    /// System Management Mode handlers (`.smm`, `.smmcore`, `_smm_`).
    Smm,
}

/// Recovered metadata for a UEFI / firmware PE32(+) module.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct UefiModule {
    /// EFI subsystem from the optional header.
    pub subsystem: UefiSubsystem,
    /// Absolute entry-point VA (`ImageBase` + `AddressOfEntryPoint`).
    pub entry_point: u64,
    /// Heuristic phase classification (DXE / PEI / SMM).
    pub module_kind: UefiModuleKind,
}

/// Probe a byte slice for a UEFI PE module.
///
/// Returns `Some(UefiModule)` if the input is a syntactically valid PE32 or
/// PE32+ image whose `Subsystem` field names one of the three EFI values,
/// and `None` otherwise. Malformed or truncated headers produce `None`
/// rather than panicking.
pub fn detect_uefi_module(pe_data: &[u8]) -> Option<UefiModule> {
    // DOS header: need at least the MZ magic plus the e_lfanew field.
    if pe_data.len() < 0x40 {
        return None;
    }
    if &pe_data[0..2] != b"MZ" {
        return None;
    }
    let nt_offset = u32::from_le_bytes(pe_data[0x3C..0x40].try_into().ok()?) as usize;

    // NT signature: "PE\0\0".
    if nt_offset.checked_add(4)? > pe_data.len() {
        return None;
    }
    if &pe_data[nt_offset..nt_offset + 4] != b"PE\0\0" {
        return None;
    }

    // COFF file header (20 bytes) starts at nt_offset + 4.
    let fh = nt_offset.checked_add(4)?;
    if fh.checked_add(20)? > pe_data.len() {
        return None;
    }
    let num_sections = u16::from_le_bytes(pe_data[fh + 2..fh + 4].try_into().ok()?) as usize;
    let size_of_opt_hdr = u16::from_le_bytes(pe_data[fh + 16..fh + 18].try_into().ok()?) as usize;

    // Optional header starts at nt_offset + 24.
    let oh = nt_offset.checked_add(24)?;
    // We need at least Magic(2) + ... + Subsystem(2) at offset +70.
    if oh.checked_add(70)? > pe_data.len() {
        return None;
    }
    let opt_magic = u16::from_le_bytes(pe_data[oh..oh + 2].try_into().ok()?);

    // AddressOfEntryPoint is always at optional-header offset +16 (32-bit
    // RVA) for both PE32 and PE32+.
    let entry_rva = u32::from_le_bytes(pe_data[oh + 16..oh + 20].try_into().ok()?) as u64;

    // ImageBase: PE32+ has an 8-byte ImageBase at +24; PE32 has a 4-byte
    // ImageBase at +28 (the slot at +24 is BaseOfData).
    let image_base: u64 = match opt_magic {
        pe::IMAGE_NT_OPTIONAL_HDR64_MAGIC => {
            u64::from_le_bytes(pe_data[oh + 24..oh + 32].try_into().ok()?)
        }
        pe::IMAGE_NT_OPTIONAL_HDR32_MAGIC => {
            u32::from_le_bytes(pe_data[oh + 28..oh + 32].try_into().ok()?) as u64
        }
        _ => return None,
    };

    // Subsystem field: optional-header offset +68 (PE/COFF spec — same offset
    // for PE32 and PE32+).
    let subsystem_raw = u16::from_le_bytes(pe_data[oh + 68..oh + 70].try_into().ok()?);
    let subsystem = UefiSubsystem::from_raw(subsystem_raw)?;

    let entry_point = image_base.wrapping_add(entry_rva);

    // Section headers start after the optional header.
    let sh_start = oh.checked_add(size_of_opt_hdr)?;
    let module_kind = classify_module_kind(pe_data, sh_start, num_sections);

    Some(UefiModule {
        subsystem,
        entry_point,
        module_kind,
    })
}

/// Walk the section table and classify the module from section names.
///
/// Each section header is 40 bytes; the first 8 bytes hold the (NUL-padded,
/// possibly non-NUL-terminated) name. We compare against well-known UEFI
/// firmware section name prefixes used by EDK II and various firmware
/// build systems.
fn classify_module_kind(pe_data: &[u8], sh_start: usize, num_sections: usize) -> UefiModuleKind {
    const SH_SIZE: usize = 40;

    let end = match sh_start.checked_add(num_sections.saturating_mul(SH_SIZE)) {
        Some(e) if e <= pe_data.len() => e,
        // Truncated section table — fall back to DXE.
        _ => return UefiModuleKind::Dxe,
    };

    let mut saw_pei = false;
    let mut saw_smm = false;

    for i in 0..num_sections {
        let off = sh_start + i * SH_SIZE;
        if off + 8 > end {
            break;
        }
        let raw = &pe_data[off..off + 8];
        // Strip trailing NULs for matching, lowercase for case insensitivity.
        let name_end = raw.iter().position(|&b| b == 0).unwrap_or(raw.len());
        let name = &raw[..name_end];
        let name_lc: Vec<u8> = name.iter().map(|b| b.to_ascii_lowercase()).collect();

        // SMM markers take priority — SMM handlers are sometimes also
        // labeled as runtime drivers, but the SMM section names are the
        // ground truth.
        if name_lc.windows(4).any(|w| w == b".smm")
            || name_lc.windows(4).any(|w| w == b"_smm")
            || name_lc.starts_with(b"smm")
        {
            saw_smm = true;
        } else if name_lc.windows(4).any(|w| w == b".pei")
            || name_lc.windows(5).any(|w| w == b".peim")
            || name_lc.starts_with(b"pei")
        {
            saw_pei = true;
        }
    }

    if saw_smm {
        UefiModuleKind::Smm
    } else if saw_pei {
        UefiModuleKind::Pei
    } else {
        UefiModuleKind::Dxe
    }
}

/// Magic bytes that start a Terse Executable (TE) image. PI spec §13.
pub const TE_MAGIC: [u8; 2] = *b"VZ";

/// Parsed TE-image header. TE is a stripped PE32+ used during early
/// UEFI boot for size — it omits the DOS header, NT signature, and
/// COFF file header, leaving a compact 40-byte header followed by
/// section headers and the image body.
///
/// Layout (PI spec, all little-endian):
///
/// ```text
///  0..= 1   Signature "VZ"
///  2..= 3   Machine
///  4        NumberOfSections
///  5        Subsystem
///  6..= 7   StrippedSize
///  8..=11   AddressOfEntryPoint
/// 12..=15   BaseOfCode
/// 16..=23   ImageBase (u64)
/// 24..=31   DataDirectory[0] (relocations RVA + size)
/// 32..=39   DataDirectory[1] (debug RVA + size)
/// ```
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct TeImage {
    pub machine: u16,
    pub num_sections: u8,
    pub subsystem: u8,
    pub stripped_size: u16,
    pub entry_rva: u32,
    pub base_of_code: u32,
    pub image_base: u64,
    /// Per-section name + (vaddr, size, data).
    pub sections: Vec<TeSection>,
}

/// A section recovered from a TE image. Names are NUL-padded, 8 bytes
/// maximum (matching the PE section header layout).
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct TeSection {
    pub name: String,
    pub virtual_address: u32,
    pub virtual_size: u32,
    pub raw_offset: u32,
    pub raw_size: u32,
    pub characteristics: u32,
}

/// Parse a TE image. Returns `None` if the magic is wrong, the header
/// is truncated, or any section header is malformed.
pub fn parse_te_image(bytes: &[u8]) -> Option<TeImage> {
    if bytes.len() < 40 || &bytes[..2] != TE_MAGIC.as_slice() {
        return None;
    }
    let machine = u16::from_le_bytes(bytes[2..4].try_into().ok()?);
    let num_sections = bytes[4];
    let subsystem = bytes[5];
    let stripped_size = u16::from_le_bytes(bytes[6..8].try_into().ok()?);
    let entry_rva = u32::from_le_bytes(bytes[8..12].try_into().ok()?);
    let base_of_code = u32::from_le_bytes(bytes[12..16].try_into().ok()?);
    let image_base = u64::from_le_bytes(bytes[16..24].try_into().ok()?);

    const SH_SIZE: usize = 40;
    let sh_start = 40;
    let mut sections = Vec::with_capacity(num_sections as usize);
    for i in 0..num_sections as usize {
        let off = sh_start + i * SH_SIZE;
        if off + SH_SIZE > bytes.len() {
            return None;
        }
        let raw_name = &bytes[off..off + 8];
        let name_end = raw_name.iter().position(|&b| b == 0).unwrap_or(8);
        let name = String::from_utf8_lossy(&raw_name[..name_end]).into_owned();
        let virtual_size = u32::from_le_bytes(bytes[off + 8..off + 12].try_into().ok()?);
        let virtual_address = u32::from_le_bytes(bytes[off + 12..off + 16].try_into().ok()?);
        let raw_size = u32::from_le_bytes(bytes[off + 16..off + 20].try_into().ok()?);
        let raw_offset = u32::from_le_bytes(bytes[off + 20..off + 24].try_into().ok()?);
        let characteristics = u32::from_le_bytes(bytes[off + 36..off + 40].try_into().ok()?);
        sections.push(TeSection {
            name,
            virtual_address,
            virtual_size,
            raw_offset,
            raw_size,
            characteristics,
        });
    }

    Some(TeImage {
        machine,
        num_sections,
        subsystem,
        stripped_size,
        entry_rva,
        base_of_code,
        image_base,
        sections,
    })
}

/// Project a parsed TE image onto a generic [`BinaryImage`]. Section
/// bodies are sliced out of the original byte buffer using the TE
/// `stripped_size`-adjusted raw-offset semantics: TE images embed a
/// `stripped_size` byte count of removed PE headers, so on-disk
/// pointers index from the start of the original PE — we add
/// `40 - stripped_size as usize` to translate. Sections whose
/// `raw_offset == 0` (BSS-like) are projected as zero-filled.
pub fn te_to_binary_image(te: &TeImage, original_bytes: &[u8], arch: ArchId) -> BinaryImage {
    let mut out = BinaryImage::empty(arch, Endian::Little);
    // TE entry point = ImageBase + entry_rva.
    out.entry = te.image_base.wrapping_add(te.entry_rva as u64);
    let stripped = te.stripped_size as i64 - 40i64;
    for sec in &te.sections {
        let data = if sec.raw_size == 0 {
            Vec::new()
        } else {
            let adj_off = sec.raw_offset as i64 - stripped;
            if adj_off < 0 {
                Vec::new()
            } else {
                let start = adj_off as usize;
                let end = (start + sec.raw_size as usize).min(original_bytes.len());
                if start < original_bytes.len() {
                    original_bytes[start..end].to_vec()
                } else {
                    Vec::new()
                }
            }
        };
        let mut flags = SectionFlags::READ;
        if sec.characteristics & pe::IMAGE_SCN_MEM_EXECUTE != 0 {
            flags = flags | SectionFlags::EXEC;
        }
        if sec.characteristics & pe::IMAGE_SCN_MEM_WRITE != 0 {
            flags = flags | SectionFlags::WRITE;
        }
        out.sections.push(Section {
            name: sec.name.clone(),
            vaddr: te.image_base.wrapping_add(sec.virtual_address as u64),
            size: sec.virtual_size as u64,
            data,
            flags,
        });
    }
    out
}

#[cfg(test)]
mod tests {
    use super::*;

    /// Build a minimal PE32+ image with caller-chosen `Subsystem` and
    /// one section whose name is `section_name` (max 8 bytes, NUL-padded).
    fn build_efi_pe64(subsystem: u16, section_name: &[u8]) -> Vec<u8> {
        let mut buf = vec![0u8; 0x400];

        // DOS header.
        buf[0] = b'M';
        buf[1] = b'Z';
        let nt_offset: u32 = 0x80;
        buf[0x3C..0x40].copy_from_slice(&nt_offset.to_le_bytes());

        let nt = nt_offset as usize;
        // PE signature.
        buf[nt..nt + 4].copy_from_slice(b"PE\0\0");

        // COFF file header at nt+4.
        let fh = nt + 4;
        // Machine: AMD64.
        buf[fh..fh + 2].copy_from_slice(&pe::IMAGE_FILE_MACHINE_AMD64.to_le_bytes());
        // NumberOfSections: 1.
        buf[fh + 2..fh + 4].copy_from_slice(&1u16.to_le_bytes());
        // SizeOfOptionalHeader: 112.
        let opt_hdr_size: u16 = 112;
        buf[fh + 16..fh + 18].copy_from_slice(&opt_hdr_size.to_le_bytes());
        // Characteristics: executable.
        buf[fh + 18..fh + 20].copy_from_slice(&pe::IMAGE_FILE_EXECUTABLE_IMAGE.to_le_bytes());

        // Optional header (PE32+) at nt+24.
        let oh = nt + 24;
        buf[oh..oh + 2].copy_from_slice(&pe::IMAGE_NT_OPTIONAL_HDR64_MAGIC.to_le_bytes());
        // AddressOfEntryPoint at oh+16.
        buf[oh + 16..oh + 20].copy_from_slice(&0x1000u32.to_le_bytes());
        // ImageBase at oh+24 (PE32+: 8 bytes).
        buf[oh + 24..oh + 32].copy_from_slice(&0x10000000u64.to_le_bytes());
        // Subsystem at oh+68.
        buf[oh + 68..oh + 70].copy_from_slice(&subsystem.to_le_bytes());

        // Section header at oh + opt_hdr_size.
        let sh = oh + opt_hdr_size as usize;
        let name_len = section_name.len().min(8);
        buf[sh..sh + name_len].copy_from_slice(&section_name[..name_len]);

        buf
    }

    /// Build a PE32 (32-bit) image with the given subsystem.
    fn build_efi_pe32(subsystem: u16) -> Vec<u8> {
        let mut buf = vec![0u8; 0x400];

        buf[0] = b'M';
        buf[1] = b'Z';
        let nt_offset: u32 = 0x80;
        buf[0x3C..0x40].copy_from_slice(&nt_offset.to_le_bytes());

        let nt = nt_offset as usize;
        buf[nt..nt + 4].copy_from_slice(b"PE\0\0");

        let fh = nt + 4;
        buf[fh..fh + 2].copy_from_slice(&pe::IMAGE_FILE_MACHINE_I386.to_le_bytes());
        buf[fh + 2..fh + 4].copy_from_slice(&1u16.to_le_bytes());
        let opt_hdr_size: u16 = 96;
        buf[fh + 16..fh + 18].copy_from_slice(&opt_hdr_size.to_le_bytes());
        buf[fh + 18..fh + 20].copy_from_slice(&pe::IMAGE_FILE_EXECUTABLE_IMAGE.to_le_bytes());

        let oh = nt + 24;
        // PE32 magic.
        buf[oh..oh + 2].copy_from_slice(&pe::IMAGE_NT_OPTIONAL_HDR32_MAGIC.to_le_bytes());
        // AddressOfEntryPoint at oh+16.
        buf[oh + 16..oh + 20].copy_from_slice(&0x2000u32.to_le_bytes());
        // ImageBase at oh+28 (PE32: 4 bytes).
        buf[oh + 28..oh + 32].copy_from_slice(&0x00400000u32.to_le_bytes());
        // Subsystem at oh+68.
        buf[oh + 68..oh + 70].copy_from_slice(&subsystem.to_le_bytes());

        // Section header (.text).
        let sh = oh + opt_hdr_size as usize;
        buf[sh..sh + 5].copy_from_slice(b".text");

        buf
    }

    #[test]
    fn detects_boot_service_driver_pe64() {
        let pe = build_efi_pe64(pe::IMAGE_SUBSYSTEM_EFI_BOOT_SERVICE_DRIVER, b".text");
        let m = detect_uefi_module(&pe).expect("should detect UEFI module");
        assert_eq!(m.subsystem, UefiSubsystem::BootServiceDriver);
        // 0x10000000 base + 0x1000 RVA.
        assert_eq!(m.entry_point, 0x1000_1000);
        // No SMM/PEI section names → DXE.
        assert_eq!(m.module_kind, UefiModuleKind::Dxe);
    }

    #[test]
    fn detects_runtime_driver_and_application_subsystems() {
        let rt = build_efi_pe64(pe::IMAGE_SUBSYSTEM_EFI_RUNTIME_DRIVER, b".text");
        let app = build_efi_pe32(pe::IMAGE_SUBSYSTEM_EFI_APPLICATION);

        let mr = detect_uefi_module(&rt).expect("runtime driver");
        assert_eq!(mr.subsystem, UefiSubsystem::RuntimeDriver);
        // PE32+ image base + RVA.
        assert_eq!(mr.entry_point, 0x1000_1000);

        let ma = detect_uefi_module(&app).expect("efi application");
        assert_eq!(ma.subsystem, UefiSubsystem::Application);
        // PE32 image base 0x00400000 + RVA 0x2000.
        assert_eq!(ma.entry_point, 0x0040_2000);
    }

    #[test]
    fn classifies_smm_and_pei_modules_by_section_name() {
        // SMM section name → SMM classification, even though subsystem is
        // a runtime driver (this matches how real SMM modules ship).
        let smm = build_efi_pe64(pe::IMAGE_SUBSYSTEM_EFI_RUNTIME_DRIVER, b".smm");
        let m_smm = detect_uefi_module(&smm).expect("smm module");
        assert_eq!(m_smm.module_kind, UefiModuleKind::Smm);
        assert_eq!(m_smm.subsystem, UefiSubsystem::RuntimeDriver);

        // PEI section name → PEI classification.
        let pei = build_efi_pe64(pe::IMAGE_SUBSYSTEM_EFI_BOOT_SERVICE_DRIVER, b".peim");
        let m_pei = detect_uefi_module(&pei).expect("pei module");
        assert_eq!(m_pei.module_kind, UefiModuleKind::Pei);
    }

    #[test]
    fn rejects_non_uefi_and_malformed_inputs() {
        // Non-EFI subsystem (Windows GUI = 2) → not a UEFI module.
        let win = build_efi_pe64(pe::IMAGE_SUBSYSTEM_WINDOWS_GUI, b".text");
        assert!(detect_uefi_module(&win).is_none());

        // Empty / too-small inputs.
        assert!(detect_uefi_module(b"").is_none());
        assert!(detect_uefi_module(b"MZ").is_none());

        // Wrong magic.
        let mut not_mz = vec![0u8; 0x200];
        not_mz[0] = b'X';
        not_mz[1] = b'Y';
        assert!(detect_uefi_module(&not_mz).is_none());

        // Valid MZ but missing PE signature at e_lfanew.
        let mut mz_only = vec![0u8; 0x200];
        mz_only[0] = b'M';
        mz_only[1] = b'Z';
        mz_only[0x3C] = 0x80;
        assert!(detect_uefi_module(&mz_only).is_none());

        // e_lfanew points past EOF.
        let mut runaway = vec![0u8; 0x80];
        runaway[0] = b'M';
        runaway[1] = b'Z';
        runaway[0x3C..0x40].copy_from_slice(&0xFFFF_FFFFu32.to_le_bytes());
        assert!(detect_uefi_module(&runaway).is_none());
    }

    /// `pe_loader_flags_uefi_subsystem` — round-trip a UEFI-flavoured PE
    /// through `detect_uefi_module` and confirm the subsystem field
    /// surfaces. Acts as a regression for the surface API the loader
    /// dispatcher relies on.
    #[test]
    fn pe_loader_flags_uefi_subsystem() {
        for &(raw, expected) in &[
            (
                pe::IMAGE_SUBSYSTEM_EFI_APPLICATION,
                UefiSubsystem::Application,
            ),
            (
                pe::IMAGE_SUBSYSTEM_EFI_BOOT_SERVICE_DRIVER,
                UefiSubsystem::BootServiceDriver,
            ),
            (
                pe::IMAGE_SUBSYSTEM_EFI_RUNTIME_DRIVER,
                UefiSubsystem::RuntimeDriver,
            ),
        ] {
            let pe = build_efi_pe64(raw, b".text");
            let m = detect_uefi_module(&pe).expect("UEFI subsystem must be detected");
            assert_eq!(m.subsystem, expected);
        }
    }

    /// `te_image_loads_as_binary_image` — construct a minimal TE image
    /// and round-trip through `parse_te_image` + `te_to_binary_image`,
    /// checking the magic, entry point, and section bytes.
    #[test]
    fn te_image_loads_as_binary_image() {
        let payload: Vec<u8> = (0..32).collect();
        // 40-byte TE header + 40-byte section header + payload
        let header_size = 40 + 40;
        let mut bytes = vec![0u8; header_size + payload.len()];
        // Magic "VZ".
        bytes[0] = b'V';
        bytes[1] = b'Z';
        // Machine: AMD64 (0x8664).
        bytes[2..4].copy_from_slice(&0x8664u16.to_le_bytes());
        // NumberOfSections: 1.
        bytes[4] = 1;
        // Subsystem: EFI_APPLICATION (10).
        bytes[5] = 10;
        // StrippedSize: 100 (arbitrary; TE images record how many bytes
        // were removed from the PE header).
        bytes[6..8].copy_from_slice(&100u16.to_le_bytes());
        // EntryRva: 0x1000.
        bytes[8..12].copy_from_slice(&0x1000u32.to_le_bytes());
        // BaseOfCode: 0x1000.
        bytes[12..16].copy_from_slice(&0x1000u32.to_le_bytes());
        // ImageBase: 0x40000000.
        bytes[16..24].copy_from_slice(&0x4000_0000u64.to_le_bytes());

        // Section header at offset 40: .text, vsize=payload.len(),
        // vaddr=0x1000, raw_size=payload.len(), raw_offset=130
        // (40 stripped header bytes + 30 fake-PE pad = exactly the
        // location the parser will land at after stripped_size
        // adjustment: 130 - (100 - 40) = 70 ... we want this to
        // resolve to header_size=80 in the TE byte stream).
        let sh = 40usize;
        bytes[sh..sh + 5].copy_from_slice(b".text");
        bytes[sh + 8..sh + 12].copy_from_slice(&(payload.len() as u32).to_le_bytes()); // vsize
        bytes[sh + 12..sh + 16].copy_from_slice(&0x1000u32.to_le_bytes()); // vaddr
        bytes[sh + 16..sh + 20].copy_from_slice(&(payload.len() as u32).to_le_bytes()); // raw_size
        // raw_offset such that adj_off = raw_offset - (stripped_size - 40) = header_size:
        //   raw_offset = header_size + (stripped_size - 40) = 80 + 60 = 140.
        bytes[sh + 20..sh + 24].copy_from_slice(&140u32.to_le_bytes());
        // Characteristics: EXECUTE | READ.
        bytes[sh + 36..sh + 40]
            .copy_from_slice(&(pe::IMAGE_SCN_MEM_EXECUTE | pe::IMAGE_SCN_MEM_READ).to_le_bytes());

        bytes[header_size..].copy_from_slice(&payload);

        let te = parse_te_image(&bytes).expect("TE must parse");
        assert_eq!(te.machine, 0x8664);
        assert_eq!(te.num_sections, 1);
        assert_eq!(te.entry_rva, 0x1000);
        assert_eq!(te.image_base, 0x4000_0000);
        assert_eq!(te.sections.len(), 1);
        assert_eq!(te.sections[0].name, ".text");

        let bin = te_to_binary_image(&te, &bytes, ArchId::X86_64);
        assert_eq!(bin.entry, 0x4000_1000);
        assert_eq!(bin.sections.len(), 1);
        assert_eq!(bin.sections[0].vaddr, 0x4000_1000);
        assert_eq!(bin.sections[0].data, payload);
        assert!(bin.sections[0].flags.contains(SectionFlags::EXEC));
    }
}
