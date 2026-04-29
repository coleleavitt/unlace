// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3B7D00
// Name:           sub_3B7D00
// Function size:  291 bytes (83 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3B7D00 push    rbp
//   0x3B7D01 push    rbx
//   0x3B7D02 mov     rbx, rdi
//   0x3B7D05 sub     rsp, 8
//   0x3B7D09 mov     rbp, [rsi]
//   0x3B7D0C mov     rdi, [rdi+10h]
//   0x3B7D10 mov     rsi, rbp
//   0x3B7D13 call    sub_384CF0
//   0x3B7D18 test    rax, rax
//   0x3B7D1B jz      loc_3B7E10
//   0x3B7D21 mov     edx, [rbx+18h]
//   0x3B7D24 test    edx, edx
//   0x3B7D26 jz      short loc_3B7D48
//   0x3B7D28 cmp     edx, 1
//   0x3B7D2B jnz     loc_3B7E1E
//   0x3B7D31 mov     edx, 6
//   0x3B7D36 cmp     rbp, [rax+8]
//   0x3B7D3A jz      short loc_3B7D48
//   0x3B7D3C add     rsp, 8
//   0x3B7D40 mov     eax, edx
//   0x3B7D42 pop     rbx
//   0x3B7D43 pop     rbp
//   0x3B7D44 retn
//   0x3B7D45 align 8
//   0x3B7D48 mov     rax, [rbx+10h]
//   0x3B7D4C mov     rax, [rax+370h]
//   0x3B7D53 cmp     dword ptr [rax+8], 5; switch 6 cases
//   0x3B7D57 ja      short def_3B7D6A; jumptable 00000000003B7D6A default case, case 0
//   0x3B7D59 mov     eax, [rax+8]
//   0x3B7D5C lea     rdx, jpt_3B7D6A
//   0x3B7D63 movsxd  rax, ds:(jpt_3B7D6A - 4138B0h)[rdx+rax*4]
//   0x3B7D67 add     rax, rdx
//   0x3B7D6A jmp     rax; switch jump
//   0x3B7D6C align 10h
//   0x3B7D70 mov     rcx, [rbx+28h]; jumptable 00000000003B7D6A default case, case 0
//   0x3B7D74 mov     rsi, [rbx+20h]
//   0x3B7D78 mov     edx, 1
//   0x3B7D7D xor     eax, eax
//   0x3B7D7F mov     r8, cs:callui_ptr
//   0x3B7D86 mov     edi, 8Ch
//   0x3B7D8B call    qword ptr [r8]
//   0x3B7D8E add     rsp, 8
//   0x3B7D92 mov     edx, 7
//   0x3B7D97 mov     eax, edx
//   0x3B7D99 pop     rbx
//   0x3B7D9A pop     rbp
//   0x3B7D9B retn
//   0x3B7D9C align 20h
//   0x3B7DA0 mov     rcx, [rbx+50h]; jumptable 00000000003B7D6A case 5
//   0x3B7DA4 test    rcx, rcx
//   0x3B7DA7 jz      short def_3B7D6A; jumptable 00000000003B7D6A default case, case 0
//   0x3B7DA9 mov     rsi, [rbx+20h]
//   0x3B7DAD mov     edx, 1
//   0x3B7DB2 mov     edi, 8Ch
//   0x3B7DB7 xor     eax, eax
//   0x3B7DB9 mov     r8, cs:callui_ptr
//   0x3B7DC0 call    qword ptr [r8]
//   0x3B7DC3 add     rsp, 8
//   0x3B7DC7 mov     edx, 3
//   0x3B7DCC mov     eax, edx
//   0x3B7DCE pop     rbx
//   0x3B7DCF pop     rbp
//   0x3B7DD0 retn
//   0x3B7DD1 align 8
//   0x3B7DD8 mov     rcx, [rbx+30h]; jumptable 00000000003B7D6A case 1
//   0x3B7DDC jmp     short loc_3B7DA4
//   0x3B7DDE align 20h
//   0x3B7DE0 mov     rcx, [rbx+38h]; jumptable 00000000003B7D6A case 2
//   0x3B7DE4 jmp     short loc_3B7DA4
//   0x3B7DE6 align 10h
//   0x3B7DF0 mov     rcx, [rbx+40h]; jumptable 00000000003B7D6A case 3
//   0x3B7DF4 jmp     short loc_3B7DA4
//   0x3B7DF6 align 20h
//   0x3B7E00 mov     rcx, [rbx+48h]; jumptable 00000000003B7D6A case 4
//   0x3B7E04 jmp     short loc_3B7DA4
//   0x3B7E06 align 10h
//   0x3B7E10 add     rsp, 8
//   0x3B7E14 mov     edx, 6
//   0x3B7E19 mov     eax, edx
//   0x3B7E1B pop     rbx
//   0x3B7E1C pop     rbp
//   0x3B7E1D retn
//   0x3B7E1E call    sub_3B5AD0
// ============================================================

void sub_3B7D00(/* signature unknown */)
{
    // see disassembly above
}

