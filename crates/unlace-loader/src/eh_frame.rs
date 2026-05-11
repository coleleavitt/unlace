//! `.eh_frame` section parser for function boundary discovery and exception
//! landing pad extraction.
//!
//! The `.eh_frame` section contains DWARF Call Frame Information (CFI) used for
//! stack unwinding and C++ exception handling. Each Frame Description Entry
//! (FDE) describes the unwind rules for a contiguous range of machine code,
//! which maps naturally to function extents. When augmentation data includes
//! an LSDA (Language-Specific Data Area) pointer, this module extracts it as
//! a landing pad hint for downstream exception-edge reconstruction.

use std::collections::BTreeMap;

use gimli::{BaseAddresses, CieOrFde, Pointer, RunTimeEndian, UnwindSection};

use crate::error::LoadError;
use crate::image::BinaryImage;

type R<'a> = gimli::EndianSlice<'a, RunTimeEndian>;

/// A contiguous code range described by a single FDE.
#[derive(Debug, Clone, Copy, PartialEq, Eq, PartialOrd, Ord)]
pub struct FunctionExtent {
    /// Start virtual address (inclusive).
    pub start: u64,
    /// End virtual address (exclusive, i.e. `start + length`).
    pub end: u64,
}

/// An LSDA pointer associated with a function, indicating potential exception
/// handling / landing pad data for that function range.
#[derive(Debug, Clone, Copy, PartialEq, Eq, PartialOrd, Ord)]
pub struct LsdaEntry {
    /// Virtual address of the LSDA data (may require further parsing to
    /// extract individual landing pad addresses).
    pub lsda_addr: u64,
    /// Start address of the function that owns this LSDA.
    pub function_start: u64,
}

/// Parsed `.eh_frame` information.
#[derive(Debug, Clone)]
pub struct EhFrameInfo {
    /// Function extents discovered from FDEs, keyed by start address.
    pub function_extents: BTreeMap<u64, FunctionExtent>,
    /// LSDA entries for functions that have language-specific exception data.
    pub lsda_entries: Vec<LsdaEntry>,
}

impl EhFrameInfo {
    /// Returns an empty info (no `.eh_frame` present or parseable).
    pub fn empty() -> Self {
        Self {
            function_extents: BTreeMap::new(),
            lsda_entries: Vec::new(),
        }
    }

    /// Returns `true` if no FDEs were found.
    pub fn is_empty(&self) -> bool {
        self.function_extents.is_empty()
    }
}

/// Parse the `.eh_frame` section from a [`BinaryImage`].
///
/// If the section is absent, returns [`EhFrameInfo::empty`] — this is not an
/// error. Corrupt or partially-corrupt data is handled gracefully: valid FDEs
/// parsed before the corruption are still returned, and parse failures are
/// logged at `warn` level rather than propagated as hard errors.
pub fn parse_eh_frame(image: &BinaryImage) -> Result<EhFrameInfo, LoadError> {
    let eh_frame_section = match image.section_by_name(".eh_frame") {
        Some(s) => s,
        None => return Ok(EhFrameInfo::empty()),
    };

    if eh_frame_section.data.is_empty() {
        return Ok(EhFrameInfo::empty());
    }

    let endian = match image.endian {
        crate::image::Endian::Little => RunTimeEndian::Little,
        crate::image::Endian::Big => RunTimeEndian::Big,
    };

    let eh_frame = gimli::EhFrame::new(&eh_frame_section.data, endian);

    // Base addresses are critical for correct PC-relative pointer decoding
    // in .eh_frame FDE entries.
    let mut bases = BaseAddresses::default().set_eh_frame(eh_frame_section.vaddr);

    if let Some(text) = image.section_by_name(".text") {
        bases = bases.set_text(text.vaddr);
    }
    if let Some(got) = image.section_by_name(".got") {
        bases = bases.set_got(got.vaddr);
    }
    if let Some(hdr) = image.section_by_name(".eh_frame_hdr") {
        bases = bases.set_eh_frame_hdr(hdr.vaddr);
    }

    parse_eh_frame_raw(&eh_frame, &bases)
}

