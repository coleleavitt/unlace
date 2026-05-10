//! Binary image types produced by loaders.

use std::collections::BTreeMap;
use std::fmt;

pub use unlace_ir::ArchId;

/// Byte order of the loaded binary.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Hash)]
pub enum Endian {
    Little,
    Big,
}

impl fmt::Display for Endian {
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {
        match self {
            Self::Little => f.write_str("little"),
            Self::Big => f.write_str("big"),
        }
    }
}

/// Flags describing section permissions / attributes.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Hash)]
pub struct SectionFlags {
    bits: u8,
}

impl SectionFlags {
    pub const READ: Self = Self { bits: 0b001 };
    pub const WRITE: Self = Self { bits: 0b010 };
    pub const EXEC: Self = Self { bits: 0b100 };

    pub const fn empty() -> Self {
        Self { bits: 0 }
    }

    pub const fn from_bits(bits: u8) -> Self {
        Self { bits: bits & 0b111 }
    }

    pub const fn bits(self) -> u8 {
        self.bits
    }

    pub const fn contains(self, other: Self) -> bool {
        (self.bits & other.bits) == other.bits
    }

    pub const fn union(self, other: Self) -> Self {
        Self {
            bits: self.bits | other.bits,
        }
    }

    pub const fn is_empty(self) -> bool {
        self.bits == 0
    }
}

impl std::ops::BitOr for SectionFlags {
    type Output = Self;

    fn bitor(self, rhs: Self) -> Self {
        self.union(rhs)
    }
}

/// A loaded section from the binary.
#[derive(Debug, Clone)]
pub struct Section {
    /// Section name (e.g. `.text`, `.data`).
    pub name: String,
    /// Virtual address of the section start.
    pub vaddr: u64,
    /// Size in bytes (may differ from `data.len()` for BSS-like sections).
    pub size: u64,
    /// Raw section bytes. Empty for BSS / NOBITS sections.
    pub data: Vec<u8>,
    /// Permission flags.
    pub flags: SectionFlags,
}

/// Classification of a relocation.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Hash)]
pub enum RelocKind {
    /// PLT jump slot (R_X86_64_JUMP_SLOT, etc.).
    PltJumpSlot,
    /// GOT global data entry (R_X86_64_GLOB_DAT, etc.).
    GlobDat,
    /// Relative relocation (R_X86_64_RELATIVE, etc.).
    Relative,
    /// Any other relocation type.
    Other,
}

impl fmt::Display for RelocKind {
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {
        match self {
            Self::PltJumpSlot => f.write_str("plt_jump_slot"),
            Self::GlobDat => f.write_str("glob_dat"),
            Self::Relative => f.write_str("relative"),
            Self::Other => f.write_str("other"),
        }
    }
}

/// A resolved relocation entry from `.rela.plt` or `.rela.dyn`.
#[derive(Debug, Clone)]
pub struct Relocation {
    /// Virtual address targeted by this relocation (GOT slot address).
    pub addr: u64,
    /// Resolved symbol name, if any.
    pub sym_name: String,
    /// Classification of the relocation.
    pub kind: RelocKind,
}

/// Classification of a symbol.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Hash)]
pub enum SymbolKind {
    Function,
    Object,
    Section,
    File,
    Unknown,
}

impl fmt::Display for SymbolKind {
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {
        match self {
            Self::Function => f.write_str("function"),
            Self::Object => f.write_str("object"),
            Self::Section => f.write_str("section"),
            Self::File => f.write_str("file"),
            Self::Unknown => f.write_str("unknown"),
        }
    }
}

/// A symbol from the binary's symbol table.
#[derive(Debug, Clone)]
pub struct Symbol {
    pub name: String,
    pub addr: u64,
    pub size: u64,
    pub kind: SymbolKind,
}

/// A debug directory record from the PE IMAGE_DIRECTORY_ENTRY_DEBUG table.
///
/// Each entry describes one debug data stream embedded in (or referenced by)
/// the PE file. The most common type is CodeView (type 2), which carries a
/// PDB path, GUID, and age for symbol-server lookup.
#[derive(Debug, Clone)]
pub struct DebugRecord {
    /// Debug data type (e.g. `IMAGE_DEBUG_TYPE_CODEVIEW` = 2).
    pub typ: u32,
    /// Timestamp from the debug directory entry.
    pub time_stamp: u32,
    /// PDB file path (NUL-terminated UTF-8 from the RSDS record). `None` for
    /// non-CodeView entries or if the RSDS record is malformed.
    pub pdb_path: Option<String>,
    /// PDB GUID from the RSDS record. `None` for non-CodeView entries.
    pub pdb_guid: Option<[u8; 16]>,
    /// PDB age counter from the RSDS record. `None` for non-CodeView entries.
    pub pdb_age: Option<u32>,
}

