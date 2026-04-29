// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x31FA0
// Name:           sub_31FA0
// Function size:  279 bytes (61 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x31FA0 push    rbp
//   0x31FA1 lea     rax, off_8C790
//   0x31FA8 lea     rbp, [rdi-0A0h]
//   0x31FAF push    rbx
//   0x31FB0 mov     rbx, rdi
//   0x31FB3 sub     rsp, 8
//   0x31FB7 mov     [rdi-0A0h], rax
//   0x31FBE cmp     byte ptr [rdi+28h], 0
//   0x31FC2 lea     rax, off_8BB08
//   0x31FC9 mov     [rdi], rax
//   0x31FCC jz      short loc_3200A
//   0x31FCE mov     rax, [rdi+20h]
//   0x31FD2 lea     rdx, s1
//   0x31FD9 cmp     qword ptr [rax+8], 0
//   0x31FDE jnz     loc_320A0
//   0x31FE4 cmp     qword ptr [rbx+10h], 0
//   0x31FE9 lea     rsi, s1
//   0x31FF0 jnz     loc_32090
//   0x31FF6 mov     rcx, cs:callui_ptr
//   0x31FFD mov     edi, 82h
//   0x32002 xor     eax, eax
//   0x32004 call    qword ptr [rcx]
//   0x32006 mov     byte ptr [rbx+28h], 0
//   0x3200A mov     rdi, [rbx+8]
//   0x3200E test    rdi, rdi
//   0x32011 jz      short loc_32020
//   0x32013 mov     qword ptr [rbx+10h], 0
//   0x3201B call    _qfree
//   0x32020 lea     rax, unk_8CA80
//   0x32027 mov     rdi, rbp
//   0x3202A add     rax, 10h
//   0x3202E mov     [rbx-0A0h], rax
//   0x32035 call    sub_6D1D0
//   0x3203A mov     rdi, [rbx-60h]
//   0x3203E test    rdi, rdi
//   0x32041 jz      short loc_32050
//   0x32043 mov     qword ptr [rbx-58h], 0
//   0x3204B call    _qfree
//   0x32050 mov     rdi, [rbx-78h]
//   0x32054 test    rdi, rdi
//   0x32057 jz      short loc_32066
//   0x32059 mov     qword ptr [rbx-70h], 0
//   0x32061 call    _qfree
//   0x32066 mov     rdi, [rbx-90h]
//   0x3206D test    rdi, rdi
//   0x32070 jz      short loc_32082
//   0x32072 mov     qword ptr [rbx-88h], 0
//   0x3207D call    _qfree
//   0x32082 add     rsp, 8
//   0x32086 mov     rdi, rbp
//   0x32089 pop     rbx
//   0x3208A pop     rbp
//   0x3208B jmp     _qfree
//   0x32090 mov     rsi, [rbx+8]
//   0x32094 jmp     loc_31FF6
//   0x32099 align 20h
//   0x320A0 cmp     qword ptr [rbx+10h], 0
//   0x320A5 mov     rdx, [rax]
//   0x320A8 lea     rsi, s1
//   0x320AF jz      loc_31FF6
//   0x320B5 jmp     short loc_32090
// ============================================================

void sub_31FA0(/* signature unknown */)
{
    // see disassembly above
}

