use super::*;
use std::io::Cursor;

use unlace_base::marshal::{Encoder, PackedEncode};
use unlace_num::opcodes::{OpCode, OpcodeEncoder};
use unlace_sleigh::translate::{ATTRIB_CODE, ELEM_OP};

use crate::client::GhidraClient;

/// A realistic tspec, shaped exactly like SleighLanguage.encodeTranslator
/// output (single line, XmlEncode(false)): OTHER at unique index 1
/// (required by insertSpace), then unique/ram/register.
pub const TEST_TSPEC: &[u8] = b"<sleigh bigendian=\"false\" uniqbase=\"0x10000000\">\
<spaces defaultspace=\"ram\">\
<space_other name=\"OTHER\" index=\"1\" size=\"8\" bigendian=\"false\" delay=\"0\" physical=\"true\"/>\
<space_unique name=\"unique\" index=\"2\" size=\"4\" bigendian=\"false\" delay=\"0\" physical=\"true\"/>\
<space name=\"ram\" index=\"3\" size=\"8\" bigendian=\"false\" delay=\"1\" physical=\"true\"/>\
<space name=\"register\" index=\"4\" size=\"4\" bigendian=\"false\" delay=\"0\" physical=\"true\"/>\
</spaces></sleigh>";

// -- TspecModel decode (the former GhidraTranslate::decode tests) --------

#[test]
fn test_decode_tspec() {
    let registry = build_registry();
    let tr = TspecModel::decode(TEST_TSPEC, &registry).unwrap();
    assert!(!tr.big_endian);
    assert_eq!(tr.unique_base, 0x10000000);
    let ram = tr.manager.get_space_by_name("ram").expect("ram space");
    assert_eq!(ram.get_index(), 3);
    assert_eq!(ram.get_addr_size(), 8);
    let reg = tr
        .manager
        .get_space_by_name("register")
        .expect("register space");
    assert_eq!(reg.get_index(), 4);
    let unique = tr
        .manager
        .get_space_by_name("unique")
        .expect("unique space");
    assert_eq!(unique.get_index(), 2);
    let def = tr.manager.get_default_code_space().expect("default space");
    assert_eq!(def.get_name(), "ram");
    let cspace = tr.manager.get_constant_space().expect("constant space");
    assert_eq!(cspace.get_index(), 0);
}

#[test]
fn test_decode_tspec_truncate_space() {
    let registry = build_registry();
    let tspec = b"<sleigh bigendian=\"true\" uniqbase=\"0x100\">\
<spaces defaultspace=\"ram\">\
<space name=\"ram\" index=\"1\" size=\"8\" bigendian=\"true\" delay=\"1\" physical=\"true\"/>\
</spaces><truncate_space space=\"ram\" size=\"4\"/></sleigh>";
    let tr = TspecModel::decode(tspec, &registry).unwrap();
    assert!(tr.big_endian);
    let ram = tr.manager.get_space_by_name("ram").unwrap();
    assert_eq!(ram.get_addr_size(), 4);
}

#[test]
fn test_decode_tspec_rejects_non_sleigh_root() {
    let registry = build_registry();
    assert!(TspecModel::decode(b"<x/>", &registry).is_err());
}

// -- GhidraTranslate live-translator tests (canned-stream MockJava) ------

type TestClient = SharedClient<Cursor<Vec<u8>>, Vec<u8>>;

fn shared(reader: Vec<u8>) -> TestClient {
    Rc::new(RefCell::new(GhidraClient::new(
        Cursor::new(reader),
        Vec::new(),
    )))
}

fn translate(client: TestClient) -> GhidraTranslate<Cursor<Vec<u8>>, Vec<u8>> {
    GhidraTranslate::new(TEST_TSPEC, &build_registry(), client).expect("tspec parses")
}

fn burst(v: &mut Vec<u8>, code: u8) {
    v.extend_from_slice(&[0, 0, 1, code]);
}

/// Wrap a packed document as a query response: response open (8), string
/// open (14), the packed bytes, string close (15), response close (9).
fn packed_response(packed: &[u8]) -> Vec<u8> {
    let mut r = Vec::new();
    burst(&mut r, 8);
    burst(&mut r, 14);
    r.extend_from_slice(packed);
    burst(&mut r, 15);
    burst(&mut r, 9);
    r
}

/// A plain-string query response (getRegisterName / getUserOpName):
/// response open (8), string open (14), bytes, string close (15),
/// response close (9).
fn string_response(s: &[u8]) -> Vec<u8> {
    let mut r = Vec::new();
    burst(&mut r, 8);
    burst(&mut r, 14);
    r.extend_from_slice(s);
    burst(&mut r, 15);
    burst(&mut r, 9);
    r
}

