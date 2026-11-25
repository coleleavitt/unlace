use super::*;
use std::rc::Rc;

use unlace_base::address::Address;
use unlace_base::space::{
    AddrSpace, AddrSpaceManager, ConstantSpace, UniqueSpace, addrspace_flags, spacetype,
};

use crate::context::{ArchContext, BlockId, TypeOp};
use crate::signature::{SETTINGS_TEST_LOCK, set_settings, sig_mods};
use unlace_num::opcodes::OpCode;

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

use crate::context::OpId;

/// Build a small complete function (input + add + return) and mark it
/// processing-complete so the print gate passes.
fn build_complete_fd() -> Funcdata {
    let mut fd = build_fd();
    let rs = ramspace(&fd);
    let root = fd.bblocks_root_pub();
    let bl = fd.bblocks_mut().new_block_basic(root);
    fd.bblocks_mut().set_start_block(root, bl);

    let p = fd.new_varnode(4, &Address::new(Rc::clone(&rs), 0x100), None);
    let p = fd.set_input_varnode(p).unwrap();
    let c = fd.new_constant(4, 5);
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
    fd.structure_reset();
    // Mark processing-complete so the print/save gates pass (the C++
    // isProcComplete() guard).
    fd.set_flag_raw(crate::funcdata::funcdata_flags::processing_complete);
    fd
}

#[test]
fn settings_rejects_zero_and_accepts_nonzero() {
    let _guard = SETTINGS_TEST_LOCK.lock().unwrap();
    assert!(signature_settings(0).is_err());
    let msg = signature_settings((sig_mods::SIG_DONOTUSE_CONST << 2) | 1).unwrap();
    assert!(msg.starts_with("Signature settings set to"), "got: {msg}");
    // The setting is now live.
    assert_eq!(
        get_settings_for_test(),
        (sig_mods::SIG_DONOTUSE_CONST << 2) | 1
    );
}

fn get_settings_for_test() -> u32 {
    crate::signature::get_settings()
}

#[test]
fn print_signatures_requires_complete_function() {
    let _guard = SETTINGS_TEST_LOCK.lock().unwrap();
    set_settings((sig_mods::SIG_DONOTUSE_CONST << 2) | 1);
    // An incomplete (default) function fails the gate.
    let incomplete = build_fd();
    assert!(print_signatures(&incomplete, None).is_err());
}

#[test]
fn print_signatures_emits_feature_lines() {
    let _guard = SETTINGS_TEST_LOCK.lock().unwrap();
    set_settings((sig_mods::SIG_DONOTUSE_CONST << 2) | 1);
    let fd = build_complete_fd();
    let out = print_signatures(&fd, None).unwrap();
    assert!(out.contains("Signatures for func"), "got: {out}");
    assert!(out.contains("* = 0x"), "expected feature lines: {out}");
}

#[test]
fn produce_signature_line_formats_overall_hash() {
    let _guard = SETTINGS_TEST_LOCK.lock().unwrap();
    set_settings((sig_mods::SIG_DONOTUSE_CONST << 2) | 1);
    let fd = build_complete_fd();
    let line = produce_signature_line(&fd, None).unwrap();
    // "<name> = 0x" + 16 hex digits.
    assert!(line.starts_with("func = 0x"), "got: {line}");
    let hex = line.trim_start_matches("func = 0x");
    assert_eq!(hex.len(), 16, "expected 16 hex digits, got: {line}");
    assert!(hex.chars().all(|c| c.is_ascii_hexdigit()));
}

#[test]
fn commands_table_lists_all_five() {
    assert_eq!(COMMANDS.len(), 5);
    assert_eq!(CAPABILITY_NAME, "analyzesigs");
    assert!(
        COMMANDS
            .iter()
            .any(|(_, _, k)| *k == AnalyzeSigsCommand::SignatureSettings)
    );
    assert!(
        COMMANDS
            .iter()
            .any(|(_, _, k)| *k == AnalyzeSigsCommand::ProduceSignatures)
    );
}
