target triple = "riscv32-unknown-elf"

module asm ".text"
module asm ".globl probe"
module asm ".type probe,@function"
module asm ".p2align 2"
module asm "probe:"
module asm "sha256sig0 a0,a1"
module asm "sha256sig1 a0,a1"
module asm "sha256sum0 a0,a1"
module asm "sha256sum1 a0,a1"
module asm "sm3p0 a0,a1"
module asm "sm3p1 a0,a1"
module asm "sha512sum0r a0,a1,a2"
module asm "sha512sum1r a0,a1,a2"
module asm "sha512sig0l a0,a1,a2"
module asm "sha512sig0h a0,a1,a2"
module asm "sha512sig1l a0,a1,a2"
module asm "sha512sig1h a0,a1,a2"
module asm "aes32esi a0,a1,a2,0"
module asm "aes32esi a0,a1,a2,3"
module asm "aes32esmi a0,a1,a2,1"
module asm "aes32dsi a0,a1,a2,2"
module asm "aes32dsmi a0,a1,a2,3"
module asm "sm4ed a0,a1,a2,0"
module asm "sm4ed a0,a1,a2,3"
module asm "sm4ks a0,a1,a2,1"
module asm ".size probe, .-probe"

define i32 @sig0(i32 %x) {
  %r = call i32 @llvm.riscv.sha256sig0(i32 %x)
  ret i32 %r
}
define i32 @sum0r(i32 %a, i32 %b) {
  %r = call i32 @llvm.riscv.sha512sum0r(i32 %a, i32 %b)
  ret i32 %r
}
define i32 @aesround(i32 %a, i32 %b) {
  %r = call i32 @llvm.riscv.aes32esmi(i32 %a, i32 %b, i32 1)
  ret i32 %r
}
define i32 @sm4(i32 %a, i32 %b) {
  %r = call i32 @llvm.riscv.sm4ed(i32 %a, i32 %b, i32 2)
  ret i32 %r
}
declare i32 @llvm.riscv.sha256sig0(i32)
declare i32 @llvm.riscv.sha512sum0r(i32, i32)
declare i32 @llvm.riscv.aes32esmi(i32, i32, i32)
declare i32 @llvm.riscv.sm4ed(i32, i32, i32)
