// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3E0200
// Name:           sub_3E0200
// Function size:  174 bytes (54 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3E0200 push    rbp
//   0x3E0201 xor     eax, eax
//   0x3E0203 mov     rbp, rsi
//   0x3E0206 push    rbx
//   0x3E0207 mov     rbx, rdi
//   0x3E020A mov     edi, 3Dh ; '='
//   0x3E020F sub     rsp, 8
//   0x3E0213 mov     rdx, cs:callui_ptr
//   0x3E021A call    qword ptr [rdx]
//   0x3E021C mov     rdx, [rbx+828h]
//   0x3E0223 mov     rcx, [rbx+830h]
//   0x3E022A lea     rcx, [rdx+rcx*8]
//   0x3E022E cmp     rdx, rcx
//   0x3E0231 jz      short loc_3E0256
//   0x3E0233 nop     word ptr [rax+rax+00000000h]
//   0x3E023E xchg    ax, ax
//   0x3E0240 mov     rbx, [rdx]
//   0x3E0243 test    rbx, rbx
//   0x3E0246 jz      short loc_3E024D
//   0x3E0248 cmp     rax, [rbx]
//   0x3E024B jz      short loc_3E0260
//   0x3E024D add     rdx, 8
//   0x3E0251 cmp     rcx, rdx
//   0x3E0254 jnz     short loc_3E0240
//   0x3E0256 add     rsp, 8
//   0x3E025A xor     eax, eax
//   0x3E025C pop     rbx
//   0x3E025D pop     rbp
//   0x3E025E retn
//   0x3E025F align 20h
//   0x3E0260 mov     eax, [rbp+0]
//   0x3E0263 cmp     eax, 2Fh ; '/'
//   0x3E0266 ja      short loc_3E02A0
//   0x3E0268 mov     edx, eax
//   0x3E026A add     eax, 8
//   0x3E026D add     rdx, [rbp+10h]
//   0x3E0271 mov     [rbp+0], eax
//   0x3E0274 mov     rdi, [rdx]; s1
//   0x3E0277 lea     rsi, aJumpenter; "JumpEnter"
//   0x3E027E call    _strcmp
//   0x3E0283 test    eax, eax
//   0x3E0285 jnz     short loc_3E0256
//   0x3E0287 mov     rdi, rbx
//   0x3E028A call    sub_3E0160
//   0x3E028F add     rsp, 8
//   0x3E0293 movzx   eax, al
//   0x3E0296 pop     rbx
//   0x3E0297 pop     rbp
//   0x3E0298 retn
//   0x3E0299 align 20h
//   0x3E02A0 mov     rdx, [rbp+8]
//   0x3E02A4 lea     rax, [rdx+8]
//   0x3E02A8 mov     [rbp+8], rax
//   0x3E02AC jmp     short loc_3E0274
// ============================================================

void sub_3E0200(/* signature unknown */)
{
    // see disassembly above
}

