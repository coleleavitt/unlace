// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x1CDFB0
// Name:           sub_1CDFB0
// Function size:  1174 bytes (243 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x1CDFB0 push    rbp
//   0x1CDFB1 mov     rbp, rsp
//   0x1CDFB4 push    r15
//   0x1CDFB6 push    r14
//   0x1CDFB8 mov     r14, rdi
//   0x1CDFBB push    r13
//   0x1CDFBD mov     r13, r9
//   0x1CDFC0 push    r12
//   0x1CDFC2 mov     r12d, r8d
//   0x1CDFC5 push    rbx
//   0x1CDFC6 sub     rsp, 0A8h
//   0x1CDFCD mov     [rbp+var_88], rsi
//   0x1CDFD4 mov     [rbp+var_80], rdx
//   0x1CDFD8 mov     [rbp+var_78], rcx
//   0x1CDFDC mov     rsi, fs:28h
//   0x1CDFE5 mov     [rbp+var_38], rsi
//   0x1CDFE9 mov     rsi, rcx
//   0x1CDFEC call    sub_3EFB70
//   0x1CDFF1 test    al, al
//   0x1CDFF3 jnz     short loc_1CE020
//   0x1CDFF5 xor     ebx, ebx
//   0x1CDFF7 mov     rax, [rbp+var_38]
//   0x1CDFFB sub     rax, fs:28h
//   0x1CE004 jnz     loc_1CE3FB
//   0x1CE00A lea     rsp, [rbp-28h]
//   0x1CE00E mov     eax, ebx
//   0x1CE010 pop     rbx
//   0x1CE011 pop     r12
//   0x1CE013 pop     r13
//   0x1CE015 pop     r14
//   0x1CE017 pop     r15
//   0x1CE019 pop     rbp
//   0x1CE01A retn
//   0x1CE01B align 20h
//   0x1CE020 mov     ebx, eax
//   0x1CE022 mov     rax, [r14+8]
//   0x1CE026 mov     r11, [r14+58h]
//   0x1CE02A mov     r15, [rax+70h]
//   0x1CE02E mov     rax, [r14+60h]
//   0x1CE032 lea     rax, [rax+rax*4]
//   0x1CE036 shl     rax, 4
//   0x1CE03A add     rax, r11
//   0x1CE03D mov     [rbp+var_98], rax
//   0x1CE044 cmp     rax, r11
//   0x1CE047 jz      short loc_1CDFF7
//   0x1CE049 mov     [rbp+var_90], 0
//   0x1CE054 mov     eax, [r11+48h]
//   0x1CE058 test    al, 2
//   0x1CE05A jz      loc_1CE140
//   0x1CE060 test    r12b, r12b
//   0x1CE063 jz      loc_1CE332
//   0x1CE069 cmp     byte ptr [r13+0], 0
//   0x1CE06E jz      loc_1CE400
//   0x1CE074 cmp     dword ptr [r11], 3
//   0x1CE078 jnz     loc_1CDFF5
//   0x1CE07E mov     rax, [r15]
//   0x1CE081 movzx   esi, word ptr [r11+8]
//   0x1CE086 mov     rdi, r15
//   0x1CE089 mov     [rbp+var_B0], r11
//   0x1CE090 call    qword ptr [rax+0A8h]
//   0x1CE096 movd    xmm0, dword ptr [r15+54h]
//   0x1CE09C lea     rdi, [rbp+var_50]
//   0x1CE0A0 xor     r9d, r9d
//   0x1CE0A3 mov     edx, eax
//   0x1CE0A5 mov     rax, [r14]
//   0x1CE0A8 mov     [rbp+var_A8], rdi
//   0x1CE0AF mov     r8, rdi
//   0x1CE0B2 movd    xmm2, edx
//   0x1CE0B6 mov     rdi, r14
//   0x1CE0B9 mov     rsi, 200000001h
//   0x1CE0C3 punpckldq xmm0, xmm2
//   0x1CE0C7 mov     rax, [rax+40h]
//   0x1CE0CB mov     [rbp+var_50], 1
//   0x1CE0D3 movq    [rbp+var_50+4], xmm0
//   0x1CE0D8 mov     edx, [r15+40h]
//   0x1CE0DC mov     [rbp+var_60], rsi
//   0x1CE0E0 lea     rsi, [rbp+var_60]
//   0x1CE0E4 mov     [rbp+var_58], edx
//   0x1CE0E7 mov     rcx, rsi
//   0x1CE0EA mov     rdx, r13
//   0x1CE0ED mov     [rbp+var_A0], rsi
//   0x1CE0F4 mov     esi, 1
//   0x1CE0F9 call    rax
//   0x1CE0FB mov     rdi, [rbp+var_A0]
//   0x1CE102 call    sub_1188E0
//   0x1CE107 mov     rdi, [rbp+var_A8]
//   0x1CE10E call    sub_1188E0
//   0x1CE113 mov     r11, [rbp+var_B0]
//   0x1CE11A add     r11, 50h ; 'P'
//   0x1CE11E cmp     [rbp+var_98], r11
//   0x1CE125 jz      loc_1CDFF7
//   0x1CE12B mov     eax, [r11+48h]
//   0x1CE12F test    al, 2
//   0x1CE131 jnz     loc_1CE069
//   0x1CE137 nop     word ptr [rax+rax+00000000h]
//   0x1CE140 cmp     [rbp+var_90], 0
//   0x1CE148 jz      loc_1CE350
//   0x1CE14E cmp     [rbp+var_90], 1
//   0x1CE156 jnz     loc_1CDFF5
//   0x1CE15C mov     rdi, [rbp+var_78]
//   0x1CE160 test    byte ptr [rdi+10h], 2Ah
//   0x1CE164 jnz     loc_1CDFF5
//   0x1CE16A mov     dword ptr [rbp+var_B0], 1
//   0x1CE174 mov     ecx, [rdi+8]
//   0x1CE177 mov     rdi, [rbp+var_80]
//   0x1CE17B lea     edx, [rcx-16h]
//   0x1CE17E mov     dword ptr [rbp+var_A0], ecx
//   0x1CE184 mov     [rbp+var_C0], rdi
//   0x1CE18B cmp     edx, 2
//   0x1CE18E ja      loc_1CE398
//   0x1CE194 test    al, 4
//   0x1CE196 jz      loc_1CE3C8
//   0x1CE19C cmp     dword ptr [r11], 3
//   0x1CE1A0 jnz     loc_1CDFF5
//   0x1CE1A6 mov     rax, [r15]
//   0x1CE1A9 movzx   esi, word ptr [r11+8]
//   0x1CE1AE mov     [rbp+var_A8], r11
//   0x1CE1B5 mov     rdi, r15
//   0x1CE1B8 call    qword ptr [rax+0A8h]
//   0x1CE1BE mov     edi, 50h ; 'P'
//   0x1CE1C3 mov     dword ptr [rbp+var_A0], eax
//   0x1CE1C9 call    j__qalloc_or_throw
//   0x1CE1CE mov     rsi, [r14+40h]
//   0x1CE1D2 mov     rdx, rax
//   0x1CE1D5 mov     [rbp+var_B8], rax
//   0x1CE1DC mov     rax, 0FFFFFFFF00000000h
//   0x1CE1E6 mov     [rdx+20h], rax
//   0x1CE1EA mov     rdi, rdx
//   0x1CE1ED mov     qword ptr [rdx+28h], 0
//   0x1CE1F5 mov     [rdx+30h], rax
//   0x1CE1F9 mov     qword ptr [rdx+38h], 0
//   0x1CE201 mov     [rdx+40h], rax
//   0x1CE205 mov     qword ptr [rdx+48h], 0
//   0x1CE20D call    sub_32B5A0
//   0x1CE212 mov     r11, [rbp+var_A8]
//   0x1CE219 mov     esi, 2
//   0x1CE21E mov     rdi, [r11+40h]
//   0x1CE222 mov     [rbp+var_D0], r11
//   0x1CE229 call    _get_tinfo_property
//   0x1CE22E sub     rsp, 8
//   0x1CE232 lea     rsi, [rbp+var_50]
//   0x1CE236 mov     rdi, 0FFFFFFFF00000000h
//   0x1CE240 mov     [rbp+var_50], rdi
//   0x1CE244 and     eax, 0Fh
//   0x1CE247 mov     r9, rsi
//   0x1CE24A lea     rcx, [rbp+var_70]
//   0x1CE24E mov     [rbp+var_48], 0
//   0x1CE256 movd    xmm0, dword ptr [r15+54h]
//   0x1CE25C cmp     al, 9
//   0x1CE25E mov     rdi, 200000001h
//   0x1CE268 movd    xmm1, dword ptr [rbp+var_A0]
//   0x1CE270 mov     [rbp+var_60], 1
//   0x1CE278 setz    al
//   0x1CE27B movzx   eax, al
//   0x1CE27E mov     [rbp+var_70], rdi
//   0x1CE282 mov     rdi, r14
//   0x1CE285 punpckldq xmm0, xmm1
//   0x1CE289 movq    [rbp+var_60+4], xmm0
//   0x1CE28E mov     edx, [r15+40h]
//   0x1CE292 mov     [rbp+var_68], edx
//   0x1CE295 lea     rdx, [rbp+var_60]
//   0x1CE299 push    rax
//   0x1CE29A mov     r8, rdx
//   0x1CE29D mov     [rbp+var_A8], rsi
//   0x1CE2A4 mov     rsi, [rbp+var_B8]
//   0x1CE2AB mov     [rbp+var_A0], rdx
//   0x1CE2B2 mov     edx, 2
//   0x1CE2B7 mov     [rbp+var_C8], rcx
//   0x1CE2BE call    sub_3EF2E0
//   0x1CE2C3 mov     rdi, [rbp+var_C8]
//   0x1CE2CA pop     rax
//   0x1CE2CB pop     rdx
//   0x1CE2CC call    sub_1188E0
//   0x1CE2D1 mov     rdi, [rbp+var_A0]
//   0x1CE2D8 call    sub_1188E0
//   0x1CE2DD mov     rdi, [rbp+var_A8]
//   0x1CE2E4 call    sub_1188E0
//   0x1CE2E9 mov     rax, [rbp+var_B8]
//   0x1CE2F0 mov     edx, dword ptr [rbp+var_B0]
//   0x1CE2F6 mov     rdi, [rbp+var_C0]
//   0x1CE2FD mov     [rax+44h], edx
//   0x1CE300 call    sub_1188E0
//   0x1CE305 mov     rax, [rbp+var_C0]
//   0x1CE30C mov     rdi, [rbp+var_B8]
//   0x1CE313 mov     edx, dword ptr [rbp+var_B0]
//   0x1CE319 mov     r11, [rbp+var_D0]
//   0x1CE320 mov     byte ptr [rax], 4
//   0x1CE323 mov     [rax+8], rdi
//   0x1CE327 mov     [rax+4], edx
//   0x1CE32A add     [rbp+var_90], 1
//   0x1CE332 add     r11, 50h ; 'P'
//   0x1CE336 cmp     [rbp+var_98], r11
//   0x1CE33D jnz     loc_1CE054
//   0x1CE343 jmp     loc_1CDFF7
//   0x1CE348 align 10h
//   0x1CE350 mov     rax, [rbp+var_78]
//   0x1CE354 test    byte ptr [rax+10h], 8
//   0x1CE358 jnz     loc_1CDFF5
//   0x1CE35E movzx   edi, byte ptr [rax+0Ch]
//   0x1CE362 mov     [rbp+var_A0], r11
//   0x1CE369 call    _get_dtype_size
//   0x1CE36E mov     r11, [rbp+var_A0]
//   0x1CE375 mov     rcx, [rbp+var_88]
//   0x1CE37C mov     dword ptr [rbp+var_B0], eax
//   0x1CE382 mov     [rbp+var_C0], rcx
//   0x1CE389 mov     eax, [r11+48h]
//   0x1CE38D jmp     loc_1CE194
//   0x1CE392 align 8
//   0x1CE398 mov     rax, [rbp+var_78]
//   0x1CE39C mov     [rbp+var_A0], r11
//   0x1CE3A3 movzx   edi, byte ptr [rax+0Ch]
//   0x1CE3A7 call    _get_dtype_size
//   0x1CE3AC mov     r11, [rbp+var_A0]
//   0x1CE3B3 mov     dword ptr [rbp+var_B0], eax
//   0x1CE3B9 mov     eax, [r11+48h]
//   0x1CE3BD jmp     loc_1CE194
//   0x1CE3C2 align 8
//   0x1CE3C8 mov     ecx, dword ptr [rbp+var_B0]
//   0x1CE3CE mov     rsi, [rbp+var_C0]
//   0x1CE3D5 mov     rdx, r11
//   0x1CE3D8 mov     rdi, r15
//   0x1CE3DB mov     [rbp+var_A0], r11
//   0x1CE3E2 call    sub_1CDC50
//   0x1CE3E7 mov     r11, [rbp+var_A0]
//   0x1CE3EE test    al, al
//   0x1CE3F0 jnz     loc_1CE32A
//   0x1CE3F6 jmp     loc_1CDFF5
//   0x1CE3FB call    ___stack_chk_fail
//   0x1CE400 mov     rax, cs:under_debugger_ptr
//   0x1CE407 cmp     byte ptr [rax], 0
//   0x1CE40A jnz     loc_408CF
//   0x1CE410 mov     rax, [rbp+var_38]
//   0x1CE414 sub     rax, fs:28h
//   0x1CE41D jnz     short loc_1CE429
//   0x1CE41F mov     edi, 0CE3Eh
//   0x1CE424 call    sub_37DDE0
//   0x1CE429 call    ___stack_chk_fail
//   0x1CE42E mov     rbx, rax
//   0x1CE431 jmp     loc_408D1
//   0x1CE436 mov     rbx, rax
//   0x1CE439 jmp     loc_40904
//   0x1CE43E mov     rbx, rax
//   0x1CE441 jmp     loc_40945
// ============================================================

void sub_1CDFB0(/* signature unknown */)
{
    // see disassembly above
}

