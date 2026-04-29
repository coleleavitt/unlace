// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0xF3B20
// Name:           sub_F3B20
// Function size:  114 bytes (39 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0xF3B20 push    r13
//   0xF3B22 mov     r13, rdi
//   0xF3B25 push    r12
//   0xF3B27 mov     r12, rsi
//   0xF3B2A push    rbp
//   0xF3B2B xor     ebp, ebp
//   0xF3B2D push    rbx
//   0xF3B2E xor     ebx, ebx
//   0xF3B30 sub     rsp, 8
//   0xF3B34 mov     eax, [rdi+40h]
//   0xF3B37 test    eax, eax
//   0xF3B39 jg      short loc_F3B48
//   0xF3B3B jmp     short loc_F3B6B
//   0xF3B3D align 20h
//   0xF3B40 add     rbx, 1
//   0xF3B44 cmp     ebx, eax
//   0xF3B46 jnb     short loc_F3B78
//   0xF3B48 mov     rax, [r13+210h]
//   0xF3B4F mov     rsi, r12
//   0xF3B52 mov     rdi, [rax+rbx*8]
//   0xF3B56 call    sub_16AC40
//   0xF3B5B lea     edx, [rbx+1]
//   0xF3B5E movzx   eax, al
//   0xF3B61 add     ebp, eax
//   0xF3B63 mov     eax, [r13+40h]
//   0xF3B67 cmp     eax, edx
//   0xF3B69 jg      short loc_F3B40
//   0xF3B6B add     rsp, 8
//   0xF3B6F mov     eax, ebp
//   0xF3B71 pop     rbx
//   0xF3B72 pop     rbp
//   0xF3B73 pop     r12
//   0xF3B75 pop     r13
//   0xF3B77 retn
//   0xF3B78 mov     rax, cs:under_debugger_ptr
//   0xF3B7F cmp     byte ptr [rax], 0
//   0xF3B82 jnz     loc_34112
//   0xF3B88 mov     edi, 0CDEFh
//   0xF3B8D call    sub_37DDE0
// ============================================================

void sub_F3B20(/* signature unknown */)
{
    // see disassembly above
}

