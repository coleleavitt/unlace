// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x847430
// Name:           rangeset_t_sub2
// Function size:  105 bytes (38 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x847430 push    r13; int
//   0x847432 push    r12; int
//   0x847434 push    rbp; int
//   0x847435 push    rbx; int
//   0x847436 sub     rsp, 8
//   0x84743A mov     rax, [rsi+8]
//   0x84743E mov     rbx, [rsi]
//   0x847441 shl     rax, 4
//   0x847445 jz      short loc_847488
//   0x847447 mov     r12, rdi
//   0x84744A mov     rbp, rsi
//   0x84744D xor     r13d, r13d
//   0x847450 mov     rsi, rbx; int
//   0x847453 mov     rdi, r12; int
//   0x847456 add     rbx, 10h
//   0x84745A call    _rangeset_t_sub
//   0x84745F or      r13d, eax
//   0x847462 mov     rax, [rbp+8]
//   0x847466 shl     rax, 4
//   0x84746A add     rax, [rbp+0]
//   0x84746E cmp     rbx, rax
//   0x847471 jnz     short loc_847450
//   0x847473 add     rsp, 8
//   0x847477 mov     eax, r13d
//   0x84747A pop     rbx
//   0x84747B pop     rbp
//   0x84747C pop     r12
//   0x84747E pop     r13
//   0x847480 retn
//   0x847481 align 8
//   0x847488 add     rsp, 8
//   0x84748C xor     r13d, r13d
//   0x84748F pop     rbx
//   0x847490 mov     eax, r13d
//   0x847493 pop     rbp
//   0x847494 pop     r12
//   0x847496 pop     r13
//   0x847498 retn
// ============================================================

void rangeset_t_sub2(/* signature unknown */)
{
    // see disassembly above
}

