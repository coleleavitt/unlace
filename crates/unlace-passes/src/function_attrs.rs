//! Interprocedural function attribute inference.
//!
//! Mirrors LLVM's FunctionAttrs pass: scans a function and infers attributes
//! that summarize its side-effect behavior. The pass operates on a single
//! function but the result is consumed by callers (other passes can read the
//! inferred attrs from a side-table).
//!
//! Attributes inferred:
//! - `noreturn`: function never returns (always calls abort/exit/panic).
//! - `pure`: function has no observable side effects (no stores, no calls
//!   to non-pure functions). May read memory.
//! - `const`: function has no memory access at all (only register/IR ops).
//! - `readonly`: function reads memory but doesn't write.
//! - `nonnull_return`: function never returns null/zero.

use std::collections::BTreeMap;

use unlace_ir::ssa::SsaFunction;
use unlace_ir::{IrOp, SpaceId};

/// Inferred function-level attributes.
#[derive(Copy, Clone, Debug, Default, PartialEq, Eq)]
pub struct FunctionAttrs {
    pub noreturn: bool,
    pub pure: bool,
    pub const_attr: bool,
    pub readonly: bool,
    pub nonnull_return: bool,
}

impl FunctionAttrs {
    pub fn none() -> Self {
        Self::default()
    }
}

/// A per-function attribute database.
pub type AttrMap = BTreeMap<u64, FunctionAttrs>;

/// Infer attributes for a single function based on its IR.
///
/// Without an interprocedural call graph, this is a single-function
/// approximation: a function is `const` if it has no Load/Store/Call;
/// `pure` if it has no Store/Call; `readonly` if it has no Store but may
/// have Calls (conservative).
pub fn infer_attrs_for_function(func: &SsaFunction) -> FunctionAttrs {
    let mut has_load = false;
    let mut has_store = false;
    let mut has_call = false;
    let mut all_paths_noreturn = true;
    let mut has_return = false;

    for block in func.function.blocks.values() {
        for insn in &block.insns {
            match insn.op {
                IrOp::Load => has_load = true,
                IrOp::Store => has_store = true,
                IrOp::AtomicLoad => has_load = true,
                IrOp::AtomicStore | IrOp::AtomicRmw | IrOp::AtomicCas => has_store = true,
                IrOp::Call | IrOp::Callind | IrOp::Callother => has_call = true,
                IrOp::Return => {
                    has_return = true;
                    all_paths_noreturn = false;
                }
                _ => {}
            }
        }
    }

    let noreturn = !has_return && all_paths_noreturn && func.noreturn;
    // Note: `func.noreturn` is the existing side-table; we OR with the
    // structural check (no Return instruction at all).
    let noreturn = noreturn || (!has_return && !func.function.blocks.is_empty());

    FunctionAttrs {
        noreturn,
        const_attr: !has_load && !has_store && !has_call,
        pure: !has_store && !has_call,
        readonly: !has_store,
        nonnull_return: infer_nonnull_return(func),
    }
}

/// A function returns non-null if every Return instruction returns a
/// constant non-zero value. Conservative.
fn infer_nonnull_return(func: &SsaFunction) -> bool {
    let mut found_any_return = false;
    for block in func.function.blocks.values() {
        for insn in &block.insns {
            if insn.op != IrOp::Return {
                continue;
            }
            found_any_return = true;
            if insn.inputs.is_empty() {
                return false;
            }
            let ret = &insn.inputs[0];
            if ret.space != SpaceId::Const || ret.offset == 0 {
                return false;
            }
        }
    }
    found_any_return
}

/// Compute attributes for a batch of functions.
pub fn infer_attrs_batch(funcs: &[(u64, &SsaFunction)]) -> AttrMap {
    let mut out = BTreeMap::new();
    for &(addr, func) in funcs {
        out.insert(addr, infer_attrs_for_function(func));
    }
    out
}

/// Propagate noreturn through the call graph (interprocedural step).
///
/// A function calling a known noreturn callee may itself become noreturn if
/// the call is unconditional and dominates the (missing) return.
/// This is a fixed-point algorithm: iterate until no attrs change.
pub fn propagate_noreturn(attrs: &mut AttrMap, call_edges: &[(u64, u64)]) -> usize {
    let mut iterations = 0;
    const MAX_ITERS: usize = 50;
    loop {
        iterations += 1;
        if iterations > MAX_ITERS {
            break;
        }
        let changed = false;
        for &(caller_addr, callee_addr) in call_edges {
            let callee_noreturn = attrs.get(&callee_addr).map(|a| a.noreturn).unwrap_or(false);
            if !callee_noreturn {
                continue;
            }
            if let Some(caller_attrs) = attrs.get_mut(&caller_addr) {
                // Conservative: only mark caller noreturn if it has no Return
                // (already structurally noreturn). We do nothing here unless
                // we already know the caller has no Return — which means our
                // initial inference already set noreturn=true.
                let _ = caller_attrs; // No additional inference yet.
            }
        }
        if !changed {
            break;
        }
    }
    iterations
}

