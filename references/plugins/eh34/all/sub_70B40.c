// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x70B40
// Name:           sub_70B40
// Function size:  248 bytes (52 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x70B40 lea     rax, off_8C790
//   0x70B47 push    rbx
//   0x70B48 cmp     byte ptr [rdi+0C8h], 0
//   0x70B4F mov     rbx, rdi
//   0x70B52 mov     [rdi], rax
//   0x70B55 lea     rax, off_8BB08
//   0x70B5C mov     [rdi+0A0h], rax
//   0x70B63 jz      short loc_70BAA
//   0x70B65 mov     rax, [rdi+0C0h]
//   0x70B6C lea     rdx, s1
//   0x70B73 cmp     qword ptr [rax+8], 0
//   0x70B78 jnz     loc_70C30
//   0x70B7E cmp     qword ptr [rbx+0B0h], 0
//   0x70B86 lea     rsi, s1
//   0x70B8D jnz     loc_70C20
//   0x70B93 mov     rcx, cs:callui_ptr
//   0x70B9A mov     edi, 82h
//   0x70B9F xor     eax, eax
//   0x70BA1 call    qword ptr [rcx]
//   0x70BA3 mov     byte ptr [rbx+0C8h], 0
//   0x70BAA mov     rdi, [rbx+0A8h]
//   0x70BB1 test    rdi, rdi
//   0x70BB4 jz      short loc_70BC6
//   0x70BB6 mov     qword ptr [rbx+0B0h], 0
//   0x70BC1 call    _qfree
//   0x70BC6 lea     rax, unk_8CA80
//   0x70BCD mov     rdi, rbx
//   0x70BD0 add     rax, 10h
//   0x70BD4 mov     [rbx], rax
//   0x70BD7 call    sub_6D1D0
//   0x70BDC mov     rdi, [rbx+40h]
//   0x70BE0 test    rdi, rdi
//   0x70BE3 jz      short loc_70BF2
//   0x70BE5 mov     qword ptr [rbx+48h], 0
//   0x70BED call    _qfree
//   0x70BF2 mov     rdi, [rbx+28h]
//   0x70BF6 test    rdi, rdi
//   0x70BF9 jz      short loc_70C08
//   0x70BFB mov     qword ptr [rbx+30h], 0
//   0x70C03 call    _qfree
//   0x70C08 mov     rdi, [rbx+10h]
//   0x70C0C test    rdi, rdi
//   0x70C0F jz      short loc_70C1E
//   0x70C11 mov     qword ptr [rbx+18h], 0
//   0x70C19 call    _qfree
//   0x70C1E pop     rbx
//   0x70C1F retn
//   0x70C20 mov     rsi, [rbx+0A8h]
//   0x70C27 jmp     loc_70B93
//   0x70C2C align 10h
//   0x70C30 mov     rdx, [rax]
//   0x70C33 jmp     loc_70B7E
// ============================================================

void sub_70B40(/* signature unknown */)
{
    // see disassembly above
}

