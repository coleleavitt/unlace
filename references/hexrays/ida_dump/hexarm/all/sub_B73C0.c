// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0xB73C0
// Name:           sub_B73C0
// Function size:  324 bytes (86 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0xB73C0 push    rbp
//   0xB73C1 push    rbx
//   0xB73C2 mov     rbx, rdi
//   0xB73C5 sub     rsp, 8
//   0xB73C9 mov     rdx, [rdi+20h]
//   0xB73CD mov     rdi, [rdi+28h]
//   0xB73D1 mov     eax, [rdi+44h]
//   0xB73D4 cmp     [rdx+44h], eax
//   0xB73D7 jle     short loc_B73E8
//   0xB73D9 add     rsp, 8
//   0xB73DD xor     eax, eax
//   0xB73DF pop     rbx
//   0xB73E0 pop     rbp
//   0xB73E1 retn
//   0xB73E2 align 8
//   0xB73E8 mov     rax, [rbx+8]
//   0xB73EC mov     ecx, 9
//   0xB73F1 mov     rbp, [rax+5E0h]
//   0xB73F8 mov     rsi, rbp
//   0xB73FB call    sub_1255D0
//   0xB7400 mov     rdi, [rbx+28h]
//   0xB7404 test    al, al
//   0xB7406 jz      short loc_B7460
//   0xB7408 mov     rax, [rbx+20h]
//   0xB740C mov     ecx, [rdi+44h]
//   0xB740F mov     edx, 0Ah
//   0xB7414 cmp     [rax+44h], ecx
//   0xB7417 jz      loc_B74E0
//   0xB741D mov     [rax], edx
//   0xB741F mov     rax, [rbx+28h]
//   0xB7423 lea     rsi, [rax+40h]
//   0xB7427 mov     rax, [rbx+20h]
//   0xB742B lea     rdi, [rax+20h]
//   0xB742F call    sub_124BC0
//   0xB7434 mov     rax, [rbx+20h]
//   0xB7438 lea     rdi, [rax+30h]
//   0xB743C call    sub_11C7E0
//   0xB7441 mov     rdi, [rbx+20h]
//   0xB7445 cmp     dword ptr [rdi], 0Ah
//   0xB7448 jz      loc_B74F0
//   0xB744E add     dword ptr [rbx+30h], 1
//   0xB7452 add     rsp, 8
//   0xB7456 xor     eax, eax
//   0xB7458 pop     rbx
//   0xB7459 pop     rbp
//   0xB745A retn
//   0xB745B align 20h
//   0xB7460 cmp     dword ptr [rdi], 0Dh
//   0xB7463 jnz     loc_B73D9
//   0xB7469 mov     rdx, [rbx+20h]
//   0xB746D mov     eax, [rdx]
//   0xB746F sub     eax, 2Bh ; '+'
//   0xB7472 cmp     eax, 1
//   0xB7475 ja      loc_B73D9
//   0xB747B mov     ecx, 2
//   0xB7480 mov     rsi, rbp
//   0xB7483 call    sub_1255D0
//   0xB7488 test    al, al
//   0xB748A jz      loc_B73D9
//   0xB7490 mov     rax, [rbx+28h]
//   0xB7494 lea     rsi, [rax+40h]
//   0xB7498 mov     rax, [rbx+20h]
//   0xB749C lea     rdi, [rax+20h]
//   0xB74A0 call    sub_124BC0
//   0xB74A5 mov     rax, [rbx+20h]
//   0xB74A9 lea     rdi, [rax+30h]
//   0xB74AD call    sub_11C7E0
//   0xB74B2 mov     rax, [rbx+20h]
//   0xB74B6 xor     r9d, r9d
//   0xB74B9 xor     edx, edx
//   0xB74BB mov     r8, 0FFFFFFFFFFFFFFFFh
//   0xB74C2 mov     rsi, rbp
//   0xB74C5 mov     ecx, [rax+24h]
//   0xB74C8 lea     rdi, [rax+30h]
//   0xB74CC call    sub_120450
//   0xB74D1 jmp     loc_B744E
//   0xB74D6 align 20h
//   0xB74E0 mov     edx, 4
//   0xB74E5 jmp     loc_B741D
//   0xB74EA align 10h
//   0xB74F0 xor     r8d, r8d
//   0xB74F3 xor     ecx, ecx
//   0xB74F5 xor     edx, edx
//   0xB74F7 mov     rsi, rbp
//   0xB74FA call    sub_12D2C0
//   0xB74FF jmp     loc_B744E
// ============================================================

void sub_B73C0(/* signature unknown */)
{
    // see disassembly above
}

