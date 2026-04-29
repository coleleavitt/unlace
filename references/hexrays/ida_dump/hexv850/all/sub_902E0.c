// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x902E0
// Name:           sub_902E0
// Function size:  1074 bytes (245 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x902E0 push    rbp
//   0x902E1 mov     rbp, rsp
//   0x902E4 push    r15
//   0x902E6 mov     r15, rdi
//   0x902E9 push    r14
//   0x902EB mov     r14, rdx
//   0x902EE push    r13
//   0x902F0 push    r12
//   0x902F2 mov     r12, rsi
//   0x902F5 push    rbx
//   0x902F6 mov     ebx, 1
//   0x902FB sub     rsp, 0B8h
//   0x90302 mov     [rbp+var_B8], rsi
//   0x90309 mov     [rbp+var_C8], rcx
//   0x90310 mov     [rbp+var_D0], r8
//   0x90317 mov     r8, fs:28h
//   0x90320 mov     [rbp+var_38], r8
//   0x90324 xor     r8d, r8d
//   0x90327 call    sub_8F8F0
//   0x9032C mov     [rbp+var_BC], eax
//   0x90332 test    eax, eax
//   0x90334 jz      short loc_90360
//   0x90336 mov     rax, [rbp+var_38]
//   0x9033A sub     rax, fs:28h
//   0x90343 jnz     loc_906E3
//   0x90349 lea     rsp, [rbp-28h]
//   0x9034D mov     eax, ebx
//   0x9034F pop     rbx
//   0x90350 pop     r12
//   0x90352 pop     r13
//   0x90354 pop     r14
//   0x90356 pop     r15
//   0x90358 pop     rbp
//   0x90359 retn
//   0x9035A align 20h
//   0x90360 lea     rax, [rbp+var_60]
//   0x90364 pxor    xmm0, xmm0
//   0x90368 xor     ecx, ecx
//   0x9036A mov     rdx, r14
//   0x9036D mov     rsi, r15
//   0x90370 mov     rdi, rax
//   0x90373 mov     [rbp+var_D8], rax
//   0x9037A mov     rbx, rax
//   0x9037D mov     [rbp+var_A0], 0
//   0x90388 movups  [rbp+var_98], xmm0
//   0x9038F call    sub_11FAC0
//   0x90394 mov     eax, [r15+48h]
//   0x90398 sub     rsp, 8
//   0x9039C mov     r8, r14
//   0x9039F mov     rcx, r12
//   0x903A2 lea     r9, [rbp+var_A0]
//   0x903A9 mov     rdx, r14
//   0x903AC mov     rsi, rbx
//   0x903AF mov     rdi, r15
//   0x903B2 push    rax
//   0x903B3 call    sub_172CF0
//   0x903B8 pop     rcx
//   0x903B9 mov     ebx, eax
//   0x903BB pop     rsi
//   0x903BC test    al, al
//   0x903BE jz      loc_904E0
//   0x903C4 cmp     qword ptr [rbp+var_98], 0
//   0x903CC jz      loc_90680
//   0x903D2 pxor    xmm0, xmm0
//   0x903D6 mov     [rbp+var_80], 0
//   0x903DE xor     r12d, r12d
//   0x903E1 xor     eax, eax
//   0x903E3 movups  [rbp+var_78], xmm0
//   0x903E7 jmp     short loc_90425
//   0x903E9 align 10h
//   0x903F0 mov     [rsi+rax*8], rbx
//   0x903F4 mov     rdx, r14
//   0x903F7 mov     rsi, r13
//   0x903FA mov     rdi, r15
//   0x903FD add     qword ptr [rbp+var_78], 1
//   0x90402 call    sub_172B90
//   0x90407 mov     ebx, eax
//   0x90409 test    al, al
//   0x9040B jz      loc_90691
//   0x90411 add     r12d, 1
//   0x90415 movsxd  rax, r12d
//   0x90418 cmp     rax, qword ptr [rbp+var_98]
//   0x9041F jnb     loc_90528
//   0x90425 mov     rdx, [rbp+var_A0]
//   0x9042C mov     edi, 50h ; 'P'
//   0x90431 mov     r13, [rdx+rax*8]
//   0x90435 call    j__qalloc_or_throw
//   0x9043A pxor    xmm0, xmm0
//   0x9043E mov     rbx, rax
//   0x90441 mov     rsi, r13
//   0x90444 movups  xmmword ptr [rax+8], xmm0
//   0x90448 mov     rdi, rbx
//   0x9044B mov     rax, 0FFFFFFFF00000000h
//   0x90455 mov     [rbx+20h], rax
//   0x90459 mov     qword ptr [rbx+28h], 0
//   0x90461 mov     [rbx+30h], rax
//   0x90465 mov     qword ptr [rbx+38h], 0
//   0x9046D mov     [rbx+40h], rax
//   0x90471 mov     qword ptr [rbx+48h], 0
//   0x90479 call    sub_1207E0
//   0x9047E mov     rax, qword ptr [rbp+var_78]
//   0x90482 mov     rcx, qword ptr [rbp+var_78+8]
//   0x90486 mov     [rbp+var_A8], rbx
//   0x9048D mov     rsi, [rbp+var_80]
//   0x90491 lea     rdi, [rax+1]
//   0x90495 cmp     rcx, rdi
//   0x90498 jnb     loc_903F0
//   0x9049E lea     rax, [rbp+var_80]
//   0x904A2 mov     rdx, rdi
//   0x904A5 mov     ecx, 8
//   0x904AA mov     rdi, rax
//   0x904AD call    _qvector_reserve
//   0x904B2 mov     [rbp+var_80], rax
//   0x904B6 mov     rsi, rax
//   0x904B9 mov     rax, qword ptr [rbp+var_78]
//   0x904BD jmp     loc_903F0
//   0x904C2 align 8
//   0x904C8 xor     ebx, ebx
//   0x904CA mov     rdi, [rbp+var_80]
//   0x904CE test    rdi, rdi
//   0x904D1 jz      short loc_904E0
//   0x904D3 mov     qword ptr [rbp+var_78], 0
//   0x904DB call    _qfree
//   0x904E0 mov     rdi, [rbp+var_50]
//   0x904E4 test    rdi, rdi
//   0x904E7 jz      short loc_904F6
//   0x904E9 mov     [rbp+var_48], 0
//   0x904F1 call    _qfree
//   0x904F6 mov     rdi, [rbp+var_60]
//   0x904FA call    _qfree
//   0x904FF mov     rdi, [rbp+var_A0]
//   0x90506 test    rdi, rdi
//   0x90509 jz      loc_90336
//   0x9050F mov     qword ptr [rbp+var_98], 0
//   0x9051A call    _qfree
//   0x9051F jmp     loc_90336
//   0x90524 align 8
//   0x90528 mov     rcx, [rbp+var_C8]
//   0x9052F xor     r8d, r8d
//   0x90532 mov     rdx, r14
//   0x90535 mov     rdi, r15
//   0x90538 mov     rsi, [rbp+var_B8]
//   0x9053F call    sub_8F8F0
//   0x90544 cmp     qword ptr [rbp+var_98], 0
//   0x9054C mov     r12d, eax
//   0x9054F jz      loc_90687
//   0x90555 mov     dword ptr [rbp+var_B8], 0
//   0x9055F xor     r13d, r13d
//   0x90562 nop     word ptr [rax+rax+00000000h]
//   0x9056D nop     dword ptr [rax]
//   0x90570 mov     rax, [rbp+var_80]
//   0x90574 mov     rsi, [rax+r13*8]
//   0x90578 mov     rax, [rbp+var_A0]
//   0x9057F mov     rdi, [rax+r13*8]
//   0x90583 call    sub_1207E0
//   0x90588 mov     rax, [rbp+var_80]
//   0x9058C mov     r13, [rax+r13*8]
//   0x90590 test    r13, r13
//   0x90593 jz      short loc_905B8
//   0x90595 lea     rdi, [r13+40h]
//   0x90599 call    sub_1181E0
//   0x9059E lea     rdi, [r13+30h]
//   0x905A2 call    sub_1181E0
//   0x905A7 lea     rdi, [r13+20h]
//   0x905AB call    sub_1181E0
//   0x905B0 mov     rdi, r13
//   0x905B3 call    j__qfree
//   0x905B8 add     dword ptr [rbp+var_B8], 1
//   0x905BF mov     rax, qword ptr [rbp+var_98]
//   0x905C6 movsxd  r13, dword ptr [rbp+var_B8]
//   0x905CD cmp     r13, rax
//   0x905D0 jb      short loc_90570
//   0x905D2 test    r12d, r12d
//   0x905D5 jz      loc_904C8
//   0x905DB test    rax, rax
//   0x905DE jz      loc_904CA
//   0x905E4 cmp     [rbp+var_D0], 0
//   0x905EC jz      short loc_90628
//   0x905EE mov     rax, [rbp+var_D0]
//   0x905F5 lea     r12, [rax+40h]
//   0x905F9 lea     rax, [r14+40h]
//   0x905FD mov     rsi, r12
//   0x90600 mov     rdi, rax
//   0x90603 mov     r13, rax
//   0x90606 call    sub_117E50
//   0x9060B cmp     qword ptr [rbp+var_98], 0
//   0x90613 jnz     short loc_90628
//   0x90615 mov     rsi, r12
//   0x90618 mov     rdi, r13
//   0x9061B call    sub_117E50
//   0x90620 jmp     loc_904CA
//   0x90625 align 8
//   0x90628 xor     eax, eax
//   0x9062A nop     word ptr [rax+rax+00h]
//   0x90630 mov     rdx, [rbp+var_A0]
//   0x90637 mov     rdi, r15
//   0x9063A mov     rsi, [rdx+rax*8]
//   0x9063E mov     rdx, r14
//   0x90641 call    sub_172B90
//   0x90646 test    al, al
//   0x90648 jz      short loc_906BA
//   0x9064A add     [rbp+var_BC], 1
//   0x90651 movsxd  rax, [rbp+var_BC]
//   0x90658 cmp     rax, qword ptr [rbp+var_98]
//   0x9065F jb      short loc_90630
//   0x90661 mov     rax, [rbp+var_D0]
//   0x90668 test    rax, rax
//   0x9066B jz      loc_904CA
//   0x90671 lea     r12, [rax+40h]
//   0x90675 lea     rax, [r14+40h]
//   0x90679 mov     r13, rax
//   0x9067C jmp     short loc_90615
//   0x9067E align 20h
//   0x90680 xor     ebx, ebx
//   0x90682 jmp     loc_904E0
//   0x90687 test    eax, eax
//   0x90689 setnz   bl
//   0x9068C jmp     loc_904CA
//   0x90691 mov     rax, cs:under_debugger_ptr
//   0x90698 cmp     byte ptr [rax], 0
//   0x9069B jnz     loc_2E246
//   0x906A1 mov     rax, [rbp+var_38]
//   0x906A5 sub     rax, fs:28h
//   0x906AE jnz     short loc_906E8
//   0x906B0 mov     edi, 0C351h
//   0x906B5 call    sub_37CFE0
//   0x906BA mov     rax, cs:under_debugger_ptr
//   0x906C1 cmp     byte ptr [rax], 0
//   0x906C4 jnz     loc_2E246
//   0x906CA mov     rax, [rbp+var_38]
//   0x906CE sub     rax, fs:28h
//   0x906D7 jnz     short loc_906ED
//   0x906D9 mov     edi, 0C352h
//   0x906DE call    sub_37CFE0
//   0x906E3 call    ___stack_chk_fail
//   0x906E8 call    ___stack_chk_fail
//   0x906ED call    ___stack_chk_fail
//   0x906F2 mov     r15, rax
//   0x906F5 jmp     loc_2E248
//   0x906FA mov     rbx, rax
//   0x906FD jmp     loc_2E28E
//   0x90702 mov     rbx, rax
//   0x90705 jmp     loc_2E282
//   0x9070A mov     rbx, rax
//   0x9070D jmp     loc_2E26E
// ============================================================

void sub_902E0(/* signature unknown */)
{
    // see disassembly above
}

