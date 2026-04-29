// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x289BE0
// Name:           sub_289BE0
// Function size:  951 bytes (245 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x289BE0 push    r15
//   0x289BE2 push    r14
//   0x289BE4 push    r13
//   0x289BE6 push    r12
//   0x289BE8 push    rbp
//   0x289BE9 mov     rbp, rdi
//   0x289BEC push    rbx
//   0x289BED sub     rsp, 28h
//   0x289BF1 mov     rdx, [rdi+18h]
//   0x289BF5 mov     rax, [rdi+10h]
//   0x289BF9 mov     rbx, fs:28h
//   0x289C02 mov     [rsp+58h+var_40], rbx
//   0x289C07 mov     rbx, rsi
//   0x289C0A lea     r12, [rsp+58h+var_50]
//   0x289C0F mov     r15, [rax+rdx*8-8]
//   0x289C14 mov     rsi, r12
//   0x289C17 mov     [rsp+58h+var_50], 0
//   0x289C20 mov     rdx, rbx
//   0x289C23 call    sub_27D580
//   0x289C28 test    al, al
//   0x289C2A jnz     short loc_289C73
//   0x289C2C cmp     dword ptr [r15+8], 10h
//   0x289C31 jnz     loc_289E00
//   0x289C37 cmp     [r15+18h], rbx
//   0x289C3B jz      loc_289E00
//   0x289C41 mov     rdi, [rbx+30h]
//   0x289C45 mov     esi, 2
//   0x289C4A call    _get_tinfo_property
//   0x289C4F and     eax, 3Fh
//   0x289C52 cmp     al, 1
//   0x289C54 jz      loc_289E00
//   0x289C5A mov     rax, [r15+20h]
//   0x289C5E lea     rsi, [rax+30h]
//   0x289C62 cmp     rax, rbx
//   0x289C65 jz      loc_289F28
//   0x289C6B mov     rdi, r12
//   0x289C6E call    _copy_tinfo_t
//   0x289C73 mov     rsi, [rbx+30h]
//   0x289C77 xor     edx, edx
//   0x289C79 xor     edi, edi
//   0x289C7B call    _get_tinfo_size
//   0x289C80 mov     rsi, [rsp+58h+var_50]
//   0x289C85 xor     edx, edx
//   0x289C87 xor     edi, edi
//   0x289C89 mov     r13, rax
//   0x289C8C call    _get_tinfo_size
//   0x289C91 cmp     dword ptr [r15+8], 39h ; '9'
//   0x289C96 mov     r14, rax
//   0x289C99 jnz     short loc_289CF0
//   0x289C9B cmp     rbx, [r15+18h]
//   0x289C9F jz      short loc_289CF0
//   0x289CA1 xor     edx, edx
//   0x289CA3 mov     rsi, rbx
//   0x289CA6 mov     rdi, r15
//   0x289CA9 call    sub_27CFE0
//   0x289CAE movzx   r15d, byte ptr [rax+3Ch]
//   0x289CB3 test    r15b, r15b
//   0x289CB6 jz      short loc_289CF0
//   0x289CB8 lea     r14, [rbx+30h]
//   0x289CBC mov     rdx, rbx
//   0x289CBF mov     rsi, rbx
//   0x289CC2 mov     rdi, rbp
//   0x289CC5 mov     rcx, r14
//   0x289CC8 call    sub_288BF0
//   0x289CCD test    al, al
//   0x289CCF jnz     loc_289E00
//   0x289CD5 cmp     dword ptr [rbx+8], 30h ; '0'
//   0x289CD9 jz      loc_289E90
//   0x289CDF mov     rsi, r12
//   0x289CE2 mov     rdi, rbx
//   0x289CE5 call    sub_23DAF0
//   0x289CEA jmp     loc_289E03
//   0x289CEF align 10h
//   0x289CF0 mov     rax, [rbp+48h]
//   0x289CF4 mov     edx, [rbx+8]
//   0x289CF7 mov     rsi, [rax+70h]
//   0x289CFB cmp     edx, 33h ; '3'
//   0x289CFE jnz     loc_289E38
//   0x289D04 mov     ecx, [rsi+54h]
//   0x289D07 mov     rax, rbx
//   0x289D0A jmp     short loc_289D30
//   0x289D0C align 20h
//   0x289D20 mov     rax, [rax+18h]
//   0x289D24 mov     edx, [rax+8]
//   0x289D27 cmp     edx, 33h ; '3'
//   0x289D2A jnz     loc_289E38
//   0x289D30 cmp     [rax+28h], ecx
//   0x289D33 jz      short loc_289D20
//   0x289D35 mov     rdi, [rbp+18h]
//   0x289D39 mov     esi, [rsi+54h]
//   0x289D3C mov     r8, [rbp+10h]
//   0x289D40 mov     eax, edi
//   0x289D42 sub     eax, 1
//   0x289D45 js      loc_289F74
//   0x289D4B mov     edx, eax
//   0x289D4D lea     rcx, [r8+rdx*8]
//   0x289D51 jmp     short loc_289D69
//   0x289D53 align 8
//   0x289D58 cmp     esi, [rdx+28h]
//   0x289D5B jnz     short loc_289D72
//   0x289D5D sub     eax, 1
//   0x289D60 sub     rcx, 8
//   0x289D64 cmp     eax, 0FFFFFFFFh
//   0x289D67 jz      short loc_289D83
//   0x289D69 mov     rdx, [rcx]
//   0x289D6C cmp     dword ptr [rdx+8], 33h ; '3'
//   0x289D70 jz      short loc_289D58
//   0x289D72 movsxd  rdx, eax
//   0x289D75 mov     rcx, [r8+rdx*8]
//   0x289D79 cmp     dword ptr [rcx+8], 39h ; '9'
//   0x289D7D jz      loc_289F38
//   0x289D83 cmp     r13d, 0FFFFFFFFh
//   0x289D87 jz      loc_289E70
//   0x289D8D cmp     r14d, 0FFFFFFFFh
//   0x289D91 jz      short loc_289E00
//   0x289D93 mov     rdi, [rbp+48h]
//   0x289D97 lea     rcx, [rbx+30h]
//   0x289D9B mov     rdx, r12
//   0x289D9E mov     rsi, rbx
//   0x289DA1 call    sub_279800
//   0x289DA6 test    al, al
//   0x289DA8 jz      short loc_289E00
//   0x289DAA mov     rdi, [rbx+30h]
//   0x289DAE mov     esi, 2
//   0x289DB3 call    _get_tinfo_property
//   0x289DB8 and     eax, 0Fh
//   0x289DBB cmp     al, 0Ah
//   0x289DBD jnz     loc_289E50
//   0x289DC3 cmp     dword ptr [rbx+8], 30h ; '0'
//   0x289DC7 jz      loc_289E50
//   0x289DCD mov     rdi, [rsp+58h+var_50]
//   0x289DD2 mov     esi, 9
//   0x289DD7 mov     [rsp+58h+var_48], 0
//   0x289DE0 call    _get_tinfo_property
//   0x289DE5 mov     [rsp+58h+var_48], rax
//   0x289DEA test    al, 0Eh
//   0x289DEC jnz     short loc_289E46
//   0x289DEE test    al, 30h
//   0x289DF0 jz      short loc_289E46
//   0x289DF2 lea     rdi, [rsp+58h+var_48]
//   0x289DF7 call    _clear_tinfo_t
//   0x289DFC nop     dword ptr [rax+00h]
//   0x289E00 xor     r15d, r15d
//   0x289E03 mov     rdi, r12
//   0x289E06 call    _clear_tinfo_t
//   0x289E0B mov     rax, [rsp+58h+var_40]
//   0x289E10 sub     rax, fs:28h
//   0x289E19 jnz     loc_289F82
//   0x289E1F add     rsp, 28h
//   0x289E23 mov     eax, r15d
//   0x289E26 pop     rbx
//   0x289E27 pop     rbp
//   0x289E28 pop     r12
//   0x289E2A pop     r13
//   0x289E2C pop     r14
//   0x289E2E pop     r15
//   0x289E30 retn
//   0x289E31 align 8
//   0x289E38 cmp     edx, 30h ; '0'
//   0x289E3B jz      loc_289D83
//   0x289E41 jmp     loc_289D35
//   0x289E46 lea     rdi, [rsp+58h+var_48]
//   0x289E4B call    _clear_tinfo_t
//   0x289E50 cmp     r13d, r14d
//   0x289E53 jnz     short loc_289E70
//   0x289E55 mov     rdi, r12
//   0x289E58 call    sub_3264F0
//   0x289E5D test    al, al
//   0x289E5F jnz     short loc_289E00
//   0x289E61 nop     word ptr [rax+rax+00000000h]
//   0x289E6C nop     dword ptr [rax+00h]
//   0x289E70 mov     rsi, [rbp+48h]
//   0x289E74 mov     rdx, r12
//   0x289E77 mov     rdi, rbx
//   0x289E7A call    sub_23F7C0
//   0x289E7F mov     r15d, eax
//   0x289E82 jmp     loc_289E03
//   0x289E87 align 10h
//   0x289E90 mov     rax, [rbx+18h]
//   0x289E94 xor     edx, edx
//   0x289E96 xor     edi, edi
//   0x289E98 mov     rsi, [rax+30h]
//   0x289E9C call    _get_tinfo_size
//   0x289EA1 movsxd  r13, r13d
//   0x289EA4 cmp     r13, rax
//   0x289EA7 jnz     loc_289CDF
//   0x289EAD mov     rax, [rbx+18h]
//   0x289EB1 mov     esi, 2
//   0x289EB6 mov     rdi, [rax+30h]
//   0x289EBA call    _get_tinfo_property
//   0x289EBF and     eax, 0Fh
//   0x289EC2 mov     rdi, [rbx+30h]
//   0x289EC6 mov     esi, 2
//   0x289ECB cmp     al, 9
//   0x289ECD setz    bpl
//   0x289ED1 call    _get_tinfo_property
//   0x289ED6 and     eax, 0Fh
//   0x289ED9 cmp     al, 9
//   0x289EDB setz    al
//   0x289EDE cmp     bpl, al
//   0x289EE1 jnz     loc_289CDF
//   0x289EE7 mov     rax, [rbx+18h]
//   0x289EEB mov     esi, 3
//   0x289EF0 mov     rdi, [rax+30h]
//   0x289EF4 call    _get_tinfo_property
//   0x289EF9 mov     rdi, [rbx+30h]
//   0x289EFD mov     esi, 3
//   0x289F02 mov     rbp, rax
//   0x289F05 call    _get_tinfo_property
//   0x289F0A cmp     ebp, eax
//   0x289F0C jnz     loc_289CDF
//   0x289F12 mov     rsi, r12
//   0x289F15 mov     rdi, r14
//   0x289F18 call    _copy_tinfo_t
//   0x289F1D jmp     loc_289E03
//   0x289F22 align 8
//   0x289F28 mov     rax, [r15+28h]
//   0x289F2C lea     rsi, [rax+30h]
//   0x289F30 jmp     loc_289C6B
//   0x289F35 align 8
//   0x289F38 sub     rdi, 1
//   0x289F3C mov     rsi, [rcx+18h]
//   0x289F40 mov     rcx, rbx
//   0x289F43 cmp     rdx, rdi
//   0x289F46 jz      short loc_289F51
//   0x289F48 add     eax, 1
//   0x289F4B cdqe
//   0x289F4D mov     rcx, [r8+rax*8]
//   0x289F51 cmp     rsi, rcx
//   0x289F54 jnz     loc_289D83
//   0x289F5A xor     edx, edx
//   0x289F5C mov     rsi, r12
//   0x289F5F mov     rdi, rbx
//   0x289F62 call    sub_278E60
//   0x289F67 test    al, al
//   0x289F69 jnz     loc_289D83
//   0x289F6F jmp     loc_289E00
//   0x289F74 cmp     eax, 0FFFFFFFFh
//   0x289F77 jz      loc_289D83
//   0x289F7D jmp     loc_289D72
//   0x289F82 call    ___stack_chk_fail
//   0x289F87 mov     rbx, rax
//   0x289F8A jmp     loc_4A782
//   0x289F8F mov     rbx, rax
//   0x289F92 jmp     loc_4A78C
// ============================================================

void sub_289BE0(/* signature unknown */)
{
    // see disassembly above
}

