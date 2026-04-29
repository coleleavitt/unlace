// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0xF45A0
// Name:           sub_F45A0
// Function size:  114 bytes (39 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0xF45A0 push    r13
//   0xF45A2 mov     r13, rdi
//   0xF45A5 push    r12
//   0xF45A7 mov     r12, rsi
//   0xF45AA push    rbp
//   0xF45AB xor     ebp, ebp
//   0xF45AD push    rbx
//   0xF45AE xor     ebx, ebx
//   0xF45B0 sub     rsp, 8
//   0xF45B4 mov     eax, [rdi+40h]
//   0xF45B7 test    eax, eax
//   0xF45B9 jg      short loc_F45C8
//   0xF45BB jmp     short loc_F45EB
//   0xF45BD align 20h
//   0xF45C0 add     rbx, 1
//   0xF45C4 cmp     ebx, eax
//   0xF45C6 jnb     short loc_F45F8
//   0xF45C8 mov     rax, [r13+210h]
//   0xF45CF mov     rsi, r12
//   0xF45D2 mov     rdi, [rax+rbx*8]
//   0xF45D6 call    sub_16B6C0
//   0xF45DB lea     edx, [rbx+1]
//   0xF45DE movzx   eax, al
//   0xF45E1 add     ebp, eax
//   0xF45E3 mov     eax, [r13+40h]
//   0xF45E7 cmp     eax, edx
//   0xF45E9 jg      short loc_F45C0
//   0xF45EB add     rsp, 8
//   0xF45EF mov     eax, ebp
//   0xF45F1 pop     rbx
//   0xF45F2 pop     rbp
//   0xF45F3 pop     r12
//   0xF45F5 pop     r13
//   0xF45F7 retn
//   0xF45F8 mov     rax, cs:under_debugger_ptr
//   0xF45FF cmp     byte ptr [rax], 0
//   0xF4602 jnz     loc_34112
//   0xF4608 mov     edi, 0CDEFh
//   0xF460D call    sub_37EEE0
// ============================================================

void sub_F45A0(/* signature unknown */)
{
    // see disassembly above
}