/// Parsed IMAGE_LOAD_CONFIG_DIRECTORY (PE32+ / PE32).
///
/// Contains the security cookie VA and Control Flow Guard (CFG) metadata.
/// Fields are stored as absolute virtual addresses where applicable.
#[derive(Debug, Clone)]
pub struct LoadConfig {
    /// Absolute VA of the security cookie (`__security_cookie`).
    pub security_cookie: u64,
    /// Absolute VA of the CFG check function pointer.
    pub guard_cf_check: u64,
    /// Absolute VA of the CFG dispatch function pointer.
    pub guard_cf_dispatch: u64,
    /// Guard flags (`IMAGE_GUARD_*` bitmask).
    pub guard_flags: u32,
    /// Absolutized CFG target RVAs (each entry = `image_base + rva`).
    pub cfg_targets: Vec<u64>,
}

/// A resource entry from the PE resource directory tree.
///
/// The PE resource tree has three levels: type → name → language. Each leaf
/// entry records the RVA and size of the resource data blob. We enumerate
/// entries without interpreting their contents.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct ResourceEntry {
    /// Resource type ID (level 1). Standard types: RT_ICON=3, RT_VERSION=16, etc.
    pub type_id: u32,
    /// Resource name/ID (level 2).
    pub name_id: u32,
    /// Language ID (level 3).
    pub language: u32,
    /// RVA of the resource data.
    pub rva: u32,
    /// Size of the resource data in bytes.
    pub size: u32,
}

/// A bound import descriptor from IMAGE_DIRECTORY_ENTRY_BOUND_IMPORT.
///
/// Bound imports record pre-resolved DLL timestamps so the loader can skip
/// re-binding when the target DLL hasn't changed.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct BoundImport {
    /// DLL module name.
    pub module_name: String,
    /// Timestamp of the bound DLL.
    pub timestamp: u32,
}

/// A single PE delay-loaded import — resolved lazily at first call rather
/// than eagerly at load time. Populated from
/// `IMAGE_DIRECTORY_ENTRY_DELAY_IMPORT`.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct DelayImport {
    /// Source DLL module name (without path).
    pub dll_name: String,
    /// Imported function symbol name, or `#N` for ordinal-only imports.
    pub function_name: String,
}

/// A single record from the PE Rich header.
///
/// Each record encodes a build tool identifier and the number of times it was
/// used during compilation/linking. The `comp_id` packs `(tool_id << 16) | minor_version`.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct RichRecord {
    /// Composite tool identifier: `(tool_id << 16) | minor_version`.
    pub comp_id: u32,
    /// Number of uses of this tool during the build.
    pub count: u32,
}

/// The decoded Rich header from a PE binary.
///
/// The Rich header is an undocumented Microsoft linker structure between the
/// DOS stub and the PE signature. It is XOR-encoded with a checksum key.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct RichHeader {
    /// Decoded build tool records.
    pub records: Vec<RichRecord>,
    /// The XOR key used to encode the header (the u32 after the "Rich" signature).
    pub xor_key: u32,
}

/// Classification of a Mach-O dylib dependency.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Hash)]
pub enum DylibKind {
    /// `LC_LOAD_DYLIB` — standard required dependency.
    Load,
    /// `LC_LOAD_WEAK_DYLIB` — optional dependency (missing at runtime is OK).
    Weak,
    /// `LC_REEXPORT_DYLIB` — re-exported dependency.
    Reexport,
    /// `LC_LAZY_LOAD_DYLIB` — loaded on first use.
    Lazy,
    /// `LC_LOAD_UPWARD_DYLIB` — upward dependency (breaks cycles).
    Upward,
}

impl fmt::Display for DylibKind {
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {
        match self {
            Self::Load => f.write_str("load"),
            Self::Weak => f.write_str("weak"),
            Self::Reexport => f.write_str("reexport"),
            Self::Lazy => f.write_str("lazy"),
            Self::Upward => f.write_str("upward"),
        }
    }
}

/// A Mach-O dylib dependency extracted from `LC_LOAD_DYLIB` and related commands.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct DylibDep {
    /// Install path of the dylib (e.g. `/usr/lib/libSystem.B.dylib`).
    pub path: String,
    /// How this dependency is loaded.
    pub kind: DylibKind,
    /// Packed current version (major << 16 | minor << 8 | patch).
    pub current_version: u32,
    /// Packed compatibility version.
    pub compat_version: u32,
}

