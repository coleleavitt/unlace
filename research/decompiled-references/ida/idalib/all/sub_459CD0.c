// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x459CD0
// Name:           sub_459CD0
// Function size:  432 bytes (112 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x459CD0 push    r15; int
//   0x459CD2 mov     r15d, ecx
//   0x459CD5 push    r14; int
//   0x459CD7 mov     r14, rdi
//   0x459CDA push    r13; __int64
//   0x459CDC mov     r13d, r9d
//   0x459CDF push    r12; ptr
//   0x459CE1 mov     r12, rsi
//   0x459CE4 push    rbp; int
//   0x459CE5 mov     ebp, r9d
//   0x459CE8 push    rbx; int
//   0x459CE9 mov     rbx, rdx
//   0x459CEC sub     rsp, 28h
//   0x459CF0 mov     [rsp+58h+var_4C], r8d
//   0x459CF5 mov     rax, fs:28h
//   0x459CFE mov     qword ptr [rsp+58h+var_40], rax; int
//   0x459D03 movsxd  rax, ecx
//   0x459D06 movsxd  rdi, dword ptr [rdi+rax*4+10h]
//   0x459D0B call    _switch_dbctx
//   0x459D10 mov     rsi, rbx
//   0x459D13 mov     qword ptr [rsp+58h+var_48], rbx; int
//   0x459D18 mov     rdi, [rax+688h]
//   0x459D1F call    sub_42DD50
//   0x459D24 mov     ecx, [rsp+58h+var_4C]; int
//   0x459D28 cmp     eax, 6; switch 7 cases
//   0x459D2B ja      def_459D41; jumptable 0000000000459D41 default case, case 0
//   0x459D31 lea     rdx, jpt_459D41
//   0x459D38 mov     eax, eax
//   0x459D3A movsxd  rax, ds:(jpt_459D41 - 23ADC18h)[rdx+rax*4]
//   0x459D3E add     rax, rdx
//   0x459D41 jmp     rax; switch jump
//   0x459D43 align 8
//   0x459D48 lea     rsi, [rsp+58h+var_48]; jumptable 0000000000459D41 case 6
//   0x459D4D mov     r8d, 3
//   0x459D53 mov     edx, r15d
//   0x459D56 mov     rdi, r14
//   0x459D59 call    sub_49B460
//   0x459D5E mov     r8d, eax
//   0x459D61 xor     r8d, 1
//   0x459D65 and     r8d, ebp
//   0x459D68 mov     r13d, r8d
//   0x459D6B test    r13b, r13b
//   0x459D6E jnz     loc_459E51
//   0x459D74 test    r12, r12
//   0x459D77 jz      short loc_459D82
//   0x459D79 mov     rdx, qword ptr [rsp+58h+var_48]
//   0x459D7E mov     [r12], rdx
//   0x459D82 mov     rdx, qword ptr [rsp+58h+var_40]
//   0x459D87 sub     rdx, fs:28h
//   0x459D90 jnz     loc_459E4C
//   0x459D96 add     rsp, 28h
//   0x459D9A pop     rbx
//   0x459D9B pop     rbp
//   0x459D9C pop     r12
//   0x459D9E pop     r13
//   0x459DA0 pop     r14
//   0x459DA2 pop     r15
//   0x459DA4 retn
//   0x459DA5 align 8
//   0x459DA8 lea     rsi, [rsp+58h+var_48]; jumptable 0000000000459D41 case 1
//   0x459DAD mov     r8d, 1
//   0x459DB3 jmp     short loc_459D53
//   0x459DB5 align 8
//   0x459DB8 mov     edx, r15d; jumptable 0000000000459D41 case 2
//   0x459DBB mov     rsi, rbx
//   0x459DBE mov     rdi, r14
//   0x459DC1 call    sub_459A80
//   0x459DC6 cmp     rax, 0FFFFFFFFFFFFFFFFh
//   0x459DCA mov     qword ptr [rsp+58h+var_48], rax
//   0x459DCF setz    r8b
//   0x459DD3 setnz   al
//   0x459DD6 and     r8d, ebp
//   0x459DD9 mov     r13d, r8d
//   0x459DDC jmp     short loc_459D6B
//   0x459DDE align 20h
//   0x459DE0 lea     rsi, [rsp+58h+var_48]; jumptable 0000000000459D41 case 3
//   0x459DE5 mov     r8d, 2
//   0x459DEB jmp     loc_459D53
//   0x459DF0 movzx   r9d, bpl; jumptable 0000000000459D41 case 4
//   0x459DF4 xor     r8d, r8d; int
//   0x459DF7 mov     edx, r15d; int
//   0x459DFA mov     rsi, rbx; int
//   0x459DFD mov     rdi, r14; int
//   0x459E00 call    sub_491F80
//   0x459E05 jmp     short loc_459DC6
//   0x459E07 align 10h
//   0x459E10 movzx   r9d, bpl; jumptable 0000000000459D41 case 5
//   0x459E14 mov     r8d, 1
//   0x459E1A jmp     short loc_459DF7
//   0x459E1C mov     edx, r15d; jumptable 0000000000459D41 default case, case 0
//   0x459E1F mov     rsi, rbx
//   0x459E22 mov     rdi, r14
//   0x459E25 call    sub_4924D0
//   0x459E2A cmp     rax, 0FFFFFFFFFFFFFFFFh
//   0x459E2E jz      short loc_459E40
//   0x459E30 mov     qword ptr [rsp+58h+var_48], rax
//   0x459E35 mov     eax, 1
//   0x459E3A jmp     loc_459D74
//   0x459E3F align 20h
//   0x459E40 mov     qword ptr [rsp+58h+var_48], rbx
//   0x459E45 xor     eax, eax
//   0x459E47 jmp     loc_459D6B
//   0x459E4C call    ___stack_chk_fail
//   0x459E51 mov     rax, cs:under_debugger_ptr
//   0x459E58 cmp     byte ptr [rax], 0
//   0x459E5B jnz     loc_2B9DBA
//   0x459E61 mov     rax, qword ptr [rsp+58h+var_40]
//   0x459E66 sub     rax, fs:28h
//   0x459E6F jnz     short loc_459E7B
//   0x459E71 mov     edi, 7C2h
//   0x459E76 call    _interr
//   0x459E7B call    ___stack_chk_fail
// ============================================================

void sub_459CD0(/* signature unknown */)
{
    // see disassembly above
}

