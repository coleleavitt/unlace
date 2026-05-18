//! Conversion from parsed Android DEX/OAT/ART structures to [`BinaryImage`].
//!
//! These functions wire the existing per-format parsers to the unified
//! `BinaryImage` shape consumed by the rest of the decompiler pipeline.

use std::collections::BTreeMap;

use crate::android_art::{ArtFile, ArtSectionKind};
use crate::android_dex::DexClass;
use crate::android_oat::{OatFile, OatInstructionSet};
use crate::image::{
    ArchId, BinaryImage, Endian, Section, SectionFlags, Symbol, SymbolKind,
};

// ─── helpers ────────────────────────────────────────────────────────────────

/// Build an empty `BinaryImage` with sane defaults for Android targets.
fn empty_android_image(arch: ArchId) -> BinaryImage {
    BinaryImage {
        arch,
        endian: Endian::Little,
        entry: 0,
        sections: Vec::new(),
        symbols: BTreeMap::new(),
        plt_symbols: BTreeMap::new(),
        relocations: Vec::new(),
        string_table: BTreeMap::new(),
        tls_callbacks: Vec::new(),
        function_starts: Vec::new(),
        debug_records: Vec::new(),
        load_config: None,
        pe_mitigations: None,
        runtime_functions: Vec::new(),
        resources: Vec::new(),
        bound_imports: Vec::new(),
        delay_imports: Vec::new(),
        forwarded_exports: Vec::new(),
        forwarded_resolutions: BTreeMap::new(),
        rich_header: None,
        dylibs: Vec::new(),
        rpaths: Vec::new(),
        pdb_types: None,
        msvc_rtti: None,
        seh: None,
        go_module: None,
        go_itabs: BTreeMap::new(),
        go_types: BTreeMap::new(),
        swift_info: None,
        auth_pointers: Vec::new(),
        auth_ptr_slots: Vec::new(),
        wasm_component: None,
    }
}

/// Map an OAT instruction set enum to an [`ArchId`].
fn oat_isa_to_arch(isa: OatInstructionSet) -> ArchId {
    match isa {
        OatInstructionSet::Arm => ArchId::Arm,
        OatInstructionSet::Arm64 => ArchId::AArch64,
        OatInstructionSet::X86 => ArchId::X86,
        OatInstructionSet::X86_64 => ArchId::X86_64,
        OatInstructionSet::Mips => ArchId::Mips,
        OatInstructionSet::Mips64 => ArchId::Mips64,
        OatInstructionSet::Unknown(v) => ArchId::Unknown(v as u16),
    }
}

// ─── DEX → BinaryImage ─────────────────────────────────────────────────────

/// Convert a list of parsed DEX classes into a [`BinaryImage`].
///
/// Each method entry becomes a [`Symbol`] at a virtual address equal to its
/// `code_offset`. The symbol name is `ClassName.methodName:prototype`.
///
/// DEX bytecode is architecture-neutral, so the image uses
/// [`ArchId::Unknown(0)`].
pub fn dex_to_binary_image(classes: &[DexClass]) -> BinaryImage {
    let mut img = empty_android_image(ArchId::Unknown(0));

    for class in classes {
        for method in &class.methods {
            let addr = method.code_offset as u64;
            let name = format!("{}.{}:{}", class.name, method.name, method.prototype);
            img.symbols.insert(
                addr,
                Symbol {
                    name,
                    addr,
                    size: 0,
                    kind: SymbolKind::Function,
                },
            );
        }
    }

    img
}

// ─── OAT → BinaryImage ─────────────────────────────────────────────────────

/// Convert a parsed OAT file into a [`BinaryImage`].
///
/// Creates two sections:
/// - `.oat_text` — the native compiled code from the `oatexec` ELF section,
///   mapped with `READ | EXEC` flags.
/// - `.dex` — concatenated embedded DEX bytecode from all embedded DEX files,
///   mapped with `READ` only.
///
/// Per-method native code offsets are surfaced as symbols in the `.oat_text`
/// section.
pub fn oat_to_binary_image(oat: &OatFile) -> BinaryImage {
    let arch = oat_isa_to_arch(oat.header.instruction_set);
    let mut img = empty_android_image(arch);

    // .oat_text section: native compiled code.
    let text_vaddr: u64 = 0x1000; // conventional load address for oatexec
    if !oat.native_code.is_empty() {
        img.sections.push(Section {
            name: ".oat_text".to_string(),
            vaddr: text_vaddr,
            size: oat.native_code.len() as u64,
            data: oat.native_code.clone(),
            flags: SectionFlags::READ.union(SectionFlags::EXEC),
        });
    }

    // .dex section: concatenated embedded DEX bytecode.
    let mut dex_data = Vec::new();
    for dex_file in &oat.dex_files {
        dex_data.extend_from_slice(&dex_file.dex_data);
    }
    let dex_vaddr = text_vaddr + oat.native_code.len() as u64;
    if !dex_data.is_empty() {
        img.sections.push(Section {
            name: ".dex".to_string(),
            vaddr: dex_vaddr,
            size: dex_data.len() as u64,
            data: dex_data,
            flags: SectionFlags::READ,
        });
    }

    // Symbols from per-method native code offsets.
    for method_info in &oat.methods {
        if method_info.code_offset == 0 {
            // code_offset == 0 means interpreted (no native code).
            continue;
        }
        let addr = text_vaddr + method_info.code_offset as u64;
        let name = format!("oat_method_{}", method_info.method_idx);
        img.symbols.insert(
            addr,
            Symbol {
                name,
                addr,
                size: 0,
                kind: SymbolKind::Function,
            },
        );
    }

    img
}

