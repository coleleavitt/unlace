// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0xEE610
// Name:           sub_EE610
// Function size:  273 bytes (73 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0xEE610 push    r12
//   0xEE612 mov     r12, rdi
//   0xEE615 push    rbp
//   0xEE616 push    rbx
//   0xEE617 cmp     dword ptr [rsi], 38h ; '8'
//   0xEE61A mov     rbx, rsi
//   0xEE61D jz      short loc_EE638
//   0xEE61F xor     ebp, ebp
//   0xEE621 cmp     [r12+38h], rbx
//   0xEE626 jz      loc_EE6C8
//   0xEE62C mov     eax, ebp
//   0xEE62E pop     rbx
//   0xEE62F pop     rbp
//   0xEE630 pop     r12
//   0xEE632 retn
//   0xEE633 align 8
//   0xEE638 cmp     byte ptr [rsi+20h], 6
//   0xEE63C jnz     short loc_EE61F
//   0xEE63E mov     rbp, [rsi+28h]
//   0xEE642 mov     rdi, rbp
//   0xEE645 call    _is_mapped
//   0xEE64A test    al, al
//   0xEE64C jz      short loc_EE61F
//   0xEE64E mov     esi, 4
//   0xEE653 mov     rdi, rbp
//   0xEE656 call    _get_flags_ex
//   0xEE65B and     eax, 600h
//   0xEE660 cmp     rax, 200h
//   0xEE666 jz      loc_EE70B
//   0xEE66C mov     rdi, rbp
//   0xEE66F call    _get_func
//   0xEE674 test    rax, rax
//   0xEE677 jnz     short loc_EE61F
//   0xEE679 mov     rdi, [r12+1E0h]
//   0xEE681 xor     edx, edx
//   0xEE683 mov     ecx, 3
//   0xEE688 mov     rsi, rbp
//   0xEE68B call    sub_37BE20
//   0xEE690 test    al, al
//   0xEE692 jnz     short loc_EE61F
//   0xEE694 mov     rdi, rbp
//   0xEE697 call    sub_EE500
//   0xEE69C test    al, al
//   0xEE69E jz      loc_EE61F
//   0xEE6A4 mov     rax, [r12+1E0h]
//   0xEE6AC xor     edx, edx
//   0xEE6AE mov     rdi, rbx
//   0xEE6B1 mov     rsi, [rax+70h]
//   0xEE6B5 call    sub_118290
//   0xEE6BA mov     ebp, eax
//   0xEE6BC jmp     loc_EE621
//   0xEE6C1 align 8
//   0xEE6C8 mov     eax, [r12+178h]
//   0xEE6D0 test    eax, eax
//   0xEE6D2 jz      loc_EE62C
//   0xEE6D8 mov     rax, [r12+1E0h]
//   0xEE6E0 xor     edx, edx
//   0xEE6E2 mov     rdi, rbx
//   0xEE6E5 mov     rsi, [rax+70h]
//   0xEE6E9 call    sub_118290
//   0xEE6EE test    al, al
//   0xEE6F0 jz      loc_EE62C
//   0xEE6F6 mov     rdx, rbx
//   0xEE6F9 mov     rsi, rbx
//   0xEE6FC mov     rdi, r12
//   0xEE6FF call    sub_FA820
//   0xEE704 or      ebp, eax
//   0xEE706 jmp     loc_EE62C
//   0xEE70B mov     rdi, rbp
//   0xEE70E call    _prev_not_tail
//   0xEE713 cmp     rbp, rax
//   0xEE716 jnz     loc_EE61F
//   0xEE71C jmp     loc_EE66C
// ============================================================

void sub_EE610(/* signature unknown */)
{
    // see disassembly above
}

