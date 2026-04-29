// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3DB300
// Name:           sub_3DB300
// Function size:  174 bytes (54 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3DB300 push    rbp
//   0x3DB301 xor     eax, eax
//   0x3DB303 mov     rbp, rsi
//   0x3DB306 push    rbx
//   0x3DB307 mov     rbx, rdi
//   0x3DB30A mov     edi, 3Dh ; '='
//   0x3DB30F sub     rsp, 8
//   0x3DB313 mov     rdx, cs:callui_ptr
//   0x3DB31A call    qword ptr [rdx]
//   0x3DB31C mov     rdx, [rbx+828h]
//   0x3DB323 mov     rcx, [rbx+830h]
//   0x3DB32A lea     rcx, [rdx+rcx*8]
//   0x3DB32E cmp     rdx, rcx
//   0x3DB331 jz      short loc_3DB356
//   0x3DB333 nop     word ptr [rax+rax+00000000h]
//   0x3DB33E xchg    ax, ax
//   0x3DB340 mov     rbx, [rdx]
//   0x3DB343 test    rbx, rbx
//   0x3DB346 jz      short loc_3DB34D
//   0x3DB348 cmp     rax, [rbx]
//   0x3DB34B jz      short loc_3DB360
//   0x3DB34D add     rdx, 8
//   0x3DB351 cmp     rcx, rdx
//   0x3DB354 jnz     short loc_3DB340
//   0x3DB356 add     rsp, 8
//   0x3DB35A xor     eax, eax
//   0x3DB35C pop     rbx
//   0x3DB35D pop     rbp
//   0x3DB35E retn
//   0x3DB35F align 20h
//   0x3DB360 mov     eax, [rbp+0]
//   0x3DB363 cmp     eax, 2Fh ; '/'
//   0x3DB366 ja      short loc_3DB3A0
//   0x3DB368 mov     edx, eax
//   0x3DB36A add     eax, 8
//   0x3DB36D add     rdx, [rbp+10h]
//   0x3DB371 mov     [rbp+0], eax
//   0x3DB374 mov     rdi, [rdx]; s1
//   0x3DB377 lea     rsi, aJumpenter; "JumpEnter"
//   0x3DB37E call    _strcmp
//   0x3DB383 test    eax, eax
//   0x3DB385 jnz     short loc_3DB356
//   0x3DB387 mov     rdi, rbx
//   0x3DB38A call    sub_3DB260
//   0x3DB38F add     rsp, 8
//   0x3DB393 movzx   eax, al
//   0x3DB396 pop     rbx
//   0x3DB397 pop     rbp
//   0x3DB398 retn
//   0x3DB399 align 20h
//   0x3DB3A0 mov     rdx, [rbp+8]
//   0x3DB3A4 lea     rax, [rdx+8]
//   0x3DB3A8 mov     [rbp+8], rax
//   0x3DB3AC jmp     short loc_3DB374
// ============================================================

void sub_3DB300(/* signature unknown */)
{
    // see disassembly above
}

