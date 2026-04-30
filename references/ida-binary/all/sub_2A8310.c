// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x2A8310
// Name:           _ZL23colorize_selected_nodesP16IDAGraphRendererjE9visitor_t_::vfunc_0
// Function size:  48 bytes (14 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x2A8310 push    rbx
//   0x2A8311 mov     rbx, rdi
//   0x2A8314 mov     rdi, [rdi+8]
//   0x2A8318 mov     edx, [rsi+4]
//   0x2A831B lea     rcx, [rbx+18h]
//   0x2A831F mov     rsi, [rdi+1B8h]
//   0x2A8326 test    rsi, rsi
//   0x2A8329 jz      short loc_2A832F
//   0x2A832B mov     rsi, [rsi+8]
//   0x2A832F mov     r8d, 1
//   0x2A8335 call    sub_2B54C0
//   0x2A833A add     dword ptr [rbx+10h], 1
//   0x2A833E pop     rbx
//   0x2A833F retn
// ============================================================

void _ZL23colorize_selected_nodesP16IDAGraphRendererjE9visitor_t_::vfunc_0(/* signature unknown */)
{
    // see disassembly above
}

