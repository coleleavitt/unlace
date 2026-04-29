// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x13CE50
// Name:           sub_13CE50
// Function size:  562 bytes (132 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x13CE50 push    r15
//   0x13CE52 push    r14
//   0x13CE54 push    r13
//   0x13CE56 push    r12
//   0x13CE58 push    rbp
//   0x13CE59 mov     rbp, rsi
//   0x13CE5C push    rbx
//   0x13CE5D mov     rbx, rdi
//   0x13CE60 sub     rsp, 98h
//   0x13CE67 mov     rax, [rdi+5D8h]
//   0x13CE6E mov     r12, fs:28h
//   0x13CE77 mov     [rsp+0C8h+var_40], r12
//   0x13CE7F mov     r12d, edx
//   0x13CE82 mov     [rax+540h], rdi
//   0x13CE89 mov     rax, [rdi+5D8h]
//   0x13CE90 mov     qword ptr [rax+548h], 0
//   0x13CE9B call    sub_1AE740
//   0x13CEA0 mov     rsi, rbp
//   0x13CEA3 mov     edx, r12d
//   0x13CEA6 mov     rdi, rbx
//   0x13CEA9 call    sub_373640
//   0x13CEAE mov     ebp, eax
//   0x13CEB0 test    eax, eax
//   0x13CEB2 jz      short loc_13CEE0
//   0x13CEB4 mov     rax, [rsp+0C8h+var_40]
//   0x13CEBC sub     rax, fs:28h
//   0x13CEC5 jnz     loc_13D075
//   0x13CECB add     rsp, 98h
//   0x13CED2 mov     eax, ebp
//   0x13CED4 pop     rbx
//   0x13CED5 pop     rbp
//   0x13CED6 pop     r12
//   0x13CED8 pop     r13
//   0x13CEDA pop     r14
//   0x13CEDC pop     r15
//   0x13CEDE retn
//   0x13CEDF align 20h
//   0x13CEE0 lea     r15, [rsp+0C8h+var_B8]
//   0x13CEE5 lea     r14, [rsp+0C8h+var_A8]
//   0x13CEEA mov     ecx, r12d
//   0x13CEED mov     rdi, rbx
//   0x13CEF0 pxor    xmm0, xmm0
//   0x13CEF4 mov     rdx, r15
//   0x13CEF7 mov     rsi, r14
//   0x13CEFA mov     [rsp+0C8h+var_A0], 0
//   0x13CEFF lea     r13, off_4D8098
//   0x13CF06 movups  [rsp+0C8h+var_90], xmm0
//   0x13CF0B mov     [rsp+0C8h+var_A8], r13
//   0x13CF10 mov     [rsp+0C8h+var_98], 0
//   0x13CF19 mov     [rsp+0C8h+var_70], 0
//   0x13CF22 mov     [rsp+0C8h+var_60], 0
//   0x13CF2B mov     [rsp+0C8h+var_48], 0
//   0x13CF36 mov     [rsp+0C8h+var_68], 40h ; '@'
//   0x13CF3E mov     [rsp+0C8h+var_B8], 0
//   0x13CF47 mov     [rsp+0C8h+var_B0], 0
//   0x13CF50 movups  [rsp+0C8h+var_80], xmm0
//   0x13CF55 movaps  [rsp+0C8h+var_58], xmm0
//   0x13CF5A call    sub_1D5B00
//   0x13CF5F mov     ebp, eax
//   0x13CF61 test    eax, eax
//   0x13CF63 jz      loc_13D008
//   0x13CF69 mov     rdi, [rsp+0C8h+var_B8]
//   0x13CF6E call    _qfree
//   0x13CF73 mov     rdi, [rsp+0C8h+var_60]
//   0x13CF78 mov     [rsp+0C8h+var_A8], r13
//   0x13CF7D test    rdi, rdi
//   0x13CF80 jz      short loc_13CFE3
//   0x13CF82 mov     r13, qword ptr [rsp+0C8h+var_58]
//   0x13CF87 test    r13, r13
//   0x13CF8A jz      short loc_13CFD5
//   0x13CF8C xor     r12d, r12d
//   0x13CF8F nop
//   0x13CF90 mov     rax, r12
//   0x13CF93 shl     rax, 6
//   0x13CF97 lea     rbx, [rdi+rax]
//   0x13CF9B mov     rdi, [rbx+28h]
//   0x13CF9F test    rdi, rdi
//   0x13CFA2 jz      short loc_13CFB1
//   0x13CFA4 mov     qword ptr [rbx+30h], 0
//   0x13CFAC call    _qfree
//   0x13CFB1 mov     rdi, [rbx+10h]
//   0x13CFB5 test    rdi, rdi
//   0x13CFB8 jz      short loc_13CFC7
//   0x13CFBA mov     qword ptr [rbx+18h], 0
//   0x13CFC2 call    _qfree
//   0x13CFC7 add     r12, 1
//   0x13CFCB mov     rdi, [rsp+0C8h+var_60]
//   0x13CFD0 cmp     r13, r12
//   0x13CFD3 jnz     short loc_13CF90
//   0x13CFD5 mov     qword ptr [rsp+0C8h+var_58], 0
//   0x13CFDE call    _qfree
//   0x13CFE3 mov     rdi, [rsp+0C8h+var_98]
//   0x13CFE8 test    rdi, rdi
//   0x13CFEB jz      loc_13CEB4
//   0x13CFF1 mov     qword ptr [rsp+0C8h+var_90], 0
//   0x13CFFA call    _qfree
//   0x13CFFF jmp     loc_13CEB4
//   0x13D004 align 8
//   0x13D008 mov     rdx, r15
//   0x13D00B mov     rsi, r14
//   0x13D00E mov     rdi, rbx
//   0x13D011 call    sub_381740
//   0x13D016 mov     ebp, eax
//   0x13D018 test    eax, eax
//   0x13D01A jnz     loc_13CF69
//   0x13D020 mov     rdi, [rbx+5E0h]
//   0x13D027 mov     rsi, rbx
//   0x13D02A mov     rax, [rdi]
//   0x13D02D call    qword ptr [rax+10h]
//   0x13D030 mov     rsi, rax
//   0x13D033 mov     r8d, r12d
//   0x13D036 mov     rcx, r15
//   0x13D039 mov     rdx, r14
//   0x13D03C mov     rdi, rbx
//   0x13D03F mov     [rsp+0C8h+var_C0], rax
//   0x13D044 call    sub_1DF580
//   0x13D049 mov     rsi, [rsp+0C8h+var_C0]
//   0x13D04E mov     ebp, eax
//   0x13D050 test    rsi, rsi
//   0x13D053 jz      short loc_13D05E
//   0x13D055 mov     rax, [rsi]
//   0x13D058 mov     rdi, rsi
//   0x13D05B call    qword ptr [rax+8]
//   0x13D05E test    ebp, ebp
//   0x13D060 jnz     loc_13CF69
//   0x13D066 mov     rdi, rbx
//   0x13D069 call    sub_137D20
//   0x13D06E mov     ebp, eax
//   0x13D070 jmp     loc_13CF69
//   0x13D075 call    ___stack_chk_fail
//   0x13D07A mov     rbx, rax
//   0x13D07D jmp     loc_3B3D2
// ============================================================

void sub_13CE50(/* signature unknown */)
{
    // see disassembly above
}

