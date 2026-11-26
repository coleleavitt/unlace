use super::*;

fn int() -> CType {
    CType::Int {
        bytes: 0,
        signed: true,
    }
}

#[test]
fn decodes_a_cdecl_prototype_with_names() {
    let ty = [
        BT_FUNC,
        0x30,
        BT_INT,
        0x03,
        BT_PTR,
        BT_INT8 | BTMT_CHAR,
        BT_INT,
    ];
    let fields = [0x04, b'b', b'u', b'f', 0x02, b'n'];
    let f = decode_func(&ty, &fields).unwrap();
    assert_eq!(f.cc, CallConv::Cdecl);
    assert_eq!(f.declaration("parse"), "int parse(char *buf, int n)");
}

#[test]
fn unnamed_and_pointer_returns_render_like_ida() {
    let f = FuncType {
        cc: CallConv::Fastcall,
        ret: CType::Ptr(Box::new(CType::Const(Box::new(CType::Char)))),
        params: vec![Param {
            ty: CType::Int {
                bytes: 8,
                signed: false,
            },
            name: None,
        }],
    };
    assert_eq!(
        f.declaration("name_of"),
        "const char *name_of(unsigned long long a1)"
    );
    let void = FuncType {
        cc: CallConv::VoidArg,
        ret: CType::Void,
        params: vec![],
    };
    assert_eq!(void.declaration("init"), "void init(void)");
}

#[test]
fn chunks_roundtrip() {
    let f = FuncType {
        cc: CallConv::Stdcall,
        ret: CType::Named {
            kind: NamedKind::Typedef,
            name: "HRESULT".into(),
        },
        params: vec![
            Param {
                ty: CType::Ptr(Box::new(CType::Named {
                    kind: NamedKind::Struct,
                    name: "IUnknown".into(),
                })),
                name: Some("self".into()),
            },
            Param {
                ty: CType::Const(Box::new(CType::Ptr(Box::new(CType::Void)))),
                name: None,
            },
            Param {
                ty: CType::Float { bytes: 8 },
                name: Some("x".into()),
            },
        ],
    };
    let chunk = encode_type_chunk(&f).unwrap();
    assert_eq!(chunk[0], 1, "user-type flag");
    assert_eq!(chunk.iter().filter(|&&b| b == 0).count(), 1);
    assert_eq!(decode_type_chunk(&chunk).unwrap(), f);
    assert_eq!(
        f.declaration("QueryThing"),
        "HRESULT QueryThing(struct IUnknown *self, void *const a2, double x)"
    );
}

#[test]
fn reads_the_chunk_ida_writes() {
    // Flag 0 (not user-defined), `int (char *)` cdecl, NUL, field "s".
    let chunk = [
        0,
        BT_FUNC,
        0x30,
        BT_INT,
        0x02,
        BT_PTR,
        BT_INT8 | BTMT_CHAR,
        0,
        0x02,
        b's',
    ];
    let f = decode_type_chunk(&chunk).unwrap();
    assert_eq!(f.declaration("len"), "int len(char *s)");
    // No names: no NUL, no fields.
    let unnamed = FuncType {
        cc: CallConv::Cdecl,
        ret: int(),
        params: vec![Param {
            ty: int(),
            name: None,
        }],
    };
    let enc = encode_type_chunk(&unnamed).unwrap();
    assert!(!enc.contains(&0));
    assert_eq!(decode_type_chunk(&enc).unwrap(), unnamed);
    assert!(decode_type_chunk(&[7, BT_FUNC]).is_none());
}

#[test]
fn varargs_print_an_ellipsis() {
    let f = FuncType {
        cc: CallConv::Ellipsis,
        ret: int(),
        params: vec![Param {
            ty: CType::Ptr(Box::new(CType::Const(Box::new(CType::Char)))),
            name: Some("fmt".into()),
        }],
    };
    let back = decode_type_chunk(&encode_type_chunk(&f).unwrap()).unwrap();
    assert_eq!(
        back.declaration("printf"),
        "int printf(const char *fmt, ...)"
    );
}

#[test]
fn refuses_what_it_cannot_read() {
    // A function-pointer parameter, an array, an ordinal typedef, type attributes, a bad cc.
    for ty in [
        &[BT_FUNC, 0x30, BT_INT, 0x02, BT_PTR, BT_FUNC][..],
        &[BT_FUNC, 0x30, BT_INT, 0x02, 0x0B, 0x05][..],
        &[BT_FUNC, 0x30, BT_COMPLEX | BTMT_TYPEDEF, 0x03, b'#', b'1'][..],
        &[BT_FUNC, 0x30, TAH_BYTE, 0x01][..],
        &[BT_FUNC, 0x90, BT_INT, 0x01][..],
        &[BT_INT][..],
        &[][..],
    ] {
        assert!(decode_func(ty, &[]).is_none(), "{ty:?}");
    }
}

#[test]
fn long_counts_use_two_dt_bytes() {
    let mut out = Vec::new();
    write_dt(&mut out, 300).unwrap();
    assert_eq!(out.len(), 2);
    assert_eq!(Cur::new(&out).dt(), Some(300));
    let mut out = Vec::new();
    write_dt(&mut out, 0x7F).unwrap();
    assert_eq!(Cur::new(&out).dt(), Some(0x7F));
}

#[test]
fn deep_pointers_stop() {
    let mut ty = vec![BT_FUNC, 0x30];
    ty.extend(std::iter::repeat_n(BT_PTR, 64));
    ty.push(BT_INT);
    ty.push(0x01);
    assert!(decode_func(&ty, &[]).is_none());
}
