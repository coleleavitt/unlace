// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3E0740
// Name:           sub_3E0740
// Function size:  174 bytes (54 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3E0740 push    rbp
//   0x3E0741 xor     eax, eax
//   0x3E0743 mov     rbp, rsi
//   0x3E0746 push    rbx
//   0x3E0747 mov     rbx, rdi
//   0x3E074A mov     edi, 3Dh ; '='
//   0x3E074F sub     rsp, 8
//   0x3E0753 mov     rdx, cs:callui_ptr
//   0x3E075A call    qword ptr [rdx]
//   0x3E075C mov     rdx, [rbx+828h]
//   0x3E0763 mov     rcx, [rbx+830h]
//   0x3E076A lea     rcx, [rdx+rcx*8]
//   0x3E076E cmp     rdx, rcx
//   0x3E0771 jz      short loc_3E0796
//   0x3E0773 nop     word ptr [rax+rax+00000000h]
//   0x3E077E xchg    ax, ax
//   0x3E0780 mov     rbx, [rdx]
//   0x3E0783 test    rbx, rbx
//   0x3E0786 jz      short loc_3E078D
//   0x3E0788 cmp     rax, [rbx]
//   0x3E078B jz      short loc_3E07A0
//   0x3E078D add     rdx, 8
//   0x3E0791 cmp     rcx, rdx
//   0x3E0794 jnz     short loc_3E0780
//   0x3E0796 add     rsp, 8
//   0x3E079A xor     eax, eax
//   0x3E079C pop     rbx
//   0x3E079D pop     rbp
//   0x3E079E retn
//   0x3E079F align 20h
//   0x3E07A0 mov     eax, [rbp+0]
//   0x3E07A3 cmp     eax, 2Fh ; '/'
//   0x3E07A6 ja      short loc_3E07E0
//   0x3E07A8 mov     edx, eax
//   0x3E07AA add     eax, 8
//   0x3E07AD add     rdx, [rbp+10h]
//   0x3E07B1 mov     [rbp+0], eax
//   0x3E07B4 mov     rdi, [rdx]; s1
//   0x3E07B7 lea     rsi, aJumpenter; "JumpEnter"
//   0x3E07BE call    _strcmp
//   0x3E07C3 test    eax, eax
//   0x3E07C5 jnz     short loc_3E0796
//   0x3E07C7 mov     rdi, rbx
//   0x3E07CA call    sub_3E06A0
//   0x3E07CF add     rsp, 8
//   0x3E07D3 movzx   eax, al
//   0x3E07D6 pop     rbx
//   0x3E07D7 pop     rbp
//   0x3E07D8 retn
//   0x3E07D9 align 20h
//   0x3E07E0 mov     rdx, [rbp+8]
//   0x3E07E4 lea     rax, [rdx+8]
//   0x3E07E8 mov     [rbp+8], rax
//   0x3E07EC jmp     short loc_3E07B4
// ============================================================

void sub_3E0740(/* signature unknown */)
{
    // see disassembly above
}

