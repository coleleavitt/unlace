// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x161150
// Name:           sub_161150
// Function size:  428 bytes (109 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x161150 push    r15
//   0x161152 mov     r15d, 0FFFFFFFFh
//   0x161158 push    r14
//   0x16115A push    r13
//   0x16115C push    r12
//   0x16115E mov     r12, rsi
//   0x161161 push    rbp
//   0x161162 mov     rbp, rdi
//   0x161165 push    rbx
//   0x161166 xor     ebx, ebx
//   0x161168 sub     rsp, 68h
//   0x16116C mov     rax, [rdi+1E0h]
//   0x161173 mov     r13, fs:28h
//   0x16117C mov     [rsp+98h+var_40], r13
//   0x161181 mov     r13d, edx
//   0x161184 mov     rax, [rax+70h]
//   0x161188 mov     [rsp+98h+var_90], rax
//   0x16118D mov     eax, r13d
//   0x161190 and     eax, 4
//   0x161193 mov     [rsp+98h+var_94], eax
//   0x161197 jmp     loc_161239
//   0x16119C align 20h
//   0x1611A0 test    r15d, r15d
//   0x1611A3 jz      loc_161280
//   0x1611A9 sub     rsp, 8
//   0x1611AD mov     rcx, r12
//   0x1611B0 mov     rdx, rbp
//   0x1611B3 xor     r8d, r8d
//   0x1611B6 mov     [rsp+0A0h+var_80], 0FFFFFFFFFFFFFFFFh
//   0x1611BF mov     rdi, r12
//   0x1611C2 push    r13
//   0x1611C4 mov     rsi, [rsp+0A8h+var_90]
//   0x1611C9 lea     r9, [rsp+0A8h+var_80]
//   0x1611CE call    sub_1555B0
//   0x1611D3 mov     r15d, eax
//   0x1611D6 mov     rax, [rsp+0A8h+var_80]
//   0x1611DB pop     rdx
//   0x1611DC pop     rcx
//   0x1611DD cmp     rax, 0FFFFFFFFFFFFFFFFh
//   0x1611E1 jz      short loc_16122A
//   0x1611E3 mov     rdx, [rbp+40h]
//   0x1611E7 lea     rsi, [rsp+98h+var_78]
//   0x1611EC mov     rdi, r12
//   0x1611EF mov     [rsp+98h+var_68], rbp
//   0x1611F4 lea     rcx, off_4AA590
//   0x1611FB mov     [rsp+98h+var_60], r12
//   0x161200 mov     [rsp+98h+var_70], rdx
//   0x161205 mov     [rsp+98h+var_58], 0
//   0x16120E mov     [rsp+98h+var_78], rcx
//   0x161213 mov     [rsp+98h+var_50], rax
//   0x161218 mov     [rsp+98h+var_48], 0
//   0x161220 call    sub_1190A0
//   0x161225 add     r14d, [rsp+98h+var_48]
//   0x16122A mov     eax, r14d
//   0x16122D or      eax, r15d
//   0x161230 jz      short loc_161280
//   0x161232 lea     r10d, [r14+r15]
//   0x161236 add     ebx, r10d
//   0x161239 mov     rsi, r12
//   0x16123C mov     edx, r13d
//   0x16123F mov     rdi, rbp
//   0x161242 xor     r14d, r14d
//   0x161245 call    sub_153900
//   0x16124A mov     esi, [rsp+98h+var_94]
//   0x16124E movzx   eax, al
//   0x161251 add     ebx, eax
//   0x161253 test    esi, esi
//   0x161255 jz      loc_1611A0
//   0x16125B mov     rsi, r12
//   0x16125E mov     rdi, rbp
//   0x161261 call    sub_AD010
//   0x161266 movzx   r14d, al
//   0x16126A or      r15d, r14d
//   0x16126D test    r15d, r15d
//   0x161270 jnz     loc_1611A9
//   0x161276 nop     word ptr [rax+rax+00000000h]
//   0x161280 mov     rax, [rbp+1E0h]
//   0x161287 mov     r14, [rax+428h]
//   0x16128E mov     rax, [rax+430h]
//   0x161295 shl     rax, 3
//   0x161299 jz      short loc_1612D6
//   0x16129B nop     dword ptr [rax+rax+00h]
//   0x1612A0 mov     rdi, [r14]
//   0x1612A3 mov     rdx, r12
//   0x1612A6 mov     ecx, r13d
//   0x1612A9 mov     rsi, rbp
//   0x1612AC add     r14, 8
//   0x1612B0 mov     rax, [rdi]
//   0x1612B3 call    qword ptr [rax+10h]
//   0x1612B6 add     ebx, eax
//   0x1612B8 mov     rax, [rbp+1E0h]
//   0x1612BF mov     rdx, [rax+430h]
//   0x1612C6 mov     rax, [rax+428h]
//   0x1612CD lea     rax, [rax+rdx*8]
//   0x1612D1 cmp     r14, rax
//   0x1612D4 jnz     short loc_1612A0
//   0x1612D6 mov     rax, [rsp+98h+var_40]
//   0x1612DB sub     rax, fs:28h
//   0x1612E4 jnz     short loc_1612F7
//   0x1612E6 add     rsp, 68h
//   0x1612EA mov     eax, ebx
//   0x1612EC pop     rbx
//   0x1612ED pop     rbp
//   0x1612EE pop     r12
//   0x1612F0 pop     r13
//   0x1612F2 pop     r14
//   0x1612F4 pop     r15
//   0x1612F6 retn
//   0x1612F7 call    ___stack_chk_fail
// ============================================================

void sub_161150(/* signature unknown */)
{
    // see disassembly above
}

