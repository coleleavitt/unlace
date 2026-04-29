// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x138850
// Name:           sub_138850
// Function size:  562 bytes (132 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x138850 push    r15
//   0x138852 push    r14
//   0x138854 push    r13
//   0x138856 push    r12
//   0x138858 push    rbp
//   0x138859 mov     rbp, rsi
//   0x13885C push    rbx
//   0x13885D mov     rbx, rdi
//   0x138860 sub     rsp, 98h
//   0x138867 mov     rax, [rdi+5D8h]
//   0x13886E mov     r12, fs:28h
//   0x138877 mov     [rsp+0C8h+var_40], r12
//   0x13887F mov     r12d, edx
//   0x138882 mov     [rax+540h], rdi
//   0x138889 mov     rax, [rdi+5D8h]
//   0x138890 mov     qword ptr [rax+548h], 0
//   0x13889B call    sub_1AA000
//   0x1388A0 mov     rsi, rbp
//   0x1388A3 mov     edx, r12d
//   0x1388A6 mov     rdi, rbx
//   0x1388A9 call    sub_36D080
//   0x1388AE mov     ebp, eax
//   0x1388B0 test    eax, eax
//   0x1388B2 jz      short loc_1388E0
//   0x1388B4 mov     rax, [rsp+0C8h+var_40]
//   0x1388BC sub     rax, fs:28h
//   0x1388C5 jnz     loc_138A75
//   0x1388CB add     rsp, 98h
//   0x1388D2 mov     eax, ebp
//   0x1388D4 pop     rbx
//   0x1388D5 pop     rbp
//   0x1388D6 pop     r12
//   0x1388D8 pop     r13
//   0x1388DA pop     r14
//   0x1388DC pop     r15
//   0x1388DE retn
//   0x1388DF align 20h
//   0x1388E0 lea     r15, [rsp+0C8h+var_B8]
//   0x1388E5 lea     r14, [rsp+0C8h+var_A8]
//   0x1388EA mov     ecx, r12d
//   0x1388ED mov     rdi, rbx
//   0x1388F0 pxor    xmm0, xmm0
//   0x1388F4 mov     rdx, r15
//   0x1388F7 mov     rsi, r14
//   0x1388FA mov     [rsp+0C8h+var_A0], 0
//   0x1388FF lea     r13, off_4B13B8
//   0x138906 movups  [rsp+0C8h+var_90], xmm0
//   0x13890B mov     [rsp+0C8h+var_A8], r13
//   0x138910 mov     [rsp+0C8h+var_98], 0
//   0x138919 mov     [rsp+0C8h+var_70], 0
//   0x138922 mov     [rsp+0C8h+var_60], 0
//   0x13892B mov     [rsp+0C8h+var_48], 0
//   0x138936 mov     [rsp+0C8h+var_68], 40h ; '@'
//   0x13893E mov     [rsp+0C8h+var_B8], 0
//   0x138947 mov     [rsp+0C8h+var_B0], 0
//   0x138950 movups  [rsp+0C8h+var_80], xmm0
//   0x138955 movaps  [rsp+0C8h+var_58], xmm0
//   0x13895A call    sub_1D1280
//   0x13895F mov     ebp, eax
//   0x138961 test    eax, eax
//   0x138963 jz      loc_138A08
//   0x138969 mov     rdi, [rsp+0C8h+var_B8]
//   0x13896E call    _qfree
//   0x138973 mov     rdi, [rsp+0C8h+var_60]
//   0x138978 mov     [rsp+0C8h+var_A8], r13
//   0x13897D test    rdi, rdi
//   0x138980 jz      short loc_1389E3
//   0x138982 mov     r13, qword ptr [rsp+0C8h+var_58]
//   0x138987 test    r13, r13
//   0x13898A jz      short loc_1389D5
//   0x13898C xor     r12d, r12d
//   0x13898F nop
//   0x138990 mov     rax, r12
//   0x138993 shl     rax, 6
//   0x138997 lea     rbx, [rdi+rax]
//   0x13899B mov     rdi, [rbx+28h]
//   0x13899F test    rdi, rdi
//   0x1389A2 jz      short loc_1389B1
//   0x1389A4 mov     qword ptr [rbx+30h], 0
//   0x1389AC call    _qfree
//   0x1389B1 mov     rdi, [rbx+10h]
//   0x1389B5 test    rdi, rdi
//   0x1389B8 jz      short loc_1389C7
//   0x1389BA mov     qword ptr [rbx+18h], 0
//   0x1389C2 call    _qfree
//   0x1389C7 add     r12, 1
//   0x1389CB mov     rdi, [rsp+0C8h+var_60]
//   0x1389D0 cmp     r13, r12
//   0x1389D3 jnz     short loc_138990
//   0x1389D5 mov     qword ptr [rsp+0C8h+var_58], 0
//   0x1389DE call    _qfree
//   0x1389E3 mov     rdi, [rsp+0C8h+var_98]
//   0x1389E8 test    rdi, rdi
//   0x1389EB jz      loc_1388B4
//   0x1389F1 mov     qword ptr [rsp+0C8h+var_90], 0
//   0x1389FA call    _qfree
//   0x1389FF jmp     loc_1388B4
//   0x138A04 align 8
//   0x138A08 mov     rdx, r15
//   0x138A0B mov     rsi, r14
//   0x138A0E mov     rdi, rbx
//   0x138A11 call    sub_37B180
//   0x138A16 mov     ebp, eax
//   0x138A18 test    eax, eax
//   0x138A1A jnz     loc_138969
//   0x138A20 mov     rdi, [rbx+5E0h]
//   0x138A27 mov     rsi, rbx
//   0x138A2A mov     rax, [rdi]
//   0x138A2D call    qword ptr [rax+10h]
//   0x138A30 mov     rsi, rax
//   0x138A33 mov     r8d, r12d
//   0x138A36 mov     rcx, r15
//   0x138A39 mov     rdx, r14
//   0x138A3C mov     rdi, rbx
//   0x138A3F mov     [rsp+0C8h+var_C0], rax
//   0x138A44 call    sub_1D9DE0
//   0x138A49 mov     rsi, [rsp+0C8h+var_C0]
//   0x138A4E mov     ebp, eax
//   0x138A50 test    rsi, rsi
//   0x138A53 jz      short loc_138A5E
//   0x138A55 mov     rax, [rsi]
//   0x138A58 mov     rdi, rsi
//   0x138A5B call    qword ptr [rax+8]
//   0x138A5E test    ebp, ebp
//   0x138A60 jnz     loc_138969
//   0x138A66 mov     rdi, rbx
//   0x138A69 call    sub_133720
//   0x138A6E mov     ebp, eax
//   0x138A70 jmp     loc_138969
//   0x138A75 call    ___stack_chk_fail
//   0x138A7A mov     rbx, rax
//   0x138A7D jmp     loc_38392
// ============================================================

void sub_138850(/* signature unknown */)
{
    // see disassembly above
}

