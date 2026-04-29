// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x31D80
// Name:           sub_31D80
// Function size:  263 bytes (56 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x31D80 lea     rax, off_8C790
//   0x31D87 push    rbx
//   0x31D88 cmp     byte ptr [rdi+28h], 0
//   0x31D8C mov     rbx, rdi
//   0x31D8F mov     [rdi-0A0h], rax
//   0x31D96 lea     rax, off_8BB08
//   0x31D9D mov     [rdi], rax
//   0x31DA0 jz      short loc_31DDE
//   0x31DA2 mov     rax, [rdi+20h]
//   0x31DA6 lea     rdx, s1
//   0x31DAD cmp     qword ptr [rax+8], 0
//   0x31DB2 jnz     loc_31E70
//   0x31DB8 cmp     qword ptr [rbx+10h], 0
//   0x31DBD lea     rsi, s1
//   0x31DC4 jnz     loc_31E60
//   0x31DCA mov     rcx, cs:callui_ptr
//   0x31DD1 mov     edi, 82h
//   0x31DD6 xor     eax, eax
//   0x31DD8 call    qword ptr [rcx]
//   0x31DDA mov     byte ptr [rbx+28h], 0
//   0x31DDE mov     rdi, [rbx+8]
//   0x31DE2 test    rdi, rdi
//   0x31DE5 jz      short loc_31DF4
//   0x31DE7 mov     qword ptr [rbx+10h], 0
//   0x31DEF call    _qfree
//   0x31DF4 lea     rax, unk_8CA80
//   0x31DFB lea     rdi, [rbx-0A0h]
//   0x31E02 add     rax, 10h
//   0x31E06 mov     [rbx-0A0h], rax
//   0x31E0D call    sub_6D1D0
//   0x31E12 mov     rdi, [rbx-60h]
//   0x31E16 test    rdi, rdi
//   0x31E19 jz      short loc_31E28
//   0x31E1B mov     qword ptr [rbx-58h], 0
//   0x31E23 call    _qfree
//   0x31E28 mov     rdi, [rbx-78h]
//   0x31E2C test    rdi, rdi
//   0x31E2F jz      short loc_31E3E
//   0x31E31 mov     qword ptr [rbx-70h], 0
//   0x31E39 call    _qfree
//   0x31E3E mov     rdi, [rbx-90h]
//   0x31E45 test    rdi, rdi
//   0x31E48 jz      short loc_31E5A
//   0x31E4A mov     qword ptr [rbx-88h], 0
//   0x31E55 call    _qfree
//   0x31E5A pop     rbx
//   0x31E5B retn
//   0x31E5C align 20h
//   0x31E60 mov     rsi, [rbx+8]
//   0x31E64 jmp     loc_31DCA
//   0x31E69 align 10h
//   0x31E70 cmp     qword ptr [rbx+10h], 0
//   0x31E75 mov     rdx, [rax]
//   0x31E78 lea     rsi, s1
//   0x31E7F jz      loc_31DCA
//   0x31E85 jmp     short loc_31E60
// ============================================================

void sub_31D80(/* signature unknown */)
{
    // see disassembly above
}

