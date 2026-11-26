use super::*;

#[test]
fn guid_db_parses() {
    let db = guid_names();
    assert!(db.len() > 900);
    let loaded_image = [
        0xa1, 0x31, 0x1b, 0x5b, 0x62, 0x95, 0xd2, 0x11, 0x8e, 0x3f, 0x00, 0xa0, 0xc9, 0x69, 0x72,
        0x3b,
    ];
    assert_eq!(db.get(&loaded_image), Some(&"gEfiLoadedImageProtocolGuid"));
}

fn make_factory(ptr: i32) -> unlace_decomp::dtype::TypeFactoryImpl {
    let types = unlace_decomp::dtype::TypeFactoryImpl::new();
    types.set_default_alignment_map();
    types.set_max_basetype_size(8);
    types.setup_sizes(Some(ptr), ptr, 4);
    types.cache_core_types().unwrap();
    types
}

#[test]
fn efi_tables_have_spec_offsets() {
    let factory = make_factory(8);
    let efi = types::EfiTypes::build(&factory, 8).expect("tables build");
    let st = efi.get("EFI_SYSTEM_TABLE").unwrap();
    assert_eq!(st.get_size(), 120);
    let bs = efi.get("EFI_BOOT_SERVICES").unwrap();
    assert_eq!(bs.get_size(), 24 + 44 * 8);
    let factory32 = make_factory(4);
    let efi32 = types::EfiTypes::build(&factory32, 4).expect("tables build");
    assert_eq!(efi32.get("EFI_SYSTEM_TABLE").unwrap().get_size(), 72);
}

#[test]
fn every_generated_interface_builds() {
    for ptr in [8, 4] {
        let factory = make_factory(ptr);
        let efi = types::EfiTypes::build(&factory, ptr).expect("tables build");
        for (guid, interface) in &protocols::table().interfaces {
            assert!(
                efi.get(interface).is_some(),
                "{interface} ({guid}) does not build at {ptr}-byte pointers"
            );
            assert!(efi.layout(interface).is_some(), "{interface} has no layout");
        }
    }
}

#[test]
fn interfaces_have_header_offsets() {
    let factory = make_factory(8);
    let efi = types::EfiTypes::build(&factory, 8).expect("tables build");
    let at = |name: &str, member: &str| {
        efi.layout(name)
            .unwrap()
            .iter()
            .find(|m| m.name == member)
            .unwrap()
            .offset
    };
    assert_eq!(at("EFI_DISK_IO_PROTOCOL", "WriteDisk"), 16);
    assert_eq!(at("EFI_DRIVER_BINDING_PROTOCOL", "DriverBindingHandle"), 40);
    assert_eq!(at("EFI_SMM_SYSTEM_TABLE2", "SmmLocateProtocol"), 0xd0);
    assert_eq!(at("EFI_MM_SYSTEM_TABLE", "MmIo.Io.Write"), 0x48);
    assert_eq!(at("EFI_PEI_SERVICES", "LocatePpi"), 0x28);
    let this = efi
        .pieces("", "EFI_STATUS(EFI_DISK_IO_PROTOCOL* This)")
        .unwrap();
    assert_eq!(this.intypes[0].get_ptr_to().unwrap().get_size(), 24);
}

#[test]
fn a_defined_struct_does_not_replace_a_table() {
    let factory = make_factory(8);
    let efi = types::EfiTypes::build(&factory, 8).expect("tables build");
    efi.define(
        "EFI_DISK_IO_PROTOCOL",
        vec![("Field_00".into(), "UINTN".into())],
    );
    assert_eq!(efi.get("EFI_DISK_IO_PROTOCOL").unwrap().get_size(), 24);
    efi.define(
        "PROTOCOL_12345678",
        vec![
            ("Field_00".into(), "UINTN".into()),
            ("Function_08".into(), "FUNC".into()),
        ],
    );
    assert_eq!(efi.get("PROTOCOL_12345678").unwrap().get_size(), 16);
    assert_eq!(efi.defined_fields("PROTOCOL_12345678").unwrap().len(), 2);
}
