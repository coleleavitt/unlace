target triple = "riscv32-unknown-elf"

module asm ".text"
module asm ".globl probe"
module asm ".type probe,@function"
module asm ".p2align 2"
module asm "probe:"
module asm "c.lbu a0,0(a1)"
module asm "c.lbu a0,3(a1)"
module asm "c.lhu a2,0(a3)"
module asm "c.lhu a2,2(a3)"
module asm "c.lh s0,2(s1)"
module asm "c.sb a4,1(a5)"
module asm "c.sh a4,2(a5)"
module asm "c.zext.b a0"
module asm "c.sext.b a1"
module asm "c.zext.h a2"
module asm "c.sext.h a3"
module asm "c.not a4"
module asm "c.mul a5,s0"
module asm "amocas.w a0,a2,(a1)"
module asm "amocas.w.aqrl a0,a2,(a1)"
module asm ".size probe, .-probe"

define i32 @ldbyte(ptr %p) {
  %q = getelementptr i8, ptr %p, i32 1
  %v = load i8, ptr %q
  %r = zext i8 %v to i32
  ret i32 %r
}
define i32 @ldhalf(ptr %p) {
  %q = getelementptr i16, ptr %p, i32 1
  %v = load i16, ptr %q
  %r = sext i16 %v to i32
  ret i32 %r
}
define void @stbyte(ptr %p, i32 %x) {
  %t = trunc i32 %x to i8
  store i8 %t, ptr %p
  ret void
}
define i32 @notmul(i32 %a, i32 %b) {
  %m = mul i32 %a, %b
  %n = xor i32 %m, -1
  ret i32 %n
}
define i32 @cas(ptr %p, i32 %old, i32 %new) {
  %r = cmpxchg ptr %p, i32 %old, i32 %new seq_cst seq_cst
  %v = extractvalue { i32, i1 } %r, 0
  ret i32 %v
}
