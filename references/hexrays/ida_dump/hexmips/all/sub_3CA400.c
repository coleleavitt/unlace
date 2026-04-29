// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3CA400
// Name:           sub_3CA400
// Function size:  161 bytes (51 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3CA400 push    rbp
//   0x3CA401 mov     rbp, rsi
//   0x3CA404 push    rbx
//   0x3CA405 mov     rbx, rdi
//   0x3CA408 sub     rsp, 8
//   0x3CA40C mov     rax, [rsi+40h]
//   0x3CA410 mov     ecx, [rdi+38h]
//   0x3CA413 test    rax, rax
//   0x3CA416 jz      short loc_3CA42A
//   0x3CA418 mov     edi, [rax+3Ch]
//   0x3CA41B lea     edx, [rdi-1]
//   0x3CA41E cmp     edx, 2
//   0x3CA421 mov     edx, 0
//   0x3CA426 cmovnb  rax, rdx
//   0x3CA42A mov     rdi, [rax+40h]
//   0x3CA42E mov     edx, ecx
//   0x3CA430 mov     eax, ecx
//   0x3CA432 not     edx
//   0x3CA434 mov     esi, [rdi]
//   0x3CA436 and     edx, esi
//   0x3CA438 or      eax, esi
//   0x3CA43A test    esi, ecx
//   0x3CA43C cmovnz  eax, edx
//   0x3CA43F mov     rdx, cs:callui_ptr
//   0x3CA446 mov     [rdi], eax
//   0x3CA448 mov     edi, 43h ; 'C'
//   0x3CA44D mov     rsi, [rbp+0]
//   0x3CA451 xor     eax, eax
//   0x3CA453 call    qword ptr [rdx]
//   0x3CA455 mov     rax, [rbp+40h]
//   0x3CA459 test    rax, rax
//   0x3CA45C jz      short loc_3CA470
//   0x3CA45E mov     ecx, [rax+3Ch]
//   0x3CA461 lea     edx, [rcx-1]
//   0x3CA464 cmp     edx, 2
//   0x3CA467 mov     edx, 0
//   0x3CA46C cmovnb  rax, rdx
//   0x3CA470 mov     rsi, [rax+40h]
//   0x3CA474 mov     rax, [rbx]
//   0x3CA477 mov     rdi, rbx
//   0x3CA47A call    qword ptr [rax+30h]
//   0x3CA47D mov     rdi, [rbx+30h]
//   0x3CA481 lea     rcx, aMicrocode; "Microcode"
//   0x3CA488 mov     esi, 1
//   0x3CA48D movzx   edx, al
//   0x3CA490 call    _reg_int_op
//   0x3CA495 add     rsp, 8
//   0x3CA499 mov     eax, 1
//   0x3CA49E pop     rbx
//   0x3CA49F pop     rbp
//   0x3CA4A0 retn
// ============================================================

void sub_3CA400(/* signature unknown */)
{
    // see disassembly above
}

