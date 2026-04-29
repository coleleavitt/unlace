// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x28BBA0
// Name:           sub_28BBA0
// Function size:  951 bytes (245 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x28BBA0 push    r15
//   0x28BBA2 push    r14
//   0x28BBA4 push    r13
//   0x28BBA6 push    r12
//   0x28BBA8 push    rbp
//   0x28BBA9 mov     rbp, rdi
//   0x28BBAC push    rbx
//   0x28BBAD sub     rsp, 28h
//   0x28BBB1 mov     rdx, [rdi+18h]
//   0x28BBB5 mov     rax, [rdi+10h]
//   0x28BBB9 mov     rbx, fs:28h
//   0x28BBC2 mov     [rsp+58h+var_40], rbx
//   0x28BBC7 mov     rbx, rsi
//   0x28BBCA lea     r12, [rsp+58h+var_50]
//   0x28BBCF mov     r15, [rax+rdx*8-8]
//   0x28BBD4 mov     rsi, r12
//   0x28BBD7 mov     [rsp+58h+var_50], 0
//   0x28BBE0 mov     rdx, rbx
//   0x28BBE3 call    sub_27F540
//   0x28BBE8 test    al, al
//   0x28BBEA jnz     short loc_28BC33
//   0x28BBEC cmp     dword ptr [r15+8], 10h
//   0x28BBF1 jnz     loc_28BDC0
//   0x28BBF7 cmp     [r15+18h], rbx
//   0x28BBFB jz      loc_28BDC0
//   0x28BC01 mov     rdi, [rbx+30h]
//   0x28BC05 mov     esi, 2
//   0x28BC0A call    _get_tinfo_property
//   0x28BC0F and     eax, 3Fh
//   0x28BC12 cmp     al, 1
//   0x28BC14 jz      loc_28BDC0
//   0x28BC1A mov     rax, [r15+20h]
//   0x28BC1E lea     rsi, [rax+30h]
//   0x28BC22 cmp     rax, rbx
//   0x28BC25 jz      loc_28BEE8
//   0x28BC2B mov     rdi, r12
//   0x28BC2E call    _copy_tinfo_t
//   0x28BC33 mov     rsi, [rbx+30h]
//   0x28BC37 xor     edx, edx
//   0x28BC39 xor     edi, edi
//   0x28BC3B call    _get_tinfo_size
//   0x28BC40 mov     rsi, [rsp+58h+var_50]
//   0x28BC45 xor     edx, edx
//   0x28BC47 xor     edi, edi
//   0x28BC49 mov     r13, rax
//   0x28BC4C call    _get_tinfo_size
//   0x28BC51 cmp     dword ptr [r15+8], 39h ; '9'
//   0x28BC56 mov     r14, rax
//   0x28BC59 jnz     short loc_28BCB0
//   0x28BC5B cmp     rbx, [r15+18h]
//   0x28BC5F jz      short loc_28BCB0
//   0x28BC61 xor     edx, edx
//   0x28BC63 mov     rsi, rbx
//   0x28BC66 mov     rdi, r15
//   0x28BC69 call    sub_27EFA0
//   0x28BC6E movzx   r15d, byte ptr [rax+3Ch]
//   0x28BC73 test    r15b, r15b
//   0x28BC76 jz      short loc_28BCB0
//   0x28BC78 lea     r14, [rbx+30h]
//   0x28BC7C mov     rdx, rbx
//   0x28BC7F mov     rsi, rbx
//   0x28BC82 mov     rdi, rbp
//   0x28BC85 mov     rcx, r14
//   0x28BC88 call    sub_28ABB0
//   0x28BC8D test    al, al
//   0x28BC8F jnz     loc_28BDC0
//   0x28BC95 cmp     dword ptr [rbx+8], 30h ; '0'
//   0x28BC99 jz      loc_28BE50
//   0x28BC9F mov     rsi, r12
//   0x28BCA2 mov     rdi, rbx
//   0x28BCA5 call    sub_23FAB0
//   0x28BCAA jmp     loc_28BDC3
//   0x28BCAF align 10h
//   0x28BCB0 mov     rax, [rbp+48h]
//   0x28BCB4 mov     edx, [rbx+8]
//   0x28BCB7 mov     rsi, [rax+70h]
//   0x28BCBB cmp     edx, 33h ; '3'
//   0x28BCBE jnz     loc_28BDF8
//   0x28BCC4 mov     ecx, [rsi+54h]
//   0x28BCC7 mov     rax, rbx
//   0x28BCCA jmp     short loc_28BCF0
//   0x28BCCC align 20h
//   0x28BCE0 mov     rax, [rax+18h]
//   0x28BCE4 mov     edx, [rax+8]
//   0x28BCE7 cmp     edx, 33h ; '3'
//   0x28BCEA jnz     loc_28BDF8
//   0x28BCF0 cmp     [rax+28h], ecx
//   0x28BCF3 jz      short loc_28BCE0
//   0x28BCF5 mov     rdi, [rbp+18h]
//   0x28BCF9 mov     esi, [rsi+54h]
//   0x28BCFC mov     r8, [rbp+10h]
//   0x28BD00 mov     eax, edi
//   0x28BD02 sub     eax, 1
//   0x28BD05 js      loc_28BF34
//   0x28BD0B mov     edx, eax
//   0x28BD0D lea     rcx, [r8+rdx*8]
//   0x28BD11 jmp     short loc_28BD29
//   0x28BD13 align 8
//   0x28BD18 cmp     esi, [rdx+28h]
//   0x28BD1B jnz     short loc_28BD32
//   0x28BD1D sub     eax, 1
//   0x28BD20 sub     rcx, 8
//   0x28BD24 cmp     eax, 0FFFFFFFFh
//   0x28BD27 jz      short loc_28BD43
//   0x28BD29 mov     rdx, [rcx]
//   0x28BD2C cmp     dword ptr [rdx+8], 33h ; '3'
//   0x28BD30 jz      short loc_28BD18
//   0x28BD32 movsxd  rdx, eax
//   0x28BD35 mov     rcx, [r8+rdx*8]
//   0x28BD39 cmp     dword ptr [rcx+8], 39h ; '9'
//   0x28BD3D jz      loc_28BEF8
//   0x28BD43 cmp     r13d, 0FFFFFFFFh
//   0x28BD47 jz      loc_28BE30
//   0x28BD4D cmp     r14d, 0FFFFFFFFh
//   0x28BD51 jz      short loc_28BDC0
//   0x28BD53 mov     rdi, [rbp+48h]
//   0x28BD57 lea     rcx, [rbx+30h]
//   0x28BD5B mov     rdx, r12
//   0x28BD5E mov     rsi, rbx
//   0x28BD61 call    sub_27B7C0
//   0x28BD66 test    al, al
//   0x28BD68 jz      short loc_28BDC0
//   0x28BD6A mov     rdi, [rbx+30h]
//   0x28BD6E mov     esi, 2
//   0x28BD73 call    _get_tinfo_property
//   0x28BD78 and     eax, 0Fh
//   0x28BD7B cmp     al, 0Ah
//   0x28BD7D jnz     loc_28BE10
//   0x28BD83 cmp     dword ptr [rbx+8], 30h ; '0'
//   0x28BD87 jz      loc_28BE10
//   0x28BD8D mov     rdi, [rsp+58h+var_50]
//   0x28BD92 mov     esi, 9
//   0x28BD97 mov     [rsp+58h+var_48], 0
//   0x28BDA0 call    _get_tinfo_property
//   0x28BDA5 mov     [rsp+58h+var_48], rax
//   0x28BDAA test    al, 0Eh
//   0x28BDAC jnz     short loc_28BE06
//   0x28BDAE test    al, 30h
//   0x28BDB0 jz      short loc_28BE06
//   0x28BDB2 lea     rdi, [rsp+58h+var_48]
//   0x28BDB7 call    _clear_tinfo_t
//   0x28BDBC nop     dword ptr [rax+00h]
//   0x28BDC0 xor     r15d, r15d
//   0x28BDC3 mov     rdi, r12
//   0x28BDC6 call    _clear_tinfo_t
//   0x28BDCB mov     rax, [rsp+58h+var_40]
//   0x28BDD0 sub     rax, fs:28h
//   0x28BDD9 jnz     loc_28BF42
//   0x28BDDF add     rsp, 28h
//   0x28BDE3 mov     eax, r15d
//   0x28BDE6 pop     rbx
//   0x28BDE7 pop     rbp
//   0x28BDE8 pop     r12
//   0x28BDEA pop     r13
//   0x28BDEC pop     r14
//   0x28BDEE pop     r15
//   0x28BDF0 retn
//   0x28BDF1 align 8
//   0x28BDF8 cmp     edx, 30h ; '0'
//   0x28BDFB jz      loc_28BD43
//   0x28BE01 jmp     loc_28BCF5
//   0x28BE06 lea     rdi, [rsp+58h+var_48]
//   0x28BE0B call    _clear_tinfo_t
//   0x28BE10 cmp     r13d, r14d
//   0x28BE13 jnz     short loc_28BE30
//   0x28BE15 mov     rdi, r12
//   0x28BE18 call    sub_327FB0
//   0x28BE1D test    al, al
//   0x28BE1F jnz     short loc_28BDC0
//   0x28BE21 nop     word ptr [rax+rax+00000000h]
//   0x28BE2C nop     dword ptr [rax+00h]
//   0x28BE30 mov     rsi, [rbp+48h]
//   0x28BE34 mov     rdx, r12
//   0x28BE37 mov     rdi, rbx
//   0x28BE3A call    sub_241780
//   0x28BE3F mov     r15d, eax
//   0x28BE42 jmp     loc_28BDC3
//   0x28BE47 align 10h
//   0x28BE50 mov     rax, [rbx+18h]
//   0x28BE54 xor     edx, edx
//   0x28BE56 xor     edi, edi
//   0x28BE58 mov     rsi, [rax+30h]
//   0x28BE5C call    _get_tinfo_size
//   0x28BE61 movsxd  r13, r13d
//   0x28BE64 cmp     r13, rax
//   0x28BE67 jnz     loc_28BC9F
//   0x28BE6D mov     rax, [rbx+18h]
//   0x28BE71 mov     esi, 2
//   0x28BE76 mov     rdi, [rax+30h]
//   0x28BE7A call    _get_tinfo_property
//   0x28BE7F and     eax, 0Fh
//   0x28BE82 mov     rdi, [rbx+30h]
//   0x28BE86 mov     esi, 2
//   0x28BE8B cmp     al, 9
//   0x28BE8D setz    bpl
//   0x28BE91 call    _get_tinfo_property
//   0x28BE96 and     eax, 0Fh
//   0x28BE99 cmp     al, 9
//   0x28BE9B setz    al
//   0x28BE9E cmp     bpl, al
//   0x28BEA1 jnz     loc_28BC9F
//   0x28BEA7 mov     rax, [rbx+18h]
//   0x28BEAB mov     esi, 3
//   0x28BEB0 mov     rdi, [rax+30h]
//   0x28BEB4 call    _get_tinfo_property
//   0x28BEB9 mov     rdi, [rbx+30h]
//   0x28BEBD mov     esi, 3
//   0x28BEC2 mov     rbp, rax
//   0x28BEC5 call    _get_tinfo_property
//   0x28BECA cmp     ebp, eax
//   0x28BECC jnz     loc_28BC9F
//   0x28BED2 mov     rsi, r12
//   0x28BED5 mov     rdi, r14
//   0x28BED8 call    _copy_tinfo_t
//   0x28BEDD jmp     loc_28BDC3
//   0x28BEE2 align 8
//   0x28BEE8 mov     rax, [r15+28h]
//   0x28BEEC lea     rsi, [rax+30h]
//   0x28BEF0 jmp     loc_28BC2B
//   0x28BEF5 align 8
//   0x28BEF8 sub     rdi, 1
//   0x28BEFC mov     rsi, [rcx+18h]
//   0x28BF00 mov     rcx, rbx
//   0x28BF03 cmp     rdx, rdi
//   0x28BF06 jz      short loc_28BF11
//   0x28BF08 add     eax, 1
//   0x28BF0B cdqe
//   0x28BF0D mov     rcx, [r8+rax*8]
//   0x28BF11 cmp     rsi, rcx
//   0x28BF14 jnz     loc_28BD43
//   0x28BF1A xor     edx, edx
//   0x28BF1C mov     rsi, r12
//   0x28BF1F mov     rdi, rbx
//   0x28BF22 call    sub_27AE20
//   0x28BF27 test    al, al
//   0x28BF29 jnz     loc_28BD43
//   0x28BF2F jmp     loc_28BDC0
//   0x28BF34 cmp     eax, 0FFFFFFFFh
//   0x28BF37 jz      loc_28BD43
//   0x28BF3D jmp     loc_28BD32
//   0x28BF42 call    ___stack_chk_fail
//   0x28BF47 mov     rbx, rax
//   0x28BF4A jmp     loc_4B7FC
//   0x28BF4F mov     rbx, rax
//   0x28BF52 jmp     loc_4B806
// ============================================================

void sub_28BBA0(/* signature unknown */)
{
    // see disassembly above
}

