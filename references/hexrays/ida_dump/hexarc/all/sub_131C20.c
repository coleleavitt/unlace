// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x131C20
// Name:           sub_131C20
// Function size:  351 bytes (87 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x131C20 push    rbp
//   0x131C21 push    rbx
//   0x131C22 mov     rbx, rdi
//   0x131C25 sub     rsp, 8
//   0x131C29 cmp     dword ptr [rdi+138h], 1
//   0x131C30 jle     short loc_131C50
//   0x131C32 or      dword ptr [rdi], 200h
//   0x131C38 xor     ebp, ebp
//   0x131C3A mov     rdi, rbx
//   0x131C3D mov     esi, 1
//   0x131C42 call    sub_31AB50
//   0x131C47 add     rsp, 8
//   0x131C4B mov     eax, ebp
//   0x131C4D pop     rbx
//   0x131C4E pop     rbp
//   0x131C4F retn
//   0x131C50 lea     rdx, aBeforePreoptim; "before preoptimize"
//   0x131C57 mov     esi, 1
//   0x131C5C xor     eax, eax
//   0x131C5E call    sub_60A20
//   0x131C63 mov     rdi, rbx
//   0x131C66 call    nullsub_182
//   0x131C6B mov     rbp, [rbx+208h]
//   0x131C72 test    rbp, rbp
//   0x131C75 jz      short loc_131C91
//   0x131C77 nop     word ptr [rax+rax+00000000h]
//   0x131C80 mov     rdi, rbp
//   0x131C83 call    sub_AFC00
//   0x131C88 mov     rbp, [rbp+8]
//   0x131C8C test    rbp, rbp
//   0x131C8F jnz     short loc_131C80
//   0x131C91 mov     rdi, rbx
//   0x131C94 call    sub_A0700
//   0x131C99 mov     rdi, rbx
//   0x131C9C call    sub_A0A70
//   0x131CA1 or      dword ptr [rbx], 200h
//   0x131CA7 mov     rdi, rbx
//   0x131CAA xor     eax, eax
//   0x131CAC lea     rdx, aAfterPreoptimi; "after preoptimize"
//   0x131CB3 mov     esi, 1
//   0x131CB8 call    sub_60A20
//   0x131CBD mov     rdi, rbx
//   0x131CC0 call    sub_9A290
//   0x131CC5 test    eax, eax
//   0x131CC7 jnz     short loc_131D30
//   0x131CC9 mov     rdi, [rbx+3A0h]
//   0x131CD0 test    rdi, rdi
//   0x131CD3 jz      short loc_131D50
//   0x131CD5 call    sub_199550
//   0x131CDA lea     rdx, nullsub_75
//   0x131CE1 mov     [rbx+3A8h], rax
//   0x131CE8 mov     rdi, rax
//   0x131CEB mov     rax, [rax]
//   0x131CEE mov     rax, [rax+10h]
//   0x131CF2 cmp     rax, rdx
//   0x131CF5 jnz     loc_131D78
//   0x131CFB mov     rdi, [rbx+5D8h]
//   0x131D02 mov     rdx, rbx
//   0x131D05 mov     esi, 4
//   0x131D0A xor     eax, eax
//   0x131D0C call    sub_3368C0
//   0x131D11 mov     ebp, eax
//   0x131D13 test    eax, eax
//   0x131D15 jnz     loc_131C3A
//   0x131D1B mov     esi, 2
//   0x131D20 mov     rdi, rbx
//   0x131D23 call    sub_3298C0
//   0x131D28 mov     ebp, eax
//   0x131D2A jmp     loc_131C3A
//   0x131D2F align 10h
//   0x131D30 lea     rdx, aAfterCombinedO; "after combined operand propagation"
//   0x131D37 mov     esi, 1
//   0x131D3C mov     rdi, rbx
//   0x131D3F xor     eax, eax
//   0x131D41 call    sub_60A20
//   0x131D46 jmp     short loc_131CC9
//   0x131D48 align 10h
//   0x131D50 mov     rdi, [rbx+5E0h]
//   0x131D57 mov     rsi, rbx
//   0x131D5A mov     rax, [rdi]
//   0x131D5D call    qword ptr [rax+138h]
//   0x131D63 mov     [rbx+3A0h], rax
//   0x131D6A mov     rdi, rax
//   0x131D6D jmp     loc_131CD5
//   0x131D72 align 8
//   0x131D78 call    rax
//   0x131D7A jmp     loc_131CFB
// ============================================================

void sub_131C20(/* signature unknown */)
{
    // see disassembly above
}

