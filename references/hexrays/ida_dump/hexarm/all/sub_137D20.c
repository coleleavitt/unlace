// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x137D20
// Name:           sub_137D20
// Function size:  351 bytes (87 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x137D20 push    rbp
//   0x137D21 push    rbx
//   0x137D22 mov     rbx, rdi
//   0x137D25 sub     rsp, 8
//   0x137D29 cmp     dword ptr [rdi+138h], 1
//   0x137D30 jle     short loc_137D50
//   0x137D32 or      dword ptr [rdi], 200h
//   0x137D38 xor     ebp, ebp
//   0x137D3A mov     rdi, rbx
//   0x137D3D mov     esi, 1
//   0x137D42 call    sub_322290
//   0x137D47 add     rsp, 8
//   0x137D4B mov     eax, ebp
//   0x137D4D pop     rbx
//   0x137D4E pop     rbp
//   0x137D4F retn
//   0x137D50 lea     rdx, aBeforePreoptim; "before preoptimize"
//   0x137D57 mov     esi, 1
//   0x137D5C xor     eax, eax
//   0x137D5E call    sub_669A0
//   0x137D63 mov     rdi, rbx
//   0x137D66 call    nullsub_182
//   0x137D6B mov     rbp, [rbx+208h]
//   0x137D72 test    rbp, rbp
//   0x137D75 jz      short loc_137D91
//   0x137D77 nop     word ptr [rax+rax+00000000h]
//   0x137D80 mov     rdi, rbp
//   0x137D83 call    sub_B5D00
//   0x137D88 mov     rbp, [rbp+8]
//   0x137D8C test    rbp, rbp
//   0x137D8F jnz     short loc_137D80
//   0x137D91 mov     rdi, rbx
//   0x137D94 call    sub_A6800
//   0x137D99 mov     rdi, rbx
//   0x137D9C call    sub_A6B70
//   0x137DA1 or      dword ptr [rbx], 200h
//   0x137DA7 mov     rdi, rbx
//   0x137DAA xor     eax, eax
//   0x137DAC lea     rdx, aAfterPreoptimi; "after preoptimize"
//   0x137DB3 mov     esi, 1
//   0x137DB8 call    sub_669A0
//   0x137DBD mov     rdi, rbx
//   0x137DC0 call    sub_A0390
//   0x137DC5 test    eax, eax
//   0x137DC7 jnz     short loc_137E30
//   0x137DC9 mov     rdi, [rbx+3A0h]
//   0x137DD0 test    rdi, rdi
//   0x137DD3 jz      short loc_137E50
//   0x137DD5 call    sub_19F790
//   0x137DDA lea     rdx, nullsub_75
//   0x137DE1 mov     [rbx+3A8h], rax
//   0x137DE8 mov     rdi, rax
//   0x137DEB mov     rax, [rax]
//   0x137DEE mov     rax, [rax+10h]
//   0x137DF2 cmp     rax, rdx
//   0x137DF5 jnz     loc_137E78
//   0x137DFB mov     rdi, [rbx+5D8h]
//   0x137E02 mov     rdx, rbx
//   0x137E05 mov     esi, 4
//   0x137E0A xor     eax, eax
//   0x137E0C call    sub_33E5A0
//   0x137E11 mov     ebp, eax
//   0x137E13 test    eax, eax
//   0x137E15 jnz     loc_137D3A
//   0x137E1B mov     esi, 2
//   0x137E20 mov     rdi, rbx
//   0x137E23 call    sub_331240
//   0x137E28 mov     ebp, eax
//   0x137E2A jmp     loc_137D3A
//   0x137E2F align 10h
//   0x137E30 lea     rdx, aAfterCombinedO; "after combined operand propagation"
//   0x137E37 mov     esi, 1
//   0x137E3C mov     rdi, rbx
//   0x137E3F xor     eax, eax
//   0x137E41 call    sub_669A0
//   0x137E46 jmp     short loc_137DC9
//   0x137E48 align 10h
//   0x137E50 mov     rdi, [rbx+5E0h]
//   0x137E57 mov     rsi, rbx
//   0x137E5A mov     rax, [rdi]
//   0x137E5D call    qword ptr [rax+138h]
//   0x137E63 mov     [rbx+3A0h], rax
//   0x137E6A mov     rdi, rax
//   0x137E6D jmp     loc_137DD5
//   0x137E72 align 8
//   0x137E78 call    rax
//   0x137E7A jmp     loc_137DFB
// ============================================================

void sub_137D20(/* signature unknown */)
{
    // see disassembly above
}

