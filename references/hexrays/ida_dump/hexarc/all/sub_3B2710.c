// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3B2710
// Name:           sub_3B2710
// Function size:  104 bytes (27 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3B2710 push    rbx
//   0x3B2711 cmp     rsi, [rdi+0C8h]
//   0x3B2718 jnb     short loc_3B275D
//   0x3B271A mov     rax, [rdi+0C0h]
//   0x3B2721 lea     rdx, [rsi+rsi*4]
//   0x3B2725 lea     rbx, [rax+rdx*8]
//   0x3B2729 test    rbx, rbx
//   0x3B272C jz      short loc_3B275D
//   0x3B272E mov     rdi, [rbx]
//   0x3B2731 xor     esi, esi
//   0x3B2733 call    sub_393720
//   0x3B2738 mov     rsi, [rbx+8]
//   0x3B273C cmp     rsi, 0FFFFFFFFFFFFFFFFh
//   0x3B2740 jz      short loc_3B275D
//   0x3B2742 mov     r8, cs:callui_ptr
//   0x3B2749 mov     ecx, 1
//   0x3B274E mov     edx, 0FFFFFFFFh
//   0x3B2753 xor     eax, eax
//   0x3B2755 mov     edi, 73h ; 's'
//   0x3B275A call    qword ptr [r8]
//   0x3B275D xor     ecx, ecx
//   0x3B275F mov     rax, 0FFFFFFFFFFFFFFFFh
//   0x3B2766 pop     rbx
//   0x3B2767 mov     rsi, 0FFFFFFFF00000000h
//   0x3B2771 and     rcx, rsi
//   0x3B2774 mov     rdx, rcx
//   0x3B2777 retn
// ============================================================

void sub_3B2710(/* signature unknown */)
{
    // see disassembly above
}

