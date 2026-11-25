use super::*;

use unlace_base::space::{
    AddrSpace, AddrSpaceManager, ConstantSpace, UniqueSpace, addrspace_flags, spacetype,
};

use crate::context::{ArchContext, BlockId, TypeOp};

fn build_manager() -> AddrSpaceManager {
    let mut m = AddrSpaceManager::new();
    m.insert_space(Rc::new(ConstantSpace::new())).unwrap();
    m.insert_space(Rc::new(UniqueSpace::new(1, 0, false)))
        .unwrap();
    m.insert_space(Rc::new(AddrSpace::new(
        spacetype::IPTR_PROCESSOR,
        "ram",
        false,
        8,
        1,
        2,
        addrspace_flags::hasphysical,
        1,
        1,
    )))
    .unwrap();
    m
}

fn build_fd() -> Funcdata {
    let manage = build_manager();
    let glb = Rc::new(ArchContext::new(manage));
    let ram = Rc::clone(glb.manage().get_space_by_name("ram").unwrap());
    let addr = Address::new(ram, 0x1000);
    Funcdata::new("func", "func", glb, addr, 0x10000000, 0x40).unwrap()
}

fn ramspace(fd: &Funcdata) -> Rc<AddrSpace> {
    Rc::clone(fd.get_arch().manage().get_space_by_name("ram").unwrap())
}

fn add_op(fd: &mut Funcdata, bl: BlockId, opc: OpCode, ninput: i32, pc: Address) -> OpId {
    let op = fd.new_op(ninput, pc);
    fd.op_set_opcode(op, TypeOp::new(opc, 0, format!("{opc:?}")));
    fd.op_insert(op, bl, None);
    op
}

/// An input read directly by a non-special op ranks DIRECTREAD (the best
/// rank for an input).
#[test]
fn input_directly_read_ranks_directread() {
    let mut fd = build_fd();
    let rs = ramspace(&fd);
    let root = fd.bblocks_root_pub();
    let bl = fd.bblocks_mut().new_block_basic(root);
    fd.bblocks_mut().set_start_block(root, bl);

    // input p at ram:0x100 size 4.
    let p = fd.new_varnode(4, &Address::new(Rc::clone(&rs), 0x100), None);
    let p = fd.set_input_varnode(p).unwrap();
    // out = p + p  (INT_ADD reads p directly).
    let add = add_op(
        &mut fd,
        bl,
        OpCode::CPUI_INT_ADD,
        2,
        Address::new(Rc::clone(&rs), 0x1000),
    );
    let _out = fd
        .new_varnode_out(4, &Address::new(Rc::clone(&rs), 0x200), add)
        .unwrap();
    fd.op_set_input(add, p, 0).unwrap();
    fd.op_set_input(add, p, 1).unwrap();
    fd.structure_reset();

    let paddr = Address::new(Rc::clone(&rs), 0x100);
    let mut pm = ParamMeasure::new(&paddr, 4, None, ParamIDIO::Input);
    pm.calculate_rank(&fd, true, p, None);
    assert_eq!(pm.get_measure(), param_rank::DIRECTREAD);
}

/// An input with no descendants (dead) ranks WORSTRANK in the best (min)
/// walk — nothing lowers it.
#[test]
fn dead_input_keeps_worstrank() {
    let mut fd = build_fd();
    let rs = ramspace(&fd);
    let root = fd.bblocks_root_pub();
    let bl = fd.bblocks_mut().new_block_basic(root);
    fd.bblocks_mut().set_start_block(root, bl);

    let p = fd.new_varnode(4, &Address::new(Rc::clone(&rs), 0x100), None);
    let p = fd.set_input_varnode(p).unwrap();
    fd.structure_reset();

    let paddr = Address::new(Rc::clone(&rs), 0x100);
    let mut pm = ParamMeasure::new(&paddr, 4, None, ParamIDIO::Input);
    pm.calculate_rank(&fd, true, p, None);
    assert_eq!(pm.get_measure(), param_rank::WORSTRANK);
}

/// An input passed to a CALL (slot != 0) ranks SUBFNPARAM and bumps numcalls.
#[test]
fn input_passed_to_call_ranks_subfnparam() {
    let mut fd = build_fd();
    let rs = ramspace(&fd);
    let root = fd.bblocks_root_pub();
    let bl = fd.bblocks_mut().new_block_basic(root);
    fd.bblocks_mut().set_start_block(root, bl);

    let p = fd.new_varnode(4, &Address::new(Rc::clone(&rs), 0x100), None);
    let p = fd.set_input_varnode(p).unwrap();
    // CALL target(p): input0 = call target (code ref), input1 = p.
    let call = add_op(
        &mut fd,
        bl,
        OpCode::CPUI_CALL,
        2,
        Address::new(Rc::clone(&rs), 0x1000),
    );
    let target = fd.new_code_ref(&Address::new(Rc::clone(&rs), 0x2000));
    fd.op_set_input(call, target, 0).unwrap();
    fd.op_set_input(call, p, 1).unwrap();
    fd.structure_reset();

    let paddr = Address::new(Rc::clone(&rs), 0x100);
    let mut pm = ParamMeasure::new(&paddr, 4, None, ParamIDIO::Input);
    pm.calculate_rank(&fd, true, p, None);
    assert_eq!(pm.get_measure(), param_rank::SUBFNPARAM);
}

