// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3A1CC0
// Name:           sub_3A1CC0
// Function size:  342 bytes (78 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3A1CC0 push    r12
//   0x3A1CC2 lea     r12, qword_8CF480
//   0x3A1CC9 push    rbp
//   0x3A1CCA push    rbx
//   0x3A1CCB mov     rbx, rdi
//   0x3A1CCE sub     rsp, 30h
//   0x3A1CD2 mov     rbp, fs:28h
//   0x3A1CDB mov     [rsp+48h+var_20], rbp
//   0x3A1CE0 mov     rbp, rsi
//   0x3A1CE3 call    sub_4A7BF0
//   0x3A1CE8 xor     ecx, ecx
//   0x3A1CEA mov     edx, 3
//   0x3A1CEF mov     rdi, r12
//   0x3A1CF2 lea     rsi, unk_868540
//   0x3A1CF9 call    sub_534680
//   0x3A1CFE mov     rsi, r12
//   0x3A1D01 mov     rdi, rbp
//   0x3A1D04 call    sub_539A10
//   0x3A1D09 mov     rax, cs:_ZN2QT16QCoreApplication4selfE_ptr
//   0x3A1D10 mov     rsi, rbx
//   0x3A1D13 mov     rax, [rax]
//   0x3A1D16 lea     rdi, [rax+10h]
//   0x3A1D1A mov     rax, [rax+10h]
//   0x3A1D1E call    qword ptr [rax+38h]
//   0x3A1D21 cmp     eax, 23h ; '#'
//   0x3A1D24 ja      short loc_3A1D6C
//   0x3A1D26 mov     r12d, eax
//   0x3A1D29 mov     rax, 8000A2005h
//   0x3A1D33 bt      rax, r12
//   0x3A1D37 jb      short loc_3A1D61
//   0x3A1D39 cmp     r12d, 3
//   0x3A1D3D jnz     short loc_3A1D6C
//   0x3A1D3F lea     rax, unk_8C9820
//   0x3A1D46 mov     ecx, 1
//   0x3A1D4B lea     rdx, aModifyFilters; "Modify filters..."
//   0x3A1D52 mov     rdi, rbp
//   0x3A1D55 mov     rsi, [rax+11A0h]
//   0x3A1D5C call    sub_5399B0
//   0x3A1D61 mov     esi, r12d
//   0x3A1D64 mov     rdi, rbp
//   0x3A1D67 call    sub_19B180
//   0x3A1D6C test    byte ptr [rbx+9E0h], 1
//   0x3A1D73 jz      loc_3A1E00
//   0x3A1D79 pxor    xmm0, xmm0
//   0x3A1D7D mov     rsi, rsp
//   0x3A1D80 mov     edx, 2
//   0x3A1D85 mov     rdi, rbx; int
//   0x3A1D88 mov     [rsp+48h+var_48], 0
//   0x3A1D90 mov     [rsp+48h+var_30], 0FFFFFFFFFFFFFFFFh
//   0x3A1D99 movups  [rsp+48h+var_40], xmm0
//   0x3A1D9E call    sub_4A6DB0
//   0x3A1DA3 mov     rsi, [rsp+48h+var_30]
//   0x3A1DA8 xor     edx, edx
//   0x3A1DAA mov     rdi, rbx
//   0x3A1DAD call    sub_4A0A30
//   0x3A1DB2 mov     rdi, [rsp+48h+var_48]
//   0x3A1DB6 mov     r12, rax
//   0x3A1DB9 test    rdi, rdi
//   0x3A1DBC jz      short loc_3A1DCC
//   0x3A1DBE mov     qword ptr [rsp+48h+var_40], 0
//   0x3A1DC7 call    _qfree
//   0x3A1DCC mov     rax, [rsp+48h+var_20]
//   0x3A1DD1 sub     rax, fs:28h
//   0x3A1DDA jnz     short loc_3A1E09
//   0x3A1DDC add     rsp, 30h
//   0x3A1DE0 lea     rdi, [rbx+9D0h]
//   0x3A1DE7 mov     rdx, r12
//   0x3A1DEA mov     rsi, rbp
//   0x3A1DED pop     rbx
//   0x3A1DEE pop     rbp
//   0x3A1DEF pop     r12
//   0x3A1DF1 jmp     sub_277EB0
//   0x3A1DF6 align 20h
//   0x3A1E00 mov     r12, 0FFFFFFFFFFFFFFFFh
//   0x3A1E07 jmp     short loc_3A1DCC
//   0x3A1E09 call    ___stack_chk_fail
//   0x3A1E0E mov     rbx, rax
//   0x3A1E11 jmp     loc_1419C6
// ============================================================

void sub_3A1CC0(/* signature unknown */)
{
    // see disassembly above
}

