// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x7DD390
// Name:           sub_7DD390
// Function size:  151 bytes (49 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x7DD390 push    r13; int
//   0x7DD392 mov     r13, rsi
//   0x7DD395 push    r12; ptr
//   0x7DD397 push    rbp; int
//   0x7DD398 mov     ebp, edx
//   0x7DD39A push    rbx; int
//   0x7DD39B sub     rsp, 18h
//   0x7DD39F mov     qword ptr [rsp+38h+var_30], rdi; int
//   0x7DD3A4 mov     edi, 30h ; '0'; unsigned __int64
//   0x7DD3A9 call    __Znwm; operator new(ulong)
//   0x7DD3AE pxor    xmm0, xmm0
//   0x7DD3B2 cmp     qword ptr [rsp+38h+var_30], 0
//   0x7DD3B8 mov     byte ptr [rax+8], 24h ; '$'
//   0x7DD3BC mov     rbx, rax
//   0x7DD3BF mov     r12, rax
//   0x7DD3C2 lea     rax, off_2B3BB00
//   0x7DD3C9 mov     [rbx], rax
//   0x7DD3CC mov     qword ptr [rbx+10h], 0
//   0x7DD3D4 mov     byte ptr [rbx+28h], 0
//   0x7DD3D8 movups  xmmword ptr [rbx+18h], xmm0
//   0x7DD3DC jz      short loc_7DD3F4
//   0x7DD3DE lea     rsi, [rsp+38h+var_30]; int
//   0x7DD3E3 mov     ecx, ebp; int
//   0x7DD3E5 mov     rdx, r13; int
//   0x7DD3E8 mov     rdi, rbx; int
//   0x7DD3EB call    sub_7F2730
//   0x7DD3F0 test    al, al
//   0x7DD3F2 jz      short loc_7DD408
//   0x7DD3F4 add     rsp, 18h
//   0x7DD3F8 mov     rax, r12
//   0x7DD3FB pop     rbx
//   0x7DD3FC pop     rbp
//   0x7DD3FD pop     r12
//   0x7DD3FF pop     r13
//   0x7DD401 retn
//   0x7DD402 align 8
//   0x7DD408 test    rbx, rbx
//   0x7DD40B jz      short loc_7DD416
//   0x7DD40D mov     rax, [rbx]
//   0x7DD410 mov     rdi, rbx
//   0x7DD413 call    qword ptr [rax+8]
//   0x7DD416 add     rsp, 18h
//   0x7DD41A xor     r12d, r12d
//   0x7DD41D pop     rbx
//   0x7DD41E mov     rax, r12
//   0x7DD421 pop     rbp
//   0x7DD422 pop     r12
//   0x7DD424 pop     r13
//   0x7DD426 retn
// ============================================================

void sub_7DD390(/* signature unknown */)
{
    // see disassembly above
}

