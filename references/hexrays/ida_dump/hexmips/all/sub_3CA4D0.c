// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3CA4D0
// Name:           sub_3CA4D0
// Function size:  93 bytes (31 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3CA4D0 mov     rdx, [rsi+40h]
//   0x3CA4D4 test    rdx, rdx
//   0x3CA4D7 jz      short loc_3CA528
//   0x3CA4D9 mov     eax, [rdx+3Ch]
//   0x3CA4DC xor     ecx, ecx
//   0x3CA4DE sub     eax, 1
//   0x3CA4E1 cmp     eax, 1
//   0x3CA4E4 ja      short loc_3CA52A
//   0x3CA4E6 mov     rsi, [rdx+40h]
//   0x3CA4EA test    rsi, rsi
//   0x3CA4ED jz      short loc_3CA52A
//   0x3CA4EF push    rbx
//   0x3CA4F0 mov     rax, [rdi]
//   0x3CA4F3 mov     rbx, rdi
//   0x3CA4F6 call    qword ptr [rax+30h]
//   0x3CA4F9 mov     rcx, [rbx+28h]
//   0x3CA4FD mov     rsi, [rbx+18h]
//   0x3CA501 mov     edx, 1
//   0x3CA506 mov     r8, cs:callui_ptr
//   0x3CA50D test    al, al
//   0x3CA50F mov     edi, 8Ch
//   0x3CA514 cmovnz  rcx, [rbx+20h]
//   0x3CA519 xor     eax, eax
//   0x3CA51B call    qword ptr [r8]
//   0x3CA51E mov     eax, 1
//   0x3CA523 pop     rbx
//   0x3CA524 retn
//   0x3CA525 align 8
//   0x3CA528 xor     ecx, ecx
//   0x3CA52A mov     eax, ecx
//   0x3CA52C retn
// ============================================================

void sub_3CA4D0(/* signature unknown */)
{
    // see disassembly above
}

