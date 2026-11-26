use super::*;

fn fixture(name: &str) -> Vec<u8> {
    let path = format!("{}/tests/fixtures/{}", env!("CARGO_MANIFEST_DIR"), name);
    std::fs::read(&path).unwrap_or_else(|_| panic!("read fixture {path}"))
}

/// `buf_dup_char` returns early and sets up its frame after the return, so a
/// MIPS pattern pair matches at `.text+0x10`, inside the symbol's 0x74-byte
/// extent: that is the function's own code, not a start.
#[test]
fn a_prologue_inside_a_sized_symbol_is_no_start() {
    for name in ["funcstart_shrinkwrap_el.o", "funcstart_shrinkwrap_eb.o"] {
        let bytes = fixture(name);
        let file = object::File::parse(bytes.as_slice()).expect("parse");
        let set =
            patterns::for_arch(file.architecture(), file.is_little_endian()).expect("MIPS set");
        let text = file.section_by_name(".text").expect(".text");
        assert!(
            set.scan(text.address(), text.data().unwrap())
                .contains(&0x10),
            "{name}: the pair matches"
        );
        assert_eq!(full_pattern_starts(&file), Vec::<u64>::new(), "{name}");
    }
    let bodies = [(0x10, 0x20), (0x18, 0x30)];
    assert!(!inside_body(&bodies, 0x10), "an extent's own start");
    assert!(
        inside_body(&bodies, 0x11) && inside_body(&bodies, 0x2f),
        "strictly inside"
    );
    assert!(
        !inside_body(&bodies, 0x30) && !inside_body(&bodies, 0x8),
        "outside"
    );
}

/// A Mach-O `LC_MAIN` states its entry as a `__TEXT`-relative FILE OFFSET, so
/// `object`'s `entry()` answers `0x5b0` where the function is at
/// `0x1000005b0`. `image_entry_vma` rebases it; the stripped twin proves the
/// answer comes from the load command and not from a symbol.
#[test]
fn image_entry_vma_rebases_a_macho_lc_main() {
    for name in ["macho_imports", "macho_stripped_main"] {
        let bytes = fixture(name);
        let file = object::File::parse(bytes.as_slice()).expect("parse");
        assert_eq!(
            file.entry(),
            0x5b0,
            "{name}: object reports the raw entryoff"
        );
        assert_eq!(image_entry_vma(&file, &bytes), Some(0x1000005b0), "{name}");
    }
    let bytes = fixture("macho_imports_arm64");
    let file = object::File::parse(bytes.as_slice()).expect("parse arm64");
    assert_eq!(image_entry_vma(&file, &bytes), Some(0x10000056c));
}

/// Every other format already states a VMA, so the rebase must not fire:
/// an ELF `e_entry` (including the ARM Thumb-odd spelling) and a PE
/// `AddressOfEntryPoint` are passed through byte-for-byte.
#[test]
fn image_entry_vma_passes_through_a_vma_entry() {
    for name in ["cet_pie_x86_64", "entrymain_arm", "fauxware"] {
        let bytes = fixture(name);
        let file = object::File::parse(bytes.as_slice()).expect("parse");
        assert_eq!(image_entry_vma(&file, &bytes), Some(file.entry()), "{name}");
    }
}

/// A relocatable declares no entry, and `0` is a real address there — so it
/// is reported as absent rather than as `0x0`. A Mach-O `.o` is the case that
/// would break if the rebase were applied unconditionally by format.
#[test]
fn image_entry_vma_reports_no_entry_as_none() {
    for name in ["macho_min.o", "macho_dwarf.o"] {
        let bytes = fixture(name);
        let file = object::File::parse(bytes.as_slice()).expect("parse");
        assert_eq!(file.entry(), 0, "{name}");
        assert_eq!(image_entry_vma(&file, &bytes), None, "{name}");
    }
}

/// `bytes` with the ELF section table pointed at garbage -- the shape the
/// loader now tolerates (`crate::loader::elf_shdr`), recovered back into a
/// parseable, section-less image.
fn without_sections(bytes: Vec<u8>) -> Vec<u8> {
    let mut broken = bytes;
    broken[40..48].copy_from_slice(&0xdeadu64.to_le_bytes()); // ELF64 e_shoff
    let (recovered, note) = crate::loader::elf_shdr::tolerate_unusable_section_table(broken);
    assert!(
        note.is_some(),
        "the fixture must look corrupt to the repair"
    );
    recovered
}

// -- The section-less fallback (a corrupt or stripped section table) --------

/// With no section table there are no executable sections, so the "is this
/// plausible code?" oracle used to reject every candidate -- including the
/// image's own entry point -- and discovery returned nothing on a file the
/// loader had mapped perfectly well.
#[test]
fn section_less_image_falls_back_to_its_load_segments() {
    let bytes = without_sections(fixture("fauxware"));
    let file = object::File::parse(bytes.as_slice()).expect("recovered image parses");
    assert_eq!(
        file.sections().count(),
        0,
        "the fixture must present no sections"
    );

    let execs = executable_sections(&file);
    assert!(
        !execs.is_empty(),
        "the PF_X PT_LOAD must stand in for the missing sections"
    );
    assert!(
        in_executable_section(&execs, file.entry()),
        "e_entry {:#x} must be plausible code in {:#x?}",
        file.entry(),
        execs
            .iter()
            .map(|&(lo, hi, _)| (lo, hi))
            .collect::<Vec<_>>()
    );

    let entries = collect_entries(&file, &bytes);
    assert!(
        entries.contains(&file.entry()),
        "discovery must seed the entry point, got {entries:#x?}"
    );
}

/// The fallback is reached only when the section table is absent, so an image
/// that has one keeps exactly the ranges it had.
#[test]
fn sectioned_image_keeps_its_section_ranges() {
    let bytes = fixture("fauxware");
    let file = object::File::parse(bytes.as_slice()).expect("parse fauxware");
    let execs = executable_sections(&file);
    let segs = executable_segments(&file);
    assert!(!execs.is_empty());
    assert_ne!(
        execs
            .iter()
            .map(|&(lo, hi, _)| (lo, hi))
            .collect::<Vec<_>>(),
        segs.iter().map(|&(lo, hi, _)| (lo, hi)).collect::<Vec<_>>(),
        "the two views differ, so the healthy path is demonstrably not the fallback"
    );
}

/// A UPX image is section-less exactly like a stripped one, so the fallback
/// has to tell them apart: taking it would make the stub's own decompressor
/// five discovered functions and displace the "image appears UPX-packed" hint
/// that a zero-discovery run exists to give.
#[test]
fn packed_image_does_not_take_the_segment_fallback() {
    let bytes = fixture("upx_packed_x86_64");
    let file = object::File::parse(bytes.as_slice()).expect("parse upx fixture");
    assert!(
        file.sections().next().is_none(),
        "the fixture is section-less, like a stripped one"
    );
    let segs = executable_segments(&file);
    assert!(!segs.is_empty(), "with a PF_X PT_LOAD to be tempted by");
    assert!(is_packer_stub(&segs), "but that segment is a UPX stub");
    assert!(
        executable_sections(&file).is_empty(),
        "so it reports no executable ranges"
    );
    assert!(
        collect_entries(&file, &bytes).is_empty(),
        "and discovery still finds nothing"
    );
}

