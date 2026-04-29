// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3B8760
// Name:           sub_3B8760
// Function size:  90 bytes (30 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3B8760 push    rbp
//   0x3B8761 mov     rbp, rdi
//   0x3B8764 push    rbx
//   0x3B8765 mov     rbx, rsi
//   0x3B8768 xor     esi, esi
//   0x3B876A mov     rdi, rbx
//   0x3B876D sub     rsp, 8
//   0x3B8771 call    sub_385410
//   0x3B8776 mov     rdi, [rbp+10h]
//   0x3B877A lea     rsi, [rbx+50h]
//   0x3B877E call    sub_3B8560
//   0x3B8783 mov     edx, eax
//   0x3B8785 xor     eax, eax
//   0x3B8787 test    edx, edx
//   0x3B8789 jg      short loc_3B8798
//   0x3B878B add     rsp, 8
//   0x3B878F pop     rbx
//   0x3B8790 pop     rbp
//   0x3B8791 retn
//   0x3B8792 align 8
//   0x3B8798 mov     r8, cs:callui_ptr
//   0x3B879F xor     ecx, ecx
//   0x3B87A1 mov     esi, 0Ah
//   0x3B87A6 mov     edi, 0C2h
//   0x3B87AB call    qword ptr [r8]
//   0x3B87AE add     rsp, 8
//   0x3B87B2 mov     eax, 1
//   0x3B87B7 pop     rbx
//   0x3B87B8 pop     rbp
//   0x3B87B9 retn
// ============================================================

void sub_3B8760(/* signature unknown */)
{
    // see disassembly above
}