fn parse_eh_frame_raw(
    eh_frame: &gimli::EhFrame<R<'_>>,
    bases: &BaseAddresses,
) -> Result<EhFrameInfo, LoadError> {
    let mut function_extents = BTreeMap::new();
    let mut lsda_entries = Vec::new();

    // CIE cache keyed by section offset (usize) since EhFrameOffset lacks Ord.
    let mut cie_cache: BTreeMap<usize, gimli::CommonInformationEntry<R<'_>>> = BTreeMap::new();

    let mut entries = eh_frame.entries(bases);
    loop {
        let entry = match entries.next() {
            Ok(Some(entry)) => entry,
            Ok(None) => break,
            Err(e) => {
                tracing::warn!("stopping .eh_frame parse at corrupt entry: {e}");
                break;
            }
        };

        match entry {
            CieOrFde::Cie(cie) => {
                cie_cache.insert(cie.offset(), cie);
            }
            CieOrFde::Fde(partial) => {
                let fde = match partial.parse(|_, _, offset| {
                    if let Some(cached) = cie_cache.get(&offset.0) {
                        return Ok(cached.clone());
                    }
                    let cie = eh_frame.cie_from_offset(bases, offset)?;
                    Ok(cie)
                }) {
                    Ok(fde) => fde,
                    Err(e) => {
                        tracing::warn!("skipping unparseable FDE: {e}");
                        continue;
                    }
                };

                let start = fde.initial_address();
                let len = fde.len();

                if len == 0 {
                    continue;
                }

                let extent = FunctionExtent {
                    start,
                    end: start.saturating_add(len),
                };
                function_extents.insert(start, extent);

                if let Some(lsda_ptr) = fde.lsda() {
                    let lsda_addr = match lsda_ptr {
                        Pointer::Direct(addr) => addr,
                        Pointer::Indirect(addr) => addr,
                    };
                    lsda_entries.push(LsdaEntry {
                        lsda_addr,
                        function_start: start,
                    });
                }
            }
        }
    }

    lsda_entries.sort();

    Ok(EhFrameInfo {
        function_extents,
        lsda_entries,
    })
}

#[cfg(test)]
mod tests {
    use super::*;
    use crate::{ElfLoader, Loader};

    fn load_fixture(name: &str) -> BinaryImage {
        let path = format!("../../fixtures/{name}");
        let data = std::fs::read(&path).unwrap_or_else(|e| panic!("fixture {name}: {e}"));
        ElfLoader::load(&data).unwrap_or_else(|e| panic!("parse {name}: {e}"))
    }

    #[test]
    fn test_parse_eh_frame_basic() {
        let img = load_fixture("medium.elf");
        let info = parse_eh_frame(&img).expect("should parse .eh_frame");

        assert!(
            !info.function_extents.is_empty(),
            "medium.elf should have FDEs; got 0 extents",
        );
        assert!(
            info.function_extents.len() >= 4,
            "expected at least 4 function extents, got {}",
            info.function_extents.len(),
        );

        for extent in info.function_extents.values() {
            assert!(
                extent.start < extent.end,
                "extent should have start < end: {extent:?}",
            );
        }
    }

    #[test]
    fn test_function_bounds_match_symtab() {
        let img = load_fixture("medium.elf");
        let info = parse_eh_frame(&img).expect("should parse .eh_frame");

        let symtab_func_addrs: Vec<u64> = img
            .symbols
            .values()
            .filter(|s| s.kind == crate::image::SymbolKind::Function && s.addr != 0)
            .map(|s| s.addr)
            .collect();

        assert!(
            !symtab_func_addrs.is_empty(),
            "medium.elf should have function symbols",
        );

        let overlapping = symtab_func_addrs
            .iter()
            .filter(|&&addr| {
                info.function_extents
                    .values()
                    .any(|ext| addr >= ext.start && addr < ext.end)
            })
            .count();

        assert!(
            overlapping >= 2,
            "expected at least 2 symtab functions covered by FDE extents, got {overlapping} \
             (symtab addrs: {symtab_func_addrs:?}, extents: {:?})",
            info.function_extents.values().collect::<Vec<_>>(),
        );
    }

