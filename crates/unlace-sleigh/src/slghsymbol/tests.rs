use unlace_base::marshal::{PackedDecode, PackedEncode};
use unlace_base::space::{AddrSpaceManager, ConstantSpace, addrspace_flags};

use crate::lazysla::{SlaSource, SlaStream};
use crate::semantics::ConstructTpl;
use crate::slghpatexpress::TokenField;
use crate::slghpattern::{InstructionPattern, PatternBlock};

use super::*;

// -- fixtures --------------------------------------------------------------

fn test_manager() -> AddrSpaceManager {
    let mut manager = AddrSpaceManager::new();
    manager.insert_space(Rc::new(ConstantSpace::new())).unwrap();
    let spc = AddrSpace::new(
        spacetype_processor(),
        "ram",
        false,
        4,
        1,
        1,
        addrspace_flags::hasphysical,
        1,
        1,
    );
    manager.insert_space(Rc::new(spc)).unwrap();
    manager
}

fn spacetype_processor() -> unlace_base::space::spacetype {
    unlace_base::space::spacetype::IPTR_PROCESSOR
}

fn ram(manager: &AddrSpaceManager) -> Rc<AddrSpace> {
    Rc::clone(manager.get_space_by_name("ram").unwrap())
}

fn cspace(manager: &AddrSpaceManager) -> Rc<AddrSpace> {
    Rc::clone(manager.get_constant_space().unwrap())
}

/// [`SleighBaseTrans`] for symbol fixtures without p-code sections.
struct TestTrans {
    cspace: Rc<AddrSpace>,
}

impl TestTrans {
    fn new(manager: &AddrSpaceManager) -> TestTrans {
        TestTrans {
            cspace: cspace(manager),
        }
    }
}

impl SleighBaseTrans for TestTrans {
    fn get_constant_space(&self) -> Rc<AddrSpace> {
        Rc::clone(&self.cspace)
    }

    fn decode_construct_tpl(
        &mut self,
        _decoder: &mut dyn OpcodeDecoder,
    ) -> UnlaceResult<(i32, ConstructTplHandle)> {
        Err(UnlaceError::sleigh("no ConstructTpl in symbol tests"))
    }
}

/// Synthetic [`SymbolWalker`]/[`SymbolWalkerChange`]: byte/context
/// providers mirroring the documented ParserContext semantics, an
/// operand-path -> constructor map for print recursion, and recorders
/// for the context-command applies.
struct TestWalker {
    instr: Vec<u8>,
    ctx: Vec<u32>,
    addr: Option<Address>,
    naddr: Option<Address>,
    const_space: Option<Rc<AddrSpace>>,
    cur_space: Option<Rc<AddrSpace>>,
    /// current operand path (push/pop_operand)
    path: std::cell::RefCell<Vec<i32>>,
    /// operand path -> constructor at that point
    ctmap: Vec<(Vec<i32>, ConstructorRef)>,
    /// canned fixed handles per operand index
    handles: Vec<(i32, FixedHandle)>,
    /// recorded set_context_word calls
    set_words: Vec<(i32, u32, u32)>,
    /// recorded add_commit calls
    commits: Vec<(u32, i32, u32, bool)>,
}

impl TestWalker {
    fn from_bytes(instr: &[u8]) -> TestWalker {
        TestWalker {
            instr: instr.to_vec(),
            ctx: Vec::new(),
            addr: None,
            naddr: None,
            const_space: None,
            cur_space: None,
            path: std::cell::RefCell::new(Vec::new()),
            ctmap: Vec::new(),
            handles: Vec::new(),
            set_words: Vec::new(),
            commits: Vec::new(),
        }
    }
}

impl PatternExpressionContext for TestWalker {
    fn get_instruction_bytes(&self, byteoff: i32, numbytes: i32) -> UnlaceResult<u32> {
        if byteoff < 0 || (byteoff + numbytes) as usize > self.instr.len() {
            return Err(UnlaceError::bad_data(
                "Instruction is using more than 16 bytes",
            ));
        }
        let mut res: u32 = 0;
        for i in 0..numbytes {
            res = res.wshl(8);
            res |= u32::from(self.instr[(byteoff + i) as usize]);
        }
        Ok(res)
    }

    fn get_context_bytes(&self, bytestart: i32, size: i32) -> UnlaceResult<u32> {
        let intstart = (bytestart / 4) as usize;
        let mut res: u32 = *self.ctx.get(intstart).unwrap_or(&0);
        let byte_offset = bytestart % 4;
        let unused_bytes = 4 - size;
        res = res.wshl((byte_offset * 8) as u32);
        res = res.wshr((unused_bytes * 8) as u32);
        Ok(res)
    }

    fn get_addr(&self) -> Address {
        self.addr.clone().expect("test walker addr unset")
    }

    fn get_naddr(&self) -> Address {
        self.naddr.clone().expect("test walker naddr unset")
    }

    fn get_n2addr(&self) -> UnlaceResult<Address> {
        Err(UnlaceError::lowlevel(
            "inst_next2 not available in this context",
        ))
    }

    fn operand_value(&self, _index: i32, _table_id: u32, _ct_id: u32) -> UnlaceResult<i64> {
        Err(UnlaceError::sleigh("no operand values in symbol tests"))
    }
}

impl SymbolWalker for TestWalker {
    fn push_operand(&mut self, i: i32) -> UnlaceResult<()> {
        self.path.borrow_mut().push(i);
        Ok(())
    }

    fn pop_operand(&mut self) -> UnlaceResult<()> {
        self.path.borrow_mut().pop();
        Ok(())
    }

    fn get_constructor(&self) -> UnlaceResult<ConstructorRef> {
        let path = self.path.borrow();
        for (p, ctref) in &self.ctmap {
            if *p == *path {
                return Ok(*ctref);
            }
        }
        Err(UnlaceError::sleigh(
            "no constructor mapped for operand path",
        ))
    }

    fn get_fixed_handle(&self, i: i32) -> UnlaceResult<FixedHandle> {
        for (ind, hand) in &self.handles {
            if *ind == i {
                return Ok(hand.clone());
            }
        }
        Err(UnlaceError::sleigh("no fixed handle for operand"))
    }

    fn get_const_space(&self) -> Rc<AddrSpace> {
        Rc::clone(self.const_space.as_ref().expect("const space unset"))
    }

    fn get_cur_space(&self) -> Rc<AddrSpace> {
        Rc::clone(self.cur_space.as_ref().expect("cur space unset"))
    }

    fn get_dest_addr(&self) -> UnlaceResult<Address> {
        Err(UnlaceError::lowlevel("no flowdest in symbol tests"))
    }

    fn get_ref_addr(&self) -> UnlaceResult<Address> {
        Err(UnlaceError::lowlevel("no flowref in symbol tests"))
    }

    fn get_instruction_bits(&self, startbit: i32, size: i32) -> UnlaceResult<u32> {
        // bit 0 is the MSB of instruction byte 0
        let mut res: u32 = 0;
        for i in 0..size {
            let bit = startbit + i;
            let byte = (bit / 8) as usize;
            if byte >= self.instr.len() {
                return Err(UnlaceError::bad_data("instruction bits past buffer"));
            }
            let b = (self.instr[byte] >> (7 - (bit % 8))) & 1;
            res = (res << 1) | u32::from(b);
        }
        Ok(res)
    }

    fn get_context_bits(&self, startbit: i32, size: i32) -> UnlaceResult<u32> {
        // bit 0 is the MSB of context word 0
        let mut res: u32 = 0;
        for i in 0..size {
            let bit = startbit + i;
            let word = (bit / 32) as usize;
            if word >= self.ctx.len() {
                return Err(UnlaceError::bad_data("context bits past buffer"));
            }
            let b = (self.ctx[word] >> (31 - (bit % 32))) & 1;
            res = (res << 1) | (b & 1);
        }
        Ok(res)
    }
}

impl SymbolWalkerChange for TestWalker {
    fn set_context_word(&mut self, i: i32, val: u32, mask: u32) {
        self.set_words.push((i, val, mask));
    }

    fn add_commit(&mut self, symbol_id: u32, num: i32, mask: u32, flow: bool) {
        self.commits.push((symbol_id, num, mask, flow));
    }
}

fn tokenfield(bstart: i32, bend: i32) -> TokenField {
    // 1-byte little-endian unsigned token field
    TokenField::new(1, false, false, bstart, bend)
}

