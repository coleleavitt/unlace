// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3853B0
// Name:           sub_3853B0
// Function size:  83 bytes (29 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3853B0 mov     rax, [rdi+8]
//   0x3853B4 test    rax, rax
//   0x3853B7 jz      short loc_385400
//   0x3853B9 mov     r9, cs:callui_ptr
//   0x3853C0 xor     edx, edx
//   0x3853C2 test    esi, esi
//   0x3853C4 push    rbx
//   0x3853C5 setnz   dl
//   0x3853C8 mov     rbx, rdi
//   0x3853CB lea     rcx, [rdi+30h]
//   0x3853CF mov     rsi, rax
//   0x3853D2 lea     r8, [rdi+34h]
//   0x3853D6 xor     eax, eax
//   0x3853D8 mov     edi, 38h ; '8'
//   0x3853DD call    qword ptr [r9]
//   0x3853E0 test    rax, rax
//   0x3853E3 jz      short loc_3853F8
//   0x3853E5 mov     eax, [rax+0Ch]
//   0x3853E8 mov     [rbx+2Ch], eax
//   0x3853EB mov     eax, 1
//   0x3853F0 pop     rbx
//   0x3853F1 retn
//   0x3853F2 align 8
//   0x3853F8 xor     eax, eax
//   0x3853FA pop     rbx
//   0x3853FB retn
//   0x3853FC align 20h
//   0x385400 xor     eax, eax
//   0x385402 retn
// ============================================================

void sub_3853B0(/* signature unknown */)
{
    // see disassembly above
}

