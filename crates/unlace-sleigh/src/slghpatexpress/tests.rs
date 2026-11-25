use std::rc::Rc;

use unlace_base::marshal::{Decoder, PackedDecode, PackedEncode};
use unlace_base::space::{AddrSpaceManager, ConstantSpace, addrspace_flags, spacetype};

use super::*;

// -- synthetic walker ----------------------------------------------------

/// Synthetic byte/context provider mirroring the documented
/// `ParserContext::getInstructionBytes`/`getContextBytes` semantics.
struct TestWalker {
    instr: Vec<u8>,
    ctx: Vec<u32>,
    addr: Option<Address>,
    naddr: Option<Address>,
    n2addr: Option<Address>,
    /// canned answers for operand_value, keyed by (index, table, ct)
    operands: Vec<((i32, u32, u32), i64)>,
}

impl TestWalker {
    fn from_bytes(instr: &[u8]) -> TestWalker {
        TestWalker {
            instr: instr.to_vec(),
            ctx: Vec::new(),
            addr: None,
            naddr: None,
            n2addr: None,
            operands: Vec::new(),
        }
    }

    fn from_context(ctx: &[u32]) -> TestWalker {
        TestWalker {
            instr: Vec::new(),
            ctx: ctx.to_vec(),
            addr: None,
            naddr: None,
            n2addr: None,
            operands: Vec::new(),
        }
    }
}

impl PatternExpressionContext for TestWalker {
    fn get_instruction_bytes(&self, byteoff: i32, numbytes: i32) -> UnlaceResult<u32> {
        // mirror ParserContext::getInstructionBytes with point->offset=0:
        // big-endian packing, error past the buffer (BadDataError analog)
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
        // mirror ParserContext::getContextBytes over the ctx word array
        let intstart = (bytestart / 4) as usize;
        let mut res: u32 = *self.ctx.get(intstart).unwrap_or(&0);
        let byte_offset = bytestart % 4;
        let unused_bytes = 4 - size;
        res = res.wshl((byte_offset * 8) as u32);
        res = res.wshr((unused_bytes * 8) as u32);
        let remaining = size - 4 + byte_offset;
        if remaining > 0 && intstart + 1 < self.ctx.len() {
            let mut res2 = self.ctx[intstart + 1];
            let unused2 = 4 - remaining;
            res2 = res2.wshr((unused2 * 8) as u32);
            res |= res2;
        }
        Ok(res)
    }

    fn get_addr(&self) -> Address {
        self.addr.clone().expect("test walker addr unset")
    }

    fn get_naddr(&self) -> Address {
        self.naddr.clone().expect("test walker naddr unset")
    }

    fn get_n2addr(&self) -> UnlaceResult<Address> {
        match &self.n2addr {
            Some(a) => Ok(a.clone()),
            None => Err(UnlaceError::lowlevel(
                "inst_next2 not available in this context",
            )),
        }
    }

    fn operand_value(&self, index: i32, table_id: u32, ct_id: u32) -> UnlaceResult<i64> {
        for ((i, t, c), v) in &self.operands {
            if *i == index && *t == table_id && *c == ct_id {
                return Ok(*v);
            }
        }
        Err(UnlaceError::sleigh("unknown operand in test walker"))
    }
}

/// Permissive resolver: every table reports the given constructor count.
struct FixedResolver(i32);

impl OperandValueResolver for FixedResolver {
    fn num_constructors(&self, _table_id: u32) -> UnlaceResult<i32> {
        Ok(self.0)
    }
}

fn test_manager() -> AddrSpaceManager {
    let mut manager = AddrSpaceManager::new();
    manager.insert_space(Rc::new(ConstantSpace::new())).unwrap();
    // wordsize 2 so byteToAddress is observable (offset/2)
    let spc = AddrSpace::new(
        spacetype::IPTR_PROCESSOR,
        "ram",
        false,
        4,
        2,
        1,
        addrspace_flags::hasphysical,
        1,
        1,
    );
    manager.insert_space(Rc::new(spc)).unwrap();
    manager
}

