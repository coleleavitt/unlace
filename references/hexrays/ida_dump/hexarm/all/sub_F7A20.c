// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0xF7A20
// Name:           sub_F7A20
// Function size:  114 bytes (39 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0xF7A20 push    r13
//   0xF7A22 mov     r13, rdi
//   0xF7A25 push    r12
//   0xF7A27 mov     r12, rsi
//   0xF7A2A push    rbp
//   0xF7A2B xor     ebp, ebp
//   0xF7A2D push    rbx
//   0xF7A2E xor     ebx, ebx
//   0xF7A30 sub     rsp, 8
//   0xF7A34 mov     eax, [rdi+40h]
//   0xF7A37 test    eax, eax
//   0xF7A39 jg      short loc_F7A48
//   0xF7A3B jmp     short loc_F7A6B
//   0xF7A3D align 20h
//   0xF7A40 add     rbx, 1
//   0xF7A44 cmp     ebx, eax
//   0xF7A46 jnb     short loc_F7A78
//   0xF7A48 mov     rax, [r13+210h]
//   0xF7A4F mov     rsi, r12
//   0xF7A52 mov     rdi, [rax+rbx*8]
//   0xF7A56 call    sub_16EB40
//   0xF7A5B lea     edx, [rbx+1]
//   0xF7A5E movzx   eax, al
//   0xF7A61 add     ebp, eax
//   0xF7A63 mov     eax, [r13+40h]
//   0xF7A67 cmp     eax, edx
//   0xF7A69 jg      short loc_F7A40
//   0xF7A6B add     rsp, 8
//   0xF7A6F mov     eax, ebp
//   0xF7A71 pop     rbx
//   0xF7A72 pop     rbp
//   0xF7A73 pop     r12
//   0xF7A75 pop     r13
//   0xF7A77 retn
//   0xF7A78 mov     rax, cs:under_debugger_ptr
//   0xF7A7F cmp     byte ptr [rax], 0
//   0xF7A82 jnz     loc_37152
//   0xF7A88 mov     edi, 0CDEFh
//   0xF7A8D call    sub_3835A0
// ============================================================

void sub_F7A20(/* signature unknown */)
{
    // see disassembly above
}

