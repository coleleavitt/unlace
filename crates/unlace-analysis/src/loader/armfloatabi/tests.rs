use super::*;
fn tagged(tags: &[u8], little: bool) -> Vec<u8> {
    let put = |v: usize| {
        if little {
            (v as u32).to_le_bytes()
        } else {
            (v as u32).to_be_bytes()
        }
    };
    let mut data = vec![b'A'];
    data.extend(put(4 + 6 + 5 + tags.len()));
    data.extend(b"aeabi\0");
    data.push(1);
    data.extend(put(5 + tags.len()));
    data.extend(tags);
    data
}
#[test]
fn floating_point_hardware_is_read_from_the_architecture_tags() {
    for little in [true, false] {
        let read = |tags: &[u8]| hardware_value(&tagged(tags, little), little);
        assert_eq!(read(&[6, 10]), Some(Some(false)));
        assert_eq!(read(&[6, 10, 10, 0, 12, 0]), Some(Some(false)));
        assert_eq!(read(&[6, 10, 10, 4]), Some(Some(true)));
        assert_eq!(read(&[12, 2]), Some(Some(true)));
        assert_eq!(read(&[48, 1]), Some(Some(true)));
        assert_eq!(hardware_value(b"A", little), Some(None));
    }
}
fn section(value: u8, little: bool) -> Vec<u8> {
    let mut result = vec![b'A'];
    let bytes = if little {
        16u32.to_le_bytes()
    } else {
        16u32.to_be_bytes()
    };
    result.extend(bytes);
    result.extend(b"aeabi\0");
    result.push(1);
    result.extend(if little {
        6u32.to_le_bytes()
    } else {
        6u32.to_be_bytes()
    });
    result.extend([28, value]);
    // File subsection length includes the tag byte and four-byte length.
    let bytes = if little {
        7u32.to_le_bytes()
    } else {
        7u32.to_be_bytes()
    };
    result[12..16].copy_from_slice(&bytes);
    let size = (result.len() - 1) as u32;
    result[1..5].copy_from_slice(&if little {
        size.to_le_bytes()
    } else {
        size.to_be_bytes()
    });
    result
}
#[test]
fn only_the_vfp_calling_convention_is_positive_evidence() {
    for little in [true, false] {
        for value in 0..=3 {
            assert_eq!(
                attributes(&section(value, little), little),
                Some(Some(value == 1))
            );
        }
        let good = section(1, little);
        for end in 0..good.len() {
            assert_ne!(attributes(&good[..end], little), Some(Some(true)));
        }
        let mut conflict = good.clone();
        conflict.extend_from_slice(&section(0, little)[1..]);
        assert_eq!(attributes(&conflict, little), None);
    }
}
#[test]
fn elf_flags_attributes_and_conflicts_are_checked_together() {
    use object::write::Object as Writer;
    use object::{Architecture, BinaryFormat, Endianness, FileFlags, SectionKind};
    for endian in [Endianness::Little, Endianness::Big] {
        for linked in [false, true] {
            for flags in [0, 0x05000000, 0x05000200, 0x05000400, 0x05000600] {
                for value in [None, Some(0), Some(1), Some(2), Some(3)] {
                    let mut object = Writer::new(BinaryFormat::Elf, Architecture::Arm, endian);
                    object.flags = FileFlags::Elf {
                        os_abi: 0,
                        abi_version: 0,
                        e_flags: flags,
                    };
                    if let Some(value) = value {
                        let id = object.add_section(
                            Vec::new(),
                            b".ARM.attributes".to_vec(),
                            SectionKind::Other,
                        );
                        object.append_section_data(
                            id,
                            &section(value, endian == Endianness::Little),
                            1,
                        );
                    }
                    let mut bytes = object.write().unwrap();
                    if linked {
                        bytes[16..18].copy_from_slice(&if endian == Endianness::Little {
                            3u16.to_le_bytes()
                        } else {
                            3u16.to_be_bytes()
                        });
                    }
                    let file = object::File::parse(&*bytes).unwrap();
                    let header = linked && flags >> 24 >= 5;
                    let expected = if header {
                        flags & 0x600 == 0x400 && value.is_none_or(|v| v == 1)
                    } else {
                        value == Some(1)
                    };
                    assert_eq!(
                        vfp_args(&file),
                        expected,
                        "{endian:?} linked={linked} flags={flags:x} attribute={value:?}"
                    );
                }
            }
        }
    }
}
#[test]
fn scoped_or_malformed_attribute_evidence_is_declined() {
    for little in [true, false] {
        let good = section(1, little);
        for kind in [2, 3] {
            let mut scoped = good.clone();
            scoped[11] = kind;
            assert_eq!(attributes(&scoped, little), None);
        }
        let mut malformed = good.clone();
        malformed[17] = 0x80;
        assert_eq!(attributes(&malformed, little), None);
        let mut unknown = good.clone();
        unknown[5..10].copy_from_slice(b"other");
        assert_eq!(attributes(&unknown, little), Some(None));
    }
}

fn arm_object(attributes: Option<Vec<u8>>) -> Vec<u8> {
    use object::write::Object as Writer;
    use object::{Architecture, BinaryFormat, Endianness, SectionKind};
    let mut object = Writer::new(BinaryFormat::Elf, Architecture::Arm, Endianness::Little);
    if let Some(data) = attributes {
        let id = object.add_section(Vec::new(), b".ARM.attributes".to_vec(), SectionKind::Other);
        object.append_section_data(id, &data, 1);
    }
    object.write().unwrap()
}

#[test]
fn only_an_explicit_m_profile_or_a32_ban_is_thumb_only() {
    let cases = [
        (None, false),
        (Some(tagged(&[6, 13, 7, b'M', 9, 2], true)), true),
        (Some(tagged(&[6, 10, 7, b'A', 8, 1, 9, 2], true)), false),
        (Some(tagged(&[7, b'R'], true)), false),
        (Some(tagged(&[8, 0], true)), true),
        (Some(tagged(&[28, 1], true)), false),
    ];
    for (attributes, expected) in cases {
        let bytes = arm_object(attributes.clone());
        let file = object::File::parse(&*bytes).unwrap();
        assert_eq!(thumb_only(&file), expected, "{attributes:?}");
    }
}

#[test]
fn the_vfp_answer_ignores_the_other_tags() {
    assert_eq!(
        attributes(&tagged(&[7, b'M', 28, 1], true), true),
        Some(Some(true))
    );
    assert_eq!(
        attributes(&tagged(&[7, b'M'], true), true),
        Some(Some(false))
    );
}