fn ram(manager: &AddrSpaceManager) -> Rc<AddrSpace> {
    Rc::clone(manager.get_space_by_name("ram").unwrap())
}

fn cval(v: i64) -> PatternExpression {
    PatternExpression::Value(PatternValue::ConstantValue(ConstantValue::new(v)))
}

// -- TokenField ------------------------------------------------------------

#[test]
fn tokenfield_little_endian_byte_select() {
    // LE token of 2 bytes: bits [0,7] live in byte 0, bits [8,15] in byte 1
    let walker = TestWalker::from_bytes(&[0xab, 0xcd]);
    let lo = TokenField::new(2, false, false, 0, 7);
    let hi = TokenField::new(2, false, false, 8, 15);
    assert_eq!(lo.get_value(&walker).unwrap(), 0xab);
    assert_eq!(hi.get_value(&walker).unwrap(), 0xcd);
}

#[test]
fn tokenfield_big_endian_byte_select() {
    // BE token of 2 bytes: bits [0,7] are the LEAST significant -> byte 1
    let walker = TestWalker::from_bytes(&[0xab, 0xcd]);
    let lo = TokenField::new(2, true, false, 0, 7);
    let hi = TokenField::new(2, true, false, 8, 15);
    assert_eq!(lo.get_value(&walker).unwrap(), 0xcd);
    assert_eq!(hi.get_value(&walker).unwrap(), 0xab);
}

#[test]
fn tokenfield_subbyte_shift_and_signextend() {
    // byte 0 = 0b1111_0110: field bits [1,3] (LE) = 0b011 = 3 unsigned
    let walker = TestWalker::from_bytes(&[0b1111_0110]);
    let f = TokenField::new(1, false, false, 1, 3);
    assert_eq!(f.get_value(&walker).unwrap(), 3);
    // bits [4,7] = 0b1111 -> signed = -1
    let s = TokenField::new(1, false, true, 4, 7);
    assert_eq!(s.get_value(&walker).unwrap(), -1);
    // same field unsigned = 15
    let u = TokenField::new(1, false, false, 4, 7);
    assert_eq!(u.get_value(&walker).unwrap(), 15);
}

#[test]
fn tokenfield_multiword_value() {
    // 6-byte big-endian field crosses the 4-byte uintm packing boundary
    let walker = TestWalker::from_bytes(&[0x01, 0x02, 0x03, 0x04, 0x05, 0x06]);
    let f = TokenField::new(6, true, false, 0, 47);
    assert_eq!(f.get_value(&walker).unwrap(), 0x0102_0304_0506);
    // little-endian: bytes swapped over the full 6-byte size
    let g = TokenField::new(6, false, false, 0, 47);
    assert_eq!(g.get_value(&walker).unwrap(), 0x0605_0403_0201);
}

#[test]
fn tokenfield_minmax() {
    let f = TokenField::new(2, false, false, 3, 10);
    assert_eq!(f.min_value(), 0);
    assert_eq!(f.max_value(), 0xff); // 8-bit field: zero_extend(~0, 7)
}

#[test]
fn tokenfield_error_propagates_past_buffer() {
    let walker = TestWalker::from_bytes(&[0xab]);
    let f = TokenField::new(8, true, false, 0, 63);
    assert!(f.get_value(&walker).is_err());
}

// -- ContextField ------------------------------------------------------------

#[test]
fn contextfield_extraction() {
    let walker = TestWalker::from_context(&[0xabcd_1234]);
    // bits [0,7]: most significant byte of the first context word
    let f = ContextField::new(false, 0, 7);
    assert_eq!(f.get_value(&walker).unwrap(), 0xab);
    // bits [8,15]
    let g = ContextField::new(false, 8, 15);
    assert_eq!(g.get_value(&walker).unwrap(), 0xcd);
    // sub-byte bits [4,7] = low nibble of 0xab = 0xb
    let h = ContextField::new(false, 4, 7);
    assert_eq!(h.get_value(&walker).unwrap(), 0xb);
    // signed nibble 0xb -> -5
    let s = ContextField::new(true, 4, 7);
    assert_eq!(s.get_value(&walker).unwrap(), -5);
}

