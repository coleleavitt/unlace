use unlace_base::space::{
    AddrSpaceManager, ConstantSpace, UniqueSpace, addrspace_flags, spacetype,
};

use super::*;
use crate::semantics::HandleTpl;
use crate::slghsymbol::SymbolType;

// -- fixture: a synthetic PcodeSnippet-like implementor ---------------------

fn test_manager(big_endian: bool) -> AddrSpaceManager {
    let mut manager = AddrSpaceManager::new();
    manager.insert_space(Rc::new(ConstantSpace::new())).unwrap();
    let ram = AddrSpace::new(
        spacetype::IPTR_PROCESSOR,
        "ram",
        big_endian,
        4,
        1,
        1,
        addrspace_flags::hasphysical,
        1,
        1,
    );
    manager.insert_space(Rc::new(ram)).unwrap();
    manager
        .insert_space(Rc::new(UniqueSpace::new(2, 0, big_endian)))
        .unwrap();
    manager
}

struct TestCompile {
    defaultspace: Option<Rc<AddrSpace>>,
    constantspace: Option<Rc<AddrSpace>>,
    uniqspace: Option<Rc<AddrSpace>>,
    local_labelcount: u32,
    enforce_local_key: bool,
    tempbase: u32,
    symbols: Vec<PcodeCompileSymbol>,
    errors: Vec<String>,
}

impl TestCompile {
    fn new(manager: &AddrSpaceManager) -> TestCompile {
        TestCompile {
            defaultspace: manager.get_space_by_name("ram").cloned(),
            constantspace: manager.get_constant_space().cloned(),
            uniqspace: manager.get_space_by_name("unique").cloned(),
            local_labelcount: 0,
            enforce_local_key: false,
            tempbase: 0x100,
            symbols: Vec::new(),
            errors: Vec::new(),
        }
    }
}

impl PcodeCompile for TestCompile {
    fn get_default_space(&self) -> Option<Rc<AddrSpace>> {
        self.defaultspace.clone()
    }
    fn set_default_space(&mut self, spc: Rc<AddrSpace>) {
        self.defaultspace = Some(spc);
    }
    fn get_constant_space(&self) -> Option<Rc<AddrSpace>> {
        self.constantspace.clone()
    }
    fn set_constant_space(&mut self, spc: Rc<AddrSpace>) {
        self.constantspace = Some(spc);
    }
    fn get_unique_space(&self) -> Option<Rc<AddrSpace>> {
        self.uniqspace.clone()
    }
    fn set_unique_space(&mut self, spc: Rc<AddrSpace>) {
        self.uniqspace = Some(spc);
    }
    fn is_enforce_local_key(&self) -> bool {
        self.enforce_local_key
    }
    fn set_enforce_local_key(&mut self, val: bool) {
        self.enforce_local_key = val;
    }
    fn local_label_count(&self) -> u32 {
        self.local_labelcount
    }
    fn set_local_label_count(&mut self, val: u32) {
        self.local_labelcount = val;
    }
    fn allocate_temp(&mut self) -> u32 {
        // PcodeSnippet-style: tempbase advances per temporary
        let res = self.tempbase;
        self.tempbase = self.tempbase.wadd(16);
        res
    }
    fn add_symbol(&mut self, sym: PcodeCompileSymbol) {
        self.symbols.push(sym);
    }
    fn get_location(&self, _symbol_name: &[u8]) -> Option<Location> {
        None // PcodeSnippet::getLocation returns null
    }
    fn report_error(&mut self, _loc: Option<&Location>, msg: &str) {
        self.errors.push(msg.to_string());
    }
    fn report_warning(&mut self, _loc: Option<&Location>, _msg: &str) {}
}

fn ram_vn(manager: &AddrSpaceManager, off: u64, size: u64) -> VarnodeTpl {
    VarnodeTpl::new(
        ConstTpl::new_space(Rc::clone(manager.get_space_by_name("ram").unwrap())),
        ConstTpl::new_real(ConstType::Real, off),
        ConstTpl::new_real(ConstType::Real, size),
    )
}

