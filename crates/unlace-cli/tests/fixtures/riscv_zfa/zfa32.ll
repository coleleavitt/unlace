target triple = "riscv32-unknown-elf"

module asm ".text"
module asm ".globl probe"
module asm ".type probe,@function"
module asm ".p2align 2"
module asm "probe:"
module asm "fli.d fa0, -1.0"
module asm "fli.d fa0, min"
module asm "fli.d fa0, 1.52587890625e-05"
module asm "fli.d fa0, 3.0517578125e-05"
module asm "fli.d fa0, 0.00390625"
module asm "fli.d fa0, 0.0078125"
module asm "fli.d fa0, 0.0625"
module asm "fli.d fa0, 0.125"
module asm "fli.d fa0, 0.25"
module asm "fli.d fa0, 0.3125"
module asm "fli.d fa0, 0.375"
module asm "fli.d fa0, 0.4375"
module asm "fli.d fa0, 0.5"
module asm "fli.d fa0, 0.625"
module asm "fli.d fa0, 0.75"
module asm "fli.d fa0, 0.875"
module asm "fli.d fa0, 1.0"
module asm "fli.d fa0, 1.25"
module asm "fli.d fa0, 1.5"
module asm "fli.d fa0, 1.75"
module asm "fli.d fa0, 2.0"
module asm "fli.d fa0, 2.5"
module asm "fli.d fa0, 3.0"
module asm "fli.d fa0, 4.0"
module asm "fli.d fa0, 8.0"
module asm "fli.d fa0, 16.0"
module asm "fli.d fa0, 128.0"
module asm "fli.d fa0, 256.0"
module asm "fli.d fa0, 32768.0"
module asm "fli.d fa0, 65536.0"
module asm "fli.d fa0, inf"
module asm "fli.d fa0, nan"
module asm "fli.s fa1, -1.0"
module asm "fli.s fa1, min"
module asm "fli.h fa2, 0.5"
module asm "fli.h fa2, nan"
module asm "fminm.s fa0,fa1,fa2"
module asm "fmaxm.s fa0,fa1,fa2"
module asm "fminm.d fa0,fa1,fa2"
module asm "fmaxm.d fa0,fa1,fa2"
module asm "fminm.h fa0,fa1,fa2"
module asm "fmaxm.h fa0,fa1,fa2"
module asm "fround.s fa0,fa1"
module asm "froundnx.s fa0,fa1,rtz"
module asm "fround.d fa0,fa1,rne"
module asm "froundnx.d fa0,fa1"
module asm "fround.h fa0,fa1,rup"
module asm "froundnx.h fa0,fa1"
module asm "fcvtmod.w.d a0,fa1,rtz"
module asm "fleq.s a0,fa1,fa2"
module asm "fltq.s a0,fa1,fa2"
module asm "fleq.d a0,fa1,fa2"
module asm "fltq.d a0,fa1,fa2"
module asm "fleq.h a0,fa1,fa2"
module asm "fltq.h a0,fa1,fa2"
module asm "fmvh.x.d a0,fa1"
module asm "fmvp.d.x fa0,a1,a2"
module asm ".size probe, .-probe"

define double @dmin(double %a, double %b) {
  %r = call double @llvm.minimum.f64(double %a, double %b)
  ret double %r
}
define float @fmaxf(float %a, float %b) {
  %r = call float @llvm.maximum.f32(float %a, float %b)
  ret float %r
}
define double @dfloor(double %a) {
  %r = call double @llvm.floor.f64(double %a)
  ret double %r
}
define double @half(double %a) {
  %r = fmul double %a, 0.5
  ret double %r
}
define i1 @quietle(double %a, double %b) {
  %r = call i1 @llvm.experimental.constrained.fcmp.f64(double %a, double %b, metadata !"ole", metadata !"fpexcept.strict")
  ret i1 %r
}
declare double @llvm.minimum.f64(double, double)
declare float @llvm.maximum.f32(float, float)
declare double @llvm.floor.f64(double)
declare i1 @llvm.experimental.constrained.fcmp.f64(double, double, metadata, metadata)
