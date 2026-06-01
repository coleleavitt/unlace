// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3A22D0
// Name:           sub_3A22D0
// Function size:  108 bytes (35 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3A22D0 push    rbp; int
//   0x3A22D1 mov     edx, 4
//   0x3A22D6 mov     rbp, rsi
//   0x3A22D9 push    rbx; int
//   0x3A22DA mov     rbx, rdi
//   0x3A22DD sub     rsp, 8
//   0x3A22E1 call    sub_3BE900
//   0x3A22E6 not     rax
//   0x3A22E9 test    ah, 6
//   0x3A22EC jz      short loc_3A2310
//   0x3A22EE mov     rsi, rbp
//   0x3A22F1 mov     rdi, rbx
//   0x3A22F4 xor     edx, edx
//   0x3A22F6 call    sub_3E3990
//   0x3A22FB add     rsp, 8
//   0x3A22FF mov     rsi, rbp
//   0x3A2302 mov     rdi, rbx
//   0x3A2305 pop     rbx
//   0x3A2306 pop     rbp
//   0x3A2307 jmp     sub_3E3E10
//   0x3A230C align 10h
//   0x3A2310 mov     rsi, rbp
//   0x3A2313 mov     rdi, rbx
//   0x3A2316 call    sub_3E6800
//   0x3A231B mov     rsi, rbp; int
//   0x3A231E mov     rdi, rbx; int
//   0x3A2321 xor     edx, edx
//   0x3A2323 call    sub_577F80
//   0x3A2328 mov     rdi, rbx
//   0x3A232B call    sub_3E3B60
//   0x3A2330 add     rsp, 8
//   0x3A2334 mov     eax, 1
//   0x3A2339 pop     rbx
//   0x3A233A pop     rbp
//   0x3A233B retn
// ============================================================

void sub_3A22D0(/* signature unknown */)
{
    // see disassembly above
}

