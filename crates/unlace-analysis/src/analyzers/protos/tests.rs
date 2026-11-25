use super::*;

#[test]
fn notype_call_imports_gain_prototypes_but_data_relocations_do_not() {
    use object::{
        Architecture, BinaryFormat, Endianness, RelocationFlags, SymbolFlags, SymbolScope, write,
    };
    for (architecture, endian, code, relocation) in [
        (
            Architecture::Sparc,
            Endianness::Big,
            vec![0x40, 0, 0, 0],
            object::elf::R_SPARC_WDISP30,
        ),
        (
            Architecture::X86_64,
            Endianness::Little,
            vec![0xe8, 0, 0, 0, 0],
            object::elf::R_X86_64_PLT32,
        ),
    ] {
        for (call_target, same_named_definition) in [(false, false), (true, false), (true, true)] {
            let mut object = write::Object::new(BinaryFormat::Elf, architecture, endian);
            let section = object.section_id(if call_target {
                write::StandardSection::Text
            } else {
                write::StandardSection::Data
            });
            object.append_section_data(section, &code, 4);
            let symbol = object.add_symbol(write::Symbol {
                name: if same_named_definition {
                    b"memset@TEST_1".to_vec()
                } else {
                    b"memset".to_vec()
                },
                value: 0,
                size: 0,
                kind: SymbolKind::Unknown,
                scope: SymbolScope::Dynamic,
                weak: false,
                section: write::SymbolSection::Undefined,
                flags: SymbolFlags::None,
            });
            if same_named_definition {
                object.add_symbol(write::Symbol {
                    name: b"memset@@TEST_1".to_vec(),
                    value: 0,
                    size: 4,
                    kind: SymbolKind::Text,
                    scope: SymbolScope::Dynamic,
                    weak: false,
                    section: write::SymbolSection::Section(section),
                    flags: SymbolFlags::None,
                });
            }
            let r_type = if call_target {
                relocation
            } else if architecture == Architecture::Sparc {
                object::elf::R_SPARC_32
            } else {
                object::elf::R_X86_64_32
            };
            object
                .add_relocation(
                    section,
                    write::Relocation {
                        offset: if architecture == Architecture::X86_64 && call_target {
                            1
                        } else {
                            0
                        },
                        symbol,
                        addend: if architecture == Architecture::X86_64 && call_target {
                            -4
                        } else {
                            0
                        },
                        flags: RelocationFlags::Elf { r_type },
                    },
                )
                .unwrap();
            let bytes = object.write().unwrap();
            let file = object::File::parse(bytes.as_slice()).unwrap();
            let image =
                crate::loadimage_object::ObjectLoadImage::from_bytes_silent("call.o", &bytes)
                    .unwrap();
            let (imports, reloc_imports) = loaded_import_addrs(&file, &bytes, &image);
            assert_eq!(
                imports.iter().any(|(name, _)| name == "memset"),
                call_target,
                "code proof: {architecture:?}, call={call_target}, definition={same_named_definition}"
            );
            for imported_only in [false, true] {
                let names = loaded_function_names(&file, &bytes, &reloc_imports, imported_only);
                assert_eq!(
                    names.contains("memset"),
                    call_target && !same_named_definition,
                    "name parking: {architecture:?}, call={call_target}, definition={same_named_definition}, imported={imported_only}"
                );
            }
            let defined = unambiguous_defined_function_names(&file, &bytes, &reloc_imports);
            assert!(
                !defined.contains("memset"),
                "definition collision: {architecture:?}"
            );
            let types = fmt_factory();
            let mut out = AnalysisOutput::default();
            seed_resolved_prototypes(&mut out, &imports, LIBC, &types, 1, L);
            assert_eq!(out.prototypes_at.len(), usize::from(call_target));
            if call_target {
                assert_eq!(
                    out.prototypes_at[0].1.intypes[0].metatype,
                    type_metatype::TYPE_PTR
                );
                assert_eq!(out.prototypes_at[0].0, imports[0].1);
                if same_named_definition {
                    let definition = image
                        .reloc_symbols()
                        .iter()
                        .find(|sym| !sym.undefined && sym.name.starts_with("memset"))
                        .unwrap();
                    assert_ne!(out.prototypes_at[0].0, definition.vma);
                }
            }
        }
    }
}