/// A fully-parsed binary image ready for analysis, produced by a [`Loader`](crate::Loader).
#[derive(Debug, Clone)]
pub struct BinaryImage {
    /// Target architecture.
    pub arch: ArchId,
    /// Byte order.
    pub endian: Endian,
    /// Entry point virtual address.
    pub entry: u64,
    /// Loaded sections.
    pub sections: Vec<Section>,
    /// Symbols indexed by address (merged from all symbol tables).
    pub symbols: BTreeMap<u64, Symbol>,
    /// PLT stub virtual address → dynamic symbol name.
    pub plt_symbols: BTreeMap<u64, String>,
    /// Resolved relocations from `.rela.plt` and `.rela.dyn` (or equivalent).
    pub relocations: Vec<Relocation>,
    /// Recovered string literals: virtual address → string content.
    ///
    /// Built by scanning `.rodata` and `.data` sections for null-terminated
    /// printable ASCII sequences (minimum 4 characters).
    pub string_table: BTreeMap<u64, String>,
    /// TLS callback function virtual addresses (PE only). Empty for ELF/Mach-O.
    pub tls_callbacks: Vec<u64>,
    /// PE debug directory records. Empty for ELF/Mach-O.
    pub debug_records: Vec<DebugRecord>,
    /// PE load configuration directory. `None` for ELF/Mach-O or if absent.
    pub load_config: Option<LoadConfig>,
    /// Exception handling runtime functions (PE `.pdata`). Empty for ELF/Mach-O.
    pub runtime_functions: Vec<RuntimeFunction>,
    /// PE resource directory entries. Empty for ELF/Mach-O or if absent.
    pub resources: Vec<ResourceEntry>,
    /// PE bound import descriptors. Empty for ELF/Mach-O or if absent.
    pub bound_imports: Vec<BoundImport>,
    /// PE delay-loaded imports. Empty for ELF/Mach-O or PEs without
    /// an `IMAGE_DIRECTORY_ENTRY_DELAY_IMPORT` directory.
    pub delay_imports: Vec<DelayImport>,
    /// PE Rich header. `None` for ELF/Mach-O or if absent.
    pub rich_header: Option<RichHeader>,
    /// Mach-O dylib dependencies. Empty for ELF/PE.
    pub dylibs: Vec<DylibDep>,
    /// Mach-O `@rpath` search paths from `LC_RPATH`. Empty for ELF/PE.
    pub rpaths: Vec<String>,
    /// PDB-derived CodeView types, when an associated `.pdb` was loaded.
    /// Consumed by the type-infer pipeline to seed function signatures and
    /// composite layouts. `None` for ELF/Mach-O or PEs without PDB.
    pub pdb_types: Option<crate::pdb_types::PdbTypes>,
    /// MSVC RTTI hierarchy recovered from `.rdata` vtables (PE only).
    /// `None` for ELF/Mach-O or PEs without RTTI.
    pub msvc_rtti: Option<crate::msvc_rtti::MsvcRtti>,
    /// SEH unwind information recovered from `.pdata` + `.xdata` (PE only).
    /// `None` for ELF/Mach-O or PEs without SEH.
    pub seh: Option<crate::seh::SehInfo>,
    /// Go `runtime.firstmoduledata` recovered from a Go-compiled binary.
    /// `None` for non-Go binaries (or stripped Go binaries where neither
    /// the symbol nor a recognizable pclntab is present).
    pub go_module: Option<crate::go_moduledata::GoModuleInfo>,
    /// Decoded Go `runtime.itab` records keyed by their virtual address.
    /// Populated from `GoModuleInfo.itablinks` when the moduledata parse
    /// succeeds. Empty for non-Go binaries.
    pub go_itabs: std::collections::BTreeMap<u64, crate::go_types::GoItab>,
}

/// A PE RUNTIME_FUNCTION entry from the `.pdata` exception directory.
///
/// Each entry describes one function's address range and points to its
/// UNWIND_INFO record in `.xdata`.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct RuntimeFunction {
    /// Absolute VA of the function start.
    pub begin_address: u64,
    /// Absolute VA of the function end.
    pub end_address: u64,
    /// Absolute VA of the UNWIND_INFO record.
    pub unwind_info_address: u64,
    /// Parsed UNWIND_INFO header (if successfully read).
    pub unwind_info: Option<UnwindInfo>,
}

/// The header of a PE UNWIND_INFO record from `.xdata`.
///
/// Describes the function's prolog layout and frame register usage.
/// Individual unwind codes are not decoded — only the fixed 4-byte header.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct UnwindInfo {
    /// UNWIND_INFO version (bits 0–2 of byte 0). Must be 1 or 2.
    pub version: u8,
    /// Flags (bits 3–7 of byte 0): UNW_FLAG_NHANDLER, EHANDLER, UHANDLER, CHAININFO.
    pub flags: u8,
    /// Size of the function prolog in bytes.
    pub size_of_prolog: u8,
    /// Number of UNWIND_CODE entries following the header.
    pub count_of_codes: u8,
    /// Frame register (bits 0–3 of byte 3). 0 = no frame register.
    pub frame_register: u8,
    /// Scaled frame register offset (bits 4–7 of byte 3).
    pub frame_offset: u8,
}

