// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3DC080
// Name:           sub_3DC080
// Function size:  174 bytes (54 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3DC080 push    rbp
//   0x3DC081 xor     eax, eax
//   0x3DC083 mov     rbp, rsi
//   0x3DC086 push    rbx
//   0x3DC087 mov     rbx, rdi
//   0x3DC08A mov     edi, 3Dh ; '='
//   0x3DC08F sub     rsp, 8
//   0x3DC093 mov     rdx, cs:callui_ptr
//   0x3DC09A call    qword ptr [rdx]
//   0x3DC09C mov     rdx, [rbx+828h]
//   0x3DC0A3 mov     rcx, [rbx+830h]
//   0x3DC0AA lea     rcx, [rdx+rcx*8]
//   0x3DC0AE cmp     rdx, rcx
//   0x3DC0B1 jz      short loc_3DC0D6
//   0x3DC0B3 nop     word ptr [rax+rax+00000000h]
//   0x3DC0BE xchg    ax, ax
//   0x3DC0C0 mov     rbx, [rdx]
//   0x3DC0C3 test    rbx, rbx
//   0x3DC0C6 jz      short loc_3DC0CD
//   0x3DC0C8 cmp     rax, [rbx]
//   0x3DC0CB jz      short loc_3DC0E0
//   0x3DC0CD add     rdx, 8
//   0x3DC0D1 cmp     rcx, rdx
//   0x3DC0D4 jnz     short loc_3DC0C0
//   0x3DC0D6 add     rsp, 8
//   0x3DC0DA xor     eax, eax
//   0x3DC0DC pop     rbx
//   0x3DC0DD pop     rbp
//   0x3DC0DE retn
//   0x3DC0DF align 20h
//   0x3DC0E0 mov     eax, [rbp+0]
//   0x3DC0E3 cmp     eax, 2Fh ; '/'
//   0x3DC0E6 ja      short loc_3DC120
//   0x3DC0E8 mov     edx, eax
//   0x3DC0EA add     eax, 8
//   0x3DC0ED add     rdx, [rbp+10h]
//   0x3DC0F1 mov     [rbp+0], eax
//   0x3DC0F4 mov     rdi, [rdx]; s1
//   0x3DC0F7 lea     rsi, aJumpenter; "JumpEnter"
//   0x3DC0FE call    _strcmp
//   0x3DC103 test    eax, eax
//   0x3DC105 jnz     short loc_3DC0D6
//   0x3DC107 mov     rdi, rbx
//   0x3DC10A call    sub_3DBFE0
//   0x3DC10F add     rsp, 8
//   0x3DC113 movzx   eax, al
//   0x3DC116 pop     rbx
//   0x3DC117 pop     rbp
//   0x3DC118 retn
//   0x3DC119 align 20h
//   0x3DC120 mov     rdx, [rbp+8]
//   0x3DC124 lea     rax, [rdx+8]
//   0x3DC128 mov     [rbp+8], rax
//   0x3DC12C jmp     short loc_3DC0F4
// ============================================================

void sub_3DC080(/* signature unknown */)
{
    // see disassembly above
}

