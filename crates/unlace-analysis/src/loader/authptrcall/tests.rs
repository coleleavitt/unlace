use super::*;

/// `macho_arm64e_auth`'s one `__auth_ptr` slot binds `_ext_func`; the
/// `__const` binds beside it are not this pass's.
#[test]
fn names_the_auth_ptr_bind() {
    let path = concat!(
        env!("CARGO_MANIFEST_DIR"),
        "/tests/fixtures/macho_arm64e_auth"
    );
    let bytes = std::fs::read(path).expect("read fixture");
    let file = object::File::parse(bytes.as_slice()).expect("parse Mach-O");
    let out = auth_ptr_binds(&file, &bytes);
    let symbols: Vec<(u64, &str, SymKind)> = out
        .symbols
        .iter()
        .map(|s| (s.addr, s.name.as_str(), s.kind))
        .collect();
    assert_eq!(symbols, vec![(0x100004018, "ext_func", SymKind::Function)]);
    assert_eq!(out.externref, vec![(0x100004018, 0x100004020)]);
}

/// A `__auth_ptr` header mapped at the top of the address space bounds its
/// range instead of overflowing it.
#[test]
fn auth_ptr_section_at_the_top_of_the_address_space() {
    let path = concat!(
        env!("CARGO_MANIFEST_DIR"),
        "/tests/fixtures/macho_arm64e_auth"
    );
    let mut bytes = std::fs::read(path).expect("read fixture");
    let u32_at = |b: &[u8], o: usize| u32::from_le_bytes(b[o..o + 4].try_into().unwrap()) as usize;
    let mut off = 32;
    for _ in 0..u32_at(&bytes, 16) {
        if u32_at(&bytes, off) == 0x19 {
            for j in 0..u32_at(&bytes, off + 64) {
                let s = off + 72 + 80 * j;
                if bytes[s..s + 16].starts_with(AUTH_PTR_SECTION.as_bytes()) {
                    bytes[s + 32..s + 40].copy_from_slice(&(u64::MAX - 3).to_le_bytes());
                }
            }
        }
        off += u32_at(&bytes, off + 4);
    }
    let file = object::File::parse(bytes.as_slice()).expect("parse Mach-O");
    assert!(auth_ptr_binds(&file, &bytes).externref.is_empty());
}
