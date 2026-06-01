// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x5D4B10
// Name:           sub_5D4B10
// Function size:  90 bytes (30 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x5D4B10 push    r14; __int64
//   0x5D4B12 push    r13; void *
//   0x5D4B14 push    r12; int
//   0x5D4B16 push    rbp; int
//   0x5D4B17 push    rbx; __int64
//   0x5D4B18 mov     r12, [rdi+8]
//   0x5D4B1C mov     rbx, rcx
//   0x5D4B1F movsxd  rax, dword ptr [rdi+10h]
//   0x5D4B23 movsxd  rdi, dword ptr [r12+rax*4+10h]
//   0x5D4B28 mov     r13, rax
//   0x5D4B2B call    _switch_dbctx
//   0x5D4B30 mov     r14, [rbx]
//   0x5D4B33 mov     r8, rbx
//   0x5D4B36 mov     edx, r13d
//   0x5D4B39 mov     rbp, rax
//   0x5D4B3C mov     rdi, r12
//   0x5D4B3F mov     ecx, 0FFFFFFFFh
//   0x5D4B44 mov     esi, 3
//   0x5D4B49 xor     eax, eax
//   0x5D4B4B call    sub_459560
//   0x5D4B50 mov     rdi, [rbp+688h]; int
//   0x5D4B57 mov     rsi, r14
//   0x5D4B5A call    sub_5D4180
//   0x5D4B5F pop     rbx
//   0x5D4B60 xor     eax, eax
//   0x5D4B62 pop     rbp
//   0x5D4B63 pop     r12
//   0x5D4B65 pop     r13
//   0x5D4B67 pop     r14
//   0x5D4B69 retn
// ============================================================

void sub_5D4B10(/* signature unknown */)
{
    // see disassembly above
}

