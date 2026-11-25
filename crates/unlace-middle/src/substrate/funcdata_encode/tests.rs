use std::collections::BTreeSet;
use std::rc::Rc;

use unlace_base::address::{ATTRIB_UNIQ, Address, ELEM_RANGELIST, ELEM_SEQNUM};
use unlace_base::marshal::{Decoder, PackedDecode, PackedEncode};
use unlace_base::space::{
    AddrSpace, AddrSpaceManager, ConstantSpace, FspecSpace, IopSpace, UniqueSpace, addrspace_flags,
    spacetype,
};
use unlace_base::types::int4;
use unlace_num::opcodes::OpCode;

use crate::context::{ArchContext, BlockId, OpId, TypeOp};

use super::*;

/// A manager with constant / unique / iop / fspec / ram spaces (the minimal
/// set `new_varnode_iop` + LOAD-spaceid need).
fn build_manager() -> AddrSpaceManager {
    let mut m = AddrSpaceManager::new();
    m.insert_space(Rc::new(ConstantSpace::new())).unwrap();
    m.insert_space(Rc::new(UniqueSpace::new(1, 0, false)))
        .unwrap();
    m.insert_space(Rc::new(IopSpace::new(2))).unwrap();
    m.insert_space(Rc::new(FspecSpace::new(3))).unwrap();
    m.insert_space(Rc::new(AddrSpace::new(
        spacetype::IPTR_PROCESSOR,
        "ram",
        false,
        8,
        1,
        4,
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

fn ram(fd: &Funcdata) -> Rc<AddrSpace> {
    Rc::clone(fd.get_arch().manage().get_space_by_name("ram").unwrap())
}

fn new_op(fd: &mut Funcdata, inputs: int4, opc: OpCode, off: u64) -> OpId {
    let r = ram(fd);
    let op = fd.new_op(inputs, Address::new(r, off));
    fd.op_set_opcode(op, TypeOp::new(opc, 0, "OP"));
    op
}

/// What the round-trip decode observed about the `<ast>`.
#[derive(Default)]
struct Observed {
    name: Vec<u8>,
    size: i64,
    varnode_refs: BTreeSet<u64>,
    op_uniqs: BTreeSet<u64>,
    saw_iop: bool,
    saw_spaceid: bool,
    saw_void: bool,
    saw_bare_ref: bool,
    block_count: usize,
    op_count: usize,
}

/// Structurally decode a `<function>` document with unlace's PackedDecode and
/// collect the structure + the ref/uniq ids for the load-bearing invariant.
fn decode_function(manage: &AddrSpaceManager, bytes: &[u8]) -> UnlaceResult<Observed> {
    let mut obs = Observed::default();
    let mut dec = PackedDecode::new(manage);
    dec.ingest_stream(bytes)?;

    let fid = dec.open_element()?;
    assert_eq!(fid, ELEM_FUNCTION.get_id(), "root is not <function>");
    obs.name = dec.read_string_id(&ATTRIB_NAME)?;
    obs.size = dec.read_signed_integer_id(&ATTRIB_SIZE)?;

    // <function> children: <addr> (baseaddr) then <ast>.
    loop {
        let c = dec.peek_element()?;
        if c == 0 {
            break;
        }
        if c == ELEM_AST.get_id() {
            let ast = dec.open_element()?;
            decode_ast(&mut dec, &mut obs)?;
            dec.close_element(ast)?;
        } else {
            dec.skip_element()?; // baseaddr <addr>, or anything unexpected.
        }
    }
    dec.close_element(fid)?;
    Ok(obs)
}

fn decode_ast(dec: &mut PackedDecode, obs: &mut Observed) -> UnlaceResult<()> {
    loop {
        let c = dec.peek_element()?;
        if c == 0 {
            break;
        }
        if c == ELEM_VARNODES.get_id() {
            let vid = dec.open_element()?;
            loop {
                let a = dec.peek_element()?;
                if a == 0 {
                    break;
                }
                assert_eq!(a, ELEM_ADDR.get_id(), "<varnodes> child is not <addr>");
                let aid = dec.open_element()?;
                obs.varnode_refs
                    .insert(dec.read_unsigned_integer_id(&ATTRIB_REF)?);
                dec.close_element(aid)?;
            }
            dec.close_element(vid)?;
        } else if c == ELEM_BLOCK.get_id() {
            obs.block_count += 1;
            let bid = dec.open_element()?;
            decode_block(dec, obs)?;
            dec.close_element(bid)?;
        } else {
            // <blockedge> (or any later-phase element): skip whole subtree.
            dec.skip_element()?;
        }
    }
    Ok(())
}

fn decode_block(dec: &mut PackedDecode, obs: &mut Observed) -> UnlaceResult<()> {
    // ATTRIB_INDEX is present but not asserted here.
    loop {
        let c = dec.peek_element()?;
        if c == 0 {
            break;
        }
        if c == ELEM_OP.get_id() {
            obs.op_count += 1;
            let oid = dec.open_element()?;
            // Every op carries a code + a <seqnum uniq>.
            let _code = dec.read_signed_integer_id(&ATTRIB_CODE)?;
            let mut first = true;
            loop {
                let oc = dec.peek_element()?;
                if oc == 0 {
                    break;
                }
                if first {
                    assert_eq!(oc, ELEM_SEQNUM.get_id(), "first <op> child is not <seqnum>");
                    let sid = dec.open_element()?;
                    obs.op_uniqs
                        .insert(dec.read_unsigned_integer_id(&ATTRIB_UNIQ)?);
                    dec.close_element(sid)?;
                    first = false;
                } else {
                    // output + inputs: classify then skip.
                    if oc == ELEM_IOP.get_id() {
                        obs.saw_iop = true;
                    } else if oc == ELEM_SPACEID.get_id() {
                        obs.saw_spaceid = true;
                    } else if oc == ELEM_VOID.get_id() {
                        obs.saw_void = true;
                    } else if oc == ELEM_ADDR.get_id() {
                        obs.saw_bare_ref = true;
                    }
                    dec.skip_element()?;
                }
            }
            dec.close_element(oid)?;
        } else {
            // The cover <rangelist> (mandatory, may be empty).
            assert_eq!(c, ELEM_RANGELIST.get_id(), "unexpected <block> child");
            dec.skip_element()?;
        }
    }
    Ok(())
}

/// Build a synthetic single-block Funcdata exercising every op-input branch,
/// encode it, round-trip through PackedDecode, and assert the structure and
/// the load-bearing ref/uniq invariant.
#[test]
fn encode_roundtrip_covers_all_four_op_input_branches() {
    let mut fd = build_fd();
    let r = ram(&fd);

    // One basic block with a real cover range.
    let root = fd.bblocks_ref().root.unwrap();
    let bl: BlockId = fd.bblocks_mut().new_block_basic(root);
    fd.set_basic_block_range(
        bl,
        &Address::new(Rc::clone(&r), 0x2000),
        &Address::new(Rc::clone(&r), 0x2040),
    );

    // (1) A referenced op with NO output — exercises the void OUTPUT branch,
    //     and is the target the INDIRECT's iop input points at.
    let ref_op = new_op(&mut fd, 1, OpCode::CPUI_CALL, 0x2000);
    let uv = fd.new_unique(4, None);
    fd.op_set_input(ref_op, uv, 0).unwrap();

    // (2) A binary op with two real refs in + a ref out — normal-ref inputs
    //     and a ref output.
    let add_op = new_op(&mut fd, 2, OpCode::CPUI_INT_ADD, 0x2004);
    let a0 = fd.new_varnode(4, &Address::new(Rc::clone(&r), 0x100), None);
    let a1 = fd.new_varnode(4, &Address::new(Rc::clone(&r), 0x108), None);
    let ao = fd.new_varnode(4, &Address::new(Rc::clone(&r), 0x110), None);
    fd.op_set_input(add_op, a0, 0).unwrap();
    fd.op_set_input(add_op, a1, 1).unwrap();
    fd.op_set_output(add_op, ao).unwrap();

    // (3) An op with a null input slot — the void INPUT branch.
    let void_op = new_op(&mut fd, 2, OpCode::CPUI_INT_ADD, 0x2008);
    let v0 = fd.new_varnode(4, &Address::new(Rc::clone(&r), 0x118), None);
    let vo = fd.new_varnode(4, &Address::new(Rc::clone(&r), 0x120), None);
    fd.op_set_input(void_op, v0, 0).unwrap();
    // slot 1 left null on purpose.
    fd.op_set_output(void_op, vo).unwrap();

    // (4) A LOAD whose input(0) is a constant encoding the ram space index —
    //     the <spaceid> branch.
    let load_op = new_op(&mut fd, 2, OpCode::CPUI_LOAD, 0x200c);
    let space_const = fd.new_constant(8, 4); // 4 == ram's manager index
    let ptr = fd.new_varnode(8, &Address::new(Rc::clone(&r), 0x128), None);
    let lo = fd.new_varnode(4, &Address::new(Rc::clone(&r), 0x130), None);
    fd.op_set_input(load_op, space_const, 0).unwrap();
    fd.op_set_input(load_op, ptr, 1).unwrap();
    fd.op_set_output(load_op, lo).unwrap();

    // (5) An INDIRECT whose input(1) is an iop annotation — the <iop> branch.
    //     The iop annotation Varnode is in IPTR_IOP space and must be filtered
    //     out of <varnodes>.
    let ind_op = new_op(&mut fd, 2, OpCode::CPUI_INDIRECT, 0x2010);
    let i0 = fd.new_varnode(4, &Address::new(Rc::clone(&r), 0x138), None);
    let iop_vn = fd.new_varnode_iop(ref_op);
    let io = fd.new_varnode(4, &Address::new(Rc::clone(&r), 0x140), None);
    fd.op_set_input(ind_op, i0, 0).unwrap();
    fd.op_set_input(ind_op, iop_vn, 1).unwrap();
    fd.op_set_output(ind_op, io).unwrap();

    for op in [ref_op, add_op, void_op, load_op, ind_op] {
        fd.bb_insert_op(op, bl, None);
    }

    // The expected invariant sets: every non-IOP Varnode's create index, and
    // every op's time.
    let expected_refs: BTreeSet<u64> = fd
        .vbank()
        .iter_loc()
        .filter(|&vn| fd.vbank().get(vn).unwrap().get_space().get_type() != spacetype::IPTR_IOP)
        .map(|vn| fd.vbank().get(vn).unwrap().get_create_index() as u64)
        .collect();
    let expected_uniqs: BTreeSet<u64> = fd
        .bb_ops(bl)
        .iter()
        .map(|&op| fd.obank().get(op).unwrap().get_time() as u64)
        .collect();

    // Encode.
    let mut bytes: Vec<u8> = Vec::new();
    {
        let mut enc = PackedEncode::new(&mut bytes);
        fd.encode(&mut enc, 0x1234, true).expect("encode");
    }
    assert!(!bytes.is_empty(), "encode produced no bytes");

    // Round-trip decode.
    let obs = decode_function(fd.get_arch().manage(), &bytes).expect("decode");

    // Header.
    assert_eq!(obs.name, fd.get_name().as_bytes());
    assert_eq!(obs.size, fd.get_size() as i64);

    // Structure.
    assert_eq!(obs.block_count, 1, "expected exactly one <block>");
    assert_eq!(obs.op_count, 5, "expected five <op>s");

    // All four op-input branches + the void output branch fired.
    assert!(obs.saw_iop, "no <iop> input encoded");
    assert!(obs.saw_spaceid, "no <spaceid> input encoded");
    assert!(obs.saw_void, "no <void> slot encoded");
    assert!(obs.saw_bare_ref, "no bare <addr ref> encoded");

    // The load-bearing invariant: <addr ref> == get_create_index(),
    // <seqnum uniq> == get_time(), for every Varnode / op.
    assert_eq!(
        obs.varnode_refs, expected_refs,
        "<varnodes> refs != create indices"
    );
    assert_eq!(obs.op_uniqs, expected_uniqs, "<op> uniqs != op times");

    // The iop annotation Varnode must NOT appear in <varnodes>.
    let iop_ref = fd.vbank().get(iop_vn).unwrap().get_create_index() as u64;
    assert!(
        !obs.varnode_refs.contains(&iop_ref),
        "iop annotation Varnode leaked into <varnodes>"
    );
}
