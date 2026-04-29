// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x29B070
// Name:           sub_29B070
// Function size:  1018 bytes (233 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x29B070 push    r13
//   0x29B072 push    r12
//   0x29B074 push    rbp
//   0x29B075 push    rbx
//   0x29B076 sub     rsp, 68h
//   0x29B07A mov     eax, [rdi]
//   0x29B07C mov     rbx, fs:28h
//   0x29B085 mov     [rsp+88h+var_30], rbx
//   0x29B08A mov     rbx, rdi
//   0x29B08D mov     [rsp+88h+var_70], 0
//   0x29B096 cmp     eax, 1
//   0x29B099 jz      loc_29B130
//   0x29B09F cmp     eax, 6
//   0x29B0A2 jnz     short loc_29B120
//   0x29B0A4 mov     rax, [rbx+8]
//   0x29B0A8 mov     rbp, rsi
//   0x29B0AB mov     esi, 2
//   0x29B0B0 lea     r12, [rsp+88h+var_70]
//   0x29B0B5 mov     rdi, [rax+30h]
//   0x29B0B9 call    _get_tinfo_property
//   0x29B0BE and     eax, 0Fh
//   0x29B0C1 cmp     al, 0Ah
//   0x29B0C3 jz      loc_29B1D0
//   0x29B0C9 xor     ebx, ebx
//   0x29B0CB mov     rdi, r12
//   0x29B0CE call    _clear_tinfo_t
//   0x29B0D3 mov     rax, [rsp+88h+var_30]
//   0x29B0D8 sub     rax, fs:28h
//   0x29B0E1 jnz     loc_29B3F1
//   0x29B0E7 add     rsp, 68h
//   0x29B0EB mov     eax, ebx
//   0x29B0ED pop     rbx
//   0x29B0EE pop     rbp
//   0x29B0EF pop     r12
//   0x29B0F1 pop     r13
//   0x29B0F3 retn
//   0x29B0F4 align 8
//   0x29B0F8 lea     rsi, aGccVaList+4; s2
//   0x29B0FF mov     rdi, r12; s1
//   0x29B102 call    _strcmp
//   0x29B107 test    r12, r12
//   0x29B10A jnz     loc_29B3D3
//   0x29B110 test    eax, eax
//   0x29B112 jnz     loc_29B389
//   0x29B118 nop     dword ptr [rax+rax+00000000h]
//   0x29B120 lea     r12, [rsp+88h+var_70]
//   0x29B125 jmp     short loc_29B0C9
//   0x29B127 align 10h
//   0x29B130 mov     rdi, [rbx+8]
//   0x29B134 mov     esi, 2
//   0x29B139 lea     r12, [rsp+88h+var_70]
//   0x29B13E call    _get_tinfo_property
//   0x29B143 and     eax, 0Fh
//   0x29B146 cmp     al, 0Ah
//   0x29B148 jnz     loc_29B0C9
//   0x29B14E mov     rdi, [rbx+8]
//   0x29B152 pxor    xmm0, xmm0
//   0x29B156 lea     rbp, [rsp+88h+s1]
//   0x29B15B mov     [rsp+88h+s1], 0
//   0x29B164 movups  [rsp+88h+var_60], xmm0
//   0x29B169 test    edi, 100h
//   0x29B16F jnz     loc_29B338
//   0x29B175 mov     [rsp+88h+s1], 0
//   0x29B17E mov     esi, 0Ah
//   0x29B183 call    _get_tinfo_property
//   0x29B188 lea     r12, [rsp+88h+var_70]
//   0x29B18D mov     rsi, rbp
//   0x29B190 mov     [rsp+88h+s1], rax
//   0x29B195 mov     rdi, r12
//   0x29B198 call    _copy_tinfo_t
//   0x29B19D mov     rdi, rbp
//   0x29B1A0 call    _clear_tinfo_t
//   0x29B1A5 mov     rdi, r12
//   0x29B1A8 call    sub_327FB0
//   0x29B1AD test    al, al
//   0x29B1AF jnz     loc_29B0C9
//   0x29B1B5 mov     rax, [rbx+8]
//   0x29B1B9 mov     rdx, [rsp+88h+var_70]
//   0x29B1BE mov     [rsp+88h+var_70], rax
//   0x29B1C3 mov     [rbx+8], rdx
//   0x29B1C7 jmp     loc_29B2B0
//   0x29B1CC align 10h
//   0x29B1D0 mov     rsi, [rbx+8]
//   0x29B1D4 pxor    xmm0, xmm0
//   0x29B1D8 mov     [rsp+88h+s1], 0
//   0x29B1E1 movups  [rsp+88h+var_60], xmm0
//   0x29B1E6 mov     rax, [rsi+30h]
//   0x29B1EA test    ah, 1
//   0x29B1ED jnz     loc_29B2D0
//   0x29B1F3 cmp     dword ptr [rsi+8], 34h ; '4'
//   0x29B1F7 jz      loc_29B2C0
//   0x29B1FD lea     rdi, [rbp+10h]
//   0x29B201 lea     r12, [rsp+88h+var_70]
//   0x29B206 call    sub_2519B0
//   0x29B20B test    rax, rax
//   0x29B20E jz      loc_29B3F6
//   0x29B214 cmp     dword ptr [rax+8], 33h ; '3'
//   0x29B218 jz      loc_29B2C4
//   0x29B21E mov     rax, [rbx+8]
//   0x29B222 mov     esi, 0Ah
//   0x29B227 mov     [rsp+88h+s1], 0
//   0x29B230 mov     rdi, [rax+30h]
//   0x29B234 call    _get_tinfo_property
//   0x29B239 lea     rbp, [rsp+88h+s1]
//   0x29B23E lea     r12, [rsp+88h+var_70]
//   0x29B243 mov     [rsp+88h+s1], rax
//   0x29B248 mov     rsi, rbp
//   0x29B24B mov     rdi, r12
//   0x29B24E call    _copy_tinfo_t
//   0x29B253 mov     rdi, rbp
//   0x29B256 call    _clear_tinfo_t
//   0x29B25B mov     rdi, r12
//   0x29B25E call    sub_327FB0
//   0x29B263 test    al, al
//   0x29B265 jnz     loc_29B0C9
//   0x29B26B mov     eax, [rbx+4]
//   0x29B26E lea     rdi, [rsp+88h+var_40]
//   0x29B273 mov     rsi, r12
//   0x29B276 mov     [rsp+88h+var_48], 1
//   0x29B27E mov     [rsp+88h+var_40], 0
//   0x29B287 and     eax, 4
//   0x29B28A mov     [rsp+88h+var_44], eax
//   0x29B28E call    _copy_tinfo_t
//   0x29B293 lea     rbp, [rsp+88h+var_48]
//   0x29B298 mov     rdi, rbx
//   0x29B29B mov     rsi, rbp
//   0x29B29E call    sub_29A3B0
//   0x29B2A3 mov     rdi, rbp
//   0x29B2A6 call    sub_299870
//   0x29B2AB nop     dword ptr [rax+rax+00h]
//   0x29B2B0 mov     ebx, 1
//   0x29B2B5 jmp     loc_29B0CB
//   0x29B2BA align 20h
//   0x29B2C0 mov     rax, [rsi+18h]
//   0x29B2C4 mov     [rbx+8], rax
//   0x29B2C8 lea     r12, [rsp+88h+var_70]
//   0x29B2CD jmp     short loc_29B2B0
//   0x29B2CF align 10h
//   0x29B2D0 lea     rdi, [rsp+88h+s1]
//   0x29B2D5 xor     edx, edx
//   0x29B2D7 mov     rsi, rax
//   0x29B2DA call    _get_tinfo_pdata
//   0x29B2DF mov     r12, [rsp+88h+s1]
//   0x29B2E4 test    rax, rax
//   0x29B2E7 jnz     short loc_29B310
//   0x29B2E9 test    r12, r12
//   0x29B2EC jz      short loc_29B329
//   0x29B2EE mov     qword ptr [rsp+88h+var_60], 0
//   0x29B2F7 mov     rdi, r12
//   0x29B2FA call    _qfree
//   0x29B2FF mov     rsi, [rbx+8]
//   0x29B303 jmp     loc_29B1F3
//   0x29B308 align 10h
//   0x29B310 cmp     qword ptr [rsp+88h+var_60], 0
//   0x29B316 jnz     loc_29B398
//   0x29B31C test    r12, r12
//   0x29B31F jz      short loc_29B329
//   0x29B321 mov     rdi, r12
//   0x29B324 call    _qfree
//   0x29B329 mov     rsi, [rbx+8]
//   0x29B32D jmp     loc_29B1F3
//   0x29B332 align 8
//   0x29B338 mov     rsi, rdi
//   0x29B33B xor     edx, edx
//   0x29B33D mov     rdi, rbp
//   0x29B340 call    _get_tinfo_pdata
//   0x29B345 mov     r12, [rsp+88h+s1]
//   0x29B34A test    rax, rax
//   0x29B34D jnz     short loc_29B370
//   0x29B34F test    r12, r12
//   0x29B352 jz      short loc_29B389
//   0x29B354 mov     qword ptr [rsp+88h+var_60], 0
//   0x29B35D mov     rdi, r12
//   0x29B360 call    _qfree
//   0x29B365 mov     rdi, [rbx+8]
//   0x29B369 jmp     loc_29B175
//   0x29B36E align 10h
//   0x29B370 cmp     qword ptr [rsp+88h+var_60], 0
//   0x29B376 jnz     loc_29B0F8
//   0x29B37C test    r12, r12
//   0x29B37F jz      short loc_29B389
//   0x29B381 mov     rdi, r12
//   0x29B384 call    _qfree
//   0x29B389 mov     rdi, [rbx+8]
//   0x29B38D jmp     loc_29B175
//   0x29B392 align 8
//   0x29B398 lea     rsi, aGccVaList+4; s2
//   0x29B39F mov     rdi, r12; s1
//   0x29B3A2 call    _strcmp
//   0x29B3A7 mov     r13d, eax
//   0x29B3AA test    r12, r12
//   0x29B3AD jnz     short loc_29B3C0
//   0x29B3AF test    r13d, r13d
//   0x29B3B2 jz      loc_29B120
//   0x29B3B8 jmp     loc_29B329
//   0x29B3BD align 20h
//   0x29B3C0 mov     qword ptr [rsp+88h+var_60], 0
//   0x29B3C9 mov     rdi, r12
//   0x29B3CC call    _qfree
//   0x29B3D1 jmp     short loc_29B3AF
//   0x29B3D3 mov     rdi, r12
//   0x29B3D6 mov     [rsp+88h+var_7C], eax
//   0x29B3DA mov     qword ptr [rsp+88h+var_60], 0
//   0x29B3E3 call    _qfree
//   0x29B3E8 mov     eax, [rsp+88h+var_7C]
//   0x29B3EC jmp     loc_29B110
//   0x29B3F1 call    ___stack_chk_fail
//   0x29B3F6 mov     rax, cs:under_debugger_ptr
//   0x29B3FD cmp     byte ptr [rax], 0
//   0x29B400 jnz     loc_4D146
//   0x29B406 mov     rax, [rsp+88h+var_30]
//   0x29B40B sub     rax, fs:28h
//   0x29B414 jnz     short loc_29B425
//   0x29B416 mov     edi, 0C528h
//   0x29B41B lea     r12, [rsp+88h+var_70]
//   0x29B420 call    sub_37CFE0
//   0x29B425 call    ___stack_chk_fail
//   0x29B42A mov     rbx, rax
//   0x29B42D jmp     loc_4D157
//   0x29B432 mov     rbx, rax
//   0x29B435 jmp     loc_4D177
//   0x29B43A mov     rbx, rax
//   0x29B43D jmp     loc_4D186
//   0x29B442 mov     rbx, rax
//   0x29B445 jmp     loc_4D148
//   0x29B44A mov     rbx, rax
//   0x29B44D jmp     loc_4D190
//   0x29B452 mov     rbx, rax
//   0x29B455 jmp     loc_4D1A8
//   0x29B45A mov     rbx, rax
//   0x29B45D jmp     loc_4D1B2
//   0x29B462 mov     rbx, rax
//   0x29B465 jmp     loc_4D1CA
// ============================================================

void sub_29B070(/* signature unknown */)
{
    // see disassembly above
}

