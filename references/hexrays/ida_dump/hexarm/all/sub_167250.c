// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x167250
// Name:           sub_167250
// Function size:  428 bytes (109 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x167250 push    r15
//   0x167252 mov     r15d, 0FFFFFFFFh
//   0x167258 push    r14
//   0x16725A push    r13
//   0x16725C push    r12
//   0x16725E mov     r12, rsi
//   0x167261 push    rbp
//   0x167262 mov     rbp, rdi
//   0x167265 push    rbx
//   0x167266 xor     ebx, ebx
//   0x167268 sub     rsp, 68h
//   0x16726C mov     rax, [rdi+1E0h]
//   0x167273 mov     r13, fs:28h
//   0x16727C mov     [rsp+98h+var_40], r13
//   0x167281 mov     r13d, edx
//   0x167284 mov     rax, [rax+70h]
//   0x167288 mov     [rsp+98h+var_90], rax
//   0x16728D mov     eax, r13d
//   0x167290 and     eax, 4
//   0x167293 mov     [rsp+98h+var_94], eax
//   0x167297 jmp     loc_167339
//   0x16729C align 20h
//   0x1672A0 test    r15d, r15d
//   0x1672A3 jz      loc_167380
//   0x1672A9 sub     rsp, 8
//   0x1672AD mov     rcx, r12
//   0x1672B0 mov     rdx, rbp
//   0x1672B3 xor     r8d, r8d
//   0x1672B6 mov     [rsp+0A0h+var_80], 0FFFFFFFFFFFFFFFFh
//   0x1672BF mov     rdi, r12
//   0x1672C2 push    r13
//   0x1672C4 mov     rsi, [rsp+0A8h+var_90]
//   0x1672C9 lea     r9, [rsp+0A8h+var_80]
//   0x1672CE call    sub_15B6B0
//   0x1672D3 mov     r15d, eax
//   0x1672D6 mov     rax, [rsp+0A8h+var_80]
//   0x1672DB pop     rdx
//   0x1672DC pop     rcx
//   0x1672DD cmp     rax, 0FFFFFFFFFFFFFFFFh
//   0x1672E1 jz      short loc_16732A
//   0x1672E3 mov     rdx, [rbp+40h]
//   0x1672E7 lea     rsi, [rsp+98h+var_78]
//   0x1672EC mov     rdi, r12
//   0x1672EF mov     [rsp+98h+var_68], rbp
//   0x1672F4 lea     rcx, off_4D8410
//   0x1672FB mov     [rsp+98h+var_60], r12
//   0x167300 mov     [rsp+98h+var_70], rdx
//   0x167305 mov     [rsp+98h+var_58], 0
//   0x16730E mov     [rsp+98h+var_78], rcx
//   0x167313 mov     [rsp+98h+var_50], rax
//   0x167318 mov     [rsp+98h+var_48], 0
//   0x167320 call    sub_11F1A0
//   0x167325 add     r14d, [rsp+98h+var_48]
//   0x16732A mov     eax, r14d
//   0x16732D or      eax, r15d
//   0x167330 jz      short loc_167380
//   0x167332 lea     r10d, [r14+r15]
//   0x167336 add     ebx, r10d
//   0x167339 mov     rsi, r12
//   0x16733C mov     edx, r13d
//   0x16733F mov     rdi, rbp
//   0x167342 xor     r14d, r14d
//   0x167345 call    sub_159A00
//   0x16734A mov     esi, [rsp+98h+var_94]
//   0x16734E movzx   eax, al
//   0x167351 add     ebx, eax
//   0x167353 test    esi, esi
//   0x167355 jz      loc_1672A0
//   0x16735B mov     rsi, r12
//   0x16735E mov     rdi, rbp
//   0x167361 call    sub_B3110
//   0x167366 movzx   r14d, al
//   0x16736A or      r15d, r14d
//   0x16736D test    r15d, r15d
//   0x167370 jnz     loc_1672A9
//   0x167376 nop     word ptr [rax+rax+00000000h]
//   0x167380 mov     rax, [rbp+1E0h]
//   0x167387 mov     r14, [rax+428h]
//   0x16738E mov     rax, [rax+430h]
//   0x167395 shl     rax, 3
//   0x167399 jz      short loc_1673D6
//   0x16739B nop     dword ptr [rax+rax+00h]
//   0x1673A0 mov     rdi, [r14]
//   0x1673A3 mov     rdx, r12
//   0x1673A6 mov     ecx, r13d
//   0x1673A9 mov     rsi, rbp
//   0x1673AC add     r14, 8
//   0x1673B0 mov     rax, [rdi]
//   0x1673B3 call    qword ptr [rax+10h]
//   0x1673B6 add     ebx, eax
//   0x1673B8 mov     rax, [rbp+1E0h]
//   0x1673BF mov     rdx, [rax+430h]
//   0x1673C6 mov     rax, [rax+428h]
//   0x1673CD lea     rax, [rax+rdx*8]
//   0x1673D1 cmp     r14, rax
//   0x1673D4 jnz     short loc_1673A0
//   0x1673D6 mov     rax, [rsp+98h+var_40]
//   0x1673DB sub     rax, fs:28h
//   0x1673E4 jnz     short loc_1673F7
//   0x1673E6 add     rsp, 68h
//   0x1673EA mov     eax, ebx
//   0x1673EC pop     rbx
//   0x1673ED pop     rbp
//   0x1673EE pop     r12
//   0x1673F0 pop     r13
//   0x1673F2 pop     r14
//   0x1673F4 pop     r15
//   0x1673F6 retn
//   0x1673F7 call    ___stack_chk_fail
// ============================================================

void sub_167250(/* signature unknown */)
{
    // see disassembly above
}

