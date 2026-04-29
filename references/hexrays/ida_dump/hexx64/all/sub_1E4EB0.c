// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x1E4EB0
// Name:           sub_1E4EB0
// Function size:  1690 bytes (407 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x1E4EB0 push    r15
//   0x1E4EB2 mov     r10, rsi
//   0x1E4EB5 push    r14
//   0x1E4EB7 mov     r14, r8
//   0x1E4EBA push    r13
//   0x1E4EBC push    r12
//   0x1E4EBE push    rbp
//   0x1E4EBF mov     rbp, rcx
//   0x1E4EC2 push    rbx
//   0x1E4EC3 mov     rbx, rdx
//   0x1E4EC6 movsxd  rdx, r9d
//   0x1E4EC9 lea     r13, [rbx+18h]
//   0x1E4ECD mov     r9, rbx
//   0x1E4ED0 sub     rsp, 0B8h
//   0x1E4ED7 movdqu  xmm3, xmmword ptr [rbx+18h]
//   0x1E4EDC mov     r8, [rbx+18h]
//   0x1E4EE0 movzx   ecx, byte ptr [r13+8]
//   0x1E4EE5 movzx   eax, byte ptr [rbp+8]
//   0x1E4EE9 mov     [rsp+0E8h+var_D8], rdi
//   0x1E4EEE mov     esi, [r13+14h]
//   0x1E4EF2 movsxd  rdi, dword ptr [r14+4]
//   0x1E4EF6 add     r8, rdx
//   0x1E4EF9 mov     r12, fs:28h
//   0x1E4F02 mov     [rsp+0E8h+var_40], r12
//   0x1E4F0A mov     r12, rdx
//   0x1E4F0D movaps  [rsp+0E8h+var_E8], xmm3
//   0x1E4F11 cmp     al, cl
//   0x1E4F13 jz      loc_1E5010
//   0x1E4F19 cmp     al, [r13+8]
//   0x1E4F1D jz      short loc_1E4F50
//   0x1E4F1F xor     ebp, ebp
//   0x1E4F21 mov     rax, [rsp+0E8h+var_40]
//   0x1E4F29 sub     rax, fs:28h
//   0x1E4F32 jnz     loc_1E5535
//   0x1E4F38 add     rsp, 0B8h
//   0x1E4F3F mov     eax, ebp
//   0x1E4F41 pop     rbx
//   0x1E4F42 pop     rbp
//   0x1E4F43 pop     r12
//   0x1E4F45 pop     r13
//   0x1E4F47 pop     r14
//   0x1E4F49 pop     r15
//   0x1E4F4B retn
//   0x1E4F4C align 10h
//   0x1E4F50 mov     rcx, [rbp+0]
//   0x1E4F54 mov     rax, [rbx+18h]
//   0x1E4F58 mov     [rsp+0E8h+var_C0], r10
//   0x1E4F5D mov     [rsp+0E8h+var_C8], r9
//   0x1E4F62 mov     [rsp+0E8h+var_D0], r8
//   0x1E4F67 cmp     rcx, rax
//   0x1E4F6A jl      short loc_1E4F1F
//   0x1E4F6C add     rdi, rcx
//   0x1E4F6F add     rdx, rax
//   0x1E4F72 cmp     rdi, rdx
//   0x1E4F75 jg      short loc_1E4F1F
//   0x1E4F77 lea     rax, [r13+10h]
//   0x1E4F7B lea     r15, [rsp+0E8h+var_A8]
//   0x1E4F80 mov     rsi, rax
//   0x1E4F83 mov     rdi, r15
//   0x1E4F86 mov     [rsp+0E8h+var_B8], rax
//   0x1E4F8B call    sub_312C40
//   0x1E4F90 mov     rax, cs:qword_424018
//   0x1E4F97 pxor    xmm0, xmm0
//   0x1E4F9B cmp     byte ptr [r13+8], 5
//   0x1E4FA0 mov     r8, [rsp+0E8h+var_D0]
//   0x1E4FA5 mov     r9, [rsp+0E8h+var_C8]
//   0x1E4FAA movups  [rsp+0E8h+var_88+8], xmm0
//   0x1E4FAF mov     qword ptr [rsp+0E8h+var_88], rax
//   0x1E4FB4 mov     r10, [rsp+0E8h+var_C0]
//   0x1E4FB9 mov     [rsp+0E8h+var_70], 0
//   0x1E4FC2 jz      loc_1E5370
//   0x1E4FC8 lea     rax, [rsp+0E8h+var_88]
//   0x1E4FCD mov     edx, r12d
//   0x1E4FD0 mov     rdi, r15
//   0x1E4FD3 mov     [rsp+0E8h+var_B0], r10
//   0x1E4FD8 mov     rsi, rax
//   0x1E4FDB mov     [rsp+0E8h+var_C0], r9
//   0x1E4FE0 mov     [rsp+0E8h+var_C8], r8
//   0x1E4FE5 mov     [rsp+0E8h+var_D0], rax
//   0x1E4FEA call    sub_314D00
//   0x1E4FEF test    al, al
//   0x1E4FF1 jnz     loc_1E51E8
//   0x1E4FF7 xor     ebp, ebp
//   0x1E4FF9 mov     rdi, [rsp+0E8h+var_D0]
//   0x1E4FFE call    sub_312B80
//   0x1E5003 mov     rdi, r15
//   0x1E5006 call    sub_312B80
//   0x1E500B jmp     loc_1E4F21
//   0x1E5010 mov     r11, [rbp+0]
//   0x1E5014 mov     byte ptr [rsp+0E8h+var_D0], cl
//   0x1E5018 cmp     r8, r11
//   0x1E501B jg      loc_1E4F19
//   0x1E5021 sub     esi, r12d
//   0x1E5024 movsxd  r15, edi
//   0x1E5027 movsxd  rsi, esi
//   0x1E502A add     r15, r11
//   0x1E502D add     rsi, r8
//   0x1E5030 cmp     rsi, r15
//   0x1E5033 jl      loc_1E4F19
//   0x1E5039 lea     r15, [rsp+0E8h+var_A8]
//   0x1E503E lea     rsi, [rbx+28h]
//   0x1E5042 mov     [rsp+0E8h+var_B8], r10
//   0x1E5047 mov     rdi, r15
//   0x1E504A mov     [rsp+0E8h+var_C8], r8
//   0x1E504F mov     [rsp+0E8h+var_C0], rbx
//   0x1E5054 call    sub_312C40
//   0x1E5059 mov     rax, cs:qword_424018
//   0x1E5060 pxor    xmm0, xmm0
//   0x1E5064 cmp     byte ptr [r13+8], 5
//   0x1E5069 mov     r8, [rsp+0E8h+var_C8]
//   0x1E506E mov     r9, [rsp+0E8h+var_C0]
//   0x1E5073 movups  [rsp+0E8h+var_88+8], xmm0
//   0x1E5078 mov     r10, [rsp+0E8h+var_B8]
//   0x1E507D movzx   ecx, byte ptr [rsp+0E8h+var_D0]
//   0x1E5082 mov     qword ptr [rsp+0E8h+var_88], rax
//   0x1E5087 mov     [rsp+0E8h+var_70], 0
//   0x1E5090 jz      loc_1E52D0
//   0x1E5096 lea     rax, [rsp+0E8h+var_88]
//   0x1E509B mov     edx, r12d
//   0x1E509E mov     rdi, r15
//   0x1E50A1 mov     [rsp+0E8h+var_B0], r10
//   0x1E50A6 mov     rsi, rax
//   0x1E50A9 mov     byte ptr [rsp+0E8h+var_B8], cl
//   0x1E50AD mov     [rsp+0E8h+var_C0], r9
//   0x1E50B2 mov     [rsp+0E8h+var_C8], r8
//   0x1E50B7 mov     [rsp+0E8h+var_D0], rax
//   0x1E50BC call    sub_314D00
//   0x1E50C1 test    al, al
//   0x1E50C3 jnz     short loc_1E50E0
//   0x1E50C5 xor     ebp, ebp
//   0x1E50C7 mov     rdi, [rsp+0E8h+var_D0]
//   0x1E50CC call    sub_312B80
//   0x1E50D1 mov     rdi, r15
//   0x1E50D4 call    sub_312B80
//   0x1E50D9 jmp     loc_1E4F21
//   0x1E50DE align 20h
//   0x1E50E0 mov     r8, [rsp+0E8h+var_C8]
//   0x1E50E5 mov     r9, [rsp+0E8h+var_C0]
//   0x1E50EA movzx   ecx, byte ptr [rsp+0E8h+var_B8]
//   0x1E50EF mov     r10, [rsp+0E8h+var_B0]
//   0x1E50F4 mov     rsi, [rbp+0]
//   0x1E50F8 cmp     r8, rsi
//   0x1E50FB jg      short loc_1E50C5
//   0x1E50FD movsxd  rdx, dword ptr [rsp+0E8h+var_88+4]
//   0x1E5102 movsxd  rax, dword ptr [r14+4]
//   0x1E5106 add     rdx, r8
//   0x1E5109 add     rax, rsi
//   0x1E510C cmp     rdx, rax
//   0x1E510F jl      short loc_1E50C5
//   0x1E5111 cmp     cl, 5
//   0x1E5114 jz      loc_1E544D
//   0x1E511A mov     edx, esi
//   0x1E511C sub     edx, r8d
//   0x1E511F mov     rdi, [rsp+0E8h+var_D0]
//   0x1E5124 mov     rsi, r14
//   0x1E5127 mov     [rsp+0E8h+var_C0], r9
//   0x1E512C mov     [rsp+0E8h+var_C8], r8
//   0x1E5131 call    sub_314020
//   0x1E5136 mov     ebp, eax
//   0x1E5138 test    al, al
//   0x1E513A jz      short loc_1E50C5
//   0x1E513C cmp     dword ptr [rsp+0E8h+var_A8], 1
//   0x1E5141 mov     r8, [rsp+0E8h+var_C8]
//   0x1E5146 mov     r9, [rsp+0E8h+var_C0]
//   0x1E514B jz      loc_1E5404
//   0x1E5151 lea     rdi, [r13+10h]
//   0x1E5155 mov     rsi, r15
//   0x1E5158 mov     [rsp+0E8h+var_C0], r9
//   0x1E515D mov     [rsp+0E8h+var_C8], r8
//   0x1E5162 call    sub_312D90
//   0x1E5167 mov     rax, [rbx]
//   0x1E516A mov     rdi, [rsp+0E8h+var_D8]
//   0x1E516F mov     r8, [rsp+0E8h+var_C8]
//   0x1E5174 mov     r9, [rsp+0E8h+var_C0]
//   0x1E5179 test    al, 2
//   0x1E517B lea     r12, [rdi+8]
//   0x1E517F jnz     short loc_1E51B0
//   0x1E5181 mov     rdx, [rbx+10h]
//   0x1E5185 test    byte ptr [rdx], 2
//   0x1E5188 jnz     loc_1E54B4
//   0x1E518E mov     r9, rdx
//   0x1E5191 mov     rdx, [rdx+8]
//   0x1E5195 test    byte ptr [rdx], 2
//   0x1E5198 jz      short loc_1E518E
//   0x1E519A mov     rax, [rsp+0E8h+var_D8]
//   0x1E519F lea     r12, [rax+8]
//   0x1E51A3 nop     word ptr [rax+rax+00000000h]
//   0x1E51AE xchg    ax, ax
//   0x1E51B0 mov     rdx, qword ptr [rsp+0E8h+var_E8+8]
//   0x1E51B5 mov     qword ptr [rsp+0E8h+var_E8], r8
//   0x1E51B9 mov     rsi, r9
//   0x1E51BC mov     rdi, r12
//   0x1E51BF mov     rax, qword ptr [rsp+0E8h+var_E8]
//   0x1E51C3 mov     r8, [rsp+0E8h+var_D0]
//   0x1E51C8 mov     qword ptr [rsp+0E8h+var_E8+8], rdx
//   0x1E51CD mov     rdx, qword ptr [rsp+0E8h+var_E8+8]
//   0x1E51D2 mov     rcx, rdx
//   0x1E51D5 mov     rdx, rax
//   0x1E51D8 call    sub_1E45A0
//   0x1E51DD jmp     loc_1E50C7
//   0x1E51E2 align 8
//   0x1E51E8 mov     r8, [rsp+0E8h+var_C8]
//   0x1E51ED mov     r9, [rsp+0E8h+var_C0]
//   0x1E51F2 mov     r10, [rsp+0E8h+var_B0]
//   0x1E51F7 mov     rcx, [rbp+0]
//   0x1E51FB mov     rax, [rbx+18h]
//   0x1E51FF cmp     rcx, rax
//   0x1E5202 jl      loc_1E4FF7
//   0x1E5208 movsxd  rdx, dword ptr [rsp+0E8h+var_A8+4]
//   0x1E520D movsxd  rsi, dword ptr [r14+4]
//   0x1E5211 add     rdx, rax
//   0x1E5214 add     rsi, rcx
//   0x1E5217 cmp     rdx, rsi
//   0x1E521A jl      loc_1E4FF7
//   0x1E5220 cmp     byte ptr [r13+8], 5
//   0x1E5225 jz      loc_1E5465
//   0x1E522B mov     edx, ecx
//   0x1E522D sub     edx, eax
//   0x1E522F mov     rsi, r14
//   0x1E5232 mov     rdi, r15
//   0x1E5235 mov     [rsp+0E8h+var_C0], r9
//   0x1E523A mov     [rsp+0E8h+var_C8], r8
//   0x1E523F call    sub_314020
//   0x1E5244 mov     ebp, eax
//   0x1E5246 test    al, al
//   0x1E5248 jz      loc_1E4FF7
//   0x1E524E mov     rdi, [rsp+0E8h+var_B8]
//   0x1E5253 mov     rsi, r15
//   0x1E5256 call    sub_312D90
//   0x1E525B mov     rax, [rbx]
//   0x1E525E mov     r8, [rsp+0E8h+var_C8]
//   0x1E5263 mov     r9, [rsp+0E8h+var_C0]
//   0x1E5268 test    al, 2
//   0x1E526A jnz     short loc_1E5290
//   0x1E526C mov     rdx, [rbx+10h]
//   0x1E5270 test    byte ptr [rdx], 2
//   0x1E5273 jnz     loc_1E547D
//   0x1E5279 mov     r9, rdx
//   0x1E527C mov     rdx, [rdx+8]
//   0x1E5280 test    byte ptr [rdx], 2
//   0x1E5283 jz      short loc_1E5279
//   0x1E5285 nop     word ptr [rax+rax+00000000h]
//   0x1E5290 cmp     dword ptr [rsp+0E8h+var_88], 1
//   0x1E5295 jz      loc_1E4FF9
//   0x1E529B mov     rdx, qword ptr [rsp+0E8h+var_E8+8]
//   0x1E52A0 mov     rdi, [rsp+0E8h+var_D8]
//   0x1E52A5 mov     qword ptr [rsp+0E8h+var_E8], r8
//   0x1E52A9 mov     rsi, r9
//   0x1E52AC mov     r8, [rsp+0E8h+var_D0]
//   0x1E52B1 mov     qword ptr [rsp+0E8h+var_E8+8], rdx
//   0x1E52B6 mov     rdx, qword ptr [rsp+0E8h+var_E8]
//   0x1E52BA add     rdi, 8
//   0x1E52BE mov     rcx, qword ptr [rsp+0E8h+var_E8+8]
//   0x1E52C3 call    sub_1E45A0
//   0x1E52C8 jmp     loc_1E4FF9
//   0x1E52CD align 10h
//   0x1E52D0 mov     rax, [r10+60h]
//   0x1E52D4 cmp     byte ptr [rax+91h], 0
//   0x1E52DB jz      loc_1E5096
//   0x1E52E1 mov     edx, dword ptr [rsp+0E8h+var_A8+4]
//   0x1E52E5 lea     rax, [rsp+0E8h+var_88]
//   0x1E52EA mov     rdi, r15
//   0x1E52ED mov     byte ptr [rsp+0E8h+var_B8], cl
//   0x1E52F1 mov     rsi, rax
//   0x1E52F4 mov     [rsp+0E8h+var_B0], r10
//   0x1E52F9 sub     edx, r12d
//   0x1E52FC mov     [rsp+0E8h+var_C0], r9
//   0x1E5301 mov     [rsp+0E8h+var_C8], r8
//   0x1E5306 mov     [rsp+0E8h+var_D0], rax
//   0x1E530B call    sub_314D00
//   0x1E5310 test    al, al
//   0x1E5312 mov     r8, [rsp+0E8h+var_C8]
//   0x1E5317 mov     r9, [rsp+0E8h+var_C0]
//   0x1E531C movzx   ecx, byte ptr [rsp+0E8h+var_B8]
//   0x1E5321 mov     r10, [rsp+0E8h+var_B0]
//   0x1E5326 jz      loc_1E50C5
//   0x1E532C movdqa  xmm2, [rsp+0E8h+var_88]
//   0x1E5332 movdqa  xmm1, [rsp+0E8h+var_A8]
//   0x1E5338 movdqa  xmm0, [rsp+0E8h+var_98]
//   0x1E533E movaps  [rsp+0E8h+var_A8], xmm2
//   0x1E5343 movdqa  xmm2, xmmword ptr [rsp+70h]
//   0x1E5349 movaps  [rsp+0E8h+var_68], xmm1
//   0x1E5351 movaps  [rsp+0E8h+var_58], xmm0
//   0x1E5359 movaps  [rsp+0E8h+var_98], xmm2
//   0x1E535E movaps  [rsp+0E8h+var_88], xmm1
//   0x1E5363 movaps  xmmword ptr [rsp+70h], xmm0
//   0x1E5368 jmp     loc_1E50F4
//   0x1E536D align 10h
//   0x1E5370 mov     rax, [r10+60h]
//   0x1E5374 cmp     byte ptr [rax+91h], 0
//   0x1E537B jz      loc_1E4FC8
//   0x1E5381 mov     edx, dword ptr [rsp+0E8h+var_A8+4]
//   0x1E5385 lea     rax, [rsp+0E8h+var_88]
//   0x1E538A mov     rdi, r15
//   0x1E538D mov     [rsp+0E8h+var_B0], r10
//   0x1E5392 mov     rsi, rax
//   0x1E5395 mov     [rsp+0E8h+var_C0], r9
//   0x1E539A sub     edx, r12d
//   0x1E539D mov     [rsp+0E8h+var_C8], r8
//   0x1E53A2 mov     [rsp+0E8h+var_D0], rax
//   0x1E53A7 call    sub_314D00
//   0x1E53AC test    al, al
//   0x1E53AE mov     r8, [rsp+0E8h+var_C8]
//   0x1E53B3 mov     r9, [rsp+0E8h+var_C0]
//   0x1E53B8 mov     r10, [rsp+0E8h+var_B0]
//   0x1E53BD jz      loc_1E4FF7
//   0x1E53C3 movdqa  xmm2, [rsp+0E8h+var_88]
//   0x1E53C9 movdqa  xmm1, [rsp+0E8h+var_A8]
//   0x1E53CF movdqa  xmm0, [rsp+0E8h+var_98]
//   0x1E53D5 movaps  [rsp+0E8h+var_A8], xmm2
//   0x1E53DA movdqa  xmm2, xmmword ptr [rsp+70h]
//   0x1E53E0 movaps  [rsp+0E8h+var_68], xmm1
//   0x1E53E8 movaps  [rsp+0E8h+var_58], xmm0
//   0x1E53F0 movaps  [rsp+0E8h+var_98], xmm2
//   0x1E53F5 movaps  [rsp+0E8h+var_88], xmm1
//   0x1E53FA movaps  xmmword ptr [rsp+70h], xmm0
//   0x1E53FF jmp     loc_1E51F7
//   0x1E5404 mov     r12, [rsp+0E8h+var_D8]
//   0x1E5409 mov     rax, [rbx]
//   0x1E540C mov     r13, rbx
//   0x1E540F add     r12, 8
//   0x1E5413 test    al, 2
//   0x1E5415 jnz     short loc_1E5430
//   0x1E5417 mov     rdx, [rbx+10h]
//   0x1E541B test    byte ptr [rdx], 2
//   0x1E541E jnz     loc_1E54F8
//   0x1E5424 mov     r13, rdx
//   0x1E5427 mov     rdx, [rdx+8]
//   0x1E542B test    byte ptr [rdx], 2
//   0x1E542E jz      short loc_1E5424
//   0x1E5430 mov     rsi, rbx
//   0x1E5433 mov     rdi, r12
//   0x1E5436 mov     [rsp+0E8h+var_D8], r8
//   0x1E543B call    sub_1E3D90
//   0x1E5440 mov     r8, [rsp+0E8h+var_D8]
//   0x1E5445 mov     r9, r13
//   0x1E5448 jmp     loc_1E51B0
//   0x1E544D mov     rcx, [r10+60h]
//   0x1E5451 sub     edx, eax
//   0x1E5453 cmp     byte ptr [rcx+91h], 0
//   0x1E545A jnz     loc_1E511F
//   0x1E5460 jmp     loc_1E511A
//   0x1E5465 mov     rdi, [r10+60h]
//   0x1E5469 sub     edx, esi
//   0x1E546B cmp     byte ptr [rdi+91h], 0
//   0x1E5472 jnz     loc_1E522F
//   0x1E5478 jmp     loc_1E522B
//   0x1E547D and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E5481 mov     rdx, [rax]
//   0x1E5484 test    dl, 2
//   0x1E5487 jz      short loc_1E5494
//   0x1E5489 mov     r9, rax
//   0x1E548C jmp     loc_1E5290
//   0x1E5491 mov     rax, rcx
//   0x1E5494 cmp     r9, [rax+10h]
//   0x1E5498 jnz     short loc_1E5489
//   0x1E549A mov     rcx, rdx
//   0x1E549D mov     r9, rax
//   0x1E54A0 and     rcx, 0FFFFFFFFFFFFFFFCh
//   0x1E54A4 mov     rdx, [rcx]
//   0x1E54A7 test    dl, 2
//   0x1E54AA jz      short loc_1E5491
//   0x1E54AC mov     r9, rcx
//   0x1E54AF jmp     loc_1E5290
//   0x1E54B4 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E54B8 mov     rdx, [rax]
//   0x1E54BB test    dl, 2
//   0x1E54BE jz      short loc_1E54C8
//   0x1E54C0 mov     r9, rax
//   0x1E54C3 jmp     loc_1E51B0
//   0x1E54C8 cmp     r9, [rax+10h]
//   0x1E54CC jnz     short loc_1E54F0
//   0x1E54CE and     rdx, 0FFFFFFFFFFFFFFFCh
//   0x1E54D2 mov     r9, rdx
//   0x1E54D5 mov     rdx, [rdx]
//   0x1E54D8 test    dl, 2
//   0x1E54DB jnz     loc_1E519A
//   0x1E54E1 mov     rcx, rax
//   0x1E54E4 mov     rax, r9
//   0x1E54E7 mov     r9, rcx
//   0x1E54EA cmp     r9, [rax+10h]
//   0x1E54EE jz      short loc_1E54CE
//   0x1E54F0 mov     r9, rax
//   0x1E54F3 jmp     loc_1E519A
//   0x1E54F8 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E54FC mov     rcx, rbx
//   0x1E54FF mov     r13, rax
//   0x1E5502 mov     rax, [rax]
//   0x1E5505 test    al, 2
//   0x1E5507 jnz     loc_1E5430
//   0x1E550D cmp     [r13+10h], rcx
//   0x1E5511 jnz     loc_1E5430
//   0x1E5517 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E551B mov     rdx, rax
//   0x1E551E mov     rax, [rax]
//   0x1E5521 test    al, 2
//   0x1E5523 jz      short loc_1E552D
//   0x1E5525 mov     r13, rdx
//   0x1E5528 jmp     loc_1E5430
//   0x1E552D mov     rcx, r13
//   0x1E5530 mov     r13, rdx
//   0x1E5533 jmp     short loc_1E550D
//   0x1E5535 call    ___stack_chk_fail
//   0x1E553A mov     rbx, rax
//   0x1E553D jmp     loc_428F0
//   0x1E5542 mov     rbx, rax
//   0x1E5545 jmp     loc_4291D
// ============================================================

void sub_1E4EB0(/* signature unknown */)
{
    // see disassembly above
}

