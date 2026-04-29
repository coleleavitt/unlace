// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3B7980
// Name:           sub_3B7980
// Function size:  291 bytes (83 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3B7980 push    rbp
//   0x3B7981 push    rbx
//   0x3B7982 mov     rbx, rdi
//   0x3B7985 sub     rsp, 8
//   0x3B7989 mov     rbp, [rsi]
//   0x3B798C mov     rdi, [rdi+10h]
//   0x3B7990 mov     rsi, rbp
//   0x3B7993 call    sub_384970
//   0x3B7998 test    rax, rax
//   0x3B799B jz      loc_3B7A90
//   0x3B79A1 mov     edx, [rbx+18h]
//   0x3B79A4 test    edx, edx
//   0x3B79A6 jz      short loc_3B79C8
//   0x3B79A8 cmp     edx, 1
//   0x3B79AB jnz     loc_3B7A9E
//   0x3B79B1 mov     edx, 6
//   0x3B79B6 cmp     rbp, [rax+8]
//   0x3B79BA jz      short loc_3B79C8
//   0x3B79BC add     rsp, 8
//   0x3B79C0 mov     eax, edx
//   0x3B79C2 pop     rbx
//   0x3B79C3 pop     rbp
//   0x3B79C4 retn
//   0x3B79C5 align 8
//   0x3B79C8 mov     rax, [rbx+10h]
//   0x3B79CC mov     rax, [rax+370h]
//   0x3B79D3 cmp     dword ptr [rax+8], 5; switch 6 cases
//   0x3B79D7 ja      short def_3B79EA; jumptable 00000000003B79EA default case, case 0
//   0x3B79D9 mov     eax, [rax+8]
//   0x3B79DC lea     rdx, jpt_3B79EA
//   0x3B79E3 movsxd  rax, ds:(jpt_3B79EA - 40A8D0h)[rdx+rax*4]
//   0x3B79E7 add     rax, rdx
//   0x3B79EA jmp     rax; switch jump
//   0x3B79EC align 10h
//   0x3B79F0 mov     rcx, [rbx+28h]; jumptable 00000000003B79EA default case, case 0
//   0x3B79F4 mov     rsi, [rbx+20h]
//   0x3B79F8 mov     edx, 1
//   0x3B79FD xor     eax, eax
//   0x3B79FF mov     r8, cs:callui_ptr
//   0x3B7A06 mov     edi, 8Ch
//   0x3B7A0B call    qword ptr [r8]
//   0x3B7A0E add     rsp, 8
//   0x3B7A12 mov     edx, 7
//   0x3B7A17 mov     eax, edx
//   0x3B7A19 pop     rbx
//   0x3B7A1A pop     rbp
//   0x3B7A1B retn
//   0x3B7A1C align 20h
//   0x3B7A20 mov     rcx, [rbx+50h]; jumptable 00000000003B79EA case 5
//   0x3B7A24 test    rcx, rcx
//   0x3B7A27 jz      short def_3B79EA; jumptable 00000000003B79EA default case, case 0
//   0x3B7A29 mov     rsi, [rbx+20h]
//   0x3B7A2D mov     edx, 1
//   0x3B7A32 mov     edi, 8Ch
//   0x3B7A37 xor     eax, eax
//   0x3B7A39 mov     r8, cs:callui_ptr
//   0x3B7A40 call    qword ptr [r8]
//   0x3B7A43 add     rsp, 8
//   0x3B7A47 mov     edx, 3
//   0x3B7A4C mov     eax, edx
//   0x3B7A4E pop     rbx
//   0x3B7A4F pop     rbp
//   0x3B7A50 retn
//   0x3B7A51 align 8
//   0x3B7A58 mov     rcx, [rbx+30h]; jumptable 00000000003B79EA case 1
//   0x3B7A5C jmp     short loc_3B7A24
//   0x3B7A5E align 20h
//   0x3B7A60 mov     rcx, [rbx+38h]; jumptable 00000000003B79EA case 2
//   0x3B7A64 jmp     short loc_3B7A24
//   0x3B7A66 align 10h
//   0x3B7A70 mov     rcx, [rbx+40h]; jumptable 00000000003B79EA case 3
//   0x3B7A74 jmp     short loc_3B7A24
//   0x3B7A76 align 20h
//   0x3B7A80 mov     rcx, [rbx+48h]; jumptable 00000000003B79EA case 4
//   0x3B7A84 jmp     short loc_3B7A24
//   0x3B7A86 align 10h
//   0x3B7A90 add     rsp, 8
//   0x3B7A94 mov     edx, 6
//   0x3B7A99 mov     eax, edx
//   0x3B7A9B pop     rbx
//   0x3B7A9C pop     rbp
//   0x3B7A9D retn
//   0x3B7A9E call    sub_3B5750
// ============================================================

void sub_3B7980(/* signature unknown */)
{
    // see disassembly above
}

