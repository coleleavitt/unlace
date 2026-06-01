// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x7DF5F0
// Name:           sub_7DF5F0
// Function size:  196 bytes (60 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x7DF5F0 push    r13
//   0x7DF5F2 mov     r13, rsi
//   0x7DF5F5 push    r12
//   0x7DF5F7 push    rbp
//   0x7DF5F8 mov     ebp, edx
//   0x7DF5FA push    rbx
//   0x7DF5FB sub     rsp, 18h
//   0x7DF5FF mov     [rsp+38h+var_30], rdi
//   0x7DF604 mov     edi, 40h ; '@'; unsigned __int64
//   0x7DF609 call    __Znwm; operator new(ulong)
//   0x7DF60E pxor    xmm0, xmm0
//   0x7DF612 cmp     [rsp+38h+var_30], 0
//   0x7DF618 mov     byte ptr [rax+8], 0Fh
//   0x7DF61C mov     rbx, rax
//   0x7DF61F mov     r12, rax
//   0x7DF622 lea     rax, off_2B3B710
//   0x7DF629 mov     [rbx], rax
//   0x7DF62C mov     qword ptr [rbx+10h], 0
//   0x7DF634 mov     qword ptr [rbx+28h], 0
//   0x7DF63C movups  xmmword ptr [rbx+18h], xmm0
//   0x7DF640 movups  xmmword ptr [rbx+30h], xmm0
//   0x7DF644 jz      short loc_7DF65C
//   0x7DF646 lea     rsi, [rsp+38h+var_30]
//   0x7DF64B mov     ecx, ebp
//   0x7DF64D mov     rdx, r13
//   0x7DF650 mov     rdi, rbx
//   0x7DF653 call    sub_7EF130
//   0x7DF658 test    al, al
//   0x7DF65A jz      short loc_7DF670
//   0x7DF65C add     rsp, 18h
//   0x7DF660 mov     rax, r12
//   0x7DF663 pop     rbx
//   0x7DF664 pop     rbp
//   0x7DF665 pop     r12
//   0x7DF667 pop     r13
//   0x7DF669 retn
//   0x7DF66A align 10h
//   0x7DF670 test    rbx, rbx
//   0x7DF673 jz      short loc_7DF69D
//   0x7DF675 mov     rax, [rbx]
//   0x7DF678 lea     rdx, sub_7DDF20
//   0x7DF67F mov     rdi, rbx
//   0x7DF682 mov     rax, [rax+8]
//   0x7DF686 cmp     rax, rdx
//   0x7DF689 jnz     short loc_7DF6B0
//   0x7DF68B call    sub_7DDE70
//   0x7DF690 mov     esi, 40h ; '@'; unsigned __int64
//   0x7DF695 mov     rdi, rbx; void *
//   0x7DF698 call    __ZdlPvm; operator delete(void *,ulong)
//   0x7DF69D add     rsp, 18h
//   0x7DF6A1 xor     r12d, r12d
//   0x7DF6A4 pop     rbx
//   0x7DF6A5 mov     rax, r12
//   0x7DF6A8 pop     rbp
//   0x7DF6A9 pop     r12
//   0x7DF6AB pop     r13
//   0x7DF6AD retn
//   0x7DF6AE align 10h
//   0x7DF6B0 call    rax
//   0x7DF6B2 jmp     short loc_7DF69D
// ============================================================

void sub_7DF5F0(/* signature unknown */)
{
    // see disassembly above
}

