//! Bounded UEFI TE image loader.
//!
//! A TE image retains the PE/COFF section table but removes the DOS, PE, and
//! optional headers. Its `StrippedSize` records that removal. The file offset of
//! each section is therefore `PointerToRawData - (StrippedSize - 40)`, while its
//! loaded address remains `ImageBase + VirtualAddress`. File offset zero is
//! retained at `ImageBase + StrippedSize - 40` up to the adjusted
//! `BaseOfCode`. Parsing the container directly preserves those coordinates and
//! avoids manufacturing a synthetic PE whose headers could disagree with the TE
//! metadata.

use std::cell::Cell;
use std::rc::Rc;

use object::pe::{
    IMAGE_FILE_MACHINE_ARM, IMAGE_FILE_MACHINE_THUMB, IMAGE_SUBSYSTEM_EFI_APPLICATION,
    IMAGE_SUBSYSTEM_EFI_ROM,
};
use object::{Architecture, SectionFlags, SectionKind};
use unlace_base::address::{Address, RangeList};
use unlace_base::error::{UnlaceError, UnlaceResult};
use unlace_base::space::AddrSpace;
use unlace_base::types::Wrap;
use unlace_sleigh::loadimage::{LoadImage, LoadImageFunc, LoadImageSection, section_flags};

use crate::loader::format::pe::coff_section_bits;
use crate::loader::format::pe::coff_section_kind;
use crate::loader::le::{read_u16, read_u32, read_u64};
use crate::loadimage_object::{
    ArmModePolicy, ObjectSectionMetadata, PE_MACHINES, compose_language_id, is_arm32_language,
    pe_arm_mode_policy, pe_machine_architecture,
};

const TE_HEADER_SIZE: usize = 40;
const SECTION_HEADER_SIZE: usize = 40;

#[derive(Clone)]
struct MachineInfo {
    primary: String,
    fallback: Option<String>,
    bits: u8,
    arm32: bool,
    mode_policy: Option<ArmModePolicy>,
}

/// The UEFI calling-convention model per architecture: the x64 binding is the
/// Microsoft convention, every other binding is the architecture's default
/// (C/cdecl for IA-32, AAPCS for AArch32, AAPCS64 for AArch64).
fn uefi_compiler_model(arch: Architecture) -> Option<&'static str> {
    match arch {
        Architecture::X86_64 => Some("windows"),
        _ => None,
    }
}

/// Language selection for a TE machine word, composed by the same
/// `compose_language_id` the object loader uses so a TE and a PE carrying the
/// same machine select the same SLEIGH variant; only the compiler model is the
/// UEFI binding's rather than the Windows one. The ARM decode-mode policy is
/// the object loader's one table too, read for the UEFI container family.
fn machine_info(machine: u16) -> Option<MachineInfo> {
    let arch = pe_machine_architecture(machine)?;
    let primary = compose_language_id(arch, "LE", uefi_compiler_model(arch))?;
    let fallback = compose_language_id(arch, "LE", None).filter(|id| *id != primary);
    let bits = arch.address_size()?.bytes() * 8;
    Some(MachineInfo {
        primary,
        fallback,
        bits,
        arm32: arch == Architecture::Arm,
        mode_policy: pe_arm_mode_policy(machine, true),
    })
}

/// Whether `prefix` opens a UEFI TE image: the `VZ` signature, an EFI
/// subsystem, and a `StrippedSize` that leaves room for the header it counts.
/// The signature alone is two ASCII letters an unrelated file can open with;
/// claiming the format on that misdiagnoses the input for every command that
/// then rejects it. The machine word is deliberately not part of the claim: a
/// TE for a machine unlace has no binding for is still a TE, and the loader's
/// own "unsupported machine" message is the answer it should get.
pub fn is_te_image(prefix: &[u8]) -> bool {
    let Some(head) = prefix.get(..TE_PROBE_LEN) else {
        return false;
    };
    let subsystem = u16::from(head[5]);
    let stripped_size = u16::from_le_bytes([head[6], head[7]]);
    &head[..2] == b"VZ"
        && (IMAGE_SUBSYSTEM_EFI_APPLICATION..=IMAGE_SUBSYSTEM_EFI_ROM).contains(&subsystem)
        && u64::from(stripped_size) > TE_HEADER_SIZE as u64
}