/// A relocatable object has no program headers and a COFF object's segments
/// are not ELF ones, so neither can reach the fallback.
#[test]
fn segment_fallback_is_empty_without_elf_program_headers() {
    for name in ["arm_thumb_le32.o", "coff_obj.obj"] {
        let bytes = fixture(name);
        let file = object::File::parse(bytes.as_slice()).expect("parse object");
        assert!(
            executable_segments(&file).is_empty(),
            "{name} must not reach the PT_LOAD fallback"
        );
    }
}

// -- Oracle 3: .eh_frame FDE starts (fauxware, the s1-eh-frame headline) ---

#[test]
fn eh_frame_starts_fauxware() {
    let bytes = fixture("fauxware");
    let file = object::File::parse(bytes.as_slice()).expect("parse fauxware");
    let starts = scan_eh_frame_starts(&file);
    // readelf --debug-dump=frames ground truth.
    for want in [
        0x400500u64,
        0x400664,
        0x4006ed,
        0x4006fd,
        0x40071d,
        0x4007e0,
        0x400870,
    ] {
        assert!(
            starts.contains(&want),
            "FDE start {want:#x} missing from {starts:#x?}"
        );
    }
    // The known funcsyms (authenticate=0x400664, accepted=0x4006ed,
    // rejected=0x4006fd, main=0x40071d) are a subset — the oracle property.
    assert!(!starts.contains(&0), "no spurious 0 start");
}

// First FDE decode by hand: pcBegin field at vma 0x400990 holds `70 fb ff ff`
// = -1168 (sdata4), pcrel: 0x400990 + (-1168) = 0x400500.
#[test]
fn eh_frame_first_fde_pcrel_math() {
    let bytes = fixture("fauxware");
    let file = object::File::parse(bytes.as_slice()).expect("parse fauxware");
    let starts = scan_eh_frame_starts(&file);
    assert!(
        starts.contains(&0x400500),
        "first FDE pcBegin should be 0x400500"
    );
}

// -- `.eh_frame` LSDA landing pads (eh_lsda_x86_64, the gated headline) ----

// The C++ try/catch fixture (stripped of `.symtab`): each FDE's `zPLR` CIE
// carries an `L` LSDA encoding, so `scan_eh_frame_landing_pads` follows the
// FDE aug-data LSDA pointer into `.gcc_except_table`, decodes the call-site
// table, and yields the exception-handler landing pads. Ground truth (decoded
// by hand + cross-checked against `objdump -d`, see fixture README):
//   may_throw LSDA @0x40218c → landing 0x4012bf
//   guarded   LSDA @0x402198 → landings 0x4012e2, 0x401352, 0x401366
// Every landing pad lands on an `endbr64` (a real unwinder-only code target).
#[test]
fn eh_frame_landing_pads_eh_lsda() {
    let bytes = fixture("eh_lsda_x86_64");
    let file = object::File::parse(bytes.as_slice()).expect("parse eh_lsda_x86_64");
    let pads = scan_eh_frame_landing_pads(&file);
    for want in [0x4012bfu64, 0x4012e2, 0x401352, 0x401366] {
        assert!(
            pads.contains(&want),
            "landing pad {want:#x} missing from {pads:#x?}"
        );
    }
    assert!(!pads.contains(&0), "no spurious 0 landing pad");
}

// The landing pads are NOT FDE pcBegins (function starts) — they sit
// mid-function inside `may_throw`/`guarded` and are reached only by the
// unwinder, so the FDE-start oracle never finds them. This is the property
// that makes the LSDA oracle net-new (it adds entries no other oracle has).
#[test]
fn landing_pads_are_not_fde_starts() {
    let bytes = fixture("eh_lsda_x86_64");
    let file = object::File::parse(bytes.as_slice()).expect("parse eh_lsda_x86_64");
    let starts = scan_eh_frame_starts(&file);
    let pads = scan_eh_frame_landing_pads(&file);
    for p in &pads {
        assert!(
            !starts.contains(p),
            "landing pad {p:#x} must NOT be an FDE start (it is mid-function)"
        );
    }
    // And the filtered entry set keeps them (none coincide with a funcsym in
    // this stripped binary) — the additive product the gated option commits.
    let entries = collect_landing_pad_entries(&file, &bytes);
    for want in [0x4012bfu64, 0x4012e2, 0x401352, 0x401366] {
        assert!(
            entries.contains(&want),
            "filtered entry {want:#x} missing from {entries:#x?}"
        );
    }
}

// A binary with no `.gcc_except_table` (fauxware: C, no exceptions) yields no
// landing pads — the oracle is inert there, so the gated option is a strict
// no-op on a non-exception binary.
#[test]
fn landing_pads_empty_without_except_table() {
    let bytes = fixture("fauxware");
    let file = object::File::parse(bytes.as_slice()).expect("parse fauxware");
    assert!(
        file.section_by_name(".gcc_except_table").is_none(),
        "fauxware has no LSDA"
    );
    assert!(
        scan_eh_frame_landing_pads(&file).is_empty(),
        "no landing pads without LSDA"
    );
}

// Unit-test the LSDA call-site-table parse over SYNTHETIC bytes (no fixture):
// exactly the `guarded` LSDA layout (lpStart=omit → func pcBegin, callSiteEnc=
// uleb128) decoded in isolation. Proves the header walk (lpStartEnc/ttypeEnc/
// ttypeOff/callSiteEnc/callSiteLen) + the record walk (cs_start/cs_len/cs_lp/
// cs_action) + the `lpStart + cs_lp` math + the `cs_lp == 0 ⇒ none` rule.
#[test]
fn lsda_call_site_table_parse_synthetic() {
    // `.gcc_except_table` content (just the one LSDA at section offset 0):
    //   lpStartEnc = 0xff (omit)              → lpStart = func_pc_begin
    //   ttypeEnc   = 0x03 (udata4, present)
    //   ttypeOff   = 0x25 (uleb)
    //   callSiteEnc= 0x01 (uleb128)
    //   csTableLen = 0x16 (22 bytes)
    //   records (uleb cs_start, cs_len, cs_lp, action):
    //     05 05 0c 03  → cs_lp=0x0c → landing pc_begin+0x0c
    //     1f 05 00 00  → cs_lp=0    → NONE
    //     44 05 7c 00  → cs_lp=0x7c → landing pc_begin+0x7c
    //     6b 05 90 01 00 → cs_lp uleb(90 01)=0x90 → +0x90
    //     8b 01 19 00 00 → cs_start uleb(8b 01)=0x8b, cs_lp=0 → NONE
    // csTableLen = 0x16 (22) = 4+4+4+5+5. (mirrors the real fixture bytes,
    // README-pinned; the action/types tables AFTER the call-site table are
    // unread, so they are omitted here.)
    let gcc: &[u8] = &[
        0xff, 0x03, 0x25, 0x01, 0x16, // header: lpEnc, ttEnc, ttOff, csEnc, csLen=22
        0x05, 0x05, 0x0c, 0x03, // record 1 (4) → +0x0c
        0x1f, 0x05, 0x00, 0x00, // record 2 (4) → none
        0x44, 0x05, 0x7c, 0x00, // record 3 (4) → +0x7c
        0x6b, 0x05, 0x90, 0x01, 0x00, // record 4 (5) → +0x90 (cs_lp uleb 0x90,0x01)
        0x8b, 0x01, 0x19, 0x00, 0x00, // record 5 (5) → none (cs_start uleb 0x8b,0x01)
    ];
    let func_pc_begin = 0x4012d6u64;
    // gcc_vma=0, lsda_vma=0 (section offset 0), ptr_size 8.
    let lsda = decode_lsda(gcc, 0, 0, func_pc_begin, 8, true).expect("lsda");
    let mut out: Vec<u64> = lsda
        .call_sites
        .iter()
        .filter(|cs| cs.pad != 0)
        .map(|cs| cs.pad)
        .collect();
    out.sort_unstable();
    out.dedup();
    assert_eq!(
        out,
        vec![
            func_pc_begin + 0x0c, // 0x4012e2
            func_pc_begin + 0x7c, // 0x401352
            func_pc_begin + 0x90, // 0x401366
        ],
        "call-site table landing pads (zero cs_lp records dropped)"
    );
}

