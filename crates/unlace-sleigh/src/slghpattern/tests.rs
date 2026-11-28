use std::rc::Rc;
use unlace_base::address::Address;
use unlace_base::error::UnlaceError;
use unlace_base::marshal::{Decoder, PackedDecode, PackedEncode};
use unlace_base::space::{AddrSpaceManager, ConstantSpace};

use super::*;

/// Minimal synthetic walker: instruction bytes packed big-endian,
/// context provided as 32-bit words (mirrors ParserContext semantics).
struct ByteWalker {
    instr: Vec<u8>,
    ctx: Vec<u32>,
}

impl ByteWalker {
    fn instr(bytes: &[u8]) -> ByteWalker {
        ByteWalker {
            instr: bytes.to_vec(),
            ctx: Vec::new(),
        }
    }

    fn ctx(words: &[u32]) -> ByteWalker {
        ByteWalker {
            instr: Vec::new(),
            ctx: words.to_vec(),
        }
    }
}

impl PatternExpressionContext for ByteWalker {
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
        unimplemented!("pattern tests never read addresses")
    }

    fn get_naddr(&self) -> Address {
        unimplemented!("pattern tests never read addresses")
    }

    fn get_n2addr(&self) -> UnlaceResult<Address> {
        unimplemented!("pattern tests never read addresses")
    }

    fn operand_value(&self, _index: i32, _table_id: u32, _ct_id: u32) -> UnlaceResult<i64> {
        unimplemented!("pattern tests never evaluate operands")
    }
}

fn test_manager() -> AddrSpaceManager {
    let mut manager = AddrSpaceManager::new();
    manager.insert_space(Rc::new(ConstantSpace::new())).unwrap();
    manager
}

/// instruction pattern requiring `byte[pos] == val`
fn ip_byte(pos: i32, val: u8) -> InstructionPattern {
    let shift_words = pos / 4;
    let inner = pos % 4;
    InstructionPattern::new(PatternBlock::new(
        shift_words * 4,
        0xff00_0000u32 >> (inner * 8),
        u32::from(val) << 24 >> (inner * 8),
    ))
}

// -- PatternBlock -------------------------------------------------------

#[test]
fn patternblock_normalization_preserves_byte_alignment() {
    for first in 0..64 {
        for last in first..64 {
            let mut mask = [0u8; 16];
            mask[4 + first / 8] |= 0x80 >> (first % 8);
            mask[4 + last / 8] |= 0x80 >> (last % 8);
            let values: Vec<u8> = (0..16).map(|i| i * 13 + 7).collect();
            let words = |bytes: &[u8]| {
                bytes
                    .as_chunks::<4>()
                    .0
                    .iter()
                    .map(|b| u32::from_be_bytes(*b))
                    .collect::<Vec<_>>()
            };
            let start = 4 + first / 8;
            let span = last / 8 - first / 8 + 1;
            let count = span.div_ceil(4) * 4;
            let mut expected_mask = mask[start..start + span].to_vec();
            expected_mask.resize(count, 0);
            let mut block = PatternBlock {
                offset: 7,
                nonzerosize: 16,
                maskvec: words(&mask),
                valvec: words(&values),
            };
            block.normalize();
            assert_eq!(block.offset, 7 + start as i32, "{first}/{last}");
            assert_eq!(block.nonzerosize, span as i32, "{first}/{last}");
            assert_eq!(block.maskvec, words(&expected_mask), "{first}/{last}");
            assert_eq!(
                block.valvec,
                words(&values[start..start + count]),
                "{first}/{last}"
            );
            let normalized = block.clone();
            block.normalize();
            assert_eq!(format!("{block:?}"), format!("{normalized:?}"));
        }
    }
}

#[test]
fn patternblock_normalize_offsets_and_length() {
    // mask 0x00ff0000 at word offset 0 normalizes to byte offset 1
    let blk = PatternBlock::new(0, 0x00ff_0000, 0x00ab_0000);
    assert_eq!(blk.get_length(), 2);
    assert_eq!(blk.get_mask(8, 8), 0xff);
    assert_eq!(blk.get_value(8, 8), 0xab);
    // bits before the block read as zero
    assert_eq!(blk.get_mask(0, 8), 0);
    assert_eq!(blk.get_value(0, 8), 0);
}

