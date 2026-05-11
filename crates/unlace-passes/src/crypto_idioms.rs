//! Crypto-idiom sequence detection pass.
//!
//! Recognises well-known instruction sequences emitted by AES-NI and
//! SHA-NI lifts, annotating the function with the algorithm:
//!
//! - **AES-128**: 10× `AESENC` followed by 1× `AESENCLAST`
//! - **AES-192**: 12× `AESENC` followed by 1× `AESENCLAST`
//! - **AES-256**: 14× `AESENC` followed by 1× `AESENCLAST`

use unlace_ir::ssa::{CryptoAnnotation, SsaFunction};
use unlace_ir::{BlockId, IrOp, SpaceId};

use crate::pass::{Pass, PassError};

/// Callother tag for AESENC (mirrored from `unlace-lift-x86`).
const TAG_AESENC: u64 = 0x1E0;
/// Callother tag for AESENCLAST.
const TAG_AESENCLAST: u64 = 0x1E1;

/// Detect crypto sequences and annotate the function.
pub struct CryptoIdiomPass;

impl Pass for CryptoIdiomPass {
    fn name(&self) -> &str {
        "crypto-idioms"
    }

    fn run(&self, func: &mut SsaFunction) -> Result<bool, PassError> {
        let mut changed = false;

        for (&block_id, block) in &func.function.blocks {
            let annotations = detect_aes_sequences(block_id, &block.insns);
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

#[cfg(test)]
mod tests {
    use super::*;
    use smallvec::smallvec;
    use unlace_ir::ssa::build_ssa;
    use unlace_ir::{BasicBlock, BlockId, Function, IrInsn, IrOp, Varnode};

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
}