// ─── ART → BinaryImage ─────────────────────────────────────────────────────

/// Convert a parsed ART image into a [`BinaryImage`].
///
/// Creates an `.art_globals` section from the class table (boot image table)
/// and surfaces class entries as `Object`-kind symbols at their image offsets.
/// Method entries with non-zero entry points are surfaced as `Function`
/// symbols.
pub fn art_to_binary_image(art: &ArtFile) -> BinaryImage {
    let pointer_size = art.header.pointer_size;
    let arch = if pointer_size == 8 {
        ArchId::AArch64
    } else {
        ArchId::Arm
    };
    let mut img = empty_android_image(arch);
    img.entry = art.header.image_begin;

    // Build .art_globals section from the ClassTable section if present.
    if let Some(class_section) = art
        .sections
        .iter()
        .find(|s| s.kind == ArtSectionKind::ClassTable)
    {
        img.sections.push(Section {
            name: ".art_globals".to_string(),
            vaddr: art.header.image_begin + class_section.offset as u64,
            size: class_section.size as u64,
            data: Vec::new(), // raw bytes not duplicated; metadata only
            flags: SectionFlags::READ,
        });
    }

    // Surface class entries as Object symbols.
    for class in &art.classes {
        let addr = art.header.image_begin + class.image_offset as u64;
        img.symbols.insert(
            addr,
            Symbol {
                name: class.descriptor.clone(),
                addr,
                size: 0,
                kind: SymbolKind::Object,
            },
        );
    }

    // Surface method entries as Function symbols.
    for method in &art.methods {
        if method.entry_point_offset == 0 {
            continue;
        }
        let addr = art.header.image_begin + method.entry_point_offset;
        let name = format!("art_method_{}", method.dex_method_index);
        img.symbols.insert(
            addr,
            Symbol {
                name,
                addr,
                size: 0,
                kind: SymbolKind::Function,
            },
        );
    }

    img
}

// ─── tests ──────────────────────────────────────────────────────────────────

#[cfg(test)]
mod tests {
    use super::*;
    use crate::android_dex::{DexClass, DexMethod};
    use crate::android_oat::{
        OatDexFile, OatFile, OatHeader, OatInstructionSet, OatMethodInfo,
    };
    use crate::android_art::{
        ArtClassEntry, ArtClassStatus, ArtFile, ArtHeader, ArtImageSection,
        ArtMethodEntry, ArtSectionKind,
    };
    use crate::android_dex::DexHeader;

    #[test]
    fn dex_methods_become_symbols() {
        let classes = vec![
            DexClass {
                name: "Lcom/example/Main;".to_string(),
                super_class: Some("Ljava/lang/Object;".to_string()),
                access_flags: 0x0001,
                methods: vec![
                    DexMethod {
                        name: "onCreate".to_string(),
                        prototype: "(Landroid/os/Bundle;)V".to_string(),
                        access_flags: 0x0001,
                        code_offset: 0x100,
                    },
                    DexMethod {
                        name: "main".to_string(),
                        prototype: "([Ljava/lang/String;)V".to_string(),
                        access_flags: 0x0009,
                        code_offset: 0x200,
                    },
                ],
            },
            DexClass {
                name: "Lcom/example/Util;".to_string(),
                super_class: Some("Ljava/lang/Object;".to_string()),
                access_flags: 0x0001,
                methods: vec![DexMethod {
                    name: "helper".to_string(),
                    prototype: "()I".to_string(),
                    access_flags: 0x0001,
                    code_offset: 0x300,
                }],
            },
        ];

        let img = dex_to_binary_image(&classes);

        // Verify symbols exist at the expected addresses.
        assert_eq!(img.symbols.len(), 3);

        let sym_100 = img.symbols.get(&0x100).expect("symbol at 0x100");
        assert_eq!(
            sym_100.name,
            "Lcom/example/Main;.onCreate:(Landroid/os/Bundle;)V"
        );
        assert_eq!(sym_100.kind, SymbolKind::Function);

        let sym_200 = img.symbols.get(&0x200).expect("symbol at 0x200");
        assert_eq!(
            sym_200.name,
            "Lcom/example/Main;.main:([Ljava/lang/String;)V"
        );

        let sym_300 = img.symbols.get(&0x300).expect("symbol at 0x300");
        assert_eq!(sym_300.name, "Lcom/example/Util;.helper:()I");
    }

