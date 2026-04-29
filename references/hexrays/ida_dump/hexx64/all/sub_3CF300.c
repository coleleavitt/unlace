// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3CF300
// Name:           sub_3CF300
// Function size:  161 bytes (51 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3CF300 push    rbp
//   0x3CF301 mov     rbp, rsi
//   0x3CF304 push    rbx
//   0x3CF305 mov     rbx, rdi
//   0x3CF308 sub     rsp, 8
//   0x3CF30C mov     rax, [rsi+40h]
//   0x3CF310 mov     ecx, [rdi+38h]
//   0x3CF313 test    rax, rax
//   0x3CF316 jz      short loc_3CF32A
//   0x3CF318 mov     edi, [rax+3Ch]
//   0x3CF31B lea     edx, [rdi-1]
//   0x3CF31E cmp     edx, 2
//   0x3CF321 mov     edx, 0
//   0x3CF326 cmovnb  rax, rdx
//   0x3CF32A mov     rdi, [rax+40h]
//   0x3CF32E mov     edx, ecx
//   0x3CF330 mov     eax, ecx
//   0x3CF332 not     edx
//   0x3CF334 mov     esi, [rdi]
//   0x3CF336 and     edx, esi
//   0x3CF338 or      eax, esi
//   0x3CF33A test    esi, ecx
//   0x3CF33C cmovnz  eax, edx
//   0x3CF33F mov     rdx, cs:callui_ptr
//   0x3CF346 mov     [rdi], eax
//   0x3CF348 mov     edi, 43h ; 'C'
//   0x3CF34D mov     rsi, [rbp+0]
//   0x3CF351 xor     eax, eax
//   0x3CF353 call    qword ptr [rdx]
//   0x3CF355 mov     rax, [rbp+40h]
//   0x3CF359 test    rax, rax
//   0x3CF35C jz      short loc_3CF370
//   0x3CF35E mov     ecx, [rax+3Ch]
//   0x3CF361 lea     edx, [rcx-1]
//   0x3CF364 cmp     edx, 2
//   0x3CF367 mov     edx, 0
//   0x3CF36C cmovnb  rax, rdx
//   0x3CF370 mov     rsi, [rax+40h]
//   0x3CF374 mov     rax, [rbx]
//   0x3CF377 mov     rdi, rbx
//   0x3CF37A call    qword ptr [rax+30h]
//   0x3CF37D mov     rdi, [rbx+30h]
//   0x3CF381 lea     rcx, aMicrocode; "Microcode"
//   0x3CF388 mov     esi, 1
//   0x3CF38D movzx   edx, al
//   0x3CF390 call    _reg_int_op
//   0x3CF395 add     rsp, 8
//   0x3CF399 mov     eax, 1
//   0x3CF39E pop     rbx
//   0x3CF39F pop     rbp
//   0x3CF3A0 retn
// ============================================================

void sub_3CF300(/* signature unknown */)
{
    // see disassembly above
}