// -- Oracle 1+2: entry / init / fini (stripped_dynamic) -------------------

#[test]
fn dynamic_entry_points_stripped() {
    let bytes = fixture("stripped_dynamic_x86_64");
    let file = object::File::parse(bytes.as_slice()).expect("parse stripped_dynamic");
    let eps = dynamic_entry_points(&file);
    assert!(
        eps.contains(&0x1000),
        "DT_INIT 0x1000 missing from {eps:#x?}"
    );
    assert!(
        eps.contains(&0x1464),
        "DT_FINI 0x1464 missing from {eps:#x?}"
    );
    // INIT_ARRAY (1 ptr @0x3d78 → 0x1240 frame_dummy), FINI_ARRAY (→ 0x1200).
    assert!(
        eps.contains(&0x1240),
        "INIT_ARRAY ptr 0x1240 missing from {eps:#x?}"
    );
    assert!(
        eps.contains(&0x1200),
        "FINI_ARRAY ptr 0x1200 missing from {eps:#x?}"
    );
}

/// Every function of this stripped ELFv1 PIE is reached through a descriptor:
/// the entry, DT_INIT/DT_FINI and one INIT_ARRAY/FINI_ARRAY slot each.
#[test]
fn elfv1_descriptor_pointers_seed_their_code_in_both_byte_orders() {
    for name in ["elfv1_initfini_be", "elfv1_initfini_le"] {
        let bytes = fixture(name);
        let file = object::File::parse(bytes.as_slice()).expect("parse elfv1_initfini");
        let entries = collect_entries(&file, &bytes);
        assert_eq!(
            entries,
            [0x350, 0x370, 0x390, 0x3b0, 0x3d0],
            "{name}: {entries:#x?}"
        );
        let names = collect_entry_names(&file, &entries);
        assert_eq!(
            names,
            [
                (0x350, "_FINI_0".to_string()),
                (0x370, "_INIT_0".to_string()),
                (0x390, "_DT_INIT".to_string()),
                (0x3b0, "_DT_FINI".to_string())
            ],
            "{name}"
        );
        let image =
            crate::loadimage_object::ObjectLoadImage::from_bytes_silent(name, &bytes).unwrap();
        let tocs: Vec<_> = image.elfv1_descriptors().entry_tocs().into_iter().collect();
        assert_eq!(
            tocs,
            entries.iter().map(|&e| (e, 0x9f00)).collect::<Vec<_>>(),
            "{name}"
        );
    }
}

/// The array slots carry RELA relative relocations, so the stored words decide nothing,
/// and a slot that another relocation writes is left out.
#[test]
fn elfv1_array_slots_follow_their_relocations_not_their_stored_words() {
    for name in ["elfv1_initfini_be", "elfv1_initfini_le"] {
        let original = fixture(name);
        let file = object::File::parse(original.as_slice()).expect("parse elfv1_initfini");
        let le = file.is_little_endian();
        let get = |b: &[u8], at: usize| {
            let w: [u8; 8] = b[at..at + 8].try_into().unwrap();
            if le {
                u64::from_le_bytes(w)
            } else {
                u64::from_be_bytes(w)
            }
        };
        let put = |b: &mut [u8], at: usize, v: u64| {
            b[at..at + 8].copy_from_slice(&if le { v.to_le_bytes() } else { v.to_be_bytes() });
        };
        let at = |section: &str| {
            file.section_by_name(section)
                .unwrap()
                .file_range()
                .unwrap()
                .0 as usize
        };
        let (init, fini) = (at(".init_array"), at(".fini_array"));
        let mut swapped = original.clone();
        put(&mut swapped, init, get(&original, fini));
        put(&mut swapped, fini, get(&original, init));
        let mut zeroed = original.clone();
        put(&mut zeroed, init, 0);
        put(&mut zeroed, fini, 0);
        let (rela, size) = file
            .section_by_name(".rela.dyn")
            .unwrap()
            .file_range()
            .unwrap();
        let init_vma = file.section_by_name(".init_array").unwrap().address();
        let record = (rela as usize..(rela + size) as usize)
            .step_by(24)
            .find(|&r| get(&original, r) == init_vma)
            .expect("init_array relocation");
        let mut uncertain = original.clone();
        put(
            &mut uncertain,
            record + 8,
            u64::from(object::elf::R_PPC64_ADDR64),
        );
        let all = [
            (0x350, Some("_FINI_0")),
            (0x370, Some("_INIT_0")),
            (0x390, Some("_DT_INIT")),
            (0x3b0, Some("_DT_FINI")),
            (0x3d0, None),
        ];
        for (variant, bytes, missing) in [
            ("swapped", swapped, None),
            ("zeroed", zeroed, None),
            ("uncertain", uncertain, Some(0x370)),
        ] {
            let expected: Vec<_> = all.iter().filter(|e| Some(e.0) != missing).collect();
            let file = object::File::parse(bytes.as_slice()).expect("parse variant");
            let entries = collect_entries(&file, &bytes);
            assert_eq!(
                entries,
                expected.iter().map(|e| e.0).collect::<Vec<_>>(),
                "{name} {variant}"
            );
            let names: Vec<_> = collect_entry_names(&file, &entries)
                .into_iter()
                .map(|(a, n)| (a, Some(n)))
                .collect();
            assert_eq!(
                names,
                expected
                    .iter()
                    .filter(|e| e.1.is_some())
                    .map(|e| (e.0, e.1.map(str::to_string)))
                    .collect::<Vec<_>>(),
                "{name} {variant}"
            );
            let image =
                crate::loadimage_object::ObjectLoadImage::from_bytes_silent(name, &bytes).unwrap();
            let tocs: Vec<_> = image.elfv1_descriptors().entry_tocs().into_keys().collect();
            assert_eq!(tocs, entries, "{name} {variant}");
        }
    }
}

