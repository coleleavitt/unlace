// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3B8A80
// Name:           sub_3B8A80
// Function size:  291 bytes (83 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3B8A80 push    rbp
//   0x3B8A81 push    rbx
//   0x3B8A82 mov     rbx, rdi
//   0x3B8A85 sub     rsp, 8
//   0x3B8A89 mov     rbp, [rsi]
//   0x3B8A8C mov     rdi, [rdi+10h]
//   0x3B8A90 mov     rsi, rbp
//   0x3B8A93 call    sub_385A70
//   0x3B8A98 test    rax, rax
//   0x3B8A9B jz      loc_3B8B90
//   0x3B8AA1 mov     edx, [rbx+18h]
//   0x3B8AA4 test    edx, edx
//   0x3B8AA6 jz      short loc_3B8AC8
//   0x3B8AA8 cmp     edx, 1
//   0x3B8AAB jnz     loc_3B8B9E
//   0x3B8AB1 mov     edx, 6
//   0x3B8AB6 cmp     rbp, [rax+8]
//   0x3B8ABA jz      short loc_3B8AC8
//   0x3B8ABC add     rsp, 8
//   0x3B8AC0 mov     eax, edx
//   0x3B8AC2 pop     rbx
//   0x3B8AC3 pop     rbp
//   0x3B8AC4 retn
//   0x3B8AC5 align 8
//   0x3B8AC8 mov     rax, [rbx+10h]
//   0x3B8ACC mov     rax, [rax+370h]
//   0x3B8AD3 cmp     dword ptr [rax+8], 5; switch 6 cases
//   0x3B8AD7 ja      short def_3B8AEA; jumptable 00000000003B8AEA default case, case 0
//   0x3B8AD9 mov     eax, [rax+8]
//   0x3B8ADC lea     rdx, jpt_3B8AEA
//   0x3B8AE3 movsxd  rax, ds:(jpt_3B8AEA - 41E250h)[rdx+rax*4]
//   0x3B8AE7 add     rax, rdx
//   0x3B8AEA jmp     rax; switch jump
//   0x3B8AEC align 10h
//   0x3B8AF0 mov     rcx, [rbx+28h]; jumptable 00000000003B8AEA default case, case 0
//   0x3B8AF4 mov     rsi, [rbx+20h]
//   0x3B8AF8 mov     edx, 1
//   0x3B8AFD xor     eax, eax
//   0x3B8AFF mov     r8, cs:callui_ptr
//   0x3B8B06 mov     edi, 8Ch
//   0x3B8B0B call    qword ptr [r8]
//   0x3B8B0E add     rsp, 8
//   0x3B8B12 mov     edx, 7
//   0x3B8B17 mov     eax, edx
//   0x3B8B19 pop     rbx
//   0x3B8B1A pop     rbp
//   0x3B8B1B retn
//   0x3B8B1C align 20h
//   0x3B8B20 mov     rcx, [rbx+50h]; jumptable 00000000003B8AEA case 5
//   0x3B8B24 test    rcx, rcx
//   0x3B8B27 jz      short def_3B8AEA; jumptable 00000000003B8AEA default case, case 0
//   0x3B8B29 mov     rsi, [rbx+20h]
//   0x3B8B2D mov     edx, 1
//   0x3B8B32 mov     edi, 8Ch
//   0x3B8B37 xor     eax, eax
//   0x3B8B39 mov     r8, cs:callui_ptr
//   0x3B8B40 call    qword ptr [r8]
//   0x3B8B43 add     rsp, 8
//   0x3B8B47 mov     edx, 3
//   0x3B8B4C mov     eax, edx
//   0x3B8B4E pop     rbx
//   0x3B8B4F pop     rbp
//   0x3B8B50 retn
//   0x3B8B51 align 8
//   0x3B8B58 mov     rcx, [rbx+30h]; jumptable 00000000003B8AEA case 1
//   0x3B8B5C jmp     short loc_3B8B24
//   0x3B8B5E align 20h
//   0x3B8B60 mov     rcx, [rbx+38h]; jumptable 00000000003B8AEA case 2
//   0x3B8B64 jmp     short loc_3B8B24
//   0x3B8B66 align 10h
//   0x3B8B70 mov     rcx, [rbx+40h]; jumptable 00000000003B8AEA case 3
//   0x3B8B74 jmp     short loc_3B8B24
//   0x3B8B76 align 20h
//   0x3B8B80 mov     rcx, [rbx+48h]; jumptable 00000000003B8AEA case 4
//   0x3B8B84 jmp     short loc_3B8B24
//   0x3B8B86 align 10h
//   0x3B8B90 add     rsp, 8
//   0x3B8B94 mov     edx, 6
//   0x3B8B99 mov     eax, edx
//   0x3B8B9B pop     rbx
//   0x3B8B9C pop     rbp
//   0x3B8B9D retn
//   0x3B8B9E call    sub_3B6850
// ============================================================

void sub_3B8A80(/* signature unknown */)
{
    // see disassembly above
}

