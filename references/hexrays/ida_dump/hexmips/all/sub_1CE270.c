// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x1CE270
// Name:           sub_1CE270
// Function size:  1174 bytes (243 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x1CE270 push    rbp
//   0x1CE271 mov     rbp, rsp
//   0x1CE274 push    r15
//   0x1CE276 push    r14
//   0x1CE278 mov     r14, rdi
//   0x1CE27B push    r13
//   0x1CE27D mov     r13, r9
//   0x1CE280 push    r12
//   0x1CE282 mov     r12d, r8d
//   0x1CE285 push    rbx
//   0x1CE286 sub     rsp, 0A8h
//   0x1CE28D mov     [rbp+var_88], rsi
//   0x1CE294 mov     [rbp+var_80], rdx
//   0x1CE298 mov     [rbp+var_78], rcx
//   0x1CE29C mov     rsi, fs:28h
//   0x1CE2A5 mov     [rbp+var_38], rsi
//   0x1CE2A9 mov     rsi, rcx
//   0x1CE2AC call    sub_3F9010
//   0x1CE2B1 test    al, al
//   0x1CE2B3 jnz     short loc_1CE2E0
//   0x1CE2B5 xor     ebx, ebx
//   0x1CE2B7 mov     rax, [rbp+var_38]
//   0x1CE2BB sub     rax, fs:28h
//   0x1CE2C4 jnz     loc_1CE6BB
//   0x1CE2CA lea     rsp, [rbp-28h]
//   0x1CE2CE mov     eax, ebx
//   0x1CE2D0 pop     rbx
//   0x1CE2D1 pop     r12
//   0x1CE2D3 pop     r13
//   0x1CE2D5 pop     r14
//   0x1CE2D7 pop     r15
//   0x1CE2D9 pop     rbp
//   0x1CE2DA retn
//   0x1CE2DB align 20h
//   0x1CE2E0 mov     ebx, eax
//   0x1CE2E2 mov     rax, [r14+8]
//   0x1CE2E6 mov     r11, [r14+58h]
//   0x1CE2EA mov     r15, [rax+70h]
//   0x1CE2EE mov     rax, [r14+60h]
//   0x1CE2F2 lea     rax, [rax+rax*4]
//   0x1CE2F6 shl     rax, 4
//   0x1CE2FA add     rax, r11
//   0x1CE2FD mov     [rbp+var_98], rax
//   0x1CE304 cmp     rax, r11
//   0x1CE307 jz      short loc_1CE2B7
//   0x1CE309 mov     [rbp+var_90], 0
//   0x1CE314 mov     eax, [r11+48h]
//   0x1CE318 test    al, 2
//   0x1CE31A jz      loc_1CE400
//   0x1CE320 test    r12b, r12b
//   0x1CE323 jz      loc_1CE5F2
//   0x1CE329 cmp     byte ptr [r13+0], 0
//   0x1CE32E jz      loc_1CE6C0
//   0x1CE334 cmp     dword ptr [r11], 3
//   0x1CE338 jnz     loc_1CE2B5
//   0x1CE33E mov     rax, [r15]
//   0x1CE341 movzx   esi, word ptr [r11+8]
//   0x1CE346 mov     rdi, r15
//   0x1CE349 mov     [rbp+var_B0], r11
//   0x1CE350 call    qword ptr [rax+0A8h]
//   0x1CE356 movd    xmm0, dword ptr [r15+54h]
//   0x1CE35C lea     rdi, [rbp+var_50]
//   0x1CE360 xor     r9d, r9d
//   0x1CE363 mov     edx, eax
//   0x1CE365 mov     rax, [r14]
//   0x1CE368 mov     [rbp+var_A8], rdi
//   0x1CE36F mov     r8, rdi
//   0x1CE372 movd    xmm2, edx
//   0x1CE376 mov     rdi, r14
//   0x1CE379 mov     rsi, 200000001h
//   0x1CE383 punpckldq xmm0, xmm2
//   0x1CE387 mov     rax, [rax+40h]
//   0x1CE38B mov     [rbp+var_50], 1
//   0x1CE393 movq    [rbp+var_50+4], xmm0
//   0x1CE398 mov     edx, [r15+40h]
//   0x1CE39C mov     [rbp+var_60], rsi
//   0x1CE3A0 lea     rsi, [rbp+var_60]
//   0x1CE3A4 mov     [rbp+var_58], edx
//   0x1CE3A7 mov     rcx, rsi
//   0x1CE3AA mov     rdx, r13
//   0x1CE3AD mov     [rbp+var_A0], rsi
//   0x1CE3B4 mov     esi, 1
//   0x1CE3B9 call    rax
//   0x1CE3BB mov     rdi, [rbp+var_A0]
//   0x1CE3C2 call    sub_118BA0
//   0x1CE3C7 mov     rdi, [rbp+var_A8]
//   0x1CE3CE call    sub_118BA0
//   0x1CE3D3 mov     r11, [rbp+var_B0]
//   0x1CE3DA add     r11, 50h ; 'P'
//   0x1CE3DE cmp     [rbp+var_98], r11
//   0x1CE3E5 jz      loc_1CE2B7
//   0x1CE3EB mov     eax, [r11+48h]
//   0x1CE3EF test    al, 2
//   0x1CE3F1 jnz     loc_1CE329
//   0x1CE3F7 nop     word ptr [rax+rax+00000000h]
//   0x1CE400 cmp     [rbp+var_90], 0
//   0x1CE408 jz      loc_1CE610
//   0x1CE40E cmp     [rbp+var_90], 1
//   0x1CE416 jnz     loc_1CE2B5
//   0x1CE41C mov     rdi, [rbp+var_78]
//   0x1CE420 test    byte ptr [rdi+10h], 2Ah
//   0x1CE424 jnz     loc_1CE2B5
//   0x1CE42A mov     dword ptr [rbp+var_B0], 1
//   0x1CE434 mov     ecx, [rdi+8]
//   0x1CE437 mov     rdi, [rbp+var_80]
//   0x1CE43B lea     edx, [rcx-16h]
//   0x1CE43E mov     dword ptr [rbp+var_A0], ecx
//   0x1CE444 mov     [rbp+var_C0], rdi
//   0x1CE44B cmp     edx, 2
//   0x1CE44E ja      loc_1CE658
//   0x1CE454 test    al, 4
//   0x1CE456 jz      loc_1CE688
//   0x1CE45C cmp     dword ptr [r11], 3
//   0x1CE460 jnz     loc_1CE2B5
//   0x1CE466 mov     rax, [r15]
//   0x1CE469 movzx   esi, word ptr [r11+8]
//   0x1CE46E mov     [rbp+var_A8], r11
//   0x1CE475 mov     rdi, r15
//   0x1CE478 call    qword ptr [rax+0A8h]
//   0x1CE47E mov     edi, 50h ; 'P'
//   0x1CE483 mov     dword ptr [rbp+var_A0], eax
//   0x1CE489 call    j__qalloc_or_throw
//   0x1CE48E mov     rsi, [r14+40h]
//   0x1CE492 mov     rdx, rax
//   0x1CE495 mov     [rbp+var_B8], rax
//   0x1CE49C mov     rax, 0FFFFFFFF00000000h
//   0x1CE4A6 mov     [rdx+20h], rax
//   0x1CE4AA mov     rdi, rdx
//   0x1CE4AD mov     qword ptr [rdx+28h], 0
//   0x1CE4B5 mov     [rdx+30h], rax
//   0x1CE4B9 mov     qword ptr [rdx+38h], 0
//   0x1CE4C1 mov     [rdx+40h], rax
//   0x1CE4C5 mov     qword ptr [rdx+48h], 0
//   0x1CE4CD call    sub_32B920
//   0x1CE4D2 mov     r11, [rbp+var_A8]
//   0x1CE4D9 mov     esi, 2
//   0x1CE4DE mov     rdi, [r11+40h]
//   0x1CE4E2 mov     [rbp+var_D0], r11
//   0x1CE4E9 call    _get_tinfo_property
//   0x1CE4EE sub     rsp, 8
//   0x1CE4F2 lea     rsi, [rbp+var_50]
//   0x1CE4F6 mov     rdi, 0FFFFFFFF00000000h
//   0x1CE500 mov     [rbp+var_50], rdi
//   0x1CE504 and     eax, 0Fh
//   0x1CE507 mov     r9, rsi
//   0x1CE50A lea     rcx, [rbp+var_70]
//   0x1CE50E mov     [rbp+var_48], 0
//   0x1CE516 movd    xmm0, dword ptr [r15+54h]
//   0x1CE51C cmp     al, 9
//   0x1CE51E mov     rdi, 200000001h
//   0x1CE528 movd    xmm1, dword ptr [rbp+var_A0]
//   0x1CE530 mov     [rbp+var_60], 1
//   0x1CE538 setz    al
//   0x1CE53B movzx   eax, al
//   0x1CE53E mov     [rbp+var_70], rdi
//   0x1CE542 mov     rdi, r14
//   0x1CE545 punpckldq xmm0, xmm1
//   0x1CE549 movq    [rbp+var_60+4], xmm0
//   0x1CE54E mov     edx, [r15+40h]
//   0x1CE552 mov     [rbp+var_68], edx
//   0x1CE555 lea     rdx, [rbp+var_60]
//   0x1CE559 push    rax
//   0x1CE55A mov     r8, rdx
//   0x1CE55D mov     [rbp+var_A8], rsi
//   0x1CE564 mov     rsi, [rbp+var_B8]
//   0x1CE56B mov     [rbp+var_A0], rdx
//   0x1CE572 mov     edx, 2
//   0x1CE577 mov     [rbp+var_C8], rcx
//   0x1CE57E call    sub_3F8780
//   0x1CE583 mov     rdi, [rbp+var_C8]
//   0x1CE58A pop     rax
//   0x1CE58B pop     rdx
//   0x1CE58C call    sub_118BA0
//   0x1CE591 mov     rdi, [rbp+var_A0]
//   0x1CE598 call    sub_118BA0
//   0x1CE59D mov     rdi, [rbp+var_A8]
//   0x1CE5A4 call    sub_118BA0
//   0x1CE5A9 mov     rax, [rbp+var_B8]
//   0x1CE5B0 mov     edx, dword ptr [rbp+var_B0]
//   0x1CE5B6 mov     rdi, [rbp+var_C0]
//   0x1CE5BD mov     [rax+44h], edx
//   0x1CE5C0 call    sub_118BA0
//   0x1CE5C5 mov     rax, [rbp+var_C0]
//   0x1CE5CC mov     rdi, [rbp+var_B8]
//   0x1CE5D3 mov     edx, dword ptr [rbp+var_B0]
//   0x1CE5D9 mov     r11, [rbp+var_D0]
//   0x1CE5E0 mov     byte ptr [rax], 4
//   0x1CE5E3 mov     [rax+8], rdi
//   0x1CE5E7 mov     [rax+4], edx
//   0x1CE5EA add     [rbp+var_90], 1
//   0x1CE5F2 add     r11, 50h ; 'P'
//   0x1CE5F6 cmp     [rbp+var_98], r11
//   0x1CE5FD jnz     loc_1CE314
//   0x1CE603 jmp     loc_1CE2B7
//   0x1CE608 align 10h
//   0x1CE610 mov     rax, [rbp+var_78]
//   0x1CE614 test    byte ptr [rax+10h], 8
//   0x1CE618 jnz     loc_1CE2B5
//   0x1CE61E movzx   edi, byte ptr [rax+0Ch]
//   0x1CE622 mov     [rbp+var_A0], r11
//   0x1CE629 call    _get_dtype_size
//   0x1CE62E mov     r11, [rbp+var_A0]
//   0x1CE635 mov     rcx, [rbp+var_88]
//   0x1CE63C mov     dword ptr [rbp+var_B0], eax
//   0x1CE642 mov     [rbp+var_C0], rcx
//   0x1CE649 mov     eax, [r11+48h]
//   0x1CE64D jmp     loc_1CE454
//   0x1CE652 align 8
//   0x1CE658 mov     rax, [rbp+var_78]
//   0x1CE65C mov     [rbp+var_A0], r11
//   0x1CE663 movzx   edi, byte ptr [rax+0Ch]
//   0x1CE667 call    _get_dtype_size
//   0x1CE66C mov     r11, [rbp+var_A0]
//   0x1CE673 mov     dword ptr [rbp+var_B0], eax
//   0x1CE679 mov     eax, [r11+48h]
//   0x1CE67D jmp     loc_1CE454
//   0x1CE682 align 8
//   0x1CE688 mov     ecx, dword ptr [rbp+var_B0]
//   0x1CE68E mov     rsi, [rbp+var_C0]
//   0x1CE695 mov     rdx, r11
//   0x1CE698 mov     rdi, r15
//   0x1CE69B mov     [rbp+var_A0], r11
//   0x1CE6A2 call    sub_1CDF10
//   0x1CE6A7 mov     r11, [rbp+var_A0]
//   0x1CE6AE test    al, al
//   0x1CE6B0 jnz     loc_1CE5EA
//   0x1CE6B6 jmp     loc_1CE2B5
//   0x1CE6BB call    ___stack_chk_fail
//   0x1CE6C0 mov     rax, cs:under_debugger_ptr
//   0x1CE6C7 cmp     byte ptr [rax], 0
//   0x1CE6CA jnz     loc_408CF
//   0x1CE6D0 mov     rax, [rbp+var_38]
//   0x1CE6D4 sub     rax, fs:28h
//   0x1CE6DD jnz     short loc_1CE6E9
//   0x1CE6DF mov     edi, 0CE3Eh
//   0x1CE6E4 call    sub_37E160
//   0x1CE6E9 call    ___stack_chk_fail
//   0x1CE6EE mov     rbx, rax
//   0x1CE6F1 jmp     loc_408D1
//   0x1CE6F6 mov     rbx, rax
//   0x1CE6F9 jmp     loc_40904
//   0x1CE6FE mov     rbx, rax
//   0x1CE701 jmp     loc_40945
// ============================================================

void sub_1CE270(/* signature unknown */)
{
    // see disassembly above
}

