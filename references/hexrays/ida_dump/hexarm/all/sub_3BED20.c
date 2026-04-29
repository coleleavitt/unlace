// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3BED20
// Name:           sub_3BED20
// Function size:  90 bytes (30 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3BED20 push    rbp
//   0x3BED21 mov     rbp, rdi
//   0x3BED24 push    rbx
//   0x3BED25 mov     rbx, rsi
//   0x3BED28 xor     esi, esi
//   0x3BED2A mov     rdi, rbx
//   0x3BED2D sub     rsp, 8
//   0x3BED31 call    sub_38B9D0
//   0x3BED36 mov     rdi, [rbp+10h]
//   0x3BED3A lea     rsi, [rbx+50h]
//   0x3BED3E call    sub_3BEB20
//   0x3BED43 mov     edx, eax
//   0x3BED45 xor     eax, eax
//   0x3BED47 test    edx, edx
//   0x3BED49 jg      short loc_3BED58
//   0x3BED4B add     rsp, 8
//   0x3BED4F pop     rbx
//   0x3BED50 pop     rbp
//   0x3BED51 retn
//   0x3BED52 align 8
//   0x3BED58 mov     r8, cs:callui_ptr
//   0x3BED5F xor     ecx, ecx
//   0x3BED61 mov     esi, 0Ah
//   0x3BED66 mov     edi, 0C2h
//   0x3BED6B call    qword ptr [r8]
//   0x3BED6E add     rsp, 8
//   0x3BED72 mov     eax, 1
//   0x3BED77 pop     rbx
//   0x3BED78 pop     rbp
//   0x3BED79 retn
// ============================================================

void sub_3BED20(/* signature unknown */)
{
    // see disassembly above
}

