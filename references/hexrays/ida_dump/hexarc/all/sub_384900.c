// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x384900
// Name:           sub_384900
// Function size:  72 bytes (23 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x384900 push    rbp
//   0x384901 mov     ebp, esi
//   0x384903 xor     esi, esi
//   0x384905 push    rbx
//   0x384906 mov     rbx, rdi
//   0x384909 sub     rsp, 8
//   0x38490D call    sub_383B90
//   0x384912 lea     rcx, [rbx+68h]
//   0x384916 lea     rdx, [rbx+50h]
//   0x38491A mov     rdi, rbx
//   0x38491D lea     rsi, [rbx+38h]
//   0x384921 call    sub_3848A0
//   0x384926 mov     r8, cs:callui_ptr
//   0x38492D mov     ecx, ebp
//   0x38492F mov     edx, 0FFFFFFFFh
//   0x384934 mov     rsi, rax
//   0x384937 mov     edi, 73h ; 's'
//   0x38493C xor     eax, eax
//   0x38493E call    qword ptr [r8]
//   0x384941 add     rsp, 8
//   0x384945 pop     rbx
//   0x384946 pop     rbp
//   0x384947 retn
// ============================================================

void sub_384900(/* signature unknown */)
{
    // see disassembly above
}

