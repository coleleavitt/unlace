// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x28C360
// Name:           sub_28C360
// Function size:  951 bytes (245 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x28C360 push    r15
//   0x28C362 push    r14
//   0x28C364 push    r13
//   0x28C366 push    r12
//   0x28C368 push    rbp
//   0x28C369 mov     rbp, rdi
//   0x28C36C push    rbx
//   0x28C36D sub     rsp, 28h
//   0x28C371 mov     rdx, [rdi+18h]
//   0x28C375 mov     rax, [rdi+10h]
//   0x28C379 mov     rbx, fs:28h
//   0x28C382 mov     [rsp+58h+var_40], rbx
//   0x28C387 mov     rbx, rsi
//   0x28C38A lea     r12, [rsp+58h+var_50]
//   0x28C38F mov     r15, [rax+rdx*8-8]
//   0x28C394 mov     rsi, r12
//   0x28C397 mov     [rsp+58h+var_50], 0
//   0x28C3A0 mov     rdx, rbx
//   0x28C3A3 call    sub_27FD00
//   0x28C3A8 test    al, al
//   0x28C3AA jnz     short loc_28C3F3
//   0x28C3AC cmp     dword ptr [r15+8], 10h
//   0x28C3B1 jnz     loc_28C580
//   0x28C3B7 cmp     [r15+18h], rbx
//   0x28C3BB jz      loc_28C580
//   0x28C3C1 mov     rdi, [rbx+30h]
//   0x28C3C5 mov     esi, 2
//   0x28C3CA call    _get_tinfo_property
//   0x28C3CF and     eax, 3Fh
//   0x28C3D2 cmp     al, 1
//   0x28C3D4 jz      loc_28C580
//   0x28C3DA mov     rax, [r15+20h]
//   0x28C3DE lea     rsi, [rax+30h]
//   0x28C3E2 cmp     rax, rbx
//   0x28C3E5 jz      loc_28C6A8
//   0x28C3EB mov     rdi, r12
//   0x28C3EE call    _copy_tinfo_t
//   0x28C3F3 mov     rsi, [rbx+30h]
//   0x28C3F7 xor     edx, edx
//   0x28C3F9 xor     edi, edi
//   0x28C3FB call    _get_tinfo_size
//   0x28C400 mov     rsi, [rsp+58h+var_50]
//   0x28C405 xor     edx, edx
//   0x28C407 xor     edi, edi
//   0x28C409 mov     r13, rax
//   0x28C40C call    _get_tinfo_size
//   0x28C411 cmp     dword ptr [r15+8], 39h ; '9'
//   0x28C416 mov     r14, rax
//   0x28C419 jnz     short loc_28C470
//   0x28C41B cmp     rbx, [r15+18h]
//   0x28C41F jz      short loc_28C470
//   0x28C421 xor     edx, edx
//   0x28C423 mov     rsi, rbx
//   0x28C426 mov     rdi, r15
//   0x28C429 call    sub_27F760
//   0x28C42E movzx   r15d, byte ptr [rax+3Ch]
//   0x28C433 test    r15b, r15b
//   0x28C436 jz      short loc_28C470
//   0x28C438 lea     r14, [rbx+30h]
//   0x28C43C mov     rdx, rbx
//   0x28C43F mov     rsi, rbx
//   0x28C442 mov     rdi, rbp
//   0x28C445 mov     rcx, r14
//   0x28C448 call    sub_28B370
//   0x28C44D test    al, al
//   0x28C44F jnz     loc_28C580
//   0x28C455 cmp     dword ptr [rbx+8], 30h ; '0'
//   0x28C459 jz      loc_28C610
//   0x28C45F mov     rsi, r12
//   0x28C462 mov     rdi, rbx
//   0x28C465 call    sub_240270
//   0x28C46A jmp     loc_28C583
//   0x28C46F align 10h
//   0x28C470 mov     rax, [rbp+48h]
//   0x28C474 mov     edx, [rbx+8]
//   0x28C477 mov     rsi, [rax+70h]
//   0x28C47B cmp     edx, 33h ; '3'
//   0x28C47E jnz     loc_28C5B8
//   0x28C484 mov     ecx, [rsi+54h]
//   0x28C487 mov     rax, rbx
//   0x28C48A jmp     short loc_28C4B0
//   0x28C48C align 20h
//   0x28C4A0 mov     rax, [rax+18h]
//   0x28C4A4 mov     edx, [rax+8]
//   0x28C4A7 cmp     edx, 33h ; '3'
//   0x28C4AA jnz     loc_28C5B8
//   0x28C4B0 cmp     [rax+28h], ecx
//   0x28C4B3 jz      short loc_28C4A0
//   0x28C4B5 mov     rdi, [rbp+18h]
//   0x28C4B9 mov     esi, [rsi+54h]
//   0x28C4BC mov     r8, [rbp+10h]
//   0x28C4C0 mov     eax, edi
//   0x28C4C2 sub     eax, 1
//   0x28C4C5 js      loc_28C6F4
//   0x28C4CB mov     edx, eax
//   0x28C4CD lea     rcx, [r8+rdx*8]
//   0x28C4D1 jmp     short loc_28C4E9
//   0x28C4D3 align 8
//   0x28C4D8 cmp     esi, [rdx+28h]
//   0x28C4DB jnz     short loc_28C4F2
//   0x28C4DD sub     eax, 1
//   0x28C4E0 sub     rcx, 8
//   0x28C4E4 cmp     eax, 0FFFFFFFFh
//   0x28C4E7 jz      short loc_28C503
//   0x28C4E9 mov     rdx, [rcx]
//   0x28C4EC cmp     dword ptr [rdx+8], 33h ; '3'
//   0x28C4F0 jz      short loc_28C4D8
//   0x28C4F2 movsxd  rdx, eax
//   0x28C4F5 mov     rcx, [r8+rdx*8]
//   0x28C4F9 cmp     dword ptr [rcx+8], 39h ; '9'
//   0x28C4FD jz      loc_28C6B8
//   0x28C503 cmp     r13d, 0FFFFFFFFh
//   0x28C507 jz      loc_28C5F0
//   0x28C50D cmp     r14d, 0FFFFFFFFh
//   0x28C511 jz      short loc_28C580
//   0x28C513 mov     rdi, [rbp+48h]
//   0x28C517 lea     rcx, [rbx+30h]
//   0x28C51B mov     rdx, r12
//   0x28C51E mov     rsi, rbx
//   0x28C521 call    sub_27BF80
//   0x28C526 test    al, al
//   0x28C528 jz      short loc_28C580
//   0x28C52A mov     rdi, [rbx+30h]
//   0x28C52E mov     esi, 2
//   0x28C533 call    _get_tinfo_property
//   0x28C538 and     eax, 0Fh
//   0x28C53B cmp     al, 0Ah
//   0x28C53D jnz     loc_28C5D0
//   0x28C543 cmp     dword ptr [rbx+8], 30h ; '0'
//   0x28C547 jz      loc_28C5D0
//   0x28C54D mov     rdi, [rsp+58h+var_50]
//   0x28C552 mov     esi, 9
//   0x28C557 mov     [rsp+58h+var_48], 0
//   0x28C560 call    _get_tinfo_property
//   0x28C565 mov     [rsp+58h+var_48], rax
//   0x28C56A test    al, 0Eh
//   0x28C56C jnz     short loc_28C5C6
//   0x28C56E test    al, 30h
//   0x28C570 jz      short loc_28C5C6
//   0x28C572 lea     rdi, [rsp+58h+var_48]
//   0x28C577 call    _clear_tinfo_t
//   0x28C57C nop     dword ptr [rax+00h]
//   0x28C580 xor     r15d, r15d
//   0x28C583 mov     rdi, r12
//   0x28C586 call    _clear_tinfo_t
//   0x28C58B mov     rax, [rsp+58h+var_40]
//   0x28C590 sub     rax, fs:28h
//   0x28C599 jnz     loc_28C702
//   0x28C59F add     rsp, 28h
//   0x28C5A3 mov     eax, r15d
//   0x28C5A6 pop     rbx
//   0x28C5A7 pop     rbp
//   0x28C5A8 pop     r12
//   0x28C5AA pop     r13
//   0x28C5AC pop     r14
//   0x28C5AE pop     r15
//   0x28C5B0 retn
//   0x28C5B1 align 8
//   0x28C5B8 cmp     edx, 30h ; '0'
//   0x28C5BB jz      loc_28C503
//   0x28C5C1 jmp     loc_28C4B5
//   0x28C5C6 lea     rdi, [rsp+58h+var_48]
//   0x28C5CB call    _clear_tinfo_t
//   0x28C5D0 cmp     r13d, r14d
//   0x28C5D3 jnz     short loc_28C5F0
//   0x28C5D5 mov     rdi, r12
//   0x28C5D8 call    sub_328770
//   0x28C5DD test    al, al
//   0x28C5DF jnz     short loc_28C580
//   0x28C5E1 nop     word ptr [rax+rax+00000000h]
//   0x28C5EC nop     dword ptr [rax+00h]
//   0x28C5F0 mov     rsi, [rbp+48h]
//   0x28C5F4 mov     rdx, r12
//   0x28C5F7 mov     rdi, rbx
//   0x28C5FA call    sub_241F40
//   0x28C5FF mov     r15d, eax
//   0x28C602 jmp     loc_28C583
//   0x28C607 align 10h
//   0x28C610 mov     rax, [rbx+18h]
//   0x28C614 xor     edx, edx
//   0x28C616 xor     edi, edi
//   0x28C618 mov     rsi, [rax+30h]
//   0x28C61C call    _get_tinfo_size
//   0x28C621 movsxd  r13, r13d
//   0x28C624 cmp     r13, rax
//   0x28C627 jnz     loc_28C45F
//   0x28C62D mov     rax, [rbx+18h]
//   0x28C631 mov     esi, 2
//   0x28C636 mov     rdi, [rax+30h]
//   0x28C63A call    _get_tinfo_property
//   0x28C63F and     eax, 0Fh
//   0x28C642 mov     rdi, [rbx+30h]
//   0x28C646 mov     esi, 2
//   0x28C64B cmp     al, 9
//   0x28C64D setz    bpl
//   0x28C651 call    _get_tinfo_property
//   0x28C656 and     eax, 0Fh
//   0x28C659 cmp     al, 9
//   0x28C65B setz    al
//   0x28C65E cmp     bpl, al
//   0x28C661 jnz     loc_28C45F
//   0x28C667 mov     rax, [rbx+18h]
//   0x28C66B mov     esi, 3
//   0x28C670 mov     rdi, [rax+30h]
//   0x28C674 call    _get_tinfo_property
//   0x28C679 mov     rdi, [rbx+30h]
//   0x28C67D mov     esi, 3
//   0x28C682 mov     rbp, rax
//   0x28C685 call    _get_tinfo_property
//   0x28C68A cmp     ebp, eax
//   0x28C68C jnz     loc_28C45F
//   0x28C692 mov     rsi, r12
//   0x28C695 mov     rdi, r14
//   0x28C698 call    _copy_tinfo_t
//   0x28C69D jmp     loc_28C583
//   0x28C6A2 align 8
//   0x28C6A8 mov     rax, [r15+28h]
//   0x28C6AC lea     rsi, [rax+30h]
//   0x28C6B0 jmp     loc_28C3EB
//   0x28C6B5 align 8
//   0x28C6B8 sub     rdi, 1
//   0x28C6BC mov     rsi, [rcx+18h]
//   0x28C6C0 mov     rcx, rbx
//   0x28C6C3 cmp     rdx, rdi
//   0x28C6C6 jz      short loc_28C6D1
//   0x28C6C8 add     eax, 1
//   0x28C6CB cdqe
//   0x28C6CD mov     rcx, [r8+rax*8]
//   0x28C6D1 cmp     rsi, rcx
//   0x28C6D4 jnz     loc_28C503
//   0x28C6DA xor     edx, edx
//   0x28C6DC mov     rsi, r12
//   0x28C6DF mov     rdi, rbx
//   0x28C6E2 call    sub_27B5E0
//   0x28C6E7 test    al, al
//   0x28C6E9 jnz     loc_28C503
//   0x28C6EF jmp     loc_28C580
//   0x28C6F4 cmp     eax, 0FFFFFFFFh
//   0x28C6F7 jz      loc_28C503
//   0x28C6FD jmp     loc_28C4F2
//   0x28C702 call    ___stack_chk_fail
//   0x28C707 mov     rbx, rax
//   0x28C70A jmp     loc_4B82A
//   0x28C70F mov     rbx, rax
//   0x28C712 jmp     loc_4B834
// ============================================================

void sub_28C360(/* signature unknown */)
{
    // see disassembly above
}

