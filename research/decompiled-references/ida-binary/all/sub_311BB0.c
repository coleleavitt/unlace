// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x311BB0
// Name:           sub_311BB0
// Function size:  90 bytes (32 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x311BB0 push    r13; int
//   0x311BB2 push    r12; int
//   0x311BB4 push    rbp; int
//   0x311BB5 push    rbx; int
//   0x311BB6 mov     rbx, rdi
//   0x311BB9 sub     rsp, 8
//   0x311BBD lea     r12, qword_8CD748
//   0x311BC4 mov     rdi, [r12]
//   0x311BC8 test    rdi, rdi
//   0x311BCB jz      short loc_311BE0
//   0x311BCD mov     r13, rsi
//   0x311BD0 mov     rsi, rbx
//   0x311BD3 mov     rbp, rdx
//   0x311BD6 call    sub_53DC50
//   0x311BDB test    rax, rax
//   0x311BDE jz      short loc_311BF0
//   0x311BE0 xor     eax, eax
//   0x311BE2 add     rsp, 8
//   0x311BE6 pop     rbx
//   0x311BE7 pop     rbp
//   0x311BE8 pop     r12
//   0x311BEA pop     r13
//   0x311BEC retn
//   0x311BED align 10h
//   0x311BF0 mov     rdi, [r12]; this
//   0x311BF4 mov     rcx, rbp; src
//   0x311BF7 mov     rdx, r13; char *
//   0x311BFA mov     rsi, rbx; s
//   0x311BFD call    sub_53F6C0
//   0x311C02 test    rax, rax
//   0x311C05 setnz   al
//   0x311C08 jmp     short loc_311BE2
// ============================================================

void sub_311BB0(/* signature unknown */)
{
    // see disassembly above
}

