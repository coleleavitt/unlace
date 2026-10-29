// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3D2B80
// Name:           sub_3D2B80
// Function size:  444 bytes (103 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3D2B80 push    r15; int
//   0x3D2B82 push    r14; int
//   0x3D2B84 push    r13; int
//   0x3D2B86 mov     r13, rdx
//   0x3D2B89 push    r12; int
//   0x3D2B8B push    rbp; int
//   0x3D2B8C mov     rbp, rdi
//   0x3D2B8F add     rdi, 460h; int
//   0x3D2B96 push    rbx; int
//   0x3D2B97 mov     rbx, rsi
//   0x3D2B9A sub     rsp, 48h
//   0x3D2B9E mov     r12, fs:28h
//   0x3D2BA7 mov     qword ptr [rsp+78h+var_40], r12; int
//   0x3D2BAC mov     r12, rcx
//   0x3D2BAF call    sub_848DF0
//   0x3D2BB4 mov     r14d, eax
//   0x3D2BB7 test    eax, eax
//   0x3D2BB9 jz      short loc_3D2BE8
//   0x3D2BBB mov     rax, qword ptr [rsp+78h+var_40]
//   0x3D2BC0 sub     rax, fs:28h
//   0x3D2BC9 jnz     loc_3D2D27
//   0x3D2BCF add     rsp, 48h
//   0x3D2BD3 mov     eax, r14d
//   0x3D2BD6 pop     rbx
//   0x3D2BD7 pop     rbp
//   0x3D2BD8 pop     r12
//   0x3D2BDA pop     r13
//   0x3D2BDC pop     r14
//   0x3D2BDE pop     r15
//   0x3D2BE0 retn
//   0x3D2BE1 align 8
//   0x3D2BE8 pxor    xmm0, xmm0
//   0x3D2BEC lea     rax, [rsp+78h+ptr]
//   0x3D2BF1 lea     r15, [rbx+r12]
//   0x3D2BF5 mov     [rsp+78h+ptr], 0; int
//   0x3D2BFE mov     qword ptr [rsp+78h+var_50], 0; int
//   0x3D2C07 mov     [rsp+78h+var_48], 0FFFFFFFFh; int
//   0x3D2C0F mov     qword ptr [rsp+78h+var_70], rax; int
//   0x3D2C14 movups  xmmword ptr [rsp+78h+var_60], xmm0; int
//   0x3D2C19 cmp     rbx, r15
//   0x3D2C1C jb      loc_3D2CF0
//   0x3D2C22 lea     r15, [rbp+488h]
//   0x3D2C29 mov     rdi, qword ptr [rsp+78h+var_70]; int
//   0x3D2C2E mov     rsi, r15; int
//   0x3D2C31 call    _rangeset_t_intersect
//   0x3D2C36 cmp     qword ptr [rsp+78h+var_60], 0
//   0x3D2C3C jz      short loc_3D2CB0
//   0x3D2C3E mov     rsi, qword ptr [rsp+78h+var_70]
//   0x3D2C43 mov     rdi, r15; int
//   0x3D2C46 call    _rangeset_t_sub2
//   0x3D2C4B mov     rax, r13
//   0x3D2C4E mov     rdx, [rsp+78h+ptr]
//   0x3D2C53 sub     rax, rbx
//   0x3D2C56 movq    xmm1, rax
//   0x3D2C5B mov     rax, qword ptr [rsp+78h+var_60]
//   0x3D2C60 punpcklqdq xmm1, xmm1
//   0x3D2C64 shl     rax, 4
//   0x3D2C68 jz      short loc_3D2CA3
//   0x3D2C6A nop     word ptr [rax+rax+00000000h]
//   0x3D2C75 nop     word ptr [rax+rax+00000000h]
//   0x3D2C80 movdqu  xmm0, xmmword ptr [rdx]
//   0x3D2C84 add     rdx, 10h
//   0x3D2C88 paddq   xmm0, xmm1
//   0x3D2C8C movups  xmmword ptr [rdx-10h], xmm0
//   0x3D2C90 mov     rax, qword ptr [rsp+78h+var_60]
//   0x3D2C95 shl     rax, 4
//   0x3D2C99 add     rax, [rsp+78h+ptr]
//   0x3D2C9E cmp     rdx, rax
//   0x3D2CA1 jnz     short loc_3D2C80
//   0x3D2CA3 mov     rsi, qword ptr [rsp+78h+var_70]
//   0x3D2CA8 mov     rdi, r15
//   0x3D2CAB call    _rangeset_t_add2
//   0x3D2CB0 lea     rsi, [rbp+3B8h]
//   0x3D2CB7 mov     r8, r12
//   0x3D2CBA mov     rcx, r13
//   0x3D2CBD mov     rdx, rbx
//   0x3D2CC0 mov     rdi, rbp
//   0x3D2CC3 call    sub_3D2940
//   0x3D2CC8 mov     rdi, [rsp+78h+ptr]; ptr
//   0x3D2CCD test    rdi, rdi
//   0x3D2CD0 jz      loc_3D2BBB
//   0x3D2CD6 mov     qword ptr [rsp+78h+var_60], 0
//   0x3D2CDF call    _qfree
//   0x3D2CE4 jmp     loc_3D2BBB
//   0x3D2CE9 align 10h
//   0x3D2CF0 mov     ecx, 10h
//   0x3D2CF5 mov     edx, 1
//   0x3D2CFA xor     esi, esi
//   0x3D2CFC mov     rdi, rax
//   0x3D2CFF call    _qvector_reserve
//   0x3D2D04 mov     rdx, qword ptr [rsp+78h+var_60]
//   0x3D2D09 mov     [rsp+78h+ptr], rax
//   0x3D2D0E shl     rdx, 4
//   0x3D2D12 add     rax, rdx
//   0x3D2D15 mov     [rax], rbx
//   0x3D2D18 mov     [rax+8], r15
//   0x3D2D1C add     qword ptr [rsp+78h+var_60], 1
//   0x3D2D22 jmp     loc_3D2C22
//   0x3D2D27 call    ___stack_chk_fail
//   0x3D2D2C mov     rbx, rax
//   0x3D2D2F jmp     loc_2B4520
//   0x3D2D34 mov     rbx, rax
//   0x3D2D37 jmp     loc_2B454E
// ============================================================

void sub_3D2B80(/* signature unknown */)
{
    // see disassembly above
}

