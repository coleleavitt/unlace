target triple = "riscv32-unknown-elf"

module asm ".text"
module asm ".globl probe"
module asm ".type probe,@function"
module asm ".p2align 2"
module asm "probe:"
module asm "amoswap.b a0,a2,(a1)"
module asm "amoadd.b a0,a2,(a1)"
module asm "amoxor.b a0,a2,(a1)"
module asm "amoand.b a0,a2,(a1)"
module asm "amoor.b a0,a2,(a1)"
module asm "amomin.b a0,a2,(a1)"
module asm "amomax.b a0,a2,(a1)"
module asm "amominu.b a0,a2,(a1)"
module asm "amomaxu.b a0,a2,(a1)"
module asm "amocas.b a0,a2,(a1)"
module asm "amoadd.b.aqrl t0,t1,(t2)"
module asm "amoswap.h a0,a2,(a1)"
module asm "amoadd.h a0,a2,(a1)"
module asm "amoxor.h a0,a2,(a1)"
module asm "amoand.h a0,a2,(a1)"
module asm "amoor.h a0,a2,(a1)"
module asm "amomin.h a0,a2,(a1)"
module asm "amomax.h a0,a2,(a1)"
module asm "amominu.h a0,a2,(a1)"
module asm "amomaxu.h a0,a2,(a1)"
module asm "amocas.h a0,a2,(a1)"
module asm "amoadd.h.aqrl t0,t1,(t2)"
module asm ".size probe, .-probe"

define i8 @fetch_add8(ptr %p, i8 %v) {
  %r = atomicrmw add ptr %p, i8 %v seq_cst
  ret i8 %r
}
define i16 @fetch_max16(ptr %p, i16 %v) {
  %r = atomicrmw max ptr %p, i16 %v monotonic
  ret i16 %r
}
define i16 @cas16(ptr %p, i16 %o, i16 %n) {
  %r = cmpxchg ptr %p, i16 %o, i16 %n acq_rel monotonic
  %v = extractvalue { i16, i1 } %r, 0
  ret i16 %v
}
define i8 @xchg8(ptr %p, i8 %v) {
  %r = atomicrmw xchg ptr %p, i8 %v monotonic
  ret i8 %r
}