// -- SymbolScope / SymbolTable basics ---------------------------------------

#[test]
fn symbol_scope_nested_lookup_and_shadowing() {
    let mut table = SymbolTable::new();
    table.add_scope(); // global scope (id 0)
    assert_eq!(table.get_current_scope(), Some(0));
    let outer = table
        .add_global_symbol(SleighSymbol::new_userop(b"thing"))
        .unwrap();
    table.add_scope(); // nested scope (id 1)
    assert_eq!(table.get_current_scope(), Some(1));
    let inner = table
        .add_symbol(SleighSymbol::new_subtable(b"thing"))
        .unwrap();
    assert_ne!(outer, inner);
    // current chain finds the inner (shadowing) symbol
    assert_eq!(table.find_symbol(b"thing").unwrap().get_id(), inner);
    assert_eq!(
        table.find_symbol(b"thing").unwrap().get_type(),
        SymbolType::Subtable
    );
    // skipping one scope finds the global one
    assert_eq!(table.find_symbol_skip(b"thing", 1).unwrap().get_id(), outer);
    // global lookup likewise
    assert_eq!(
        table.find_global_symbol(b"thing").unwrap().get_type(),
        SymbolType::UserOp
    );
    // popScope: current becomes the parent
    table.pop_scope();
    assert_eq!(table.get_current_scope(), Some(0));
    assert_eq!(table.find_symbol(b"thing").unwrap().get_id(), outer);
    // unknown name is None
    assert!(table.find_symbol(b"nope").is_none());
    // by-id lookup
    assert_eq!(table.find_symbol_by_id(inner).unwrap().get_name(), b"thing");
    // scope iteration is name-ordered (SymbolCompare)
    table.set_current_scope(Some(0));
    table
        .add_symbol(SleighSymbol::new_userop(b"alpha"))
        .unwrap();
    let ids: Vec<u32> = table.get_global_scope().unwrap().symbol_ids().collect();
    let names: Vec<&[u8]> = ids
        .iter()
        .map(|i| table.find_symbol_by_id(*i).unwrap().get_name())
        .collect();
    assert_eq!(names, vec![&b"alpha"[..], &b"thing"[..]]);
}

#[test]
fn symbol_table_duplicate_names_error() {
    let mut table = SymbolTable::new();
    table.add_scope();
    table
        .add_global_symbol(SleighSymbol::new_userop(b"dup"))
        .unwrap();
    let err = table
        .add_global_symbol(SleighSymbol::new_userop(b"dup"))
        .expect_err("duplicate must fail");
    assert_eq!(
        format!("{err}"),
        format!("{}", UnlaceError::sleigh("Duplicate symbol name 'dup'"))
    );
    let err2 = table
        .add_symbol(SleighSymbol::new_userop(b"dup"))
        .expect_err("duplicate must fail");
    assert!(format!("{err2}").contains("Duplicate symbol name: dup"));
    assert_eq!(table.num_symbols(), 3);
    assert_eq!(table.find_global_symbol(b"dup").unwrap().get_id(), 0);
    for id in 0..3 {
        assert_eq!(table.find_symbol_by_id(id).unwrap().get_name(), b"dup");
    }

    table
        .replace_symbol(2, SleighSymbol::new_subtable(b"dup"))
        .unwrap();
    let replacement = table.find_global_symbol(b"dup").unwrap();
    assert_eq!(replacement.get_id(), 2);
    assert_eq!(replacement.get_scope_id(), 0);
    assert_eq!(replacement.get_type(), SymbolType::Subtable);
    assert_eq!(table.num_symbols(), 3);
    let ids: Vec<_> = table.get_global_scope().unwrap().symbol_ids().collect();
    assert_eq!(ids, [2]);
}

#[test]
fn symbol_table_purge_preserves_name_lookup() {
    let mut table = SymbolTable::new();
    table.add_scope();
    table
        .add_symbol(SleighSymbol::new(
            b"temporary",
            SymbolKind::Section(SectionSymbol::new(0)),
        ))
        .unwrap();
    table
        .add_symbol(SleighSymbol::new_userop(b"first"))
        .unwrap();
    table
        .add_symbol(SleighSymbol::new_userop(b"second"))
        .unwrap();

    for _ in 0..2 {
        table.purge();
        assert!(table.find_global_symbol(b"temporary").is_none());
        for (id, name) in [(0, b"first".as_slice()), (1, b"second".as_slice())] {
            let symbol = table.find_global_symbol(name).unwrap();
            assert_eq!(symbol.get_name(), name);
            assert_eq!(symbol.get_id(), id);
            assert_eq!(table.find_symbol(name).unwrap().get_id(), id);
            assert_eq!(table.find_symbol_by_id(id).unwrap().get_name(), name);
        }
        let ids: Vec<_> = table.get_global_scope().unwrap().symbol_ids().collect();
        assert_eq!(ids, [0, 1]);
    }
}

#[test]
fn symbol_table_purge_removes_owned_operands_and_empty_scopes() {
    let mut table = SymbolTable::new();
    table.add_scope();
    table.add_symbol(SleighSymbol::new_userop(b"keep")).unwrap();
    table.add_scope();
    let macro_operand = table
        .add_symbol(SleighSymbol::new_operand(
            b"macro_arg",
            0,
            ConstructorRef {
                table_id: u32::MAX,
                ct_id: 0,
            },
        ))
        .unwrap();
    table.pop_scope();
    let mut macro_symbol = MacroSymbol::new(0);
    macro_symbol.add_operand(macro_operand);
    table
        .add_symbol(SleighSymbol::new(b"macro", SymbolKind::Macro(macro_symbol)))
        .unwrap();

    let unused = table
        .add_symbol(SleighSymbol::new_subtable(b"unused"))
        .unwrap();
    table.add_scope();
    let operand = table
        .add_symbol(SleighSymbol::new_operand(
            b"table_arg",
            0,
            ConstructorRef {
                table_id: unused,
                ct_id: 0,
            },
        ))
        .unwrap();
    let mut constructor = Constructor::new();
    constructor.set_parent(unused);
    constructor.add_operand(operand);
    table
        .find_symbol_by_id_mut(unused)
        .unwrap()
        .as_subtable_mut()
        .unwrap()
        .add_constructor(constructor);
    table.pop_scope();

    table.purge();
    assert_eq!(table.num_scopes(), 1);
    assert_eq!(table.num_symbols(), 1);
    assert_eq!(table.get_current_scope(), Some(0));
    assert_eq!(table.find_global_symbol(b"keep").unwrap().get_id(), 0);
    assert!(table.find_global_symbol(b"macro").is_none());
    assert!(table.find_global_symbol(b"unused").is_none());
    let ids: Vec<_> = table.get_global_scope().unwrap().symbol_ids().collect();
    assert_eq!(ids, [0]);
}

// -- calc_maskword / ContextOp / ContextCommit -------------------------------

#[test]
fn context_op_new_calc_maskword() {
    let op = ContextOp::new(
        4,
        7,
        PatternExpression::Value(PatternValue::ConstantValue(ConstantValue::new(3))),
    )
    .unwrap();
    assert_eq!(op.num, 0);
    assert_eq!(op.shift, 24);
    assert_eq!(op.mask, 0x0f00_0000);
    // field straddling two machine ints
    let err = ContextOp::new(
        30,
        33,
        PatternExpression::Value(PatternValue::ConstantValue(ConstantValue::new(0))),
    )
    .expect_err("straddling field must fail");
    assert!(format!("{err}").contains("Context field not contained within one machine int"));
}