/// The number of leading bytes [`is_te_image`] reads.
pub const TE_PROBE_LEN: usize = 8;

/// Every `(primary, fallback)` language id pair the TE loader can select, for
/// the cross-crate gate that proves each resolves in the vendored SLEIGH
/// database.
pub fn te_language_ids() -> Vec<(String, Option<String>)> {
    PE_MACHINES
        .iter()
        .filter_map(|&machine| machine_info(machine))
        .map(|info| (info.primary, info.fallback))
        .collect()
}

/// The adjusted file offset of the first section that carries raw data — the
/// end of the bytes the file retains for the header. `None` when no section is
/// file-backed, which leaves the header's file extent to its mapped one.
fn first_raw_offset(bytes: &[u8], section_count: usize, stripped_offset: u64) -> Option<u64> {
    (0..section_count)
        .filter_map(|index| {
            let offset = TE_HEADER_SIZE + index * SECTION_HEADER_SIZE;
            let virtual_size = read_u32(bytes, offset + 8)? as u64;
            let raw_size = read_u32(bytes, offset + 16)? as u64;
            let raw_pointer = read_u32(bytes, offset + 20)? as u64;
            let mapped_size = if virtual_size == 0 {
                raw_size
            } else {
                virtual_size
            };
            (raw_size != 0 && mapped_size != 0).then_some(())?;
            raw_pointer.checked_sub(stripped_offset)
        })
        .min()
}

#[derive(Debug, Clone)]
struct TeSection {
    name: Option<String>,
    vma: u64,
    size: u64,
    data: Vec<u8>,
    flags: u32,
    kind: SectionKind,
    file_range: Option<(u64, u64)>,
}

/// A parsed TE container exposed through the decompiler's generic image API.
#[derive(Debug)]
pub struct TeLoadImage {
    filename: String,
    archtype: Vec<u8>,
    fallback_archtype: Option<Vec<u8>>,
    sections: Vec<TeSection>,
    entry: u64,
    machine_thumb_hint: bool,
    entry_thumb_hint: bool,
    spaceid: Option<Rc<AddrSpace>>,
    cursection: Cell<usize>,
}

impl TeLoadImage {
    pub fn from_bytes(filename: &str, bytes: &[u8]) -> UnlaceResult<Self> {
        Self::from_bytes_with_target(filename, bytes, "")
    }

