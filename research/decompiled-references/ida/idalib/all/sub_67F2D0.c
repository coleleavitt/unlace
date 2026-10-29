// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x67F2D0
// Name:           sub_67F2D0
// Function size:  360 bytes (107 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x67F2D0 push    r15
//   0x67F2D2 mov     rsi, 0FFFFFFFFFFFFFFFFh
//   0x67F2D9 push    r14
//   0x67F2DB push    r13
//   0x67F2DD push    r12
//   0x67F2DF lea     r12, [rdi+658h]
//   0x67F2E6 push    rbp
//   0x67F2E7 mov     rbp, rdi
//   0x67F2EA mov     rdi, r12
//   0x67F2ED push    rbx
//   0x67F2EE sub     rsp, 8
//   0x67F2F2 call    sub_5060F0
//   0x67F2F7 test    rax, rax
//   0x67F2FA jz      loc_67F3B8
//   0x67F300 mov     rbx, rax
//   0x67F303 xor     r13d, r13d
//   0x67F306 lea     r14, aHidecancelDele; "HIDECANCEL\nDeleting debug segments"
//   0x67F30D jmp     short loc_67F336
//   0x67F30F align 10h
//   0x67F310 mov     edx, 5
//   0x67F315 mov     rdi, rbp; int
//   0x67F318 mov     r13d, 1
//   0x67F31E call    sub_685C90
//   0x67F323 mov     rsi, r15
//   0x67F326 mov     rdi, r12
//   0x67F329 call    sub_5060F0
//   0x67F32E mov     rbx, rax
//   0x67F331 test    rax, rax
//   0x67F334 jz      short loc_67F370
//   0x67F336 mov     r15, [rbx]
//   0x67F339 test    byte ptr [rbx+2Ch], 8
//   0x67F33D jz      short loc_67F323
//   0x67F33F mov     rsi, r15
//   0x67F342 test    r13b, r13b
//   0x67F345 jnz     short loc_67F310
//   0x67F347 mov     rdi, r14
//   0x67F34A xor     eax, eax
//   0x67F34C call    sub_387AC0
//   0x67F351 mov     rdx, cs:callui_ptr
//   0x67F358 mov     edi, 2Dh ; '-'
//   0x67F35D xor     eax, eax
//   0x67F35F call    qword ptr [rdx]
//   0x67F361 mov     rsi, [rbx]
//   0x67F364 jmp     short loc_67F310
//   0x67F366 align 10h
//   0x67F370 test    r13b, r13b
//   0x67F373 jz      short loc_67F3B8
//   0x67F375 cmp     qword ptr [rbp+308h], 0
//   0x67F37D jz      short loc_67F3D0
//   0x67F37F mov     rbx, cs:callui_ptr
//   0x67F386 xor     edx, edx
//   0x67F388 mov     edi, 18h
//   0x67F38D xor     eax, eax
//   0x67F38F mov     esi, 0Ah
//   0x67F394 mov     rcx, rbx
//   0x67F397 call    qword ptr [rbx]
//   0x67F399 mov     rdx, [rbx]
//   0x67F39C add     rsp, 8
//   0x67F3A0 mov     edi, 2Eh ; '.'
//   0x67F3A5 pop     rbx
//   0x67F3A6 xor     eax, eax
//   0x67F3A8 pop     rbp
//   0x67F3A9 pop     r12
//   0x67F3AB pop     r13
//   0x67F3AD pop     r14
//   0x67F3AF pop     r15
//   0x67F3B1 jmp     rdx
//   0x67F3B3 align 8
//   0x67F3B8 add     rsp, 8
//   0x67F3BC pop     rbx
//   0x67F3BD pop     rbp
//   0x67F3BE pop     r12
//   0x67F3C0 pop     r13
//   0x67F3C2 pop     r14
//   0x67F3C4 pop     r15
//   0x67F3C6 retn
//   0x67F3C7 align 10h
//   0x67F3D0 mov     rdi, rbp
//   0x67F3D3 call    sub_5CAD90
//   0x67F3D8 sub     rax, 1
//   0x67F3DC mov     r12, rax
//   0x67F3DF js      short loc_67F37F
//   0x67F3E1 lea     r13, byte_22F0C30
//   0x67F3E8 jmp     short loc_67F3F6
//   0x67F3EA align 10h
//   0x67F3F0 sub     r12, 1
//   0x67F3F4 jb      short loc_67F37F
//   0x67F3F6 mov     rsi, r12
//   0x67F3F9 mov     rdi, rbp
//   0x67F3FC call    sub_5CAAB0
//   0x67F401 mov     rbx, rax
//   0x67F404 test    rax, rax
//   0x67F407 jz      short loc_67F3F0
//   0x67F409 mov     rsi, [rax]
//   0x67F40C mov     rdi, rbp
//   0x67F40F call    sub_3BD540
//   0x67F414 test    al, al
//   0x67F416 jnz     short loc_67F3F0
//   0x67F418 mov     rsi, [rbx]; int
//   0x67F41B mov     rdi, rbp; int
//   0x67F41E mov     ecx, 100h
//   0x67F423 mov     rdx, r13; src
//   0x67F426 call    sub_4D7EC0
//   0x67F42B mov     rsi, [rbx]
//   0x67F42E mov     rdi, rbp; int
//   0x67F431 call    sub_5D4180
//   0x67F436 jmp     short loc_67F3F0
// ============================================================

void sub_67F2D0(/* signature unknown */)
{
    // see disassembly above
}

