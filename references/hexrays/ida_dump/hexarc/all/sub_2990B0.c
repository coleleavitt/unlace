// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x2990B0
// Name:           sub_2990B0
// Function size:  1018 bytes (233 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x2990B0 push    r13
//   0x2990B2 push    r12
//   0x2990B4 push    rbp
//   0x2990B5 push    rbx
//   0x2990B6 sub     rsp, 68h
//   0x2990BA mov     eax, [rdi]
//   0x2990BC mov     rbx, fs:28h
//   0x2990C5 mov     [rsp+88h+var_30], rbx
//   0x2990CA mov     rbx, rdi
//   0x2990CD mov     [rsp+88h+var_70], 0
//   0x2990D6 cmp     eax, 1
//   0x2990D9 jz      loc_299170
//   0x2990DF cmp     eax, 6
//   0x2990E2 jnz     short loc_299160
//   0x2990E4 mov     rax, [rbx+8]
//   0x2990E8 mov     rbp, rsi
//   0x2990EB mov     esi, 2
//   0x2990F0 lea     r12, [rsp+88h+var_70]
//   0x2990F5 mov     rdi, [rax+30h]
//   0x2990F9 call    _get_tinfo_property
//   0x2990FE and     eax, 0Fh
//   0x299101 cmp     al, 0Ah
//   0x299103 jz      loc_299210
//   0x299109 xor     ebx, ebx
//   0x29910B mov     rdi, r12
//   0x29910E call    _clear_tinfo_t
//   0x299113 mov     rax, [rsp+88h+var_30]
//   0x299118 sub     rax, fs:28h
//   0x299121 jnz     loc_299431
//   0x299127 add     rsp, 68h
//   0x29912B mov     eax, ebx
//   0x29912D pop     rbx
//   0x29912E pop     rbp
//   0x29912F pop     r12
//   0x299131 pop     r13
//   0x299133 retn
//   0x299134 align 8
//   0x299138 lea     rsi, aGccVaList+4; s2
//   0x29913F mov     rdi, r12; s1
//   0x299142 call    _strcmp
//   0x299147 test    r12, r12
//   0x29914A jnz     loc_299413
//   0x299150 test    eax, eax
//   0x299152 jnz     loc_2993C9
//   0x299158 nop     dword ptr [rax+rax+00000000h]
//   0x299160 lea     r12, [rsp+88h+var_70]
//   0x299165 jmp     short loc_299109
//   0x299167 align 10h
//   0x299170 mov     rdi, [rbx+8]
//   0x299174 mov     esi, 2
//   0x299179 lea     r12, [rsp+88h+var_70]
//   0x29917E call    _get_tinfo_property
//   0x299183 and     eax, 0Fh
//   0x299186 cmp     al, 0Ah
//   0x299188 jnz     loc_299109
//   0x29918E mov     rdi, [rbx+8]
//   0x299192 pxor    xmm0, xmm0
//   0x299196 lea     rbp, [rsp+88h+s1]
//   0x29919B mov     [rsp+88h+s1], 0
//   0x2991A4 movups  [rsp+88h+var_60], xmm0
//   0x2991A9 test    edi, 100h
//   0x2991AF jnz     loc_299378
//   0x2991B5 mov     [rsp+88h+s1], 0
//   0x2991BE mov     esi, 0Ah
//   0x2991C3 call    _get_tinfo_property
//   0x2991C8 lea     r12, [rsp+88h+var_70]
//   0x2991CD mov     rsi, rbp
//   0x2991D0 mov     [rsp+88h+s1], rax
//   0x2991D5 mov     rdi, r12
//   0x2991D8 call    _copy_tinfo_t
//   0x2991DD mov     rdi, rbp
//   0x2991E0 call    _clear_tinfo_t
//   0x2991E5 mov     rdi, r12
//   0x2991E8 call    sub_3264F0
//   0x2991ED test    al, al
//   0x2991EF jnz     loc_299109
//   0x2991F5 mov     rax, [rbx+8]
//   0x2991F9 mov     rdx, [rsp+88h+var_70]
//   0x2991FE mov     [rsp+88h+var_70], rax
//   0x299203 mov     [rbx+8], rdx
//   0x299207 jmp     loc_2992F0
//   0x29920C align 10h
//   0x299210 mov     rsi, [rbx+8]
//   0x299214 pxor    xmm0, xmm0
//   0x299218 mov     [rsp+88h+s1], 0
//   0x299221 movups  [rsp+88h+var_60], xmm0
//   0x299226 mov     rax, [rsi+30h]
//   0x29922A test    ah, 1
//   0x29922D jnz     loc_299310
//   0x299233 cmp     dword ptr [rsi+8], 34h ; '4'
//   0x299237 jz      loc_299300
//   0x29923D lea     rdi, [rbp+10h]
//   0x299241 lea     r12, [rsp+88h+var_70]
//   0x299246 call    sub_24F9F0
//   0x29924B test    rax, rax
//   0x29924E jz      loc_299436
//   0x299254 cmp     dword ptr [rax+8], 33h ; '3'
//   0x299258 jz      loc_299304
//   0x29925E mov     rax, [rbx+8]
//   0x299262 mov     esi, 0Ah
//   0x299267 mov     [rsp+88h+s1], 0
//   0x299270 mov     rdi, [rax+30h]
//   0x299274 call    _get_tinfo_property
//   0x299279 lea     rbp, [rsp+88h+s1]
//   0x29927E lea     r12, [rsp+88h+var_70]
//   0x299283 mov     [rsp+88h+s1], rax
//   0x299288 mov     rsi, rbp
//   0x29928B mov     rdi, r12
//   0x29928E call    _copy_tinfo_t
//   0x299293 mov     rdi, rbp
//   0x299296 call    _clear_tinfo_t
//   0x29929B mov     rdi, r12
//   0x29929E call    sub_3264F0
//   0x2992A3 test    al, al
//   0x2992A5 jnz     loc_299109
//   0x2992AB mov     eax, [rbx+4]
//   0x2992AE lea     rdi, [rsp+88h+var_40]
//   0x2992B3 mov     rsi, r12
//   0x2992B6 mov     [rsp+88h+var_48], 1
//   0x2992BE mov     [rsp+88h+var_40], 0
//   0x2992C7 and     eax, 4
//   0x2992CA mov     [rsp+88h+var_44], eax
//   0x2992CE call    _copy_tinfo_t
//   0x2992D3 lea     rbp, [rsp+88h+var_48]
//   0x2992D8 mov     rdi, rbx
//   0x2992DB mov     rsi, rbp
//   0x2992DE call    sub_2983F0
//   0x2992E3 mov     rdi, rbp
//   0x2992E6 call    sub_2978B0
//   0x2992EB nop     dword ptr [rax+rax+00h]
//   0x2992F0 mov     ebx, 1
//   0x2992F5 jmp     loc_29910B
//   0x2992FA align 20h
//   0x299300 mov     rax, [rsi+18h]
//   0x299304 mov     [rbx+8], rax
//   0x299308 lea     r12, [rsp+88h+var_70]
//   0x29930D jmp     short loc_2992F0
//   0x29930F align 10h
//   0x299310 lea     rdi, [rsp+88h+s1]
//   0x299315 xor     edx, edx
//   0x299317 mov     rsi, rax
//   0x29931A call    _get_tinfo_pdata
//   0x29931F mov     r12, [rsp+88h+s1]
//   0x299324 test    rax, rax
//   0x299327 jnz     short loc_299350
//   0x299329 test    r12, r12
//   0x29932C jz      short loc_299369
//   0x29932E mov     qword ptr [rsp+88h+var_60], 0
//   0x299337 mov     rdi, r12
//   0x29933A call    _qfree
//   0x29933F mov     rsi, [rbx+8]
//   0x299343 jmp     loc_299233
//   0x299348 align 10h
//   0x299350 cmp     qword ptr [rsp+88h+var_60], 0
//   0x299356 jnz     loc_2993D8
//   0x29935C test    r12, r12
//   0x29935F jz      short loc_299369
//   0x299361 mov     rdi, r12
//   0x299364 call    _qfree
//   0x299369 mov     rsi, [rbx+8]
//   0x29936D jmp     loc_299233
//   0x299372 align 8
//   0x299378 mov     rsi, rdi
//   0x29937B xor     edx, edx
//   0x29937D mov     rdi, rbp
//   0x299380 call    _get_tinfo_pdata
//   0x299385 mov     r12, [rsp+88h+s1]
//   0x29938A test    rax, rax
//   0x29938D jnz     short loc_2993B0
//   0x29938F test    r12, r12
//   0x299392 jz      short loc_2993C9
//   0x299394 mov     qword ptr [rsp+88h+var_60], 0
//   0x29939D mov     rdi, r12
//   0x2993A0 call    _qfree
//   0x2993A5 mov     rdi, [rbx+8]
//   0x2993A9 jmp     loc_2991B5
//   0x2993AE align 10h
//   0x2993B0 cmp     qword ptr [rsp+88h+var_60], 0
//   0x2993B6 jnz     loc_299138
//   0x2993BC test    r12, r12
//   0x2993BF jz      short loc_2993C9
//   0x2993C1 mov     rdi, r12
//   0x2993C4 call    _qfree
//   0x2993C9 mov     rdi, [rbx+8]
//   0x2993CD jmp     loc_2991B5
//   0x2993D2 align 8
//   0x2993D8 lea     rsi, aGccVaList+4; s2
//   0x2993DF mov     rdi, r12; s1
//   0x2993E2 call    _strcmp
//   0x2993E7 mov     r13d, eax
//   0x2993EA test    r12, r12
//   0x2993ED jnz     short loc_299400
//   0x2993EF test    r13d, r13d
//   0x2993F2 jz      loc_299160
//   0x2993F8 jmp     loc_299369
//   0x2993FD align 20h
//   0x299400 mov     qword ptr [rsp+88h+var_60], 0
//   0x299409 mov     rdi, r12
//   0x29940C call    _qfree
//   0x299411 jmp     short loc_2993EF
//   0x299413 mov     rdi, r12
//   0x299416 mov     [rsp+88h+var_7C], eax
//   0x29941A mov     qword ptr [rsp+88h+var_60], 0
//   0x299423 call    _qfree
//   0x299428 mov     eax, [rsp+88h+var_7C]
//   0x29942C jmp     loc_299150
//   0x299431 call    ___stack_chk_fail
//   0x299436 mov     rax, cs:under_debugger_ptr
//   0x29943D cmp     byte ptr [rax], 0
//   0x299440 jnz     loc_4C0CC
//   0x299446 mov     rax, [rsp+88h+var_30]
//   0x29944B sub     rax, fs:28h
//   0x299454 jnz     short loc_299465
//   0x299456 mov     edi, 0C528h
//   0x29945B lea     r12, [rsp+88h+var_70]
//   0x299460 call    sub_37B760
//   0x299465 call    ___stack_chk_fail
//   0x29946A mov     rbx, rax
//   0x29946D jmp     loc_4C0DD
//   0x299472 mov     rbx, rax
//   0x299475 jmp     loc_4C0FD
//   0x29947A mov     rbx, rax
//   0x29947D jmp     loc_4C10C
//   0x299482 mov     rbx, rax
//   0x299485 jmp     loc_4C0CE
//   0x29948A mov     rbx, rax
//   0x29948D jmp     loc_4C116
//   0x299492 mov     rbx, rax
//   0x299495 jmp     loc_4C12E
//   0x29949A mov     rbx, rax
//   0x29949D jmp     loc_4C138
//   0x2994A2 mov     rbx, rax
//   0x2994A5 jmp     loc_4C150
// ============================================================

void sub_2990B0(/* signature unknown */)
{
    // see disassembly above
}

