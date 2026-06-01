// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x450BB0
// Name:           commits_chooser_t__::vfunc_22
// Function size:  61 bytes (18 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x450BB0 cmp     rsi, 1
//   0x450BB4 jbe     short loc_450BC0
//   0x450BB6 xor     eax, eax
//   0x450BB8 retn
//   0x450BB9 align 20h
//   0x450BC0 sub     rsp, 8
//   0x450BC4 lea     rdi, aCommits+1; src
//   0x450BCB call    sub_4A0300
//   0x450BD0 test    rax, rax
//   0x450BD3 jz      short loc_450BE6
//   0x450BD5 xor     ecx, ecx
//   0x450BD7 mov     edx, 7
//   0x450BDC xor     esi, esi
//   0x450BDE mov     rdi, rax
//   0x450BE1 call    sub_4A4600
//   0x450BE6 xor     eax, eax
//   0x450BE8 add     rsp, 8
//   0x450BEC retn
// ============================================================

void commits_chooser_t__::vfunc_22(/* signature unknown */)
{
    // see disassembly above
}