#[test]
fn notype_address_materialization_in_text_is_not_a_function_import() {
    use object::{
        Architecture, BinaryFormat, Endianness, RelocationFlags, SymbolFlags, SymbolScope, write,
    };
    let sparc: Vec<_> = [0x03000000u32, 0x82106000, 0x81c3e008, 0x01000000]
        .into_iter()
        .flat_map(u32::to_be_bytes)
        .collect();
    for (architecture, endian, code, relocations) in [
        (
            Architecture::Sparc,
            Endianness::Big,
            sparc,
            vec![
                (0, object::elf::R_SPARC_HI22, 0),
                (4, object::elf::R_SPARC_LO10, 0),
            ],
        ),
        (
            Architecture::X86_64,
            Endianness::Little,
            vec![0x48, 0x8d, 0x05, 0, 0, 0, 0, 0xc3],
            vec![(3, object::elf::R_X86_64_PC32, -4)],
        ),
        (
            Architecture::X86_64,
            Endianness::Little,
            vec![0x48, 0x8b, 0x05, 0, 0, 0, 0, 0xc3],
            vec![(3, object::elf::R_X86_64_GOTPCREL, -4)],
        ),
        (
            Architecture::X86_64,
            Endianness::Little,
            vec![0x48, 0x8b, 0x05, 0, 0, 0, 0, 0xc3],
            vec![(3, object::elf::R_X86_64_REX_GOTPCRELX, -4)],
        ),
    ] {
        let mut object = write::Object::new(BinaryFormat::Elf, architecture, endian);
        let text = object.section_id(write::StandardSection::Text);
        object.append_section_data(text, &code, 4);
        let target = object.add_symbol(write::Symbol {
            name: b"memset".to_vec(),
            value: 0,
            size: 0,
            kind: SymbolKind::Unknown,
            scope: SymbolScope::Dynamic,
            weak: false,
            section: write::SymbolSection::Undefined,
            flags: SymbolFlags::None,
        });
        for &(offset, r_type, addend) in &relocations {
            object
                .add_relocation(
                    text,
                    write::Relocation {
                        offset,
                        symbol: target,
                        addend,
                        flags: RelocationFlags::Elf { r_type },
                    },
                )
                .unwrap();
        }
        let bytes = object.write().unwrap();
        let file = object::File::parse(bytes.as_slice()).unwrap();
        let image =
            crate::loadimage_object::ObjectLoadImage::from_bytes_silent("address.o", &bytes)
                .unwrap();
        let (imports, reloc_imports) = loaded_import_addrs(&file, &bytes, &image);
        assert!(
            imports.is_empty(),
            "data address: {architecture:?}, {relocations:?}"
        );
        assert!(!loaded_function_names(&file, &bytes, &reloc_imports, true).contains("memset"));
    }
}

/// A type factory shaped like the x86-64 one the passes run against.
pub(super) fn fmt_factory() -> unlace_decomp::dtype::TypeFactoryImpl {
    let types = unlace_decomp::dtype::TypeFactoryImpl::new();
    types.set_default_alignment_map();
    types.set_max_basetype_size(8);
    types.setup_sizes(Some(8), 8, 4);
    types
        .set_core_type(
            "char",
            1,
            unlace_decomp::dtype::type_metatype::TYPE_INT,
            true,
        )
        .expect("char core type");
    types.cache_core_types().expect("cache core types");
    types
}

#[test]
fn variadic_format_prototype_admits_the_format_families() {
    use unlace_decomp::libctypes::LibcTypesLayout::Opaque;
    let types = fmt_factory();
    // The format slot is the LAST fixed parameter of each declaration.
    for (name, slot) in [
        ("printf", 0usize),
        ("scanf", 0),
        ("fprintf", 1),
        ("sprintf", 1),
        ("snprintf", 2),
        ("sscanf", 1),
        ("fscanf", 1),
        ("__isoc99_scanf", 0),
        ("__isoc99_sscanf", 1),
        ("__printf_chk", 1),
        ("__fprintf_chk", 2),
        ("__sprintf_chk", 3),
        ("__snprintf_chk", 4),
        ("__syslog_chk", 2),
        ("asprintf", 1),
        // The families the printf/scanf substring test never named.
        ("err", 1),
        ("errx", 1),
        ("warn", 0),
        ("warnx", 0),
        ("error", 2),
        ("syslog", 1),
    ] {
        let (pieces, got) = variadic_format_prototype(name, &types, 8, Opaque)
            .unwrap_or_else(|| panic!("{name} is a format function"));
        assert_eq!(got, slot, "{name} format slot");
        assert_eq!(
            pieces.intypes.len(),
            slot + 1,
            "{name} fixed parameter count"
        );
        assert_eq!(
            pieces.first_var_arg_slot as usize,
            slot + 1,
            "{name} vararg slot"
        );
    }
}

