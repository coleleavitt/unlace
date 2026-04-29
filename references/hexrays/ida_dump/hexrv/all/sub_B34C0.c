// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0xB34C0
// Name:           sub_B34C0
// Function size:  324 bytes (86 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0xB34C0 push    rbp
//   0xB34C1 push    rbx
//   0xB34C2 mov     rbx, rdi
//   0xB34C5 sub     rsp, 8
//   0xB34C9 mov     rdx, [rdi+20h]
//   0xB34CD mov     rdi, [rdi+28h]
//   0xB34D1 mov     eax, [rdi+44h]
//   0xB34D4 cmp     [rdx+44h], eax
//   0xB34D7 jle     short loc_B34E8
//   0xB34D9 add     rsp, 8
//   0xB34DD xor     eax, eax
//   0xB34DF pop     rbx
//   0xB34E0 pop     rbp
//   0xB34E1 retn
//   0xB34E2 align 8
//   0xB34E8 mov     rax, [rbx+8]
//   0xB34EC mov     ecx, 9
//   0xB34F1 mov     rbp, [rax+5E0h]
//   0xB34F8 mov     rsi, rbp
//   0xB34FB call    sub_1216D0
//   0xB3500 mov     rdi, [rbx+28h]
//   0xB3504 test    al, al
//   0xB3506 jz      short loc_B3560
//   0xB3508 mov     rax, [rbx+20h]
//   0xB350C mov     ecx, [rdi+44h]
//   0xB350F mov     edx, 0Ah
//   0xB3514 cmp     [rax+44h], ecx
//   0xB3517 jz      loc_B35E0
//   0xB351D mov     [rax], edx
//   0xB351F mov     rax, [rbx+28h]
//   0xB3523 lea     rsi, [rax+40h]
//   0xB3527 mov     rax, [rbx+20h]
//   0xB352B lea     rdi, [rax+20h]
//   0xB352F call    sub_120CC0
//   0xB3534 mov     rax, [rbx+20h]
//   0xB3538 lea     rdi, [rax+30h]
//   0xB353C call    sub_1188E0
//   0xB3541 mov     rdi, [rbx+20h]
//   0xB3545 cmp     dword ptr [rdi], 0Ah
//   0xB3548 jz      loc_B35F0
//   0xB354E add     dword ptr [rbx+30h], 1
//   0xB3552 add     rsp, 8
//   0xB3556 xor     eax, eax
//   0xB3558 pop     rbx
//   0xB3559 pop     rbp
//   0xB355A retn
//   0xB355B align 20h
//   0xB3560 cmp     dword ptr [rdi], 0Dh
//   0xB3563 jnz     loc_B34D9
//   0xB3569 mov     rdx, [rbx+20h]
//   0xB356D mov     eax, [rdx]
//   0xB356F sub     eax, 2Bh ; '+'
//   0xB3572 cmp     eax, 1
//   0xB3575 ja      loc_B34D9
//   0xB357B mov     ecx, 2
//   0xB3580 mov     rsi, rbp
//   0xB3583 call    sub_1216D0
//   0xB3588 test    al, al
//   0xB358A jz      loc_B34D9
//   0xB3590 mov     rax, [rbx+28h]
//   0xB3594 lea     rsi, [rax+40h]
//   0xB3598 mov     rax, [rbx+20h]
//   0xB359C lea     rdi, [rax+20h]
//   0xB35A0 call    sub_120CC0
//   0xB35A5 mov     rax, [rbx+20h]
//   0xB35A9 lea     rdi, [rax+30h]
//   0xB35AD call    sub_1188E0
//   0xB35B2 mov     rax, [rbx+20h]
//   0xB35B6 xor     r9d, r9d
//   0xB35B9 xor     edx, edx
//   0xB35BB mov     r8, 0FFFFFFFFFFFFFFFFh
//   0xB35C2 mov     rsi, rbp
//   0xB35C5 mov     ecx, [rax+24h]
//   0xB35C8 lea     rdi, [rax+30h]
//   0xB35CC call    sub_11C550
//   0xB35D1 jmp     loc_B354E
//   0xB35D6 align 20h
//   0xB35E0 mov     edx, 4
//   0xB35E5 jmp     loc_B351D
//   0xB35EA align 10h
//   0xB35F0 xor     r8d, r8d
//   0xB35F3 xor     ecx, ecx
//   0xB35F5 xor     edx, edx
//   0xB35F7 mov     rsi, rbp
//   0xB35FA call    sub_1293C0
//   0xB35FF jmp     loc_B354E
// ============================================================

void sub_B34C0(/* signature unknown */)
{
    // see disassembly above
}

