// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x38B9D0
// Name:           sub_38B9D0
// Function size:  179 bytes (58 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x38B9D0 mov     rax, [rdi+8]
//   0x38B9D4 mov     dword ptr [rdi+38h], 0
//   0x38B9DB mov     dword ptr [rdi+50h], 0
//   0x38B9E2 mov     dword ptr [rdi+68h], 0
//   0x38B9E9 test    rax, rax
//   0x38B9EC jz      loc_38BA80
//   0x38B9F2 push    r12
//   0x38B9F4 xor     r12d, r12d
//   0x38B9F7 test    esi, esi
//   0x38B9F9 lea     rcx, [rdi+30h]
//   0x38B9FD push    rbp
//   0x38B9FE mov     rbp, cs:callui_ptr
//   0x38BA05 setnz   r12b
//   0x38BA09 lea     r8, [rdi+34h]
//   0x38BA0D push    rbx
//   0x38BA0E mov     rsi, rax
//   0x38BA11 mov     rbx, rdi
//   0x38BA14 xor     eax, eax
//   0x38BA16 mov     edx, r12d
//   0x38BA19 mov     edi, 38h ; '8'
//   0x38BA1E call    qword ptr [rbp+0]
//   0x38BA21 test    rax, rax
//   0x38BA24 jz      short loc_38BA78
//   0x38BA26 mov     eax, [rax+0Ch]
//   0x38BA29 mov     rsi, [rbx+8]
//   0x38BA2D mov     edx, r12d
//   0x38BA30 mov     edi, 46h ; 'F'
//   0x38BA35 mov     [rbx+2Ch], eax
//   0x38BA38 xor     eax, eax
//   0x38BA3A call    qword ptr [rbp+0]
//   0x38BA3D mov     rdi, [rbx+20h]
//   0x38BA41 xor     ecx, ecx
//   0x38BA43 mov     edx, [rbx+30h]
//   0x38BA46 mov     rsi, rax
//   0x38BA49 lea     r9, [rbx+50h]
//   0x38BA4D lea     r8, [rbx+38h]
//   0x38BA51 mov     eax, [rdi+98h]
//   0x38BA57 cmp     [rbx+2Ch], eax
//   0x38BA5A lea     rax, [rbx+68h]
//   0x38BA5E setnl   cl
//   0x38BA61 sub     rsp, 8
//   0x38BA65 push    rax
//   0x38BA66 call    sub_38ACD0
//   0x38BA6B pop     rdx
//   0x38BA6C pop     rcx
//   0x38BA6D pop     rbx
//   0x38BA6E pop     rbp
//   0x38BA6F pop     r12
//   0x38BA71 retn
//   0x38BA72 align 8
//   0x38BA78 pop     rbx
//   0x38BA79 xor     eax, eax
//   0x38BA7B pop     rbp
//   0x38BA7C pop     r12
//   0x38BA7E retn
//   0x38BA7F align 20h
//   0x38BA80 xor     eax, eax
//   0x38BA82 retn
// ============================================================

void sub_38B9D0(/* signature unknown */)
{
    // see disassembly above
}

