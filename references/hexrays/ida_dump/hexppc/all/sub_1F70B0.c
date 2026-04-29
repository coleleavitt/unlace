// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x1F70B0
// Name:           sub_1F70B0
// Function size:  798 bytes (172 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x1F70B0 push    r12
//   0x1F70B2 push    rbp
//   0x1F70B3 push    rbx
//   0x1F70B4 sub     rsp, 50h
//   0x1F70B8 mov     rax, fs:28h
//   0x1F70C1 mov     [rsp+68h+var_20], rax
//   0x1F70C6 xor     eax, eax
//   0x1F70C8 test    byte ptr [rdi+2], 8
//   0x1F70CC jnz     short loc_1F70DA
//   0x1F70CE cmp     dword ptr [rdi+138h], 7
//   0x1F70D5 mov     rbx, rdi
//   0x1F70D8 jle     short loc_1F7100
//   0x1F70DA mov     rax, [rsp+68h+var_20]
//   0x1F70DF sub     rax, fs:28h
//   0x1F70E8 jnz     loc_1F7397
//   0x1F70EE add     rsp, 50h
//   0x1F70F2 pop     rbx
//   0x1F70F3 pop     rbp
//   0x1F70F4 pop     r12
//   0x1F70F6 retn
//   0x1F70F7 align 20h
//   0x1F7100 mov     rbp, [rdi+3A8h]
//   0x1F7107 mov     rdi, [rbp+18h]
//   0x1F710B test    rdi, rdi
//   0x1F710E jz      short loc_1F712D
//   0x1F7110 mov     qword ptr [rbp+20h], 0
//   0x1F7118 call    _qfree
//   0x1F711D mov     qword ptr [rbp+18h], 0
//   0x1F7125 mov     qword ptr [rbp+28h], 0
//   0x1F712D mov     dword ptr [rbp+30h], 0FFFFFFFFh
//   0x1F7134 mov     rdi, rbx
//   0x1F7137 call    sub_1F6EB0
//   0x1F713C test    eax, eax
//   0x1F713E jnz     loc_1F739C
//   0x1F7144 cmp     byte ptr [rbx+140h], 0
//   0x1F714B mov     rbp, rsp
//   0x1F714E jnz     loc_1F71DD
//   0x1F7154 mov     rdi, rbx
//   0x1F7157 lea     r12, off_4CB538
//   0x1F715E call    sub_37A380
//   0x1F7163 mov     rdi, rbx
//   0x1F7166 call    sub_36EB80
//   0x1F716B pxor    xmm0, xmm0
//   0x1F716F mov     rsi, rsp
//   0x1F7172 mov     rdi, rbx
//   0x1F7175 mov     [rsp+68h+var_60], 0
//   0x1F717E mov     [rsp+68h+var_58], 0
//   0x1F7187 mov     [rsp+68h+var_50], 0
//   0x1F7190 mov     [rsp+68h+var_48], 0
//   0x1F7199 mov     [rsp+68h+var_68], r12
//   0x1F719D mov     [rsp+68h+var_40], 0
//   0x1F71A6 mov     [rsp+68h+var_28], 0
//   0x1F71AF movaps  [rsp+68h+var_38], xmm0
//   0x1F71B4 call    sub_317470
//   0x1F71B9 mov     rdi, rbx
//   0x1F71BC call    sub_1ED980
//   0x1F71C1 mov     rdi, [rsp+68h+var_40]
//   0x1F71C6 mov     [rsp+68h+var_68], r12
//   0x1F71CA test    rdi, rdi
//   0x1F71CD jz      short loc_1F71DD
//   0x1F71CF mov     qword ptr [rsp+68h+var_38], 0
//   0x1F71D8 call    _qfree
//   0x1F71DD mov     rdi, rbx
//   0x1F71E0 call    sub_FB640
//   0x1F71E5 or      dword ptr [rbx], 80000h
//   0x1F71EB mov     rdi, rbx
//   0x1F71EE call    sub_1EFCD0
//   0x1F71F3 mov     rdi, rbx
//   0x1F71F6 call    sub_138D00
//   0x1F71FB mov     rdi, rbx
//   0x1F71FE call    sub_20F7A0
//   0x1F7203 mov     rdi, rbx
//   0x1F7206 call    sub_20F9D0
//   0x1F720B mov     rdi, rbx
//   0x1F720E call    sub_20FB10
//   0x1F7213 mov     rdi, rbx
//   0x1F7216 call    sub_215F50
//   0x1F721B mov     rsi, rbp
//   0x1F721E lea     rax, off_4CBCB0
//   0x1F7225 mov     rdi, rbx
//   0x1F7228 mov     [rsp+68h+var_60], 0
//   0x1F7231 mov     [rsp+68h+var_58], 0
//   0x1F723A mov     [rsp+68h+var_50], 0
//   0x1F7243 mov     [rsp+68h+var_48], 0
//   0x1F724C mov     [rsp+68h+var_68], rax
//   0x1F7250 call    sub_11BFA0
//   0x1F7255 mov     rdi, rbx
//   0x1F7258 call    sub_216640
//   0x1F725D mov     rdi, rbx
//   0x1F7260 call    sub_20FD20
//   0x1F7265 mov     rsi, rbp
//   0x1F7268 mov     rdi, rbx
//   0x1F726B mov     byte ptr [rsp+68h+var_40], 0
//   0x1F7270 mov     [rsp+68h+var_60], 0
//   0x1F7279 lea     rax, off_4CBD78
//   0x1F7280 mov     [rsp+68h+var_58], 0
//   0x1F7289 mov     [rsp+68h+var_50], 0
//   0x1F7292 mov     [rsp+68h+var_48], 0
//   0x1F729B mov     [rsp+68h+var_68], rax
//   0x1F729F call    sub_11C170
//   0x1F72A4 mov     rdi, rbx
//   0x1F72A7 call    sub_1ED5C0
//   0x1F72AC mov     rdi, rbx
//   0x1F72AF call    sub_217620
//   0x1F72B4 mov     eax, [rbx+48h]
//   0x1F72B7 cmp     eax, 10h
//   0x1F72BA jbe     loc_1F7388
//   0x1F72C0 cmp     eax, 0B0h
//   0x1F72C5 jz      short loc_1F7330
//   0x1F72C7 cmp     eax, 100h
//   0x1F72CC jz      short loc_1F7330
//   0x1F72CE mov     rax, [rbx+1B8h]
//   0x1F72D5 mov     rbp, [rbx+1B0h]
//   0x1F72DC lea     rdx, [rax+rax*2]
//   0x1F72E0 lea     rax, [rax+rdx*4]
//   0x1F72E4 lea     r12, [rbp+rax*8+0]
//   0x1F72E9 cmp     r12, rbp
//   0x1F72EC jnz     short loc_1F72F9
//   0x1F72EE jmp     short loc_1F7330
//   0x1F72F0 add     rbp, 68h ; 'h'
//   0x1F72F4 cmp     r12, rbp
//   0x1F72F7 jz      short loc_1F7330
//   0x1F72F9 test    byte ptr [rbp+19h], 1
//   0x1F72FD jz      short loc_1F72F0
//   0x1F72FF mov     rdi, [rbp+50h]
//   0x1F7303 mov     esi, 2
//   0x1F7308 call    _get_tinfo_property
//   0x1F730D and     eax, 0Fh
//   0x1F7310 cmp     al, 0Bh
//   0x1F7312 jnz     short loc_1F72F0
//   0x1F7314 mov     edx, 15h
//   0x1F7319 mov     rsi, 0FFFFFFFFFFFFFFFFh
//   0x1F7320 mov     rdi, rbx
//   0x1F7323 xor     eax, eax
//   0x1F7325 call    sub_32CD90
//   0x1F732A nop     word ptr [rax+rax+00h]
//   0x1F7330 mov     rdi, [rbx+3A8h]
//   0x1F7337 mov     rax, [rdi]
//   0x1F733A call    qword ptr [rax+40h]
//   0x1F733D mov     esi, 8
//   0x1F7342 mov     rdi, rbx
//   0x1F7345 call    sub_32CAC0
//   0x1F734A xor     esi, esi
//   0x1F734C xor     eax, eax
//   0x1F734E lea     rdx, aAfterAllocLvar; "after alloc_lvar"
//   0x1F7355 mov     rdi, rbx
//   0x1F7358 call    sub_63560
//   0x1F735D mov     rax, [rsp+68h+var_20]
//   0x1F7362 sub     rax, fs:28h
//   0x1F736B jnz     short loc_1F7397
//   0x1F736D add     rsp, 50h
//   0x1F7371 mov     rdi, rbx
//   0x1F7374 mov     esi, 1
//   0x1F7379 pop     rbx
//   0x1F737A pop     rbp
//   0x1F737B pop     r12
//   0x1F737D jmp     sub_31DD50
//   0x1F7382 align 8
//   0x1F7388 mov     edi, 63h ; 'c'
//   0x1F738D call    _getinf
//   0x1F7392 jmp     loc_1F72C0
//   0x1F7397 call    ___stack_chk_fail
//   0x1F739C mov     rax, cs:under_debugger_ptr
//   0x1F73A3 cmp     byte ptr [rax], 0
//   0x1F73A6 jnz     loc_42BF2
//   0x1F73AC mov     rax, [rsp+68h+var_20]
//   0x1F73B1 sub     rax, fs:28h
//   0x1F73BA jnz     short loc_1F7397
//   0x1F73BC mov     edi, 0C4B4h
//   0x1F73C1 call    sub_37EEE0
//   0x1F73C6 mov     rbx, rax
//   0x1F73C9 jmp     loc_42BF4
// ============================================================

void sub_1F70B0(/* signature unknown */)
{
    // see disassembly above
}