// -- ExprTree ---------------------------------------------------------------

#[test]
fn pcodecompile_exprtree_set_output_named_inserts_copy() {
    let manager = test_manager(false);
    // a named varnode expression: setOutput must add a COPY
    let mut tree = ExprTree::new(ram_vn(&manager, 0x42, 4));
    tree.set_output(ram_vn(&manager, 0x80, 4)).unwrap();
    assert_eq!(tree.ops.len(), 1);
    assert_eq!(tree.ops[0].get_opcode(), OpCode::CPUI_COPY);
    assert_eq!(tree.ops[0].get_in(0).get_offset().get_real(), 0x42);
    assert_eq!(tree.ops[0].get_out().unwrap().get_offset().get_real(), 0x80);
    assert_eq!(tree.get_out().unwrap().get_offset().get_real(), 0x80);
}

#[test]
fn pcodecompile_exprtree_set_output_unnamed_replaces_last_output() {
    let manager = test_manager(false);
    let mut comp = TestCompile::new(&manager);
    // INT_ADD of two named varnodes: output is an unnamed temp
    let mut tree = comp.create_op2(
        OpCode::CPUI_INT_ADD,
        ExprTree::new(ram_vn(&manager, 0, 4)),
        ExprTree::new(ram_vn(&manager, 4, 4)),
    );
    tree.set_output(ram_vn(&manager, 0x80, 4)).unwrap();
    // no COPY inserted: the ADD's output was replaced in place
    assert_eq!(tree.ops.len(), 1);
    assert_eq!(tree.ops[0].get_opcode(), OpCode::CPUI_INT_ADD);
    assert_eq!(tree.ops[0].get_out().unwrap().get_offset().get_real(), 0x80);

    // no output at all is the C++ SleighError
    let mut empty = ExprTree::default();
    let err = empty.set_output(ram_vn(&manager, 0, 4)).unwrap_err();
    assert_eq!(err.explain(), "Expression has no output");
}

// -- createOp* --------------------------------------------------------------

#[test]
fn pcodecompile_create_op_unary_and_binary() {
    let manager = test_manager(false);
    let mut comp = TestCompile::new(&manager);

    let neg = comp.create_op(
        OpCode::CPUI_INT_2COMP,
        ExprTree::new(ram_vn(&manager, 0, 4)),
    );
    assert_eq!(neg.ops.len(), 1);
    assert_eq!(neg.ops[0].get_opcode(), OpCode::CPUI_INT_2COMP);
    let out = neg.get_out().unwrap();
    assert!(out.is_unnamed());
    assert!(out.get_space().is_unique_space());
    assert_eq!(out.get_offset().get_real(), 0x100);

    // binary: vn2's ops are spliced after vn1's, then the op appended
    let lhs = comp.create_op(
        OpCode::CPUI_INT_NEGATE,
        ExprTree::new(ram_vn(&manager, 0, 4)),
    );
    let rhs = comp.create_op(
        OpCode::CPUI_INT_NEGATE,
        ExprTree::new(ram_vn(&manager, 4, 4)),
    );
    let lhs_out = lhs.get_out().unwrap().get_offset().get_real();
    let rhs_out = rhs.get_out().unwrap().get_offset().get_real();
    let add = comp.create_op2(OpCode::CPUI_INT_ADD, lhs, rhs);
    assert_eq!(add.ops.len(), 3);
    assert_eq!(add.ops[0].get_opcode(), OpCode::CPUI_INT_NEGATE);
    assert_eq!(add.ops[1].get_opcode(), OpCode::CPUI_INT_NEGATE);
    assert_eq!(add.ops[2].get_opcode(), OpCode::CPUI_INT_ADD);
    assert_eq!(add.ops[2].get_in(0).get_offset().get_real(), lhs_out);
    assert_eq!(add.ops[2].get_in(1).get_offset().get_real(), rhs_out);
}

