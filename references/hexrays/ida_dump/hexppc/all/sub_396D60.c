// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x396D60
// Name:           sub_396D60
// Function size:  311 bytes (77 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x396D60 push    rbx
//   0x396D61 sub     rsp, 10h
//   0x396D65 mov     eax, [rdi+14h]
//   0x396D68 mov     rbx, fs:28h
//   0x396D71 mov     [rsp+18h+var_10], rbx
//   0x396D76 mov     rbx, rdi
//   0x396D79 mov     edx, eax
//   0x396D7B and     edx, 0DFFFFFFFh
//   0x396D81 mov     [rdi+14h], edx
//   0x396D84 test    eax, 0E000000h
//   0x396D89 jnz     short loc_396DC0
//   0x396D8B mov     eax, [rbx+10h]
//   0x396D8E lea     edx, [rax-1000004h]
//   0x396D94 cmp     edx, 1
//   0x396D97 jbe     loc_396E60
//   0x396D9D cmp     eax, 1000000h
//   0x396DA2 jz      short loc_396E00
//   0x396DA4 xor     eax, eax
//   0x396DA6 mov     rdx, [rsp+18h+var_10]
//   0x396DAB sub     rdx, fs:28h
//   0x396DB4 jnz     loc_396E92
//   0x396DBA add     rsp, 10h
//   0x396DBE pop     rbx
//   0x396DBF retn
//   0x396DC0 cmp     edx, 4000000h
//   0x396DC6 jnz     short loc_396DA4
//   0x396DC8 mov     eax, [rbx+10h]
//   0x396DCB lea     edx, [rax-1000004h]
//   0x396DD1 cmp     edx, 1
//   0x396DD4 jbe     loc_396E80
//   0x396DDA cmp     eax, 41h ; 'A'
//   0x396DDD jnz     short loc_396DA4
//   0x396DDF mov     r8, cs:callui_ptr
//   0x396DE6 xor     ecx, ecx
//   0x396DE8 xor     edx, edx
//   0x396DEA mov     edi, 64h ; 'd'
//   0x396DEF lea     rsi, aSelectall; "SelectAll"
//   0x396DF6 xor     eax, eax
//   0x396DF8 call    qword ptr [r8]
//   0x396DFB movzx   eax, al
//   0x396DFE jmp     short loc_396DA6
//   0x396E00 mov     rax, [rbx+8]
//   0x396E04 mov     rcx, [rax+8]
//   0x396E08 test    rcx, rcx
//   0x396E0B jz      short loc_396DA4
//   0x396E0D mov     r8, cs:callui_ptr
//   0x396E14 xor     edx, edx
//   0x396E16 xor     eax, eax
//   0x396E18 lea     rsi, [rsp+18h+var_14]
//   0x396E1D mov     edi, 7Eh ; '~'
//   0x396E22 call    qword ptr [r8]
//   0x396E25 test    al, al
//   0x396E27 jz      loc_396DA4
//   0x396E2D mov     eax, [rsp+18h+var_14]
//   0x396E31 test    eax, eax
//   0x396E33 jg      loc_396DA4
//   0x396E39 mov     rax, [rbx+8]
//   0x396E3D mov     rdx, [rax+80h]
//   0x396E44 test    byte ptr [rdx+25Dh], 10h
//   0x396E4B jz      short loc_396E6D
//   0x396E4D mov     rdi, [rax+10h]
//   0x396E51 call    sub_385C60
//   0x396E56 jmp     short loc_396E6D
//   0x396E58 align 20h
//   0x396E60 mov     rdi, [rbx+8]
//   0x396E64 xor     edx, edx
//   0x396E66 xor     esi, esi
//   0x396E68 call    sub_396640
//   0x396E6D mov     eax, 1
//   0x396E72 jmp     loc_396DA6
//   0x396E77 align 20h
//   0x396E80 mov     rdi, [rbx+8]
//   0x396E84 mov     edx, 8
//   0x396E89 xor     esi, esi
//   0x396E8B call    sub_396640
//   0x396E90 jmp     short loc_396E6D
//   0x396E92 call    ___stack_chk_fail
// ============================================================

void sub_396D60(/* signature unknown */)
{
    // see disassembly above
}

