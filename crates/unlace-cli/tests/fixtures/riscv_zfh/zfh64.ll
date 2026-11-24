target triple = "riscv64-unknown-elf"

module asm ".text"
module asm ".globl probe"
module asm ".type probe,@function"
module asm ".p2align 2"
module asm "probe:"
module asm "flh fa0,2(a1)"
module asm "fsh fa2,4(a3)"
module asm "fadd.h fa0,fa1,fa2"
module asm "fsub.h fa0,fa1,fa2,rtz"
module asm "fmul.h fa0,fa1,fa2"
module asm "fdiv.h fa0,fa1,fa2,rne"
module asm "fsqrt.h fa0,fa1"
module asm "fsgnj.h fa0,fa1,fa2"
module asm "fsgnjn.h fa0,fa1,fa2"
module asm "fsgnjx.h fa0,fa1,fa2"
module asm "fmin.h fa0,fa1,fa2"
module asm "fmax.h fa0,fa1,fa2"
module asm "fcvt.s.h fa0,fa1"
module asm "fcvt.h.s fa0,fa1"
module asm "fcvt.d.h fa0,fa1"
module asm "fcvt.h.d fa0,fa1"
module asm "fcvt.w.h a0,fa1,rtz"
module asm "fcvt.wu.h a0,fa1,rtz"
module asm "fcvt.h.w fa0,a1"
module asm "fcvt.h.wu fa0,a1"
module asm "feq.h a0,fa1,fa2"
module asm "flt.h a0,fa1,fa2"
module asm "fle.h a0,fa1,fa2"
module asm "fclass.h a0,fa1"
module asm "fmv.x.h a0,fa1"
module asm "fmv.h.x fa0,a1"
module asm "fmadd.h fa0,fa1,fa2,fa3"
module asm "fmsub.h fa0,fa1,fa2,fa3"
module asm "fnmsub.h fa0,fa1,fa2,fa3"
module asm "fnmadd.h fa0,fa1,fa2,fa3"
module asm "fcvt.l.h a0,fa1,rtz"
module asm "fcvt.lu.h a0,fa1,rtz"
module asm "fcvt.h.l fa0,a1"
module asm "fcvt.h.lu fa0,a1"
module asm ".size probe, .-probe"

define half @hadd(half %a, half %b) {
  %r = fadd half %a, %b
  ret half %r
}
define half @hmuladd(half %a, half %b, half %c) {
  %m = call half @llvm.fma.f16(half %a, half %b, half %c)
  ret half %m
}
define float @widen(half %a) {
  %r = fpext half %a to float
  ret float %r
}
define half @narrow(double %a) {
  %r = fptrunc double %a to half
  ret half %r
}
define i64 @toint(half %a) {
  %r = fptosi half %a to i64
  ret i64 %r
}
define i64 @hless(half %a, half %b) {
  %c = fcmp olt half %a, %b
  %r = zext i1 %c to i64
  ret i64 %r
}
define half @hload(ptr %p) {
  %q = getelementptr half, ptr %p, i64 3
  %v = load half, ptr %q
  ret half %v
}
declare half @llvm.fma.f16(half, half, half)
