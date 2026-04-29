// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x15690
// Name:           sub_15690
// Function size:  131 bytes (33 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x15690 push    rbx
//   0x15691 lea     rax, off_8BB08
//   0x15698 cmp     byte ptr [rdi+28h], 0
//   0x1569C mov     rbx, rdi
//   0x1569F mov     [rdi], rax
//   0x156A2 jz      short loc_156D8
//   0x156A4 mov     rax, [rdi+20h]
//   0x156A8 lea     rdx, s1
//   0x156AF cmp     qword ptr [rax+8], 0
//   0x156B4 jnz     short loc_15700
//   0x156B6 cmp     qword ptr [rbx+10h], 0
//   0x156BB lea     rsi, s1
//   0x156C2 jnz     short loc_156F0
//   0x156C4 mov     rcx, cs:callui_ptr
//   0x156CB mov     edi, 82h
//   0x156D0 xor     eax, eax
//   0x156D2 call    qword ptr [rcx]
//   0x156D4 mov     byte ptr [rbx+28h], 0
//   0x156D8 mov     rdi, [rbx+8]
//   0x156DC test    rdi, rdi
//   0x156DF jz      short loc_156EE
//   0x156E1 mov     qword ptr [rbx+10h], 0
//   0x156E9 call    _qfree
//   0x156EE pop     rbx
//   0x156EF retn
//   0x156F0 mov     rsi, [rbx+8]
//   0x156F4 jmp     short loc_156C4
//   0x156F6 align 20h
//   0x15700 cmp     qword ptr [rbx+10h], 0
//   0x15705 mov     rdx, [rax]
//   0x15708 lea     rsi, s1
//   0x1570F jz      short loc_156C4
//   0x15711 jmp     short loc_156F0
// ============================================================

void sub_15690(/* signature unknown */)
{
    // see disassembly above
}

