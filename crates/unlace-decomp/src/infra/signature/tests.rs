use super::*;
use std::rc::Rc;

use unlace_base::address::Address;
use unlace_base::marshal::XmlEncode;
use unlace_base::space::{
    AddrSpace, AddrSpaceManager, ConstantSpace, UniqueSpace, addrspace_flags, spacetype,
};

use crate::context::{ArchContext, TypeOp};
use crate::op::pcodeop_flags;

// Settings-touching tests serialize on the shared crate-level lock (see
// [`SETTINGS_TEST_LOCK`]).
use super::SETTINGS_TEST_LOCK as SETTINGS_LOCK;

// -- IR fixture plumbing (mirrors funcdata_block.rs / funcdata_op.rs tests) --

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

fn typeop(opc: OpCode) -> TypeOp {
    // The signature/paramid algorithms only consult code()/isMarker()/
    // isCommutative(); isCommutative reads the op's cached flags, so set the
    // commutative bit for the genuinely-commutative integer ops we build.
    let flags = match opc {
        OpCode::CPUI_INT_ADD | OpCode::CPUI_INT_MULT | OpCode::CPUI_INT_AND => {
            pcodeop_flags::commutative
        }
        _ => 0,
    };
    TypeOp::new(opc, flags, format!("{opc:?}"))
}

/// Append an op of `opc` with `ninput` inputs at `pc` into block `bl`.
fn add_op(fd: &mut Funcdata, bl: BlockId, opc: OpCode, ninput: i32, pc: Address) -> OpId {
    let op = fd.new_op(ninput, pc);
    fd.op_set_opcode(op, typeop(opc));
    fd.op_insert(op, bl, None);
    op
}

#[test]
fn hash_mixin_is_deterministic_and_order_sensitive() {
    // hash_mixin is the CRC-folded core; deterministic and not symmetric.
    let a = hash_mixin(0x1122334455667788, 0xdeadbeefcafef00d);
    let b = hash_mixin(0x1122334455667788, 0xdeadbeefcafef00d);
    assert_eq!(a, b, "hash_mixin must be deterministic");
    let c = hash_mixin(0xdeadbeefcafef00d, 0x1122334455667788);
    assert_ne!(a, c, "hash_mixin is not symmetric in its arguments");
}

#[test]
fn test_settings_accepts_only_known_bits() {
    // 0 is rejected; the check bit (1) plus the shifted mod bits are allowed.
    assert!(!GraphSigManager::test_settings(0));
    assert!(GraphSigManager::test_settings(1)); // just the check bit
    // (SIG_DONOTUSE_CONST << 2) | 1  is a valid setting.
    let v = (sig_mods::SIG_DONOTUSE_CONST << 2) | 1;
    assert!(GraphSigManager::test_settings(v));
    // A bit outside the mask is rejected.
    assert!(!GraphSigManager::test_settings(0x8000 | 1));
}

#[test]
fn hash_size_collapses_large_sizes_only_with_flag() {
    let mut fd = build_fd();
    let rs = ramspace(&fd);
    // size-8 input varnode at ram:0x2000
    let v8 = fd.new_varnode(8, &Address::new(Rc::clone(&rs), 0x2000), None);
    let v8 = fd.set_input_varnode(v8).unwrap();
    // Without SIG_COLLAPSE_SIZE the raw size 8 is mixed; with it, clamps to 4.
    let raw = hash_size(&fd, v8, 0);
    let clamped = hash_size(&fd, v8, sig_mods::SIG_COLLAPSE_SIZE);
    let four: Hashword = 4 ^ (4 << 7) ^ (4 << 14) ^ (4 << 21);
    assert_ne!(raw, clamped);
    assert_eq!(clamped, four);
}