/// An empty query response: response open (8) then response close (9),
/// with no string stream — `read_all` returns `false`.
fn empty_response() -> Vec<u8> {
    let mut r = Vec::new();
    burst(&mut r, 8);
    burst(&mut r, 9);
    r
}

fn ram_space(tr: &GhidraTranslate<Cursor<Vec<u8>>, Vec<u8>>) -> Rc<AddrSpace> {
    Rc::clone(tr.manager.get_space_by_name("ram").expect("ram"))
}

/// A recording `PcodeEmit` that captures each decoded op.
#[derive(Default)]
struct RecordEmit {
    ops: Vec<(OpCode, Option<VarnodeData>, Vec<VarnodeData>)>,
}
impl PcodeEmit for RecordEmit {
    fn dump(
        &mut self,
        _addr: &Address,
        opc: OpCode,
        outvar: Option<&VarnodeData>,
        vars: &[VarnodeData],
    ) {
        self.ops.push((opc, outvar.cloned(), vars.to_vec()));
    }
}

/// (a) `one_instruction` against a canned `<inst><addr/><op ...></inst>`
/// getPcode response: assert the byte-exact request framing AND the
/// decoded ops handed to the emit.
#[test]
fn one_instruction_decodes_inst_ops() {
    // Build the getPcode response document over the tspec manager.
    let model = TspecModel::decode(TEST_TSPEC, &build_registry()).unwrap();
    let ram = Rc::clone(model.manager.get_space_by_name("ram").unwrap());
    // ELEM_INST id 98 (unlace-decomp/pcodeinject.rs) — any non-unimpl id.
    let elem_inst = unlace_base::marshal::ElementId::new("inst", 98);
    let mut doc = Vec::new();
    {
        let mut e = PackedEncode::new(&mut doc);
        e.open_element(&elem_inst);
        e.write_signed_integer(&ATTRIB_OFFSET, 4); // instruction length
        // the pc <addr>
        Address::new(Rc::clone(&ram), 0x401000)
            .encode(&mut e)
            .unwrap();
        // one <op>: INT_ADD out=ram:0x20:4  in=ram:0x30:4, ram:0x34:4
        e.open_element(&ELEM_OP);
        e.write_signed_integer(&unlace_base::marshal::ATTRIB_SIZE, 2); // isize
        e.write_opcode(&ATTRIB_CODE, OpCode::CPUI_INT_ADD);
        Address::new(Rc::clone(&ram), 0x20)
            .encode_sized(&mut e, 4)
            .unwrap();
        Address::new(Rc::clone(&ram), 0x30)
            .encode_sized(&mut e, 4)
            .unwrap();
        Address::new(Rc::clone(&ram), 0x34)
            .encode_sized(&mut e, 4)
            .unwrap();
        e.close_element(&ELEM_OP);
        e.close_element(&elem_inst);
    }

    let client = shared(packed_response(&doc));
    let tr = translate(Rc::clone(&client));
    let ram = ram_space(&tr);
    let baseaddr = Address::new(Rc::clone(&ram), 0x401000);

    let mut emit = RecordEmit::default();
    let len = tr
        .one_instruction(&mut emit, &baseaddr)
        .expect("one_instruction");
    assert_eq!(len, 4, "returned instruction length is the <inst> offset");

    assert_eq!(emit.ops.len(), 1);
    let (opc, out, ins) = &emit.ops[0];
    assert_eq!(*opc, OpCode::CPUI_INT_ADD);
    let out = out.as_ref().expect("output varnode");
    assert_eq!((out.offset, out.size), (0x20, 4));
    assert_eq!(ins.len(), 2);
    assert_eq!((ins[0].offset, ins[0].size), (0x30, 4));
    assert_eq!((ins[1].offset, ins[1].size), (0x34, 4));

    // Byte-exact getPcode request framing (query open, string, packed
    // command doc, string close, query close).
    drop(tr);
    let (_r, w) = Rc::try_unwrap(client).unwrap().into_inner().into_inner();
    let mut cmd = Vec::new();
    {
        let ram2 = Rc::clone(
            TspecModel::decode(TEST_TSPEC, &build_registry())
                .unwrap()
                .manager
                .get_space_by_name("ram")
                .unwrap(),
        );
        let mut e = PackedEncode::new(&mut cmd);
        e.open_element(&crate::ids::ELEM_COMMAND_GETPCODE);
        Address::new(ram2, 0x401000).encode(&mut e).unwrap();
        e.close_element(&crate::ids::ELEM_COMMAND_GETPCODE);
    }
    let mut expected = Vec::new();
    burst(&mut expected, 4);
    burst(&mut expected, 14);
    expected.extend_from_slice(&cmd);
    burst(&mut expected, 15);
    burst(&mut expected, 5);
    assert_eq!(w, expected, "getPcode request framing");
}

