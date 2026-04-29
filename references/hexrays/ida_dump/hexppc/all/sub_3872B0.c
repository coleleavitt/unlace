// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3872B0
// Name:           sub_3872B0
// Function size:  83 bytes (29 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3872B0 mov     rax, [rdi+8]
//   0x3872B4 test    rax, rax
//   0x3872B7 jz      short loc_387300
//   0x3872B9 mov     r9, cs:callui_ptr
//   0x3872C0 xor     edx, edx
//   0x3872C2 test    esi, esi
//   0x3872C4 push    rbx
//   0x3872C5 setnz   dl
//   0x3872C8 mov     rbx, rdi
//   0x3872CB lea     rcx, [rdi+30h]
//   0x3872CF mov     rsi, rax
//   0x3872D2 lea     r8, [rdi+34h]
//   0x3872D6 xor     eax, eax
//   0x3872D8 mov     edi, 38h ; '8'
//   0x3872DD call    qword ptr [r9]
//   0x3872E0 test    rax, rax
//   0x3872E3 jz      short loc_3872F8
//   0x3872E5 mov     eax, [rax+0Ch]
//   0x3872E8 mov     [rbx+2Ch], eax
//   0x3872EB mov     eax, 1
//   0x3872F0 pop     rbx
//   0x3872F1 retn
//   0x3872F2 align 8
//   0x3872F8 xor     eax, eax
//   0x3872FA pop     rbx
//   0x3872FB retn
//   0x3872FC align 20h
//   0x387300 xor     eax, eax
//   0x387302 retn
// ============================================================

void sub_3872B0(/* signature unknown */)
{
    // see disassembly above
}