#[test]
fn context_op_decode_apply_roundtrip() {
    let manager = test_manager();
    // hand-encode context_op{i=1, shift=4, mask=0xf0} around intb 3
    let mut buf = Vec::new();
    {
        let mut enc = PackedEncode::new(&mut buf);
        enc.open_element(&sla::ELEM_CONTEXT_OP);
        enc.write_signed_integer(&sla::ATTRIB_I, 1);
        enc.write_signed_integer(&sla::ATTRIB_SHIFT, 4);
        enc.write_unsigned_integer(&sla::ATTRIB_MASK, 0xf0);
        enc.open_element(&sla::ELEM_INTB);
        enc.write_signed_integer(&sla::ATTRIB_VAL, 3);
        enc.close_element(&sla::ELEM_INTB);
        enc.close_element(&sla::ELEM_CONTEXT_OP);
    }
    let table = SymbolTable::new();
    let mut dec = PackedDecode::new(&manager);
    dec.ingest_stream(&buf).unwrap();
    let op = ContextOp::decode(&mut dec, &table).unwrap();
    // re-encode is byte identical
    let mut reenc = Vec::new();
    {
        let mut enc = PackedEncode::new(&mut reenc);
        op.encode(&mut enc).unwrap();
    }
    assert_eq!(reenc, buf);
    // apply: val = 3 << 4 into word 1 under mask 0xf0
    let mut walker = TestWalker::from_bytes(&[]);
    ContextChange::Op(op).apply(&mut walker).unwrap();
    assert_eq!(walker.set_words, vec![(1, 0x30, 0xf0)]);
}

#[test]
fn context_commit_decode_apply_roundtrip() {
    let manager = test_manager();
    let mut buf = Vec::new();
    {
        let mut enc = PackedEncode::new(&mut buf);
        enc.open_element(&sla::ELEM_COMMIT);
        enc.write_unsigned_integer(&sla::ATTRIB_ID, 5);
        enc.write_signed_integer(&sla::ATTRIB_NUMBER, 1);
        enc.write_unsigned_integer(&sla::ATTRIB_MASK, 0xff);
        enc.write_bool(&sla::ATTRIB_FLOW, true);
        enc.close_element(&sla::ELEM_COMMIT);
    }
    let mut dec = PackedDecode::new(&manager);
    dec.ingest_stream(&buf).unwrap();
    let commit = ContextCommit::decode(&mut dec).unwrap();
    let mut reenc = Vec::new();
    {
        let mut enc = PackedEncode::new(&mut reenc);
        commit.encode(&mut enc);
    }
    assert_eq!(reenc, buf);
    let mut walker = TestWalker::from_bytes(&[]);
    commit.apply(&mut walker);
    assert_eq!(walker.commits, vec![(5, 1, 0xff, true)]);
}

#[test]
fn constructor_encoding_preserves_sparse_section_ids() {
    let mut constructor = Constructor::new();
    constructor.parent = Some(0);
    constructor.set_main_section(0);
    constructor.set_named_section(0, 1);
    constructor.set_named_section(0, 3);
    let templates = [ConstructTpl::new()];
    let mut bytes = Vec::new();
    constructor
        .encode(&mut PackedEncode::new(&mut bytes), &templates)
        .unwrap();

    let manager = test_manager();
    let mut decoder = PackedDecode::new(&manager);
    decoder.ingest_stream(&bytes).unwrap();
    decoder.open_element_id(&sla::ELEM_CONSTRUCTOR).unwrap();
    let mut sections = Vec::new();
    while decoder.peek_element().unwrap() != 0 {
        sections.push(ConstructTpl::new().decode(&mut decoder).unwrap());
    }
    decoder
        .close_element(sla::ELEM_CONSTRUCTOR.get_id())
        .unwrap();
    assert_eq!(sections, [-1, 1, 3]);
}

#[test]
fn constructor_encoding_rejects_invalid_template_handles() {
    for named in [false, true] {
        let mut constructor = Constructor::new();
        constructor.parent = Some(0);
        if named {
            constructor.set_named_section(0, 2);
        } else {
            constructor.set_main_section(0);
        }
        let mut bytes = Vec::new();
        let error = constructor
            .encode(&mut PackedEncode::new(&mut bytes), &[])
            .unwrap_err();
        assert_eq!(error.explain(), "bad ConstructTpl handle");
    }
}

// -- full symbol-table decode / round-trip ----------------------------------

fn enc_head(enc: &mut PackedEncode, elem: &unlace_base::marshal::ElementId, name: &[u8], id: u64) {
    enc.open_element(elem);
    enc.write_string(&sla::ATTRIB_NAME, name);
    enc.write_unsigned_integer(&sla::ATTRIB_ID, id);
    enc.write_unsigned_integer(&sla::ATTRIB_SCOPE, 0);
    enc.close_element(elem);
}

/// Hand-encode (transcribing the C++ encode methods) a table with one
/// scope and five symbols: subtable "instruction" (2 constructors +
/// decision tree), operand "op0", varnode "r0", userop "syscall",
/// value "imm8".
fn encode_full_table(manager: &AddrSpaceManager) -> Vec<u8> {
    let mut buf = Vec::new();
    let mut enc = PackedEncode::new(&mut buf);
    enc.open_element(&sla::ELEM_SYMBOL_TABLE);
    enc.write_signed_integer(&sla::ATTRIB_SCOPESIZE, 1);
    enc.write_signed_integer(&sla::ATTRIB_SYMBOLSIZE, 5);
    enc.open_element(&sla::ELEM_SCOPE);
    enc.write_unsigned_integer(&sla::ATTRIB_ID, 0);
    enc.write_unsigned_integer(&sla::ATTRIB_PARENT, 0);
    enc.close_element(&sla::ELEM_SCOPE);
    // headers (in id order)
    enc_head(&mut enc, &sla::ELEM_SUBTABLE_SYM_HEAD, b"instruction", 0);
    enc_head(&mut enc, &sla::ELEM_OPERAND_SYM_HEAD, b"op0", 1);
    enc_head(&mut enc, &sla::ELEM_VARNODE_SYM_HEAD, b"r0", 2);
    enc_head(&mut enc, &sla::ELEM_USEROP_HEAD, b"syscall", 3);
    enc_head(&mut enc, &sla::ELEM_VALUE_SYM_HEAD, b"imm8", 4);
    // content id 0: subtable with two constructors + decision tree
    enc.open_element(&sla::ELEM_SUBTABLE_SYM);
    enc.write_unsigned_integer(&sla::ATTRIB_ID, 0);
    enc.write_signed_integer(&sla::ATTRIB_NUMCT, 2);
    // ct0: "nop"
    enc.open_element(&sla::ELEM_CONSTRUCTOR);
    enc.write_unsigned_integer(&sla::ATTRIB_PARENT, 0);
    enc.write_signed_integer(&sla::ATTRIB_FIRST, -1);
    enc.write_signed_integer(&sla::ATTRIB_LENGTH, 1);
    enc.write_signed_integer(&sla::ATTRIB_SOURCE, 0);
    enc.write_signed_integer(&sla::ATTRIB_LINE, 5);
    enc.open_element(&sla::ELEM_PRINT);
    enc.write_string(&sla::ATTRIB_PIECE, b"nop");
    enc.close_element(&sla::ELEM_PRINT);
    enc.close_element(&sla::ELEM_CONSTRUCTOR);
    // ct1: "mov" ' ' opA
    enc.open_element(&sla::ELEM_CONSTRUCTOR);
    enc.write_unsigned_integer(&sla::ATTRIB_PARENT, 0);
    enc.write_signed_integer(&sla::ATTRIB_FIRST, 1);
    enc.write_signed_integer(&sla::ATTRIB_LENGTH, 1);
    enc.write_signed_integer(&sla::ATTRIB_SOURCE, 0);
    enc.write_signed_integer(&sla::ATTRIB_LINE, 7);
    enc.open_element(&sla::ELEM_OPER);
    enc.write_unsigned_integer(&sla::ATTRIB_ID, 1);
    enc.close_element(&sla::ELEM_OPER);
    enc.open_element(&sla::ELEM_PRINT);
    enc.write_string(&sla::ATTRIB_PIECE, b"mov");
    enc.close_element(&sla::ELEM_PRINT);
    enc.open_element(&sla::ELEM_PRINT);
    enc.write_string(&sla::ATTRIB_PIECE, b" ");
    enc.close_element(&sla::ELEM_PRINT);
    enc.open_element(&sla::ELEM_OPPRINT);
    enc.write_signed_integer(&sla::ATTRIB_ID, 0);
    enc.close_element(&sla::ELEM_OPPRINT);
    enc.close_element(&sla::ELEM_CONSTRUCTOR);
    // decision tree: root splits on instruction bit 0
    enc.open_element(&sla::ELEM_DECISION);
    enc.write_signed_integer(&sla::ATTRIB_NUMBER, 2);
    enc.write_bool(&sla::ATTRIB_CONTEXT, false);
    enc.write_signed_integer(&sla::ATTRIB_STARTBIT, 0);
    enc.write_signed_integer(&sla::ATTRIB_SIZE, 1);
    // child 0: terminal, ct0 always-true
    enc.open_element(&sla::ELEM_DECISION);
    enc.write_signed_integer(&sla::ATTRIB_NUMBER, 1);
    enc.write_bool(&sla::ATTRIB_CONTEXT, false);
    enc.write_signed_integer(&sla::ATTRIB_STARTBIT, 0);
    enc.write_signed_integer(&sla::ATTRIB_SIZE, 0);
    enc.open_element(&sla::ELEM_PAIR);
    enc.write_signed_integer(&sla::ATTRIB_ID, 0);
    InstructionPattern::new_always(true).encode(&mut enc);
    enc.close_element(&sla::ELEM_PAIR);
    enc.close_element(&sla::ELEM_DECISION);
    // child 1: terminal, ct1 requires top two bits == 10
    enc.open_element(&sla::ELEM_DECISION);
    enc.write_signed_integer(&sla::ATTRIB_NUMBER, 1);
    enc.write_bool(&sla::ATTRIB_CONTEXT, false);
    enc.write_signed_integer(&sla::ATTRIB_STARTBIT, 0);
    enc.write_signed_integer(&sla::ATTRIB_SIZE, 0);
    enc.open_element(&sla::ELEM_PAIR);
    enc.write_signed_integer(&sla::ATTRIB_ID, 1);
    InstructionPattern::new(PatternBlock::new(0, 0xc000_0000, 0x8000_0000)).encode(&mut enc);
    enc.close_element(&sla::ELEM_PAIR);
    enc.close_element(&sla::ELEM_DECISION);
    enc.close_element(&sla::ELEM_DECISION);
    enc.close_element(&sla::ELEM_SUBTABLE_SYM);
    // content id 1: operand op0 (defexp = instruction byte 0)
    enc.open_element(&sla::ELEM_OPERAND_SYM);
    enc.write_unsigned_integer(&sla::ATTRIB_ID, 1);
    enc.write_signed_integer(&sla::ATTRIB_OFF, 0);
    enc.write_signed_integer(&sla::ATTRIB_BASE, -1);
    enc.write_signed_integer(&sla::ATTRIB_MINLEN, 1);
    enc.write_signed_integer(&sla::ATTRIB_INDEX, 0);
    OperandValue::new(0, 0, 1).encode(&mut enc);
    tokenfield(0, 7).encode(&mut enc);
    enc.close_element(&sla::ELEM_OPERAND_SYM);
    // content id 2: varnode r0 = ram[0x100]:4
    enc.open_element(&sla::ELEM_VARNODE_SYM);
    enc.write_unsigned_integer(&sla::ATTRIB_ID, 2);
    enc.write_space(&sla::ATTRIB_SPACE, &ram(manager));
    enc.write_unsigned_integer(&sla::ATTRIB_OFF, 0x100);
    enc.write_signed_integer(&sla::ATTRIB_SIZE, 4);
    enc.close_element(&sla::ELEM_VARNODE_SYM);
    // content id 3: userop syscall index 2
    enc.open_element(&sla::ELEM_USEROP);
    enc.write_unsigned_integer(&sla::ATTRIB_ID, 3);
    enc.write_signed_integer(&sla::ATTRIB_INDEX, 2);
    enc.close_element(&sla::ELEM_USEROP);
    // content id 4: value imm8 (low nibble of byte 0)
    enc.open_element(&sla::ELEM_VALUE_SYM);
    enc.write_unsigned_integer(&sla::ATTRIB_ID, 4);
    tokenfield(0, 3).encode(&mut enc);
    enc.close_element(&sla::ELEM_VALUE_SYM);
    enc.close_element(&sla::ELEM_SYMBOL_TABLE);
    drop(enc);
    buf
}

