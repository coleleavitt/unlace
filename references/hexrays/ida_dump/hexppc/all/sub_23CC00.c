// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x23CC00
// Name:           sub_23CC00
// Function size:  413 bytes (107 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x23CC00 push    r15
//   0x23CC02 push    r14
//   0x23CC04 push    r13
//   0x23CC06 mov     r13, rsi
//   0x23CC09 push    r12
//   0x23CC0B mov     r12, rdx
//   0x23CC0E push    rbp
//   0x23CC0F mov     ebp, ecx
//   0x23CC11 push    rbx
//   0x23CC12 mov     edx, ebp
//   0x23CC14 mov     rbx, rdi
//   0x23CC17 sub     rsp, 48h
//   0x23CC1B mov     rcx, [rsi]
//   0x23CC1E mov     [rsp+78h+var_6C], r8d
//   0x23CC23 lea     r14, [rsp+78h+var_50]
//   0x23CC28 mov     r8, r14
//   0x23CC2B mov     rax, fs:28h
//   0x23CC34 mov     [rsp+78h+var_40], rax
//   0x23CC39 xor     eax, eax
//   0x23CC3B lea     rax, [rsi+8]
//   0x23CC3F mov     rsi, r12
//   0x23CC42 mov     [rsp+78h+var_50], 0
//   0x23CC4B mov     rdi, rax
//   0x23CC4E mov     [rsp+78h+var_68], rax
//   0x23CC53 call    sub_254020
//   0x23CC58 mov     r15d, eax
//   0x23CC5B test    eax, eax
//   0x23CC5D jz      loc_23CCE0
//   0x23CC63 or      byte ptr [r13+0Dh], 20h
//   0x23CC68 mov     rdi, [rsp+78h+var_50]
//   0x23CC6D mov     esi, 3
//   0x23CC72 call    _get_tinfo_property
//   0x23CC77 xor     edx, edx
//   0x23CC79 mov     rdi, [r13+0]
//   0x23CC7D cmp     eax, 1
//   0x23CC80 mov     esi, ebp
//   0x23CC82 setz    dl
//   0x23CC85 call    sub_326890
//   0x23CC8A mov     [r13+0], rax
//   0x23CC8E mov     rdx, rax
//   0x23CC91 movzx   eax, byte ptr [r13+0Dh]
//   0x23CC96 test    al, 18h
//   0x23CC98 jnz     loc_23CD28
//   0x23CC9E cmp     r15d, 2
//   0x23CCA2 jz      short loc_23CCC0
//   0x23CCA4 mov     qword ptr [rbx], 0
//   0x23CCAB mov     rsi, r14
//   0x23CCAE mov     rdi, rbx
//   0x23CCB1 call    _copy_tinfo_t
//   0x23CCB6 jmp     short loc_23CCF8
//   0x23CCB8 align 20h
//   0x23CCC0 mov     rsi, r14
//   0x23CCC3 mov     rdi, r13
//   0x23CCC6 mov     [rsp+78h+var_60], rdx
//   0x23CCCB call    sub_251DB0
//   0x23CCD0 mov     rdx, [rsp+78h+var_60]
//   0x23CCD5 cmp     rdx, rax
//   0x23CCD8 jz      short loc_23CD38
//   0x23CCDA nop     word ptr [rax+rax+00h]
//   0x23CCE0 and     byte ptr [r13+0Dh], 0DFh
//   0x23CCE5 mov     ecx, [rsp+78h+var_6C]
//   0x23CCE9 mov     edx, ebp
//   0x23CCEB mov     rdi, rbx
//   0x23CCEE mov     rsi, [r12+70h]
//   0x23CCF3 call    sub_328100
//   0x23CCF8 mov     rdi, r14
//   0x23CCFB call    _clear_tinfo_t
//   0x23CD00 mov     rax, [rsp+78h+var_40]
//   0x23CD05 sub     rax, fs:28h
//   0x23CD0E jnz     short loc_23CD88
//   0x23CD10 add     rsp, 48h
//   0x23CD14 mov     rax, rbx
//   0x23CD17 pop     rbx
//   0x23CD18 pop     rbp
//   0x23CD19 pop     r12
//   0x23CD1B pop     r13
//   0x23CD1D pop     r14
//   0x23CD1F pop     r15
//   0x23CD21 retn
//   0x23CD22 align 8
//   0x23CD28 test    al, 6
//   0x23CD2A jnz     loc_23CC9E
//   0x23CD30 jmp     loc_23CCA4
//   0x23CD35 align 8
//   0x23CD38 lea     r15, [rsp+78h+var_48]
//   0x23CD3D xor     ecx, ecx
//   0x23CD3F xor     esi, esi
//   0x23CD41 mov     rdi, r13
//   0x23CD44 mov     [rsp+78h+var_48], 0
//   0x23CD4D mov     rdx, r15
//   0x23CD50 call    sub_261E20
//   0x23CD55 mov     rdi, r15
//   0x23CD58 mov     byte ptr [rsp+78h+var_60], al
//   0x23CD5C call    _clear_tinfo_t
//   0x23CD61 movzx   eax, byte ptr [rsp+78h+var_60]
//   0x23CD66 test    al, al
//   0x23CD68 jz      loc_23CCE0
//   0x23CD6E mov     rsi, [r13+28h]
//   0x23CD72 mov     rdi, [rsp+78h+var_68]
//   0x23CD77 and     rsi, 0FFFFFFFFFFFDFFFFh
//   0x23CD7E call    sub_325B00
//   0x23CD83 jmp     loc_23CCA4
//   0x23CD88 call    ___stack_chk_fail
//   0x23CD8D mov     rbx, rax
//   0x23CD90 jmp     loc_45C9A
//   0x23CD95 mov     rbx, rax
//   0x23CD98 jmp     loc_45C92
// ============================================================

void sub_23CC00(/* signature unknown */)
{
    // see disassembly above
}

