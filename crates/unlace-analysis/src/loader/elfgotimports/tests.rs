use object::read::{Object, ObjectSection};

use super::{NameChars, minted_name, ranged, resolve, slots};

fn fixture() -> Vec<u8> {
    std::fs::read(concat!(
        env!("CARGO_MANIFEST_DIR"),
        "/tests/fixtures/elf_gotdata_x86_64.so"
    ))
    .unwrap()
}

#[test]
fn a_slot_name_is_sanitized_like_every_minted_name() {
    assert_eq!(minted_name(b"stdout", NameChars::Safe), "stdout");
    let hostile = minted_name(b"imported_c\nunter*/x", NameChars::Safe);
    assert!(
        !hostile.contains('\n') && !hostile.contains("*/"),
        "{hostile:?}"
    );
}

#[test]
fn a_slot_at_the_top_of_the_address_space_is_dropped() {
    let mut bytes = fixture();
    let (off, len) = {
        let file = object::File::parse(&*bytes).unwrap();
        assert_eq!(slots(&file).len(), 3);
        file.section_by_name(".rela.dyn")
            .unwrap()
            .file_range()
            .unwrap()
    };
    let stdout_slot = 0x2690u64.to_le_bytes();
    let at = (off..off + len)
        .step_by(24)
        .find(|&at| bytes[at as usize..at as usize + 8] == stdout_slot)
        .unwrap() as usize;
    bytes[at..at + 8].copy_from_slice(&0xffff_ffff_ffff_fffcu64.to_le_bytes());
    let file = object::File::parse(&*bytes).unwrap();
    assert!(
        resolve(&file)
            .iter()
            .any(|&(slot, _)| slot == 0xffff_ffff_ffff_fffc)
    );
    assert_eq!(slots(&file), [(0x2680, 0x2688), (0x2688, 0x2690)]);
    assert_eq!(ranged(&file).len(), 2);
}
