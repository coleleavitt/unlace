// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x33CF00
// Name:           sub_33CF00
// Function size:  256 bytes (59 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x33CF00 push    rbp
//   0x33CF01 push    rbx
//   0x33CF02 sub     rsp, 58h
//   0x33CF06 mov     rbx, fs:28h
//   0x33CF0F mov     [rsp+68h+var_20], rbx
//   0x33CF14 mov     rbx, rdi
//   0x33CF17 lea     rdx, [rsp+68h+var_50]
//   0x33CF1C lea     rax, [rsp+68h+var_58]
//   0x33CF21 movq    xmm1, rdx
//   0x33CF26 movq    xmm2, rax
//   0x33CF2B punpcklqdq xmm1, xmm2
//   0x33CF2F movaps  [rsp+68h+var_68], xmm1
//   0x33CF33 call    _get_nlist_size
//   0x33CF38 test    rax, rax
//   0x33CF3B jz      loc_33CFE0
//   0x33CF41 lea     rax, qword_8CC800
//   0x33CF48 mov     esi, 0FFFFFFFFh
//   0x33CF4D mov     rdi, rbx
//   0x33CF50 mov     [rsp+68h+var_58], 0FFFFFFFFFFFFFFFFh
//   0x33CF59 lea     rbp, [rsp+68h+var_48]
//   0x33CF5E mov     rdx, [rax+10h]
//   0x33CF62 call    sub_33E280
//   0x33CF67 movdqa  xmm3, [rsp+68h+var_68]
//   0x33CF6C xor     r8d, r8d
//   0x33CF6F mov     rcx, rbp
//   0x33CF72 mov     [rsp+68h+var_50], rax
//   0x33CF77 mov     rsi, rax
//   0x33CF7A xor     edx, edx
//   0x33CF7C mov     rdi, rbx
//   0x33CF7F movq    xmm0, cs:off_866648
//   0x33CF87 lea     rax, sub_33CB80
//   0x33CF8E movaps  [rsp+68h+var_48], xmm3
//   0x33CF93 movq    xmm4, rax
//   0x33CF98 punpcklqdq xmm0, xmm4
//   0x33CF9C movaps  [rsp+68h+var_38], xmm0
//   0x33CFA1 call    sub_4C21B0
//   0x33CFA6 mov     rax, qword ptr [rsp+68h+var_38]
//   0x33CFAB test    rax, rax
//   0x33CFAE jz      short loc_33CFBD
//   0x33CFB0 mov     edx, 3
//   0x33CFB5 mov     rsi, rbp
//   0x33CFB8 mov     rdi, rbp
//   0x33CFBB call    rax
//   0x33CFBD mov     rax, [rsp+68h+var_58]
//   0x33CFC2 mov     rdx, [rsp+68h+var_20]
//   0x33CFC7 sub     rdx, fs:28h
//   0x33CFD0 jnz     short loc_33CFF3
//   0x33CFD2 add     rsp, 58h
//   0x33CFD6 pop     rbx
//   0x33CFD7 pop     rbp
//   0x33CFD8 retn
//   0x33CFD9 align 20h
//   0x33CFE0 mov     edi, 47Bh
//   0x33CFE5 call    sub_17CE30
//   0x33CFEA mov     rax, 0FFFFFFFFFFFFFFFFh
//   0x33CFF1 jmp     short loc_33CFC2
//   0x33CFF3 call    ___stack_chk_fail
//   0x33CFF8 mov     rbx, rax
//   0x33CFFB jmp     loc_13AB88
// ============================================================

void sub_33CF00(/* signature unknown */)
{
    // see disassembly above
}

