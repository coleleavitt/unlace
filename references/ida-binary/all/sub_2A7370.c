// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x2A7370
// Name:           sub_2A7370
// Function size:  316 bytes (78 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x2A7370 push    r12
//   0x2A7372 push    rbp
//   0x2A7373 mov     rbp, rsi
//   0x2A7376 xor     esi, esi
//   0x2A7378 push    rbx
//   0x2A7379 mov     rbx, rdi
//   0x2A737C sub     rsp, 10h
//   0x2A7380 call    sub_2A6DC0
//   0x2A7385 test    rax, rax
//   0x2A7388 jz      short loc_2A73BA
//   0x2A738A mov     r12, rax
//   0x2A738D mov     eax, [rbx+80h]
//   0x2A7393 cmp     eax, 7FFFFFFFh
//   0x2A7398 jz      short loc_2A73BA
//   0x2A739A mov     ecx, [rbx+90h]
//   0x2A73A0 cmp     [rbp+0], ecx
//   0x2A73A3 jz      loc_2A7498
//   0x2A73A9 movsd   xmm2, qword ptr [rbx+68h]
//   0x2A73AE pxor    xmm0, xmm0
//   0x2A73B2 ucomisd xmm2, xmm0
//   0x2A73B6 jp      short loc_2A73C8
//   0x2A73B8 jnz     short loc_2A73C8
//   0x2A73BA add     rsp, 10h
//   0x2A73BE pop     rbx
//   0x2A73BF pop     rbp
//   0x2A73C0 pop     r12
//   0x2A73C2 retn
//   0x2A73C3 align 8
//   0x2A73C8 mov     rdx, [rbp+0]
//   0x2A73CC pxor    xmm0, xmm0
//   0x2A73D0 pxor    xmm1, xmm1
//   0x2A73D4 pxor    xmm3, xmm3
//   0x2A73D8 mov     ecx, [rbx+8Ch]
//   0x2A73DE movsd   xmm4, cs:qword_5DBF28
//   0x2A73E6 mov     [rbx+90h], rdx
//   0x2A73ED lea     edx, [rcx+1]
//   0x2A73F0 sub     edx, [rbx+84h]
//   0x2A73F6 mov     ecx, [rbx+88h]
//   0x2A73FC cvtsi2sd xmm0, edx
//   0x2A7400 cvtsi2sd xmm1, dword ptr [rbp+4]
//   0x2A7405 lea     edx, [rcx+1]
//   0x2A7408 sub     edx, eax
//   0x2A740A cvtsi2sd xmm3, edx
//   0x2A740E mulsd   xmm0, xmm4
//   0x2A7412 mulsd   xmm3, xmm4
//   0x2A7416 subsd   xmm1, xmm0
//   0x2A741A pxor    xmm0, xmm0
//   0x2A741E addsd   xmm1, qword ptr [rbx+0A0h]
//   0x2A7426 cvtsi2sd xmm0, dword ptr [rbp+0]
//   0x2A742B subsd   xmm0, xmm3
//   0x2A742F pxor    xmm3, xmm3
//   0x2A7433 addsd   xmm0, qword ptr [rbx+98h]
//   0x2A743B comisd  xmm2, xmm3
//   0x2A743F jbe     short loc_2A7453
//   0x2A7441 divsd   xmm1, xmm2
//   0x2A7445 divsd   xmm0, xmm2
//   0x2A7449 addsd   xmm1, qword ptr [rbx+78h]
//   0x2A744E addsd   xmm0, qword ptr [rbx+70h]
//   0x2A7453 mov     rax, [r12+10h]
//   0x2A7458 movsd   [rsp+28h+var_20], xmm0
//   0x2A745E movsd   [rsp+28h+var_28], xmm1
//   0x2A7463 lea     rdi, [rax+180h]
//   0x2A746A call    sub_1EA6C0
//   0x2A746F movsd   xmm0, [rsp+28h+var_20]
//   0x2A7475 movsd   xmm1, [rsp+28h+var_28]
//   0x2A747A mov     rdi, r12
//   0x2A747D subsd   xmm0, qword ptr [rax+8]
//   0x2A7482 subsd   xmm1, qword ptr [rax+10h]
//   0x2A7487 add     rsp, 10h
//   0x2A748B pop     rbx
//   0x2A748C pop     rbp
//   0x2A748D pop     r12
//   0x2A748F jmp     sub_2B7630
//   0x2A7494 align 8
//   0x2A7498 mov     ecx, [rbx+94h]
//   0x2A749E cmp     [rbp+4], ecx
//   0x2A74A1 jnz     loc_2A73A9
//   0x2A74A7 jmp     loc_2A73BA
// ============================================================

void sub_2A7370(/* signature unknown */)
{
    // see disassembly above
}

