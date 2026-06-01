// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x28C0B0
// Name:           sub_28C0B0
// Function size:  120 bytes (33 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x28C0B0 push    rbp
//   0x28C0B1 push    rbx
//   0x28C0B2 sub     rsp, 18h
//   0x28C0B6 mov     rbx, fs:28h
//   0x28C0BF mov     [rsp+28h+var_20], rbx
//   0x28C0C4 mov     rbx, rdi
//   0x28C0C7 call    sub_28E2E0
//   0x28C0CC mov     rbp, rax
//   0x28C0CF xor     eax, eax
//   0x28C0D1 test    rbp, rbp
//   0x28C0D4 jz      short loc_28C10C
//   0x28C0D6 mov     rdi, [rbx+48h]
//   0x28C0DA call    sub_534430
//   0x28C0DF test    rax, rax
//   0x28C0E2 jz      short loc_28C107
//   0x28C0E4 lea     rdx, [rsp+28h+var_21]
//   0x28C0E9 mov     esi, 7
//   0x28C0EE mov     rdi, rax
//   0x28C0F1 call    sub_533460
//   0x28C0F6 test    al, al
//   0x28C0F8 jz      short loc_28C107
//   0x28C0FA movzx   esi, [rsp+28h+var_21]
//   0x28C0FF mov     rdi, rbp; this
//   0x28C102 call    sub_28D640
//   0x28C107 mov     eax, 1
//   0x28C10C mov     rdx, [rsp+28h+var_20]
//   0x28C111 sub     rdx, fs:28h
//   0x28C11A jnz     short loc_28C123
//   0x28C11C add     rsp, 18h
//   0x28C120 pop     rbx
//   0x28C121 pop     rbp
//   0x28C122 retn
//   0x28C123 call    ___stack_chk_fail
// ============================================================

void sub_28C0B0(/* signature unknown */)
{
    // see disassembly above
}

