// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x386F80
// Name:           sub_386F80
// Function size:  72 bytes (23 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x386F80 push    rbp
//   0x386F81 mov     ebp, esi
//   0x386F83 xor     esi, esi
//   0x386F85 push    rbx
//   0x386F86 mov     rbx, rdi
//   0x386F89 sub     rsp, 8
//   0x386F8D call    sub_386210
//   0x386F92 lea     rcx, [rbx+68h]
//   0x386F96 lea     rdx, [rbx+50h]
//   0x386F9A mov     rdi, rbx
//   0x386F9D lea     rsi, [rbx+38h]
//   0x386FA1 call    sub_386F20
//   0x386FA6 mov     r8, cs:callui_ptr
//   0x386FAD mov     ecx, ebp
//   0x386FAF mov     edx, 0FFFFFFFFh
//   0x386FB4 mov     rsi, rax
//   0x386FB7 mov     edi, 73h ; 's'
//   0x386FBC xor     eax, eax
//   0x386FBE call    qword ptr [r8]
//   0x386FC1 add     rsp, 8
//   0x386FC5 pop     rbx
//   0x386FC6 pop     rbp
//   0x386FC7 retn
// ============================================================

void sub_386F80(/* signature unknown */)
{
    // see disassembly above
}

