use super::*;

// --- pure predicate tests (hermetic, no fixture) ---

#[test]
fn comment_rust_vs_gcc_vs_clang() {
    // A real rustc `.comment` blob (NUL-delimited records, exactly the shape
    // `readelf -p .comment` shows on a rustc binary).
    let rust_comment =
        b"rustc version 1.90.0 (1159e78c4 2025-09-14)\0Linker: LLD 20.1.8\0".as_slice();
    assert!(comment_indicates_rust(rust_comment));

    // GCC / clang `.comment`s must NOT read as Rust.
    let gcc = b"GCC: (Ubuntu 11.4.0-1ubuntu1~22.04.3) 11.4.0\0".as_slice();
    assert!(!comment_indicates_rust(gcc));
    assert!(comment_contains(gcc, b"GCC: "));

    let clang = b"clang version 18.1.3 (1ubuntu1)\0".as_slice();
    assert!(!comment_indicates_rust(clang));
    assert!(comment_contains(clang, b"clang version "));

    // empty / no-comment is not Rust.
    assert!(!comment_indicates_rust(b""));
}

#[test]
fn rust_mangled_name_recognition() {
    // legacy `_ZN...17h<hex16>E`
    assert!(is_rust_mangled(
        "_ZN4core9panicking5panic17h0123456789abcdefE"
    ));
    assert!(is_rust_mangled(
        "_ZN5nostd1m12rusty_helper17h76f46bb3af543e7bE"
    ));
    // v0 `_R`
    assert!(is_rust_mangled("_RNvCs1234_4core5panic"));
    // a plain C++ `_ZN...` (no `17h<hex>E` hash) is NOT Rust
    assert!(!is_rust_mangled("_ZN3foo3Bar3bazEi"));
    assert!(!is_rust_mangled("_ZSt9terminatev"));
    // not a mangled name at all
    assert!(!is_rust_mangled("main"));
    assert!(!is_rust_mangled("puts"));
    // a wrong-length hash tail is rejected
    assert!(!is_rust_mangled("_ZN4core5panic17hdeadE"));
    // v0 requires the LEADING UNDERSCORE. Without it the prefix test
    // degrades to "starts with `R`", and an ordinary C program that imports
    // OpenSSL is claimed to be Rust -- which made `--language auto` render
    // /usr/bin/ncat as Rust.
    assert!(!is_rust_mangled("RAND_bytes"));
    assert!(!is_rust_mangled("RSA_new"));
    assert!(!is_rust_mangled("RAND_bytes@OPENSSL_3.0.0"));
    assert!(!is_rust_mangled("Rmake"));
    assert!(!is_rust_mangled("R"));
    // the platform double underscore still counts
    assert!(is_rust_mangled("__RNvCs1234_4core5panic"));
    // a bare `_R` with nothing after it is not a symbol
    assert!(!is_rust_mangled("_R"));
}

/// The v0 arm parses the grammar. `_R` is also the start of every Mach-O C
/// symbol whose name begins with `R`, so the prefix alone claimed `_Run`,
/// `_Read` and `_RC4_set_key` for rustc — and one such symbol re-languages a
/// whole C program to Rust.
#[test]
fn v0_names_must_parse_as_v0_paths() {
    // a path tag is one of `C M X Y N I B`; anything else ends it.
    for c_name in [
        "_Run",
        "_Read",
        "_Runtime",
        "_Rename",
        "_RSA_new",
        "_RAND_bytes",
        "_Rabbit",
    ] {
        assert!(
            !is_rust_mangled(c_name),
            "{c_name} is a C name, not a v0 symbol"
        );
    }
    // `C` then a digit LOOKS like a crate-root identifier, so the tag alone is
    // not enough: `RC4_set_key` declares a 4-byte crate named `set_` and then
    // leaves `key` over, which is no instantiating-crate path.
    assert!(!is_rust_mangled("_RC4_set_key"));
    assert!(!is_rust_mangled("_RC2_key"));
    // real v0 symbols, including a generic instantiation.
    assert!(is_rust_mangled("_RNvCs1234_4core5panic"));
    assert!(is_rust_mangled("_RINvNtC3std3mem8align_ofdE"));
    assert!(is_rust_mangled("_RNvNtCs1234_4core3fmt5write"));
}

