//! PowerPC AltiVec (VMX) vector helpers.
//!
//! AltiVec instructions live under primary opcode 4 and operate on the 128-bit
//! vector register file (v0-v31). The core unlace IR has no first-class
//! SIMD/vector opcodes, and these operations (packed float arithmetic, byte
//! permute/select, 128-bit bitwise logic) have no faithful scalar IR mapping.
//!
//! We therefore preserve them as tagged `CALLOTHER` intrinsics -- mirroring the
//! `sc` / SPE convention -- so later analyses and printers can recover the exact
//! vector semantics without re-decoding. The destination vector register is the
//! `CALLOTHER` output; the source vector registers follow the intrinsic tag in
//! the operand list.

use capstone::arch::ppc::PpcOperand;
use smallvec::SmallVec;
use smallvec::smallvec;
use unlace_ir::{IrInsn, IrOp, Varnode};

use crate::lift::LiftCtx;
use crate::ops::control_flow::ppc_tag;
use crate::register_file::cs_vr_to_varnode;

fn operand_vr(op: &PpcOperand) -> Option<Varnode> {
    match op {
        PpcOperand::Reg(id) => cs_vr_to_varnode(*id),
        _ => None,
    }
}

/// Emit a VMX vector op as a tagged `CALLOTHER`:
///
/// `vD = CALLOTHER(tag, vSrc0, vSrc1, ...)`
///
/// All operands must be vector registers; if any is missing or non-vector the
/// instruction is left `Unimplemented` so we never fabricate vector semantics.
fn lift_vmx(ctx: &mut LiftCtx, ops: &[PpcOperand], tag: u64, src_count: usize) {
    let Some(vd) = ops.first().and_then(operand_vr) else {
        return ctx.emit_unimplemented();
    };

    let mut inputs: SmallVec<[Varnode; 3]> = smallvec![Varnode::constant(tag, 8)];
    for i in 0..src_count {
        match ops.get(1 + i).and_then(operand_vr) {
            Some(v) => inputs.push(v),
            None => return ctx.emit_unimplemented(),
        }
    }

    ctx.emit(IrInsn::with_output(IrOp::Callother, vd, inputs, ctx.addr));
}

/// `vaddfp vD,vA,vB` -- packed single-precision float add.
pub fn lift_vaddfp(ctx: &mut LiftCtx, ops: &[PpcOperand]) {
    lift_vmx(ctx, ops, ppc_tag::VMX_VADDFP, 2);
}

/// `vsubfp vD,vA,vB` -- packed single-precision float subtract.
pub fn lift_vsubfp(ctx: &mut LiftCtx, ops: &[PpcOperand]) {
    lift_vmx(ctx, ops, ppc_tag::VMX_VSUBFP, 2);
}

/// `vand vD,vA,vB` -- 128-bit bitwise AND.
pub fn lift_vand(ctx: &mut LiftCtx, ops: &[PpcOperand]) {
    lift_vmx(ctx, ops, ppc_tag::VMX_VAND, 2);
}

/// `vor vD,vA,vB` -- 128-bit bitwise OR. (Capstone may surface this as `VMR`.)
pub fn lift_vor(ctx: &mut LiftCtx, ops: &[PpcOperand]) {
    lift_vmx(ctx, ops, ppc_tag::VMX_VOR, 2);
}

/// `vxor vD,vA,vB` -- 128-bit bitwise XOR.
pub fn lift_vxor(ctx: &mut LiftCtx, ops: &[PpcOperand]) {
    lift_vmx(ctx, ops, ppc_tag::VMX_VXOR, 2);
}

/// `vperm vD,vA,vB,vC` -- vector byte permute.
pub fn lift_vperm(ctx: &mut LiftCtx, ops: &[PpcOperand]) {
    lift_vmx(ctx, ops, ppc_tag::VMX_VPERM, 3);
}

/// `vsel vD,vA,vB,vC` -- vector bitwise select.
pub fn lift_vsel(ctx: &mut LiftCtx, ops: &[PpcOperand]) {
    lift_vmx(ctx, ops, ppc_tag::VMX_VSEL, 3);
}

#[cfg(test)]
mod tests {
    use super::*;
    use crate::lift::{PpcEndian, PpcLifter, PpcMode};
    use unlace_ir::{IrOp, Lifter, SpaceId};

    fn lift(bytes: &[u8]) -> Vec<IrInsn> {
        let lifter = PpcLifter::with_mode_endian(PpcMode::Ppc32, PpcEndian::Big);
        lifter.lift_insn(bytes, 0x1000).expect("lift ok").ir_ops
    }

    fn assert_callother_tag(ops: &[IrInsn], tag: u64) {
        assert!(
            !ops.iter().any(|i| i.op == IrOp::Unimplemented),
            "expected no Unimplemented, got {ops:?}"
        );
        let call = ops
            .iter()
            .find(|i| i.op == IrOp::Callother)
            .expect("expected a Callother op");
        let tag_vn = call.inputs.first().expect("tag operand");
        assert_eq!(tag_vn.space, SpaceId::Const, "tag must be a constant");
        assert_eq!(tag_vn.offset, tag, "unexpected VMX tag");
    }

    #[test]
    fn lifts_vaddfp_as_tagged_callother() {
        // vaddfp v0, v1, v2  (primary opcode 4, xo=10)
        let ops = lift(&[0x10, 0x01, 0x10, 0x0a]);
        assert_callother_tag(&ops, ppc_tag::VMX_VADDFP);
        // Output is the destination vector register v0 (128-bit).
        let call = ops.iter().find(|i| i.op == IrOp::Callother).unwrap();
        let out = call.output.expect("vaddfp writes vD");
        assert_eq!(out.space, SpaceId::Register);
        assert_eq!(out.size, 16, "vector regs are 128-bit");
    }

    #[test]
    fn lifts_vxor_as_tagged_callother() {
        // vxor v6, v7, v8  (primary opcode 4, xo=1220)
        let ops = lift(&[0x10, 0xc7, 0x44, 0xc4]);
        assert_callother_tag(&ops, ppc_tag::VMX_VXOR);
    }

    #[test]
    fn lifts_vor_as_tagged_callother() {
        // vor v3, v4, v5 -- capstone aliases this to VMR; must still tag VMX_VOR.
        let ops = lift(&[0x10, 0x64, 0x2c, 0x84]);
        assert_callother_tag(&ops, ppc_tag::VMX_VOR);
    }

    #[test]
    fn lifts_vperm_as_tagged_callother() {
        // vperm v0, v1, v2, v3  (VA-form, xo=43) -- three source vectors.
        let ops = lift(&[0x10, 0x01, 0x10, 0xeb]);
        assert_callother_tag(&ops, ppc_tag::VMX_VPERM);
        let call = ops.iter().find(|i| i.op == IrOp::Callother).unwrap();
        // tag + 3 source vector registers.
        assert_eq!(call.inputs.len(), 4, "vperm: tag + vA + vB + vC");
    }
}
