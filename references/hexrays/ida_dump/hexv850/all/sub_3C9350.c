// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3C9350
// Name:           sub_3C9350
// Function size:  93 bytes (31 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3C9350 mov     rdx, [rsi+40h]
//   0x3C9354 test    rdx, rdx
//   0x3C9357 jz      short loc_3C93A8
//   0x3C9359 mov     eax, [rdx+3Ch]
//   0x3C935C xor     ecx, ecx
//   0x3C935E sub     eax, 1
//   0x3C9361 cmp     eax, 1
//   0x3C9364 ja      short loc_3C93AA
//   0x3C9366 mov     rsi, [rdx+40h]
//   0x3C936A test    rsi, rsi
//   0x3C936D jz      short loc_3C93AA
//   0x3C936F push    rbx
//   0x3C9370 mov     rax, [rdi]
//   0x3C9373 mov     rbx, rdi
//   0x3C9376 call    qword ptr [rax+30h]
//   0x3C9379 mov     rcx, [rbx+28h]
//   0x3C937D mov     rsi, [rbx+18h]
//   0x3C9381 mov     edx, 1
//   0x3C9386 mov     r8, cs:callui_ptr
//   0x3C938D test    al, al
//   0x3C938F mov     edi, 8Ch
//   0x3C9394 cmovnz  rcx, [rbx+20h]
//   0x3C9399 xor     eax, eax
//   0x3C939B call    qword ptr [r8]
//   0x3C939E mov     eax, 1
//   0x3C93A3 pop     rbx
//   0x3C93A4 retn
//   0x3C93A5 align 8
//   0x3C93A8 xor     ecx, ecx
//   0x3C93AA mov     eax, ecx
//   0x3C93AC retn
// ============================================================

void sub_3C9350(/* signature unknown */)
{
    // see disassembly above
}

