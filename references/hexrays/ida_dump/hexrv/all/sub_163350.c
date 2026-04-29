// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x163350
// Name:           sub_163350
// Function size:  428 bytes (109 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x163350 push    r15
//   0x163352 mov     r15d, 0FFFFFFFFh
//   0x163358 push    r14
//   0x16335A push    r13
//   0x16335C push    r12
//   0x16335E mov     r12, rsi
//   0x163361 push    rbp
//   0x163362 mov     rbp, rdi
//   0x163365 push    rbx
//   0x163366 xor     ebx, ebx
//   0x163368 sub     rsp, 68h
//   0x16336C mov     rax, [rdi+1E0h]
//   0x163373 mov     r13, fs:28h
//   0x16337C mov     [rsp+98h+var_40], r13
//   0x163381 mov     r13d, edx
//   0x163384 mov     rax, [rax+70h]
//   0x163388 mov     [rsp+98h+var_90], rax
//   0x16338D mov     eax, r13d
//   0x163390 and     eax, 4
//   0x163393 mov     [rsp+98h+var_94], eax
//   0x163397 jmp     loc_163439
//   0x16339C align 20h
//   0x1633A0 test    r15d, r15d
//   0x1633A3 jz      loc_163480
//   0x1633A9 sub     rsp, 8
//   0x1633AD mov     rcx, r12
//   0x1633B0 mov     rdx, rbp
//   0x1633B3 xor     r8d, r8d
//   0x1633B6 mov     [rsp+0A0h+var_80], 0FFFFFFFFFFFFFFFFh
//   0x1633BF mov     rdi, r12
//   0x1633C2 push    r13
//   0x1633C4 mov     rsi, [rsp+0A8h+var_90]
//   0x1633C9 lea     r9, [rsp+0A8h+var_80]
//   0x1633CE call    sub_1577B0
//   0x1633D3 mov     r15d, eax
//   0x1633D6 mov     rax, [rsp+0A8h+var_80]
//   0x1633DB pop     rdx
//   0x1633DC pop     rcx
//   0x1633DD cmp     rax, 0FFFFFFFFFFFFFFFFh
//   0x1633E1 jz      short loc_16342A
//   0x1633E3 mov     rdx, [rbp+40h]
//   0x1633E7 lea     rsi, [rsp+98h+var_78]
//   0x1633EC mov     rdi, r12
//   0x1633EF mov     [rsp+98h+var_68], rbp
//   0x1633F4 lea     rcx, off_4B07D0
//   0x1633FB mov     [rsp+98h+var_60], r12
//   0x163400 mov     [rsp+98h+var_70], rdx
//   0x163405 mov     [rsp+98h+var_58], 0
//   0x16340E mov     [rsp+98h+var_78], rcx
//   0x163413 mov     [rsp+98h+var_50], rax
//   0x163418 mov     [rsp+98h+var_48], 0
//   0x163420 call    sub_11B2A0
//   0x163425 add     r14d, [rsp+98h+var_48]
//   0x16342A mov     eax, r14d
//   0x16342D or      eax, r15d
//   0x163430 jz      short loc_163480
//   0x163432 lea     r10d, [r14+r15]
//   0x163436 add     ebx, r10d
//   0x163439 mov     rsi, r12
//   0x16343C mov     edx, r13d
//   0x16343F mov     rdi, rbp
//   0x163442 xor     r14d, r14d
//   0x163445 call    sub_155B00
//   0x16344A mov     esi, [rsp+98h+var_94]
//   0x16344E movzx   eax, al
//   0x163451 add     ebx, eax
//   0x163453 test    esi, esi
//   0x163455 jz      loc_1633A0
//   0x16345B mov     rsi, r12
//   0x16345E mov     rdi, rbp
//   0x163461 call    sub_AF210
//   0x163466 movzx   r14d, al
//   0x16346A or      r15d, r14d
//   0x16346D test    r15d, r15d
//   0x163470 jnz     loc_1633A9
//   0x163476 nop     word ptr [rax+rax+00000000h]
//   0x163480 mov     rax, [rbp+1E0h]
//   0x163487 mov     r14, [rax+428h]
//   0x16348E mov     rax, [rax+430h]
//   0x163495 shl     rax, 3
//   0x163499 jz      short loc_1634D6
//   0x16349B nop     dword ptr [rax+rax+00h]
//   0x1634A0 mov     rdi, [r14]
//   0x1634A3 mov     rdx, r12
//   0x1634A6 mov     ecx, r13d
//   0x1634A9 mov     rsi, rbp
//   0x1634AC add     r14, 8
//   0x1634B0 mov     rax, [rdi]
//   0x1634B3 call    qword ptr [rax+10h]
//   0x1634B6 add     ebx, eax
//   0x1634B8 mov     rax, [rbp+1E0h]
//   0x1634BF mov     rdx, [rax+430h]
//   0x1634C6 mov     rax, [rax+428h]
//   0x1634CD lea     rax, [rax+rdx*8]
//   0x1634D1 cmp     r14, rax
//   0x1634D4 jnz     short loc_1634A0
//   0x1634D6 mov     rax, [rsp+98h+var_40]
//   0x1634DB sub     rax, fs:28h
//   0x1634E4 jnz     short loc_1634F7
//   0x1634E6 add     rsp, 68h
//   0x1634EA mov     eax, ebx
//   0x1634EC pop     rbx
//   0x1634ED pop     rbp
//   0x1634EE pop     r12
//   0x1634F0 pop     r13
//   0x1634F2 pop     r14
//   0x1634F4 pop     r15
//   0x1634F6 retn
//   0x1634F7 call    ___stack_chk_fail
// ============================================================

void sub_163350(/* signature unknown */)
{
    // see disassembly above
}

