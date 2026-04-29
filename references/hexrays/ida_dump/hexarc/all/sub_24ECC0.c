// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x24ECC0
// Name:           sub_24ECC0
// Function size:  511 bytes (114 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x24ECC0 push    r15
//   0x24ECC2 mov     esi, 1
//   0x24ECC7 push    r14
//   0x24ECC9 push    r13
//   0x24ECCB push    r12
//   0x24ECCD push    rbp
//   0x24ECCE push    rbx
//   0x24ECCF sub     rsp, 98h
//   0x24ECD6 mov     r14, fs:28h
//   0x24ECDF mov     [rsp+0C8h+var_40], r14
//   0x24ECE7 mov     r14, rdi
//   0x24ECEA call    sub_27C910
//   0x24ECEF mov     rdi, r14
//   0x24ECF2 call    sub_27D710
//   0x24ECF7 mov     rdi, r14
//   0x24ECFA call    sub_2694E0
//   0x24ECFF mov     ebx, eax
//   0x24ED01 test    al, al
//   0x24ED03 jnz     short loc_24ED30
//   0x24ED05 mov     rax, [rsp+0C8h+var_40]
//   0x24ED0D sub     rax, fs:28h
//   0x24ED16 jnz     loc_24EEAA
//   0x24ED1C add     rsp, 98h
//   0x24ED23 mov     eax, ebx
//   0x24ED25 pop     rbx
//   0x24ED26 pop     rbp
//   0x24ED27 pop     r12
//   0x24ED29 pop     r13
//   0x24ED2B pop     r14
//   0x24ED2D pop     r15
//   0x24ED2F retn
//   0x24ED30 xor     esi, esi
//   0x24ED32 mov     rdi, r14
//   0x24ED35 lea     rbp, [r14+10h]
//   0x24ED39 mov     r12, rsp
//   0x24ED3C call    sub_27DA70
//   0x24ED41 xor     esi, esi
//   0x24ED43 mov     rdi, r14
//   0x24ED46 lea     r13, off_4AC358
//   0x24ED4D call    sub_27C910
//   0x24ED52 pxor    xmm0, xmm0
//   0x24ED56 xor     edx, edx
//   0x24ED58 mov     rsi, rbp
//   0x24ED5B mov     rdi, rsp
//   0x24ED5E mov     [rsp+0C8h+var_C8], r13
//   0x24ED62 mov     [rsp+0C8h+var_C0], 0
//   0x24ED6A mov     [rsp+0C8h+var_B8], 0
//   0x24ED73 mov     [rsp+0C8h+var_A0], 0
//   0x24ED7C movups  [rsp+0C8h+var_B0], xmm0
//   0x24ED81 movaps  [rsp+0C8h+var_98], xmm0
//   0x24ED86 call    sub_24E700
//   0x24ED8B mov     rdi, r14
//   0x24ED8E call    sub_24EBF0
//   0x24ED93 mov     rdx, [r14+8]
//   0x24ED97 mov     rax, [rdx+1B0h]
//   0x24ED9E mov     rdx, [rdx+1B8h]
//   0x24EDA5 lea     rcx, [rdx+rdx*2]
//   0x24EDA9 lea     rdx, [rdx+rcx*4]
//   0x24EDAD shl     rdx, 3
//   0x24EDB1 jz      short loc_24EDEB
//   0x24EDB3 nop     word ptr [rax+rax+00000000h]
//   0x24EDBE xchg    ax, ax
//   0x24EDC0 and     dword ptr [rax+18h], 0FFFFFFFEh
//   0x24EDC4 mov     rcx, [r14+8]
//   0x24EDC8 add     rax, 68h ; 'h'
//   0x24EDCC mov     rdx, [rcx+1B8h]
//   0x24EDD3 lea     rsi, [rdx+rdx*2]
//   0x24EDD7 lea     rsi, [rdx+rsi*4]
//   0x24EDDB mov     rdx, [rcx+1B0h]
//   0x24EDE2 lea     rdx, [rdx+rsi*8]
//   0x24EDE6 cmp     rax, rdx
//   0x24EDE9 jnz     short loc_24EDC0
//   0x24EDEB lea     r14, [rsp+0C8h+var_88]
//   0x24EDF0 pxor    xmm0, xmm0
//   0x24EDF4 xor     edx, edx
//   0x24EDF6 mov     rsi, rbp
//   0x24EDF9 lea     r15, off_4AC398
//   0x24EE00 mov     rdi, r14
//   0x24EE03 mov     [rsp+0C8h+var_80], 0
//   0x24EE0B mov     [rsp+0C8h+var_78], 0
//   0x24EE14 mov     [rsp+0C8h+var_60], 0
//   0x24EE1D mov     [rsp+0C8h+var_88], r15
//   0x24EE22 movups  [rsp+0C8h+var_70], xmm0
//   0x24EE27 movaps  [rsp+0C8h+var_58], xmm0
//   0x24EE2C call    sub_24E700
//   0x24EE31 mov     rdi, [rsp+0C8h+var_60]
//   0x24EE36 lea     rbp, off_4A8538
//   0x24EE3D mov     [rsp+0C8h+var_88], rbp
//   0x24EE42 test    rdi, rdi
//   0x24EE45 jz      short loc_24EE55
//   0x24EE47 mov     qword ptr [rsp+0C8h+var_58], 0
//   0x24EE50 call    _qfree
//   0x24EE55 mov     rdi, [rsp+0C8h+var_78]
//   0x24EE5A test    rdi, rdi
//   0x24EE5D jz      short loc_24EE6D
//   0x24EE5F mov     qword ptr [rsp+0C8h+var_70], 0
//   0x24EE68 call    _qfree
//   0x24EE6D mov     rdi, [rsp+0C8h+var_A0]
//   0x24EE72 mov     [rsp+0C8h+var_C8], rbp
//   0x24EE76 test    rdi, rdi
//   0x24EE79 jz      short loc_24EE89
//   0x24EE7B mov     qword ptr [rsp+0C8h+var_98], 0
//   0x24EE84 call    _qfree
//   0x24EE89 mov     rdi, [rsp+0C8h+var_B8]
//   0x24EE8E test    rdi, rdi
//   0x24EE91 jz      loc_24ED05
//   0x24EE97 mov     qword ptr [rsp+0C8h+var_B0], 0
//   0x24EEA0 call    _qfree
//   0x24EEA5 jmp     loc_24ED05
//   0x24EEAA call    ___stack_chk_fail
//   0x24EEAF mov     rbx, rax
//   0x24EEB2 jmp     loc_465BD
//   0x24EEB7 mov     rbx, rax
//   0x24EEBA jmp     loc_465B0
// ============================================================

void sub_24ECC0(/* signature unknown */)
{
    // see disassembly above
}

