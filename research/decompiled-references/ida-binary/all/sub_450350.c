// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x450350
// Name:           commits_chooser_t__::vfunc_2
// Function size:  61 bytes (18 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x450350 cmp     rsi, 1
//   0x450354 jbe     short loc_450360
//   0x450356 xor     eax, eax
//   0x450358 retn
//   0x450359 align 20h
//   0x450360 sub     rsp, 8
//   0x450364 lea     rdi, aCommits+1; src
//   0x45036B call    sub_4A0300
//   0x450370 test    rax, rax
//   0x450373 jz      short loc_450386
//   0x450375 xor     ecx, ecx
//   0x450377 mov     edx, 7
//   0x45037C xor     esi, esi
//   0x45037E mov     rdi, rax
//   0x450381 call    sub_4A4600
//   0x450386 xor     eax, eax
//   0x450388 add     rsp, 8
//   0x45038C retn
// ============================================================

void commits_chooser_t__::vfunc_2(/* signature unknown */)
{
    // see disassembly above
}

