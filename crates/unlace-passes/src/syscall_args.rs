//! Argument lists of lifted system calls.
//!
//! A lifter cannot know how many arguments a system call takes, so it emits
//! every argument register its convention defines (see
//! [`unlace_ir::syscall`]). Reading the unused ones would turn them into
//! live-in values and invent parameters for the enclosing function. This
//! pass runs on the pre-SSA `Function` and keeps the arguments up to the last
//! one the same block writes before the call, the registers a caller sets up
//! right before `svc`/`sc`. A call in between clobbers the argument
//! registers, so writes before it do not count.

use unlace_ir::syscall::{FIRST_ARG_INPUT, SyscallConvention};
use unlace_ir::{Function, IrOp, SpaceId, Varnode};

/// Drop the trailing system-call arguments no earlier write in the block
/// sets. Returns the number of system calls whose argument list shrank.
pub fn trim_syscall_args(func: &mut Function) -> usize {
    let mut trimmed = 0;
    for block in func.blocks.values_mut() {
        let mut written: Vec<Varnode> = Vec::new();
        for insn in &mut block.insns {
            if matches!(insn.op, IrOp::Call | IrOp::Callind) {
                written.clear();
            } else if SyscallConvention::of(insn).is_some() {
                let args = insn.inputs.len().saturating_sub(FIRST_ARG_INPUT);
                let keep = (0..args)
                    .rev()
                    .find(|&i| {
                        let arg = insn.inputs[FIRST_ARG_INPUT + i];
                        written.iter().any(|w| overlaps(*w, arg))
                    })
                    .map_or(0, |i| i + 1);
                if keep < args {
                    insn.inputs.truncate(FIRST_ARG_INPUT + keep);
                    trimmed += 1;
                }
            }
            if let Some(out) = insn.output.filter(|vn| vn.space == SpaceId::Register) {
                written.push(out);
            }
        }
    }
    trimmed
}

fn overlaps(a: Varnode, b: Varnode) -> bool {
    a.space == b.space
        && a.offset < b.offset + u64::from(b.size)
        && b.offset < a.offset + u64::from(a.size)
}

#[cfg(test)]
mod tests {
    use smallvec::smallvec;
    use unlace_ir::syscall::{NUMBER_INPUT, SyscallConvention};
    use unlace_ir::{BasicBlock, BlockId, IrInsn};

    use super::*;

    fn x(n: u64) -> Varnode {
        Varnode::reg(n * 8, 8)
    }

    fn set(reg: Varnode, value: u64) -> IrInsn {
        IrInsn::with_output(IrOp::Copy, reg, smallvec![Varnode::constant(value, 8)], 0)
    }

    fn linux_svc() -> IrInsn {
        SyscallConvention::LinuxEabi.insn(x(8), (0..6).map(x), x(0), 0)
    }

    fn function(insns: Vec<IrInsn>) -> Function {
        let mut func = Function::new("f", BlockId(0), 0);
        let mut block = BasicBlock::new(BlockId(0));
        block.insns = insns;
        func.blocks.insert(BlockId(0), block);
        func
    }

    fn syscall_args(func: &Function) -> Vec<Varnode> {
        let insn = func.blocks[&BlockId(0)].insns.last().expect("syscall");
        insn.inputs[NUMBER_INPUT + 1..].to_vec()
    }

    #[test]
    fn keeps_arguments_up_to_the_last_one_written() {
        // exit(0): only x0 is set before the call.
        let mut func = function(vec![set(x(0), 0), set(x(8), 93), linux_svc()]);
        assert_eq!(trim_syscall_args(&mut func), 1);
        assert_eq!(syscall_args(&func), [x(0)]);

        // write(1, buf, n) with x1 left as it was: x0..x2 survive.
        let mut func = function(vec![set(x(0), 1), set(x(2), 5), linux_svc()]);
        trim_syscall_args(&mut func);
        assert_eq!(syscall_args(&func), [x(0), x(1), x(2)]);
    }

    #[test]
    fn writes_before_a_call_do_not_count() {
        let call = IrInsn::without_output(IrOp::Call, smallvec![Varnode::constant(0x40, 8)], 0);
        let mut func = function(vec![set(x(3), 7), call, linux_svc()]);
        trim_syscall_args(&mut func);
        assert!(syscall_args(&func).is_empty());
    }
}
