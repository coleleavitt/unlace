// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x691770
// Name:           sub_691770
// Function size:  122 bytes (42 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x691770 push    r13; int
//   0x691772 xor     eax, eax
//   0x691774 mov     r13, rdx
//   0x691777 xor     edx, edx
//   0x691779 push    r12; int
//   0x69177B mov     r12, rdi
//   0x69177E mov     edi, 18h
//   0x691783 push    rbp; int
//   0x691784 mov     rbp, rsi
//   0x691787 mov     esi, 0Ah
//   0x69178C push    rbx; int
//   0x69178D mov     rbx, rcx
//   0x691790 sub     rsp, 8
//   0x691794 mov     rcx, cs:callui_ptr
//   0x69179B call    qword ptr [rcx]
//   0x69179D cmp     byte ptr [rbx+21h], 0
//   0x6917A1 jnz     short loc_6917B0
//   0x6917A3 add     rsp, 8
//   0x6917A7 pop     rbx
//   0x6917A8 pop     rbp
//   0x6917A9 pop     r12
//   0x6917AB pop     r13
//   0x6917AD retn
//   0x6917AE align 10h
//   0x6917B0 mov     rax, [r12+8]
//   0x6917B5 mov     esi, 1
//   0x6917BA mov     rdi, [rax]
//   0x6917BD call    sub_5A9ED0
//   0x6917C2 mov     rsi, r13; int
//   0x6917C5 mov     rbx, rax
//   0x6917C8 lea     rdi, [rax+30h]; int
//   0x6917CC call    _rangeset_t_swap
//   0x6917D1 movzx   eax, byte ptr [rbx+58h]
//   0x6917D5 movzx   edx, byte ptr [rbp+0]
//   0x6917D9 mov     [rbx+58h], dl
//   0x6917DC mov     [rbp+0], al
//   0x6917DF add     rsp, 8
//   0x6917E3 pop     rbx
//   0x6917E4 pop     rbp
//   0x6917E5 pop     r12
//   0x6917E7 pop     r13
//   0x6917E9 retn
// ============================================================

void sub_691770(/* signature unknown */)
{
    // see disassembly above
}