    pub fn from_bytes_with_target(
        filename: &str,
        bytes: &[u8],
        target: &str,
    ) -> UnlaceResult<Self> {
        let target = crate::loadimage_object::explicit_language_target(target).unwrap_or("");
        if bytes.len() < TE_HEADER_SIZE {
            return Err(Self::invalid(filename, "truncated 40-byte header"));
        }
        if &bytes[..2] != b"VZ" {
            return Err(Self::invalid(filename, "missing VZ signature"));
        }

        let machine = read_u16(bytes, 2).unwrap();
        let info = machine_info(machine).ok_or_else(|| {
            Self::invalid(
                filename,
                &format!("unsupported machine value 0x{machine:04x}"),
            )
        })?;
        validate_target(filename, target, info.bits)?;

        let section_count = bytes[4] as usize;
        if section_count == 0 {
            return Err(Self::invalid(filename, "section count is zero"));
        }
        let subsystem = u16::from(bytes[5]);
        if !(IMAGE_SUBSYSTEM_EFI_APPLICATION..=IMAGE_SUBSYSTEM_EFI_ROM).contains(&subsystem) {
            return Err(Self::invalid(
                filename,
                &format!("unsupported EFI subsystem value {subsystem}"),
            ));
        }
        let table_size = section_count
            .checked_mul(SECTION_HEADER_SIZE)
            .and_then(|size| size.checked_add(TE_HEADER_SIZE))
            .ok_or_else(|| Self::invalid(filename, "section table size overflows"))?;
        if table_size > bytes.len() {
            return Err(Self::invalid(filename, "truncated section table"));
        }

        let stripped_size = read_u16(bytes, 6).unwrap() as u64;
        if stripped_size <= TE_HEADER_SIZE as u64 {
            return Err(Self::invalid(
                filename,
                "StrippedSize must exceed the TE header size",
            ));
        }
        let stripped_offset = stripped_size - TE_HEADER_SIZE as u64;
        let entry_rva = read_u32(bytes, 8).unwrap() as u64;
        let base_of_code = read_u32(bytes, 12).unwrap() as u64;
        if base_of_code <= stripped_size {
            return Err(Self::invalid(
                filename,
                "BaseOfCode must exceed StrippedSize",
            ));
        }
        let image_base = read_u64(bytes, 16).unwrap();
        if info.bits == 32 && image_base > u32::MAX as u64 {
            return Err(Self::invalid(
                filename,
                "32-bit image base exceeds its address width",
            ));
        }
        // The retained region has two extents, and they coincide only when the
        // image was linked with SectionAlignment == FileAlignment. It is MAPPED
        // from file offset zero up to the adjusted `BaseOfCode`, but the file
        // BACKS it only up to the first section's adjusted raw offset; the rest
        // is alignment slack the loader zero-fills. Deriving the file length
        // from the RVA delta refuses an ordinary 0x200/0x1000-aligned image.
        let header_size = base_of_code - stripped_offset;
        if header_size < table_size as u64 {
            return Err(Self::invalid(
                filename,
                "retained header range does not contain the section table",
            ));
        }
        // A file offset below the section table is reported per section, by the
        // loop below, which can name the section it belongs to. The extent is
        // clamped to the mapped one so no record ever holds more bytes than it
        // maps; with no file-backed section to derive it from, the file itself
        // is the only bound the image gives.
        let header_file_size = match first_raw_offset(bytes, section_count, stripped_offset) {
            Some(offset) => {
                let offset = offset.min(header_size);
                if offset > bytes.len() as u64 {
                    return Err(Self::invalid(
                        filename,
                        "retained header range extends past end of file",
                    ));
                }
                offset
            }
            None => header_size.min(bytes.len() as u64),
        };
        let header_vma = image_base
            .checked_add(stripped_offset)
            .ok_or_else(|| Self::invalid(filename, "header load address overflows"))?;
        let header_end = header_vma
            .checked_add(header_size)
            .ok_or_else(|| Self::invalid(filename, "header load range overflows"))?;
        if info.bits == 32 && header_end.saturating_sub(1) > u32::MAX as u64 {
            return Err(Self::invalid(
                filename,
                "header exceeds the 32-bit address space",
            ));
        }

        let mut sections = Vec::with_capacity(section_count + 1);
        let mut rva_ranges = Vec::with_capacity(section_count);
        let mut file_ranges = Vec::with_capacity(section_count);
        let mut previous_end = 0u64;
        for index in 0..section_count {
            let offset = TE_HEADER_SIZE + index * SECTION_HEADER_SIZE;
            let name_bytes = &bytes[offset..offset + 8];
            let name_len = name_bytes.iter().position(|&byte| byte == 0).unwrap_or(8);
            let name = String::from_utf8_lossy(&name_bytes[..name_len]).into_owned();
            let virtual_size = read_u32(bytes, offset + 8).unwrap() as u64;
            let virtual_address = read_u32(bytes, offset + 12).unwrap() as u64;
            let raw_size = read_u32(bytes, offset + 16).unwrap() as u64;
            let raw_pointer = read_u32(bytes, offset + 20).unwrap() as u64;
            let characteristics = read_u32(bytes, offset + 36).unwrap();
            // PE/COFF VirtualSize is the in-memory extent. SizeOfRawData may be
            // larger solely because the file is padded to FileAlignment; only
            // when VirtualSize is zero does the raw extent define the mapping.
            let mapped_size = if virtual_size == 0 {
                raw_size
            } else {
                virtual_size
            };
            let initialized_size = raw_size.min(mapped_size);
            if mapped_size == 0 {
                continue;
            }
            if virtual_address < stripped_offset {
                return Err(Self::invalid(
                    filename,
                    &format!("section {index} virtual address underflows the stripped offset"),
                ));
            }
            let rva_end = virtual_address
                .checked_add(mapped_size)
                .ok_or_else(|| Self::invalid(filename, "section virtual range overflows"))?;
            if index != 0 && virtual_address < previous_end {
                return Err(Self::invalid(
                    filename,
                    "section virtual ranges overlap or are not ordered",
                ));
            }
            previous_end = rva_end;

            let vma = image_base
                .checked_add(virtual_address)
                .ok_or_else(|| Self::invalid(filename, "section load address overflows"))?;
            let vma_end = vma
                .checked_add(mapped_size)
                .ok_or_else(|| Self::invalid(filename, "section load range overflows"))?;
            if info.bits == 32 && vma_end.saturating_sub(1) > u32::MAX as u64 {
                return Err(Self::invalid(
                    filename,
                    "section exceeds the 32-bit address space",
                ));
            }
            if vma < header_end && header_vma < vma_end {
                return Err(Self::invalid(
                    filename,
                    &format!("section {index} overlaps the retained TE headers"),
                ));
            }

            let mut section_file_range = None;
            let data = if raw_size == 0 {
                Vec::new()
            } else {
                if raw_pointer < stripped_offset {
                    return Err(Self::invalid(
                        filename,
                        &format!("section {index} file offset underflows the stripped offset"),
                    ));
                }
                let file_offset = raw_pointer - stripped_offset;
                if file_offset < table_size as u64 {
                    return Err(Self::invalid(
                        filename,
                        &format!("section {index} data overlaps the retained TE headers"),
                    ));
                }
                let file_end = file_offset
                    .checked_add(raw_size)
                    .ok_or_else(|| Self::invalid(filename, "section file range overflows"))?;
                if file_end > bytes.len() as u64 {
                    return Err(Self::invalid(
                        filename,
                        &format!("section {index} data extends past end of file"),
                    ));
                }
                if file_ranges
                    .iter()
                    .any(|&(start, end)| file_offset < end && start < file_end)
                {
                    return Err(Self::invalid(filename, "section file ranges overlap"));
                }
                file_ranges.push((file_offset, file_end));
                section_file_range = Some((file_offset, initialized_size));
                bytes[file_offset as usize..file_offset as usize + initialized_size as usize]
                    .to_vec()
            };

            let kind = coff_section_kind(characteristics);
            let flags = coff_section_bits(kind, SectionFlags::Coff { characteristics });

            sections.push(TeSection {
                name: Some(name),
                vma,
                size: mapped_size,
                data,
                flags,
                kind,
                file_range: section_file_range,
            });
            rva_ranges.push((virtual_address, rva_end, initialized_size, flags));
        }

        // The low entry bit is Thumb state only for the language that decodes
        // the image, which an explicit target may make something other than
        // the machine word's: the console folds it by the resolved language,
        // and so does the raw loader, so the same rule applies here.
        let decodes_as_arm32 = if target.is_empty() {
            info.arm32
        } else {
            is_arm32_language(target)
        };
        let normalized_entry_rva = if decodes_as_arm32 {
            entry_rva & !1
        } else {
            entry_rva
        };
        let entry_section = rva_ranges.iter().find(|(start, end, _, flags)| {
            *flags & section_flags::CODE != 0
                && normalized_entry_rva >= *start
                && normalized_entry_rva < *end
        });
        let Some((entry_start, _, entry_raw_size, _)) = entry_section else {
            return Err(Self::invalid(
                filename,
                "entry point is outside a code section",
            ));
        };
        if normalized_entry_rva - entry_start >= *entry_raw_size {
            return Err(Self::invalid(
                filename,
                "entry point is not backed by file data",
            ));
        }
        if !rva_ranges.iter().any(|(start, end, _, flags)| {
            *flags & section_flags::CODE != 0 && base_of_code >= *start && base_of_code < *end
        }) {
            return Err(Self::invalid(
                filename,
                "BaseOfCode is outside a code section",
            ));
        }

        for directory_offset in [24usize, 32usize] {
            let rva = read_u32(bytes, directory_offset).unwrap() as u64;
            let size = read_u32(bytes, directory_offset + 4).unwrap() as u64;
            if size == 0 {
                continue;
            }
            if rva == 0 {
                return Err(Self::invalid(
                    filename,
                    "non-empty data directory has a zero RVA",
                ));
            }
            let end = rva
                .checked_add(size)
                .ok_or_else(|| Self::invalid(filename, "data-directory range overflows"))?;
            if !rva_ranges
                .iter()
                .any(|(start, section_end, _, _)| rva >= *start && end <= *section_end)
            {
                return Err(Self::invalid(
                    filename,
                    "data directory is outside the mapped sections",
                ));
            }
        }

        sections.insert(
            0,
            TeSection {
                name: None,
                vma: header_vma,
                size: header_size,
                data: bytes[..header_file_size as usize].to_vec(),
                flags: section_flags::DATA | section_flags::READONLY,
                kind: SectionKind::ReadOnlyData,
                file_range: Some((0, header_file_size)),
            },
        );

        let entry = image_base
            .checked_add(normalized_entry_rva)
            .ok_or_else(|| Self::invalid(filename, "entry load address overflows"))?;
        let archtype = if target.is_empty() {
            info.primary.into_bytes()
        } else {
            target.as_bytes().to_vec()
        };
        let fallback_archtype = if target.is_empty() {
            info.fallback.map(String::into_bytes)
        } else {
            None
        };

        Ok(Self {
            filename: filename.to_string(),
            archtype,
            fallback_archtype,
            sections,
            entry,
            machine_thumb_hint: decodes_as_arm32
                && info.mode_policy == Some(ArmModePolicy::WholeImageThumb),
            entry_thumb_hint: decodes_as_arm32
                && info.mode_policy == Some(ArmModePolicy::EntryBit)
                && entry_rva & 1 != 0,
            spaceid: None,
            cursection: Cell::new(0),
        })
    }

