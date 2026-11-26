use super::*;
use flirt_sig::{Endian, Matcher, Signature};

const TARGET: Target = Target {
    architecture: Architecture::X86_64,
    format: BinaryFormat::Elf,
    little_endian: true,
};

/// A 48-byte function: `seed` in its leading bytes, a relocated field at
/// 4..8, and `last` as its final byte.
fn func(name: &str, seed: u8, last: u8, reference: Option<&str>) -> FuncPattern {
    let mut bytes: Vec<Option<u8>> = (0..48u8).map(|i| Some(seed.wrapping_add(i))).collect();
    bytes[4..8].fill(None);
    bytes[40..44].fill(None);
    bytes[47] = Some(last);
    let refs = reference.map(|r| (40, r.to_string())).into_iter().collect();
    FuncPattern {
        bytes,
        publics: vec![name.to_string()],
        refs,
    }
}

fn concrete(p: &FuncPattern) -> Vec<u8> {
    p.bytes.iter().map(|b| b.unwrap_or(0xee)).collect()
}

#[test]
fn a_written_sig_reads_back_with_its_collisions_resolved() {
    let mut aliased = func("plain", 0x10, 0, None);
    aliased.publics.push("plain_alias".into());
    let patterns = vec![
        aliased.clone(),
        func("tail_a", 0x30, 0xa1, None),
        func("tail_b", 0x30, 0xb2, None),
        func("ref_a", 0x50, 0, Some("callee_a")),
        func("ref_b", 0x50, 0, Some("callee_b")),
        func("same_a", 0x70, 0, Some("table")),
        func("same_b", 0x70, 0, Some("other")),
        func("twice", 0x90, 0, None),
        func("twice", 0x90, 0, None),
    ];
    let data: BTreeSet<String> = ["table".to_string()].into();
    let built = build_sig(&patterns, &data, TARGET, "round trip").unwrap();
    assert_eq!(built.collisions.len(), 1);
    assert_eq!(built.collisions[0].names, ["same_a", "same_b"]);
    assert_eq!(built.collisions[0].patterns.len(), 2);
    assert_eq!(built.modules, 6);

    let sig = Signature::parse(&built.bytes).expect("the reader accepts the written file");
    assert_eq!(
        (sig.header.version, sig.header.pattern_len),
        (SIG_VERSION, 32)
    );
    assert_eq!(
        (sig.header.library_name.as_str(), sig.header.module_count),
        ("round trip", Some(6))
    );
    assert!(
        crate::flirt::applies_to(&built.bytes, Some(18))
            && !crate::flirt::applies_to(&built.bytes, Some(11))
    );
    let module = |name: &str| {
        sig.modules
            .iter()
            .find(|m| m.publics[0].name == name.as_bytes())
            .unwrap_or_else(|| panic!("{name}"))
    };
    let names: Vec<&[u8]> = module("plain")
        .publics
        .iter()
        .map(|p| p.name.as_slice())
        .collect();
    assert_eq!(names, [&b"plain"[..], b"plain_alias"]);
    assert_eq!(*module("plain").pattern, aliased.head());
    assert_eq!(
        (
            module("plain").length,
            module("plain").crc_len,
            module("plain").crc
        ),
        (48, 8, aliased.crc())
    );
    for (name, value) in [("tail_a", 0xa1), ("tail_b", 0xb2)] {
        let tails: Vec<(u32, u8)> = module(name)
            .tail_bytes
            .iter()
            .map(|t| (t.offset, t.value))
            .collect();
        assert_eq!(tails, [(7, value)], "{name}");
        assert!(module(name).reference.is_none());
    }
    for (name, callee) in [("ref_a", "callee_a"), ("ref_b", "callee_b")] {
        let r = module(name)
            .reference
            .as_ref()
            .expect("a reference tells the pair apart");
        assert_eq!(
            (r.offset, r.name.as_slice()),
            (40, callee.as_bytes()),
            "{name}"
        );
    }
    assert_eq!(
        sig.modules
            .iter()
            .filter(|m| m.publics[0].name == b"twice")
            .count(),
        1
    );

    let matcher = Matcher::new(&sig, Endian::Little);
    for p in &patterns[..5] {
        let found: Vec<&[u8]> = matcher
            .match_at(&concrete(p))
            .iter()
            .map(|m| m.publics[0].name.as_slice())
            .collect();
        let mut want = vec![p.publics[0].as_bytes()];
        if p.publics[0].starts_with("ref_") {
            want = vec![&b"ref_a"[..], b"ref_b"];
        }
        assert_eq!(found, want, "{}", p.publics[0]);
    }
}

#[test]
fn a_short_function_at_the_end_of_its_section_matches() {
    let short = |name: &str, len: u8| FuncPattern {
        bytes: (0..len).map(|i| Some(0xc0 + i)).collect(),
        publics: vec![name.to_string()],
        refs: Vec::new(),
    };
    let patterns = [short("fits", 14), short("longer", 20)];
    let built = build_sig(&patterns, &BTreeSet::new(), TARGET, "x").unwrap();
    let sig = Signature::parse(&built.bytes).unwrap();
    let matcher = Matcher::new(&sig, Endian::Little);
    let names = |code: &[u8]| -> Vec<Vec<u8>> {
        crate::flirt::modules_at(&matcher, code, 32)
            .iter()
            .map(|m| m.publics[0].name.clone())
            .collect()
    };
    let code = concrete(&patterns[0]);
    assert!(
        matcher.match_at(&code).is_empty(),
        "the trie alone needs 32 bytes"
    );
    assert_eq!(names(&code), [b"fits".to_vec()]);
    assert_eq!(
        names(&concrete(&patterns[1])[..16]),
        [b"fits".to_vec()],
        "`longer` runs past the section"
    );
    assert!(names(&[]).is_empty());
}

#[test]
fn nothing_to_write_and_an_unknown_processor_are_errors() {
    let twins = [func("one", 1, 0, None), func("two", 1, 0, None)];
    assert!(build_sig(&twins, &BTreeSet::new(), TARGET, "x").is_err());
    let avr = Target {
        architecture: Architecture::Avr,
        ..TARGET
    };
    assert!(build_sig(&twins[..1], &BTreeSet::new(), avr, "x").is_err());
}
