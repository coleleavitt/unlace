// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x36EB40
// Name:           sub_36EB40
// Function size:  89 bytes (27 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x36EB40 push    rbx
//   0x36EB41 cmp     qword ptr [rsi+8], 3
//   0x36EB46 jnz     short loc_36EB80
//   0x36EB48 cmp     qword ptr [rdi+30h], 0
//   0x36EB4D mov     rbx, rsi
//   0x36EB50 lea     rdx, [rdi+40h]
//   0x36EB54 lea     rsi, haystack
//   0x36EB5B jnz     short loc_36EB78
//   0x36EB5D xor     ecx, ecx
//   0x36EB5F call    _set_idcv_attr
//   0x36EB64 test    eax, eax
//   0x36EB66 setz    al
//   0x36EB69 movzx   eax, al
//   0x36EB6C mov     [rbx+8], rax
//   0x36EB70 xor     eax, eax
//   0x36EB72 pop     rbx
//   0x36EB73 retn
//   0x36EB74 align 8
//   0x36EB78 mov     rsi, [rdi+28h]
//   0x36EB7C jmp     short loc_36EB5D
//   0x36EB7E align 20h
//   0x36EB80 xor     edi, edi
//   0x36EB82 lea     rsi, aSetattr; "setattr"
//   0x36EB89 call    _set_error_string
//   0x36EB8E mov     edi, 38h ; '8'
//   0x36EB93 pop     rbx
//   0x36EB94 jmp     _set_qerrno
// ============================================================

void sub_36EB40(/* signature unknown */)
{
    // see disassembly above
}

