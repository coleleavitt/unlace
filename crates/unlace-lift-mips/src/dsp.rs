//! MIPS DSP ASE callother + control-register declarations.
//!
//! Several DSP control registers (`DSPCARRY`, `DSPPOS`, `DSPSCOUNT`,
//! `AC0..=AC3`) and `lift_*` helpers are staged for future dispatch wiring.
//! Silence dead-code module-wide until those are connected; TODO: wire when
//! DSP-ASE handlers exit WIP status.
#![allow(dead_code)]

use smallvec::smallvec;
use unlace_ir::{IrInsn, IrOp, SpaceId, Varnode};

use crate::lift::LiftCtx;

pub const DSP_CONTROL_BASE: u64 = crate::register_file::PC + 8;
pub const DSPCARRY: u64 = DSP_CONTROL_BASE;
pub const DSPCCOND: u64 = DSP_CONTROL_BASE + 8;
pub const DSPOUTFLAG: u64 = DSP_CONTROL_BASE + 16;
pub const DSPPOS: u64 = DSP_CONTROL_BASE + 24;
pub const DSPSCOUNT: u64 = DSP_CONTROL_BASE + 32;
pub const DSP_AC_BASE: u64 = DSP_CONTROL_BASE + 40;
pub const AC_STRIDE: u64 = 16;
pub const AC0: u64 = DSP_AC_BASE;
pub const AC1: u64 = DSP_AC_BASE + AC_STRIDE;
pub const AC2: u64 = DSP_AC_BASE + (AC_STRIDE * 2);
pub const AC3: u64 = DSP_AC_BASE + (AC_STRIDE * 3);

pub const CALLOTHER_DSP_APPEND: u64 = 0x4d49_5053_4453_5001;
pub const CALLOTHER_DSP_BALIGN: u64 = 0x4d49_5053_4453_5002;
pub const CALLOTHER_DSP_PREPEND: u64 = 0x4d49_5053_4453_5003;
pub const CALLOTHER_DSP_PICK: u64 = 0x4d49_5053_4453_5004;
pub const CALLOTHER_DSP_PACKRL: u64 = 0x4d49_5053_4453_5005;
pub const CALLOTHER_DSP_PRECEQ: u64 = 0x4d49_5053_4453_5006;
pub const CALLOTHER_DSP_PRECEQU: u64 = 0x4d49_5053_4453_5007;
pub const CALLOTHER_DSP_PRECEU: u64 = 0x4d49_5053_4453_5008;
pub const CALLOTHER_DSP_PRECRQ: u64 = 0x4d49_5053_4453_5009;
pub const CALLOTHER_DSP_PRECRQU_S: u64 = 0x4d49_5053_4453_500a;
pub const CALLOTHER_DSP_PRECRQ_RS: u64 = 0x4d49_5053_4453_500b;
pub const CALLOTHER_DSP_PRECR: u64 = 0x4d49_5053_4453_500c;
pub const CALLOTHER_DSP_PRECR_SRA: u64 = 0x4d49_5053_4453_500d;
pub const CALLOTHER_DSP_PRECR_SRA_R: u64 = 0x4d49_5053_4453_500e;
pub const CALLOTHER_DSP_REPL: u64 = 0x4d49_5053_4453_500f;
pub const CALLOTHER_DSP_REPLV: u64 = 0x4d49_5053_4453_5010;
pub const CALLOTHER_DSP_CMP: u64 = 0x4d49_5053_4453_5011;
pub const CALLOTHER_DSP_DPA: u64 = 0x4d49_5053_4453_5012;
pub const CALLOTHER_DSP_DPS: u64 = 0x4d49_5053_4453_5013;
pub const CALLOTHER_DSP_MULQ: u64 = 0x4d49_5053_4453_5014;
pub const CALLOTHER_DSP_SHILO: u64 = 0x4d49_5053_4453_5015;
pub const CALLOTHER_DSP_SHILOV: u64 = 0x4d49_5053_4453_5016;
pub const CALLOTHER_DSP_EXTP: u64 = 0x4d49_5053_4453_5017;
pub const CALLOTHER_DSP_EXTPV: u64 = 0x4d49_5053_4453_5018;
pub const CALLOTHER_DSP_EXTPDP: u64 = 0x4d49_5053_4453_5019;
pub const CALLOTHER_DSP_EXTPDPV: u64 = 0x4d49_5053_4453_501a;
pub const CALLOTHER_DSP_INSV: u64 = 0x4d49_5053_4453_501b;
pub const CALLOTHER_DSP_RDDSP: u64 = 0x4d49_5053_4453_501c;
pub const CALLOTHER_DSP_WRDSP: u64 = 0x4d49_5053_4453_501d;

pub fn reg64(offset: u64) -> Varnode {
    Varnode::new(SpaceId::Register, offset, 8)
}

pub fn reg128(offset: u64) -> Varnode {
    Varnode::new(SpaceId::Register, offset, 16)
}

pub fn emit_callother_with_output(
    ctx: &mut LiftCtx,
    dst: Varnode,
    tag: u64,
    inputs: impl IntoIterator<Item = Varnode>,
) {
    let mut args = smallvec![Varnode::constant(tag, 8)];
    args.extend(inputs);
    ctx.emit(IrInsn::with_output(IrOp::Callother, dst, args, ctx.addr));
}

pub fn emit_callother(ctx: &mut LiftCtx, tag: u64, inputs: impl IntoIterator<Item = Varnode>) {
    let mut args = smallvec![Varnode::constant(tag, 8)];
    args.extend(inputs);
    ctx.emit(IrInsn::without_output(IrOp::Callother, args, ctx.addr));
}
