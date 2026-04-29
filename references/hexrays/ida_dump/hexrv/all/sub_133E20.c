// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x133E20
// Name:           sub_133E20
// Function size:  351 bytes (87 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x133E20 push    rbp
//   0x133E21 push    rbx
//   0x133E22 mov     rbx, rdi
//   0x133E25 sub     rsp, 8
//   0x133E29 cmp     dword ptr [rdi+138h], 1
//   0x133E30 jle     short loc_133E50
//   0x133E32 or      dword ptr [rdi], 200h
//   0x133E38 xor     ebp, ebp
//   0x133E3A mov     rdi, rbx
//   0x133E3D mov     esi, 1
//   0x133E42 call    sub_31CDD0
//   0x133E47 add     rsp, 8
//   0x133E4B mov     eax, ebp
//   0x133E4D pop     rbx
//   0x133E4E pop     rbp
//   0x133E4F retn
//   0x133E50 lea     rdx, aBeforePreoptim; "before preoptimize"
//   0x133E57 mov     esi, 1
//   0x133E5C xor     eax, eax
//   0x133E5E call    sub_62C20
//   0x133E63 mov     rdi, rbx
//   0x133E66 call    nullsub_182
//   0x133E6B mov     rbp, [rbx+208h]
//   0x133E72 test    rbp, rbp
//   0x133E75 jz      short loc_133E91
//   0x133E77 nop     word ptr [rax+rax+00000000h]
//   0x133E80 mov     rdi, rbp
//   0x133E83 call    sub_B1E00
//   0x133E88 mov     rbp, [rbp+8]
//   0x133E8C test    rbp, rbp
//   0x133E8F jnz     short loc_133E80
//   0x133E91 mov     rdi, rbx
//   0x133E94 call    sub_A2900
//   0x133E99 mov     rdi, rbx
//   0x133E9C call    sub_A2C70
//   0x133EA1 or      dword ptr [rbx], 200h
//   0x133EA7 mov     rdi, rbx
//   0x133EAA xor     eax, eax
//   0x133EAC lea     rdx, aAfterPreoptimi; "after preoptimize"
//   0x133EB3 mov     esi, 1
//   0x133EB8 call    sub_62C20
//   0x133EBD mov     rdi, rbx
//   0x133EC0 call    sub_9C490
//   0x133EC5 test    eax, eax
//   0x133EC7 jnz     short loc_133F30
//   0x133EC9 mov     rdi, [rbx+3A0h]
//   0x133ED0 test    rdi, rdi
//   0x133ED3 jz      short loc_133F50
//   0x133ED5 call    sub_19B750
//   0x133EDA lea     rdx, nullsub_75
//   0x133EE1 mov     [rbx+3A8h], rax
//   0x133EE8 mov     rdi, rax
//   0x133EEB mov     rax, [rax]
//   0x133EEE mov     rax, [rax+10h]
//   0x133EF2 cmp     rax, rdx
//   0x133EF5 jnz     loc_133F78
//   0x133EFB mov     rdi, [rbx+5D8h]
//   0x133F02 mov     rdx, rbx
//   0x133F05 mov     esi, 4
//   0x133F0A xor     eax, eax
//   0x133F0C call    sub_338EA0
//   0x133F11 mov     ebp, eax
//   0x133F13 test    eax, eax
//   0x133F15 jnz     loc_133E3A
//   0x133F1B mov     esi, 2
//   0x133F20 mov     rdi, rbx
//   0x133F23 call    sub_32BB40
//   0x133F28 mov     ebp, eax
//   0x133F2A jmp     loc_133E3A
//   0x133F2F align 10h
//   0x133F30 lea     rdx, aAfterCombinedO; "after combined operand propagation"
//   0x133F37 mov     esi, 1
//   0x133F3C mov     rdi, rbx
//   0x133F3F xor     eax, eax
//   0x133F41 call    sub_62C20
//   0x133F46 jmp     short loc_133EC9
//   0x133F48 align 10h
//   0x133F50 mov     rdi, [rbx+5E0h]
//   0x133F57 mov     rsi, rbx
//   0x133F5A mov     rax, [rdi]
//   0x133F5D call    qword ptr [rax+138h]
//   0x133F63 mov     [rbx+3A0h], rax
//   0x133F6A mov     rdi, rax
//   0x133F6D jmp     loc_133ED5
//   0x133F72 align 8
//   0x133F78 call    rax
//   0x133F7A jmp     loc_133EFB
// ============================================================

void sub_133E20(/* signature unknown */)
{
    // see disassembly above
}

