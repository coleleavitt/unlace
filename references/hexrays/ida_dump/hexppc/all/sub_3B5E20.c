// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3B5E20
// Name:           sub_3B5E20
// Function size:  104 bytes (27 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3B5E20 push    rbx
//   0x3B5E21 cmp     rsi, [rdi+0E8h]
//   0x3B5E28 jnb     short loc_3B5E6D
//   0x3B5E2A mov     rax, [rdi+0E0h]
//   0x3B5E31 lea     rdx, [rsi+rsi*4]
//   0x3B5E35 lea     rbx, [rax+rdx*8]
//   0x3B5E39 test    rbx, rbx
//   0x3B5E3C jz      short loc_3B5E6D
//   0x3B5E3E mov     rdi, [rbx]
//   0x3B5E41 xor     esi, esi
//   0x3B5E43 call    sub_396EA0
//   0x3B5E48 mov     rsi, [rbx+8]
//   0x3B5E4C cmp     rsi, 0FFFFFFFFFFFFFFFFh
//   0x3B5E50 jz      short loc_3B5E6D
//   0x3B5E52 mov     r8, cs:callui_ptr
//   0x3B5E59 mov     ecx, 1
//   0x3B5E5E mov     edx, 0FFFFFFFFh
//   0x3B5E63 xor     eax, eax
//   0x3B5E65 mov     edi, 73h ; 's'
//   0x3B5E6A call    qword ptr [r8]
//   0x3B5E6D xor     ecx, ecx
//   0x3B5E6F mov     rax, 0FFFFFFFFFFFFFFFFh
//   0x3B5E76 pop     rbx
//   0x3B5E77 mov     rsi, 0FFFFFFFF00000000h
//   0x3B5E81 and     rcx, rsi
//   0x3B5E84 mov     rdx, rcx
//   0x3B5E87 retn
// ============================================================

void sub_3B5E20(/* signature unknown */)
{
    // see disassembly above
}

