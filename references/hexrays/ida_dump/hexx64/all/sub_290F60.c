// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x290F60
// Name:           sub_290F60
// Function size:  951 bytes (245 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x290F60 push    r15
//   0x290F62 push    r14
//   0x290F64 push    r13
//   0x290F66 push    r12
//   0x290F68 push    rbp
//   0x290F69 mov     rbp, rdi
//   0x290F6C push    rbx
//   0x290F6D sub     rsp, 28h
//   0x290F71 mov     rdx, [rdi+18h]
//   0x290F75 mov     rax, [rdi+10h]
//   0x290F79 mov     rbx, fs:28h
//   0x290F82 mov     [rsp+58h+var_40], rbx
//   0x290F87 mov     rbx, rsi
//   0x290F8A lea     r12, [rsp+58h+var_50]
//   0x290F8F mov     r15, [rax+rdx*8-8]
//   0x290F94 mov     rsi, r12
//   0x290F97 mov     [rsp+58h+var_50], 0
//   0x290FA0 mov     rdx, rbx
//   0x290FA3 call    sub_284900
//   0x290FA8 test    al, al
//   0x290FAA jnz     short loc_290FF3
//   0x290FAC cmp     dword ptr [r15+8], 10h
//   0x290FB1 jnz     loc_291180
//   0x290FB7 cmp     [r15+18h], rbx
//   0x290FBB jz      loc_291180
//   0x290FC1 mov     rdi, [rbx+30h]
//   0x290FC5 mov     esi, 2
//   0x290FCA call    _get_tinfo_property
//   0x290FCF and     eax, 3Fh
//   0x290FD2 cmp     al, 1
//   0x290FD4 jz      loc_291180
//   0x290FDA mov     rax, [r15+20h]
//   0x290FDE lea     rsi, [rax+30h]
//   0x290FE2 cmp     rax, rbx
//   0x290FE5 jz      loc_2912A8
//   0x290FEB mov     rdi, r12
//   0x290FEE call    _copy_tinfo_t
//   0x290FF3 mov     rsi, [rbx+30h]
//   0x290FF7 xor     edx, edx
//   0x290FF9 xor     edi, edi
//   0x290FFB call    _get_tinfo_size
//   0x291000 mov     rsi, [rsp+58h+var_50]
//   0x291005 xor     edx, edx
//   0x291007 xor     edi, edi
//   0x291009 mov     r13, rax
//   0x29100C call    _get_tinfo_size
//   0x291011 cmp     dword ptr [r15+8], 39h ; '9'
//   0x291016 mov     r14, rax
//   0x291019 jnz     short loc_291070
//   0x29101B cmp     rbx, [r15+18h]
//   0x29101F jz      short loc_291070
//   0x291021 xor     edx, edx
//   0x291023 mov     rsi, rbx
//   0x291026 mov     rdi, r15
//   0x291029 call    sub_284360
//   0x29102E movzx   r15d, byte ptr [rax+3Ch]
//   0x291033 test    r15b, r15b
//   0x291036 jz      short loc_291070
//   0x291038 lea     r14, [rbx+30h]
//   0x29103C mov     rdx, rbx
//   0x29103F mov     rsi, rbx
//   0x291042 mov     rdi, rbp
//   0x291045 mov     rcx, r14
//   0x291048 call    sub_28FF70
//   0x29104D test    al, al
//   0x29104F jnz     loc_291180
//   0x291055 cmp     dword ptr [rbx+8], 30h ; '0'
//   0x291059 jz      loc_291210
//   0x29105F mov     rsi, r12
//   0x291062 mov     rdi, rbx
//   0x291065 call    sub_244E70
//   0x29106A jmp     loc_291183
//   0x29106F align 10h
//   0x291070 mov     rax, [rbp+48h]
//   0x291074 mov     edx, [rbx+8]
//   0x291077 mov     rsi, [rax+70h]
//   0x29107B cmp     edx, 33h ; '3'
//   0x29107E jnz     loc_2911B8
//   0x291084 mov     ecx, [rsi+54h]
//   0x291087 mov     rax, rbx
//   0x29108A jmp     short loc_2910B0
//   0x29108C align 20h
//   0x2910A0 mov     rax, [rax+18h]
//   0x2910A4 mov     edx, [rax+8]
//   0x2910A7 cmp     edx, 33h ; '3'
//   0x2910AA jnz     loc_2911B8
//   0x2910B0 cmp     [rax+28h], ecx
//   0x2910B3 jz      short loc_2910A0
//   0x2910B5 mov     rdi, [rbp+18h]
//   0x2910B9 mov     esi, [rsi+54h]
//   0x2910BC mov     r8, [rbp+10h]
//   0x2910C0 mov     eax, edi
//   0x2910C2 sub     eax, 1
//   0x2910C5 js      loc_2912F4
//   0x2910CB mov     edx, eax
//   0x2910CD lea     rcx, [r8+rdx*8]
//   0x2910D1 jmp     short loc_2910E9
//   0x2910D3 align 8
//   0x2910D8 cmp     esi, [rdx+28h]
//   0x2910DB jnz     short loc_2910F2
//   0x2910DD sub     eax, 1
//   0x2910E0 sub     rcx, 8
//   0x2910E4 cmp     eax, 0FFFFFFFFh
//   0x2910E7 jz      short loc_291103
//   0x2910E9 mov     rdx, [rcx]
//   0x2910EC cmp     dword ptr [rdx+8], 33h ; '3'
//   0x2910F0 jz      short loc_2910D8
//   0x2910F2 movsxd  rdx, eax
//   0x2910F5 mov     rcx, [r8+rdx*8]
//   0x2910F9 cmp     dword ptr [rcx+8], 39h ; '9'
//   0x2910FD jz      loc_2912B8
//   0x291103 cmp     r13d, 0FFFFFFFFh
//   0x291107 jz      loc_2911F0
//   0x29110D cmp     r14d, 0FFFFFFFFh
//   0x291111 jz      short loc_291180
//   0x291113 mov     rdi, [rbp+48h]
//   0x291117 lea     rcx, [rbx+30h]
//   0x29111B mov     rdx, r12
//   0x29111E mov     rsi, rbx
//   0x291121 call    sub_280B80
//   0x291126 test    al, al
//   0x291128 jz      short loc_291180
//   0x29112A mov     rdi, [rbx+30h]
//   0x29112E mov     esi, 2
//   0x291133 call    _get_tinfo_property
//   0x291138 and     eax, 0Fh
//   0x29113B cmp     al, 0Ah
//   0x29113D jnz     loc_2911D0
//   0x291143 cmp     dword ptr [rbx+8], 30h ; '0'
//   0x291147 jz      loc_2911D0
//   0x29114D mov     rdi, [rsp+58h+var_50]
//   0x291152 mov     esi, 9
//   0x291157 mov     [rsp+58h+var_48], 0
//   0x291160 call    _get_tinfo_property
//   0x291165 mov     [rsp+58h+var_48], rax
//   0x29116A test    al, 0Eh
//   0x29116C jnz     short loc_2911C6
//   0x29116E test    al, 30h
//   0x291170 jz      short loc_2911C6
//   0x291172 lea     rdi, [rsp+58h+var_48]
//   0x291177 call    _clear_tinfo_t
//   0x29117C nop     dword ptr [rax+00h]
//   0x291180 xor     r15d, r15d
//   0x291183 mov     rdi, r12
//   0x291186 call    _clear_tinfo_t
//   0x29118B mov     rax, [rsp+58h+var_40]
//   0x291190 sub     rax, fs:28h
//   0x291199 jnz     loc_291302
//   0x29119F add     rsp, 28h
//   0x2911A3 mov     eax, r15d
//   0x2911A6 pop     rbx
//   0x2911A7 pop     rbp
//   0x2911A8 pop     r12
//   0x2911AA pop     r13
//   0x2911AC pop     r14
//   0x2911AE pop     r15
//   0x2911B0 retn
//   0x2911B1 align 8
//   0x2911B8 cmp     edx, 30h ; '0'
//   0x2911BB jz      loc_291103
//   0x2911C1 jmp     loc_2910B5
//   0x2911C6 lea     rdi, [rsp+58h+var_48]
//   0x2911CB call    _clear_tinfo_t
//   0x2911D0 cmp     r13d, r14d
//   0x2911D3 jnz     short loc_2911F0
//   0x2911D5 mov     rdi, r12
//   0x2911D8 call    sub_32DA30
//   0x2911DD test    al, al
//   0x2911DF jnz     short loc_291180
//   0x2911E1 nop     word ptr [rax+rax+00000000h]
//   0x2911EC nop     dword ptr [rax+00h]
//   0x2911F0 mov     rsi, [rbp+48h]
//   0x2911F4 mov     rdx, r12
//   0x2911F7 mov     rdi, rbx
//   0x2911FA call    sub_246B40
//   0x2911FF mov     r15d, eax
//   0x291202 jmp     loc_291183
//   0x291207 align 10h
//   0x291210 mov     rax, [rbx+18h]
//   0x291214 xor     edx, edx
//   0x291216 xor     edi, edi
//   0x291218 mov     rsi, [rax+30h]
//   0x29121C call    _get_tinfo_size
//   0x291221 movsxd  r13, r13d
//   0x291224 cmp     r13, rax
//   0x291227 jnz     loc_29105F
//   0x29122D mov     rax, [rbx+18h]
//   0x291231 mov     esi, 2
//   0x291236 mov     rdi, [rax+30h]
//   0x29123A call    _get_tinfo_property
//   0x29123F and     eax, 0Fh
//   0x291242 mov     rdi, [rbx+30h]
//   0x291246 mov     esi, 2
//   0x29124B cmp     al, 9
//   0x29124D setz    bpl
//   0x291251 call    _get_tinfo_property
//   0x291256 and     eax, 0Fh
//   0x291259 cmp     al, 9
//   0x29125B setz    al
//   0x29125E cmp     bpl, al
//   0x291261 jnz     loc_29105F
//   0x291267 mov     rax, [rbx+18h]
//   0x29126B mov     esi, 3
//   0x291270 mov     rdi, [rax+30h]
//   0x291274 call    _get_tinfo_property
//   0x291279 mov     rdi, [rbx+30h]
//   0x29127D mov     esi, 3
//   0x291282 mov     rbp, rax
//   0x291285 call    _get_tinfo_property
//   0x29128A cmp     ebp, eax
//   0x29128C jnz     loc_29105F
//   0x291292 mov     rsi, r12
//   0x291295 mov     rdi, r14
//   0x291298 call    _copy_tinfo_t
//   0x29129D jmp     loc_291183
//   0x2912A2 align 8
//   0x2912A8 mov     rax, [r15+28h]
//   0x2912AC lea     rsi, [rax+30h]
//   0x2912B0 jmp     loc_290FEB
//   0x2912B5 align 8
//   0x2912B8 sub     rdi, 1
//   0x2912BC mov     rsi, [rcx+18h]
//   0x2912C0 mov     rcx, rbx
//   0x2912C3 cmp     rdx, rdi
//   0x2912C6 jz      short loc_2912D1
//   0x2912C8 add     eax, 1
//   0x2912CB cdqe
//   0x2912CD mov     rcx, [r8+rax*8]
//   0x2912D1 cmp     rsi, rcx
//   0x2912D4 jnz     loc_291103
//   0x2912DA xor     edx, edx
//   0x2912DC mov     rsi, r12
//   0x2912DF mov     rdi, rbx
//   0x2912E2 call    sub_2801E0
//   0x2912E7 test    al, al
//   0x2912E9 jnz     loc_291103
//   0x2912EF jmp     loc_291180
//   0x2912F4 cmp     eax, 0FFFFFFFFh
//   0x2912F7 jz      loc_291103
//   0x2912FD jmp     loc_2910F2
//   0x291302 call    ___stack_chk_fail
//   0x291307 mov     rbx, rax
//   0x29130A jmp     loc_4CA12
//   0x29130F mov     rbx, rax
//   0x291312 jmp     loc_4CA1C
// ============================================================

void sub_290F60(/* signature unknown */)
{
    // see disassembly above
}

