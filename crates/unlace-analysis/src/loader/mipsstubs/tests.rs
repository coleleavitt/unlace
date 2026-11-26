use super::*;

#[test]
fn compiler_stubs_require_linkage_and_executable_complete_bytes() {
    let root = std::path::Path::new(env!("CARGO_MANIFEST_DIR")).join("../..");
    for name in [
        "flow-mips32r2-le-local-ssp-stripped.so",
        "flow-mips32r2-be-local-ssp.so",
        "flow-octeon3-n32.so",
        "flow-octeon3-64.so",
    ] {
        let original =
            std::fs::read(root.join("tests/fixtures/mips-import-flow").join(name)).unwrap();
        let file = object::File::parse(original.as_slice()).unwrap();
        let expected = scan_transfers(&file);
        assert!(expected.len() >= 4, "{name}: {expected:?}");
        let section = file.section_by_name(".MIPS.stubs").unwrap();
        let little = file.is_little_endian();
        let word = |bytes: &[u8]| -> u64 {
            if little {
                bytes.iter().rev().fold(0, |v, b| (v << 8) | u64::from(*b))
            } else {
                bytes.iter().fold(0, |v, b| (v << 8) | u64::from(*b))
            }
        };
        let (shoff, shsize, flag_size) = if file.is_64() {
            (word(&original[40..48]), word(&original[58..60]), 8)
        } else {
            (word(&original[32..36]), word(&original[46..48]), 4)
        };
        let flag_offset = (shoff + shsize * section.index().0 as u64 + 8) as usize;
        let mut nonexec = original.clone();
        let flag_byte = flag_offset + if little { 0 } else { flag_size - 1 };
        nonexec[flag_byte] &= !(object::elf::SHF_EXECINSTR as u8);
        assert!(scan_transfers(&object::File::parse(nonexec.as_slice()).unwrap()).is_empty());

        let got = file.section_by_name(".got").unwrap();
        let pointer_size = if file.is_64() { 8 } else { 4 };
        let got_index = got
            .data()
            .unwrap()
            .chunks_exact(pointer_size)
            .position(|bytes| word(bytes) == expected[0].0 - 8)
            .unwrap();
        let got_offset = got.file_range().unwrap().0 as usize + got_index * pointer_size;
        let mut unlinked = original.clone();
        unlinked[got_offset..got_offset + pointer_size].fill(0);
        assert_eq!(
            scan_transfers(&object::File::parse(unlinked.as_slice()).unwrap()).len() + 1,
            expected.len()
        );
        let (offset, _) = section.file_range().unwrap();
        let entry = expected[0].0 - 8;
        let offset = (offset + entry - section.address()) as usize;
        let mut bad = original.clone();
        bad[offset..offset + 4].fill(0);
        let file = object::File::parse(bad.as_slice()).unwrap();
        let actual = scan_transfers(&file);
        assert_eq!(actual.len() + 1, expected.len());
        assert!(!actual.contains(&expected[0]));
    }
}

#[test]
fn complete_stub_requires_saved_return_resolver_and_matching_symbol() {
    for little in [false, true] {
        for (load, immediate) in [(0x8f998010, 0x24180007), (0xdf998010, 0x64180007)] {
            let words: [u32; 4] = [load, 0x03e07825, 0x0320f809, immediate];
            let encode = |w: &[u32]| -> Vec<u8> {
                w.iter()
                    .flat_map(|v| {
                        if little {
                            v.to_le_bytes()
                        } else {
                            v.to_be_bytes()
                        }
                    })
                    .collect()
            };
            let bytes = encode(&words);
            assert!(is_resolver_stub(&bytes, little, 7));
            assert!(!is_resolver_stub(&bytes, little, 8));
            for n in 0..16 {
                assert!(!is_resolver_stub(&bytes[..n], little, 7));
            }
            for i in 0..4 {
                let mut bad = words;
                bad[i] ^= 1;
                assert!(!is_resolver_stub(&encode(&bad), little, 7));
            }
        }
    }
}