impl BinaryImage {
    /// Look up a section by name.
    pub fn section_by_name(&self, name: &str) -> Option<&Section> {
        self.sections.iter().find(|s| s.name == name)
    }

    /// Look up the symbol at (or nearest before) `addr`.
    pub fn symbol_at(&self, addr: u64) -> Option<&Symbol> {
        self.symbols.range(..=addr).next_back().map(|(_, sym)| sym)
    }

    /// Predicate suitable for [`unlace_ir::data_xrefs::build_data_xref_graph`]:
    /// returns `true` iff `addr` falls inside any non-executable mapped
    /// section (data / rodata / bss). Executable sections are excluded so
    /// code-pointer constants don't masquerade as data globals — those
    /// are tracked by the call graph instead.
    pub fn is_global_data_addr(&self, addr: u64) -> bool {
        for sec in &self.sections {
            let end = sec.vaddr.saturating_add(sec.size);
            if addr >= sec.vaddr && addr < end && !sec.flags.contains(SectionFlags::EXEC) {
                return true;
            }
        }
        false
    }

    /// Returns `true` if the binary appears to be Go-compiled.
    ///
    /// Detected by either a successful `runtime.firstmoduledata` parse, or by
    /// the presence of any of the standard Go pclntab section names.
    pub fn is_go_binary(&self) -> bool {
        if self.go_module.is_some() {
            return true;
        }
        const GO_SECTIONS: &[&str] = &[
            ".gopclntab",
            "__gopclntab",
            "__go_pclntab",
            "go.pclntab",
            "__TEXT,__gosymtab",
        ];
        GO_SECTIONS
            .iter()
            .any(|name| self.section_by_name(name).is_some())
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    fn empty_image() -> BinaryImage {
        BinaryImage {
            arch: ArchId::Unknown(0),
            endian: Endian::Little,
            entry: 0,
            sections: Vec::new(),
            symbols: BTreeMap::new(),
            plt_symbols: BTreeMap::new(),
            relocations: Vec::new(),
            string_table: BTreeMap::new(),
            tls_callbacks: Vec::new(),
            debug_records: Vec::new(),
            load_config: None,
            runtime_functions: Vec::new(),
            resources: Vec::new(),
            bound_imports: Vec::new(),
            delay_imports: Vec::new(),
            rich_header: None,
            dylibs: Vec::new(),
            rpaths: Vec::new(),
            pdb_types: None,
            msvc_rtti: None,
            seh: None,
            go_module: None,
            go_itabs: BTreeMap::new(),
        }
    }

    #[test]
    fn binaryimage_default_has_no_go_module() {
        let img = empty_image();
        assert!(img.go_module.is_none());
        assert!(!img.is_go_binary());
    }

    #[test]
    fn is_go_binary_true_when_gopclntab_section_present() {
        let mut img = empty_image();
        img.sections.push(Section {
            name: ".gopclntab".to_string(),
            vaddr: 0x401000,
            size: 0,
            data: Vec::new(),
            flags: SectionFlags::empty(),
        });
        assert!(img.is_go_binary());
    }

    #[test]
    fn is_go_binary_false_for_native_c_binary() {
        let mut img = empty_image();
        img.sections.push(Section {
            name: ".text".to_string(),
            vaddr: 0x401000,
            size: 0,
            data: Vec::new(),
            flags: SectionFlags::EXEC,
        });
        assert!(!img.is_go_binary());
    }

    #[test]
    fn binaryimage_has_msvc_rtti_and_seh_fields_default_none() {
        let img = empty_image();
        assert!(img.msvc_rtti.is_none());
        assert!(img.seh.is_none());
    }

    #[test]
    fn binaryimage_default_has_empty_go_itabs() {
        let img = empty_image();
        assert!(img.go_itabs.is_empty());
    }

    #[test]
    fn binaryimage_default_has_empty_delay_imports() {
        let img = empty_image();
        assert!(img.delay_imports.is_empty());
    }

    #[test]
    fn delay_import_struct_roundtrips() {
        let di = DelayImport {
            dll_name: "kernel32.dll".to_string(),
            function_name: "LoadLibraryW".to_string(),
        };
        assert_eq!(di.dll_name, "kernel32.dll");
        assert_eq!(di.function_name, "LoadLibraryW");
    }
}