fn decode_full_table(manager: &AddrSpaceManager) -> (SymbolTable, Vec<u8>) {
    let buf = encode_full_table(manager);
    let mut table = SymbolTable::new();
    let mut trans = TestTrans::new(manager);
    let mut dec = PackedDecode::new(manager);
    dec.ingest_stream(&buf).unwrap();
    table.decode(&mut dec, &mut trans).unwrap();
    (table, buf)
}

#[test]
fn full_table_decode_and_reencode_roundtrip() {
    let manager = test_manager();
    let (table, buf) = decode_full_table(&manager);
    assert_eq!(table.num_scopes(), 1);
    assert_eq!(table.num_symbols(), 5);
    // subtable structure
    let inst = table.find_global_symbol(b"instruction").unwrap();
    assert_eq!(inst.get_type(), SymbolType::Subtable);
    let SymbolKind::Subtable(sub) = inst.kind() else {
        panic!("expected subtable");
    };
    assert_eq!(sub.get_num_constructors(), 2);
    let ct0 = sub.get_constructor(0).unwrap();
    assert_eq!(ct0.get_id(), 0);
    assert_eq!(ct0.get_parent(), Some(0));
    assert_eq!(ct0.get_lineno(), 5);
    assert_eq!(ct0.get_first_whitespace(), -1);
    assert_eq!(ct0.get_flowthru_index(), -1);
    assert_eq!(ct0.get_print_pieces(), &[b"nop".to_vec()]);
    let ct1 = sub.get_constructor(1).unwrap();
    assert_eq!(ct1.get_num_operands(), 1);
    assert_eq!(ct1.get_operand(0).unwrap(), 1);
    assert_eq!(ct1.get_first_whitespace(), 1);
    assert_eq!(ct1.get_flowthru_index(), -1);
    assert_eq!(
        ct1.get_print_pieces(),
        &[b"mov".to_vec(), b" ".to_vec(), b"\nA".to_vec()]
    );
    // operand
    let SymbolKind::Operand(op) = table.find_global_symbol(b"op0").unwrap().kind() else {
        panic!("expected operand");
    };
    assert_eq!(op.get_index(), 0);
    assert_eq!(op.get_offset_base(), -1);
    assert_eq!(op.get_relative_offset(), 0);
    assert_eq!(op.get_minimum_length(), 1);
    assert!(!op.is_code_address());
    assert!(op.get_defining_symbol().is_none());
    assert!(op.get_defining_expression().is_some());
    let lexp = op.get_local_expression().unwrap();
    assert_eq!((lexp.index(), lexp.table_id(), lexp.ct_id()), (0, 0, 1));
    // varnode
    let r0 = table.find_global_symbol(b"r0").unwrap();
    let SymbolKind::Varnode(vn) = r0.kind() else {
        panic!("expected varnode");
    };
    assert_eq!(vn.get_fixed_varnode().offset, 0x100);
    assert_eq!(vn.get_fixed_varnode().size, 4);
    assert_eq!(vn.get_size(), 4);
    assert_eq!(r0.get_size(&table).unwrap(), 4);
    // userop
    let SymbolKind::UserOp(uo) = table.find_global_symbol(b"syscall").unwrap().kind() else {
        panic!("expected userop");
    };
    assert_eq!(uo.get_index(), 2);
    // value symbol pattern
    let imm = table.find_global_symbol(b"imm8").unwrap();
    assert!(matches!(
        imm.get_pattern_value(),
        Some(PatternValue::TokenField(_))
    ));
    // re-encode is byte identical to the hand-built (C++-shaped) stream
    let mut reenc = Vec::new();
    {
        let mut enc = PackedEncode::new(&mut reenc);
        table.encode(&mut enc, &[]).unwrap();
    }
    assert_eq!(reenc, buf);
}

/// The hand-built table inside a `<sleigh>` element, as a lazy load sees it.
fn decode_full_table_lazily(manager: &AddrSpaceManager) -> (SymbolTable, Rc<SlaSource>) {
    let mut buf = Vec::new();
    PackedEncode::new(&mut buf).open_element(&sla::ELEM_SLEIGH);
    buf.extend_from_slice(&encode_full_table(manager));
    PackedEncode::new(&mut buf).close_element(&sla::ELEM_SLEIGH);
    let stream = SlaStream::new(buf).unwrap();
    let mut dec = PackedDecode::new(manager);
    stream.ingest_prefix(&mut dec).unwrap();
    dec.open_element_id(&sla::ELEM_SLEIGH).unwrap();
    let mut table = SymbolTable::new();
    let source = table
        .decode_lazy(&mut dec, stream, &mut TestTrans::new(manager))
        .unwrap();
    (table, source)
}