// -- Oracle 2 naming overlay: Ghidra `_INIT_<i>`/`_FINI_<i>`/`_DT_INIT` --------

#[test]
fn dynamic_entry_names_stripped() {
    let bytes = fixture("stripped_dynamic_x86_64");
    let file = object::File::parse(bytes.as_slice()).expect("parse stripped_dynamic");
    let names = dynamic_entry_names(&file);
    // Single DT_INIT/DT_FINI → `_DT_INIT`/`_DT_FINI` ("_" + ElfDynamicType.name).
    assert!(
        names.contains(&(0x1000, "_DT_INIT".to_string())),
        "DT_INIT 0x1000 should be named _DT_INIT, got {names:#x?}"
    );
    assert!(
        names.contains(&(0x1464, "_DT_FINI".to_string())),
        "DT_FINI 0x1464 should be named _DT_FINI, got {names:#x?}"
    );
    // Array element 0 → `_INIT_0` / `_FINI_0` (baseName + i).
    assert!(
        names.contains(&(0x1240, "_INIT_0".to_string())),
        "INIT_ARRAY[0] 0x1240 should be named _INIT_0, got {names:#x?}"
    );
    assert!(
        names.contains(&(0x1200, "_FINI_0".to_string())),
        "FINI_ARRAY[0] 0x1200 should be named _FINI_0, got {names:#x?}"
    );
}

// The names overlay is filtered to entries that actually survive collection,
// and pairs every name with a discovered VMA (the headline e2e fact).
/// A PE whose machine word the neutral parser leaves `Unknown` is still an
/// ARM image, and its `AddressOfEntryPoint` carries the Thumb bit: the
/// discovered entry is the even address, or the function it seeds is
/// named one byte past its start.
#[test]
fn a_thumb_pe_entry_is_discovered_at_its_even_address() {
    let bytes = fixture("armv4t_thumb_pe.exe");
    let file = object::File::parse(bytes.as_slice()).expect("parse the Thumb PE");
    assert_eq!(file.architecture(), object::Architecture::Unknown);
    assert_eq!(
        file.entry(),
        0x401001,
        "the fixture's entry carries the Thumb bit"
    );
    let entries = collect_entries(&file, bytes.as_slice());
    assert!(entries.contains(&0x401000), "{entries:x?}");
    assert!(!entries.contains(&0x401001), "{entries:x?}");
}

#[test]
fn collect_entry_names_matches_collected_entries() {
    let bytes = fixture("stripped_dynamic_x86_64");
    let file = object::File::parse(bytes.as_slice()).expect("parse stripped_dynamic");
    let entries = collect_entries(&file, bytes.as_slice());
    let names = collect_entry_names(&file, &entries);
    // The array-element starts survive into the entry set and carry their names.
    assert!(
        names.contains(&(0x1240, "_INIT_0".to_string())),
        "_INIT_0 missing"
    );
    assert!(
        names.contains(&(0x1200, "_FINI_0".to_string())),
        "_FINI_0 missing"
    );
    // Every named VMA is a genuinely-discovered entry (overlay never invents).
    for (addr, _name) in &names {
        assert!(
            entries.contains(addr),
            "named entry {addr:#x} not in discovered set"
        );
    }
}

// The address-only projection is byte-identical to the named oracle's addrs
// (the byte-identical-discovery contract: naming is purely additive).
#[test]
fn dynamic_entry_points_is_named_projection() {
    let bytes = fixture("stripped_dynamic_x86_64");
    let file = object::File::parse(bytes.as_slice()).expect("parse stripped_dynamic");
    let addrs = dynamic_entry_points(&file);
    let named: Vec<u64> = dynamic_entry_points_named(&file)
        .into_iter()
        .map(|(a, _)| a)
        .collect();
    assert_eq!(
        addrs, named,
        "dynamic_entry_points must equal the named oracle's addresses"
    );
}

// -- Oracle 4: _start -> main idiom (stripped_dynamic) --------------------

#[test]
fn libc_start_main_idiom_stripped() {
    let bytes = fixture("stripped_dynamic_x86_64");
    let file = object::File::parse(bytes.as_slice()).expect("parse stripped_dynamic");
    let main = libc_start_main_target(&file, file.entry());
    // lea rdi at 0x1178, disp 0x286 → 0x117f + 0x286 = 0x1405 = main.
    assert_eq!(
        main,
        Some(0x1405),
        "libc-start idiom should recover main at 0x1405"
    );
}

/// A stripped Thumb-2 image: the ARM pattern pairs that set `TMode` 1 carry
/// that mode with the start, so the pass paints the start Thumb.
#[test]
fn thumb_pattern_starts_carry_their_mode() {
    let bytes = fixture("funcstart_thumb_arm");
    let file = object::File::parse(bytes.as_slice()).expect("parse funcstart_thumb_arm");
    let starts = full_pattern_starts_with_mode(&file);
    assert!(
        starts.contains(&(0x101ec, Some(1))),
        "a2 is a Thumb start: {starts:x?}"
    );
    assert!(
        starts.contains(&(0x101fc, Some(1))),
        "a3 is a Thumb start: {starts:x?}"
    );
    assert!(
        starts.iter().all(|&(_, mode)| mode == Some(1)),
        "{starts:x?}"
    );
}

/// Non-PIE x86-64: `_start` hands `main` over as `mov rdi,imm32`
/// (`48 c7 c7 20 10 40 00`) rather than `lea rdi,[rip+disp]`, and the
/// immediate IS `main`. The `lea`-only matcher missed it, so nothing seeded
/// the walk into `main` and the entry before it ran on through its bytes.
#[test]
fn libc_start_main_idiom_absolute_immediate() {
    let bytes = fixture("funcstart_patterns_x86_64");
    let file = object::File::parse(bytes.as_slice()).expect("parse funcstart_patterns");
    assert_eq!(file.entry(), 0x401040, "non-PIE _start (e_entry)");
    let main = libc_start_main_target(&file, file.entry());
    assert_eq!(
        main,
        Some(0x401020),
        "absolute-immediate idiom should recover main at 0x401020"
    );
    assert!(
        collect_entries(&file, bytes.as_slice()).contains(&0x401020),
        "the recovered main must reach the entry union"
    );
}

