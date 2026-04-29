// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x38C740
// Name:           sub_38C740
// Function size:  72 bytes (23 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x38C740 push    rbp
//   0x38C741 mov     ebp, esi
//   0x38C743 xor     esi, esi
//   0x38C745 push    rbx
//   0x38C746 mov     rbx, rdi
//   0x38C749 sub     rsp, 8
//   0x38C74D call    sub_38B9D0
//   0x38C752 lea     rcx, [rbx+68h]
//   0x38C756 lea     rdx, [rbx+50h]
//   0x38C75A mov     rdi, rbx
//   0x38C75D lea     rsi, [rbx+38h]
//   0x38C761 call    sub_38C6E0
//   0x38C766 mov     r8, cs:callui_ptr
//   0x38C76D mov     ecx, ebp
//   0x38C76F mov     edx, 0FFFFFFFFh
//   0x38C774 mov     rsi, rax
//   0x38C777 mov     edi, 73h ; 's'
//   0x38C77C xor     eax, eax
//   0x38C77E call    qword ptr [r8]
//   0x38C781 add     rsp, 8
//   0x38C785 pop     rbx
//   0x38C786 pop     rbp
//   0x38C787 retn
// ============================================================

void sub_38C740(/* signature unknown */)
{
    // see disassembly above
}

