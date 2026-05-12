//! Crypto-idiom sequence detection pass.
//!
//! Recognises well-known instruction sequences emitted by architecture-
//! specific crypto lifts, annotating the function with the recovered
//! algorithm family:
//!
//! - **AES-128**: 10× `AESENC` followed by 1× `AESENCLAST`
//! - **AES-192**: 12× `AESENC` followed by 1× `AESENCLAST`
//! - **AES-256**: 14× `AESENC` followed by 1× `AESENCLAST`
//! - **SHA-256 schedule/compression idioms** emitted from RISC-V `Zk*`
//!   scalar crypto instructions (`sha256sig*` / `sha256sum*`)
//! - **SHA-512 schedule/compression idioms** emitted from RISC-V `Zk*`
//!   scalar crypto instructions (`sha512sig*` / `sha512sum*`)
//! - **AES-128 transform idioms** emitted from RISC-V `Zk*` scalar AES
//!   instructions (`aes32*`)

use unlace_ir::ssa::{CryptoAnnotation, SsaFunction};
use unlace_ir::{BlockId, IrOp, SpaceId};

use crate::pass::{Pass, PassError};

/// Callother tag for AESENC (mirrored from `unlace-lift-x86`).
const TAG_AESENC: u64 = 0x1E0;
/// Callother tag for AESENCLAST.
const TAG_AESENCLAST: u64 = 0x1E1;

// RISC-V Zk* scalar crypto pseudo-op tags emitted by `unlace-lift-riscv`.
const TAG_RISCV_SHA256SIG0: u64 = 0x520;
const TAG_RISCV_SHA256SIG1: u64 = 0x521;
const TAG_RISCV_SHA256SUM0: u64 = 0x522;
const TAG_RISCV_SHA256SUM1: u64 = 0x523;
const TAG_RISCV_SHA512SIG0: u64 = 0x524;
const TAG_RISCV_SHA512SIG1: u64 = 0x525;
const TAG_RISCV_SHA512SUM0: u64 = 0x526;
const TAG_RISCV_SHA512SUM1: u64 = 0x527;
const TAG_RISCV_AES32ESI: u64 = 0x530;
const TAG_RISCV_AES32ESMI: u64 = 0x531;
const TAG_RISCV_AES32DSI: u64 = 0x532;
const TAG_RISCV_AES32DSMI: u64 = 0x533;

/// Detect crypto sequences and annotate the function.
pub struct CryptoIdiomPass;

impl Pass for CryptoIdiomPass {
    fn name(&self) -> &str {
        "crypto-idioms"
    }

    fn run(&self, func: &mut SsaFunction) -> Result<bool, PassError> {
        let mut changed = false;

        for (&block_id, block) in &func.function.blocks {
            let mut annotations = detect_aes_sequences(block_id, &block.insns);
            annotations.extend(detect_riscv_zk_sequences(block_id, &block.insns));
            if !annotations.is_empty() {
                changed = true;
                func.crypto_annotations.extend(annotations);
            }
        }

        Ok(changed)
    }
}

/// Returns true if `insn` is a Callother with the given constant tag.
fn is_callother_tag(insn: &unlace_ir::IrInsn, tag: u64) -> bool {
    if insn.op != IrOp::Callother {
        return false;
    }
    if insn.inputs.is_empty() {
        return false;
    }
    let tag_vn = &insn.inputs[0];
    tag_vn.space == SpaceId::Const && tag_vn.offset == tag
}

