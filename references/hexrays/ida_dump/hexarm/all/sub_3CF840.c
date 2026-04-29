// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3CF840
// Name:           sub_3CF840
// Function size:  161 bytes (51 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3CF840 push    rbp
//   0x3CF841 mov     rbp, rsi
//   0x3CF844 push    rbx
//   0x3CF845 mov     rbx, rdi
//   0x3CF848 sub     rsp, 8
//   0x3CF84C mov     rax, [rsi+40h]
//   0x3CF850 mov     ecx, [rdi+38h]
//   0x3CF853 test    rax, rax
//   0x3CF856 jz      short loc_3CF86A
//   0x3CF858 mov     edi, [rax+3Ch]
//   0x3CF85B lea     edx, [rdi-1]
//   0x3CF85E cmp     edx, 2
//   0x3CF861 mov     edx, 0
//   0x3CF866 cmovnb  rax, rdx
//   0x3CF86A mov     rdi, [rax+40h]
//   0x3CF86E mov     edx, ecx
//   0x3CF870 mov     eax, ecx
//   0x3CF872 not     edx
//   0x3CF874 mov     esi, [rdi]
//   0x3CF876 and     edx, esi
//   0x3CF878 or      eax, esi
//   0x3CF87A test    esi, ecx
//   0x3CF87C cmovnz  eax, edx
//   0x3CF87F mov     rdx, cs:callui_ptr
//   0x3CF886 mov     [rdi], eax
//   0x3CF888 mov     edi, 43h ; 'C'
//   0x3CF88D mov     rsi, [rbp+0]
//   0x3CF891 xor     eax, eax
//   0x3CF893 call    qword ptr [rdx]
//   0x3CF895 mov     rax, [rbp+40h]
//   0x3CF899 test    rax, rax
//   0x3CF89C jz      short loc_3CF8B0
//   0x3CF89E mov     ecx, [rax+3Ch]
//   0x3CF8A1 lea     edx, [rcx-1]
//   0x3CF8A4 cmp     edx, 2
//   0x3CF8A7 mov     edx, 0
//   0x3CF8AC cmovnb  rax, rdx
//   0x3CF8B0 mov     rsi, [rax+40h]
//   0x3CF8B4 mov     rax, [rbx]
//   0x3CF8B7 mov     rdi, rbx
//   0x3CF8BA call    qword ptr [rax+30h]
//   0x3CF8BD mov     rdi, [rbx+30h]
//   0x3CF8C1 lea     rcx, aMicrocode; "Microcode"
//   0x3CF8C8 mov     esi, 1
//   0x3CF8CD movzx   edx, al
//   0x3CF8D0 call    _reg_int_op
//   0x3CF8D5 add     rsp, 8
//   0x3CF8D9 mov     eax, 1
//   0x3CF8DE pop     rbx
//   0x3CF8DF pop     rbp
//   0x3CF8E0 retn
// ============================================================

void sub_3CF840(/* signature unknown */)
{
    // see disassembly above
}