#[test]
fn lazy_decode_reads_the_same_table_as_the_eager_one() {
    let manager = test_manager();
    let (eager, buf) = decode_full_table(&manager);
    let (lazy, source) = decode_full_table_lazily(&manager);
    assert_eq!(source.num_templates(), 0);
    assert_eq!(lazy.num_scopes(), eager.num_scopes());
    assert_eq!(lazy.num_symbols(), eager.num_symbols());
    for id in 0..eager.num_symbols() as u32 {
        let (e, l) = (eager.symbol(id).unwrap(), lazy.symbol(id).unwrap());
        assert_eq!(l.get_name(), e.get_name());
        match (e.kind(), l.kind()) {
            (SymbolKind::Subtable(e), SymbolKind::Subtable(l)) => {
                assert_eq!(l.get_num_constructors(), e.get_num_constructors());
                assert!(l.get_decision_tree().is_none());
                for ct in 0..e.get_num_constructors() as u32 {
                    assert_eq!(
                        format!("{:?}", l.get_constructor(ct).unwrap()),
                        format!("{:?}", e.get_constructor(ct).unwrap())
                    );
                }
                assert!(l.get_constructor(2).is_err());
            }
            _ => assert_eq!(format!("{l:?}"), format!("{e:?}")),
        }
    }
    let inst = lazy.find_global_symbol(b"instruction").unwrap();
    for (byte, expect) in [(0x00, Some(0)), (0x80, Some(1))] {
        let mut walker = TestWalker::from_bytes(&[byte, 0, 0, 0]);
        walker.addr = Some(Address::new(ram(&manager), 0x1000));
        assert_eq!(inst.resolve(&walker).unwrap(), expect);
    }
    let mut walker = TestWalker::from_bytes(&[0xc0, 0, 0, 0]);
    walker.addr = Some(Address::new(ram(&manager), 0x1000));
    let err = inst.resolve(&walker).expect_err("must fail to resolve");
    assert!(format!("{err}").contains("Unable to resolve constructor"));
    // Encoding decodes the rest and reproduces the stream.
    let mut reenc = Vec::new();
    lazy.encode(&mut PackedEncode::new(&mut reenc), &[])
        .unwrap();
    assert_eq!(reenc, buf);
}

#[test]
fn lazy_constructor_templates_decode_on_first_use() {
    let manager = test_manager();
    let mut tpl = ConstructTpl::new();
    tpl.set_num_labels(3);
    let mut buf = Vec::new();
    {
        let mut enc = PackedEncode::new(&mut buf);
        enc.open_element(&sla::ELEM_SLEIGH);
        enc.open_element(&sla::ELEM_SYMBOL_TABLE);
        enc.write_signed_integer(&sla::ATTRIB_SCOPESIZE, 1);
        enc.write_signed_integer(&sla::ATTRIB_SYMBOLSIZE, 1);
        enc.open_element(&sla::ELEM_SCOPE);
        enc.write_unsigned_integer(&sla::ATTRIB_ID, 0);
        enc.write_unsigned_integer(&sla::ATTRIB_PARENT, 0);
        enc.close_element(&sla::ELEM_SCOPE);
        enc.open_element(&sla::ELEM_SUBTABLE_SYM_HEAD);
        enc.write_string(&sla::ATTRIB_NAME, b"instruction");
        enc.write_unsigned_integer(&sla::ATTRIB_ID, 0);
        enc.write_unsigned_integer(&sla::ATTRIB_SCOPE, 0);
        enc.close_element(&sla::ELEM_SUBTABLE_SYM_HEAD);
        enc.open_element(&sla::ELEM_SUBTABLE_SYM);
        enc.write_unsigned_integer(&sla::ATTRIB_ID, 0);
        enc.write_signed_integer(&sla::ATTRIB_NUMCT, 1);
        enc.open_element(&sla::ELEM_CONSTRUCTOR);
        enc.write_unsigned_integer(&sla::ATTRIB_PARENT, 0);
        enc.write_signed_integer(&sla::ATTRIB_FIRST, -1);
        enc.write_signed_integer(&sla::ATTRIB_LENGTH, 1);
        enc.write_signed_integer(&sla::ATTRIB_SOURCE, 0);
        enc.write_signed_integer(&sla::ATTRIB_LINE, 5);
        enc.open_element(&sla::ELEM_PRINT);
        enc.write_string(&sla::ATTRIB_PIECE, b"nop");
        enc.close_element(&sla::ELEM_PRINT);
        tpl.encode(&mut enc, 2);
        tpl.encode(&mut enc, -1);
        enc.close_element(&sla::ELEM_CONSTRUCTOR);
        enc.open_element(&sla::ELEM_DECISION);
        enc.write_signed_integer(&sla::ATTRIB_NUMBER, 1);
        enc.write_bool(&sla::ATTRIB_CONTEXT, false);
        enc.write_signed_integer(&sla::ATTRIB_STARTBIT, 0);
        enc.write_signed_integer(&sla::ATTRIB_SIZE, 0);
        enc.open_element(&sla::ELEM_PAIR);
        enc.write_signed_integer(&sla::ATTRIB_ID, 0);
        InstructionPattern::new_always(true).encode(&mut enc);
        enc.close_element(&sla::ELEM_PAIR);
        enc.close_element(&sla::ELEM_DECISION);
        enc.close_element(&sla::ELEM_SUBTABLE_SYM);
        enc.close_element(&sla::ELEM_SYMBOL_TABLE);
        enc.close_element(&sla::ELEM_SLEIGH);
    }
    let stream = SlaStream::new(buf).unwrap();
    let mut dec = PackedDecode::new(&manager);
    stream.ingest_prefix(&mut dec).unwrap();
    dec.open_element_id(&sla::ELEM_SLEIGH).unwrap();
    let mut table = SymbolTable::new();
    let source = table
        .decode_lazy(&mut dec, stream, &mut TestTrans::new(&manager))
        .unwrap();
    assert_eq!(source.num_templates(), 2);
    let SymbolKind::Subtable(sub) = table.symbol(0).unwrap().kind() else {
        panic!("expected subtable");
    };
    assert!(!sub.has_context_commits());
    // The slots fill when the constructor is decoded, not before.
    assert!(source.template_delay_slot(0).is_err());
    let ct = sub.get_constructor(0).unwrap();
    assert_eq!(ct.get_templ(), Some(1));
    assert_eq!(ct.get_named_templ(2), Some(0));
    assert_eq!(source.template_delay_slot(1).unwrap(), 0);
    for handle in [0, 1] {
        assert_eq!(source.template(handle, &manager).unwrap().num_labels(), 3);
    }
    assert!(source.template(2, &manager).is_err());
    let mut walker = TestWalker::from_bytes(&[0x00, 0, 0, 0]);
    walker.addr = Some(Address::new(ram(&manager), 0x1000));
    assert_eq!(table.symbol(0).unwrap().resolve(&walker).unwrap(), Some(0));
}

#[test]
fn decision_node_dispatch_and_failure() {
    let manager = test_manager();
    let (table, _) = decode_full_table(&manager);
    let inst = table.find_global_symbol(b"instruction").unwrap();
    // bit 0 clear -> child 0 -> always-true pattern -> ct0
    let mut walker = TestWalker::from_bytes(&[0x00, 0, 0, 0]);
    walker.addr = Some(Address::new(ram(&manager), 0x1000));
    assert_eq!(inst.resolve(&walker).unwrap(), Some(0));
    // bit 0 set, bit 1 clear -> child 1 -> pattern matches -> ct1
    let mut walker = TestWalker::from_bytes(&[0x80, 0, 0, 0]);
    walker.addr = Some(Address::new(ram(&manager), 0x1000));
    assert_eq!(inst.resolve(&walker).unwrap(), Some(1));
    // bits 11 -> child 1 -> pattern mismatch -> BadDataError
    let mut walker = TestWalker::from_bytes(&[0xc0, 0, 0, 0]);
    walker.addr = Some(Address::new(ram(&manager), 0x1000));
    let err = inst.resolve(&walker).expect_err("must fail to resolve");
    assert!(format!("{err}").contains("Unable to resolve constructor"));
}

