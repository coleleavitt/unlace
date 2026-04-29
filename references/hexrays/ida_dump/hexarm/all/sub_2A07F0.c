// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x2A07F0
// Name:           sub_2A07F0
// Function size:  1018 bytes (233 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x2A07F0 push    r13
//   0x2A07F2 push    r12
//   0x2A07F4 push    rbp
//   0x2A07F5 push    rbx
//   0x2A07F6 sub     rsp, 68h
//   0x2A07FA mov     eax, [rdi]
//   0x2A07FC mov     rbx, fs:28h
//   0x2A0805 mov     [rsp+88h+var_30], rbx
//   0x2A080A mov     rbx, rdi
//   0x2A080D mov     [rsp+88h+var_70], 0
//   0x2A0816 cmp     eax, 1
//   0x2A0819 jz      loc_2A08B0
//   0x2A081F cmp     eax, 6
//   0x2A0822 jnz     short loc_2A08A0
//   0x2A0824 mov     rax, [rbx+8]
//   0x2A0828 mov     rbp, rsi
//   0x2A082B mov     esi, 2
//   0x2A0830 lea     r12, [rsp+88h+var_70]
//   0x2A0835 mov     rdi, [rax+30h]
//   0x2A0839 call    _get_tinfo_property
//   0x2A083E and     eax, 0Fh
//   0x2A0841 cmp     al, 0Ah
//   0x2A0843 jz      loc_2A0950
//   0x2A0849 xor     ebx, ebx
//   0x2A084B mov     rdi, r12
//   0x2A084E call    _clear_tinfo_t
//   0x2A0853 mov     rax, [rsp+88h+var_30]
//   0x2A0858 sub     rax, fs:28h
//   0x2A0861 jnz     loc_2A0B71
//   0x2A0867 add     rsp, 68h
//   0x2A086B mov     eax, ebx
//   0x2A086D pop     rbx
//   0x2A086E pop     rbp
//   0x2A086F pop     r12
//   0x2A0871 pop     r13
//   0x2A0873 retn
//   0x2A0874 align 8
//   0x2A0878 lea     rsi, aGccVaList+4; s2
//   0x2A087F mov     rdi, r12; s1
//   0x2A0882 call    _strcmp
//   0x2A0887 test    r12, r12
//   0x2A088A jnz     loc_2A0B53
//   0x2A0890 test    eax, eax
//   0x2A0892 jnz     loc_2A0B09
//   0x2A0898 nop     dword ptr [rax+rax+00000000h]
//   0x2A08A0 lea     r12, [rsp+88h+var_70]
//   0x2A08A5 jmp     short loc_2A0849
//   0x2A08A7 align 10h
//   0x2A08B0 mov     rdi, [rbx+8]
//   0x2A08B4 mov     esi, 2
//   0x2A08B9 lea     r12, [rsp+88h+var_70]
//   0x2A08BE call    _get_tinfo_property
//   0x2A08C3 and     eax, 0Fh
//   0x2A08C6 cmp     al, 0Ah
//   0x2A08C8 jnz     loc_2A0849
//   0x2A08CE mov     rdi, [rbx+8]
//   0x2A08D2 pxor    xmm0, xmm0
//   0x2A08D6 lea     rbp, [rsp+88h+s1]
//   0x2A08DB mov     [rsp+88h+s1], 0
//   0x2A08E4 movups  [rsp+88h+var_60], xmm0
//   0x2A08E9 test    edi, 100h
//   0x2A08EF jnz     loc_2A0AB8
//   0x2A08F5 mov     [rsp+88h+s1], 0
//   0x2A08FE mov     esi, 0Ah
//   0x2A0903 call    _get_tinfo_property
//   0x2A0908 lea     r12, [rsp+88h+var_70]
//   0x2A090D mov     rsi, rbp
//   0x2A0910 mov     [rsp+88h+s1], rax
//   0x2A0915 mov     rdi, r12
//   0x2A0918 call    _copy_tinfo_t
//   0x2A091D mov     rdi, rbp
//   0x2A0920 call    _clear_tinfo_t
//   0x2A0925 mov     rdi, r12
//   0x2A0928 call    sub_32DD50
//   0x2A092D test    al, al
//   0x2A092F jnz     loc_2A0849
//   0x2A0935 mov     rax, [rbx+8]
//   0x2A0939 mov     rdx, [rsp+88h+var_70]
//   0x2A093E mov     [rsp+88h+var_70], rax
//   0x2A0943 mov     [rbx+8], rdx
//   0x2A0947 jmp     loc_2A0A30
//   0x2A094C align 10h
//   0x2A0950 mov     rsi, [rbx+8]
//   0x2A0954 pxor    xmm0, xmm0
//   0x2A0958 mov     [rsp+88h+s1], 0
//   0x2A0961 movups  [rsp+88h+var_60], xmm0
//   0x2A0966 mov     rax, [rsi+30h]
//   0x2A096A test    ah, 1
//   0x2A096D jnz     loc_2A0A50
//   0x2A0973 cmp     dword ptr [rsi+8], 34h ; '4'
//   0x2A0977 jz      loc_2A0A40
//   0x2A097D lea     rdi, [rbp+10h]
//   0x2A0981 lea     r12, [rsp+88h+var_70]
//   0x2A0986 call    sub_257130
//   0x2A098B test    rax, rax
//   0x2A098E jz      loc_2A0B76
//   0x2A0994 cmp     dword ptr [rax+8], 33h ; '3'
//   0x2A0998 jz      loc_2A0A44
//   0x2A099E mov     rax, [rbx+8]
//   0x2A09A2 mov     esi, 0Ah
//   0x2A09A7 mov     [rsp+88h+s1], 0
//   0x2A09B0 mov     rdi, [rax+30h]
//   0x2A09B4 call    _get_tinfo_property
//   0x2A09B9 lea     rbp, [rsp+88h+s1]
//   0x2A09BE lea     r12, [rsp+88h+var_70]
//   0x2A09C3 mov     [rsp+88h+s1], rax
//   0x2A09C8 mov     rsi, rbp
//   0x2A09CB mov     rdi, r12
//   0x2A09CE call    _copy_tinfo_t
//   0x2A09D3 mov     rdi, rbp
//   0x2A09D6 call    _clear_tinfo_t
//   0x2A09DB mov     rdi, r12
//   0x2A09DE call    sub_32DD50
//   0x2A09E3 test    al, al
//   0x2A09E5 jnz     loc_2A0849
//   0x2A09EB mov     eax, [rbx+4]
//   0x2A09EE lea     rdi, [rsp+88h+var_40]
//   0x2A09F3 mov     rsi, r12
//   0x2A09F6 mov     [rsp+88h+var_48], 1
//   0x2A09FE mov     [rsp+88h+var_40], 0
//   0x2A0A07 and     eax, 4
//   0x2A0A0A mov     [rsp+88h+var_44], eax
//   0x2A0A0E call    _copy_tinfo_t
//   0x2A0A13 lea     rbp, [rsp+88h+var_48]
//   0x2A0A18 mov     rdi, rbx
//   0x2A0A1B mov     rsi, rbp
//   0x2A0A1E call    sub_29FB30
//   0x2A0A23 mov     rdi, rbp
//   0x2A0A26 call    sub_29EFF0
//   0x2A0A2B nop     dword ptr [rax+rax+00h]
//   0x2A0A30 mov     ebx, 1
//   0x2A0A35 jmp     loc_2A084B
//   0x2A0A3A align 20h
//   0x2A0A40 mov     rax, [rsi+18h]
//   0x2A0A44 mov     [rbx+8], rax
//   0x2A0A48 lea     r12, [rsp+88h+var_70]
//   0x2A0A4D jmp     short loc_2A0A30
//   0x2A0A4F align 10h
//   0x2A0A50 lea     rdi, [rsp+88h+s1]
//   0x2A0A55 xor     edx, edx
//   0x2A0A57 mov     rsi, rax
//   0x2A0A5A call    _get_tinfo_pdata
//   0x2A0A5F mov     r12, [rsp+88h+s1]
//   0x2A0A64 test    rax, rax
//   0x2A0A67 jnz     short loc_2A0A90
//   0x2A0A69 test    r12, r12
//   0x2A0A6C jz      short loc_2A0AA9
//   0x2A0A6E mov     qword ptr [rsp+88h+var_60], 0
//   0x2A0A77 mov     rdi, r12
//   0x2A0A7A call    _qfree
//   0x2A0A7F mov     rsi, [rbx+8]
//   0x2A0A83 jmp     loc_2A0973
//   0x2A0A88 align 10h
//   0x2A0A90 cmp     qword ptr [rsp+88h+var_60], 0
//   0x2A0A96 jnz     loc_2A0B18
//   0x2A0A9C test    r12, r12
//   0x2A0A9F jz      short loc_2A0AA9
//   0x2A0AA1 mov     rdi, r12
//   0x2A0AA4 call    _qfree
//   0x2A0AA9 mov     rsi, [rbx+8]
//   0x2A0AAD jmp     loc_2A0973
//   0x2A0AB2 align 8
//   0x2A0AB8 mov     rsi, rdi
//   0x2A0ABB xor     edx, edx
//   0x2A0ABD mov     rdi, rbp
//   0x2A0AC0 call    _get_tinfo_pdata
//   0x2A0AC5 mov     r12, [rsp+88h+s1]
//   0x2A0ACA test    rax, rax
//   0x2A0ACD jnz     short loc_2A0AF0
//   0x2A0ACF test    r12, r12
//   0x2A0AD2 jz      short loc_2A0B09
//   0x2A0AD4 mov     qword ptr [rsp+88h+var_60], 0
//   0x2A0ADD mov     rdi, r12
//   0x2A0AE0 call    _qfree
//   0x2A0AE5 mov     rdi, [rbx+8]
//   0x2A0AE9 jmp     loc_2A08F5
//   0x2A0AEE align 10h
//   0x2A0AF0 cmp     qword ptr [rsp+88h+var_60], 0
//   0x2A0AF6 jnz     loc_2A0878
//   0x2A0AFC test    r12, r12
//   0x2A0AFF jz      short loc_2A0B09
//   0x2A0B01 mov     rdi, r12
//   0x2A0B04 call    _qfree
//   0x2A0B09 mov     rdi, [rbx+8]
//   0x2A0B0D jmp     loc_2A08F5
//   0x2A0B12 align 8
//   0x2A0B18 lea     rsi, aGccVaList+4; s2
//   0x2A0B1F mov     rdi, r12; s1
//   0x2A0B22 call    _strcmp
//   0x2A0B27 mov     r13d, eax
//   0x2A0B2A test    r12, r12
//   0x2A0B2D jnz     short loc_2A0B40
//   0x2A0B2F test    r13d, r13d
//   0x2A0B32 jz      loc_2A08A0
//   0x2A0B38 jmp     loc_2A0AA9
//   0x2A0B3D align 20h
//   0x2A0B40 mov     qword ptr [rsp+88h+var_60], 0
//   0x2A0B49 mov     rdi, r12
//   0x2A0B4C call    _qfree
//   0x2A0B51 jmp     short loc_2A0B2F
//   0x2A0B53 mov     rdi, r12
//   0x2A0B56 mov     [rsp+88h+var_7C], eax
//   0x2A0B5A mov     qword ptr [rsp+88h+var_60], 0
//   0x2A0B63 call    _qfree
//   0x2A0B68 mov     eax, [rsp+88h+var_7C]
//   0x2A0B6C jmp     loc_2A0890
//   0x2A0B71 call    ___stack_chk_fail
//   0x2A0B76 mov     rax, cs:under_debugger_ptr
//   0x2A0B7D cmp     byte ptr [rax], 0
//   0x2A0B80 jnz     loc_50310
//   0x2A0B86 mov     rax, [rsp+88h+var_30]
//   0x2A0B8B sub     rax, fs:28h
//   0x2A0B94 jnz     short loc_2A0BA5
//   0x2A0B96 mov     edi, 0C528h
//   0x2A0B9B lea     r12, [rsp+88h+var_70]
//   0x2A0BA0 call    sub_3835A0
//   0x2A0BA5 call    ___stack_chk_fail
//   0x2A0BAA mov     rbx, rax
//   0x2A0BAD jmp     loc_50321
//   0x2A0BB2 mov     rbx, rax
//   0x2A0BB5 jmp     loc_50341
//   0x2A0BBA mov     rbx, rax
//   0x2A0BBD jmp     loc_50350
//   0x2A0BC2 mov     rbx, rax
//   0x2A0BC5 jmp     loc_50312
//   0x2A0BCA mov     rbx, rax
//   0x2A0BCD jmp     loc_5035A
//   0x2A0BD2 mov     rbx, rax
//   0x2A0BD5 jmp     loc_50372
//   0x2A0BDA mov     rbx, rax
//   0x2A0BDD jmp     loc_5037C
//   0x2A0BE2 mov     rbx, rax
//   0x2A0BE5 jmp     loc_50394
// ============================================================

void sub_2A07F0(/* signature unknown */)
{
    // see disassembly above
}