/// The standalone analysis (non-justproto) lists every input Varnode and
/// ranks each; two distinct inputs both read directly should both rank
/// DIRECTREAD.
#[test]
fn analysis_lists_and_ranks_inputs() {
    let mut fd = build_fd();
    let rs = ramspace(&fd);
    let root = fd.bblocks_root_pub();
    let bl = fd.bblocks_mut().new_block_basic(root);
    fd.bblocks_mut().set_start_block(root, bl);

    let a = fd.new_varnode(4, &Address::new(Rc::clone(&rs), 0x100), None);
    let a = fd.set_input_varnode(a).unwrap();
    let b = fd.new_varnode(4, &Address::new(Rc::clone(&rs), 0x108), None);
    let b = fd.set_input_varnode(b).unwrap();
    // out = a + b reads both directly.
    let add = add_op(
        &mut fd,
        bl,
        OpCode::CPUI_INT_ADD,
        2,
        Address::new(Rc::clone(&rs), 0x1000),
    );
    let _out = fd
        .new_varnode_out(4, &Address::new(Rc::clone(&rs), 0x200), add)
        .unwrap();
    fd.op_set_input(add, a, 0).unwrap();
    fd.op_set_input(add, b, 1).unwrap();
    fd.structure_reset();

    let analysis = ParamIDAnalysis::new(&fd, false).unwrap();
    assert_eq!(analysis.num_input_measures(), 2);
    assert_eq!(analysis.num_output_measures(), 0);
    for i in 0..analysis.num_input_measures() {
        assert_eq!(
            analysis.input_measure(i).get_measure(),
            param_rank::DIRECTREAD
        );
    }

    // savePretty renders the function name and per-measure lines.
    let mut s = String::new();
    analysis.save_pretty(&mut s, false);
    assert!(s.contains("Function: func"), "got: {s}");
    assert!(s.contains("Num Params: 2"), "got: {s}");
    assert!(s.contains("Rank: 2"), "got: {s}");
}

/// The justproto path on a store-less fixture proto degrades to an empty
/// measure set (a real pipeline Funcdata always carries a store).
#[test]
fn justproto_storeless_yields_empty() {
    let fd = build_fd();
    let analysis = ParamIDAnalysis::new(&fd, true).unwrap();
    assert_eq!(analysis.num_input_measures(), 0);
    assert_eq!(analysis.num_output_measures(), 0);
}

/// The encode emits `<parammeasures name><addr/><proto model extrapop/>` +
/// one measure per input, each with the REQUIRED `<rank val>` child
/// (paramid.cc:161-175 moredetail=true — the shape both upstream
/// ghidra_process call sites produce).
#[test]
fn encode_roundtrip_shape() {
    use unlace_base::marshal::{Decoder, PackedDecode, PackedEncode};
    let mut fd = build_fd();
    let rs = ramspace(&fd);
    let root = fd.bblocks_root_pub();
    let bl = fd.bblocks_mut().new_block_basic(root);
    fd.bblocks_mut().set_start_block(root, bl);
    let a = fd.new_varnode(4, &Address::new(Rc::clone(&rs), 0x100), None);
    let a = fd.set_input_varnode(a).unwrap();
    let add = add_op(
        &mut fd,
        bl,
        OpCode::CPUI_INT_ADD,
        2,
        Address::new(Rc::clone(&rs), 0x1000),
    );
    let _out = fd
        .new_varnode_out(4, &Address::new(Rc::clone(&rs), 0x200), add)
        .unwrap();
    fd.op_set_input(add, a, 0).unwrap();
    fd.op_set_input(add, a, 1).unwrap();
    fd.structure_reset();

    let analysis = ParamIDAnalysis::new(&fd, false).unwrap();
    assert_eq!(analysis.num_input_measures(), 1);
    let mut bytes: Vec<u8> = Vec::new();
    {
        let mut enc = PackedEncode::new(&mut bytes);
        analysis.encode(&mut enc, true).unwrap();
    }
    let mut dec = PackedDecode::new(fd.get_arch().manage());
    dec.ingest_stream(&bytes).unwrap();
    let pm = dec.open_element().unwrap();
    assert_eq!(pm, ELEM_PARAMMEASURES.get_id());
    let name = dec
        .read_string_id(&unlace_base::marshal::ATTRIB_NAME)
        .unwrap();
    assert_eq!(name, b"func");
    // <addr/> child.
    let ad = dec.open_element().unwrap();
    assert_eq!(ad, unlace_base::address::ELEM_ADDR.get_id());
    dec.close_element_skipping(ad).unwrap();
    // <proto model extrapop/>.
    let pr = dec.open_element().unwrap();
    assert_eq!(pr, ELEM_PROTO.get_id());
    dec.close_element_skipping(pr).unwrap();
    // <input> with a <rank val> child.
    let inp = dec.open_element().unwrap();
    assert_eq!(inp, unlace_base::marshal::ELEM_INPUT.get_id());
    let mut saw_rank = false;
    loop {
        let c = dec.peek_element().unwrap();
        if c == 0 {
            break;
        }
        let id = dec.open_element().unwrap();
        if id == ELEM_RANK.get_id() {
            let val = dec
                .read_signed_integer_id(&unlace_base::marshal::ATTRIB_VAL)
                .unwrap();
            assert_eq!(val, param_rank::DIRECTREAD as i64);
            saw_rank = true;
        }
        dec.close_element_skipping(id).unwrap();
    }
    assert!(
        saw_rank,
        "<rank> child is REQUIRED (ParamMeasure.decode throws)"
    );
    dec.close_element(inp).unwrap();
    dec.close_element(pm).unwrap();
}
