// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x1DFD90
// Name:           sub_1DFD90
// Function size:  1026 bytes (243 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x1DFD90 push    r15
//   0x1DFD92 xor     r15d, r15d
//   0x1DFD95 push    r14
//   0x1DFD97 push    r13
//   0x1DFD99 push    r12
//   0x1DFD9B push    rbp
//   0x1DFD9C mov     rbp, rdi
//   0x1DFD9F push    rbx
//   0x1DFDA0 mov     rbx, rdx
//   0x1DFDA3 sub     rsp, 0A8h
//   0x1DFDAA mov     [rsp+0D8h+var_B8], rsi
//   0x1DFDAF mov     dword ptr [rsp+0D8h+var_D8], ecx
//   0x1DFDB2 mov     r12, fs:28h
//   0x1DFDBB mov     [rsp+0D8h+var_40], r12
//   0x1DFDC3 mov     r12, [rsi]
//   0x1DFDC6 movsxd  rax, dword ptr [r12+2Ch]
//   0x1DFDCB add     rax, [r12+18h]
//   0x1DFDD0 lea     r8, [r12+18h]
//   0x1DFDD5 cmp     byte ptr [r12+20h], 5
//   0x1DFDDB mov     [rsp+0D8h+var_D0], rax
//   0x1DFDE0 jnz     short loc_1DFDF8
//   0x1DFDE2 mov     rax, [rdi]
//   0x1DFDE5 mov     rax, [rax+5E0h]
//   0x1DFDEC mov     rax, [rax+60h]
//   0x1DFDF0 movzx   r15d, byte ptr [rax+91h]
//   0x1DFDF8 mov     rax, [rbx]
//   0x1DFDFB mov     rdx, [r12+18h]
//   0x1DFE00 pxor    xmm0, xmm0
//   0x1DFE04 lea     rdi, [r8+10h]
//   0x1DFE08 mov     r14, cs:qword_3FDBA0
//   0x1DFE0F movups  [rsp+0D8h+var_A8+8], xmm0
//   0x1DFE14 mov     [rsp+0D8h+var_90], 0
//   0x1DFE1D mov     ecx, eax
//   0x1DFE1F sub     ecx, edx
//   0x1DFE21 mov     qword ptr [rsp+0D8h+var_A8], r14
//   0x1DFE26 mov     [rsp+0D8h+var_C4], ecx
//   0x1DFE2A jnz     loc_1DFED8
//   0x1DFE30 lea     r13, [rsp+0D8h+var_A8]
//   0x1DFE35 mov     rsi, rdi
//   0x1DFE38 mov     rdi, r13
//   0x1DFE3B call    sub_30DC90
//   0x1DFE40 mov     rax, [r12]
//   0x1DFE44 lea     rdi, [rbp+8]
//   0x1DFE48 mov     r9, r12
//   0x1DFE4B test    al, 2
//   0x1DFE4D jz      loc_1DFF28
//   0x1DFE53 mov     rsi, r12
//   0x1DFE56 mov     [rsp+0D8h+var_C0], r9
//   0x1DFE5B call    sub_1DF190
//   0x1DFE60 mov     r9, [rsp+0D8h+var_C0]
//   0x1DFE65 movsxd  rax, dword ptr [rsp+0D8h+var_D8]
//   0x1DFE69 pxor    xmm0, xmm0
//   0x1DFE6D add     rax, [rbx]
//   0x1DFE70 mov     qword ptr [rsp+0D8h+var_88], r14
//   0x1DFE75 mov     [rsp+0D8h+var_70], 0
//   0x1DFE7E mov     rcx, rax
//   0x1DFE81 movups  [rsp+0D8h+var_88+8], xmm0
//   0x1DFE86 cmp     [rsp+0D8h+var_D0], rax
//   0x1DFE8B jg      loc_1DFFF0
//   0x1DFE91 lea     r14, [rsp+0D8h+var_88]
//   0x1DFE96 xor     ebx, ebx
//   0x1DFE98 mov     rdi, r14
//   0x1DFE9B call    sub_30DA80
//   0x1DFEA0 mov     rdi, r13
//   0x1DFEA3 call    sub_30DA80
//   0x1DFEA8 mov     rax, [rsp+0D8h+var_40]
//   0x1DFEB0 sub     rax, fs:28h
//   0x1DFEB9 jnz     loc_1E017D
//   0x1DFEBF add     rsp, 0A8h
//   0x1DFEC6 mov     eax, ebx
//   0x1DFEC8 pop     rbx
//   0x1DFEC9 pop     rbp
//   0x1DFECA pop     r12
//   0x1DFECC pop     r13
//   0x1DFECE pop     r14
//   0x1DFED0 pop     r15
//   0x1DFED2 retn
//   0x1DFED3 align 8
//   0x1DFED8 test    r15b, r15b
//   0x1DFEDB jnz     loc_1DFF70
//   0x1DFEE1 lea     r13, [rsp+0D8h+var_A8]
//   0x1DFEE6 mov     edx, [rsp+0D8h+var_C4]
//   0x1DFEEA mov     [rsp+0D8h+var_C0], r8
//   0x1DFEEF mov     rsi, r13
//   0x1DFEF2 mov     [rsp+0D8h+var_B0], rdi
//   0x1DFEF7 call    sub_30FC00
//   0x1DFEFC test    al, al
//   0x1DFEFE mov     r8, [rsp+0D8h+var_C0]
//   0x1DFF03 jz      loc_1E00F0
//   0x1DFF09 cmp     dword ptr [r8+10h], 1
//   0x1DFF0E jz      loc_1E0100
//   0x1DFF14 mov     [rsp+0D8h+var_C4], 0
//   0x1DFF1C mov     r9, r12
//   0x1DFF1F jmp     loc_1DFE65
//   0x1DFF24 align 8
//   0x1DFF28 mov     rdx, [r12+10h]
//   0x1DFF2D test    byte ptr [rdx], 2
//   0x1DFF30 jz      loc_1E00B0
//   0x1DFF36 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1DFF3A mov     r9, rax
//   0x1DFF3D mov     rax, [rax]
//   0x1DFF40 test    al, 2
//   0x1DFF42 jnz     loc_1DFE53
//   0x1DFF48 mov     rsi, r12
//   0x1DFF4B cmp     rsi, [r9+10h]
//   0x1DFF4F jnz     loc_1DFE53
//   0x1DFF55 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1DFF59 mov     rsi, r9
//   0x1DFF5C mov     rdx, rax
//   0x1DFF5F mov     rax, [rax]
//   0x1DFF62 mov     r9, rdx
//   0x1DFF65 test    al, 2
//   0x1DFF67 jz      short loc_1DFF4B
//   0x1DFF69 jmp     loc_1DFE53
//   0x1DFF6E align 10h
//   0x1DFF70 lea     r13, [rsp+0D8h+var_A8]
//   0x1DFF75 sub     edx, eax
//   0x1DFF77 add     edx, [r8+14h]
//   0x1DFF7B mov     [rsp+0D8h+var_B0], r8
//   0x1DFF80 mov     rsi, r13
//   0x1DFF83 mov     [rsp+0D8h+var_C0], rdi
//   0x1DFF88 call    sub_30FC00
//   0x1DFF8D test    al, al
//   0x1DFF8F mov     rdi, [rsp+0D8h+var_C0]
//   0x1DFF94 jz      loc_1DFE35
//   0x1DFF9A movdqa  xmm2, [rsp+0D8h+var_A8]
//   0x1DFFA0 mov     r8, [rsp+0D8h+var_B0]
//   0x1DFFA5 movdqu  xmm0, xmmword ptr [rdi+10h]
//   0x1DFFAA movdqu  xmm1, xmmword ptr [r8+10h]
//   0x1DFFB0 movups  xmmword ptr [r8+10h], xmm2
//   0x1DFFB5 movdqa  xmm2, xmmword ptr [rsp+40h]
//   0x1DFFBB movaps  [rsp+0D8h+var_58], xmm0
//   0x1DFFC3 movups  xmmword ptr [rdi+10h], xmm2
//   0x1DFFC7 movaps  [rsp+0D8h+var_A8], xmm1
//   0x1DFFCC movaps  xmmword ptr [rsp+40h], xmm0
//   0x1DFFD1 cmp     dword ptr [r8+10h], 1
//   0x1DFFD6 movaps  [rsp+0D8h+var_68], xmm1
//   0x1DFFDB jnz     loc_1DFF14
//   0x1DFFE1 jmp     loc_1E0100
//   0x1DFFE6 align 10h
//   0x1DFFF0 mov     eax, dword ptr [rsp+0D8h+var_D8]
//   0x1DFFF3 mov     edx, [rsp+0D8h+var_C4]
//   0x1DFFF7 mov     [rsp+0D8h+var_D0], rcx
//   0x1DFFFC mov     [rsp+0D8h+var_D8], r9
//   0x1E0000 add     edx, eax
//   0x1E0002 test    r15b, r15b
//   0x1E0005 jz      loc_1E00C8
//   0x1E000B mov     eax, dword ptr [rsp+0D8h+var_A8+4]
//   0x1E000F lea     r14, [rsp+0D8h+var_88]
//   0x1E0014 mov     rdi, r13
//   0x1E0017 mov     rsi, r14
//   0x1E001A sub     eax, edx
//   0x1E001C mov     edx, eax
//   0x1E001E call    sub_30FC00
//   0x1E0023 test    al, al
//   0x1E0025 jz      loc_1DFE96
//   0x1E002B movdqa  xmm2, [rsp+0D8h+var_88]
//   0x1E0031 movdqa  xmm1, [rsp+0D8h+var_A8]
//   0x1E0037 movdqa  xmm0, xmmword ptr [rsp+40h]
//   0x1E003D mov     rcx, [rsp+0D8h+var_D0]
//   0x1E0042 movaps  [rsp+0D8h+var_A8], xmm2
//   0x1E0047 movdqa  xmm2, xmmword ptr [rsp+60h]
//   0x1E004D mov     r9, [rsp+0D8h+var_D8]
//   0x1E0051 movaps  [rsp+0D8h+var_68], xmm1
//   0x1E0056 movaps  [rsp+0D8h+var_58], xmm0
//   0x1E005E movaps  xmmword ptr [rsp+40h], xmm2
//   0x1E0063 movaps  [rsp+0D8h+var_88], xmm1
//   0x1E0068 movaps  xmmword ptr [rsp+60h], xmm0
//   0x1E006D cmp     dword ptr [rsp+0D8h+var_88], 1
//   0x1E0072 jz      loc_1DFE96
//   0x1E0078 movzx   edx, byte ptr [rbx+8]
//   0x1E007C mov     rax, rcx
//   0x1E007F lea     rdi, [rbp+8]
//   0x1E0083 mov     r8, r14
//   0x1E0086 mov     rsi, r9
//   0x1E0089 mov     rcx, rdx
//   0x1E008C mov     rdx, rax
//   0x1E008F call    sub_1DF9A0
//   0x1E0094 mov     rbx, [rsp+0D8h+var_B8]
//   0x1E0099 mov     [rbx], rax
//   0x1E009C mov     ebx, 1
//   0x1E00A1 jmp     loc_1DFE98
//   0x1E00A6 align 10h
//   0x1E00B0 mov     r9, rdx
//   0x1E00B3 mov     rdx, [rdx+8]
//   0x1E00B7 test    byte ptr [rdx], 2
//   0x1E00BA jnz     loc_1DFE53
//   0x1E00C0 jmp     short loc_1E00B0
//   0x1E00C2 align 8
//   0x1E00C8 lea     r14, [rsp+0D8h+var_88]
//   0x1E00CD mov     rdi, r13
//   0x1E00D0 mov     rsi, r14
//   0x1E00D3 call    sub_30FC00
//   0x1E00D8 test    al, al
//   0x1E00DA mov     r9, [rsp+0D8h+var_D8]
//   0x1E00DE mov     rcx, [rsp+0D8h+var_D0]
//   0x1E00E3 jnz     short loc_1E006D
//   0x1E00E5 jmp     loc_1DFE96
//   0x1E00EA align 10h
//   0x1E00F0 mov     rdi, [rsp+0D8h+var_B0]
//   0x1E00F5 jmp     loc_1DFE35
//   0x1E00FA align 20h
//   0x1E0100 mov     rax, [r12]
//   0x1E0104 lea     rdi, [rbp+8]
//   0x1E0108 mov     r9, r12
//   0x1E010B test    al, 2
//   0x1E010D jz      short loc_1E0130
//   0x1E010F mov     rsi, r12
//   0x1E0112 mov     [rsp+0D8h+var_C0], r9
//   0x1E0117 call    sub_1DF190
//   0x1E011C mov     [rsp+0D8h+var_C4], 0
//   0x1E0124 jmp     loc_1DFE60
//   0x1E0129 align 10h
//   0x1E0130 mov     rdx, [r12+10h]
//   0x1E0135 test    byte ptr [rdx], 2
//   0x1E0138 jnz     short loc_1E0150
//   0x1E013A mov     r9, rdx
//   0x1E013D mov     rdx, [rdx+8]
//   0x1E0141 test    byte ptr [rdx], 2
//   0x1E0144 jnz     short loc_1E010F
//   0x1E0146 jmp     short loc_1E013A
//   0x1E0148 align 10h
//   0x1E0150 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E0154 mov     r9, rax
//   0x1E0157 mov     rax, [rax]
//   0x1E015A test    al, 2
//   0x1E015C jnz     short loc_1E010F
//   0x1E015E mov     rsi, r12
//   0x1E0161 cmp     rsi, [r9+10h]
//   0x1E0165 jnz     short loc_1E010F
//   0x1E0167 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E016B mov     rsi, r9
//   0x1E016E mov     rdx, rax
//   0x1E0171 mov     rax, [rax]
//   0x1E0174 mov     r9, rdx
//   0x1E0177 test    al, 2
//   0x1E0179 jz      short loc_1E0161
//   0x1E017B jmp     short loc_1E010F
//   0x1E017D call    ___stack_chk_fail
//   0x1E0182 mov     rbx, rax
//   0x1E0185 jmp     loc_416D8
//   0x1E018A mov     rbx, rax
//   0x1E018D jmp     loc_416E0
// ============================================================

void sub_1DFD90(/* signature unknown */)
{
    // see disassembly above
}