#[test]
fn pcodecompile_create_op_no_out_orders_inputs() {
    let manager = test_manager(false);
    let mut comp = TestCompile::new(&manager);
    let cond = ExprTree::new(ram_vn(&manager, 0, 1));
    let dest = ExprTree::new(ram_vn(&manager, 0x40, 4));
    // CBRANCH(dest, cond) as the grammar builds it
    let ops = comp.create_op_no_out2(OpCode::CPUI_CBRANCH, dest, cond);
    assert_eq!(ops.len(), 1);
    assert_eq!(ops[0].get_opcode(), OpCode::CPUI_CBRANCH);
    assert_eq!(ops[0].num_input(), 2);
    assert_eq!(ops[0].get_in(0).get_offset().get_real(), 0x40);
    assert_eq!(ops[0].get_in(1).get_offset().get_real(), 0);
    assert!(ops[0].get_out().is_none());

    let ops1 = comp.create_op_no_out(
        OpCode::CPUI_BRANCHIND,
        ExprTree::new(ram_vn(&manager, 8, 4)),
    );
    assert_eq!(ops1.len(), 1);
    assert_eq!(ops1[0].num_input(), 1);
}

#[test]
fn pcodecompile_create_op_const() {
    let manager = test_manager(false);
    let mut comp = TestCompile::new(&manager);
    let ops = comp.create_op_const(OpCode::CPUI_RETURN, 1);
    assert_eq!(ops.len(), 1);
    assert_eq!(ops[0].get_opcode(), OpCode::CPUI_RETURN);
    assert!(ops[0].get_in(0).get_space().is_const_space());
    assert_eq!(ops[0].get_in(0).get_offset().get_real(), 1);
    assert_eq!(ops[0].get_in(0).get_size().get_real(), 4);
}

// -- load/store ---------------------------------------------------------------

#[test]
fn pcodecompile_create_load_forces_output_size() {
    let manager = test_manager(false);
    let mut comp = TestCompile::new(&manager);
    let ram = Rc::clone(manager.get_space_by_name("ram").unwrap());
    let qual = StarQuality {
        id: ConstTpl::new_space(ram),
        size: 4,
    };
    let load = comp
        .create_load(qual, ExprTree::new(ram_vn(&manager, 0x20, 4)))
        .unwrap();
    assert_eq!(load.ops.len(), 1);
    let op = &load.ops[0];
    assert_eq!(op.get_opcode(), OpCode::CPUI_LOAD);
    assert_eq!(op.num_input(), 2);
    // input 0: constant-space reference to the loaded space, size 8
    assert!(op.get_in(0).get_space().is_const_space());
    assert_eq!(op.get_in(0).get_size().get_real(), 8);
    // input 1: the pointer
    assert_eq!(op.get_in(1).get_offset().get_real(), 0x20);
    // output: temp forced to the qualifier size, and the ExprTree's
    // outvn copy reflects the forced size
    assert_eq!(op.get_out().unwrap().get_size().get_real(), 4);
    assert_eq!(load.get_out().unwrap().get_size().get_real(), 4);
}

#[test]
fn pcodecompile_create_store_op_shape() {
    let manager = test_manager(false);
    let mut comp = TestCompile::new(&manager);
    let ram = Rc::clone(manager.get_space_by_name("ram").unwrap());
    let qual = StarQuality {
        id: ConstTpl::new_space(ram),
        size: 4,
    };
    // value is an unnamed zero-size temp so the force_size shows up
    let val = comp.create_op(
        OpCode::CPUI_INT_NEGATE,
        ExprTree::new(ram_vn(&manager, 4, 0)),
    );
    let ops = comp
        .create_store(qual, ExprTree::new(ram_vn(&manager, 0x20, 4)), val)
        .unwrap();
    assert_eq!(ops.len(), 2);
    let st = &ops[1];
    assert_eq!(st.get_opcode(), OpCode::CPUI_STORE);
    assert_eq!(st.num_input(), 3);
    assert!(st.get_in(0).get_space().is_const_space());
    assert_eq!(st.get_in(1).get_offset().get_real(), 0x20);
    // the stored value's size was forced to the qualifier size and
    // propagated to the temp's defining op
    assert_eq!(st.get_in(2).get_size().get_real(), 4);
    assert_eq!(ops[0].get_out().unwrap().get_size().get_real(), 4);
}