/// The three guards on the immediate form, each on its own: a candidate with
/// no following `call` is not the libc-start idiom; two candidates that both
/// pass every test are an ambiguous decode and yield nothing; and the
/// `mov edi,imm32` encoding is read like the REX.W one.
#[test]
fn immediate_main_guards() {
    let bytes = fixture("funcstart_patterns_x86_64");
    let file = object::File::parse(bytes.as_slice()).expect("parse funcstart_patterns");

    // mov rdi,0x401020 followed only by nops — no call, so no idiom.
    let mut w = vec![0x48, 0xc7, 0xc7, 0x20, 0x10, 0x40, 0x00];
    w.extend(std::iter::repeat(0x90).take(32));
    assert_eq!(x86_64_immediate_main_target(&file, &w), None);

    // The same load with the indirect `call [rip+d32]` after it.
    let mut w = vec![0x48, 0xc7, 0xc7, 0x20, 0x10, 0x40, 0x00];
    w.extend_from_slice(&[0xff, 0x15, 0x00, 0x00, 0x00, 0x00]);
    assert_eq!(x86_64_immediate_main_target(&file, &w), Some(0x401020));

    // Two distinct exec-section immediates, both call-followed: ambiguous.
    let mut w = vec![0x48, 0xc7, 0xc7, 0x20, 0x10, 0x40, 0x00];
    w.extend_from_slice(&[0xe8, 0x00, 0x00, 0x00, 0x00]);
    w.extend_from_slice(&[0xbf, 0x40, 0x10, 0x40, 0x00]);
    w.extend_from_slice(&[0xe8, 0x00, 0x00, 0x00, 0x00]);
    assert_eq!(x86_64_immediate_main_target(&file, &w), None);

    // `mov edi,imm32` alone, with a direct call: the glibc -no-pie form.
    let w = vec![0xbf, 0x20, 0x10, 0x40, 0x00, 0xe8, 0x00, 0x00, 0x00, 0x00];
    assert_eq!(x86_64_immediate_main_target(&file, &w), Some(0x401020));

    // An immediate outside every executable section is not a function start.
    let w = vec![0xbf, 0x00, 0x00, 0x00, 0x00, 0xe8, 0x00, 0x00, 0x00, 0x00];
    assert_eq!(x86_64_immediate_main_target(&file, &w), None);
}

/// `x86_64_call_follows` accepts both call encodings within the lookahead and
/// rejects `ff /4` (`jmp r/m`), which shares the `ff` opcode byte.
#[test]
fn call_follows_reads_the_modrm_extension() {
    assert!(x86_64_call_follows(&[0xe8, 0, 0, 0, 0], 0));
    assert!(x86_64_call_follows(&[0xff, 0x15, 0, 0, 0, 0], 0));
    assert!(x86_64_call_follows(&[0xff, 0xd0], 0));
    // ff /4 = jmp r/m64 — the tail-call form, not the idiom's call.
    assert!(!x86_64_call_follows(&[0xff, 0x25, 0, 0, 0, 0], 0));
    assert!(!x86_64_call_follows(&[0xff, 0xe0], 0));
    // Beyond the lookahead window.
    let mut far = vec![0x90; IMM_CALL_LOOKAHEAD + 1];
    far.push(0xe8);
    assert!(!x86_64_call_follows(&far, 0));
}

// -- Oracle 4 cross-arch: _start -> main idiom (Increment 23) --------------
//
// Each fixture is a tiny `int main(int,char**){return argc;}` built DYNAMIC
// (real crt1 `_start` → `__libc_start_main(main,…)`), `-fno-*-unwind-tables`,
// `-fvisibility=hidden` (so `main` is NOT in `.dynsym`), and stripped — so
// `main` is discoverable ONLY via the `_start`→`main` idiom, never via a
// symbol. The load-bearing VMAs are pinned (read via the container objdump/
// readelf at build time; see the fixtures README provenance).

/// AArch64: `_start` (0x600) loads `main` (0x714) into `x0` via
/// `adrp x0,0x10000 ; ldr x0,[x0,#4080]` → GOT slot 0x10ff0, whose
/// `R_AARCH64_RELATIVE` addend is 0x714.
#[test]
fn libc_start_main_idiom_aarch64() {
    let bytes = fixture("entrymain_aarch64");
    let file = object::File::parse(bytes.as_slice()).expect("parse entrymain_aarch64");
    assert_eq!(file.architecture(), object::Architecture::Aarch64);
    assert_eq!(file.entry(), 0x600, "aarch64 _start (e_entry)");
    // The GOT slot 0x10ff0 resolves to main (0x714) via the RELATIVE map.
    let rel = relative_targets(&file);
    assert_eq!(
        rel.get(&0x10ff0).copied(),
        Some(0x714),
        "RELATIVE @0x10ff0 → main"
    );
    let main = libc_start_main_target(&file, file.entry());
    assert_eq!(
        main,
        Some(0x714),
        "aarch64 idiom should recover main at 0x714"
    );
}

/// ARM/Thumb: `_start` (0x3dd, Thumb @0x3dc) loads `main` (0x4d8) into `r0`
/// GOT-relatively (`.got`@0x10fd0 + 0x28 = slot 0x10ff8, whose `R_ARM_RELATIVE`
/// in-place value is 0x4d9 — main with the Thumb LSB set, masked to 0x4d8).
#[test]
fn libc_start_main_idiom_arm() {
    let bytes = fixture("entrymain_arm");
    let file = object::File::parse(bytes.as_slice()).expect("parse entrymain_arm");
    assert_eq!(file.architecture(), object::Architecture::Arm);
    assert_eq!(file.entry(), 0x3dd, "arm _start (Thumb, LSB set)");
    // The RELATIVE map carries the GOT slot 0x10ff8 → 0x4d9 (Thumb LSB).
    let rel = relative_targets(&file);
    assert_eq!(
        rel.get(&0x10ff8).copied(),
        Some(0x4d9),
        "RELATIVE @0x10ff8 → main|1"
    );
    let main = libc_start_main_target(&file, file.entry());
    assert_eq!(
        main,
        Some(0x4d8),
        "arm idiom should recover main at 0x4d8 (LSB masked)"
    );
}

/// ARM Cortex-M vector-table harvest (oracle 6): the pure harvest loop over a
/// synthetic table mimicking a stripped STM32 image — word 0 is the SRAM SP
/// (skipped), word 1 the odd reset vector, then handler pointers (with reserved
/// zeros embedded), then a non-conforming word (real code) that ends the table.
#[test]
fn cortexm_vector_harvest() {
    let sec_addr = 0x0800_0000u64;
    // exec range [0x08000000, 0x08000c00) — the button.elf-shaped `.text`.
    let in_exec = |vma: u64| (0x0800_0000..0x0800_0c00).contains(&vma);
    let mut buf: Vec<u8> = Vec::new();
    let mut push = |w: u32| buf.extend_from_slice(&w.to_le_bytes());
    push(0x2003_0000); // word 0: initial SP in SRAM (skipped)
    push(0x0800_09a1); // word 1: reset vector (Thumb-odd → 0x080009a0)
    push(0x0800_0a81); // handler (→ 0x08000a80)
    push(0x0000_0000); // reserved slot (skipped, keeps scanning)
    push(0x0800_0a79); // handler (→ 0x08000a78)
    push(0x0800_0a81); // duplicate handler (deduped)
    push(0x4711_b580); // NON-conforming (even / out of exec) → table ends here
    push(0x0800_0123); // (unreached — after the break)
    let out = harvest_vector_words(sec_addr, &buf, true, &in_exec, false);
    assert_eq!(
        out,
        vec![0x0800_09a0, 0x0800_0a78, 0x0800_0a80],
        "harvest: masked, sorted, deduped handlers up to the first non-table word"
    );
}

