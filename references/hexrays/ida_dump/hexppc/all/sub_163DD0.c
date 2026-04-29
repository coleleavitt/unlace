// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x163DD0
// Name:           sub_163DD0
// Function size:  428 bytes (109 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x163DD0 push    r15
//   0x163DD2 mov     r15d, 0FFFFFFFFh
//   0x163DD8 push    r14
//   0x163DDA push    r13
//   0x163DDC push    r12
//   0x163DDE mov     r12, rsi
//   0x163DE1 push    rbp
//   0x163DE2 mov     rbp, rdi
//   0x163DE5 push    rbx
//   0x163DE6 xor     ebx, ebx
//   0x163DE8 sub     rsp, 68h
//   0x163DEC mov     rax, [rdi+1E0h]
//   0x163DF3 mov     r13, fs:28h
//   0x163DFC mov     [rsp+98h+var_40], r13
//   0x163E01 mov     r13d, edx
//   0x163E04 mov     rax, [rax+70h]
//   0x163E08 mov     [rsp+98h+var_90], rax
//   0x163E0D mov     eax, r13d
//   0x163E10 and     eax, 4
//   0x163E13 mov     [rsp+98h+var_94], eax
//   0x163E17 jmp     loc_163EB9
//   0x163E1C align 20h
//   0x163E20 test    r15d, r15d
//   0x163E23 jz      loc_163F00
//   0x163E29 sub     rsp, 8
//   0x163E2D mov     rcx, r12
//   0x163E30 mov     rdx, rbp
//   0x163E33 xor     r8d, r8d
//   0x163E36 mov     [rsp+0A0h+var_80], 0FFFFFFFFFFFFFFFFh
//   0x163E3F mov     rdi, r12
//   0x163E42 push    r13
//   0x163E44 mov     rsi, [rsp+0A8h+var_90]
//   0x163E49 lea     r9, [rsp+0A8h+var_80]
//   0x163E4E call    sub_158230
//   0x163E53 mov     r15d, eax
//   0x163E56 mov     rax, [rsp+0A8h+var_80]
//   0x163E5B pop     rdx
//   0x163E5C pop     rcx
//   0x163E5D cmp     rax, 0FFFFFFFFFFFFFFFFh
//   0x163E61 jz      short loc_163EAA
//   0x163E63 mov     rdx, [rbp+40h]
//   0x163E67 lea     rsi, [rsp+98h+var_78]
//   0x163E6C mov     rdi, r12
//   0x163E6F mov     [rsp+98h+var_68], rbp
//   0x163E74 lea     rcx, off_4CAEB0
//   0x163E7B mov     [rsp+98h+var_60], r12
//   0x163E80 mov     [rsp+98h+var_70], rdx
//   0x163E85 mov     [rsp+98h+var_58], 0
//   0x163E8E mov     [rsp+98h+var_78], rcx
//   0x163E93 mov     [rsp+98h+var_50], rax
//   0x163E98 mov     [rsp+98h+var_48], 0
//   0x163EA0 call    sub_11BD20
//   0x163EA5 add     r14d, [rsp+98h+var_48]
//   0x163EAA mov     eax, r14d
//   0x163EAD or      eax, r15d
//   0x163EB0 jz      short loc_163F00
//   0x163EB2 lea     r10d, [r14+r15]
//   0x163EB6 add     ebx, r10d
//   0x163EB9 mov     rsi, r12
//   0x163EBC mov     edx, r13d
//   0x163EBF mov     rdi, rbp
//   0x163EC2 xor     r14d, r14d
//   0x163EC5 call    sub_156580
//   0x163ECA mov     esi, [rsp+98h+var_94]
//   0x163ECE movzx   eax, al
//   0x163ED1 add     ebx, eax
//   0x163ED3 test    esi, esi
//   0x163ED5 jz      loc_163E20
//   0x163EDB mov     rsi, r12
//   0x163EDE mov     rdi, rbp
//   0x163EE1 call    sub_AFC90
//   0x163EE6 movzx   r14d, al
//   0x163EEA or      r15d, r14d
//   0x163EED test    r15d, r15d
//   0x163EF0 jnz     loc_163E29
//   0x163EF6 nop     word ptr [rax+rax+00000000h]
//   0x163F00 mov     rax, [rbp+1E0h]
//   0x163F07 mov     r14, [rax+428h]
//   0x163F0E mov     rax, [rax+430h]
//   0x163F15 shl     rax, 3
//   0x163F19 jz      short loc_163F56
//   0x163F1B nop     dword ptr [rax+rax+00h]
//   0x163F20 mov     rdi, [r14]
//   0x163F23 mov     rdx, r12
//   0x163F26 mov     ecx, r13d
//   0x163F29 mov     rsi, rbp
//   0x163F2C add     r14, 8
//   0x163F30 mov     rax, [rdi]
//   0x163F33 call    qword ptr [rax+10h]
//   0x163F36 add     ebx, eax
//   0x163F38 mov     rax, [rbp+1E0h]
//   0x163F3F mov     rdx, [rax+430h]
//   0x163F46 mov     rax, [rax+428h]
//   0x163F4D lea     rax, [rax+rdx*8]
//   0x163F51 cmp     r14, rax
//   0x163F54 jnz     short loc_163F20
//   0x163F56 mov     rax, [rsp+98h+var_40]
//   0x163F5B sub     rax, fs:28h
//   0x163F64 jnz     short loc_163F77
//   0x163F66 add     rsp, 68h
//   0x163F6A mov     eax, ebx
//   0x163F6C pop     rbx
//   0x163F6D pop     rbp
//   0x163F6E pop     r12
//   0x163F70 pop     r13
//   0x163F72 pop     r14
//   0x163F74 pop     r15
//   0x163F76 retn
//   0x163F77 call    ___stack_chk_fail
// ============================================================

void sub_163DD0(/* signature unknown */)
{
    // see disassembly above
}

