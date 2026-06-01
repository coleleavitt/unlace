// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x47FA00
// Name:           sub_47FA00
// Function size:  56 bytes (18 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x47FA00 push    rbp; int
//   0x47FA01 mov     rbp, rdi
//   0x47FA04 push    rbx; int
//   0x47FA05 mov     rbx, rsi
//   0x47FA08 sub     rsp, 8
//   0x47FA0C mov     rax, [rdi+8]
//   0x47FA10 mov     rdx, [rsi+8]
//   0x47FA14 mov     rsi, [rsi]
//   0x47FA17 mov     rdi, [rax+688h]
//   0x47FA1E call    sub_3D6B90
//   0x47FA23 mov     rdi, [rbp+18h]; int
//   0x47FA27 mov     rsi, rbx; int
//   0x47FA2A call    _rangeset_t_sub
//   0x47FA2F add     rsp, 8
//   0x47FA33 xor     eax, eax
//   0x47FA35 pop     rbx
//   0x47FA36 pop     rbp
//   0x47FA37 retn
// ============================================================

void sub_47FA00(/* signature unknown */)
{
    // see disassembly above
}

