// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x28D2E0
// Name:           sub_28D2E0
// Function size:  951 bytes (245 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x28D2E0 push    r15
//   0x28D2E2 push    r14
//   0x28D2E4 push    r13
//   0x28D2E6 push    r12
//   0x28D2E8 push    rbp
//   0x28D2E9 mov     rbp, rdi
//   0x28D2EC push    rbx
//   0x28D2ED sub     rsp, 28h
//   0x28D2F1 mov     rdx, [rdi+18h]
//   0x28D2F5 mov     rax, [rdi+10h]
//   0x28D2F9 mov     rbx, fs:28h
//   0x28D302 mov     [rsp+58h+var_40], rbx
//   0x28D307 mov     rbx, rsi
//   0x28D30A lea     r12, [rsp+58h+var_50]
//   0x28D30F mov     r15, [rax+rdx*8-8]
//   0x28D314 mov     rsi, r12
//   0x28D317 mov     [rsp+58h+var_50], 0
//   0x28D320 mov     rdx, rbx
//   0x28D323 call    sub_280C80
//   0x28D328 test    al, al
//   0x28D32A jnz     short loc_28D373
//   0x28D32C cmp     dword ptr [r15+8], 10h
//   0x28D331 jnz     loc_28D500
//   0x28D337 cmp     [r15+18h], rbx
//   0x28D33B jz      loc_28D500
//   0x28D341 mov     rdi, [rbx+30h]
//   0x28D345 mov     esi, 2
//   0x28D34A call    _get_tinfo_property
//   0x28D34F and     eax, 3Fh
//   0x28D352 cmp     al, 1
//   0x28D354 jz      loc_28D500
//   0x28D35A mov     rax, [r15+20h]
//   0x28D35E lea     rsi, [rax+30h]
//   0x28D362 cmp     rax, rbx
//   0x28D365 jz      loc_28D628
//   0x28D36B mov     rdi, r12
//   0x28D36E call    _copy_tinfo_t
//   0x28D373 mov     rsi, [rbx+30h]
//   0x28D377 xor     edx, edx
//   0x28D379 xor     edi, edi
//   0x28D37B call    _get_tinfo_size
//   0x28D380 mov     rsi, [rsp+58h+var_50]
//   0x28D385 xor     edx, edx
//   0x28D387 xor     edi, edi
//   0x28D389 mov     r13, rax
//   0x28D38C call    _get_tinfo_size
//   0x28D391 cmp     dword ptr [r15+8], 39h ; '9'
//   0x28D396 mov     r14, rax
//   0x28D399 jnz     short loc_28D3F0
//   0x28D39B cmp     rbx, [r15+18h]
//   0x28D39F jz      short loc_28D3F0
//   0x28D3A1 xor     edx, edx
//   0x28D3A3 mov     rsi, rbx
//   0x28D3A6 mov     rdi, r15
//   0x28D3A9 call    sub_2806E0
//   0x28D3AE movzx   r15d, byte ptr [rax+3Ch]
//   0x28D3B3 test    r15b, r15b
//   0x28D3B6 jz      short loc_28D3F0
//   0x28D3B8 lea     r14, [rbx+30h]
//   0x28D3BC mov     rdx, rbx
//   0x28D3BF mov     rsi, rbx
//   0x28D3C2 mov     rdi, rbp
//   0x28D3C5 mov     rcx, r14
//   0x28D3C8 call    sub_28C2F0
//   0x28D3CD test    al, al
//   0x28D3CF jnz     loc_28D500
//   0x28D3D5 cmp     dword ptr [rbx+8], 30h ; '0'
//   0x28D3D9 jz      loc_28D590
//   0x28D3DF mov     rsi, r12
//   0x28D3E2 mov     rdi, rbx
//   0x28D3E5 call    sub_2411F0
//   0x28D3EA jmp     loc_28D503
//   0x28D3EF align 10h
//   0x28D3F0 mov     rax, [rbp+48h]
//   0x28D3F4 mov     edx, [rbx+8]
//   0x28D3F7 mov     rsi, [rax+70h]
//   0x28D3FB cmp     edx, 33h ; '3'
//   0x28D3FE jnz     loc_28D538
//   0x28D404 mov     ecx, [rsi+54h]
//   0x28D407 mov     rax, rbx
//   0x28D40A jmp     short loc_28D430
//   0x28D40C align 20h
//   0x28D420 mov     rax, [rax+18h]
//   0x28D424 mov     edx, [rax+8]
//   0x28D427 cmp     edx, 33h ; '3'
//   0x28D42A jnz     loc_28D538
//   0x28D430 cmp     [rax+28h], ecx
//   0x28D433 jz      short loc_28D420
//   0x28D435 mov     rdi, [rbp+18h]
//   0x28D439 mov     esi, [rsi+54h]
//   0x28D43C mov     r8, [rbp+10h]
//   0x28D440 mov     eax, edi
//   0x28D442 sub     eax, 1
//   0x28D445 js      loc_28D674
//   0x28D44B mov     edx, eax
//   0x28D44D lea     rcx, [r8+rdx*8]
//   0x28D451 jmp     short loc_28D469
//   0x28D453 align 8
//   0x28D458 cmp     esi, [rdx+28h]
//   0x28D45B jnz     short loc_28D472
//   0x28D45D sub     eax, 1
//   0x28D460 sub     rcx, 8
//   0x28D464 cmp     eax, 0FFFFFFFFh
//   0x28D467 jz      short loc_28D483
//   0x28D469 mov     rdx, [rcx]
//   0x28D46C cmp     dword ptr [rdx+8], 33h ; '3'
//   0x28D470 jz      short loc_28D458
//   0x28D472 movsxd  rdx, eax
//   0x28D475 mov     rcx, [r8+rdx*8]
//   0x28D479 cmp     dword ptr [rcx+8], 39h ; '9'
//   0x28D47D jz      loc_28D638
//   0x28D483 cmp     r13d, 0FFFFFFFFh
//   0x28D487 jz      loc_28D570
//   0x28D48D cmp     r14d, 0FFFFFFFFh
//   0x28D491 jz      short loc_28D500
//   0x28D493 mov     rdi, [rbp+48h]
//   0x28D497 lea     rcx, [rbx+30h]
//   0x28D49B mov     rdx, r12
//   0x28D49E mov     rsi, rbx
//   0x28D4A1 call    sub_27CF00
//   0x28D4A6 test    al, al
//   0x28D4A8 jz      short loc_28D500
//   0x28D4AA mov     rdi, [rbx+30h]
//   0x28D4AE mov     esi, 2
//   0x28D4B3 call    _get_tinfo_property
//   0x28D4B8 and     eax, 0Fh
//   0x28D4BB cmp     al, 0Ah
//   0x28D4BD jnz     loc_28D550
//   0x28D4C3 cmp     dword ptr [rbx+8], 30h ; '0'
//   0x28D4C7 jz      loc_28D550
//   0x28D4CD mov     rdi, [rsp+58h+var_50]
//   0x28D4D2 mov     esi, 9
//   0x28D4D7 mov     [rsp+58h+var_48], 0
//   0x28D4E0 call    _get_tinfo_property
//   0x28D4E5 mov     [rsp+58h+var_48], rax
//   0x28D4EA test    al, 0Eh
//   0x28D4EC jnz     short loc_28D546
//   0x28D4EE test    al, 30h
//   0x28D4F0 jz      short loc_28D546
//   0x28D4F2 lea     rdi, [rsp+58h+var_48]
//   0x28D4F7 call    _clear_tinfo_t
//   0x28D4FC nop     dword ptr [rax+00h]
//   0x28D500 xor     r15d, r15d
//   0x28D503 mov     rdi, r12
//   0x28D506 call    _clear_tinfo_t
//   0x28D50B mov     rax, [rsp+58h+var_40]
//   0x28D510 sub     rax, fs:28h
//   0x28D519 jnz     loc_28D682
//   0x28D51F add     rsp, 28h
//   0x28D523 mov     eax, r15d
//   0x28D526 pop     rbx
//   0x28D527 pop     rbp
//   0x28D528 pop     r12
//   0x28D52A pop     r13
//   0x28D52C pop     r14
//   0x28D52E pop     r15
//   0x28D530 retn
//   0x28D531 align 8
//   0x28D538 cmp     edx, 30h ; '0'
//   0x28D53B jz      loc_28D483
//   0x28D541 jmp     loc_28D435
//   0x28D546 lea     rdi, [rsp+58h+var_48]
//   0x28D54B call    _clear_tinfo_t
//   0x28D550 cmp     r13d, r14d
//   0x28D553 jnz     short loc_28D570
//   0x28D555 mov     rdi, r12
//   0x28D558 call    sub_3296F0
//   0x28D55D test    al, al
//   0x28D55F jnz     short loc_28D500
//   0x28D561 nop     word ptr [rax+rax+00000000h]
//   0x28D56C nop     dword ptr [rax+00h]
//   0x28D570 mov     rsi, [rbp+48h]
//   0x28D574 mov     rdx, r12
//   0x28D577 mov     rdi, rbx
//   0x28D57A call    sub_242EC0
//   0x28D57F mov     r15d, eax
//   0x28D582 jmp     loc_28D503
//   0x28D587 align 10h
//   0x28D590 mov     rax, [rbx+18h]
//   0x28D594 xor     edx, edx
//   0x28D596 xor     edi, edi
//   0x28D598 mov     rsi, [rax+30h]
//   0x28D59C call    _get_tinfo_size
//   0x28D5A1 movsxd  r13, r13d
//   0x28D5A4 cmp     r13, rax
//   0x28D5A7 jnz     loc_28D3DF
//   0x28D5AD mov     rax, [rbx+18h]
//   0x28D5B1 mov     esi, 2
//   0x28D5B6 mov     rdi, [rax+30h]
//   0x28D5BA call    _get_tinfo_property
//   0x28D5BF and     eax, 0Fh
//   0x28D5C2 mov     rdi, [rbx+30h]
//   0x28D5C6 mov     esi, 2
//   0x28D5CB cmp     al, 9
//   0x28D5CD setz    bpl
//   0x28D5D1 call    _get_tinfo_property
//   0x28D5D6 and     eax, 0Fh
//   0x28D5D9 cmp     al, 9
//   0x28D5DB setz    al
//   0x28D5DE cmp     bpl, al
//   0x28D5E1 jnz     loc_28D3DF
//   0x28D5E7 mov     rax, [rbx+18h]
//   0x28D5EB mov     esi, 3
//   0x28D5F0 mov     rdi, [rax+30h]
//   0x28D5F4 call    _get_tinfo_property
//   0x28D5F9 mov     rdi, [rbx+30h]
//   0x28D5FD mov     esi, 3
//   0x28D602 mov     rbp, rax
//   0x28D605 call    _get_tinfo_property
//   0x28D60A cmp     ebp, eax
//   0x28D60C jnz     loc_28D3DF
//   0x28D612 mov     rsi, r12
//   0x28D615 mov     rdi, r14
//   0x28D618 call    _copy_tinfo_t
//   0x28D61D jmp     loc_28D503
//   0x28D622 align 8
//   0x28D628 mov     rax, [r15+28h]
//   0x28D62C lea     rsi, [rax+30h]
//   0x28D630 jmp     loc_28D36B
//   0x28D635 align 8
//   0x28D638 sub     rdi, 1
//   0x28D63C mov     rsi, [rcx+18h]
//   0x28D640 mov     rcx, rbx
//   0x28D643 cmp     rdx, rdi
//   0x28D646 jz      short loc_28D651
//   0x28D648 add     eax, 1
//   0x28D64B cdqe
//   0x28D64D mov     rcx, [r8+rax*8]
//   0x28D651 cmp     rsi, rcx
//   0x28D654 jnz     loc_28D483
//   0x28D65A xor     edx, edx
//   0x28D65C mov     rsi, r12
//   0x28D65F mov     rdi, rbx
//   0x28D662 call    sub_27C560
//   0x28D667 test    al, al
//   0x28D669 jnz     loc_28D483
//   0x28D66F jmp     loc_28D500
//   0x28D674 cmp     eax, 0FFFFFFFFh
//   0x28D677 jz      loc_28D483
//   0x28D67D jmp     loc_28D472
//   0x28D682 call    ___stack_chk_fail
//   0x28D687 mov     rbx, rax
//   0x28D68A jmp     loc_4B88E
//   0x28D68F mov     rbx, rax
//   0x28D692 jmp     loc_4B898
// ============================================================

void sub_28D2E0(/* signature unknown */)
{
    // see disassembly above
}