/// (b) `<unimpl offset=N/>` → `UnlaceError::Unimpl` carrying the offset.
#[test]
fn one_instruction_unimpl_carries_length() {
    let mut doc = Vec::new();
    {
        let mut e = PackedEncode::new(&mut doc);
        e.open_element(&ELEM_UNIMPL);
        e.write_signed_integer(&ATTRIB_OFFSET, 2);
        e.close_element(&ELEM_UNIMPL);
    }
    let client = shared(packed_response(&doc));
    let tr = translate(client);
    let ram = ram_space(&tr);
    let err = tr
        .one_instruction(&mut RecordEmit::default(), &Address::new(ram, 0x1000))
        .expect_err("unimpl must error");
    match err {
        UnlaceError::Unimpl {
            instruction_length, ..
        } => assert_eq!(instruction_length, 2),
        other => panic!("expected Unimpl, got {other:?}"),
    }
}

/// (c) An empty getPcode response → `UnlaceError::BadData`.
#[test]
fn one_instruction_empty_is_bad_data() {
    let client = shared(empty_response());
    let tr = translate(client);
    let ram = ram_space(&tr);
    let err = tr
        .one_instruction(&mut RecordEmit::default(), &Address::new(ram, 0x1000))
        .expect_err("empty response must error");
    assert!(
        matches!(err, UnlaceError::BadData { .. }),
        "expected BadData, got {err:?}"
    );
}

/// (d) `get_register` cache miss (canned `<addr>` response) then cache hit
/// (no second query issued).
#[test]
fn get_register_caches() {
    let model = TspecModel::decode(TEST_TSPEC, &build_registry()).unwrap();
    let reg = Rc::clone(model.manager.get_space_by_name("register").unwrap());
    let mut doc = Vec::new();
    {
        let mut e = PackedEncode::new(&mut doc);
        // A bare <addr> for the register (register:0x10 size 4) — the
        // shape AddressXML.encode sends as the getRegister response.
        Address::new(Rc::clone(&reg), 0x10)
            .encode_sized(&mut e, 4)
            .unwrap();
    }
    // Only ONE response is canned: a second query would run off the end
    // of the reader and error, so a cache hit is proven by success.
    let client = shared(packed_response(&doc));
    let tr = translate(Rc::clone(&client));

    let first = RegisterLookup::get_register(&tr, "myreg").expect("first lookup");
    assert_eq!(first.offset, 0x10);
    assert_eq!(first.size, 4);
    assert_eq!(
        first.space.as_ref().unwrap().get_name(),
        "register",
        "decoded against the tspec register space"
    );

    // Cache hit: no bytes left in the reader, yet this must succeed.
    let second = RegisterLookup::get_register(&tr, "myreg").expect("cache hit");
    assert_eq!(second, first);

    // Exactly one query was written (one request framing).
    drop(tr);
    let (_r, w) = Rc::try_unwrap(client).unwrap().into_inner().into_inner();
    let mut expected_one = Vec::new();
    {
        let mut cmd = Vec::new();
        {
            let mut e = PackedEncode::new(&mut cmd);
            e.open_element(&crate::ids::ELEM_COMMAND_GETREGISTER);
            e.write_string(&unlace_base::marshal::ATTRIB_NAME, b"myreg");
            e.close_element(&crate::ids::ELEM_COMMAND_GETREGISTER);
        }
        burst(&mut expected_one, 4);
        burst(&mut expected_one, 14);
        expected_one.extend_from_slice(&cmd);
        burst(&mut expected_one, 15);
        burst(&mut expected_one, 5);
    }
    assert_eq!(w, expected_one, "exactly one getRegister query issued");
}

/// (e) `get_user_op_names` probe loop terminates on the empty answer.
#[test]
fn get_user_op_names_probe_loop() {
    // Two named ops then an empty answer ends the loop.
    let mut reader = Vec::new();
    reader.extend_from_slice(&string_response(b"COUNTLEADINGZEROS"));
    reader.extend_from_slice(&string_response(b"COUNTLEADINGONES"));
    reader.extend_from_slice(&empty_response());
    let client = shared(reader);
    let tr = translate(client);

    let mut names = Vec::new();
    tr.get_user_op_names(&mut names);
    assert_eq!(names, vec!["COUNTLEADINGZEROS", "COUNTLEADINGONES"]);
}
