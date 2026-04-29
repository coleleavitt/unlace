// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3DA180
// Name:           sub_3DA180
// Function size:  174 bytes (54 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3DA180 push    rbp
//   0x3DA181 xor     eax, eax
//   0x3DA183 mov     rbp, rsi
//   0x3DA186 push    rbx
//   0x3DA187 mov     rbx, rdi
//   0x3DA18A mov     edi, 3Dh ; '='
//   0x3DA18F sub     rsp, 8
//   0x3DA193 mov     rdx, cs:callui_ptr
//   0x3DA19A call    qword ptr [rdx]
//   0x3DA19C mov     rdx, [rbx+828h]
//   0x3DA1A3 mov     rcx, [rbx+830h]
//   0x3DA1AA lea     rcx, [rdx+rcx*8]
//   0x3DA1AE cmp     rdx, rcx
//   0x3DA1B1 jz      short loc_3DA1D6
//   0x3DA1B3 nop     word ptr [rax+rax+00000000h]
//   0x3DA1BE xchg    ax, ax
//   0x3DA1C0 mov     rbx, [rdx]
//   0x3DA1C3 test    rbx, rbx
//   0x3DA1C6 jz      short loc_3DA1CD
//   0x3DA1C8 cmp     rax, [rbx]
//   0x3DA1CB jz      short loc_3DA1E0
//   0x3DA1CD add     rdx, 8
//   0x3DA1D1 cmp     rcx, rdx
//   0x3DA1D4 jnz     short loc_3DA1C0
//   0x3DA1D6 add     rsp, 8
//   0x3DA1DA xor     eax, eax
//   0x3DA1DC pop     rbx
//   0x3DA1DD pop     rbp
//   0x3DA1DE retn
//   0x3DA1DF align 20h
//   0x3DA1E0 mov     eax, [rbp+0]
//   0x3DA1E3 cmp     eax, 2Fh ; '/'
//   0x3DA1E6 ja      short loc_3DA220
//   0x3DA1E8 mov     edx, eax
//   0x3DA1EA add     eax, 8
//   0x3DA1ED add     rdx, [rbp+10h]
//   0x3DA1F1 mov     [rbp+0], eax
//   0x3DA1F4 mov     rdi, [rdx]; s1
//   0x3DA1F7 lea     rsi, aJumpenter; "JumpEnter"
//   0x3DA1FE call    _strcmp
//   0x3DA203 test    eax, eax
//   0x3DA205 jnz     short loc_3DA1D6
//   0x3DA207 mov     rdi, rbx
//   0x3DA20A call    sub_3DA0E0
//   0x3DA20F add     rsp, 8
//   0x3DA213 movzx   eax, al
//   0x3DA216 pop     rbx
//   0x3DA217 pop     rbp
//   0x3DA218 retn
//   0x3DA219 align 20h
//   0x3DA220 mov     rdx, [rbp+8]
//   0x3DA224 lea     rax, [rdx+8]
//   0x3DA228 mov     [rbp+8], rax
//   0x3DA22C jmp     short loc_3DA1F4
// ============================================================

void sub_3DA180(/* signature unknown */)
{
    // see disassembly above
}

