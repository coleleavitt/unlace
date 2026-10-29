// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x1C8370
// Name:           sub_1C8370
// Function size:  84 bytes (25 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x1C8370 push    rbx; __int64
//   0x1C8371 mov     rbx, rdi
//   0x1C8374 call    sub_4A0300
//   0x1C8379 test    rax, rax
//   0x1C837C jz      short loc_1C83A0
//   0x1C837E xor     ecx, ecx
//   0x1C8380 mov     edx, 7
//   0x1C8385 xor     esi, esi
//   0x1C8387 mov     rdi, rax
//   0x1C838A call    sub_4A4600
//   0x1C838F mov     edx, 1
//   0x1C8394 mov     eax, edx
//   0x1C8396 pop     rbx
//   0x1C8397 retn
//   0x1C8398 align 20h
//   0x1C83A0 mov     rdi, rbx
//   0x1C83A3 call    sub_5210D0
//   0x1C83A8 xor     edx, edx
//   0x1C83AA test    rax, rax
//   0x1C83AD jz      short loc_1C8394
//   0x1C83AF lea     rdi, [rax+130h]
//   0x1C83B6 xor     edx, edx
//   0x1C83B8 mov     esi, 7
//   0x1C83BD call    sub_4E4640
//   0x1C83C2 jmp     short loc_1C838F
// ============================================================

void sub_1C8370(/* signature unknown */)
{
    // see disassembly above
}

