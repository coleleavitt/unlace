use super::*;

#[test]
fn names_follow_the_ffs_type() {
    assert_eq!(named(0x06, Kind::Pei).expect("PEIM").name, "PeimEntryPoint");
    assert_eq!(named(0x04, Kind::Pei).expect("PEI core").name, "PeiCore");
    assert_eq!(named(0x05, Kind::Dxe).expect("DXE core").name, "DxeMain");
    assert_eq!(
        named(0x0e, Kind::Mm).expect("MM standalone").name,
        "StandaloneMmEntryPoint"
    );
    assert_eq!(
        named(0x07, Kind::Dxe).expect("driver").name,
        "ModuleEntryPoint"
    );
    let combined = named(0x08, Kind::Pei).expect("combined PEIM");
    assert_eq!(combined.label, Some("COMBINED_PEIM_DRIVER"));
    let mm = named(0x0c, Kind::Dxe).expect("combined MM_DXE");
    assert_eq!(mm.label, Some("COMBINED_MM_DXE"));
    assert!(named(0x02, Kind::Dxe).is_none());
}
