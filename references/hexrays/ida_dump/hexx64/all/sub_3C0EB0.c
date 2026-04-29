// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3C0EB0
// Name:           sub_3C0EB0
// Function size:  60 bytes (18 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3C0EB0 push    r12
//   0x3C0EB2 mov     r12, cs:callui_ptr
//   0x3C0EB9 push    rbp
//   0x3C0EBA push    rbx
//   0x3C0EBB mov     rbp, [rdi+370h]
//   0x3C0EC2 lea     rbx, [rbp+7A0h]
//   0x3C0EC9 add     rbp, 15A0h
//   0x3C0ED0 mov     rsi, rbx
//   0x3C0ED3 add     rbx, 40h ; '@'
//   0x3C0ED7 mov     edi, 7Fh
//   0x3C0EDC xor     eax, eax
//   0x3C0EDE call    qword ptr [r12]
//   0x3C0EE2 cmp     rbx, rbp
//   0x3C0EE5 jnz     short loc_3C0ED0
//   0x3C0EE7 pop     rbx
//   0x3C0EE8 pop     rbp
//   0x3C0EE9 pop     r12
//   0x3C0EEB retn
// ============================================================

void sub_3C0EB0(/* signature unknown */)
{
    // see disassembly above
}

