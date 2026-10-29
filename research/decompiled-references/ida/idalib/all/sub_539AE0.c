// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x539AE0
// Name:           sub_539AE0
// Function size:  2136 bytes (490 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x539AE0 push    r15
//   0x539AE2 mov     r15, r8
//   0x539AE5 push    r14
//   0x539AE7 mov     r14d, edx
//   0x539AEA push    r13
//   0x539AEC mov     r13d, edx
//   0x539AEF push    r12
//   0x539AF1 mov     r12d, ecx
//   0x539AF4 push    rbp
//   0x539AF5 mov     rbp, rdi
//   0x539AF8 push    rbx
//   0x539AF9 mov     rbx, rsi
//   0x539AFC sub     rsp, 68h
//   0x539B00 mov     rax, fs:28h
//   0x539B09 mov     [rsp+98h+var_40], rax
//   0x539B0E mov     rax, [rdi]
//   0x539B11 mov     rdi, rsi
//   0x539B14 mov     rax, [rax+720h]
//   0x539B1B mov     [rsp+98h+var_98], rax
//   0x539B1F call    _clear_tinfo_t
//   0x539B24 cmp     r12b, 7
//   0x539B28 jz      loc_539C90
//   0x539B2E mov     eax, r12d
//   0x539B31 and     eax, 3Fh
//   0x539B34 cmp     al, 3Dh ; '='
//   0x539B36 jz      loc_539BF0
//   0x539B3C cmp     r12b, 0Bh
//   0x539B40 jz      loc_539C40
//   0x539B46 lea     eax, [r12-0Ah]
//   0x539B4B movzx   r14d, r14b
//   0x539B4F cmp     al, 1
//   0x539B51 jbe     loc_539C4B
//   0x539B57 mov     rdi, [rbp+0]
//   0x539B5B mov     edx, r14d
//   0x539B5E mov     rsi, rbx
//   0x539B61 call    sub_533EC0
//   0x539B66 xor     r8d, r8d
//   0x539B69 movzx   edx, r12b
//   0x539B6D mov     rcx, r15
//   0x539B70 mov     r13, rax
//   0x539B73 mov     rax, [rsp+98h+var_98]
//   0x539B77 mov     esi, r14d
//   0x539B7A mov     rax, [rax+90h]
//   0x539B81 mov     r10, [rax+r13*8]
//   0x539B85 mov     rdi, r10
//   0x539B88 mov     [rsp+98h+var_90], r10
//   0x539B8D call    sub_542EF0
//   0x539B92 mov     r10, [rsp+98h+var_90]
//   0x539B97 test    al, al
//   0x539B99 jz      loc_539D20
//   0x539B9F cmp     qword ptr [r10+20h], 0
//   0x539BA4 mov     rsi, [rbx]
//   0x539BA7 jz      loc_539CD8
//   0x539BAD or      rsi, 100h
//   0x539BB4 mov     [rbx], rsi
//   0x539BB7 mov     rdi, [rsp+98h+var_98]
//   0x539BBB mov     byte ptr [rsp+98h+var_90], al
//   0x539BBF call    sub_53EAE0
//   0x539BC4 movzx   eax, byte ptr [rsp+98h+var_90]
//   0x539BC9 mov     rdx, [rsp+98h+var_40]
//   0x539BCE sub     rdx, fs:28h
//   0x539BD7 jnz     loc_53A246
//   0x539BDD add     rsp, 68h
//   0x539BE1 pop     rbx
//   0x539BE2 pop     rbp
//   0x539BE3 pop     r12
//   0x539BE5 pop     r13
//   0x539BE7 pop     r14
//   0x539BE9 pop     r15
//   0x539BEB retn
//   0x539BEC align 10h
//   0x539BF0 movdqu  xmm0, xmmword ptr [r15]
//   0x539BF5 mov     rax, [r15+10h]
//   0x539BF9 mov     r11, [r15]
//   0x539BFC mov     [rsp+98h+var_48], rax
//   0x539C01 movaps  xmmword ptr [rsp+98h+s2], xmm0
//   0x539C06 test    r11, r11
//   0x539C09 jz      loc_539CC0
//   0x539C0F movzx   eax, byte ptr [r15+11h]
//   0x539C14 movzx   r13d, byte ptr [r15+10h]
//   0x539C19 mov     edx, dword ptr [rsp+98h+s2+8]
//   0x539C1D mov     byte ptr [rsp+98h+var_90], al
//   0x539C21 test    r13b, r13b
//   0x539C24 jz      loc_539D40
//   0x539C2A lea     eax, [rdx-1]
//   0x539C2D cmp     eax, 0FFFFFFEh
//   0x539C32 jbe     loc_539DC8
//   0x539C38 xor     eax, eax
//   0x539C3A jmp     short loc_539BC9
//   0x539C3C align 20h
//   0x539C40 movzx   r13d, byte ptr [r15]
//   0x539C44 and     r13d, 0FFFFFFC0h
//   0x539C48 or      r13d, r14d
//   0x539C4B movzx   r14d, r13b
//   0x539C4F mov     rsi, r15
//   0x539C52 mov     edi, r14d
//   0x539C55 call    sub_5312C0
//   0x539C5A cmp     eax, 1Fh
//   0x539C5D jz      loc_539B57
//   0x539C63 mov     esi, eax
//   0x539C65 mov     rdi, rbx
//   0x539C68 call    _get_stock_tinfo
//   0x539C6D test    al, al
//   0x539C6F jz      loc_53A279
//   0x539C75 mov     rax, [rbx]
//   0x539C78 test    al, al
//   0x539C7A jz      short loc_539CAE
//   0x539C7C and     al, 3Fh
//   0x539C7E and     r13d, 0C0h
//   0x539C85 or      rax, r13
//   0x539C88 mov     [rbx], rax
//   0x539C8B jmp     short loc_539CAE
//   0x539C8D align 10h
//   0x539C90 mov     eax, r14d
//   0x539C93 and     eax, 0Fh
//   0x539C96 cmp     al, 9
//   0x539C98 ja      loc_53A24B
//   0x539C9E test    r15, r15
//   0x539CA1 jnz     loc_53A24B
//   0x539CA7 movzx   r9d, r14b
//   0x539CAB mov     [rbx], r9
//   0x539CAE mov     eax, 1
//   0x539CB3 jmp     loc_539BC9
//   0x539CB8 align 20h
//   0x539CC0 mov     r11, [rbp+8]
//   0x539CC4 test    r11, r11
//   0x539CC7 jnz     loc_539C0F
//   0x539CCD xor     eax, eax
//   0x539CCF jmp     loc_539BC9
//   0x539CD4 align 8
//   0x539CD8 cmp     rsi, 0FFh
//   0x539CDF ja      loc_539BB7
//   0x539CE5 and     esi, 0Fh
//   0x539CE8 cmp     sil, 9
//   0x539CEC jbe     loc_539BC9
//   0x539CF2 mov     rax, cs:under_debugger_ptr
//   0x539CF9 cmp     byte ptr [rax], 0
//   0x539CFC jnz     loc_2C23DC
//   0x539D02 mov     rax, [rsp+98h+var_40]
//   0x539D07 sub     rax, fs:28h
//   0x539D10 jnz     loc_53A2A7
//   0x539D16 mov     edi, 3A5h
//   0x539D1B call    _interr
//   0x539D20 mov     rsi, [rbp+0]
//   0x539D24 mov     rdx, r13
//   0x539D27 mov     rdi, r10; void *
//   0x539D2A call    sub_541730
//   0x539D2F mov     qword ptr [rbx], 0
//   0x539D36 xor     eax, eax
//   0x539D38 jmp     loc_539BC9
//   0x539D3D align 20h
//   0x539D40 mov     r15, [rsp+98h+s2+8]
//   0x539D45 lea     rsi, [rsp+98h+var_5C]
//   0x539D4A mov     [rsp+98h+var_88], r11
//   0x539D4F mov     rdi, r15
//   0x539D52 call    _is_ordinal_name
//   0x539D57 mov     edx, [rsp+98h+var_5C]
//   0x539D5B mov     r11, [rsp+98h+var_88]
//   0x539D60 test    al, al
//   0x539D62 jnz     loc_539E5F
//   0x539D68 test    r12b, r12b
//   0x539D6B jns     loc_539E48
//   0x539D71 cmp     byte ptr [r15], 0
//   0x539D75 jnz     short loc_539D85
//   0x539D77 mov     eax, r14d
//   0x539D7A and     eax, 3Fh
//   0x539D7D cmp     al, 3Dh ; '='
//   0x539D7F jz      loc_539C38
//   0x539D85 mov     rax, [rsp+98h+var_98]
//   0x539D89 mov     rdx, [rax+18h]
//   0x539D8D lea     r12, [rax+10h]
//   0x539D91 test    rdx, rdx
//   0x539D94 jz      loc_539ED0
//   0x539D9A mov     r10, r12
//   0x539D9D jmp     short loc_539DB6
//   0x539D9F align 20h
//   0x539DA0 jz      loc_539E70
//   0x539DA6 mov     r10, rdx
//   0x539DA9 mov     rdx, [rdx+10h]
//   0x539DAD test    rdx, rdx
//   0x539DB0 jz      loc_539FB8
//   0x539DB6 cmp     [rdx+20h], r11
//   0x539DBA jnb     short loc_539DA0
//   0x539DBC mov     rdx, [rdx+18h]
//   0x539DC0 jmp     short loc_539DAD
//   0x539DC2 align 8
//   0x539DC8 mov     rdi, [rsp+98h+var_98]
//   0x539DCC mov     rsi, r11
//   0x539DCF mov     r13d, 1
//   0x539DD5 call    sub_5345E0
//   0x539DDA mov     rdx, rax
//   0x539DDD cmp     rdx, 0FFFFFFFFFFFFFFFFh
//   0x539DE1 jz      loc_539ED0
//   0x539DE7 mov     rdi, [rsp+98h+var_98]
//   0x539DEB movzx   r15d, r14b
//   0x539DEF mov     rsi, rbx
//   0x539DF2 mov     ecx, r15d
//   0x539DF5 call    sub_534D30
//   0x539DFA mov     r10, rax
//   0x539DFD cmp     byte ptr [rsp+98h+var_90], 0
//   0x539E02 mov     eax, 1
//   0x539E07 jz      loc_539B9F
//   0x539E0D mov     rsi, [rbp+0]
//   0x539E11 mov     rdi, r10
//   0x539E14 mov     ecx, 1
//   0x539E19 mov     edx, r15d
//   0x539E1C mov     [rsp+98h+var_90], r10
//   0x539E21 call    sub_53CE30
//   0x539E26 mov     r10, [rsp+98h+var_90]
//   0x539E2B test    al, al
//   0x539E2D jz      loc_539B9F
//   0x539E33 movzx   eax, byte ptr [r10+44h]
//   0x539E38 shr     al, 2
//   0x539E3B and     eax, 1
//   0x539E3E jmp     loc_539B9F
//   0x539E43 align 8
//   0x539E48 mov     rdi, r11
//   0x539E4B mov     rsi, r15
//   0x539E4E mov     [rsp+98h+var_88], r11
//   0x539E53 call    _get_type_ordinal
//   0x539E58 mov     r11, [rsp+98h+var_88]
//   0x539E5D mov     edx, eax
//   0x539E5F test    edx, edx
//   0x539E61 jz      loc_539D71
//   0x539E67 mov     dword ptr [rsp+98h+s2+8], edx
//   0x539E6B jmp     loc_539C2A
//   0x539E70 mov     rdi, [rdx+28h]; s1
//   0x539E74 mov     rsi, r15; s2
//   0x539E77 mov     [rsp+98h+var_78], r11
//   0x539E7C mov     [rsp+98h+var_80], r10
//   0x539E81 mov     [rsp+98h+var_88], rdx
//   0x539E86 call    _strcmp
//   0x539E8B mov     rdx, [rsp+98h+var_88]
//   0x539E90 mov     r10, [rsp+98h+var_80]
//   0x539E95 test    eax, eax
//   0x539E97 mov     r11, [rsp+98h+var_78]
//   0x539E9C jns     loc_539DA6
//   0x539EA2 jmp     loc_539DBC
//   0x539EA7 mov     rsi, [r10+28h]; s2
//   0x539EAB mov     rdi, r15; s1
//   0x539EAE mov     [rsp+98h+var_80], r11
//   0x539EB3 mov     [rsp+98h+var_88], r10
//   0x539EB8 call    _strcmp
//   0x539EBD mov     r10, [rsp+98h+var_88]
//   0x539EC2 mov     r11, [rsp+98h+var_80]
//   0x539EC7 test    eax, eax
//   0x539EC9 jns     loc_539FD7
//   0x539ECF nop
//   0x539ED0 mov     eax, r14d
//   0x539ED3 and     eax, 0Fh
//   0x539ED6 cmp     al, 0Dh
//   0x539ED8 jnz     loc_53A2AC
//   0x539EDE mov     rdi, [rbp+0]
//   0x539EE2 movzx   r15d, r14b
//   0x539EE6 mov     rsi, rbx
//   0x539EE9 mov     [rsp+98h+var_80], r11
//   0x539EEE mov     edx, r15d
//   0x539EF1 call    sub_533EC0
//   0x539EF6 mov     edi, 20h ; ' '; unsigned __int64
//   0x539EFB mov     r12, rax
//   0x539EFE mov     rax, [rsp+98h+var_98]
//   0x539F02 mov     rax, [rax+90h]
//   0x539F09 mov     r10, [rax+r12*8]
//   0x539F0D mov     [rsp+98h+var_88], r10
//   0x539F12 call    __Znwm; operator new(ulong)
//   0x539F17 mov     r11, [rsp+98h+var_80]
//   0x539F1C mov     r10, [rsp+98h+var_88]
//   0x539F21 mov     qword ptr [rax+8], 0
//   0x539F29 mov     rdx, rax
//   0x539F2C mov     [rax], r11
//   0x539F2F mov     qword ptr [rax+10h], 0
//   0x539F37 mov     dword ptr [rax+18h], 0
//   0x539F3E mov     [r10+20h], rax
//   0x539F42 test    r13b, r13b
//   0x539F45 jz      loc_539FE0
//   0x539F4B mov     eax, dword ptr [rsp+98h+s2+8]
//   0x539F4F or      word ptr [r10+44h], 8
//   0x539F55 mov     [rdx+8], eax
//   0x539F58 test    eax, eax
//   0x539F5A jz      loc_53A304
//   0x539F60 mov     rdi, [rsp+98h+var_98]
//   0x539F64 mov     rcx, r12
//   0x539F67 mov     edx, eax
//   0x539F69 mov     rsi, r11
//   0x539F6C mov     [rsp+98h+var_88], r10
//   0x539F71 call    sub_5346A0
//   0x539F76 mov     r10, [rsp+98h+var_88]
//   0x539F7B test    al, al
//   0x539F7D jnz     loc_539DFD
//   0x539F83 mov     rax, cs:under_debugger_ptr
//   0x539F8A cmp     byte ptr [rax], 0
//   0x539F8D jnz     loc_2C23DC
//   0x539F93 mov     rax, [rsp+98h+var_40]
//   0x539F98 sub     rax, fs:28h
//   0x539FA1 jnz     loc_53A2FF
//   0x539FA7 mov     edi, 3D2h
//   0x539FAC call    _interr
//   0x539FB1 align 8
//   0x539FB8 cmp     r10, r12
//   0x539FBB jz      loc_539ED0
//   0x539FC1 mov     rax, [r10+20h]
//   0x539FC5 cmp     r11, rax
//   0x539FC8 jb      loc_539ED0
//   0x539FCE cmp     rax, r11
//   0x539FD1 jz      loc_539EA7
//   0x539FD7 mov     rdx, [r10+30h]
//   0x539FDB jmp     loc_539DDD
//   0x539FE0 mov     rdi, [rsp+98h+s2+8]
//   0x539FE5 cmp     byte ptr [rdi], 0
//   0x539FE8 jz      loc_53A188
//   0x539FEE mov     [rsp+98h+var_78], r11
//   0x539FF3 mov     [rsp+98h+var_88], rdx
//   0x539FF8 mov     [rsp+98h+var_80], r10
//   0x539FFD call    _qstrdup
//   0x53A002 mov     rdx, [rsp+98h+var_88]
//   0x53A007 mov     r10, [rsp+98h+var_80]
//   0x53A00C mov     r13, rax
//   0x53A00F mov     r11, [rsp+98h+var_78]
//   0x53A014 mov     [rdx+8], rax
//   0x53A018 mov     rax, [rsp+98h+var_98]
//   0x53A01C mov     rdx, [rax+18h]
//   0x53A020 lea     r14, [rax+10h]
//   0x53A024 mov     [rsp+98h+var_88], r14
//   0x53A029 test    rdx, rdx
//   0x53A02C jnz     short loc_53A046
//   0x53A02E jmp     loc_53A0E0
//   0x53A033 align 8
//   0x53A038 jz      short loc_53A058
//   0x53A03A mov     r14, rdx
//   0x53A03D mov     rdx, [rdx+10h]
//   0x53A041 test    rdx, rdx
//   0x53A044 jz      short loc_53A090
//   0x53A046 cmp     [rdx+20h], r11
//   0x53A04A jnb     short loc_53A038
//   0x53A04C mov     rdx, [rdx+18h]
//   0x53A050 jmp     short loc_53A041
//   0x53A052 align 8
//   0x53A058 mov     rdi, [rdx+28h]; s1
//   0x53A05C mov     rsi, r13; s2
//   0x53A05F mov     [rsp+98h+var_70], r11
//   0x53A064 mov     [rsp+98h+var_78], r10
//   0x53A069 mov     [rsp+98h+var_80], rdx
//   0x53A06E call    _strcmp
//   0x53A073 mov     rdx, [rsp+98h+var_80]
//   0x53A078 mov     r10, [rsp+98h+var_78]
//   0x53A07D test    eax, eax
//   0x53A07F mov     r11, [rsp+98h+var_70]
//   0x53A084 jns     short loc_53A03A
//   0x53A086 jmp     short loc_53A04C
//   0x53A088 align 10h
//   0x53A090 cmp     [rsp+98h+var_88], r14
//   0x53A095 jz      short loc_53A0F0
//   0x53A097 mov     rax, [r14+20h]
//   0x53A09B cmp     r11, rax
//   0x53A09E jb      short loc_53A0F0
//   0x53A0A0 cmp     rax, r11
//   0x53A0A3 jz      loc_53A1D5
//   0x53A0A9 mov     rax, cs:under_debugger_ptr
//   0x53A0B0 cmp     byte ptr [rax], 0
//   0x53A0B3 jnz     loc_2C23DC
//   0x53A0B9 mov     rax, [rsp+98h+var_40]
//   0x53A0BE sub     rax, fs:28h
//   0x53A0C7 jnz     loc_53A2D6
//   0x53A0CD mov     edi, 3D3h
//   0x53A0D2 call    _interr
//   0x53A0D7 align 20h
//   0x53A0E0 mov     r14, [rsp+98h+var_88]
//   0x53A0E5 nop     word ptr [rax+rax+00000000h]
//   0x53A0F0 mov     edi, 38h ; '8'; unsigned __int64
//   0x53A0F5 mov     [rsp+98h+var_78], r10
//   0x53A0FA mov     [rsp+98h+var_80], r11
//   0x53A0FF call    __Znwm; operator new(ulong)
//   0x53A104 mov     r11, [rsp+98h+var_80]
//   0x53A109 mov     rsi, r14
//   0x53A10C mov     [rax+28h], r13
//   0x53A110 lea     rdx, [rax+20h]
//   0x53A114 mov     [rax+20h], r11
//   0x53A118 mov     [rax+30h], r12
//   0x53A11C mov     [rsp+98h+var_80], rax
//   0x53A121 mov     rax, [rsp+98h+var_98]
//   0x53A125 mov     [rsp+98h+var_70], r11
//   0x53A12A lea     rdi, [rax+8]
//   0x53A12E call    sub_539930
//   0x53A133 mov     r8, [rsp+98h+var_80]
//   0x53A138 mov     r10, [rsp+98h+var_78]
//   0x53A13D test    rdx, rdx
//   0x53A140 jz      short loc_53A1B0
//   0x53A142 mov     edi, 1
//   0x53A147 test    rax, rax
//   0x53A14A jnz     short loc_53A15F
//   0x53A14C mov     rax, [rsp+98h+var_88]
//   0x53A151 mov     r11, [rsp+98h+var_70]
//   0x53A156 cmp     rdx, rax
//   0x53A159 jnz     loc_53A202
//   0x53A15F mov     rcx, [rsp+98h+var_88]
//   0x53A164 mov     rsi, r8
//   0x53A167 mov     [rsp+98h+var_80], r10
//   0x53A16C call    __ZSt29_Rb_tree_insert_and_rebalancebPSt18_Rb_tree_node_baseS0_RS_; std::_Rb_tree_insert_and_rebalance(bool,std::_Rb_tree_node_base *,std::_Rb_tree_node_base *,std::_Rb_tree_node_base&)
//   0x53A171 mov     rax, [rsp+98h+var_98]
//   0x53A175 mov     r10, [rsp+98h+var_80]
//   0x53A17A add     qword ptr [rax+30h], 1
//   0x53A17F jmp     loc_539DFD
//   0x53A184 align 8
//   0x53A188 mov     r9d, r14d
//   0x53A18B and     r9d, 30h
//   0x53A18F cmp     r9b, 30h ; '0'
//   0x53A193 jz      loc_53A2E0
//   0x53A199 or      r9d, 40h
//   0x53A19D movzx   eax, r9b
//   0x53A1A1 or      [r10+44h], ax
//   0x53A1A6 jmp     loc_539FEE
//   0x53A1AB align 10h
//   0x53A1B0 test    r8, r8
//   0x53A1B3 jz      loc_539DFD
//   0x53A1B9 mov     esi, 38h ; '8'; unsigned __int64
//   0x53A1BE mov     rdi, r8; void *
//   0x53A1C1 mov     [rsp+98h+var_88], r10
//   0x53A1C6 call    __ZdlPvm; operator delete(void *,ulong)
//   0x53A1CB mov     r10, [rsp+98h+var_88]
//   0x53A1D0 jmp     loc_539DFD
//   0x53A1D5 mov     rsi, [r14+28h]; s2
//   0x53A1D9 mov     rdi, r13; s1
//   0x53A1DC mov     [rsp+98h+var_78], r11
//   0x53A1E1 mov     [rsp+98h+var_80], r10
//   0x53A1E6 call    _strcmp
//   0x53A1EB test    eax, eax
//   0x53A1ED jns     loc_53A0A9
//   0x53A1F3 mov     r10, [rsp+98h+var_80]
//   0x53A1F8 mov     r11, [rsp+98h+var_78]
//   0x53A1FD jmp     loc_53A0F0
//   0x53A202 cmp     r11, [rdx+20h]
//   0x53A206 jb      loc_53A15F
//   0x53A20C mov     edi, 0
//   0x53A211 jnz     loc_53A15F
//   0x53A217 mov     rsi, [rdx+28h]; s2
//   0x53A21B mov     rdi, r13; s1
//   0x53A21E mov     [rsp+98h+var_70], r8
//   0x53A223 mov     [rsp+98h+var_80], rdx
//   0x53A228 call    _strcmp
//   0x53A22D mov     rdx, [rsp+98h+var_80]
//   0x53A232 mov     r10, [rsp+98h+var_78]
//   0x53A237 shr     eax, 1Fh
//   0x53A23A mov     r8, [rsp+98h+var_70]
//   0x53A23F mov     edi, eax
//   0x53A241 jmp     loc_53A15F
//   0x53A246 call    ___stack_chk_fail
//   0x53A24B mov     rax, cs:under_debugger_ptr
//   0x53A252 cmp     byte ptr [rax], 0
//   0x53A255 jnz     loc_2C23DC
//   0x53A25B mov     rax, [rsp+98h+var_40]
//   0x53A260 sub     rax, fs:28h
//   0x53A269 jnz     loc_53A2F5
//   0x53A26F mov     edi, 370h
//   0x53A274 call    _interr
//   0x53A279 mov     rax, cs:under_debugger_ptr
//   0x53A280 cmp     byte ptr [rax], 0
//   0x53A283 jnz     loc_2C23DC
//   0x53A289 mov     rax, [rsp+98h+var_40]
//   0x53A28E sub     rax, fs:28h
//   0x53A297 jnz     loc_53A32E
//   0x53A29D mov     edi, 805h
//   0x53A2A2 call    _interr
//   0x53A2A7 call    ___stack_chk_fail
//   0x53A2AC mov     rax, cs:under_debugger_ptr
//   0x53A2B3 cmp     byte ptr [rax], 0
//   0x53A2B6 jnz     loc_2C23DC
//   0x53A2BC mov     rax, [rsp+98h+var_40]
//   0x53A2C1 sub     rax, fs:28h
//   0x53A2CA jnz     short loc_53A2DB
//   0x53A2CC mov     edi, 372h
//   0x53A2D1 call    _interr
//   0x53A2D6 call    ___stack_chk_fail
//   0x53A2DB call    ___stack_chk_fail
//   0x53A2E0 mov     rax, [rsp+98h+var_40]
//   0x53A2E5 sub     rax, fs:28h
//   0x53A2EE jnz     short loc_53A2FA
//   0x53A2F0 call    sub_5316A0
//   0x53A2F5 call    ___stack_chk_fail
//   0x53A2FA call    ___stack_chk_fail
//   0x53A2FF call    ___stack_chk_fail
//   0x53A304 mov     rax, cs:under_debugger_ptr
//   0x53A30B cmp     byte ptr [rax], 0
//   0x53A30E jnz     loc_2C23DC
//   0x53A314 mov     rax, [rsp+98h+var_40]
//   0x53A319 sub     rax, fs:28h
//   0x53A322 jnz     short loc_53A333
//   0x53A324 mov     edi, 3D1h
//   0x53A329 call    _interr
//   0x53A32E call    ___stack_chk_fail
//   0x53A333 call    ___stack_chk_fail
// ============================================================

void sub_539AE0(/* signature unknown */)
{
    // see disassembly above
}

