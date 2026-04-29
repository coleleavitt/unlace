// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x1E4990
// Name:           sub_1E4990
// Function size:  1026 bytes (243 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x1E4990 push    r15
//   0x1E4992 xor     r15d, r15d
//   0x1E4995 push    r14
//   0x1E4997 push    r13
//   0x1E4999 push    r12
//   0x1E499B push    rbp
//   0x1E499C mov     rbp, rdi
//   0x1E499F push    rbx
//   0x1E49A0 mov     rbx, rdx
//   0x1E49A3 sub     rsp, 0A8h
//   0x1E49AA mov     [rsp+0D8h+var_B8], rsi
//   0x1E49AF mov     dword ptr [rsp+0D8h+var_D8], ecx
//   0x1E49B2 mov     r12, fs:28h
//   0x1E49BB mov     [rsp+0D8h+var_40], r12
//   0x1E49C3 mov     r12, [rsi]
//   0x1E49C6 movsxd  rax, dword ptr [r12+2Ch]
//   0x1E49CB add     rax, [r12+18h]
//   0x1E49D0 lea     r8, [r12+18h]
//   0x1E49D5 cmp     byte ptr [r12+20h], 5
//   0x1E49DB mov     [rsp+0D8h+var_D0], rax
//   0x1E49E0 jnz     short loc_1E49F8
//   0x1E49E2 mov     rax, [rdi]
//   0x1E49E5 mov     rax, [rax+5E0h]
//   0x1E49EC mov     rax, [rax+60h]
//   0x1E49F0 movzx   r15d, byte ptr [rax+91h]
//   0x1E49F8 mov     rax, [rbx]
//   0x1E49FB mov     rdx, [r12+18h]
//   0x1E4A00 pxor    xmm0, xmm0
//   0x1E4A04 lea     rdi, [r8+10h]
//   0x1E4A08 mov     r14, cs:qword_424018
//   0x1E4A0F movups  [rsp+0D8h+var_A8+8], xmm0
//   0x1E4A14 mov     [rsp+0D8h+var_90], 0
//   0x1E4A1D mov     ecx, eax
//   0x1E4A1F sub     ecx, edx
//   0x1E4A21 mov     qword ptr [rsp+0D8h+var_A8], r14
//   0x1E4A26 mov     [rsp+0D8h+var_C4], ecx
//   0x1E4A2A jnz     loc_1E4AD8
//   0x1E4A30 lea     r13, [rsp+0D8h+var_A8]
//   0x1E4A35 mov     rsi, rdi
//   0x1E4A38 mov     rdi, r13
//   0x1E4A3B call    sub_312D90
//   0x1E4A40 mov     rax, [r12]
//   0x1E4A44 lea     rdi, [rbp+8]
//   0x1E4A48 mov     r9, r12
//   0x1E4A4B test    al, 2
//   0x1E4A4D jz      loc_1E4B28
//   0x1E4A53 mov     rsi, r12
//   0x1E4A56 mov     [rsp+0D8h+var_C0], r9
//   0x1E4A5B call    sub_1E3D90
//   0x1E4A60 mov     r9, [rsp+0D8h+var_C0]
//   0x1E4A65 movsxd  rax, dword ptr [rsp+0D8h+var_D8]
//   0x1E4A69 pxor    xmm0, xmm0
//   0x1E4A6D add     rax, [rbx]
//   0x1E4A70 mov     qword ptr [rsp+0D8h+var_88], r14
//   0x1E4A75 mov     [rsp+0D8h+var_70], 0
//   0x1E4A7E mov     rcx, rax
//   0x1E4A81 movups  [rsp+0D8h+var_88+8], xmm0
//   0x1E4A86 cmp     [rsp+0D8h+var_D0], rax
//   0x1E4A8B jg      loc_1E4BF0
//   0x1E4A91 lea     r14, [rsp+0D8h+var_88]
//   0x1E4A96 xor     ebx, ebx
//   0x1E4A98 mov     rdi, r14
//   0x1E4A9B call    sub_312B80
//   0x1E4AA0 mov     rdi, r13
//   0x1E4AA3 call    sub_312B80
//   0x1E4AA8 mov     rax, [rsp+0D8h+var_40]
//   0x1E4AB0 sub     rax, fs:28h
//   0x1E4AB9 jnz     loc_1E4D7D
//   0x1E4ABF add     rsp, 0A8h
//   0x1E4AC6 mov     eax, ebx
//   0x1E4AC8 pop     rbx
//   0x1E4AC9 pop     rbp
//   0x1E4ACA pop     r12
//   0x1E4ACC pop     r13
//   0x1E4ACE pop     r14
//   0x1E4AD0 pop     r15
//   0x1E4AD2 retn
//   0x1E4AD3 align 8
//   0x1E4AD8 test    r15b, r15b
//   0x1E4ADB jnz     loc_1E4B70
//   0x1E4AE1 lea     r13, [rsp+0D8h+var_A8]
//   0x1E4AE6 mov     edx, [rsp+0D8h+var_C4]
//   0x1E4AEA mov     [rsp+0D8h+var_C0], r8
//   0x1E4AEF mov     rsi, r13
//   0x1E4AF2 mov     [rsp+0D8h+var_B0], rdi
//   0x1E4AF7 call    sub_314D00
//   0x1E4AFC test    al, al
//   0x1E4AFE mov     r8, [rsp+0D8h+var_C0]
//   0x1E4B03 jz      loc_1E4CF0
//   0x1E4B09 cmp     dword ptr [r8+10h], 1
//   0x1E4B0E jz      loc_1E4D00
//   0x1E4B14 mov     [rsp+0D8h+var_C4], 0
//   0x1E4B1C mov     r9, r12
//   0x1E4B1F jmp     loc_1E4A65
//   0x1E4B24 align 8
//   0x1E4B28 mov     rdx, [r12+10h]
//   0x1E4B2D test    byte ptr [rdx], 2
//   0x1E4B30 jz      loc_1E4CB0
//   0x1E4B36 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E4B3A mov     r9, rax
//   0x1E4B3D mov     rax, [rax]
//   0x1E4B40 test    al, 2
//   0x1E4B42 jnz     loc_1E4A53
//   0x1E4B48 mov     rsi, r12
//   0x1E4B4B cmp     rsi, [r9+10h]
//   0x1E4B4F jnz     loc_1E4A53
//   0x1E4B55 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E4B59 mov     rsi, r9
//   0x1E4B5C mov     rdx, rax
//   0x1E4B5F mov     rax, [rax]
//   0x1E4B62 mov     r9, rdx
//   0x1E4B65 test    al, 2
//   0x1E4B67 jz      short loc_1E4B4B
//   0x1E4B69 jmp     loc_1E4A53
//   0x1E4B6E align 10h
//   0x1E4B70 lea     r13, [rsp+0D8h+var_A8]
//   0x1E4B75 sub     edx, eax
//   0x1E4B77 add     edx, [r8+14h]
//   0x1E4B7B mov     [rsp+0D8h+var_B0], r8
//   0x1E4B80 mov     rsi, r13
//   0x1E4B83 mov     [rsp+0D8h+var_C0], rdi
//   0x1E4B88 call    sub_314D00
//   0x1E4B8D test    al, al
//   0x1E4B8F mov     rdi, [rsp+0D8h+var_C0]
//   0x1E4B94 jz      loc_1E4A35
//   0x1E4B9A movdqa  xmm2, [rsp+0D8h+var_A8]
//   0x1E4BA0 mov     r8, [rsp+0D8h+var_B0]
//   0x1E4BA5 movdqu  xmm0, xmmword ptr [rdi+10h]
//   0x1E4BAA movdqu  xmm1, xmmword ptr [r8+10h]
//   0x1E4BB0 movups  xmmword ptr [r8+10h], xmm2
//   0x1E4BB5 movdqa  xmm2, xmmword ptr [rsp+40h]
//   0x1E4BBB movaps  [rsp+0D8h+var_58], xmm0
//   0x1E4BC3 movups  xmmword ptr [rdi+10h], xmm2
//   0x1E4BC7 movaps  [rsp+0D8h+var_A8], xmm1
//   0x1E4BCC movaps  xmmword ptr [rsp+40h], xmm0
//   0x1E4BD1 cmp     dword ptr [r8+10h], 1
//   0x1E4BD6 movaps  [rsp+0D8h+var_68], xmm1
//   0x1E4BDB jnz     loc_1E4B14
//   0x1E4BE1 jmp     loc_1E4D00
//   0x1E4BE6 align 10h
//   0x1E4BF0 mov     eax, dword ptr [rsp+0D8h+var_D8]
//   0x1E4BF3 mov     edx, [rsp+0D8h+var_C4]
//   0x1E4BF7 mov     [rsp+0D8h+var_D0], rcx
//   0x1E4BFC mov     [rsp+0D8h+var_D8], r9
//   0x1E4C00 add     edx, eax
//   0x1E4C02 test    r15b, r15b
//   0x1E4C05 jz      loc_1E4CC8
//   0x1E4C0B mov     eax, dword ptr [rsp+0D8h+var_A8+4]
//   0x1E4C0F lea     r14, [rsp+0D8h+var_88]
//   0x1E4C14 mov     rdi, r13
//   0x1E4C17 mov     rsi, r14
//   0x1E4C1A sub     eax, edx
//   0x1E4C1C mov     edx, eax
//   0x1E4C1E call    sub_314D00
//   0x1E4C23 test    al, al
//   0x1E4C25 jz      loc_1E4A96
//   0x1E4C2B movdqa  xmm2, [rsp+0D8h+var_88]
//   0x1E4C31 movdqa  xmm1, [rsp+0D8h+var_A8]
//   0x1E4C37 movdqa  xmm0, xmmword ptr [rsp+40h]
//   0x1E4C3D mov     rcx, [rsp+0D8h+var_D0]
//   0x1E4C42 movaps  [rsp+0D8h+var_A8], xmm2
//   0x1E4C47 movdqa  xmm2, xmmword ptr [rsp+60h]
//   0x1E4C4D mov     r9, [rsp+0D8h+var_D8]
//   0x1E4C51 movaps  [rsp+0D8h+var_68], xmm1
//   0x1E4C56 movaps  [rsp+0D8h+var_58], xmm0
//   0x1E4C5E movaps  xmmword ptr [rsp+40h], xmm2
//   0x1E4C63 movaps  [rsp+0D8h+var_88], xmm1
//   0x1E4C68 movaps  xmmword ptr [rsp+60h], xmm0
//   0x1E4C6D cmp     dword ptr [rsp+0D8h+var_88], 1
//   0x1E4C72 jz      loc_1E4A96
//   0x1E4C78 movzx   edx, byte ptr [rbx+8]
//   0x1E4C7C mov     rax, rcx
//   0x1E4C7F lea     rdi, [rbp+8]
//   0x1E4C83 mov     r8, r14
//   0x1E4C86 mov     rsi, r9
//   0x1E4C89 mov     rcx, rdx
//   0x1E4C8C mov     rdx, rax
//   0x1E4C8F call    sub_1E45A0
//   0x1E4C94 mov     rbx, [rsp+0D8h+var_B8]
//   0x1E4C99 mov     [rbx], rax
//   0x1E4C9C mov     ebx, 1
//   0x1E4CA1 jmp     loc_1E4A98
//   0x1E4CA6 align 10h
//   0x1E4CB0 mov     r9, rdx
//   0x1E4CB3 mov     rdx, [rdx+8]
//   0x1E4CB7 test    byte ptr [rdx], 2
//   0x1E4CBA jnz     loc_1E4A53
//   0x1E4CC0 jmp     short loc_1E4CB0
//   0x1E4CC2 align 8
//   0x1E4CC8 lea     r14, [rsp+0D8h+var_88]
//   0x1E4CCD mov     rdi, r13
//   0x1E4CD0 mov     rsi, r14
//   0x1E4CD3 call    sub_314D00
//   0x1E4CD8 test    al, al
//   0x1E4CDA mov     r9, [rsp+0D8h+var_D8]
//   0x1E4CDE mov     rcx, [rsp+0D8h+var_D0]
//   0x1E4CE3 jnz     short loc_1E4C6D
//   0x1E4CE5 jmp     loc_1E4A96
//   0x1E4CEA align 10h
//   0x1E4CF0 mov     rdi, [rsp+0D8h+var_B0]
//   0x1E4CF5 jmp     loc_1E4A35
//   0x1E4CFA align 20h
//   0x1E4D00 mov     rax, [r12]
//   0x1E4D04 lea     rdi, [rbp+8]
//   0x1E4D08 mov     r9, r12
//   0x1E4D0B test    al, 2
//   0x1E4D0D jz      short loc_1E4D30
//   0x1E4D0F mov     rsi, r12
//   0x1E4D12 mov     [rsp+0D8h+var_C0], r9
//   0x1E4D17 call    sub_1E3D90
//   0x1E4D1C mov     [rsp+0D8h+var_C4], 0
//   0x1E4D24 jmp     loc_1E4A60
//   0x1E4D29 align 10h
//   0x1E4D30 mov     rdx, [r12+10h]
//   0x1E4D35 test    byte ptr [rdx], 2
//   0x1E4D38 jnz     short loc_1E4D50
//   0x1E4D3A mov     r9, rdx
//   0x1E4D3D mov     rdx, [rdx+8]
//   0x1E4D41 test    byte ptr [rdx], 2
//   0x1E4D44 jnz     short loc_1E4D0F
//   0x1E4D46 jmp     short loc_1E4D3A
//   0x1E4D48 align 10h
//   0x1E4D50 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E4D54 mov     r9, rax
//   0x1E4D57 mov     rax, [rax]
//   0x1E4D5A test    al, 2
//   0x1E4D5C jnz     short loc_1E4D0F
//   0x1E4D5E mov     rsi, r12
//   0x1E4D61 cmp     rsi, [r9+10h]
//   0x1E4D65 jnz     short loc_1E4D0F
//   0x1E4D67 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E4D6B mov     rsi, r9
//   0x1E4D6E mov     rdx, rax
//   0x1E4D71 mov     rax, [rax]
//   0x1E4D74 mov     r9, rdx
//   0x1E4D77 test    al, 2
//   0x1E4D79 jz      short loc_1E4D61
//   0x1E4D7B jmp     short loc_1E4D0F
//   0x1E4D7D call    ___stack_chk_fail
//   0x1E4D82 mov     rbx, rax
//   0x1E4D85 jmp     loc_428C0
//   0x1E4D8A mov     rbx, rax
//   0x1E4D8D jmp     loc_428C8
// ============================================================

void sub_1E4990(/* signature unknown */)
{
    // see disassembly above
}

