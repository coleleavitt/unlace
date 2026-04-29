// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x17E30
// Name:           sub_17E30
// Function size:  229 bytes (52 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x17E30 push    rbx
//   0x17E31 cmp     byte ptr [rdi+8], 0
//   0x17E35 mov     rbx, rdi
//   0x17E38 jnz     short loc_17E88
//   0x17E3A lea     rdi, [rbx+0ED8h]
//   0x17E41 call    sub_6D1D0
//   0x17E46 lea     rdi, [rbx+0E30h]
//   0x17E4D call    sub_6D1D0
//   0x17E52 lea     rdi, [rbx+0D88h]
//   0x17E59 call    sub_6D1D0
//   0x17E5E lea     rdi, [rbx+0CE0h]
//   0x17E65 call    sub_6D1D0
//   0x17E6A lea     rdi, [rbx+0C30h]
//   0x17E71 call    sub_6D1D0
//   0x17E76 cmp     byte ptr [rbx+0C18h], 0
//   0x17E7D jnz     short loc_17EB0
//   0x17E7F pop     rbx
//   0x17E80 retn
//   0x17E81 align 8
//   0x17E88 call    _get_hexdsp
//   0x17E8D mov     rcx, rax
//   0x17E90 test    rax, rax
//   0x17E93 jz      short loc_17EA8
//   0x17E95 mov     rdx, rbx
//   0x17E98 lea     rsi, sub_14200
//   0x17E9F mov     edi, 23Fh
//   0x17EA4 xor     eax, eax
//   0x17EA6 call    rcx
//   0x17EA8 mov     byte ptr [rbx+8], 0
//   0x17EAC jmp     short loc_17E3A
//   0x17EAE align 10h
//   0x17EB0 mov     rax, [rbx+0C10h]
//   0x17EB7 lea     rdx, s1
//   0x17EBE cmp     qword ptr [rax+8], 0
//   0x17EC3 jnz     short loc_17F10
//   0x17EC5 cmp     qword ptr [rbx+0C00h], 0
//   0x17ECD lea     rsi, s1
//   0x17ED4 jnz     short loc_17F00
//   0x17ED6 mov     rcx, cs:callui_ptr
//   0x17EDD mov     edi, 82h
//   0x17EE2 xor     eax, eax
//   0x17EE4 call    qword ptr [rcx]
//   0x17EE6 mov     byte ptr [rbx+0C18h], 0
//   0x17EED lea     rdi, [rbx+0B50h]
//   0x17EF4 pop     rbx
//   0x17EF5 jmp     sub_6D1D0
//   0x17EFA align 20h
//   0x17F00 mov     rsi, [rbx+0BF8h]
//   0x17F07 jmp     short loc_17ED6
//   0x17F09 align 10h
//   0x17F10 mov     rdx, [rax]
//   0x17F13 jmp     short loc_17EC5
// ============================================================

void sub_17E30(/* signature unknown */)
{
    // see disassembly above
}

