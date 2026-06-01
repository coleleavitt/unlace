// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x484730
// Name:           sub_484730
// Function size:  142 bytes (44 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x484730 push    r13; int
//   0x484732 push    r12; int
//   0x484734 push    rbp; __int64
//   0x484735 push    rbx; void *
//   0x484736 sub     rsp, 8
//   0x48473A mov     rax, [rdi+18h]
//   0x48473E mov     r12, [rsi]
//   0x484741 cmp     r12, [rax]
//   0x484744 jb      short loc_48478F
//   0x484746 mov     r13, [rsi+8]
//   0x48474A mov     rbp, rsi
//   0x48474D cmp     [rax+8], r13
//   0x484751 jb      short loc_48478F
//   0x484753 mov     rdx, [rdi+28h]
//   0x484757 mov     rsi, [rdi+20h]
//   0x48475B mov     rbx, rdi
//   0x48475E lea     rax, [rdx+1]
//   0x484762 cmp     [rdi+30h], rax
//   0x484766 jb      short loc_4847A0
//   0x484768 movq    xmm0, r12
//   0x48476D movq    xmm1, r13
//   0x484772 shl     rdx, 4; int
//   0x484776 lea     rdi, [rbx+38h]; int
//   0x48477A punpcklqdq xmm0, xmm1
//   0x48477E movups  xmmword ptr [rsi+rdx], xmm0
//   0x484782 mov     rsi, rbp; int
//   0x484785 add     qword ptr [rbx+28h], 1
//   0x48478A call    _rangeset_t_add
//   0x48478F add     rsp, 8
//   0x484793 xor     eax, eax
//   0x484795 pop     rbx
//   0x484796 pop     rbp
//   0x484797 pop     r12
//   0x484799 pop     r13
//   0x48479B retn
//   0x48479C align 20h
//   0x4847A0 mov     rdx, rax
//   0x4847A3 lea     rdi, [rdi+20h]
//   0x4847A7 mov     ecx, 10h
//   0x4847AC call    _qvector_reserve
//   0x4847B1 mov     rdx, [rbx+28h]
//   0x4847B5 mov     [rbx+20h], rax
//   0x4847B9 mov     rsi, rax
//   0x4847BC jmp     short loc_484768
// ============================================================

void sub_484730(/* signature unknown */)
{
    // see disassembly above
}

