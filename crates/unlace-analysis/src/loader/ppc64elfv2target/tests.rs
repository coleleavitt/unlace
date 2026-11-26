use object::write::Object;
use object::{Architecture, BinaryFormat, Endianness, FileFlags};

fn selected(endian: Endianness, e_flags: u32) -> Option<String> {
    let mut object = Object::new(BinaryFormat::Elf, Architecture::PowerPc64, endian);
    object.flags = FileFlags::Elf {
        os_abi: 0,
        abi_version: 0,
        e_flags,
    };
    let bytes = object.write().unwrap();
    super::language_id(&object::File::parse(&*bytes).unwrap())
}

#[test]
fn big_endian_abi_version_2_takes_the_elfv2_spec() {
    assert_eq!(selected(Endianness::Big, 2).as_deref(), Some(super::BE_ID));
    assert_eq!(selected(Endianness::Big, 1), None, "ELFv1");
    assert_eq!(
        selected(Endianness::Big, 0),
        None,
        "unspecified stays ELFv1"
    );
}

#[test]
fn little_endian_elfv2_takes_the_power_isa_language() {
    assert_eq!(
        selected(Endianness::Little, 2).as_deref(),
        Some(super::LE_ID)
    );
    assert_eq!(
        selected(Endianness::Little, 0).as_deref(),
        Some(super::LE_ID),
        "unspecified little-endian is ELFv2"
    );
    assert_eq!(selected(Endianness::Little, 1), None, "declared ELFv1");
}