// -- user ops / variadic --------------------------------------------------------

#[test]
fn pcodecompile_create_user_op_no_out_and_with_out() {
    let manager = test_manager(false);
    let mut comp = TestCompile::new(&manager);
    let mut sym = UserOpSymbol::default();
    sym.set_index(7);

    let params = vec![
        ExprTree::new(ram_vn(&manager, 0, 4)),
        ExprTree::new(ram_vn(&manager, 4, 4)),
    ];
    let ops = comp.create_user_op_no_out(&sym, params);
    assert_eq!(ops.len(), 1);
    let op = &ops[0];
    assert_eq!(op.get_opcode(), OpCode::CPUI_CALLOTHER);
    assert_eq!(op.num_input(), 3);
    // input 0: the userop index constant
    assert!(op.get_in(0).get_space().is_const_space());
    assert_eq!(op.get_in(0).get_offset().get_real(), 7);
    assert_eq!(op.get_in(0).get_size().get_real(), 4);
    assert_eq!(op.get_in(1).get_offset().get_real(), 0);
    assert_eq!(op.get_in(2).get_offset().get_real(), 4);
    assert!(op.get_out().is_none());

    let tree = comp.create_user_op(&sym, vec![ExprTree::new(ram_vn(&manager, 8, 4))]);
    assert_eq!(tree.ops.len(), 1);
    assert!(tree.ops[0].get_out().is_some());
    assert_eq!(
        tree.get_out().unwrap().get_offset().get_real(),
        tree.ops[0].get_out().unwrap().get_offset().get_real()
    );
}

#[test]
fn pcodecompile_create_variadic_splices_param_ops() {
    let manager = test_manager(false);
    let mut comp = TestCompile::new(&manager);
    let p0 = comp.create_op(
        OpCode::CPUI_INT_NEGATE,
        ExprTree::new(ram_vn(&manager, 0, 4)),
    );
    let p1 = ExprTree::new(ram_vn(&manager, 4, 4));
    let tree = comp.create_variadic(OpCode::CPUI_PIECE, vec![p0, p1]);
    assert_eq!(tree.ops.len(), 2);
    assert_eq!(tree.ops[0].get_opcode(), OpCode::CPUI_INT_NEGATE);
    assert_eq!(tree.ops[1].get_opcode(), OpCode::CPUI_PIECE);
    assert_eq!(tree.ops[1].num_input(), 2);
    assert!(tree.ops[1].get_out().is_some());
}

// -- labels -------------------------------------------------------------------

#[test]
fn pcodecompile_define_and_place_label() {
    let manager = test_manager(false);
    let mut comp = TestCompile::new(&manager);
    let lab = comp.define_label(b"skip");
    assert_eq!(lab.get_index(), 0);
    assert_eq!(comp.local_label_count(), 1);
    assert_eq!(comp.symbols.len(), 1);
    assert_eq!(comp.symbols[0].get_name(), b"skip");
    assert!(!lab.is_placed());

    let ops = comp.place_label(&lab);
    assert!(lab.is_placed());
    assert_eq!(ops.len(), 1);
    assert_eq!(ops[0].get_opcode(), LABELBUILD);
    assert!(ops[0].get_in(0).get_space().is_const_space());
    assert_eq!(ops[0].get_in(0).get_offset().get_real(), 0);
    assert!(comp.errors.is_empty());

    // placing again reports the C++ error text
    let _ = comp.place_label(&lab);
    assert_eq!(
        comp.errors,
        vec!["Label 'skip' is placed more than once".to_string()]
    );

    // refcount bookkeeping used by the grammar
    lab.increment_ref_count();
    lab.increment_ref_count();
    assert_eq!(lab.get_ref_count(), 2);

    // a second label gets the next index
    let lab2 = comp.define_label(b"next");
    assert_eq!(lab2.get_index(), 1);
}