    fn invalid(filename: &str, detail: &str) -> UnlaceError {
        UnlaceError::lowlevel(format!("File: {filename} : invalid TE image: {detail}"))
    }

    pub fn attach_to_space(&mut self, space: Rc<AddrSpace>) {
        self.spaceid = Some(space);
    }

    fn overlay_span(&mut self, vma: u64, data: &[u8]) -> Result<(), String> {
        if data.is_empty() {
            return Err("an overlay needs at least one byte".into());
        }
        let len = data.len() as u64;
        let end = vma
            .checked_add(len)
            .ok_or_else(|| "the overlay wraps past the end of the address space".to_string())?;
        let section = self
            .sections
            .iter_mut()
            .find(|section| {
                if vma < section.vma {
                    return false;
                }
                let offset = vma - section.vma;
                offset < section.size && len <= section.size - offset
            })
            .ok_or_else(|| format!("no loaded segment maps {vma:#x}-{end:#x}"))?;
        let offset = usize::try_from(vma - section.vma)
            .map_err(|_| "the overlay offset does not fit in host memory".to_string())?;
        let stop = offset
            .checked_add(data.len())
            .ok_or_else(|| "the overlay size does not fit in host memory".to_string())?;
        if stop > section.data.len() {
            section.data.resize(stop, 0);
        }
        section.data[offset..stop].copy_from_slice(data);
        Ok(())
    }