#[test]
fn contextfield_accessors_and_minmax() {
    let f = ContextField::new(true, 4, 11);
    assert_eq!(f.get_start_bit(), 4);
    assert_eq!(f.get_end_bit(), 11);
    assert!(f.get_sign_bit());
    assert_eq!(f.min_value(), 0);
    assert_eq!(f.max_value(), 0xff); // 8-bit field [4,11]: zero_extend(~0, 7)
}

// -- instruction address values ----------------------------------------------

#[test]
fn start_end_next2_instruction_values() {
    let manager = test_manager();
    let mut walker = TestWalker::from_bytes(&[]);
    walker.addr = Some(Address::new(ram(&manager), 0x1000));
    walker.naddr = Some(Address::new(ram(&manager), 0x1004));
    walker.n2addr = Some(Address::new(ram(&manager), 0x1008));
    // wordsize 2: byteToAddress halves the byte offset
    assert_eq!(StartInstructionValue.get_value(&walker).unwrap(), 0x800);
    assert_eq!(EndInstructionValue.get_value(&walker).unwrap(), 0x802);
    assert_eq!(Next2InstructionValue.get_value(&walker).unwrap(), 0x804);
    // min/max are all zero
    assert_eq!(StartInstructionValue.min_value(), 0);
    assert_eq!(EndInstructionValue.max_value(), 0);
    // unavailable inst_next2 surfaces the C++ LowlevelError
    walker.n2addr = None;
    assert!(Next2InstructionValue.get_value(&walker).is_err());
}

// -- OperandValue ------------------------------------------------------------

#[test]
fn operand_value_via_hook() {
    let mut walker = TestWalker::from_bytes(&[]);
    walker.operands.push(((2, 7, 3), 0x42));
    let ov = OperandValue::new(2, 7, 3);
    assert_eq!(ov.get_value(&walker).unwrap(), 0x42);
    // min/max throw SleighError in C++
    assert!(ov.min_value().is_err());
    assert!(ov.max_value().is_err());
    let mut pos = 0;
    assert!(ov.get_sub_value(&[1, 2], &mut pos).is_err());
}

// -- expression evaluation -----------------------------------------------------

#[test]
fn expression_arithmetic_evaluation() {
    let walker = TestWalker::from_bytes(&[]);
    let plus = PatternExpression::Plus(BinaryExpression::new(cval(5), cval(7)));
    assert_eq!(plus.get_value(&walker).unwrap(), 12);
    let sub = PatternExpression::Sub(BinaryExpression::new(cval(5), cval(7)));
    assert_eq!(sub.get_value(&walker).unwrap(), -2);
    let mult = PatternExpression::Mult(BinaryExpression::new(cval(6), cval(-7)));
    assert_eq!(mult.get_value(&walker).unwrap(), -42);
    let lsh = PatternExpression::LeftShift(BinaryExpression::new(cval(3), cval(4)));
    assert_eq!(lsh.get_value(&walker).unwrap(), 48);
    let rsh = PatternExpression::RightShift(BinaryExpression::new(cval(-16), cval(2)));
    assert_eq!(rsh.get_value(&walker).unwrap(), -4); // arithmetic shift
    let and = PatternExpression::And(BinaryExpression::new(cval(0xff0), cval(0x0ff)));
    assert_eq!(and.get_value(&walker).unwrap(), 0x0f0);
    let or = PatternExpression::Or(BinaryExpression::new(cval(0xf00), cval(0x00f)));
    assert_eq!(or.get_value(&walker).unwrap(), 0xf0f);
    let xor = PatternExpression::Xor(BinaryExpression::new(cval(0xff), cval(0x0f)));
    assert_eq!(xor.get_value(&walker).unwrap(), 0xf0);
    let div = PatternExpression::Div(BinaryExpression::new(cval(-42), cval(5)));
    assert_eq!(div.get_value(&walker).unwrap(), -8); // C++ truncating division
    let minus = PatternExpression::Minus(UnaryExpression::new(cval(13)));
    assert_eq!(minus.get_value(&walker).unwrap(), -13);
    let not = PatternExpression::Not(UnaryExpression::new(cval(0)));
    assert_eq!(not.get_value(&walker).unwrap(), -1);
}

