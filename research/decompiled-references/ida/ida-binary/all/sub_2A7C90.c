// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x2A7C90
// Name:           sub_2A7C90
// Function size:  380 bytes (87 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x2A7C90 push    r12
//   0x2A7C92 push    rbp
//   0x2A7C93 push    rbx
//   0x2A7C94 mov     rbx, rdi
//   0x2A7C97 sub     rsp, 10h
//   0x2A7C9B mov     r12, fs:28h
//   0x2A7CA4 mov     [rsp+28h+var_20], r12
//   0x2A7CA9 mov     r12, rsi
//   0x2A7CAC xor     esi, esi
//   0x2A7CAE call    sub_2A6DC0
//   0x2A7CB3 test    rax, rax
//   0x2A7CB6 jz      short loc_2A7CC0
//   0x2A7CB8 test    byte ptr [r12+44h], 1
//   0x2A7CBE jnz     short loc_2A7CE0
//   0x2A7CC0 mov     rax, [rsp+28h+var_20]
//   0x2A7CC5 sub     rax, fs:28h
//   0x2A7CCE jnz     loc_2A7E07
//   0x2A7CD4 add     rsp, 10h
//   0x2A7CD8 pop     rbx
//   0x2A7CD9 pop     rbp
//   0x2A7CDA pop     r12
//   0x2A7CDC retn
//   0x2A7CDD align 20h
//   0x2A7CE0 pxor    xmm0, xmm0
//   0x2A7CE4 mov     rbp, rax
//   0x2A7CE7 movups  xmmword ptr [rbx+98h], xmm0
//   0x2A7CEE mov     rdi, [r12+30h]; this
//   0x2A7CF3 mov     r12, rsp
//   0x2A7CF6 call    __ZNK2QT11QEventPoint8positionEv; QT::QEventPoint::position(void)
//   0x2A7CFB xor     edx, edx
//   0x2A7CFD lea     rdi, [rbx+80h]
//   0x2A7D04 mov     rsi, rsp
//   0x2A7D07 movdqa  xmm2, xmm0
//   0x2A7D0B movsd   xmm0, cs:qword_5DBF28
//   0x2A7D13 punpcklqdq xmm2, xmm1
//   0x2A7D17 movsd   xmm1, cs:qword_5DBF48
//   0x2A7D1F unpcklpd xmm0, xmm0
//   0x2A7D23 unpcklpd xmm1, xmm1
//   0x2A7D27 andpd   xmm1, xmm2
//   0x2A7D2B orpd    xmm0, xmm1
//   0x2A7D2F addpd   xmm0, xmm2
//   0x2A7D33 cvttpd2dq xmm0, xmm0
//   0x2A7D37 movq    [rsp+28h+var_28], xmm0
//   0x2A7D3C call    __ZNK2QT5QRect8containsERKNS_6QPointEb; QT::QRect::contains(QT::QPoint const&,bool)
//   0x2A7D41 test    al, al
//   0x2A7D43 jnz     short loc_2A7D58
//   0x2A7D45 mov     rsi, r12
//   0x2A7D48 mov     rdi, rbx
//   0x2A7D4B call    sub_2A7370
//   0x2A7D50 jmp     loc_2A7CC0
//   0x2A7D55 align 8
//   0x2A7D58 mov     rdi, [rbp+10h]
//   0x2A7D5C add     rdi, 180h
//   0x2A7D63 call    sub_1EA6C0
//   0x2A7D68 mov     ecx, [rbx+88h]
//   0x2A7D6E pxor    xmm0, xmm0
//   0x2A7D72 movsd   xmm3, qword ptr [rbx+68h]
//   0x2A7D77 movsd   xmm1, qword ptr [rax+8]
//   0x2A7D7C subsd   xmm1, qword ptr [rbx+70h]
//   0x2A7D81 lea     edx, [rcx+1]
//   0x2A7D84 sub     edx, [rbx+80h]
//   0x2A7D8A mov     ecx, [rbx+8Ch]
//   0x2A7D90 cvtsi2sd xmm0, edx
//   0x2A7D94 movsd   xmm2, cs:qword_5DBF28
//   0x2A7D9C mulsd   xmm1, xmm3
//   0x2A7DA0 lea     edx, [rcx+1]
//   0x2A7DA3 sub     edx, [rbx+84h]
//   0x2A7DA9 mulsd   xmm0, xmm2
//   0x2A7DAD addsd   xmm0, xmm1
//   0x2A7DB1 pxor    xmm1, xmm1
//   0x2A7DB5 cvtsi2sd xmm1, edx
//   0x2A7DB9 movsd   qword ptr [rbx+98h], xmm0
//   0x2A7DC1 mulsd   xmm1, xmm2
//   0x2A7DC5 movsd   xmm2, qword ptr [rax+10h]
//   0x2A7DCA subsd   xmm2, qword ptr [rbx+78h]
//   0x2A7DCF mulsd   xmm2, xmm3
//   0x2A7DD3 pxor    xmm3, xmm3
//   0x2A7DD7 cvtsi2sd xmm3, dword ptr [rsp+28h+var_28]
//   0x2A7DDC addsd   xmm1, xmm2
//   0x2A7DE0 pxor    xmm2, xmm2
//   0x2A7DE4 subsd   xmm0, xmm3
//   0x2A7DE8 cvtsi2sd xmm2, dword ptr [rsp+28h+var_28+4]
//   0x2A7DEE movsd   qword ptr [rbx+98h], xmm0
//   0x2A7DF6 subsd   xmm1, xmm2
//   0x2A7DFA movsd   qword ptr [rbx+0A0h], xmm1
//   0x2A7E02 jmp     loc_2A7D45
//   0x2A7E07 call    ___stack_chk_fail
// ============================================================

void sub_2A7C90(/* signature unknown */)
{
    // see disassembly above
}

