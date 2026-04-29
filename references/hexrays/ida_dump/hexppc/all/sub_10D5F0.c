// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x10D5F0
// Name:           sub_10D5F0
// Function size:  220 bytes (60 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x10D5F0 push    r13
//   0x10D5F2 mov     rcx, rsi
//   0x10D5F5 mov     rsi, rdi
//   0x10D5F8 push    r12
//   0x10D5FA push    rbp
//   0x10D5FB push    rbx
//   0x10D5FC sub     rsp, 58h
//   0x10D600 mov     rbp, fs:28h
//   0x10D609 mov     [rsp+78h+var_30], rbp
//   0x10D60E mov     rbp, rdx
//   0x10D611 lea     r12, [rsp+78h+var_68]
//   0x10D616 lea     rdx, [rsp+78h+var_74]
//   0x10D61B mov     [rsp+78h+var_68], 0
//   0x10D624 mov     rdi, r12
//   0x10D627 mov     [rsp+78h+var_60], 0
//   0x10D62C call    sub_1DC2B0
//   0x10D631 mov     ebx, eax
//   0x10D633 test    al, al
//   0x10D635 jnz     short loc_10D658
//   0x10D637 mov     rax, [rsp+78h+var_30]
//   0x10D63C sub     rax, fs:28h
//   0x10D645 jnz     short loc_10D6BF
//   0x10D647 add     rsp, 58h
//   0x10D64B mov     eax, ebx
//   0x10D64D pop     rbx
//   0x10D64E pop     rbp
//   0x10D64F pop     r12
//   0x10D651 pop     r13
//   0x10D653 retn
//   0x10D654 align 8
//   0x10D658 mov     eax, [rsp+78h+var_74]
//   0x10D65C lea     r13, [rsp+78h+var_58]
//   0x10D661 pxor    xmm0, xmm0
//   0x10D665 xor     ecx, ecx
//   0x10D667 mov     rdx, r12
//   0x10D66A mov     rsi, r13
//   0x10D66D mov     rdi, rbp
//   0x10D670 movups  [rsp+78h+var_50], xmm0
//   0x10D675 mov     [rsp+78h+var_58], 0
//   0x10D67D mov     [rsp+78h+var_54], eax
//   0x10D681 mov     [rsp+78h+var_40], 0
//   0x10D68A call    sub_1DC500
//   0x10D68F test    al, al
//   0x10D691 jz      short loc_10D6B0
//   0x10D693 lea     rsi, [rsp+78h+var_70]
//   0x10D698 mov     rdi, r13
//   0x10D69B call    sub_30E970
//   0x10D6A0 test    al, al
//   0x10D6A2 jz      short loc_10D6B0
//   0x10D6A4 cmp     [rsp+78h+var_70], 0
//   0x10D6AA setz    bl
//   0x10D6AD jmp     short loc_10D6B2
//   0x10D6AF align 10h
//   0x10D6B0 xor     ebx, ebx
//   0x10D6B2 mov     rdi, r13
//   0x10D6B5 call    sub_30EA00
//   0x10D6BA jmp     loc_10D637
//   0x10D6BF call    ___stack_chk_fail
//   0x10D6C4 mov     rbx, rax
//   0x10D6C7 jmp     loc_35BEA
// ============================================================

void sub_10D5F0(/* signature unknown */)
{
    // see disassembly above
}

