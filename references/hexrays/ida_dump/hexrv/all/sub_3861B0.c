// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3861B0
// Name:           sub_3861B0
// Function size:  83 bytes (29 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3861B0 mov     rax, [rdi+8]
//   0x3861B4 test    rax, rax
//   0x3861B7 jz      short loc_386200
//   0x3861B9 mov     r9, cs:callui_ptr
//   0x3861C0 xor     edx, edx
//   0x3861C2 test    esi, esi
//   0x3861C4 push    rbx
//   0x3861C5 setnz   dl
//   0x3861C8 mov     rbx, rdi
//   0x3861CB lea     rcx, [rdi+30h]
//   0x3861CF mov     rsi, rax
//   0x3861D2 lea     r8, [rdi+34h]
//   0x3861D6 xor     eax, eax
//   0x3861D8 mov     edi, 38h ; '8'
//   0x3861DD call    qword ptr [r9]
//   0x3861E0 test    rax, rax
//   0x3861E3 jz      short loc_3861F8
//   0x3861E5 mov     eax, [rax+0Ch]
//   0x3861E8 mov     [rbx+2Ch], eax
//   0x3861EB mov     eax, 1
//   0x3861F0 pop     rbx
//   0x3861F1 retn
//   0x3861F2 align 8
//   0x3861F8 xor     eax, eax
//   0x3861FA pop     rbx
//   0x3861FB retn
//   0x3861FC align 20h
//   0x386200 xor     eax, eax
//   0x386202 retn
// ============================================================

void sub_3861B0(/* signature unknown */)
{
    // see disassembly above
}