#[test]
fn expression_wrapping_matches_two_complement() {
    let walker = TestWalker::from_bytes(&[]);
    let plus = PatternExpression::Plus(BinaryExpression::new(cval(i64::MAX), cval(1)));
    assert_eq!(plus.get_value(&walker).unwrap(), i64::MIN);
    let minus = PatternExpression::Minus(UnaryExpression::new(cval(i64::MIN)));
    assert_eq!(minus.get_value(&walker).unwrap(), i64::MIN);
    // shift count 64 resolves x86-masked to 0
    let lsh = PatternExpression::LeftShift(BinaryExpression::new(cval(3), cval(64)));
    assert_eq!(lsh.get_value(&walker).unwrap(), 3);
}

#[test]
fn list_values_minmax_subvalue_walk() {
    // (tokA + tokB*2): leaves in left-to-right order
    let tok_a = PatternExpression::Value(PatternValue::TokenField(TokenField::new(
        1, false, false, 0, 3,
    )));
    let tok_b = PatternExpression::Value(PatternValue::TokenField(TokenField::new(
        1, false, false, 4, 7,
    )));
    let expr = PatternExpression::Plus(BinaryExpression::new(
        tok_a,
        PatternExpression::Mult(BinaryExpression::new(tok_b, cval(2))),
    ));
    let mut values = Vec::new();
    expr.list_values(&mut values);
    assert_eq!(values.len(), 3); // tokA, tokB, const 2
    let mut minlist = Vec::new();
    let mut maxlist = Vec::new();
    expr.get_min_max(&mut minlist, &mut maxlist).unwrap();
    assert_eq!(minlist, vec![0, 0, 2]);
    assert_eq!(maxlist, vec![15, 15, 2]);
    // substitute tokA=3, tokB=5, const leaf reads its own slot (2)
    assert_eq!(expr.get_sub_value_root(&[3, 5, 2]).unwrap(), 13);
}

#[test]
fn get_min_max_errors_on_operand_value() {
    let expr = PatternExpression::Plus(BinaryExpression::new(
        PatternExpression::Value(PatternValue::OperandValue(OperandValue::new(0, 1, 0))),
        cval(1),
    ));
    let mut minlist = Vec::new();
    let mut maxlist = Vec::new();
    assert!(expr.get_min_max(&mut minlist, &mut maxlist).is_err());
}

// -- decode / encode round trips -------------------------------------------------

fn roundtrip(expr_bytes: &[u8]) -> (PatternExpression, Vec<u8>) {
    let manager = test_manager();
    let mut dec = PackedDecode::new(&manager);
    dec.ingest_stream(expr_bytes).unwrap();
    let expr = PatternExpression::decode_expression(&mut dec, &FixedResolver(16)).unwrap();
    let mut reenc = Vec::new();
    {
        let mut enc = PackedEncode::new(&mut reenc);
        expr.encode(&mut enc);
    }
    (expr, reenc)
}

