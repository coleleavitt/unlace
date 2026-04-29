// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0xF3DE0
// Name:           sub_F3DE0
// Function size:  114 bytes (39 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0xF3DE0 push    r13
//   0xF3DE2 mov     r13, rdi
//   0xF3DE5 push    r12
//   0xF3DE7 mov     r12, rsi
//   0xF3DEA push    rbp
//   0xF3DEB xor     ebp, ebp
//   0xF3DED push    rbx
//   0xF3DEE xor     ebx, ebx
//   0xF3DF0 sub     rsp, 8
//   0xF3DF4 mov     eax, [rdi+40h]
//   0xF3DF7 test    eax, eax
//   0xF3DF9 jg      short loc_F3E08
//   0xF3DFB jmp     short loc_F3E2B
//   0xF3DFD align 20h
//   0xF3E00 add     rbx, 1
//   0xF3E04 cmp     ebx, eax
//   0xF3E06 jnb     short loc_F3E38
//   0xF3E08 mov     rax, [r13+210h]
//   0xF3E0F mov     rsi, r12
//   0xF3E12 mov     rdi, [rax+rbx*8]
//   0xF3E16 call    sub_16AF00
//   0xF3E1B lea     edx, [rbx+1]
//   0xF3E1E movzx   eax, al
//   0xF3E21 add     ebp, eax
//   0xF3E23 mov     eax, [r13+40h]
//   0xF3E27 cmp     eax, edx
//   0xF3E29 jg      short loc_F3E00
//   0xF3E2B add     rsp, 8
//   0xF3E2F mov     eax, ebp
//   0xF3E31 pop     rbx
//   0xF3E32 pop     rbp
//   0xF3E33 pop     r12
//   0xF3E35 pop     r13
//   0xF3E37 retn
//   0xF3E38 mov     rax, cs:under_debugger_ptr
//   0xF3E3F cmp     byte ptr [rax], 0
//   0xF3E42 jnz     loc_34112
//   0xF3E48 mov     edi, 0CDEFh
//   0xF3E4D call    sub_37E160
// ============================================================

void sub_F3DE0(/* signature unknown */)
{
    // see disassembly above
}

