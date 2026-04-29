// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x948E0
// Name:           sub_948E0
// Function size:  1074 bytes (245 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x948E0 push    rbp
//   0x948E1 mov     rbp, rsp
//   0x948E4 push    r15
//   0x948E6 mov     r15, rdi
//   0x948E9 push    r14
//   0x948EB mov     r14, rdx
//   0x948EE push    r13
//   0x948F0 push    r12
//   0x948F2 mov     r12, rsi
//   0x948F5 push    rbx
//   0x948F6 mov     ebx, 1
//   0x948FB sub     rsp, 0B8h
//   0x94902 mov     [rbp+var_B8], rsi
//   0x94909 mov     [rbp+var_C8], rcx
//   0x94910 mov     [rbp+var_D0], r8
//   0x94917 mov     r8, fs:28h
//   0x94920 mov     [rbp+var_38], r8
//   0x94924 xor     r8d, r8d
//   0x94927 call    sub_93EF0
//   0x9492C mov     [rbp+var_BC], eax
//   0x94932 test    eax, eax
//   0x94934 jz      short loc_94960
//   0x94936 mov     rax, [rbp+var_38]
//   0x9493A sub     rax, fs:28h
//   0x94943 jnz     loc_94CE3
//   0x94949 lea     rsp, [rbp-28h]
//   0x9494D mov     eax, ebx
//   0x9494F pop     rbx
//   0x94950 pop     r12
//   0x94952 pop     r13
//   0x94954 pop     r14
//   0x94956 pop     r15
//   0x94958 pop     rbp
//   0x94959 retn
//   0x9495A align 20h
//   0x94960 lea     rax, [rbp+var_60]
//   0x94964 pxor    xmm0, xmm0
//   0x94968 xor     ecx, ecx
//   0x9496A mov     rdx, r14
//   0x9496D mov     rsi, r15
//   0x94970 mov     rdi, rax
//   0x94973 mov     [rbp+var_D8], rax
//   0x9497A mov     rbx, rax
//   0x9497D mov     [rbp+var_A0], 0
//   0x94988 movups  [rbp+var_98], xmm0
//   0x9498F call    sub_1240C0
//   0x94994 mov     eax, [r15+48h]
//   0x94998 sub     rsp, 8
//   0x9499C mov     r8, r14
//   0x9499F mov     rcx, r12
//   0x949A2 lea     r9, [rbp+var_A0]
//   0x949A9 mov     rdx, r14
//   0x949AC mov     rsi, rbx
//   0x949AF mov     rdi, r15
//   0x949B2 push    rax
//   0x949B3 call    sub_1772F0
//   0x949B8 pop     rcx
//   0x949B9 mov     ebx, eax
//   0x949BB pop     rsi
//   0x949BC test    al, al
//   0x949BE jz      loc_94AE0
//   0x949C4 cmp     qword ptr [rbp+var_98], 0
//   0x949CC jz      loc_94C80
//   0x949D2 pxor    xmm0, xmm0
//   0x949D6 mov     [rbp+var_80], 0
//   0x949DE xor     r12d, r12d
//   0x949E1 xor     eax, eax
//   0x949E3 movups  [rbp+var_78], xmm0
//   0x949E7 jmp     short loc_94A25
//   0x949E9 align 10h
//   0x949F0 mov     [rsi+rax*8], rbx
//   0x949F4 mov     rdx, r14
//   0x949F7 mov     rsi, r13
//   0x949FA mov     rdi, r15
//   0x949FD add     qword ptr [rbp+var_78], 1
//   0x94A02 call    sub_177190
//   0x94A07 mov     ebx, eax
//   0x94A09 test    al, al
//   0x94A0B jz      loc_94C91
//   0x94A11 add     r12d, 1
//   0x94A15 movsxd  rax, r12d
//   0x94A18 cmp     rax, qword ptr [rbp+var_98]
//   0x94A1F jnb     loc_94B28
//   0x94A25 mov     rdx, [rbp+var_A0]
//   0x94A2C mov     edi, 50h ; 'P'
//   0x94A31 mov     r13, [rdx+rax*8]
//   0x94A35 call    j__qalloc_or_throw
//   0x94A3A pxor    xmm0, xmm0
//   0x94A3E mov     rbx, rax
//   0x94A41 mov     rsi, r13
//   0x94A44 movups  xmmword ptr [rax+8], xmm0
//   0x94A48 mov     rdi, rbx
//   0x94A4B mov     rax, 0FFFFFFFF00000000h
//   0x94A55 mov     [rbx+20h], rax
//   0x94A59 mov     qword ptr [rbx+28h], 0
//   0x94A61 mov     [rbx+30h], rax
//   0x94A65 mov     qword ptr [rbx+38h], 0
//   0x94A6D mov     [rbx+40h], rax
//   0x94A71 mov     qword ptr [rbx+48h], 0
//   0x94A79 call    sub_124DE0
//   0x94A7E mov     rax, qword ptr [rbp+var_78]
//   0x94A82 mov     rcx, qword ptr [rbp+var_78+8]
//   0x94A86 mov     [rbp+var_A8], rbx
//   0x94A8D mov     rsi, [rbp+var_80]
//   0x94A91 lea     rdi, [rax+1]
//   0x94A95 cmp     rcx, rdi
//   0x94A98 jnb     loc_949F0
//   0x94A9E lea     rax, [rbp+var_80]
//   0x94AA2 mov     rdx, rdi
//   0x94AA5 mov     ecx, 8
//   0x94AAA mov     rdi, rax
//   0x94AAD call    _qvector_reserve
//   0x94AB2 mov     [rbp+var_80], rax
//   0x94AB6 mov     rsi, rax
//   0x94AB9 mov     rax, qword ptr [rbp+var_78]
//   0x94ABD jmp     loc_949F0
//   0x94AC2 align 8
//   0x94AC8 xor     ebx, ebx
//   0x94ACA mov     rdi, [rbp+var_80]
//   0x94ACE test    rdi, rdi
//   0x94AD1 jz      short loc_94AE0
//   0x94AD3 mov     qword ptr [rbp+var_78], 0
//   0x94ADB call    _qfree
//   0x94AE0 mov     rdi, [rbp+var_50]
//   0x94AE4 test    rdi, rdi
//   0x94AE7 jz      short loc_94AF6
//   0x94AE9 mov     [rbp+var_48], 0
//   0x94AF1 call    _qfree
//   0x94AF6 mov     rdi, [rbp+var_60]
//   0x94AFA call    _qfree
//   0x94AFF mov     rdi, [rbp+var_A0]
//   0x94B06 test    rdi, rdi
//   0x94B09 jz      loc_94936
//   0x94B0F mov     qword ptr [rbp+var_98], 0
//   0x94B1A call    _qfree
//   0x94B1F jmp     loc_94936
//   0x94B24 align 8
//   0x94B28 mov     rcx, [rbp+var_C8]
//   0x94B2F xor     r8d, r8d
//   0x94B32 mov     rdx, r14
//   0x94B35 mov     rdi, r15
//   0x94B38 mov     rsi, [rbp+var_B8]
//   0x94B3F call    sub_93EF0
//   0x94B44 cmp     qword ptr [rbp+var_98], 0
//   0x94B4C mov     r12d, eax
//   0x94B4F jz      loc_94C87
//   0x94B55 mov     dword ptr [rbp+var_B8], 0
//   0x94B5F xor     r13d, r13d
//   0x94B62 nop     word ptr [rax+rax+00000000h]
//   0x94B6D nop     dword ptr [rax]
//   0x94B70 mov     rax, [rbp+var_80]
//   0x94B74 mov     rsi, [rax+r13*8]
//   0x94B78 mov     rax, [rbp+var_A0]
//   0x94B7F mov     rdi, [rax+r13*8]
//   0x94B83 call    sub_124DE0
//   0x94B88 mov     rax, [rbp+var_80]
//   0x94B8C mov     r13, [rax+r13*8]
//   0x94B90 test    r13, r13
//   0x94B93 jz      short loc_94BB8
//   0x94B95 lea     rdi, [r13+40h]
//   0x94B99 call    sub_11C7E0
//   0x94B9E lea     rdi, [r13+30h]
//   0x94BA2 call    sub_11C7E0
//   0x94BA7 lea     rdi, [r13+20h]
//   0x94BAB call    sub_11C7E0
//   0x94BB0 mov     rdi, r13
//   0x94BB3 call    j__qfree
//   0x94BB8 add     dword ptr [rbp+var_B8], 1
//   0x94BBF mov     rax, qword ptr [rbp+var_98]
//   0x94BC6 movsxd  r13, dword ptr [rbp+var_B8]
//   0x94BCD cmp     r13, rax
//   0x94BD0 jb      short loc_94B70
//   0x94BD2 test    r12d, r12d
//   0x94BD5 jz      loc_94AC8
//   0x94BDB test    rax, rax
//   0x94BDE jz      loc_94ACA
//   0x94BE4 cmp     [rbp+var_D0], 0
//   0x94BEC jz      short loc_94C28
//   0x94BEE mov     rax, [rbp+var_D0]
//   0x94BF5 lea     r12, [rax+40h]
//   0x94BF9 lea     rax, [r14+40h]
//   0x94BFD mov     rsi, r12
//   0x94C00 mov     rdi, rax
//   0x94C03 mov     r13, rax
//   0x94C06 call    sub_11C450
//   0x94C0B cmp     qword ptr [rbp+var_98], 0
//   0x94C13 jnz     short loc_94C28
//   0x94C15 mov     rsi, r12
//   0x94C18 mov     rdi, r13
//   0x94C1B call    sub_11C450
//   0x94C20 jmp     loc_94ACA
//   0x94C25 align 8
//   0x94C28 xor     eax, eax
//   0x94C2A nop     word ptr [rax+rax+00h]
//   0x94C30 mov     rdx, [rbp+var_A0]
//   0x94C37 mov     rdi, r15
//   0x94C3A mov     rsi, [rdx+rax*8]
//   0x94C3E mov     rdx, r14
//   0x94C41 call    sub_177190
//   0x94C46 test    al, al
//   0x94C48 jz      short loc_94CBA
//   0x94C4A add     [rbp+var_BC], 1
//   0x94C51 movsxd  rax, [rbp+var_BC]
//   0x94C58 cmp     rax, qword ptr [rbp+var_98]
//   0x94C5F jb      short loc_94C30
//   0x94C61 mov     rax, [rbp+var_D0]
//   0x94C68 test    rax, rax
//   0x94C6B jz      loc_94ACA
//   0x94C71 lea     r12, [rax+40h]
//   0x94C75 lea     rax, [r14+40h]
//   0x94C79 mov     r13, rax
//   0x94C7C jmp     short loc_94C15
//   0x94C7E align 20h
//   0x94C80 xor     ebx, ebx
//   0x94C82 jmp     loc_94AE0
//   0x94C87 test    eax, eax
//   0x94C89 setnz   bl
//   0x94C8C jmp     loc_94ACA
//   0x94C91 mov     rax, cs:under_debugger_ptr
//   0x94C98 cmp     byte ptr [rax], 0
//   0x94C9B jnz     loc_31286
//   0x94CA1 mov     rax, [rbp+var_38]
//   0x94CA5 sub     rax, fs:28h
//   0x94CAE jnz     short loc_94CE8
//   0x94CB0 mov     edi, 0C351h
//   0x94CB5 call    sub_3835A0
//   0x94CBA mov     rax, cs:under_debugger_ptr
//   0x94CC1 cmp     byte ptr [rax], 0
//   0x94CC4 jnz     loc_31286
//   0x94CCA mov     rax, [rbp+var_38]
//   0x94CCE sub     rax, fs:28h
//   0x94CD7 jnz     short loc_94CED
//   0x94CD9 mov     edi, 0C352h
//   0x94CDE call    sub_3835A0
//   0x94CE3 call    ___stack_chk_fail
//   0x94CE8 call    ___stack_chk_fail
//   0x94CED call    ___stack_chk_fail
//   0x94CF2 mov     r15, rax
//   0x94CF5 jmp     loc_31288
//   0x94CFA mov     rbx, rax
//   0x94CFD jmp     loc_312CE
//   0x94D02 mov     rbx, rax
//   0x94D05 jmp     loc_312C2
//   0x94D0A mov     rbx, rax
//   0x94D0D jmp     loc_312AE
// ============================================================

void sub_948E0(/* signature unknown */)
{
    // see disassembly above
}

