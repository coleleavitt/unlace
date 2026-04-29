// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3B7C70
// Name:           sub_3B7C70
// Function size:  137 bytes (43 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3B7C70 push    rbp
//   0x3B7C71 push    rbx
//   0x3B7C72 mov     rbx, rdi
//   0x3B7C75 sub     rsp, 8
//   0x3B7C79 mov     rbp, [rsi]
//   0x3B7C7C mov     rdi, [rdi+10h]
//   0x3B7C80 mov     rsi, rbp
//   0x3B7C83 call    sub_384CF0
//   0x3B7C88 test    rax, rax
//   0x3B7C8B jz      short loc_3B7CE8
//   0x3B7C8D mov     rsi, rax
//   0x3B7C90 mov     eax, [rbx+18h]
//   0x3B7C93 test    eax, eax
//   0x3B7C95 jz      short loc_3B7CA7
//   0x3B7C97 cmp     eax, 1
//   0x3B7C9A jnz     short loc_3B7CF4
//   0x3B7C9C mov     eax, 6
//   0x3B7CA1 cmp     rbp, [rsi+8]
//   0x3B7CA5 jnz     short loc_3B7CDA
//   0x3B7CA7 mov     rax, [rbx]
//   0x3B7CAA mov     rdi, rbx
//   0x3B7CAD call    qword ptr [rax+30h]
//   0x3B7CB0 mov     rcx, [rbx+30h]
//   0x3B7CB4 mov     rsi, [rbx+20h]
//   0x3B7CB8 mov     edx, 1
//   0x3B7CBD mov     r8, cs:callui_ptr
//   0x3B7CC4 test    al, al
//   0x3B7CC6 mov     edi, 8Ch
//   0x3B7CCB cmovnz  rcx, [rbx+28h]
//   0x3B7CD0 xor     eax, eax
//   0x3B7CD2 call    qword ptr [r8]
//   0x3B7CD5 mov     eax, 3
//   0x3B7CDA add     rsp, 8
//   0x3B7CDE pop     rbx
//   0x3B7CDF pop     rbp
//   0x3B7CE0 retn
//   0x3B7CE1 align 8
//   0x3B7CE8 add     rsp, 8
//   0x3B7CEC mov     eax, 6
//   0x3B7CF1 pop     rbx
//   0x3B7CF2 pop     rbp
//   0x3B7CF3 retn
//   0x3B7CF4 call    sub_3B5AD0
// ============================================================

void sub_3B7C70(/* signature unknown */)
{
    // see disassembly above
}

