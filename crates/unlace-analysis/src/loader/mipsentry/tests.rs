use super::*;

#[derive(Debug)]
struct Image([u8; 64]);
impl ImageBytes for Image {
    fn fill_span(&self, bytes: &mut [u8], _: u64) -> usize {
        bytes.copy_from_slice(&self.0[..bytes.len()]);
        0
    }
    fn mapped_covers(&self, _: u64, _: u64) -> bool {
        true
    }
}

#[test]
fn elf32_entry_seeds_sign_extend_high_addresses() {
    for little in [false, true] {
        let mut bytes = [0; 64];
        for (raw, word) in
            bytes
                .as_chunks_mut::<4>()
                .0
                .iter_mut()
                .zip([0x3c1c0002u32, 0x279c8000, 0x0399e021])
        {
            raw.copy_from_slice(&if little {
                word.to_le_bytes()
            } else {
                word.to_be_bytes()
            });
        }
        let image = Image(bytes);
        for offset in [0x1000, 0x80001000, 0xffff1000] {
            assert_eq!(
                value(&image, offset, true, little),
                Some((offset as u32 as i32 as i64) as u64)
            );
            assert_eq!(value(&image, offset, false, little), Some(offset));
        }
        assert_eq!(value(&image, 0x1002, true, little), None);
    }
}

#[test]
fn unmapped_entries_have_no_seed() {
    #[derive(Debug)]
    struct Unmapped;
    impl ImageBytes for Unmapped {
        fn fill_span(&self, bytes: &mut [u8], _: u64) -> usize {
            bytes.len()
        }
        fn mapped_covers(&self, _: u64, _: u64) -> bool {
            false
        }
    }
    assert_eq!(value(&Unmapped, 0x1000, false, false), None);
}

#[test]
fn pic_prefixes_require_the_complete_linked_address_computation() {
    for little in [false, true] {
        let bytes = |words: &[u32]| {
            words
                .iter()
                .flat_map(|word| {
                    if little {
                        word.to_le_bytes()
                    } else {
                        word.to_be_bytes()
                    }
                })
                .collect::<Vec<_>>()
        };
        for words in [
            vec![0x3c030001, 0x00791821, 0x2463a000],
            vec![0x3c030001, 0x0079182d, 0x6463a000],
            vec![0x3c1c0002, 0x279c8000, 0x0399e021],
            vec![
                0x27bdffe0, 0xafbe001c, 0x03a0f025, 0x3c030001, 0x00791821, 0x2463a000,
            ],
        ] {
            let raw = bytes(&words);
            assert!(has_setup(&raw, little));
            for end in 0..raw.len() {
                assert!(!has_setup(&raw[..end], little));
            }
        }
        for words in [
            vec![0x0320f809, 0, 0],
            vec![
                0x27bdffd8, 0xafb10020, 0x2411ffff, 0xafb0001c, 0x24701ff0, 0xafbf0024, 0x0320f809,
            ],
            vec![0x3c030001, 0x00791821, 0x2484a000],
            vec![0x3c030001, 0x00781821, 0x2463a000],
            vec![0x03e00008, 0, 0x3c030001, 0x00791821, 0x2463a000],
            vec![0, 0x3c1c0002, 0x279c8000, 0x0399e021],
            vec![0, 0, 0x27bdffe0, 0x3c030001, 0x00791821, 0x2463a000],
        ] {
            assert!(!has_setup(&bytes(&words), little));
        }
    }
}