    #[test]
    fn oat_native_section_carries_text_flag() {
        let oat = OatFile {
            header: OatHeader {
                version: "170".to_string(),
                instruction_set: OatInstructionSet::Arm64,
                dex_file_count: 1,
                key_value_store_size: 0,
                oat_checksum: 0,
            },
            dex_files: vec![OatDexFile {
                location: "/system/framework/boot.jar:classes.dex".to_string(),
                dex_checksum: 0xCAFE,
                dex_offset: 0,
                dex_header: DexHeader {
                    version: 0,
                    file_size: 112,
                    string_ids_size: 0,
                    type_ids_size: 0,
                    method_ids_size: 0,
                    class_defs_size: 0,
                },
                dex_data: vec![0u8; 112],
            }],
            methods: vec![
                OatMethodInfo {
                    method_idx: 0,
                    code_offset: 0x10,
                    gc_map_size: 0,
                },
                OatMethodInfo {
                    method_idx: 1,
                    code_offset: 0, // interpreted
                    gc_map_size: 0,
                },
            ],
            native_code: vec![0xCC; 256], // fake native code
        };

        let img = oat_to_binary_image(&oat);

        // Verify .oat_text section exists with EXEC flag.
        let text_sec = img
            .section_by_name(".oat_text")
            .expect(".oat_text section");
        assert!(
            text_sec.flags.contains(SectionFlags::EXEC),
            ".oat_text must be executable"
        );
        assert!(
            text_sec.flags.contains(SectionFlags::READ),
            ".oat_text must be readable"
        );
        assert_eq!(text_sec.size, 256);

        // Verify .dex section exists (read-only, not exec).
        let dex_sec = img.section_by_name(".dex").expect(".dex section");
        assert!(dex_sec.flags.contains(SectionFlags::READ));
        assert!(
            !dex_sec.flags.contains(SectionFlags::EXEC),
            ".dex must NOT be executable"
        );

        // Verify arch.
        assert_eq!(img.arch, ArchId::AArch64);

        // Verify only non-zero code_offset methods became symbols.
        assert_eq!(img.symbols.len(), 1);
        let sym = img.symbols.values().next().unwrap();
        assert_eq!(sym.name, "oat_method_0");
    }

    #[test]
    fn art_image_has_globals_section() {
        let art = ArtFile {
            header: ArtHeader {
                version: "099".to_string(),
                image_begin: 0x7000_0000,
                image_size: 0x10_0000,
                oat_checksum: 0,
                oat_file_begin: 0x7010_0000,
                oat_data_begin: 0x7010_1000,
                oat_data_end: 0x7020_0000,
                oat_file_end: 0x7030_0000,
                pointer_size: 4,
                is_pic: true,
                patch_delta: 0,
                section_count: 9,
            },
            sections: vec![
                ArtImageSection {
                    kind: ArtSectionKind::Objects,
                    offset: 72,
                    size: 1000,
                },
                ArtImageSection {
                    kind: ArtSectionKind::ClassTable,
                    offset: 2000,
                    size: 512,
                },
            ],
            classes: vec![ArtClassEntry {
                descriptor: "Ljava/lang/Object;".to_string(),
                image_offset: 0x100,
                status: ArtClassStatus::Initialized,
                num_virtual_methods: 5,
                num_direct_methods: 2,
            }],
            methods: vec![ArtMethodEntry {
                dex_method_index: 42,
                entry_point_offset: 0x1000,
                access_flags: 1,
                image_offset: 0x500,
            }],
        };

        let img = art_to_binary_image(&art);

        // .art_globals section from the ClassTable.
        let globals = img
            .section_by_name(".art_globals")
            .expect(".art_globals section");
        assert_eq!(globals.vaddr, 0x7000_0000 + 2000);
        assert_eq!(globals.size, 512);
        assert!(globals.flags.contains(SectionFlags::READ));

        // Class descriptor as Object symbol.
        let class_sym = img
            .symbols
            .get(&(0x7000_0000u64 + 0x100))
            .expect("class symbol");
        assert_eq!(class_sym.name, "Ljava/lang/Object;");
        assert_eq!(class_sym.kind, SymbolKind::Object);

        // Method as Function symbol.
        let method_sym = img
            .symbols
            .get(&(0x7000_0000u64 + 0x1000))
            .expect("method symbol");
        assert_eq!(method_sym.name, "art_method_42");
        assert_eq!(method_sym.kind, SymbolKind::Function);

        // Arch should be Arm (32-bit).
        assert_eq!(img.arch, ArchId::Arm);
    }
}
