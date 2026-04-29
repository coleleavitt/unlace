// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3CAD80
// Name:           sub_3CAD80
// Function size:  155 bytes (49 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3CAD80 mov     rdx, [rdi+10h]
//   0x3CAD84 mov     rsi, [rsi]
//   0x3CAD87 mov     rax, [rdx+828h]
//   0x3CAD8E mov     rdx, [rdx+830h]
//   0x3CAD95 lea     rdx, [rax+rdx*8]
//   0x3CAD99 cmp     rax, rdx
//   0x3CAD9C jz      short loc_3CAE15
//   0x3CAD9E push    rbp
//   0x3CAD9F mov     rbp, rdi
//   0x3CADA2 push    rbx
//   0x3CADA3 sub     rsp, 8
//   0x3CADA7 nop     word ptr [rax+rax+00000000h]
//   0x3CADB0 mov     rbx, [rax]
//   0x3CADB3 test    rbx, rbx
//   0x3CADB6 jz      short loc_3CADBD
//   0x3CADB8 cmp     rsi, [rbx]
//   0x3CADBB jz      short loc_3CADD8
//   0x3CADBD add     rax, 8
//   0x3CADC1 cmp     rdx, rax
//   0x3CADC4 jnz     short loc_3CADB0
//   0x3CADC6 add     rsp, 8
//   0x3CADCA mov     eax, 7
//   0x3CADCF pop     rbx
//   0x3CADD0 pop     rbp
//   0x3CADD1 retn
//   0x3CADD2 align 8
//   0x3CADD8 mov     r9, cs:callui_ptr
//   0x3CADDF xor     edx, edx
//   0x3CADE1 xor     r8d, r8d
//   0x3CADE4 xor     ecx, ecx
//   0x3CADE6 mov     edi, 38h ; '8'
//   0x3CADEB xor     eax, eax
//   0x3CADED call    qword ptr [r9]
//   0x3CADF0 mov     rdx, rax
//   0x3CADF3 test    rax, rax
//   0x3CADF6 jz      short loc_3CADC6
//   0x3CADF8 mov     rax, [rbp+0]
//   0x3CADFC mov     rsi, rbx
//   0x3CADFF mov     rdi, rbp
//   0x3CAE02 call    qword ptr [rax+20h]
//   0x3CAE05 test    al, al
//   0x3CAE07 jz      short loc_3CADC6
//   0x3CAE09 add     rsp, 8
//   0x3CAE0D mov     eax, 3
//   0x3CAE12 pop     rbx
//   0x3CAE13 pop     rbp
//   0x3CAE14 retn
//   0x3CAE15 mov     eax, 7
//   0x3CAE1A retn
// ============================================================

void sub_3CAD80(/* signature unknown */)
{
    // see disassembly above
}

