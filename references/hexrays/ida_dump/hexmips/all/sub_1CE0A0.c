// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x1CE0A0
// Name:           sub_1CE0A0
// Function size:  361 bytes (89 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x1CE0A0 push    r13
//   0x1CE0A2 push    r12
//   0x1CE0A4 push    rbp
//   0x1CE0A5 mov     rbp, rsi
//   0x1CE0A8 mov     rsi, rdx
//   0x1CE0AB push    rbx
//   0x1CE0AC mov     rbx, rdi
//   0x1CE0AF sub     rsp, 28h
//   0x1CE0B3 mov     r12, fs:28h
//   0x1CE0BC mov     [rsp+48h+var_30], r12
//   0x1CE0C1 mov     r12, rdx
//   0x1CE0C4 call    sub_3F9010
//   0x1CE0C9 mov     r13d, eax
//   0x1CE0CC test    al, al
//   0x1CE0CE jz      loc_1CE16E
//   0x1CE0D4 mov     rdx, [rbx+60h]
//   0x1CE0D8 mov     rax, [rbx+58h]
//   0x1CE0DC lea     rdx, [rdx+rdx*4]
//   0x1CE0E0 shl     rdx, 4
//   0x1CE0E4 add     rdx, rax
//   0x1CE0E7 cmp     rdx, rax
//   0x1CE0EA jnz     short loc_1CE10D
//   0x1CE0EC jmp     loc_1CE190
//   0x1CE0F1 align 20h
//   0x1CE100 add     rax, 50h ; 'P'
//   0x1CE104 cmp     rax, rdx
//   0x1CE107 jz      loc_1CE190
//   0x1CE10D test    byte ptr [rax+48h], 2
//   0x1CE111 jz      short loc_1CE100
//   0x1CE113 movzx   edi, byte ptr [r12+0Dh]
//   0x1CE119 mov     rbx, [rbx+10h]
//   0x1CE11D call    _get_dtype_size
//   0x1CE122 mov     rdi, rbx
//   0x1CE125 mov     edx, 1
//   0x1CE12A movsxd  rsi, eax
//   0x1CE12D call    sub_133F40
//   0x1CE132 mov     ebx, eax
//   0x1CE134 cmp     eax, 0FFFFFFFFh
//   0x1CE137 jz      loc_1CE1D7
//   0x1CE13D movzx   edi, byte ptr [r12+0Dh]
//   0x1CE143 call    _get_dtype_size
//   0x1CE148 mov     rsi, rsp
//   0x1CE14B mov     rdi, rbp
//   0x1CE14E mov     [rsp+48h+var_40], ebx
//   0x1CE152 mov     [rsp+48h+var_48], 1
//   0x1CE15A mov     rbx, rsp
//   0x1CE15D mov     dword ptr [rsp+48h+var_48+4], eax
//   0x1CE161 call    sub_120F80
//   0x1CE166 mov     rdi, rsp
//   0x1CE169 call    sub_118BA0
//   0x1CE16E mov     rax, [rsp+48h+var_30]
//   0x1CE173 sub     rax, fs:28h
//   0x1CE17C jnz     short loc_1CE1D2
//   0x1CE17E add     rsp, 28h
//   0x1CE182 mov     eax, r13d
//   0x1CE185 pop     rbx
//   0x1CE186 pop     rbp
//   0x1CE187 pop     r12
//   0x1CE189 pop     r13
//   0x1CE18B retn
//   0x1CE18C align 10h
//   0x1CE190 mov     rax, [rbx+8]
//   0x1CE194 movzx   edi, byte ptr [r12+0Dh]
//   0x1CE19A mov     r13, [rax+70h]
//   0x1CE19E call    _get_dtype_size
//   0x1CE1A3 mov     rcx, rax
//   0x1CE1A6 mov     rax, [rsp+48h+var_30]
//   0x1CE1AB sub     rax, fs:28h
//   0x1CE1B4 jnz     short loc_1CE1D2
//   0x1CE1B6 add     rsp, 28h
//   0x1CE1BA lea     rdx, [rbx+80h]
//   0x1CE1C1 mov     rsi, rbp
//   0x1CE1C4 mov     rdi, r13
//   0x1CE1C7 pop     rbx
//   0x1CE1C8 pop     rbp
//   0x1CE1C9 pop     r12
//   0x1CE1CB pop     r13
//   0x1CE1CD jmp     sub_1CDF10
//   0x1CE1D2 call    ___stack_chk_fail
//   0x1CE1D7 mov     rax, cs:under_debugger_ptr
//   0x1CE1DE cmp     byte ptr [rax], 0
//   0x1CE1E1 jnz     loc_408A8
//   0x1CE1E7 mov     rax, [rsp+48h+var_30]
//   0x1CE1EC sub     rax, fs:28h
//   0x1CE1F5 jnz     short loc_1CE1D2
//   0x1CE1F7 mov     edi, 0CE3Fh
//   0x1CE1FC call    sub_37E160
//   0x1CE201 mov     rbp, rax
//   0x1CE204 jmp     loc_408AA
// ============================================================

void sub_1CE0A0(/* signature unknown */)
{
    // see disassembly above
}

