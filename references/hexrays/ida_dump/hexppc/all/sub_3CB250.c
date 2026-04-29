// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3CB250
// Name:           sub_3CB250
// Function size:  93 bytes (31 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3CB250 mov     rdx, [rsi+40h]
//   0x3CB254 test    rdx, rdx
//   0x3CB257 jz      short loc_3CB2A8
//   0x3CB259 mov     eax, [rdx+3Ch]
//   0x3CB25C xor     ecx, ecx
//   0x3CB25E sub     eax, 1
//   0x3CB261 cmp     eax, 1
//   0x3CB264 ja      short loc_3CB2AA
//   0x3CB266 mov     rsi, [rdx+40h]
//   0x3CB26A test    rsi, rsi
//   0x3CB26D jz      short loc_3CB2AA
//   0x3CB26F push    rbx
//   0x3CB270 mov     rax, [rdi]
//   0x3CB273 mov     rbx, rdi
//   0x3CB276 call    qword ptr [rax+30h]
//   0x3CB279 mov     rcx, [rbx+28h]
//   0x3CB27D mov     rsi, [rbx+18h]
//   0x3CB281 mov     edx, 1
//   0x3CB286 mov     r8, cs:callui_ptr
//   0x3CB28D test    al, al
//   0x3CB28F mov     edi, 8Ch
//   0x3CB294 cmovnz  rcx, [rbx+20h]
//   0x3CB299 xor     eax, eax
//   0x3CB29B call    qword ptr [r8]
//   0x3CB29E mov     eax, 1
//   0x3CB2A3 pop     rbx
//   0x3CB2A4 retn
//   0x3CB2A5 align 8
//   0x3CB2A8 xor     ecx, ecx
//   0x3CB2AA mov     eax, ecx
//   0x3CB2AC retn
// ============================================================

void sub_3CB250(/* signature unknown */)
{
    // see disassembly above
}

