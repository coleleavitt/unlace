// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x5B4530
// Name:           sub_5B4530
// Function size:  376 bytes (100 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x5B4530 push    r15; int
//   0x5B4532 push    r14; int
//   0x5B4534 push    r13; int
//   0x5B4536 push    r12; int
//   0x5B4538 push    rbp; __int64
//   0x5B4539 push    rbx; void *
//   0x5B453A sub     rsp, 48h
//   0x5B453E mov     rax, fs:28h
//   0x5B4547 mov     qword ptr [rsp+78h+var_40], rax; int
//   0x5B454C xor     eax, eax
//   0x5B454E test    rdx, rdx
//   0x5B4551 jz      loc_5B4670
//   0x5B4557 mov     r13, rsi
//   0x5B455A lea     r15, [rdi+998h]
//   0x5B4561 mov     rsi, [rdi]
//   0x5B4564 mov     rbx, rdi
//   0x5B4567 mov     rbp, rdx
//   0x5B456A mov     rdi, r15
//   0x5B456D mov     rdx, r13
//   0x5B4570 mov     r14d, ecx
//   0x5B4573 mov     ecx, 41h ; 'A'
//   0x5B4578 call    sub_7BE710
//   0x5B457D mov     rdi, rbx
//   0x5B4580 lea     rsi, [rax-1]
//   0x5B4584 call    sub_3BDE50
//   0x5B4589 mov     r12, rax
//   0x5B458C cmp     rax, 0FFFFFFFFFFFFFFFFh
//   0x5B4590 jz      loc_5B4670
//   0x5B4596 xor     esi, esi
//   0x5B4598 mov     rdi, rax
//   0x5B459B call    _show_auto
//   0x5B45A0 pxor    xmm0, xmm0
//   0x5B45A4 mov     rdi, rsp
//   0x5B45A7 xor     ecx, ecx
//   0x5B45A9 xor     edx, edx
//   0x5B45AB mov     rsi, r12
//   0x5B45AE movups  xmmword ptr [rsp+78h+var_70], xmm0; int
//   0x5B45B3 mov     [rsp+78h+var_78], 0; int
//   0x5B45BB call    _get_ea_name
//   0x5B45C0 test    rax, rax
//   0x5B45C3 jle     short loc_5B45D3
//   0x5B45C5 mov     rsi, [rsp+78h+var_78]
//   0x5B45C9 xor     edx, edx
//   0x5B45CB mov     rdi, r12
//   0x5B45CE call    _append_cmt
//   0x5B45D3 pxor    xmm0, xmm0
//   0x5B45D7 lea     rdi, [rsp+78h+ptr]
//   0x5B45DC mov     edx, r14d
//   0x5B45DF mov     rsi, rbp
//   0x5B45E2 mov     [rsp+78h+ptr], 0; int
//   0x5B45EB movups  xmmword ptr [rsp+78h+var_50], xmm0; ptr
//   0x5B45F0 call    sub_5B38F0
//   0x5B45F5 mov     rsi, [rbx]
//   0x5B45F8 mov     r9d, 53h ; 'S'
//   0x5B45FE xor     r8d, r8d
//   0x5B4601 mov     rcx, rax
//   0x5B4604 mov     rdx, r13
//   0x5B4607 mov     rdi, r15
//   0x5B460A mov     rbp, rax
//   0x5B460D call    sub_7BE7C0
//   0x5B4612 mov     edx, 1
//   0x5B4617 mov     edi, 1
//   0x5B461C xor     esi, esi
//   0x5B461E call    _mark_builtin_widgets
//   0x5B4623 mov     ecx, 1802h
//   0x5B4628 mov     rdx, rbp; src
//   0x5B462B mov     rsi, r12; int
//   0x5B462E mov     rdi, rbx; int
//   0x5B4631 call    sub_4D7EC0
//   0x5B4636 mov     rdi, [rsp+78h+ptr]; ptr
//   0x5B463B mov     ebx, eax
//   0x5B463D test    rdi, rdi
//   0x5B4640 jz      short loc_5B4650
//   0x5B4642 mov     [rsp+78h+var_50], 0
//   0x5B464B call    _qfree
//   0x5B4650 mov     rdi, [rsp+78h+var_78]; ptr
//   0x5B4654 test    rdi, rdi
//   0x5B4657 jz      short loc_5B4672
//   0x5B4659 mov     qword ptr [rsp+78h+var_70], 0
//   0x5B4662 call    _qfree
//   0x5B4667 jmp     short loc_5B4672
//   0x5B4669 align 10h
//   0x5B4670 xor     ebx, ebx
//   0x5B4672 mov     rax, qword ptr [rsp+78h+var_40]
//   0x5B4677 sub     rax, fs:28h
//   0x5B4680 jnz     short loc_5B4693
//   0x5B4682 add     rsp, 48h
//   0x5B4686 mov     eax, ebx
//   0x5B4688 pop     rbx
//   0x5B4689 pop     rbp
//   0x5B468A pop     r12
//   0x5B468C pop     r13
//   0x5B468E pop     r14
//   0x5B4690 pop     r15
//   0x5B4692 retn
//   0x5B4693 call    ___stack_chk_fail
//   0x5B4698 mov     rbx, rax
//   0x5B469B jmp     loc_2C7E1C
//   0x5B46A0 mov     rbx, rax
//   0x5B46A3 jmp     loc_2C7E06
// ============================================================

void sub_5B4530(/* signature unknown */)
{
    // see disassembly above
}

