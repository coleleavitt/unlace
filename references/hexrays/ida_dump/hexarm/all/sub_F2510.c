// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0xF2510
// Name:           sub_F2510
// Function size:  273 bytes (73 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0xF2510 push    r12
//   0xF2512 mov     r12, rdi
//   0xF2515 push    rbp
//   0xF2516 push    rbx
//   0xF2517 cmp     dword ptr [rsi], 38h ; '8'
//   0xF251A mov     rbx, rsi
//   0xF251D jz      short loc_F2538
//   0xF251F xor     ebp, ebp
//   0xF2521 cmp     [r12+38h], rbx
//   0xF2526 jz      loc_F25C8
//   0xF252C mov     eax, ebp
//   0xF252E pop     rbx
//   0xF252F pop     rbp
//   0xF2530 pop     r12
//   0xF2532 retn
//   0xF2533 align 8
//   0xF2538 cmp     byte ptr [rsi+20h], 6
//   0xF253C jnz     short loc_F251F
//   0xF253E mov     rbp, [rsi+28h]
//   0xF2542 mov     rdi, rbp
//   0xF2545 call    _is_mapped
//   0xF254A test    al, al
//   0xF254C jz      short loc_F251F
//   0xF254E mov     esi, 4
//   0xF2553 mov     rdi, rbp
//   0xF2556 call    _get_flags_ex
//   0xF255B and     eax, 600h
//   0xF2560 cmp     rax, 200h
//   0xF2566 jz      loc_F260B
//   0xF256C mov     rdi, rbp
//   0xF256F call    _get_func
//   0xF2574 test    rax, rax
//   0xF2577 jnz     short loc_F251F
//   0xF2579 mov     rdi, [r12+1E0h]
//   0xF2581 xor     edx, edx
//   0xF2583 mov     ecx, 3
//   0xF2588 mov     rsi, rbp
//   0xF258B call    sub_3815E0
//   0xF2590 test    al, al
//   0xF2592 jnz     short loc_F251F
//   0xF2594 mov     rdi, rbp
//   0xF2597 call    sub_F2400
//   0xF259C test    al, al
//   0xF259E jz      loc_F251F
//   0xF25A4 mov     rax, [r12+1E0h]
//   0xF25AC xor     edx, edx
//   0xF25AE mov     rdi, rbx
//   0xF25B1 mov     rsi, [rax+70h]
//   0xF25B5 call    sub_11C190
//   0xF25BA mov     ebp, eax
//   0xF25BC jmp     loc_F2521
//   0xF25C1 align 8
//   0xF25C8 mov     eax, [r12+178h]
//   0xF25D0 test    eax, eax
//   0xF25D2 jz      loc_F252C
//   0xF25D8 mov     rax, [r12+1E0h]
//   0xF25E0 xor     edx, edx
//   0xF25E2 mov     rdi, rbx
//   0xF25E5 mov     rsi, [rax+70h]
//   0xF25E9 call    sub_11C190
//   0xF25EE test    al, al
//   0xF25F0 jz      loc_F252C
//   0xF25F6 mov     rdx, rbx
//   0xF25F9 mov     rsi, rbx
//   0xF25FC mov     rdi, r12
//   0xF25FF call    sub_FE720
//   0xF2604 or      ebp, eax
//   0xF2606 jmp     loc_F252C
//   0xF260B mov     rdi, rbp
//   0xF260E call    _prev_not_tail
//   0xF2613 cmp     rbp, rax
//   0xF2616 jnz     loc_F251F
//   0xF261C jmp     loc_F256C
// ============================================================

void sub_F2510(/* signature unknown */)
{
    // see disassembly above
}

