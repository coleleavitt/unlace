// ARM64 (AArch64) fixture for unlace decompiler testing.
// Covers: MUL, SDIV, MADD, CSEL, CSINC, CSINV, CSNEG, UBFM, SBFM, EXTR,
//         LDP, STP, B.cond, BL, RET, DMB
//
// This file documents the assembly that was hand-encoded into
// fixtures/arm64_features.elf (since no cross-toolchain was available).
//
// To rebuild (if aarch64-linux-gnu-as is available):
//   aarch64-linux-gnu-as -o /tmp/arm64.o fixtures/src/arm64_features.S
//   aarch64-linux-gnu-ld -o fixtures/arm64_features.elf /tmp/arm64.o

    .global _start
    .global mul_test
    .global csel_test
    .global bitfield_test

    .text

// Entry point — calls each test function, then exits via SVC.
_start:
    bl mul_test
    bl csel_test
    bl bitfield_test
    mov x0, #0          // exit code 0
    mov x8, #93         // __NR_exit
    svc #0

// Test: multiply / divide instructions
// Exercises: MUL, SDIV, MADD
mul_test:
    mul  x0, x1, x2     // x0 = x1 * x2
    sdiv x3, x0, x1     // x3 = x0 / x1 (signed)
    madd x4, x1, x2, x3 // x4 = x1*x2 + x3
    ret

// Test: conditional select instructions
// Exercises: CMP, CSEL, CSINC, CSINV, CSNEG, B.cond
csel_test:
    cmp   x0, x1
    csel  x2, x0, x1, lt   // x2 = (x0 < x1) ? x0 : x1
    csinc x3, x0, x1, eq   // x3 = (x0 == x1) ? x0 : x1+1
    csinv x4, x0, x1, ne   // x4 = (x0 != x1) ? x0 : ~x1
    csneg x5, x0, x1, ge   // x5 = (x0 >= x1) ? x0 : -x1
    b.eq  .Lskip
    add   x6, x0, x1
.Lskip:
    ret

// Test: bitfield and memory pair instructions
// Exercises: UBFM, SBFM, EXTR, LDP, STP, DMB
bitfield_test:
    stp  x29, x30, [sp, #-16]!  // push frame pointer + link register
    ubfm x0, x1, #4, #11        // extract bits [4:11] from x1
    sbfm x2, x3, #0, #7         // sign-extend byte from x3
    extr x4, x5, x6, #16        // extract from pair (x5:x6) at bit 16
    ldp  x29, x30, [sp], #16    // pop frame pointer + link register
    dmb  ish                     // data memory barrier (inner shareable)
    ret
