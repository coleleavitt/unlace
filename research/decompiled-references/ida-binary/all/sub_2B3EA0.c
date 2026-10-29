// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x2B3EA0
// Name:           _ZN13GraphRenderer24update_pending_selectionEbE16point_selector_t_::vfunc_2
// Function size:  797 bytes (211 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x2B3EA0 push    r14
//   0x2B3EA2 push    r13
//   0x2B3EA4 push    r12
//   0x2B3EA6 mov     r12, rdi
//   0x2B3EA9 push    rbp
//   0x2B3EAA mov     ebp, esi
//   0x2B3EAC push    rbx
//   0x2B3EAD mov     rax, [rdi+18h]
//   0x2B3EB1 mov     rbx, rdx
//   0x2B3EB4 mov     rdi, [rax+10h]
//   0x2B3EB8 add     rdi, 180h
//   0x2B3EBF call    sub_1EA6C0
//   0x2B3EC4 movsd   xmm3, cs:dbl_5DC300
//   0x2B3ECC mov     ecx, [rbx]
//   0x2B3ECE movsd   xmm0, qword ptr [rax]
//   0x2B3ED2 mov     esi, [rbx+4]
//   0x2B3ED5 mov     edx, [rbx+8]
//   0x2B3ED8 mov     edi, [rbx+0Ch]
//   0x2B3EDB ucomisd xmm0, xmm3
//   0x2B3EDF jp      short loc_2B3F60
//   0x2B3EE1 jnz     short loc_2B3F60
//   0x2B3EE3 cvttsd2si r9d, qword ptr [rax+10h]
//   0x2B3EE9 cvttsd2si eax, qword ptr [rax+8]
//   0x2B3EEE sub     esi, r9d
//   0x2B3EF1 sub     edi, r9d
//   0x2B3EF4 sub     ecx, eax
//   0x2B3EF6 sub     edx, eax
//   0x2B3EF8 mov     r8d, esi
//   0x2B3EFB mov     r9d, ecx
//   0x2B3EFE cmp     edx, ecx
//   0x2B3F00 jl      loc_2B40F0
//   0x2B3F06 cmp     edi, r8d
//   0x2B3F09 jl      loc_2B4010
//   0x2B3F0F mov     rcx, [r12+18h]
//   0x2B3F14 mov     esi, [rcx+0E0h]
//   0x2B3F1A cmp     r9d, esi
//   0x2B3F1D mov     eax, esi
//   0x2B3F1F mov     esi, [rcx+0E8h]
//   0x2B3F25 cmovge  eax, r9d
//   0x2B3F29 cmp     edx, esi
//   0x2B3F2B cmovg   edx, esi
//   0x2B3F2E cmp     eax, edx
//   0x2B3F30 jg      short loc_2B3F52
//   0x2B3F32 mov     eax, [rcx+0E4h]
//   0x2B3F38 mov     edx, [rcx+0ECh]
//   0x2B3F3E cmp     r8d, eax
//   0x2B3F41 cmovge  eax, r8d
//   0x2B3F45 cmp     edi, edx
//   0x2B3F47 cmovle  edx, edi
//   0x2B3F4A cmp     eax, edx
//   0x2B3F4C jle     loc_2B4080
//   0x2B3F52 pop     rbx
//   0x2B3F53 xor     eax, eax
//   0x2B3F55 pop     rbp
//   0x2B3F56 pop     r12
//   0x2B3F58 pop     r13
//   0x2B3F5A pop     r14
//   0x2B3F5C retn
//   0x2B3F5D align 20h
//   0x2B3F60 pxor    xmm1, xmm1
//   0x2B3F64 sub     edi, esi
//   0x2B3F66 movq    xmm2, qword ptr cs:xmmword_5DCC50
//   0x2B3F6E movsd   xmm6, cs:qword_5DBE10
//   0x2B3F76 cvtsi2sd xmm1, ecx
//   0x2B3F7A subsd   xmm1, qword ptr [rax+8]
//   0x2B3F7F movapd  xmm5, xmm2
//   0x2B3F83 mulsd   xmm1, xmm0
//   0x2B3F87 cvttsd2si r9d, xmm1
//   0x2B3F8C pxor    xmm1, xmm1
//   0x2B3F90 cvtsi2sd xmm1, esi
//   0x2B3F94 subsd   xmm1, qword ptr [rax+10h]
//   0x2B3F99 mulsd   xmm1, xmm0
//   0x2B3F9D cvttsd2si r8d, xmm1
//   0x2B3FA2 pxor    xmm1, xmm1
//   0x2B3FA6 cvtsi2sd xmm1, edi
//   0x2B3FAA mulsd   xmm1, xmm0
//   0x2B3FAE movapd  xmm4, xmm1
//   0x2B3FB2 andpd   xmm4, xmm2
//   0x2B3FB6 ucomisd xmm6, xmm4
//   0x2B3FBA ja      loc_2B4050
//   0x2B3FC0 pxor    xmm4, xmm4
//   0x2B3FC4 sub     edx, ecx
//   0x2B3FC6 cvtsi2sd xmm4, r8d
//   0x2B3FCB addsd   xmm4, xmm1
//   0x2B3FCF pxor    xmm1, xmm1
//   0x2B3FD3 cvtsi2sd xmm1, edx
//   0x2B3FD7 cvttsd2si edi, xmm4
//   0x2B3FDB mulsd   xmm0, xmm1
//   0x2B3FDF movapd  xmm1, xmm0
//   0x2B3FE3 andpd   xmm1, xmm2
//   0x2B3FE7 ucomisd xmm6, xmm1
//   0x2B3FEB ja      short loc_2B4020
//   0x2B3FED pxor    xmm1, xmm1
//   0x2B3FF1 cvtsi2sd xmm1, r9d
//   0x2B3FF6 addsd   xmm1, xmm0
//   0x2B3FFA cvttsd2si edx, xmm1
//   0x2B3FFE cmp     r9d, edx
//   0x2B4001 jg      loc_2B40D0
//   0x2B4007 cmp     r8d, edi
//   0x2B400A jle     loc_2B3F0F
//   0x2B4010 mov     eax, r8d
//   0x2B4013 mov     r8d, edi
//   0x2B4016 mov     edi, eax
//   0x2B4018 jmp     loc_2B3F0F
//   0x2B401D align 20h
//   0x2B4020 cvttsd2si rax, xmm0
//   0x2B4025 pxor    xmm1, xmm1
//   0x2B4029 movapd  xmm4, xmm0
//   0x2B402D andnpd  xmm2, xmm0
//   0x2B4031 cvtsi2sd xmm1, rax
//   0x2B4036 cmpnlesd xmm4, xmm1
//   0x2B403B andpd   xmm4, xmm3
//   0x2B403F addsd   xmm1, xmm4
//   0x2B4043 movapd  xmm0, xmm1
//   0x2B4047 orpd    xmm0, xmm2
//   0x2B404B jmp     short loc_2B3FED
//   0x2B404D align 10h
//   0x2B4050 cvttsd2si rax, xmm1
//   0x2B4055 pxor    xmm4, xmm4
//   0x2B4059 movapd  xmm7, xmm1
//   0x2B405D andnpd  xmm5, xmm1
//   0x2B4061 cvtsi2sd xmm4, rax
//   0x2B4066 cmpnlesd xmm7, xmm4
//   0x2B406B andpd   xmm7, xmm3
//   0x2B406F addsd   xmm4, xmm7
//   0x2B4073 orpd    xmm4, xmm5
//   0x2B4077 movapd  xmm1, xmm4
//   0x2B407B jmp     loc_2B3FC0
//   0x2B4080 mov     rbx, [r12+10h]
//   0x2B4085 mov     rdx, [rbx+8]
//   0x2B4089 mov     rax, [rbx]
//   0x2B408C lea     rcx, [rdx+rdx*4]
//   0x2B4090 lea     rcx, [rax+rcx*4]
//   0x2B4094 cmp     rax, rcx
//   0x2B4097 jnz     short loc_2B40A9
//   0x2B4099 jmp     short loc_2B4108
//   0x2B409B align 20h
//   0x2B40A0 add     rax, 14h
//   0x2B40A4 cmp     rcx, rax
//   0x2B40A7 jz      short loc_2B4108
//   0x2B40A9 cmp     byte ptr [rax], 0
//   0x2B40AC jz      short loc_2B40A0
//   0x2B40AE cmp     ebp, [rax+4]
//   0x2B40B1 jnz     short loc_2B40A0
//   0x2B40B3 cmp     rcx, rax
//   0x2B40B6 jz      short loc_2B4108
//   0x2B40B8 mov     rdi, rbx
//   0x2B40BB call    sub_2B38C0
//   0x2B40C0 pop     rbx
//   0x2B40C1 xor     eax, eax
//   0x2B40C3 pop     rbp
//   0x2B40C4 pop     r12
//   0x2B40C6 pop     r13
//   0x2B40C8 pop     r14
//   0x2B40CA retn
//   0x2B40CB align 10h
//   0x2B40D0 mov     eax, r9d
//   0x2B40D3 mov     r9d, edx
//   0x2B40D6 mov     edx, eax
//   0x2B40D8 cmp     r8d, edi
//   0x2B40DB jle     loc_2B3F0F
//   0x2B40E1 jmp     loc_2B4010
//   0x2B40E6 align 10h
//   0x2B40F0 mov     r9d, edx
//   0x2B40F3 mov     edx, ecx
//   0x2B40F5 cmp     edi, r8d
//   0x2B40F8 jge     loc_2B3F0F
//   0x2B40FE jmp     loc_2B4010
//   0x2B4103 align 8
//   0x2B4108 mov     r12, [rbx+10h]
//   0x2B410C add     rdx, 1
//   0x2B4110 cmp     r12, rdx
//   0x2B4113 jb      short loc_2B4138
//   0x2B4115 mov     byte ptr [rcx], 1
//   0x2B4118 mov     [rcx+4], ebp
//   0x2B411B mov     qword ptr [rcx+8], 0FFFFFFFFFFFFFFFFh
//   0x2B4123 mov     dword ptr [rcx+10h], 0FFFFFFFFh
//   0x2B412A add     qword ptr [rbx+8], 1
//   0x2B412F jmp     short loc_2B40B8
//   0x2B4131 align 8
//   0x2B4138 mov     ecx, 14h
//   0x2B413D mov     rdi, rbx
//   0x2B4140 xor     esi, esi
//   0x2B4142 call    _qvector_reserve
//   0x2B4147 mov     rcx, [rbx+8]
//   0x2B414B mov     r14, [rbx+10h]
//   0x2B414F mov     [rbx+10h], r12
//   0x2B4153 mov     rdi, [rbx]
//   0x2B4156 mov     r13, rax
//   0x2B4159 sub     rcx, 1
//   0x2B415D js      short loc_2B419F
//   0x2B415F mov     rdx, rax
//   0x2B4162 nop     word ptr [rax+rax+00000000h]
//   0x2B416D nop     word ptr [rax+rax+00000000h]
//   0x2B4178 nop     dword ptr [rax+rax+00000000h]
//   0x2B4180 movdqu  xmm0, xmmword ptr [rdi]
//   0x2B4184 add     rdx, 14h
//   0x2B4188 add     rdi, 14h
//   0x2B418C movups  xmmword ptr [rdx-14h], xmm0
//   0x2B4190 mov     esi, [rdi-4]
//   0x2B4193 mov     [rdx-4], esi
//   0x2B4196 sub     rcx, 1
//   0x2B419A jnb     short loc_2B4180
//   0x2B419C mov     rdi, [rbx]
//   0x2B419F call    _qfree
//   0x2B41A4 mov     rax, [rbx+8]
//   0x2B41A8 mov     [rbx], r13
//   0x2B41AB mov     [rbx+10h], r14
//   0x2B41AF lea     rax, [rax+rax*4]
//   0x2B41B3 lea     rcx, [r13+rax*4+0]
//   0x2B41B8 jmp     loc_2B4115
// ============================================================

void _ZN13GraphRenderer24update_pending_selectionEbE16point_selector_t_::vfunc_2(/* signature unknown */)
{
    // see disassembly above
}