#[test]
fn patternblock_getmask_negative_startbit_is_zero() {
    // exercises the C++ unsigned division path: startbit - 8*offset < 0
    let blk = PatternBlock::new(4, 0xff00_0000, 0x1200_0000);
    assert_eq!(blk.get_mask(0, 8), 0); // startbit -32 relative to block
    assert_eq!(blk.get_value(0, 8), 0);
    assert_eq!(blk.get_mask(16, 32), 0x0000_ff00);
    assert_eq!(blk.get_value(32, 8), 0x12);
}

#[test]
fn patternblock_always_true_false() {
    let t = PatternBlock::new_always(true);
    assert!(t.always_true());
    assert!(!t.always_false());
    assert_eq!(t.get_length(), 0);
    let f = PatternBlock::new_always(false);
    assert!(f.always_false());
    assert!(!f.always_true());
    // a fully-zero mask normalizes to always true
    let z = PatternBlock::new(0, 0, 0x1234_5678);
    assert!(z.always_true());
}

#[test]
fn patternblock_intersect_and_impossible() {
    let a = PatternBlock::new(0, 0xff00_0000, 0xab00_0000);
    let b = PatternBlock::new(0, 0x00ff_0000, 0x00cd_0000);
    let res = a.intersect(&b);
    assert_eq!(res.get_length(), 2);
    assert_eq!(res.get_mask(0, 16), 0xffff);
    assert_eq!(res.get_value(0, 16), 0xabcd);
    // conflicting values on a shared mask bit -> impossible (alwaysFalse)
    let c = PatternBlock::new(0, 0xff00_0000, 0x1200_0000);
    let d = PatternBlock::new(0, 0xff00_0000, 0x3400_0000);
    assert!(c.intersect(&d).always_false());
    // new_and / new_and_list agree with intersect
    assert!(PatternBlock::new_and(&a, &b).identical(&res));
    assert!(PatternBlock::new_and_list(&[a.clone(), b.clone()]).identical(&res));
    assert!(PatternBlock::new_and_list(&[]).always_true());
}

#[test]
fn patternblock_common_sub_pattern() {
    // byte0 agrees (0xab), byte1 disagrees on bits 0x26
    let a = PatternBlock::new(0, 0xffff_0000, 0xab12_0000);
    let b = PatternBlock::new(0, 0xffff_0000, 0xab34_0000);
    let res = a.common_sub_pattern(&b);
    assert_eq!(res.get_mask(0, 16), 0xffd9);
    assert_eq!(res.get_value(0, 16), 0xab10);
}

#[test]
fn patternblock_specializes_and_identical() {
    let fine = PatternBlock::new(0, 0xffff_0000, 0xab12_0000);
    let coarse = PatternBlock::new(0, 0xff00_0000, 0xab00_0000);
    assert!(fine.specializes(&coarse));
    assert!(!coarse.specializes(&fine));
    assert!(fine.identical(&fine.clone()));
    assert!(!fine.identical(&coarse));
}

#[test]
fn patternblock_shift_and_multiword() {
    let mut a = PatternBlock::new(0, 0xff00_0000, 0xab00_0000);
    a.shift(2);
    assert_eq!(a.get_length(), 3);
    assert_eq!(a.get_value(16, 8), 0xab);
    // intersect across word boundary: byte 0 and byte 4 requirements
    let b = PatternBlock::new(0, 0xff00_0000, 0x1100_0000);
    let c = PatternBlock::new(4, 0xff00_0000, 0xcd00_0000);
    let m = b.intersect(&c);
    assert_eq!(m.get_length(), 5);
    assert_eq!(m.get_value(0, 8), 0x11);
    assert_eq!(m.get_value(32, 8), 0xcd);
}

