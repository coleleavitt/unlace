// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3D2E40
// Name:           sub_3D2E40
// Function size:  184 bytes (44 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3D2E40 push    r13; int
//   0x3D2E42 push    r12; int
//   0x3D2E44 push    rbp; int
//   0x3D2E45 mov     rbp, rsi
//   0x3D2E48 push    rbx; int
//   0x3D2E49 mov     rbx, rdi
//   0x3D2E4C add     rdi, 460h; int
//   0x3D2E53 sub     rsp, 28h
//   0x3D2E57 mov     r12, fs:28h
//   0x3D2E60 mov     qword ptr [rsp+48h+var_30], r12; int
//   0x3D2E65 mov     r12, rdx
//   0x3D2E68 mov     qword ptr [rsp+48h+var_48], rsi; int
//   0x3D2E6C mov     rsi, rsp; int
//   0x3D2E6F mov     qword ptr [rsp+48h+var_40], rdx; int
//   0x3D2E74 call    _rangeset_t_sub
//   0x3D2E79 test    al, al
//   0x3D2E7B jnz     short loc_3D2EA0
//   0x3D2E7D mov     rax, qword ptr [rsp+48h+var_30]
//   0x3D2E82 sub     rax, fs:28h
//   0x3D2E8B jnz     short loc_3D2EF3
//   0x3D2E8D add     rsp, 28h
//   0x3D2E91 xor     eax, eax
//   0x3D2E93 pop     rbx
//   0x3D2E94 pop     rbp
//   0x3D2E95 pop     r12
//   0x3D2E97 pop     r13
//   0x3D2E99 retn
//   0x3D2E9A align 20h
//   0x3D2EA0 mov     byte ptr [rbx+4B0h], 1
//   0x3D2EA7 mov     rcx, r12
//   0x3D2EAA mov     rdx, rbp
//   0x3D2EAD mov     rdi, rbx
//   0x3D2EB0 lea     rsi, [rbx+3B8h]
//   0x3D2EB7 mov     r8d, 0A1h
//   0x3D2EBD mov     qword ptr [rbx+4B8h], 0FFFFFFFFFFFFFFFFh
//   0x3D2EC8 call    sub_3D2D40
//   0x3D2ECD lea     rdi, [rbx+488h]; int
//   0x3D2ED4 mov     rsi, rsp; int
//   0x3D2ED7 call    _rangeset_t_sub
//   0x3D2EDC cmp     qword ptr [rbx+408h], 0FFFFFFFFFFFFFFFFh
//   0x3D2EE4 jnz     short loc_3D2E7D
//   0x3D2EE6 mov     qword ptr [rbx+400h], 0FFFFFFFFFFFFFFFFh
//   0x3D2EF1 jmp     short loc_3D2E7D
//   0x3D2EF3 call    ___stack_chk_fail
// ============================================================

void sub_3D2E40(/* signature unknown */)
{
    // see disassembly above
}

