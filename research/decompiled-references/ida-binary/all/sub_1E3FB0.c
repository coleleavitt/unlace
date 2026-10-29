// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x1E3FB0
// Name:           toggle_regclass_window_ah_t__::vfunc_0
// Function size:  154 bytes (42 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x1E3FB0 push    rbx
//   0x1E3FB1 sub     rsp, 10h
//   0x1E3FB5 mov     rbx, fs:28h
//   0x1E3FBE mov     [rsp+18h+var_10], rbx
//   0x1E3FC3 mov     rbx, rdi
//   0x1E3FC6 mov     rdi, [rsi+48h]
//   0x1E3FCA call    sub_534430
//   0x1E3FCF test    rax, rax
//   0x1E3FD2 jz      short loc_1E3FEA
//   0x1E3FD4 lea     rdx, [rsp+18h+var_11]
//   0x1E3FD9 mov     esi, 7
//   0x1E3FDE mov     rdi, rax
//   0x1E3FE1 call    sub_533460
//   0x1E3FE6 test    al, al
//   0x1E3FE8 jnz     short loc_1E4020
//   0x1E3FEA mov     edi, [rbx+0Ch]
//   0x1E3FED call    sub_1E2ED0
//   0x1E3FF2 test    rax, rax
//   0x1E3FF5 jz      short loc_1E4002
//   0x1E3FF7 mov     esi, [rbx+0Ch]
//   0x1E3FFA mov     rdi, rax; this
//   0x1E3FFD call    sub_1E3F30
//   0x1E4002 mov     rax, [rsp+18h+var_10]
//   0x1E4007 sub     rax, fs:28h
//   0x1E4010 jnz     short loc_1E4045
//   0x1E4012 add     rsp, 10h
//   0x1E4016 xor     eax, eax
//   0x1E4018 pop     rbx
//   0x1E4019 retn
//   0x1E401A align 20h
//   0x1E4020 cmp     [rsp+18h+var_11], 0
//   0x1E4025 jz      short loc_1E3FEA
//   0x1E4027 mov     edi, [rbx+0Ch]
//   0x1E402A call    sub_1E3BF0
//   0x1E402F test    rax, rax
//   0x1E4032 jz      short loc_1E4002
//   0x1E4034 xor     edx, edx
//   0x1E4036 mov     esi, 400004h
//   0x1E403B mov     rdi, rax
//   0x1E403E call    sub_2DE3A0
//   0x1E4043 jmp     short loc_1E4002
//   0x1E4045 call    ___stack_chk_fail
// ============================================================

void toggle_regclass_window_ah_t__::vfunc_0(/* signature unknown */)
{
    // see disassembly above
}

