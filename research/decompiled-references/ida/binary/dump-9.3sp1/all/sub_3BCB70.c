// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3BCB70
// Name:           sub_3BCB70
// Function size:  137 bytes (43 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3BCB70 push    rbp
//   0x3BCB71 push    rbx
//   0x3BCB72 mov     rbx, rdi
//   0x3BCB75 sub     rsp, 8
//   0x3BCB79 mov     rbp, [rsi]
//   0x3BCB7C mov     rdi, [rdi+10h]
//   0x3BCB80 mov     rsi, rbp
//   0x3BCB83 call    sub_389BF0
//   0x3BCB88 test    rax, rax
//   0x3BCB8B jz      short loc_3BCBE8
//   0x3BCB8D mov     rsi, rax
//   0x3BCB90 mov     eax, [rbx+18h]
//   0x3BCB93 test    eax, eax
//   0x3BCB95 jz      short loc_3BCBA7
//   0x3BCB97 cmp     eax, 1
//   0x3BCB9A jnz     short loc_3BCBF4
//   0x3BCB9C mov     eax, 6
//   0x3BCBA1 cmp     rbp, [rsi+8]
//   0x3BCBA5 jnz     short loc_3BCBDA
//   0x3BCBA7 mov     rax, [rbx]
//   0x3BCBAA mov     rdi, rbx
//   0x3BCBAD call    qword ptr [rax+30h]
//   0x3BCBB0 mov     rcx, [rbx+30h]
//   0x3BCBB4 mov     rsi, [rbx+20h]
//   0x3BCBB8 mov     edx, 1
//   0x3BCBBD mov     r8, cs:callui_ptr
//   0x3BCBC4 test    al, al
//   0x3BCBC6 mov     edi, 8Ch
//   0x3BCBCB cmovnz  rcx, [rbx+28h]
//   0x3BCBD0 xor     eax, eax
//   0x3BCBD2 call    qword ptr [r8]
//   0x3BCBD5 mov     eax, 3
//   0x3BCBDA add     rsp, 8
//   0x3BCBDE pop     rbx
//   0x3BCBDF pop     rbp
//   0x3BCBE0 retn
//   0x3BCBE1 align 8
//   0x3BCBE8 add     rsp, 8
//   0x3BCBEC mov     eax, 6
//   0x3BCBF1 pop     rbx
//   0x3BCBF2 pop     rbp
//   0x3BCBF3 retn
//   0x3BCBF4 call    sub_3BA9D0
// ============================================================

void sub_3BCB70(/* signature unknown */)
{
    // see disassembly above
}

