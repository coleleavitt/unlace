// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3B3EB0
// Name:           sub_3B3EB0
// Function size:  104 bytes (27 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3B3EB0 push    rbx
//   0x3B3EB1 cmp     rsi, [rdi+0C8h]
//   0x3B3EB8 jnb     short loc_3B3EFD
//   0x3B3EBA lea     rax, [rsi+rsi*2]
//   0x3B3EBE shl     rax, 4
//   0x3B3EC2 add     rax, [rdi+0C0h]
//   0x3B3EC9 mov     rbx, rax
//   0x3B3ECC jz      short loc_3B3EFD
//   0x3B3ECE mov     rdi, [rax]
//   0x3B3ED1 xor     esi, esi
//   0x3B3ED3 call    sub_394FA0
//   0x3B3ED8 mov     rsi, [rbx+8]
//   0x3B3EDC cmp     rsi, 0FFFFFFFFFFFFFFFFh
//   0x3B3EE0 jz      short loc_3B3EFD
//   0x3B3EE2 mov     r8, cs:callui_ptr
//   0x3B3EE9 mov     ecx, 1
//   0x3B3EEE mov     edx, 0FFFFFFFFh
//   0x3B3EF3 xor     eax, eax
//   0x3B3EF5 mov     edi, 73h ; 's'
//   0x3B3EFA call    qword ptr [r8]
//   0x3B3EFD xor     ecx, ecx
//   0x3B3EFF mov     rax, 0FFFFFFFFFFFFFFFFh
//   0x3B3F06 pop     rbx
//   0x3B3F07 mov     rsi, 0FFFFFFFF00000000h
//   0x3B3F11 and     rcx, rsi
//   0x3B3F14 mov     rdx, rcx
//   0x3B3F17 retn
// ============================================================

void sub_3B3EB0(/* signature unknown */)
{
    // see disassembly above
}

