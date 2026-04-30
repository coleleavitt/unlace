// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x193340
// Name:           sub_193340
// Function size:  70 bytes (20 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x193340 push    rbx
//   0x193341 lea     rax, qword_8CC800
//   0x193348 mov     edi, 3FDh
//   0x19334D mov     rbx, [rax+10h]
//   0x193351 call    _itext
//   0x193356 mov     rdi, rax
//   0x193359 mov     rsi, rbx
//   0x19335C call    sub_3241A0
//   0x193361 mov     edx, 1
//   0x193366 test    rax, rax
//   0x193369 jz      short loc_193382
//   0x19336B mov     rsi, [rax]
//   0x19336E mov     edx, 0FFFFFFFFh
//   0x193373 mov     ecx, 1
//   0x193378 xor     edi, edi
//   0x19337A call    sub_192AA0
//   0x19337F movzx   edx, al
//   0x193382 mov     eax, edx
//   0x193384 pop     rbx
//   0x193385 retn
// ============================================================

void sub_193340(/* signature unknown */)
{
    // see disassembly above
}