// -- Oracle 6: the vector table's own section need not be SHF_EXECINSTR ----
//
// The FreeRTOS demo images (`decbench` freertos `RTOSDemo.out`, all three opt
// levels) place `.isr_vector` at VMA 0 flagged `WA` inside the single `RWE`
// `PT_LOAD` — the loader maps it executable, the section header does not say
// so. Scanning only `executable_sections` therefore never saw the table, and
// the whole firmware went undiscovered (8 functions instead of 146).
// `build_cortexm_elf32` reproduces exactly that shape.

/// Hand-assembled little-endian ELF32 ARM firmware image: a `.isr_vector`
/// vector table at VMA 0 (`isr_flags` as its `sh_flags`) followed by an
/// `AX` `.text` at 0x20, both inside one `PT_LOAD` whose `p_flags` are
/// `seg_flags`. With `phnum == false` the program headers are omitted
/// entirely (the relocatable-object shape). No external toolchain needed.
fn build_cortexm_elf32(isr_flags: u32, seg_flags: u32, phdrs: bool) -> Vec<u8> {
    const EHDR: u32 = 52;
    const PHDR: u32 = 32;
    const SHDR: u32 = 40;
    let phnum: u16 = if phdrs { 1 } else { 0 };
    let seg_off = EHDR + PHDR * phnum as u32;

    // The image: 8 vector words at VMA 0, then 0x20 bytes of `.text` at 0x20.
    // word 1 (the reset vector) is `e_entry` = 0x21 (Thumb-odd → 0x20).
    let mut seg: Vec<u8> = Vec::new();
    for w in [
        0x2000_4000u32, // word 0: initial SP in SRAM
        0x0000_0021,    // word 1: reset vector == e_entry
        0x0000_0031,    // handler → 0x30
        0x0000_0000,    // reserved slot
        0x0000_0039,    // handler → 0x38
        0x0000_0031,    // duplicate handler
        0x0000_0000,
        0x0000_0000,
    ] {
        seg.extend_from_slice(&w.to_le_bytes());
    }
    seg.extend_from_slice(&[0u8; 0x20]); // `.text` body

    // shstrtab: "\0.shstrtab\0.isr_vector\0.text\0"
    let mut shstr = vec![0u8];
    let mut name_off = |n: &str| {
        let off = shstr.len() as u32;
        shstr.extend_from_slice(n.as_bytes());
        shstr.push(0);
        off
    };
    let off_shstrtab = name_off(".shstrtab");
    let off_isr = name_off(".isr_vector");
    let off_text = name_off(".text");

    let shstr_off = seg_off + seg.len() as u32;
    let sh_off = shstr_off + shstr.len() as u32;

    let mut buf: Vec<u8> = Vec::new();
    // --- Ehdr (Elf32) --------------------------------------------------
    buf.extend_from_slice(&[0x7f, b'E', b'L', b'F']);
    buf.push(1); // EI_CLASS = ELFCLASS32
    buf.push(1); // EI_DATA = ELFDATA2LSB
    buf.push(1); // EI_VERSION
    buf.extend_from_slice(&[0u8; 9]); // EI_OSABI + EI_PAD
    buf.extend_from_slice(&2u16.to_le_bytes()); // e_type = ET_EXEC
    buf.extend_from_slice(&40u16.to_le_bytes()); // e_machine = EM_ARM
    buf.extend_from_slice(&1u32.to_le_bytes()); // e_version
    buf.extend_from_slice(&0x21u32.to_le_bytes()); // e_entry (Thumb-odd)
    buf.extend_from_slice(&(if phdrs { EHDR } else { 0 }).to_le_bytes()); // e_phoff
    buf.extend_from_slice(&sh_off.to_le_bytes()); // e_shoff
    buf.extend_from_slice(&0x0500_0200u32.to_le_bytes()); // e_flags: EABI5
    buf.extend_from_slice(&(EHDR as u16).to_le_bytes()); // e_ehsize
    buf.extend_from_slice(&(PHDR as u16).to_le_bytes()); // e_phentsize
    buf.extend_from_slice(&phnum.to_le_bytes()); // e_phnum
    buf.extend_from_slice(&(SHDR as u16).to_le_bytes()); // e_shentsize
    buf.extend_from_slice(&4u16.to_le_bytes()); // e_shnum
    buf.extend_from_slice(&3u16.to_le_bytes()); // e_shstrndx

    // --- Phdr (Elf32: p_flags sits AFTER p_memsz) ----------------------
    if phdrs {
        buf.extend_from_slice(&1u32.to_le_bytes()); // p_type = PT_LOAD
        buf.extend_from_slice(&seg_off.to_le_bytes()); // p_offset
        buf.extend_from_slice(&0u32.to_le_bytes()); // p_vaddr
        buf.extend_from_slice(&0u32.to_le_bytes()); // p_paddr
        buf.extend_from_slice(&(seg.len() as u32).to_le_bytes()); // p_filesz
        buf.extend_from_slice(&(seg.len() as u32).to_le_bytes()); // p_memsz
        buf.extend_from_slice(&seg_flags.to_le_bytes()); // p_flags
        buf.extend_from_slice(&1u32.to_le_bytes()); // p_align
    }

    assert_eq!(buf.len() as u32, seg_off);
    buf.extend_from_slice(&seg);
    buf.extend_from_slice(&shstr);

    // --- section headers (Elf32_Shdr = 40 bytes each) ------------------
    let push_shdr = |b: &mut Vec<u8>,
                     name: u32,
                     sh_type: u32,
                     sh_flags: u32,
                     addr: u32,
                     offset: u32,
                     size: u32| {
        for v in [name, sh_type, sh_flags, addr, offset, size, 0, 0, 4, 0] {
            b.extend_from_slice(&v.to_le_bytes());
        }
    };
    assert_eq!(buf.len() as u32, sh_off);
    push_shdr(&mut buf, 0, 0, 0, 0, 0, 0); // 0: null
    push_shdr(&mut buf, off_isr, 1, isr_flags, 0, seg_off, 0x20); // 1: .isr_vector
    push_shdr(&mut buf, off_text, 1, 0x2 | 0x4, 0x20, seg_off + 0x20, 0x20); // 2: .text (AX)
    push_shdr(
        &mut buf,
        off_shstrtab,
        3,
        0,
        0,
        shstr_off,
        shstr.len() as u32,
    ); // 3
    buf
}

