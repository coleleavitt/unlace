// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x90CA0
// Name:           sub_90CA0
// Function size:  1074 bytes (245 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x90CA0 push    rbp
//   0x90CA1 mov     rbp, rsp
//   0x90CA4 push    r15
//   0x90CA6 mov     r15, rdi
//   0x90CA9 push    r14
//   0x90CAB mov     r14, rdx
//   0x90CAE push    r13
//   0x90CB0 push    r12
//   0x90CB2 mov     r12, rsi
//   0x90CB5 push    rbx
//   0x90CB6 mov     ebx, 1
//   0x90CBB sub     rsp, 0B8h
//   0x90CC2 mov     [rbp+var_B8], rsi
//   0x90CC9 mov     [rbp+var_C8], rcx
//   0x90CD0 mov     [rbp+var_D0], r8
//   0x90CD7 mov     r8, fs:28h
//   0x90CE0 mov     [rbp+var_38], r8
//   0x90CE4 xor     r8d, r8d
//   0x90CE7 call    sub_902B0
//   0x90CEC mov     [rbp+var_BC], eax
//   0x90CF2 test    eax, eax
//   0x90CF4 jz      short loc_90D20
//   0x90CF6 mov     rax, [rbp+var_38]
//   0x90CFA sub     rax, fs:28h
//   0x90D03 jnz     loc_910A3
//   0x90D09 lea     rsp, [rbp-28h]
//   0x90D0D mov     eax, ebx
//   0x90D0F pop     rbx
//   0x90D10 pop     r12
//   0x90D12 pop     r13
//   0x90D14 pop     r14
//   0x90D16 pop     r15
//   0x90D18 pop     rbp
//   0x90D19 retn
//   0x90D1A align 20h
//   0x90D20 lea     rax, [rbp+var_60]
//   0x90D24 pxor    xmm0, xmm0
//   0x90D28 xor     ecx, ecx
//   0x90D2A mov     rdx, r14
//   0x90D2D mov     rsi, r15
//   0x90D30 mov     rdi, rax
//   0x90D33 mov     [rbp+var_D8], rax
//   0x90D3A mov     rbx, rax
//   0x90D3D mov     [rbp+var_A0], 0
//   0x90D48 movups  [rbp+var_98], xmm0
//   0x90D4F call    sub_120480
//   0x90D54 mov     eax, [r15+48h]
//   0x90D58 sub     rsp, 8
//   0x90D5C mov     r8, r14
//   0x90D5F mov     rcx, r12
//   0x90D62 lea     r9, [rbp+var_A0]
//   0x90D69 mov     rdx, r14
//   0x90D6C mov     rsi, rbx
//   0x90D6F mov     rdi, r15
//   0x90D72 push    rax
//   0x90D73 call    sub_1736B0
//   0x90D78 pop     rcx
//   0x90D79 mov     ebx, eax
//   0x90D7B pop     rsi
//   0x90D7C test    al, al
//   0x90D7E jz      loc_90EA0
//   0x90D84 cmp     qword ptr [rbp+var_98], 0
//   0x90D8C jz      loc_91040
//   0x90D92 pxor    xmm0, xmm0
//   0x90D96 mov     [rbp+var_80], 0
//   0x90D9E xor     r12d, r12d
//   0x90DA1 xor     eax, eax
//   0x90DA3 movups  [rbp+var_78], xmm0
//   0x90DA7 jmp     short loc_90DE5
//   0x90DA9 align 10h
//   0x90DB0 mov     [rsi+rax*8], rbx
//   0x90DB4 mov     rdx, r14
//   0x90DB7 mov     rsi, r13
//   0x90DBA mov     rdi, r15
//   0x90DBD add     qword ptr [rbp+var_78], 1
//   0x90DC2 call    sub_173550
//   0x90DC7 mov     ebx, eax
//   0x90DC9 test    al, al
//   0x90DCB jz      loc_91051
//   0x90DD1 add     r12d, 1
//   0x90DD5 movsxd  rax, r12d
//   0x90DD8 cmp     rax, qword ptr [rbp+var_98]
//   0x90DDF jnb     loc_90EE8
//   0x90DE5 mov     rdx, [rbp+var_A0]
//   0x90DEC mov     edi, 50h ; 'P'
//   0x90DF1 mov     r13, [rdx+rax*8]
//   0x90DF5 call    j__qalloc_or_throw
//   0x90DFA pxor    xmm0, xmm0
//   0x90DFE mov     rbx, rax
//   0x90E01 mov     rsi, r13
//   0x90E04 movups  xmmword ptr [rax+8], xmm0
//   0x90E08 mov     rdi, rbx
//   0x90E0B mov     rax, 0FFFFFFFF00000000h
//   0x90E15 mov     [rbx+20h], rax
//   0x90E19 mov     qword ptr [rbx+28h], 0
//   0x90E21 mov     [rbx+30h], rax
//   0x90E25 mov     qword ptr [rbx+38h], 0
//   0x90E2D mov     [rbx+40h], rax
//   0x90E31 mov     qword ptr [rbx+48h], 0
//   0x90E39 call    sub_1211A0
//   0x90E3E mov     rax, qword ptr [rbp+var_78]
//   0x90E42 mov     rcx, qword ptr [rbp+var_78+8]
//   0x90E46 mov     [rbp+var_A8], rbx
//   0x90E4D mov     rsi, [rbp+var_80]
//   0x90E51 lea     rdi, [rax+1]
//   0x90E55 cmp     rcx, rdi
//   0x90E58 jnb     loc_90DB0
//   0x90E5E lea     rax, [rbp+var_80]
//   0x90E62 mov     rdx, rdi
//   0x90E65 mov     ecx, 8
//   0x90E6A mov     rdi, rax
//   0x90E6D call    _qvector_reserve
//   0x90E72 mov     [rbp+var_80], rax
//   0x90E76 mov     rsi, rax
//   0x90E79 mov     rax, qword ptr [rbp+var_78]
//   0x90E7D jmp     loc_90DB0
//   0x90E82 align 8
//   0x90E88 xor     ebx, ebx
//   0x90E8A mov     rdi, [rbp+var_80]
//   0x90E8E test    rdi, rdi
//   0x90E91 jz      short loc_90EA0
//   0x90E93 mov     qword ptr [rbp+var_78], 0
//   0x90E9B call    _qfree
//   0x90EA0 mov     rdi, [rbp+var_50]
//   0x90EA4 test    rdi, rdi
//   0x90EA7 jz      short loc_90EB6
//   0x90EA9 mov     [rbp+var_48], 0
//   0x90EB1 call    _qfree
//   0x90EB6 mov     rdi, [rbp+var_60]
//   0x90EBA call    _qfree
//   0x90EBF mov     rdi, [rbp+var_A0]
//   0x90EC6 test    rdi, rdi
//   0x90EC9 jz      loc_90CF6
//   0x90ECF mov     qword ptr [rbp+var_98], 0
//   0x90EDA call    _qfree
//   0x90EDF jmp     loc_90CF6
//   0x90EE4 align 8
//   0x90EE8 mov     rcx, [rbp+var_C8]
//   0x90EEF xor     r8d, r8d
//   0x90EF2 mov     rdx, r14
//   0x90EF5 mov     rdi, r15
//   0x90EF8 mov     rsi, [rbp+var_B8]
//   0x90EFF call    sub_902B0
//   0x90F04 cmp     qword ptr [rbp+var_98], 0
//   0x90F0C mov     r12d, eax
//   0x90F0F jz      loc_91047
//   0x90F15 mov     dword ptr [rbp+var_B8], 0
//   0x90F1F xor     r13d, r13d
//   0x90F22 nop     word ptr [rax+rax+00000000h]
//   0x90F2D nop     dword ptr [rax]
//   0x90F30 mov     rax, [rbp+var_80]
//   0x90F34 mov     rsi, [rax+r13*8]
//   0x90F38 mov     rax, [rbp+var_A0]
//   0x90F3F mov     rdi, [rax+r13*8]
//   0x90F43 call    sub_1211A0
//   0x90F48 mov     rax, [rbp+var_80]
//   0x90F4C mov     r13, [rax+r13*8]
//   0x90F50 test    r13, r13
//   0x90F53 jz      short loc_90F78
//   0x90F55 lea     rdi, [r13+40h]
//   0x90F59 call    sub_118BA0
//   0x90F5E lea     rdi, [r13+30h]
//   0x90F62 call    sub_118BA0
//   0x90F67 lea     rdi, [r13+20h]
//   0x90F6B call    sub_118BA0
//   0x90F70 mov     rdi, r13
//   0x90F73 call    j__qfree
//   0x90F78 add     dword ptr [rbp+var_B8], 1
//   0x90F7F mov     rax, qword ptr [rbp+var_98]
//   0x90F86 movsxd  r13, dword ptr [rbp+var_B8]
//   0x90F8D cmp     r13, rax
//   0x90F90 jb      short loc_90F30
//   0x90F92 test    r12d, r12d
//   0x90F95 jz      loc_90E88
//   0x90F9B test    rax, rax
//   0x90F9E jz      loc_90E8A
//   0x90FA4 cmp     [rbp+var_D0], 0
//   0x90FAC jz      short loc_90FE8
//   0x90FAE mov     rax, [rbp+var_D0]
//   0x90FB5 lea     r12, [rax+40h]
//   0x90FB9 lea     rax, [r14+40h]
//   0x90FBD mov     rsi, r12
//   0x90FC0 mov     rdi, rax
//   0x90FC3 mov     r13, rax
//   0x90FC6 call    sub_118810
//   0x90FCB cmp     qword ptr [rbp+var_98], 0
//   0x90FD3 jnz     short loc_90FE8
//   0x90FD5 mov     rsi, r12
//   0x90FD8 mov     rdi, r13
//   0x90FDB call    sub_118810
//   0x90FE0 jmp     loc_90E8A
//   0x90FE5 align 8
//   0x90FE8 xor     eax, eax
//   0x90FEA nop     word ptr [rax+rax+00h]
//   0x90FF0 mov     rdx, [rbp+var_A0]
//   0x90FF7 mov     rdi, r15
//   0x90FFA mov     rsi, [rdx+rax*8]
//   0x90FFE mov     rdx, r14
//   0x91001 call    sub_173550
//   0x91006 test    al, al
//   0x91008 jz      short loc_9107A
//   0x9100A add     [rbp+var_BC], 1
//   0x91011 movsxd  rax, [rbp+var_BC]
//   0x91018 cmp     rax, qword ptr [rbp+var_98]
//   0x9101F jb      short loc_90FF0
//   0x91021 mov     rax, [rbp+var_D0]
//   0x91028 test    rax, rax
//   0x9102B jz      loc_90E8A
//   0x91031 lea     r12, [rax+40h]
//   0x91035 lea     rax, [r14+40h]
//   0x91039 mov     r13, rax
//   0x9103C jmp     short loc_90FD5
//   0x9103E align 20h
//   0x91040 xor     ebx, ebx
//   0x91042 jmp     loc_90EA0
//   0x91047 test    eax, eax
//   0x91049 setnz   bl
//   0x9104C jmp     loc_90E8A
//   0x91051 mov     rax, cs:under_debugger_ptr
//   0x91058 cmp     byte ptr [rax], 0
//   0x9105B jnz     loc_2E246
//   0x91061 mov     rax, [rbp+var_38]
//   0x91065 sub     rax, fs:28h
//   0x9106E jnz     short loc_910A8
//   0x91070 mov     edi, 0C351h
//   0x91075 call    sub_37E160
//   0x9107A mov     rax, cs:under_debugger_ptr
//   0x91081 cmp     byte ptr [rax], 0
//   0x91084 jnz     loc_2E246
//   0x9108A mov     rax, [rbp+var_38]
//   0x9108E sub     rax, fs:28h
//   0x91097 jnz     short loc_910AD
//   0x91099 mov     edi, 0C352h
//   0x9109E call    sub_37E160
//   0x910A3 call    ___stack_chk_fail
//   0x910A8 call    ___stack_chk_fail
//   0x910AD call    ___stack_chk_fail
//   0x910B2 mov     r15, rax
//   0x910B5 jmp     loc_2E248
//   0x910BA mov     rbx, rax
//   0x910BD jmp     loc_2E28E
//   0x910C2 mov     rbx, rax
//   0x910C5 jmp     loc_2E282
//   0x910CA mov     rbx, rax
//   0x910CD jmp     loc_2E26E
// ============================================================

void sub_90CA0(/* signature unknown */)
{
    // see disassembly above
}

