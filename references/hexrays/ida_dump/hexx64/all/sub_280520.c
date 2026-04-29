// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x280520
// Name:           sub_280520
// Function size:  385 bytes (103 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x280520 push    r14
//   0x280522 push    r13
//   0x280524 push    r12
//   0x280526 push    rbp
//   0x280527 push    rbx
//   0x280528 sub     rsp, 10h
//   0x28052C test    rcx, rcx
//   0x28052F mov     rbx, fs:28h
//   0x280538 mov     [rsp+38h+var_30], rbx
//   0x28053D mov     rbx, rcx
//   0x280540 lea     rax, [rsp+38h+var_31]
//   0x280545 cmovz   rbx, rax
//   0x280549 cmp     dword ptr [rsi+8], 33h ; '3'
//   0x28054D jz      short loc_280578
//   0x28054F xor     ebp, ebp
//   0x280551 mov     rax, [rsp+38h+var_30]
//   0x280556 sub     rax, fs:28h
//   0x28055F jnz     loc_28069C
//   0x280565 add     rsp, 10h
//   0x280569 mov     eax, ebp
//   0x28056B pop     rbx
//   0x28056C pop     rbp
//   0x28056D pop     r12
//   0x28056F pop     r13
//   0x280571 pop     r14
//   0x280573 retn
//   0x280574 align 8
//   0x280578 mov     r12, rsi
//   0x28057B mov     rsi, [rsi+30h]
//   0x28057F mov     rbp, rdx
//   0x280582 mov     r13, rdi
//   0x280585 xor     edx, edx
//   0x280587 xor     edi, edi
//   0x280589 call    _get_tinfo_size
//   0x28058E mov     rsi, [rbp+0]
//   0x280592 xor     edx, edx
//   0x280594 xor     edi, edi
//   0x280596 mov     r14, rax
//   0x280599 call    _get_tinfo_size
//   0x28059E cmp     r14, rax
//   0x2805A1 jnz     short loc_28054F
//   0x2805A3 lea     rdi, [r12+30h]
//   0x2805A8 call    sub_32DA30
//   0x2805AD mov     ebp, eax
//   0x2805AF test    al, al
//   0x2805B1 jnz     short loc_28054F
//   0x2805B3 mov     r12, [r12+18h]
//   0x2805B8 mov     byte ptr [rbx], 0
//   0x2805BB mov     eax, [r12+8]
//   0x2805C0 cmp     eax, 33h ; '3'
//   0x2805C3 jnz     short loc_2805FA
//   0x2805C5 mov     edx, [r13+54h]
//   0x2805C9 nop     word ptr [rax+rax+00000000h]
//   0x2805D4 nop     word ptr [rax+rax+00000000h]
//   0x2805DF nop
//   0x2805E0 cmp     [r12+28h], edx
//   0x2805E5 jnz     loc_280551
//   0x2805EB mov     r12, [r12+18h]
//   0x2805F0 mov     eax, [r12+8]
//   0x2805F5 cmp     eax, 33h ; '3'
//   0x2805F8 jz      short loc_2805E0
//   0x2805FA cmp     eax, 30h ; '0'
//   0x2805FD jz      short loc_280668
//   0x2805FF sub     eax, 23h ; '#'
//   0x280602 cmp     eax, 1
//   0x280605 ja      loc_280551
//   0x28060B mov     rax, [r12+18h]
//   0x280610 mov     esi, 2
//   0x280615 mov     rdi, [rax+30h]
//   0x280619 call    _get_tinfo_property
//   0x28061E and     eax, 0Fh
//   0x280621 sub     eax, 0Ah
//   0x280624 cmp     al, 1
//   0x280626 ja      short loc_280674
//   0x280628 mov     rax, [r12+18h]
//   0x28062D test    rax, rax
//   0x280630 jz      loc_280551
//   0x280636 cmp     dword ptr [rax+8], 30h ; '0'
//   0x28063A jnz     loc_280551
//   0x280640 mov     rsi, [rax+30h]
//   0x280644 mov     rdi, [r12+30h]
//   0x280649 xor     edx, edx
//   0x28064B call    _lexcompare_tinfo
//   0x280650 test    eax, eax
//   0x280652 jnz     loc_280551
//   0x280658 mov     byte ptr [rbx], 1
//   0x28065B mov     ebp, 1
//   0x280660 jmp     loc_280551
//   0x280665 align 8
//   0x280668 test    r12, r12
//   0x28066B setnz   bpl
//   0x28066F jmp     loc_280551
//   0x280674 mov     rax, [r12+20h]
//   0x280679 mov     esi, 2
//   0x28067E mov     rdi, [rax+30h]
//   0x280682 call    _get_tinfo_property
//   0x280687 and     eax, 0Fh
//   0x28068A sub     eax, 0Ah
//   0x28068D cmp     al, 1
//   0x28068F ja      loc_280551
//   0x280695 mov     rax, [r12+20h]
//   0x28069A jmp     short loc_28062D
//   0x28069C call    ___stack_chk_fail
// ============================================================

void sub_280520(/* signature unknown */)
{
    // see disassembly above
}

