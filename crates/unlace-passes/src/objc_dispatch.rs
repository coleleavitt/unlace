//! ObjC `objc_msgSend` dispatch recognition.
//!
//! On ARM64, ObjC method calls go through `objc_msgSend(self, selector, ...)`.
//! This pass detects `CALL` instructions targeting known `objc_msgSend` stub
//! addresses and annotates them with `objc_msgSend(self, selector)`.

use std::collections::BTreeMap;

use unlace_ir::IrOp;
use unlace_ir::ssa::SsaFunction;

use crate::pass::{Pass, PassError};

const OBJC_MSGSEND_NAMES: &[&str] = &[
    "_objc_msgSend",
    "objc_msgSend",
    "_objc_msgSendSuper",
    "objc_msgSendSuper",
    "_objc_msgSendSuper2",
    "objc_msgSendSuper2",
    "_objc_msgSend_stret",
    "objc_msgSend_stret",
];

pub struct ObjcDispatchPass {
    pub msgsend_addrs: BTreeMap<u64, String>,
}

impl ObjcDispatchPass {
    pub fn new() -> Self {
        Self {
            msgsend_addrs: BTreeMap::new(),
        }
    }

    pub fn from_plt_symbols(plt_symbols: &BTreeMap<u64, String>) -> Self {
        let mut msgsend_addrs = BTreeMap::new();
        for (&addr, name) in plt_symbols {
            if OBJC_MSGSEND_NAMES.iter().any(|&n| name.contains(n)) {
                msgsend_addrs.insert(addr, name.clone());
            }
        }
        Self { msgsend_addrs }
    }
}

impl Pass for ObjcDispatchPass {
    fn name(&self) -> &str {
        "objc-dispatch"
    }

    fn run(&self, func: &mut SsaFunction) -> Result<bool, PassError> {
        if self.msgsend_addrs.is_empty() {
            return Ok(false);
        }

        let mut found = BTreeMap::new();

        for (&bid, block) in &func.function.blocks {
            for (i, insn) in block.insns.iter().enumerate() {
                if insn.op != IrOp::Call {
                    continue;
                }

                if insn.inputs.is_empty() {
                    continue;
                }

                let target = insn.inputs[0];
                if target.space != unlace_ir::SpaceId::Const {
                    continue;
                }

                let target_addr = target.offset;
                if let Some(variant) = self.msgsend_addrs.get(&target_addr) {
                    let annotation = format!("// {variant}(self, selector)");
                    found.insert((bid, i), annotation);
                }
            }
        }

        if found.is_empty() {
            return Ok(false);
        }

        func.objc_dispatch_calls.extend(found);
        Ok(true)
    }
}

#[cfg(test)]
mod tests {
    use smallvec::smallvec;

    use unlace_ir::ssa::build_ssa;
    use unlace_ir::{BasicBlock, BlockId, Function, IrInsn, IrOp, Varnode};

    use super::*;

    fn make_single_block_ssa(insns: Vec<IrInsn>) -> SsaFunction {
        let mut func = Function::new("test", BlockId(0), 0x1000);
        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns = insns;
        bb.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![Varnode::constant(0, 8)],
            0x1FFF,
        ));
        func.insert_block(bb);
        build_ssa(func)
    }

    #[test]
    fn test_detect_objc_msgsend() {
        let msgsend_addr: u64 = 0x2000;

        let insns = vec![IrInsn::without_output(
            IrOp::Call,
            smallvec![Varnode::constant(msgsend_addr, 8)],
            0x1000,
        )];

        let mut ssa = make_single_block_ssa(insns);

        let mut addrs = BTreeMap::new();
        addrs.insert(msgsend_addr, "objc_msgSend".to_string());
        let pass = ObjcDispatchPass {
            msgsend_addrs: addrs,
        };

        let changed = pass.run(&mut ssa).expect("pass succeeds");
        assert!(changed, "should detect objc_msgSend call");

        let key = (BlockId(0), 0);
        let annotation = ssa
            .objc_dispatch_calls
            .get(&key)
            .expect("annotation recorded");
        assert!(
            annotation.contains("objc_msgSend"),
            "annotation should mention objc_msgSend, got: {annotation}"
        );
    }

    #[test]
    fn test_no_msgsend_no_change() {
        let insns = vec![IrInsn::without_output(
            IrOp::Call,
            smallvec![Varnode::constant(0x3000, 8)],
            0x1000,
        )];

        let mut ssa = make_single_block_ssa(insns);
        let pass = ObjcDispatchPass::new();

        let changed = pass.run(&mut ssa).expect("pass succeeds");
        assert!(!changed);
        assert!(ssa.objc_dispatch_calls.is_empty());
    }

    #[test]
    fn test_from_plt_symbols() {
        let mut plt = BTreeMap::new();
        plt.insert(0x5000, "_objc_msgSend".to_string());
        plt.insert(0x5010, "printf".to_string());
        plt.insert(0x5020, "_objc_msgSendSuper2".to_string());

        let pass = ObjcDispatchPass::from_plt_symbols(&plt);
        assert_eq!(pass.msgsend_addrs.len(), 2);
        assert!(pass.msgsend_addrs.contains_key(&0x5000));
        assert!(pass.msgsend_addrs.contains_key(&0x5020));
    }

    #[test]
    fn test_callind_not_matched() {
        let msgsend_addr: u64 = 0x2000;

        let insns = vec![IrInsn::without_output(
            IrOp::Callind,
            smallvec![Varnode::constant(msgsend_addr, 8)],
            0x1000,
        )];

        let mut ssa = make_single_block_ssa(insns);

        let mut addrs = BTreeMap::new();
        addrs.insert(msgsend_addr, "objc_msgSend".to_string());
        let pass = ObjcDispatchPass {
            msgsend_addrs: addrs,
        };

        let changed = pass.run(&mut ssa).expect("pass succeeds");
        assert!(!changed, "CALLIND should not be matched (only CALL)");
    }
}
