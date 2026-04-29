// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x162C50
// Name:           sub_162C50
// Function size:  428 bytes (109 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x162C50 push    r15
//   0x162C52 mov     r15d, 0FFFFFFFFh
//   0x162C58 push    r14
//   0x162C5A push    r13
//   0x162C5C push    r12
//   0x162C5E mov     r12, rsi
//   0x162C61 push    rbp
//   0x162C62 mov     rbp, rdi
//   0x162C65 push    rbx
//   0x162C66 xor     ebx, ebx
//   0x162C68 sub     rsp, 68h
//   0x162C6C mov     rax, [rdi+1E0h]
//   0x162C73 mov     r13, fs:28h
//   0x162C7C mov     [rsp+98h+var_40], r13
//   0x162C81 mov     r13d, edx
//   0x162C84 mov     rax, [rax+70h]
//   0x162C88 mov     [rsp+98h+var_90], rax
//   0x162C8D mov     eax, r13d
//   0x162C90 and     eax, 4
//   0x162C93 mov     [rsp+98h+var_94], eax
//   0x162C97 jmp     loc_162D39
//   0x162C9C align 20h
//   0x162CA0 test    r15d, r15d
//   0x162CA3 jz      loc_162D80
//   0x162CA9 sub     rsp, 8
//   0x162CAD mov     rcx, r12
//   0x162CB0 mov     rdx, rbp
//   0x162CB3 xor     r8d, r8d
//   0x162CB6 mov     [rsp+0A0h+var_80], 0FFFFFFFFFFFFFFFFh
//   0x162CBF mov     rdi, r12
//   0x162CC2 push    r13
//   0x162CC4 mov     rsi, [rsp+0A8h+var_90]
//   0x162CC9 lea     r9, [rsp+0A8h+var_80]
//   0x162CCE call    sub_1570B0
//   0x162CD3 mov     r15d, eax
//   0x162CD6 mov     rax, [rsp+0A8h+var_80]
//   0x162CDB pop     rdx
//   0x162CDC pop     rcx
//   0x162CDD cmp     rax, 0FFFFFFFFFFFFFFFFh
//   0x162CE1 jz      short loc_162D2A
//   0x162CE3 mov     rdx, [rbp+40h]
//   0x162CE7 lea     rsi, [rsp+98h+var_78]
//   0x162CEC mov     rdi, r12
//   0x162CEF mov     [rsp+98h+var_68], rbp
//   0x162CF4 lea     rcx, off_4B1730
//   0x162CFB mov     [rsp+98h+var_60], r12
//   0x162D00 mov     [rsp+98h+var_70], rdx
//   0x162D05 mov     [rsp+98h+var_58], 0
//   0x162D0E mov     [rsp+98h+var_78], rcx
//   0x162D13 mov     [rsp+98h+var_50], rax
//   0x162D18 mov     [rsp+98h+var_48], 0
//   0x162D20 call    sub_11ABA0
//   0x162D25 add     r14d, [rsp+98h+var_48]
//   0x162D2A mov     eax, r14d
//   0x162D2D or      eax, r15d
//   0x162D30 jz      short loc_162D80
//   0x162D32 lea     r10d, [r14+r15]
//   0x162D36 add     ebx, r10d
//   0x162D39 mov     rsi, r12
//   0x162D3C mov     edx, r13d
//   0x162D3F mov     rdi, rbp
//   0x162D42 xor     r14d, r14d
//   0x162D45 call    sub_155400
//   0x162D4A mov     esi, [rsp+98h+var_94]
//   0x162D4E movzx   eax, al
//   0x162D51 add     ebx, eax
//   0x162D53 test    esi, esi
//   0x162D55 jz      loc_162CA0
//   0x162D5B mov     rsi, r12
//   0x162D5E mov     rdi, rbp
//   0x162D61 call    sub_AEB10
//   0x162D66 movzx   r14d, al
//   0x162D6A or      r15d, r14d
//   0x162D6D test    r15d, r15d
//   0x162D70 jnz     loc_162CA9
//   0x162D76 nop     word ptr [rax+rax+00000000h]
//   0x162D80 mov     rax, [rbp+1E0h]
//   0x162D87 mov     r14, [rax+428h]
//   0x162D8E mov     rax, [rax+430h]
//   0x162D95 shl     rax, 3
//   0x162D99 jz      short loc_162DD6
//   0x162D9B nop     dword ptr [rax+rax+00h]
//   0x162DA0 mov     rdi, [r14]
//   0x162DA3 mov     rdx, r12
//   0x162DA6 mov     ecx, r13d
//   0x162DA9 mov     rsi, rbp
//   0x162DAC add     r14, 8
//   0x162DB0 mov     rax, [rdi]
//   0x162DB3 call    qword ptr [rax+10h]
//   0x162DB6 add     ebx, eax
//   0x162DB8 mov     rax, [rbp+1E0h]
//   0x162DBF mov     rdx, [rax+430h]
//   0x162DC6 mov     rax, [rax+428h]
//   0x162DCD lea     rax, [rax+rdx*8]
//   0x162DD1 cmp     r14, rax
//   0x162DD4 jnz     short loc_162DA0
//   0x162DD6 mov     rax, [rsp+98h+var_40]
//   0x162DDB sub     rax, fs:28h
//   0x162DE4 jnz     short loc_162DF7
//   0x162DE6 add     rsp, 68h
//   0x162DEA mov     eax, ebx
//   0x162DEC pop     rbx
//   0x162DED pop     rbp
//   0x162DEE pop     r12
//   0x162DF0 pop     r13
//   0x162DF2 pop     r14
//   0x162DF4 pop     r15
//   0x162DF6 retn
//   0x162DF7 call    ___stack_chk_fail
// ============================================================

void sub_162C50(/* signature unknown */)
{
    // see disassembly above
}

