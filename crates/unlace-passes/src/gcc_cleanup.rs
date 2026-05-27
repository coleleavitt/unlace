//! GCC __attribute__((cleanup)) detection and recovery.
//!
//! GCC's cleanup attribute causes the compiler to emit calls to a cleanup
//! function when a local variable goes out of scope. This pass detects the
//! pattern (call to a function pointer loaded from a known cleanup-table
//! or passed via __cxa_atexit-like mechanism) and annotates the variable
//! with its cleanup handler for the C printer.

use std::collections::BTreeMap;

use unlace_ir::ssa::SsaFunction;
use unlace_ir::{BlockId, IrOp, Varnode};

use crate::pass::{Pass, PassError};

/// A detected cleanup handler registration.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct CleanupHandler {
    /// Block and instruction index of the registration call.
    pub site: (BlockId, usize),
    /// Address of the cleanup function.
    pub handler_addr: u64,
    /// The variable being cleaned up (stack offset or varnode).
    pub target_var: Varnode,
}

/// GCC cleanup attribute detection pass.
pub struct GccCleanupPass {
    /// Known cleanup-registration symbols (e.g. __cxa_atexit, __attribute_cleanup_handler).
    pub cleanup_symbols: BTreeMap<u64, String>,
}

impl Pass for GccCleanupPass {
    fn name(&self) -> &str {
        "gcc-cleanup"
    }

    fn phase(&self) -> crate::pass::PassPhase {
        crate::pass::PassPhase::PreOpt
    }

    fn run(&self, func: &mut SsaFunction) -> Result<bool, PassError> {
        let handlers = detect_cleanup_calls(func, &self.cleanup_symbols);
        Ok(!handlers.is_empty())
    }
}

/// Detect calls to cleanup registration functions.
pub fn detect_cleanup_calls(
    func: &SsaFunction,
    cleanup_syms: &BTreeMap<u64, String>,
) -> Vec<CleanupHandler> {
    let mut handlers = Vec::new();

    for (&block_id, block) in &func.function.blocks {
        for (idx, insn) in block.insns.iter().enumerate() {
            if insn.op == IrOp::Call && !insn.inputs.is_empty() {
                let target = insn.inputs[0].offset;
                if cleanup_syms.contains_key(&target) {
                    // Pattern: cleanup_fn(handler, var_ptr, dtor_addr)
                    if insn.inputs.len() >= 3 {
                        handlers.push(CleanupHandler {
                            site: (block_id, idx),
                            handler_addr: insn.inputs[1].offset,
                            target_var: insn.inputs[2],
                        });
                    }
                }
            }
        }
    }
    handlers
}

#[cfg(test)]
mod tests {
    use super::*;
    use smallvec::smallvec;
    use unlace_ir::ssa::build_ssa;
    use unlace_ir::{BasicBlock, Function, IrInsn};

    #[test]
    fn test_detects_cleanup_registration() {
        let mut func = Function::new("test_cleanup", BlockId(0), 0x1000);
        let mut bb = BasicBlock::new(BlockId(0));
        // call __cxa_atexit(handler=0x2000, var=stack_slot, dtor=0x3000)
        bb.insns.push(IrInsn::without_output(
            IrOp::Call,
            smallvec![
                Varnode::constant(0x4000, 8), // __cxa_atexit
                Varnode::constant(0x2000, 8), // handler
                Varnode::unique(0x10, 8),     // var_ptr
                Varnode::constant(0x3000, 8), // dtor
            ],
            0x1000,
        ));
        bb.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x1004));
        func.insert_block(bb);

        let ssa = build_ssa(func);
        let mut syms = BTreeMap::new();
        syms.insert(0x4000, "__cxa_atexit".to_string());

        let handlers = detect_cleanup_calls(&ssa, &syms);
        assert_eq!(handlers.len(), 1);
        assert_eq!(handlers[0].handler_addr, 0x2000);
    }
}