/// Scan a block's instructions for runs of AESENC followed by AESENCLAST.
fn detect_aes_sequences(
    block_id: BlockId,
    insns: &[unlace_ir::IrInsn],
) -> Vec<CryptoAnnotation> {
    let mut results = Vec::new();
    let mut i = 0;

    while i < insns.len() {
        if !is_callother_tag(&insns[i], TAG_AESENC) {
            i += 1;
            continue;
        }

        // Count consecutive AESENC instructions.
        let start = i;
        while i < insns.len() && is_callother_tag(&insns[i], TAG_AESENC) {
            i += 1;
        }
        let enc_count = i - start;

        // Check for a trailing AESENCLAST.
        if i < insns.len() && is_callother_tag(&insns[i], TAG_AESENCLAST) {
            let algorithm = match enc_count {
                10 => "AES-128",
                12 => "AES-192",
                14 => "AES-256",
                _ => {
                    i += 1;
                    continue;
                }
            };
            results.push(CryptoAnnotation {
                algorithm: algorithm.to_string(),
                start_loc: (block_id, start),
                end_loc: (block_id, i),
            });
            i += 1;
        }
    }

    results
}

fn detect_riscv_zk_sequences(
    block_id: BlockId,
    insns: &[unlace_ir::IrInsn],
) -> Vec<CryptoAnnotation> {
    let mut results = Vec::new();
    let mut i = 0;

    while i < insns.len() {
        let algorithm = if is_callother_tag(&insns[i], TAG_RISCV_SHA256SIG0)
            || is_callother_tag(&insns[i], TAG_RISCV_SHA256SIG1)
            || is_callother_tag(&insns[i], TAG_RISCV_SHA256SUM0)
            || is_callother_tag(&insns[i], TAG_RISCV_SHA256SUM1)
        {
            let mut saw_sig = false;
            let mut saw_sum = false;
            let start = i;
            while i < insns.len() {
                if is_callother_tag(&insns[i], TAG_RISCV_SHA256SIG0)
                    || is_callother_tag(&insns[i], TAG_RISCV_SHA256SIG1)
                {
                    saw_sig = true;
                    i += 1;
                } else if is_callother_tag(&insns[i], TAG_RISCV_SHA256SUM0)
                    || is_callother_tag(&insns[i], TAG_RISCV_SHA256SUM1)
                {
                    saw_sum = true;
                    i += 1;
                } else {
                    break;
                }
            }
            if saw_sig && saw_sum {
                results.push(CryptoAnnotation {
                    algorithm: "SHA-256".to_string(),
                    start_loc: (block_id, start),
                    end_loc: (block_id, i - 1),
                });
            }
            None
        } else if is_callother_tag(&insns[i], TAG_RISCV_SHA512SIG0)
            || is_callother_tag(&insns[i], TAG_RISCV_SHA512SIG1)
            || is_callother_tag(&insns[i], TAG_RISCV_SHA512SUM0)
            || is_callother_tag(&insns[i], TAG_RISCV_SHA512SUM1)
        {
            let mut saw_sig = false;
            let mut saw_sum = false;
            let start = i;
            while i < insns.len() {
                if is_callother_tag(&insns[i], TAG_RISCV_SHA512SIG0)
                    || is_callother_tag(&insns[i], TAG_RISCV_SHA512SIG1)
                {
                    saw_sig = true;
                    i += 1;
                } else if is_callother_tag(&insns[i], TAG_RISCV_SHA512SUM0)
                    || is_callother_tag(&insns[i], TAG_RISCV_SHA512SUM1)
                {
                    saw_sum = true;
                    i += 1;
                } else {
                    break;
                }
            }
            if saw_sig && saw_sum {
                results.push(CryptoAnnotation {
                    algorithm: "SHA-512".to_string(),
                    start_loc: (block_id, start),
                    end_loc: (block_id, i - 1),
                });
            }
            None
        } else if is_callother_tag(&insns[i], TAG_RISCV_AES32ESI)
            || is_callother_tag(&insns[i], TAG_RISCV_AES32ESMI)
            || is_callother_tag(&insns[i], TAG_RISCV_AES32DSI)
            || is_callother_tag(&insns[i], TAG_RISCV_AES32DSMI)
        {
            let start = i;
            let mut count = 0usize;
            while i < insns.len()
                && (is_callother_tag(&insns[i], TAG_RISCV_AES32ESI)
                    || is_callother_tag(&insns[i], TAG_RISCV_AES32ESMI)
                    || is_callother_tag(&insns[i], TAG_RISCV_AES32DSI)
                    || is_callother_tag(&insns[i], TAG_RISCV_AES32DSMI))
            {
                count += 1;
                i += 1;
            }
            if count >= 4 {
                results.push(CryptoAnnotation {
                    algorithm: "AES-128".to_string(),
                    start_loc: (block_id, start),
                    end_loc: (block_id, i - 1),
                });
            }
            None
        } else {
            Some(())
        };

        if algorithm.is_some() {
            i += 1;
        }
    }

    results
}

