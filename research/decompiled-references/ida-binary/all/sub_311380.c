// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x311380
// Name:           sub_311380
// Function size:  129 bytes (41 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x311380 push    rbp
//   0x311381 push    rbx
//   0x311382 sub     rsp, 8
//   0x311386 mov     rbx, cs:_ZN2QT16QCoreApplication4selfE_ptr
//   0x31138D mov     rdi, [rbx]
//   0x311390 call    sub_47AFB0
//   0x311395 test    al, al
//   0x311397 jz      short loc_3113A8
//   0x311399 add     rsp, 8
//   0x31139D mov     eax, 1
//   0x3113A2 pop     rbx
//   0x3113A3 pop     rbp
//   0x3113A4 retn
//   0x3113A5 align 8
//   0x3113A8 mov     rdi, [rbx]
//   0x3113AB call    sub_47A7A0
//   0x3113B0 mov     rbp, rax
//   0x3113B3 test    rax, rax
//   0x3113B6 jz      short loc_311399
//   0x3113B8 xor     esi, esi
//   0x3113BA mov     rdi, rax
//   0x3113BD call    sub_4CD6B0
//   0x3113C2 mov     rdi, rax
//   0x3113C5 call    sub_4B8CE0
//   0x3113CA test    al, al
//   0x3113CC jnz     short loc_3113F0
//   0x3113CE mov     rdi, [rbx]
//   0x3113D1 mov     rsi, rbp
//   0x3113D4 xor     edx, edx
//   0x3113D6 mov     rax, [rdi]
//   0x3113D9 call    qword ptr [rax+0F8h]
//   0x3113DF add     rsp, 8
//   0x3113E3 mov     eax, 1
//   0x3113E8 pop     rbx
//   0x3113E9 pop     rbp
//   0x3113EA retn
//   0x3113EB align 10h
//   0x3113F0 mov     rdi, cs:qword_8CD8B8
//   0x3113F7 mov     rsi, rbp
//   0x3113FA call    sub_4C9900
//   0x3113FF jmp     short loc_311399
// ============================================================

void sub_311380(/* signature unknown */)
{
    // see disassembly above
}

