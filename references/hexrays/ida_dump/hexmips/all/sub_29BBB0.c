// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x29BBB0
// Name:           sub_29BBB0
// Function size:  1018 bytes (233 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x29BBB0 push    r13
//   0x29BBB2 push    r12
//   0x29BBB4 push    rbp
//   0x29BBB5 push    rbx
//   0x29BBB6 sub     rsp, 68h
//   0x29BBBA mov     eax, [rdi]
//   0x29BBBC mov     rbx, fs:28h
//   0x29BBC5 mov     [rsp+88h+var_30], rbx
//   0x29BBCA mov     rbx, rdi
//   0x29BBCD mov     [rsp+88h+var_70], 0
//   0x29BBD6 cmp     eax, 1
//   0x29BBD9 jz      loc_29BC70
//   0x29BBDF cmp     eax, 6
//   0x29BBE2 jnz     short loc_29BC60
//   0x29BBE4 mov     rax, [rbx+8]
//   0x29BBE8 mov     rbp, rsi
//   0x29BBEB mov     esi, 2
//   0x29BBF0 lea     r12, [rsp+88h+var_70]
//   0x29BBF5 mov     rdi, [rax+30h]
//   0x29BBF9 call    _get_tinfo_property
//   0x29BBFE and     eax, 0Fh
//   0x29BC01 cmp     al, 0Ah
//   0x29BC03 jz      loc_29BD10
//   0x29BC09 xor     ebx, ebx
//   0x29BC0B mov     rdi, r12
//   0x29BC0E call    _clear_tinfo_t
//   0x29BC13 mov     rax, [rsp+88h+var_30]
//   0x29BC18 sub     rax, fs:28h
//   0x29BC21 jnz     loc_29BF31
//   0x29BC27 add     rsp, 68h
//   0x29BC2B mov     eax, ebx
//   0x29BC2D pop     rbx
//   0x29BC2E pop     rbp
//   0x29BC2F pop     r12
//   0x29BC31 pop     r13
//   0x29BC33 retn
//   0x29BC34 align 8
//   0x29BC38 lea     rsi, aGccVaList+4; s2
//   0x29BC3F mov     rdi, r12; s1
//   0x29BC42 call    _strcmp
//   0x29BC47 test    r12, r12
//   0x29BC4A jnz     loc_29BF13
//   0x29BC50 test    eax, eax
//   0x29BC52 jnz     loc_29BEC9
//   0x29BC58 nop     dword ptr [rax+rax+00000000h]
//   0x29BC60 lea     r12, [rsp+88h+var_70]
//   0x29BC65 jmp     short loc_29BC09
//   0x29BC67 align 10h
//   0x29BC70 mov     rdi, [rbx+8]
//   0x29BC74 mov     esi, 2
//   0x29BC79 lea     r12, [rsp+88h+var_70]
//   0x29BC7E call    _get_tinfo_property
//   0x29BC83 and     eax, 0Fh
//   0x29BC86 cmp     al, 0Ah
//   0x29BC88 jnz     loc_29BC09
//   0x29BC8E mov     rdi, [rbx+8]
//   0x29BC92 pxor    xmm0, xmm0
//   0x29BC96 lea     rbp, [rsp+88h+s1]
//   0x29BC9B mov     [rsp+88h+s1], 0
//   0x29BCA4 movups  [rsp+88h+var_60], xmm0
//   0x29BCA9 test    edi, 100h
//   0x29BCAF jnz     loc_29BE78
//   0x29BCB5 mov     [rsp+88h+s1], 0
//   0x29BCBE mov     esi, 0Ah
//   0x29BCC3 call    _get_tinfo_property
//   0x29BCC8 lea     r12, [rsp+88h+var_70]
//   0x29BCCD mov     rsi, rbp
//   0x29BCD0 mov     [rsp+88h+s1], rax
//   0x29BCD5 mov     rdi, r12
//   0x29BCD8 call    _copy_tinfo_t
//   0x29BCDD mov     rdi, rbp
//   0x29BCE0 call    _clear_tinfo_t
//   0x29BCE5 mov     rdi, r12
//   0x29BCE8 call    sub_328AF0
//   0x29BCED test    al, al
//   0x29BCEF jnz     loc_29BC09
//   0x29BCF5 mov     rax, [rbx+8]
//   0x29BCF9 mov     rdx, [rsp+88h+var_70]
//   0x29BCFE mov     [rsp+88h+var_70], rax
//   0x29BD03 mov     [rbx+8], rdx
//   0x29BD07 jmp     loc_29BDF0
//   0x29BD0C align 10h
//   0x29BD10 mov     rsi, [rbx+8]
//   0x29BD14 pxor    xmm0, xmm0
//   0x29BD18 mov     [rsp+88h+s1], 0
//   0x29BD21 movups  [rsp+88h+var_60], xmm0
//   0x29BD26 mov     rax, [rsi+30h]
//   0x29BD2A test    ah, 1
//   0x29BD2D jnz     loc_29BE10
//   0x29BD33 cmp     dword ptr [rsi+8], 34h ; '4'
//   0x29BD37 jz      loc_29BE00
//   0x29BD3D lea     rdi, [rbp+10h]
//   0x29BD41 lea     r12, [rsp+88h+var_70]
//   0x29BD46 call    sub_2524F0
//   0x29BD4B test    rax, rax
//   0x29BD4E jz      loc_29BF36
//   0x29BD54 cmp     dword ptr [rax+8], 33h ; '3'
//   0x29BD58 jz      loc_29BE04
//   0x29BD5E mov     rax, [rbx+8]
//   0x29BD62 mov     esi, 0Ah
//   0x29BD67 mov     [rsp+88h+s1], 0
//   0x29BD70 mov     rdi, [rax+30h]
//   0x29BD74 call    _get_tinfo_property
//   0x29BD79 lea     rbp, [rsp+88h+s1]
//   0x29BD7E lea     r12, [rsp+88h+var_70]
//   0x29BD83 mov     [rsp+88h+s1], rax
//   0x29BD88 mov     rsi, rbp
//   0x29BD8B mov     rdi, r12
//   0x29BD8E call    _copy_tinfo_t
//   0x29BD93 mov     rdi, rbp
//   0x29BD96 call    _clear_tinfo_t
//   0x29BD9B mov     rdi, r12
//   0x29BD9E call    sub_328AF0
//   0x29BDA3 test    al, al
//   0x29BDA5 jnz     loc_29BC09
//   0x29BDAB mov     eax, [rbx+4]
//   0x29BDAE lea     rdi, [rsp+88h+var_40]
//   0x29BDB3 mov     rsi, r12
//   0x29BDB6 mov     [rsp+88h+var_48], 1
//   0x29BDBE mov     [rsp+88h+var_40], 0
//   0x29BDC7 and     eax, 4
//   0x29BDCA mov     [rsp+88h+var_44], eax
//   0x29BDCE call    _copy_tinfo_t
//   0x29BDD3 lea     rbp, [rsp+88h+var_48]
//   0x29BDD8 mov     rdi, rbx
//   0x29BDDB mov     rsi, rbp
//   0x29BDDE call    sub_29AEF0
//   0x29BDE3 mov     rdi, rbp
//   0x29BDE6 call    sub_29A3B0
//   0x29BDEB nop     dword ptr [rax+rax+00h]
//   0x29BDF0 mov     ebx, 1
//   0x29BDF5 jmp     loc_29BC0B
//   0x29BDFA align 20h
//   0x29BE00 mov     rax, [rsi+18h]
//   0x29BE04 mov     [rbx+8], rax
//   0x29BE08 lea     r12, [rsp+88h+var_70]
//   0x29BE0D jmp     short loc_29BDF0
//   0x29BE0F align 10h
//   0x29BE10 lea     rdi, [rsp+88h+s1]
//   0x29BE15 xor     edx, edx
//   0x29BE17 mov     rsi, rax
//   0x29BE1A call    _get_tinfo_pdata
//   0x29BE1F mov     r12, [rsp+88h+s1]
//   0x29BE24 test    rax, rax
//   0x29BE27 jnz     short loc_29BE50
//   0x29BE29 test    r12, r12
//   0x29BE2C jz      short loc_29BE69
//   0x29BE2E mov     qword ptr [rsp+88h+var_60], 0
//   0x29BE37 mov     rdi, r12
//   0x29BE3A call    _qfree
//   0x29BE3F mov     rsi, [rbx+8]
//   0x29BE43 jmp     loc_29BD33
//   0x29BE48 align 10h
//   0x29BE50 cmp     qword ptr [rsp+88h+var_60], 0
//   0x29BE56 jnz     loc_29BED8
//   0x29BE5C test    r12, r12
//   0x29BE5F jz      short loc_29BE69
//   0x29BE61 mov     rdi, r12
//   0x29BE64 call    _qfree
//   0x29BE69 mov     rsi, [rbx+8]
//   0x29BE6D jmp     loc_29BD33
//   0x29BE72 align 8
//   0x29BE78 mov     rsi, rdi
//   0x29BE7B xor     edx, edx
//   0x29BE7D mov     rdi, rbp
//   0x29BE80 call    _get_tinfo_pdata
//   0x29BE85 mov     r12, [rsp+88h+s1]
//   0x29BE8A test    rax, rax
//   0x29BE8D jnz     short loc_29BEB0
//   0x29BE8F test    r12, r12
//   0x29BE92 jz      short loc_29BEC9
//   0x29BE94 mov     qword ptr [rsp+88h+var_60], 0
//   0x29BE9D mov     rdi, r12
//   0x29BEA0 call    _qfree
//   0x29BEA5 mov     rdi, [rbx+8]
//   0x29BEA9 jmp     loc_29BCB5
//   0x29BEAE align 10h
//   0x29BEB0 cmp     qword ptr [rsp+88h+var_60], 0
//   0x29BEB6 jnz     loc_29BC38
//   0x29BEBC test    r12, r12
//   0x29BEBF jz      short loc_29BEC9
//   0x29BEC1 mov     rdi, r12
//   0x29BEC4 call    _qfree
//   0x29BEC9 mov     rdi, [rbx+8]
//   0x29BECD jmp     loc_29BCB5
//   0x29BED2 align 8
//   0x29BED8 lea     rsi, aGccVaList+4; s2
//   0x29BEDF mov     rdi, r12; s1
//   0x29BEE2 call    _strcmp
//   0x29BEE7 mov     r13d, eax
//   0x29BEEA test    r12, r12
//   0x29BEED jnz     short loc_29BF00
//   0x29BEEF test    r13d, r13d
//   0x29BEF2 jz      loc_29BC60
//   0x29BEF8 jmp     loc_29BE69
//   0x29BEFD align 20h
//   0x29BF00 mov     qword ptr [rsp+88h+var_60], 0
//   0x29BF09 mov     rdi, r12
//   0x29BF0C call    _qfree
//   0x29BF11 jmp     short loc_29BEEF
//   0x29BF13 mov     rdi, r12
//   0x29BF16 mov     [rsp+88h+var_7C], eax
//   0x29BF1A mov     qword ptr [rsp+88h+var_60], 0
//   0x29BF23 call    _qfree
//   0x29BF28 mov     eax, [rsp+88h+var_7C]
//   0x29BF2C jmp     loc_29BC50
//   0x29BF31 call    ___stack_chk_fail
//   0x29BF36 mov     rax, cs:under_debugger_ptr
//   0x29BF3D cmp     byte ptr [rax], 0
//   0x29BF40 jnz     loc_4D1A2
//   0x29BF46 mov     rax, [rsp+88h+var_30]
//   0x29BF4B sub     rax, fs:28h
//   0x29BF54 jnz     short loc_29BF65
//   0x29BF56 mov     edi, 0C528h
//   0x29BF5B lea     r12, [rsp+88h+var_70]
//   0x29BF60 call    sub_37E160
//   0x29BF65 call    ___stack_chk_fail
//   0x29BF6A mov     rbx, rax
//   0x29BF6D jmp     loc_4D1B3
//   0x29BF72 mov     rbx, rax
//   0x29BF75 jmp     loc_4D1D3
//   0x29BF7A mov     rbx, rax
//   0x29BF7D jmp     loc_4D1E2
//   0x29BF82 mov     rbx, rax
//   0x29BF85 jmp     loc_4D1A4
//   0x29BF8A mov     rbx, rax
//   0x29BF8D jmp     loc_4D1EC
//   0x29BF92 mov     rbx, rax
//   0x29BF95 jmp     loc_4D204
//   0x29BF9A mov     rbx, rax
//   0x29BF9D jmp     loc_4D20E
//   0x29BFA2 mov     rbx, rax
//   0x29BFA5 jmp     loc_4D226
// ============================================================

void sub_29BBB0(/* signature unknown */)
{
    // see disassembly above
}

