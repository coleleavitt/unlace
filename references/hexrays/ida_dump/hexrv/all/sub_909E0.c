// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x909E0
// Name:           sub_909E0
// Function size:  1074 bytes (245 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x909E0 push    rbp
//   0x909E1 mov     rbp, rsp
//   0x909E4 push    r15
//   0x909E6 mov     r15, rdi
//   0x909E9 push    r14
//   0x909EB mov     r14, rdx
//   0x909EE push    r13
//   0x909F0 push    r12
//   0x909F2 mov     r12, rsi
//   0x909F5 push    rbx
//   0x909F6 mov     ebx, 1
//   0x909FB sub     rsp, 0B8h
//   0x90A02 mov     [rbp+var_B8], rsi
//   0x90A09 mov     [rbp+var_C8], rcx
//   0x90A10 mov     [rbp+var_D0], r8
//   0x90A17 mov     r8, fs:28h
//   0x90A20 mov     [rbp+var_38], r8
//   0x90A24 xor     r8d, r8d
//   0x90A27 call    sub_8FFF0
//   0x90A2C mov     [rbp+var_BC], eax
//   0x90A32 test    eax, eax
//   0x90A34 jz      short loc_90A60
//   0x90A36 mov     rax, [rbp+var_38]
//   0x90A3A sub     rax, fs:28h
//   0x90A43 jnz     loc_90DE3
//   0x90A49 lea     rsp, [rbp-28h]
//   0x90A4D mov     eax, ebx
//   0x90A4F pop     rbx
//   0x90A50 pop     r12
//   0x90A52 pop     r13
//   0x90A54 pop     r14
//   0x90A56 pop     r15
//   0x90A58 pop     rbp
//   0x90A59 retn
//   0x90A5A align 20h
//   0x90A60 lea     rax, [rbp+var_60]
//   0x90A64 pxor    xmm0, xmm0
//   0x90A68 xor     ecx, ecx
//   0x90A6A mov     rdx, r14
//   0x90A6D mov     rsi, r15
//   0x90A70 mov     rdi, rax
//   0x90A73 mov     [rbp+var_D8], rax
//   0x90A7A mov     rbx, rax
//   0x90A7D mov     [rbp+var_A0], 0
//   0x90A88 movups  [rbp+var_98], xmm0
//   0x90A8F call    sub_1201C0
//   0x90A94 mov     eax, [r15+48h]
//   0x90A98 sub     rsp, 8
//   0x90A9C mov     r8, r14
//   0x90A9F mov     rcx, r12
//   0x90AA2 lea     r9, [rbp+var_A0]
//   0x90AA9 mov     rdx, r14
//   0x90AAC mov     rsi, rbx
//   0x90AAF mov     rdi, r15
//   0x90AB2 push    rax
//   0x90AB3 call    sub_1733F0
//   0x90AB8 pop     rcx
//   0x90AB9 mov     ebx, eax
//   0x90ABB pop     rsi
//   0x90ABC test    al, al
//   0x90ABE jz      loc_90BE0
//   0x90AC4 cmp     qword ptr [rbp+var_98], 0
//   0x90ACC jz      loc_90D80
//   0x90AD2 pxor    xmm0, xmm0
//   0x90AD6 mov     [rbp+var_80], 0
//   0x90ADE xor     r12d, r12d
//   0x90AE1 xor     eax, eax
//   0x90AE3 movups  [rbp+var_78], xmm0
//   0x90AE7 jmp     short loc_90B25
//   0x90AE9 align 10h
//   0x90AF0 mov     [rsi+rax*8], rbx
//   0x90AF4 mov     rdx, r14
//   0x90AF7 mov     rsi, r13
//   0x90AFA mov     rdi, r15
//   0x90AFD add     qword ptr [rbp+var_78], 1
//   0x90B02 call    sub_173290
//   0x90B07 mov     ebx, eax
//   0x90B09 test    al, al
//   0x90B0B jz      loc_90D91
//   0x90B11 add     r12d, 1
//   0x90B15 movsxd  rax, r12d
//   0x90B18 cmp     rax, qword ptr [rbp+var_98]
//   0x90B1F jnb     loc_90C28
//   0x90B25 mov     rdx, [rbp+var_A0]
//   0x90B2C mov     edi, 50h ; 'P'
//   0x90B31 mov     r13, [rdx+rax*8]
//   0x90B35 call    j__qalloc_or_throw
//   0x90B3A pxor    xmm0, xmm0
//   0x90B3E mov     rbx, rax
//   0x90B41 mov     rsi, r13
//   0x90B44 movups  xmmword ptr [rax+8], xmm0
//   0x90B48 mov     rdi, rbx
//   0x90B4B mov     rax, 0FFFFFFFF00000000h
//   0x90B55 mov     [rbx+20h], rax
//   0x90B59 mov     qword ptr [rbx+28h], 0
//   0x90B61 mov     [rbx+30h], rax
//   0x90B65 mov     qword ptr [rbx+38h], 0
//   0x90B6D mov     [rbx+40h], rax
//   0x90B71 mov     qword ptr [rbx+48h], 0
//   0x90B79 call    sub_120EE0
//   0x90B7E mov     rax, qword ptr [rbp+var_78]
//   0x90B82 mov     rcx, qword ptr [rbp+var_78+8]
//   0x90B86 mov     [rbp+var_A8], rbx
//   0x90B8D mov     rsi, [rbp+var_80]
//   0x90B91 lea     rdi, [rax+1]
//   0x90B95 cmp     rcx, rdi
//   0x90B98 jnb     loc_90AF0
//   0x90B9E lea     rax, [rbp+var_80]
//   0x90BA2 mov     rdx, rdi
//   0x90BA5 mov     ecx, 8
//   0x90BAA mov     rdi, rax
//   0x90BAD call    _qvector_reserve
//   0x90BB2 mov     [rbp+var_80], rax
//   0x90BB6 mov     rsi, rax
//   0x90BB9 mov     rax, qword ptr [rbp+var_78]
//   0x90BBD jmp     loc_90AF0
//   0x90BC2 align 8
//   0x90BC8 xor     ebx, ebx
//   0x90BCA mov     rdi, [rbp+var_80]
//   0x90BCE test    rdi, rdi
//   0x90BD1 jz      short loc_90BE0
//   0x90BD3 mov     qword ptr [rbp+var_78], 0
//   0x90BDB call    _qfree
//   0x90BE0 mov     rdi, [rbp+var_50]
//   0x90BE4 test    rdi, rdi
//   0x90BE7 jz      short loc_90BF6
//   0x90BE9 mov     [rbp+var_48], 0
//   0x90BF1 call    _qfree
//   0x90BF6 mov     rdi, [rbp+var_60]
//   0x90BFA call    _qfree
//   0x90BFF mov     rdi, [rbp+var_A0]
//   0x90C06 test    rdi, rdi
//   0x90C09 jz      loc_90A36
//   0x90C0F mov     qword ptr [rbp+var_98], 0
//   0x90C1A call    _qfree
//   0x90C1F jmp     loc_90A36
//   0x90C24 align 8
//   0x90C28 mov     rcx, [rbp+var_C8]
//   0x90C2F xor     r8d, r8d
//   0x90C32 mov     rdx, r14
//   0x90C35 mov     rdi, r15
//   0x90C38 mov     rsi, [rbp+var_B8]
//   0x90C3F call    sub_8FFF0
//   0x90C44 cmp     qword ptr [rbp+var_98], 0
//   0x90C4C mov     r12d, eax
//   0x90C4F jz      loc_90D87
//   0x90C55 mov     dword ptr [rbp+var_B8], 0
//   0x90C5F xor     r13d, r13d
//   0x90C62 nop     word ptr [rax+rax+00000000h]
//   0x90C6D nop     dword ptr [rax]
//   0x90C70 mov     rax, [rbp+var_80]
//   0x90C74 mov     rsi, [rax+r13*8]
//   0x90C78 mov     rax, [rbp+var_A0]
//   0x90C7F mov     rdi, [rax+r13*8]
//   0x90C83 call    sub_120EE0
//   0x90C88 mov     rax, [rbp+var_80]
//   0x90C8C mov     r13, [rax+r13*8]
//   0x90C90 test    r13, r13
//   0x90C93 jz      short loc_90CB8
//   0x90C95 lea     rdi, [r13+40h]
//   0x90C99 call    sub_1188E0
//   0x90C9E lea     rdi, [r13+30h]
//   0x90CA2 call    sub_1188E0
//   0x90CA7 lea     rdi, [r13+20h]
//   0x90CAB call    sub_1188E0
//   0x90CB0 mov     rdi, r13
//   0x90CB3 call    j__qfree
//   0x90CB8 add     dword ptr [rbp+var_B8], 1
//   0x90CBF mov     rax, qword ptr [rbp+var_98]
//   0x90CC6 movsxd  r13, dword ptr [rbp+var_B8]
//   0x90CCD cmp     r13, rax
//   0x90CD0 jb      short loc_90C70
//   0x90CD2 test    r12d, r12d
//   0x90CD5 jz      loc_90BC8
//   0x90CDB test    rax, rax
//   0x90CDE jz      loc_90BCA
//   0x90CE4 cmp     [rbp+var_D0], 0
//   0x90CEC jz      short loc_90D28
//   0x90CEE mov     rax, [rbp+var_D0]
//   0x90CF5 lea     r12, [rax+40h]
//   0x90CF9 lea     rax, [r14+40h]
//   0x90CFD mov     rsi, r12
//   0x90D00 mov     rdi, rax
//   0x90D03 mov     r13, rax
//   0x90D06 call    sub_118550
//   0x90D0B cmp     qword ptr [rbp+var_98], 0
//   0x90D13 jnz     short loc_90D28
//   0x90D15 mov     rsi, r12
//   0x90D18 mov     rdi, r13
//   0x90D1B call    sub_118550
//   0x90D20 jmp     loc_90BCA
//   0x90D25 align 8
//   0x90D28 xor     eax, eax
//   0x90D2A nop     word ptr [rax+rax+00h]
//   0x90D30 mov     rdx, [rbp+var_A0]
//   0x90D37 mov     rdi, r15
//   0x90D3A mov     rsi, [rdx+rax*8]
//   0x90D3E mov     rdx, r14
//   0x90D41 call    sub_173290
//   0x90D46 test    al, al
//   0x90D48 jz      short loc_90DBA
//   0x90D4A add     [rbp+var_BC], 1
//   0x90D51 movsxd  rax, [rbp+var_BC]
//   0x90D58 cmp     rax, qword ptr [rbp+var_98]
//   0x90D5F jb      short loc_90D30
//   0x90D61 mov     rax, [rbp+var_D0]
//   0x90D68 test    rax, rax
//   0x90D6B jz      loc_90BCA
//   0x90D71 lea     r12, [rax+40h]
//   0x90D75 lea     rax, [r14+40h]
//   0x90D79 mov     r13, rax
//   0x90D7C jmp     short loc_90D15
//   0x90D7E align 20h
//   0x90D80 xor     ebx, ebx
//   0x90D82 jmp     loc_90BE0
//   0x90D87 test    eax, eax
//   0x90D89 setnz   bl
//   0x90D8C jmp     loc_90BCA
//   0x90D91 mov     rax, cs:under_debugger_ptr
//   0x90D98 cmp     byte ptr [rax], 0
//   0x90D9B jnz     loc_2E246
//   0x90DA1 mov     rax, [rbp+var_38]
//   0x90DA5 sub     rax, fs:28h
//   0x90DAE jnz     short loc_90DE8
//   0x90DB0 mov     edi, 0C351h
//   0x90DB5 call    sub_37DDE0
//   0x90DBA mov     rax, cs:under_debugger_ptr
//   0x90DC1 cmp     byte ptr [rax], 0
//   0x90DC4 jnz     loc_2E246
//   0x90DCA mov     rax, [rbp+var_38]
//   0x90DCE sub     rax, fs:28h
//   0x90DD7 jnz     short loc_90DED
//   0x90DD9 mov     edi, 0C352h
//   0x90DDE call    sub_37DDE0
//   0x90DE3 call    ___stack_chk_fail
//   0x90DE8 call    ___stack_chk_fail
//   0x90DED call    ___stack_chk_fail
//   0x90DF2 mov     r15, rax
//   0x90DF5 jmp     loc_2E248
//   0x90DFA mov     rbx, rax
//   0x90DFD jmp     loc_2E28E
//   0x90E02 mov     rbx, rax
//   0x90E05 jmp     loc_2E282
//   0x90E0A mov     rbx, rax
//   0x90E0D jmp     loc_2E26E
// ============================================================

void sub_909E0(/* signature unknown */)
{
    // see disassembly above
}