    pub fn fallback_arch_id(&self) -> Option<&[u8]> {
        self.fallback_archtype.as_deref()
    }

    /// The mappings the file actually backs, clamped to their initialized
    /// extent. A section's zero-filled virtual tail is mapped memory, but the
    /// image carries no copy of it, so it is not evidence that its contents are
    /// known by construction and must not reach the constant-folding ranges.
    pub fn file_backed_segments(&self) -> Vec<(u64, u64, u32)> {
        self.sections
            .iter()
            .filter_map(|section| {
                let size = section.data.len() as u64;
                (size != 0).then_some((section.vma, size, section.flags))
            })
            .collect()
    }

    /// The named sections as export metadata, in section-table order. The
    /// retained header mapping has no name and is omitted.
    pub fn section_metadata(&self) -> Vec<ObjectSectionMetadata> {
        self.sections
            .iter()
            .filter_map(|section| {
                Some(ObjectSectionMetadata::new(
                    section.name.as_deref()?,
                    section.vma,
                    section.size,
                    section.kind,
                    section.file_range,
                    section.flags,
                ))
            })
            .collect()
    }

    pub fn entry(&self) -> u64 {
        self.entry
    }

    /// Whether the machine word declares a wholly Thumb instruction stream.
    /// Only `ARMNT` does; `ARM` and `ARMTHUMB_MIXED` may interwork, so they
    /// make no whole-image claim and leave the mode to the entry bit.
    pub fn whole_image_thumb(&self) -> bool {
        self.machine_thumb_hint
    }

