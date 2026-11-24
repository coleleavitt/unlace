//! (kuna `orchainbool`) The short-circuit protection of `returndup` (`orchain.rs`, DIV-69)
//! guards the operand chain of a boolean expression: `return a || (b && c);` compiles to tests
//! that share a `return 0`/`return 1` block. A shared return of any other constant
//! (`return -1`) is the exit of guard clauses (`if (!p) return -1; if (p->x != K) return -1;`),
//! which the source wrote one by one. With the option on, such a block does not stop
//! `returndup` from splitting the function's shared returns.

use unlace_num::opcodes::OpCode;

use crate::context::{BlockId, VarnodeId};
use crate::funcdata::Funcdata;

crate::kuna_flag!(
    /// (kuna `orchainbool`) Protect only shared returns of `0`/`1` from `returndup`.
    OrchainBool,
    "orchainbool",
    "short-circuit protection limited to boolean returns",
    unset: false,
    shipped: false
);

/// Depth bound on the phi/copy walk.
const MAX_DEPTH: u32 = 8;

/// Does the RETURN in block `b` return only constants, at least one of them neither 0 nor 1?
pub fn returns_nonbool_const(data: &Funcdata, b: BlockId) -> bool {
    let Some(ret) = data.bb_ops(b).into_iter().find(|&op| {
        data.obank()
            .get(op)
            .is_some_and(|o| o.code() == OpCode::CPUI_RETURN)
    }) else {
        return false;
    };
    let Some(value) = data.obank().get(ret).and_then(|o| o.get_in(1)) else {
        return false;
    };
    let mut consts = Vec::new();
    collect(data, value, MAX_DEPTH, &mut consts) && consts.iter().any(|&c| c > 1)
}

/// Push every constant `vn` resolves to through COPY and MULTIEQUAL; false when any path
/// reaches a non-constant.
fn collect(data: &Funcdata, vn: VarnodeId, depth: u32, out: &mut Vec<u64>) -> bool {
    if depth == 0 {
        return false;
    }
    let Some(v) = data.vbank().get(vn) else {
        return false;
    };
    if v.is_constant() {
        out.push(v.get_offset());
        return true;
    }
    if v.is_free() {
        return false;
    }
    let Some(d) = v.get_def().and_then(|d| data.obank().get(d)) else {
        return false;
    };
    match d.code() {
        OpCode::CPUI_COPY => d
            .get_in(0)
            .is_some_and(|i| collect(data, i, depth - 1, out)),
        OpCode::CPUI_MULTIEQUAL => (0..d.num_input()).all(|i| {
            d.get_in(i)
                .is_some_and(|iv| collect(data, iv, depth - 1, out))
        }),
        _ => false,
    }
}