/// The detector knows the format, and on Mach-O every symbol carries a
/// platform underscore — so rustc's v0 symbols read `__R…` there and a
/// single-underscore `_R…` is a C name however well it parses.
#[test]
fn macho_needs_the_platform_underscore_for_v0() {
    let v0 = "_RNvCs1234_4core5panic";
    assert!(is_rust_mangled_in(v0, BinaryFormat::Elf));
    assert!(is_rust_mangled_in(v0, BinaryFormat::Pe));
    assert!(!is_rust_mangled_in(v0, BinaryFormat::MachO));
    // the Mach-O spelling of that same symbol.
    let macho_v0 = "__RNvCs1234_4core5panic";
    assert!(is_rust_mangled_in(macho_v0, BinaryFormat::MachO));
    assert!(is_rust_mangled_in(macho_v0, BinaryFormat::Elf));
    // legacy is unaffected by the format.
    let legacy = "_ZN4core9panicking5panic17h0123456789abcdefE";
    for f in [BinaryFormat::Elf, BinaryFormat::Pe, BinaryFormat::MachO] {
        assert!(is_rust_mangled_in(legacy, f));
    }
}

#[test]
fn swift_section_predicate() {
    // Mach-O, ELF and PE spellings of the Swift 5 metadata namespace.
    for name in [
        "__swift5_types",
        "__swift5_proto",
        "swift5_typeref",
        "swift5_fieldmd",
        ".sw5tymd",
        ".sw5prt",
    ] {
        assert!(
            swift_section_present([".text", name].iter().copied()),
            "{name}"
        );
    }
    assert!(!swift_section_present(
        [".text", ".comment", ".go.buildinfo"].iter().copied()
    ));
    assert!(!swift_section_present(std::iter::empty()));
    // A name merely containing (not opening) the namespace is not a marker.
    assert!(!swift_section_present(
        [".debug_swift5_typeref"].iter().copied()
    ));
}

#[test]
fn swift_mangled_name_recognition() {
    // Swift 5 scheme, ELF/PE (`$s…`) and Mach-O (`_$s…`) spellings, with a
    // module-name length, a known-type shortcut, and the stdlib contraction.
    for name in [
        "$s4main5helloyyF",
        "_$s4main5helloyyF",
        "$ss5printyypd_tF",
        "$sSS7cStringSSSPys4Int8VG_tcfC",
        "_$S4main5helloyyF",
        // Swift 4 scheme.
        "_T04main5helloyyF",
        "__T04main5helloyyF",
        // ObjC runtime type names (Swift 3 scheme).
        "_TtC6Sample3Foo",
        "_TtCC6Sample5Outer5Inner",
        "_TtP6Sample5Proto_",
        "_TtGC7SwiftUI19UIHostingControllerVVS_7TabItem8RootView_",
        "_TtCs12_SwiftObject",
    ] {
        assert!(is_swift_mangled(name), "{name} is Swift-mangled");
    }
    // Assembler locals, plain C names, and `$`/`_T0`/`_Tt` with no mangling body.
    for name in [
        "$LN3",
        "_$LN3",
        "main",
        "_Runtime",
        "$",
        "_T0",
        "_T0mumble",
        "_RNvCs1234_4core5panic",
        "_Tt",
        "_TtX",
        "_Ttable",
    ] {
        assert!(!is_swift_mangled(name), "{name} is not Swift-mangled");
    }
}

/// A synthetic ELF carrying one `swift5_` metadata section detects as Swift,
/// and the same image without it stays Unknown — the hermetic analog of the
/// fixture-backed Rust/Go tests (no Swift toolchain exists on this host).
#[test]
fn detects_swift_on_synthetic_elf_metadata_section() {
    use object::write::Object as WObject;
    let build = |with_swift: bool| -> Vec<u8> {
        let mut obj = WObject::new(
            object::BinaryFormat::Elf,
            object::Architecture::X86_64,
            object::Endianness::Little,
        );
        let text = obj.add_section(vec![], b".text".to_vec(), object::SectionKind::Text);
        obj.append_section_data(text, &[0xc3], 1);
        if with_swift {
            let s = obj.add_section(
                vec![],
                b"swift5_typeref".to_vec(),
                object::SectionKind::ReadOnlyData,
            );
            obj.append_section_data(s, b"\x00", 1);
        }
        obj.write().expect("write synthetic ELF")
    };
    let swift = build(true);
    let file = object::File::parse(swift.as_slice()).expect("parse");
    assert_eq!(detect_compiler(&file, &swift), Compiler::Swift);
    assert!(detect_compiler(&file, &swift).is_swift());
    let plain = build(false);
    let file = object::File::parse(plain.as_slice()).expect("parse");
    assert_eq!(detect_compiler(&file, &plain), Compiler::Unknown);
}

