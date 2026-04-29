// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x1E4D50
// Name:           sub_1E4D50
// Function size:  1026 bytes (243 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x1E4D50 push    r15
//   0x1E4D52 xor     r15d, r15d
//   0x1E4D55 push    r14
//   0x1E4D57 push    r13
//   0x1E4D59 push    r12
//   0x1E4D5B push    rbp
//   0x1E4D5C mov     rbp, rdi
//   0x1E4D5F push    rbx
//   0x1E4D60 mov     rbx, rdx
//   0x1E4D63 sub     rsp, 0A8h
//   0x1E4D6A mov     [rsp+0D8h+var_B8], rsi
//   0x1E4D6F mov     dword ptr [rsp+0D8h+var_D8], ecx
//   0x1E4D72 mov     r12, fs:28h
//   0x1E4D7B mov     [rsp+0D8h+var_40], r12
//   0x1E4D83 mov     r12, [rsi]
//   0x1E4D86 movsxd  rax, dword ptr [r12+2Ch]
//   0x1E4D8B add     rax, [r12+18h]
//   0x1E4D90 lea     r8, [r12+18h]
//   0x1E4D95 cmp     byte ptr [r12+20h], 5
//   0x1E4D9B mov     [rsp+0D8h+var_D0], rax
//   0x1E4DA0 jnz     short loc_1E4DB8
//   0x1E4DA2 mov     rax, [rdi]
//   0x1E4DA5 mov     rax, [rax+5E0h]
//   0x1E4DAC mov     rax, [rax+60h]
//   0x1E4DB0 movzx   r15d, byte ptr [rax+91h]
//   0x1E4DB8 mov     rax, [rbx]
//   0x1E4DBB mov     rdx, [r12+18h]
//   0x1E4DC0 pxor    xmm0, xmm0
//   0x1E4DC4 lea     rdi, [r8+10h]
//   0x1E4DC8 mov     r14, cs:qword_41F238
//   0x1E4DCF movups  [rsp+0D8h+var_A8+8], xmm0
//   0x1E4DD4 mov     [rsp+0D8h+var_90], 0
//   0x1E4DDD mov     ecx, eax
//   0x1E4DDF sub     ecx, edx
//   0x1E4DE1 mov     qword ptr [rsp+0D8h+var_A8], r14
//   0x1E4DE6 mov     [rsp+0D8h+var_C4], ecx
//   0x1E4DEA jnz     loc_1E4E98
//   0x1E4DF0 lea     r13, [rsp+0D8h+var_A8]
//   0x1E4DF5 mov     rsi, rdi
//   0x1E4DF8 mov     rdi, r13
//   0x1E4DFB call    sub_313150
//   0x1E4E00 mov     rax, [r12]
//   0x1E4E04 lea     rdi, [rbp+8]
//   0x1E4E08 mov     r9, r12
//   0x1E4E0B test    al, 2
//   0x1E4E0D jz      loc_1E4EE8
//   0x1E4E13 mov     rsi, r12
//   0x1E4E16 mov     [rsp+0D8h+var_C0], r9
//   0x1E4E1B call    sub_1E4150
//   0x1E4E20 mov     r9, [rsp+0D8h+var_C0]
//   0x1E4E25 movsxd  rax, dword ptr [rsp+0D8h+var_D8]
//   0x1E4E29 pxor    xmm0, xmm0
//   0x1E4E2D add     rax, [rbx]
//   0x1E4E30 mov     qword ptr [rsp+0D8h+var_88], r14
//   0x1E4E35 mov     [rsp+0D8h+var_70], 0
//   0x1E4E3E mov     rcx, rax
//   0x1E4E41 movups  [rsp+0D8h+var_88+8], xmm0
//   0x1E4E46 cmp     [rsp+0D8h+var_D0], rax
//   0x1E4E4B jg      loc_1E4FB0
//   0x1E4E51 lea     r14, [rsp+0D8h+var_88]
//   0x1E4E56 xor     ebx, ebx
//   0x1E4E58 mov     rdi, r14
//   0x1E4E5B call    sub_312F40
//   0x1E4E60 mov     rdi, r13
//   0x1E4E63 call    sub_312F40
//   0x1E4E68 mov     rax, [rsp+0D8h+var_40]
//   0x1E4E70 sub     rax, fs:28h
//   0x1E4E79 jnz     loc_1E513D
//   0x1E4E7F add     rsp, 0A8h
//   0x1E4E86 mov     eax, ebx
//   0x1E4E88 pop     rbx
//   0x1E4E89 pop     rbp
//   0x1E4E8A pop     r12
//   0x1E4E8C pop     r13
//   0x1E4E8E pop     r14
//   0x1E4E90 pop     r15
//   0x1E4E92 retn
//   0x1E4E93 align 8
//   0x1E4E98 test    r15b, r15b
//   0x1E4E9B jnz     loc_1E4F30
//   0x1E4EA1 lea     r13, [rsp+0D8h+var_A8]
//   0x1E4EA6 mov     edx, [rsp+0D8h+var_C4]
//   0x1E4EAA mov     [rsp+0D8h+var_C0], r8
//   0x1E4EAF mov     rsi, r13
//   0x1E4EB2 mov     [rsp+0D8h+var_B0], rdi
//   0x1E4EB7 call    sub_3150C0
//   0x1E4EBC test    al, al
//   0x1E4EBE mov     r8, [rsp+0D8h+var_C0]
//   0x1E4EC3 jz      loc_1E50B0
//   0x1E4EC9 cmp     dword ptr [r8+10h], 1
//   0x1E4ECE jz      loc_1E50C0
//   0x1E4ED4 mov     [rsp+0D8h+var_C4], 0
//   0x1E4EDC mov     r9, r12
//   0x1E4EDF jmp     loc_1E4E25
//   0x1E4EE4 align 8
//   0x1E4EE8 mov     rdx, [r12+10h]
//   0x1E4EED test    byte ptr [rdx], 2
//   0x1E4EF0 jz      loc_1E5070
//   0x1E4EF6 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E4EFA mov     r9, rax
//   0x1E4EFD mov     rax, [rax]
//   0x1E4F00 test    al, 2
//   0x1E4F02 jnz     loc_1E4E13
//   0x1E4F08 mov     rsi, r12
//   0x1E4F0B cmp     rsi, [r9+10h]
//   0x1E4F0F jnz     loc_1E4E13
//   0x1E4F15 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E4F19 mov     rsi, r9
//   0x1E4F1C mov     rdx, rax
//   0x1E4F1F mov     rax, [rax]
//   0x1E4F22 mov     r9, rdx
//   0x1E4F25 test    al, 2
//   0x1E4F27 jz      short loc_1E4F0B
//   0x1E4F29 jmp     loc_1E4E13
//   0x1E4F2E align 10h
//   0x1E4F30 lea     r13, [rsp+0D8h+var_A8]
//   0x1E4F35 sub     edx, eax
//   0x1E4F37 add     edx, [r8+14h]
//   0x1E4F3B mov     [rsp+0D8h+var_B0], r8
//   0x1E4F40 mov     rsi, r13
//   0x1E4F43 mov     [rsp+0D8h+var_C0], rdi
//   0x1E4F48 call    sub_3150C0
//   0x1E4F4D test    al, al
//   0x1E4F4F mov     rdi, [rsp+0D8h+var_C0]
//   0x1E4F54 jz      loc_1E4DF5
//   0x1E4F5A movdqa  xmm2, [rsp+0D8h+var_A8]
//   0x1E4F60 mov     r8, [rsp+0D8h+var_B0]
//   0x1E4F65 movdqu  xmm0, xmmword ptr [rdi+10h]
//   0x1E4F6A movdqu  xmm1, xmmword ptr [r8+10h]
//   0x1E4F70 movups  xmmword ptr [r8+10h], xmm2
//   0x1E4F75 movdqa  xmm2, xmmword ptr [rsp+40h]
//   0x1E4F7B movaps  [rsp+0D8h+var_58], xmm0
//   0x1E4F83 movups  xmmword ptr [rdi+10h], xmm2
//   0x1E4F87 movaps  [rsp+0D8h+var_A8], xmm1
//   0x1E4F8C movaps  xmmword ptr [rsp+40h], xmm0
//   0x1E4F91 cmp     dword ptr [r8+10h], 1
//   0x1E4F96 movaps  [rsp+0D8h+var_68], xmm1
//   0x1E4F9B jnz     loc_1E4ED4
//   0x1E4FA1 jmp     loc_1E50C0
//   0x1E4FA6 align 10h
//   0x1E4FB0 mov     eax, dword ptr [rsp+0D8h+var_D8]
//   0x1E4FB3 mov     edx, [rsp+0D8h+var_C4]
//   0x1E4FB7 mov     [rsp+0D8h+var_D0], rcx
//   0x1E4FBC mov     [rsp+0D8h+var_D8], r9
//   0x1E4FC0 add     edx, eax
//   0x1E4FC2 test    r15b, r15b
//   0x1E4FC5 jz      loc_1E5088
//   0x1E4FCB mov     eax, dword ptr [rsp+0D8h+var_A8+4]
//   0x1E4FCF lea     r14, [rsp+0D8h+var_88]
//   0x1E4FD4 mov     rdi, r13
//   0x1E4FD7 mov     rsi, r14
//   0x1E4FDA sub     eax, edx
//   0x1E4FDC mov     edx, eax
//   0x1E4FDE call    sub_3150C0
//   0x1E4FE3 test    al, al
//   0x1E4FE5 jz      loc_1E4E56
//   0x1E4FEB movdqa  xmm2, [rsp+0D8h+var_88]
//   0x1E4FF1 movdqa  xmm1, [rsp+0D8h+var_A8]
//   0x1E4FF7 movdqa  xmm0, xmmword ptr [rsp+40h]
//   0x1E4FFD mov     rcx, [rsp+0D8h+var_D0]
//   0x1E5002 movaps  [rsp+0D8h+var_A8], xmm2
//   0x1E5007 movdqa  xmm2, xmmword ptr [rsp+60h]
//   0x1E500D mov     r9, [rsp+0D8h+var_D8]
//   0x1E5011 movaps  [rsp+0D8h+var_68], xmm1
//   0x1E5016 movaps  [rsp+0D8h+var_58], xmm0
//   0x1E501E movaps  xmmword ptr [rsp+40h], xmm2
//   0x1E5023 movaps  [rsp+0D8h+var_88], xmm1
//   0x1E5028 movaps  xmmword ptr [rsp+60h], xmm0
//   0x1E502D cmp     dword ptr [rsp+0D8h+var_88], 1
//   0x1E5032 jz      loc_1E4E56
//   0x1E5038 movzx   edx, byte ptr [rbx+8]
//   0x1E503C mov     rax, rcx
//   0x1E503F lea     rdi, [rbp+8]
//   0x1E5043 mov     r8, r14
//   0x1E5046 mov     rsi, r9
//   0x1E5049 mov     rcx, rdx
//   0x1E504C mov     rdx, rax
//   0x1E504F call    sub_1E4960
//   0x1E5054 mov     rbx, [rsp+0D8h+var_B8]
//   0x1E5059 mov     [rbx], rax
//   0x1E505C mov     ebx, 1
//   0x1E5061 jmp     loc_1E4E58
//   0x1E5066 align 10h
//   0x1E5070 mov     r9, rdx
//   0x1E5073 mov     rdx, [rdx+8]
//   0x1E5077 test    byte ptr [rdx], 2
//   0x1E507A jnz     loc_1E4E13
//   0x1E5080 jmp     short loc_1E5070
//   0x1E5082 align 8
//   0x1E5088 lea     r14, [rsp+0D8h+var_88]
//   0x1E508D mov     rdi, r13
//   0x1E5090 mov     rsi, r14
//   0x1E5093 call    sub_3150C0
//   0x1E5098 test    al, al
//   0x1E509A mov     r9, [rsp+0D8h+var_D8]
//   0x1E509E mov     rcx, [rsp+0D8h+var_D0]
//   0x1E50A3 jnz     short loc_1E502D
//   0x1E50A5 jmp     loc_1E4E56
//   0x1E50AA align 10h
//   0x1E50B0 mov     rdi, [rsp+0D8h+var_B0]
//   0x1E50B5 jmp     loc_1E4DF5
//   0x1E50BA align 20h
//   0x1E50C0 mov     rax, [r12]
//   0x1E50C4 lea     rdi, [rbp+8]
//   0x1E50C8 mov     r9, r12
//   0x1E50CB test    al, 2
//   0x1E50CD jz      short loc_1E50F0
//   0x1E50CF mov     rsi, r12
//   0x1E50D2 mov     [rsp+0D8h+var_C0], r9
//   0x1E50D7 call    sub_1E4150
//   0x1E50DC mov     [rsp+0D8h+var_C4], 0
//   0x1E50E4 jmp     loc_1E4E20
//   0x1E50E9 align 10h
//   0x1E50F0 mov     rdx, [r12+10h]
//   0x1E50F5 test    byte ptr [rdx], 2
//   0x1E50F8 jnz     short loc_1E5110
//   0x1E50FA mov     r9, rdx
//   0x1E50FD mov     rdx, [rdx+8]
//   0x1E5101 test    byte ptr [rdx], 2
//   0x1E5104 jnz     short loc_1E50CF
//   0x1E5106 jmp     short loc_1E50FA
//   0x1E5108 align 10h
//   0x1E5110 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E5114 mov     r9, rax
//   0x1E5117 mov     rax, [rax]
//   0x1E511A test    al, 2
//   0x1E511C jnz     short loc_1E50CF
//   0x1E511E mov     rsi, r12
//   0x1E5121 cmp     rsi, [r9+10h]
//   0x1E5125 jnz     short loc_1E50CF
//   0x1E5127 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E512B mov     rsi, r9
//   0x1E512E mov     rdx, rax
//   0x1E5131 mov     rax, [rax]
//   0x1E5134 mov     r9, rdx
//   0x1E5137 test    al, 2
//   0x1E5139 jz      short loc_1E5121
//   0x1E513B jmp     short loc_1E50CF
//   0x1E513D call    ___stack_chk_fail
//   0x1E5142 mov     rbx, rax
//   0x1E5145 jmp     loc_44874
//   0x1E514A mov     rbx, rax
//   0x1E514D jmp     loc_4487C
// ============================================================

void sub_1E4D50(/* signature unknown */)
{
    // see disassembly above
}

