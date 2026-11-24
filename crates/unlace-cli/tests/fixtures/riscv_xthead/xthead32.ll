target triple = "riscv32-unknown-elf"

module asm ".text"
module asm ".globl probe"
module asm ".type probe,@function"
module asm ".p2align 2"
module asm "probe:"
module asm "th.addsl a0, a1, a2, 3"
module asm "th.srri a0, a1, 31"
module asm "th.ext a0, a1, 15, 0"
module asm "th.extu a0, a1, 27, 8"
module asm "th.ff0 a0, a1"
module asm "th.ff1 a0, a1"
module asm "th.rev a0, a1"
module asm "th.tstnbz a0, a1"
module asm "th.tst a0, a1, 30"
module asm "th.mveqz a0, a1, a2"
module asm "th.mvnez a0, a1, a2"
module asm "th.mula a0, a1, a2"
module asm "th.muls a0, a1, a2"
module asm "th.mulah a0, a1, a2"
module asm "th.mulsh a0, a1, a2"
module asm "th.lwd a0, a1, (a2), 1, 3"
module asm "th.lwud a0, a1, (a2), 2, 3"
module asm "th.swd a0, a1, (a2), 3, 3"
module asm "th.lbia a0, (a1), -3, 2"
module asm "th.lbib a0, (a1), -3, 2"
module asm "th.lbuia a0, (a1), -3, 2"
module asm "th.lbuib a0, (a1), -3, 2"
module asm "th.lhia a0, (a1), -3, 2"
module asm "th.lhib a0, (a1), -3, 2"
module asm "th.lhuia a0, (a1), -3, 2"
module asm "th.lhuib a0, (a1), -3, 2"
module asm "th.lwia a0, (a1), -3, 2"
module asm "th.lwib a0, (a1), -3, 2"
module asm "th.sbia a0, (a1), 15, 1"
module asm "th.sbib a0, (a1), 15, 1"
module asm "th.shia a0, (a1), 15, 1"
module asm "th.shib a0, (a1), 15, 1"
module asm "th.swia a0, (a1), 15, 1"
module asm "th.swib a0, (a1), 15, 1"
module asm "th.lrb a0, a1, a2, 3"
module asm "th.lrbu a0, a1, a2, 3"
module asm "th.lurb a0, a1, a2, 3"
module asm "th.lurbu a0, a1, a2, 3"
module asm "th.lrh a0, a1, a2, 3"
module asm "th.lrhu a0, a1, a2, 3"
module asm "th.lurh a0, a1, a2, 3"
module asm "th.lurhu a0, a1, a2, 3"
module asm "th.lrw a0, a1, a2, 3"
module asm "th.lurw a0, a1, a2, 3"
module asm "th.srb a0, a1, a2, 1"
module asm "th.surb a0, a1, a2, 1"
module asm "th.srh a0, a1, a2, 1"
module asm "th.surh a0, a1, a2, 1"
module asm "th.srw a0, a1, a2, 1"
module asm "th.surw a0, a1, a2, 1"
module asm "th.flrw fa0, a1, a2, 2"
module asm "th.fsrw fa0, a1, a2, 2"
module asm "th.flrd fa0, a1, a2, 2"
module asm "th.fsrd fa0, a1, a2, 2"
module asm "th.dcache.csw a0"
module asm "th.dcache.isw a0"
module asm "th.dcache.cisw a0"
module asm "th.dcache.cval1 a0"
module asm "th.dcache.cva a0"
module asm "th.dcache.iva a0"
module asm "th.dcache.civa a0"
module asm "th.dcache.cpal1 a0"
module asm "th.dcache.cpa a0"
module asm "th.dcache.ipa a0"
module asm "th.dcache.cipa a0"
module asm "th.icache.iva a0"
module asm "th.icache.ipa a0"
module asm "th.dcache.call"
module asm "th.dcache.iall"
module asm "th.dcache.ciall"
module asm "th.icache.iall"
module asm "th.icache.ialls"
module asm "th.l2cache.call"
module asm "th.l2cache.iall"
module asm "th.l2cache.ciall"
module asm "th.sync"
module asm "th.sync.s"
module asm "th.sync.i"
module asm "th.sync.is"
module asm "th.sfence.vmas a0, a1"
module asm "ret"
module asm ".size probe, .-probe"

define i32 @scaled_index(ptr %p, i32 %i) {
  %a = getelementptr inbounds i32, ptr %p, i32 %i
  %v = load i32, ptr %a
  ret i32 %v
}
define i32 @field(i32 %x) {
  %s = lshr i32 %x, 8
  %m = and i32 %s, 4095
  ret i32 %m
}
define i32 @pick(i32 %c, i32 %a, i32 %b) {
  %z = icmp eq i32 %c, 0
  %r = select i1 %z, i32 %a, i32 %b
  ret i32 %r
}
define i32 @mac(i32 %acc, i32 %a, i32 %b) {
  %m = mul i32 %a, %b
  %r = add i32 %acc, %m
  ret i32 %r
}