/// The forced-language mapping both ways: what `UNLACE_SOURCELANG` forces and
/// what the engine fact records (the env read itself is covered end-to-end
/// by the `tests/cli` probes — no process-global mutation here).
#[test]
fn forced_language_round_trips_to_compiler_and_source_lang() {
    use unlace_decomp::sourcelang::SourceLang;
    for (lang, compiler) in [
        (SourceLang::C, Compiler::Gcc),
        (SourceLang::Rust, Compiler::Rustc),
        (SourceLang::Go, Compiler::Go),
        (SourceLang::Swift, Compiler::Swift),
    ] {
        assert_eq!(Compiler::from_forced_lang(lang), compiler);
        assert_eq!(compiler.to_source_lang(), lang);
    }
    // The toolchain conveniences collapse onto C; Unknown stays itself.
    assert_eq!(Compiler::Clang.to_source_lang(), SourceLang::C);
    assert_eq!(Compiler::Unknown.to_source_lang(), SourceLang::Unknown);
}

#[test]
fn golang_section_predicate() {
    assert!(golang_section_present(
        [".text", ".go.buildinfo", ".symtab"].iter().copied()
    ));
    assert!(golang_section_present(
        [".note.go.buildid", ".text"].iter().copied()
    ));
    assert!(!golang_section_present(
        [".text", ".comment"].iter().copied()
    ));
    assert!(!golang_section_present(std::iter::empty()));
}

#[test]
fn rodata_signature_scan() {
    // a `.rodata`-shaped blob carrying `/rustc/` must read as Rust.
    let blob = b"....hello/rustc/1.90.0/library/core....".as_slice();
    assert!(RUST_SIGNATURES.iter().any(|s| contains_subslice(blob, s)));
    assert!(contains_subslice(blob, b"/rustc/"));
    assert!(!contains_subslice(b"no rust here", b"RUST_BACKTRACE"));
    // empty-needle / oversize-needle edge cases
    assert!(contains_subslice(b"x", b""));
    assert!(!contains_subslice(b"x", b"longer"));
}

#[test]
fn rust_noreturn_list_parses_with_wildcards() {
    let text = rust_noreturn_list();
    // sanity: the vendored list carries the headline panic/abort wildcards.
    assert!(text.contains("ZN4core9panicking5panic17h*"));
    assert!(text.contains("ZN5alloc5alloc18handle_alloc_error17h*"));
    assert!(text.contains("rust_begin_unwind"));
}

#[test]
fn golang_noreturn_list_carries_runtime_names() {
    let text = golang_noreturn_list();
    // sanity: the vendored Golang list carries the headline runtime no-return
    // names (all exact, dotted, no `*` wildcards).
    for want in [
        "runtime.gopanic",
        "runtime.goPanicIndex",
        "runtime.goexit.abi0",
        "runtime.fatalthrow",
        "runtime.throw",
        "runtime.abort",
        "runtime.sigpanic",
    ] {
        assert!(text.contains(want), "Golang list missing {want}");
    }
    // it is NOT the Rust list (no `*` wildcards / no `ZN…panic` forms).
    assert!(!text.contains("ZN4core9panicking5panic17h*"));
}

// --- fixture-backed tests (the real vendored rust binary) ---

fn fixture(name: &str) -> Vec<u8> {
    let path = format!("{}/tests/fixtures/{}", env!("CARGO_MANIFEST_DIR"), name);
    std::fs::read(&path).unwrap_or_else(|e| panic!("read fixture {name}: {e}"))
}

#[test]
fn detects_rustc_on_rust_fixture() {
    let bytes = fixture("rust_hello_x86_64");
    let file = object::File::parse(bytes.as_slice()).expect("parse rust fixture");
    assert_eq!(detect_compiler(&file, &bytes), Compiler::Rustc);
    assert!(detect_compiler(&file, &bytes).is_rust());
    // both the `.comment` path and the mangled-symbol path fire on this fixture.
    let comment = file
        .section_by_name(".comment")
        .and_then(|s| s.data().ok())
        .unwrap_or_default();
    assert!(comment_indicates_rust(comment), ".comment rustc path");
    assert!(symbols_indicate_rust(&file), "mangled-symbol path");
}

