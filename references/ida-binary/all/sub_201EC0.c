// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x201EC0
// Name:           sub_201EC0
// Function size:  1990 bytes (417 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x201EC0 push    r15
//   0x201EC2 pxor    xmm0, xmm0
//   0x201EC6 push    r14
//   0x201EC8 lea     r14, s1
//   0x201ECF push    r13
//   0x201ED1 push    r12
//   0x201ED3 mov     r12, rdi
//   0x201ED6 push    rbp
//   0x201ED7 mov     rbp, rsi
//   0x201EDA push    rbx
//   0x201EDB sub     rsp, 128h
//   0x201EE2 cmp     qword ptr [rdx+28h], 0
//   0x201EE7 mov     rbx, fs:28h
//   0x201EF0 mov     [rsp+158h+var_40], rbx
//   0x201EF8 mov     rbx, rdx
//   0x201EFB movups  [rsp+158h+var_130], xmm0
//   0x201F00 mov     [rsp+158h+var_138], 0
//   0x201F09 jz      short loc_201F0F
//   0x201F0B mov     r14, [rbx+20h]
//   0x201F0F pxor    xmm0, xmm0
//   0x201F13 lea     r13, [rsp+158h+var_D8]
//   0x201F1B mov     qword ptr [rsp+158h+var_D8], 0
//   0x201F27 movups  [rsp+158h+var_D8+8], xmm0
//   0x201F2F test    r14, r14
//   0x201F32 jz      short loc_201F8F
//   0x201F34 mov     rdi, r14; s
//   0x201F37 lea     r13, [rsp+158h+var_D8]
//   0x201F3F call    _strlen
//   0x201F44 mov     ecx, 1
//   0x201F49 xor     esi, esi
//   0x201F4B mov     rdi, r13
//   0x201F4E lea     rdx, [rax+1]
//   0x201F52 mov     r15, rax
//   0x201F55 mov     [rsp+158h+var_150], rdx
//   0x201F5A call    _qvector_reserve
//   0x201F5F mov     rdx, [rsp+158h+var_150]
//   0x201F64 mov     rdi, rax; dest
//   0x201F67 mov     rsi, r14; src
//   0x201F6A mov     qword ptr [rsp+158h+var_D8], rax
//   0x201F72 mov     qword ptr [rsp+158h+var_D8+8], rdx
//   0x201F7A mov     rdx, r15; n
//   0x201F7D call    _memmove
//   0x201F82 mov     rax, qword ptr [rsp+158h+var_D8]
//   0x201F8A mov     byte ptr [rax+r15], 0
//   0x201F8F lea     r14, [rsp+158h+var_138]
//   0x201F94 mov     ecx, 1
//   0x201F99 mov     edx, 1
//   0x201F9E mov     rsi, r13
//   0x201FA1 mov     rdi, r14
//   0x201FA4 call    sub_2D11B0
//   0x201FA9 mov     rdi, qword ptr [rsp+158h+var_D8]
//   0x201FB1 test    rdi, rdi
//   0x201FB4 jz      short loc_201FC7
//   0x201FB6 mov     qword ptr [rsp+158h+var_D8+8], 0
//   0x201FC2 call    _qfree
//   0x201FC7 mov     rsi, r14
//   0x201FCA mov     rdi, rbp
//   0x201FCD call    sub_2D4060
//   0x201FD2 mov     rdi, r12
//   0x201FD5 call    sub_1F7CC0
//   0x201FDA mov     r14, [rbx+20h]
//   0x201FDE pxor    xmm0, xmm0
//   0x201FE2 add     eax, 1
//   0x201FE5 mov     [rsp+158h+var_E0], 1
//   0x201FEA mov     [rsp+158h+var_118], eax
//   0x201FEE mov     [rsp+158h+var_110], 0
//   0x201FF7 mov     [rsp+158h+var_F8], 0
//   0x202000 movaps  [rsp+158h+var_108], xmm0
//   0x202005 movups  [rsp+158h+var_F0], xmm0
//   0x20200A test    r14, r14
//   0x20200D jz      short loc_20207C
//   0x20200F lea     rdi, [rsp+158h+var_110]
//   0x202014 mov     ecx, 50h ; 'P'
//   0x202019 mov     edx, 1
//   0x20201E xor     esi, esi
//   0x202020 call    _qvector_reserve
//   0x202025 mov     rdx, qword ptr [rsp+158h+var_108]
//   0x20202A mov     [rsp+158h+var_110], rax
//   0x20202F pxor    xmm0, xmm0
//   0x202033 mov     rsi, r14
//   0x202036 lea     rdx, [rdx+rdx*4]
//   0x20203A shl     rdx, 4
//   0x20203E lea     rdi, [rax+rdx]
//   0x202042 mov     edx, 1
//   0x202047 mov     qword ptr [rdi], 0
//   0x20204E mov     qword ptr [rdi+8], 0
//   0x202056 mov     qword ptr [rdi+20h], 0
//   0x20205E mov     dword ptr [rdi+48h], 0
//   0x202065 movups  xmmword ptr [rdi+10h], xmm0
//   0x202069 movups  xmmword ptr [rdi+28h], xmm0
//   0x20206D movups  xmmword ptr [rdi+38h], xmm0
//   0x202071 add     qword ptr [rsp+158h+var_108], 1
//   0x202077 call    sub_1E88D0
//   0x20207C mov     r14, [rbx+38h]
//   0x202080 cmp     r14, 0FFFFFFFFFFFFFFFFh
//   0x202084 jz      loc_2021A0
//   0x20208A mov     eax, [rbx]
//   0x20208C cmp     eax, 4
//   0x20208F jz      loc_202339
//   0x202095 cmp     eax, 4
//   0x202098 ja      loc_202330
//   0x20209E cmp     eax, 1
//   0x2020A1 jz      loc_202230
//   0x2020A7 sub     eax, 2
//   0x2020AA cmp     eax, 1
//   0x2020AD ja      short loc_2020C3
//   0x2020AF mov     edx, [rbx+48h]
//   0x2020B2 lea     rcx, [rsp+158h+var_118]
//   0x2020B7 lea     rsi, [rbx+40h]
//   0x2020BB mov     rdi, rbp
//   0x2020BE call    sub_2D5330
//   0x2020C3 mov     rdi, [rsp+158h+var_F8]
//   0x2020C8 test    rdi, rdi
//   0x2020CB jz      short loc_2020DB
//   0x2020CD mov     qword ptr [rsp+158h+var_F0], 0
//   0x2020D6 call    _qfree
//   0x2020DB mov     rdi, [rsp+158h+var_110]
//   0x2020E0 test    rdi, rdi
//   0x2020E3 jz      short loc_202155
//   0x2020E5 mov     r12, qword ptr [rsp+158h+var_108]
//   0x2020EA test    r12, r12
//   0x2020ED jz      short loc_202147
//   0x2020EF xor     ebp, ebp
//   0x2020F1 nop     word ptr [rax+rax+00000000h]
//   0x2020FC nop     dword ptr [rax+00h]
//   0x202100 lea     rax, [rbp+rbp*4+0]
//   0x202105 shl     rax, 4
//   0x202109 lea     rbx, [rdi+rax]
//   0x20210D mov     rdi, [rbx+20h]
//   0x202111 test    rdi, rdi
//   0x202114 jz      short loc_202123
//   0x202116 mov     qword ptr [rbx+28h], 0
//   0x20211E call    _qfree
//   0x202123 mov     rdi, [rbx+8]
//   0x202127 test    rdi, rdi
//   0x20212A jz      short loc_202139
//   0x20212C mov     qword ptr [rbx+10h], 0
//   0x202134 call    _qfree
//   0x202139 add     rbp, 1
//   0x20213D mov     rdi, [rsp+158h+var_110]
//   0x202142 cmp     r12, rbp
//   0x202145 jnz     short loc_202100
//   0x202147 mov     qword ptr [rsp+158h+var_108], 0
//   0x202150 call    _qfree
//   0x202155 mov     rdi, [rsp+158h+var_138]
//   0x20215A test    rdi, rdi
//   0x20215D jz      short loc_20216D
//   0x20215F mov     qword ptr [rsp+158h+var_130], 0
//   0x202168 call    _qfree
//   0x20216D mov     rax, [rsp+158h+var_40]
//   0x202175 sub     rax, fs:28h
//   0x20217E jnz     loc_202629
//   0x202184 add     rsp, 128h
//   0x20218B pop     rbx
//   0x20218C pop     rbp
//   0x20218D pop     r12
//   0x20218F pop     r13
//   0x202191 pop     r14
//   0x202193 pop     r15
//   0x202195 retn
//   0x202196 align 20h
//   0x2021A0 mov     eax, [rbx]
//   0x2021A2 mov     r14, [rbx+58h]
//   0x2021A6 cmp     eax, 4
//   0x2021A9 jnz     loc_202095
//   0x2021AF cmp     r14, 0FFFFFFFFFFFFFFFFh
//   0x2021B3 jnz     loc_202339
//   0x2021B9 cmp     byte ptr [rbx+88h], 0
//   0x2021C0 jz      loc_202503
//   0x2021C6 mov     edx, [rbx+80h]
//   0x2021CC pxor    xmm0, xmm0
//   0x2021D0 lea     rsi, [rbx+60h]
//   0x2021D4 mov     rdi, r13
//   0x2021D7 mov     qword ptr [rsp+158h+var_D8], 0
//   0x2021E3 movups  [rsp+158h+var_D8+8], xmm0
//   0x2021EB call    sub_24B690
//   0x2021F0 mov     rsi, r13
//   0x2021F3 mov     rdi, rbp
//   0x2021F6 call    sub_1F6620
//   0x2021FB mov     rdi, qword ptr [rsp+158h+var_D8]
//   0x202203 add     dword ptr [rbp+64h], 1
//   0x202207 test    rdi, rdi
//   0x20220A jz      loc_2020C3
//   0x202210 mov     qword ptr [rsp+158h+var_D8+8], 0
//   0x20221C call    _qfree
//   0x202221 jmp     loc_2020C3
//   0x202226 align 10h
//   0x202230 lea     r12, [rsp+158h+var_140]
//   0x202235 mov     rdx, [rbx+10h]
//   0x202239 pxor    xmm0, xmm0
//   0x20223D mov     rsi, r13
//   0x202240 mov     rdi, r12
//   0x202243 mov     [rsp+158h+var_140], 0
//   0x20224C mov     [rsp+158h+var_C8], 0
//   0x202258 mov     [rsp+158h+var_B0], 0
//   0x202264 mov     [rsp+158h+var_68], 1
//   0x202270 mov     [rsp+158h+var_60], 0FFFFFFFFh
//   0x20227B mov     [rsp+158h+var_58], 0
//   0x202287 mov     [rsp+158h+var_50], 0
//   0x20228F movaps  [rsp+158h+var_D8], xmm0
//   0x202297 movups  [rsp+158h+var_C0], xmm0
//   0x20229F movaps  [rsp+158h+var_A8], xmm0
//   0x2022A7 movaps  [rsp+158h+var_98], xmm0
//   0x2022AF call    _get_udm_by_tid
//   0x2022B4 mov     rdx, qword ptr [rsp+158h+var_D8]
//   0x2022BC mov     rsi, [rbx+8]
//   0x2022C0 lea     rcx, [rsp+158h+var_118]
//   0x2022C5 mov     rdi, rbp
//   0x2022C8 shr     rdx, 3
//   0x2022CC call    sub_2D5820
//   0x2022D1 lea     rdi, [rsp+158h+var_98]
//   0x2022D9 call    _clear_tinfo_t
//   0x2022DE mov     rdi, [rsp+158h+var_B0]
//   0x2022E6 test    rdi, rdi
//   0x2022E9 jz      short loc_2022FC
//   0x2022EB mov     qword ptr [rsp+158h+var_A8], 0
//   0x2022F7 call    _qfree
//   0x2022FC mov     rdi, [rsp+158h+var_C8]
//   0x202304 test    rdi, rdi
//   0x202307 jz      short loc_20231A
//   0x202309 mov     qword ptr [rsp+158h+var_C0], 0
//   0x202315 call    _qfree
//   0x20231A mov     rdi, r12
//   0x20231D call    _clear_tinfo_t
//   0x202322 jmp     loc_2020C3
//   0x202327 align 10h
//   0x202330 cmp     eax, 5
//   0x202333 jnz     loc_2020C3
//   0x202339 call    _get_eah
//   0x20233E cmp     [rax+10h], r14
//   0x202342 jb      loc_2020C3
//   0x202348 mov     rdi, r14
//   0x20234B mov     [rsp+158h+var_E0], 0
//   0x202350 call    _get_func
//   0x202355 xor     ebx, ebx
//   0x202357 test    rax, rax
//   0x20235A jz      short loc_202366
//   0x20235C movzx   ebx, byte ptr [rax+10h]
//   0x202360 shr     bl, 6
//   0x202363 and     ebx, 1
//   0x202366 mov     rax, [r12]
//   0x20236A mov     esi, 1
//   0x20236F mov     rdi, r12
//   0x202372 call    qword ptr [rax+2D0h]
//   0x202378 cmp     rax, r14
//   0x20237B jnz     short loc_202385
//   0x20237D test    bl, bl
//   0x20237F jz      loc_202449
//   0x202385 cmp     byte ptr [r12+3C8h], 0
//   0x20238E jz      loc_202615
//   0x202394 cmp     qword ptr [r12+1A8h], 0
//   0x20239D jz      loc_20262E
//   0x2023A3 mov     eax, [r12+1A0h]
//   0x2023AB cmp     eax, 2
//   0x2023AE jz      loc_2024F6
//   0x2023B4 cmp     eax, 3
//   0x2023B7 jz      loc_20261C
//   0x2023BD xor     edi, edi
//   0x2023BF cmp     eax, 1
//   0x2023C2 jnz     short loc_2023D0
//   0x2023C4 mov     rdi, [r12+378h]
//   0x2023CC nop     dword ptr [rax+00h]
//   0x2023D0 mov     rax, [rdi]
//   0x2023D3 mov     esi, 1
//   0x2023D8 call    qword ptr [rax+0B0h]
//   0x2023DE mov     rdi, [rax]
//   0x2023E1 test    rdi, rdi
//   0x2023E4 jz      short loc_202412
//   0x2023E6 mov     rax, [rdi]
//   0x2023E9 call    qword ptr [rax+80h]
//   0x2023EF lea     rdi, [rsp+158h+var_110]
//   0x2023F4 mov     rsi, rax
//   0x2023F7 mov     rbx, rax
//   0x2023FA call    sub_2D2A20
//   0x2023FF lea     rcx, [rsp+158h+var_118]
//   0x202404 mov     rdx, rbx
//   0x202407 mov     rsi, r14
//   0x20240A mov     rdi, rbp
//   0x20240D call    sub_2D5030
//   0x202412 cmp     qword ptr [rbp+8], 0
//   0x202417 jnz     loc_2020C3
//   0x20241D lea     rdi, [rsp+158h+var_110]
//   0x202422 mov     rsi, r14
//   0x202425 call    sub_2D2A20
//   0x20242A lea     rdx, [rsp+158h+var_118]
//   0x20242F xor     r8d, r8d
//   0x202432 mov     rsi, r14
//   0x202435 mov     rdi, rbp
//   0x202438 mov     rcx, 0FFFFFFFFFFFFFFFFh
//   0x20243F call    sub_2D4CE0
//   0x202444 jmp     loc_2020C3
//   0x202449 mov     rdi, [rsp+158h+var_F8]
//   0x20244E test    rdi, rdi
//   0x202451 jz      short loc_202461
//   0x202453 mov     qword ptr [rsp+158h+var_F0], 0
//   0x20245C call    _qfree
//   0x202461 mov     rdi, [rsp+158h+var_110]
//   0x202466 test    rdi, rdi
//   0x202469 jz      short loc_2024D5
//   0x20246B mov     r12, qword ptr [rsp+158h+var_108]
//   0x202470 test    r12, r12
//   0x202473 jz      short loc_2024C7
//   0x202475 xor     ebp, ebp
//   0x202477 nop     word ptr [rax+rax+00000000h]
//   0x202480 lea     rax, [rbp+rbp*4+0]
//   0x202485 shl     rax, 4
//   0x202489 lea     rbx, [rdi+rax]
//   0x20248D mov     rdi, [rbx+20h]
//   0x202491 test    rdi, rdi
//   0x202494 jz      short loc_2024A3
//   0x202496 mov     qword ptr [rbx+28h], 0
//   0x20249E call    _qfree
//   0x2024A3 mov     rdi, [rbx+8]
//   0x2024A7 test    rdi, rdi
//   0x2024AA jz      short loc_2024B9
//   0x2024AC mov     qword ptr [rbx+10h], 0
//   0x2024B4 call    _qfree
//   0x2024B9 add     rbp, 1
//   0x2024BD mov     rdi, [rsp+158h+var_110]
//   0x2024C2 cmp     r12, rbp
//   0x2024C5 jnz     short loc_202480
//   0x2024C7 mov     qword ptr [rsp+158h+var_108], 0
//   0x2024D0 call    _qfree
//   0x2024D5 mov     rdi, [rsp+158h+var_138]
//   0x2024DA test    rdi, rdi
//   0x2024DD jz      loc_20216D
//   0x2024E3 mov     qword ptr [rsp+158h+var_130], 0
//   0x2024EC call    _qfree
//   0x2024F1 jmp     loc_20216D
//   0x2024F6 mov     rdi, [r12+380h]
//   0x2024FE jmp     loc_2023D0
//   0x202503 mov     rax, [r12]
//   0x202507 mov     esi, 1
//   0x20250C mov     rdi, r12
//   0x20250F call    qword ptr [rax+2D0h]
//   0x202515 cmp     qword ptr [rbx+28h], 0
//   0x20251A mov     rsi, rax
//   0x20251D lea     r8, s1
//   0x202524 jz      short loc_20252A
//   0x202526 mov     r8, [rbx+20h]
//   0x20252A mov     rdi, [rbx+8]
//   0x20252E lea     rdx, [rsi+1]
//   0x202532 xor     ecx, ecx
//   0x202534 call    _find_regvar
//   0x202539 mov     r14, rax
//   0x20253C test    rax, rax
//   0x20253F jz      loc_202449
//   0x202545 pxor    xmm0, xmm0
//   0x202549 cmp     qword ptr [rbx+28h], 0
//   0x20254E mov     qword ptr [rsp+158h+var_D8], 0
//   0x20255A lea     rdx, s1
//   0x202561 movups  [rsp+158h+var_D8+8], xmm0
//   0x202569 mov     rcx, [rax+10h]
//   0x20256D jz      short loc_202573
//   0x20256F mov     rdx, [rbx+20h]
//   0x202573 lea     rsi, unk_5B8D9C
//   0x20257A mov     rdi, r13
//   0x20257D xor     eax, eax
//   0x20257F call    sub_169A50
//   0x202584 cmp     qword ptr [r14+20h], 0
//   0x202589 jz      short loc_2025B8
//   0x20258B call    _closing_comment
//   0x202590 mov     r8, rax
//   0x202593 mov     rax, [r12+0D0h]
//   0x20259B mov     rcx, [r14+20h]
//   0x20259F mov     rdi, r13
//   0x2025A2 lea     rsi, unk_5B8DA8
//   0x2025A9 mov     rax, [rax+8]
//   0x2025AD mov     rdx, [rax+30h]
//   0x2025B1 xor     eax, eax
//   0x2025B3 call    sub_16FAA0
//   0x2025B8 mov     rax, [rbx+8]
//   0x2025BC mov     rdx, [r14]
//   0x2025BF mov     rcx, [r14+8]
//   0x2025C3 cmp     rdx, [rax]
//   0x2025C6 jnz     short loc_2025CE
//   0x2025C8 cmp     [rax+8], rcx
//   0x2025CC jz      short loc_2025DF
//   0x2025CE lea     rsi, aAA; " (%a..%a)"
//   0x2025D5 mov     rdi, r13
//   0x2025D8 xor     eax, eax
//   0x2025DA call    sub_16FAA0
//   0x2025DF mov     rsi, r13
//   0x2025E2 mov     rdi, rbp
//   0x2025E5 call    sub_1F6620
//   0x2025EA mov     rdi, qword ptr [rsp+158h+var_D8]
//   0x2025F2 add     dword ptr [rbp+64h], 1
//   0x2025F6 test    rdi, rdi
//   0x2025F9 jz      loc_2020C3
//   0x2025FF mov     qword ptr [rsp+158h+var_D8+8], 0
//   0x20260B call    _qfree
//   0x202610 jmp     loc_2020C3
//   0x202615 xor     edi, edi
//   0x202617 jmp     loc_2023D0
//   0x20261C mov     rdi, [r12+388h]
//   0x202624 jmp     loc_2023D0
//   0x202629 call    ___stack_chk_fail
//   0x20262E mov     rax, [rsp+158h+var_40]
//   0x202636 sub     rax, fs:28h
//   0x20263F jnz     short loc_202629
//   0x202641 call    sub_1E69C0
//   0x202646 mov     rbx, rax
//   0x202649 jmp     loc_126398
//   0x20264E mov     rbx, rax
//   0x202651 jmp     loc_126424
//   0x202656 mov     rbx, rax
//   0x202659 jmp     loc_126446
//   0x20265E mov     rbx, rax
//   0x202661 jmp     loc_126494
//   0x202666 mov     rbx, rax
//   0x202669 jmp     loc_1263B5
//   0x20266E mov     rbx, rax
//   0x202671 jmp     loc_1264B7
//   0x202676 mov     rbx, rax
//   0x202679 jmp     loc_1264CC
//   0x20267E mov     rbx, rax
//   0x202681 jmp     loc_126463
// ============================================================

void sub_201EC0(/* signature unknown */)
{
    // see disassembly above
}

