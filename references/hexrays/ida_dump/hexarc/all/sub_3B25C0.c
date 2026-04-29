// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3B25C0
// Name:           sub_3B25C0
// Function size:  104 bytes (27 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3B25C0 push    rbx
//   0x3B25C1 cmp     rsi, [rdi+0E8h]
//   0x3B25C8 jnb     short loc_3B260D
//   0x3B25CA lea     rax, [rsi+rsi*2]
//   0x3B25CE shl     rax, 4
//   0x3B25D2 add     rax, [rdi+0E0h]
//   0x3B25D9 mov     rbx, rax
//   0x3B25DC jz      short loc_3B260D
//   0x3B25DE mov     rdi, [rax]
//   0x3B25E1 xor     esi, esi
//   0x3B25E3 call    sub_393720
//   0x3B25E8 mov     rsi, [rbx+8]
//   0x3B25EC cmp     rsi, 0FFFFFFFFFFFFFFFFh
//   0x3B25F0 jz      short loc_3B260D
//   0x3B25F2 mov     r8, cs:callui_ptr
//   0x3B25F9 mov     ecx, 1
//   0x3B25FE mov     edx, 0FFFFFFFFh
//   0x3B2603 xor     eax, eax
//   0x3B2605 mov     edi, 73h ; 's'
//   0x3B260A call    qword ptr [r8]
//   0x3B260D xor     ecx, ecx
//   0x3B260F mov     rax, 0FFFFFFFFFFFFFFFFh
//   0x3B2616 pop     rbx
//   0x3B2617 mov     rsi, 0FFFFFFFF00000000h
//   0x3B2621 and     rcx, rsi
//   0x3B2624 mov     rdx, rcx
//   0x3B2627 retn
// ============================================================

void sub_3B25C0(/* signature unknown */)
{
    // see disassembly above
}

