// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3BD0B0
// Name:           sub_3BD0B0
// Function size:  137 bytes (43 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3BD0B0 push    rbp
//   0x3BD0B1 push    rbx
//   0x3BD0B2 mov     rbx, rdi
//   0x3BD0B5 sub     rsp, 8
//   0x3BD0B9 mov     rbp, [rsi]
//   0x3BD0BC mov     rdi, [rdi+10h]
//   0x3BD0C0 mov     rsi, rbp
//   0x3BD0C3 call    sub_38A130
//   0x3BD0C8 test    rax, rax
//   0x3BD0CB jz      short loc_3BD128
//   0x3BD0CD mov     rsi, rax
//   0x3BD0D0 mov     eax, [rbx+18h]
//   0x3BD0D3 test    eax, eax
//   0x3BD0D5 jz      short loc_3BD0E7
//   0x3BD0D7 cmp     eax, 1
//   0x3BD0DA jnz     short loc_3BD134
//   0x3BD0DC mov     eax, 6
//   0x3BD0E1 cmp     rbp, [rsi+8]
//   0x3BD0E5 jnz     short loc_3BD11A
//   0x3BD0E7 mov     rax, [rbx]
//   0x3BD0EA mov     rdi, rbx
//   0x3BD0ED call    qword ptr [rax+30h]
//   0x3BD0F0 mov     rcx, [rbx+30h]
//   0x3BD0F4 mov     rsi, [rbx+20h]
//   0x3BD0F8 mov     edx, 1
//   0x3BD0FD mov     r8, cs:callui_ptr
//   0x3BD104 test    al, al
//   0x3BD106 mov     edi, 8Ch
//   0x3BD10B cmovnz  rcx, [rbx+28h]
//   0x3BD110 xor     eax, eax
//   0x3BD112 call    qword ptr [r8]
//   0x3BD115 mov     eax, 3
//   0x3BD11A add     rsp, 8
//   0x3BD11E pop     rbx
//   0x3BD11F pop     rbp
//   0x3BD120 retn
//   0x3BD121 align 8
//   0x3BD128 add     rsp, 8
//   0x3BD12C mov     eax, 6
//   0x3BD131 pop     rbx
//   0x3BD132 pop     rbp
//   0x3BD133 retn
//   0x3BD134 call    sub_3BAF10
// ============================================================

void sub_3BD0B0(/* signature unknown */)
{
    // see disassembly above
}