#[test]
fn decode_roundtrip_handencoded_plus_tree() {
    // hand-encode plus_exp{ tokenfield, intb } with PackedEncode
    let mut buf = Vec::new();
    {
        let mut enc = PackedEncode::new(&mut buf);
        enc.open_element(&sla::ELEM_PLUS_EXP);
        enc.open_element(&sla::ELEM_TOKENFIELD);
        enc.write_bool(&sla::ATTRIB_BIGENDIAN, false);
        enc.write_bool(&sla::ATTRIB_SIGNBIT, false);
        enc.write_signed_integer(&sla::ATTRIB_STARTBIT, 0);
        enc.write_signed_integer(&sla::ATTRIB_ENDBIT, 7);
        enc.write_signed_integer(&sla::ATTRIB_STARTBYTE, 0);
        enc.write_signed_integer(&sla::ATTRIB_ENDBYTE, 0);
        enc.write_signed_integer(&sla::ATTRIB_SHIFT, 0);
        enc.close_element(&sla::ELEM_TOKENFIELD);
        enc.open_element(&sla::ELEM_INTB);
        enc.write_signed_integer(&sla::ATTRIB_VAL, 0x10);
        enc.close_element(&sla::ELEM_INTB);
        enc.close_element(&sla::ELEM_PLUS_EXP);
    }
    let (expr, reenc) = roundtrip(&buf);
    // decode -> re-encode is byte identical
    assert_eq!(reenc, buf);
    // and evaluates: instruction byte 0x2a + 0x10
    let walker = TestWalker::from_bytes(&[0x2a, 0, 0, 0]);
    assert_eq!(expr.get_value(&walker).unwrap(), 0x3a);
}

#[test]
fn decode_roundtrip_nested_operators() {
    // not_exp{ div_exp{ intb, intb } }: unary over nested binary
    let mut buf = Vec::new();
    {
        let mut enc = PackedEncode::new(&mut buf);
        enc.open_element(&sla::ELEM_NOT_EXP);
        enc.open_element(&sla::ELEM_DIV_EXP);
        enc.open_element(&sla::ELEM_INTB);
        enc.write_signed_integer(&sla::ATTRIB_VAL, 100);
        enc.close_element(&sla::ELEM_INTB);
        enc.open_element(&sla::ELEM_INTB);
        enc.write_signed_integer(&sla::ATTRIB_VAL, 7);
        enc.close_element(&sla::ELEM_INTB);
        enc.close_element(&sla::ELEM_DIV_EXP);
        enc.close_element(&sla::ELEM_NOT_EXP);
    }
    let (expr, reenc) = roundtrip(&buf);
    assert_eq!(reenc, buf);
    let walker = TestWalker::from_bytes(&[]);
    assert_eq!(expr.get_value(&walker).unwrap(), !(100i64 / 7));
}

#[test]
fn decode_roundtrip_contextfield_and_start() {
    let mut buf = Vec::new();
    {
        let mut enc = PackedEncode::new(&mut buf);
        enc.open_element(&sla::ELEM_SUB_EXP);
        enc.open_element(&sla::ELEM_CONTEXTFIELD);
        enc.write_bool(&sla::ATTRIB_SIGNBIT, true);
        enc.write_signed_integer(&sla::ATTRIB_STARTBIT, 4);
        enc.write_signed_integer(&sla::ATTRIB_ENDBIT, 7);
        enc.write_signed_integer(&sla::ATTRIB_STARTBYTE, 0);
        enc.write_signed_integer(&sla::ATTRIB_ENDBYTE, 0);
        enc.write_signed_integer(&sla::ATTRIB_SHIFT, 0);
        enc.close_element(&sla::ELEM_CONTEXTFIELD);
        enc.open_element(&sla::ELEM_START_EXP);
        enc.close_element(&sla::ELEM_START_EXP);
        enc.close_element(&sla::ELEM_SUB_EXP);
    }
    let (expr, reenc) = roundtrip(&buf);
    assert_eq!(reenc, buf);
    let manager = test_manager();
    let mut walker = TestWalker::from_context(&[0xab00_0000]);
    walker.addr = Some(Address::new(ram(&manager), 8));
    // ctx nibble [4,7] of 0xab signed = -5; start value = 8/2 = 4
    assert_eq!(expr.get_value(&walker).unwrap(), -9);
}

#[test]
fn decode_roundtrip_end_exp() {
    let mut buf = Vec::new();
    {
        let mut enc = PackedEncode::new(&mut buf);
        enc.open_element(&sla::ELEM_END_EXP);
        enc.close_element(&sla::ELEM_END_EXP);
    }
    let (expr, reenc) = roundtrip(&buf);
    assert_eq!(reenc, buf);
    assert!(matches!(
        expr,
        PatternExpression::Value(PatternValue::EndInstructionValue(_))
    ));
}

