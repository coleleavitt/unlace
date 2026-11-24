target triple = "riscv64-unknown-elf"

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
module asm "sm4ed a0,a1,a2,2"
module asm "sm4ks a0,a1,a2,3"
module asm "sha512sig0 a0,a1"
module asm "sha512sig1 a0,a1"
module asm "sha512sum0 a0,a1"
module asm "sha512sum1 a0,a1"
module asm "aes64es a0,a1,a2"
module asm "aes64esm a0,a1,a2"
module asm "aes64ds a0,a1,a2"
module asm "aes64dsm a0,a1,a2"
module asm "aes64im a0,a1"
module asm "aes64ks1i a0,a1,0"
module asm "aes64ks1i a0,a1,10"
module asm "aes64ks2 a0,a1,a2"
module asm ".size probe, .-probe"

define signext i32 @sig0(i32 signext %x) {
  %r = call i32 @llvm.riscv.sha256sig0(i32 %x)
  ret i32 %r
}
define i64 @sum0(i64 %x) {
  %r = call i64 @llvm.riscv.sha512sum0(i64 %x)
  ret i64 %r
}
define i64 @aesround(i64 %a, i64 %b) {
  %r = call i64 @llvm.riscv.aes64es(i64 %a, i64 %b)
  ret i64 %r
}
define signext i32 @sm4(i32 signext %a, i32 signext %b) {
  %r = call i32 @llvm.riscv.sm4ed(i32 %a, i32 %b, i32 2)
  ret i32 %r
}
declare i32 @llvm.riscv.sha256sig0(i32)
declare i64 @llvm.riscv.sha512sum0(i64)
declare i64 @llvm.riscv.aes64es(i64, i64)
declare i32 @llvm.riscv.sm4ed(i32, i32, i32)
