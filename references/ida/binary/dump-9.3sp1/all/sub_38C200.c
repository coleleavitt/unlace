// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x38C200
// Name:           sub_38C200
// Function size:  72 bytes (23 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x38C200 push    rbp
//   0x38C201 mov     ebp, esi
//   0x38C203 xor     esi, esi
//   0x38C205 push    rbx
//   0x38C206 mov     rbx, rdi
//   0x38C209 sub     rsp, 8
//   0x38C20D call    sub_38B490
//   0x38C212 lea     rcx, [rbx+68h]
//   0x38C216 lea     rdx, [rbx+50h]
//   0x38C21A mov     rdi, rbx
//   0x38C21D lea     rsi, [rbx+38h]
//   0x38C221 call    sub_38C1A0
//   0x38C226 mov     r8, cs:callui_ptr
//   0x38C22D mov     ecx, ebp
//   0x38C22F mov     edx, 0FFFFFFFFh
//   0x38C234 mov     rsi, rax
//   0x38C237 mov     edi, 73h ; 's'
//   0x38C23C xor     eax, eax
//   0x38C23E call    qword ptr [r8]
//   0x38C241 add     rsp, 8
//   0x38C245 pop     rbx
//   0x38C246 pop     rbp
//   0x38C247 retn
// ============================================================

void sub_38C200(/* signature unknown */)
{
    // see disassembly above
}

