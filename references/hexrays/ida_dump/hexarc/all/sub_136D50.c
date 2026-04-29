// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x136D50
// Name:           sub_136D50
// Function size:  562 bytes (132 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x136D50 push    r15
//   0x136D52 push    r14
//   0x136D54 push    r13
//   0x136D56 push    r12
//   0x136D58 push    rbp
//   0x136D59 mov     rbp, rsi
//   0x136D5C push    rbx
//   0x136D5D mov     rbx, rdi
//   0x136D60 sub     rsp, 98h
//   0x136D67 mov     rax, [rdi+5D8h]
//   0x136D6E mov     r12, fs:28h
//   0x136D77 mov     [rsp+0C8h+var_40], r12
//   0x136D7F mov     r12d, edx
//   0x136D82 mov     [rax+540h], rdi
//   0x136D89 mov     rax, [rdi+5D8h]
//   0x136D90 mov     qword ptr [rax+548h], 0
//   0x136D9B call    sub_1A8500
//   0x136DA0 mov     rsi, rbp
//   0x136DA3 mov     edx, r12d
//   0x136DA6 mov     rdi, rbx
//   0x136DA9 call    sub_36B800
//   0x136DAE mov     ebp, eax
//   0x136DB0 test    eax, eax
//   0x136DB2 jz      short loc_136DE0
//   0x136DB4 mov     rax, [rsp+0C8h+var_40]
//   0x136DBC sub     rax, fs:28h
//   0x136DC5 jnz     loc_136F75
//   0x136DCB add     rsp, 98h
//   0x136DD2 mov     eax, ebp
//   0x136DD4 pop     rbx
//   0x136DD5 pop     rbp
//   0x136DD6 pop     r12
//   0x136DD8 pop     r13
//   0x136DDA pop     r14
//   0x136DDC pop     r15
//   0x136DDE retn
//   0x136DDF align 20h
//   0x136DE0 lea     r15, [rsp+0C8h+var_B8]
//   0x136DE5 lea     r14, [rsp+0C8h+var_A8]
//   0x136DEA mov     ecx, r12d
//   0x136DED mov     rdi, rbx
//   0x136DF0 pxor    xmm0, xmm0
//   0x136DF4 mov     rdx, r15
//   0x136DF7 mov     rsi, r14
//   0x136DFA mov     [rsp+0C8h+var_A0], 0
//   0x136DFF lea     r13, off_4AA218
//   0x136E06 movups  [rsp+0C8h+var_90], xmm0
//   0x136E0B mov     [rsp+0C8h+var_A8], r13
//   0x136E10 mov     [rsp+0C8h+var_98], 0
//   0x136E19 mov     [rsp+0C8h+var_70], 0
//   0x136E22 mov     [rsp+0C8h+var_60], 0
//   0x136E2B mov     [rsp+0C8h+var_48], 0
//   0x136E36 mov     [rsp+0C8h+var_68], 40h ; '@'
//   0x136E3E mov     [rsp+0C8h+var_B8], 0
//   0x136E47 mov     [rsp+0C8h+var_B0], 0
//   0x136E50 movups  [rsp+0C8h+var_80], xmm0
//   0x136E55 movaps  [rsp+0C8h+var_58], xmm0
//   0x136E5A call    sub_1CEFC0
//   0x136E5F mov     ebp, eax
//   0x136E61 test    eax, eax
//   0x136E63 jz      loc_136F08
//   0x136E69 mov     rdi, [rsp+0C8h+var_B8]
//   0x136E6E call    _qfree
//   0x136E73 mov     rdi, [rsp+0C8h+var_60]
//   0x136E78 mov     [rsp+0C8h+var_A8], r13
//   0x136E7D test    rdi, rdi
//   0x136E80 jz      short loc_136EE3
//   0x136E82 mov     r13, qword ptr [rsp+0C8h+var_58]
//   0x136E87 test    r13, r13
//   0x136E8A jz      short loc_136ED5
//   0x136E8C xor     r12d, r12d
//   0x136E8F nop
//   0x136E90 mov     rax, r12
//   0x136E93 shl     rax, 6
//   0x136E97 lea     rbx, [rdi+rax]
//   0x136E9B mov     rdi, [rbx+28h]
//   0x136E9F test    rdi, rdi
//   0x136EA2 jz      short loc_136EB1
//   0x136EA4 mov     qword ptr [rbx+30h], 0
//   0x136EAC call    _qfree
//   0x136EB1 mov     rdi, [rbx+10h]
//   0x136EB5 test    rdi, rdi
//   0x136EB8 jz      short loc_136EC7
//   0x136EBA mov     qword ptr [rbx+18h], 0
//   0x136EC2 call    _qfree
//   0x136EC7 add     r12, 1
//   0x136ECB mov     rdi, [rsp+0C8h+var_60]
//   0x136ED0 cmp     r13, r12
//   0x136ED3 jnz     short loc_136E90
//   0x136ED5 mov     qword ptr [rsp+0C8h+var_58], 0
//   0x136EDE call    _qfree
//   0x136EE3 mov     rdi, [rsp+0C8h+var_98]
//   0x136EE8 test    rdi, rdi
//   0x136EEB jz      loc_136DB4
//   0x136EF1 mov     qword ptr [rsp+0C8h+var_90], 0
//   0x136EFA call    _qfree
//   0x136EFF jmp     loc_136DB4
//   0x136F04 align 8
//   0x136F08 mov     rdx, r15
//   0x136F0B mov     rsi, r14
//   0x136F0E mov     rdi, rbx
//   0x136F11 call    sub_379900
//   0x136F16 mov     ebp, eax
//   0x136F18 test    eax, eax
//   0x136F1A jnz     loc_136E69
//   0x136F20 mov     rdi, [rbx+5E0h]
//   0x136F27 mov     rsi, rbx
//   0x136F2A mov     rax, [rdi]
//   0x136F2D call    qword ptr [rax+10h]
//   0x136F30 mov     rsi, rax
//   0x136F33 mov     r8d, r12d
//   0x136F36 mov     rcx, r15
//   0x136F39 mov     rdx, r14
//   0x136F3C mov     rdi, rbx
//   0x136F3F mov     [rsp+0C8h+var_C0], rax
//   0x136F44 call    sub_1D7E20
//   0x136F49 mov     rsi, [rsp+0C8h+var_C0]
//   0x136F4E mov     ebp, eax
//   0x136F50 test    rsi, rsi
//   0x136F53 jz      short loc_136F5E
//   0x136F55 mov     rax, [rsi]
//   0x136F58 mov     rdi, rsi
//   0x136F5B call    qword ptr [rax+8]
//   0x136F5E test    ebp, ebp
//   0x136F60 jnz     loc_136E69
//   0x136F66 mov     rdi, rbx
//   0x136F69 call    sub_131C20
//   0x136F6E mov     ebp, eax
//   0x136F70 jmp     loc_136E69
//   0x136F75 call    ___stack_chk_fail
//   0x136F7A mov     rbx, rax
//   0x136F7D jmp     loc_37392
// ============================================================

void sub_136D50(/* signature unknown */)
{
    // see disassembly above
}