#[test]
fn detects_gcc_on_c_fixtures() {
    for f in ["fauxware", "cpp_mangled_x86_64"] {
        let bytes = fixture(f);
        let file = object::File::parse(bytes.as_slice()).expect("parse C fixture");
        let c = detect_compiler(&file, &bytes);
        assert_eq!(c, Compiler::Gcc, "{f} should detect as Gcc");
        assert!(!c.is_rust(), "{f} must not detect as Rust");
        assert!(!c.is_golang(), "{f} must not detect as Go");
    }
}

// --- multi-format detection (design §5.3 / §8 PR-14) ---

/// PE: the MinGW `pe_imports.exe` carries `GCC: (GNU) …` records in `.rdata`
/// (MinGW emits no `.comment` *section* in a PE), so it detects as `Gcc`.
#[test]
fn detects_gcc_on_mingw_pe_fixture() {
    let bytes = fixture("pe_imports.exe");
    let file = object::File::parse(bytes.as_slice()).expect("parse PE fixture");
    assert_eq!(file.format(), BinaryFormat::Pe, "fixture must be a PE");
    let c = detect_compiler(&file, &bytes);
    assert_eq!(
        c,
        Compiler::Gcc,
        "MinGW PE should detect as Gcc (.rdata GCC: record)"
    );
    assert!(!c.is_rust());
    assert!(!c.is_golang());
    // It is specifically the `GCC:` toolchain path — no `Rich` header on a MinGW PE.
    assert_eq!(
        detect_rich_header(&bytes),
        RichVerdict::None,
        "MinGW PE has no Rich header"
    );
}

/// Mach-O: the x86-64 and arm64 `macho_imports` fixtures carry an
/// `LC_BUILD_VERSION` (PLATFORM_MACOS) load command, so they detect as `Clang`
/// (Apple platform ⇒ clang/LLVM toolchain).
#[test]
fn detects_clang_on_macho_fixtures() {
    for f in ["macho_imports", "macho_imports_arm64"] {
        let bytes = fixture(f);
        let file = object::File::parse(bytes.as_slice()).expect("parse Mach-O fixture");
        assert_eq!(file.format(), BinaryFormat::MachO, "{f} must be a Mach-O");
        let c = detect_compiler(&file, &bytes);
        assert_eq!(
            c,
            Compiler::Clang,
            "{f} should detect as Clang (LC_BUILD_VERSION)"
        );
        assert!(!c.is_rust());
        assert!(!c.is_golang());
        // the load-command fingerprint is what fires.
        assert!(
            macho_build_version_is_apple(&bytes),
            "{f}: LC_BUILD_VERSION present"
        );
    }
}

/// Mach-O: a stripped Rust image has no mangled symbol and no toolchain
/// record; rustc's `/rustc/<hash>/` panic paths in `__cstring` still name it.
#[test]
fn detects_rustc_from_macho_cstring_signature() {
    let bytes = fixture("macho_rust_panicloc_arm64.o");
    let file = object::File::parse(bytes.as_slice()).expect("parse Mach-O fixture");
    assert_eq!(file.format(), BinaryFormat::MachO);
    assert!(!symbols_indicate_rust(&file));
    assert!(rodata_indicates_rust(&file));
    assert_eq!(detect_compiler(&file, &bytes), Compiler::Rustc);
}

/// The Mach-O `macho_min.o` object also carries `LC_BUILD_VERSION`.
#[test]
fn detects_clang_on_macho_object() {
    let bytes = fixture("macho_min.o");
    let file = object::File::parse(bytes.as_slice()).expect("parse Mach-O object");
    assert_eq!(detect_compiler(&file, &bytes), Compiler::Clang);
}

/// The one-pass PE record scan reports exactly what the per-record predicates
/// report over the concatenated stream, including a record that runs across
/// the `.comment`/`.rdata` seam, a non-ASCII lead and a non-UTF-8 record.
#[test]
fn toolchain_record_scan_matches_per_record_predicates() {
    let blobs: [&[u8]; 14] = [
        b"",
        b"\0",
        b"GCC: (GNU) 13.2\0",
        b" \t\nclang version 17.0.1\0",
        b"rustc version 1.80.0 (abc)\0",
        b"GC",
        b"C: (MinGW) 12\0tail",
        b"\xc2\xa0GCC: (nbsp lead)\0",
        b"GCC: \xff bad utf8\0",
        b"GCC: ",
        b"xyz\0clang",
        b" version 9\0\0GCC: x",
        b"rustc",
        b"\x0b\x0cplain data\0r\0c\0G\0",
    ];
    for first in blobs {
        for second in blobs {
            let joined = [first, second].concat();
            let expected = ToolchainRecords {
                rust: comment_indicates_rust(&joined),
                clang: comment_contains(&joined, b"clang version "),
                gcc: comment_contains(&joined, b"GCC: "),
            };
            assert_eq!(
                ToolchainRecords::scan_joined(first, second),
                expected,
                "{first:?} + {second:?}"
            );
        }
    }
}

