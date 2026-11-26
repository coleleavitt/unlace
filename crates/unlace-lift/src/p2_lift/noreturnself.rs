//! (unlace `noreturnself`) A function whose every path ends in a no-return call or
//! halt is itself no-return: its own prototype carries the flag and its header says so.
//!
//! Before this, the verdict reached only the callers. Each call to a no-return callee
//! carries `Subroutine does not return` at the call site, but the function that never
//! returns printed as a plain `void f(void)` with `abort(); // no-return` as its last
//! statement. The flow generated for the function decides it: no live return that is
//! not a halt, no unresolved indirect transfer, and at least one live halt, every one of
//! them a `noreturn` halt inside the block of the call that never returns. Any other
//! halt (a decode failure, a truncation, or the `funcboundflow` cut where the
//! fall-through reaches the next function's entry, a halt that opens a block of its own)
//! leaves the function alone, since its tail is not known to be a call that never returns.

use crate::architecture::Architecture;
use crate::funcdata::Funcdata;
use crate::op::pcodeop_flags;
use unlace_num::opcodes::OpCode;

/// Mark `data`'s function no-return when its flow never returns (see the module doc).
pub fn mark_self_no_return(arch: &Architecture, data: &mut Funcdata) {
    if !arch
        .unlace_options
        .get::<crate::analysisgates::Noreturnself>()
        .0
    {
        return;
    }
    if data.get_func_proto().is_no_return() || data.get_first_return_op().is_some() {
        return;
    }
    let halts = {
        let obank = data.obank();
        let live = |opc: OpCode| {
            obank
                .iter_code(opc)
                .any(|id| obank.get(id).is_some_and(|op| !op.is_dead()))
        };
        if live(OpCode::CPUI_BRANCHIND) || live(OpCode::CPUI_CALLIND) {
            return;
        }
        let mut halts = 0usize;
        for id in obank.iter_code(OpCode::CPUI_RETURN) {
            let Some(op) = obank.get(id) else { continue };
            if op.is_dead() || op.get_halt_type() == 0 {
                continue;
            }
            if op.get_halt_type() != pcodeop_flags::noreturn {
                return;
            }
            let opens_block = op
                .get_parent()
                .is_some_and(|bl| data.bb_ops(bl).first() == Some(&id));
            if opens_block {
                return;
            }
            halts += 1;
        }
        halts
    };
    if halts == 0 {
        return;
    }
    data.get_func_proto_mut().set_no_return(true);
    data.warning_header("Subroutine does not return");
}