#[test]
fn decode_operand_exp_validates_constructor_id() {
    let manager = test_manager();
    let mut buf = Vec::new();
    {
        let mut enc = PackedEncode::new(&mut buf);
        enc.open_element(&sla::ELEM_OPERAND_EXP);
        enc.write_signed_integer(&sla::ATTRIB_INDEX, 1);
        enc.write_unsigned_integer(&sla::ATTRIB_TABLE, 5);
        enc.write_unsigned_integer(&sla::ATTRIB_CT, 9);
        enc.close_element(&sla::ELEM_OPERAND_EXP);
    }
    // resolver says the table has 10 constructors: ctid 9 is valid
    let mut dec = PackedDecode::new(&manager);
    dec.ingest_stream(&buf).unwrap();
    let expr = PatternExpression::decode_expression(&mut dec, &FixedResolver(10)).unwrap();
    match &expr {
        PatternExpression::Value(PatternValue::OperandValue(ov)) => {
            assert_eq!(ov.index(), 1);
            assert_eq!(ov.table_id(), 5);
            assert_eq!(ov.ct_id(), 9);
        }
        other => panic!("expected OperandValue, got {other:?}"),
    }
    // re-encode is byte identical
    let mut reenc = Vec::new();
    {
        let mut enc = PackedEncode::new(&mut reenc);
        expr.encode(&mut enc);
    }
    assert_eq!(reenc, buf);
    // resolver says only 9 constructors: ctid 9 -> "Invalid constructor id"
    let mut dec2 = PackedDecode::new(&manager);
    dec2.ingest_stream(&buf).unwrap();
    let err = PatternExpression::decode_expression(&mut dec2, &FixedResolver(9))
        .expect_err("decode must fail");
    assert!(format!("{err}").contains("Invalid constructor id"));
}

#[test]
fn decode_rejects_unknown_and_next2_elements() {
    let manager = test_manager();
    // next2_exp is deliberately NOT in the C++ factory
    let mut buf = Vec::new();
    {
        let mut enc = PackedEncode::new(&mut buf);
        enc.open_element(&sla::ELEM_NEXT2_EXP);
        enc.close_element(&sla::ELEM_NEXT2_EXP);
    }
    let mut dec = PackedDecode::new(&manager);
    dec.ingest_stream(&buf).unwrap();
    let err = PatternExpression::decode_expression(&mut dec, &FixedResolver(1))
        .expect_err("decode must fail");
    assert!(format!("{err}").contains("Invalid pattern expression element"));
    // but the direct decode method works (used by Next2Symbol)
    let mut dec2 = PackedDecode::new(&manager);
    dec2.ingest_stream(&buf).unwrap();
    Next2InstructionValue::decode(&mut dec2).unwrap();
}

// -- build side (ws4a) ---------------------------------------------------

fn op8_field(bstart: i32, bend: i32) -> PatternValue {
    // 1-byte little-endian token, index 0
    PatternValue::TokenField(TokenField::new_for_build(1, false, 0, false, bstart, bend))
}

fn cexpr(v: i64) -> PatternExpression {
    PatternExpression::Value(PatternValue::ConstantValue(ConstantValue::new(v)))
}

#[test]
fn token_pattern_do_and_two_fields() {
    // op8 high nibble == 0xa AND low nibble == 0x5 -> byte 0xa5
    let mut arena = EquationArena::new();
    let hi = arena.alloc(PatternEquation::Equal {
        lhs: op8_field(4, 7),
        rhs: cexpr(0xa),
    });
    let lo = arena.alloc(PatternEquation::Equal {
        lhs: op8_field(0, 3),
        rhs: cexpr(0x5),
    });
    let and = arena.alloc(PatternEquation::And {
        left: hi,
        right: lo,
    });
    let tp = arena.gen_pattern(and, &[]).unwrap();
    // single instruction pattern with mask 0xff, value 0xa5
    let pat = tp.get_pattern();
    match pat {
        Pattern::Disjoint(DisjointPattern::Instruction(ip)) => {
            assert_eq!(ip.get_block().get_mask(0, 8), 0xff);
            assert_eq!(ip.get_block().get_value(0, 8), 0xa5);
        }
        other => panic!("expected instruction pattern, got {other:?}"),
    }
    assert_eq!(tp.get_minimum_length(), 1);
}

