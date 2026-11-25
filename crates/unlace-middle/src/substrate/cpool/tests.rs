use super::*;
use crate::dtype::type_metatype;
use unlace_base::marshal::{IdRegistry, XmlDecode, XmlEncode};
use unlace_base::space::AddrSpaceManager;

/// A trivial type factory/provider access impl for round-trip tests: every
/// data-type reference encodes as an empty `<void/>` element and decodes
/// back to a fixed skeleton.  This lets the cpool encode/decode round-trip
/// be exercised without the W6 `TypeFactory`.
struct VoidTypeAccess;

fn void_type() -> Rc<Datatype> {
    Rc::new(Datatype::new(0, type_metatype::TYPE_VOID))
}

impl CPoolTypeRef for VoidTypeAccess {
    fn encode_ref(&self, encoder: &mut dyn Encoder) -> UnlaceResult<()> {
        encoder.open_element(&unlace_base::marshal::ELEM_VOID);
        encoder.close_element(&unlace_base::marshal::ELEM_VOID);
        Ok(())
    }
}

impl CPoolTypeRefProvider for VoidTypeAccess {
    fn encode_record_type_ref(
        &self,
        _record: &CPoolRecord,
        encoder: &mut dyn Encoder,
    ) -> UnlaceResult<()> {
        self.encode_ref(encoder)
    }
}

impl CPoolTypeFactory for VoidTypeAccess {
    fn decode_type(&mut self, decoder: &mut dyn Decoder) -> UnlaceResult<Rc<Datatype>> {
        let id = decoder.open_element()?;
        decoder.close_element(id)?;
        Ok(void_type())
    }

    fn decode_type_with_code_flags(
        &mut self,
        decoder: &mut dyn Decoder,
        _is_constructor: bool,
        _is_destructor: bool,
    ) -> UnlaceResult<Rc<Datatype>> {
        let id = decoder.open_element()?;
        decoder.close_element(id)?;
        Ok(void_type())
    }
}

fn registry() -> IdRegistry {
    let mut reg = IdRegistry::with_base_ids();
    // cpool ids
    for a in [&ATTRIB_A, &ATTRIB_B, &ATTRIB_LENGTH, &ATTRIB_TAG] {
        reg.register_attribute(a);
    }
    for e in [&ELEM_CONSTANTPOOL, &ELEM_CPOOLREC, &ELEM_REF, &ELEM_TOKEN] {
        reg.register_element(e);
    }
    reg
}

fn roundtrip(pool: &ConstantPoolInternal) -> ConstantPoolInternal {
    let mgr = AddrSpaceManager::new();
    let reg = registry();
    let mut buf: Vec<u8> = Vec::new();
    {
        let mut enc = XmlEncode::new(&mut buf);
        pool.encode(&mut enc, &VoidTypeAccess).unwrap();
    }
    let mut dec = XmlDecode::new(&mgr, &reg);
    dec.ingest_stream(&buf).unwrap();
    let mut out = ConstantPoolInternal::new();
    out.decode(&mut dec, &mut VoidTypeAccess).unwrap();
    out
}

#[test]
fn cheapsorter_lexicographic_order() {
    let s1 = CheapSorter { a: 1, b: 5 };
    let s2 = CheapSorter { a: 1, b: 9 };
    let s3 = CheapSorter { a: 2, b: 0 };
    assert!(s1 < s2);
    assert!(s2 < s3);
    assert!(s1 < s3);
    // from_refs: single-element ref has b == 0
    assert_eq!(CheapSorter::from_refs(&[7]), CheapSorter { a: 7, b: 0 });
    assert_eq!(CheapSorter::from_refs(&[7, 3]), CheapSorter { a: 7, b: 3 });
}

#[test]
fn put_and_get_record() {
    let mut pool = ConstantPoolInternal::new();
    assert!(pool.empty());
    pool.put_record(&[10], cpool_tag::CLASS_REFERENCE, b"MyClass", void_type())
        .unwrap();
    assert!(!pool.empty());
    let rec = pool.get_record(&[10]).unwrap();
    assert_eq!(rec.get_tag(), cpool_tag::CLASS_REFERENCE);
    assert_eq!(rec.get_token(), b"MyClass");
    assert!(pool.get_record(&[11]).is_none());
}

#[test]
fn duplicate_record_is_error() {
    let mut pool = ConstantPoolInternal::new();
    pool.put_record(&[3, 4], cpool_tag::PRIMITIVE, b"first", void_type())
        .unwrap();
    let err = pool.put_record(&[3, 4], cpool_tag::PRIMITIVE, b"second", void_type());
    assert!(err.is_err());
    // The error message echoes the existing token.
    let msg = err.unwrap_err().to_string();
    assert!(msg.contains("first"), "msg was: {msg}");
}

