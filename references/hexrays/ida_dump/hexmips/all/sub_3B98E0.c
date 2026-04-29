// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3B98E0
// Name:           sub_3B98E0
// Function size:  90 bytes (30 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3B98E0 push    rbp
//   0x3B98E1 mov     rbp, rdi
//   0x3B98E4 push    rbx
//   0x3B98E5 mov     rbx, rsi
//   0x3B98E8 xor     esi, esi
//   0x3B98EA mov     rdi, rbx
//   0x3B98ED sub     rsp, 8
//   0x3B98F1 call    sub_386590
//   0x3B98F6 mov     rdi, [rbp+10h]
//   0x3B98FA lea     rsi, [rbx+50h]
//   0x3B98FE call    sub_3B96E0
//   0x3B9903 mov     edx, eax
//   0x3B9905 xor     eax, eax
//   0x3B9907 test    edx, edx
//   0x3B9909 jg      short loc_3B9918
//   0x3B990B add     rsp, 8
//   0x3B990F pop     rbx
//   0x3B9910 pop     rbp
//   0x3B9911 retn
//   0x3B9912 align 8
//   0x3B9918 mov     r8, cs:callui_ptr
//   0x3B991F xor     ecx, ecx
//   0x3B9921 mov     esi, 0Ah
//   0x3B9926 mov     edi, 0C2h
//   0x3B992B call    qword ptr [r8]
//   0x3B992E add     rsp, 8
//   0x3B9932 mov     eax, 1
//   0x3B9937 pop     rbx
//   0x3B9938 pop     rbp
//   0x3B9939 retn
// ============================================================

void sub_3B98E0(/* signature unknown */)
{
    // see disassembly above
}

