// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x210C10
// Name:           sub_210C10
// Function size:  858 bytes (206 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x210C10 push    r15
//   0x210C12 push    r14
//   0x210C14 push    r13
//   0x210C16 push    r12
//   0x210C18 push    rbp
//   0x210C19 push    rbx
//   0x210C1A sub     rsp, 78h
//   0x210C1E mov     rax, fs:28h
//   0x210C27 mov     [rsp+0A8h+var_40], rax
//   0x210C2C xor     eax, eax
//   0x210C2E cmp     byte ptr [rsi], 9
//   0x210C31 jz      short loc_210C60
//   0x210C33 mov     rax, [rsp+0A8h+var_40]
//   0x210C38 sub     rax, fs:28h
//   0x210C41 jnz     loc_210DB0
//   0x210C47 add     rsp, 78h
//   0x210C4B xor     eax, eax
//   0x210C4D pop     rbx
//   0x210C4E pop     rbp
//   0x210C4F pop     r12
//   0x210C51 pop     r13
//   0x210C53 pop     r14
//   0x210C55 pop     r15
//   0x210C57 retn
//   0x210C58 align 20h
//   0x210C60 mov     rax, [rsi+8]
//   0x210C64 mov     r12, rdi
//   0x210C67 mov     rbx, rsi
//   0x210C6A movsxd  rbp, dword ptr [rax+10h]
//   0x210C6E shl     rbp, 5
//   0x210C72 add     rbp, [rdi+60h]
//   0x210C76 mov     rax, [rbp+8]
//   0x210C7A test    cl, cl
//   0x210C7C jnz     short loc_210C98
//   0x210C7E add     qword ptr [rbp+10h], 1
//   0x210C83 test    rax, rax
//   0x210C86 jz      short loc_210CA8
//   0x210C88 test    byte ptr [rbx+1], 10h
//   0x210C8C jz      short loc_210C33
//   0x210C8E mov     byte ptr [rbp+18h], 1
//   0x210C92 jmp     short loc_210C33
//   0x210C94 align 8
//   0x210C98 add     rax, 1
//   0x210C9C mov     [rbp+8], rax
//   0x210CA0 jmp     short loc_210C88
//   0x210CA2 align 8
//   0x210CA8 mov     rdx, [rsi+8]
//   0x210CAC mov     rcx, [rdx]
//   0x210CAF movsxd  rax, dword ptr [rdx+10h]
//   0x210CB3 cmp     [rcx+1B8h], rax
//   0x210CBA jb      loc_210EEB
//   0x210CC0 lea     rsi, [rax+rax*2]
//   0x210CC4 lea     rsi, [rax+rsi*4]
//   0x210CC8 mov     rax, [rcx+1B0h]
//   0x210CCF lea     r13, [rax+rsi*8]
//   0x210CD3 mov     eax, [r13+18h]
//   0x210CD7 test    ah, 1
//   0x210CDA jz      short loc_210C88
//   0x210CDC cmp     qword ptr [rdx+8], 0
//   0x210CE1 jnz     short loc_210C88
//   0x210CE3 mov     edx, [r13+58h]
//   0x210CE7 cmp     edx, [rbx+4]
//   0x210CEA jnz     short loc_210C88
//   0x210CEC test    eax, 2080h
//   0x210CF1 jnz     short loc_210C88
//   0x210CF3 mov     rax, [rdi+20h]
//   0x210CF7 mov     ecx, [rax]
//   0x210CF9 cmp     ecx, 4
//   0x210CFC jz      short loc_210D0F
//   0x210CFE cmp     ecx, 43h ; 'C'
//   0x210D01 jnz     short loc_210C88
//   0x210D03 mov     edi, [rax+44h]
//   0x210D06 cmp     [rax+24h], edi
//   0x210D09 jnz     loc_210C88
//   0x210D0F lea     rcx, [rax+20h]
//   0x210D13 cmp     rbx, rcx
//   0x210D16 jnz     loc_210C88
//   0x210D1C cmp     byte ptr [rax+40h], 9
//   0x210D20 jnz     loc_210C88
//   0x210D26 mov     rax, [rax+48h]
//   0x210D2A cmp     qword ptr [rax+8], 0
//   0x210D2F jnz     loc_210C88
//   0x210D35 test    byte ptr [rbx+1], 10h
//   0x210D39 jnz     loc_210C8E
//   0x210D3F movsxd  r9, dword ptr [rax+10h]
//   0x210D43 mov     r8, [r12+8]
//   0x210D48 imul    rcx, r9, 68h ; 'h'
//   0x210D4C add     rcx, [r8+1B0h]
//   0x210D53 mov     [rsp+0A8h+var_9C], r9d
//   0x210D58 mov     r14, rcx
//   0x210D5B cmp     edx, [rcx+58h]
//   0x210D5E jnz     loc_210C33
//   0x210D64 mov     rax, [r8+4E8h]
//   0x210D6B mov     r15, rax
//   0x210D6E jmp     short loc_210D9E
//   0x210D70 mov     rsi, r14
//   0x210D73 mov     rdi, r15
//   0x210D76 mov     [rsp+0A8h+var_90], r9
//   0x210D7B mov     [rsp+0A8h+var_98], r8
//   0x210D80 call    sub_32B790
//   0x210D85 mov     r9, [rsp+0A8h+var_90]
//   0x210D8A test    eax, eax
//   0x210D8C jz      short loc_210DB5
//   0x210D8E mov     r8, [rsp+0A8h+var_98]
//   0x210D93 add     r15, 60h ; '`'
//   0x210D97 mov     rax, [r8+4E8h]
//   0x210D9E imul    rdx, [r8+4F0h], 60h ; '`'
//   0x210DA6 add     rax, rdx
//   0x210DA9 cmp     r15, rax
//   0x210DAC jnz     short loc_210D70
//   0x210DAE jmp     short loc_210DC5
//   0x210DB0 call    ___stack_chk_fail
//   0x210DB5 test    r15, r15
//   0x210DB8 jz      short loc_210DC5
//   0x210DBA test    byte ptr [r15+58h], 8
//   0x210DBF jnz     loc_210C88
//   0x210DC5 test    word ptr [r14+18h], 180h
//   0x210DCC jnz     loc_210C88
//   0x210DD2 mov     rax, [r12+60h]
//   0x210DD7 shl     r9, 5
//   0x210DDB mov     r15, r9
//   0x210DDE cmp     qword ptr [rax+r9+8], 0
//   0x210DE4 jnz     loc_210C88
//   0x210DEA mov     edx, [r13+58h]
//   0x210DEE mov     rsi, [r12+8]
//   0x210DF3 mov     rdi, r13
//   0x210DF6 call    sub_1BE410
//   0x210DFB test    al, al
//   0x210DFD jnz     loc_210C88
//   0x210E03 mov     edx, [r14+58h]
//   0x210E07 mov     rsi, [r12+8]
//   0x210E0C mov     rdi, r14
//   0x210E0F call    sub_1BE410
//   0x210E14 test    al, al
//   0x210E16 jnz     loc_210C88
//   0x210E1C cmp     qword ptr [r12+38h], 0
//   0x210E22 jz      loc_210F44
//   0x210E28 mov     rax, [r12+10h]
//   0x210E2D movsxd  rdx, dword ptr [rax+48h]
//   0x210E31 mov     rax, [r12+30h]
//   0x210E36 movsxd  rax, dword ptr [rax+rdx*4]
//   0x210E3A cmp     eax, 0FFFFFFFFh
//   0x210E3D jz      loc_210ED8
//   0x210E43 imul    rax, 18h
//   0x210E47 add     rax, [r12+48h]
//   0x210E4C lea     rcx, off_4BFE88
//   0x210E53 mov     r13, [rax]
//   0x210E56 mov     rax, [rax+8]
//   0x210E5A lea     r8, [r13+rax*4+0]
//   0x210E5F jmp     short loc_210ED3
//   0x210E61 xor     edi, edi
//   0x210E63 mov     eax, [r13+0]
//   0x210E67 mov     rsi, [r12+20h]
//   0x210E6C mov     [rsp+0A8h+var_60], 0
//   0x210E71 mov     [rsp+0A8h+var_80], rdi
//   0x210E76 mov     rdx, [r12+8]
//   0x210E7B mov     [rsp+0A8h+var_78], rdi
//   0x210E80 mov     [rsp+0A8h+var_70], rdi
//   0x210E85 mov     [rsp+0A8h+var_68], rdi
//   0x210E8A mov     edi, [rsp+0A8h+var_9C]
//   0x210E8E mov     [rsp+0A8h+var_88], rcx
//   0x210E93 mov     [rsp+0A8h+var_58], rsi
//   0x210E98 mov     [rsp+0A8h+var_50], edi
//   0x210E9C cmp     eax, [rdx+40h]
//   0x210E9F jnb     short loc_210F15
//   0x210EA1 mov     rdx, [rdx+210h]
//   0x210EA8 lea     rsi, [rsp+0A8h+var_88]
//   0x210EAD mov     [rsp+0A8h+var_98], r8
//   0x210EB2 add     r13, 4
//   0x210EB6 mov     rdi, [rdx+rax*8]
//   0x210EBA call    sub_11B3B0
//   0x210EBF mov     r8, [rsp+0A8h+var_98]
//   0x210EC4 lea     rcx, off_4BFE88
//   0x210ECB test    eax, eax
//   0x210ECD jnz     loc_210C88
//   0x210ED3 cmp     r13, r8
//   0x210ED6 jnz     short loc_210E61
//   0x210ED8 mov     rdx, [r12+20h]
//   0x210EDD mov     rax, [r12+60h]
//   0x210EE2 mov     [rax+r15], rdx
//   0x210EE6 jmp     loc_210C88
//   0x210EEB mov     rax, cs:under_debugger_ptr
//   0x210EF2 cmp     byte ptr [rax], 0
//   0x210EF5 jnz     loc_443E0
//   0x210EFB mov     rax, [rsp+0A8h+var_40]
//   0x210F00 sub     rax, fs:28h
//   0x210F09 jnz     short loc_210F3F
//   0x210F0B mov     edi, 0C83Ah
//   0x210F10 call    sub_37E160
//   0x210F15 mov     rax, cs:under_debugger_ptr
//   0x210F1C cmp     byte ptr [rax], 0
//   0x210F1F jnz     loc_443E0
//   0x210F25 mov     rax, [rsp+0A8h+var_40]
//   0x210F2A sub     rax, fs:28h
//   0x210F33 jnz     short loc_210F65
//   0x210F35 mov     edi, 0CDEFh
//   0x210F3A call    sub_37E160
//   0x210F3F call    ___stack_chk_fail
//   0x210F44 mov     rdi, [r12+8]
//   0x210F49 call    sub_62EE0
//   0x210F4E lea     rdx, [r12+48h]
//   0x210F53 lea     rsi, [r12+30h]
//   0x210F58 mov     rdi, rax
//   0x210F5B call    sub_30B840
//   0x210F60 jmp     loc_210E28
//   0x210F65 call    ___stack_chk_fail
// ============================================================

void sub_210C10(/* signature unknown */)
{
    // see disassembly above
}

