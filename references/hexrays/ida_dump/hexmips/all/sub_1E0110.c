// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x1E0110
// Name:           sub_1E0110
// Function size:  1026 bytes (243 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x1E0110 push    r15
//   0x1E0112 xor     r15d, r15d
//   0x1E0115 push    r14
//   0x1E0117 push    r13
//   0x1E0119 push    r12
//   0x1E011B push    rbp
//   0x1E011C mov     rbp, rdi
//   0x1E011F push    rbx
//   0x1E0120 mov     rbx, rdx
//   0x1E0123 sub     rsp, 0A8h
//   0x1E012A mov     [rsp+0D8h+var_B8], rsi
//   0x1E012F mov     dword ptr [rsp+0D8h+var_D8], ecx
//   0x1E0132 mov     r12, fs:28h
//   0x1E013B mov     [rsp+0D8h+var_40], r12
//   0x1E0143 mov     r12, [rsi]
//   0x1E0146 movsxd  rax, dword ptr [r12+2Ch]
//   0x1E014B add     rax, [r12+18h]
//   0x1E0150 lea     r8, [r12+18h]
//   0x1E0155 cmp     byte ptr [r12+20h], 5
//   0x1E015B mov     [rsp+0D8h+var_D0], rax
//   0x1E0160 jnz     short loc_1E0178
//   0x1E0162 mov     rax, [rdi]
//   0x1E0165 mov     rax, [rax+5E0h]
//   0x1E016C mov     rax, [rax+60h]
//   0x1E0170 movzx   r15d, byte ptr [rax+91h]
//   0x1E0178 mov     rax, [rbx]
//   0x1E017B mov     rdx, [r12+18h]
//   0x1E0180 pxor    xmm0, xmm0
//   0x1E0184 lea     rdi, [r8+10h]
//   0x1E0188 mov     r14, cs:qword_406B60
//   0x1E018F movups  [rsp+0D8h+var_A8+8], xmm0
//   0x1E0194 mov     [rsp+0D8h+var_90], 0
//   0x1E019D mov     ecx, eax
//   0x1E019F sub     ecx, edx
//   0x1E01A1 mov     qword ptr [rsp+0D8h+var_A8], r14
//   0x1E01A6 mov     [rsp+0D8h+var_C4], ecx
//   0x1E01AA jnz     loc_1E0258
//   0x1E01B0 lea     r13, [rsp+0D8h+var_A8]
//   0x1E01B5 mov     rsi, rdi
//   0x1E01B8 mov     rdi, r13
//   0x1E01BB call    sub_30E010
//   0x1E01C0 mov     rax, [r12]
//   0x1E01C4 lea     rdi, [rbp+8]
//   0x1E01C8 mov     r9, r12
//   0x1E01CB test    al, 2
//   0x1E01CD jz      loc_1E02A8
//   0x1E01D3 mov     rsi, r12
//   0x1E01D6 mov     [rsp+0D8h+var_C0], r9
//   0x1E01DB call    sub_1DF510
//   0x1E01E0 mov     r9, [rsp+0D8h+var_C0]
//   0x1E01E5 movsxd  rax, dword ptr [rsp+0D8h+var_D8]
//   0x1E01E9 pxor    xmm0, xmm0
//   0x1E01ED add     rax, [rbx]
//   0x1E01F0 mov     qword ptr [rsp+0D8h+var_88], r14
//   0x1E01F5 mov     [rsp+0D8h+var_70], 0
//   0x1E01FE mov     rcx, rax
//   0x1E0201 movups  [rsp+0D8h+var_88+8], xmm0
//   0x1E0206 cmp     [rsp+0D8h+var_D0], rax
//   0x1E020B jg      loc_1E0370
//   0x1E0211 lea     r14, [rsp+0D8h+var_88]
//   0x1E0216 xor     ebx, ebx
//   0x1E0218 mov     rdi, r14
//   0x1E021B call    sub_30DE00
//   0x1E0220 mov     rdi, r13
//   0x1E0223 call    sub_30DE00
//   0x1E0228 mov     rax, [rsp+0D8h+var_40]
//   0x1E0230 sub     rax, fs:28h
//   0x1E0239 jnz     loc_1E04FD
//   0x1E023F add     rsp, 0A8h
//   0x1E0246 mov     eax, ebx
//   0x1E0248 pop     rbx
//   0x1E0249 pop     rbp
//   0x1E024A pop     r12
//   0x1E024C pop     r13
//   0x1E024E pop     r14
//   0x1E0250 pop     r15
//   0x1E0252 retn
//   0x1E0253 align 8
//   0x1E0258 test    r15b, r15b
//   0x1E025B jnz     loc_1E02F0
//   0x1E0261 lea     r13, [rsp+0D8h+var_A8]
//   0x1E0266 mov     edx, [rsp+0D8h+var_C4]
//   0x1E026A mov     [rsp+0D8h+var_C0], r8
//   0x1E026F mov     rsi, r13
//   0x1E0272 mov     [rsp+0D8h+var_B0], rdi
//   0x1E0277 call    sub_30FF80
//   0x1E027C test    al, al
//   0x1E027E mov     r8, [rsp+0D8h+var_C0]
//   0x1E0283 jz      loc_1E0470
//   0x1E0289 cmp     dword ptr [r8+10h], 1
//   0x1E028E jz      loc_1E0480
//   0x1E0294 mov     [rsp+0D8h+var_C4], 0
//   0x1E029C mov     r9, r12
//   0x1E029F jmp     loc_1E01E5
//   0x1E02A4 align 8
//   0x1E02A8 mov     rdx, [r12+10h]
//   0x1E02AD test    byte ptr [rdx], 2
//   0x1E02B0 jz      loc_1E0430
//   0x1E02B6 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E02BA mov     r9, rax
//   0x1E02BD mov     rax, [rax]
//   0x1E02C0 test    al, 2
//   0x1E02C2 jnz     loc_1E01D3
//   0x1E02C8 mov     rsi, r12
//   0x1E02CB cmp     rsi, [r9+10h]
//   0x1E02CF jnz     loc_1E01D3
//   0x1E02D5 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E02D9 mov     rsi, r9
//   0x1E02DC mov     rdx, rax
//   0x1E02DF mov     rax, [rax]
//   0x1E02E2 mov     r9, rdx
//   0x1E02E5 test    al, 2
//   0x1E02E7 jz      short loc_1E02CB
//   0x1E02E9 jmp     loc_1E01D3
//   0x1E02EE align 10h
//   0x1E02F0 lea     r13, [rsp+0D8h+var_A8]
//   0x1E02F5 sub     edx, eax
//   0x1E02F7 add     edx, [r8+14h]
//   0x1E02FB mov     [rsp+0D8h+var_B0], r8
//   0x1E0300 mov     rsi, r13
//   0x1E0303 mov     [rsp+0D8h+var_C0], rdi
//   0x1E0308 call    sub_30FF80
//   0x1E030D test    al, al
//   0x1E030F mov     rdi, [rsp+0D8h+var_C0]
//   0x1E0314 jz      loc_1E01B5
//   0x1E031A movdqa  xmm2, [rsp+0D8h+var_A8]
//   0x1E0320 mov     r8, [rsp+0D8h+var_B0]
//   0x1E0325 movdqu  xmm0, xmmword ptr [rdi+10h]
//   0x1E032A movdqu  xmm1, xmmword ptr [r8+10h]
//   0x1E0330 movups  xmmword ptr [r8+10h], xmm2
//   0x1E0335 movdqa  xmm2, xmmword ptr [rsp+40h]
//   0x1E033B movaps  [rsp+0D8h+var_58], xmm0
//   0x1E0343 movups  xmmword ptr [rdi+10h], xmm2
//   0x1E0347 movaps  [rsp+0D8h+var_A8], xmm1
//   0x1E034C movaps  xmmword ptr [rsp+40h], xmm0
//   0x1E0351 cmp     dword ptr [r8+10h], 1
//   0x1E0356 movaps  [rsp+0D8h+var_68], xmm1
//   0x1E035B jnz     loc_1E0294
//   0x1E0361 jmp     loc_1E0480
//   0x1E0366 align 10h
//   0x1E0370 mov     eax, dword ptr [rsp+0D8h+var_D8]
//   0x1E0373 mov     edx, [rsp+0D8h+var_C4]
//   0x1E0377 mov     [rsp+0D8h+var_D0], rcx
//   0x1E037C mov     [rsp+0D8h+var_D8], r9
//   0x1E0380 add     edx, eax
//   0x1E0382 test    r15b, r15b
//   0x1E0385 jz      loc_1E0448
//   0x1E038B mov     eax, dword ptr [rsp+0D8h+var_A8+4]
//   0x1E038F lea     r14, [rsp+0D8h+var_88]
//   0x1E0394 mov     rdi, r13
//   0x1E0397 mov     rsi, r14
//   0x1E039A sub     eax, edx
//   0x1E039C mov     edx, eax
//   0x1E039E call    sub_30FF80
//   0x1E03A3 test    al, al
//   0x1E03A5 jz      loc_1E0216
//   0x1E03AB movdqa  xmm2, [rsp+0D8h+var_88]
//   0x1E03B1 movdqa  xmm1, [rsp+0D8h+var_A8]
//   0x1E03B7 movdqa  xmm0, xmmword ptr [rsp+40h]
//   0x1E03BD mov     rcx, [rsp+0D8h+var_D0]
//   0x1E03C2 movaps  [rsp+0D8h+var_A8], xmm2
//   0x1E03C7 movdqa  xmm2, xmmword ptr [rsp+60h]
//   0x1E03CD mov     r9, [rsp+0D8h+var_D8]
//   0x1E03D1 movaps  [rsp+0D8h+var_68], xmm1
//   0x1E03D6 movaps  [rsp+0D8h+var_58], xmm0
//   0x1E03DE movaps  xmmword ptr [rsp+40h], xmm2
//   0x1E03E3 movaps  [rsp+0D8h+var_88], xmm1
//   0x1E03E8 movaps  xmmword ptr [rsp+60h], xmm0
//   0x1E03ED cmp     dword ptr [rsp+0D8h+var_88], 1
//   0x1E03F2 jz      loc_1E0216
//   0x1E03F8 movzx   edx, byte ptr [rbx+8]
//   0x1E03FC mov     rax, rcx
//   0x1E03FF lea     rdi, [rbp+8]
//   0x1E0403 mov     r8, r14
//   0x1E0406 mov     rsi, r9
//   0x1E0409 mov     rcx, rdx
//   0x1E040C mov     rdx, rax
//   0x1E040F call    sub_1DFD20
//   0x1E0414 mov     rbx, [rsp+0D8h+var_B8]
//   0x1E0419 mov     [rbx], rax
//   0x1E041C mov     ebx, 1
//   0x1E0421 jmp     loc_1E0218
//   0x1E0426 align 10h
//   0x1E0430 mov     r9, rdx
//   0x1E0433 mov     rdx, [rdx+8]
//   0x1E0437 test    byte ptr [rdx], 2
//   0x1E043A jnz     loc_1E01D3
//   0x1E0440 jmp     short loc_1E0430
//   0x1E0442 align 8
//   0x1E0448 lea     r14, [rsp+0D8h+var_88]
//   0x1E044D mov     rdi, r13
//   0x1E0450 mov     rsi, r14
//   0x1E0453 call    sub_30FF80
//   0x1E0458 test    al, al
//   0x1E045A mov     r9, [rsp+0D8h+var_D8]
//   0x1E045E mov     rcx, [rsp+0D8h+var_D0]
//   0x1E0463 jnz     short loc_1E03ED
//   0x1E0465 jmp     loc_1E0216
//   0x1E046A align 10h
//   0x1E0470 mov     rdi, [rsp+0D8h+var_B0]
//   0x1E0475 jmp     loc_1E01B5
//   0x1E047A align 20h
//   0x1E0480 mov     rax, [r12]
//   0x1E0484 lea     rdi, [rbp+8]
//   0x1E0488 mov     r9, r12
//   0x1E048B test    al, 2
//   0x1E048D jz      short loc_1E04B0
//   0x1E048F mov     rsi, r12
//   0x1E0492 mov     [rsp+0D8h+var_C0], r9
//   0x1E0497 call    sub_1DF510
//   0x1E049C mov     [rsp+0D8h+var_C4], 0
//   0x1E04A4 jmp     loc_1E01E0
//   0x1E04A9 align 10h
//   0x1E04B0 mov     rdx, [r12+10h]
//   0x1E04B5 test    byte ptr [rdx], 2
//   0x1E04B8 jnz     short loc_1E04D0
//   0x1E04BA mov     r9, rdx
//   0x1E04BD mov     rdx, [rdx+8]
//   0x1E04C1 test    byte ptr [rdx], 2
//   0x1E04C4 jnz     short loc_1E048F
//   0x1E04C6 jmp     short loc_1E04BA
//   0x1E04C8 align 10h
//   0x1E04D0 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E04D4 mov     r9, rax
//   0x1E04D7 mov     rax, [rax]
//   0x1E04DA test    al, 2
//   0x1E04DC jnz     short loc_1E048F
//   0x1E04DE mov     rsi, r12
//   0x1E04E1 cmp     rsi, [r9+10h]
//   0x1E04E5 jnz     short loc_1E048F
//   0x1E04E7 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E04EB mov     rsi, r9
//   0x1E04EE mov     rdx, rax
//   0x1E04F1 mov     rax, [rax]
//   0x1E04F4 mov     r9, rdx
//   0x1E04F7 test    al, 2
//   0x1E04F9 jz      short loc_1E04E1
//   0x1E04FB jmp     short loc_1E048F
//   0x1E04FD call    ___stack_chk_fail
//   0x1E0502 mov     rbx, rax
//   0x1E0505 jmp     loc_41706
//   0x1E050A mov     rbx, rax
//   0x1E050D jmp     loc_4170E
// ============================================================

void sub_1E0110(/* signature unknown */)
{
    // see disassembly above
}