// -- newOutput / newLocalDefinition ----------------------------------------------

#[test]
fn pcodecompile_new_output_inherits_size_and_defines_symbol() {
    let manager = test_manager(false);
    let mut comp = TestCompile::new(&manager);
    let rhs = ExprTree::new(ram_vn(&manager, 0x42, 4));
    let ops = comp.new_output(true, rhs, b"tmp", 0).unwrap();
    // named rhs output: a COPY into the new temp
    assert_eq!(ops.len(), 1);
    assert_eq!(ops[0].get_opcode(), OpCode::CPUI_COPY);
    let out = ops[0].get_out().unwrap();
    assert!(out.get_space().is_unique_space());
    // size inherited from rhs
    assert_eq!(out.get_size().get_real(), 4);
    // the VarnodeSymbol was created
    assert_eq!(comp.symbols.len(), 1);
    match &comp.symbols[0] {
        PcodeCompileSymbol::Sleigh(sym) => {
            assert_eq!(sym.get_name(), b"tmp");
            assert_eq!(sym.get_type(), SymbolType::Varnode);
        }
        PcodeCompileSymbol::Label(_) => panic!("expected a varnode symbol"),
    }

    // enforceLocalKey error path
    comp.set_enforce_local_key(true);
    let rhs2 = ExprTree::new(ram_vn(&manager, 0x42, 4));
    let _ = comp.new_output(false, rhs2, b"bad", 0).unwrap();
    assert_eq!(
        comp.errors,
        vec!["Must use 'local' keyword to define symbol 'bad'".to_string()]
    );
}

#[test]
fn pcodecompile_new_local_definition() {
    let manager = test_manager(false);
    let mut comp = TestCompile::new(&manager);
    comp.new_local_definition(b"loc", 2);
    assert_eq!(comp.symbols.len(), 1);
    assert_eq!(comp.symbols[0].get_name(), b"loc");
}

// -- bit ranges ---------------------------------------------------------------

#[test]
fn pcodecompile_build_truncated_varnode() {
    let manager = test_manager(false);
    let comp = TestCompile::new(&manager);
    // little-endian real offset: plus = byteoffset
    let vn = ram_vn(&manager, 0x100, 8);
    let trunc = comp.build_truncated_varnode(&vn, 16, 16).unwrap().unwrap();
    assert_eq!(trunc.get_offset().get_real(), 0x102);
    assert_eq!(trunc.get_size().get_real(), 2);

    // big-endian flips the offset
    let manager_be = test_manager(true);
    let comp_be = TestCompile::new(&manager_be);
    let vn_be = {
        let mut v = ram_vn(&manager_be, 0x100, 8);
        v.set_size(ConstTpl::new_real(ConstType::Real, 8));
        v
    };
    let trunc_be = comp_be
        .build_truncated_varnode(&vn_be, 16, 16)
        .unwrap()
        .unwrap();
    assert_eq!(trunc_be.get_offset().get_real(), 0x100 + (8 - (2 + 2)));

    // non-byte-aligned ranges are not constructible
    assert!(comp.build_truncated_varnode(&vn, 3, 8).unwrap().is_none());
    assert!(comp.build_truncated_varnode(&vn, 8, 3).unwrap().is_none());

    // handle offsets defer via v_offset_plus
    let hvn = VarnodeTpl::new_from_handle(2, false);
    let htrunc = comp.build_truncated_varnode(&hvn, 8, 8).unwrap().unwrap();
    assert_eq!(htrunc.get_offset().get_type(), ConstType::Handle);
    assert_eq!(htrunc.get_offset().get_select(), VField::VOffsetPlus);
    assert_eq!(htrunc.get_offset().get_handle_index(), 2);
    assert_eq!(htrunc.get_offset().get_real(), 1);

    // out-of-bounds range throws the C++ SleighError
    let err = comp.build_truncated_varnode(&vn, 32, 64).unwrap_err();
    assert_eq!(err.explain(), "Requested bit range out of bounds");
}

