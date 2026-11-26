use super::*;

#[test]
fn executables_and_kexts() {
    let mut exe = vec![0u8; 32];
    exe[..4].copy_from_slice(&MH_MAGIC_64.to_le_bytes());
    exe[12..16].copy_from_slice(&MH_EXECUTE.to_le_bytes());
    assert!(is_macho_userland_image(&exe));
    exe[12..16].copy_from_slice(&0xbu32.to_le_bytes());
    assert!(!is_macho_userland_image(&exe));
    assert!(!is_macho_userland_image(b"\x7fELF"));
}
