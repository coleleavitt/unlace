use super::*;

#[test]
fn a_user_pattern_file_replaces_the_vendored_one() {
    let dir = std::env::temp_dir().join(format!("unlace-patterns-{}", std::process::id()));
    std::fs::create_dir_all(&dir).unwrap();
    let xml = "<patternlist><patternpairs><prepatterns><data>0xc3</data></prepatterns>\
                   <postpatterns><data>0x0f 0x0b</data><funcstart/></postpatterns></patternpairs></patternlist>";
    std::fs::write(dir.join("x86-64gcc_patterns.xml"), xml).unwrap();
    let text = user_file_in(&dir, "x86-64gcc_patterns.xml").unwrap();
    let mut pairs = Vec::new();
    let mut bare = Vec::new();
    parse_patternlist(&text, &mut pairs, &mut bare);
    assert_eq!(pairs.len(), 1);
    assert!(user_file_in(&dir, "ARM_LE_patterns.xml").is_none());
    let _ = std::fs::remove_dir_all(&dir);
}

#[test]
fn aarch64_possiblefuncstart_pairs_are_weak_hits() {
    let set = for_arch(object::Architecture::Aarch64, true).expect("AArch64 now has a (weak) set");
    assert!(set.has_weak());
    let data = [
        0xc0, 0x03, 0x5f, 0xd6, 0xfd, 0x7b, 0xbf, 0xa9, 0xfd, 0x03, 0x00, 0x91,
    ];
    let hits = set.scan_hits(0x1000, &data);
    assert_eq!(
        hits,
        vec![Hit {
            vma: 0x1004,
            mode: None,
            weak: true
        }]
    );
    assert!(
        set.scan(0x1000, &data).is_empty(),
        "a weak hit is not a strong start"
    );
}

#[test]
fn ditted_hex_and_binary_parse() {
    // Hex: 0x534889fb -> four fully-fixed bytes.
    let d = Ditted::parse("0x534889fb").unwrap();
    assert_eq!(d.len(), 4);
    assert!(d.matches(&[0x53, 0x48, 0x89, 0xfb, 0x00]));
    assert!(!d.matches(&[0x53, 0x48, 0x89, 0xfc]));
    assert_eq!(d.num_fixed_bits(), 32);

    // Ditted nibble: 0x0....000 (low 3 bits zero, bit7 zero on a byte).
    let d = Ditted::parse("0x53 0x48 0x83 0xec 0....000").unwrap();
    assert_eq!(d.len(), 5);
    // push rbx; sub rsp, 0x18 (0x18 = 0001_1000: bit7=0, low3=000) → match.
    assert!(d.matches(&[0x53, 0x48, 0x83, 0xec, 0x18]));
    // sub rsp, 0x19 (low bit set) → no match (low 3 bits must be 000).
    assert!(!d.matches(&[0x53, 0x48, 0x83, 0xec, 0x19]));

    // Binary token: "01010101" = 0x55.
    let d = Ditted::parse("01010101").unwrap();
    assert_eq!(d.len(), 1);
    assert!(d.matches(&[0x55]));
    assert!(!d.matches(&[0x54]));

    // Mixed binary don't-care: "0101.1.." matches a class of bytes.
    let d = Ditted::parse("0101.1..").unwrap();
    assert!(d.matches(&[0b0101_1100]));
    assert!(!d.matches(&[0b0100_1100]));

    // 8-byte NOP prepattern from the vendored set.
    let d = Ditted::parse("0x0f1f840000000000").unwrap();
    assert_eq!(d.len(), 8);
    assert!(d.matches(&[0x0f, 0x1f, 0x84, 0, 0, 0, 0, 0]));
}

#[test]
fn x86_64_set_parses_and_has_pairs() {
    let set = for_arch(object::Architecture::X86_64, true).expect("x86-64 patterns");
    assert!(!set.pairs.is_empty(), "x86-64 must have <patternpairs>");
    // The PUSH RBX; MOV RBX,RDI postpattern (0x534889fb) is in the gcc set.
    let has = set
        .pairs
        .iter()
        .any(|pp| pp.post.iter().any(|p| p.matches(&[0x53, 0x48, 0x89, 0xfb])));
    assert!(has, "0x534889fb post pattern must be present");
}

