// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x38B490
// Name:           sub_38B490
// Function size:  179 bytes (58 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x38B490 mov     rax, [rdi+8]
//   0x38B494 mov     dword ptr [rdi+38h], 0
//   0x38B49B mov     dword ptr [rdi+50h], 0
//   0x38B4A2 mov     dword ptr [rdi+68h], 0
//   0x38B4A9 test    rax, rax
//   0x38B4AC jz      loc_38B540
//   0x38B4B2 push    r12
//   0x38B4B4 xor     r12d, r12d
//   0x38B4B7 test    esi, esi
//   0x38B4B9 lea     rcx, [rdi+30h]
//   0x38B4BD push    rbp
//   0x38B4BE mov     rbp, cs:callui_ptr
//   0x38B4C5 setnz   r12b
//   0x38B4C9 lea     r8, [rdi+34h]
//   0x38B4CD push    rbx
//   0x38B4CE mov     rsi, rax
//   0x38B4D1 mov     rbx, rdi
//   0x38B4D4 xor     eax, eax
//   0x38B4D6 mov     edx, r12d
//   0x38B4D9 mov     edi, 38h ; '8'
//   0x38B4DE call    qword ptr [rbp+0]
//   0x38B4E1 test    rax, rax
//   0x38B4E4 jz      short loc_38B538
//   0x38B4E6 mov     eax, [rax+0Ch]
//   0x38B4E9 mov     rsi, [rbx+8]
//   0x38B4ED mov     edx, r12d
//   0x38B4F0 mov     edi, 46h ; 'F'
//   0x38B4F5 mov     [rbx+2Ch], eax
//   0x38B4F8 xor     eax, eax
//   0x38B4FA call    qword ptr [rbp+0]
//   0x38B4FD mov     rdi, [rbx+20h]
//   0x38B501 xor     ecx, ecx
//   0x38B503 mov     edx, [rbx+30h]
//   0x38B506 mov     rsi, rax
//   0x38B509 lea     r9, [rbx+50h]
//   0x38B50D lea     r8, [rbx+38h]
//   0x38B511 mov     eax, [rdi+98h]
//   0x38B517 cmp     [rbx+2Ch], eax
//   0x38B51A lea     rax, [rbx+68h]
//   0x38B51E setnl   cl
//   0x38B521 sub     rsp, 8
//   0x38B525 push    rax
//   0x38B526 call    sub_38A790
//   0x38B52B pop     rdx
//   0x38B52C pop     rcx
//   0x38B52D pop     rbx
//   0x38B52E pop     rbp
//   0x38B52F pop     r12
//   0x38B531 retn
//   0x38B532 align 8
//   0x38B538 pop     rbx
//   0x38B539 xor     eax, eax
//   0x38B53B pop     rbp
//   0x38B53C pop     r12
//   0x38B53E retn
//   0x38B53F align 20h
//   0x38B540 xor     eax, eax
//   0x38B542 retn
// ============================================================

void sub_38B490(/* signature unknown */)
{
    // see disassembly above
}

