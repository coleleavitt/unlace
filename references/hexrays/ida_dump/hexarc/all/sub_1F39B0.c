// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x1F39B0
// Name:           sub_1F39B0
// Function size:  798 bytes (172 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x1F39B0 push    r12
//   0x1F39B2 push    rbp
//   0x1F39B3 push    rbx
//   0x1F39B4 sub     rsp, 50h
//   0x1F39B8 mov     rax, fs:28h
//   0x1F39C1 mov     [rsp+68h+var_20], rax
//   0x1F39C6 xor     eax, eax
//   0x1F39C8 test    byte ptr [rdi+2], 8
//   0x1F39CC jnz     short loc_1F39DA
//   0x1F39CE cmp     dword ptr [rdi+138h], 7
//   0x1F39D5 mov     rbx, rdi
//   0x1F39D8 jle     short loc_1F3A00
//   0x1F39DA mov     rax, [rsp+68h+var_20]
//   0x1F39DF sub     rax, fs:28h
//   0x1F39E8 jnz     loc_1F3C97
//   0x1F39EE add     rsp, 50h
//   0x1F39F2 pop     rbx
//   0x1F39F3 pop     rbp
//   0x1F39F4 pop     r12
//   0x1F39F6 retn
//   0x1F39F7 align 20h
//   0x1F3A00 mov     rbp, [rdi+3A8h]
//   0x1F3A07 mov     rdi, [rbp+18h]
//   0x1F3A0B test    rdi, rdi
//   0x1F3A0E jz      short loc_1F3A2D
//   0x1F3A10 mov     qword ptr [rbp+20h], 0
//   0x1F3A18 call    _qfree
//   0x1F3A1D mov     qword ptr [rbp+18h], 0
//   0x1F3A25 mov     qword ptr [rbp+28h], 0
//   0x1F3A2D mov     dword ptr [rbp+30h], 0FFFFFFFFh
//   0x1F3A34 mov     rdi, rbx
//   0x1F3A37 call    sub_1F37B0
//   0x1F3A3C test    eax, eax
//   0x1F3A3E jnz     loc_1F3C9C
//   0x1F3A44 cmp     byte ptr [rbx+140h], 0
//   0x1F3A4B mov     rbp, rsp
//   0x1F3A4E jnz     loc_1F3ADD
//   0x1F3A54 mov     rdi, rbx
//   0x1F3A57 lea     r12, off_4AAC18
//   0x1F3A5E call    sub_376C00
//   0x1F3A63 mov     rdi, rbx
//   0x1F3A66 call    sub_36B480
//   0x1F3A6B pxor    xmm0, xmm0
//   0x1F3A6F mov     rsi, rsp
//   0x1F3A72 mov     rdi, rbx
//   0x1F3A75 mov     [rsp+68h+var_60], 0
//   0x1F3A7E mov     [rsp+68h+var_58], 0
//   0x1F3A87 mov     [rsp+68h+var_50], 0
//   0x1F3A90 mov     [rsp+68h+var_48], 0
//   0x1F3A99 mov     [rsp+68h+var_68], r12
//   0x1F3A9D mov     [rsp+68h+var_40], 0
//   0x1F3AA6 mov     [rsp+68h+var_28], 0
//   0x1F3AAF movaps  [rsp+68h+var_38], xmm0
//   0x1F3AB4 call    sub_314270
//   0x1F3AB9 mov     rdi, rbx
//   0x1F3ABC call    sub_1EA280
//   0x1F3AC1 mov     rdi, [rsp+68h+var_40]
//   0x1F3AC6 mov     [rsp+68h+var_68], r12
//   0x1F3ACA test    rdi, rdi
//   0x1F3ACD jz      short loc_1F3ADD
//   0x1F3ACF mov     qword ptr [rsp+68h+var_38], 0
//   0x1F3AD8 call    _qfree
//   0x1F3ADD mov     rdi, rbx
//   0x1F3AE0 call    sub_F89C0
//   0x1F3AE5 or      dword ptr [rbx], 80000h
//   0x1F3AEB mov     rdi, rbx
//   0x1F3AEE call    sub_1EC5D0
//   0x1F3AF3 mov     rdi, rbx
//   0x1F3AF6 call    sub_136080
//   0x1F3AFB mov     rdi, rbx
//   0x1F3AFE call    sub_20C0A0
//   0x1F3B03 mov     rdi, rbx
//   0x1F3B06 call    sub_20C2D0
//   0x1F3B0B mov     rdi, rbx
//   0x1F3B0E call    sub_20C410
//   0x1F3B13 mov     rdi, rbx
//   0x1F3B16 call    sub_212850
//   0x1F3B1B mov     rsi, rbp
//   0x1F3B1E lea     rax, off_4AB390
//   0x1F3B25 mov     rdi, rbx
//   0x1F3B28 mov     [rsp+68h+var_60], 0
//   0x1F3B31 mov     [rsp+68h+var_58], 0
//   0x1F3B3A mov     [rsp+68h+var_50], 0
//   0x1F3B43 mov     [rsp+68h+var_48], 0
//   0x1F3B4C mov     [rsp+68h+var_68], rax
//   0x1F3B50 call    sub_119320
//   0x1F3B55 mov     rdi, rbx
//   0x1F3B58 call    sub_212F40
//   0x1F3B5D mov     rdi, rbx
//   0x1F3B60 call    sub_20C620
//   0x1F3B65 mov     rsi, rbp
//   0x1F3B68 mov     rdi, rbx
//   0x1F3B6B mov     byte ptr [rsp+68h+var_40], 0
//   0x1F3B70 mov     [rsp+68h+var_60], 0
//   0x1F3B79 lea     rax, off_4AB458
//   0x1F3B80 mov     [rsp+68h+var_58], 0
//   0x1F3B89 mov     [rsp+68h+var_50], 0
//   0x1F3B92 mov     [rsp+68h+var_48], 0
//   0x1F3B9B mov     [rsp+68h+var_68], rax
//   0x1F3B9F call    sub_1194F0
//   0x1F3BA4 mov     rdi, rbx
//   0x1F3BA7 call    sub_1E9EC0
//   0x1F3BAC mov     rdi, rbx
//   0x1F3BAF call    sub_213F20
//   0x1F3BB4 mov     eax, [rbx+48h]
//   0x1F3BB7 cmp     eax, 10h
//   0x1F3BBA jbe     loc_1F3C88
//   0x1F3BC0 cmp     eax, 0B0h
//   0x1F3BC5 jz      short loc_1F3C30
//   0x1F3BC7 cmp     eax, 100h
//   0x1F3BCC jz      short loc_1F3C30
//   0x1F3BCE mov     rax, [rbx+1B8h]
//   0x1F3BD5 mov     rbp, [rbx+1B0h]
//   0x1F3BDC lea     rdx, [rax+rax*2]
//   0x1F3BE0 lea     rax, [rax+rdx*4]
//   0x1F3BE4 lea     r12, [rbp+rax*8+0]
//   0x1F3BE9 cmp     r12, rbp
//   0x1F3BEC jnz     short loc_1F3BF9
//   0x1F3BEE jmp     short loc_1F3C30
//   0x1F3BF0 add     rbp, 68h ; 'h'
//   0x1F3BF4 cmp     r12, rbp
//   0x1F3BF7 jz      short loc_1F3C30
//   0x1F3BF9 test    byte ptr [rbp+19h], 1
//   0x1F3BFD jz      short loc_1F3BF0
//   0x1F3BFF mov     rdi, [rbp+50h]
//   0x1F3C03 mov     esi, 2
//   0x1F3C08 call    _get_tinfo_property
//   0x1F3C0D and     eax, 0Fh
//   0x1F3C10 cmp     al, 0Bh
//   0x1F3C12 jnz     short loc_1F3BF0
//   0x1F3C14 mov     edx, 15h
//   0x1F3C19 mov     rsi, 0FFFFFFFFFFFFFFFFh
//   0x1F3C20 mov     rdi, rbx
//   0x1F3C23 xor     eax, eax
//   0x1F3C25 call    sub_329B90
//   0x1F3C2A nop     word ptr [rax+rax+00h]
//   0x1F3C30 mov     rdi, [rbx+3A8h]
//   0x1F3C37 mov     rax, [rdi]
//   0x1F3C3A call    qword ptr [rax+40h]
//   0x1F3C3D mov     esi, 8
//   0x1F3C42 mov     rdi, rbx
//   0x1F3C45 call    sub_3298C0
//   0x1F3C4A xor     esi, esi
//   0x1F3C4C xor     eax, eax
//   0x1F3C4E lea     rdx, aAfterAllocLvar; "after alloc_lvar"
//   0x1F3C55 mov     rdi, rbx
//   0x1F3C58 call    sub_60A20
//   0x1F3C5D mov     rax, [rsp+68h+var_20]
//   0x1F3C62 sub     rax, fs:28h
//   0x1F3C6B jnz     short loc_1F3C97
//   0x1F3C6D add     rsp, 50h
//   0x1F3C71 mov     rdi, rbx
//   0x1F3C74 mov     esi, 1
//   0x1F3C79 pop     rbx
//   0x1F3C7A pop     rbp
//   0x1F3C7B pop     r12
//   0x1F3C7D jmp     sub_31AB50
//   0x1F3C82 align 8
//   0x1F3C88 mov     edi, 63h ; 'c'
//   0x1F3C8D call    _getinf
//   0x1F3C92 jmp     loc_1F3BC0
//   0x1F3C97 call    ___stack_chk_fail
//   0x1F3C9C mov     rax, cs:under_debugger_ptr
//   0x1F3CA3 cmp     byte ptr [rax], 0
//   0x1F3CA6 jnz     loc_41AE6
//   0x1F3CAC mov     rax, [rsp+68h+var_20]
//   0x1F3CB1 sub     rax, fs:28h
//   0x1F3CBA jnz     short loc_1F3C97
//   0x1F3CBC mov     edi, 0C4B4h
//   0x1F3CC1 call    sub_37B760
//   0x1F3CC6 mov     rbx, rax
//   0x1F3CC9 jmp     loc_41AE8
// ============================================================

void sub_1F39B0(/* signature unknown */)
{
    // see disassembly above
}