#[test]
fn x86_64_pairs_catch_push_rbx_after_nop() {
    // Simulate widget@0x1130: 8-byte NOP prepattern ending at the candidate,
    // then the PUSH RBX; MOV RBX,RDI postpattern at it. Aligned at 0x1130.
    let set = for_arch(object::Architecture::X86_64, true).unwrap();
    let mut data = vec![0u8; 0x20];
    // place the 8-byte nop at 0x08..0x10 (so it ends at offset 0x10).
    data[0x08..0x10].copy_from_slice(&[0x0f, 0x1f, 0x84, 0, 0, 0, 0, 0]);
    // widget prologue at 0x10.
    data[0x10..0x18].copy_from_slice(&[0x53, 0x48, 0x89, 0xfb, 0x48, 0x8d, 0x04, 0x1b]);
    let hits = set.scan(0x1120, &data);
    assert!(
        hits.contains(&0x1130),
        "push rbx after nop should be a start, got {hits:#x?}"
    );
}

#[test]
fn no_match_without_prepattern() {
    // Same postpattern but NO prepattern before it (random non-pre bytes) →
    // the patternpair must NOT fire (the prepattern gate is load-bearing).
    let set = for_arch(object::Architecture::X86_64, true).unwrap();
    let mut data = vec![0xABu8; 0x20];
    data[0x10..0x18].copy_from_slice(&[0x53, 0x48, 0x89, 0xfb, 0x48, 0x8d, 0x04, 0x1b]);
    let hits = set.scan(0x1120, &data);
    assert!(
        !hits.contains(&0x1130),
        "no prepattern → no patternpair hit, got {hits:#x?}"
    );
}

#[test]
fn star_mark_offset_is_parsed_and_applied() {
    // x86-64win bare pattern `0x909090 * 0x4883ec`: 3 NOPs (context) then SUB
    // RSP at the mark. The mark byte is the function start; the 3 NOPs must
    // precede it.
    let d = Ditted::parse("0x909090 * 0x4883ec").unwrap();
    assert_eq!(d.len(), 6, "3 nop + 3 sub bytes");
    assert_eq!(d.mark, 3, "the * marks the 4th byte (offset 3)");

    // A direct scan: NOP NOP NOP SUB RSP at 0x..3 → the start is at the SUB.
    let set = for_arch(object::Architecture::X86_64, true).unwrap();
    // data: [90 90 90 48 83 ec ..]; the candidate start is at offset 3.
    let mut data = vec![0u8; 0x10];
    data[0..6].copy_from_slice(&[0x90, 0x90, 0x90, 0x48, 0x83, 0xec]);
    let hits = set.scan(0x1000, &data);
    assert!(
        hits.contains(&0x1003),
        "the *-marked SUB RSP after 3 NOPs is the start (0x1003), got {hits:#x?}"
    );
}

#[test]
fn arches_with_unconditional_funcstart_have_a_set() {
    // Only arches whose vendored `<patternpairs>` carry an unconditional
    // `<funcstart/>` (high-confidence) yield a non-empty set; the others use
    // `<possiblefuncstart/>` (a weaker hint Ghidra confirms later — a
    // documented LOSS at this disassembler-free tier). x86-64/ARM/RISC-V/MIPS
    // carry `<funcstart/>`; AArch64/PPC/x86-32 carry only `<possiblefuncstart/>`.
    for (a, le) in [
        (object::Architecture::Riscv64, true),
        (object::Architecture::Mips, false),
        (object::Architecture::Mips, true),
        (object::Architecture::Mips64_N32, false),
        (object::Architecture::Mips64_N32, true),
        (object::Architecture::Arm, true),
        // I386: the vendored x86win patterns carry bare `<funcstart/>`
        // patternpairs + `*`-marked bare patterns (the x86-64win MSVC shapes).
        (object::Architecture::I386, true),
    ] {
        assert!(
            for_arch(a, le).is_some(),
            "{a:?} should have a <funcstart/> pattern set"
        );
    }
    // AArch64/PPC carry only `<possiblefuncstart/>` patternpairs: a weak set,
    // taken only where no unwind table or function table describes the bytes.
    for (a, le) in [
        (object::Architecture::Aarch64, true),
        (object::Architecture::PowerPc64, false),
        (object::Architecture::PowerPc64, true),
    ] {
        let set = for_arch(a, le).expect("weak set");
        assert!(
            set.has_weak(),
            "{a:?} has <possiblefuncstart/> patternpairs"
        );
    }
}