    /// An odd mixed-ARM entry proves Thumb state at that normalized entry,
    /// but says nothing about the rest of a potentially mixed-mode image.
    pub fn entry_thumb_hint(&self) -> bool {
        self.entry_thumb_hint
    }
}

impl LoadImage for TeLoadImage {
    fn get_file_name(&self) -> &str {
        &self.filename
    }

    fn load_fill(&mut self, ptr: &mut [u8], addr: &Address) -> UnlaceResult<()> {
        let space = addr
            .get_space()
            .expect("TeLoadImage::loadFill: address with null space");
        if !self
            .spaceid
            .as_ref()
            .is_some_and(|attached| Rc::ptr_eq(attached, space))
        {
            return Err(UnlaceError::data_unavail(format!(
                "Trying to get TE image bytes from space: {}",
                space.get_name()
            )));
        }
        if ptr.is_empty() {
            return Ok(());
        }

        let mut cursor = addr.get_offset();
        let mut written = 0usize;
        while written < ptr.len() {
            if let Some(section) = self
                .sections
                .iter()
                .find(|section| cursor >= section.vma && cursor - section.vma < section.size)
            {
                let section_offset = (cursor - section.vma) as usize;
                let count = (section.size - (cursor - section.vma))
                    .min((ptr.len() - written) as u64) as usize;
                let initialized = section.data.get(section_offset..).unwrap_or(&[]);
                let backed = initialized.len().min(count);
                ptr[written..written + backed].copy_from_slice(&initialized[..backed]);
                ptr[written + backed..written + count].fill(0);
                cursor = cursor.wadd(count as u64);
                written += count;
                continue;
            }
            if written == 0 {
                let mut message = format!(
                    "Unable to load {} bytes at {}",
                    ptr.len(),
                    addr.get_shortcut()
                );
                addr.print_raw(&mut message)?;
                return Err(UnlaceError::data_unavail(message));
            }
            let gap = self
                .sections
                .iter()
                .filter(|&section| section.vma > cursor).map(|section| section.vma - cursor)
                .min()
                .unwrap_or((ptr.len() - written) as u64)
                .min((ptr.len() - written) as u64) as usize;
            ptr[written..written + gap].fill(0);
            cursor = cursor.wadd(gap as u64);
            written += gap;
        }
        Ok(())
    }

    fn open_symbols(&self) {}

    fn get_next_symbol(&self, _record: &mut LoadImageFunc) -> bool {
        false
    }

    fn open_section_info(&self) {
        self.cursection.set(0);
    }

