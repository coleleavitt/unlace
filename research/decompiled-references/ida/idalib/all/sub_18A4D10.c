// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x18A4D10
// Name:           sub_18A4D10
// Function size:  2452 bytes (591 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x18A4D10 push    r15; int
//   0x18A4D12 push    r14; int
//   0x18A4D14 mov     r14d, r9d
//   0x18A4D17 push    r13; int
//   0x18A4D19 mov     r13d, ecx
//   0x18A4D1C push    r12; int
//   0x18A4D1E push    rbp; int
//   0x18A4D1F push    rbx; int
//   0x18A4D20 mov     rbx, rdi
//   0x18A4D23 sub     rsp, 168h
//   0x18A4D2A mov     [rsp+198h+var_18C], esi
//   0x18A4D2E mov     qword ptr [rsp+198h+var_160], rdx; int
//   0x18A4D33 mov     qword ptr [rsp+198h+var_168], r8; int
//   0x18A4D38 call    sub_168B6C0
//   0x18A4D3D mov     rbp, [rbx]
//   0x18A4D40 mov     qword ptr [rsp+198h+var_198], rax; int
//   0x18A4D44 mov     rdi, rbp
//   0x18A4D47 call    sub_1A3A250
//   0x18A4D4C mov     rdx, qword ptr [rsp+198h+var_160]
//   0x18A4D51 xor     r8d, r8d
//   0x18A4D54 mov     ecx, r13d
//   0x18A4D57 mov     r9d, eax
//   0x18A4D5A mov     rax, [rbx]
//   0x18A4D5D mov     rdi, rbp
//   0x18A4D60 mov     rsi, [rax+0C0h]
//   0x18A4D67 call    sub_1A5B7C0
//   0x18A4D6C test    rax, rax
//   0x18A4D6F jz      loc_18A5040
//   0x18A4D75 mov     rbp, rax
//   0x18A4D78 movzx   eax, byte ptr [rax+1Ch]
//   0x18A4D7C and     eax, 7Fh
//   0x18A4D7F cmp     al, 14h
//   0x18A4D81 jnz     loc_18A4F18
//   0x18A4D87 mov     rdi, qword ptr [rsp+198h+var_198]
//   0x18A4D8B mov     r12, [rbx]
//   0x18A4D8E xor     edx, edx
//   0x18A4D90 mov     rsi, rbp
//   0x18A4D93 call    sub_A82070
//   0x18A4D98 mov     rdi, r12
//   0x18A4D9B mov     ecx, 1
//   0x18A4DA0 mov     esi, r13d
//   0x18A4DA3 mov     r8d, 1D2Ah
//   0x18A4DA9 mov     rdx, rax
//   0x18A4DAC lea     r12, [rsp+198h+var_C8]
//   0x18A4DB4 call    sub_1E63CF0
//   0x18A4DB9 mov     r15, qword ptr [rsp+198h+var_168]
//   0x18A4DBE test    r15, r15
//   0x18A4DC1 jnz     loc_18A4F79
//   0x18A4DC7 mov     rax, [rbp+78h]
//   0x18A4DCB test    rax, rax
//   0x18A4DCE jz      loc_18A5015
//   0x18A4DD4 test    rax, 0FFFFFFFFFFFFFFF8h
//   0x18A4DDA jz      loc_18A5032
//   0x18A4DE0 mov     rax, [rbx]
//   0x18A4DE3 sub     rsp, 8
//   0x18A4DE7 mov     r8d, r13d
//   0x18A4DEA mov     rcx, r15
//   0x18A4DED mov     rdx, rbp
//   0x18A4DF0 mov     rsi, [rax+220h]
//   0x18A4DF7 push    0
//   0x18A4DF9 push    0
//   0x18A4DFB push    r14
//   0x18A4DFD mov     r9d, [rsp+1B8h+var_18C]
//   0x18A4E02 mov     rdi, qword ptr [rsp+1B8h+var_198]
//   0x18A4E07 call    sub_BAB1D0
//   0x18A4E0C mov     rdi, [rbx]
//   0x18A4E0F mov     r8d, 1
//   0x18A4E15 mov     word ptr [rsp+1B8h+var_C8], r8w
//   0x18A4E1E add     rsp, 20h
//   0x18A4E22 mov     rdx, rax
//   0x18A4E25 mov     rcx, [rsp+198h+arg_0]
//   0x18A4E2D mov     rsi, [rdi+0C0h]
//   0x18A4E34 mov     r8, r12
//   0x18A4E37 mov     r14, rax
//   0x18A4E3A call    sub_1836B60
//   0x18A4E3F mov     rdi, [rbx]
//   0x18A4E42 mov     rdx, r14
//   0x18A4E45 mov     rsi, [rdi+0C0h]
//   0x18A4E4C call    sub_16660F0
//   0x18A4E51 mov     rsi, r14
//   0x18A4E54 mov     rdi, rbx
//   0x18A4E57 call    sub_18954B0
//   0x18A4E5C test    al, al
//   0x18A4E5E jnz     loc_18A4EF2
//   0x18A4E64 mov     rdi, rbp
//   0x18A4E67 call    sub_BAC6C0
//   0x18A4E6C test    rax, rax
//   0x18A4E6F jz      loc_18A52C0
//   0x18A4E75 xor     r8d, r8d
//   0x18A4E78 mov     ecx, 0E7Ch
//   0x18A4E7D mov     edx, r13d
//   0x18A4E80 mov     rsi, rbx
//   0x18A4E83 mov     rdi, r12
//   0x18A4E86 call    sub_168B9F0
//   0x18A4E8B lea     rsi, [rsp+198h+var_160]
//   0x18A4E90 mov     rdi, r12
//   0x18A4E93 call    sub_17AE460
//   0x18A4E98 mov     rdi, r12
//   0x18A4E9B call    sub_15F7200
//   0x18A4EA0 mov     rdi, rbp
//   0x18A4EA3 call    sub_BAC6C0
//   0x18A4EA8 mov     rsi, rbx
//   0x18A4EAB xor     r8d, r8d
//   0x18A4EAE mov     ecx, 71h ; 'q'
//   0x18A4EB3 mov     edx, [rax+18h]
//   0x18A4EB6 mov     rdi, r12
//   0x18A4EB9 call    sub_168B9F0
//   0x18A4EBE mov     rdi, r12
//   0x18A4EC1 call    sub_15F7200
//   0x18A4EC6 mov     esi, 1
//   0x18A4ECB mov     rdi, r14
//   0x18A4ECE call    sub_B88650
//   0x18A4ED3 mov     rdi, rbp
//   0x18A4ED6 call    sub_BAB630
//   0x18A4EDB test    rax, rax
//   0x18A4EDE jz      short loc_18A4EF2
//   0x18A4EE0 mov     rdi, rbp
//   0x18A4EE3 call    sub_BAB630
//   0x18A4EE8 test    byte ptr [rax+1Dh], 1
//   0x18A4EEC jnz     loc_18A5380
//   0x18A4EF2 mov     rsi, r14
//   0x18A4EF5 mov     rdi, rbx
//   0x18A4EF8 call    sub_1A865C0
//   0x18A4EFD add     rsp, 168h
//   0x18A4F04 mov     rax, r14
//   0x18A4F07 pop     rbx
//   0x18A4F08 pop     rbp
//   0x18A4F09 pop     r12
//   0x18A4F0B pop     r13
//   0x18A4F0D pop     r14
//   0x18A4F0F pop     r15
//   0x18A4F11 retn
//   0x18A4F12 align 8
//   0x18A4F18 xor     r8d, r8d
//   0x18A4F1B mov     ecx, 1328h
//   0x18A4F20 mov     edx, r13d
//   0x18A4F23 mov     rsi, rbx
//   0x18A4F26 lea     r12, [rsp+198h+var_C8]
//   0x18A4F2E mov     rdi, r12
//   0x18A4F31 call    sub_168B9F0
//   0x18A4F36 lea     rsi, [rsp+198h+var_160]
//   0x18A4F3B mov     rdi, r12
//   0x18A4F3E call    sub_17AE460
//   0x18A4F43 mov     rdi, r12
//   0x18A4F46 call    sub_15F7200
//   0x18A4F4B mov     edx, [rbp+18h]
//   0x18A4F4E mov     rdi, r12
//   0x18A4F51 xor     r8d, r8d
//   0x18A4F54 mov     ecx, 71h ; 'q'
//   0x18A4F59 mov     rsi, rbx
//   0x18A4F5C call    sub_168B9F0
//   0x18A4F61 mov     rdi, r12
//   0x18A4F64 call    sub_15F7200
//   0x18A4F69 mov     r15, qword ptr [rsp+198h+var_168]
//   0x18A4F6E xor     ebp, ebp
//   0x18A4F70 test    r15, r15
//   0x18A4F73 jz      loc_18A5470
//   0x18A4F79 mov     rdi, [rbx]
//   0x18A4F7C mov     rdx, r15
//   0x18A4F7F xor     r9d, r9d
//   0x18A4F82 xor     r8d, r8d
//   0x18A4F85 mov     ecx, r14d
//   0x18A4F88 mov     rsi, [rdi+0C0h]
//   0x18A4F8F call    sub_1A5B7C0
//   0x18A4F94 mov     r15, rax
//   0x18A4F97 test    rax, rax
//   0x18A4F9A jz      short loc_18A4FC4
//   0x18A4F9C movzx   eax, byte ptr [rax+1Ch]
//   0x18A4FA0 and     eax, 7Fh
//   0x18A4FA3 cmp     al, 14h
//   0x18A4FA5 jnz     loc_18A5300
//   0x18A4FAB mov     rax, [r15+78h]
//   0x18A4FAF test    rax, rax
//   0x18A4FB2 jz      loc_18A5648
//   0x18A4FB8 test    rax, 0FFFFFFFFFFFFFFF8h
//   0x18A4FBE jnz     loc_18A53C0
//   0x18A4FC4 xor     r8d, r8d
//   0x18A4FC7 mov     ecx, 14EAh
//   0x18A4FCC mov     edx, r14d
//   0x18A4FCF mov     rsi, rbx
//   0x18A4FD2 mov     rdi, r12
//   0x18A4FD5 call    sub_168B9F0
//   0x18A4FDA lea     rsi, [rsp+198h+var_168]
//   0x18A4FDF mov     rdi, r12
//   0x18A4FE2 call    sub_17AE460
//   0x18A4FE7 lea     rsi, [rsp+198h+var_160]
//   0x18A4FEC mov     rdi, rax
//   0x18A4FEF call    sub_17AE460
//   0x18A4FF4 mov     rdi, r12
//   0x18A4FF7 call    sub_15F7200
//   0x18A4FFC test    rbp, rbp
//   0x18A4FFF jz      loc_18A5470
//   0x18A5005 mov     rax, [rbp+78h]
//   0x18A5009 xor     r15d, r15d
//   0x18A500C test    rax, rax
//   0x18A500F jnz     loc_18A4DD4
//   0x18A5015 mov     rsi, [rbp+60h]
//   0x18A5019 lea     rdi, [rsi+58h]
//   0x18A501D call    sub_A794E0
//   0x18A5022 mov     rax, [rbp+78h]
//   0x18A5026 test    rax, 0FFFFFFFFFFFFFFF8h
//   0x18A502C jnz     loc_18A4DE0
//   0x18A5032 mov     rdi, rbp
//   0x18A5035 call    sub_BAB340
//   0x18A503A jmp     loc_18A4DE0
//   0x18A503F align 20h
//   0x18A5040 mov     rsi, qword ptr [rsp+198h+var_160]
//   0x18A5045 mov     rbp, [rbx]
//   0x18A5048 pxor    xmm0, xmm0
//   0x18A504C lea     r12, [rsp+198h+var_C8]
//   0x18A5054 lea     rax, off_2BC6D18
//   0x18A505B lea     rdi, [r12+10h]
//   0x18A5060 movaps  xmmword ptr [rsp+198h+var_148], xmm0; int
//   0x18A5065 mov     qword ptr [rsp+198h+var_158], rax; int
//   0x18A506A mov     rax, 101010101h
//   0x18A5074 mov     qword ptr [rsp+198h+var_150], rax; int
//   0x18A5079 mov     qword ptr [rsp+198h+var_138], 0; int
//   0x18A5082 mov     r15, [rbp+0C0h]
//   0x18A5089 mov     qword ptr [rsp+198h+var_C8], rsi; int
//   0x18A5091 mov     [rsp+198h+var_C0], r13d; int
//   0x18A5099 call    sub_B85890
//   0x18A509E lea     rax, [rsp+198h+var_128]
//   0x18A50A3 xor     r9d, r9d
//   0x18A50A6 mov     r8, r15
//   0x18A50A9 mov     qword ptr [rsp+198h+var_170], rax; int
//   0x18A50AE mov     rdi, rax
//   0x18A50B1 xor     ecx, ecx
//   0x18A50B3 mov     rdx, r12
//   0x18A50B6 push    1
//   0x18A50B8 mov     r15, rdi
//   0x18A50BB mov     rsi, rbp
//   0x18A50BE push    0
//   0x18A50C0 push    0
//   0x18A50C2 push    0
//   0x18A50C4 push    0
//   0x18A50C6 lea     rax, [rsp+1C0h+var_158]
//   0x18A50CB push    rax
//   0x18A50CC call    sub_1A6BD60
//   0x18A50D1 add     rsp, 30h
//   0x18A50D5 mov     rdi, r15
//   0x18A50D8 call    sub_183AA90
//   0x18A50DD test    rax, rax
//   0x18A50E0 jz      loc_18A5350
//   0x18A50E6 movzx   eax, byte ptr [rax+1Ch]
//   0x18A50EA and     eax, 7Fh
//   0x18A50ED cmp     al, 14h
//   0x18A50EF jnz     loc_18A5350
//   0x18A50F5 mov     edx, 1D2Bh
//   0x18A50FA mov     rsi, rbx
//   0x18A50FD mov     rdi, r12
//   0x18A5100 mov     rbp, [rbx]
//   0x18A5103 call    sub_168B9B0
//   0x18A5108 mov     rsi, qword ptr [rsp+198h+var_160]
//   0x18A510D mov     edx, 5
//   0x18A5112 mov     rdi, r12
//   0x18A5115 call    sub_AE9DF0
//   0x18A511A mov     rsi, r15; int
//   0x18A511D xor     ecx, ecx; int
//   0x18A511F mov     rdx, r12; int
//   0x18A5122 mov     rdi, rbp; int
//   0x18A5125 call    sub_1A60AF0
//   0x18A512A mov     rsi, qword ptr [rsp+198h+var_C8]
//   0x18A5132 test    rsi, rsi
//   0x18A5135 jz      short loc_18A5149
//   0x18A5137 mov     rdi, qword ptr [rsp+198h+var_C0]
//   0x18A513F test    rdi, rdi
//   0x18A5142 jz      short loc_18A5149
//   0x18A5144 call    sub_1580C40
//   0x18A5149 mov     rax, [rsp+198h+var_E0]
//   0x18A5151 mov     rbp, [rsp+198h+var_E8]
//   0x18A5159 mov     [rsp+198h+var_178], rax
//   0x18A515E cmp     rax, rbp
//   0x18A5161 jz      loc_18A5286
//   0x18A5167 nop     word ptr [rax+rax+00000000h]
//   0x18A5170 mov     r15, [rbp+0]
//   0x18A5174 test    r15, r15
//   0x18A5177 jz      loc_18A526F
//   0x18A517D mov     rax, [rbp+8]
//   0x18A5181 test    rax, rax
//   0x18A5184 jz      loc_18A526F
//   0x18A518A cmp     r15, rax
//   0x18A518D jnb     loc_18A5510
//   0x18A5193 mov     eax, [r15+218h]
//   0x18A519A mov     rcx, [r15+210h]
//   0x18A51A1 shl     rax, 6
//   0x18A51A5 add     rax, rcx
//   0x18A51A8 cmp     rcx, rax
//   0x18A51AB jz      short loc_18A51EA
//   0x18A51AD nop     dword ptr [rax]
//   0x18A51B0 sub     rax, 40h ; '@'
//   0x18A51B4 mov     rdi, [rax+18h]; void *
//   0x18A51B8 lea     rsi, [rax+28h]
//   0x18A51BC cmp     rdi, rsi
//   0x18A51BF jz      loc_18A5500
//   0x18A51C5 mov     [rsp+198h+var_180], rax
//   0x18A51CA mov     [rsp+198h+var_188], rcx
//   0x18A51CF call    __ZdlPv; operator delete(void *)
//   0x18A51D4 mov     rcx, [rsp+198h+var_188]
//   0x18A51D9 mov     rax, [rsp+198h+var_180]
//   0x18A51DE cmp     rcx, rax
//   0x18A51E1 jnz     short loc_18A51B0
//   0x18A51E3 mov     rax, [r15+210h]
//   0x18A51EA lea     rcx, [r15+220h]
//   0x18A51F1 cmp     rax, rcx
//   0x18A51F4 jz      short loc_18A51FE
//   0x18A51F6 mov     rdi, rax; ptr
//   0x18A51F9 call    _free
//   0x18A51FE mov     rdi, [r15+1A0h]; ptr
//   0x18A5205 lea     rcx, [r15+1B0h]
//   0x18A520C lea     rax, [r15+1A0h]
//   0x18A5213 cmp     rdi, rcx
//   0x18A5216 jz      short loc_18A5227
//   0x18A5218 mov     [rsp+198h+var_188], rax
//   0x18A521D call    _free
//   0x18A5222 mov     rax, [rsp+198h+var_188]
//   0x18A5227 lea     rcx, [r15+60h]
//   0x18A522B nop     dword ptr [rax+rax+00h]
//   0x18A5230 sub     rax, 20h ; ' '
//   0x18A5234 mov     rdi, [rax]; void *
//   0x18A5237 lea     rsi, [rax+10h]
//   0x18A523B cmp     rdi, rsi
//   0x18A523E jz      loc_18A54E8
//   0x18A5244 mov     [rsp+198h+var_180], rcx
//   0x18A5249 mov     [rsp+198h+var_188], rax
//   0x18A524E call    __ZdlPv; operator delete(void *)
//   0x18A5253 mov     rax, [rsp+198h+var_188]
//   0x18A5258 mov     rcx, [rsp+198h+var_180]
//   0x18A525D cmp     rax, rcx
//   0x18A5260 jnz     short loc_18A5230
//   0x18A5262 mov     esi, 3A0h; unsigned __int64
//   0x18A5267 mov     rdi, r15; void *
//   0x18A526A call    __ZdlPvm; operator delete(void *,ulong)
//   0x18A526F add     rbp, 18h
//   0x18A5273 cmp     [rsp+198h+var_178], rbp
//   0x18A5278 jnz     loc_18A5170
//   0x18A527E mov     rbp, [rsp+198h+var_E8]
//   0x18A5286 test    rbp, rbp
//   0x18A5289 jz      short loc_18A5293
//   0x18A528B mov     rdi, rbp; void *
//   0x18A528E call    __ZdlPv; operator delete(void *)
//   0x18A5293 mov     rax, qword ptr [rsp+198h+var_170]
//   0x18A5298 mov     rdi, [rsp+198h+ptr]; ptr
//   0x18A52A0 add     rax, 20h ; ' '
//   0x18A52A4 cmp     rdi, rax
//   0x18A52A7 jz      loc_18A4F69
//   0x18A52AD call    _free
//   0x18A52B2 jmp     loc_18A4F69
//   0x18A52B7 align 20h
//   0x18A52C0 mov     rsi, r14
//   0x18A52C3 mov     rdi, rbp
//   0x18A52C6 call    sub_BAB3F0
//   0x18A52CB mov     rdi, [rbx]
//   0x18A52CE mov     rsi, r14
//   0x18A52D1 mov     ecx, 1
//   0x18A52D6 mov     rdx, [rdi+0C0h]
//   0x18A52DD call    sub_17B7670
//   0x18A52E2 mov     edx, [r14+18h]
//   0x18A52E6 mov     rdi, [rbx]
//   0x18A52E9 mov     rsi, rbp
//   0x18A52EC call    sub_18A3E00
//   0x18A52F1 jmp     loc_18A4ED3
//   0x18A52F6 align 20h
//   0x18A5300 xor     r8d, r8d
//   0x18A5303 mov     edx, r14d
//   0x18A5306 mov     ecx, 1328h
//   0x18A530B mov     rsi, rbx
//   0x18A530E mov     rdi, r12
//   0x18A5311 call    sub_168B9F0
//   0x18A5316 lea     rsi, [rsp+198h+var_168]
//   0x18A531B mov     rdi, r12
//   0x18A531E call    sub_17AE460
//   0x18A5323 mov     rdi, r12
//   0x18A5326 call    sub_15F7200
//   0x18A532B mov     edx, [r15+18h]
//   0x18A532F mov     rdi, r12
//   0x18A5332 xor     r8d, r8d
//   0x18A5335 mov     ecx, 71h ; 'q'
//   0x18A533A mov     rsi, rbx
//   0x18A533D call    sub_168B9F0
//   0x18A5342 mov     rdi, r12
//   0x18A5345 call    sub_15F7200
//   0x18A534A jmp     loc_18A4FFC
//   0x18A534F align 10h
//   0x18A5350 xor     r8d, r8d
//   0x18A5353 mov     ecx, 1D2Ah
//   0x18A5358 mov     edx, r13d
//   0x18A535B mov     rsi, rbx
//   0x18A535E mov     rdi, r12
//   0x18A5361 call    sub_168B9F0
//   0x18A5366 mov     rdi, r12
//   0x18A5369 lea     rsi, [rsp+198h+var_160]
//   0x18A536E call    sub_17AE460
//   0x18A5373 mov     rdi, r12
//   0x18A5376 call    sub_15F7200
//   0x18A537B jmp     loc_18A5149
//   0x18A5380 mov     rdi, rax
//   0x18A5383 call    sub_B8C3D0
//   0x18A5388 mov     rdx, [rax]
//   0x18A538B mov     eax, [rax+8]
//   0x18A538E lea     rcx, [rdx+rax*8]
//   0x18A5392 cmp     rdx, rcx
//   0x18A5395 jnb     loc_18A55C8
//   0x18A539B mov     rax, rdx
//   0x18A539E xchg    ax, ax
//   0x18A53A0 mov     rdx, [rax]
//   0x18A53A3 cmp     word ptr [rdx+24h], 1B1h
//   0x18A53A9 jz      loc_18A5678
//   0x18A53AF add     rax, 8
//   0x18A53B3 cmp     rcx, rax
//   0x18A53B6 jnz     short loc_18A53A0
//   0x18A53B8 jmp     loc_18A4EF2
//   0x18A53BD align 20h
//   0x18A53C0 test    rbp, rbp
//   0x18A53C3 jz      loc_18A5540
//   0x18A53C9 mov     rdi, rbp
//   0x18A53CC call    sub_BAB630
//   0x18A53D1 test    rax, rax
//   0x18A53D4 jz      short loc_18A5417
//   0x18A53D6 cmp     r15, rax
//   0x18A53D9 jz      loc_18A4DC7
//   0x18A53DF mov     rdx, [rax]
//   0x18A53E2 mov     rcx, [rdx+20h]
//   0x18A53E6 lea     rdx, sub_A55E60
//   0x18A53ED cmp     rcx, rdx
//   0x18A53F0 jnz     loc_18A5660
//   0x18A53F6 mov     rcx, [rax+60h]
//   0x18A53FA mov     rax, [r15]
//   0x18A53FD mov     rax, [rax+20h]
//   0x18A5401 cmp     rax, rdx
//   0x18A5404 jnz     loc_18A5690
//   0x18A540A mov     rax, [r15+60h]
//   0x18A540E cmp     rcx, rax
//   0x18A5411 jz      loc_18A4DC7
//   0x18A5417 xor     r8d, r8d
//   0x18A541A mov     edx, r14d
//   0x18A541D mov     ecx, 0D8Fh
//   0x18A5422 mov     rsi, rbx
//   0x18A5425 mov     rdi, r12
//   0x18A5428 call    sub_168B9F0
//   0x18A542D mov     rax, [r15+28h]
//   0x18A5431 lea     rsi, [rsp+198h+var_128]
//   0x18A5436 mov     rdi, r12
//   0x18A5439 mov     qword ptr [rsp+198h+var_128], rax
//   0x18A543E call    sub_15894B0
//   0x18A5443 mov     rdi, r12
//   0x18A5446 call    sub_15F7200
//   0x18A544B mov     edx, [r15+18h]
//   0x18A544F mov     rdi, r12
//   0x18A5452 xor     r8d, r8d
//   0x18A5455 mov     ecx, 71h ; 'q'
//   0x18A545A mov     rsi, rbx
//   0x18A545D call    sub_168B9F0
//   0x18A5462 mov     rdi, r12
//   0x18A5465 call    sub_15F7200
//   0x18A546A jmp     loc_18A4DC7
//   0x18A546F align 10h
//   0x18A5470 mov     rax, [rbx]
//   0x18A5473 xor     r9d, r9d
//   0x18A5476 xor     r8d, r8d
//   0x18A5479 xor     r15d, r15d
//   0x18A547C mov     rsi, [rax+220h]
//   0x18A5483 push    1
//   0x18A5485 push    r13
//   0x18A5487 mov     rcx, qword ptr [rsp+1A8h+var_160]
//   0x18A548C mov     edx, [rsp+1A8h+var_18C]
//   0x18A5490 mov     rdi, qword ptr [rsp+1A8h+var_198]
//   0x18A5495 call    sub_BAF1C0
//   0x18A549A mov     rdi, [rbx]
//   0x18A549D mov     rbp, rax
//   0x18A54A0 mov     rdx, rax
//   0x18A54A3 mov     rsi, [rdi+0C0h]
//   0x18A54AA call    sub_16660F0
//   0x18A54AF mov     rdi, rbp
//   0x18A54B2 call    sub_BAB340
//   0x18A54B7 mov     rax, [rbp+78h]
//   0x18A54BB and     rax, 0FFFFFFFFFFFFFFF8h
//   0x18A54BF mov     [rax+50h], r13d
//   0x18A54C3 pop     rax
//   0x18A54C4 pop     rdx
//   0x18A54C5 mov     rdi, [rbx]
//   0x18A54C8 mov     ecx, 1
//   0x18A54CD mov     rsi, rbp
//   0x18A54D0 mov     rdx, [rdi+0C0h]
//   0x18A54D7 call    sub_17B7670
//   0x18A54DC jmp     loc_18A4DE0
//   0x18A54E1 align 8
//   0x18A54E8 cmp     rax, rcx
//   0x18A54EB jnz     loc_18A5230
//   0x18A54F1 jmp     loc_18A5262
//   0x18A54F6 align 20h
//   0x18A5500 cmp     rcx, rax
//   0x18A5503 jnz     loc_18A51B0
//   0x18A5509 jmp     loc_18A51E3
//   0x18A550E align 10h
//   0x18A5510 lea     rcx, [rax+3A00h]
//   0x18A5517 cmp     r15, rcx
//   0x18A551A ja      loc_18A5193
//   0x18A5520 mov     ecx, [rax+3A80h]
//   0x18A5526 lea     esi, [rcx+1]
//   0x18A5529 mov     [rax+3A80h], esi
//   0x18A552F mov     [rax+rcx*8+3A00h], r15
//   0x18A5537 jmp     loc_18A526F
//   0x18A553C align 20h
//   0x18A5540 mov     rax, [rbx]
//   0x18A5543 xor     r9d, r9d
//   0x18A5546 xor     r8d, r8d
//   0x18A5549 mov     rsi, [rax+220h]
//   0x18A5550 push    1
//   0x18A5552 push    r13
//   0x18A5554 mov     rcx, qword ptr [rsp+1A8h+var_160]
//   0x18A5559 mov     edx, [rsp+1A8h+var_18C]
//   0x18A555D mov     rdi, qword ptr [rsp+1A8h+var_198]
//   0x18A5562 call    sub_BAF1C0
//   0x18A5567 mov     rdi, [rbx]
//   0x18A556A mov     rbp, rax
//   0x18A556D mov     rdx, rax
//   0x18A5570 mov     rsi, [rdi+0C0h]
//   0x18A5577 call    sub_16660F0
//   0x18A557C mov     rdi, rbp
//   0x18A557F call    sub_BAB340
//   0x18A5584 mov     rdi, qword ptr [rsp+1A8h+var_198]
//   0x18A5589 xor     edx, edx
//   0x18A558B mov     rsi, r15
//   0x18A558E call    sub_A82070
//   0x18A5593 mov     rdi, qword ptr [rsp+1A8h+var_198]
//   0x18A5598 mov     edx, r14d
//   0x18A559B mov     rsi, rax
//   0x18A559E call    sub_A81910
//   0x18A55A3 mov     rdx, [rbp+78h]
//   0x18A55A7 and     rdx, 0FFFFFFFFFFFFFFF8h
//   0x18A55AB mov     [rdx+8], rax
//   0x18A55AF mov     rax, [rbp+78h]
//   0x18A55B3 and     rax, 0FFFFFFFFFFFFFFF8h
//   0x18A55B7 mov     [rax+50h], r14d
//   0x18A55BB pop     rcx
//   0x18A55BC pop     rsi
//   0x18A55BD jmp     loc_18A54C5
//   0x18A55C2 align 8
//   0x18A55C8 jnz     short loc_18A55DD
//   0x18A55CA jmp     loc_18A4EF2
//   0x18A55CF align 10h
//   0x18A55D0 add     rcx, 8
//   0x18A55D4 cmp     rdx, rcx
//   0x18A55D7 jz      loc_18A4EF2
//   0x18A55DD mov     rax, [rcx]
//   0x18A55E0 cmp     word ptr [rax+24h], 1B1h
//   0x18A55E6 jnz     short loc_18A55D0
//   0x18A55E8 mov     edx, r13d
//   0x18A55EB xor     r8d, r8d
//   0x18A55EE mov     ecx, 111Eh
//   0x18A55F3 mov     rsi, rbx
//   0x18A55F6 mov     rdi, r12
//   0x18A55F9 call    sub_168B9F0
//   0x18A55FE mov     rax, [rbp+28h]
//   0x18A5602 lea     rsi, [rsp+198h+var_158]
//   0x18A5607 mov     rdi, r12
//   0x18A560A mov     qword ptr [rsp+198h+var_158], rax
//   0x18A560F call    sub_15894B0
//   0x18A5614 mov     rdi, rbp
//   0x18A5617 mov     r13, rax
//   0x18A561A call    sub_BAB630
//   0x18A561F mov     rdi, r13
//   0x18A5622 lea     rsi, [rsp+198h+var_128]
//   0x18A5627 mov     rax, [rax+28h]
//   0x18A562B mov     qword ptr [rsp+198h+var_128], rax
//   0x18A5630 call    sub_15894B0
//   0x18A5635 mov     rdi, r12
//   0x18A5638 call    sub_15F7200
//   0x18A563D jmp     loc_18A4EF2
//   0x18A5642 align 8
//   0x18A5648 mov     rsi, [r15+60h]
//   0x18A564C lea     rdi, [rsi+58h]
//   0x18A5650 call    sub_A794E0
//   0x18A5655 mov     rax, [r15+78h]
//   0x18A5659 jmp     loc_18A4FB8
//   0x18A565E align 20h
//   0x18A5660 mov     rdi, rax
//   0x18A5663 call    rcx
//   0x18A5665 lea     rdx, sub_A55E60
//   0x18A566C mov     rcx, rax
//   0x18A566F jmp     loc_18A53FA
//   0x18A5674 align 8
//   0x18A5678 cmp     rcx, rax
//   0x18A567B jnz     loc_18A55E8
//   0x18A5681 jmp     loc_18A4EF2
//   0x18A5686 align 10h
//   0x18A5690 mov     [rsp+198h+var_188], rcx
//   0x18A5695 mov     rdi, r15
//   0x18A5698 call    rax
//   0x18A569A mov     rcx, [rsp+198h+var_188]
//   0x18A569F jmp     loc_18A540E
// ============================================================

void sub_18A4D10(/* signature unknown */)
{
    // see disassembly above
}