/// The bug shape: `.isr_vector` is `WA`, so the table's section is invisible
/// to `executable_sections` — the set the oracle used to scan. Widened to the
/// sections a `PF_X` `PT_LOAD` actually loads, the table is found and its
/// handlers are harvested, exactly as if the section had been flagged `AX`.
#[test]
fn cortexm_vector_table_in_nonexec_section() {
    // `WA` (ALLOC|WRITE) `.isr_vector` inside an `RWE` (PF_R|PF_W|PF_X) load.
    let bytes = build_cortexm_elf32(0x1 | 0x2, 0x4 | 0x2 | 0x1, true);
    let file = object::File::parse(bytes.as_slice()).expect("parse synthetic firmware");
    assert_eq!(file.architecture(), object::Architecture::Arm);
    assert_eq!(file.entry(), 0x21, "e_entry (Thumb-odd reset vector)");

    // BUG SHAPE: the old candidate set (executable sections only) cannot see
    // the table's section at all.
    let execs = executable_sections(&file);
    assert!(
        !execs.iter().any(|&(lo, _, _)| lo == 0),
        "`.isr_vector` must NOT be an SHF_EXECINSTR section (that is the bug's premise)"
    );
    // FIXED SHAPE: the program headers load it as executable, so it IS a
    // candidate.
    let phdr = phdr_executable_sections(&file);
    assert!(
        phdr.iter().any(|&(lo, hi, _)| lo == 0 && hi == 0x20),
        "`.isr_vector` [0,0x20) lies in a PF_X PT_LOAD, got {:#x?}",
        phdr.iter().map(|&(l, h, _)| (l, h)).collect::<Vec<_>>()
    );

    let table = cortexm_vector_table(&file, false);
    assert!(
        table.is_some(),
        "vector table must be detected in the WA `.isr_vector`"
    );
    assert_eq!(table.unwrap().0, 0, "the table is the section at VMA 0");

    // The reset + handler seeds are harvested (masked, sorted, deduped) and
    // reach the fused discovery core.
    assert_eq!(cortexm_vector_entries(&file, false), vec![0x20, 0x30, 0x38]);
    let entries = collect_entries(&file, bytes.as_slice());
    for want in [0x20u64, 0x30, 0x38] {
        assert!(
            entries.contains(&want),
            "entry {want:#x} missing from {entries:#x?}"
        );
    }
    // A confirmed table also unlocks the whole-image Thumb region paint.
    assert_eq!(
        cortexm_thumb_paints(&file, false),
        vec![ContextPaint {
            addr: 0x20,
            end: Some(0x40),
            var: "TMode",
            value: 1
        }],
        "a confirmed table paints TMode=1 over the executable sections"
    );
}

/// The widening is *containment in a `PF_X` `PT_LOAD`*, not "ignore the
/// section flags": the same `WA` `.isr_vector` in a non-executable (`RW`)
/// load stays invisible, and an image with no program headers at all (the
/// relocatable-object shape) is unchanged.
#[test]
fn cortexm_vector_table_requires_executable_load() {
    for (label, seg_flags, phdrs) in [
        ("RW PT_LOAD", 0x4u32 | 0x2, true),
        ("no program headers", 0, false),
    ] {
        let bytes = build_cortexm_elf32(0x1 | 0x2, seg_flags, phdrs);
        let file = object::File::parse(bytes.as_slice()).expect("parse synthetic firmware");
        assert!(
            phdr_executable_sections(&file).is_empty(),
            "{label}: nothing is loaded executable"
        );
        assert!(
            cortexm_vector_table(&file, false).is_none(),
            "{label}: no table candidate"
        );
        assert!(
            cortexm_vector_entries(&file, false).is_empty(),
            "{label}: no seeds"
        );
        assert!(
            cortexm_thumb_paints(&file, false).is_empty(),
            "{label}: no Thumb paint"
        );
    }
}

/// The pre-existing path is untouched: an `AX` `.isr_vector` (the shape that
/// already worked, e.g. libopencm3 `button.elf`) still matches through
/// `executable_sections`, and yields the same seeds.
#[test]
fn cortexm_vector_table_exec_section_unchanged() {
    // `AX` (ALLOC|EXECINSTR) `.isr_vector`.
    let bytes = build_cortexm_elf32(0x2 | 0x4, 0x4 | 0x1, true);
    let file = object::File::parse(bytes.as_slice()).expect("parse synthetic firmware");
    assert!(
        executable_sections(&file).iter().any(|&(lo, _, _)| lo == 0),
        "`.isr_vector` is SHF_EXECINSTR here"
    );
    assert!(
        phdr_executable_sections(&file).is_empty(),
        "the delta set excludes already-executable sections"
    );
    assert_eq!(cortexm_vector_table(&file, false).map(|t| t.0), Some(0));
    assert_eq!(cortexm_vector_entries(&file, false), vec![0x20, 0x30, 0x38]);
}

/// RISC-V: `_start` (0x550) loads `main` (0x608) into `a0` via
/// `auipc a0,0x2 ; ld a0,-1318(a0)` → GOT slot 0x2030, whose
/// `R_RISCV_RELATIVE` addend is 0x608.
#[test]
fn libc_start_main_idiom_riscv() {
    let bytes = fixture("entrymain_riscv64");
    let file = object::File::parse(bytes.as_slice()).expect("parse entrymain_riscv64");
    assert_eq!(file.architecture(), object::Architecture::Riscv64);
    assert_eq!(file.entry(), 0x550, "riscv _start (e_entry)");
    let rel = relative_targets(&file);
    assert_eq!(
        rel.get(&0x2030).copied(),
        Some(0x608),
        "RELATIVE @0x2030 → main"
    );
    let main = libc_start_main_target(&file, file.entry());
    assert_eq!(
        main,
        Some(0x608),
        "riscv idiom should recover main at 0x608"
    );
}

/// The fused core proves oracle 4 SPECIFICALLY contributes `main` on each
/// arch: `main`'s VMA is in `collect_entries`, is in an executable section,
/// and is NOT covered by any pre-existing funcsym (the discovery property).
#[test]
fn collect_entries_crossarch_includes_main() {
    // `want_entry` is the VMA oracle-1 emits — ARM's `e_entry` is Thumb-odd
    // (0x3dd) but the seed is masked to the even decode address (0x3dc, oracle
    // A); the `main` recovery independently uses the even bytes.
    for (name, want_entry, want_main) in [
        ("entrymain_aarch64", 0x600u64, 0x714u64),
        ("entrymain_arm", 0x3dc, 0x4d8),
        ("entrymain_riscv64", 0x550, 0x608),
    ] {
        let bytes = fixture(name);
        let file = object::File::parse(bytes.as_slice()).expect("parse fixture");
        let entries = collect_entries(&file, bytes.as_slice());
        let funcsyms = existing_function_addrs(&file, bytes.as_slice());
        // main is genuinely never named in this stripped, hidden-visibility build.
        assert!(
            funcsyms.binary_search(&want_main).is_err(),
            "{name}: main {want_main:#x} unexpectedly already a funcsym"
        );
        assert!(
            entries.contains(&want_main),
            "{name}: oracle 4 should contribute main {want_main:#x}, got {entries:#x?}"
        );
        // The ELF entry (_start) is also discovered (oracle 1), at the even VMA.
        assert!(
            entries.contains(&want_entry),
            "{name}: _start {want_entry:#x} should be discovered, got {entries:#x?}"
        );
        let execs = executable_sections(&file);
        assert!(
            in_executable_section(&execs, want_main),
            "{name}: main {want_main:#x} must be inside an exec section"
        );
    }
}

