// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3C7AD0
// Name:           sub_3C7AD0
// Function size:  93 bytes (31 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3C7AD0 mov     rdx, [rsi+40h]
//   0x3C7AD4 test    rdx, rdx
//   0x3C7AD7 jz      short loc_3C7B28
//   0x3C7AD9 mov     eax, [rdx+3Ch]
//   0x3C7ADC xor     ecx, ecx
//   0x3C7ADE sub     eax, 1
//   0x3C7AE1 cmp     eax, 1
//   0x3C7AE4 ja      short loc_3C7B2A
//   0x3C7AE6 mov     rsi, [rdx+40h]
//   0x3C7AEA test    rsi, rsi
//   0x3C7AED jz      short loc_3C7B2A
//   0x3C7AEF push    rbx
//   0x3C7AF0 mov     rax, [rdi]
//   0x3C7AF3 mov     rbx, rdi
//   0x3C7AF6 call    qword ptr [rax+30h]
//   0x3C7AF9 mov     rcx, [rbx+28h]
//   0x3C7AFD mov     rsi, [rbx+18h]
//   0x3C7B01 mov     edx, 1
//   0x3C7B06 mov     r8, cs:callui_ptr
//   0x3C7B0D test    al, al
//   0x3C7B0F mov     edi, 8Ch
//   0x3C7B14 cmovnz  rcx, [rbx+20h]
//   0x3C7B19 xor     eax, eax
//   0x3C7B1B call    qword ptr [r8]
//   0x3C7B1E mov     eax, 1
//   0x3C7B23 pop     rbx
//   0x3C7B24 retn
//   0x3C7B25 align 8
//   0x3C7B28 xor     ecx, ecx
//   0x3C7B2A mov     eax, ecx
//   0x3C7B2C retn
// ============================================================

void sub_3C7AD0(/* signature unknown */)
{
    // see disassembly above
}