#[test]
fn pcodecompile_assign_bit_range_truncated_path() {
    let manager = test_manager(false);
    let mut comp = TestCompile::new(&manager);
    // byte-aligned assignment into an 8-byte varnode: COPY to the
    // truncated target
    let vn = ram_vn(&manager, 0x100, 8);
    let rhs = ExprTree::new(ram_vn(&manager, 0x200, 2));
    let ops = comp.assign_bit_range(vn, 16, 16, rhs).unwrap();
    assert!(comp.errors.is_empty());
    assert_eq!(ops.len(), 1);
    assert_eq!(ops[0].get_opcode(), OpCode::CPUI_COPY);
    let out = ops[0].get_out().unwrap();
    assert_eq!(out.get_offset().get_real(), 0x102);
    assert_eq!(out.get_size().get_real(), 2);
}

#[test]
fn pcodecompile_assign_bit_range_mask_path() {
    let manager = test_manager(false);
    let mut comp = TestCompile::new(&manager);
    // non-byte-aligned: AND/ZEXT/SHIFT/OR sequence
    let vn = ram_vn(&manager, 0x100, 4);
    let rhs = ExprTree::new(ram_vn(&manager, 0x200, 1));
    let ops = comp.assign_bit_range(vn, 3, 5, rhs).unwrap();
    assert!(comp.errors.is_empty());
    let opcodes: Vec<OpCode> = ops.iter().map(|op| op.get_opcode()).collect();
    assert_eq!(
        opcodes,
        vec![
            OpCode::CPUI_INT_AND,
            OpCode::CPUI_INT_ZEXT,
            OpCode::CPUI_INT_LEFT,
            OpCode::CPUI_INT_OR,
        ]
    );
    // the AND mask clears bits [3,8)
    let mask = !(((2u64 << 4) - 1) << 3);
    assert_eq!(ops[0].get_in(1).get_offset().get_real(), mask);
    // the final OR writes back into the full varnode
    let out = ops[3].get_out().unwrap();
    assert_eq!(out.get_offset().get_real(), 0x100);
    assert_eq!(out.get_size().get_real(), 4);

    // error path: zero-size bitrange passes through the rhs ops
    let vn2 = ram_vn(&manager, 0x100, 4);
    let rhs2 = ExprTree::new(ram_vn(&manager, 0x200, 1));
    let ops2 = comp.assign_bit_range(vn2, 0, 0, rhs2).unwrap();
    assert!(ops2.is_empty());
    assert_eq!(comp.errors, vec!["Size of bitrange is zero".to_string()]);
}

