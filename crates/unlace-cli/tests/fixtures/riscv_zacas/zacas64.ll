target triple = "riscv64-unknown-elf"

module asm ".text"
module asm ".globl probe"
module asm ".type probe,@function"
module asm ".p2align 2"
module asm "probe:"
module asm "amocas.q a0,a2,(a4)"
module asm "amocas.q.aqrl t1,s2,(a1)"
module asm "amocas.q zero,zero,(a0)"
module asm "ret"
module asm ".size probe, .-probe"

