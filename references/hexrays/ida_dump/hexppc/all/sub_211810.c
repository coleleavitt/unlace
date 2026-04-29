// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x211810
// Name:           sub_211810
// Function size:  858 bytes (206 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x211810 push    r15
//   0x211812 push    r14
//   0x211814 push    r13
//   0x211816 push    r12
//   0x211818 push    rbp
//   0x211819 push    rbx
//   0x21181A sub     rsp, 78h
//   0x21181E mov     rax, fs:28h
//   0x211827 mov     [rsp+0A8h+var_40], rax
//   0x21182C xor     eax, eax
//   0x21182E cmp     byte ptr [rsi], 9
//   0x211831 jz      short loc_211860
//   0x211833 mov     rax, [rsp+0A8h+var_40]
//   0x211838 sub     rax, fs:28h
//   0x211841 jnz     loc_2119B0
//   0x211847 add     rsp, 78h
//   0x21184B xor     eax, eax
//   0x21184D pop     rbx
//   0x21184E pop     rbp
//   0x21184F pop     r12
//   0x211851 pop     r13
//   0x211853 pop     r14
//   0x211855 pop     r15
//   0x211857 retn
//   0x211858 align 20h
//   0x211860 mov     rax, [rsi+8]
//   0x211864 mov     r12, rdi
//   0x211867 mov     rbx, rsi
//   0x21186A movsxd  rbp, dword ptr [rax+10h]
//   0x21186E shl     rbp, 5
//   0x211872 add     rbp, [rdi+60h]
//   0x211876 mov     rax, [rbp+8]
//   0x21187A test    cl, cl
//   0x21187C jnz     short loc_211898
//   0x21187E add     qword ptr [rbp+10h], 1
//   0x211883 test    rax, rax
//   0x211886 jz      short loc_2118A8
//   0x211888 test    byte ptr [rbx+1], 10h
//   0x21188C jz      short loc_211833
//   0x21188E mov     byte ptr [rbp+18h], 1
//   0x211892 jmp     short loc_211833
//   0x211894 align 8
//   0x211898 add     rax, 1
//   0x21189C mov     [rbp+8], rax
//   0x2118A0 jmp     short loc_211888
//   0x2118A2 align 8
//   0x2118A8 mov     rdx, [rsi+8]
//   0x2118AC mov     rcx, [rdx]
//   0x2118AF movsxd  rax, dword ptr [rdx+10h]
//   0x2118B3 cmp     [rcx+1B8h], rax
//   0x2118BA jb      loc_211AEB
//   0x2118C0 lea     rsi, [rax+rax*2]
//   0x2118C4 lea     rsi, [rax+rsi*4]
//   0x2118C8 mov     rax, [rcx+1B0h]
//   0x2118CF lea     r13, [rax+rsi*8]
//   0x2118D3 mov     eax, [r13+18h]
//   0x2118D7 test    ah, 1
//   0x2118DA jz      short loc_211888
//   0x2118DC cmp     qword ptr [rdx+8], 0
//   0x2118E1 jnz     short loc_211888
//   0x2118E3 mov     edx, [r13+58h]
//   0x2118E7 cmp     edx, [rbx+4]
//   0x2118EA jnz     short loc_211888
//   0x2118EC test    eax, 2080h
//   0x2118F1 jnz     short loc_211888
//   0x2118F3 mov     rax, [rdi+20h]
//   0x2118F7 mov     ecx, [rax]
//   0x2118F9 cmp     ecx, 4
//   0x2118FC jz      short loc_21190F
//   0x2118FE cmp     ecx, 43h ; 'C'
//   0x211901 jnz     short loc_211888
//   0x211903 mov     edi, [rax+44h]
//   0x211906 cmp     [rax+24h], edi
//   0x211909 jnz     loc_211888
//   0x21190F lea     rcx, [rax+20h]
//   0x211913 cmp     rbx, rcx
//   0x211916 jnz     loc_211888
//   0x21191C cmp     byte ptr [rax+40h], 9
//   0x211920 jnz     loc_211888
//   0x211926 mov     rax, [rax+48h]
//   0x21192A cmp     qword ptr [rax+8], 0
//   0x21192F jnz     loc_211888
//   0x211935 test    byte ptr [rbx+1], 10h
//   0x211939 jnz     loc_21188E
//   0x21193F movsxd  r9, dword ptr [rax+10h]
//   0x211943 mov     r8, [r12+8]
//   0x211948 imul    rcx, r9, 68h ; 'h'
//   0x21194C add     rcx, [r8+1B0h]
//   0x211953 mov     [rsp+0A8h+var_9C], r9d
//   0x211958 mov     r14, rcx
//   0x21195B cmp     edx, [rcx+58h]
//   0x21195E jnz     loc_211833
//   0x211964 mov     rax, [r8+4E8h]
//   0x21196B mov     r15, rax
//   0x21196E jmp     short loc_21199E
//   0x211970 mov     rsi, r14
//   0x211973 mov     rdi, r15
//   0x211976 mov     [rsp+0A8h+var_90], r9
//   0x21197B mov     [rsp+0A8h+var_98], r8
//   0x211980 call    sub_32C390
//   0x211985 mov     r9, [rsp+0A8h+var_90]
//   0x21198A test    eax, eax
//   0x21198C jz      short loc_2119B5
//   0x21198E mov     r8, [rsp+0A8h+var_98]
//   0x211993 add     r15, 60h ; '`'
//   0x211997 mov     rax, [r8+4E8h]
//   0x21199E imul    rdx, [r8+4F0h], 60h ; '`'
//   0x2119A6 add     rax, rdx
//   0x2119A9 cmp     r15, rax
//   0x2119AC jnz     short loc_211970
//   0x2119AE jmp     short loc_2119C5
//   0x2119B0 call    ___stack_chk_fail
//   0x2119B5 test    r15, r15
//   0x2119B8 jz      short loc_2119C5
//   0x2119BA test    byte ptr [r15+58h], 8
//   0x2119BF jnz     loc_211888
//   0x2119C5 test    word ptr [r14+18h], 180h
//   0x2119CC jnz     loc_211888
//   0x2119D2 mov     rax, [r12+60h]
//   0x2119D7 shl     r9, 5
//   0x2119DB mov     r15, r9
//   0x2119DE cmp     qword ptr [rax+r9+8], 0
//   0x2119E4 jnz     loc_211888
//   0x2119EA mov     edx, [r13+58h]
//   0x2119EE mov     rsi, [r12+8]
//   0x2119F3 mov     rdi, r13
//   0x2119F6 call    sub_1BED90
//   0x2119FB test    al, al
//   0x2119FD jnz     loc_211888
//   0x211A03 mov     edx, [r14+58h]
//   0x211A07 mov     rsi, [r12+8]
//   0x211A0C mov     rdi, r14
//   0x211A0F call    sub_1BED90
//   0x211A14 test    al, al
//   0x211A16 jnz     loc_211888
//   0x211A1C cmp     qword ptr [r12+38h], 0
//   0x211A22 jz      loc_211B44
//   0x211A28 mov     rax, [r12+10h]
//   0x211A2D movsxd  rdx, dword ptr [rax+48h]
//   0x211A31 mov     rax, [r12+30h]
//   0x211A36 movsxd  rax, dword ptr [rax+rdx*4]
//   0x211A3A cmp     eax, 0FFFFFFFFh
//   0x211A3D jz      loc_211AD8
//   0x211A43 imul    rax, 18h
//   0x211A47 add     rax, [r12+48h]
//   0x211A4C lea     rcx, off_4CC868
//   0x211A53 mov     r13, [rax]
//   0x211A56 mov     rax, [rax+8]
//   0x211A5A lea     r8, [r13+rax*4+0]
//   0x211A5F jmp     short loc_211AD3
//   0x211A61 xor     edi, edi
//   0x211A63 mov     eax, [r13+0]
//   0x211A67 mov     rsi, [r12+20h]
//   0x211A6C mov     [rsp+0A8h+var_60], 0
//   0x211A71 mov     [rsp+0A8h+var_80], rdi
//   0x211A76 mov     rdx, [r12+8]
//   0x211A7B mov     [rsp+0A8h+var_78], rdi
//   0x211A80 mov     [rsp+0A8h+var_70], rdi
//   0x211A85 mov     [rsp+0A8h+var_68], rdi
//   0x211A8A mov     edi, [rsp+0A8h+var_9C]
//   0x211A8E mov     [rsp+0A8h+var_88], rcx
//   0x211A93 mov     [rsp+0A8h+var_58], rsi
//   0x211A98 mov     [rsp+0A8h+var_50], edi
//   0x211A9C cmp     eax, [rdx+40h]
//   0x211A9F jnb     short loc_211B15
//   0x211AA1 mov     rdx, [rdx+210h]
//   0x211AA8 lea     rsi, [rsp+0A8h+var_88]
//   0x211AAD mov     [rsp+0A8h+var_98], r8
//   0x211AB2 add     r13, 4
//   0x211AB6 mov     rdi, [rdx+rax*8]
//   0x211ABA call    sub_11BB70
//   0x211ABF mov     r8, [rsp+0A8h+var_98]
//   0x211AC4 lea     rcx, off_4CC868
//   0x211ACB test    eax, eax
//   0x211ACD jnz     loc_211888
//   0x211AD3 cmp     r13, r8
//   0x211AD6 jnz     short loc_211A61
//   0x211AD8 mov     rdx, [r12+20h]
//   0x211ADD mov     rax, [r12+60h]
//   0x211AE2 mov     [rax+r15], rdx
//   0x211AE6 jmp     loc_211888
//   0x211AEB mov     rax, cs:under_debugger_ptr
//   0x211AF2 cmp     byte ptr [rax], 0
//   0x211AF5 jnz     loc_44416
//   0x211AFB mov     rax, [rsp+0A8h+var_40]
//   0x211B00 sub     rax, fs:28h
//   0x211B09 jnz     short loc_211B3F
//   0x211B0B mov     edi, 0C83Ah
//   0x211B10 call    sub_37EEE0
//   0x211B15 mov     rax, cs:under_debugger_ptr
//   0x211B1C cmp     byte ptr [rax], 0
//   0x211B1F jnz     loc_44416
//   0x211B25 mov     rax, [rsp+0A8h+var_40]
//   0x211B2A sub     rax, fs:28h
//   0x211B33 jnz     short loc_211B65
//   0x211B35 mov     edi, 0CDEFh
//   0x211B3A call    sub_37EEE0
//   0x211B3F call    ___stack_chk_fail
//   0x211B44 mov     rdi, [r12+8]
//   0x211B49 call    sub_636A0
//   0x211B4E lea     rdx, [r12+48h]
//   0x211B53 lea     rsi, [r12+30h]
//   0x211B58 mov     rdi, rax
//   0x211B5B call    sub_30C440
//   0x211B60 jmp     loc_211A28
//   0x211B65 call    ___stack_chk_fail
// ============================================================

void sub_211810(/* signature unknown */)
{
    // see disassembly above
}

