// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x1802110
// Name:           sub_1802110
// Function size:  2132 bytes (492 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x1802110 push    r15; int
//   0x1802112 push    r14; int
//   0x1802114 push    r13; int
//   0x1802116 mov     r13, r8
//   0x1802119 push    r12; int
//   0x180211B mov     r12, rsi
//   0x180211E push    rbp; int
//   0x180211F mov     rbp, rdi
//   0x1802122 lea     rdi, asc_2318051; "<#"
//   0x1802129 push    rbx; int
//   0x180212A sub     rsp, 188h
//   0x1802131 mov     rax, [rsi]
//   0x1802134 mov     [rsp+1B8h+var_1B0], edx; int
//   0x1802138 mov     r14d, [rsp+1B8h+arg_0]
//   0x1802140 mov     rbx, [rax+10h]
//   0x1802144 mov     qword ptr [rsp+1B8h+var_1A8], rcx; int
//   0x1802149 mov     qword ptr [rsp+1B8h+var_1A0], r9; int
//   0x180214E mov     r15d, [rbx]
//   0x1802151 call    j__strlen
//   0x1802156 cmp     r15, rax
//   0x1802159 jb      short loc_1802188
//   0x180215B add     rbx, 10h
//   0x180215F test    rax, rax
//   0x1802162 jz      loc_1802310
//   0x1802168 mov     rdx, rax; n
//   0x180216B lea     rsi, asc_2318051; "<#"
//   0x1802172 mov     rdi, rbx; s1
//   0x1802175 call    _memcmp
//   0x180217A test    eax, eax
//   0x180217C jz      loc_1802310
//   0x1802182 nop     word ptr [rax+rax+00h]
//   0x1802188 mov     rax, qword ptr [rsp+1B8h+var_1A0]
//   0x180218D xor     r11d, r11d
//   0x1802190 pxor    xmm0, xmm0
//   0x1802194 lea     rbx, [rsp+1B8h+s2]
//   0x180219C lea     rcx, off_2BC6988
//   0x18021A3 lea     rdi, [rbx+10h]
//   0x18021A7 movaps  xmmword ptr [rsp+1B8h+var_128], xmm0; int
//   0x18021AF mov     qword ptr [rax], 0
//   0x18021B6 mov     eax, r14d
//   0x18021B9 mov     rsi, [r12]
//   0x18021BD lea     r15, [rsp+1B8h+var_C8]
//   0x18021C5 xor     eax, 1
//   0x18021C8 mov     qword ptr [rsp+1B8h+var_138], rcx; int
//   0x18021D0 mov     byte ptr [rsp+1B8h+var_118+3], al
//   0x18021D7 mov     byte ptr [rsp+1B8h+var_194], al
//   0x18021DB mov     eax, [rsp+1B8h+var_1B0]
//   0x18021DF mov     word ptr [rsp+1B8h+var_118], r11w; int
//   0x18021E8 mov     [rsp+1B8h+s2], rsi; int
//   0x18021F0 mov     dword ptr [rsp+1B8h+s2+8], eax; int
//   0x18021F7 mov     byte ptr [rsp+1B8h+var_118+2], r14b
//   0x18021FF mov     qword ptr [rsp+1B8h+var_130], 1000001h; int
//   0x180220B call    sub_B85890
//   0x1802210 push    1
//   0x1802212 xor     ecx, ecx
//   0x1802214 mov     r9, r13
//   0x1802217 push    0
//   0x1802219 mov     rsi, rbp
//   0x180221C mov     rdi, r15
//   0x180221F push    0
//   0x1802221 push    0
//   0x1802223 push    1
//   0x1802225 lea     rdx, [rsp+1E0h+var_138]
//   0x180222D push    rdx
//   0x180222E mov     r8, qword ptr [rsp+1E8h+var_1A8]
//   0x1802233 mov     rdx, rbx
//   0x1802236 call    sub_1A6BD60
//   0x180223B add     rsp, 30h
//   0x180223F movzx   eax, byte ptr [rsp+1B8h+var_194]
//   0x1802244 cmp     qword ptr [rsp+1B8h+var_C8], 0
//   0x180224D jz      loc_18025C0
//   0x1802253 mov     r10d, dword ptr [rsp+1B8h+var_B8+8]
//   0x180225B test    r10d, r10d
//   0x180225E jz      loc_1802360
//   0x1802264 mov     rdx, [rsp+1B8h+var_B8]
//   0x180226C mov     r8, [rdx]
//   0x180226F test    r8, r8
//   0x1802272 jnz     loc_1802360
//   0x1802278 cmp     r14b, 1
//   0x180227C lea     rsi, [rbp+8]
//   0x1802280 mov     rdi, rbx
//   0x1802283 mov     qword ptr [rsp+1B8h+var_1B0], r8; int
//   0x1802288 sbb     edx, edx
//   0x180228A and     edx, 445h
//   0x1802290 add     edx, 10BCh
//   0x1802296 call    sub_168B9B0
//   0x180229B mov     rsi, [r12]
//   0x180229F mov     edx, 5
//   0x18022A4 mov     rdi, rbx
//   0x18022A7 call    sub_AE9DF0
//   0x18022AC mov     rsi, r15; int
//   0x18022AF mov     ecx, 1; int
//   0x18022B4 mov     rdx, rbx; int
//   0x18022B7 mov     rdi, rbp; int
//   0x18022BA call    sub_1A60AF0
//   0x18022BF mov     rsi, [rsp+1B8h+s2]
//   0x18022C7 mov     r8, qword ptr [rsp+1B8h+var_1B0]
//   0x18022CC test    rsi, rsi
//   0x18022CF jz      short loc_18022E8
//   0x18022D1 mov     rdi, [rsp+1B8h+s2+8]
//   0x18022D9 test    rdi, rdi
//   0x18022DC jz      short loc_18022E8
//   0x18022DE call    sub_1580C40
//   0x18022E3 mov     r8, qword ptr [rsp+1B8h+var_1B0]
//   0x18022E8 mov     rax, qword ptr [rsp+1B8h+var_C8]
//   0x18022F0 mov     rdx, rax
//   0x18022F3 and     rdx, 0FFFFFFFFFFFFFFF8h
//   0x18022F7 test    al, 7
//   0x18022F9 cmovz   r8, rdx
//   0x18022FD mov     [r12], r8
//   0x1802301 jmp     loc_18025AD
//   0x1802306 align 10h
//   0x1802310 lea     rdi, asc_22E15D2+1; s
//   0x1802317 call    j__strlen
//   0x180231C cmp     r15, rax
//   0x180231F jb      loc_1802188
//   0x1802325 test    rax, rax
//   0x1802328 jz      short loc_1802348
//   0x180232A sub     r15, rax
//   0x180232D mov     rdx, rax; n
//   0x1802330 lea     rsi, asc_22E15D2+1; s2
//   0x1802337 lea     rdi, [rbx+r15]; s1
//   0x180233B call    _memcmp
//   0x1802340 test    eax, eax
//   0x1802342 jnz     loc_1802188
//   0x1802348 add     rsp, 188h
//   0x180234F pop     rbx
//   0x1802350 pop     rbp
//   0x1802351 pop     r12
//   0x1802353 pop     r13
//   0x1802355 pop     r14
//   0x1802357 pop     r15
//   0x1802359 retn
//   0x180235A align 20h
//   0x1802360 mov     [rsp+1B8h+var_194], eax
//   0x1802364 test    r13, r13
//   0x1802367 jz      loc_1802490
//   0x180236D cmp     qword ptr [r13+8], 0
//   0x1802372 jz      loc_1802490
//   0x1802378 xor     edx, edx
//   0x180237A mov     rsi, r13
//   0x180237D mov     rdi, rbp
//   0x1802380 call    sub_16A2930
//   0x1802385 mov     rdx, [rbp+0E8h]
//   0x180238C mov     rsi, r15
//   0x180238F mov     rdi, rbx
//   0x1802392 mov     qword ptr [rsp+1B8h+var_190], rax; int
//   0x1802397 call    sub_1A39F10
//   0x180239C xor     eax, eax
//   0x180239E cmp     [rsp+1B8h+var_8C], 0
//   0x18023A6 jz      short loc_18023C2
//   0x18023A8 mov     rax, [r12]
//   0x18023AC mov     rdi, [rax+10h]
//   0x18023B0 xor     eax, eax
//   0x18023B2 mov     edx, [rdi]; n
//   0x18023B4 cmp     rdx, [rsp+1B8h+s2+8]
//   0x18023BC jz      loc_18027A8
//   0x18023C2 cmp     r14b, 1
//   0x18023C6 mov     qword ptr [rsp+1B8h+var_180], rax; int
//   0x18023CB lea     rax, [rsp+1B8h+var_158]
//   0x18023D0 lea     rsi, [rbp+8]
//   0x18023D4 sbb     edx, edx
//   0x18023D6 mov     rdi, rax
//   0x18023D9 mov     qword ptr [rsp+1B8h+var_188], rax; int
//   0x18023DE and     edx, 447h
//   0x18023E4 add     edx, 10B6h
//   0x18023EA call    sub_168B9B0
//   0x18023EF mov     rsi, [r12]
//   0x18023F3 mov     r12, qword ptr [rsp+1B8h+var_188]
//   0x18023F8 mov     edx, 5
//   0x18023FD mov     rdi, r12
//   0x1802400 call    sub_AE9DF0
//   0x1802405 mov     rsi, qword ptr [rsp+1B8h+var_190]
//   0x180240A mov     edx, 0Ch
//   0x180240F mov     rdi, r12
//   0x1802412 call    sub_AE9DF0
//   0x1802417 mov     rax, qword ptr [rsp+1B8h+var_180]
//   0x180241C mov     edx, 2
//   0x1802421 mov     rdi, r12
//   0x1802424 mov     rsi, rax
//   0x1802427 call    sub_AE9DF0
//   0x180242C mov     rax, [r13+0]
//   0x1802430 lea     rsi, [rsp+1B8h+var_168]
//   0x1802435 mov     rdi, r12
//   0x1802438 mov     byte ptr [rsp+1B8h+var_160], 1; int
//   0x180243D mov     [rsp+1B8h+var_168], rax; int
//   0x1802442 call    sub_AEC610
//   0x1802447 mov     ecx, [rsp+1B8h+var_194]; int
//   0x180244B mov     rsi, r15; int
//   0x180244E mov     rdx, r12; int
//   0x1802451 mov     rdi, rbp; int
//   0x1802454 call    sub_1A60AF0
//   0x1802459 mov     rsi, qword ptr [rsp+1B8h+var_158]
//   0x180245E test    rsi, rsi
//   0x1802461 jz      short loc_1802472
//   0x1802463 mov     rdi, [rsp+1B8h+var_150]
//   0x1802468 test    rdi, rdi
//   0x180246B jz      short loc_1802472
//   0x180246D call    sub_1580C40
//   0x1802472 mov     rdi, [rsp+1B8h+s2]; void *
//   0x180247A lea     rax, [rbx+10h]
//   0x180247E cmp     rdi, rax
//   0x1802481 jz      short loc_18024F0
//   0x1802483 call    __ZdlPv; operator delete(void *)
//   0x1802488 jmp     short loc_18024F0
//   0x180248A align 10h
//   0x1802490 cmp     r14b, 1
//   0x1802494 lea     rsi, [rbp+8]
//   0x1802498 mov     rdi, rbx
//   0x180249B sbb     edx, edx
//   0x180249D and     edx, 445h
//   0x18024A3 add     edx, 10BCh
//   0x18024A9 call    sub_168B9B0
//   0x18024AE mov     rsi, [r12]
//   0x18024B2 mov     edx, 5
//   0x18024B7 mov     rdi, rbx
//   0x18024BA call    sub_AE9DF0
//   0x18024BF mov     ecx, [rsp+1B8h+var_194]; int
//   0x18024C3 mov     rsi, r15; int
//   0x18024C6 mov     rdx, rbx; int
//   0x18024C9 mov     rdi, rbp; int
//   0x18024CC call    sub_1A60AF0
//   0x18024D1 mov     rsi, [rsp+1B8h+s2]
//   0x18024D9 test    rsi, rsi
//   0x18024DC jz      short loc_18024F0
//   0x18024DE mov     rdi, [rsp+1B8h+s2+8]
//   0x18024E6 test    rdi, rdi
//   0x18024E9 jz      short loc_18024F0
//   0x18024EB call    sub_1580C40
//   0x18024F0 test    r14b, r14b
//   0x18024F3 jnz     loc_18025AD
//   0x18024F9 mov     rdx, qword ptr [rsp+1B8h+var_C8+8]
//   0x1802501 pxor    xmm0, xmm0
//   0x1802505 movaps  xmmword ptr [rsp+1B8h+s2], xmm0
//   0x180250D movaps  xmmword ptr [rsp+1B8h+ptr], xmm0
//   0x1802515 movaps  [rsp+1B8h+var_E8], xmm0
//   0x180251D test    rdx, rdx
//   0x1802520 jz      short loc_180254E
//   0x1802522 mov     ecx, [rsp+1B8h+var_1B0]
//   0x1802526 mov     rsi, [rbp+0F8h]
//   0x180252D mov     rdi, rbx
//   0x1802530 mov     rax, rcx
//   0x1802533 shl     rax, 20h
//   0x1802537 or      rcx, rax
//   0x180253A call    sub_15AB890
//   0x180253F xor     edx, edx
//   0x1802541 cmp     [rsp+1B8h+s2+8], 0
//   0x180254A cmovnz  r13, rbx
//   0x180254E mov     rax, qword ptr [rsp+1B8h+var_C8]
//   0x1802556 mov     r8, r13
//   0x1802559 mov     rdi, rbp
//   0x180255C mov     rsi, rax
//   0x180255F and     rsi, 0FFFFFFFFFFFFFFF8h
//   0x1802563 test    al, 7
//   0x1802565 mov     eax, 0
//   0x180256A cmovnz  rsi, rax
//   0x180256E sub     rsp, 8
//   0x1802572 xor     r9d, r9d
//   0x1802575 push    0
//   0x1802577 push    0
//   0x1802579 push    1
//   0x180257B push    1
//   0x180257D push    0
//   0x180257F push    rdx
//   0x1802580 push    0
//   0x1802582 mov     rcx, qword ptr [rsp+1F8h+var_1A8]
//   0x1802587 mov     edx, [rsp+1F8h+var_1B0]
//   0x180258B call    sub_18013B0
//   0x1802590 mov     rcx, qword ptr [rsp+1F8h+var_1A0]
//   0x1802595 add     rsp, 40h
//   0x1802599 mov     r9d, dword ptr [rsp+1B8h+ptr+0Ch]
//   0x18025A1 mov     [rcx], rax
//   0x18025A4 test    r9d, r9d
//   0x18025A7 jnz     loc_1802720
//   0x18025AD mov     rdi, r15
//   0x18025B0 call    sub_17A1D90
//   0x18025B5 jmp     loc_1802348
//   0x18025BA align 20h
//   0x18025C0 mov     rdi, r15
//   0x18025C3 call    sub_17A1D90
//   0x18025C8 mov     rax, [rbp+0E8h]
//   0x18025CF test    byte ptr [rax+1], 8
//   0x18025D3 jz      loc_1802690
//   0x18025D9 test    r14b, r14b
//   0x18025DC jnz     loc_1802790
//   0x18025E2 mov     rax, [r12]
//   0x18025E6 pxor    xmm0, xmm0
//   0x18025EA test    r13, r13
//   0x18025ED mov     rdx, r13
//   0x18025F0 movaps  xmmword ptr [rsp+1B8h+var_C8], xmm0
//   0x18025F8 cmovz   rdx, r15
//   0x18025FC mov     r8, rbx
//   0x18025FF xor     ecx, ecx
//   0x1802601 mov     [rsp+1B8h+s2+8], rax
//   0x1802609 mov     eax, [rsp+1B8h+var_1B0]
//   0x180260D xor     r9d, r9d
//   0x1802610 mov     rdi, rbp; int
//   0x1802613 mov     dword ptr [rsp+1B8h+s2], 0
//   0x180261E mov     dword ptr [rsp+1B8h+ptr+0Ch], eax
//   0x1802625 mov     dword ptr [rsp+1B8h+ptr+8], eax
//   0x180262C movaps  xmmword ptr [rsp+1B8h+var_B8], xmm0
//   0x1802634 movaps  [rsp+1B8h+var_A8], xmm0
//   0x180263C mov     [rsp+1B8h+var_168], 0
//   0x1802645 push    0; int
//   0x1802647 lea     rax, [rsp+1C0h+var_170]
//   0x180264C push    rax; __int64
//   0x180264D lea     rax, [rsp+1C8h+var_168]
//   0x1802652 push    rax; __int64
//   0x1802653 push    1; int
//   0x1802655 mov     rsi, qword ptr [rsp+1D8h+var_1A8]
//   0x180265A call    sub_1CE58C0
//   0x180265F add     rsp, 20h
//   0x1802663 cmp     eax, 2
//   0x1802666 jz      loc_18028FF
//   0x180266C mov     edi, dword ptr [rsp+1B8h+var_B8+0Ch]
//   0x1802673 test    edi, edi
//   0x1802675 jnz     loc_18028ED
//   0x180267B test    r13, r13
//   0x180267E jnz     short loc_1802699
//   0x1802680 lea     rsi, [rbp+8]
//   0x1802684 mov     ecx, 1500h
//   0x1802689 jmp     loc_1802762
//   0x180268E align 10h
//   0x1802690 test    r13, r13
//   0x1802693 jz      loc_180274C
//   0x1802699 cmp     qword ptr [r13+8], 0
//   0x180269E jz      loc_1802738
//   0x18026A4 xor     edx, edx
//   0x18026A6 mov     rsi, r13
//   0x18026A9 mov     rdi, rbp
//   0x18026AC call    sub_16A2930
//   0x18026B1 mov     [rsp+1B8h+var_170], rax
//   0x18026B6 test    rax, rax
//   0x18026B9 jz      loc_18027D8
//   0x18026BF cmp     r14b, 1
//   0x18026C3 mov     edx, [rsp+1B8h+var_1B0]
//   0x18026C7 lea     rsi, [rbp+8]
//   0x18026CB mov     rdi, r15
//   0x18026CE sbb     ecx, ecx
//   0x18026D0 xor     r8d, r8d
//   0x18026D3 and     ecx, 41Dh
//   0x18026D9 add     ecx, 10B5h
//   0x18026DF call    sub_168B9F0
//   0x18026E4 mov     rsi, r12
//   0x18026E7 mov     rdi, r15
//   0x18026EA call    sub_169D880
//   0x18026EF lea     rsi, [rsp+1B8h+var_170]
//   0x18026F4 mov     rdi, rax
//   0x18026F7 call    sub_17BABD0
//   0x18026FC mov     rdx, [r13+0]
//   0x1802700 mov     rsi, rbx
//   0x1802703 mov     rdi, rax
//   0x1802706 mov     [rsp+1B8h+s2], rdx
//   0x180270E call    sub_1587DB0
//   0x1802713 mov     rdi, r15
//   0x1802716 call    sub_15F7200
//   0x180271B jmp     loc_1802348
//   0x1802720 mov     rdi, [rsp+1B8h+ptr]; ptr
//   0x1802728 call    _free
//   0x180272D jmp     loc_18025AD
//   0x1802732 align 8
//   0x1802738 mov     esi, [r13+0]
//   0x180273C test    esi, esi
//   0x180273E jz      short loc_180274C
//   0x1802740 mov     ecx, [r13+4]
//   0x1802744 test    ecx, ecx
//   0x1802746 jnz     loc_18026A4
//   0x180274C cmp     r14b, 1
//   0x1802750 lea     rsi, [rbp+8]
//   0x1802754 sbb     ecx, ecx
//   0x1802756 and     ecx, 445h
//   0x180275C add     ecx, 10BBh
//   0x1802762 mov     edx, [rsp+1B8h+var_1B0]
//   0x1802766 xor     r8d, r8d
//   0x1802769 mov     rdi, r15
//   0x180276C call    sub_168B9F0
//   0x1802771 mov     rdi, r15
//   0x1802774 mov     rsi, r12
//   0x1802777 call    sub_169D880
//   0x180277C mov     rdi, r15
//   0x180277F call    sub_15F7200
//   0x1802784 jmp     loc_1802348
//   0x1802789 align 10h
//   0x1802790 test    r13, r13
//   0x1802793 jnz     loc_1802699
//   0x1802799 lea     rsi, [rbp+8]
//   0x180279D mov     ecx, 10BBh
//   0x18027A2 jmp     short loc_1802762
//   0x18027A4 align 8
//   0x18027A8 mov     eax, 1
//   0x18027AD test    rdx, rdx
//   0x18027B0 jz      loc_18023C2
//   0x18027B6 mov     rsi, [rsp+1B8h+s2]; s2
//   0x18027BE add     rdi, 10h; s1
//   0x18027C2 call    _memcmp
//   0x18027C7 test    eax, eax
//   0x18027C9 setz    al
//   0x18027CC movzx   eax, al
//   0x18027CF jmp     loc_18023C2
//   0x18027D4 align 8
//   0x18027D8 mov     rdi, [r13+8]
//   0x18027DC test    rdi, rdi
//   0x18027DF jz      short loc_18027EE
//   0x18027E1 call    sub_E91740
//   0x18027E6 test    al, al
//   0x18027E8 jnz     loc_18028BD
//   0x18027EE mov     rsi, r13
//   0x18027F1 mov     rdi, rbp
//   0x18027F4 call    sub_169D3A0
//   0x18027F9 test    al, al
//   0x18027FB jz      loc_1802348
//   0x1802801 mov     rax, [rbp+0E8h]
//   0x1802808 test    byte ptr [rax], 20h
//   0x180280B jnz     loc_1802942
//   0x1802811 mov     ecx, 14D0h
//   0x1802816 mov     edx, [r13+0]
//   0x180281A xor     r8d, r8d
//   0x180281D lea     rsi, [rbp+8]
//   0x1802821 mov     rdi, r15
//   0x1802824 call    sub_168B9F0
//   0x1802829 mov     rdx, [r12]
//   0x180282D mov     rsi, [r13+8]
//   0x1802831 mov     rdi, [rbp+0F8h]
//   0x1802838 call    sub_E918E0
//   0x180283D lea     rsi, [rsp+1B8h+var_168]
//   0x1802842 mov     rdi, r15
//   0x1802845 mov     [rsp+1B8h+var_168], rax
//   0x180284A call    sub_17AE3B0
//   0x180284F mov     edx, [r13+0]
//   0x1802853 mov     ecx, [rsp+1B8h+var_1B0]
//   0x1802857 lea     rsi, [rsp+1B8h+var_158]
//   0x180285C mov     rdi, rax
//   0x180285F mov     [rsp+1B8h+var_158], edx
//   0x1802863 mov     [rsp+1B8h+var_158+4], ecx
//   0x1802867 call    sub_1587DB0
//   0x180286C lea     rdi, aTypename+2; s
//   0x1802873 mov     r14, rax
//   0x1802876 call    j__strlen
//   0x180287B mov     esi, [r13+0]
//   0x180287F mov     rdi, rbx
//   0x1802882 xor     r8d, r8d
//   0x1802885 lea     rdx, aTypename+2; "typename "
//   0x180288C mov     rcx, rax
//   0x180288F call    sub_9EC740
//   0x1802894 mov     rsi, rbx
//   0x1802897 mov     rdi, r14
//   0x180289A add     rbx, 28h ; '('
//   0x180289E call    sub_1589170
//   0x18028A3 mov     rdi, [rsp+1B8h+ptr+8]; void *
//   0x18028AB cmp     rdi, rbx
//   0x18028AE jz      short loc_18028B5
//   0x18028B0 call    __ZdlPv; operator delete(void *)
//   0x18028B5 mov     rdi, r15
//   0x18028B8 call    sub_15F7200
//   0x18028BD sub     rsp, 8
//   0x18028C1 mov     r8, [r12]
//   0x18028C5 mov     rcx, r13
//   0x18028C8 xor     edx, edx
//   0x18028CA push    0
//   0x18028CC mov     r9d, [rsp+1C8h+var_1B0]
//   0x18028D1 mov     rdi, rbp
//   0x18028D4 mov     rsi, qword ptr [rsp+1C8h+var_1A8]
//   0x18028D9 call    sub_1CD6700
//   0x18028DE mov     rcx, qword ptr [rsp+1C8h+var_1A0]
//   0x18028E3 mov     [rcx], rax
//   0x18028E6 pop     rax
//   0x18028E7 pop     rdx
//   0x18028E8 jmp     loc_1802348
//   0x18028ED mov     rdi, [rsp+1B8h+var_B8]; ptr
//   0x18028F5 call    _free
//   0x18028FA jmp     loc_180267B
//   0x18028FF mov     rsi, [rsp+1B8h+var_168]
//   0x1802904 lea     rdi, [rsp+1B8h+var_158]
//   0x1802909 call    sub_F22A90
//   0x180290E mov     edx, [rsp+1B8h+var_1B0]
//   0x1802912 mov     rsi, qword ptr [rsp+1B8h+var_158]
//   0x1802917 mov     rdi, rbp
//   0x180291A call    sub_1CCD5B0
//   0x180291F mov     r8d, dword ptr [rsp+1B8h+var_B8+0Ch]
//   0x1802927 test    r8d, r8d
//   0x180292A jz      loc_1802348
//   0x1802930 mov     rdi, [rsp+1B8h+var_B8]; ptr
//   0x1802938 call    _free
//   0x180293D jmp     loc_1802348
//   0x1802942 mov     rdx, qword ptr [rsp+1B8h+var_1A8]
//   0x1802947 mov     rsi, r13
//   0x180294A mov     rdi, rbp
//   0x180294D call    sub_17ABC30
//   0x1802952 test    al, al
//   0x1802954 jz      loc_1802811
//   0x180295A mov     ecx, 1652h
//   0x180295F jmp     loc_1802816
// ============================================================

void sub_1802110(/* signature unknown */)
{
    // see disassembly above
}

