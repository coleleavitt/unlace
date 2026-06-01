// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x47FA40
// Name:           sub_47FA40
// Function size:  73 bytes (24 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x47FA40 push    rbp; __int64
//   0x47FA41 xor     ecx, ecx; int
//   0x47FA43 mov     rbp, rsi
//   0x47FA46 push    rbx; void *
//   0x47FA47 mov     rbx, rdi
//   0x47FA4A sub     rsp, 8
//   0x47FA4E mov     edx, [rdi+30h]; int
//   0x47FA51 mov     rdi, [rdi+20h]; int
//   0x47FA55 call    sub_3C0380
//   0x47FA5A mov     rax, [rbx+28h]
//   0x47FA5E mov     rdx, [rbx+10h]
//   0x47FA62 mov     rsi, rbp
//   0x47FA65 mov     ecx, [rdx+0Ch]
//   0x47FA68 mov     rdi, [rax+20h]; int
//   0x47FA6C mov     edx, [rax+0Ch]
//   0x47FA6F call    sub_46DC60
//   0x47FA74 mov     rdi, [rbx+18h]; int
//   0x47FA78 mov     rsi, rbp; int
//   0x47FA7B call    _rangeset_t_add
//   0x47FA80 add     rsp, 8
//   0x47FA84 xor     eax, eax
//   0x47FA86 pop     rbx
//   0x47FA87 pop     rbp
//   0x47FA88 retn
// ============================================================

void sub_47FA40(/* signature unknown */)
{
    // see disassembly above
}

