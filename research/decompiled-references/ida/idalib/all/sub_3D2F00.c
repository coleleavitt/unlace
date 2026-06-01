// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3D2F00
// Name:           sub_3D2F00
// Function size:  1249 bytes (273 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3D2F00 push    r15; int
//   0x3D2F02 push    r14; int
//   0x3D2F04 push    r13; int
//   0x3D2F06 push    r12; int
//   0x3D2F08 mov     r12, rsi
//   0x3D2F0B push    rbp; int
//   0x3D2F0C mov     rbp, rdx
//   0x3D2F0F mov     edx, 4
//   0x3D2F14 push    rbx; int
//   0x3D2F15 mov     rbx, rdi
//   0x3D2F18 sub     rsp, 0A8h
//   0x3D2F1F mov     r15, fs:28h
//   0x3D2F28 mov     qword ptr [rsp+0D8h+var_40], r15; int
//   0x3D2F30 mov     r15d, ecx
//   0x3D2F33 call    sub_3BE900
//   0x3D2F38 and     eax, 600h
//   0x3D2F3D cmp     rax, 200h
//   0x3D2F43 jz      loc_3D3151
//   0x3D2F49 mov     rax, 100000000h
//   0x3D2F53 mov     rdx, [rbx+18h]; int
//   0x3D2F57 cmp     dword ptr [rdx+18h], 8
//   0x3D2F5B jnz     short loc_3D2F64
//   0x3D2F5D mov     rax, 0FFFFFFFFFFFFFFFFh
//   0x3D2F64 cmp     rbp, rax
//   0x3D2F67 jb      loc_3D3130
//   0x3D2F6D pxor    xmm0, xmm0
//   0x3D2F71 mov     [rsp+0D8h+var_88], 0FFFFFFFFh; int
//   0x3D2F79 lea     rdi, [rsp+0D8h+ptr]; int
//   0x3D2F7E mov     [rsp+0D8h+ptr], 0; __int64
//   0x3D2F87 mov     qword ptr [rsp+0D8h+var_90], 0; int
//   0x3D2F90 movups  xmmword ptr [rsp+0D8h+var_A0], xmm0; int
//   0x3D2F95 cmp     r12, rbp
//   0x3D2F98 jb      loc_3D3380
//   0x3D2F9E lea     r14, [rbx+410h]
//   0x3D2FA5 mov     qword ptr [rsp+0D8h+var_D8], rdi; int
//   0x3D2FA9 mov     rsi, r14; int
//   0x3D2FAC call    _rangeset_t_intersect
//   0x3D2FB1 mov     r12d, r15d
//   0x3D2FB4 mov     rdi, qword ptr [rsp+0D8h+var_D8]; int
//   0x3D2FB8 and     r12d, 0FFFFFF7Fh
//   0x3D2FBF jz      loc_3D3160
//   0x3D2FC5 lea     rax, [rbx+460h]
//   0x3D2FCC mov     rsi, rax
//   0x3D2FCF mov     [rsp+0D8h+var_D0], rax; void *
//   0x3D2FD4 call    _rangeset_t_sub2
//   0x3D2FD9 mov     rax, qword ptr [rsp+0D8h+var_A0]
//   0x3D2FDE mov     rbp, [rsp+0D8h+ptr]
//   0x3D2FE3 mov     rcx, rax
//   0x3D2FE6 shl     rcx, 4
//   0x3D2FEA jz      loc_3D32EB
//   0x3D2FF0 lea     rax, [rsp+0D8h+var_78]
//   0x3D2FF5 lea     r13, [rsp+0D8h+var_70]
//   0x3D2FFA mov     qword ptr [rsp+0D8h+var_D8], rax; int
//   0x3D2FFE xchg    ax, ax
//   0x3D3000 mov     rsi, qword ptr [rsp+0D8h+var_D8]; int
//   0x3D3004 mov     ecx, 1; int
//   0x3D3009 mov     rdx, rbp; int
//   0x3D300C mov     rdi, rbx; int
//   0x3D300F mov     dword ptr [rsp+0D8h+var_70], 0; void *
//   0x3D3017 mov     [rsp+0D8h+var_68], 0; __int64
//   0x3D3020 mov     qword ptr [rsp+0D8h+var_60], r13; int
//   0x3D3025 mov     qword ptr [rsp+0D8h+var_58], r13; int
//   0x3D302D mov     qword ptr [rsp+0D8h+var_50], 0; int
//   0x3D3039 call    sub_3CE5F0
//   0x3D303E mov     r15, [rbx+3F8h]
//   0x3D3045 mov     r12, [rbp+8]
//   0x3D3049 mov     r14, [rbp+0]
//   0x3D304D call    _must_journal
//   0x3D3052 test    al, al
//   0x3D3054 jz      loc_3D3240
//   0x3D305A cmp     dword ptr [r15+60h], 0FFFFFFFFh
//   0x3D305F jz      loc_3D3240
//   0x3D3065 pxor    xmm1, xmm1
//   0x3D3069 lea     rcx, [rsp+0D8h+var_C8]
//   0x3D306E mov     rdx, r12
//   0x3D3071 mov     rsi, r14
//   0x3D3074 mov     rdi, r15
//   0x3D3077 movups  xmmword ptr [rsp+0D8h+var_C8+8], xmm1
//   0x3D307C mov     [rsp+0D8h+var_C8], 0
//   0x3D3085 call    sub_8BBFF0
//   0x3D308A mov     rsi, [rsp+0D8h+var_C8]
//   0x3D308F mov     r12d, eax
//   0x3D3092 test    eax, eax
//   0x3D3094 jz      loc_3D32F8
//   0x3D309A test    rsi, rsi
//   0x3D309D jz      short loc_3D30B0
//   0x3D309F mov     [rsp+0D8h+var_C8+8], 0
//   0x3D30A8 mov     rdi, rsi; ptr
//   0x3D30AB call    _qfree
//   0x3D30B0 mov     rdi, [rsp+0D8h+var_68]
//   0x3D30B5 call    sub_3BBD60
//   0x3D30BA mov     rax, qword ptr [rsp+0D8h+var_A0]
//   0x3D30BF test    rax, rax
//   0x3D30C2 jz      short loc_3D30E3
//   0x3D30C4 cmp     byte ptr [rbx+3F0h], 0
//   0x3D30CB mov     byte ptr [rbx+4B0h], 1
//   0x3D30D2 mov     qword ptr [rbx+400h], 0FFFFFFFFFFFFFFFFh
//   0x3D30DD jnz     loc_3D3350
//   0x3D30E3 mov     rdi, [rsp+0D8h+ptr]; ptr
//   0x3D30E8 test    rdi, rdi
//   0x3D30EB jz      short loc_3D30FB
//   0x3D30ED mov     qword ptr [rsp+0D8h+var_A0], 0
//   0x3D30F6 call    _qfree
//   0x3D30FB mov     rax, qword ptr [rsp+0D8h+var_40]
//   0x3D3103 sub     rax, fs:28h
//   0x3D310C jnz     loc_3D33BC
//   0x3D3112 add     rsp, 0A8h
//   0x3D3119 mov     eax, r12d
//   0x3D311C pop     rbx
//   0x3D311D pop     rbp
//   0x3D311E pop     r12
//   0x3D3120 pop     r13
//   0x3D3122 pop     r14
//   0x3D3124 pop     r15
//   0x3D3126 retn
//   0x3D3127 align 10h
//   0x3D3130 mov     edx, 4
//   0x3D3135 mov     rsi, rbp
//   0x3D3138 mov     rdi, rbx
//   0x3D313B call    sub_3BE900
//   0x3D3140 and     eax, 600h
//   0x3D3145 cmp     rax, 200h
//   0x3D314B jnz     loc_3D2F6D
//   0x3D3151 mov     r12d, 5F8h
//   0x3D3157 jmp     short loc_3D30FB
//   0x3D3159 align 20h
//   0x3D3160 lea     r13, [rbx+460h]
//   0x3D3167 mov     rsi, r13; int
//   0x3D316A call    _rangeset_t_intersect
//   0x3D316F mov     rax, qword ptr [rsp+0D8h+var_A0]
//   0x3D3174 mov     rbp, [rsp+0D8h+ptr]
//   0x3D3179 mov     rcx, rax
//   0x3D317C shl     rcx, 4
//   0x3D3180 jz      loc_3D30BF
//   0x3D3186 shr     r15d, 7
//   0x3D318A lea     rax, [rbx+488h]
//   0x3D3191 and     r15d, 1
//   0x3D3195 mov     qword ptr [rsp+0D8h+var_D8], rax
//   0x3D3199 xor     r15d, 1
//   0x3D319D jmp     short loc_3D31E0
//   0x3D319F align 20h
//   0x3D31A0 mov     rdx, [rbp+8]
//   0x3D31A4 mov     rsi, [rbp+0]
//   0x3D31A8 mov     rdi, rbx
//   0x3D31AB call    sub_3D2E40
//   0x3D31B0 cmp     qword ptr [rbx+300h], 0
//   0x3D31B8 jz      short loc_3D31C2
//   0x3D31BA mov     rdi, rbx; int
//   0x3D31BD call    sub_3D3DF0
//   0x3D31C2 mov     rax, qword ptr [rsp+0D8h+var_A0]
//   0x3D31C7 add     rbp, 10h
//   0x3D31CB mov     rdx, rax
//   0x3D31CE shl     rdx, 4
//   0x3D31D2 add     rdx, [rsp+0D8h+ptr]; int
//   0x3D31D7 cmp     rbp, rdx
//   0x3D31DA jz      loc_3D30BF
//   0x3D31E0 mov     rsi, rbp; int
//   0x3D31E3 mov     rdi, r13; int
//   0x3D31E6 call    _rangeset_t_sub
//   0x3D31EB mov     rsi, rbp; int
//   0x3D31EE mov     rdi, r14; int
//   0x3D31F1 call    _rangeset_t_sub
//   0x3D31F6 mov     rdx, qword ptr [rsp+0D8h+var_D8]; int
//   0x3D31FA mov     r8d, r15d
//   0x3D31FD mov     rcx, rbp; int
//   0x3D3200 mov     rdi, rbx; void *
//   0x3D3203 lea     rsi, [rbx+3B8h]; int
//   0x3D320A call    sub_3C07A0
//   0x3D320F mov     rsi, rbp; int
//   0x3D3212 mov     rdi, r13; int
//   0x3D3215 mov     r12d, eax
//   0x3D3218 call    _rangeset_t_add
//   0x3D321D test    r12d, r12d
//   0x3D3220 jz      loc_3D31A0
//   0x3D3226 mov     rsi, rbp; int
//   0x3D3229 mov     rdi, r14; int
//   0x3D322C call    _rangeset_t_add
//   0x3D3231 jmp     loc_3D30BA
//   0x3D3236 align 20h
//   0x3D3240 xor     ecx, ecx
//   0x3D3242 mov     rdx, r12
//   0x3D3245 mov     rsi, r14
//   0x3D3248 mov     rdi, r15
//   0x3D324B call    sub_8BBFF0
//   0x3D3250 mov     r12d, eax
//   0x3D3253 test    eax, eax
//   0x3D3255 jnz     loc_3D30B0
//   0x3D325B mov     rdx, qword ptr [rsp+0D8h+var_D8]
//   0x3D325F lea     rsi, [rbx+3B8h]
//   0x3D3266 mov     ecx, 9Fh
//   0x3D326B mov     rdi, rbx
//   0x3D326E call    sub_3CD220
//   0x3D3273 movdqu  xmm0, xmmword ptr [rbp+0]
//   0x3D3278 mov     rdi, [rsp+0D8h+var_D0]; int
//   0x3D327D lea     rsi, [rsp+0D8h+var_C8]; int
//   0x3D3282 movaps  xmmword ptr [rsp+0D8h+var_C8], xmm0; __int64
//   0x3D3287 call    _rangeset_t_add
//   0x3D328C test    al, al
//   0x3D328E jz      short loc_3D32A2
//   0x3D3290 mov     qword ptr [rbx+4B8h], 0FFFFFFFFFFFFFFFFh
//   0x3D329B mov     byte ptr [rbx+4B0h], 1
//   0x3D32A2 mov     r12, [rsp+0D8h+var_68]
//   0x3D32A7 test    r12, r12
//   0x3D32AA jz      short loc_3D32CD
//   0x3D32AC mov     rdi, [r12+18h]
//   0x3D32B1 call    sub_3BBD60
//   0x3D32B6 mov     rdi, r12; void *
//   0x3D32B9 mov     r12, [r12+10h]
//   0x3D32BE mov     esi, 38h ; '8'; unsigned __int64
//   0x3D32C3 call    __ZdlPvm; operator delete(void *,ulong)
//   0x3D32C8 test    r12, r12
//   0x3D32CB jnz     short loc_3D32AC
//   0x3D32CD mov     rax, qword ptr [rsp+0D8h+var_A0]
//   0x3D32D2 add     rbp, 10h
//   0x3D32D6 mov     rdx, rax
//   0x3D32D9 shl     rdx, 4
//   0x3D32DD add     rdx, [rsp+0D8h+ptr]
//   0x3D32E2 cmp     rbp, rdx
//   0x3D32E5 jnz     loc_3D3000
//   0x3D32EB xor     r12d, r12d
//   0x3D32EE jmp     loc_3D30BF
//   0x3D32F3 align 8
//   0x3D32F8 mov     rdx, [rsp+0D8h+var_C8+8]
//   0x3D32FD test    rdx, rdx
//   0x3D3300 jnz     short loc_3D3320
//   0x3D3302 test    rsi, rsi
//   0x3D3305 jz      loc_3D325B
//   0x3D330B mov     rdi, rsi; ptr
//   0x3D330E call    _qfree
//   0x3D3313 jmp     loc_3D325B
//   0x3D3318 align 20h
//   0x3D3320 mov     edi, [r15+60h]
//   0x3D3324 call    _add_undo_record
//   0x3D3329 mov     rdi, [rsp+0D8h+var_C8]; ptr
//   0x3D332E test    rdi, rdi
//   0x3D3331 jz      loc_3D325B
//   0x3D3337 mov     [rsp+0D8h+var_C8+8], 0
//   0x3D3340 call    _qfree
//   0x3D3345 jmp     loc_3D325B
//   0x3D334A align 10h
//   0x3D3350 mov     rdi, rbx
//   0x3D3353 call    sub_3BC300
//   0x3D3358 mov     rdi, [rbx+3F8h]
//   0x3D335F call    sub_8BA4A0
//   0x3D3364 mov     rdi, [rbx]
//   0x3D3367 call    sub_4E1120
//   0x3D336C mov     rdi, [rbx+968h]
//   0x3D3373 call    sub_8BA4A0
//   0x3D3378 jmp     loc_3D30E3
//   0x3D337D align 20h
//   0x3D3380 mov     ecx, 10h
//   0x3D3385 mov     edx, 1
//   0x3D338A xor     esi, esi
//   0x3D338C mov     qword ptr [rsp+0D8h+var_D8], rdi
//   0x3D3390 call    _qvector_reserve
//   0x3D3395 mov     rdx, qword ptr [rsp+0D8h+var_A0]
//   0x3D339A mov     rdi, qword ptr [rsp+0D8h+var_D8]
//   0x3D339E mov     [rsp+0D8h+ptr], rax
//   0x3D33A3 shl     rdx, 4
//   0x3D33A7 add     rax, rdx
//   0x3D33AA mov     [rax], r12
//   0x3D33AD mov     [rax+8], rbp
//   0x3D33B1 add     qword ptr [rsp+0D8h+var_A0], 1
//   0x3D33B7 jmp     loc_3D2F9E
//   0x3D33BC call    ___stack_chk_fail
//   0x3D33C1 mov     rbx, rax
//   0x3D33C4 jmp     loc_2B4586
//   0x3D33C9 mov     rbx, rax
//   0x3D33CC jmp     loc_2B45CD
//   0x3D33D1 mov     rbx, rax
//   0x3D33D4 jmp     loc_2B45B7
//   0x3D33D9 mov     rbx, rax
//   0x3D33DC jmp     loc_2B45D7
// ============================================================

void sub_3D2F00(/* signature unknown */)
{
    // see disassembly above
}

