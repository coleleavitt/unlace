use super::*;

fn push_u32(out: &mut Vec<u8>, v: u32) {
    out.extend_from_slice(&v.to_le_bytes());
}

/// A type record header: name offset, `info` built from kind/vlen/kind_flag, and a size or type.
fn rec(name_off: u32, kind: u32, vlen: u32, kind_flag: bool, size_or_type: u32) -> Vec<u8> {
    let info = vlen | (kind << 24) | ((kind_flag as u32) << 31);
    let mut out = Vec::new();
    push_u32(&mut out, name_off);
    push_u32(&mut out, info);
    push_u32(&mut out, size_or_type);
    out
}

fn words(vals: &[u32]) -> Vec<u8> {
    let mut out = Vec::new();
    for v in vals {
        push_u32(&mut out, *v);
    }
    out
}

/// A complete BTF blob: a 24-byte header, the type section, then the string table.
fn blob(types: &[u8], strings: &[u8]) -> Vec<u8> {
    let mut out = Vec::new();
    out.extend_from_slice(&BTF_MAGIC.to_le_bytes());
    out.push(1);
    out.push(0);
    push_u32(&mut out, 24);
    push_u32(&mut out, 0);
    push_u32(&mut out, types.len() as u32);
    push_u32(&mut out, types.len() as u32);
    push_u32(&mut out, strings.len() as u32);
    out.extend_from_slice(types);
    out.extend_from_slice(strings);
    out
}

#[test]
fn header_and_names() {
    let bytes = blob(&[], b"\0int\0");
    assert!(is_btf(&bytes));
    assert!(!is_btf(b"\xff\xff"));
    let btf = Btf::parse(&bytes).unwrap();
    assert_eq!(btf.header.version, 1);
    assert_eq!(btf.header.hdr_len, 24);
    assert!(btf.types.is_empty());
    assert_eq!(btf.name(1), Some("int"));
    assert_eq!(btf.name(0), None);
}

#[test]
fn read_string_bounds() {
    assert_eq!(read_string(b"hello\0world\0", 6), Some("world"));
    assert_eq!(read_string(b"abc\0", 99), None);
}

#[test]
fn int_and_pointer_ids_start_at_one() {
    let mut t = rec(1, 1, 0, false, 4);
    push_u32(&mut t, (1 << 24) | 32);
    t.extend(rec(0, 2, 0, false, 1));
    let btf = Btf::parse(&blob(&t, b"\0int\0")).unwrap();
    assert_eq!(
        btf.type_by_id(1).unwrap().kind,
        BtfKind::Int {
            size: 4,
            encoding: 1,
            offset: 0,
            bits: 32
        }
    );
    assert_eq!(btf.type_by_id(2).unwrap().kind, BtfKind::Ptr { target: 1 });
    assert!(btf.type_by_id(0).is_none());
    assert!(btf.type_by_id(3).is_none());
}

#[test]
fn struct_bitfields_with_kind_flag() {
    let mut t = rec(3, 4, 2, true, 8);
    t.extend(words(&[3, 1, (4 << 24) | 5]));
    t.extend(words(&[0, 1, 64]));
    let btf = Btf::parse(&blob(&t, b"\0s\0a\0b\0")).unwrap();
    let BtfKind::Struct { size, members } = &btf.type_by_id(1).unwrap().kind else {
        panic!("expected struct");
    };
    assert_eq!(*size, 8);
    assert_eq!(
        members[0],
        BtfMember {
            name_off: 3,
            ty: 1,
            bit_offset: 5,
            bitfield_size: 4
        }
    );
    assert_eq!(
        members[1],
        BtfMember {
            name_off: 0,
            ty: 1,
            bit_offset: 64,
            bitfield_size: 0
        }
    );
}

#[test]
fn enum_sign_extends_and_enum64_joins_halves() {
    let mut t = rec(0, 6, 1, false, 4);
    t.extend(words(&[4, 0xffff_ffff]));
    t.extend(rec(0, 19, 1, false, 8));
    t.extend(words(&[0, 0, 1]));
    let btf = Btf::parse(&blob(&t, b"\0E\0")).unwrap();
    let BtfKind::Enum { values, .. } = &btf.type_by_id(1).unwrap().kind else {
        panic!("expected enum");
    };
    assert_eq!(values[0].value, -1);
    let BtfKind::Enum64 { values, .. } = &btf.type_by_id(2).unwrap().kind else {
        panic!("expected enum64");
    };
    assert_eq!(values[0].value, 1i64 << 32);
}

#[test]
fn func_proto_and_func() {
    let mut t = rec(0, 13, 1, false, 1);
    t.extend(words(&[0, 1]));
    t.extend(rec(2, 12, 1, false, 1));
    let btf = Btf::parse(&blob(&t, b"\0\0f\0")).unwrap();
    assert_eq!(
        btf.type_by_id(1).unwrap().kind,
        BtfKind::FuncProto {
            ret: 1,
            params: vec![BtfParam { name_off: 0, ty: 1 }]
        }
    );
    assert_eq!(
        btf.type_by_id(2).unwrap().kind,
        BtfKind::Func {
            proto: 1,
            linkage: 1
        }
    );
    assert_eq!(btf.name(2), Some("f"));
}

#[test]
fn datasec_entries() {
    let mut t = rec(0, 15, 1, false, 16);
    t.extend(words(&[2, 0, 16]));
    let btf = Btf::parse(&blob(&t, b"")).unwrap();
    assert_eq!(
        btf.type_by_id(1).unwrap().kind,
        BtfKind::Datasec {
            size: 16,
            vars: vec![BtfVarSecinfo {
                ty: 2,
                offset: 0,
                size: 16
            }]
        }
    );
}

#[test]
fn rejects_bad_input_without_panicking() {
    assert_eq!(Btf::parse(b"\x9f\xeb\x01"), Err(BtfError::Short));

    let mut bad_magic = blob(&[], b"");
    bad_magic[0] = 0;
    assert!(matches!(Btf::parse(&bad_magic), Err(BtfError::BadMagic(_))));

    let mut bad_version = blob(&[], b"");
    bad_version[2] = 2;
    assert_eq!(
        Btf::parse(&bad_version),
        Err(BtfError::UnsupportedVersion(2))
    );

    let mut oversized = blob(&[], b"");
    oversized[12..16].copy_from_slice(&u32::MAX.to_le_bytes());
    assert_eq!(Btf::parse(&oversized), Err(BtfError::SectionOutOfRange));

    let unknown = rec(0, 31, 0, false, 0);
    assert_eq!(
        Btf::parse(&blob(&unknown, b"")),
        Err(BtfError::UnknownKind {
            type_id: 1,
            kind: 31
        })
    );

    let mut short_struct = rec(0, 4, 3, false, 8);
    short_struct.extend(words(&[0, 1, 0]));
    assert_eq!(
        Btf::parse(&blob(&short_struct, b"")),
        Err(BtfError::Truncated { type_id: 1 })
    );

    let huge_vlen = rec(0, 4, 0xffff, false, 8);
    assert_eq!(
        Btf::parse(&blob(&huge_vlen, b"")),
        Err(BtfError::Truncated { type_id: 1 })
    );
}