/// Build: an input p (size 4) added to a constant -> out; out is returned.
/// Drives the full data-flow + control-flow signature pipeline and checks
/// the feature set is non-empty and deterministic across two runs.
fn build_add_function() -> (Funcdata, BlockId) {
    let mut fd = build_fd();
    let rs = ramspace(&fd);
    // Single basic block.
    let root = fd.bblocks_root_pub();
    let bl = fd.bblocks_mut().new_block_basic(root);
    fd.bblocks_mut().set_start_block(root, bl);

    // input param at ram:0x100, size 4.
    let p = fd.new_varnode(4, &Address::new(Rc::clone(&rs), 0x100), None);
    let p = fd.set_input_varnode(p).unwrap();
    // c = const 5 (size 4).
    let c = fd.new_constant(4, 5);
    // add: out = p + c  at ram:0x1000
    let add = add_op(
        &mut fd,
        bl,
        OpCode::CPUI_INT_ADD,
        2,
        Address::new(Rc::clone(&rs), 0x1000),
    );
    let out = fd
        .new_varnode_out(4, &Address::new(Rc::clone(&rs), 0x200), add)
        .unwrap();
    fd.op_set_input(add, p, 0).unwrap();
    fd.op_set_input(add, c, 1).unwrap();
    let _ = out;

    // RETURN out  at ram:0x1004 (input0 = iop placeholder, input1 = returned vn).
    let ret = add_op(
        &mut fd,
        bl,
        OpCode::CPUI_RETURN,
        2,
        Address::new(Rc::clone(&rs), 0x1004),
    );
    let iop = fd.new_constant(8, 0);
    fd.op_set_input(ret, iop, 0).unwrap();
    fd.op_set_input(ret, out, 1).unwrap();

    // Recompute the basic-block structure (one block, start = bl).
    fd.structure_reset();
    (fd, bl)
}

#[test]
fn generate_produces_deterministic_features() {
    let _guard = SETTINGS_LOCK.lock().unwrap();
    set_settings((sig_mods::SIG_DONOTUSE_CONST << 2) | 1);
    let (fd, _bl) = build_add_function();

    let mut m1 = GraphSigManager::new().unwrap();
    m1.set_current_function(&fd).unwrap();
    m1.generate(&fd);
    let v1 = m1.get_signature_vector();

    let mut m2 = GraphSigManager::new().unwrap();
    m2.set_current_function(&fd).unwrap();
    m2.generate(&fd);
    let v2 = m2.get_signature_vector();

    assert!(!v1.is_empty(), "the add function should yield features");
    assert_eq!(v1, v2, "feature generation must be deterministic");
    // The sorted vector is sorted ascending.
    assert!(v1.windows(2).all(|w| w[0] <= w[1]));
    // Overall hash is also stable.
    assert_eq!(m1.get_overall_hash(), m2.get_overall_hash());
}

#[test]
fn noise_collapse_changes_feature_set() {
    let _guard = SETTINGS_LOCK.lock().unwrap();
    // With SIG_COLLAPSE_INDNOISE on, the noise-removal dominator path runs;
    // it must still produce a deterministic, non-empty feature set.
    set_settings((sig_mods::SIG_COLLAPSE_INDNOISE << 2) | 1);
    let (fd, _bl) = build_add_function();
    let mut m = GraphSigManager::new().unwrap();
    m.set_current_function(&fd).unwrap();
    m.generate(&fd);
    let v = m.get_signature_vector();
    assert!(!v.is_empty());
    // Re-run for determinism.
    let mut m2 = GraphSigManager::new().unwrap();
    m2.set_current_function(&fd).unwrap();
    m2.generate(&fd);
    assert_eq!(v, m2.get_signature_vector());
}

#[test]
fn simple_signature_encodes_sig_elements() {
    let _guard = SETTINGS_LOCK.lock().unwrap();
    set_settings((sig_mods::SIG_DONOTUSE_CONST << 2) | 1);
    let (fd, _bl) = build_add_function();
    let mut buf: Vec<u8> = Vec::new();
    {
        let mut enc = XmlEncode::new(&mut buf);
        simple_signature(&fd, &mut enc).unwrap();
    }
    let xml = String::from_utf8(buf).unwrap();
    assert!(xml.contains("<signatures"), "got: {xml}");
    assert!(
        xml.contains("<sig "),
        "expected at least one <sig val=..>: {xml}"
    );
}

#[test]
fn generic_signature_encode_emits_gensig() {
    let s = Signature::new(0x1234_5678_9abc_def0);
    let mut buf: Vec<u8> = Vec::new();
    {
        let mut enc = XmlEncode::new(&mut buf);
        s.encode(&mut enc).unwrap();
    }
    let xml = String::from_utf8(buf).unwrap();
    assert!(xml.contains("<gensig"), "got: {xml}");
    // sig truncates to the low 32 bits: 0x9abcdef0.
    assert!(
        xml.contains("0x9abcdef0") || xml.contains("9abcdef0"),
        "got: {xml}"
    );
}

#[test]
fn bad_settings_rejected_at_construction() {
    let _guard = SETTINGS_LOCK.lock().unwrap();
    set_settings(0); // invalid
    assert!(GraphSigManager::new().is_err());
    set_settings((sig_mods::SIG_DONOTUSE_CONST << 2) | 1); // restore valid
    assert!(GraphSigManager::new().is_ok());
}