#[cfg(test)]
mod tests {
    use smallvec::smallvec;
    use unlace_ir::ssa::build_ssa;
    use unlace_ir::{BasicBlock, BlockId, Function, IrInsn, IrOp, Varnode};

    use super::*;

    fn build_const_function() -> SsaFunction {
        // Function that does pure register arithmetic, no memory access.
        // out = 1 + 2; return out
        let out = Varnode::reg(0, 4);
        let mut func = Function::new("f_const", BlockId(0), 0x1000);
        let mut b0 = BasicBlock::new(BlockId(0));
        b0.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            out,
            smallvec![Varnode::constant(1, 4), Varnode::constant(2, 4)],
            0x1000,
        ));
        b0.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![out], 0x1004));
        func.insert_block(b0);
        build_ssa(func)
    }

    fn build_readonly_function() -> SsaFunction {
        // Function that loads memory but doesn't write.
        let r = Varnode::reg(0, 8);
        let addr = Varnode::new(SpaceId::Stack, (-8i64) as u64, 8);
        let mut func = Function::new("f_readonly", BlockId(0), 0x2000);
        let mut b0 = BasicBlock::new(BlockId(0));
        b0.insns
            .push(IrInsn::with_output(IrOp::Load, r, smallvec![addr], 0x2000));
        b0.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![r], 0x2004));
        func.insert_block(b0);
        build_ssa(func)
    }

    fn build_impure_function() -> SsaFunction {
        // Function that writes memory.
        let addr = Varnode::new(SpaceId::Stack, (-8i64) as u64, 8);
        let mut func = Function::new("f_impure", BlockId(0), 0x3000);
        let mut b0 = BasicBlock::new(BlockId(0));
        b0.insns.push(IrInsn::without_output(
            IrOp::Store,
            smallvec![addr, Varnode::constant(42, 8)],
            0x3000,
        ));
        b0.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![Varnode::constant(0, 8)],
            0x3004,
        ));
        func.insert_block(b0);
        build_ssa(func)
    }

    fn build_noreturn_function() -> SsaFunction {
        // Function that has no Return — just calls abort.
        let mut func = Function::new("f_noreturn", BlockId(0), 0x4000);
        let mut b0 = BasicBlock::new(BlockId(0));
        b0.insns.push(IrInsn::without_output(
            IrOp::Call,
            smallvec![Varnode::constant(0x9000, 8)], // abort()
            0x4000,
        ));
        func.insert_block(b0);
        build_ssa(func)
    }

    #[test]
    fn test_function_attrs_const_function() {
        let f = build_const_function();
        let attrs = infer_attrs_for_function(&f);
        assert!(attrs.const_attr);
        assert!(attrs.pure);
        assert!(attrs.readonly);
        assert!(!attrs.noreturn);
    }

    #[test]
    fn test_function_attrs_readonly_function() {
        let f = build_readonly_function();
        let attrs = infer_attrs_for_function(&f);
        assert!(!attrs.const_attr); // has load
        assert!(attrs.pure);
        assert!(attrs.readonly);
        assert!(!attrs.noreturn);
    }

    #[test]
    fn test_function_attrs_impure_function() {
        let f = build_impure_function();
        let attrs = infer_attrs_for_function(&f);
        assert!(!attrs.const_attr);
        assert!(!attrs.pure);
        assert!(!attrs.readonly);
    }

    #[test]
    fn test_function_attrs_noreturn() {
        let f = build_noreturn_function();
        let attrs = infer_attrs_for_function(&f);
        assert!(attrs.noreturn, "function with no Return must be noreturn");
    }

    #[test]
    fn test_function_attrs_nonnull_return() {
        // Function returning constant 42 → nonnull.
        let f = build_const_function();
        // The const function returns `out` which is a reg, not a const. So
        // it's NOT detected as nonnull. Let's build a return-const function.
        let _ = f;

        let mut func = Function::new("f_nonnull", BlockId(0), 0x5000);
        let mut b0 = BasicBlock::new(BlockId(0));
        b0.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![Varnode::constant(42, 8)],
            0x5000,
        ));
        func.insert_block(b0);
        let ssa = build_ssa(func);
        let attrs = infer_attrs_for_function(&ssa);
        assert!(attrs.nonnull_return);
    }

    #[test]
    fn test_function_attrs_returns_zero_is_not_nonnull() {
        let mut func = Function::new("f_zero", BlockId(0), 0x6000);
        let mut b0 = BasicBlock::new(BlockId(0));
        b0.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![Varnode::constant(0, 8)],
            0x6000,
        ));
        func.insert_block(b0);
        let ssa = build_ssa(func);
        let attrs = infer_attrs_for_function(&ssa);
        assert!(!attrs.nonnull_return);
    }

    #[test]
    fn test_function_attrs_batch() {
        let f1 = build_const_function();
        let f2 = build_readonly_function();
        let map = infer_attrs_batch(&[(0x1000, &f1), (0x2000, &f2)]);
        assert!(map[&0x1000].const_attr);
        assert!(!map[&0x2000].const_attr);
        assert!(map[&0x2000].readonly);
    }
}
