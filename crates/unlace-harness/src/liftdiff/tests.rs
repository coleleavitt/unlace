use super::*;

#[test]
fn classify_keyword_forms() {
    // STORE / LOAD
    assert_eq!(
        classify("*(ram,RSP(free)) = u0x4f900(free)"),
        (OpClass::Store, false)
    );
    assert_eq!(
        classify("u0x4f900(0x4:1) = *(ram,RSP(free))"),
        (OpClass::Load, true)
    );
    // BRANCH / CBRANCH / BRANCHIND
    assert_eq!(classify("goto Block_2:0x000b"), (OpClass::Branch, false));
    assert_eq!(
        classify("goto Block_2:0x000b if (u0xaa00:1(free) != 0) else Block_1:0x0009"),
        (OpClass::Cbranch, false)
    );
    assert_eq!(classify("switch (r3(free))"), (OpClass::Branchind, false));
    // RETURN
    assert_eq!(classify("return(#0x0)"), (OpClass::Return, false));
    // CALL with and without a return value
    assert_eq!(
        classify("call fother:8(free)(u0x4:1(free))"),
        (OpClass::Call, false)
    );
    assert_eq!(
        classify("r0(0x4:7) = call fother:8(free)()"),
        (OpClass::Call, true)
    );
    assert_eq!(classify("callind r0(free)"), (OpClass::Callind, false));
}

#[test]
fn classify_value_forms() {
    // COPY (single varnode) -> Value, with output.
    assert_eq!(classify("DF(0x4:47) = #0x0:1"), (OpClass::Value, true));
    assert_eq!(classify("r3(0x4:0) = r3(free)"), (OpClass::Value, true));
    // binary / unary / function forms -> Value, with output.
    assert_eq!(
        classify("RSP(0x4:1) = RSP(free) - #0x8"),
        (OpClass::Value, true)
    );
    assert_eq!(
        classify("r3(0x4:1) = LZCOUNT(r3(free))"),
        (OpClass::Value, true)
    );
    assert_eq!(
        classify("x1(0x4:2c) = ZEXT48(w1(i))"),
        (OpClass::Value, true)
    );
    assert_eq!(
        classify("u0x3500:1(0x4:45) = ! ZR(free)"),
        (OpClass::Value, true)
    );
    // The Rust opcode classifier agrees on the same classes.
    use unlace_num::opcodes::OpCode::*;
    assert_eq!(OpClass::from_opcode(CPUI_COPY), OpClass::Value);
    assert_eq!(OpClass::from_opcode(CPUI_INT_ADD), OpClass::Value);
    assert_eq!(OpClass::from_opcode(CPUI_LZCOUNT), OpClass::Value);
    assert_eq!(OpClass::from_opcode(CPUI_CALLOTHER), OpClass::Value);
    assert_eq!(OpClass::from_opcode(CPUI_LOAD), OpClass::Load);
    assert_eq!(OpClass::from_opcode(CPUI_RETURN), OpClass::Return);
    assert_eq!(OpClass::from_opcode(CPUI_CBRANCH), OpClass::Cbranch);
}

#[test]
fn addr_and_short_header_parse() {
    assert_eq!(parse_addr("0x004004c7").unwrap(), 0x4004c7);
    assert_eq!(parse_addr("0xa000").unwrap(), 0xa000);
    // Space-qualified address (8051 `CODE:`).
    assert_eq!(parse_addr("CODE:0xa000").unwrap(), 0xa000);
    // The short header yields the INDEX (2), not the address.
    assert_eq!(parse_short_header("Block_2:0x000b"), Some(2));
}

#[test]
fn goto_targets_branch_and_cbranch() {
    // `Block_N:0xADDR` yields the target block INDEX N (not the address).
    assert_eq!(goto_targets("goto Block_2:0x000b"), Some(vec![2]));
    assert_eq!(
        goto_targets("goto Block_4:0x402d29cc if (u0x4d00:1(free) != 0) else Block_3:0x402d29c8"),
        Some(vec![4, 3])
    );
    assert_eq!(goto_targets("return(#0x0)"), None);
    assert_eq!(goto_targets("r3(0x4:0) = r3(free)"), None);
    // The short-header parser returns the index even when several blocks share
    // an address (the key insight behind the F1 fix).
    assert_eq!(parse_short_header("Block_3:0x32148"), Some(3));
    assert_eq!(parse_short_header("Block_1:0x32148"), Some(1));
}