#[test]
fn variadic_format_prototype_refuses_everything_else() {
    use unlace_decomp::libctypes::LibcTypesLayout::Opaque;
    let types = fmt_factory();
    for name in [
        // Variadic, but the varargs are not governed by the trailing char *.
        "execlp",
        // Variadic with a non-pointer last fixed parameter.
        "open",
        "openat",
        "fcntl",
        "ioctl",
        // The `v*` forms take a va_list, not varargs.
        "vsnprintf",
        "vasprintf",
        "__vfprintf_chk",
        // Not variadic at all, and not in the tables at all.
        "puts",
        "memcpy",
        "sub_401136",
        "",
    ] {
        assert!(
            variadic_format_prototype(name, &types, 8, Opaque).is_none(),
            "{name} must not be treated as a format function"
        );
    }
}

#[test]
fn table_entries_are_well_formed() {
    // vararg slot, when set, points within or just past the fixed params.
    for (name, sig) in LIBC {
        if sig.vararg >= 0 {
            assert!(
                (sig.vararg as usize) <= sig.params.len(),
                "{name}: vararg slot {} > {} fixed params",
                sig.vararg,
                sig.params.len()
            );
        }
    }
}

#[test]
fn setlocale_signature_is_char_ptr_int_char_ptr() {
    // `char *setlocale(int category, const char *locale)`.  Curating this
    // entry is the fix for the `-O2` setlocale wrapper (gnulib
    // `setlocale_null_androidfix`): without it the call's result is an
    // untyped `undefined8`, so the wrapper's signature comes out `void`
    // instead of `char *` and the return value is lost.  Pin the shape so a
    // future edit cannot silently demote the return type back to `int`/`void`.
    let entry = LIBC.iter().find(|(n, _)| *n == "setlocale");
    let (_, sig) = entry.expect("table must know setlocale");
    assert!(matches!(sig.ret, Ty::CharPtr), "setlocale returns char *");
    assert_eq!(sig.params.len(), 2, "setlocale takes (int, const char *)");
    assert!(matches!(sig.params[0], Ty::Int), "category is int");
    assert!(
        matches!(sig.params[1], Ty::CharPtr),
        "locale is const char *"
    );
    assert_eq!(sig.vararg, -1, "setlocale is not variadic");
}

#[test]
fn ptrace_is_the_four_slot_documented_call_form() {
    // glibc DECLARES `long ptrace(enum __ptrace_request, ...)`, so a stripped
    // static image gives argument recovery nothing to work from. The four
    // fixed slots are the ones glibc's own wrapper fetches with `va_arg`.
    let (_, sig) = LIBC
        .iter()
        .find(|(n, _)| *n == "ptrace")
        .expect("table knows ptrace");
    assert!(matches!(sig.ret, Ty::Long), "ptrace returns long");
    assert_eq!(sig.params.len(), 4, "request, pid, addr, data");
    assert!(matches!(sig.params[0], Ty::Int));
    assert!(matches!(sig.params[1], Ty::Int));
    assert!(matches!(sig.params[2], Ty::VoidPtr));
    assert!(matches!(sig.params[3], Ty::VoidPtr));
    assert_eq!(
        sig.vararg, -1,
        "the fixed form is what a caller is typed against"
    );
}

#[test]
fn a_declared_name_is_answered_out_of_either_table() {
    // The declared-name lookup is what a stripped image has instead of a symbol
    // table, so it must reach BOTH tables: the imports-only restriction on the
    // measured extension is about a coincidental spelling, and an operator who
    // named the entry outright is not a coincidence.
    let types = unlace_decomp::dtype::TypeFactoryImpl::new();
    types.set_default_alignment_map();
    types.set_max_basetype_size(8);
    types.setup_sizes(Some(4), 4, 4);
    let _ = types.cache_core_types();
    let base = declared_libc_prototype(
        "ptrace",
        &types,
        1,
        unlace_decomp::libctypes::LibcTypesLayout::Opaque,
    )
    .expect("base table name");
    assert_eq!(base.name, "ptrace");
    assert_eq!(base.intypes.len(), 4);
    let ext = declared_libc_prototype(
        "read",
        &types,
        1,
        unlace_decomp::libctypes::LibcTypesLayout::Opaque,
    )
    .expect("extension table name");
    assert_eq!(ext.intypes.len(), 3, "ssize_t read(int, void *, size_t)");
    assert!(
        declared_libc_prototype(
            "sub_8049027",
            &types,
            1,
            unlace_decomp::libctypes::LibcTypesLayout::Opaque
        )
        .is_none(),
        "a name neither table knows is left alone"
    );
}

