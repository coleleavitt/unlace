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
}
