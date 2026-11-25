use super::*;

#[test]
fn table_parses() {
    let t = table();
    assert!(t.interfaces.len() > 300);
    assert_eq!(
        interface_of("gEfiDiskIoProtocolGuid"),
        Some("EFI_DISK_IO_PROTOCOL")
    );
    let disk_io = &t.structs["EFI_DISK_IO_PROTOCOL"];
    assert_eq!(disk_io[0], ("Revision", "UINT64"));
    assert!(
        disk_io[1]
            .1
            .starts_with("fn EFI_STATUS(EFI_DISK_IO_PROTOCOL* This")
    );
    assert_eq!(
        interface_of("gEfiSimpleTextOutProtocolGuid"),
        Some("EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL")
    );
}

#[test]
fn names_follow_edk2() {
    assert_eq!(stem("EFI_DISK_IO2_PROTOCOL"), "DiskIo2");
    assert_eq!(
        stem("EFI_PEI_READ_ONLY_VARIABLE2_PPI"),
        "PeiReadOnlyVariable2"
    );
    assert_eq!(
        struct_name_for("gEdkiiFooBar2ProtocolGuid"),
        "EDKII_FOO_BAR2_PROTOCOL"
    );
}