#[test]
fn patternblock_instruction_and_context_match() {
    let blk = PatternBlock::new(0, 0xff00_0000, 0xab00_0000);
    assert!(
        blk.is_instruction_match(&ByteWalker::instr(&[0xab, 1, 2, 3]))
            .unwrap()
    );
    assert!(
        !blk.is_instruction_match(&ByteWalker::instr(&[0xac, 1, 2, 3]))
            .unwrap()
    );
    assert!(
        blk.is_context_match(&ByteWalker::ctx(&[0xab12_3456]))
            .unwrap()
    );
    assert!(
        !blk.is_context_match(&ByteWalker::ctx(&[0x0b12_3456]))
            .unwrap()
    );
    // alwaysTrue/alwaysFalse short-circuit without touching the walker
    assert!(
        PatternBlock::new_always(true)
            .is_instruction_match(&ByteWalker::instr(&[]))
            .unwrap()
    );
    assert!(
        !PatternBlock::new_always(false)
            .is_instruction_match(&ByteWalker::instr(&[]))
            .unwrap()
    );
    // walker errors propagate (C++ BadDataError)
    assert!(
        blk.is_instruction_match(&ByteWalker::instr(&[0xab]))
            .is_err()
    );
}

#[test]
fn patternblock_encode_decode_roundtrip() {
    let manager = test_manager();
    let blk = PatternBlock::new(0, 0xffff_0000, 0xab12_0000);
    let mut buf = Vec::new();
    {
        let mut enc = PackedEncode::new(&mut buf);
        blk.encode(&mut enc);
    }
    let mut dec = PackedDecode::new(&manager);
    dec.ingest_stream(&buf).unwrap();
    let rt = PatternBlock::decode(&mut dec).unwrap();
    assert!(rt.identical(&blk));
    let mut buf2 = Vec::new();
    {
        let mut enc = PackedEncode::new(&mut buf2);
        rt.encode(&mut enc);
    }
    assert_eq!(buf2, buf);
}

// -- pattern matching ------------------------------------------------------

#[test]
fn instruction_context_combine_or_matching() {
    let ip = ip_byte(0, 0xab);
    assert!(ip.is_match(&ByteWalker::instr(&[0xab, 0, 0, 0])).unwrap());
    assert!(!ip.is_match(&ByteWalker::instr(&[0xcd, 0, 0, 0])).unwrap());

    let cp = ContextPattern::new(PatternBlock::new(0, 0xf000_0000, 0x3000_0000));
    assert!(cp.is_match(&ByteWalker::ctx(&[0x3abc_0000])).unwrap());
    assert!(!cp.is_match(&ByteWalker::ctx(&[0x4abc_0000])).unwrap());
    assert!(cp.always_instruction_true());

    // Combine: both pieces must match; the walker carries both streams
    let comb = CombinePattern::new(cp.clone(), ip.simplify_clone_typed());
    let mut walker = ByteWalker::instr(&[0xab, 0, 0, 0]);
    walker.ctx = vec![0x3abc_0000];
    assert!(comb.is_match(&walker).unwrap());
    walker.ctx = vec![0x4abc_0000];
    assert!(!comb.is_match(&walker).unwrap());

    // Or: second branch matches
    let or = OrPattern::new(
        DisjointPattern::Instruction(ip_byte(0, 0x11)),
        DisjointPattern::Instruction(ip_byte(0, 0x22)),
    );
    assert!(or.is_match(&ByteWalker::instr(&[0x22, 0, 0, 0])).unwrap());
    assert!(!or.is_match(&ByteWalker::instr(&[0x33, 0, 0, 0])).unwrap());
    assert_eq!(or.num_disjoint(), 2);
}

// -- algebra -----------------------------------------------------------------

#[test]
fn do_and_instruction_with_context_builds_combine() {
    let ip = Pattern::Disjoint(DisjointPattern::Instruction(ip_byte(0, 0xab)));
    let cp = Pattern::Disjoint(DisjointPattern::Context(ContextPattern::new(
        PatternBlock::new(0, 0xf000_0000, 0x3000_0000),
    )));
    let combined = ip.do_and(&cp, 0);
    assert!(matches!(
        combined,
        Pattern::Disjoint(DisjointPattern::Combine(_))
    ));
    let mut walker = ByteWalker::instr(&[0xab, 0, 0, 0]);
    walker.ctx = vec![0x3000_0000];
    assert!(combined.is_match(&walker).unwrap());
    walker.instr[0] = 0xac;
    assert!(!combined.is_match(&walker).unwrap());
    // symmetric direction delegates through ContextPattern::doAnd
    let combined2 = cp.do_and(&ip, 0);
    assert!(matches!(
        combined2,
        Pattern::Disjoint(DisjointPattern::Combine(_))
    ));
}

