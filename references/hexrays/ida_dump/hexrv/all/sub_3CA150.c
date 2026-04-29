// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3CA150
// Name:           sub_3CA150
// Function size:  93 bytes (31 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3CA150 mov     rdx, [rsi+40h]
//   0x3CA154 test    rdx, rdx
//   0x3CA157 jz      short loc_3CA1A8
//   0x3CA159 mov     eax, [rdx+3Ch]
//   0x3CA15C xor     ecx, ecx
//   0x3CA15E sub     eax, 1
//   0x3CA161 cmp     eax, 1
//   0x3CA164 ja      short loc_3CA1AA
//   0x3CA166 mov     rsi, [rdx+40h]
//   0x3CA16A test    rsi, rsi
//   0x3CA16D jz      short loc_3CA1AA
//   0x3CA16F push    rbx
//   0x3CA170 mov     rax, [rdi]
//   0x3CA173 mov     rbx, rdi
//   0x3CA176 call    qword ptr [rax+30h]
//   0x3CA179 mov     rcx, [rbx+28h]
//   0x3CA17D mov     rsi, [rbx+18h]
//   0x3CA181 mov     edx, 1
//   0x3CA186 mov     r8, cs:callui_ptr
//   0x3CA18D test    al, al
//   0x3CA18F mov     edi, 8Ch
//   0x3CA194 cmovnz  rcx, [rbx+20h]
//   0x3CA199 xor     eax, eax
//   0x3CA19B call    qword ptr [r8]
//   0x3CA19E mov     eax, 1
//   0x3CA1A3 pop     rbx
//   0x3CA1A4 retn
//   0x3CA1A5 align 8
//   0x3CA1A8 xor     ecx, ecx
//   0x3CA1AA mov     eax, ecx
//   0x3CA1AC retn
// ============================================================

void sub_3CA150(/* signature unknown */)
{
    // see disassembly above
}

