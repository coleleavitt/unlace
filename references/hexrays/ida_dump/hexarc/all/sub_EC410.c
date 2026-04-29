// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0xEC410
// Name:           sub_EC410
// Function size:  273 bytes (73 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0xEC410 push    r12
//   0xEC412 mov     r12, rdi
//   0xEC415 push    rbp
//   0xEC416 push    rbx
//   0xEC417 cmp     dword ptr [rsi], 38h ; '8'
//   0xEC41A mov     rbx, rsi
//   0xEC41D jz      short loc_EC438
//   0xEC41F xor     ebp, ebp
//   0xEC421 cmp     [r12+38h], rbx
//   0xEC426 jz      loc_EC4C8
//   0xEC42C mov     eax, ebp
//   0xEC42E pop     rbx
//   0xEC42F pop     rbp
//   0xEC430 pop     r12
//   0xEC432 retn
//   0xEC433 align 8
//   0xEC438 cmp     byte ptr [rsi+20h], 6
//   0xEC43C jnz     short loc_EC41F
//   0xEC43E mov     rbp, [rsi+28h]
//   0xEC442 mov     rdi, rbp
//   0xEC445 call    _is_mapped
//   0xEC44A test    al, al
//   0xEC44C jz      short loc_EC41F
//   0xEC44E mov     esi, 4
//   0xEC453 mov     rdi, rbp
//   0xEC456 call    _get_flags_ex
//   0xEC45B and     eax, 600h
//   0xEC460 cmp     rax, 200h
//   0xEC466 jz      loc_EC50B
//   0xEC46C mov     rdi, rbp
//   0xEC46F call    _get_func
//   0xEC474 test    rax, rax
//   0xEC477 jnz     short loc_EC41F
//   0xEC479 mov     rdi, [r12+1E0h]
//   0xEC481 xor     edx, edx
//   0xEC483 mov     ecx, 3
//   0xEC488 mov     rsi, rbp
//   0xEC48B call    sub_3797A0
//   0xEC490 test    al, al
//   0xEC492 jnz     short loc_EC41F
//   0xEC494 mov     rdi, rbp
//   0xEC497 call    sub_EC300
//   0xEC49C test    al, al
//   0xEC49E jz      loc_EC41F
//   0xEC4A4 mov     rax, [r12+1E0h]
//   0xEC4AC xor     edx, edx
//   0xEC4AE mov     rdi, rbx
//   0xEC4B1 mov     rsi, [rax+70h]
//   0xEC4B5 call    sub_116090
//   0xEC4BA mov     ebp, eax
//   0xEC4BC jmp     loc_EC421
//   0xEC4C1 align 8
//   0xEC4C8 mov     eax, [r12+178h]
//   0xEC4D0 test    eax, eax
//   0xEC4D2 jz      loc_EC42C
//   0xEC4D8 mov     rax, [r12+1E0h]
//   0xEC4E0 xor     edx, edx
//   0xEC4E2 mov     rdi, rbx
//   0xEC4E5 mov     rsi, [rax+70h]
//   0xEC4E9 call    sub_116090
//   0xEC4EE test    al, al
//   0xEC4F0 jz      loc_EC42C
//   0xEC4F6 mov     rdx, rbx
//   0xEC4F9 mov     rsi, rbx
//   0xEC4FC mov     rdi, r12
//   0xEC4FF call    sub_F8620
//   0xEC504 or      ebp, eax
//   0xEC506 jmp     loc_EC42C
//   0xEC50B mov     rdi, rbp
//   0xEC50E call    _prev_not_tail
//   0xEC513 cmp     rbp, rax
//   0xEC516 jnz     loc_EC41F
//   0xEC51C jmp     loc_EC46C
// ============================================================

void sub_EC410(/* signature unknown */)
{
    // see disassembly above
}