#[test]
fn fauxware_seeds_puts_printf_strcmp() {
    // The fixture's imports (puts/printf/strcmp/read/open) are present; the pass
    // must emit prototypes for the libc names it knows that are present, and
    // none for names absent from the table or the binary.
    let path = concat!(env!("CARGO_MANIFEST_DIR"), "/tests/fixtures/fauxware");
    let bytes = std::fs::read(path).expect("read fauxware fixture");
    let file = object::File::parse(bytes.as_slice()).expect("parse fauxware");
    let present = present_function_names(&file, &bytes);
    for want in ["puts", "printf", "strcmp"] {
        assert!(present.contains(want), "fauxware should import {want}");
        assert!(
            LIBC.iter().any(|(n, _)| n == &want),
            "table should know {want}"
        );
    }
}

#[test]
fn pe_present_names_include_imports_for_proto_typing() {
    // PR-10: on a PE the libc imports must be in `present_function_names` (so
    // their prototypes seed and the call args type `char *`). In the linked
    // MinGW PE `puts`/`printf` are in the COFF symtab; the resolver also names
    // them via the IAT — either way they are present, so `printf("%d\n", …)`
    // can render the literal.
    let path = concat!(env!("CARGO_MANIFEST_DIR"), "/tests/fixtures/pe_imports.exe");
    let bytes = std::fs::read(path).expect("read pe_imports.exe");
    let file = object::File::parse(bytes.as_slice()).expect("parse pe_imports.exe");
    assert_eq!(file.format(), object::BinaryFormat::Pe, "fixture is a PE");
    let present = present_function_names(&file, &bytes);
    for want in ["puts", "printf"] {
        assert!(
            present.contains(want),
            "PE present-names must include {want}: {present:?}"
        );
        assert!(
            LIBC.iter().any(|(n, _)| n == &want),
            "table should know {want}"
        );
    }
}

#[test]
fn stripped_pe_present_names_from_resolver_only() {
    // The IAT-resolver half: in a *stripped* PE there is no COFF symtab `puts`,
    // so the import names come purely from `resolve_imports`. They must still
    // be present so the prototype seeds (the stripped-binary proof).
    let path = concat!(
        env!("CARGO_MANIFEST_DIR"),
        "/tests/fixtures/pe_imports_stripped.exe"
    );
    let bytes = std::fs::read(path).expect("read pe_imports_stripped.exe");
    let file = object::File::parse(bytes.as_slice()).expect("parse stripped PE");
    let present = present_function_names(&file, &bytes);
    assert!(
        present.contains("puts"),
        "stripped PE must name `puts` via the IAT: {present:?}"
    );
}

#[test]
fn pe_import_prototype_is_seeded_at_iat_and_veneer_but_not_export() {
    let path = concat!(
        env!("CARGO_MANIFEST_DIR"),
        "/tests/fixtures/libcsigs_pe_x86_64.exe"
    );
    let bytes = std::fs::read(path).expect("read duplicate-name PE fixture");
    let file = object::File::parse(bytes.as_slice()).expect("parse duplicate-name PE fixture");
    let all = crate::loader::format::resolve_imports(&file, &bytes);
    let memcmp_all: Vec<(u64, crate::loader::format::ImportSymKind)> = all
        .iter()
        .filter(|sym| sym.name == b"memcmp")
        .map(|sym| (sym.addr, sym.kind))
        .collect();
    assert_eq!(
        memcmp_all,
        vec![
            (0x140002050, crate::loader::format::ImportSymKind::Import),
            (0x140001080, crate::loader::format::ImportSymKind::Import),
            (0x140001060, crate::loader::format::ImportSymKind::Export),
        ],
        "the format resolver must preserve import/export provenance"
    );

    let imports = resolved_import_addrs(&file, &bytes);
    let memcmp: Vec<u64> = imports
        .iter()
        .filter(|(name, _)| name == "memcmp")
        .map(|(_, addr)| *addr)
        .collect();
    assert_eq!(
        memcmp,
        vec![0x140002050, 0x140001080],
        "only the imported IAT and veneer are eligible for address locking"
    );

    let types = unlace_decomp::dtype::TypeFactoryImpl::new();
    types.set_default_alignment_map();
    types.set_max_basetype_size(8);
    types.setup_sizes(Some(8), 8, 4);
    types
        .set_core_type("char", 1, type_metatype::TYPE_INT, true)
        .expect("install char core type");
    types.cache_core_types().expect("cache core types");
    let mut out = AnalysisOutput::default();
    let imported = loaded_function_names(&file, &bytes, &[], true);
    assert!(
        !imported.contains("memcmp"),
        "a same-named resolver export makes global by-name parking ambiguous"
    );
    seed_named_prototypes(&mut out, &imported, libcsigs::LIBC_EXT, &types, 1, L, false);
    seed_resolved_prototypes(&mut out, &imports, libcsigs::LIBC_EXT, &types, 1, L);
    let seeded: Vec<(u64, usize)> = out
        .prototypes_at
        .iter()
        .filter(|(_, pieces)| pieces.name == "memcmp")
        .map(|(addr, pieces)| (*addr, pieces.intypes.len()))
        .collect();
    assert_eq!(
        seeded,
        vec![(0x140002050, 3), (0x140001080, 3)],
        "the signature belongs on both import targets and not the same-named export"
    );
    assert!(
        out.prototypes.iter().all(|pieces| pieces.name != "memcmp"),
        "no global memcmp prototype may be parked where it could type the export"
    );
}

