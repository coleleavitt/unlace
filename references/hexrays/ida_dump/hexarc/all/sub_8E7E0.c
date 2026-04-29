// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x8E7E0
// Name:           sub_8E7E0
// Function size:  1074 bytes (245 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x8E7E0 push    rbp
//   0x8E7E1 mov     rbp, rsp
//   0x8E7E4 push    r15
//   0x8E7E6 mov     r15, rdi
//   0x8E7E9 push    r14
//   0x8E7EB mov     r14, rdx
//   0x8E7EE push    r13
//   0x8E7F0 push    r12
//   0x8E7F2 mov     r12, rsi
//   0x8E7F5 push    rbx
//   0x8E7F6 mov     ebx, 1
//   0x8E7FB sub     rsp, 0B8h
//   0x8E802 mov     [rbp+var_B8], rsi
//   0x8E809 mov     [rbp+var_C8], rcx
//   0x8E810 mov     [rbp+var_D0], r8
//   0x8E817 mov     r8, fs:28h
//   0x8E820 mov     [rbp+var_38], r8
//   0x8E824 xor     r8d, r8d
//   0x8E827 call    sub_8DDF0
//   0x8E82C mov     [rbp+var_BC], eax
//   0x8E832 test    eax, eax
//   0x8E834 jz      short loc_8E860
//   0x8E836 mov     rax, [rbp+var_38]
//   0x8E83A sub     rax, fs:28h
//   0x8E843 jnz     loc_8EBE3
//   0x8E849 lea     rsp, [rbp-28h]
//   0x8E84D mov     eax, ebx
//   0x8E84F pop     rbx
//   0x8E850 pop     r12
//   0x8E852 pop     r13
//   0x8E854 pop     r14
//   0x8E856 pop     r15
//   0x8E858 pop     rbp
//   0x8E859 retn
//   0x8E85A align 20h
//   0x8E860 lea     rax, [rbp+var_60]
//   0x8E864 pxor    xmm0, xmm0
//   0x8E868 xor     ecx, ecx
//   0x8E86A mov     rdx, r14
//   0x8E86D mov     rsi, r15
//   0x8E870 mov     rdi, rax
//   0x8E873 mov     [rbp+var_D8], rax
//   0x8E87A mov     rbx, rax
//   0x8E87D mov     [rbp+var_A0], 0
//   0x8E888 movups  [rbp+var_98], xmm0
//   0x8E88F call    sub_11DFC0
//   0x8E894 mov     eax, [r15+48h]
//   0x8E898 sub     rsp, 8
//   0x8E89C mov     r8, r14
//   0x8E89F mov     rcx, r12
//   0x8E8A2 lea     r9, [rbp+var_A0]
//   0x8E8A9 mov     rdx, r14
//   0x8E8AC mov     rsi, rbx
//   0x8E8AF mov     rdi, r15
//   0x8E8B2 push    rax
//   0x8E8B3 call    sub_1711F0
//   0x8E8B8 pop     rcx
//   0x8E8B9 mov     ebx, eax
//   0x8E8BB pop     rsi
//   0x8E8BC test    al, al
//   0x8E8BE jz      loc_8E9E0
//   0x8E8C4 cmp     qword ptr [rbp+var_98], 0
//   0x8E8CC jz      loc_8EB80
//   0x8E8D2 pxor    xmm0, xmm0
//   0x8E8D6 mov     [rbp+var_80], 0
//   0x8E8DE xor     r12d, r12d
//   0x8E8E1 xor     eax, eax
//   0x8E8E3 movups  [rbp+var_78], xmm0
//   0x8E8E7 jmp     short loc_8E925
//   0x8E8E9 align 10h
//   0x8E8F0 mov     [rsi+rax*8], rbx
//   0x8E8F4 mov     rdx, r14
//   0x8E8F7 mov     rsi, r13
//   0x8E8FA mov     rdi, r15
//   0x8E8FD add     qword ptr [rbp+var_78], 1
//   0x8E902 call    sub_171090
//   0x8E907 mov     ebx, eax
//   0x8E909 test    al, al
//   0x8E90B jz      loc_8EB91
//   0x8E911 add     r12d, 1
//   0x8E915 movsxd  rax, r12d
//   0x8E918 cmp     rax, qword ptr [rbp+var_98]
//   0x8E91F jnb     loc_8EA28
//   0x8E925 mov     rdx, [rbp+var_A0]
//   0x8E92C mov     edi, 50h ; 'P'
//   0x8E931 mov     r13, [rdx+rax*8]
//   0x8E935 call    j__qalloc_or_throw
//   0x8E93A pxor    xmm0, xmm0
//   0x8E93E mov     rbx, rax
//   0x8E941 mov     rsi, r13
//   0x8E944 movups  xmmword ptr [rax+8], xmm0
//   0x8E948 mov     rdi, rbx
//   0x8E94B mov     rax, 0FFFFFFFF00000000h
//   0x8E955 mov     [rbx+20h], rax
//   0x8E959 mov     qword ptr [rbx+28h], 0
//   0x8E961 mov     [rbx+30h], rax
//   0x8E965 mov     qword ptr [rbx+38h], 0
//   0x8E96D mov     [rbx+40h], rax
//   0x8E971 mov     qword ptr [rbx+48h], 0
//   0x8E979 call    sub_11ECE0
//   0x8E97E mov     rax, qword ptr [rbp+var_78]
//   0x8E982 mov     rcx, qword ptr [rbp+var_78+8]
//   0x8E986 mov     [rbp+var_A8], rbx
//   0x8E98D mov     rsi, [rbp+var_80]
//   0x8E991 lea     rdi, [rax+1]
//   0x8E995 cmp     rcx, rdi
//   0x8E998 jnb     loc_8E8F0
//   0x8E99E lea     rax, [rbp+var_80]
//   0x8E9A2 mov     rdx, rdi
//   0x8E9A5 mov     ecx, 8
//   0x8E9AA mov     rdi, rax
//   0x8E9AD call    _qvector_reserve
//   0x8E9B2 mov     [rbp+var_80], rax
//   0x8E9B6 mov     rsi, rax
//   0x8E9B9 mov     rax, qword ptr [rbp+var_78]
//   0x8E9BD jmp     loc_8E8F0
//   0x8E9C2 align 8
//   0x8E9C8 xor     ebx, ebx
//   0x8E9CA mov     rdi, [rbp+var_80]
//   0x8E9CE test    rdi, rdi
//   0x8E9D1 jz      short loc_8E9E0
//   0x8E9D3 mov     qword ptr [rbp+var_78], 0
//   0x8E9DB call    _qfree
//   0x8E9E0 mov     rdi, [rbp+var_50]
//   0x8E9E4 test    rdi, rdi
//   0x8E9E7 jz      short loc_8E9F6
//   0x8E9E9 mov     [rbp+var_48], 0
//   0x8E9F1 call    _qfree
//   0x8E9F6 mov     rdi, [rbp+var_60]
//   0x8E9FA call    _qfree
//   0x8E9FF mov     rdi, [rbp+var_A0]
//   0x8EA06 test    rdi, rdi
//   0x8EA09 jz      loc_8E836
//   0x8EA0F mov     qword ptr [rbp+var_98], 0
//   0x8EA1A call    _qfree
//   0x8EA1F jmp     loc_8E836
//   0x8EA24 align 8
//   0x8EA28 mov     rcx, [rbp+var_C8]
//   0x8EA2F xor     r8d, r8d
//   0x8EA32 mov     rdx, r14
//   0x8EA35 mov     rdi, r15
//   0x8EA38 mov     rsi, [rbp+var_B8]
//   0x8EA3F call    sub_8DDF0
//   0x8EA44 cmp     qword ptr [rbp+var_98], 0
//   0x8EA4C mov     r12d, eax
//   0x8EA4F jz      loc_8EB87
//   0x8EA55 mov     dword ptr [rbp+var_B8], 0
//   0x8EA5F xor     r13d, r13d
//   0x8EA62 nop     word ptr [rax+rax+00000000h]
//   0x8EA6D nop     dword ptr [rax]
//   0x8EA70 mov     rax, [rbp+var_80]
//   0x8EA74 mov     rsi, [rax+r13*8]
//   0x8EA78 mov     rax, [rbp+var_A0]
//   0x8EA7F mov     rdi, [rax+r13*8]
//   0x8EA83 call    sub_11ECE0
//   0x8EA88 mov     rax, [rbp+var_80]
//   0x8EA8C mov     r13, [rax+r13*8]
//   0x8EA90 test    r13, r13
//   0x8EA93 jz      short loc_8EAB8
//   0x8EA95 lea     rdi, [r13+40h]
//   0x8EA99 call    sub_1166E0
//   0x8EA9E lea     rdi, [r13+30h]
//   0x8EAA2 call    sub_1166E0
//   0x8EAA7 lea     rdi, [r13+20h]
//   0x8EAAB call    sub_1166E0
//   0x8EAB0 mov     rdi, r13
//   0x8EAB3 call    j__qfree
//   0x8EAB8 add     dword ptr [rbp+var_B8], 1
//   0x8EABF mov     rax, qword ptr [rbp+var_98]
//   0x8EAC6 movsxd  r13, dword ptr [rbp+var_B8]
//   0x8EACD cmp     r13, rax
//   0x8EAD0 jb      short loc_8EA70
//   0x8EAD2 test    r12d, r12d
//   0x8EAD5 jz      loc_8E9C8
//   0x8EADB test    rax, rax
//   0x8EADE jz      loc_8E9CA
//   0x8EAE4 cmp     [rbp+var_D0], 0
//   0x8EAEC jz      short loc_8EB28
//   0x8EAEE mov     rax, [rbp+var_D0]
//   0x8EAF5 lea     r12, [rax+40h]
//   0x8EAF9 lea     rax, [r14+40h]
//   0x8EAFD mov     rsi, r12
//   0x8EB00 mov     rdi, rax
//   0x8EB03 mov     r13, rax
//   0x8EB06 call    sub_116350
//   0x8EB0B cmp     qword ptr [rbp+var_98], 0
//   0x8EB13 jnz     short loc_8EB28
//   0x8EB15 mov     rsi, r12
//   0x8EB18 mov     rdi, r13
//   0x8EB1B call    sub_116350
//   0x8EB20 jmp     loc_8E9CA
//   0x8EB25 align 8
//   0x8EB28 xor     eax, eax
//   0x8EB2A nop     word ptr [rax+rax+00h]
//   0x8EB30 mov     rdx, [rbp+var_A0]
//   0x8EB37 mov     rdi, r15
//   0x8EB3A mov     rsi, [rdx+rax*8]
//   0x8EB3E mov     rdx, r14
//   0x8EB41 call    sub_171090
//   0x8EB46 test    al, al
//   0x8EB48 jz      short loc_8EBBA
//   0x8EB4A add     [rbp+var_BC], 1
//   0x8EB51 movsxd  rax, [rbp+var_BC]
//   0x8EB58 cmp     rax, qword ptr [rbp+var_98]
//   0x8EB5F jb      short loc_8EB30
//   0x8EB61 mov     rax, [rbp+var_D0]
//   0x8EB68 test    rax, rax
//   0x8EB6B jz      loc_8E9CA
//   0x8EB71 lea     r12, [rax+40h]
//   0x8EB75 lea     rax, [r14+40h]
//   0x8EB79 mov     r13, rax
//   0x8EB7C jmp     short loc_8EB15
//   0x8EB7E align 20h
//   0x8EB80 xor     ebx, ebx
//   0x8EB82 jmp     loc_8E9E0
//   0x8EB87 test    eax, eax
//   0x8EB89 setnz   bl
//   0x8EB8C jmp     loc_8E9CA
//   0x8EB91 mov     rax, cs:under_debugger_ptr
//   0x8EB98 cmp     byte ptr [rax], 0
//   0x8EB9B jnz     loc_2D246
//   0x8EBA1 mov     rax, [rbp+var_38]
//   0x8EBA5 sub     rax, fs:28h
//   0x8EBAE jnz     short loc_8EBE8
//   0x8EBB0 mov     edi, 0C351h
//   0x8EBB5 call    sub_37B760
//   0x8EBBA mov     rax, cs:under_debugger_ptr
//   0x8EBC1 cmp     byte ptr [rax], 0
//   0x8EBC4 jnz     loc_2D246
//   0x8EBCA mov     rax, [rbp+var_38]
//   0x8EBCE sub     rax, fs:28h
//   0x8EBD7 jnz     short loc_8EBED
//   0x8EBD9 mov     edi, 0C352h
//   0x8EBDE call    sub_37B760
//   0x8EBE3 call    ___stack_chk_fail
//   0x8EBE8 call    ___stack_chk_fail
//   0x8EBED call    ___stack_chk_fail
//   0x8EBF2 mov     r15, rax
//   0x8EBF5 jmp     loc_2D248
//   0x8EBFA mov     rbx, rax
//   0x8EBFD jmp     loc_2D28E
//   0x8EC02 mov     rbx, rax
//   0x8EC05 jmp     loc_2D282
//   0x8EC0A mov     rbx, rax
//   0x8EC0D jmp     loc_2D26E
// ============================================================

void sub_8E7E0(/* signature unknown */)
{
    // see disassembly above
}

