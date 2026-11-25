use super::*;
use object::write::Object as Writer;
use object::{Endianness, SectionKind};

fn attributes(arch: &str) -> Vec<u8> {
    let mut file = vec![4, 16, 5];
    file.extend(arch.as_bytes());
    file.push(0);
    let mut sub = vec![TAG_FILE];
    sub.extend((file.len() as u32 + 5).to_le_bytes());
    sub.extend(file);
    let mut section = Vec::new();
    section.extend((sub.len() as u32 + 4 + 6).to_le_bytes());
    section.extend(b"riscv\0");
    section.extend(sub);
    let mut blob = vec![b'A'];
    blob.extend(section);
    blob
}

fn elf(elf64: bool, sections: &[(&[u8], Vec<u8>)]) -> Vec<u8> {
    let arch = if elf64 {
        Architecture::Riscv64
    } else {
        Architecture::Riscv32
    };
    let mut object = Writer::new(BinaryFormat::Elf, arch, Endianness::Little);
    for (name, bytes) in sections {
        let section = object.add_section(Vec::new(), name.to_vec(), SectionKind::Other);
        object.append_section_data(section, bytes, 1);
    }
    object.write().unwrap()
}

fn select(bytes: &[u8]) -> Result<Option<String>, &'static str> {
    language_id(&object::File::parse(bytes).unwrap())
}

#[test]
fn versions_are_stripped_without_eating_the_name() {
    assert_eq!(
        extensions("rv32i2p1_m2p0_a2p1_c2p0_zmmul1p0_zca1p0_zcmp1p0"),
        ["i", "m", "a", "c", "zmmul", "zca", "zcmp"]
    );
    assert_eq!(extensions("rv64imac_zcmt"), ["i", "m", "a", "c", "zcmt"]);
    assert_eq!(strip_version("zcmp"), "zcmp");
    assert_eq!(strip_version("zcmp1p0"), "zcmp");
    assert_eq!(strip_version("zca1"), "zca");
}

#[test]
fn zcmp_and_zcmt_select_the_zcmp_language_per_class() {
    for (elf64, id) in [
        (false, "RISCV:LE:32:Zcmp:gcc"),
        (true, "RISCV:LE:64:Zcmp:gcc"),
    ] {
        for arch in [
            "rv32i2p1_m2p0_c2p0_zca1p0_zcmp1p0",
            "rv32imac_zcmt1p0",
            "RV32IMAC_ZCA_ZCMP_ZCMT",
        ] {
            let bytes = elf(elf64, &[(b".riscv.attributes", attributes(arch))]);
            assert_eq!(select(&bytes), Ok(Some(id.to_string())), "{arch}");
        }
    }
}

#[test]
fn q_selects_the_flen128_language_on_rv64() {
    let bytes = elf(
        true,
        &[(
            b".riscv.attributes",
            attributes("rv64i2p1_m2p0_a2p1_f2p2_d2p2_q2p2_c2p0"),
        )],
    );
    assert_eq!(select(&bytes), Ok(Some("RISCV:LE:64:GQ:gcc".to_string())));
    let bytes = elf(
        false,
        &[(b".riscv.attributes", attributes("rv32i2p1_f2p2_d2p2_q2p2"))],
    );
    assert_eq!(select(&bytes), Ok(None));
}

#[test]
fn plain_and_absent_declarations_keep_the_default() {
    for arch in [
        "rv32i2p1_m2p0_a2p1_f2p2_d2p2_c2p0",
        "rv64gc",
        "rv32imac_zca1p0_zcb1p0",
    ] {
        let bytes = elf(false, &[(b".riscv.attributes", attributes(arch))]);
        assert_eq!(select(&bytes), Ok(None), "{arch}");
    }
    assert_eq!(select(&elf(false, &[])), Ok(None));
    assert_eq!(select(&elf(true, &[])), Ok(None));
}

#[test]
fn zcd_conflicts_require_an_explicit_target() {
    for arch in ["rv32imafdc_zcmp", "rv32imac_zcd1p0_zcmp1p0", "rv64gc_zcmp"] {
        let bytes = elf(false, &[(b".riscv.attributes", attributes(arch))]);
        assert!(select(&bytes).is_err(), "{arch}");
    }
}

#[test]
fn malformed_and_conflicting_blobs_keep_the_default() {
    let parse = |bytes: &[u8]| arch_string(&object::File::parse(bytes).unwrap());
    let good = attributes("rv32imac_zcmp");
    let mut other = good.clone();
    other[0] = b'B';
    let mut blobs: Vec<Vec<u8>> = [0, 5, 12, 20, good.len() - 1]
        .iter()
        .map(|cut| good[..*cut].to_vec())
        .collect();
    blobs.push(other);
    for blob in blobs {
        let bytes = elf(false, &[(b".riscv.attributes", blob)]);
        assert_eq!(parse(&bytes), Err(MALFORMED));
        assert_eq!(select(&bytes), Ok(None));
    }
    let two = [
        (b".riscv.attributes".as_slice(), good.clone()),
        (b".riscv.attributes".as_slice(), attributes("rv32imac")),
    ];
    let bytes = elf(false, &two);
    assert!(parse(&bytes).is_err());
    assert_eq!(select(&bytes), Ok(None));
}
