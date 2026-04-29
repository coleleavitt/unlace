// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3B6B80
// Name:           sub_3B6B80
// Function size:  291 bytes (83 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3B6B80 push    rbp
//   0x3B6B81 push    rbx
//   0x3B6B82 mov     rbx, rdi
//   0x3B6B85 sub     rsp, 8
//   0x3B6B89 mov     rbp, [rsi]
//   0x3B6B8C mov     rdi, [rdi+10h]
//   0x3B6B90 mov     rsi, rbp
//   0x3B6B93 call    sub_383B70
//   0x3B6B98 test    rax, rax
//   0x3B6B9B jz      loc_3B6C90
//   0x3B6BA1 mov     edx, [rbx+18h]
//   0x3B6BA4 test    edx, edx
//   0x3B6BA6 jz      short loc_3B6BC8
//   0x3B6BA8 cmp     edx, 1
//   0x3B6BAB jnz     loc_3B6C9E
//   0x3B6BB1 mov     edx, 6
//   0x3B6BB6 cmp     rbp, [rax+8]
//   0x3B6BBA jz      short loc_3B6BC8
//   0x3B6BBC add     rsp, 8
//   0x3B6BC0 mov     eax, edx
//   0x3B6BC2 pop     rbx
//   0x3B6BC3 pop     rbp
//   0x3B6BC4 retn
//   0x3B6BC5 align 8
//   0x3B6BC8 mov     rax, [rbx+10h]
//   0x3B6BCC mov     rax, [rax+370h]
//   0x3B6BD3 cmp     dword ptr [rax+8], 5; switch 6 cases
//   0x3B6BD7 ja      short def_3B6BEA; jumptable 00000000003B6BEA default case, case 0
//   0x3B6BD9 mov     eax, [rax+8]
//   0x3B6BDC lea     rdx, jpt_3B6BEA
//   0x3B6BE3 movsxd  rax, ds:(jpt_3B6BEA - 40C7D0h)[rdx+rax*4]
//   0x3B6BE7 add     rax, rdx
//   0x3B6BEA jmp     rax; switch jump
//   0x3B6BEC align 10h
//   0x3B6BF0 mov     rcx, [rbx+28h]; jumptable 00000000003B6BEA default case, case 0
//   0x3B6BF4 mov     rsi, [rbx+20h]
//   0x3B6BF8 mov     edx, 1
//   0x3B6BFD xor     eax, eax
//   0x3B6BFF mov     r8, cs:callui_ptr
//   0x3B6C06 mov     edi, 8Ch
//   0x3B6C0B call    qword ptr [r8]
//   0x3B6C0E add     rsp, 8
//   0x3B6C12 mov     edx, 7
//   0x3B6C17 mov     eax, edx
//   0x3B6C19 pop     rbx
//   0x3B6C1A pop     rbp
//   0x3B6C1B retn
//   0x3B6C1C align 20h
//   0x3B6C20 mov     rcx, [rbx+50h]; jumptable 00000000003B6BEA case 5
//   0x3B6C24 test    rcx, rcx
//   0x3B6C27 jz      short def_3B6BEA; jumptable 00000000003B6BEA default case, case 0
//   0x3B6C29 mov     rsi, [rbx+20h]
//   0x3B6C2D mov     edx, 1
//   0x3B6C32 mov     edi, 8Ch
//   0x3B6C37 xor     eax, eax
//   0x3B6C39 mov     r8, cs:callui_ptr
//   0x3B6C40 call    qword ptr [r8]
//   0x3B6C43 add     rsp, 8
//   0x3B6C47 mov     edx, 3
//   0x3B6C4C mov     eax, edx
//   0x3B6C4E pop     rbx
//   0x3B6C4F pop     rbp
//   0x3B6C50 retn
//   0x3B6C51 align 8
//   0x3B6C58 mov     rcx, [rbx+30h]; jumptable 00000000003B6BEA case 1
//   0x3B6C5C jmp     short loc_3B6C24
//   0x3B6C5E align 20h
//   0x3B6C60 mov     rcx, [rbx+38h]; jumptable 00000000003B6BEA case 2
//   0x3B6C64 jmp     short loc_3B6C24
//   0x3B6C66 align 10h
//   0x3B6C70 mov     rcx, [rbx+40h]; jumptable 00000000003B6BEA case 3
//   0x3B6C74 jmp     short loc_3B6C24
//   0x3B6C76 align 20h
//   0x3B6C80 mov     rcx, [rbx+48h]; jumptable 00000000003B6BEA case 4
//   0x3B6C84 jmp     short loc_3B6C24
//   0x3B6C86 align 10h
//   0x3B6C90 add     rsp, 8
//   0x3B6C94 mov     edx, 6
//   0x3B6C99 mov     eax, edx
//   0x3B6C9B pop     rbx
//   0x3B6C9C pop     rbp
//   0x3B6C9D retn
//   0x3B6C9E call    sub_3B4950
// ============================================================

void sub_3B6B80(/* signature unknown */)
{
    // see disassembly above
}

