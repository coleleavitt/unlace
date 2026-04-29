// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0xF4070
// Name:           sub_F4070
// Function size:  394 bytes (84 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0xF4070 push    r14
//   0xF4072 lea     rax, off_4AFA30
//   0xF4079 push    r13
//   0xF407B push    r12
//   0xF407D push    rbp
//   0xF407E push    rbx
//   0xF407F add     rsp, 0FFFFFFFFFFFFFF80h
//   0xF4083 mov     rbx, fs:28h
//   0xF408C mov     [rsp+0A8h+var_30], rbx
//   0xF4091 mov     rbx, rdi
//   0xF4094 lea     rsi, [rsp+0A8h+var_98]
//   0xF4099 mov     [rsp+0A8h+var_98], rax
//   0xF409E mov     [rsp+0A8h+var_90], 0
//   0xF40A7 mov     [rsp+0A8h+var_88], 0
//   0xF40B0 mov     [rsp+0A8h+var_80], 0
//   0xF40B9 mov     [rsp+0A8h+var_78], 0
//   0xF40C2 mov     [rsp+0A8h+var_70], 0FFFFFFFFFFFFFFFFh
//   0xF40CB call    sub_11B520
//   0xF40D0 cmp     [rsp+0A8h+var_70], 0FFFFFFFFFFFFFFFFh
//   0xF40D6 jnz     short loc_F4100
//   0xF40D8 mov     rax, [rsp+0A8h+var_30]
//   0xF40DD sub     rax, fs:28h
//   0xF40E6 jnz     loc_F41ED
//   0xF40EC sub     rsp, 0FFFFFFFFFFFFFF80h
//   0xF40F0 pop     rbx
//   0xF40F1 pop     rbp
//   0xF40F2 pop     r12
//   0xF40F4 pop     r13
//   0xF40F6 pop     r14
//   0xF40F8 retn
//   0xF40F9 align 20h
//   0xF4100 mov     rax, [rbx+5E0h]
//   0xF4107 lea     r12, [rsp+0A8h+var_A0]
//   0xF410C mov     [rsp+0A8h+var_A0], 0
//   0xF4115 mov     eax, [rax+50h]
//   0xF4118 lea     edx, [rax+rax*2]
//   0xF411B lea     r14d, [rax+rdx*4]
//   0xF411F mov     eax, 100h
//   0xF4124 mov     word ptr [rsp+0A8h+var_58], ax
//   0xF4129 lea     rax, aSjljFunctionCo; "SjLj_Function_Context"
//   0xF4130 movsxd  rbp, r14d
//   0xF4133 mov     [rsp+0A8h+var_60], rax
//   0xF4138 call    _get_idati
//   0xF413D lea     r13, [rsp+0A8h+var_68]
//   0xF4142 mov     edx, 3Dh ; '='
//   0xF4147 mov     esi, 3Dh ; '='
//   0xF414C mov     rdi, r12
//   0xF414F mov     rcx, r13
//   0xF4152 mov     [rsp+0A8h+var_68], rax
//   0xF4157 call    _create_tinfo
//   0xF415C test    al, al
//   0xF415E jnz     short loc_F41D0
//   0xF4160 mov     rax, [rsp+0A8h+var_70]
//   0xF4165 lea     rcx, off_4AFA58
//   0xF416C mov     rsi, r13
//   0xF416F mov     rdi, rbx
//   0xF4172 mov     [rsp+0A8h+var_60], 0
//   0xF417B add     rbp, rax
//   0xF417E movq    xmm0, rax
//   0xF4183 mov     [rsp+0A8h+var_58], 0
//   0xF418C movq    xmm1, rbp
//   0xF4191 mov     [rsp+0A8h+var_68], rcx
//   0xF4196 mov     [rsp+0A8h+var_50], 0
//   0xF419F punpcklqdq xmm0, xmm1
//   0xF41A3 mov     [rsp+0A8h+var_48], 0
//   0xF41AC movups  [rsp+0A8h+var_40], xmm0
//   0xF41B1 call    sub_11B760
//   0xF41B6 mov     rdi, rbx
//   0xF41B9 call    sub_18BE40
//   0xF41BE mov     rdi, r12
//   0xF41C1 call    _clear_tinfo_t
//   0xF41C6 jmp     loc_F40D8
//   0xF41CB align 10h
//   0xF41D0 mov     rsi, [rsp+0A8h+var_A0]
//   0xF41D5 xor     edx, edx
//   0xF41D7 xor     edi, edi
//   0xF41D9 call    _get_tinfo_size
//   0xF41DE cmp     r14d, eax
//   0xF41E1 cmovge  eax, r14d
//   0xF41E5 movsxd  rbp, eax
//   0xF41E8 jmp     loc_F4160
//   0xF41ED call    ___stack_chk_fail
//   0xF41F2 mov     rbx, rax
//   0xF41F5 jmp     loc_3422E
// ============================================================

void sub_F4070(/* signature unknown */)
{
    // see disassembly above
}

