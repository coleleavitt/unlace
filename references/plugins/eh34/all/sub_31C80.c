// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x31C80
// Name:           sub_31C80
// Function size:  248 bytes (52 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x31C80 lea     rax, off_8C790
//   0x31C87 push    rbx
//   0x31C88 cmp     byte ptr [rdi+0C8h], 0
//   0x31C8F mov     rbx, rdi
//   0x31C92 mov     [rdi], rax
//   0x31C95 lea     rax, off_8BB08
//   0x31C9C mov     [rdi+0A0h], rax
//   0x31CA3 jz      short loc_31CEA
//   0x31CA5 mov     rax, [rdi+0C0h]
//   0x31CAC lea     rdx, s1
//   0x31CB3 cmp     qword ptr [rax+8], 0
//   0x31CB8 jnz     loc_31D70
//   0x31CBE cmp     qword ptr [rbx+0B0h], 0
//   0x31CC6 lea     rsi, s1
//   0x31CCD jnz     loc_31D60
//   0x31CD3 mov     rcx, cs:callui_ptr
//   0x31CDA mov     edi, 82h
//   0x31CDF xor     eax, eax
//   0x31CE1 call    qword ptr [rcx]
//   0x31CE3 mov     byte ptr [rbx+0C8h], 0
//   0x31CEA mov     rdi, [rbx+0A8h]
//   0x31CF1 test    rdi, rdi
//   0x31CF4 jz      short loc_31D06
//   0x31CF6 mov     qword ptr [rbx+0B0h], 0
//   0x31D01 call    _qfree
//   0x31D06 lea     rax, unk_8CA80
//   0x31D0D mov     rdi, rbx
//   0x31D10 add     rax, 10h
//   0x31D14 mov     [rbx], rax
//   0x31D17 call    sub_6D1D0
//   0x31D1C mov     rdi, [rbx+40h]
//   0x31D20 test    rdi, rdi
//   0x31D23 jz      short loc_31D32
//   0x31D25 mov     qword ptr [rbx+48h], 0
//   0x31D2D call    _qfree
//   0x31D32 mov     rdi, [rbx+28h]
//   0x31D36 test    rdi, rdi
//   0x31D39 jz      short loc_31D48
//   0x31D3B mov     qword ptr [rbx+30h], 0
//   0x31D43 call    _qfree
//   0x31D48 mov     rdi, [rbx+10h]
//   0x31D4C test    rdi, rdi
//   0x31D4F jz      short loc_31D5E
//   0x31D51 mov     qword ptr [rbx+18h], 0
//   0x31D59 call    _qfree
//   0x31D5E pop     rbx
//   0x31D5F retn
//   0x31D60 mov     rsi, [rbx+0A8h]
//   0x31D67 jmp     loc_31CD3
//   0x31D6C align 10h
//   0x31D70 mov     rdx, [rax]
//   0x31D73 jmp     loc_31CBE
// ============================================================

void sub_31C80(/* signature unknown */)
{
    // see disassembly above
}