#[test]
fn do_and_instruction_shift_alignment() {
    // a requires byte0==0xab; b requires byte0==0xcd; with sa=1, b's
    // requirement lands on byte 1 of the result
    let a = Pattern::Disjoint(DisjointPattern::Instruction(ip_byte(0, 0xab)));
    let b = Pattern::Disjoint(DisjointPattern::Instruction(ip_byte(0, 0xcd)));
    let res = a.do_and(&b, 1);
    assert!(
        res.is_match(&ByteWalker::instr(&[0xab, 0xcd, 0, 0, 0]))
            .unwrap()
    );
    assert!(
        !res.is_match(&ByteWalker::instr(&[0xab, 0xab, 0, 0, 0]))
            .unwrap()
    );
    // negative sa shifts self instead
    let res2 = a.do_and(&b, -1);
    assert!(
        res2.is_match(&ByteWalker::instr(&[0xcd, 0xab, 0, 0, 0]))
            .unwrap()
    );
}

#[test]
fn do_and_or_pattern_distributes() {
    let or = Pattern::Or(OrPattern::new(
        DisjointPattern::Instruction(ip_byte(0, 0x11)),
        DisjointPattern::Instruction(ip_byte(0, 0x22)),
    ));
    let req = Pattern::Disjoint(DisjointPattern::Instruction(ip_byte(1, 0x33)));
    let res = or.do_and(&req, 0);
    assert_eq!(res.num_disjoint(), 2);
    assert!(
        res.is_match(&ByteWalker::instr(&[0x11, 0x33, 0, 0, 0]))
            .unwrap()
    );
    assert!(
        res.is_match(&ByteWalker::instr(&[0x22, 0x33, 0, 0, 0]))
            .unwrap()
    );
    assert!(
        !res.is_match(&ByteWalker::instr(&[0x11, 0x44, 0, 0, 0]))
            .unwrap()
    );
}

#[test]
fn do_or_builds_or_pattern() {
    let mut a = Pattern::Disjoint(DisjointPattern::Instruction(ip_byte(0, 0x11)));
    let mut b = Pattern::Disjoint(DisjointPattern::Instruction(ip_byte(0, 0x22)));
    let res = a.do_or(&mut b, 0);
    assert_eq!(res.num_disjoint(), 2);
    assert!(res.is_match(&ByteWalker::instr(&[0x11, 0, 0, 0])).unwrap());
    assert!(res.is_match(&ByteWalker::instr(&[0x22, 0, 0, 0])).unwrap());
    assert!(!res.is_match(&ByteWalker::instr(&[0x33, 0, 0, 0])).unwrap());
    // positive sa shifts the b clone
    let mut a2 = Pattern::Disjoint(DisjointPattern::Instruction(ip_byte(0, 0x11)));
    let mut b2 = Pattern::Disjoint(DisjointPattern::Instruction(ip_byte(0, 0x22)));
    let res2 = a2.do_or(&mut b2, 1);
    assert!(
        res2.is_match(&ByteWalker::instr(&[0x00, 0x22, 0, 0, 0]))
            .unwrap()
    );
}

#[test]
fn or_do_or_quirk_shifts_original_orlist() {
    // Upstream OrPattern::doOr with sa<0 shifts the RECEIVER's own
    // orlist (through const) and keeps the unshifted clones in the
    // result.  Document that exact behavior.
    let mut a = Pattern::Or(OrPattern::new(
        DisjointPattern::Instruction(ip_byte(0, 0x11)),
        DisjointPattern::Instruction(ip_byte(0, 0x22)),
    ));
    let mut b = Pattern::Disjoint(DisjointPattern::Instruction(ip_byte(0, 0x33)));
    let res = a.do_or(&mut b, -1);
    // result holds the UNSHIFTED clones plus b's clone
    assert_eq!(res.num_disjoint(), 3);
    assert!(
        res.is_match(&ByteWalker::instr(&[0x11, 0, 0, 0, 0]))
            .unwrap()
    );
    assert!(
        res.is_match(&ByteWalker::instr(&[0x33, 0, 0, 0, 0]))
            .unwrap()
    );
    // the ORIGINAL OrPattern was mutated: its byte-0 requirements moved
    // to byte 1
    assert!(
        a.is_match(&ByteWalker::instr(&[0x00, 0x11, 0, 0, 0]))
            .unwrap()
    );
    assert!(
        !a.is_match(&ByteWalker::instr(&[0x11, 0x00, 0, 0, 0]))
            .unwrap()
    );
}