#[cfg(test)]
mod tests {
    use super::*;
    use smallvec::smallvec;
    use unlace_ir::ssa::build_ssa;
    use unlace_ir::{BasicBlock, BlockId, Function, IrInsn, IrOp, SpaceId, Varnode};

    /// Helper: build a Callother(tag, dst, src) instruction.
    fn make_aes_insn(tag: u64, idx: u8) -> IrInsn {
        let tag_vn = Varnode::constant(tag, 8);
        let src0 = Varnode::reg(idx as u64 * 16, 16);
        let src1 = Varnode::reg(256 + idx as u64 * 16, 16);
        let dst = Varnode::reg(idx as u64 * 16, 16);
        IrInsn::with_output(IrOp::Callother, dst, smallvec![tag_vn, src0, src1], 0x1000 + idx as u64)
    }

    fn build_func_with_insns(insns: Vec<IrInsn>) -> SsaFunction {
        let mut func = Function::new("test_crypto", BlockId(0), 0x1000);
        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns = insns;
        func.insert_block(bb);
        build_ssa(func)
    }

    fn make_tagged_insn(tag: u64, idx: u8, width: u8) -> IrInsn {
        let tag_vn = Varnode::constant(tag, 8);
        let src0 = Varnode::reg(idx as u64 * width as u64, width);
        let src1 = Varnode::reg(256 + idx as u64 * width as u64, width);
        let dst = Varnode {
            space: SpaceId::Register,
            offset: 512 + idx as u64 * width as u64,
            size: width,
        };
        IrInsn::with_output(
            IrOp::Callother,
            dst,
            smallvec![tag_vn, src0, src1],
            0x2000 + idx as u64,
        )
    }

    #[test]
    fn detect_aes128_sequence() {
        // 10 AESENC + 1 AESENCLAST = AES-128
        let mut insns: Vec<IrInsn> = (0..10)
            .map(|i| make_aes_insn(TAG_AESENC, i))
            .collect();
        insns.push(make_aes_insn(TAG_AESENCLAST, 10));

        let mut ssa = build_func_with_insns(insns);
        let pass = CryptoIdiomPass;
        let changed = pass.run(&mut ssa).unwrap();

        assert!(changed);
        assert_eq!(ssa.crypto_annotations.len(), 1);
        assert_eq!(ssa.crypto_annotations[0].algorithm, "AES-128");
        assert_eq!(ssa.crypto_annotations[0].start_loc, (BlockId(0), 0));
        assert_eq!(ssa.crypto_annotations[0].end_loc, (BlockId(0), 10));
    }

    #[test]
    fn detect_aes256_sequence() {
        // 14 AESENC + 1 AESENCLAST = AES-256
        let mut insns: Vec<IrInsn> = (0..14)
            .map(|i| make_aes_insn(TAG_AESENC, i))
            .collect();
        insns.push(make_aes_insn(TAG_AESENCLAST, 14));

        let mut ssa = build_func_with_insns(insns);
        let pass = CryptoIdiomPass;
        let changed = pass.run(&mut ssa).unwrap();

        assert!(changed);
        assert_eq!(ssa.crypto_annotations.len(), 1);
        assert_eq!(ssa.crypto_annotations[0].algorithm, "AES-256");
    }

