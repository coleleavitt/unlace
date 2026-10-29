// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x4334D0
// Name:           file_history_action_t__::vfunc_0
// Function size:  58 bytes (23 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x4334D0 mov     rax, [rsi+8]
//   0x4334D4 push    r12
//   0x4334D6 push    rbp
//   0x4334D7 xor     ebp, ebp
//   0x4334D9 push    rbx
//   0x4334DA lea     r12, [rax+rax*2]
//   0x4334DE mov     rbx, [rsi]
//   0x4334E1 shl     r12, 4
//   0x4334E5 add     r12, rbx
//   0x4334E8 cmp     r12, rbx
//   0x4334EB jz      short loc_433503
//   0x4334ED nop     dword ptr [rax]
//   0x4334F0 mov     rdi, rbx
//   0x4334F3 add     rbx, 30h ; '0'
//   0x4334F7 call    sub_441240
//   0x4334FC or      ebp, eax
//   0x4334FE cmp     r12, rbx
//   0x433501 jnz     short loc_4334F0
//   0x433503 mov     eax, ebp
//   0x433505 pop     rbx
//   0x433506 pop     rbp
//   0x433507 pop     r12
//   0x433509 retn
// ============================================================

void file_history_action_t__::vfunc_0(/* signature unknown */)
{
    // see disassembly above
}