#[test]
fn base_by_name_matching_suppresses_only_import_definition_collisions() {
    let mut candidates = HashSet::from([
        "puts".to_string(),
        "printf".to_string(),
        "strcmp".to_string(),
    ]);
    let imported = HashSet::from(["puts".to_string(), "printf".to_string()]);
    let defined = HashSet::from(["puts".to_string(), "strcmp".to_string()]);
    retain_unambiguous_names(&mut candidates, &imported, &defined);

    let types = unlace_decomp::dtype::TypeFactoryImpl::new();
    types.set_default_alignment_map();
    types.set_max_basetype_size(8);
    types.setup_sizes(Some(8), 8, 4);
    types
        .set_core_type("char", 1, type_metatype::TYPE_INT, true)
        .expect("install char core type");
    types.cache_core_types().expect("cache core types");
    let mut out = AnalysisOutput::default();
    seed_named_prototypes(&mut out, &candidates, LIBC, &types, 1, L, false);
    let names: HashSet<&str> = out
        .prototypes
        .iter()
        .map(|pieces| pieces.name.as_str())
        .collect();

    assert!(
        !candidates.contains("puts"),
        "same-named import and definition cannot safely share a global prototype"
    );
    assert!(
        !names.contains("puts"),
        "the base pass must not park the conflicting name"
    );
    assert!(
        names.contains("printf"),
        "import-only compatibility is preserved"
    );
    assert!(
        names.contains("strcmp"),
        "defined-only base matching is preserved"
    );
}

#[test]
fn base_table_imports_keep_name_matching_and_gain_address_keys() {
    let path = concat!(
        env!("CARGO_MANIFEST_DIR"),
        "/tests/fixtures/pe_imports_stripped.exe"
    );
    let bytes = std::fs::read(path).expect("read stripped PE fixture");
    let file = object::File::parse(bytes.as_slice()).expect("parse stripped PE fixture");
    let present = loaded_function_names(&file, &bytes, &[], false);
    assert!(
        present.contains("puts"),
        "the compatible by-name match remains available"
    );

    let imports = resolved_import_addrs(&file, &bytes);
    let types = unlace_decomp::dtype::TypeFactoryImpl::new();
    types.set_default_alignment_map();
    types.set_max_basetype_size(8);
    types.setup_sizes(Some(8), 8, 4);
    types
        .set_core_type("char", 1, type_metatype::TYPE_INT, true)
        .expect("install char core type");
    types.cache_core_types().expect("cache core types");
    let mut out = AnalysisOutput::default();
    seed_resolved_prototypes(&mut out, &imports, LIBC, &types, 1, L);
    let mut seeded: Vec<u64> = out
        .prototypes_at
        .iter()
        .filter(|(_, pieces)| pieces.name == "puts")
        .map(|(addr, _)| *addr)
        .collect();
    seeded.sort_unstable();
    assert_eq!(
        seeded,
        vec![0x140007240, 0x14000d33c],
        "the base-table signature must reach both the puts veneer and IAT slot"
    );
}

#[test]
fn macho_present_names_include_stub_import() {
    // Mach-O: the `printf` import is named by the `__stubs` indirect-symbol
    // walk (not a `SymbolKind::Text` entry), so the resolver-union is what
    // makes it present for prototype typing.
    let path = concat!(env!("CARGO_MANIFEST_DIR"), "/tests/fixtures/macho_imports");
    let bytes = std::fs::read(path).expect("read macho_imports");
    let file = object::File::parse(bytes.as_slice()).expect("parse macho_imports");
    assert_eq!(
        file.format(),
        object::BinaryFormat::MachO,
        "fixture is Mach-O"
    );
    let present = present_function_names(&file, &bytes);
    assert!(
        present.contains("printf"),
        "Mach-O must name `printf` via __stubs: {present:?}"
    );
}