    #[test]
    fn no_match_wrong_count() {
        // 9 AESENC + 1 AESENCLAST — not a standard AES key length
        let mut insns: Vec<IrInsn> = (0..9)
            .map(|i| make_aes_insn(TAG_AESENC, i))
            .collect();
        insns.push(make_aes_insn(TAG_AESENCLAST, 9));

        let mut ssa = build_func_with_insns(insns);
        let pass = CryptoIdiomPass;
        let changed = pass.run(&mut ssa).unwrap();

        assert!(!changed);
        assert!(ssa.crypto_annotations.is_empty());
    }

    #[test]
    fn no_match_missing_aesenclast() {
        // 10 AESENC but no AESENCLAST
        let insns: Vec<IrInsn> = (0..10)
            .map(|i| make_aes_insn(TAG_AESENC, i))
            .collect();

        let mut ssa = build_func_with_insns(insns);
        let pass = CryptoIdiomPass;
        let changed = pass.run(&mut ssa).unwrap();

        assert!(!changed);
        assert!(ssa.crypto_annotations.is_empty());
    }

    #[test]
    fn detect_riscv_sha256_sequence() {
        let insns = vec![
            make_tagged_insn(TAG_RISCV_SHA256SIG0, 0, 4),
            make_tagged_insn(TAG_RISCV_SHA256SIG1, 1, 4),
            make_tagged_insn(TAG_RISCV_SHA256SUM0, 2, 4),
            make_tagged_insn(TAG_RISCV_SHA256SUM1, 3, 4),
        ];

        let mut ssa = build_func_with_insns(insns);
        let pass = CryptoIdiomPass;
        let changed = pass.run(&mut ssa).unwrap();

        assert!(changed);
        assert_eq!(ssa.crypto_annotations.len(), 1);
        assert_eq!(ssa.crypto_annotations[0].algorithm, "SHA-256");
        assert_eq!(ssa.crypto_annotations[0].start_loc, (BlockId(0), 0));
        assert_eq!(ssa.crypto_annotations[0].end_loc, (BlockId(0), 3));
    }

    #[test]
    fn detect_riscv_sha512_sequence() {
        let insns = vec![
            make_tagged_insn(TAG_RISCV_SHA512SIG0, 0, 8),
            make_tagged_insn(TAG_RISCV_SHA512SUM0, 1, 8),
            make_tagged_insn(TAG_RISCV_SHA512SIG1, 2, 8),
            make_tagged_insn(TAG_RISCV_SHA512SUM1, 3, 8),
        ];

        let mut ssa = build_func_with_insns(insns);
        let pass = CryptoIdiomPass;
        let changed = pass.run(&mut ssa).unwrap();

        assert!(changed);
        assert_eq!(ssa.crypto_annotations.len(), 1);
        assert_eq!(ssa.crypto_annotations[0].algorithm, "SHA-512");
    }

    #[test]
    fn detect_riscv_aes32_sequence() {
        let insns = vec![
            make_tagged_insn(TAG_RISCV_AES32ESI, 0, 4),
            make_tagged_insn(TAG_RISCV_AES32ESMI, 1, 4),
            make_tagged_insn(TAG_RISCV_AES32DSI, 2, 4),
            make_tagged_insn(TAG_RISCV_AES32DSMI, 3, 4),
        ];

        let mut ssa = build_func_with_insns(insns);
        let pass = CryptoIdiomPass;
        let changed = pass.run(&mut ssa).unwrap();

        assert!(changed);
        assert_eq!(ssa.crypto_annotations.len(), 1);
        assert_eq!(ssa.crypto_annotations[0].algorithm, "AES-128");
    }

    #[test]
    fn no_match_riscv_sha_without_both_families() {
        let insns = vec![
            make_tagged_insn(TAG_RISCV_SHA256SIG0, 0, 4),
            make_tagged_insn(TAG_RISCV_SHA256SIG1, 1, 4),
        ];

        let mut ssa = build_func_with_insns(insns);
        let pass = CryptoIdiomPass;
        let changed = pass.run(&mut ssa).unwrap();

        assert!(!changed);
        assert!(ssa.crypto_annotations.is_empty());
    }
}
