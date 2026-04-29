// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x250C80
// Name:           sub_250C80
// Function size:  511 bytes (114 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x250C80 push    r15
//   0x250C82 mov     esi, 1
//   0x250C87 push    r14
//   0x250C89 push    r13
//   0x250C8B push    r12
//   0x250C8D push    rbp
//   0x250C8E push    rbx
//   0x250C8F sub     rsp, 98h
//   0x250C96 mov     r14, fs:28h
//   0x250C9F mov     [rsp+0C8h+var_40], r14
//   0x250CA7 mov     r14, rdi
//   0x250CAA call    sub_27E8D0
//   0x250CAF mov     rdi, r14
//   0x250CB2 call    sub_27F6D0
//   0x250CB7 mov     rdi, r14
//   0x250CBA call    sub_26B4A0
//   0x250CBF mov     ebx, eax
//   0x250CC1 test    al, al
//   0x250CC3 jnz     short loc_250CF0
//   0x250CC5 mov     rax, [rsp+0C8h+var_40]
//   0x250CCD sub     rax, fs:28h
//   0x250CD6 jnz     loc_250E6A
//   0x250CDC add     rsp, 98h
//   0x250CE3 mov     eax, ebx
//   0x250CE5 pop     rbx
//   0x250CE6 pop     rbp
//   0x250CE7 pop     r12
//   0x250CE9 pop     r13
//   0x250CEB pop     r14
//   0x250CED pop     r15
//   0x250CEF retn
//   0x250CF0 xor     esi, esi
//   0x250CF2 mov     rdi, r14
//   0x250CF5 lea     rbp, [r14+10h]
//   0x250CF9 mov     r12, rsp
//   0x250CFC call    sub_27FA30
//   0x250D01 xor     esi, esi
//   0x250D03 mov     rdi, r14
//   0x250D06 lea     r13, off_4B34F8
//   0x250D0D call    sub_27E8D0
//   0x250D12 pxor    xmm0, xmm0
//   0x250D16 xor     edx, edx
//   0x250D18 mov     rsi, rbp
//   0x250D1B mov     rdi, rsp
//   0x250D1E mov     [rsp+0C8h+var_C8], r13
//   0x250D22 mov     [rsp+0C8h+var_C0], 0
//   0x250D2A mov     [rsp+0C8h+var_B8], 0
//   0x250D33 mov     [rsp+0C8h+var_A0], 0
//   0x250D3C movups  [rsp+0C8h+var_B0], xmm0
//   0x250D41 movaps  [rsp+0C8h+var_98], xmm0
//   0x250D46 call    sub_2506C0
//   0x250D4B mov     rdi, r14
//   0x250D4E call    sub_250BB0
//   0x250D53 mov     rdx, [r14+8]
//   0x250D57 mov     rax, [rdx+1B0h]
//   0x250D5E mov     rdx, [rdx+1B8h]
//   0x250D65 lea     rcx, [rdx+rdx*2]
//   0x250D69 lea     rdx, [rdx+rcx*4]
//   0x250D6D shl     rdx, 3
//   0x250D71 jz      short loc_250DAB
//   0x250D73 nop     word ptr [rax+rax+00000000h]
//   0x250D7E xchg    ax, ax
//   0x250D80 and     dword ptr [rax+18h], 0FFFFFFFEh
//   0x250D84 mov     rcx, [r14+8]
//   0x250D88 add     rax, 68h ; 'h'
//   0x250D8C mov     rdx, [rcx+1B8h]
//   0x250D93 lea     rsi, [rdx+rdx*2]
//   0x250D97 lea     rsi, [rdx+rsi*4]
//   0x250D9B mov     rdx, [rcx+1B0h]
//   0x250DA2 lea     rdx, [rdx+rsi*8]
//   0x250DA6 cmp     rax, rdx
//   0x250DA9 jnz     short loc_250D80
//   0x250DAB lea     r14, [rsp+0C8h+var_88]
//   0x250DB0 pxor    xmm0, xmm0
//   0x250DB4 xor     edx, edx
//   0x250DB6 mov     rsi, rbp
//   0x250DB9 lea     r15, off_4B3538
//   0x250DC0 mov     rdi, r14
//   0x250DC3 mov     [rsp+0C8h+var_80], 0
//   0x250DCB mov     [rsp+0C8h+var_78], 0
//   0x250DD4 mov     [rsp+0C8h+var_60], 0
//   0x250DDD mov     [rsp+0C8h+var_88], r15
//   0x250DE2 movups  [rsp+0C8h+var_70], xmm0
//   0x250DE7 movaps  [rsp+0C8h+var_58], xmm0
//   0x250DEC call    sub_2506C0
//   0x250DF1 mov     rdi, [rsp+0C8h+var_60]
//   0x250DF6 lea     rbp, off_4AF6D8
//   0x250DFD mov     [rsp+0C8h+var_88], rbp
//   0x250E02 test    rdi, rdi
//   0x250E05 jz      short loc_250E15
//   0x250E07 mov     qword ptr [rsp+0C8h+var_58], 0
//   0x250E10 call    _qfree
//   0x250E15 mov     rdi, [rsp+0C8h+var_78]
//   0x250E1A test    rdi, rdi
//   0x250E1D jz      short loc_250E2D
//   0x250E1F mov     qword ptr [rsp+0C8h+var_70], 0
//   0x250E28 call    _qfree
//   0x250E2D mov     rdi, [rsp+0C8h+var_A0]
//   0x250E32 mov     [rsp+0C8h+var_C8], rbp
//   0x250E36 test    rdi, rdi
//   0x250E39 jz      short loc_250E49
//   0x250E3B mov     qword ptr [rsp+0C8h+var_98], 0
//   0x250E44 call    _qfree
//   0x250E49 mov     rdi, [rsp+0C8h+var_B8]
//   0x250E4E test    rdi, rdi
//   0x250E51 jz      loc_250CC5
//   0x250E57 mov     qword ptr [rsp+0C8h+var_B0], 0
//   0x250E60 call    _qfree
//   0x250E65 jmp     loc_250CC5
//   0x250E6A call    ___stack_chk_fail
//   0x250E6F mov     rbx, rax
//   0x250E72 jmp     loc_47637
//   0x250E77 mov     rbx, rax
//   0x250E7A jmp     loc_4762A
// ============================================================

void sub_250C80(/* signature unknown */)
{
    // see disassembly above
}

