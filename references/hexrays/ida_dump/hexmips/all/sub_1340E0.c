// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x1340E0
// Name:           sub_1340E0
// Function size:  351 bytes (87 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x1340E0 push    rbp
//   0x1340E1 push    rbx
//   0x1340E2 mov     rbx, rdi
//   0x1340E5 sub     rsp, 8
//   0x1340E9 cmp     dword ptr [rdi+138h], 1
//   0x1340F0 jle     short loc_134110
//   0x1340F2 or      dword ptr [rdi], 200h
//   0x1340F8 xor     ebp, ebp
//   0x1340FA mov     rdi, rbx
//   0x1340FD mov     esi, 1
//   0x134102 call    sub_31D150
//   0x134107 add     rsp, 8
//   0x13410B mov     eax, ebp
//   0x13410D pop     rbx
//   0x13410E pop     rbp
//   0x13410F retn
//   0x134110 lea     rdx, aBeforePreoptim; "before preoptimize"
//   0x134117 mov     esi, 1
//   0x13411C xor     eax, eax
//   0x13411E call    sub_62DA0
//   0x134123 mov     rdi, rbx
//   0x134126 call    nullsub_182
//   0x13412B mov     rbp, [rbx+208h]
//   0x134132 test    rbp, rbp
//   0x134135 jz      short loc_134151
//   0x134137 nop     word ptr [rax+rax+00000000h]
//   0x134140 mov     rdi, rbp
//   0x134143 call    sub_B20C0
//   0x134148 mov     rbp, [rbp+8]
//   0x13414C test    rbp, rbp
//   0x13414F jnz     short loc_134140
//   0x134151 mov     rdi, rbx
//   0x134154 call    sub_A2BC0
//   0x134159 mov     rdi, rbx
//   0x13415C call    sub_A2F30
//   0x134161 or      dword ptr [rbx], 200h
//   0x134167 mov     rdi, rbx
//   0x13416A xor     eax, eax
//   0x13416C lea     rdx, aAfterPreoptimi; "after preoptimize"
//   0x134173 mov     esi, 1
//   0x134178 call    sub_62DA0
//   0x13417D mov     rdi, rbx
//   0x134180 call    sub_9C750
//   0x134185 test    eax, eax
//   0x134187 jnz     short loc_1341F0
//   0x134189 mov     rdi, [rbx+3A0h]
//   0x134190 test    rdi, rdi
//   0x134193 jz      short loc_134210
//   0x134195 call    sub_19BA10
//   0x13419A lea     rdx, nullsub_75
//   0x1341A1 mov     [rbx+3A8h], rax
//   0x1341A8 mov     rdi, rax
//   0x1341AB mov     rax, [rax]
//   0x1341AE mov     rax, [rax+10h]
//   0x1341B2 cmp     rax, rdx
//   0x1341B5 jnz     loc_134238
//   0x1341BB mov     rdi, [rbx+5D8h]
//   0x1341C2 mov     rdx, rbx
//   0x1341C5 mov     esi, 4
//   0x1341CA xor     eax, eax
//   0x1341CC call    sub_339220
//   0x1341D1 mov     ebp, eax
//   0x1341D3 test    eax, eax
//   0x1341D5 jnz     loc_1340FA
//   0x1341DB mov     esi, 2
//   0x1341E0 mov     rdi, rbx
//   0x1341E3 call    sub_32BEC0
//   0x1341E8 mov     ebp, eax
//   0x1341EA jmp     loc_1340FA
//   0x1341EF align 10h
//   0x1341F0 lea     rdx, aAfterCombinedO; "after combined operand propagation"
//   0x1341F7 mov     esi, 1
//   0x1341FC mov     rdi, rbx
//   0x1341FF xor     eax, eax
//   0x134201 call    sub_62DA0
//   0x134206 jmp     short loc_134189
//   0x134208 align 10h
//   0x134210 mov     rdi, [rbx+5E0h]
//   0x134217 mov     rsi, rbx
//   0x13421A mov     rax, [rdi]
//   0x13421D call    qword ptr [rax+138h]
//   0x134223 mov     [rbx+3A0h], rax
//   0x13422A mov     rdi, rax
//   0x13422D jmp     loc_134195
//   0x134232 align 8
//   0x134238 call    rax
//   0x13423A jmp     loc_1341BB
// ============================================================

void sub_1340E0(/* signature unknown */)
{
    // see disassembly above
}