#[test]
fn common_sub_pattern_of_instructions() {
    let a = Pattern::Disjoint(DisjointPattern::Instruction(InstructionPattern::new(
        PatternBlock::new(0, 0xffff_0000, 0xab12_0000),
    )));
    let b = Pattern::Disjoint(DisjointPattern::Instruction(InstructionPattern::new(
        PatternBlock::new(0, 0xffff_0000, 0xab34_0000),
    )));
    let res = a.common_sub_pattern(&b, 0);
    match &res {
        Pattern::Disjoint(DisjointPattern::Instruction(ip)) => {
            assert_eq!(ip.get_block().get_mask(0, 16), 0xffd9);
            assert_eq!(ip.get_block().get_value(0, 16), 0xab10);
        }
        other => panic!("expected InstructionPattern, got {other:?}"),
    }
    // instruction vs context: alwaysTrue InstructionPattern
    let cp = Pattern::Disjoint(DisjointPattern::Context(ContextPattern::new(
        PatternBlock::new(0, 0xff00_0000, 0x1200_0000),
    )));
    let res2 = a.common_sub_pattern(&cp, 0);
    assert!(res2.always_true());
}

#[test]
fn simplify_clone_collapses() {
    // Or with an alwaysTrue branch -> InstructionPattern(true)
    let or = Pattern::Or(OrPattern::new(
        DisjointPattern::Instruction(InstructionPattern::new_always(true)),
        DisjointPattern::Instruction(ip_byte(0, 0x22)),
    ));
    assert!(or.simplify_clone().always_true());
    // Or with one alwaysFalse branch -> the surviving disjoint alone
    let or2 = Pattern::Or(OrPattern::new(
        DisjointPattern::Instruction(InstructionPattern::new_always(false)),
        DisjointPattern::Instruction(ip_byte(0, 0x22)),
    ));
    let simp = or2.simplify_clone();
    assert!(matches!(
        simp,
        Pattern::Disjoint(DisjointPattern::Instruction(_))
    ));
    // Or with all alwaysFalse branches -> InstructionPattern(false)
    let or3 = Pattern::Or(OrPattern::new(
        DisjointPattern::Instruction(InstructionPattern::new_always(false)),
        DisjointPattern::Instruction(InstructionPattern::new_always(false)),
    ));
    assert!(or3.simplify_clone().always_false());
    // Combine with alwaysTrue context collapses to its instruction piece
    let comb = CombinePattern::new(
        ContextPattern::new(PatternBlock::new_always(true)),
        ip_byte(0, 0xab),
    );
    assert!(matches!(
        comb.simplify_clone(),
        Pattern::Disjoint(DisjointPattern::Instruction(_))
    ));
    // Combine with alwaysFalse instruction collapses to false
    let comb2 = CombinePattern::new(
        ContextPattern::new(PatternBlock::new(0, 0xf000_0000, 0x3000_0000)),
        InstructionPattern::new_always(false),
    );
    assert!(comb2.simplify_clone().always_false());
}

#[test]
fn disjoint_specializes_identical_resolves_intersect() {
    let fine = DisjointPattern::Instruction(InstructionPattern::new(PatternBlock::new(
        0,
        0xffff_0000,
        0xab12_0000,
    )));
    let coarse = DisjointPattern::Instruction(ip_byte(0, 0xab));
    assert!(fine.specializes(&coarse));
    assert!(!coarse.specializes(&fine));
    assert!(fine.identical(&fine.clone()));
    assert!(!fine.identical(&coarse));

    // a Combine specializes its own instruction piece
    let ctx = DisjointPattern::Context(ContextPattern::new(PatternBlock::new(
        0,
        0xf000_0000,
        0x3000_0000,
    )));
    let comb = match Pattern::Disjoint(coarse.clone()).do_and(&Pattern::Disjoint(ctx.clone()), 0) {
        Pattern::Disjoint(d) => d,
        other => panic!("expected disjoint, got {other:?}"),
    };
    assert!(comb.specializes(&coarse));
    assert!(comb.specializes(&ctx));
    // and resolves the intersection of its two pieces
    assert!(comb.resolves_intersect(&coarse, &ctx));
    assert!(!coarse.resolves_intersect(&coarse, &ctx));
    // an instruction pattern resolves the intersection of itself with
    // an (absent) context side
    assert!(coarse.resolves_intersect(&coarse, &coarse));
}

