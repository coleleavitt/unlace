target triple = "riscv32-unknown-elf"

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
module asm "zip a0,a1"
module asm "unzip a0,a1"
module asm ".size probe, .-probe"

define i32 @imax(i32 %a, i32 %b) {
  %c = icmp sgt i32 %a, %b
  %r = select i1 %c, i32 %a, i32 %b
  ret i32 %r
}
define i32 @pop(i32 %a) {
  %r = call i32 @llvm.ctpop.i32(i32 %a)
  ret i32 %r
}
define i32 @trail(i32 %a) {
  %r = call i32 @llvm.cttz.i32(i32 %a, i1 false)
  ret i32 %r
}
define i32 @keepif(i32 %a, i32 %b) {
  %c = icmp eq i32 %b, 0
  %r = select i1 %c, i32 0, i32 %a
  ret i32 %r
}
define i32 @swap(i32 %a) {
  %r = call i32 @llvm.bswap.i32(i32 %a)
  ret i32 %r
}
declare i32 @llvm.ctpop.i32(i32)
declare i32 @llvm.cttz.i32(i32, i1)
declare i32 @llvm.bswap.i32(i32)