#[test]
fn constructor_print_mnemonic_and_body() {
    let manager = test_manager();
    let (table, _) = decode_full_table(&manager);
    let sub = match table.find_global_symbol(b"instruction").unwrap().kind() {
        SymbolKind::Subtable(s) => s,
        _ => panic!("expected subtable"),
    };
    let ct1 = sub.get_constructor(1).unwrap();
    let mut walker = TestWalker::from_bytes(&[0x8a, 0, 0, 0]);
    // full print: "mov" + " " + defexp value of byte 0 (0x8a)
    let mut s = String::new();
    ct1.print(&mut s, &mut walker, &table).unwrap();
    assert_eq!(s, "mov 0x8a");
    // mnemonic stops at firstwhitespace
    let mut s = String::new();
    ct1.print_mnemonic(&mut s, &mut walker, &table).unwrap();
    assert_eq!(s, "mov");
    // body starts after firstwhitespace
    let mut s = String::new();
    ct1.print_body(&mut s, &mut walker, &table).unwrap();
    assert_eq!(s, "0x8a");
    // printInfo names the parent table
    let mut s = String::new();
    ct1.print_info(&mut s, &table).unwrap();
    assert_eq!(s, "table \"instruction\" constructor starting at line 7");
}

#[test]
fn print_helpers_append_exact_hex_and_lossy_text() {
    assert!(matches!(name_text(b"eax"), Cow::Borrowed("eax")));
    assert_eq!(name_text(b"r\xff\xc3\xa9"), "r\u{fffd}\u{e9}");

    let mut s = String::from("values ");
    push_hex_intb(&mut s, 0);
    s.push(' ');
    push_hex_intb(&mut s, -1);
    s.push(' ');
    push_hex_intb(&mut s, i64::MIN);
    s.push(' ');
    push_hex_offset(&mut s, u64::MAX);
    assert_eq!(s, "values 0x0 -0x1 -0x8000000000000000 0xffffffffffffffff");
}

#[test]
fn code_address_printing_reaches_nested_operands_without_changing_signed_scalars() {
    for address_size in [4, 8] {
        for value in [0, i64::MAX, i64::MIN, -1] {
            for code_address in [false, true] {
                let mut table = SymbolTable::new();
                table.add_scope();
                let mut sub = SleighSymbol::new_subtable(b"target");
                if let SymbolKind::Subtable(sub) = sub.kind_mut() {
                    let mut ct = Constructor::new();
                    ct.set_parent(0);
                    ct.add_operand(1);
                    sub.add_constructor(ct);
                }
                table.add_global_symbol(sub).unwrap();
                let mut leaf = SleighSymbol::new_operand(
                    b"reloc",
                    0,
                    ConstructorRef {
                        table_id: 0,
                        ct_id: 0,
                    },
                );
                if let SymbolKind::Operand(op) = leaf.kind_mut() {
                    op.define_operand_expression(PatternExpression::Value(
                        PatternValue::ConstantValue(ConstantValue::new(value)),
                    ))
                    .unwrap();
                }
                table.add_global_symbol(leaf).unwrap();
                let mut outer = SleighSymbol::new_operand(
                    b"address",
                    0,
                    ConstructorRef {
                        table_id: 0,
                        ct_id: 0,
                    },
                );
                if let SymbolKind::Operand(op) = outer.kind_mut() {
                    op.define_operand_symbol(0).unwrap();
                    if code_address {
                        op.set_code_address();
                    }
                }
                let mut walker = TestWalker::from_bytes(&[]);
                walker.cur_space = Some(Rc::new(AddrSpace::new(
                    spacetype_processor(),
                    "ram",
                    false,
                    address_size,
                    1,
                    1,
                    addrspace_flags::hasphysical,
                    1,
                    1,
                )));
                walker.ctmap.push((
                    vec![0],
                    ConstructorRef {
                        table_id: 0,
                        ct_id: 0,
                    },
                ));
                let mut output = String::new();
                outer.print(&mut output, &mut walker, &table).unwrap();
                let expected = if (code_address && address_size == 8) || value >= 0 {
                    format!("0x{:x}", value as u64)
                } else {
                    format!("-0x{:x}", value.wrapping_neg())
                };
                assert_eq!(output, expected);
                assert!(walker.path.borrow().is_empty());
            }
        }
    }
}

#[test]
fn operand_print_recurses_through_subtable_and_varnode() {
    let manager = test_manager();
    let mut table = SymbolTable::new();
    table.add_scope();
    // id 0: subtable "sub" with one constructor printing "nop"
    let mut sub = SleighSymbol::new_subtable(b"sub");
    if let SymbolKind::Subtable(s) = sub.kind_mut() {
        let mut ct = Constructor::new();
        ct.set_parent(0);
        ct.add_syntax(b"nop");
        s.add_constructor(ct);
    }
    assert_eq!(table.add_global_symbol(sub).unwrap(), 0);
    // id 1: varnode r0
    let r0 = SleighSymbol::new_varnode(b"r0", ram(&manager), 0x100, 4);
    assert_eq!(table.add_global_symbol(r0).unwrap(), 1);
    // id 2: operand opA defined by the subtable
    let mut op_a = SleighSymbol::new_operand(
        b"opA",
        0,
        ConstructorRef {
            table_id: 3,
            ct_id: 0,
        },
    );
    if let SymbolKind::Operand(o) = op_a.kind_mut() {
        o.define_operand_symbol(0).unwrap();
        // redefinition is the C++ SleighError
        assert!(o.define_operand_symbol(1).is_err());
    }
    assert_eq!(table.add_global_symbol(op_a).unwrap(), 2);
    // id 3: top-level table "instruction" with ct: "do " opA " " opB
    let mut op_b = SleighSymbol::new_operand(
        b"opB",
        1,
        ConstructorRef {
            table_id: 3,
            ct_id: 0,
        },
    );
    if let SymbolKind::Operand(o) = op_b.kind_mut() {
        o.define_operand_symbol(1).unwrap();
    }
    let mut top = SleighSymbol::new_subtable(b"instruction");
    if let SymbolKind::Subtable(s) = top.kind_mut() {
        let mut ct = Constructor::new();
        ct.set_parent(3);
        ct.add_syntax(b"do ");
        ct.add_operand(2);
        ct.add_syntax(b" ");
        ct.add_operand(4);
        s.add_constructor(ct);
    }
    assert_eq!(table.add_global_symbol(top).unwrap(), 3);
    assert_eq!(table.add_global_symbol(op_b).unwrap(), 4);
    // the walker resolves operand path [0] to sub's constructor 0
    let mut walker = TestWalker::from_bytes(&[0, 0, 0, 0]);
    walker.ctmap.push((
        vec![0],
        ConstructorRef {
            table_id: 0,
            ct_id: 0,
        },
    ));
    let ct = table
        .get_constructor(ConstructorRef {
            table_id: 3,
            ct_id: 0,
        })
        .unwrap();
    assert_eq!(
        ct.get_print_pieces(),
        &[
            b"do ".to_vec(),
            b"\nA".to_vec(),
            b" ".to_vec(),
            b"\nB".to_vec()
        ]
    );
    assert_eq!(ct.get_first_whitespace(), 2);
    let mut s = String::new();
    ct.print(&mut s, &mut walker, &table).unwrap();
    assert_eq!(s, "do nop r0");
    // operand-path stack unwound
    assert!(walker.path.borrow().is_empty());
    // ContextOp::validate: opA has offsetbase 0 (not constructor
    // relative) -> the C++ SleighError
    let op = ContextOp::new(
        0,
        3,
        PatternExpression::Value(PatternValue::OperandValue(OperandValue::new(0, 3, 0))),
    )
    .unwrap();
    let err = op.validate(&table).expect_err("must reject operand");
    assert!(format!("{err}").contains("opA: cannot be used in context expression"));
}

// -- per-kind decode: table-fill validation, handles, guards ------------------

