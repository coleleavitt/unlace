// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x1F6130
// Name:           sub_1F6130
// Function size:  798 bytes (172 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x1F6130 push    r12
//   0x1F6132 push    rbp
//   0x1F6133 push    rbx
//   0x1F6134 sub     rsp, 50h
//   0x1F6138 mov     rax, fs:28h
//   0x1F6141 mov     [rsp+68h+var_20], rax
//   0x1F6146 xor     eax, eax
//   0x1F6148 test    byte ptr [rdi+2], 8
//   0x1F614C jnz     short loc_1F615A
//   0x1F614E cmp     dword ptr [rdi+138h], 7
//   0x1F6155 mov     rbx, rdi
//   0x1F6158 jle     short loc_1F6180
//   0x1F615A mov     rax, [rsp+68h+var_20]
//   0x1F615F sub     rax, fs:28h
//   0x1F6168 jnz     loc_1F6417
//   0x1F616E add     rsp, 50h
//   0x1F6172 pop     rbx
//   0x1F6173 pop     rbp
//   0x1F6174 pop     r12
//   0x1F6176 retn
//   0x1F6177 align 20h
//   0x1F6180 mov     rbp, [rdi+3A8h]
//   0x1F6187 mov     rdi, [rbp+18h]
//   0x1F618B test    rdi, rdi
//   0x1F618E jz      short loc_1F61AD
//   0x1F6190 mov     qword ptr [rbp+20h], 0
//   0x1F6198 call    _qfree
//   0x1F619D mov     qword ptr [rbp+18h], 0
//   0x1F61A5 mov     qword ptr [rbp+28h], 0
//   0x1F61AD mov     dword ptr [rbp+30h], 0FFFFFFFFh
//   0x1F61B4 mov     rdi, rbx
//   0x1F61B7 call    sub_1F5F30
//   0x1F61BC test    eax, eax
//   0x1F61BE jnz     loc_1F641C
//   0x1F61C4 cmp     byte ptr [rbx+140h], 0
//   0x1F61CB mov     rbp, rsp
//   0x1F61CE jnz     loc_1F625D
//   0x1F61D4 mov     rdi, rbx
//   0x1F61D7 lea     r12, off_4B0E58
//   0x1F61DE call    sub_379280
//   0x1F61E3 mov     rdi, rbx
//   0x1F61E6 call    sub_36DA80
//   0x1F61EB pxor    xmm0, xmm0
//   0x1F61EF mov     rsi, rsp
//   0x1F61F2 mov     rdi, rbx
//   0x1F61F5 mov     [rsp+68h+var_60], 0
//   0x1F61FE mov     [rsp+68h+var_58], 0
//   0x1F6207 mov     [rsp+68h+var_50], 0
//   0x1F6210 mov     [rsp+68h+var_48], 0
//   0x1F6219 mov     [rsp+68h+var_68], r12
//   0x1F621D mov     [rsp+68h+var_40], 0
//   0x1F6226 mov     [rsp+68h+var_28], 0
//   0x1F622F movaps  [rsp+68h+var_38], xmm0
//   0x1F6234 call    sub_3164F0
//   0x1F6239 mov     rdi, rbx
//   0x1F623C call    sub_1ECA00
//   0x1F6241 mov     rdi, [rsp+68h+var_40]
//   0x1F6246 mov     [rsp+68h+var_68], r12
//   0x1F624A test    rdi, rdi
//   0x1F624D jz      short loc_1F625D
//   0x1F624F mov     qword ptr [rsp+68h+var_38], 0
//   0x1F6258 call    _qfree
//   0x1F625D mov     rdi, rbx
//   0x1F6260 call    sub_FABC0
//   0x1F6265 or      dword ptr [rbx], 80000h
//   0x1F626B mov     rdi, rbx
//   0x1F626E call    sub_1EED50
//   0x1F6273 mov     rdi, rbx
//   0x1F6276 call    sub_138280
//   0x1F627B mov     rdi, rbx
//   0x1F627E call    sub_20E820
//   0x1F6283 mov     rdi, rbx
//   0x1F6286 call    sub_20EA50
//   0x1F628B mov     rdi, rbx
//   0x1F628E call    sub_20EB90
//   0x1F6293 mov     rdi, rbx
//   0x1F6296 call    sub_214FD0
//   0x1F629B mov     rsi, rbp
//   0x1F629E lea     rax, off_4B15D0
//   0x1F62A5 mov     rdi, rbx
//   0x1F62A8 mov     [rsp+68h+var_60], 0
//   0x1F62B1 mov     [rsp+68h+var_58], 0
//   0x1F62BA mov     [rsp+68h+var_50], 0
//   0x1F62C3 mov     [rsp+68h+var_48], 0
//   0x1F62CC mov     [rsp+68h+var_68], rax
//   0x1F62D0 call    sub_11B520
//   0x1F62D5 mov     rdi, rbx
//   0x1F62D8 call    sub_2156C0
//   0x1F62DD mov     rdi, rbx
//   0x1F62E0 call    sub_20EDA0
//   0x1F62E5 mov     rsi, rbp
//   0x1F62E8 mov     rdi, rbx
//   0x1F62EB mov     byte ptr [rsp+68h+var_40], 0
//   0x1F62F0 mov     [rsp+68h+var_60], 0
//   0x1F62F9 lea     rax, off_4B1698
//   0x1F6300 mov     [rsp+68h+var_58], 0
//   0x1F6309 mov     [rsp+68h+var_50], 0
//   0x1F6312 mov     [rsp+68h+var_48], 0
//   0x1F631B mov     [rsp+68h+var_68], rax
//   0x1F631F call    sub_11B6F0
//   0x1F6324 mov     rdi, rbx
//   0x1F6327 call    sub_1EC640
//   0x1F632C mov     rdi, rbx
//   0x1F632F call    sub_2166A0
//   0x1F6334 mov     eax, [rbx+48h]
//   0x1F6337 cmp     eax, 10h
//   0x1F633A jbe     loc_1F6408
//   0x1F6340 cmp     eax, 0B0h
//   0x1F6345 jz      short loc_1F63B0
//   0x1F6347 cmp     eax, 100h
//   0x1F634C jz      short loc_1F63B0
//   0x1F634E mov     rax, [rbx+1B8h]
//   0x1F6355 mov     rbp, [rbx+1B0h]
//   0x1F635C lea     rdx, [rax+rax*2]
//   0x1F6360 lea     rax, [rax+rdx*4]
//   0x1F6364 lea     r12, [rbp+rax*8+0]
//   0x1F6369 cmp     r12, rbp
//   0x1F636C jnz     short loc_1F6379
//   0x1F636E jmp     short loc_1F63B0
//   0x1F6370 add     rbp, 68h ; 'h'
//   0x1F6374 cmp     r12, rbp
//   0x1F6377 jz      short loc_1F63B0
//   0x1F6379 test    byte ptr [rbp+19h], 1
//   0x1F637D jz      short loc_1F6370
//   0x1F637F mov     rdi, [rbp+50h]
//   0x1F6383 mov     esi, 2
//   0x1F6388 call    _get_tinfo_property
//   0x1F638D and     eax, 0Fh
//   0x1F6390 cmp     al, 0Bh
//   0x1F6392 jnz     short loc_1F6370
//   0x1F6394 mov     edx, 15h
//   0x1F6399 mov     rsi, 0FFFFFFFFFFFFFFFFh
//   0x1F63A0 mov     rdi, rbx
//   0x1F63A3 xor     eax, eax
//   0x1F63A5 call    sub_32BE10
//   0x1F63AA nop     word ptr [rax+rax+00h]
//   0x1F63B0 mov     rdi, [rbx+3A8h]
//   0x1F63B7 mov     rax, [rdi]
//   0x1F63BA call    qword ptr [rax+40h]
//   0x1F63BD mov     esi, 8
//   0x1F63C2 mov     rdi, rbx
//   0x1F63C5 call    sub_32BB40
//   0x1F63CA xor     esi, esi
//   0x1F63CC xor     eax, eax
//   0x1F63CE lea     rdx, aAfterAllocLvar; "after alloc_lvar"
//   0x1F63D5 mov     rdi, rbx
//   0x1F63D8 call    sub_62C20
//   0x1F63DD mov     rax, [rsp+68h+var_20]
//   0x1F63E2 sub     rax, fs:28h
//   0x1F63EB jnz     short loc_1F6417
//   0x1F63ED add     rsp, 50h
//   0x1F63F1 mov     rdi, rbx
//   0x1F63F4 mov     esi, 1
//   0x1F63F9 pop     rbx
//   0x1F63FA pop     rbp
//   0x1F63FB pop     r12
//   0x1F63FD jmp     sub_31CDD0
//   0x1F6402 align 8
//   0x1F6408 mov     edi, 63h ; 'c'
//   0x1F640D call    _getinf
//   0x1F6412 jmp     loc_1F6340
//   0x1F6417 call    ___stack_chk_fail
//   0x1F641C mov     rax, cs:under_debugger_ptr
//   0x1F6423 cmp     byte ptr [rax], 0
//   0x1F6426 jnz     loc_42B8E
//   0x1F642C mov     rax, [rsp+68h+var_20]
//   0x1F6431 sub     rax, fs:28h
//   0x1F643A jnz     short loc_1F6417
//   0x1F643C mov     edi, 0C4B4h
//   0x1F6441 call    sub_37DDE0
//   0x1F6446 mov     rbx, rax
//   0x1F6449 jmp     loc_42B90
// ============================================================

void sub_1F6130(/* signature unknown */)
{
    // see disassembly above
}