#[test]
fn get_disjoint_accessors() {
    let or = Pattern::Or(OrPattern::new(
        DisjointPattern::Instruction(ip_byte(0, 0x11)),
        DisjointPattern::Instruction(ip_byte(0, 0x22)),
    ));
    assert!(or.get_disjoint(0).is_some());
    assert!(or.get_disjoint(1).is_some());
    let single = Pattern::Disjoint(DisjointPattern::Instruction(ip_byte(0, 0x11)));
    assert!(single.get_disjoint(0).is_none());
    assert_eq!(single.num_disjoint(), 0);
}

// -- encode/decode round trips ---------------------------------------------------

fn decode_disjoint_bytes(buf: &[u8]) -> DisjointPattern {
    let manager = test_manager();
    let mut dec = PackedDecode::new(&manager);
    dec.ingest_stream(buf).unwrap();
    DisjointPattern::decode_disjoint(&mut dec).unwrap()
}

fn encode_pattern(d: &DisjointPattern) -> Vec<u8> {
    let mut buf = Vec::new();
    {
        let mut enc = PackedEncode::new(&mut buf);
        d.encode(&mut enc);
    }
    buf
}

#[test]
fn decode_disjoint_roundtrips_all_types() {
    // instruction
    let ip = DisjointPattern::Instruction(ip_byte(1, 0x7f));
    let buf = encode_pattern(&ip);
    let rt = decode_disjoint_bytes(&buf);
    assert!(matches!(rt, DisjointPattern::Instruction(_)));
    assert!(rt.identical(&ip));
    assert_eq!(encode_pattern(&rt), buf);
    // context
    let cp = DisjointPattern::Context(ContextPattern::new(PatternBlock::new(
        0,
        0x0ff0_0000,
        0x0120_0000,
    )));
    let buf = encode_pattern(&cp);
    let rt = decode_disjoint_bytes(&buf);
    assert!(matches!(rt, DisjointPattern::Context(_)));
    assert!(rt.identical(&cp));
    assert_eq!(encode_pattern(&rt), buf);
    // combine (the factory's fall-through branch)
    let comb = DisjointPattern::Combine(CombinePattern::new(
        ContextPattern::new(PatternBlock::new(0, 0xf000_0000, 0x3000_0000)),
        ip_byte(0, 0xab),
    ));
    let buf = encode_pattern(&comb);
    let rt = decode_disjoint_bytes(&buf);
    assert!(matches!(rt, DisjointPattern::Combine(_)));
    assert!(rt.identical(&comb));
    assert_eq!(encode_pattern(&rt), buf);
}

#[test]
fn or_pattern_decode_roundtrip() {
    let manager = test_manager();
    let or = OrPattern::new(
        DisjointPattern::Instruction(ip_byte(0, 0x11)),
        DisjointPattern::Combine(CombinePattern::new(
            ContextPattern::new(PatternBlock::new(0, 0xf000_0000, 0x3000_0000)),
            ip_byte(0, 0x22),
        )),
    );
    let mut buf = Vec::new();
    {
        let mut enc = PackedEncode::new(&mut buf);
        or.encode(&mut enc);
    }
    let mut dec = PackedDecode::new(&manager);
    dec.ingest_stream(&buf).unwrap();
    let rt = OrPattern::decode(&mut dec).unwrap();
    assert_eq!(rt.num_disjoint(), 2);
    assert!(
        rt.get_disjoint(0)
            .unwrap()
            .identical(or.get_disjoint(0).unwrap())
    );
    assert!(
        rt.get_disjoint(1)
            .unwrap()
            .identical(or.get_disjoint(1).unwrap())
    );
    let mut buf2 = Vec::new();
    {
        let mut enc = PackedEncode::new(&mut buf2);
        rt.encode(&mut enc);
    }
    assert_eq!(buf2, buf);
}