    fn get_next_section(&self, record: &mut LoadImageSection) -> bool {
        let index = self.cursection.get();
        let Some(section) = self.sections.get(index) else {
            return false;
        };
        let space = self
            .spaceid
            .as_ref()
            .expect("TeLoadImage::getNextSection before attachToSpace");
        record.address = Address::new(Rc::clone(space), section.vma);
        record.size = section.size;
        record.flags = section.flags;
        self.cursection.set(index + 1);
        index + 1 < self.sections.len()
    }

    fn get_segments(&self) -> Vec<(u64, u64, u32)> {
        self.sections
            .iter()
            .map(|section| (section.vma, section.size, section.flags))
            .collect()
    }

    fn unlace_overlay_bytes(&mut self, addr: &Address, data: &[u8]) -> UnlaceResult<()> {
        let space = addr
            .get_space()
            .expect("TeLoadImage::unlace_overlay_bytes: address with null space");
        if !self
            .spaceid
            .as_ref()
            .is_some_and(|attached| Rc::ptr_eq(attached, space))
        {
            return Err(UnlaceError::data_unavail(format!(
                "Trying to overlay TE image bytes in space: {}",
                space.get_name()
            )));
        }
        self.overlay_span(addr.get_offset(), data)
            .map_err(UnlaceError::data_unavail)
    }

    fn get_readonly(&self, list: &mut RangeList) {
        let Some(space) = self.spaceid.as_ref() else {
            return;
        };
        for section in &self.sections {
            if section.flags & section_flags::READONLY != 0 && section.size != 0 {
                list.insert_range(
                    Rc::clone(space),
                    section.vma,
                    section.vma.wadd(section.size).wsub(1),
                );
            }
        }
    }

    fn get_arch_type(&self) -> Vec<u8> {
        self.archtype.clone()
    }

    fn adjust_vma(&mut self, adjust: i64) {
        let space = self
            .spaceid
            .as_ref()
            .expect("TeLoadImage::adjustVma before attachToSpace");
        let byte_adjust = AddrSpace::address_to_byte(adjust as u64, space.get_word_size());
        self.entry = self.entry.wadd(byte_adjust);
        for section in &mut self.sections {
            section.vma = section.vma.wadd(byte_adjust);
        }
    }
}

fn validate_target(filename: &str, target: &str, bits: u8) -> UnlaceResult<()> {
    if target.is_empty() {
        return Ok(());
    }
    let mut fields = target.split(':');
    let _processor = fields.next();
    if let Some(endian) = fields.next().filter(|endian| *endian != "LE") {
        return Err(TeLoadImage::invalid(
            filename,
            &format!("target {target:?} is {endian}-endian but TE is LE-endian"),
        ));
    }
    if let Some(target_bits) = fields.next().and_then(|value| value.parse::<u8>().ok())
        && target_bits != bits {
            return Err(TeLoadImage::invalid(
                filename,
                &format!("target {target:?} is {target_bits}-bit but the TE machine is {bits}-bit"),
            ));
        }
    Ok(())
}

/// Synthetic TE images for regression tests, generated from source so no
/// vendor binary is ever needed: one `.text` section at RVA
/// [`synthetic::CODE_RVA`] under the fixed header layout every unlace TE test
/// shares. Tests that need a malformed header patch the returned bytes.
#[doc(hidden)]
pub mod synthetic {
    use super::*;

    /// `StrippedSize`: the retained header maps at `IMAGE_BASE + 0x1d8 - 40`.
    pub const STRIPPED_SIZE: u16 = 0x01d8;
    /// `ImageBase` of every synthetic image.
    pub const IMAGE_BASE: u64 = 0x0040_0000;
    /// RVA of the `.text` section (also `BaseOfCode`).
    pub const CODE_RVA: u32 = 0x1000;
    /// `PointerToRawData` of `.text`; the stripped bias puts the bytes at
    /// [`CODE_FILE_OFFSET`].
    pub const CODE_RAW_POINTER: u32 = 0x1000;
    /// File offset of the first code byte.
    pub const CODE_FILE_OFFSET: usize = (CODE_RAW_POINTER - (STRIPPED_SIZE as u32 - 40)) as usize;
    /// `IMAGE_SCN_CNT_CODE | IMAGE_SCN_MEM_EXECUTE | IMAGE_SCN_MEM_READ`.
    pub const TEXT_CHARACTERISTICS: u32 = 0x6000_0020;

