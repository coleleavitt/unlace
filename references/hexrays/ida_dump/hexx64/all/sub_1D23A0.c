// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x1D23A0
// Name:           sub_1D23A0
// Function size:  361 bytes (89 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x1D23A0 push    r13
//   0x1D23A2 push    r12
//   0x1D23A4 push    rbp
//   0x1D23A5 mov     rbp, rsi
//   0x1D23A8 mov     rsi, rdx
//   0x1D23AB push    rbx
//   0x1D23AC mov     rbx, rdi
//   0x1D23AF sub     rsp, 28h
//   0x1D23B3 mov     r12, fs:28h
//   0x1D23BC mov     [rsp+48h+var_30], r12
//   0x1D23C1 mov     r12, rdx
//   0x1D23C4 call    sub_414E70
//   0x1D23C9 mov     r13d, eax
//   0x1D23CC test    al, al
//   0x1D23CE jz      loc_1D246E
//   0x1D23D4 mov     rdx, [rbx+60h]
//   0x1D23D8 mov     rax, [rbx+58h]
//   0x1D23DC lea     rdx, [rdx+rdx*4]
//   0x1D23E0 shl     rdx, 4
//   0x1D23E4 add     rdx, rax
//   0x1D23E7 cmp     rdx, rax
//   0x1D23EA jnz     short loc_1D240D
//   0x1D23EC jmp     loc_1D2490
//   0x1D23F1 align 20h
//   0x1D2400 add     rax, 50h ; 'P'
//   0x1D2404 cmp     rax, rdx
//   0x1D2407 jz      loc_1D2490
//   0x1D240D test    byte ptr [rax+48h], 2
//   0x1D2411 jz      short loc_1D2400
//   0x1D2413 movzx   edi, byte ptr [r12+0Dh]
//   0x1D2419 mov     rbx, [rbx+10h]
//   0x1D241D call    _get_dtype_size
//   0x1D2422 mov     rdi, rbx
//   0x1D2425 mov     edx, 1
//   0x1D242A movsxd  rsi, eax
//   0x1D242D call    sub_138140
//   0x1D2432 mov     ebx, eax
//   0x1D2434 cmp     eax, 0FFFFFFFFh
//   0x1D2437 jz      loc_1D24D7
//   0x1D243D movzx   edi, byte ptr [r12+0Dh]
//   0x1D2443 call    _get_dtype_size
//   0x1D2448 mov     rsi, rsp
//   0x1D244B mov     rdi, rbp
//   0x1D244E mov     [rsp+48h+var_40], ebx
//   0x1D2452 mov     [rsp+48h+var_48], 1
//   0x1D245A mov     rbx, rsp
//   0x1D245D mov     dword ptr [rsp+48h+var_48+4], eax
//   0x1D2461 call    sub_125180
//   0x1D2466 mov     rdi, rsp
//   0x1D2469 call    sub_11CDA0
//   0x1D246E mov     rax, [rsp+48h+var_30]
//   0x1D2473 sub     rax, fs:28h
//   0x1D247C jnz     short loc_1D24D2
//   0x1D247E add     rsp, 28h
//   0x1D2482 mov     eax, r13d
//   0x1D2485 pop     rbx
//   0x1D2486 pop     rbp
//   0x1D2487 pop     r12
//   0x1D2489 pop     r13
//   0x1D248B retn
//   0x1D248C align 10h
//   0x1D2490 mov     rax, [rbx+8]
//   0x1D2494 movzx   edi, byte ptr [r12+0Dh]
//   0x1D249A mov     r13, [rax+70h]
//   0x1D249E call    _get_dtype_size
//   0x1D24A3 mov     rcx, rax
//   0x1D24A6 mov     rax, [rsp+48h+var_30]
//   0x1D24AB sub     rax, fs:28h
//   0x1D24B4 jnz     short loc_1D24D2
//   0x1D24B6 add     rsp, 28h
//   0x1D24BA lea     rdx, [rbx+80h]
//   0x1D24C1 mov     rsi, rbp
//   0x1D24C4 mov     rdi, r13
//   0x1D24C7 pop     rbx
//   0x1D24C8 pop     rbp
//   0x1D24C9 pop     r12
//   0x1D24CB pop     r13
//   0x1D24CD jmp     sub_1D2210
//   0x1D24D2 call    ___stack_chk_fail
//   0x1D24D7 mov     rax, cs:under_debugger_ptr
//   0x1D24DE cmp     byte ptr [rax], 0
//   0x1D24E1 jnz     loc_41A28
//   0x1D24E7 mov     rax, [rsp+48h+var_30]
//   0x1D24EC sub     rax, fs:28h
//   0x1D24F5 jnz     short loc_1D24D2
//   0x1D24F7 mov     edi, 0CE3Fh
//   0x1D24FC call    sub_383060
//   0x1D2501 mov     rbp, rax
//   0x1D2504 jmp     loc_41A2A
// ============================================================

void sub_1D23A0(/* signature unknown */)
{
    // see disassembly above
}

