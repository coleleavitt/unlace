// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x386590
// Name:           sub_386590
// Function size:  179 bytes (58 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x386590 mov     rax, [rdi+8]
//   0x386594 mov     dword ptr [rdi+38h], 0
//   0x38659B mov     dword ptr [rdi+50h], 0
//   0x3865A2 mov     dword ptr [rdi+68h], 0
//   0x3865A9 test    rax, rax
//   0x3865AC jz      loc_386640
//   0x3865B2 push    r12
//   0x3865B4 xor     r12d, r12d
//   0x3865B7 test    esi, esi
//   0x3865B9 lea     rcx, [rdi+30h]
//   0x3865BD push    rbp
//   0x3865BE mov     rbp, cs:callui_ptr
//   0x3865C5 setnz   r12b
//   0x3865C9 lea     r8, [rdi+34h]
//   0x3865CD push    rbx
//   0x3865CE mov     rsi, rax
//   0x3865D1 mov     rbx, rdi
//   0x3865D4 xor     eax, eax
//   0x3865D6 mov     edx, r12d
//   0x3865D9 mov     edi, 38h ; '8'
//   0x3865DE call    qword ptr [rbp+0]
//   0x3865E1 test    rax, rax
//   0x3865E4 jz      short loc_386638
//   0x3865E6 mov     eax, [rax+0Ch]
//   0x3865E9 mov     rsi, [rbx+8]
//   0x3865ED mov     edx, r12d
//   0x3865F0 mov     edi, 46h ; 'F'
//   0x3865F5 mov     [rbx+2Ch], eax
//   0x3865F8 xor     eax, eax
//   0x3865FA call    qword ptr [rbp+0]
//   0x3865FD mov     rdi, [rbx+20h]
//   0x386601 xor     ecx, ecx
//   0x386603 mov     edx, [rbx+30h]
//   0x386606 mov     rsi, rax
//   0x386609 lea     r9, [rbx+50h]
//   0x38660D lea     r8, [rbx+38h]
//   0x386611 mov     eax, [rdi+98h]
//   0x386617 cmp     [rbx+2Ch], eax
//   0x38661A lea     rax, [rbx+68h]
//   0x38661E setnl   cl
//   0x386621 sub     rsp, 8
//   0x386625 push    rax
//   0x386626 call    sub_385890
//   0x38662B pop     rdx
//   0x38662C pop     rcx
//   0x38662D pop     rbx
//   0x38662E pop     rbp
//   0x38662F pop     r12
//   0x386631 retn
//   0x386632 align 8
//   0x386638 pop     rbx
//   0x386639 xor     eax, eax
//   0x38663B pop     rbp
//   0x38663C pop     r12
//   0x38663E retn
//   0x38663F align 20h
//   0x386640 xor     eax, eax
//   0x386642 retn
// ============================================================

void sub_386590(/* signature unknown */)
{
    // see disassembly above
}