    /// A one-section TE image: `machine`, `entry_rva`, and the `.text` bytes.
    #[derive(Clone, Debug)]
    pub struct TeImage {
        pub machine: u16,
        pub entry_rva: u32,
        pub code: Vec<u8>,
        /// `.text` `PointerToRawData`. Equal to [`CODE_RVA`] by default (the
        /// SectionAlignment == FileAlignment layout); set it lower for an
        /// ordinary 0x200-file-aligned image.
        pub raw_pointer: u32,
    }

    impl TeImage {
        /// An `ARMTHUMB_MIXED` image whose odd entry is the first code byte.
        pub fn thumb(code: &[u8]) -> Self {
            Self {
                machine: IMAGE_FILE_MACHINE_THUMB,
                entry_rva: CODE_RVA | 1,
                code: code.to_vec(),
                raw_pointer: CODE_RAW_POINTER,
            }
        }

        /// A plain `ARM` image with an even entry at the first code byte.
        pub fn arm(code: &[u8]) -> Self {
            Self {
                machine: IMAGE_FILE_MACHINE_ARM,
                entry_rva: CODE_RVA,
                code: code.to_vec(),
                raw_pointer: CODE_RAW_POINTER,
            }
        }

        pub fn machine(mut self, machine: u16) -> Self {
            self.machine = machine;
            self
        }

        pub fn entry_rva(mut self, entry_rva: u32) -> Self {
            self.entry_rva = entry_rva;
            self
        }

        pub fn raw_pointer(mut self, raw_pointer: u32) -> Self {
            self.raw_pointer = raw_pointer;
            self
        }

        /// The file offset the code lands at: the section's raw pointer less
        /// the stripped-header bias.
        pub fn code_file_offset(&self) -> usize {
            (self.raw_pointer - (STRIPPED_SIZE as u32 - 40)) as usize
        }

        /// The image bytes: header, one `.text` section record, and the code
        /// at [`Self::code_file_offset`] with `VirtualSize == SizeOfRawData ==
        /// code.len()`.
        pub fn build(&self) -> Vec<u8> {
            let size = self.code.len() as u32;
            let start = self.code_file_offset();
            let mut bytes = vec![0u8; start + self.code.len()];
            bytes[0..2].copy_from_slice(b"VZ");
            bytes[2..4].copy_from_slice(&self.machine.to_le_bytes());
            bytes[4] = 1;
            bytes[5] = IMAGE_SUBSYSTEM_EFI_APPLICATION as u8;
            bytes[6..8].copy_from_slice(&STRIPPED_SIZE.to_le_bytes());
            bytes[8..12].copy_from_slice(&self.entry_rva.to_le_bytes());
            bytes[12..16].copy_from_slice(&CODE_RVA.to_le_bytes());
            bytes[16..24].copy_from_slice(&IMAGE_BASE.to_le_bytes());
            bytes[40..45].copy_from_slice(b".text");
            bytes[48..52].copy_from_slice(&size.to_le_bytes());
            bytes[52..56].copy_from_slice(&CODE_RVA.to_le_bytes());
            bytes[56..60].copy_from_slice(&size.to_le_bytes());
            bytes[60..64].copy_from_slice(&self.raw_pointer.to_le_bytes());
            bytes[76..80].copy_from_slice(&TEXT_CHARACTERISTICS.to_le_bytes());
            bytes[start..].copy_from_slice(&self.code);
            bytes
        }
    }
}

#[cfg(test)]
mod tests;
