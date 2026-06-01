// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x5C94E0
// Name:           sub_5C94E0
// Function size:  204 bytes (61 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x5C94E0 push    r12; __int64
//   0x5C94E2 push    rbp; void *
//   0x5C94E3 mov     rbp, rdx
//   0x5C94E6 push    rbx; int
//   0x5C94E7 test    rsi, rsi
//   0x5C94EA jz      loc_5C9570
//   0x5C94F0 mov     r12, rsi
//   0x5C94F3 mov     edx, 1
//   0x5C94F8 mov     rsi, rbp
//   0x5C94FB call    sub_5C7820
//   0x5C9500 test    al, al
//   0x5C9502 jz      short loc_5C9560
//   0x5C9504 mov     rsi, rbp; int
//   0x5C9507 mov     rdi, r12; int
//   0x5C950A call    _rangeset_t_add
//   0x5C950F mov     eax, [rbp+80h]
//   0x5C9515 test    eax, eax
//   0x5C9517 jle     short loc_5C9542
//   0x5C9519 xor     ebx, ebx
//   0x5C951B nop     dword ptr [rax+rax+00h]
//   0x5C9520 mov     rsi, rbx
//   0x5C9523 mov     rdi, r12; int
//   0x5C9526 add     rbx, 1
//   0x5C952A shl     rsi, 4
//   0x5C952E add     rsi, [rbp+88h]; int
//   0x5C9535 call    _rangeset_t_add
//   0x5C953A cmp     [rbp+80h], ebx
//   0x5C9540 jg      short loc_5C9520
//   0x5C9542 mov     rax, [r12+8]
//   0x5C9547 shl     rax, 4
//   0x5C954B add     rax, [r12]
//   0x5C954F mov     rax, [rax-8]
//   0x5C9553 pop     rbx
//   0x5C9554 pop     rbp
//   0x5C9555 pop     r12
//   0x5C9557 retn
//   0x5C9558 align 20h
//   0x5C9560 pop     rbx
//   0x5C9561 mov     rax, 0FFFFFFFFFFFFFFFFh
//   0x5C9568 pop     rbp
//   0x5C9569 pop     r12
//   0x5C956B retn
//   0x5C956C align 10h
//   0x5C9570 mov     edx, 1
//   0x5C9575 mov     rsi, rbp
//   0x5C9578 call    sub_5C7820
//   0x5C957D test    al, al
//   0x5C957F jz      short loc_5C9560
//   0x5C9581 movsxd  rdx, dword ptr [rbp+80h]
//   0x5C9588 mov     rax, [rbp+8]
//   0x5C958C test    rdx, rdx
//   0x5C958F jz      short loc_5C9553
//   0x5C9591 shl     rdx, 4
//   0x5C9595 add     rdx, [rbp+88h]
//   0x5C959C pop     rbx
//   0x5C959D mov     rdx, [rdx-8]
//   0x5C95A1 pop     rbp
//   0x5C95A2 pop     r12
//   0x5C95A4 cmp     rax, rdx
//   0x5C95A7 cmovb   rax, rdx
//   0x5C95AB retn
// ============================================================

void sub_5C94E0(/* signature unknown */)
{
    // see disassembly above
}

