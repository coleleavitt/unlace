// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0xF4AF0
// Name:           sub_F4AF0
// Function size:  394 bytes (84 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0xF4AF0 push    r14
//   0xF4AF2 lea     rax, off_4CA110
//   0xF4AF9 push    r13
//   0xF4AFB push    r12
//   0xF4AFD push    rbp
//   0xF4AFE push    rbx
//   0xF4AFF add     rsp, 0FFFFFFFFFFFFFF80h
//   0xF4B03 mov     rbx, fs:28h
//   0xF4B0C mov     [rsp+0A8h+var_30], rbx
//   0xF4B11 mov     rbx, rdi
//   0xF4B14 lea     rsi, [rsp+0A8h+var_98]
//   0xF4B19 mov     [rsp+0A8h+var_98], rax
//   0xF4B1E mov     [rsp+0A8h+var_90], 0
//   0xF4B27 mov     [rsp+0A8h+var_88], 0
//   0xF4B30 mov     [rsp+0A8h+var_80], 0
//   0xF4B39 mov     [rsp+0A8h+var_78], 0
//   0xF4B42 mov     [rsp+0A8h+var_70], 0FFFFFFFFFFFFFFFFh
//   0xF4B4B call    sub_11BFA0
//   0xF4B50 cmp     [rsp+0A8h+var_70], 0FFFFFFFFFFFFFFFFh
//   0xF4B56 jnz     short loc_F4B80
//   0xF4B58 mov     rax, [rsp+0A8h+var_30]
//   0xF4B5D sub     rax, fs:28h
//   0xF4B66 jnz     loc_F4C6D
//   0xF4B6C sub     rsp, 0FFFFFFFFFFFFFF80h
//   0xF4B70 pop     rbx
//   0xF4B71 pop     rbp
//   0xF4B72 pop     r12
//   0xF4B74 pop     r13
//   0xF4B76 pop     r14
//   0xF4B78 retn
//   0xF4B79 align 20h
//   0xF4B80 mov     rax, [rbx+5E0h]
//   0xF4B87 lea     r12, [rsp+0A8h+var_A0]
//   0xF4B8C mov     [rsp+0A8h+var_A0], 0
//   0xF4B95 mov     eax, [rax+50h]
//   0xF4B98 lea     edx, [rax+rax*2]
//   0xF4B9B lea     r14d, [rax+rdx*4]
//   0xF4B9F mov     eax, 100h
//   0xF4BA4 mov     word ptr [rsp+0A8h+var_58], ax
//   0xF4BA9 lea     rax, aSjljFunctionCo; "SjLj_Function_Context"
//   0xF4BB0 movsxd  rbp, r14d
//   0xF4BB3 mov     [rsp+0A8h+var_60], rax
//   0xF4BB8 call    _get_idati
//   0xF4BBD lea     r13, [rsp+0A8h+var_68]
//   0xF4BC2 mov     edx, 3Dh ; '='
//   0xF4BC7 mov     esi, 3Dh ; '='
//   0xF4BCC mov     rdi, r12
//   0xF4BCF mov     rcx, r13
//   0xF4BD2 mov     [rsp+0A8h+var_68], rax
//   0xF4BD7 call    _create_tinfo
//   0xF4BDC test    al, al
//   0xF4BDE jnz     short loc_F4C50
//   0xF4BE0 mov     rax, [rsp+0A8h+var_70]
//   0xF4BE5 lea     rcx, off_4CA138
//   0xF4BEC mov     rsi, r13
//   0xF4BEF mov     rdi, rbx
//   0xF4BF2 mov     [rsp+0A8h+var_60], 0
//   0xF4BFB add     rbp, rax
//   0xF4BFE movq    xmm0, rax
//   0xF4C03 mov     [rsp+0A8h+var_58], 0
//   0xF4C0C movq    xmm1, rbp
//   0xF4C11 mov     [rsp+0A8h+var_68], rcx
//   0xF4C16 mov     [rsp+0A8h+var_50], 0
//   0xF4C1F punpcklqdq xmm0, xmm1
//   0xF4C23 mov     [rsp+0A8h+var_48], 0
//   0xF4C2C movups  [rsp+0A8h+var_40], xmm0
//   0xF4C31 call    sub_11C1E0
//   0xF4C36 mov     rdi, rbx
//   0xF4C39 call    sub_18C8C0
//   0xF4C3E mov     rdi, r12
//   0xF4C41 call    _clear_tinfo_t
//   0xF4C46 jmp     loc_F4B58
//   0xF4C4B align 10h
//   0xF4C50 mov     rsi, [rsp+0A8h+var_A0]
//   0xF4C55 xor     edx, edx
//   0xF4C57 xor     edi, edi
//   0xF4C59 call    _get_tinfo_size
//   0xF4C5E cmp     r14d, eax
//   0xF4C61 cmovge  eax, r14d
//   0xF4C65 movsxd  rbp, eax
//   0xF4C68 jmp     loc_F4BE0
//   0xF4C6D call    ___stack_chk_fail
//   0xF4C72 mov     rbx, rax
//   0xF4C75 jmp     loc_3422E
// ============================================================

void sub_F4AF0(/* signature unknown */)
{
    // see disassembly above
}

