target triple = "riscv64-unknown-elf"

module asm ".text"
module asm ".globl probe"
module asm ".type probe,@function"
module asm ".p2align 2"
module asm "probe:"
module asm "sh1add a0,a1,a2"
module asm "sh2add a0,a1,a2"
module asm "sh3add a0,a1,a2"
module asm "andn a0,a1,a2"
module asm "orn a0,a1,a2"
module asm "xnor a0,a1,a2"
module asm "clz a0,a1"
module asm "ctz a0,a1"
module asm "cpop a0,a1"
module asm "max a0,a1,a2"
module asm "maxu a0,a1,a2"
module asm "min a0,a1,a2"
module asm "minu a0,a1,a2"
module asm "sext.b a0,a1"
module asm "sext.h a0,a1"
module asm "zext.h a0,a1"
module asm "rol a0,a1,a2"
module asm "ror a0,a1,a2"
module asm "rori a0,a1,3"
module asm "orc.b a0,a1"
module asm "rev8 a0,a1"
module asm "clmul a0,a1,a2"
module asm "clmulh a0,a1,a2"
module asm "clmulr a0,a1,a2"
module asm "bclr a0,a1,a2"
module asm "bclri a0,a1,3"
module asm "bext a0,a1,a2"
module asm "bexti a0,a1,3"
module asm "binv a0,a1,a2"
module asm "binvi a0,a1,3"
module asm "bset a0,a1,a2"
module asm "bseti a0,a1,3"
module asm "pack a0,a1,a2"
module asm "packh a0,a1,a2"
module asm "brev8 a0,a1"
module asm "xperm4 a0,a1,a2"
module asm "xperm8 a0,a1,a2"
module asm "czero.eqz a0,a1,a2"
module asm "czero.nez a0,a1,a2"
module asm "add.uw a0,a1,a2"
module asm "zext.w a0,a1"
module asm "sh1add.uw a0,a1,a2"
module asm "sh2add.uw a0,a1,a2"
module asm "sh3add.uw a0,a1,a2"
module asm "slli.uw a0,a1,35"
module asm "clzw a0,a1"
module asm "ctzw a0,a1"
module asm "cpopw a0,a1"
module asm "rolw a0,a1,a2"
module asm "rorw a0,a1,a2"
module asm "roriw a0,a1,3"
module asm "packw a0,a1,a2"
module asm "rori a0,a1,35"
module asm "bseti a0,a1,40"
module asm ".size probe, .-probe"

define i64 @imax(i64 %a, i64 %b) {
  %c = icmp sgt i64 %a, %b
  %r = select i1 %c, i64 %a, i64 %b
  ret i64 %r
}
define i64 @iminu(i64 %a, i64 %b) {
  %c = icmp ult i64 %a, %b
  %r = select i1 %c, i64 %a, i64 %b
  ret i64 %r
}
define i64 @pop(i64 %a) {
  %r = call i64 @llvm.ctpop.i64(i64 %a)
  ret i64 %r
}
define i64 @lead(i64 %a) {
  %r = call i64 @llvm.ctlz.i64(i64 %a, i1 false)
  ret i64 %r
}
define i64 @trail(i64 %a) {
  %r = call i64 @llvm.cttz.i64(i64 %a, i1 false)
  ret i64 %r
}
define i64 @keepif(i64 %a, i64 %b) {
  %c = icmp eq i64 %b, 0
  %r = select i1 %c, i64 0, i64 %a
  ret i64 %r
}
define i64 @swap(i64 %a) {
  %r = call i64 @llvm.bswap.i64(i64 %a)
  ret i64 %r
}
define i64 @andnot(i64 %a, i64 %b) {
  %n = xor i64 %b, -1
  %r = and i64 %a, %n
  ret i64 %r
}
define i64 @setbit(i64 %a, i64 %b) {
  %s = shl i64 1, %b
  %r = or i64 %a, %s
  ret i64 %r
}
define i64 @index(i64 %base, i32 %i) {
  %z = zext i32 %i to i64
  %s = shl i64 %z, 3
  %r = add i64 %base, %s
  ret i64 %r
}
declare i64 @llvm.ctpop.i64(i64)
declare i64 @llvm.ctlz.i64(i64, i1)
declare i64 @llvm.cttz.i64(i64, i1)
declare i64 @llvm.bswap.i64(i64)
