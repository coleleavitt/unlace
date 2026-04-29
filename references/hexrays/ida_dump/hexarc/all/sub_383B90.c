// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x383B90
// Name:           sub_383B90
// Function size:  179 bytes (58 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x383B90 mov     rax, [rdi+8]
//   0x383B94 mov     dword ptr [rdi+38h], 0
//   0x383B9B mov     dword ptr [rdi+50h], 0
//   0x383BA2 mov     dword ptr [rdi+68h], 0
//   0x383BA9 test    rax, rax
//   0x383BAC jz      loc_383C40
//   0x383BB2 push    r12
//   0x383BB4 xor     r12d, r12d
//   0x383BB7 test    esi, esi
//   0x383BB9 lea     rcx, [rdi+30h]
//   0x383BBD push    rbp
//   0x383BBE mov     rbp, cs:callui_ptr
//   0x383BC5 setnz   r12b
//   0x383BC9 lea     r8, [rdi+34h]
//   0x383BCD push    rbx
//   0x383BCE mov     rsi, rax
//   0x383BD1 mov     rbx, rdi
//   0x383BD4 xor     eax, eax
//   0x383BD6 mov     edx, r12d
//   0x383BD9 mov     edi, 38h ; '8'
//   0x383BDE call    qword ptr [rbp+0]
//   0x383BE1 test    rax, rax
//   0x383BE4 jz      short loc_383C38
//   0x383BE6 mov     eax, [rax+0Ch]
//   0x383BE9 mov     rsi, [rbx+8]
//   0x383BED mov     edx, r12d
//   0x383BF0 mov     edi, 46h ; 'F'
//   0x383BF5 mov     [rbx+2Ch], eax
//   0x383BF8 xor     eax, eax
//   0x383BFA call    qword ptr [rbp+0]
//   0x383BFD mov     rdi, [rbx+20h]
//   0x383C01 xor     ecx, ecx
//   0x383C03 mov     edx, [rbx+30h]
//   0x383C06 mov     rsi, rax
//   0x383C09 lea     r9, [rbx+50h]
//   0x383C0D lea     r8, [rbx+38h]
//   0x383C11 mov     eax, [rdi+98h]
//   0x383C17 cmp     [rbx+2Ch], eax
//   0x383C1A lea     rax, [rbx+68h]
//   0x383C1E setnl   cl
//   0x383C21 sub     rsp, 8
//   0x383C25 push    rax
//   0x383C26 call    sub_382E90
//   0x383C2B pop     rdx
//   0x383C2C pop     rcx
//   0x383C2D pop     rbx
//   0x383C2E pop     rbp
//   0x383C2F pop     r12
//   0x383C31 retn
//   0x383C32 align 8
//   0x383C38 pop     rbx
//   0x383C39 xor     eax, eax
//   0x383C3B pop     rbp
//   0x383C3C pop     r12
//   0x383C3E retn
//   0x383C3F align 20h
//   0x383C40 xor     eax, eax
//   0x383C42 retn
// ============================================================

void sub_383B90(/* signature unknown */)
{
    // see disassembly above
}

