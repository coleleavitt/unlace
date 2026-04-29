// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x210890
// Name:           sub_210890
// Function size:  858 bytes (206 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x210890 push    r15
//   0x210892 push    r14
//   0x210894 push    r13
//   0x210896 push    r12
//   0x210898 push    rbp
//   0x210899 push    rbx
//   0x21089A sub     rsp, 78h
//   0x21089E mov     rax, fs:28h
//   0x2108A7 mov     [rsp+0A8h+var_40], rax
//   0x2108AC xor     eax, eax
//   0x2108AE cmp     byte ptr [rsi], 9
//   0x2108B1 jz      short loc_2108E0
//   0x2108B3 mov     rax, [rsp+0A8h+var_40]
//   0x2108B8 sub     rax, fs:28h
//   0x2108C1 jnz     loc_210A30
//   0x2108C7 add     rsp, 78h
//   0x2108CB xor     eax, eax
//   0x2108CD pop     rbx
//   0x2108CE pop     rbp
//   0x2108CF pop     r12
//   0x2108D1 pop     r13
//   0x2108D3 pop     r14
//   0x2108D5 pop     r15
//   0x2108D7 retn
//   0x2108D8 align 20h
//   0x2108E0 mov     rax, [rsi+8]
//   0x2108E4 mov     r12, rdi
//   0x2108E7 mov     rbx, rsi
//   0x2108EA movsxd  rbp, dword ptr [rax+10h]
//   0x2108EE shl     rbp, 5
//   0x2108F2 add     rbp, [rdi+60h]
//   0x2108F6 mov     rax, [rbp+8]
//   0x2108FA test    cl, cl
//   0x2108FC jnz     short loc_210918
//   0x2108FE add     qword ptr [rbp+10h], 1
//   0x210903 test    rax, rax
//   0x210906 jz      short loc_210928
//   0x210908 test    byte ptr [rbx+1], 10h
//   0x21090C jz      short loc_2108B3
//   0x21090E mov     byte ptr [rbp+18h], 1
//   0x210912 jmp     short loc_2108B3
//   0x210914 align 8
//   0x210918 add     rax, 1
//   0x21091C mov     [rbp+8], rax
//   0x210920 jmp     short loc_210908
//   0x210922 align 8
//   0x210928 mov     rdx, [rsi+8]
//   0x21092C mov     rcx, [rdx]
//   0x21092F movsxd  rax, dword ptr [rdx+10h]
//   0x210933 cmp     [rcx+1B8h], rax
//   0x21093A jb      loc_210B6B
//   0x210940 lea     rsi, [rax+rax*2]
//   0x210944 lea     rsi, [rax+rsi*4]
//   0x210948 mov     rax, [rcx+1B0h]
//   0x21094F lea     r13, [rax+rsi*8]
//   0x210953 mov     eax, [r13+18h]
//   0x210957 test    ah, 1
//   0x21095A jz      short loc_210908
//   0x21095C cmp     qword ptr [rdx+8], 0
//   0x210961 jnz     short loc_210908
//   0x210963 mov     edx, [r13+58h]
//   0x210967 cmp     edx, [rbx+4]
//   0x21096A jnz     short loc_210908
//   0x21096C test    eax, 2080h
//   0x210971 jnz     short loc_210908
//   0x210973 mov     rax, [rdi+20h]
//   0x210977 mov     ecx, [rax]
//   0x210979 cmp     ecx, 4
//   0x21097C jz      short loc_21098F
//   0x21097E cmp     ecx, 43h ; 'C'
//   0x210981 jnz     short loc_210908
//   0x210983 mov     edi, [rax+44h]
//   0x210986 cmp     [rax+24h], edi
//   0x210989 jnz     loc_210908
//   0x21098F lea     rcx, [rax+20h]
//   0x210993 cmp     rbx, rcx
//   0x210996 jnz     loc_210908
//   0x21099C cmp     byte ptr [rax+40h], 9
//   0x2109A0 jnz     loc_210908
//   0x2109A6 mov     rax, [rax+48h]
//   0x2109AA cmp     qword ptr [rax+8], 0
//   0x2109AF jnz     loc_210908
//   0x2109B5 test    byte ptr [rbx+1], 10h
//   0x2109B9 jnz     loc_21090E
//   0x2109BF movsxd  r9, dword ptr [rax+10h]
//   0x2109C3 mov     r8, [r12+8]
//   0x2109C8 imul    rcx, r9, 68h ; 'h'
//   0x2109CC add     rcx, [r8+1B0h]
//   0x2109D3 mov     [rsp+0A8h+var_9C], r9d
//   0x2109D8 mov     r14, rcx
//   0x2109DB cmp     edx, [rcx+58h]
//   0x2109DE jnz     loc_2108B3
//   0x2109E4 mov     rax, [r8+4E8h]
//   0x2109EB mov     r15, rax
//   0x2109EE jmp     short loc_210A1E
//   0x2109F0 mov     rsi, r14
//   0x2109F3 mov     rdi, r15
//   0x2109F6 mov     [rsp+0A8h+var_90], r9
//   0x2109FB mov     [rsp+0A8h+var_98], r8
//   0x210A00 call    sub_32B410
//   0x210A05 mov     r9, [rsp+0A8h+var_90]
//   0x210A0A test    eax, eax
//   0x210A0C jz      short loc_210A35
//   0x210A0E mov     r8, [rsp+0A8h+var_98]
//   0x210A13 add     r15, 60h ; '`'
//   0x210A17 mov     rax, [r8+4E8h]
//   0x210A1E imul    rdx, [r8+4F0h], 60h ; '`'
//   0x210A26 add     rax, rdx
//   0x210A29 cmp     r15, rax
//   0x210A2C jnz     short loc_2109F0
//   0x210A2E jmp     short loc_210A45
//   0x210A30 call    ___stack_chk_fail
//   0x210A35 test    r15, r15
//   0x210A38 jz      short loc_210A45
//   0x210A3A test    byte ptr [r15+58h], 8
//   0x210A3F jnz     loc_210908
//   0x210A45 test    word ptr [r14+18h], 180h
//   0x210A4C jnz     loc_210908
//   0x210A52 mov     rax, [r12+60h]
//   0x210A57 shl     r9, 5
//   0x210A5B mov     r15, r9
//   0x210A5E cmp     qword ptr [rax+r9+8], 0
//   0x210A64 jnz     loc_210908
//   0x210A6A mov     edx, [r13+58h]
//   0x210A6E mov     rsi, [r12+8]
//   0x210A73 mov     rdi, r13
//   0x210A76 call    sub_1BE150
//   0x210A7B test    al, al
//   0x210A7D jnz     loc_210908
//   0x210A83 mov     edx, [r14+58h]
//   0x210A87 mov     rsi, [r12+8]
//   0x210A8C mov     rdi, r14
//   0x210A8F call    sub_1BE150
//   0x210A94 test    al, al
//   0x210A96 jnz     loc_210908
//   0x210A9C cmp     qword ptr [r12+38h], 0
//   0x210AA2 jz      loc_210BC4
//   0x210AA8 mov     rax, [r12+10h]
//   0x210AAD movsxd  rdx, dword ptr [rax+48h]
//   0x210AB1 mov     rax, [r12+30h]
//   0x210AB6 movsxd  rax, dword ptr [rax+rdx*4]
//   0x210ABA cmp     eax, 0FFFFFFFFh
//   0x210ABD jz      loc_210B58
//   0x210AC3 imul    rax, 18h
//   0x210AC7 add     rax, [r12+48h]
//   0x210ACC lea     rcx, off_4B2188
//   0x210AD3 mov     r13, [rax]
//   0x210AD6 mov     rax, [rax+8]
//   0x210ADA lea     r8, [r13+rax*4+0]
//   0x210ADF jmp     short loc_210B53
//   0x210AE1 xor     edi, edi
//   0x210AE3 mov     eax, [r13+0]
//   0x210AE7 mov     rsi, [r12+20h]
//   0x210AEC mov     [rsp+0A8h+var_60], 0
//   0x210AF1 mov     [rsp+0A8h+var_80], rdi
//   0x210AF6 mov     rdx, [r12+8]
//   0x210AFB mov     [rsp+0A8h+var_78], rdi
//   0x210B00 mov     [rsp+0A8h+var_70], rdi
//   0x210B05 mov     [rsp+0A8h+var_68], rdi
//   0x210B0A mov     edi, [rsp+0A8h+var_9C]
//   0x210B0E mov     [rsp+0A8h+var_88], rcx
//   0x210B13 mov     [rsp+0A8h+var_58], rsi
//   0x210B18 mov     [rsp+0A8h+var_50], edi
//   0x210B1C cmp     eax, [rdx+40h]
//   0x210B1F jnb     short loc_210B95
//   0x210B21 mov     rdx, [rdx+210h]
//   0x210B28 lea     rsi, [rsp+0A8h+var_88]
//   0x210B2D mov     [rsp+0A8h+var_98], r8
//   0x210B32 add     r13, 4
//   0x210B36 mov     rdi, [rdx+rax*8]
//   0x210B3A call    sub_11B0F0
//   0x210B3F mov     r8, [rsp+0A8h+var_98]
//   0x210B44 lea     rcx, off_4B2188
//   0x210B4B test    eax, eax
//   0x210B4D jnz     loc_210908
//   0x210B53 cmp     r13, r8
//   0x210B56 jnz     short loc_210AE1
//   0x210B58 mov     rdx, [r12+20h]
//   0x210B5D mov     rax, [r12+60h]
//   0x210B62 mov     [rax+r15], rdx
//   0x210B66 jmp     loc_210908
//   0x210B6B mov     rax, cs:under_debugger_ptr
//   0x210B72 cmp     byte ptr [rax], 0
//   0x210B75 jnz     loc_443B2
//   0x210B7B mov     rax, [rsp+0A8h+var_40]
//   0x210B80 sub     rax, fs:28h
//   0x210B89 jnz     short loc_210BBF
//   0x210B8B mov     edi, 0C83Ah
//   0x210B90 call    sub_37DDE0
//   0x210B95 mov     rax, cs:under_debugger_ptr
//   0x210B9C cmp     byte ptr [rax], 0
//   0x210B9F jnz     loc_443B2
//   0x210BA5 mov     rax, [rsp+0A8h+var_40]
//   0x210BAA sub     rax, fs:28h
//   0x210BB3 jnz     short loc_210BE5
//   0x210BB5 mov     edi, 0CDEFh
//   0x210BBA call    sub_37DDE0
//   0x210BBF call    ___stack_chk_fail
//   0x210BC4 mov     rdi, [r12+8]
//   0x210BC9 call    sub_62D60
//   0x210BCE lea     rdx, [r12+48h]
//   0x210BD3 lea     rsi, [r12+30h]
//   0x210BD8 mov     rdi, rax
//   0x210BDB call    sub_30B4C0
//   0x210BE0 jmp     loc_210AA8
//   0x210BE5 call    ___stack_chk_fail
// ============================================================

void sub_210890(/* signature unknown */)
{
    // see disassembly above
}