/// Hand-encode a one-scope table whose symbols are written by `body`
/// (headers first, then contents), then decode it.
fn decode_mini_table(
    manager: &AddrSpaceManager,
    nsyms: i64,
    heads: impl FnOnce(&mut PackedEncode),
    contents: impl FnOnce(&mut PackedEncode),
) -> UnlaceResult<SymbolTable> {
    let mut buf = Vec::new();
    {
        let mut enc = PackedEncode::new(&mut buf);
        enc.open_element(&sla::ELEM_SYMBOL_TABLE);
        enc.write_signed_integer(&sla::ATTRIB_SCOPESIZE, 1);
        enc.write_signed_integer(&sla::ATTRIB_SYMBOLSIZE, nsyms);
        enc.open_element(&sla::ELEM_SCOPE);
        enc.write_unsigned_integer(&sla::ATTRIB_ID, 0);
        enc.write_unsigned_integer(&sla::ATTRIB_PARENT, 0);
        enc.close_element(&sla::ELEM_SCOPE);
        heads(&mut enc);
        contents(&mut enc);
        enc.close_element(&sla::ELEM_SYMBOL_TABLE);
    }
    let mut table = SymbolTable::new();
    let mut trans = TestTrans::new(manager);
    let mut dec = PackedDecode::new(manager);
    dec.ingest_stream(&buf)?;
    table.decode(&mut dec, &mut trans)?;
    Ok(table)
}

#[test]
fn name_symbol_check_table_fill_resolve_print() {
    let manager = test_manager();
    let table = decode_mini_table(
        &manager,
        1,
        |enc| enc_head(enc, &sla::ELEM_NAME_SYM_HEAD, b"names", 0),
        |enc| {
            enc.open_element(&sla::ELEM_NAME_SYM);
            enc.write_unsigned_integer(&sla::ATTRIB_ID, 0);
            tokenfield(0, 0).encode(enc);
            enc.open_element(&sla::ELEM_NAMETAB);
            enc.write_string(&sla::ATTRIB_NAME, b"add");
            enc.close_element(&sla::ELEM_NAMETAB);
            enc.open_element(&sla::ELEM_NAMETAB);
            enc.write_string(&sla::ATTRIB_NAME, b"_");
            enc.close_element(&sla::ELEM_NAMETAB);
            enc.close_element(&sla::ELEM_NAME_SYM);
        },
    )
    .unwrap();
    let sym = table.find_global_symbol(b"names").unwrap();
    let SymbolKind::Name(ns) = sym.kind() else {
        panic!("expected name symbol");
    };
    // checkTableFill: "_" became the TAB illegal-index marker
    assert_eq!(ns.get_name_table(), &[b"add".to_vec(), b"\t".to_vec()]);
    // index 1 hits the illegal entry -> C++ BadDataError
    let mut walker = TestWalker::from_bytes(&[0x01]);
    walker.addr = Some(Address::new(ram(&manager), 0x40));
    let err = sym.resolve(&walker).expect_err("illegal index");
    assert!(format!("{err}").contains("No corresponding entry in nametable"));
    // index 0 resolves (returning the C++ null constructor) and prints
    let mut walker = TestWalker::from_bytes(&[0x00]);
    walker.addr = Some(Address::new(ram(&manager), 0x40));
    assert_eq!(sym.resolve(&walker).unwrap(), None);
    let mut s = String::new();
    sym.print(&mut s, &mut walker, &table).unwrap();
    assert_eq!(s, "add");
}

#[test]
fn valuemap_symbol_badbeef_resolve_handle_print() {
    let manager = test_manager();
    let table = decode_mini_table(
        &manager,
        1,
        |enc| enc_head(enc, &sla::ELEM_VALUEMAP_SYM_HEAD, b"vmap", 0),
        |enc| {
            enc.open_element(&sla::ELEM_VALUEMAP_SYM);
            enc.write_unsigned_integer(&sla::ATTRIB_ID, 0);
            tokenfield(0, 0).encode(enc);
            enc.open_element(&sla::ELEM_VALUETAB);
            enc.write_signed_integer(&sla::ATTRIB_VAL, 16);
            enc.close_element(&sla::ELEM_VALUETAB);
            enc.open_element(&sla::ELEM_VALUETAB);
            enc.write_signed_integer(&sla::ATTRIB_VAL, 0xBADBEEF);
            enc.close_element(&sla::ELEM_VALUETAB);
            enc.close_element(&sla::ELEM_VALUEMAP_SYM);
        },
    )
    .unwrap();
    let sym = table.find_global_symbol(b"vmap").unwrap();
    // the 0xBADBEEF hole -> C++ BadDataError
    let mut walker = TestWalker::from_bytes(&[0x01]);
    walker.addr = Some(Address::new(ram(&manager), 0x40));
    let err = sym.resolve(&walker).expect_err("hole index");
    assert!(format!("{err}").contains("No corresponding entry in valuetable"));
    // index 0: fixed handle carries valuetable[0] in the const space
    let mut walker = TestWalker::from_bytes(&[0x00]);
    walker.addr = Some(Address::new(ram(&manager), 0x40));
    walker.const_space = Some(cspace(&manager));
    assert_eq!(sym.resolve(&walker).unwrap(), None);
    let mut hand = FixedHandle::default();
    sym.get_fixed_handle(&mut hand, &walker, &table).unwrap();
    assert_eq!(hand.offset_offset, 16);
    assert_eq!(hand.size, 0);
    assert!(hand.offset_space.is_none());
    assert_eq!(hand.space.as_ref().unwrap().get_name(), "const");
    let mut s = String::new();
    sym.print(&mut s, &mut walker, &table).unwrap();
    assert_eq!(s, "0x10");
}

#[test]
fn varnodelist_symbol_resolve_handle_print_size() {
    let manager = test_manager();
    let table = decode_mini_table(
        &manager,
        2,
        |enc| {
            enc_head(enc, &sla::ELEM_VARNODE_SYM_HEAD, b"r0", 0);
            enc_head(enc, &sla::ELEM_VARLIST_SYM_HEAD, b"reg", 1);
        },
        |enc| {
            enc.open_element(&sla::ELEM_VARNODE_SYM);
            enc.write_unsigned_integer(&sla::ATTRIB_ID, 0);
            enc.write_space(&sla::ATTRIB_SPACE, &ram(&test_manager()));
            enc.write_unsigned_integer(&sla::ATTRIB_OFF, 0x100);
            enc.write_signed_integer(&sla::ATTRIB_SIZE, 4);
            enc.close_element(&sla::ELEM_VARNODE_SYM);
            enc.open_element(&sla::ELEM_VARLIST_SYM);
            enc.write_unsigned_integer(&sla::ATTRIB_ID, 1);
            tokenfield(0, 0).encode(enc);
            enc.open_element(&sla::ELEM_VAR);
            enc.write_unsigned_integer(&sla::ATTRIB_ID, 0);
            enc.close_element(&sla::ELEM_VAR);
            enc.open_element(&sla::ELEM_NULL);
            enc.close_element(&sla::ELEM_NULL);
            enc.close_element(&sla::ELEM_VARLIST_SYM);
        },
    )
    .unwrap();
    let sym = table.find_global_symbol(b"reg").unwrap();
    let SymbolKind::VarnodeList(vl) = sym.kind() else {
        panic!("expected varnodelist");
    };
    assert_eq!(vl.get_varnode_table(), &[Some(0), None]);
    // null entry -> C++ BadDataError
    let mut walker = TestWalker::from_bytes(&[0x01]);
    walker.addr = Some(Address::new(ram(&manager), 0x40));
    let err = sym.resolve(&walker).expect_err("null entry");
    assert!(format!("{err}").contains("No corresponding entry in varnode list"));
    // entry 0 resolves to r0's varnode data and name
    let mut walker = TestWalker::from_bytes(&[0x00]);
    walker.addr = Some(Address::new(ram(&manager), 0x40));
    assert_eq!(sym.resolve(&walker).unwrap(), None);
    let mut hand = FixedHandle::default();
    sym.get_fixed_handle(&mut hand, &walker, &table).unwrap();
    assert_eq!(hand.offset_offset, 0x100);
    assert_eq!(hand.size, 4);
    assert_eq!(hand.space.as_ref().unwrap().get_name(), "ram");
    let mut s = String::new();
    sym.print(&mut s, &mut walker, &table).unwrap();
    assert_eq!(s, "r0");
    // getSize: first non-null entry's size
    assert_eq!(sym.get_size(&table).unwrap(), 4);
}

