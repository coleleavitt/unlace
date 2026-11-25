fn elf32(machine: u16, little: bool) -> Vec<u8> {
    let mut bytes = vec![0u8; 52];
    bytes[..7].copy_from_slice(&[0x7f, b'E', b'L', b'F', 1, if little { 1 } else { 2 }, 1]);
    let half = |v: u16| {
        if little {
            v.to_le_bytes()
        } else {
            v.to_be_bytes()
        }
    };
    bytes[16..18].copy_from_slice(&half(1));
    bytes[18..20].copy_from_slice(&half(machine));
    bytes[20..24].copy_from_slice(&if little {
        1u32.to_le_bytes()
    } else {
        1u32.to_be_bytes()
    });
    bytes[40..42].copy_from_slice(&half(52));
    bytes
}

fn selected(machine: u16, little: bool) -> Option<String> {
    let bytes = elf32(machine, little);
    super::language_id(&object::File::parse(&*bytes).unwrap())
}

#[test]
fn arcv2_machine_selects_the_language_of_its_byte_order() {
    assert_eq!(
        selected(195, true).as_deref(),
        Some("ARC:LE:32:ARCv2:default")
    );
    assert_eq!(
        selected(195, false).as_deref(),
        Some("ARC:BE:32:ARCv2:default")
    );
    assert_eq!(selected(93, true), None, "ARCompact has no language");
    assert_eq!(selected(40, true), None, "ARM");
}
