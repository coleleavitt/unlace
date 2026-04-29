// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x138F50
// Name:           sub_138F50
// Function size:  562 bytes (132 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x138F50 push    r15
//   0x138F52 push    r14
//   0x138F54 push    r13
//   0x138F56 push    r12
//   0x138F58 push    rbp
//   0x138F59 mov     rbp, rsi
//   0x138F5C push    rbx
//   0x138F5D mov     rbx, rdi
//   0x138F60 sub     rsp, 98h
//   0x138F67 mov     rax, [rdi+5D8h]
//   0x138F6E mov     r12, fs:28h
//   0x138F77 mov     [rsp+0C8h+var_40], r12
//   0x138F7F mov     r12d, edx
//   0x138F82 mov     [rax+540h], rdi
//   0x138F89 mov     rax, [rdi+5D8h]
//   0x138F90 mov     qword ptr [rax+548h], 0
//   0x138F9B call    sub_1AA700
//   0x138FA0 mov     rsi, rbp
//   0x138FA3 mov     edx, r12d
//   0x138FA6 mov     rdi, rbx
//   0x138FA9 call    sub_36DE80
//   0x138FAE mov     ebp, eax
//   0x138FB0 test    eax, eax
//   0x138FB2 jz      short loc_138FE0
//   0x138FB4 mov     rax, [rsp+0C8h+var_40]
//   0x138FBC sub     rax, fs:28h
//   0x138FC5 jnz     loc_139175
//   0x138FCB add     rsp, 98h
//   0x138FD2 mov     eax, ebp
//   0x138FD4 pop     rbx
//   0x138FD5 pop     rbp
//   0x138FD6 pop     r12
//   0x138FD8 pop     r13
//   0x138FDA pop     r14
//   0x138FDC pop     r15
//   0x138FDE retn
//   0x138FDF align 20h
//   0x138FE0 lea     r15, [rsp+0C8h+var_B8]
//   0x138FE5 lea     r14, [rsp+0C8h+var_A8]
//   0x138FEA mov     ecx, r12d
//   0x138FED mov     rdi, rbx
//   0x138FF0 pxor    xmm0, xmm0
//   0x138FF4 mov     rdx, r15
//   0x138FF7 mov     rsi, r14
//   0x138FFA mov     [rsp+0C8h+var_A0], 0
//   0x138FFF lea     r13, off_4B0458
//   0x139006 movups  [rsp+0C8h+var_90], xmm0
//   0x13900B mov     [rsp+0C8h+var_A8], r13
//   0x139010 mov     [rsp+0C8h+var_98], 0
//   0x139019 mov     [rsp+0C8h+var_70], 0
//   0x139022 mov     [rsp+0C8h+var_60], 0
//   0x13902B mov     [rsp+0C8h+var_48], 0
//   0x139036 mov     [rsp+0C8h+var_68], 40h ; '@'
//   0x13903E mov     [rsp+0C8h+var_B8], 0
//   0x139047 mov     [rsp+0C8h+var_B0], 0
//   0x139050 movups  [rsp+0C8h+var_80], xmm0
//   0x139055 movaps  [rsp+0C8h+var_58], xmm0
//   0x13905A call    sub_1D1A80
//   0x13905F mov     ebp, eax
//   0x139061 test    eax, eax
//   0x139063 jz      loc_139108
//   0x139069 mov     rdi, [rsp+0C8h+var_B8]
//   0x13906E call    _qfree
//   0x139073 mov     rdi, [rsp+0C8h+var_60]
//   0x139078 mov     [rsp+0C8h+var_A8], r13
//   0x13907D test    rdi, rdi
//   0x139080 jz      short loc_1390E3
//   0x139082 mov     r13, qword ptr [rsp+0C8h+var_58]
//   0x139087 test    r13, r13
//   0x13908A jz      short loc_1390D5
//   0x13908C xor     r12d, r12d
//   0x13908F nop
//   0x139090 mov     rax, r12
//   0x139093 shl     rax, 6
//   0x139097 lea     rbx, [rdi+rax]
//   0x13909B mov     rdi, [rbx+28h]
//   0x13909F test    rdi, rdi
//   0x1390A2 jz      short loc_1390B1
//   0x1390A4 mov     qword ptr [rbx+30h], 0
//   0x1390AC call    _qfree
//   0x1390B1 mov     rdi, [rbx+10h]
//   0x1390B5 test    rdi, rdi
//   0x1390B8 jz      short loc_1390C7
//   0x1390BA mov     qword ptr [rbx+18h], 0
//   0x1390C2 call    _qfree
//   0x1390C7 add     r12, 1
//   0x1390CB mov     rdi, [rsp+0C8h+var_60]
//   0x1390D0 cmp     r13, r12
//   0x1390D3 jnz     short loc_139090
//   0x1390D5 mov     qword ptr [rsp+0C8h+var_58], 0
//   0x1390DE call    _qfree
//   0x1390E3 mov     rdi, [rsp+0C8h+var_98]
//   0x1390E8 test    rdi, rdi
//   0x1390EB jz      loc_138FB4
//   0x1390F1 mov     qword ptr [rsp+0C8h+var_90], 0
//   0x1390FA call    _qfree
//   0x1390FF jmp     loc_138FB4
//   0x139104 align 8
//   0x139108 mov     rdx, r15
//   0x13910B mov     rsi, r14
//   0x13910E mov     rdi, rbx
//   0x139111 call    sub_37BF80
//   0x139116 mov     ebp, eax
//   0x139118 test    eax, eax
//   0x13911A jnz     loc_139069
//   0x139120 mov     rdi, [rbx+5E0h]
//   0x139127 mov     rsi, rbx
//   0x13912A mov     rax, [rdi]
//   0x13912D call    qword ptr [rax+10h]
//   0x139130 mov     rsi, rax
//   0x139133 mov     r8d, r12d
//   0x139136 mov     rcx, r15
//   0x139139 mov     rdx, r14
//   0x13913C mov     rdi, rbx
//   0x13913F mov     [rsp+0C8h+var_C0], rax
//   0x139144 call    sub_1DA5A0
//   0x139149 mov     rsi, [rsp+0C8h+var_C0]
//   0x13914E mov     ebp, eax
//   0x139150 test    rsi, rsi
//   0x139153 jz      short loc_13915E
//   0x139155 mov     rax, [rsi]
//   0x139158 mov     rdi, rsi
//   0x13915B call    qword ptr [rax+8]
//   0x13915E test    ebp, ebp
//   0x139160 jnz     loc_139069
//   0x139166 mov     rdi, rbx
//   0x139169 call    sub_133E20
//   0x13916E mov     ebp, eax
//   0x139170 jmp     loc_139069
//   0x139175 call    ___stack_chk_fail
//   0x13917A mov     rbx, rax
//   0x13917D jmp     loc_38392
// ============================================================

void sub_138F50(/* signature unknown */)
{
    // see disassembly above
}

