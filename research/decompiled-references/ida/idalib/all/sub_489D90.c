// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x489D90
// Name:           sub_489D90
// Function size:  115 bytes (34 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x489D90 mov     rax, [rdi+20h]
//   0x489D94 mov     rdx, [rsi]
//   0x489D97 cmp     rdx, [rax]
//   0x489D9A jb      short loc_489E00
//   0x489D9C mov     rcx, [rsi+8]
//   0x489DA0 cmp     [rax+8], rcx
//   0x489DA4 jb      short loc_489E00
//   0x489DA6 push    rbp; __int64
//   0x489DA7 mov     rsi, rdx
//   0x489DAA push    rbx; void *
//   0x489DAB mov     rbx, rdi
//   0x489DAE sub     rsp, 8
//   0x489DB2 mov     rax, [rdi+8]
//   0x489DB6 mov     rdi, [rax+688h]
//   0x489DBD add     rdi, 658h
//   0x489DC4 call    sub_505D70
//   0x489DC9 mov     rsi, [rbx+10h]
//   0x489DCD mov     rdi, [rbx+18h]
//   0x489DD1 xor     ecx, ecx
//   0x489DD3 mov     rbp, rax
//   0x489DD6 mov     r8d, 1
//   0x489DDC mov     rdx, rax
//   0x489DDF call    sub_489810
//   0x489DE4 lea     rdi, [rbx+28h]; int
//   0x489DE8 mov     rsi, rbp; int
//   0x489DEB call    _rangeset_t_add
//   0x489DF0 add     rsp, 8
//   0x489DF4 xor     eax, eax
//   0x489DF6 pop     rbx
//   0x489DF7 pop     rbp
//   0x489DF8 retn
//   0x489DF9 align 20h
//   0x489E00 xor     eax, eax
//   0x489E02 retn
// ============================================================

void sub_489D90(/* signature unknown */)
{
    // see disassembly above
}

