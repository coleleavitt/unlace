// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0xF7FE0
// Name:           sub_F7FE0
// Function size:  114 bytes (39 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0xF7FE0 push    r13
//   0xF7FE2 mov     r13, rdi
//   0xF7FE5 push    r12
//   0xF7FE7 mov     r12, rsi
//   0xF7FEA push    rbp
//   0xF7FEB xor     ebp, ebp
//   0xF7FED push    rbx
//   0xF7FEE xor     ebx, ebx
//   0xF7FF0 sub     rsp, 8
//   0xF7FF4 mov     eax, [rdi+40h]
//   0xF7FF7 test    eax, eax
//   0xF7FF9 jg      short loc_F8008
//   0xF7FFB jmp     short loc_F802B
//   0xF7FFD align 20h
//   0xF8000 add     rbx, 1
//   0xF8004 cmp     ebx, eax
//   0xF8006 jnb     short loc_F8038
//   0xF8008 mov     rax, [r13+210h]
//   0xF800F mov     rsi, r12
//   0xF8012 mov     rdi, [rax+rbx*8]
//   0xF8016 call    sub_16F100
//   0xF801B lea     edx, [rbx+1]
//   0xF801E movzx   eax, al
//   0xF8021 add     ebp, eax
//   0xF8023 mov     eax, [r13+40h]
//   0xF8027 cmp     eax, edx
//   0xF8029 jg      short loc_F8000
//   0xF802B add     rsp, 8
//   0xF802F mov     eax, ebp
//   0xF8031 pop     rbx
//   0xF8032 pop     rbp
//   0xF8033 pop     r12
//   0xF8035 pop     r13
//   0xF8037 retn
//   0xF8038 mov     rax, cs:under_debugger_ptr
//   0xF803F cmp     byte ptr [rax], 0
//   0xF8042 jnz     loc_35292
//   0xF8048 mov     edi, 0CDEFh
//   0xF804D call    sub_383060
// ============================================================

void sub_F7FE0(/* signature unknown */)
{
    // see disassembly above
}