#[test]
fn pcodecompile_create_bit_range_paths() {
    let manager = test_manager(false);
    let mut comp = TestCompile::new(&manager);

    // zero-size handle varnode with byte-aligned range from 0: just set
    // the size
    let hvn = VarnodeTpl::new_from_handle(0, true);
    let res = comp.create_bit_range(hvn, b"opnd", 0, 16).unwrap();
    assert!(res.ops.is_empty());
    assert_eq!(res.get_out().unwrap().get_size().get_real(), 2);

    // truncated-varnode path
    let vn = ram_vn(&manager, 0x100, 8);
    let res2 = comp.create_bit_range(vn, b"reg", 16, 16).unwrap();
    assert!(res2.ops.is_empty());
    assert_eq!(res2.get_out().unwrap().get_offset().get_real(), 0x102);

    // shift+mask path: bits [3,8) of a 4-byte register
    let vn3 = ram_vn(&manager, 0x100, 4);
    let res3 = comp.create_bit_range(vn3, b"reg", 3, 5).unwrap();
    assert!(comp.errors.is_empty());
    let opcodes: Vec<OpCode> = res3.ops.iter().map(|op| op.get_opcode()).collect();
    assert_eq!(
        opcodes,
        vec![
            OpCode::CPUI_INT_RIGHT,
            OpCode::CPUI_SUBPIECE,
            OpCode::CPUI_INT_AND,
        ]
    );
    // INT_RIGHT by the bitoffset, SUBPIECE by 0 (byte shift), AND with
    // the 5-bit mask
    assert_eq!(res3.ops[0].get_in(1).get_offset().get_real(), 3);
    assert_eq!(res3.ops[1].get_in(1).get_offset().get_real(), 0);
    assert_eq!(res3.ops[2].get_in(1).get_offset().get_real(), 0x1f);
    // final size forced to 1 byte
    assert_eq!(res3.get_out().unwrap().get_size().get_real(), 1);

    // superfluous bitrange is an error: needs a varnode the truncated
    // path cannot handle (non-real, non-handle offset), full range
    let vn4 = VarnodeTpl::new(
        ConstTpl::new_space(Rc::clone(manager.get_space_by_name("ram").unwrap())),
        ConstTpl::new_type(ConstType::JStart),
        ConstTpl::new_real(ConstType::Real, 4),
    );
    let _ = comp.create_bit_range(vn4, b"reg", 0, 32).unwrap();
    assert_eq!(comp.errors, vec!["Superfluous bitrange".to_string()]);
}

// -- addressOf ----------------------------------------------------------------

#[test]
fn pcodecompile_address_of() {
    let manager = test_manager(false);
    let comp = TestCompile::new(&manager);
    // real offset in a spaceid varnode: offset surfaces as a constant,
    // with the space's address size when none specified
    let vn = ram_vn(&manager, 0x42, 4);
    let res = comp.address_of(vn, 0);
    assert!(res.get_space().is_const_space());
    assert_eq!(res.get_offset().get_real(), 0x42);
    assert_eq!(res.get_size().get_real(), 4);

    // non-real offset passes the offset template through
    let hvn = VarnodeTpl::new_from_handle(1, false);
    let res2 = comp.address_of(hvn, 2);
    assert!(res2.get_space().is_const_space());
    assert_eq!(res2.get_offset().get_type(), ConstType::Handle);
    assert_eq!(res2.get_size().get_real(), 2);
}

// -- size propagation -----------------------------------------------------------

#[test]
fn pcodecompile_propagate_size_fills_temps() {
    let manager = test_manager(false);
    let mut comp = TestCompile::new(&manager);
    // tmp = ram(0):4 + ram(4):4 ; ram(8):4 = tmp — temp sizes start 0
    let mut add = comp.create_op2(
        OpCode::CPUI_INT_ADD,
        ExprTree::new(ram_vn(&manager, 0, 4)),
        ExprTree::new(ram_vn(&manager, 4, 4)),
    );
    let temp_out = add.outvn.take().unwrap();
    let mut ops = ExprTree::to_vector(add);
    let mut copy = OpTpl::new(OpCode::CPUI_COPY);
    copy.add_input(temp_out);
    copy.set_output(ram_vn(&manager, 8, 4));
    ops.push(copy);
    let mut ct = ConstructTpl::new();
    assert!(ct.add_op_list(ops));
    assert!(propagate_size(&mut ct).unwrap());
    // the temp's size was filled in everywhere
    assert_eq!(
        ct.get_opvec()[0].get_out().unwrap().get_size().get_real(),
        4
    );
    assert_eq!(ct.get_opvec()[1].get_in(0).get_size().get_real(), 4);

    // a template whose zero sizes cannot be resolved returns false
    let mut ct2 = ConstructTpl::new();
    let mut comp2 = TestCompile::new(&manager);
    let lonely = comp2.create_op2(
        OpCode::CPUI_INT_ADD,
        ExprTree::new(ram_vn(&manager, 0, 0)),
        ExprTree::new(ram_vn(&manager, 4, 0)),
    );
    assert!(ct2.add_op_list(ExprTree::to_vector(lonely)));
    assert!(!propagate_size(&mut ct2).unwrap());
}

