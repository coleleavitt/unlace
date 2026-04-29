// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x1CE960
// Name:           sub_1CE960
// Function size:  361 bytes (89 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x1CE960 push    r13
//   0x1CE962 push    r12
//   0x1CE964 push    rbp
//   0x1CE965 mov     rbp, rsi
//   0x1CE968 mov     rsi, rdx
//   0x1CE96B push    rbx
//   0x1CE96C mov     rbx, rdi
//   0x1CE96F sub     rsp, 28h
//   0x1CE973 mov     r12, fs:28h
//   0x1CE97C mov     [rsp+48h+var_30], r12
//   0x1CE981 mov     r12, rdx
//   0x1CE984 call    sub_401A30
//   0x1CE989 mov     r13d, eax
//   0x1CE98C test    al, al
//   0x1CE98E jz      loc_1CEA2E
//   0x1CE994 mov     rdx, [rbx+60h]
//   0x1CE998 mov     rax, [rbx+58h]
//   0x1CE99C lea     rdx, [rdx+rdx*4]
//   0x1CE9A0 shl     rdx, 4
//   0x1CE9A4 add     rdx, rax
//   0x1CE9A7 cmp     rdx, rax
//   0x1CE9AA jnz     short loc_1CE9CD
//   0x1CE9AC jmp     loc_1CEA50
//   0x1CE9B1 align 20h
//   0x1CE9C0 add     rax, 50h ; 'P'
//   0x1CE9C4 cmp     rax, rdx
//   0x1CE9C7 jz      loc_1CEA50
//   0x1CE9CD test    byte ptr [rax+48h], 2
//   0x1CE9D1 jz      short loc_1CE9C0
//   0x1CE9D3 movzx   edi, byte ptr [r12+0Dh]
//   0x1CE9D9 mov     rbx, [rbx+10h]
//   0x1CE9DD call    _get_dtype_size
//   0x1CE9E2 mov     rdi, rbx
//   0x1CE9E5 mov     edx, 1
//   0x1CE9EA movsxd  rsi, eax
//   0x1CE9ED call    sub_134700
//   0x1CE9F2 mov     ebx, eax
//   0x1CE9F4 cmp     eax, 0FFFFFFFFh
//   0x1CE9F7 jz      loc_1CEA97
//   0x1CE9FD movzx   edi, byte ptr [r12+0Dh]
//   0x1CEA03 call    _get_dtype_size
//   0x1CEA08 mov     rsi, rsp
//   0x1CEA0B mov     rdi, rbp
//   0x1CEA0E mov     [rsp+48h+var_40], ebx
//   0x1CEA12 mov     [rsp+48h+var_48], 1
//   0x1CEA1A mov     rbx, rsp
//   0x1CEA1D mov     dword ptr [rsp+48h+var_48+4], eax
//   0x1CEA21 call    sub_121740
//   0x1CEA26 mov     rdi, rsp
//   0x1CEA29 call    sub_119360
//   0x1CEA2E mov     rax, [rsp+48h+var_30]
//   0x1CEA33 sub     rax, fs:28h
//   0x1CEA3C jnz     short loc_1CEA92
//   0x1CEA3E add     rsp, 28h
//   0x1CEA42 mov     eax, r13d
//   0x1CEA45 pop     rbx
//   0x1CEA46 pop     rbp
//   0x1CEA47 pop     r12
//   0x1CEA49 pop     r13
//   0x1CEA4B retn
//   0x1CEA4C align 10h
//   0x1CEA50 mov     rax, [rbx+8]
//   0x1CEA54 movzx   edi, byte ptr [r12+0Dh]
//   0x1CEA5A mov     r13, [rax+70h]
//   0x1CEA5E call    _get_dtype_size
//   0x1CEA63 mov     rcx, rax
//   0x1CEA66 mov     rax, [rsp+48h+var_30]
//   0x1CEA6B sub     rax, fs:28h
//   0x1CEA74 jnz     short loc_1CEA92
//   0x1CEA76 add     rsp, 28h
//   0x1CEA7A lea     rdx, [rbx+80h]
//   0x1CEA81 mov     rsi, rbp
//   0x1CEA84 mov     rdi, r13
//   0x1CEA87 pop     rbx
//   0x1CEA88 pop     rbp
//   0x1CEA89 pop     r12
//   0x1CEA8B pop     r13
//   0x1CEA8D jmp     sub_1CE7D0
//   0x1CEA92 call    ___stack_chk_fail
//   0x1CEA97 mov     rax, cs:under_debugger_ptr
//   0x1CEA9E cmp     byte ptr [rax], 0
//   0x1CEAA1 jnz     loc_408A8
//   0x1CEAA7 mov     rax, [rsp+48h+var_30]
//   0x1CEAAC sub     rax, fs:28h
//   0x1CEAB5 jnz     short loc_1CEA92
//   0x1CEAB7 mov     edi, 0CE3Fh
//   0x1CEABC call    sub_37EEE0
//   0x1CEAC1 mov     rbp, rax
//   0x1CEAC4 jmp     loc_408AA
// ============================================================

void sub_1CE960(/* signature unknown */)
{
    // see disassembly above
}

