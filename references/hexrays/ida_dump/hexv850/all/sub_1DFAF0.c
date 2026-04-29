// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x1DFAF0
// Name:           sub_1DFAF0
// Function size:  1690 bytes (407 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x1DFAF0 push    r15
//   0x1DFAF2 mov     r10, rsi
//   0x1DFAF5 push    r14
//   0x1DFAF7 mov     r14, r8
//   0x1DFAFA push    r13
//   0x1DFAFC push    r12
//   0x1DFAFE push    rbp
//   0x1DFAFF mov     rbp, rcx
//   0x1DFB02 push    rbx
//   0x1DFB03 mov     rbx, rdx
//   0x1DFB06 movsxd  rdx, r9d
//   0x1DFB09 lea     r13, [rbx+18h]
//   0x1DFB0D mov     r9, rbx
//   0x1DFB10 sub     rsp, 0B8h
//   0x1DFB17 movdqu  xmm3, xmmword ptr [rbx+18h]
//   0x1DFB1C mov     r8, [rbx+18h]
//   0x1DFB20 movzx   ecx, byte ptr [r13+8]
//   0x1DFB25 movzx   eax, byte ptr [rbp+8]
//   0x1DFB29 mov     [rsp+0E8h+var_D8], rdi
//   0x1DFB2E mov     esi, [r13+14h]
//   0x1DFB32 movsxd  rdi, dword ptr [r14+4]
//   0x1DFB36 add     r8, rdx
//   0x1DFB39 mov     r12, fs:28h
//   0x1DFB42 mov     [rsp+0E8h+var_40], r12
//   0x1DFB4A mov     r12, rdx
//   0x1DFB4D movaps  [rsp+0E8h+var_E8], xmm3
//   0x1DFB51 cmp     al, cl
//   0x1DFB53 jz      loc_1DFC50
//   0x1DFB59 cmp     al, [r13+8]
//   0x1DFB5D jz      short loc_1DFB90
//   0x1DFB5F xor     ebp, ebp
//   0x1DFB61 mov     rax, [rsp+0E8h+var_40]
//   0x1DFB69 sub     rax, fs:28h
//   0x1DFB72 jnz     loc_1E0175
//   0x1DFB78 add     rsp, 0B8h
//   0x1DFB7F mov     eax, ebp
//   0x1DFB81 pop     rbx
//   0x1DFB82 pop     rbp
//   0x1DFB83 pop     r12
//   0x1DFB85 pop     r13
//   0x1DFB87 pop     r14
//   0x1DFB89 pop     r15
//   0x1DFB8B retn
//   0x1DFB8C align 10h
//   0x1DFB90 mov     rcx, [rbp+0]
//   0x1DFB94 mov     rax, [rbx+18h]
//   0x1DFB98 mov     [rsp+0E8h+var_C0], r10
//   0x1DFB9D mov     [rsp+0E8h+var_C8], r9
//   0x1DFBA2 mov     [rsp+0E8h+var_D0], r8
//   0x1DFBA7 cmp     rcx, rax
//   0x1DFBAA jl      short loc_1DFB5F
//   0x1DFBAC add     rdi, rcx
//   0x1DFBAF add     rdx, rax
//   0x1DFBB2 cmp     rdi, rdx
//   0x1DFBB5 jg      short loc_1DFB5F
//   0x1DFBB7 lea     rax, [r13+10h]
//   0x1DFBBB lea     r15, [rsp+0E8h+var_A8]
//   0x1DFBC0 mov     rsi, rax
//   0x1DFBC3 mov     rdi, r15
//   0x1DFBC6 mov     [rsp+0E8h+var_B8], rax
//   0x1DFBCB call    sub_30D380
//   0x1DFBD0 mov     rax, cs:qword_3FFAC0
//   0x1DFBD7 pxor    xmm0, xmm0
//   0x1DFBDB cmp     byte ptr [r13+8], 5
//   0x1DFBE0 mov     r8, [rsp+0E8h+var_D0]
//   0x1DFBE5 mov     r9, [rsp+0E8h+var_C8]
//   0x1DFBEA movups  [rsp+0E8h+var_88+8], xmm0
//   0x1DFBEF mov     qword ptr [rsp+0E8h+var_88], rax
//   0x1DFBF4 mov     r10, [rsp+0E8h+var_C0]
//   0x1DFBF9 mov     [rsp+0E8h+var_70], 0
//   0x1DFC02 jz      loc_1DFFB0
//   0x1DFC08 lea     rax, [rsp+0E8h+var_88]
//   0x1DFC0D mov     edx, r12d
//   0x1DFC10 mov     rdi, r15
//   0x1DFC13 mov     [rsp+0E8h+var_B0], r10
//   0x1DFC18 mov     rsi, rax
//   0x1DFC1B mov     [rsp+0E8h+var_C0], r9
//   0x1DFC20 mov     [rsp+0E8h+var_C8], r8
//   0x1DFC25 mov     [rsp+0E8h+var_D0], rax
//   0x1DFC2A call    sub_30F440
//   0x1DFC2F test    al, al
//   0x1DFC31 jnz     loc_1DFE28
//   0x1DFC37 xor     ebp, ebp
//   0x1DFC39 mov     rdi, [rsp+0E8h+var_D0]
//   0x1DFC3E call    sub_30D2C0
//   0x1DFC43 mov     rdi, r15
//   0x1DFC46 call    sub_30D2C0
//   0x1DFC4B jmp     loc_1DFB61
//   0x1DFC50 mov     r11, [rbp+0]
//   0x1DFC54 mov     byte ptr [rsp+0E8h+var_D0], cl
//   0x1DFC58 cmp     r8, r11
//   0x1DFC5B jg      loc_1DFB59
//   0x1DFC61 sub     esi, r12d
//   0x1DFC64 movsxd  r15, edi
//   0x1DFC67 movsxd  rsi, esi
//   0x1DFC6A add     r15, r11
//   0x1DFC6D add     rsi, r8
//   0x1DFC70 cmp     rsi, r15
//   0x1DFC73 jl      loc_1DFB59
//   0x1DFC79 lea     r15, [rsp+0E8h+var_A8]
//   0x1DFC7E lea     rsi, [rbx+28h]
//   0x1DFC82 mov     [rsp+0E8h+var_B8], r10
//   0x1DFC87 mov     rdi, r15
//   0x1DFC8A mov     [rsp+0E8h+var_C8], r8
//   0x1DFC8F mov     [rsp+0E8h+var_C0], rbx
//   0x1DFC94 call    sub_30D380
//   0x1DFC99 mov     rax, cs:qword_3FFAC0
//   0x1DFCA0 pxor    xmm0, xmm0
//   0x1DFCA4 cmp     byte ptr [r13+8], 5
//   0x1DFCA9 mov     r8, [rsp+0E8h+var_C8]
//   0x1DFCAE mov     r9, [rsp+0E8h+var_C0]
//   0x1DFCB3 movups  [rsp+0E8h+var_88+8], xmm0
//   0x1DFCB8 mov     r10, [rsp+0E8h+var_B8]
//   0x1DFCBD movzx   ecx, byte ptr [rsp+0E8h+var_D0]
//   0x1DFCC2 mov     qword ptr [rsp+0E8h+var_88], rax
//   0x1DFCC7 mov     [rsp+0E8h+var_70], 0
//   0x1DFCD0 jz      loc_1DFF10
//   0x1DFCD6 lea     rax, [rsp+0E8h+var_88]
//   0x1DFCDB mov     edx, r12d
//   0x1DFCDE mov     rdi, r15
//   0x1DFCE1 mov     [rsp+0E8h+var_B0], r10
//   0x1DFCE6 mov     rsi, rax
//   0x1DFCE9 mov     byte ptr [rsp+0E8h+var_B8], cl
//   0x1DFCED mov     [rsp+0E8h+var_C0], r9
//   0x1DFCF2 mov     [rsp+0E8h+var_C8], r8
//   0x1DFCF7 mov     [rsp+0E8h+var_D0], rax
//   0x1DFCFC call    sub_30F440
//   0x1DFD01 test    al, al
//   0x1DFD03 jnz     short loc_1DFD20
//   0x1DFD05 xor     ebp, ebp
//   0x1DFD07 mov     rdi, [rsp+0E8h+var_D0]
//   0x1DFD0C call    sub_30D2C0
//   0x1DFD11 mov     rdi, r15
//   0x1DFD14 call    sub_30D2C0
//   0x1DFD19 jmp     loc_1DFB61
//   0x1DFD1E align 20h
//   0x1DFD20 mov     r8, [rsp+0E8h+var_C8]
//   0x1DFD25 mov     r9, [rsp+0E8h+var_C0]
//   0x1DFD2A movzx   ecx, byte ptr [rsp+0E8h+var_B8]
//   0x1DFD2F mov     r10, [rsp+0E8h+var_B0]
//   0x1DFD34 mov     rsi, [rbp+0]
//   0x1DFD38 cmp     r8, rsi
//   0x1DFD3B jg      short loc_1DFD05
//   0x1DFD3D movsxd  rdx, dword ptr [rsp+0E8h+var_88+4]
//   0x1DFD42 movsxd  rax, dword ptr [r14+4]
//   0x1DFD46 add     rdx, r8
//   0x1DFD49 add     rax, rsi
//   0x1DFD4C cmp     rdx, rax
//   0x1DFD4F jl      short loc_1DFD05
//   0x1DFD51 cmp     cl, 5
//   0x1DFD54 jz      loc_1E008D
//   0x1DFD5A mov     edx, esi
//   0x1DFD5C sub     edx, r8d
//   0x1DFD5F mov     rdi, [rsp+0E8h+var_D0]
//   0x1DFD64 mov     rsi, r14
//   0x1DFD67 mov     [rsp+0E8h+var_C0], r9
//   0x1DFD6C mov     [rsp+0E8h+var_C8], r8
//   0x1DFD71 call    sub_30E760
//   0x1DFD76 mov     ebp, eax
//   0x1DFD78 test    al, al
//   0x1DFD7A jz      short loc_1DFD05
//   0x1DFD7C cmp     dword ptr [rsp+0E8h+var_A8], 1
//   0x1DFD81 mov     r8, [rsp+0E8h+var_C8]
//   0x1DFD86 mov     r9, [rsp+0E8h+var_C0]
//   0x1DFD8B jz      loc_1E0044
//   0x1DFD91 lea     rdi, [r13+10h]
//   0x1DFD95 mov     rsi, r15
//   0x1DFD98 mov     [rsp+0E8h+var_C0], r9
//   0x1DFD9D mov     [rsp+0E8h+var_C8], r8
//   0x1DFDA2 call    sub_30D4D0
//   0x1DFDA7 mov     rax, [rbx]
//   0x1DFDAA mov     rdi, [rsp+0E8h+var_D8]
//   0x1DFDAF mov     r8, [rsp+0E8h+var_C8]
//   0x1DFDB4 mov     r9, [rsp+0E8h+var_C0]
//   0x1DFDB9 test    al, 2
//   0x1DFDBB lea     r12, [rdi+8]
//   0x1DFDBF jnz     short loc_1DFDF0
//   0x1DFDC1 mov     rdx, [rbx+10h]
//   0x1DFDC5 test    byte ptr [rdx], 2
//   0x1DFDC8 jnz     loc_1E00F4
//   0x1DFDCE mov     r9, rdx
//   0x1DFDD1 mov     rdx, [rdx+8]
//   0x1DFDD5 test    byte ptr [rdx], 2
//   0x1DFDD8 jz      short loc_1DFDCE
//   0x1DFDDA mov     rax, [rsp+0E8h+var_D8]
//   0x1DFDDF lea     r12, [rax+8]
//   0x1DFDE3 nop     word ptr [rax+rax+00000000h]
//   0x1DFDEE xchg    ax, ax
//   0x1DFDF0 mov     rdx, qword ptr [rsp+0E8h+var_E8+8]
//   0x1DFDF5 mov     qword ptr [rsp+0E8h+var_E8], r8
//   0x1DFDF9 mov     rsi, r9
//   0x1DFDFC mov     rdi, r12
//   0x1DFDFF mov     rax, qword ptr [rsp+0E8h+var_E8]
//   0x1DFE03 mov     r8, [rsp+0E8h+var_D0]
//   0x1DFE08 mov     qword ptr [rsp+0E8h+var_E8+8], rdx
//   0x1DFE0D mov     rdx, qword ptr [rsp+0E8h+var_E8+8]
//   0x1DFE12 mov     rcx, rdx
//   0x1DFE15 mov     rdx, rax
//   0x1DFE18 call    sub_1DF1E0
//   0x1DFE1D jmp     loc_1DFD07
//   0x1DFE22 align 8
//   0x1DFE28 mov     r8, [rsp+0E8h+var_C8]
//   0x1DFE2D mov     r9, [rsp+0E8h+var_C0]
//   0x1DFE32 mov     r10, [rsp+0E8h+var_B0]
//   0x1DFE37 mov     rcx, [rbp+0]
//   0x1DFE3B mov     rax, [rbx+18h]
//   0x1DFE3F cmp     rcx, rax
//   0x1DFE42 jl      loc_1DFC37
//   0x1DFE48 movsxd  rdx, dword ptr [rsp+0E8h+var_A8+4]
//   0x1DFE4D movsxd  rsi, dword ptr [r14+4]
//   0x1DFE51 add     rdx, rax
//   0x1DFE54 add     rsi, rcx
//   0x1DFE57 cmp     rdx, rsi
//   0x1DFE5A jl      loc_1DFC37
//   0x1DFE60 cmp     byte ptr [r13+8], 5
//   0x1DFE65 jz      loc_1E00A5
//   0x1DFE6B mov     edx, ecx
//   0x1DFE6D sub     edx, eax
//   0x1DFE6F mov     rsi, r14
//   0x1DFE72 mov     rdi, r15
//   0x1DFE75 mov     [rsp+0E8h+var_C0], r9
//   0x1DFE7A mov     [rsp+0E8h+var_C8], r8
//   0x1DFE7F call    sub_30E760
//   0x1DFE84 mov     ebp, eax
//   0x1DFE86 test    al, al
//   0x1DFE88 jz      loc_1DFC37
//   0x1DFE8E mov     rdi, [rsp+0E8h+var_B8]
//   0x1DFE93 mov     rsi, r15
//   0x1DFE96 call    sub_30D4D0
//   0x1DFE9B mov     rax, [rbx]
//   0x1DFE9E mov     r8, [rsp+0E8h+var_C8]
//   0x1DFEA3 mov     r9, [rsp+0E8h+var_C0]
//   0x1DFEA8 test    al, 2
//   0x1DFEAA jnz     short loc_1DFED0
//   0x1DFEAC mov     rdx, [rbx+10h]
//   0x1DFEB0 test    byte ptr [rdx], 2
//   0x1DFEB3 jnz     loc_1E00BD
//   0x1DFEB9 mov     r9, rdx
//   0x1DFEBC mov     rdx, [rdx+8]
//   0x1DFEC0 test    byte ptr [rdx], 2
//   0x1DFEC3 jz      short loc_1DFEB9
//   0x1DFEC5 nop     word ptr [rax+rax+00000000h]
//   0x1DFED0 cmp     dword ptr [rsp+0E8h+var_88], 1
//   0x1DFED5 jz      loc_1DFC39
//   0x1DFEDB mov     rdx, qword ptr [rsp+0E8h+var_E8+8]
//   0x1DFEE0 mov     rdi, [rsp+0E8h+var_D8]
//   0x1DFEE5 mov     qword ptr [rsp+0E8h+var_E8], r8
//   0x1DFEE9 mov     rsi, r9
//   0x1DFEEC mov     r8, [rsp+0E8h+var_D0]
//   0x1DFEF1 mov     qword ptr [rsp+0E8h+var_E8+8], rdx
//   0x1DFEF6 mov     rdx, qword ptr [rsp+0E8h+var_E8]
//   0x1DFEFA add     rdi, 8
//   0x1DFEFE mov     rcx, qword ptr [rsp+0E8h+var_E8+8]
//   0x1DFF03 call    sub_1DF1E0
//   0x1DFF08 jmp     loc_1DFC39
//   0x1DFF0D align 10h
//   0x1DFF10 mov     rax, [r10+60h]
//   0x1DFF14 cmp     byte ptr [rax+91h], 0
//   0x1DFF1B jz      loc_1DFCD6
//   0x1DFF21 mov     edx, dword ptr [rsp+0E8h+var_A8+4]
//   0x1DFF25 lea     rax, [rsp+0E8h+var_88]
//   0x1DFF2A mov     rdi, r15
//   0x1DFF2D mov     byte ptr [rsp+0E8h+var_B8], cl
//   0x1DFF31 mov     rsi, rax
//   0x1DFF34 mov     [rsp+0E8h+var_B0], r10
//   0x1DFF39 sub     edx, r12d
//   0x1DFF3C mov     [rsp+0E8h+var_C0], r9
//   0x1DFF41 mov     [rsp+0E8h+var_C8], r8
//   0x1DFF46 mov     [rsp+0E8h+var_D0], rax
//   0x1DFF4B call    sub_30F440
//   0x1DFF50 test    al, al
//   0x1DFF52 mov     r8, [rsp+0E8h+var_C8]
//   0x1DFF57 mov     r9, [rsp+0E8h+var_C0]
//   0x1DFF5C movzx   ecx, byte ptr [rsp+0E8h+var_B8]
//   0x1DFF61 mov     r10, [rsp+0E8h+var_B0]
//   0x1DFF66 jz      loc_1DFD05
//   0x1DFF6C movdqa  xmm2, [rsp+0E8h+var_88]
//   0x1DFF72 movdqa  xmm1, [rsp+0E8h+var_A8]
//   0x1DFF78 movdqa  xmm0, [rsp+0E8h+var_98]
//   0x1DFF7E movaps  [rsp+0E8h+var_A8], xmm2
//   0x1DFF83 movdqa  xmm2, xmmword ptr [rsp+70h]
//   0x1DFF89 movaps  [rsp+0E8h+var_68], xmm1
//   0x1DFF91 movaps  [rsp+0E8h+var_58], xmm0
//   0x1DFF99 movaps  [rsp+0E8h+var_98], xmm2
//   0x1DFF9E movaps  [rsp+0E8h+var_88], xmm1
//   0x1DFFA3 movaps  xmmword ptr [rsp+70h], xmm0
//   0x1DFFA8 jmp     loc_1DFD34
//   0x1DFFAD align 10h
//   0x1DFFB0 mov     rax, [r10+60h]
//   0x1DFFB4 cmp     byte ptr [rax+91h], 0
//   0x1DFFBB jz      loc_1DFC08
//   0x1DFFC1 mov     edx, dword ptr [rsp+0E8h+var_A8+4]
//   0x1DFFC5 lea     rax, [rsp+0E8h+var_88]
//   0x1DFFCA mov     rdi, r15
//   0x1DFFCD mov     [rsp+0E8h+var_B0], r10
//   0x1DFFD2 mov     rsi, rax
//   0x1DFFD5 mov     [rsp+0E8h+var_C0], r9
//   0x1DFFDA sub     edx, r12d
//   0x1DFFDD mov     [rsp+0E8h+var_C8], r8
//   0x1DFFE2 mov     [rsp+0E8h+var_D0], rax
//   0x1DFFE7 call    sub_30F440
//   0x1DFFEC test    al, al
//   0x1DFFEE mov     r8, [rsp+0E8h+var_C8]
//   0x1DFFF3 mov     r9, [rsp+0E8h+var_C0]
//   0x1DFFF8 mov     r10, [rsp+0E8h+var_B0]
//   0x1DFFFD jz      loc_1DFC37
//   0x1E0003 movdqa  xmm2, [rsp+0E8h+var_88]
//   0x1E0009 movdqa  xmm1, [rsp+0E8h+var_A8]
//   0x1E000F movdqa  xmm0, [rsp+0E8h+var_98]
//   0x1E0015 movaps  [rsp+0E8h+var_A8], xmm2
//   0x1E001A movdqa  xmm2, xmmword ptr [rsp+70h]
//   0x1E0020 movaps  [rsp+0E8h+var_68], xmm1
//   0x1E0028 movaps  [rsp+0E8h+var_58], xmm0
//   0x1E0030 movaps  [rsp+0E8h+var_98], xmm2
//   0x1E0035 movaps  [rsp+0E8h+var_88], xmm1
//   0x1E003A movaps  xmmword ptr [rsp+70h], xmm0
//   0x1E003F jmp     loc_1DFE37
//   0x1E0044 mov     r12, [rsp+0E8h+var_D8]
//   0x1E0049 mov     rax, [rbx]
//   0x1E004C mov     r13, rbx
//   0x1E004F add     r12, 8
//   0x1E0053 test    al, 2
//   0x1E0055 jnz     short loc_1E0070
//   0x1E0057 mov     rdx, [rbx+10h]
//   0x1E005B test    byte ptr [rdx], 2
//   0x1E005E jnz     loc_1E0138
//   0x1E0064 mov     r13, rdx
//   0x1E0067 mov     rdx, [rdx+8]
//   0x1E006B test    byte ptr [rdx], 2
//   0x1E006E jz      short loc_1E0064
//   0x1E0070 mov     rsi, rbx
//   0x1E0073 mov     rdi, r12
//   0x1E0076 mov     [rsp+0E8h+var_D8], r8
//   0x1E007B call    sub_1DE9D0
//   0x1E0080 mov     r8, [rsp+0E8h+var_D8]
//   0x1E0085 mov     r9, r13
//   0x1E0088 jmp     loc_1DFDF0
//   0x1E008D mov     rcx, [r10+60h]
//   0x1E0091 sub     edx, eax
//   0x1E0093 cmp     byte ptr [rcx+91h], 0
//   0x1E009A jnz     loc_1DFD5F
//   0x1E00A0 jmp     loc_1DFD5A
//   0x1E00A5 mov     rdi, [r10+60h]
//   0x1E00A9 sub     edx, esi
//   0x1E00AB cmp     byte ptr [rdi+91h], 0
//   0x1E00B2 jnz     loc_1DFE6F
//   0x1E00B8 jmp     loc_1DFE6B
//   0x1E00BD and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E00C1 mov     rdx, [rax]
//   0x1E00C4 test    dl, 2
//   0x1E00C7 jz      short loc_1E00D4
//   0x1E00C9 mov     r9, rax
//   0x1E00CC jmp     loc_1DFED0
//   0x1E00D1 mov     rax, rcx
//   0x1E00D4 cmp     r9, [rax+10h]
//   0x1E00D8 jnz     short loc_1E00C9
//   0x1E00DA mov     rcx, rdx
//   0x1E00DD mov     r9, rax
//   0x1E00E0 and     rcx, 0FFFFFFFFFFFFFFFCh
//   0x1E00E4 mov     rdx, [rcx]
//   0x1E00E7 test    dl, 2
//   0x1E00EA jz      short loc_1E00D1
//   0x1E00EC mov     r9, rcx
//   0x1E00EF jmp     loc_1DFED0
//   0x1E00F4 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E00F8 mov     rdx, [rax]
//   0x1E00FB test    dl, 2
//   0x1E00FE jz      short loc_1E0108
//   0x1E0100 mov     r9, rax
//   0x1E0103 jmp     loc_1DFDF0
//   0x1E0108 cmp     r9, [rax+10h]
//   0x1E010C jnz     short loc_1E0130
//   0x1E010E and     rdx, 0FFFFFFFFFFFFFFFCh
//   0x1E0112 mov     r9, rdx
//   0x1E0115 mov     rdx, [rdx]
//   0x1E0118 test    dl, 2
//   0x1E011B jnz     loc_1DFDDA
//   0x1E0121 mov     rcx, rax
//   0x1E0124 mov     rax, r9
//   0x1E0127 mov     r9, rcx
//   0x1E012A cmp     r9, [rax+10h]
//   0x1E012E jz      short loc_1E010E
//   0x1E0130 mov     r9, rax
//   0x1E0133 jmp     loc_1DFDDA
//   0x1E0138 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E013C mov     rcx, rbx
//   0x1E013F mov     r13, rax
//   0x1E0142 mov     rax, [rax]
//   0x1E0145 test    al, 2
//   0x1E0147 jnz     loc_1E0070
//   0x1E014D cmp     [r13+10h], rcx
//   0x1E0151 jnz     loc_1E0070
//   0x1E0157 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E015B mov     rdx, rax
//   0x1E015E mov     rax, [rax]
//   0x1E0161 test    al, 2
//   0x1E0163 jz      short loc_1E016D
//   0x1E0165 mov     r13, rdx
//   0x1E0168 jmp     loc_1E0070
//   0x1E016D mov     rcx, r13
//   0x1E0170 mov     r13, rdx
//   0x1E0173 jmp     short loc_1E014D
//   0x1E0175 call    ___stack_chk_fail
//   0x1E017A mov     rbx, rax
//   0x1E017D jmp     loc_416DA
//   0x1E0182 mov     rbx, rax
//   0x1E0185 jmp     loc_41707
// ============================================================

void sub_1DFAF0(/* signature unknown */)
{
    // see disassembly above
}