#[test]
fn start_end_epsilon_symbols_decode_handles_print() {
    let manager = test_manager();
    let table = decode_mini_table(
        &manager,
        3,
        |enc| {
            enc_head(enc, &sla::ELEM_START_SYM_HEAD, b"inst_start", 0);
            enc_head(enc, &sla::ELEM_END_SYM_HEAD, b"inst_next", 1);
            enc_head(enc, &sla::ELEM_EPSILON_SYM_HEAD, b"epsilon", 2);
        },
        |enc| {
            enc.open_element(&sla::ELEM_START_SYM);
            enc.write_unsigned_integer(&sla::ATTRIB_ID, 0);
            enc.close_element(&sla::ELEM_START_SYM);
            enc.open_element(&sla::ELEM_END_SYM);
            enc.write_unsigned_integer(&sla::ATTRIB_ID, 1);
            enc.close_element(&sla::ELEM_END_SYM);
            enc.open_element(&sla::ELEM_EPSILON_SYM);
            enc.write_unsigned_integer(&sla::ATTRIB_ID, 2);
            enc.close_element(&sla::ELEM_EPSILON_SYM);
        },
    )
    .unwrap();
    let mut walker = TestWalker::from_bytes(&[]);
    walker.addr = Some(Address::new(ram(&manager), 0x1000));
    walker.naddr = Some(Address::new(ram(&manager), 0x1004));
    walker.cur_space = Some(ram(&manager));
    // StartSymbol: current address in the current space
    let start = table.find_global_symbol(b"inst_start").unwrap();
    let mut hand = FixedHandle::default();
    start.get_fixed_handle(&mut hand, &walker, &table).unwrap();
    assert_eq!(hand.offset_offset, 0x1000);
    assert_eq!(hand.size, 4); // ram getAddrSize()
    assert_eq!(hand.space.as_ref().unwrap().get_name(), "ram");
    let mut s = String::new();
    start.print(&mut s, &mut walker, &table).unwrap();
    assert_eq!(s, "0x1000");
    assert!(matches!(
        start.get_pattern_expression().unwrap(),
        Some(PatternExpression::Value(
            PatternValue::StartInstructionValue(_)
        ))
    ));
    // EndSymbol: next address
    let end = table.find_global_symbol(b"inst_next").unwrap();
    let mut s = String::new();
    end.print(&mut s, &mut walker, &table).unwrap();
    assert_eq!(s, "0x1004");
    // EpsilonSymbol: prints '0', constant-0 pattern, const-space handle
    let eps = table.find_global_symbol(b"epsilon").unwrap();
    let mut s = String::new();
    eps.print(&mut s, &mut walker, &table).unwrap();
    assert_eq!(s, "0");
    let mut hand = FixedHandle::default();
    eps.get_fixed_handle(&mut hand, &walker, &table).unwrap();
    assert_eq!(hand.offset_offset, 0);
    assert_eq!(hand.size, 0);
    assert_eq!(hand.space.as_ref().unwrap().get_name(), "const");
    match eps.get_pattern_expression().unwrap() {
        Some(PatternExpression::Value(PatternValue::ConstantValue(c))) => {
            assert_eq!(c.get_value(), 0);
        }
        other => panic!("expected constant 0, got {other:?}"),
    }
}

#[test]
fn operand_value_helpers_via_decoded_table() {
    let manager = test_manager();
    let (table, _) = decode_full_table(&manager);
    // op0 was decoded with BASE -1: constructor relative
    let ov = OperandValue::new(0, 0, 1);
    assert!(table.operand_value_is_constructor_relative(&ov).unwrap());
    assert_eq!(table.operand_value_name(&ov).unwrap(), b"op0");
    // SymbolTable is the OperandValueResolver for its own subtables
    assert_eq!(table.num_constructors(0).unwrap(), 2);
    assert!(table.num_constructors(2).is_err()); // varnode, not a subtable
    // ContextOp::validate accepts the constructor-relative operand
    let op = ContextOp::new(
        0,
        3,
        PatternExpression::Value(PatternValue::OperandValue(ov)),
    )
    .unwrap();
    op.validate(&table).unwrap();
}

#[test]
fn decode_guards_and_bad_streams() {
    let manager = test_manager();
    // unknown header element -> "Bad symbol xml"
    let err = decode_mini_table(
        &manager,
        1,
        |enc| {
            enc.open_element(&sla::ELEM_VAR);
            enc.write_unsigned_integer(&sla::ATTRIB_ID, 0);
            enc.close_element(&sla::ELEM_VAR);
        },
        |_| {},
    )
    .expect_err("bad header");
    assert!(format!("{err}").contains("Bad symbol xml"));
    // duplicate content for one symbol -> "Already decoded symbol"
    let err = decode_mini_table(
        &manager,
        1,
        |enc| enc_head(enc, &sla::ELEM_VALUE_SYM_HEAD, b"v", 0),
        |enc| {
            for _ in 0..2 {
                enc.open_element(&sla::ELEM_VALUE_SYM);
                enc.write_unsigned_integer(&sla::ATTRIB_ID, 0);
                tokenfield(0, 0).encode(enc);
                enc.close_element(&sla::ELEM_VALUE_SYM);
            }
        },
    )
    .expect_err("double decode");
    assert!(format!("{err}").contains("Already decoded symbol"));
    // header id out of range -> "Bad symbol id: exceeds symbollist size"
    let err = decode_mini_table(
        &manager,
        1,
        |enc| enc_head(enc, &sla::ELEM_VALUE_SYM_HEAD, b"v", 9),
        |_| {},
    )
    .expect_err("bad id");
    assert!(format!("{err}").contains("Bad symbol id: exceeds symbollist size"));
    // ContextSymbol without low/high -> "Missing high/low attributes"
    let err = decode_mini_table(
        &manager,
        1,
        |enc| enc_head(enc, &sla::ELEM_CONTEXT_SYM_HEAD, b"ctx", 0),
        |enc| {
            enc.open_element(&sla::ELEM_CONTEXT_SYM);
            enc.write_unsigned_integer(&sla::ATTRIB_ID, 0);
            enc.write_unsigned_integer(&sla::ATTRIB_VARNODE, 0);
            enc.close_element(&sla::ELEM_CONTEXT_SYM);
        },
    )
    .expect_err("missing low/high");
    assert!(format!("{err}").contains("Missing high/low attributes"));
}

#[test]
fn context_symbol_decode_attributes() {
    let manager = test_manager();
    let table = decode_mini_table(
        &manager,
        2,
        |enc| {
            enc_head(enc, &sla::ELEM_VARNODE_SYM_HEAD, b"ctxreg", 0);
            enc_head(enc, &sla::ELEM_CONTEXT_SYM_HEAD, b"mode", 1);
        },
        |enc| {
            enc.open_element(&sla::ELEM_VARNODE_SYM);
            enc.write_unsigned_integer(&sla::ATTRIB_ID, 0);
            enc.write_space(&sla::ATTRIB_SPACE, &ram(&test_manager()));
            enc.write_unsigned_integer(&sla::ATTRIB_OFF, 0);
            enc.write_signed_integer(&sla::ATTRIB_SIZE, 4);
            enc.close_element(&sla::ELEM_VARNODE_SYM);
            // C++ ContextSymbol::encode order: id, varnode, low, high,
            // flow, patval
            enc.open_element(&sla::ELEM_CONTEXT_SYM);
            enc.write_unsigned_integer(&sla::ATTRIB_ID, 1);
            enc.write_unsigned_integer(&sla::ATTRIB_VARNODE, 0);
            enc.write_signed_integer(&sla::ATTRIB_LOW, 4);
            enc.write_signed_integer(&sla::ATTRIB_HIGH, 7);
            enc.write_bool(&sla::ATTRIB_FLOW, true);
            ContextField::new(false, 4, 7).encode(enc);
            enc.close_element(&sla::ELEM_CONTEXT_SYM);
        },
    )
    .unwrap();
    let sym = table.find_global_symbol(b"mode").unwrap();
    assert_eq!(sym.get_type(), SymbolType::Context);
    let SymbolKind::Context(cs) = sym.kind() else {
        panic!("expected context symbol");
    };
    assert_eq!(cs.get_varnode(), Some(0));
    assert_eq!(cs.get_low(), 4);
    assert_eq!(cs.get_high(), 7);
    assert!(cs.get_flow());
    // buildXrefs-style access to the ContextField bits
    match sym.get_pattern_value() {
        Some(PatternValue::ContextField(f)) => {
            assert_eq!(f.get_start_bit(), 4);
            assert_eq!(f.get_end_bit(), 7);
        }
        other => panic!("expected context field, got {other:?}"),
    }
}
