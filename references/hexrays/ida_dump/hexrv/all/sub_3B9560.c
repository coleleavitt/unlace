// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3B9560
// Name:           sub_3B9560
// Function size:  90 bytes (30 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3B9560 push    rbp
//   0x3B9561 mov     rbp, rdi
//   0x3B9564 push    rbx
//   0x3B9565 mov     rbx, rsi
//   0x3B9568 xor     esi, esi
//   0x3B956A mov     rdi, rbx
//   0x3B956D sub     rsp, 8
//   0x3B9571 call    sub_386210
//   0x3B9576 mov     rdi, [rbp+10h]
//   0x3B957A lea     rsi, [rbx+50h]
//   0x3B957E call    sub_3B9360
//   0x3B9583 mov     edx, eax
//   0x3B9585 xor     eax, eax
//   0x3B9587 test    edx, edx
//   0x3B9589 jg      short loc_3B9598
//   0x3B958B add     rsp, 8
//   0x3B958F pop     rbx
//   0x3B9590 pop     rbp
//   0x3B9591 retn
//   0x3B9592 align 8
//   0x3B9598 mov     r8, cs:callui_ptr
//   0x3B959F xor     ecx, ecx
//   0x3B95A1 mov     esi, 0Ah
//   0x3B95A6 mov     edi, 0C2h
//   0x3B95AB call    qword ptr [r8]
//   0x3B95AE add     rsp, 8
//   0x3B95B2 mov     eax, 1
//   0x3B95B7 pop     rbx
//   0x3B95B8 pop     rbp
//   0x3B95B9 retn
// ============================================================

void sub_3B9560(/* signature unknown */)
{
    // see disassembly above
}

