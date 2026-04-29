// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x383B30
// Name:           sub_383B30
// Function size:  83 bytes (29 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x383B30 mov     rax, [rdi+8]
//   0x383B34 test    rax, rax
//   0x383B37 jz      short loc_383B80
//   0x383B39 mov     r9, cs:callui_ptr
//   0x383B40 xor     edx, edx
//   0x383B42 test    esi, esi
//   0x383B44 push    rbx
//   0x383B45 setnz   dl
//   0x383B48 mov     rbx, rdi
//   0x383B4B lea     rcx, [rdi+30h]
//   0x383B4F mov     rsi, rax
//   0x383B52 lea     r8, [rdi+34h]
//   0x383B56 xor     eax, eax
//   0x383B58 mov     edi, 38h ; '8'
//   0x383B5D call    qword ptr [r9]
//   0x383B60 test    rax, rax
//   0x383B63 jz      short loc_383B78
//   0x383B65 mov     eax, [rax+0Ch]
//   0x383B68 mov     [rbx+2Ch], eax
//   0x383B6B mov     eax, 1
//   0x383B70 pop     rbx
//   0x383B71 retn
//   0x383B72 align 8
//   0x383B78 xor     eax, eax
//   0x383B7A pop     rbx
//   0x383B7B retn
//   0x383B7C align 20h
//   0x383B80 xor     eax, eax
//   0x383B82 retn
// ============================================================

void sub_383B30(/* signature unknown */)
{
    // see disassembly above
}

