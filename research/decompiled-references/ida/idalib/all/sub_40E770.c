// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x40E770
// Name:           sub_40E770
// Function size:  155 bytes (52 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x40E770 push    r13; int
//   0x40E772 mov     r13, rdx
//   0x40E775 push    r12; int
//   0x40E777 mov     r12, rsi
//   0x40E77A push    rbp; int
//   0x40E77B push    rbx; int
//   0x40E77C mov     rbx, rdi
//   0x40E77F sub     rsp, 8
//   0x40E783 call    sub_3C2650
//   0x40E788 mov     edx, 4
//   0x40E78D mov     rdi, rbx
//   0x40E790 mov     rsi, rax
//   0x40E793 mov     rbp, rax
//   0x40E796 call    sub_3BE900
//   0x40E79B mov     rdx, rax
//   0x40E79E not     rdx
//   0x40E7A1 and     dh, 6
//   0x40E7A4 jz      short loc_40E7B8
//   0x40E7A6 xor     eax, eax
//   0x40E7A8 add     rsp, 8
//   0x40E7AC pop     rbx
//   0x40E7AD pop     rbp
//   0x40E7AE pop     r12
//   0x40E7B0 pop     r13
//   0x40E7B2 retn
//   0x40E7B3 align 8
//   0x40E7B8 test    eax, 10000000h
//   0x40E7BD jz      short loc_40E7A6
//   0x40E7BF test    ah, 10h
//   0x40E7C2 jnz     short loc_40E7A6
//   0x40E7C4 mov     rdi, rbp
//   0x40E7C7 call    _is_align_insn
//   0x40E7CC test    eax, eax
//   0x40E7CE jle     short loc_40E7A6
//   0x40E7D0 mov     rsi, rbp
//   0x40E7D3 lea     rdi, [rbx+6A8h]
//   0x40E7DA call    sub_505D70
//   0x40E7DF mov     rsi, rax
//   0x40E7E2 test    rax, rax
//   0x40E7E5 jz      short loc_40E7A6
//   0x40E7E7 mov     rdx, r13
//   0x40E7EA mov     rdi, rbx
//   0x40E7ED call    sub_5C9B30
//   0x40E7F2 test    eax, eax
//   0x40E7F4 jns     short loc_40E7A6
//   0x40E7F6 mov     rdx, r12; int
//   0x40E7F9 mov     rsi, rbp; int
//   0x40E7FC mov     rdi, rbx; int
//   0x40E7FF call    sub_5CE7F0
//   0x40E804 test    eax, eax
//   0x40E806 setz    al
//   0x40E809 jmp     short loc_40E7A8
// ============================================================

void sub_40E770(/* signature unknown */)
{
    // see disassembly above
}

