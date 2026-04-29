// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x2517C0
// Name:           sub_2517C0
// Function size:  511 bytes (114 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x2517C0 push    r15
//   0x2517C2 mov     esi, 1
//   0x2517C7 push    r14
//   0x2517C9 push    r13
//   0x2517CB push    r12
//   0x2517CD push    rbp
//   0x2517CE push    rbx
//   0x2517CF sub     rsp, 98h
//   0x2517D6 mov     r14, fs:28h
//   0x2517DF mov     [rsp+0C8h+var_40], r14
//   0x2517E7 mov     r14, rdi
//   0x2517EA call    sub_27F410
//   0x2517EF mov     rdi, r14
//   0x2517F2 call    sub_280210
//   0x2517F7 mov     rdi, r14
//   0x2517FA call    sub_26BFE0
//   0x2517FF mov     ebx, eax
//   0x251801 test    al, al
//   0x251803 jnz     short loc_251830
//   0x251805 mov     rax, [rsp+0C8h+var_40]
//   0x25180D sub     rax, fs:28h
//   0x251816 jnz     loc_2519AA
//   0x25181C add     rsp, 98h
//   0x251823 mov     eax, ebx
//   0x251825 pop     rbx
//   0x251826 pop     rbp
//   0x251827 pop     r12
//   0x251829 pop     r13
//   0x25182B pop     r14
//   0x25182D pop     r15
//   0x25182F retn
//   0x251830 xor     esi, esi
//   0x251832 mov     rdi, r14
//   0x251835 lea     rbp, [r14+10h]
//   0x251839 mov     r12, rsp
//   0x25183C call    sub_280570
//   0x251841 xor     esi, esi
//   0x251843 mov     rdi, r14
//   0x251846 lea     r13, off_4C0298
//   0x25184D call    sub_27F410
//   0x251852 pxor    xmm0, xmm0
//   0x251856 xor     edx, edx
//   0x251858 mov     rsi, rbp
//   0x25185B mov     rdi, rsp
//   0x25185E mov     [rsp+0C8h+var_C8], r13
//   0x251862 mov     [rsp+0C8h+var_C0], 0
//   0x25186A mov     [rsp+0C8h+var_B8], 0
//   0x251873 mov     [rsp+0C8h+var_A0], 0
//   0x25187C movups  [rsp+0C8h+var_B0], xmm0
//   0x251881 movaps  [rsp+0C8h+var_98], xmm0
//   0x251886 call    sub_251200
//   0x25188B mov     rdi, r14
//   0x25188E call    sub_2516F0
//   0x251893 mov     rdx, [r14+8]
//   0x251897 mov     rax, [rdx+1B0h]
//   0x25189E mov     rdx, [rdx+1B8h]
//   0x2518A5 lea     rcx, [rdx+rdx*2]
//   0x2518A9 lea     rdx, [rdx+rcx*4]
//   0x2518AD shl     rdx, 3
//   0x2518B1 jz      short loc_2518EB
//   0x2518B3 nop     word ptr [rax+rax+00000000h]
//   0x2518BE xchg    ax, ax
//   0x2518C0 and     dword ptr [rax+18h], 0FFFFFFFEh
//   0x2518C4 mov     rcx, [r14+8]
//   0x2518C8 add     rax, 68h ; 'h'
//   0x2518CC mov     rdx, [rcx+1B8h]
//   0x2518D3 lea     rsi, [rdx+rdx*2]
//   0x2518D7 lea     rsi, [rdx+rsi*4]
//   0x2518DB mov     rdx, [rcx+1B0h]
//   0x2518E2 lea     rdx, [rdx+rsi*8]
//   0x2518E6 cmp     rax, rdx
//   0x2518E9 jnz     short loc_2518C0
//   0x2518EB lea     r14, [rsp+0C8h+var_88]
//   0x2518F0 pxor    xmm0, xmm0
//   0x2518F4 xor     edx, edx
//   0x2518F6 mov     rsi, rbp
//   0x2518F9 lea     r15, off_4C02D8
//   0x251900 mov     rdi, r14
//   0x251903 mov     [rsp+0C8h+var_80], 0
//   0x25190B mov     [rsp+0C8h+var_78], 0
//   0x251914 mov     [rsp+0C8h+var_60], 0
//   0x25191D mov     [rsp+0C8h+var_88], r15
//   0x251922 movups  [rsp+0C8h+var_70], xmm0
//   0x251927 movaps  [rsp+0C8h+var_58], xmm0
//   0x25192C call    sub_251200
//   0x251931 mov     rdi, [rsp+0C8h+var_60]
//   0x251936 lea     rbp, off_4BC478
//   0x25193D mov     [rsp+0C8h+var_88], rbp
//   0x251942 test    rdi, rdi
//   0x251945 jz      short loc_251955
//   0x251947 mov     qword ptr [rsp+0C8h+var_58], 0
//   0x251950 call    _qfree
//   0x251955 mov     rdi, [rsp+0C8h+var_78]
//   0x25195A test    rdi, rdi
//   0x25195D jz      short loc_25196D
//   0x25195F mov     qword ptr [rsp+0C8h+var_70], 0
//   0x251968 call    _qfree
//   0x25196D mov     rdi, [rsp+0C8h+var_A0]
//   0x251972 mov     [rsp+0C8h+var_C8], rbp
//   0x251976 test    rdi, rdi
//   0x251979 jz      short loc_251989
//   0x25197B mov     qword ptr [rsp+0C8h+var_98], 0
//   0x251984 call    _qfree
//   0x251989 mov     rdi, [rsp+0C8h+var_B8]
//   0x25198E test    rdi, rdi
//   0x251991 jz      loc_251805
//   0x251997 mov     qword ptr [rsp+0C8h+var_B0], 0
//   0x2519A0 call    _qfree
//   0x2519A5 jmp     loc_251805
//   0x2519AA call    ___stack_chk_fail
//   0x2519AF mov     rbx, rax
//   0x2519B2 jmp     loc_47693
//   0x2519B7 mov     rbx, rax
//   0x2519BA jmp     loc_47686
// ============================================================

void sub_2517C0(/* signature unknown */)
{
    // see disassembly above
}

