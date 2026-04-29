// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3C9280
// Name:           sub_3C9280
// Function size:  161 bytes (51 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3C9280 push    rbp
//   0x3C9281 mov     rbp, rsi
//   0x3C9284 push    rbx
//   0x3C9285 mov     rbx, rdi
//   0x3C9288 sub     rsp, 8
//   0x3C928C mov     rax, [rsi+40h]
//   0x3C9290 mov     ecx, [rdi+38h]
//   0x3C9293 test    rax, rax
//   0x3C9296 jz      short loc_3C92AA
//   0x3C9298 mov     edi, [rax+3Ch]
//   0x3C929B lea     edx, [rdi-1]
//   0x3C929E cmp     edx, 2
//   0x3C92A1 mov     edx, 0
//   0x3C92A6 cmovnb  rax, rdx
//   0x3C92AA mov     rdi, [rax+40h]
//   0x3C92AE mov     edx, ecx
//   0x3C92B0 mov     eax, ecx
//   0x3C92B2 not     edx
//   0x3C92B4 mov     esi, [rdi]
//   0x3C92B6 and     edx, esi
//   0x3C92B8 or      eax, esi
//   0x3C92BA test    esi, ecx
//   0x3C92BC cmovnz  eax, edx
//   0x3C92BF mov     rdx, cs:callui_ptr
//   0x3C92C6 mov     [rdi], eax
//   0x3C92C8 mov     edi, 43h ; 'C'
//   0x3C92CD mov     rsi, [rbp+0]
//   0x3C92D1 xor     eax, eax
//   0x3C92D3 call    qword ptr [rdx]
//   0x3C92D5 mov     rax, [rbp+40h]
//   0x3C92D9 test    rax, rax
//   0x3C92DC jz      short loc_3C92F0
//   0x3C92DE mov     ecx, [rax+3Ch]
//   0x3C92E1 lea     edx, [rcx-1]
//   0x3C92E4 cmp     edx, 2
//   0x3C92E7 mov     edx, 0
//   0x3C92EC cmovnb  rax, rdx
//   0x3C92F0 mov     rsi, [rax+40h]
//   0x3C92F4 mov     rax, [rbx]
//   0x3C92F7 mov     rdi, rbx
//   0x3C92FA call    qword ptr [rax+30h]
//   0x3C92FD mov     rdi, [rbx+30h]
//   0x3C9301 lea     rcx, aMicrocode; "Microcode"
//   0x3C9308 mov     esi, 1
//   0x3C930D movzx   edx, al
//   0x3C9310 call    _reg_int_op
//   0x3C9315 add     rsp, 8
//   0x3C9319 mov     eax, 1
//   0x3C931E pop     rbx
//   0x3C931F pop     rbp
//   0x3C9320 retn
// ============================================================

void sub_3C9280(/* signature unknown */)
{
    // see disassembly above
}

