// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x394E60
// Name:           sub_394E60
// Function size:  311 bytes (77 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x394E60 push    rbx
//   0x394E61 sub     rsp, 10h
//   0x394E65 mov     eax, [rdi+14h]
//   0x394E68 mov     rbx, fs:28h
//   0x394E71 mov     [rsp+18h+var_10], rbx
//   0x394E76 mov     rbx, rdi
//   0x394E79 mov     edx, eax
//   0x394E7B and     edx, 0DFFFFFFFh
//   0x394E81 mov     [rdi+14h], edx
//   0x394E84 test    eax, 0E000000h
//   0x394E89 jnz     short loc_394EC0
//   0x394E8B mov     eax, [rbx+10h]
//   0x394E8E lea     edx, [rax-1000004h]
//   0x394E94 cmp     edx, 1
//   0x394E97 jbe     loc_394F60
//   0x394E9D cmp     eax, 1000000h
//   0x394EA2 jz      short loc_394F00
//   0x394EA4 xor     eax, eax
//   0x394EA6 mov     rdx, [rsp+18h+var_10]
//   0x394EAB sub     rdx, fs:28h
//   0x394EB4 jnz     loc_394F92
//   0x394EBA add     rsp, 10h
//   0x394EBE pop     rbx
//   0x394EBF retn
//   0x394EC0 cmp     edx, 4000000h
//   0x394EC6 jnz     short loc_394EA4
//   0x394EC8 mov     eax, [rbx+10h]
//   0x394ECB lea     edx, [rax-1000004h]
//   0x394ED1 cmp     edx, 1
//   0x394ED4 jbe     loc_394F80
//   0x394EDA cmp     eax, 41h ; 'A'
//   0x394EDD jnz     short loc_394EA4
//   0x394EDF mov     r8, cs:callui_ptr
//   0x394EE6 xor     ecx, ecx
//   0x394EE8 xor     edx, edx
//   0x394EEA mov     edi, 64h ; 'd'
//   0x394EEF lea     rsi, aSelectall; "SelectAll"
//   0x394EF6 xor     eax, eax
//   0x394EF8 call    qword ptr [r8]
//   0x394EFB movzx   eax, al
//   0x394EFE jmp     short loc_394EA6
//   0x394F00 mov     rax, [rbx+8]
//   0x394F04 mov     rcx, [rax+8]
//   0x394F08 test    rcx, rcx
//   0x394F0B jz      short loc_394EA4
//   0x394F0D mov     r8, cs:callui_ptr
//   0x394F14 xor     edx, edx
//   0x394F16 xor     eax, eax
//   0x394F18 lea     rsi, [rsp+18h+var_14]
//   0x394F1D mov     edi, 7Eh ; '~'
//   0x394F22 call    qword ptr [r8]
//   0x394F25 test    al, al
//   0x394F27 jz      loc_394EA4
//   0x394F2D mov     eax, [rsp+18h+var_14]
//   0x394F31 test    eax, eax
//   0x394F33 jg      loc_394EA4
//   0x394F39 mov     rax, [rbx+8]
//   0x394F3D mov     rdx, [rax+80h]
//   0x394F44 test    byte ptr [rdx+25Dh], 10h
//   0x394F4B jz      short loc_394F6D
//   0x394F4D mov     rdi, [rax+10h]
//   0x394F51 call    sub_383D60
//   0x394F56 jmp     short loc_394F6D
//   0x394F58 align 20h
//   0x394F60 mov     rdi, [rbx+8]
//   0x394F64 xor     edx, edx
//   0x394F66 xor     esi, esi
//   0x394F68 call    sub_394740
//   0x394F6D mov     eax, 1
//   0x394F72 jmp     loc_394EA6
//   0x394F77 align 20h
//   0x394F80 mov     rdi, [rbx+8]
//   0x394F84 mov     edx, 8
//   0x394F89 xor     esi, esi
//   0x394F8B call    sub_394740
//   0x394F90 jmp     short loc_394F6D
//   0x394F92 call    ___stack_chk_fail
// ============================================================

void sub_394E60(/* signature unknown */)
{
    // see disassembly above
}