#[test]
fn roundtrip_primitive_record() {
    let mut pool = ConstantPoolInternal::new();
    {
        let rec = pool.create_record(&[42]).unwrap();
        rec.tag = cpool_tag::PRIMITIVE;
        rec.value = 0xdeadbeef;
        rec.token = b"prim".to_vec();
        rec.type_ = Some(void_type());
    }
    let out = roundtrip(&pool);
    let rec = out.get_record(&[42]).unwrap();
    assert_eq!(rec.get_tag(), cpool_tag::PRIMITIVE);
    assert_eq!(rec.get_value(), 0xdeadbeef);
    assert_eq!(rec.get_token(), b"prim");
}

#[test]
fn roundtrip_classref_with_flags() {
    let mut pool = ConstantPoolInternal::new();
    {
        let rec = pool.create_record(&[1, 2]).unwrap();
        rec.tag = cpool_tag::POINTER_METHOD;
        rec.token = b"<init>".to_vec();
        rec.flags = cpool_flag::IS_CONSTRUCTOR;
        rec.type_ = Some(void_type());
    }
    let out = roundtrip(&pool);
    let rec = out.get_record(&[1, 2]).unwrap();
    assert_eq!(rec.get_tag(), cpool_tag::POINTER_METHOD);
    assert_eq!(rec.get_token(), b"<init>");
    assert!(rec.is_constructor());
    assert!(!rec.is_destructor());
}

#[test]
fn roundtrip_string_literal_bytedata() {
    let mut pool = ConstantPoolInternal::new();
    let bytes: Vec<u8> = (0u16..20).map(|x| x as u8).collect();
    {
        let rec = pool.create_record(&[100]).unwrap();
        rec.tag = cpool_tag::STRING_LITERAL;
        rec.byte_data = Some(bytes.clone());
        rec.type_ = Some(void_type());
    }
    let out = roundtrip(&pool);
    let rec = out.get_record(&[100]).unwrap();
    assert_eq!(rec.get_tag(), cpool_tag::STRING_LITERAL);
    assert_eq!(rec.get_byte_data(), Some(bytes.as_slice()));
    assert_eq!(rec.get_byte_data_length(), 20);
}

#[test]
fn roundtrip_container_order() {
    // Insert out of order; the encode/decode must preserve the sorted set.
    let mut pool = ConstantPoolInternal::new();
    for &(a, b) in &[(5u64, 0u64), (1, 9), (1, 2), (3, 0)] {
        let rec = pool.create_record(&[a, b]).unwrap();
        rec.tag = cpool_tag::CLASS_REFERENCE;
        rec.token = format!("ref_{a}_{b}").into_bytes();
        rec.type_ = Some(void_type());
    }
    let out = roundtrip(&pool);
    // Verify each record survived with the right token.
    for &(a, b) in &[(5u64, 0u64), (1, 9), (1, 2), (3, 0)] {
        let rec = out.get_record(&[a, b]).unwrap();
        assert_eq!(rec.get_token(), format!("ref_{a}_{b}").as_bytes());
    }
    // Verify lexicographic iteration order is preserved.
    let keys: Vec<CheapSorter> = out.cpool_map.keys().copied().collect();
    assert_eq!(
        keys,
        vec![
            CheapSorter { a: 1, b: 2 },
            CheapSorter { a: 1, b: 9 },
            CheapSorter { a: 3, b: 0 },
            CheapSorter { a: 5, b: 0 },
        ]
    );
}

#[test]
fn bad_data_size_is_error() {
    // A <data> length beyond MAX_STRING_SIZE must error on decode.
    // Build a record manually with an oversized length attribute.
    let mgr = AddrSpaceManager::new();
    let reg = registry();
    let mut buf: Vec<u8> = Vec::new();
    {
        let mut enc = XmlEncode::new(&mut buf);
        enc.open_element(&ELEM_CPOOLREC);
        enc.write_string(&ATTRIB_TAG, b"primitive");
        enc.open_element(&ELEM_VALUE);
        enc.write_unsigned_integer(&ATTRIB_CONTENT, 0);
        enc.close_element(&ELEM_VALUE);
        enc.open_element(&ELEM_DATA);
        enc.write_signed_integer(&ATTRIB_LENGTH, MAX_STRING_SIZE);
        enc.write_string(&ATTRIB_CONTENT, b"");
        enc.close_element(&ELEM_DATA);
        enc.open_element(&unlace_base::marshal::ELEM_VOID);
        enc.close_element(&unlace_base::marshal::ELEM_VOID);
        enc.close_element(&ELEM_CPOOLREC);
    }
    let mut dec = XmlDecode::new(&mgr, &reg);
    dec.ingest_stream(&buf).unwrap();
    let mut rec = CPoolRecord::new();
    assert!(rec.decode(&mut dec, &mut VoidTypeAccess).is_err());
}
