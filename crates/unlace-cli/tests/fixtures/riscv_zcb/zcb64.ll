target triple = "riscv64-unknown-elf"

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
module asm "c.zext.w s1"
module asm "amocas.d a0,a2,(a1)"
module asm "amocas.d.aq a3,a4,(a5)"
module asm ".size probe, .-probe"

define i64 @ldbyte(ptr %p) {
  %q = getelementptr i8, ptr %p, i64 1
  %v = load i8, ptr %q
  %r = zext i8 %v to i64
  ret i64 %r
}
define i64 @ldhalf(ptr %p) {
  %q = getelementptr i16, ptr %p, i64 1
  %v = load i16, ptr %q
  %r = sext i16 %v to i64
  ret i64 %r
}
define void @stbyte(ptr %p, i64 %x) {
  %t = trunc i64 %x to i8
  store i8 %t, ptr %p
  ret void
}
define i64 @notmul(i64 %a, i64 %b) {
  %m = mul i64 %a, %b
  %n = xor i64 %m, -1
  ret i64 %n
}
define i64 @cas(ptr %p, i64 %old, i64 %new) {
  %r = cmpxchg ptr %p, i64 %old, i64 %new seq_cst seq_cst
  %v = extractvalue { i64, i1 } %r, 0
  ret i64 %v
}