#[test]
fn token_pattern_do_or_two_values() {
    // op8 == 0x10 OR op8 == 0x20
    let mut arena = EquationArena::new();
    let a = arena.alloc(PatternEquation::Equal {
        lhs: op8_field(0, 7),
        rhs: cexpr(0x10),
    });
    let b = arena.alloc(PatternEquation::Equal {
        lhs: op8_field(0, 7),
        rhs: cexpr(0x20),
    });
    let or = arena.alloc(PatternEquation::Or { left: a, right: b });
    let tp = arena.gen_pattern(or, &[]).unwrap();
    assert_eq!(tp.get_pattern().num_disjoint(), 2);
}

/// Records the offset sink writes for inspection.
#[derive(Default)]
struct RecordSink {
    irrelevant: Vec<i32>,
    offsets: Vec<(i32, i32, u32)>, // (index, base, reloffset)
}

impl OperandResolveSink for RecordSink {
    fn is_offset_irrelevant(&self, index: i32) -> bool {
        self.irrelevant.contains(&index)
    }
    fn set_offset(&mut self, index: i32, offsetbase: i32, reloffset: u32) {
        self.offsets.push((index, offsetbase, reloffset));
    }
}

#[test]
fn resolve_operand_left_cat_offsets() {
    // EquationCat(Operand(0), Operand(1)) where operand 0 occupies a
    // 1-byte token (ops[0] is a token pattern) and operand 1 follows it.
    let mut arena = EquationArena::new();
    let op0 = arena.alloc(PatternEquation::Operand { index: 0 });
    let op1 = arena.alloc(PatternEquation::Operand { index: 1 });
    let cat = arena.alloc(PatternEquation::Cat {
        left: op0,
        right: op1,
    });
    // ops[0]: a 1-byte token pattern; ops[1]: empty (TRUE)
    let ops = vec![
        TokenPattern::new_token(BuildToken {
            size: 1,
            bigendian: false,
            index: 0,
        }),
        TokenPattern::new_true(),
    ];
    let mut state = OperandResolve::new();
    let mut sink = RecordSink::default();
    let ok = arena
        .resolve_operand_left(cat, &mut state, &ops, &mut sink)
        .unwrap();
    assert!(ok);
    // operand 0 anchored at base -1 offset 0; operand 1 at base -1 offset
    // 1 (after operand 0's 1-byte token).  Resolution runs left then
    // right: operand 0 sets (0,-1,0); the Cat advances offset by operand
    // 0's minimum length (1) before resolving operand 1.
    assert!(sink.offsets.contains(&(0, -1, 0)));
    assert!(
        sink.offsets
            .iter()
            .any(|&(i, b, o)| i == 1 && b == -1 && o == 1)
    );
}

#[test]
fn operand_order_left_to_right() {
    // EquationCat(Operand(2), Operand(0)) lists operands in pattern order.
    let mut arena = EquationArena::new();
    let a = arena.alloc(PatternEquation::Operand { index: 2 });
    let b = arena.alloc(PatternEquation::Operand { index: 0 });
    let cat = arena.alloc(PatternEquation::Cat { left: a, right: b });
    let mut order = Vec::new();
    let mut seen = vec![false; 3];
    arena.operand_order(cat, &mut order, &mut seen);
    assert_eq!(order, vec![2, 0]);
    assert_eq!(seen, vec![true, false, true]);
}

#[test]
fn equal_constraint_impossible_errors() {
    // op8 field [0,3] (max 15) == 100 is impossible.
    let mut arena = EquationArena::new();
    let eq = arena.alloc(PatternEquation::Equal {
        lhs: op8_field(0, 3),
        rhs: cexpr(100),
    });
    let err = arena.gen_pattern(eq, &[]).unwrap_err();
    assert!(format!("{err}").contains("impossible to match"));
}
