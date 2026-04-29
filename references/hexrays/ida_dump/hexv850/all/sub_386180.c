// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x386180
// Name:           sub_386180
// Function size:  72 bytes (23 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x386180 push    rbp
//   0x386181 mov     ebp, esi
//   0x386183 xor     esi, esi
//   0x386185 push    rbx
//   0x386186 mov     rbx, rdi
//   0x386189 sub     rsp, 8
//   0x38618D call    sub_385410
//   0x386192 lea     rcx, [rbx+68h]
//   0x386196 lea     rdx, [rbx+50h]
//   0x38619A mov     rdi, rbx
//   0x38619D lea     rsi, [rbx+38h]
//   0x3861A1 call    sub_386120
//   0x3861A6 mov     r8, cs:callui_ptr
//   0x3861AD mov     ecx, ebp
//   0x3861AF mov     edx, 0FFFFFFFFh
//   0x3861B4 mov     rsi, rax
//   0x3861B7 mov     edi, 73h ; 's'
//   0x3861BC xor     eax, eax
//   0x3861BE call    qword ptr [r8]
//   0x3861C1 add     rsp, 8
//   0x3861C5 pop     rbx
//   0x3861C6 pop     rbp
//   0x3861C7 retn
// ============================================================

void sub_386180(/* signature unknown */)
{
    // see disassembly above
}