// -- The fused core: collect_entries (stripped_dynamic, the headline) -----

#[test]
fn collect_entries_stripped_includes_entry_and_main() {
    let bytes = fixture("stripped_dynamic_x86_64");
    let file = object::File::parse(bytes.as_slice()).expect("parse stripped_dynamic");
    let entries = collect_entries(&file, bytes.as_slice());
    assert!(entries.contains(&0x1160), "e_entry (_start) 0x1160 missing");
    assert!(entries.contains(&0x1000), "DT_INIT 0x1000 missing");
    assert!(entries.contains(&0x1464), "DT_FINI 0x1464 missing");
    assert!(entries.contains(&0x1405), "main 0x1405 missing");
    // Every emitted entry is inside an executable section and non-zero.
    let execs = executable_sections(&file);
    for &e in &entries {
        assert!(e != 0, "no zero entry");
        assert!(
            in_executable_section(&execs, e),
            "entry {e:#x} outside exec section"
        );
    }
}

// -- Dedup vs funcsyms: fauxware (symboled) -------------------------------

#[test]
fn collect_entries_fauxware_skips_named_functions() {
    let bytes = fixture("fauxware");
    let file = object::File::parse(bytes.as_slice()).expect("parse fauxware");
    let entries = collect_entries(&file, bytes.as_slice());
    let named = existing_function_addrs(&file, bytes.as_slice());
    // No emitted entry coincides with an already-named function.
    for &e in &entries {
        assert!(
            named.binary_search(&e).is_err(),
            "entry {e:#x} duplicates a funcsym"
        );
    }
    // An FDE-derived start that is NOT a funcsym (e.g. _start 0x400500) is
    // recovered; main/authenticate (funcsyms) are correctly skipped here.
    assert!(
        entries.contains(&0x400500),
        "_start 0x400500 should be discovered"
    );
}

// -- The fused core, PE (the PR-12 headline): a stripped PE finds functions ---

/// A stripped PE32+ (`pe_imports_stripped.exe`, no symbols/exports) recovers
/// its functions through the format-dispatched PE oracles: the entry and the
/// `.pdata` RUNTIME_FUNCTION begins. `main` (0x140001592) and the entry
/// (0x1400014f0) survive into the discovered set, both inside an exec section
/// and non-zero, even though the binary has no `.symtab`.
#[test]
fn collect_entries_pe_stripped_finds_functions() {
    let bytes = fixture("pe_imports_stripped.exe");
    let file = object::File::parse(bytes.as_slice()).expect("parse stripped PE");
    let entries = collect_entries(&file, bytes.as_slice());
    assert!(
        entries.contains(&0x1400014f0),
        "entry 0x1400014f0 missing from {entries:#x?}"
    );
    assert!(
        entries.contains(&0x140001592),
        "main 0x140001592 missing (.pdata)"
    );
    // A bare load (no oracles) finds nothing in a stripped PE; the oracles
    // recover dozens.
    assert!(
        entries.len() >= 50,
        ".pdata should recover many functions, got {}",
        entries.len()
    );
    let execs = executable_sections(&file);
    for &e in &entries {
        assert!(e != 0, "no zero entry");
        assert!(
            in_executable_section(&execs, e),
            "entry {e:#x} outside exec section"
        );
    }
}

// -- The fused core, Mach-O (the PR-13 headline) ---------------------------

/// A linked Mach-O recovers `_compute`/`_main` via `LC_FUNCTION_STARTS` +
/// `LC_MAIN` — the source that survives stripping. On `macho_imports` the two
/// are also symboled, so `collect_entries` skips them as funcsyms (correct:
/// the discovery is additive); we assert the *function-starts oracle itself*
/// found them (via the candidate set before the funcsym-skip), proving a
/// stripped Mach-O would discover them.
#[test]
fn collect_entries_macho_function_starts_oracle() {
    for (name, compute, main) in [
        ("macho_imports", 0x1000005a0u64, 0x1000005b0u64),
        ("macho_imports_arm64", 0x100000560, 0x10000056c),
    ] {
        let bytes = fixture(name);
        let file = object::File::parse(bytes.as_slice()).expect("parse macho fixture");
        // The raw candidate set (the oracle output before the funcsym-skip)
        // carries both starts — the stripped-survivable discovery fact.
        let cands = macho_entry::macho_entry_candidates(&file, bytes.as_slice());
        assert!(
            cands.contains(&compute),
            "{name}: _compute {compute:#x} not in function-starts"
        );
        assert!(
            cands.contains(&main),
            "{name}: _main {main:#x} not in function-starts"
        );
        // Every emitted entry (post-filter) lands in an exec section, non-zero.
        let entries = collect_entries(&file, bytes.as_slice());
        let execs = executable_sections(&file);
        for &e in &entries {
            assert!(e != 0, "{name}: no zero entry");
            assert!(
                in_executable_section(&execs, e),
                "{name}: entry {e:#x} outside exec section"
            );
        }
    }
}

// -- The matcher core ------------------------------------------------------

#[test]
fn ditted_matcher_basics() {
    // "11111111 ........ 01010101" matches 0xff ?? 0x55.
    let seq = DittedSeq::from_binary("11111111 ........ 01010101");
    assert_eq!(seq.len(), 3);
    assert!(seq.matches(&[0xff, 0x00, 0x55]));
    assert!(seq.matches(&[0xff, 0xab, 0x55]));
    assert!(!seq.matches(&[0xfe, 0x00, 0x55]));
    assert!(!seq.matches(&[0xff, 0x00, 0x54]));
    assert!(!seq.matches(&[0xff, 0x00])); // too short
}

#[test]
fn prologue_pattern_matches_endbr64_frame() {
    // f3 0f 1e fa 55 48 89 e5 at vma 0x1000 (aligned) → a hit.
    let data = vec![0xf3, 0x0f, 0x1e, 0xfa, 0x55, 0x48, 0x89, 0xe5, 0x00, 0x00];
    let execs = vec![(0x1000u64, 0x1000 + data.len() as u64, data)];
    let hits = prologue_pattern_starts(&execs);
    assert!(
        hits.contains(&0x1000),
        "endbr64-frame prologue should match at 0x1000"
    );
}

// -- LEB128 readers --------------------------------------------------------

#[test]
fn leb128_roundtrip() {
    // ULEB 0x80 0x01 = 128.
    assert_eq!(read_uleb128(&[0x80, 0x01], 0), Some((128, 2)));
    assert_eq!(read_uleb128(&[0x7f], 0), Some((127, 1)));
    // SLEB 0x7f = -1.
    assert_eq!(read_sleb128(&[0x7f], 0), Some((-1, 1)));
    assert_eq!(read_sleb128(&[0x01], 0), Some((1, 1)));
}
