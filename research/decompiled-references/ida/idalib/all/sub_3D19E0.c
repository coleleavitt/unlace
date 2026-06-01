// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3D19E0
// Name:           sub_3D19E0
// Function size:  802 bytes (188 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3D19E0 push    r15; int
//   0x3D19E2 push    r14; __int64
//   0x3D19E4 push    r13; int
//   0x3D19E6 push    r12; int
//   0x3D19E8 mov     r12, rsi
//   0x3D19EB push    rbp; int
//   0x3D19EC push    rbx; int
//   0x3D19ED mov     rbx, rdi
//   0x3D19F0 sub     rsp, 58h
//   0x3D19F4 mov     [rsp+88h+var_84], edx
//   0x3D19F8 mov     qword ptr [rsp+88h+var_78], r8; int
//   0x3D19FD mov     rax, fs:28h
//   0x3D1A06 mov     [rsp+88h+var_40], rax; void *
//   0x3D1A0B xor     eax, eax
//   0x3D1A0D cmp     rcx, 1
//   0x3D1A11 jz      loc_3D1C20
//   0x3D1A17 lea     rbp, [rcx+rsi]
//   0x3D1A1B cmp     rsi, rbp
//   0x3D1A1E jnb     loc_3D1B90
//   0x3D1A24 test    byte ptr [rsp+88h+var_84], 8
//   0x3D1A29 jnz     loc_3D1B38
//   0x3D1A2F test    byte ptr [rsp+88h+var_84], 10h
//   0x3D1A34 jnz     loc_3D1C50
//   0x3D1A3A mov     r14d, [rsp+88h+var_84]
//   0x3D1A3F mov     edx, 4
//   0x3D1A44 mov     rsi, r12
//   0x3D1A47 mov     rdi, rbx
//   0x3D1A4A lea     r15, sub_3B7CE0
//   0x3D1A51 lea     rax, sub_3B7DB0
//   0x3D1A58 and     r14d, 2
//   0x3D1A5C cmovz   rax, r15
//   0x3D1A60 mov     r15, r12
//   0x3D1A63 mov     qword ptr [rsp+88h+var_80], rax; int
//   0x3D1A68 call    sub_3BE900
//   0x3D1A6D and     eax, 600h
//   0x3D1A72 cmp     rax, 200h
//   0x3D1A78 jz      loc_3D1CB0
//   0x3D1A7E xchg    ax, ax
//   0x3D1A80 mov     edx, 4
//   0x3D1A85 mov     rsi, r15
//   0x3D1A88 mov     rdi, rbx
//   0x3D1A8B call    sub_3BE900
//   0x3D1A90 mov     r13, rax
//   0x3D1A93 test    ah, 4
//   0x3D1A96 jz      short loc_3D1AD8
//   0x3D1A98 cmp     r12, r15
//   0x3D1A9B jnb     short loc_3D1AC1
//   0x3D1A9D mov     rax, qword ptr [rsp+88h+var_78]
//   0x3D1AA2 cmp     qword ptr [rax+10h], 0
//   0x3D1AA7 jz      short loc_3D1AC1
//   0x3D1AA9 mov     qword ptr [rsp+88h+var_68], r15; int
//   0x3D1AAE lea     rsi, [rsp+88h+var_68]
//   0x3D1AB3 mov     rdi, rax
//   0x3D1AB6 call    qword ptr [rax+18h]
//   0x3D1AB9 test    al, al
//   0x3D1ABB jz      loc_3D1B90
//   0x3D1AC1 mov     edx, [rsp+88h+var_84]
//   0x3D1AC5 mov     rsi, r15
//   0x3D1AC8 mov     rdi, rbx
//   0x3D1ACB call    sub_3D1350
//   0x3D1AD0 test    al, al
//   0x3D1AD2 jz      loc_3D1B90
//   0x3D1AD8 lea     r9, [r15+1]
//   0x3D1ADC test    r14d, r14d
//   0x3D1ADF jz      short loc_3D1B00
//   0x3D1AE1 cmp     r12, r15
//   0x3D1AE4 jnb     short loc_3D1B00
//   0x3D1AE6 mov     rcx, r13
//   0x3D1AE9 and     ecx, 0C000h
//   0x3D1AEF cmp     rcx, 4000h
//   0x3D1AF6 jz      loc_3D1BE0
//   0x3D1AFC nop     dword ptr [rax+00h]
//   0x3D1B00 lea     rax, off_2B26118
//   0x3D1B07 mov     [rsp+88h+var_60], rbx
//   0x3D1B0C mov     qword ptr [rsp+88h+var_68], rax
//   0x3D1B11 mov     rax, qword ptr [rsp+88h+var_80]
//   0x3D1B16 mov     [rsp+88h+var_50], 0
//   0x3D1B1F mov     [rsp+88h+var_58], rax
//   0x3D1B24 cmp     r9, rbp
//   0x3D1B27 jb      loc_3D1BB8
//   0x3D1B2D mov     eax, 1
//   0x3D1B32 jmp     short loc_3D1B92
//   0x3D1B34 align 8
//   0x3D1B38 lea     r15, off_2B26118
//   0x3D1B3F lea     r14, [rsi+1]
//   0x3D1B43 mov     [rsp+88h+var_60], rdi
//   0x3D1B48 lea     rax, sub_3B7D00
//   0x3D1B4F mov     qword ptr [rsp+88h+var_68], r15
//   0x3D1B54 mov     [rsp+88h+var_58], rax
//   0x3D1B59 mov     [rsp+88h+var_50], 0
//   0x3D1B62 cmp     r14, rbp
//   0x3D1B65 jnb     loc_3D1A3A
//   0x3D1B6B lea     r8, [rsp+88h+var_68]
//   0x3D1B70 xor     ecx, ecx
//   0x3D1B72 mov     rdx, rbp
//   0x3D1B75 mov     rsi, r14
//   0x3D1B78 mov     qword ptr [rsp+88h+var_80], r8
//   0x3D1B7D call    sub_3B81B0
//   0x3D1B82 cmp     rax, rbp
//   0x3D1B85 jnb     loc_3D1CCC
//   0x3D1B8B nop     dword ptr [rax+rax+00h]
//   0x3D1B90 xor     eax, eax
//   0x3D1B92 mov     rdx, [rsp+88h+var_40]
//   0x3D1B97 sub     rdx, fs:28h
//   0x3D1BA0 jnz     loc_3D1CFD
//   0x3D1BA6 add     rsp, 58h
//   0x3D1BAA pop     rbx
//   0x3D1BAB pop     rbp
//   0x3D1BAC pop     r12
//   0x3D1BAE pop     r13
//   0x3D1BB0 pop     r14
//   0x3D1BB2 pop     r15
//   0x3D1BB4 retn
//   0x3D1BB5 align 8
//   0x3D1BB8 lea     r8, [rsp+88h+var_68]
//   0x3D1BBD xor     ecx, ecx
//   0x3D1BBF mov     rdx, rbp
//   0x3D1BC2 mov     rsi, r9
//   0x3D1BC5 mov     rdi, rbx
//   0x3D1BC8 call    sub_3B81B0
//   0x3D1BCD mov     r15, rax
//   0x3D1BD0 cmp     rax, rbp
//   0x3D1BD3 jb      loc_3D1A80
//   0x3D1BD9 jmp     loc_3D1B2D
//   0x3D1BDE align 20h
//   0x3D1BE0 mov     ecx, 100h
//   0x3D1BE5 mov     rsi, r15; int
//   0x3D1BE8 mov     rdi, rbx; int
//   0x3D1BEB mov     qword ptr [rsp+88h+var_70], r9; int
//   0x3D1BF0 lea     rdx, byte_22F0C30; src
//   0x3D1BF7 call    sub_4D7EC0
//   0x3D1BFC mov     ecx, 300h
//   0x3D1C01 mov     rsi, r15; int
//   0x3D1C04 mov     rdi, rbx; int
//   0x3D1C07 lea     rdx, byte_22F0C30; src
//   0x3D1C0E call    sub_4D7EC0
//   0x3D1C13 mov     r9, qword ptr [rsp+88h+var_70]
//   0x3D1C18 jmp     loc_3D1B00
//   0x3D1C1D align 20h
//   0x3D1C20 mov     rax, [rsp+88h+var_40]
//   0x3D1C25 sub     rax, fs:28h
//   0x3D1C2E jnz     loc_3D1CFD
//   0x3D1C34 mov     edx, [rsp+88h+var_84]
//   0x3D1C38 add     rsp, 58h
//   0x3D1C3C pop     rbx
//   0x3D1C3D pop     rbp
//   0x3D1C3E pop     r12
//   0x3D1C40 pop     r13
//   0x3D1C42 pop     r14
//   0x3D1C44 pop     r15
//   0x3D1C46 jmp     sub_3D1350
//   0x3D1C4B align 10h
//   0x3D1C50 lea     rax, off_2B26118
//   0x3D1C57 lea     r14, [rsi+1]
//   0x3D1C5B mov     [rsp+88h+var_60], rdi
//   0x3D1C60 mov     qword ptr [rsp+88h+var_68], rax
//   0x3D1C65 lea     rax, sub_3B7DA0
//   0x3D1C6C lea     r8, [rsp+88h+var_68]
//   0x3D1C71 mov     [rsp+88h+var_58], rax
//   0x3D1C76 mov     [rsp+88h+var_50], 0
//   0x3D1C7F cmp     r14, rbp
//   0x3D1C82 jnb     loc_3D1A3A
//   0x3D1C88 xor     ecx, ecx
//   0x3D1C8A mov     rdx, rbp
//   0x3D1C8D mov     rsi, r14
//   0x3D1C90 mov     rdi, rbx
//   0x3D1C93 call    sub_3B81B0
//   0x3D1C98 cmp     rax, rbp
//   0x3D1C9B jb      loc_3D1B90
//   0x3D1CA1 jmp     loc_3D1A3A
//   0x3D1CA6 align 10h
//   0x3D1CB0 mov     rsi, r12
//   0x3D1CB3 mov     rdi, rbx
//   0x3D1CB6 call    sub_3C2650
//   0x3D1CBB mov     r15, rax
//   0x3D1CBE cmp     rax, rbp
//   0x3D1CC1 jb      loc_3D1A80
//   0x3D1CC7 jmp     loc_3D1B2D
//   0x3D1CCC mov     r8, qword ptr [rsp+88h+var_80]
//   0x3D1CD1 test    byte ptr [rsp+88h+var_84], 10h
//   0x3D1CD6 jz      loc_3D1A3A
//   0x3D1CDC lea     rax, sub_3B7DA0
//   0x3D1CE3 mov     [rsp+88h+var_60], rbx
//   0x3D1CE8 mov     qword ptr [rsp+88h+var_68], r15
//   0x3D1CED mov     [rsp+88h+var_58], rax
//   0x3D1CF2 mov     [rsp+88h+var_50], 0
//   0x3D1CFB jmp     short loc_3D1C88
//   0x3D1CFD call    ___stack_chk_fail
// ============================================================

void sub_3D19E0(/* signature unknown */)
{
    // see disassembly above
}

