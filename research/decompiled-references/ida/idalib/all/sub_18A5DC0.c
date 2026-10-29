// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x18A5DC0
// Name:           sub_18A5DC0
// Function size:  1781 bytes (410 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x18A5DC0 push    r15
//   0x18A5DC2 shl     r8, 4
//   0x18A5DC6 push    r14
//   0x18A5DC8 lea     rax, [rcx+r8]
//   0x18A5DCC push    r13
//   0x18A5DCE push    r12
//   0x18A5DD0 push    rbp
//   0x18A5DD1 push    rbx
//   0x18A5DD2 sub     rsp, 128h
//   0x18A5DD9 mov     [rsp+158h+var_132], sil
//   0x18A5DDE mov     [rsp+158h+var_131], dl
//   0x18A5DE2 mov     [rsp+158h+var_140], rax
//   0x18A5DE7 cmp     rax, rcx
//   0x18A5DEA jz      loc_18A62B7
//   0x18A5DF0 lea     rax, [rsp+158h+var_108]
//   0x18A5DF5 mov     rbx, rcx
//   0x18A5DF8 mov     r15, r9
//   0x18A5DFB mov     [rsp+158h+var_150], rdi
//   0x18A5E00 mov     qword ptr [rsp+158h+var_130], rax
//   0x18A5E05 lea     rax, [rsp+158h+var_C8]
//   0x18A5E0D mov     qword ptr [rsp+158h+var_148], rax
//   0x18A5E12 lea     rax, [rsp+158h+var_A8]
//   0x18A5E1A mov     [rsp+158h+var_128], rax
//   0x18A5E1F jmp     short loc_18A5E7D
//   0x18A5E21 align 8
//   0x18A5E28 and     rax, 0FFFFFFFFFFFFFFF8h
//   0x18A5E2C jz      short loc_18A5E37
//   0x18A5E2E cmp     [rax], rbp
//   0x18A5E31 jnz     loc_18A5EE6
//   0x18A5E37 cmp     [rsp+158h+var_131], 0
//   0x18A5E3C jz      loc_18A5EFB
//   0x18A5E42 cmp     [rsp+158h+var_132], 0
//   0x18A5E47 jnz     loc_18A5F3D
//   0x18A5E4D mov     eax, [r15+8]
//   0x18A5E51 mov     ecx, [r15+0Ch]
//   0x18A5E55 lea     rdx, [rax+1]
//   0x18A5E59 cmp     rdx, rcx
//   0x18A5E5C ja      loc_18A6320
//   0x18A5E62 mov     rdx, [r15]
//   0x18A5E65 add     rbx, 10h
//   0x18A5E69 mov     [rdx+rax*8], rbp
//   0x18A5E6D add     dword ptr [r15+8], 1
//   0x18A5E72 cmp     [rsp+158h+var_140], rbx
//   0x18A5E77 jz      loc_18A62B7
//   0x18A5E7D mov     edx, [rbx]
//   0x18A5E7F mov     rsi, [rbx+8]
//   0x18A5E83 xor     ecx, ecx
//   0x18A5E85 mov     rdi, [rsp+158h+var_150]
//   0x18A5E8A call    sub_1A86640
//   0x18A5E8F mov     rbp, rax
//   0x18A5E92 test    rax, rax
//   0x18A5E95 jz      loc_18A5FE0
//   0x18A5E9B mov     rax, [rbp+68h]
//   0x18A5E9F test    rax, rax
//   0x18A5EA2 jnz     short loc_18A5E28
//   0x18A5EA4 mov     rsi, [rbp+60h]
//   0x18A5EA8 lea     rdi, [rsi+58h]
//   0x18A5EAC call    sub_A79820
//   0x18A5EB1 mov     rdx, [rbp+68h]
//   0x18A5EB5 mov     rax, rdx
//   0x18A5EB8 and     rax, 0FFFFFFFFFFFFFFF8h
//   0x18A5EBC jnz     loc_18A5E2E
//   0x18A5EC2 test    rdx, rdx
//   0x18A5EC5 jnz     loc_18A5E37
//   0x18A5ECB mov     rsi, [rbp+60h]
//   0x18A5ECF lea     rdi, [rsi+58h]
//   0x18A5ED3 call    sub_A79820
//   0x18A5ED8 mov     rax, [rbp+68h]
//   0x18A5EDC and     rax, 0FFFFFFFFFFFFFFF8h
//   0x18A5EE0 jz      loc_18A5E37
//   0x18A5EE6 mov     rax, [rax]
//   0x18A5EE9 test    rax, rax
//   0x18A5EEC cmovnz  rbp, rax
//   0x18A5EF0 cmp     [rsp+158h+var_131], 0
//   0x18A5EF5 jnz     loc_18A5E42
//   0x18A5EFB mov     rax, [rsp+158h+var_150]
//   0x18A5F00 sub     rsp, 8
//   0x18A5F04 xor     r9d, r9d
//   0x18A5F07 xor     r8d, r8d
//   0x18A5F0A mov     ecx, 1
//   0x18A5F0F mov     rsi, rbp
//   0x18A5F12 mov     rdi, [rax]
//   0x18A5F15 mov     eax, [rbx]
//   0x18A5F17 mov     [rsp+160h+var_C8], eax
//   0x18A5F1E push    0
//   0x18A5F20 push    0
//   0x18A5F22 push    0
//   0x18A5F24 mov     rdx, qword ptr [rsp+178h+var_148]
//   0x18A5F29 call    sub_18F5260
//   0x18A5F2E add     rsp, 20h
//   0x18A5F32 cmp     [rsp+158h+var_132], 0
//   0x18A5F37 jz      loc_18A5E4D
//   0x18A5F3D mov     rsi, qword ptr [rsp+158h+var_130]
//   0x18A5F42 mov     rdi, rbp
//   0x18A5F45 call    sub_1896AF0
//   0x18A5F4A test    al, al
//   0x18A5F4C jz      loc_18A5E4D
//   0x18A5F52 mov     edx, [rbx]
//   0x18A5F54 mov     rsi, [rsp+158h+var_150]
//   0x18A5F59 xor     r8d, r8d
//   0x18A5F5C mov     ecx, 1D2Dh
//   0x18A5F61 mov     rdi, qword ptr [rsp+158h+var_148]
//   0x18A5F66 call    sub_168B9F0
//   0x18A5F6B cmp     [rsp+158h+var_50], 0
//   0x18A5F73 mov     r12, [rbx+8]
//   0x18A5F77 jnz     loc_18A6340
//   0x18A5F7D cmp     [rsp+158h+var_44], 0
//   0x18A5F85 jnz     loc_18A63F8
//   0x18A5F8B mov     r14, qword ptr [rsp+158h+var_148]
//   0x18A5F90 mov     rdi, r14
//   0x18A5F93 call    sub_15F7200
//   0x18A5F98 mov     rax, qword ptr [rsp+158h+var_108]
//   0x18A5F9D xor     r8d, r8d
//   0x18A5FA0 mov     rdi, r14
//   0x18A5FA3 mov     rsi, [rsp+158h+var_150]
//   0x18A5FA8 mov     ecx, 18B6h
//   0x18A5FAD mov     edx, [rax+18h]
//   0x18A5FB0 call    sub_168B9F0
//   0x18A5FB5 cmp     [rsp+158h+var_50], 0
//   0x18A5FBD jnz     loc_18A63E0
//   0x18A5FC3 cmp     [rsp+158h+var_44], 0
//   0x18A5FCB jnz     loc_18A6458
//   0x18A5FD1 mov     rdi, qword ptr [rsp+158h+var_148]
//   0x18A5FD6 call    sub_15F7200
//   0x18A5FDB jmp     loc_18A5E4D
//   0x18A5FE0 mov     r14, qword ptr [rsp+158h+var_130]
//   0x18A5FE5 mov     rsi, [rbx+8]
//   0x18A5FE9 pxor    xmm0, xmm0
//   0x18A5FED mov     rax, 101010101h
//   0x18A5FF7 mov     qword ptr [rsp+158h+var_E0], rax; int
//   0x18A5FFC lea     rax, unk_2BC6D40
//   0x18A6003 lea     rdi, [r14+10h]
//   0x18A6007 movaps  xmmword ptr [rsp+158h+var_D8], xmm0; int
//   0x18A600F add     rax, 10h
//   0x18A6013 mov     qword ptr [rsp+158h+var_E8], rax; int
//   0x18A6018 mov     rax, [rsp+158h+var_150]
//   0x18A601D mov     r12, [rax]
//   0x18A6020 mov     eax, [rbx]
//   0x18A6022 mov     r13, [r12+0C0h]
//   0x18A602A mov     qword ptr [rsp+158h+var_108], rsi; int
//   0x18A602F mov     [rsp+158h+var_100], eax; int
//   0x18A6033 call    sub_B85890
//   0x18A6038 push    1
//   0x18A603A xor     r9d, r9d
//   0x18A603D mov     r8, r13
//   0x18A6040 push    0
//   0x18A6042 mov     ecx, 0Bh
//   0x18A6047 mov     rdx, r14
//   0x18A604A mov     rsi, r12
//   0x18A604D push    0
//   0x18A604F push    0
//   0x18A6051 push    1
//   0x18A6053 lea     rax, [rsp+180h+var_E8]
//   0x18A605B mov     qword ptr [rsp+180h+var_110], rax; int
//   0x18A6060 push    rax
//   0x18A6061 mov     rdi, qword ptr [rsp+188h+var_148]
//   0x18A6066 call    sub_1A6BD60
//   0x18A606B add     rsp, 30h
//   0x18A606F mov     eax, [rsp+158h+var_B0]
//   0x18A6076 test    eax, eax
//   0x18A6078 jz      loc_18A612C
//   0x18A607E mov     rax, [rsp+158h+ptr]
//   0x18A6086 mov     r12, [rax]
//   0x18A6089 test    r12, r12
//   0x18A608C jz      loc_18A612C
//   0x18A6092 movzx   edx, byte ptr [r12+1Ch]
//   0x18A6098 and     edx, 7Fh
//   0x18A609B lea     eax, [rdx+34h]
//   0x18A609E and     eax, 7Fh
//   0x18A60A1 cmp     al, 1
//   0x18A60A3 jbe     short loc_18A60B0
//   0x18A60A5 movzx   eax, dl
//   0x18A60A8 sub     eax, 35h ; '5'
//   0x18A60AB cmp     eax, 1
//   0x18A60AE ja      short loc_18A60CB
//   0x18A60B0 mov     rdi, r12
//   0x18A60B3 call    sub_B72ED0
//   0x18A60B8 mov     r12, rax
//   0x18A60BB test    rax, rax
//   0x18A60BE jz      loc_18A64AE
//   0x18A60C4 movzx   edx, byte ptr [rax+1Ch]
//   0x18A60C8 and     edx, 7Fh
//   0x18A60CB cmp     dl, 13h
//   0x18A60CE jnz     short loc_18A612C
//   0x18A60D0 mov     r14, qword ptr [rsp+158h+var_130]
//   0x18A60D5 mov     rsi, [rsp+158h+var_150]
//   0x18A60DA mov     edx, 14E3h
//   0x18A60DF mov     rdi, r14
//   0x18A60E2 mov     rbp, [rsi]
//   0x18A60E5 call    sub_168B9B0
//   0x18A60EA mov     rsi, [rbx+8]
//   0x18A60EE mov     edx, 5
//   0x18A60F3 mov     rdi, r14
//   0x18A60F6 call    sub_AE9DF0
//   0x18A60FB mov     rsi, qword ptr [rsp+158h+var_148]; int
//   0x18A6100 mov     rdx, r14; int
//   0x18A6103 mov     rdi, rbp; int
//   0x18A6106 mov     ecx, 1; int
//   0x18A610B call    sub_1A60AF0
//   0x18A6110 mov     rsi, qword ptr [rsp+158h+var_108]
//   0x18A6115 test    rsi, rsi
//   0x18A6118 jz      short loc_18A6129
//   0x18A611A mov     rdi, qword ptr [rsp+158h+var_100]
//   0x18A611F test    rdi, rdi
//   0x18A6122 jz      short loc_18A6129
//   0x18A6124 call    sub_1580C40
//   0x18A6129 mov     rbp, r12
//   0x18A612C mov     r14, [rsp+158h+var_80]
//   0x18A6134 mov     r12, [rsp+158h+var_88]
//   0x18A613C cmp     r14, r12
//   0x18A613F jz      loc_18A623B
//   0x18A6145 mov     [rsp+158h+var_120], rbp
//   0x18A614A mov     [rsp+158h+var_118], rbx
//   0x18A614F nop
//   0x18A6150 mov     rbx, [r12]
//   0x18A6154 test    rbx, rbx
//   0x18A6157 jz      loc_18A621C
//   0x18A615D mov     rax, [r12+8]
//   0x18A6162 test    rax, rax
//   0x18A6165 jz      loc_18A621C
//   0x18A616B cmp     rbx, rax
//   0x18A616E jnb     loc_18A62F0
//   0x18A6174 mov     r13d, [rbx+218h]
//   0x18A617B mov     rbp, [rbx+210h]
//   0x18A6182 shl     r13, 6
//   0x18A6186 add     r13, rbp
//   0x18A6189 cmp     rbp, r13
//   0x18A618C jz      short loc_18A61B6
//   0x18A618E xchg    ax, ax
//   0x18A6190 sub     r13, 40h ; '@'
//   0x18A6194 mov     rdi, [r13+18h]; void *
//   0x18A6198 lea     rax, [r13+28h]
//   0x18A619C cmp     rdi, rax
//   0x18A619F jz      loc_18A62E0
//   0x18A61A5 call    __ZdlPv; operator delete(void *)
//   0x18A61AA cmp     rbp, r13
//   0x18A61AD jnz     short loc_18A6190
//   0x18A61AF mov     r13, [rbx+210h]
//   0x18A61B6 lea     rax, [rbx+220h]
//   0x18A61BD cmp     r13, rax
//   0x18A61C0 jz      short loc_18A61CA
//   0x18A61C2 mov     rdi, r13; ptr
//   0x18A61C5 call    _free
//   0x18A61CA mov     rdi, [rbx+1A0h]; ptr
//   0x18A61D1 lea     rcx, [rbx+1B0h]
//   0x18A61D8 lea     rbp, [rbx+1A0h]
//   0x18A61DF cmp     rdi, rcx
//   0x18A61E2 jz      short loc_18A61E9
//   0x18A61E4 call    _free
//   0x18A61E9 lea     r13, [rbx+60h]
//   0x18A61ED nop     dword ptr [rax]
//   0x18A61F0 sub     rbp, 20h ; ' '
//   0x18A61F4 mov     rdi, [rbp+0]; void *
//   0x18A61F8 lea     rax, [rbp+10h]
//   0x18A61FC cmp     rdi, rax
//   0x18A61FF jz      loc_18A62D0
//   0x18A6205 call    __ZdlPv; operator delete(void *)
//   0x18A620A cmp     rbp, r13
//   0x18A620D jnz     short loc_18A61F0
//   0x18A620F mov     esi, 3A0h; unsigned __int64
//   0x18A6214 mov     rdi, rbx; void *
//   0x18A6217 call    __ZdlPvm; operator delete(void *,ulong)
//   0x18A621C add     r12, 18h
//   0x18A6220 cmp     r14, r12
//   0x18A6223 jnz     loc_18A6150
//   0x18A6229 mov     rbp, [rsp+158h+var_120]
//   0x18A622E mov     rbx, [rsp+158h+var_118]
//   0x18A6233 mov     r12, [rsp+158h+var_88]
//   0x18A623B test    r12, r12
//   0x18A623E jz      short loc_18A6248
//   0x18A6240 mov     rdi, r12; void *
//   0x18A6243 call    __ZdlPv; operator delete(void *)
//   0x18A6248 mov     rdi, [rsp+158h+ptr]; ptr
//   0x18A6250 cmp     rdi, [rsp+158h+var_128]
//   0x18A6255 jz      short loc_18A625C
//   0x18A6257 call    _free
//   0x18A625C test    rbp, rbp
//   0x18A625F jnz     loc_18A5E9B
//   0x18A6265 mov     edx, [rbx]
//   0x18A6267 mov     rsi, [rsp+158h+var_150]
//   0x18A626C xor     r8d, r8d
//   0x18A626F mov     ecx, 14E2h
//   0x18A6274 mov     rdi, qword ptr [rsp+158h+var_148]
//   0x18A6279 call    sub_168B9F0
//   0x18A627E cmp     [rsp+158h+var_50], 0
//   0x18A6286 mov     rbp, [rbx+8]
//   0x18A628A jnz     loc_18A6360
//   0x18A6290 cmp     [rsp+158h+var_44], 0
//   0x18A6298 jnz     loc_18A6380
//   0x18A629E mov     rdi, qword ptr [rsp+158h+var_148]
//   0x18A62A3 add     rbx, 10h
//   0x18A62A7 call    sub_15F7200
//   0x18A62AC cmp     [rsp+158h+var_140], rbx
//   0x18A62B1 jnz     loc_18A5E7D
//   0x18A62B7 add     rsp, 128h
//   0x18A62BE pop     rbx
//   0x18A62BF pop     rbp
//   0x18A62C0 pop     r12
//   0x18A62C2 pop     r13
//   0x18A62C4 pop     r14
//   0x18A62C6 pop     r15
//   0x18A62C8 retn
//   0x18A62C9 align 10h
//   0x18A62D0 cmp     rbp, r13
//   0x18A62D3 jnz     loc_18A61F0
//   0x18A62D9 jmp     loc_18A620F
//   0x18A62DE align 20h
//   0x18A62E0 cmp     rbp, r13
//   0x18A62E3 jnz     loc_18A6190
//   0x18A62E9 jmp     loc_18A61AF
//   0x18A62EE align 10h
//   0x18A62F0 lea     rcx, [rax+3A00h]
//   0x18A62F7 cmp     rbx, rcx
//   0x18A62FA ja      loc_18A6174
//   0x18A6300 mov     ecx, [rax+3A80h]
//   0x18A6306 lea     esi, [rcx+1]
//   0x18A6309 mov     [rax+3A80h], esi
//   0x18A630F mov     [rax+rcx*8+3A00h], rbx
//   0x18A6317 jmp     loc_18A621C
//   0x18A631C align 20h
//   0x18A6320 lea     rsi, [r15+10h]
//   0x18A6324 mov     ecx, 8
//   0x18A6329 mov     rdi, r15
//   0x18A632C call    sub_2237220
//   0x18A6331 mov     eax, [r15+8]
//   0x18A6335 jmp     loc_18A5E62
//   0x18A633A align 20h
//   0x18A6340 mov     rdi, [rsp+158h+var_128]
//   0x18A6345 mov     edx, 5
//   0x18A634A mov     rsi, r12
//   0x18A634D call    sub_AE9DF0
//   0x18A6352 jmp     loc_18A5F8B
//   0x18A6357 align 20h
//   0x18A6360 mov     rdi, [rsp+158h+var_128]
//   0x18A6365 mov     edx, 5
//   0x18A636A mov     rsi, rbp
//   0x18A636D call    sub_AE9DF0
//   0x18A6372 jmp     loc_18A629E
//   0x18A6377 align 20h
//   0x18A6380 mov     rdi, qword ptr [rsp+158h+var_148]
//   0x18A6385 call    sub_168B9E0
//   0x18A638A mov     r12, rax
//   0x18A638D mov     rax, [rsp+158h+ptr]
//   0x18A6395 test    rax, rax
//   0x18A6398 jz      short loc_18A63A3
//   0x18A639A mov     rdx, [rax]
//   0x18A639D mov     rdi, rax
//   0x18A63A0 call    qword ptr [rdx+20h]
//   0x18A63A3 mov     rsi, qword ptr [rsp+158h+var_110]
//   0x18A63A8 mov     rdi, r12
//   0x18A63AB mov     qword ptr [rsp+158h+var_E8], rax
//   0x18A63B0 call    sub_1587BC0
//   0x18A63B5 mov     edi, [rsp+158h+var_48]
//   0x18A63BC mov     edx, 5
//   0x18A63C1 mov     rsi, rbp
//   0x18A63C4 shl     rdi, 5
//   0x18A63C8 add     rdi, [rax]
//   0x18A63CB add     rdi, 8
//   0x18A63CF call    sub_AE9DF0
//   0x18A63D4 jmp     loc_18A629E
//   0x18A63D9 align 20h
//   0x18A63E0 mov     rsi, qword ptr [rsp+158h+var_108]
//   0x18A63E5 mov     rdi, [rsp+158h+var_128]
//   0x18A63EA call    sub_1894370
//   0x18A63EF jmp     loc_18A5FD1
//   0x18A63F4 align 8
//   0x18A63F8 mov     rdi, qword ptr [rsp+158h+var_148]
//   0x18A63FD call    sub_168B9E0
//   0x18A6402 mov     r13, rax
//   0x18A6405 mov     rax, [rsp+158h+ptr]
//   0x18A640D test    rax, rax
//   0x18A6410 jz      short loc_18A641B
//   0x18A6412 mov     rdx, [rax]
//   0x18A6415 mov     rdi, rax
//   0x18A6418 call    qword ptr [rdx+20h]
//   0x18A641B lea     rsi, [rsp+158h+var_E8]
//   0x18A6420 mov     rdi, r13
//   0x18A6423 mov     qword ptr [rsp+158h+var_E8], rax
//   0x18A6428 call    sub_1587BC0
//   0x18A642D mov     edi, [rsp+158h+var_48]
//   0x18A6434 mov     edx, 5
//   0x18A6439 mov     rsi, r12
//   0x18A643C shl     rdi, 5
//   0x18A6440 add     rdi, [rax]
//   0x18A6443 add     rdi, 8
//   0x18A6447 call    sub_AE9DF0
//   0x18A644C jmp     loc_18A5F8B
//   0x18A6451 align 8
//   0x18A6458 mov     rdi, qword ptr [rsp+158h+var_148]
//   0x18A645D call    sub_168B9E0
//   0x18A6462 mov     r12, rax
//   0x18A6465 mov     rax, [rsp+158h+ptr]
//   0x18A646D test    rax, rax
//   0x18A6470 jz      short loc_18A647B
//   0x18A6472 mov     rdx, [rax]
//   0x18A6475 mov     rdi, rax
//   0x18A6478 call    qword ptr [rdx+20h]
//   0x18A647B lea     rsi, [rsp+158h+var_E8]
//   0x18A6480 mov     rdi, r12
//   0x18A6483 mov     qword ptr [rsp+158h+var_E8], rax
//   0x18A6488 call    sub_1587BC0
//   0x18A648D mov     edi, [rsp+158h+var_48]
//   0x18A6494 mov     rsi, qword ptr [rsp+158h+var_108]
//   0x18A6499 shl     rdi, 5
//   0x18A649D add     rdi, [rax]
//   0x18A64A0 add     rdi, 8
//   0x18A64A4 call    sub_1894370
//   0x18A64A9 jmp     loc_18A5FD1
//   0x18A64AE xor     ebp, ebp
//   0x18A64B0 jmp     loc_18A612C
// ============================================================

void sub_18A5DC0(/* signature unknown */)
{
    // see disassembly above
}