#[test]
fn pcodecompile_fillin_zero_bool_and_shift_rules() {
    let manager = test_manager(false);
    let mut comp = TestCompile::new(&manager);
    // bool output: forced to size 1
    let eq = comp.create_op2(
        OpCode::CPUI_INT_EQUAL,
        ExprTree::new(ram_vn(&manager, 0, 4)),
        ExprTree::new(ram_vn(&manager, 4, 4)),
    );
    let mut ct = ConstructTpl::new();
    assert!(ct.add_op_list(ExprTree::to_vector(eq)));
    assert!(propagate_size(&mut ct).unwrap());
    assert_eq!(
        ct.get_opvec()[0].get_out().unwrap().get_size().get_real(),
        1
    );

    // shift: output inherits in(0)'s size, shift amount gets size 4
    let mut comp2 = TestCompile::new(&manager);
    let sh = comp2.create_op2(
        OpCode::CPUI_INT_LEFT,
        ExprTree::new(ram_vn(&manager, 0, 4)),
        ExprTree::new(ram_vn(&manager, 8, 0)),
    );
    let mut ct2 = ConstructTpl::new();
    assert!(ct2.add_op_list(ExprTree::to_vector(sh)));
    assert!(propagate_size(&mut ct2).unwrap());
    let op = &ct2.get_opvec()[0];
    assert_eq!(op.get_out().unwrap().get_size().get_real(), 4);
    assert_eq!(op.get_in(1).get_size().get_real(), 4);
}

#[test]
fn pcodecompile_force_size_mismatch_is_error() {
    let manager = test_manager(false);
    let uniq = Rc::clone(manager.get_space_by_name("unique").unwrap());
    // two uses of the same local temp with conflicting real sizes
    let temp = |size: u64| {
        VarnodeTpl::new(
            ConstTpl::new_space(Rc::clone(&uniq)),
            ConstTpl::new_real(ConstType::Real, 0x100),
            ConstTpl::new_real(ConstType::Real, size),
        )
    };
    let mut op0 = OpTpl::new(OpCode::CPUI_COPY);
    op0.add_input(ram_vn(&manager, 0, 4));
    op0.set_output(temp(8));
    let mut ops = vec![op0];
    let mut vt = temp(0);
    let err = force_size(&mut vt, &ConstTpl::new_real(ConstType::Real, 4), &mut ops).unwrap_err();
    assert_eq!(err.explain(), "Localtemp size mismatch");
}

// -- Location -------------------------------------------------------------------

#[test]
fn pcodecompile_location_format() {
    let loc = Location::new(b"inject.pspec", 42);
    assert_eq!(loc.get_filename(), b"inject.pspec");
    assert_eq!(loc.get_lineno(), 42);
    assert_eq!(loc.format(), "inject.pspec:42");
}

// -- StarQuality smoke ------------------------------------------------------------

#[test]
fn pcodecompile_star_quality_holds_space_template() {
    let manager = test_manager(false);
    let ram = Rc::clone(manager.get_space_by_name("ram").unwrap());
    let qual = StarQuality {
        id: ConstTpl::new_space(Rc::clone(&ram)),
        size: 4,
    };
    assert_eq!(qual.id.get_type(), ConstType::Spaceid);
    assert!(Rc::ptr_eq(&qual.id.get_space(), &ram));
    let h = HandleTpl::new_from_varnode(&ram_vn(&manager, 0, 4));
    assert_eq!(h.get_ptr_space().get_real(), 0);
}
