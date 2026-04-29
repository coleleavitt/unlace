// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3B3F20
// Name:           sub_3B3F20
// Function size:  104 bytes (27 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3B3F20 push    rbx
//   0x3B3F21 cmp     rsi, [rdi+0E8h]
//   0x3B3F28 jnb     short loc_3B3F6D
//   0x3B3F2A mov     rax, [rdi+0E0h]
//   0x3B3F31 lea     rdx, [rsi+rsi*4]
//   0x3B3F35 lea     rbx, [rax+rdx*8]
//   0x3B3F39 test    rbx, rbx
//   0x3B3F3C jz      short loc_3B3F6D
//   0x3B3F3E mov     rdi, [rbx]
//   0x3B3F41 xor     esi, esi
//   0x3B3F43 call    sub_394FA0
//   0x3B3F48 mov     rsi, [rbx+8]
//   0x3B3F4C cmp     rsi, 0FFFFFFFFFFFFFFFFh
//   0x3B3F50 jz      short loc_3B3F6D
//   0x3B3F52 mov     r8, cs:callui_ptr
//   0x3B3F59 mov     ecx, 1
//   0x3B3F5E mov     edx, 0FFFFFFFFh
//   0x3B3F63 xor     eax, eax
//   0x3B3F65 mov     edi, 73h ; 's'
//   0x3B3F6A call    qword ptr [r8]
//   0x3B3F6D xor     ecx, ecx
//   0x3B3F6F mov     rax, 0FFFFFFFFFFFFFFFFh
//   0x3B3F76 pop     rbx
//   0x3B3F77 mov     rsi, 0FFFFFFFF00000000h
//   0x3B3F81 and     rcx, rsi
//   0x3B3F84 mov     rdx, rcx
//   0x3B3F87 retn
// ============================================================

void sub_3B3F20(/* signature unknown */)
{
    // see disassembly above
}

