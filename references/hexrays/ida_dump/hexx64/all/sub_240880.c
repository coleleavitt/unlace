// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x240880
// Name:           sub_240880
// Function size:  413 bytes (107 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x240880 push    r15
//   0x240882 push    r14
//   0x240884 push    r13
//   0x240886 mov     r13, rsi
//   0x240889 push    r12
//   0x24088B mov     r12, rdx
//   0x24088E push    rbp
//   0x24088F mov     ebp, ecx
//   0x240891 push    rbx
//   0x240892 mov     edx, ebp
//   0x240894 mov     rbx, rdi
//   0x240897 sub     rsp, 48h
//   0x24089B mov     rcx, [rsi]
//   0x24089E mov     [rsp+78h+var_6C], r8d
//   0x2408A3 lea     r14, [rsp+78h+var_50]
//   0x2408A8 mov     r8, r14
//   0x2408AB mov     rax, fs:28h
//   0x2408B4 mov     [rsp+78h+var_40], rax
//   0x2408B9 xor     eax, eax
//   0x2408BB lea     rax, [rsi+8]
//   0x2408BF mov     rsi, r12
//   0x2408C2 mov     [rsp+78h+var_50], 0
//   0x2408CB mov     rdi, rax
//   0x2408CE mov     [rsp+78h+var_68], rax
//   0x2408D3 call    sub_257CA0
//   0x2408D8 mov     r15d, eax
//   0x2408DB test    eax, eax
//   0x2408DD jz      loc_240960
//   0x2408E3 or      byte ptr [r13+0Dh], 20h
//   0x2408E8 mov     rdi, [rsp+78h+var_50]
//   0x2408ED mov     esi, 3
//   0x2408F2 call    _get_tinfo_property
//   0x2408F7 xor     edx, edx
//   0x2408F9 mov     rdi, [r13+0]
//   0x2408FD cmp     eax, 1
//   0x240900 mov     esi, ebp
//   0x240902 setz    dl
//   0x240905 call    sub_32ABC0
//   0x24090A mov     [r13+0], rax
//   0x24090E mov     rdx, rax
//   0x240911 movzx   eax, byte ptr [r13+0Dh]
//   0x240916 test    al, 18h
//   0x240918 jnz     loc_2409A8
//   0x24091E cmp     r15d, 2
//   0x240922 jz      short loc_240940
//   0x240924 mov     qword ptr [rbx], 0
//   0x24092B mov     rsi, r14
//   0x24092E mov     rdi, rbx
//   0x240931 call    _copy_tinfo_t
//   0x240936 jmp     short loc_240978
//   0x240938 align 20h
//   0x240940 mov     rsi, r14
//   0x240943 mov     rdi, r13
//   0x240946 mov     [rsp+78h+var_60], rdx
//   0x24094B call    sub_255A30
//   0x240950 mov     rdx, [rsp+78h+var_60]
//   0x240955 cmp     rdx, rax
//   0x240958 jz      short loc_2409B8
//   0x24095A nop     word ptr [rax+rax+00h]
//   0x240960 and     byte ptr [r13+0Dh], 0DFh
//   0x240965 mov     ecx, [rsp+78h+var_6C]
//   0x240969 mov     edx, ebp
//   0x24096B mov     rdi, rbx
//   0x24096E mov     rsi, [r12+70h]
//   0x240973 call    sub_32C430
//   0x240978 mov     rdi, r14
//   0x24097B call    _clear_tinfo_t
//   0x240980 mov     rax, [rsp+78h+var_40]
//   0x240985 sub     rax, fs:28h
//   0x24098E jnz     short loc_240A08
//   0x240990 add     rsp, 48h
//   0x240994 mov     rax, rbx
//   0x240997 pop     rbx
//   0x240998 pop     rbp
//   0x240999 pop     r12
//   0x24099B pop     r13
//   0x24099D pop     r14
//   0x24099F pop     r15
//   0x2409A1 retn
//   0x2409A2 align 8
//   0x2409A8 test    al, 6
//   0x2409AA jnz     loc_24091E
//   0x2409B0 jmp     loc_240924
//   0x2409B5 align 8
//   0x2409B8 lea     r15, [rsp+78h+var_48]
//   0x2409BD xor     ecx, ecx
//   0x2409BF xor     esi, esi
//   0x2409C1 mov     rdi, r13
//   0x2409C4 mov     [rsp+78h+var_48], 0
//   0x2409CD mov     rdx, r15
//   0x2409D0 call    sub_265AA0
//   0x2409D5 mov     rdi, r15
//   0x2409D8 mov     byte ptr [rsp+78h+var_60], al
//   0x2409DC call    _clear_tinfo_t
//   0x2409E1 movzx   eax, byte ptr [rsp+78h+var_60]
//   0x2409E6 test    al, al
//   0x2409E8 jz      loc_240960
//   0x2409EE mov     rsi, [r13+28h]
//   0x2409F2 mov     rdi, [rsp+78h+var_68]
//   0x2409F7 and     rsi, 0FFFFFFFFFFFDFFFFh
//   0x2409FE call    sub_329C80
//   0x240A03 jmp     loc_240924
//   0x240A08 call    ___stack_chk_fail
//   0x240A0D mov     rbx, rax
//   0x240A10 jmp     loc_46E1E
//   0x240A15 mov     rbx, rax
//   0x240A18 jmp     loc_46E16
// ============================================================

void sub_240880(/* signature unknown */)
{
    // see disassembly above
}

