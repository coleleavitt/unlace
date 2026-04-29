// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3DAF80
// Name:           sub_3DAF80
// Function size:  174 bytes (54 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3DAF80 push    rbp
//   0x3DAF81 xor     eax, eax
//   0x3DAF83 mov     rbp, rsi
//   0x3DAF86 push    rbx
//   0x3DAF87 mov     rbx, rdi
//   0x3DAF8A mov     edi, 3Dh ; '='
//   0x3DAF8F sub     rsp, 8
//   0x3DAF93 mov     rdx, cs:callui_ptr
//   0x3DAF9A call    qword ptr [rdx]
//   0x3DAF9C mov     rdx, [rbx+828h]
//   0x3DAFA3 mov     rcx, [rbx+830h]
//   0x3DAFAA lea     rcx, [rdx+rcx*8]
//   0x3DAFAE cmp     rdx, rcx
//   0x3DAFB1 jz      short loc_3DAFD6
//   0x3DAFB3 nop     word ptr [rax+rax+00000000h]
//   0x3DAFBE xchg    ax, ax
//   0x3DAFC0 mov     rbx, [rdx]
//   0x3DAFC3 test    rbx, rbx
//   0x3DAFC6 jz      short loc_3DAFCD
//   0x3DAFC8 cmp     rax, [rbx]
//   0x3DAFCB jz      short loc_3DAFE0
//   0x3DAFCD add     rdx, 8
//   0x3DAFD1 cmp     rcx, rdx
//   0x3DAFD4 jnz     short loc_3DAFC0
//   0x3DAFD6 add     rsp, 8
//   0x3DAFDA xor     eax, eax
//   0x3DAFDC pop     rbx
//   0x3DAFDD pop     rbp
//   0x3DAFDE retn
//   0x3DAFDF align 20h
//   0x3DAFE0 mov     eax, [rbp+0]
//   0x3DAFE3 cmp     eax, 2Fh ; '/'
//   0x3DAFE6 ja      short loc_3DB020
//   0x3DAFE8 mov     edx, eax
//   0x3DAFEA add     eax, 8
//   0x3DAFED add     rdx, [rbp+10h]
//   0x3DAFF1 mov     [rbp+0], eax
//   0x3DAFF4 mov     rdi, [rdx]; s1
//   0x3DAFF7 lea     rsi, aJumpenter; "JumpEnter"
//   0x3DAFFE call    _strcmp
//   0x3DB003 test    eax, eax
//   0x3DB005 jnz     short loc_3DAFD6
//   0x3DB007 mov     rdi, rbx
//   0x3DB00A call    sub_3DAEE0
//   0x3DB00F add     rsp, 8
//   0x3DB013 movzx   eax, al
//   0x3DB016 pop     rbx
//   0x3DB017 pop     rbp
//   0x3DB018 retn
//   0x3DB019 align 20h
//   0x3DB020 mov     rdx, [rbp+8]
//   0x3DB024 lea     rax, [rdx+8]
//   0x3DB028 mov     [rbp+8], rax
//   0x3DB02C jmp     short loc_3DAFF4
// ============================================================

void sub_3DAF80(/* signature unknown */)
{
    // see disassembly above
}

