// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x1CD7B0
// Name:           sub_1CD7B0
// Function size:  1174 bytes (243 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x1CD7B0 push    rbp
//   0x1CD7B1 mov     rbp, rsp
//   0x1CD7B4 push    r15
//   0x1CD7B6 push    r14
//   0x1CD7B8 mov     r14, rdi
//   0x1CD7BB push    r13
//   0x1CD7BD mov     r13, r9
//   0x1CD7C0 push    r12
//   0x1CD7C2 mov     r12d, r8d
//   0x1CD7C5 push    rbx
//   0x1CD7C6 sub     rsp, 0A8h
//   0x1CD7CD mov     [rbp+var_88], rsi
//   0x1CD7D4 mov     [rbp+var_80], rdx
//   0x1CD7D8 mov     [rbp+var_78], rcx
//   0x1CD7DC mov     rsi, fs:28h
//   0x1CD7E5 mov     [rbp+var_38], rsi
//   0x1CD7E9 mov     rsi, rcx
//   0x1CD7EC call    sub_3F1370
//   0x1CD7F1 test    al, al
//   0x1CD7F3 jnz     short loc_1CD820
//   0x1CD7F5 xor     ebx, ebx
//   0x1CD7F7 mov     rax, [rbp+var_38]
//   0x1CD7FB sub     rax, fs:28h
//   0x1CD804 jnz     loc_1CDBFB
//   0x1CD80A lea     rsp, [rbp-28h]
//   0x1CD80E mov     eax, ebx
//   0x1CD810 pop     rbx
//   0x1CD811 pop     r12
//   0x1CD813 pop     r13
//   0x1CD815 pop     r14
//   0x1CD817 pop     r15
//   0x1CD819 pop     rbp
//   0x1CD81A retn
//   0x1CD81B align 20h
//   0x1CD820 mov     ebx, eax
//   0x1CD822 mov     rax, [r14+8]
//   0x1CD826 mov     r11, [r14+58h]
//   0x1CD82A mov     r15, [rax+70h]
//   0x1CD82E mov     rax, [r14+60h]
//   0x1CD832 lea     rax, [rax+rax*4]
//   0x1CD836 shl     rax, 4
//   0x1CD83A add     rax, r11
//   0x1CD83D mov     [rbp+var_98], rax
//   0x1CD844 cmp     rax, r11
//   0x1CD847 jz      short loc_1CD7F7
//   0x1CD849 mov     [rbp+var_90], 0
//   0x1CD854 mov     eax, [r11+48h]
//   0x1CD858 test    al, 2
//   0x1CD85A jz      loc_1CD940
//   0x1CD860 test    r12b, r12b
//   0x1CD863 jz      loc_1CDB32
//   0x1CD869 cmp     byte ptr [r13+0], 0
//   0x1CD86E jz      loc_1CDC00
//   0x1CD874 cmp     dword ptr [r11], 3
//   0x1CD878 jnz     loc_1CD7F5
//   0x1CD87E mov     rax, [r15]
//   0x1CD881 movzx   esi, word ptr [r11+8]
//   0x1CD886 mov     rdi, r15
//   0x1CD889 mov     [rbp+var_B0], r11
//   0x1CD890 call    qword ptr [rax+0A8h]
//   0x1CD896 movd    xmm0, dword ptr [r15+54h]
//   0x1CD89C lea     rdi, [rbp+var_50]
//   0x1CD8A0 xor     r9d, r9d
//   0x1CD8A3 mov     edx, eax
//   0x1CD8A5 mov     rax, [r14]
//   0x1CD8A8 mov     [rbp+var_A8], rdi
//   0x1CD8AF mov     r8, rdi
//   0x1CD8B2 movd    xmm2, edx
//   0x1CD8B6 mov     rdi, r14
//   0x1CD8B9 mov     rsi, 200000001h
//   0x1CD8C3 punpckldq xmm0, xmm2
//   0x1CD8C7 mov     rax, [rax+40h]
//   0x1CD8CB mov     [rbp+var_50], 1
//   0x1CD8D3 movq    [rbp+var_50+4], xmm0
//   0x1CD8D8 mov     edx, [r15+40h]
//   0x1CD8DC mov     [rbp+var_60], rsi
//   0x1CD8E0 lea     rsi, [rbp+var_60]
//   0x1CD8E4 mov     [rbp+var_58], edx
//   0x1CD8E7 mov     rcx, rsi
//   0x1CD8EA mov     rdx, r13
//   0x1CD8ED mov     [rbp+var_A0], rsi
//   0x1CD8F4 mov     esi, 1
//   0x1CD8F9 call    rax
//   0x1CD8FB mov     rdi, [rbp+var_A0]
//   0x1CD902 call    sub_1181E0
//   0x1CD907 mov     rdi, [rbp+var_A8]
//   0x1CD90E call    sub_1181E0
//   0x1CD913 mov     r11, [rbp+var_B0]
//   0x1CD91A add     r11, 50h ; 'P'
//   0x1CD91E cmp     [rbp+var_98], r11
//   0x1CD925 jz      loc_1CD7F7
//   0x1CD92B mov     eax, [r11+48h]
//   0x1CD92F test    al, 2
//   0x1CD931 jnz     loc_1CD869
//   0x1CD937 nop     word ptr [rax+rax+00000000h]
//   0x1CD940 cmp     [rbp+var_90], 0
//   0x1CD948 jz      loc_1CDB50
//   0x1CD94E cmp     [rbp+var_90], 1
//   0x1CD956 jnz     loc_1CD7F5
//   0x1CD95C mov     rdi, [rbp+var_78]
//   0x1CD960 test    byte ptr [rdi+10h], 2Ah
//   0x1CD964 jnz     loc_1CD7F5
//   0x1CD96A mov     dword ptr [rbp+var_B0], 1
//   0x1CD974 mov     ecx, [rdi+8]
//   0x1CD977 mov     rdi, [rbp+var_80]
//   0x1CD97B lea     edx, [rcx-16h]
//   0x1CD97E mov     dword ptr [rbp+var_A0], ecx
//   0x1CD984 mov     [rbp+var_C0], rdi
//   0x1CD98B cmp     edx, 2
//   0x1CD98E ja      loc_1CDB98
//   0x1CD994 test    al, 4
//   0x1CD996 jz      loc_1CDBC8
//   0x1CD99C cmp     dword ptr [r11], 3
//   0x1CD9A0 jnz     loc_1CD7F5
//   0x1CD9A6 mov     rax, [r15]
//   0x1CD9A9 movzx   esi, word ptr [r11+8]
//   0x1CD9AE mov     [rbp+var_A8], r11
//   0x1CD9B5 mov     rdi, r15
//   0x1CD9B8 call    qword ptr [rax+0A8h]
//   0x1CD9BE mov     edi, 50h ; 'P'
//   0x1CD9C3 mov     dword ptr [rbp+var_A0], eax
//   0x1CD9C9 call    j__qalloc_or_throw
//   0x1CD9CE mov     rsi, [r14+40h]
//   0x1CD9D2 mov     rdx, rax
//   0x1CD9D5 mov     [rbp+var_B8], rax
//   0x1CD9DC mov     rax, 0FFFFFFFF00000000h
//   0x1CD9E6 mov     [rdx+20h], rax
//   0x1CD9EA mov     rdi, rdx
//   0x1CD9ED mov     qword ptr [rdx+28h], 0
//   0x1CD9F5 mov     [rdx+30h], rax
//   0x1CD9F9 mov     qword ptr [rdx+38h], 0
//   0x1CDA01 mov     [rdx+40h], rax
//   0x1CDA05 mov     qword ptr [rdx+48h], 0
//   0x1CDA0D call    sub_32ADE0
//   0x1CDA12 mov     r11, [rbp+var_A8]
//   0x1CDA19 mov     esi, 2
//   0x1CDA1E mov     rdi, [r11+40h]
//   0x1CDA22 mov     [rbp+var_D0], r11
//   0x1CDA29 call    _get_tinfo_property
//   0x1CDA2E sub     rsp, 8
//   0x1CDA32 lea     rsi, [rbp+var_50]
//   0x1CDA36 mov     rdi, 0FFFFFFFF00000000h
//   0x1CDA40 mov     [rbp+var_50], rdi
//   0x1CDA44 and     eax, 0Fh
//   0x1CDA47 mov     r9, rsi
//   0x1CDA4A lea     rcx, [rbp+var_70]
//   0x1CDA4E mov     [rbp+var_48], 0
//   0x1CDA56 movd    xmm0, dword ptr [r15+54h]
//   0x1CDA5C cmp     al, 9
//   0x1CDA5E mov     rdi, 200000001h
//   0x1CDA68 movd    xmm1, dword ptr [rbp+var_A0]
//   0x1CDA70 mov     [rbp+var_60], 1
//   0x1CDA78 setz    al
//   0x1CDA7B movzx   eax, al
//   0x1CDA7E mov     [rbp+var_70], rdi
//   0x1CDA82 mov     rdi, r14
//   0x1CDA85 punpckldq xmm0, xmm1
//   0x1CDA89 movq    [rbp+var_60+4], xmm0
//   0x1CDA8E mov     edx, [r15+40h]
//   0x1CDA92 mov     [rbp+var_68], edx
//   0x1CDA95 lea     rdx, [rbp+var_60]
//   0x1CDA99 push    rax
//   0x1CDA9A mov     r8, rdx
//   0x1CDA9D mov     [rbp+var_A8], rsi
//   0x1CDAA4 mov     rsi, [rbp+var_B8]
//   0x1CDAAB mov     [rbp+var_A0], rdx
//   0x1CDAB2 mov     edx, 2
//   0x1CDAB7 mov     [rbp+var_C8], rcx
//   0x1CDABE call    sub_3F0AE0
//   0x1CDAC3 mov     rdi, [rbp+var_C8]
//   0x1CDACA pop     rax
//   0x1CDACB pop     rdx
//   0x1CDACC call    sub_1181E0
//   0x1CDAD1 mov     rdi, [rbp+var_A0]
//   0x1CDAD8 call    sub_1181E0
//   0x1CDADD mov     rdi, [rbp+var_A8]
//   0x1CDAE4 call    sub_1181E0
//   0x1CDAE9 mov     rax, [rbp+var_B8]
//   0x1CDAF0 mov     edx, dword ptr [rbp+var_B0]
//   0x1CDAF6 mov     rdi, [rbp+var_C0]
//   0x1CDAFD mov     [rax+44h], edx
//   0x1CDB00 call    sub_1181E0
//   0x1CDB05 mov     rax, [rbp+var_C0]
//   0x1CDB0C mov     rdi, [rbp+var_B8]
//   0x1CDB13 mov     edx, dword ptr [rbp+var_B0]
//   0x1CDB19 mov     r11, [rbp+var_D0]
//   0x1CDB20 mov     byte ptr [rax], 4
//   0x1CDB23 mov     [rax+8], rdi
//   0x1CDB27 mov     [rax+4], edx
//   0x1CDB2A add     [rbp+var_90], 1
//   0x1CDB32 add     r11, 50h ; 'P'
//   0x1CDB36 cmp     [rbp+var_98], r11
//   0x1CDB3D jnz     loc_1CD854
//   0x1CDB43 jmp     loc_1CD7F7
//   0x1CDB48 align 10h
//   0x1CDB50 mov     rax, [rbp+var_78]
//   0x1CDB54 test    byte ptr [rax+10h], 8
//   0x1CDB58 jnz     loc_1CD7F5
//   0x1CDB5E movzx   edi, byte ptr [rax+0Ch]
//   0x1CDB62 mov     [rbp+var_A0], r11
//   0x1CDB69 call    _get_dtype_size
//   0x1CDB6E mov     r11, [rbp+var_A0]
//   0x1CDB75 mov     rcx, [rbp+var_88]
//   0x1CDB7C mov     dword ptr [rbp+var_B0], eax
//   0x1CDB82 mov     [rbp+var_C0], rcx
//   0x1CDB89 mov     eax, [r11+48h]
//   0x1CDB8D jmp     loc_1CD994
//   0x1CDB92 align 8
//   0x1CDB98 mov     rax, [rbp+var_78]
//   0x1CDB9C mov     [rbp+var_A0], r11
//   0x1CDBA3 movzx   edi, byte ptr [rax+0Ch]
//   0x1CDBA7 call    _get_dtype_size
//   0x1CDBAC mov     r11, [rbp+var_A0]
//   0x1CDBB3 mov     dword ptr [rbp+var_B0], eax
//   0x1CDBB9 mov     eax, [r11+48h]
//   0x1CDBBD jmp     loc_1CD994
//   0x1CDBC2 align 8
//   0x1CDBC8 mov     ecx, dword ptr [rbp+var_B0]
//   0x1CDBCE mov     rsi, [rbp+var_C0]
//   0x1CDBD5 mov     rdx, r11
//   0x1CDBD8 mov     rdi, r15
//   0x1CDBDB mov     [rbp+var_A0], r11
//   0x1CDBE2 call    sub_1CD450
//   0x1CDBE7 mov     r11, [rbp+var_A0]
//   0x1CDBEE test    al, al
//   0x1CDBF0 jnz     loc_1CDB2A
//   0x1CDBF6 jmp     loc_1CD7F5
//   0x1CDBFB call    ___stack_chk_fail
//   0x1CDC00 mov     rax, cs:under_debugger_ptr
//   0x1CDC07 cmp     byte ptr [rax], 0
//   0x1CDC0A jnz     loc_408A1
//   0x1CDC10 mov     rax, [rbp+var_38]
//   0x1CDC14 sub     rax, fs:28h
//   0x1CDC1D jnz     short loc_1CDC29
//   0x1CDC1F mov     edi, 0CE3Eh
//   0x1CDC24 call    sub_37CFE0
//   0x1CDC29 call    ___stack_chk_fail
//   0x1CDC2E mov     rbx, rax
//   0x1CDC31 jmp     loc_408A3
//   0x1CDC36 mov     rbx, rax
//   0x1CDC39 jmp     loc_408D6
//   0x1CDC3E mov     rbx, rax
//   0x1CDC41 jmp     loc_40917
// ============================================================

void sub_1CD7B0(/* signature unknown */)
{
    // see disassembly above
}

