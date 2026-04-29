// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x6D1D0
// Name:           sub_6D1D0
// Function size:  62 bytes (17 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x6D1D0 push    rbx
//   0x6D1D1 cmp     byte ptr [rdi+98h], 0
//   0x6D1D8 mov     rbx, rdi
//   0x6D1DB jz      short loc_6D1FB
//   0x6D1DD cmp     qword ptr [rdi+18h], 0
//   0x6D1E2 lea     rsi, s1
//   0x6D1E9 jnz     short loc_6D208
//   0x6D1EB mov     rdx, cs:callui_ptr
//   0x6D1F2 mov     edi, 80h
//   0x6D1F7 xor     eax, eax
//   0x6D1F9 call    qword ptr [rdx]
//   0x6D1FB mov     byte ptr [rbx+98h], 0
//   0x6D202 pop     rbx
//   0x6D203 retn
//   0x6D204 align 8
//   0x6D208 mov     rsi, [rdi+10h]
//   0x6D20C jmp     short loc_6D1EB
// ============================================================

void sub_6D1D0(/* signature unknown */)
{
    // see disassembly above
}

