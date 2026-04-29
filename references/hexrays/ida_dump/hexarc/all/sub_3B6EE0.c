// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3B6EE0
// Name:           sub_3B6EE0
// Function size:  90 bytes (30 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3B6EE0 push    rbp
//   0x3B6EE1 mov     rbp, rdi
//   0x3B6EE4 push    rbx
//   0x3B6EE5 mov     rbx, rsi
//   0x3B6EE8 xor     esi, esi
//   0x3B6EEA mov     rdi, rbx
//   0x3B6EED sub     rsp, 8
//   0x3B6EF1 call    sub_383B90
//   0x3B6EF6 mov     rdi, [rbp+10h]
//   0x3B6EFA lea     rsi, [rbx+50h]
//   0x3B6EFE call    sub_3B6CE0
//   0x3B6F03 mov     edx, eax
//   0x3B6F05 xor     eax, eax
//   0x3B6F07 test    edx, edx
//   0x3B6F09 jg      short loc_3B6F18
//   0x3B6F0B add     rsp, 8
//   0x3B6F0F pop     rbx
//   0x3B6F10 pop     rbp
//   0x3B6F11 retn
//   0x3B6F12 align 8
//   0x3B6F18 mov     r8, cs:callui_ptr
//   0x3B6F1F xor     ecx, ecx
//   0x3B6F21 mov     esi, 0Ah
//   0x3B6F26 mov     edi, 0C2h
//   0x3B6F2B call    qword ptr [r8]
//   0x3B6F2E add     rsp, 8
//   0x3B6F32 mov     eax, 1
//   0x3B6F37 pop     rbx
//   0x3B6F38 pop     rbp
//   0x3B6F39 retn
// ============================================================

void sub_3B6EE0(/* signature unknown */)
{
    // see disassembly above
}

