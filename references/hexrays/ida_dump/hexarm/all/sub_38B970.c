// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x38B970
// Name:           sub_38B970
// Function size:  83 bytes (29 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x38B970 mov     rax, [rdi+8]
//   0x38B974 test    rax, rax
//   0x38B977 jz      short loc_38B9C0
//   0x38B979 mov     r9, cs:callui_ptr
//   0x38B980 xor     edx, edx
//   0x38B982 test    esi, esi
//   0x38B984 push    rbx
//   0x38B985 setnz   dl
//   0x38B988 mov     rbx, rdi
//   0x38B98B lea     rcx, [rdi+30h]
//   0x38B98F mov     rsi, rax
//   0x38B992 lea     r8, [rdi+34h]
//   0x38B996 xor     eax, eax
//   0x38B998 mov     edi, 38h ; '8'
//   0x38B99D call    qword ptr [r9]
//   0x38B9A0 test    rax, rax
//   0x38B9A3 jz      short loc_38B9B8
//   0x38B9A5 mov     eax, [rax+0Ch]
//   0x38B9A8 mov     [rbx+2Ch], eax
//   0x38B9AB mov     eax, 1
//   0x38B9B0 pop     rbx
//   0x38B9B1 retn
//   0x38B9B2 align 8
//   0x38B9B8 xor     eax, eax
//   0x38B9BA pop     rbx
//   0x38B9BB retn
//   0x38B9BC align 20h
//   0x38B9C0 xor     eax, eax
//   0x38B9C2 retn
// ============================================================

void sub_38B970(/* signature unknown */)
{
    // see disassembly above
}

