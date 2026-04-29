// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x24C3B0
// Name:           sub_24C3B0
// Function size:  451 bytes (114 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x24C3B0 push    rbp
//   0x24C3B1 mov     rbp, rsp
//   0x24C3B4 push    r15
//   0x24C3B6 push    r14
//   0x24C3B8 push    r13
//   0x24C3BA mov     r13d, edx
//   0x24C3BD push    r12
//   0x24C3BF mov     r12, rdi
//   0x24C3C2 push    rbx
//   0x24C3C3 mov     rbx, rcx
//   0x24C3C6 sub     rsp, 28h
//   0x24C3CA mov     [rbp+var_48], rsi
//   0x24C3CE cmp     byte ptr [rsi+30h], 0
//   0x24C3D2 mov     r14, fs:28h
//   0x24C3DB mov     [rbp+var_38], r14
//   0x24C3DF mov     r14d, r8d
//   0x24C3E2 jz      short loc_24C450
//   0x24C3E4 lea     r15, [rbp+var_40]
//   0x24C3E8 xor     r9d, r9d
//   0x24C3EB xor     edx, edx
//   0x24C3ED mov     [rbp+var_40], 0
//   0x24C3F5 mov     r8, r15
//   0x24C3F8 call    sub_24B760
//   0x24C3FD mov     rdi, r15
//   0x24C400 mov     rbx, rax
//   0x24C403 call    _clear_tinfo_t
//   0x24C408 mov     rsi, [r12+148h]
//   0x24C410 mov     edx, r13d
//   0x24C413 mov     rdi, rbx
//   0x24C416 call    sub_249960
//   0x24C41B test    r14b, r14b
//   0x24C41E jnz     loc_24C510
//   0x24C424 mov     rax, [rbp+var_38]
//   0x24C428 sub     rax, fs:28h
//   0x24C431 jnz     loc_24C556
//   0x24C437 lea     rsp, [rbp-28h]
//   0x24C43B mov     rax, rbx
//   0x24C43E pop     rbx
//   0x24C43F pop     r12
//   0x24C441 pop     r13
//   0x24C443 pop     r14
//   0x24C445 pop     r15
//   0x24C447 pop     rbp
//   0x24C448 retn
//   0x24C449 align 10h
//   0x24C450 mov     rax, [rbp+var_48]
//   0x24C454 xor     r9d, r9d
//   0x24C457 mov     r8, rcx
//   0x24C45A mov     rsi, [rax+18h]
//   0x24C45E lea     rdx, [rax+20h]
//   0x24C462 call    sub_249EB0
//   0x24C467 mov     esi, 3
//   0x24C46C mov     rdi, [rax+30h]
//   0x24C470 mov     r15, rax
//   0x24C473 call    _get_tinfo_property
//   0x24C478 cmp     eax, 1
//   0x24C47B jnz     short loc_24C4F8
//   0x24C47D mov     edi, 40h ; '@'
//   0x24C482 call    j__qalloc_or_throw
//   0x24C487 sub     rsp, 8
//   0x24C48B xor     r8d, r8d
//   0x24C48E xor     edx, edx
//   0x24C490 mov     rdi, [r12+148h]
//   0x24C498 push    0
//   0x24C49A mov     r9d, 1
//   0x24C4A0 xor     esi, esi
//   0x24C4A2 mov     rcx, 0FFFFFFFFFFFFFFFFh
//   0x24C4A9 mov     rbx, rax
//   0x24C4AC call    sub_241310
//   0x24C4B1 pop     rdx
//   0x24C4B2 pop     rcx
//   0x24C4B3 mov     [rbx+20h], rax
//   0x24C4B7 mov     rax, [rbp+var_48]
//   0x24C4BB mov     qword ptr [rbx], 0FFFFFFFFFFFFFFFFh
//   0x24C4C2 mov     [rbx+8], r13d
//   0x24C4C6 mov     qword ptr [rbx+0Ch], 0FFFFFFFFFFFFFFFFh
//   0x24C4CE mov     [rbx+18h], r15
//   0x24C4D2 mov     qword ptr [rbx+28h], 0
//   0x24C4DA mov     qword ptr [rbx+30h], 0
//   0x24C4E2 mov     dword ptr [rbx+38h], 0
//   0x24C4E9 mov     rax, [rax+18h]
//   0x24C4ED mov     [rbx], rax
//   0x24C4F0 jmp     loc_24C408
//   0x24C4F5 align 8
//   0x24C4F8 mov     rdi, r15
//   0x24C4FB mov     rsi, rbx
//   0x24C4FE call    sub_245230
//   0x24C503 mov     r15, rax
//   0x24C506 jmp     loc_24C47D
//   0x24C50B align 10h
//   0x24C510 mov     r14, [rbp+var_48]
//   0x24C514 mov     rax, [r12+148h]
//   0x24C51C lea     r15, [rbp+var_40]
//   0x24C520 mov     rdi, r15
//   0x24C523 mov     edx, [r14+44h]
//   0x24C527 mov     rsi, [rax+70h]
//   0x24C52B call    sub_32C5A0
//   0x24C530 mov     rsi, [r14+18h]
//   0x24C534 lea     rdx, [r14+40h]
//   0x24C538 mov     r8, rbx
//   0x24C53B mov     rcx, r15
//   0x24C53E mov     rdi, r12
//   0x24C541 call    sub_24AE10
//   0x24C546 mov     rdi, r15
//   0x24C549 mov     rbx, rax
//   0x24C54C call    _clear_tinfo_t
//   0x24C551 jmp     loc_24C424
//   0x24C556 call    ___stack_chk_fail
//   0x24C55B mov     rbx, rax
//   0x24C55E jmp     loc_49E2E
//   0x24C563 mov     r15, rax
//   0x24C566 jmp     loc_49E4D
//   0x24C56B mov     rbx, rax
//   0x24C56E jmp     loc_49E6C
// ============================================================

void sub_24C3B0(/* signature unknown */)
{
    // see disassembly above
}

