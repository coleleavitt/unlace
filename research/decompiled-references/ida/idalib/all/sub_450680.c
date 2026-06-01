// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x450680
// Name:           sub_450680
// Function size:  339 bytes (84 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x450680 push    r12; int
//   0x450682 mov     r12, rsi
//   0x450685 push    rbp; int
//   0x450686 mov     rbp, rdi
//   0x450689 push    rbx; __int64
//   0x45068A sub     rsp, 50h
//   0x45068E mov     eax, [rdx]
//   0x450690 mov     rbx, fs:28h
//   0x450699 mov     [rsp+68h+var_20], rbx; void *
//   0x45069E mov     rbx, rdx
//   0x4506A1 xor     edx, edx
//   0x4506A3 test    ah, 40h
//   0x4506A6 jz      short loc_4506D0
//   0x4506A8 test    eax, 80000h
//   0x4506AD jnz     short loc_4506D0
//   0x4506AF mov     rax, [rsp+68h+var_20]
//   0x4506B4 sub     rax, fs:28h
//   0x4506BD jnz     loc_4507C6
//   0x4506C3 add     rsp, 50h
//   0x4506C7 mov     eax, edx
//   0x4506C9 pop     rbx
//   0x4506CA pop     rbp
//   0x4506CB pop     r12
//   0x4506CD retn
//   0x4506CE align 10h
//   0x4506D0 test    eax, 400180h
//   0x4506D5 jnz     short loc_4506AF
//   0x4506D7 mov     rdx, rbx
//   0x4506DA mov     rsi, r12
//   0x4506DD mov     rdi, rbp; int
//   0x4506E0 call    sub_4501C0
//   0x4506E5 lea     rcx, [rsp+68h+var_48]
//   0x4506EA mov     rdx, rbx
//   0x4506ED mov     rsi, r12
//   0x4506F0 lea     rax, off_2B289C8
//   0x4506F7 mov     r8d, 1
//   0x4506FD mov     rdi, rbp
//   0x450700 mov     [rsp+68h+var_40], 0FFFFFFFFFFFFFFFFh; ptr
//   0x450709 mov     qword ptr [rsp+68h+var_48], rax; int
//   0x45070E mov     [rsp+68h+var_38], rbp; __int64
//   0x450713 mov     [rsp+68h+var_30], 11h; int
//   0x45071B call    sub_44E140
//   0x450720 mov     rsi, [rbx+8]
//   0x450724 mov     edx, 4
//   0x450729 mov     rdi, rbp
//   0x45072C call    sub_3BE900
//   0x450731 and     eax, 0C000h
//   0x450736 cmp     rax, 4000h
//   0x45073C jz      short loc_4507B0
//   0x45073E pxor    xmm0, xmm0
//   0x450742 mov     rdi, rsp
//   0x450745 mov     rdx, r12
//   0x450748 xor     eax, eax
//   0x45074A lea     rsi, aFuncsA; "funcs_%a"
//   0x450751 mov     [rsp+68h+ptr], 0; int
//   0x450759 movups  xmmword ptr [rsp+68h+var_60], xmm0; int
//   0x45075E call    sub_35A790
//   0x450763 cmp     qword ptr [rsp+68h+var_60], 0
//   0x450769 lea     rdx, haystack; src
//   0x450770 jnz     short loc_4507A8
//   0x450772 mov     rsi, [rbx+8]; int
//   0x450776 mov     ecx, 100h
//   0x45077B mov     rdi, rbp; int
//   0x45077E call    sub_4D7EC0
//   0x450783 mov     rdi, [rsp+68h+ptr]; ptr
//   0x450787 test    rdi, rdi
//   0x45078A jz      short loc_45079A
//   0x45078C mov     qword ptr [rsp+68h+var_60], 0
//   0x450795 call    _qfree
//   0x45079A mov     edx, 1
//   0x45079F jmp     loc_4506AF
//   0x4507A4 align 8
//   0x4507A8 mov     rdx, [rsp+68h+ptr]
//   0x4507AC jmp     short loc_450772
//   0x4507AE align 10h
//   0x4507B0 mov     rdi, [rbx+8]
//   0x4507B4 mov     rsi, r12
//   0x4507B7 call    sub_44D100
//   0x4507BC test    eax, eax
//   0x4507BE jnz     loc_45073E
//   0x4507C4 jmp     short loc_45079A
//   0x4507C6 call    ___stack_chk_fail
//   0x4507CB mov     rbx, rax
//   0x4507CE jmp     loc_2B9920
// ============================================================

void sub_450680(/* signature unknown */)
{
    // see disassembly above
}

