// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3BE7E0
// Name:           sub_3BE7E0
// Function size:  90 bytes (30 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3BE7E0 push    rbp
//   0x3BE7E1 mov     rbp, rdi
//   0x3BE7E4 push    rbx
//   0x3BE7E5 mov     rbx, rsi
//   0x3BE7E8 xor     esi, esi
//   0x3BE7EA mov     rdi, rbx
//   0x3BE7ED sub     rsp, 8
//   0x3BE7F1 call    sub_38B490
//   0x3BE7F6 mov     rdi, [rbp+10h]
//   0x3BE7FA lea     rsi, [rbx+50h]
//   0x3BE7FE call    sub_3BE5E0
//   0x3BE803 mov     edx, eax
//   0x3BE805 xor     eax, eax
//   0x3BE807 test    edx, edx
//   0x3BE809 jg      short loc_3BE818
//   0x3BE80B add     rsp, 8
//   0x3BE80F pop     rbx
//   0x3BE810 pop     rbp
//   0x3BE811 retn
//   0x3BE812 align 8
//   0x3BE818 mov     r8, cs:callui_ptr
//   0x3BE81F xor     ecx, ecx
//   0x3BE821 mov     esi, 0Ah
//   0x3BE826 mov     edi, 0C2h
//   0x3BE82B call    qword ptr [r8]
//   0x3BE82E add     rsp, 8
//   0x3BE832 mov     eax, 1
//   0x3BE837 pop     rbx
//   0x3BE838 pop     rbp
//   0x3BE839 retn
// ============================================================

void sub_3BE7E0(/* signature unknown */)
{
    // see disassembly above
}

