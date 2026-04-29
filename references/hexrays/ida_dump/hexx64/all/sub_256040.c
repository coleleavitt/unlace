// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x256040
// Name:           sub_256040
// Function size:  511 bytes (114 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x256040 push    r15
//   0x256042 mov     esi, 1
//   0x256047 push    r14
//   0x256049 push    r13
//   0x25604B push    r12
//   0x25604D push    rbp
//   0x25604E push    rbx
//   0x25604F sub     rsp, 98h
//   0x256056 mov     r14, fs:28h
//   0x25605F mov     [rsp+0C8h+var_40], r14
//   0x256067 mov     r14, rdi
//   0x25606A call    sub_283C90
//   0x25606F mov     rdi, r14
//   0x256072 call    sub_284A90
//   0x256077 mov     rdi, r14
//   0x25607A call    sub_270860
//   0x25607F mov     ebx, eax
//   0x256081 test    al, al
//   0x256083 jnz     short loc_2560B0
//   0x256085 mov     rax, [rsp+0C8h+var_40]
//   0x25608D sub     rax, fs:28h
//   0x256096 jnz     loc_25622A
//   0x25609C add     rsp, 98h
//   0x2560A3 mov     eax, ebx
//   0x2560A5 pop     rbx
//   0x2560A6 pop     rbp
//   0x2560A7 pop     r12
//   0x2560A9 pop     r13
//   0x2560AB pop     r14
//   0x2560AD pop     r15
//   0x2560AF retn
//   0x2560B0 xor     esi, esi
//   0x2560B2 mov     rdi, r14
//   0x2560B5 lea     rbp, [r14+10h]
//   0x2560B9 mov     r12, rsp
//   0x2560BC call    sub_284DF0
//   0x2560C1 xor     esi, esi
//   0x2560C3 mov     rdi, r14
//   0x2560C6 lea     r13, off_4DFB58
//   0x2560CD call    sub_283C90
//   0x2560D2 pxor    xmm0, xmm0
//   0x2560D6 xor     edx, edx
//   0x2560D8 mov     rsi, rbp
//   0x2560DB mov     rdi, rsp
//   0x2560DE mov     [rsp+0C8h+var_C8], r13
//   0x2560E2 mov     [rsp+0C8h+var_C0], 0
//   0x2560EA mov     [rsp+0C8h+var_B8], 0
//   0x2560F3 mov     [rsp+0C8h+var_A0], 0
//   0x2560FC movups  [rsp+0C8h+var_B0], xmm0
//   0x256101 movaps  [rsp+0C8h+var_98], xmm0
//   0x256106 call    sub_255A80
//   0x25610B mov     rdi, r14
//   0x25610E call    sub_255F70
//   0x256113 mov     rdx, [r14+8]
//   0x256117 mov     rax, [rdx+1B0h]
//   0x25611E mov     rdx, [rdx+1B8h]
//   0x256125 lea     rcx, [rdx+rdx*2]
//   0x256129 lea     rdx, [rdx+rcx*4]
//   0x25612D shl     rdx, 3
//   0x256131 jz      short loc_25616B
//   0x256133 nop     word ptr [rax+rax+00000000h]
//   0x25613E xchg    ax, ax
//   0x256140 and     dword ptr [rax+18h], 0FFFFFFFEh
//   0x256144 mov     rcx, [r14+8]
//   0x256148 add     rax, 68h ; 'h'
//   0x25614C mov     rdx, [rcx+1B8h]
//   0x256153 lea     rsi, [rdx+rdx*2]
//   0x256157 lea     rsi, [rdx+rsi*4]
//   0x25615B mov     rdx, [rcx+1B0h]
//   0x256162 lea     rdx, [rdx+rsi*8]
//   0x256166 cmp     rax, rdx
//   0x256169 jnz     short loc_256140
//   0x25616B lea     r14, [rsp+0C8h+var_88]
//   0x256170 pxor    xmm0, xmm0
//   0x256174 xor     edx, edx
//   0x256176 mov     rsi, rbp
//   0x256179 lea     r15, off_4DFB98
//   0x256180 mov     rdi, r14
//   0x256183 mov     [rsp+0C8h+var_80], 0
//   0x25618B mov     [rsp+0C8h+var_78], 0
//   0x256194 mov     [rsp+0C8h+var_60], 0
//   0x25619D mov     [rsp+0C8h+var_88], r15
//   0x2561A2 movups  [rsp+0C8h+var_70], xmm0
//   0x2561A7 movaps  [rsp+0C8h+var_58], xmm0
//   0x2561AC call    sub_255A80
//   0x2561B1 mov     rdi, [rsp+0C8h+var_60]
//   0x2561B6 lea     rbp, off_4DBCF8
//   0x2561BD mov     [rsp+0C8h+var_88], rbp
//   0x2561C2 test    rdi, rdi
//   0x2561C5 jz      short loc_2561D5
//   0x2561C7 mov     qword ptr [rsp+0C8h+var_58], 0
//   0x2561D0 call    _qfree
//   0x2561D5 mov     rdi, [rsp+0C8h+var_78]
//   0x2561DA test    rdi, rdi
//   0x2561DD jz      short loc_2561ED
//   0x2561DF mov     qword ptr [rsp+0C8h+var_70], 0
//   0x2561E8 call    _qfree
//   0x2561ED mov     rdi, [rsp+0C8h+var_A0]
//   0x2561F2 mov     [rsp+0C8h+var_C8], rbp
//   0x2561F6 test    rdi, rdi
//   0x2561F9 jz      short loc_256209
//   0x2561FB mov     qword ptr [rsp+0C8h+var_98], 0
//   0x256204 call    _qfree
//   0x256209 mov     rdi, [rsp+0C8h+var_B8]
//   0x25620E test    rdi, rdi
//   0x256211 jz      loc_256085
//   0x256217 mov     qword ptr [rsp+0C8h+var_B0], 0
//   0x256220 call    _qfree
//   0x256225 jmp     loc_256085
//   0x25622A call    ___stack_chk_fail
//   0x25622F mov     rbx, rax
//   0x256232 jmp     loc_4884D
//   0x256237 mov     rbx, rax
//   0x25623A jmp     loc_48840
// ============================================================

void sub_256040(/* signature unknown */)
{
    // see disassembly above
}