    #[test]
    fn test_no_eh_frame_section_returns_empty() {
        let img = BinaryImage {
            arch: crate::image::ArchId::X86_64,
            endian: crate::image::Endian::Little,
            entry: 0,
            sections: vec![],
            symbols: BTreeMap::new(),
            plt_symbols: BTreeMap::new(),
            relocations: vec![],
            string_table: BTreeMap::new(),
            tls_callbacks: vec![],
            function_starts: vec![],
            debug_records: vec![],
            load_config: None,
            runtime_functions: vec![],
            resources: vec![],
            bound_imports: vec![],
            delay_imports: Vec::new(),
            forwarded_exports: Vec::new(),
            forwarded_resolutions: std::collections::BTreeMap::new(),
            rich_header: None,
            dylibs: vec![],
            rpaths: vec![],
            pdb_types: None,
            msvc_rtti: None,
            seh: None,
            go_module: None,
            go_itabs: std::collections::BTreeMap::new(),
        };

        let info = parse_eh_frame(&img).expect("missing .eh_frame should not error");
        assert!(info.is_empty());
        assert!(info.lsda_entries.is_empty());
    }

    #[test]
    fn test_corrupt_eh_frame_no_panic() {
        let img = BinaryImage {
            arch: crate::image::ArchId::X86_64,
            endian: crate::image::Endian::Little,
            entry: 0,
            sections: vec![crate::image::Section {
                name: ".eh_frame".to_string(),
                vaddr: 0x2000,
                size: 64,
                data: vec![
                    0xDE, 0xAD, 0xBE, 0xEF, 0x00, 0xFF, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07,
                    0x08, 0x09, 0x0A, 0xCA, 0xFE, 0xBA, 0xBE, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF,
                    0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00,
                ],
                flags: crate::image::SectionFlags::READ,
            }],
            symbols: BTreeMap::new(),
            plt_symbols: BTreeMap::new(),
            relocations: vec![],
            string_table: BTreeMap::new(),
            tls_callbacks: vec![],
            function_starts: vec![],
            debug_records: vec![],
            load_config: None,
            runtime_functions: vec![],
            resources: vec![],
            bound_imports: vec![],
            delay_imports: Vec::new(),
            forwarded_exports: Vec::new(),
            forwarded_resolutions: std::collections::BTreeMap::new(),
            rich_header: None,
            dylibs: vec![],
            rpaths: vec![],
            pdb_types: None,
            msvc_rtti: None,
            seh: None,
            go_module: None,
            go_itabs: std::collections::BTreeMap::new(),
        };

        let result = parse_eh_frame(&img);
        assert!(
            result.is_ok(),
            "corrupt .eh_frame should not return Err: {result:?}"
        );
    }

    #[test]
    fn test_eh_frame_extent_ordering() {
        let img = load_fixture("medium.elf");
        let info = parse_eh_frame(&img).expect("should parse .eh_frame");

        let addrs: Vec<u64> = info.function_extents.keys().copied().collect();
        for window in addrs.windows(2) {
            assert!(
                window[0] < window[1],
                "function extents should be sorted by start address",
            );
        }
    }

    #[test]
    fn test_eh_frame_on_all_fixtures() {
        for name in &[
            "hello_world.elf",
            "medium.elf",
            "stripped.elf",
            "empty.elf",
            "calls.elf",
            "loops.elf",
            "branches.elf",
        ] {
            let path = format!("../../fixtures/{name}");
            let data = match std::fs::read(&path) {
                Ok(d) => d,
                Err(_) => continue,
            };
            let img = match ElfLoader::load(&data) {
                Ok(i) => i,
                Err(_) => continue,
            };
            let result = parse_eh_frame(&img);
            assert!(
                result.is_ok(),
                "{name}: .eh_frame parse should not fail: {:?}",
                result.err(),
            );
        }
    }
}
