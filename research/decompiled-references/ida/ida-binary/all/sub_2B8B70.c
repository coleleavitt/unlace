// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x2B8B70
// Name:           sub_2B8B70
// Function size:  196 bytes (51 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x2B8B70 push    r14
//   0x2B8B72 mov     r14, rsi
//   0x2B8B75 push    r13
//   0x2B8B77 mov     r13, rdx
//   0x2B8B7A lea     rdx, sub_2B2520
//   0x2B8B81 push    r12
//   0x2B8B83 mov     r12, rcx
//   0x2B8B86 push    rbp
//   0x2B8B87 mov     rbp, r8
//   0x2B8B8A push    rbx
//   0x2B8B8B mov     rax, [rdi]
//   0x2B8B8E mov     rbx, rdi
//   0x2B8B91 mov     rax, [rax+138h]
//   0x2B8B98 cmp     rax, rdx
//   0x2B8B9B jnz     loc_2B8C30
//   0x2B8BA1 mov     rax, [rdi+10h]
//   0x2B8BA5 lea     rdi, [rax+180h]
//   0x2B8BAC call    sub_1EA6C0
//   0x2B8BB1 movsd   xmm0, qword ptr [rax]
//   0x2B8BB5 mov     eax, [rbx+1B0h]
//   0x2B8BBB add     eax, [rbx+0B0h]
//   0x2B8BC1 pxor    xmm1, xmm1
//   0x2B8BC5 add     eax, 1
//   0x2B8BC8 cvtsi2sd xmm1, eax
//   0x2B8BCC mulsd   xmm1, xmm0
//   0x2B8BD0 cvttsd2si eax, xmm1
//   0x2B8BD4 pxor    xmm1, xmm1
//   0x2B8BD8 mov     [r14], eax
//   0x2B8BDB cvtsi2sd xmm1, dword ptr [rbx+0BCh]
//   0x2B8BE3 mulsd   xmm1, xmm0
//   0x2B8BE7 cvttsd2si eax, xmm1
//   0x2B8BEB pxor    xmm1, xmm1
//   0x2B8BEF mov     [r13+0], eax
//   0x2B8BF3 cvtsi2sd xmm1, dword ptr [rbx+0B4h]
//   0x2B8BFB mulsd   xmm1, xmm0
//   0x2B8BFF cvttsd2si eax, xmm1
//   0x2B8C03 pxor    xmm1, xmm1
//   0x2B8C07 mov     [r12], eax
//   0x2B8C0B cvtsi2sd xmm1, dword ptr [rbx+0B8h]
//   0x2B8C13 mulsd   xmm1, xmm0
//   0x2B8C17 cvttsd2si eax, xmm1
//   0x2B8C1B mov     [rbp+0], eax
//   0x2B8C1E pop     rbx
//   0x2B8C1F pop     rbp
//   0x2B8C20 pop     r12
//   0x2B8C22 pop     r13
//   0x2B8C24 pop     r14
//   0x2B8C26 retn
//   0x2B8C27 align 10h
//   0x2B8C30 call    rax
//   0x2B8C32 jmp     short loc_2B8BB5
// ============================================================

void sub_2B8B70(/* signature unknown */)
{
    // see disassembly above
}