/// Hermetic PE `Rich`-header parsing: a synthetic DOS-stub + `DanS…@comp.id…Rich`
/// block decodes to MSVC, and the clang-cl product-id variant to Clang. Covers
/// the MSVC path without an `cl.exe` fixture (none buildable on Linux).
#[test]
fn rich_header_msvc_vs_clang() {
    // MSVC: a single (@comp.id, count) pair with a non-LLVM product id.
    assert_eq!(
        detect_rich_header(&synth_pe_with_rich(&[0x00FF])),
        RichVerdict::Msvc
    );
    // clang-cl: a product id in the LLVM set.
    assert_eq!(
        detect_rich_header(&synth_pe_with_rich(&[0x0105])),
        RichVerdict::Clang
    );
    assert_eq!(
        detect_rich_header(&synth_pe_with_rich(&[0x00FF, 0x0103])),
        RichVerdict::Clang
    );
    // No `Rich` block at all ⇒ None.
    assert_eq!(
        detect_rich_header(b"MZ\x00\x00 not a real pe, no rich"),
        RichVerdict::None
    );
    // a stray `"Rich"` substring without a decodable `DanS` start ⇒ None.
    let mut junk = vec![0u8; 0x80];
    junk[0x3c..0x40].copy_from_slice(&0x80u32.to_le_bytes());
    junk[0x40..0x44].copy_from_slice(b"Rich"); // beyond e_lfanew window → ignored anyway
    assert_eq!(detect_rich_header(&junk), RichVerdict::None);
}

/// The format-neutral Rust-symbol path fires regardless of format: a synthetic
/// in-memory object exercising `is_rust_mangled` over symbol names is covered
/// by `rust_mangled_name_recognition`; here we assert the *dispatch* honours a
/// Rust signal even on a non-ELF format via `detect_compiler_generic`'s symbol
/// scan (a COFF object with a Rust-mangled symbol ⇒ `Rustc`). We use the
/// vendored `coff_obj.obj` to confirm `Unknown` (no Rust symbols), proving the
/// generic arm does not false-positive.
#[test]
fn coff_object_stays_unknown_without_rust_signal() {
    let bytes = fixture("coff_obj.obj");
    let file = object::File::parse(bytes.as_slice()).expect("parse COFF object");
    // A plain C COFF object carries no Rust/Go signal ⇒ Unknown (no output change).
    assert_eq!(detect_compiler(&file, &bytes), Compiler::Unknown);
}

/// Build a minimal PE buffer carrying a valid `Rich` header from the given
/// product ids. Layout: DOS header with `e_lfanew = 0x80`, then a `DanS`
/// start marker, the `(@comp.id, count)` pairs, and the `Rich` end tag + XOR
/// key — all XOR-obfuscated with a fixed key (as MSVC's linker does).
fn synth_pe_with_rich(prodids: &[u16]) -> Vec<u8> {
    let key: u32 = 0xDEADBEEF;
    // The de-obfuscated stream: DanS, three zero pad dwords (MSVC convention),
    // then (comp_id, count) pairs.
    let mut clear: Vec<u32> = vec![RICH_BEGIN, 0, 0, 0];
    for &pid in prodids {
        clear.push(((pid as u32) << 16) | 0x1234); // @comp.id = (prodid<<16)|build
        clear.push(1); // count
    }
    // Obfuscate every dword with the key.
    let mut block: Vec<u8> = Vec::new();
    for w in &clear {
        block.extend_from_slice(&(w ^ key).to_le_bytes());
    }
    // Append the `Rich` end tag (clear) + the XOR key (clear).
    block.extend_from_slice(RICH_END);
    block.extend_from_slice(&key.to_le_bytes());

    // Assemble: 0x40-byte DOS header (e_lfanew at 0x3c), then the Rich block,
    // padded so e_lfanew sits past it.
    let e_lfanew: u32 = (0x40 + block.len() as u32 + 7) & !7; // 8-byte aligned
    let mut buf = vec![0u8; e_lfanew as usize + 8];
    buf[0] = b'M';
    buf[1] = b'Z';
    buf[0x3c..0x40].copy_from_slice(&e_lfanew.to_le_bytes());
    buf[0x40..0x40 + block.len()].copy_from_slice(&block);
    buf
}
