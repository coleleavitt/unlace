// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x388080
// Name:           sub_388080
// Function size:  72 bytes (23 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x388080 push    rbp
//   0x388081 mov     ebp, esi
//   0x388083 xor     esi, esi
//   0x388085 push    rbx
//   0x388086 mov     rbx, rdi
//   0x388089 sub     rsp, 8
//   0x38808D call    sub_387310
//   0x388092 lea     rcx, [rbx+68h]
//   0x388096 lea     rdx, [rbx+50h]
//   0x38809A mov     rdi, rbx
//   0x38809D lea     rsi, [rbx+38h]
//   0x3880A1 call    sub_388020
//   0x3880A6 mov     r8, cs:callui_ptr
//   0x3880AD mov     ecx, ebp
//   0x3880AF mov     edx, 0FFFFFFFFh
//   0x3880B4 mov     rsi, rax
//   0x3880B7 mov     edi, 73h ; 's'
//   0x3880BC xor     eax, eax
//   0x3880BE call    qword ptr [r8]
//   0x3880C1 add     rsp, 8
//   0x3880C5 pop     rbx
//   0x3880C6 pop     rbp
//   0x3880C7 retn
// ============================================================

void sub_388080(/* signature unknown */)
{
    // see disassembly above
}

