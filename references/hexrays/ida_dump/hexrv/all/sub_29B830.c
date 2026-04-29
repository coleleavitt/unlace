// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x29B830
// Name:           sub_29B830
// Function size:  1018 bytes (233 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x29B830 push    r13
//   0x29B832 push    r12
//   0x29B834 push    rbp
//   0x29B835 push    rbx
//   0x29B836 sub     rsp, 68h
//   0x29B83A mov     eax, [rdi]
//   0x29B83C mov     rbx, fs:28h
//   0x29B845 mov     [rsp+88h+var_30], rbx
//   0x29B84A mov     rbx, rdi
//   0x29B84D mov     [rsp+88h+var_70], 0
//   0x29B856 cmp     eax, 1
//   0x29B859 jz      loc_29B8F0
//   0x29B85F cmp     eax, 6
//   0x29B862 jnz     short loc_29B8E0
//   0x29B864 mov     rax, [rbx+8]
//   0x29B868 mov     rbp, rsi
//   0x29B86B mov     esi, 2
//   0x29B870 lea     r12, [rsp+88h+var_70]
//   0x29B875 mov     rdi, [rax+30h]
//   0x29B879 call    _get_tinfo_property
//   0x29B87E and     eax, 0Fh
//   0x29B881 cmp     al, 0Ah
//   0x29B883 jz      loc_29B990
//   0x29B889 xor     ebx, ebx
//   0x29B88B mov     rdi, r12
//   0x29B88E call    _clear_tinfo_t
//   0x29B893 mov     rax, [rsp+88h+var_30]
//   0x29B898 sub     rax, fs:28h
//   0x29B8A1 jnz     loc_29BBB1
//   0x29B8A7 add     rsp, 68h
//   0x29B8AB mov     eax, ebx
//   0x29B8AD pop     rbx
//   0x29B8AE pop     rbp
//   0x29B8AF pop     r12
//   0x29B8B1 pop     r13
//   0x29B8B3 retn
//   0x29B8B4 align 8
//   0x29B8B8 lea     rsi, aGccVaList+4; s2
//   0x29B8BF mov     rdi, r12; s1
//   0x29B8C2 call    _strcmp
//   0x29B8C7 test    r12, r12
//   0x29B8CA jnz     loc_29BB93
//   0x29B8D0 test    eax, eax
//   0x29B8D2 jnz     loc_29BB49
//   0x29B8D8 nop     dword ptr [rax+rax+00000000h]
//   0x29B8E0 lea     r12, [rsp+88h+var_70]
//   0x29B8E5 jmp     short loc_29B889
//   0x29B8E7 align 10h
//   0x29B8F0 mov     rdi, [rbx+8]
//   0x29B8F4 mov     esi, 2
//   0x29B8F9 lea     r12, [rsp+88h+var_70]
//   0x29B8FE call    _get_tinfo_property
//   0x29B903 and     eax, 0Fh
//   0x29B906 cmp     al, 0Ah
//   0x29B908 jnz     loc_29B889
//   0x29B90E mov     rdi, [rbx+8]
//   0x29B912 pxor    xmm0, xmm0
//   0x29B916 lea     rbp, [rsp+88h+s1]
//   0x29B91B mov     [rsp+88h+s1], 0
//   0x29B924 movups  [rsp+88h+var_60], xmm0
//   0x29B929 test    edi, 100h
//   0x29B92F jnz     loc_29BAF8
//   0x29B935 mov     [rsp+88h+s1], 0
//   0x29B93E mov     esi, 0Ah
//   0x29B943 call    _get_tinfo_property
//   0x29B948 lea     r12, [rsp+88h+var_70]
//   0x29B94D mov     rsi, rbp
//   0x29B950 mov     [rsp+88h+s1], rax
//   0x29B955 mov     rdi, r12
//   0x29B958 call    _copy_tinfo_t
//   0x29B95D mov     rdi, rbp
//   0x29B960 call    _clear_tinfo_t
//   0x29B965 mov     rdi, r12
//   0x29B968 call    sub_328770
//   0x29B96D test    al, al
//   0x29B96F jnz     loc_29B889
//   0x29B975 mov     rax, [rbx+8]
//   0x29B979 mov     rdx, [rsp+88h+var_70]
//   0x29B97E mov     [rsp+88h+var_70], rax
//   0x29B983 mov     [rbx+8], rdx
//   0x29B987 jmp     loc_29BA70
//   0x29B98C align 10h
//   0x29B990 mov     rsi, [rbx+8]
//   0x29B994 pxor    xmm0, xmm0
//   0x29B998 mov     [rsp+88h+s1], 0
//   0x29B9A1 movups  [rsp+88h+var_60], xmm0
//   0x29B9A6 mov     rax, [rsi+30h]
//   0x29B9AA test    ah, 1
//   0x29B9AD jnz     loc_29BA90
//   0x29B9B3 cmp     dword ptr [rsi+8], 34h ; '4'
//   0x29B9B7 jz      loc_29BA80
//   0x29B9BD lea     rdi, [rbp+10h]
//   0x29B9C1 lea     r12, [rsp+88h+var_70]
//   0x29B9C6 call    sub_252170
//   0x29B9CB test    rax, rax
//   0x29B9CE jz      loc_29BBB6
//   0x29B9D4 cmp     dword ptr [rax+8], 33h ; '3'
//   0x29B9D8 jz      loc_29BA84
//   0x29B9DE mov     rax, [rbx+8]
//   0x29B9E2 mov     esi, 0Ah
//   0x29B9E7 mov     [rsp+88h+s1], 0
//   0x29B9F0 mov     rdi, [rax+30h]
//   0x29B9F4 call    _get_tinfo_property
//   0x29B9F9 lea     rbp, [rsp+88h+s1]
//   0x29B9FE lea     r12, [rsp+88h+var_70]
//   0x29BA03 mov     [rsp+88h+s1], rax
//   0x29BA08 mov     rsi, rbp
//   0x29BA0B mov     rdi, r12
//   0x29BA0E call    _copy_tinfo_t
//   0x29BA13 mov     rdi, rbp
//   0x29BA16 call    _clear_tinfo_t
//   0x29BA1B mov     rdi, r12
//   0x29BA1E call    sub_328770
//   0x29BA23 test    al, al
//   0x29BA25 jnz     loc_29B889
//   0x29BA2B mov     eax, [rbx+4]
//   0x29BA2E lea     rdi, [rsp+88h+var_40]
//   0x29BA33 mov     rsi, r12
//   0x29BA36 mov     [rsp+88h+var_48], 1
//   0x29BA3E mov     [rsp+88h+var_40], 0
//   0x29BA47 and     eax, 4
//   0x29BA4A mov     [rsp+88h+var_44], eax
//   0x29BA4E call    _copy_tinfo_t
//   0x29BA53 lea     rbp, [rsp+88h+var_48]
//   0x29BA58 mov     rdi, rbx
//   0x29BA5B mov     rsi, rbp
//   0x29BA5E call    sub_29AB70
//   0x29BA63 mov     rdi, rbp
//   0x29BA66 call    sub_29A030
//   0x29BA6B nop     dword ptr [rax+rax+00h]
//   0x29BA70 mov     ebx, 1
//   0x29BA75 jmp     loc_29B88B
//   0x29BA7A align 20h
//   0x29BA80 mov     rax, [rsi+18h]
//   0x29BA84 mov     [rbx+8], rax
//   0x29BA88 lea     r12, [rsp+88h+var_70]
//   0x29BA8D jmp     short loc_29BA70
//   0x29BA8F align 10h
//   0x29BA90 lea     rdi, [rsp+88h+s1]
//   0x29BA95 xor     edx, edx
//   0x29BA97 mov     rsi, rax
//   0x29BA9A call    _get_tinfo_pdata
//   0x29BA9F mov     r12, [rsp+88h+s1]
//   0x29BAA4 test    rax, rax
//   0x29BAA7 jnz     short loc_29BAD0
//   0x29BAA9 test    r12, r12
//   0x29BAAC jz      short loc_29BAE9
//   0x29BAAE mov     qword ptr [rsp+88h+var_60], 0
//   0x29BAB7 mov     rdi, r12
//   0x29BABA call    _qfree
//   0x29BABF mov     rsi, [rbx+8]
//   0x29BAC3 jmp     loc_29B9B3
//   0x29BAC8 align 10h
//   0x29BAD0 cmp     qword ptr [rsp+88h+var_60], 0
//   0x29BAD6 jnz     loc_29BB58
//   0x29BADC test    r12, r12
//   0x29BADF jz      short loc_29BAE9
//   0x29BAE1 mov     rdi, r12
//   0x29BAE4 call    _qfree
//   0x29BAE9 mov     rsi, [rbx+8]
//   0x29BAED jmp     loc_29B9B3
//   0x29BAF2 align 8
//   0x29BAF8 mov     rsi, rdi
//   0x29BAFB xor     edx, edx
//   0x29BAFD mov     rdi, rbp
//   0x29BB00 call    _get_tinfo_pdata
//   0x29BB05 mov     r12, [rsp+88h+s1]
//   0x29BB0A test    rax, rax
//   0x29BB0D jnz     short loc_29BB30
//   0x29BB0F test    r12, r12
//   0x29BB12 jz      short loc_29BB49
//   0x29BB14 mov     qword ptr [rsp+88h+var_60], 0
//   0x29BB1D mov     rdi, r12
//   0x29BB20 call    _qfree
//   0x29BB25 mov     rdi, [rbx+8]
//   0x29BB29 jmp     loc_29B935
//   0x29BB2E align 10h
//   0x29BB30 cmp     qword ptr [rsp+88h+var_60], 0
//   0x29BB36 jnz     loc_29B8B8
//   0x29BB3C test    r12, r12
//   0x29BB3F jz      short loc_29BB49
//   0x29BB41 mov     rdi, r12
//   0x29BB44 call    _qfree
//   0x29BB49 mov     rdi, [rbx+8]
//   0x29BB4D jmp     loc_29B935
//   0x29BB52 align 8
//   0x29BB58 lea     rsi, aGccVaList+4; s2
//   0x29BB5F mov     rdi, r12; s1
//   0x29BB62 call    _strcmp
//   0x29BB67 mov     r13d, eax
//   0x29BB6A test    r12, r12
//   0x29BB6D jnz     short loc_29BB80
//   0x29BB6F test    r13d, r13d
//   0x29BB72 jz      loc_29B8E0
//   0x29BB78 jmp     loc_29BAE9
//   0x29BB7D align 20h
//   0x29BB80 mov     qword ptr [rsp+88h+var_60], 0
//   0x29BB89 mov     rdi, r12
//   0x29BB8C call    _qfree
//   0x29BB91 jmp     short loc_29BB6F
//   0x29BB93 mov     rdi, r12
//   0x29BB96 mov     [rsp+88h+var_7C], eax
//   0x29BB9A mov     qword ptr [rsp+88h+var_60], 0
//   0x29BBA3 call    _qfree
//   0x29BBA8 mov     eax, [rsp+88h+var_7C]
//   0x29BBAC jmp     loc_29B8D0
//   0x29BBB1 call    ___stack_chk_fail
//   0x29BBB6 mov     rax, cs:under_debugger_ptr
//   0x29BBBD cmp     byte ptr [rax], 0
//   0x29BBC0 jnz     loc_4D174
//   0x29BBC6 mov     rax, [rsp+88h+var_30]
//   0x29BBCB sub     rax, fs:28h
//   0x29BBD4 jnz     short loc_29BBE5
//   0x29BBD6 mov     edi, 0C528h
//   0x29BBDB lea     r12, [rsp+88h+var_70]
//   0x29BBE0 call    sub_37DDE0
//   0x29BBE5 call    ___stack_chk_fail
//   0x29BBEA mov     rbx, rax
//   0x29BBED jmp     loc_4D185
//   0x29BBF2 mov     rbx, rax
//   0x29BBF5 jmp     loc_4D1A5
//   0x29BBFA mov     rbx, rax
//   0x29BBFD jmp     loc_4D1B4
//   0x29BC02 mov     rbx, rax
//   0x29BC05 jmp     loc_4D176
//   0x29BC0A mov     rbx, rax
//   0x29BC0D jmp     loc_4D1BE
//   0x29BC12 mov     rbx, rax
//   0x29BC15 jmp     loc_4D1D6
//   0x29BC1A mov     rbx, rax
//   0x29BC1D jmp     loc_4D1E0
//   0x29BC22 mov     rbx, rax
//   0x29BC25 jmp     loc_4D1F8
// ============================================================

void sub_29B830(/* signature unknown */)
{
    // see disassembly above
}

