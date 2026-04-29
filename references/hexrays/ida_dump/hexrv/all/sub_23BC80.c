// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x23BC80
// Name:           sub_23BC80
// Function size:  413 bytes (107 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x23BC80 push    r15
//   0x23BC82 push    r14
//   0x23BC84 push    r13
//   0x23BC86 mov     r13, rsi
//   0x23BC89 push    r12
//   0x23BC8B mov     r12, rdx
//   0x23BC8E push    rbp
//   0x23BC8F mov     ebp, ecx
//   0x23BC91 push    rbx
//   0x23BC92 mov     edx, ebp
//   0x23BC94 mov     rbx, rdi
//   0x23BC97 sub     rsp, 48h
//   0x23BC9B mov     rcx, [rsi]
//   0x23BC9E mov     [rsp+78h+var_6C], r8d
//   0x23BCA3 lea     r14, [rsp+78h+var_50]
//   0x23BCA8 mov     r8, r14
//   0x23BCAB mov     rax, fs:28h
//   0x23BCB4 mov     [rsp+78h+var_40], rax
//   0x23BCB9 xor     eax, eax
//   0x23BCBB lea     rax, [rsi+8]
//   0x23BCBF mov     rsi, r12
//   0x23BCC2 mov     [rsp+78h+var_50], 0
//   0x23BCCB mov     rdi, rax
//   0x23BCCE mov     [rsp+78h+var_68], rax
//   0x23BCD3 call    sub_2530A0
//   0x23BCD8 mov     r15d, eax
//   0x23BCDB test    eax, eax
//   0x23BCDD jz      loc_23BD60
//   0x23BCE3 or      byte ptr [r13+0Dh], 20h
//   0x23BCE8 mov     rdi, [rsp+78h+var_50]
//   0x23BCED mov     esi, 3
//   0x23BCF2 call    _get_tinfo_property
//   0x23BCF7 xor     edx, edx
//   0x23BCF9 mov     rdi, [r13+0]
//   0x23BCFD cmp     eax, 1
//   0x23BD00 mov     esi, ebp
//   0x23BD02 setz    dl
//   0x23BD05 call    sub_325910
//   0x23BD0A mov     [r13+0], rax
//   0x23BD0E mov     rdx, rax
//   0x23BD11 movzx   eax, byte ptr [r13+0Dh]
//   0x23BD16 test    al, 18h
//   0x23BD18 jnz     loc_23BDA8
//   0x23BD1E cmp     r15d, 2
//   0x23BD22 jz      short loc_23BD40
//   0x23BD24 mov     qword ptr [rbx], 0
//   0x23BD2B mov     rsi, r14
//   0x23BD2E mov     rdi, rbx
//   0x23BD31 call    _copy_tinfo_t
//   0x23BD36 jmp     short loc_23BD78
//   0x23BD38 align 20h
//   0x23BD40 mov     rsi, r14
//   0x23BD43 mov     rdi, r13
//   0x23BD46 mov     [rsp+78h+var_60], rdx
//   0x23BD4B call    sub_250E30
//   0x23BD50 mov     rdx, [rsp+78h+var_60]
//   0x23BD55 cmp     rdx, rax
//   0x23BD58 jz      short loc_23BDB8
//   0x23BD5A nop     word ptr [rax+rax+00h]
//   0x23BD60 and     byte ptr [r13+0Dh], 0DFh
//   0x23BD65 mov     ecx, [rsp+78h+var_6C]
//   0x23BD69 mov     edx, ebp
//   0x23BD6B mov     rdi, rbx
//   0x23BD6E mov     rsi, [r12+70h]
//   0x23BD73 call    sub_327180
//   0x23BD78 mov     rdi, r14
//   0x23BD7B call    _clear_tinfo_t
//   0x23BD80 mov     rax, [rsp+78h+var_40]
//   0x23BD85 sub     rax, fs:28h
//   0x23BD8E jnz     short loc_23BE08
//   0x23BD90 add     rsp, 48h
//   0x23BD94 mov     rax, rbx
//   0x23BD97 pop     rbx
//   0x23BD98 pop     rbp
//   0x23BD99 pop     r12
//   0x23BD9B pop     r13
//   0x23BD9D pop     r14
//   0x23BD9F pop     r15
//   0x23BDA1 retn
//   0x23BDA2 align 8
//   0x23BDA8 test    al, 6
//   0x23BDAA jnz     loc_23BD1E
//   0x23BDB0 jmp     loc_23BD24
//   0x23BDB5 align 8
//   0x23BDB8 lea     r15, [rsp+78h+var_48]
//   0x23BDBD xor     ecx, ecx
//   0x23BDBF xor     esi, esi
//   0x23BDC1 mov     rdi, r13
//   0x23BDC4 mov     [rsp+78h+var_48], 0
//   0x23BDCD mov     rdx, r15
//   0x23BDD0 call    sub_260EA0
//   0x23BDD5 mov     rdi, r15
//   0x23BDD8 mov     byte ptr [rsp+78h+var_60], al
//   0x23BDDC call    _clear_tinfo_t
//   0x23BDE1 movzx   eax, byte ptr [rsp+78h+var_60]
//   0x23BDE6 test    al, al
//   0x23BDE8 jz      loc_23BD60
//   0x23BDEE mov     rsi, [r13+28h]
//   0x23BDF2 mov     rdi, [rsp+78h+var_68]
//   0x23BDF7 and     rsi, 0FFFFFFFFFFFDFFFFh
//   0x23BDFE call    sub_324B80
//   0x23BE03 jmp     loc_23BD24
//   0x23BE08 call    ___stack_chk_fail
//   0x23BE0D mov     rbx, rax
//   0x23BE10 jmp     loc_45C36
//   0x23BE15 mov     rbx, rax
//   0x23BE18 jmp     loc_45C2E
// ============================================================

void sub_23BC80(/* signature unknown */)
{
    // see disassembly above
}

