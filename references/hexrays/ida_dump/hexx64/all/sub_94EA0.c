// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x94EA0
// Name:           sub_94EA0
// Function size:  1074 bytes (245 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x94EA0 push    rbp
//   0x94EA1 mov     rbp, rsp
//   0x94EA4 push    r15
//   0x94EA6 mov     r15, rdi
//   0x94EA9 push    r14
//   0x94EAB mov     r14, rdx
//   0x94EAE push    r13
//   0x94EB0 push    r12
//   0x94EB2 mov     r12, rsi
//   0x94EB5 push    rbx
//   0x94EB6 mov     ebx, 1
//   0x94EBB sub     rsp, 0B8h
//   0x94EC2 mov     [rbp+var_B8], rsi
//   0x94EC9 mov     [rbp+var_C8], rcx
//   0x94ED0 mov     [rbp+var_D0], r8
//   0x94ED7 mov     r8, fs:28h
//   0x94EE0 mov     [rbp+var_38], r8
//   0x94EE4 xor     r8d, r8d
//   0x94EE7 call    sub_944B0
//   0x94EEC mov     [rbp+var_BC], eax
//   0x94EF2 test    eax, eax
//   0x94EF4 jz      short loc_94F20
//   0x94EF6 mov     rax, [rbp+var_38]
//   0x94EFA sub     rax, fs:28h
//   0x94F03 jnz     loc_952A3
//   0x94F09 lea     rsp, [rbp-28h]
//   0x94F0D mov     eax, ebx
//   0x94F0F pop     rbx
//   0x94F10 pop     r12
//   0x94F12 pop     r13
//   0x94F14 pop     r14
//   0x94F16 pop     r15
//   0x94F18 pop     rbp
//   0x94F19 retn
//   0x94F1A align 20h
//   0x94F20 lea     rax, [rbp+var_60]
//   0x94F24 pxor    xmm0, xmm0
//   0x94F28 xor     ecx, ecx
//   0x94F2A mov     rdx, r14
//   0x94F2D mov     rsi, r15
//   0x94F30 mov     rdi, rax
//   0x94F33 mov     [rbp+var_D8], rax
//   0x94F3A mov     rbx, rax
//   0x94F3D mov     [rbp+var_A0], 0
//   0x94F48 movups  [rbp+var_98], xmm0
//   0x94F4F call    sub_124680
//   0x94F54 mov     eax, [r15+48h]
//   0x94F58 sub     rsp, 8
//   0x94F5C mov     r8, r14
//   0x94F5F mov     rcx, r12
//   0x94F62 lea     r9, [rbp+var_A0]
//   0x94F69 mov     rdx, r14
//   0x94F6C mov     rsi, rbx
//   0x94F6F mov     rdi, r15
//   0x94F72 push    rax
//   0x94F73 call    sub_1778B0
//   0x94F78 pop     rcx
//   0x94F79 mov     ebx, eax
//   0x94F7B pop     rsi
//   0x94F7C test    al, al
//   0x94F7E jz      loc_950A0
//   0x94F84 cmp     qword ptr [rbp+var_98], 0
//   0x94F8C jz      loc_95240
//   0x94F92 pxor    xmm0, xmm0
//   0x94F96 mov     [rbp+var_80], 0
//   0x94F9E xor     r12d, r12d
//   0x94FA1 xor     eax, eax
//   0x94FA3 movups  [rbp+var_78], xmm0
//   0x94FA7 jmp     short loc_94FE5
//   0x94FA9 align 10h
//   0x94FB0 mov     [rsi+rax*8], rbx
//   0x94FB4 mov     rdx, r14
//   0x94FB7 mov     rsi, r13
//   0x94FBA mov     rdi, r15
//   0x94FBD add     qword ptr [rbp+var_78], 1
//   0x94FC2 call    sub_177750
//   0x94FC7 mov     ebx, eax
//   0x94FC9 test    al, al
//   0x94FCB jz      loc_95251
//   0x94FD1 add     r12d, 1
//   0x94FD5 movsxd  rax, r12d
//   0x94FD8 cmp     rax, qword ptr [rbp+var_98]
//   0x94FDF jnb     loc_950E8
//   0x94FE5 mov     rdx, [rbp+var_A0]
//   0x94FEC mov     edi, 50h ; 'P'
//   0x94FF1 mov     r13, [rdx+rax*8]
//   0x94FF5 call    j__qalloc_or_throw
//   0x94FFA pxor    xmm0, xmm0
//   0x94FFE mov     rbx, rax
//   0x95001 mov     rsi, r13
//   0x95004 movups  xmmword ptr [rax+8], xmm0
//   0x95008 mov     rdi, rbx
//   0x9500B mov     rax, 0FFFFFFFF00000000h
//   0x95015 mov     [rbx+20h], rax
//   0x95019 mov     qword ptr [rbx+28h], 0
//   0x95021 mov     [rbx+30h], rax
//   0x95025 mov     qword ptr [rbx+38h], 0
//   0x9502D mov     [rbx+40h], rax
//   0x95031 mov     qword ptr [rbx+48h], 0
//   0x95039 call    sub_1253A0
//   0x9503E mov     rax, qword ptr [rbp+var_78]
//   0x95042 mov     rcx, qword ptr [rbp+var_78+8]
//   0x95046 mov     [rbp+var_A8], rbx
//   0x9504D mov     rsi, [rbp+var_80]
//   0x95051 lea     rdi, [rax+1]
//   0x95055 cmp     rcx, rdi
//   0x95058 jnb     loc_94FB0
//   0x9505E lea     rax, [rbp+var_80]
//   0x95062 mov     rdx, rdi
//   0x95065 mov     ecx, 8
//   0x9506A mov     rdi, rax
//   0x9506D call    _qvector_reserve
//   0x95072 mov     [rbp+var_80], rax
//   0x95076 mov     rsi, rax
//   0x95079 mov     rax, qword ptr [rbp+var_78]
//   0x9507D jmp     loc_94FB0
//   0x95082 align 8
//   0x95088 xor     ebx, ebx
//   0x9508A mov     rdi, [rbp+var_80]
//   0x9508E test    rdi, rdi
//   0x95091 jz      short loc_950A0
//   0x95093 mov     qword ptr [rbp+var_78], 0
//   0x9509B call    _qfree
//   0x950A0 mov     rdi, [rbp+var_50]
//   0x950A4 test    rdi, rdi
//   0x950A7 jz      short loc_950B6
//   0x950A9 mov     [rbp+var_48], 0
//   0x950B1 call    _qfree
//   0x950B6 mov     rdi, [rbp+var_60]
//   0x950BA call    _qfree
//   0x950BF mov     rdi, [rbp+var_A0]
//   0x950C6 test    rdi, rdi
//   0x950C9 jz      loc_94EF6
//   0x950CF mov     qword ptr [rbp+var_98], 0
//   0x950DA call    _qfree
//   0x950DF jmp     loc_94EF6
//   0x950E4 align 8
//   0x950E8 mov     rcx, [rbp+var_C8]
//   0x950EF xor     r8d, r8d
//   0x950F2 mov     rdx, r14
//   0x950F5 mov     rdi, r15
//   0x950F8 mov     rsi, [rbp+var_B8]
//   0x950FF call    sub_944B0
//   0x95104 cmp     qword ptr [rbp+var_98], 0
//   0x9510C mov     r12d, eax
//   0x9510F jz      loc_95247
//   0x95115 mov     dword ptr [rbp+var_B8], 0
//   0x9511F xor     r13d, r13d
//   0x95122 nop     word ptr [rax+rax+00000000h]
//   0x9512D nop     dword ptr [rax]
//   0x95130 mov     rax, [rbp+var_80]
//   0x95134 mov     rsi, [rax+r13*8]
//   0x95138 mov     rax, [rbp+var_A0]
//   0x9513F mov     rdi, [rax+r13*8]
//   0x95143 call    sub_1253A0
//   0x95148 mov     rax, [rbp+var_80]
//   0x9514C mov     r13, [rax+r13*8]
//   0x95150 test    r13, r13
//   0x95153 jz      short loc_95178
//   0x95155 lea     rdi, [r13+40h]
//   0x95159 call    sub_11CDA0
//   0x9515E lea     rdi, [r13+30h]
//   0x95162 call    sub_11CDA0
//   0x95167 lea     rdi, [r13+20h]
//   0x9516B call    sub_11CDA0
//   0x95170 mov     rdi, r13
//   0x95173 call    j__qfree
//   0x95178 add     dword ptr [rbp+var_B8], 1
//   0x9517F mov     rax, qword ptr [rbp+var_98]
//   0x95186 movsxd  r13, dword ptr [rbp+var_B8]
//   0x9518D cmp     r13, rax
//   0x95190 jb      short loc_95130
//   0x95192 test    r12d, r12d
//   0x95195 jz      loc_95088
//   0x9519B test    rax, rax
//   0x9519E jz      loc_9508A
//   0x951A4 cmp     [rbp+var_D0], 0
//   0x951AC jz      short loc_951E8
//   0x951AE mov     rax, [rbp+var_D0]
//   0x951B5 lea     r12, [rax+40h]
//   0x951B9 lea     rax, [r14+40h]
//   0x951BD mov     rsi, r12
//   0x951C0 mov     rdi, rax
//   0x951C3 mov     r13, rax
//   0x951C6 call    sub_11CA10
//   0x951CB cmp     qword ptr [rbp+var_98], 0
//   0x951D3 jnz     short loc_951E8
//   0x951D5 mov     rsi, r12
//   0x951D8 mov     rdi, r13
//   0x951DB call    sub_11CA10
//   0x951E0 jmp     loc_9508A
//   0x951E5 align 8
//   0x951E8 xor     eax, eax
//   0x951EA nop     word ptr [rax+rax+00h]
//   0x951F0 mov     rdx, [rbp+var_A0]
//   0x951F7 mov     rdi, r15
//   0x951FA mov     rsi, [rdx+rax*8]
//   0x951FE mov     rdx, r14
//   0x95201 call    sub_177750
//   0x95206 test    al, al
//   0x95208 jz      short loc_9527A
//   0x9520A add     [rbp+var_BC], 1
//   0x95211 movsxd  rax, [rbp+var_BC]
//   0x95218 cmp     rax, qword ptr [rbp+var_98]
//   0x9521F jb      short loc_951F0
//   0x95221 mov     rax, [rbp+var_D0]
//   0x95228 test    rax, rax
//   0x9522B jz      loc_9508A
//   0x95231 lea     r12, [rax+40h]
//   0x95235 lea     rax, [r14+40h]
//   0x95239 mov     r13, rax
//   0x9523C jmp     short loc_951D5
//   0x9523E align 20h
//   0x95240 xor     ebx, ebx
//   0x95242 jmp     loc_950A0
//   0x95247 test    eax, eax
//   0x95249 setnz   bl
//   0x9524C jmp     loc_9508A
//   0x95251 mov     rax, cs:under_debugger_ptr
//   0x95258 cmp     byte ptr [rax], 0
//   0x9525B jnz     loc_2F3C6
//   0x95261 mov     rax, [rbp+var_38]
//   0x95265 sub     rax, fs:28h
//   0x9526E jnz     short loc_952A8
//   0x95270 mov     edi, 0C351h
//   0x95275 call    sub_383060
//   0x9527A mov     rax, cs:under_debugger_ptr
//   0x95281 cmp     byte ptr [rax], 0
//   0x95284 jnz     loc_2F3C6
//   0x9528A mov     rax, [rbp+var_38]
//   0x9528E sub     rax, fs:28h
//   0x95297 jnz     short loc_952AD
//   0x95299 mov     edi, 0C352h
//   0x9529E call    sub_383060
//   0x952A3 call    ___stack_chk_fail
//   0x952A8 call    ___stack_chk_fail
//   0x952AD call    ___stack_chk_fail
//   0x952B2 mov     r15, rax
//   0x952B5 jmp     loc_2F3C8
//   0x952BA mov     rbx, rax
//   0x952BD jmp     loc_2F40E
//   0x952C2 mov     rbx, rax
//   0x952C5 jmp     loc_2F402
//   0x952CA mov     rbx, rax
//   0x952CD jmp     loc_2F3EE
// ============================================================

void sub_94EA0(/* signature unknown */)
{
    // see disassembly above
}