/// A minimal one-block snapshot (lzcount-shaped) parses to the right model.
#[test]
fn parse_one_block_snapshot() {
    let snap = "0\n\
            Basic Block 0 0x00010020-0x0001002c\n\
            0x00010020:0:\tr3(0x00010020:0) = r3(free) ^ #0x3\n\
            0x00010024:1:\tr3(0x00010024:1) = LZCOUNT(r3(free))\n\
            0x0001002c:8:\treturn(#0x0)\n";
    let mut ex = 0usize;
    let m = parse_cpp_b2(snap, &mut ex).unwrap();
    assert_eq!(ex, 0, "no pre-heritage insertions in this snapshot");
    assert_eq!(m.blocks.len(), 1);
    let b = &m.blocks[0];
    assert_eq!(b.index, 0);
    assert_eq!(b.start, 0x10020);
    assert_eq!(b.stop, 0x1002c);
    assert_eq!(b.ops.len(), 3);
    assert_eq!(b.ops[0].class, OpClass::Value);
    assert_eq!(b.ops[0].addr, 0x10020);
    assert_eq!(b.ops[2].class, OpClass::Return);
    assert!(b.out_indices.is_empty(), "a RETURN block has no out-edge");
}

/// The entry-head `ActionConstbase` COPY (`DF = #0x0`, high seqnum) is excluded.
#[test]
fn entry_head_tracked_copy_excluded() {
    let snap = "0\n\
            Basic Block 0 0x00400000-0x00400004\n\
            0x00400000:5:\tDF(0x00400000:5) = #0x0:1\n\
            0x00400000:0:\tRBP(0x00400000:0) = RSP(free)\n\
            0x00400004:1:\treturn(#0x0)\n";
    let mut ex = 0usize;
    let m = parse_cpp_b2(snap, &mut ex).unwrap();
    // The DF COPY (time 5 > the entry decode times 0..) is excluded.
    assert_eq!(ex, 1);
    let b = &m.blocks[0];
    assert_eq!(b.ops.len(), 2, "DF tracked-context COPY excluded");
    assert_eq!(b.ops[0].addr, 0x400000);
}

/// Two-block fall-through + CBRANCH edges are recovered.
#[test]
fn parse_two_block_edges() {
    let snap = "0\n\
            Basic Block 0 0x00000000-0x00000007\n\
            0x00000000:0:\tACC(0x00000000:0) = i0x52:1(free)\n\
            0x00000007:1:\tgoto Block_2:0x0000000b if (u0xaa00:1(free) != 0) else Block_1:0x00000009\n\
            Basic Block 1 0x00000009-0x00000009\n\
            0x00000009:2:\tr0(0x00000009:2) = #0x0\n\
            Basic Block 2 0x0000000b-0x0000000b\n\
            0x0000000b:3:\treturn(#0x0)\n";
    let mut ex = 0usize;
    let m = parse_cpp_b2(snap, &mut ex).unwrap();
    assert_eq!(m.blocks.len(), 3);
    // Block 0: CBRANCH out-edges to blocks 1 and 2 (sorted by index).
    assert_eq!(m.blocks[0].out_indices, vec![1, 2]);
    // Block 1: fall-through to the next printed block, index 2.
    assert_eq!(m.blocks[1].out_indices, vec![2]);
    // Block 2: RETURN, no out-edge.
    assert!(m.blocks[2].out_indices.is_empty());
}

#[test]
fn diff_pass_and_first_divergence() {
    let cpp_text = "0\n\
            Basic Block 0 0x00000000-0x00000004\n\
            0x00000000:0:\tr0(0x00000000:0) = r1(free) + #0x1\n\
            0x00000004:1:\treturn(#0x0)\n";
    let mut ex = 0usize;
    let cpp = parse_cpp_b2(cpp_text, &mut ex).unwrap();

    // An identical Rust model -> PASS.
    let rust = StructModel {
        blocks: vec![BlockRec {
            index: 0,
            start: 0,
            stop: 4,
            ops: vec![
                OpRec {
                    addr: 0,
                    class: OpClass::Value,
                    has_output: true,
                },
                OpRec {
                    addr: 4,
                    class: OpClass::Return,
                    has_output: false,
                },
            ],
            out_indices: vec![],
        }],
    };
    assert!(matches!(diff(&rust, &cpp), DiffResult::Pass));

    // A wrong op class at op#0 -> first divergence reports it.
    let mut wrong = rust;
    wrong.blocks[0].ops[0].class = OpClass::Load;
    match diff(&wrong, &cpp) {
        DiffResult::Divergent(d) => assert!(d.contains("op#0") && d.contains("class differs")),
        DiffResult::Pass => panic!("expected a divergence"),
    }
}
