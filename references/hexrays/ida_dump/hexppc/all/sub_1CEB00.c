// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x1CEB00
// Name:           sub_1CEB00
// Function size:  1174 bytes (243 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x1CEB00 push    rbp
//   0x1CEB01 mov     rbp, rsp
//   0x1CEB04 push    r15
//   0x1CEB06 push    r14
//   0x1CEB08 mov     r14, rdi
//   0x1CEB0B push    r13
//   0x1CEB0D mov     r13, r9
//   0x1CEB10 push    r12
//   0x1CEB12 mov     r12d, r8d
//   0x1CEB15 push    rbx
//   0x1CEB16 sub     rsp, 0A8h
//   0x1CEB1D mov     [rbp+var_88], rsi
//   0x1CEB24 mov     [rbp+var_80], rdx
//   0x1CEB28 mov     [rbp+var_78], rcx
//   0x1CEB2C mov     rsi, fs:28h
//   0x1CEB35 mov     [rbp+var_38], rsi
//   0x1CEB39 mov     rsi, rcx
//   0x1CEB3C call    sub_401A30
//   0x1CEB41 test    al, al
//   0x1CEB43 jnz     short loc_1CEB70
//   0x1CEB45 xor     ebx, ebx
//   0x1CEB47 mov     rax, [rbp+var_38]
//   0x1CEB4B sub     rax, fs:28h
//   0x1CEB54 jnz     loc_1CEF4B
//   0x1CEB5A lea     rsp, [rbp-28h]
//   0x1CEB5E mov     eax, ebx
//   0x1CEB60 pop     rbx
//   0x1CEB61 pop     r12
//   0x1CEB63 pop     r13
//   0x1CEB65 pop     r14
//   0x1CEB67 pop     r15
//   0x1CEB69 pop     rbp
//   0x1CEB6A retn
//   0x1CEB6B align 10h
//   0x1CEB70 mov     ebx, eax
//   0x1CEB72 mov     rax, [r14+8]
//   0x1CEB76 mov     r11, [r14+58h]
//   0x1CEB7A mov     r15, [rax+70h]
//   0x1CEB7E mov     rax, [r14+60h]
//   0x1CEB82 lea     rax, [rax+rax*4]
//   0x1CEB86 shl     rax, 4
//   0x1CEB8A add     rax, r11
//   0x1CEB8D mov     [rbp+var_98], rax
//   0x1CEB94 cmp     rax, r11
//   0x1CEB97 jz      short loc_1CEB47
//   0x1CEB99 mov     [rbp+var_90], 0
//   0x1CEBA4 mov     eax, [r11+48h]
//   0x1CEBA8 test    al, 2
//   0x1CEBAA jz      loc_1CEC90
//   0x1CEBB0 test    r12b, r12b
//   0x1CEBB3 jz      loc_1CEE82
//   0x1CEBB9 cmp     byte ptr [r13+0], 0
//   0x1CEBBE jz      loc_1CEF50
//   0x1CEBC4 cmp     dword ptr [r11], 3
//   0x1CEBC8 jnz     loc_1CEB45
//   0x1CEBCE mov     rax, [r15]
//   0x1CEBD1 movzx   esi, word ptr [r11+8]
//   0x1CEBD6 mov     rdi, r15
//   0x1CEBD9 mov     [rbp+var_B0], r11
//   0x1CEBE0 call    qword ptr [rax+0A8h]
//   0x1CEBE6 movd    xmm0, dword ptr [r15+54h]
//   0x1CEBEC lea     rdi, [rbp+var_50]
//   0x1CEBF0 xor     r9d, r9d
//   0x1CEBF3 mov     edx, eax
//   0x1CEBF5 mov     rax, [r14]
//   0x1CEBF8 mov     [rbp+var_A8], rdi
//   0x1CEBFF mov     r8, rdi
//   0x1CEC02 movd    xmm2, edx
//   0x1CEC06 mov     rdi, r14
//   0x1CEC09 mov     rsi, 200000001h
//   0x1CEC13 punpckldq xmm0, xmm2
//   0x1CEC17 mov     rax, [rax+40h]
//   0x1CEC1B mov     [rbp+var_50], 1
//   0x1CEC23 movq    [rbp+var_50+4], xmm0
//   0x1CEC28 mov     edx, [r15+40h]
//   0x1CEC2C mov     [rbp+var_60], rsi
//   0x1CEC30 lea     rsi, [rbp+var_60]
//   0x1CEC34 mov     [rbp+var_58], edx
//   0x1CEC37 mov     rcx, rsi
//   0x1CEC3A mov     rdx, r13
//   0x1CEC3D mov     [rbp+var_A0], rsi
//   0x1CEC44 mov     esi, 1
//   0x1CEC49 call    rax
//   0x1CEC4B mov     rdi, [rbp+var_A0]
//   0x1CEC52 call    sub_119360
//   0x1CEC57 mov     rdi, [rbp+var_A8]
//   0x1CEC5E call    sub_119360
//   0x1CEC63 mov     r11, [rbp+var_B0]
//   0x1CEC6A add     r11, 50h ; 'P'
//   0x1CEC6E cmp     [rbp+var_98], r11
//   0x1CEC75 jz      loc_1CEB47
//   0x1CEC7B mov     eax, [r11+48h]
//   0x1CEC7F test    al, 2
//   0x1CEC81 jnz     loc_1CEBB9
//   0x1CEC87 nop     word ptr [rax+rax+00000000h]
//   0x1CEC90 cmp     [rbp+var_90], 0
//   0x1CEC98 jz      loc_1CEEA0
//   0x1CEC9E cmp     [rbp+var_90], 1
//   0x1CECA6 jnz     loc_1CEB45
//   0x1CECAC mov     rdi, [rbp+var_78]
//   0x1CECB0 test    byte ptr [rdi+10h], 2Ah
//   0x1CECB4 jnz     loc_1CEB45
//   0x1CECBA mov     dword ptr [rbp+var_B0], 1
//   0x1CECC4 mov     ecx, [rdi+8]
//   0x1CECC7 mov     rdi, [rbp+var_80]
//   0x1CECCB lea     edx, [rcx-16h]
//   0x1CECCE mov     dword ptr [rbp+var_A0], ecx
//   0x1CECD4 mov     [rbp+var_C0], rdi
//   0x1CECDB cmp     edx, 2
//   0x1CECDE ja      loc_1CEEE8
//   0x1CECE4 test    al, 4
//   0x1CECE6 jz      loc_1CEF18
//   0x1CECEC cmp     dword ptr [r11], 3
//   0x1CECF0 jnz     loc_1CEB45
//   0x1CECF6 mov     rax, [r15]
//   0x1CECF9 movzx   esi, word ptr [r11+8]
//   0x1CECFE mov     [rbp+var_A8], r11
//   0x1CED05 mov     rdi, r15
//   0x1CED08 call    qword ptr [rax+0A8h]
//   0x1CED0E mov     edi, 50h ; 'P'
//   0x1CED13 mov     dword ptr [rbp+var_A0], eax
//   0x1CED19 call    j__qalloc_or_throw
//   0x1CED1E mov     rsi, [r14+40h]
//   0x1CED22 mov     rdx, rax
//   0x1CED25 mov     [rbp+var_B8], rax
//   0x1CED2C mov     rax, 0FFFFFFFF00000000h
//   0x1CED36 mov     [rdx+20h], rax
//   0x1CED3A mov     rdi, rdx
//   0x1CED3D mov     qword ptr [rdx+28h], 0
//   0x1CED45 mov     [rdx+30h], rax
//   0x1CED49 mov     qword ptr [rdx+38h], 0
//   0x1CED51 mov     [rdx+40h], rax
//   0x1CED55 mov     qword ptr [rdx+48h], 0
//   0x1CED5D call    sub_32C520
//   0x1CED62 mov     r11, [rbp+var_A8]
//   0x1CED69 mov     esi, 2
//   0x1CED6E mov     rdi, [r11+40h]
//   0x1CED72 mov     [rbp+var_D0], r11
//   0x1CED79 call    _get_tinfo_property
//   0x1CED7E sub     rsp, 8
//   0x1CED82 lea     rsi, [rbp+var_50]
//   0x1CED86 mov     rdi, 0FFFFFFFF00000000h
//   0x1CED90 mov     [rbp+var_50], rdi
//   0x1CED94 and     eax, 0Fh
//   0x1CED97 mov     r9, rsi
//   0x1CED9A lea     rcx, [rbp+var_70]
//   0x1CED9E mov     [rbp+var_48], 0
//   0x1CEDA6 movd    xmm0, dword ptr [r15+54h]
//   0x1CEDAC cmp     al, 9
//   0x1CEDAE mov     rdi, 200000001h
//   0x1CEDB8 movd    xmm1, dword ptr [rbp+var_A0]
//   0x1CEDC0 mov     [rbp+var_60], 1
//   0x1CEDC8 setz    al
//   0x1CEDCB movzx   eax, al
//   0x1CEDCE mov     [rbp+var_70], rdi
//   0x1CEDD2 mov     rdi, r14
//   0x1CEDD5 punpckldq xmm0, xmm1
//   0x1CEDD9 movq    [rbp+var_60+4], xmm0
//   0x1CEDDE mov     edx, [r15+40h]
//   0x1CEDE2 mov     [rbp+var_68], edx
//   0x1CEDE5 lea     rdx, [rbp+var_60]
//   0x1CEDE9 push    rax
//   0x1CEDEA mov     r8, rdx
//   0x1CEDED mov     [rbp+var_A8], rsi
//   0x1CEDF4 mov     rsi, [rbp+var_B8]
//   0x1CEDFB mov     [rbp+var_A0], rdx
//   0x1CEE02 mov     edx, 2
//   0x1CEE07 mov     [rbp+var_C8], rcx
//   0x1CEE0E call    sub_4011A0
//   0x1CEE13 mov     rdi, [rbp+var_C8]
//   0x1CEE1A pop     rax
//   0x1CEE1B pop     rdx
//   0x1CEE1C call    sub_119360
//   0x1CEE21 mov     rdi, [rbp+var_A0]
//   0x1CEE28 call    sub_119360
//   0x1CEE2D mov     rdi, [rbp+var_A8]
//   0x1CEE34 call    sub_119360
//   0x1CEE39 mov     rax, [rbp+var_B8]
//   0x1CEE40 mov     edx, dword ptr [rbp+var_B0]
//   0x1CEE46 mov     rdi, [rbp+var_C0]
//   0x1CEE4D mov     [rax+44h], edx
//   0x1CEE50 call    sub_119360
//   0x1CEE55 mov     rax, [rbp+var_C0]
//   0x1CEE5C mov     rdi, [rbp+var_B8]
//   0x1CEE63 mov     edx, dword ptr [rbp+var_B0]
//   0x1CEE69 mov     r11, [rbp+var_D0]
//   0x1CEE70 mov     byte ptr [rax], 4
//   0x1CEE73 mov     [rax+8], rdi
//   0x1CEE77 mov     [rax+4], edx
//   0x1CEE7A add     [rbp+var_90], 1
//   0x1CEE82 add     r11, 50h ; 'P'
//   0x1CEE86 cmp     [rbp+var_98], r11
//   0x1CEE8D jnz     loc_1CEBA4
//   0x1CEE93 jmp     loc_1CEB47
//   0x1CEE98 align 20h
//   0x1CEEA0 mov     rax, [rbp+var_78]
//   0x1CEEA4 test    byte ptr [rax+10h], 8
//   0x1CEEA8 jnz     loc_1CEB45
//   0x1CEEAE movzx   edi, byte ptr [rax+0Ch]
//   0x1CEEB2 mov     [rbp+var_A0], r11
//   0x1CEEB9 call    _get_dtype_size
//   0x1CEEBE mov     r11, [rbp+var_A0]
//   0x1CEEC5 mov     rcx, [rbp+var_88]
//   0x1CEECC mov     dword ptr [rbp+var_B0], eax
//   0x1CEED2 mov     [rbp+var_C0], rcx
//   0x1CEED9 mov     eax, [r11+48h]
//   0x1CEEDD jmp     loc_1CECE4
//   0x1CEEE2 align 8
//   0x1CEEE8 mov     rax, [rbp+var_78]
//   0x1CEEEC mov     [rbp+var_A0], r11
//   0x1CEEF3 movzx   edi, byte ptr [rax+0Ch]
//   0x1CEEF7 call    _get_dtype_size
//   0x1CEEFC mov     r11, [rbp+var_A0]
//   0x1CEF03 mov     dword ptr [rbp+var_B0], eax
//   0x1CEF09 mov     eax, [r11+48h]
//   0x1CEF0D jmp     loc_1CECE4
//   0x1CEF12 align 8
//   0x1CEF18 mov     ecx, dword ptr [rbp+var_B0]
//   0x1CEF1E mov     rsi, [rbp+var_C0]
//   0x1CEF25 mov     rdx, r11
//   0x1CEF28 mov     rdi, r15
//   0x1CEF2B mov     [rbp+var_A0], r11
//   0x1CEF32 call    sub_1CE7D0
//   0x1CEF37 mov     r11, [rbp+var_A0]
//   0x1CEF3E test    al, al
//   0x1CEF40 jnz     loc_1CEE7A
//   0x1CEF46 jmp     loc_1CEB45
//   0x1CEF4B call    ___stack_chk_fail
//   0x1CEF50 mov     rax, cs:under_debugger_ptr
//   0x1CEF57 cmp     byte ptr [rax], 0
//   0x1CEF5A jnz     loc_408CF
//   0x1CEF60 mov     rax, [rbp+var_38]
//   0x1CEF64 sub     rax, fs:28h
//   0x1CEF6D jnz     short loc_1CEF79
//   0x1CEF6F mov     edi, 0CE3Eh
//   0x1CEF74 call    sub_37EEE0
//   0x1CEF79 call    ___stack_chk_fail
//   0x1CEF7E mov     rbx, rax
//   0x1CEF81 jmp     loc_408D1
//   0x1CEF86 mov     rbx, rax
//   0x1CEF89 jmp     loc_40904
//   0x1CEF8E mov     rbx, rax
//   0x1CEF91 jmp     loc_40945
// ============================================================

void sub_1CEB00(/* signature unknown */)
{
    // see disassembly above
}

