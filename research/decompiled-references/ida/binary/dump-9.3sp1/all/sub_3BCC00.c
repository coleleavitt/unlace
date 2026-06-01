// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3BCC00
// Name:           sub_3BCC00
// Function size:  291 bytes (83 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3BCC00 push    rbp
//   0x3BCC01 push    rbx
//   0x3BCC02 mov     rbx, rdi
//   0x3BCC05 sub     rsp, 8
//   0x3BCC09 mov     rbp, [rsi]
//   0x3BCC0C mov     rdi, [rdi+10h]
//   0x3BCC10 mov     rsi, rbp
//   0x3BCC13 call    sub_389BF0
//   0x3BCC18 test    rax, rax
//   0x3BCC1B jz      loc_3BCD10
//   0x3BCC21 mov     edx, [rbx+18h]
//   0x3BCC24 test    edx, edx
//   0x3BCC26 jz      short loc_3BCC48
//   0x3BCC28 cmp     edx, 1
//   0x3BCC2B jnz     loc_3BCD1E
//   0x3BCC31 mov     edx, 6
//   0x3BCC36 cmp     rbp, [rax+8]
//   0x3BCC3A jz      short loc_3BCC48
//   0x3BCC3C add     rsp, 8
//   0x3BCC40 mov     eax, edx
//   0x3BCC42 pop     rbx
//   0x3BCC43 pop     rbp
//   0x3BCC44 retn
//   0x3BCC45 align 8
//   0x3BCC48 mov     rax, [rbx+10h]
//   0x3BCC4C mov     rax, [rax+370h]
//   0x3BCC53 cmp     dword ptr [rax+8], 5; switch 6 cases
//   0x3BCC57 ja      short def_3BCC6A; jumptable 00000000003BCC6A default case, case 0
//   0x3BCC59 mov     eax, [rax+8]
//   0x3BCC5C lea     rdx, jpt_3BCC6A
//   0x3BCC63 movsxd  rax, ds:(jpt_3BCC6A - 430EB0h)[rdx+rax*4]
//   0x3BCC67 add     rax, rdx
//   0x3BCC6A jmp     rax; switch jump
//   0x3BCC6C align 10h
//   0x3BCC70 mov     rcx, [rbx+28h]; jumptable 00000000003BCC6A default case, case 0
//   0x3BCC74 mov     rsi, [rbx+20h]
//   0x3BCC78 mov     edx, 1
//   0x3BCC7D xor     eax, eax
//   0x3BCC7F mov     r8, cs:callui_ptr
//   0x3BCC86 mov     edi, 8Ch
//   0x3BCC8B call    qword ptr [r8]
//   0x3BCC8E add     rsp, 8
//   0x3BCC92 mov     edx, 7
//   0x3BCC97 mov     eax, edx
//   0x3BCC99 pop     rbx
//   0x3BCC9A pop     rbp
//   0x3BCC9B retn
//   0x3BCC9C align 20h
//   0x3BCCA0 mov     rcx, [rbx+50h]; jumptable 00000000003BCC6A case 5
//   0x3BCCA4 test    rcx, rcx
//   0x3BCCA7 jz      short def_3BCC6A; jumptable 00000000003BCC6A default case, case 0
//   0x3BCCA9 mov     rsi, [rbx+20h]
//   0x3BCCAD mov     edx, 1
//   0x3BCCB2 mov     edi, 8Ch
//   0x3BCCB7 xor     eax, eax
//   0x3BCCB9 mov     r8, cs:callui_ptr
//   0x3BCCC0 call    qword ptr [r8]
//   0x3BCCC3 add     rsp, 8
//   0x3BCCC7 mov     edx, 3
//   0x3BCCCC mov     eax, edx
//   0x3BCCCE pop     rbx
//   0x3BCCCF pop     rbp
//   0x3BCCD0 retn
//   0x3BCCD1 align 8
//   0x3BCCD8 mov     rcx, [rbx+30h]; jumptable 00000000003BCC6A case 1
//   0x3BCCDC jmp     short loc_3BCCA4
//   0x3BCCDE align 20h
//   0x3BCCE0 mov     rcx, [rbx+38h]; jumptable 00000000003BCC6A case 2
//   0x3BCCE4 jmp     short loc_3BCCA4
//   0x3BCCE6 align 10h
//   0x3BCCF0 mov     rcx, [rbx+40h]; jumptable 00000000003BCC6A case 3
//   0x3BCCF4 jmp     short loc_3BCCA4
//   0x3BCCF6 align 20h
//   0x3BCD00 mov     rcx, [rbx+48h]; jumptable 00000000003BCC6A case 4
//   0x3BCD04 jmp     short loc_3BCCA4
//   0x3BCD06 align 10h
//   0x3BCD10 add     rsp, 8
//   0x3BCD14 mov     edx, 6
//   0x3BCD19 mov     eax, edx
//   0x3BCD1B pop     rbx
//   0x3BCD1C pop     rbp
//   0x3BCD1D retn
//   0x3BCD1E call    sub_3BA9D0
// ============================================================

void sub_3BCC00(/* signature unknown */)
{
    // see disassembly above
}

