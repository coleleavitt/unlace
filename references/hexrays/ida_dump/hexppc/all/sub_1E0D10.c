// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x1E0D10
// Name:           sub_1E0D10
// Function size:  1026 bytes (243 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x1E0D10 push    r15
//   0x1E0D12 xor     r15d, r15d
//   0x1E0D15 push    r14
//   0x1E0D17 push    r13
//   0x1E0D19 push    r12
//   0x1E0D1B push    rbp
//   0x1E0D1C mov     rbp, rdi
//   0x1E0D1F push    rbx
//   0x1E0D20 mov     rbx, rdx
//   0x1E0D23 sub     rsp, 0A8h
//   0x1E0D2A mov     [rsp+0D8h+var_B8], rsi
//   0x1E0D2F mov     dword ptr [rsp+0D8h+var_D8], ecx
//   0x1E0D32 mov     r12, fs:28h
//   0x1E0D3B mov     [rsp+0D8h+var_40], r12
//   0x1E0D43 mov     r12, [rsi]
//   0x1E0D46 movsxd  rax, dword ptr [r12+2Ch]
//   0x1E0D4B add     rax, [r12+18h]
//   0x1E0D50 lea     r8, [r12+18h]
//   0x1E0D55 cmp     byte ptr [r12+20h], 5
//   0x1E0D5B mov     [rsp+0D8h+var_D0], rax
//   0x1E0D60 jnz     short loc_1E0D78
//   0x1E0D62 mov     rax, [rdi]
//   0x1E0D65 mov     rax, [rax+5E0h]
//   0x1E0D6C mov     rax, [rax+60h]
//   0x1E0D70 movzx   r15d, byte ptr [rax+91h]
//   0x1E0D78 mov     rax, [rbx]
//   0x1E0D7B mov     rdx, [r12+18h]
//   0x1E0D80 pxor    xmm0, xmm0
//   0x1E0D84 lea     rdi, [r8+10h]
//   0x1E0D88 mov     r14, cs:qword_411530
//   0x1E0D8F movups  [rsp+0D8h+var_A8+8], xmm0
//   0x1E0D94 mov     [rsp+0D8h+var_90], 0
//   0x1E0D9D mov     ecx, eax
//   0x1E0D9F sub     ecx, edx
//   0x1E0DA1 mov     qword ptr [rsp+0D8h+var_A8], r14
//   0x1E0DA6 mov     [rsp+0D8h+var_C4], ecx
//   0x1E0DAA jnz     loc_1E0E58
//   0x1E0DB0 lea     r13, [rsp+0D8h+var_A8]
//   0x1E0DB5 mov     rsi, rdi
//   0x1E0DB8 mov     rdi, r13
//   0x1E0DBB call    sub_30EC10
//   0x1E0DC0 mov     rax, [r12]
//   0x1E0DC4 lea     rdi, [rbp+8]
//   0x1E0DC8 mov     r9, r12
//   0x1E0DCB test    al, 2
//   0x1E0DCD jz      loc_1E0EA8
//   0x1E0DD3 mov     rsi, r12
//   0x1E0DD6 mov     [rsp+0D8h+var_C0], r9
//   0x1E0DDB call    sub_1E0110
//   0x1E0DE0 mov     r9, [rsp+0D8h+var_C0]
//   0x1E0DE5 movsxd  rax, dword ptr [rsp+0D8h+var_D8]
//   0x1E0DE9 pxor    xmm0, xmm0
//   0x1E0DED add     rax, [rbx]
//   0x1E0DF0 mov     qword ptr [rsp+0D8h+var_88], r14
//   0x1E0DF5 mov     [rsp+0D8h+var_70], 0
//   0x1E0DFE mov     rcx, rax
//   0x1E0E01 movups  [rsp+0D8h+var_88+8], xmm0
//   0x1E0E06 cmp     [rsp+0D8h+var_D0], rax
//   0x1E0E0B jg      loc_1E0F70
//   0x1E0E11 lea     r14, [rsp+0D8h+var_88]
//   0x1E0E16 xor     ebx, ebx
//   0x1E0E18 mov     rdi, r14
//   0x1E0E1B call    sub_30EA00
//   0x1E0E20 mov     rdi, r13
//   0x1E0E23 call    sub_30EA00
//   0x1E0E28 mov     rax, [rsp+0D8h+var_40]
//   0x1E0E30 sub     rax, fs:28h
//   0x1E0E39 jnz     loc_1E10FD
//   0x1E0E3F add     rsp, 0A8h
//   0x1E0E46 mov     eax, ebx
//   0x1E0E48 pop     rbx
//   0x1E0E49 pop     rbp
//   0x1E0E4A pop     r12
//   0x1E0E4C pop     r13
//   0x1E0E4E pop     r14
//   0x1E0E50 pop     r15
//   0x1E0E52 retn
//   0x1E0E53 align 8
//   0x1E0E58 test    r15b, r15b
//   0x1E0E5B jnz     loc_1E0EF0
//   0x1E0E61 lea     r13, [rsp+0D8h+var_A8]
//   0x1E0E66 mov     edx, [rsp+0D8h+var_C4]
//   0x1E0E6A mov     [rsp+0D8h+var_C0], r8
//   0x1E0E6F mov     rsi, r13
//   0x1E0E72 mov     [rsp+0D8h+var_B0], rdi
//   0x1E0E77 call    sub_310B80
//   0x1E0E7C test    al, al
//   0x1E0E7E mov     r8, [rsp+0D8h+var_C0]
//   0x1E0E83 jz      loc_1E1070
//   0x1E0E89 cmp     dword ptr [r8+10h], 1
//   0x1E0E8E jz      loc_1E1080
//   0x1E0E94 mov     [rsp+0D8h+var_C4], 0
//   0x1E0E9C mov     r9, r12
//   0x1E0E9F jmp     loc_1E0DE5
//   0x1E0EA4 align 8
//   0x1E0EA8 mov     rdx, [r12+10h]
//   0x1E0EAD test    byte ptr [rdx], 2
//   0x1E0EB0 jz      loc_1E1030
//   0x1E0EB6 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E0EBA mov     r9, rax
//   0x1E0EBD mov     rax, [rax]
//   0x1E0EC0 test    al, 2
//   0x1E0EC2 jnz     loc_1E0DD3
//   0x1E0EC8 mov     rsi, r12
//   0x1E0ECB cmp     rsi, [r9+10h]
//   0x1E0ECF jnz     loc_1E0DD3
//   0x1E0ED5 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E0ED9 mov     rsi, r9
//   0x1E0EDC mov     rdx, rax
//   0x1E0EDF mov     rax, [rax]
//   0x1E0EE2 mov     r9, rdx
//   0x1E0EE5 test    al, 2
//   0x1E0EE7 jz      short loc_1E0ECB
//   0x1E0EE9 jmp     loc_1E0DD3
//   0x1E0EEE align 10h
//   0x1E0EF0 lea     r13, [rsp+0D8h+var_A8]
//   0x1E0EF5 sub     edx, eax
//   0x1E0EF7 add     edx, [r8+14h]
//   0x1E0EFB mov     [rsp+0D8h+var_B0], r8
//   0x1E0F00 mov     rsi, r13
//   0x1E0F03 mov     [rsp+0D8h+var_C0], rdi
//   0x1E0F08 call    sub_310B80
//   0x1E0F0D test    al, al
//   0x1E0F0F mov     rdi, [rsp+0D8h+var_C0]
//   0x1E0F14 jz      loc_1E0DB5
//   0x1E0F1A movdqa  xmm2, [rsp+0D8h+var_A8]
//   0x1E0F20 mov     r8, [rsp+0D8h+var_B0]
//   0x1E0F25 movdqu  xmm0, xmmword ptr [rdi+10h]
//   0x1E0F2A movdqu  xmm1, xmmword ptr [r8+10h]
//   0x1E0F30 movups  xmmword ptr [r8+10h], xmm2
//   0x1E0F35 movdqa  xmm2, xmmword ptr [rsp+40h]
//   0x1E0F3B movaps  [rsp+0D8h+var_58], xmm0
//   0x1E0F43 movups  xmmword ptr [rdi+10h], xmm2
//   0x1E0F47 movaps  [rsp+0D8h+var_A8], xmm1
//   0x1E0F4C movaps  xmmword ptr [rsp+40h], xmm0
//   0x1E0F51 cmp     dword ptr [r8+10h], 1
//   0x1E0F56 movaps  [rsp+0D8h+var_68], xmm1
//   0x1E0F5B jnz     loc_1E0E94
//   0x1E0F61 jmp     loc_1E1080
//   0x1E0F66 align 10h
//   0x1E0F70 mov     eax, dword ptr [rsp+0D8h+var_D8]
//   0x1E0F73 mov     edx, [rsp+0D8h+var_C4]
//   0x1E0F77 mov     [rsp+0D8h+var_D0], rcx
//   0x1E0F7C mov     [rsp+0D8h+var_D8], r9
//   0x1E0F80 add     edx, eax
//   0x1E0F82 test    r15b, r15b
//   0x1E0F85 jz      loc_1E1048
//   0x1E0F8B mov     eax, dword ptr [rsp+0D8h+var_A8+4]
//   0x1E0F8F lea     r14, [rsp+0D8h+var_88]
//   0x1E0F94 mov     rdi, r13
//   0x1E0F97 mov     rsi, r14
//   0x1E0F9A sub     eax, edx
//   0x1E0F9C mov     edx, eax
//   0x1E0F9E call    sub_310B80
//   0x1E0FA3 test    al, al
//   0x1E0FA5 jz      loc_1E0E16
//   0x1E0FAB movdqa  xmm2, [rsp+0D8h+var_88]
//   0x1E0FB1 movdqa  xmm1, [rsp+0D8h+var_A8]
//   0x1E0FB7 movdqa  xmm0, xmmword ptr [rsp+40h]
//   0x1E0FBD mov     rcx, [rsp+0D8h+var_D0]
//   0x1E0FC2 movaps  [rsp+0D8h+var_A8], xmm2
//   0x1E0FC7 movdqa  xmm2, xmmword ptr [rsp+60h]
//   0x1E0FCD mov     r9, [rsp+0D8h+var_D8]
//   0x1E0FD1 movaps  [rsp+0D8h+var_68], xmm1
//   0x1E0FD6 movaps  [rsp+0D8h+var_58], xmm0
//   0x1E0FDE movaps  xmmword ptr [rsp+40h], xmm2
//   0x1E0FE3 movaps  [rsp+0D8h+var_88], xmm1
//   0x1E0FE8 movaps  xmmword ptr [rsp+60h], xmm0
//   0x1E0FED cmp     dword ptr [rsp+0D8h+var_88], 1
//   0x1E0FF2 jz      loc_1E0E16
//   0x1E0FF8 movzx   edx, byte ptr [rbx+8]
//   0x1E0FFC mov     rax, rcx
//   0x1E0FFF lea     rdi, [rbp+8]
//   0x1E1003 mov     r8, r14
//   0x1E1006 mov     rsi, r9
//   0x1E1009 mov     rcx, rdx
//   0x1E100C mov     rdx, rax
//   0x1E100F call    sub_1E0920
//   0x1E1014 mov     rbx, [rsp+0D8h+var_B8]
//   0x1E1019 mov     [rbx], rax
//   0x1E101C mov     ebx, 1
//   0x1E1021 jmp     loc_1E0E18
//   0x1E1026 align 10h
//   0x1E1030 mov     r9, rdx
//   0x1E1033 mov     rdx, [rdx+8]
//   0x1E1037 test    byte ptr [rdx], 2
//   0x1E103A jnz     loc_1E0DD3
//   0x1E1040 jmp     short loc_1E1030
//   0x1E1042 align 8
//   0x1E1048 lea     r14, [rsp+0D8h+var_88]
//   0x1E104D mov     rdi, r13
//   0x1E1050 mov     rsi, r14
//   0x1E1053 call    sub_310B80
//   0x1E1058 test    al, al
//   0x1E105A mov     r9, [rsp+0D8h+var_D8]
//   0x1E105E mov     rcx, [rsp+0D8h+var_D0]
//   0x1E1063 jnz     short loc_1E0FED
//   0x1E1065 jmp     loc_1E0E16
//   0x1E106A align 10h
//   0x1E1070 mov     rdi, [rsp+0D8h+var_B0]
//   0x1E1075 jmp     loc_1E0DB5
//   0x1E107A align 20h
//   0x1E1080 mov     rax, [r12]
//   0x1E1084 lea     rdi, [rbp+8]
//   0x1E1088 mov     r9, r12
//   0x1E108B test    al, 2
//   0x1E108D jz      short loc_1E10B0
//   0x1E108F mov     rsi, r12
//   0x1E1092 mov     [rsp+0D8h+var_C0], r9
//   0x1E1097 call    sub_1E0110
//   0x1E109C mov     [rsp+0D8h+var_C4], 0
//   0x1E10A4 jmp     loc_1E0DE0
//   0x1E10A9 align 10h
//   0x1E10B0 mov     rdx, [r12+10h]
//   0x1E10B5 test    byte ptr [rdx], 2
//   0x1E10B8 jnz     short loc_1E10D0
//   0x1E10BA mov     r9, rdx
//   0x1E10BD mov     rdx, [rdx+8]
//   0x1E10C1 test    byte ptr [rdx], 2
//   0x1E10C4 jnz     short loc_1E108F
//   0x1E10C6 jmp     short loc_1E10BA
//   0x1E10C8 align 10h
//   0x1E10D0 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E10D4 mov     r9, rax
//   0x1E10D7 mov     rax, [rax]
//   0x1E10DA test    al, 2
//   0x1E10DC jnz     short loc_1E108F
//   0x1E10DE mov     rsi, r12
//   0x1E10E1 cmp     rsi, [r9+10h]
//   0x1E10E5 jnz     short loc_1E108F
//   0x1E10E7 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E10EB mov     rsi, r9
//   0x1E10EE mov     rdx, rax
//   0x1E10F1 mov     rax, [rax]
//   0x1E10F4 mov     r9, rdx
//   0x1E10F7 test    al, 2
//   0x1E10F9 jz      short loc_1E10E1
//   0x1E10FB jmp     short loc_1E108F
//   0x1E10FD call    ___stack_chk_fail
//   0x1E1102 mov     rbx, rax
//   0x1E1105 jmp     loc_4173C
//   0x1E110A mov     rbx, rax
//   0x1E110D jmp     loc_41744
// ============================================================

void sub_1E0D10(/* signature unknown */)
{
    // see disassembly above
}

