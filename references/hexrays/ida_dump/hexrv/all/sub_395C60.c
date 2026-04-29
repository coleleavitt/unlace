// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x395C60
// Name:           sub_395C60
// Function size:  311 bytes (77 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x395C60 push    rbx
//   0x395C61 sub     rsp, 10h
//   0x395C65 mov     eax, [rdi+14h]
//   0x395C68 mov     rbx, fs:28h
//   0x395C71 mov     [rsp+18h+var_10], rbx
//   0x395C76 mov     rbx, rdi
//   0x395C79 mov     edx, eax
//   0x395C7B and     edx, 0DFFFFFFFh
//   0x395C81 mov     [rdi+14h], edx
//   0x395C84 test    eax, 0E000000h
//   0x395C89 jnz     short loc_395CC0
//   0x395C8B mov     eax, [rbx+10h]
//   0x395C8E lea     edx, [rax-1000004h]
//   0x395C94 cmp     edx, 1
//   0x395C97 jbe     loc_395D60
//   0x395C9D cmp     eax, 1000000h
//   0x395CA2 jz      short loc_395D00
//   0x395CA4 xor     eax, eax
//   0x395CA6 mov     rdx, [rsp+18h+var_10]
//   0x395CAB sub     rdx, fs:28h
//   0x395CB4 jnz     loc_395D92
//   0x395CBA add     rsp, 10h
//   0x395CBE pop     rbx
//   0x395CBF retn
//   0x395CC0 cmp     edx, 4000000h
//   0x395CC6 jnz     short loc_395CA4
//   0x395CC8 mov     eax, [rbx+10h]
//   0x395CCB lea     edx, [rax-1000004h]
//   0x395CD1 cmp     edx, 1
//   0x395CD4 jbe     loc_395D80
//   0x395CDA cmp     eax, 41h ; 'A'
//   0x395CDD jnz     short loc_395CA4
//   0x395CDF mov     r8, cs:callui_ptr
//   0x395CE6 xor     ecx, ecx
//   0x395CE8 xor     edx, edx
//   0x395CEA mov     edi, 64h ; 'd'
//   0x395CEF lea     rsi, aSelectall; "SelectAll"
//   0x395CF6 xor     eax, eax
//   0x395CF8 call    qword ptr [r8]
//   0x395CFB movzx   eax, al
//   0x395CFE jmp     short loc_395CA6
//   0x395D00 mov     rax, [rbx+8]
//   0x395D04 mov     rcx, [rax+8]
//   0x395D08 test    rcx, rcx
//   0x395D0B jz      short loc_395CA4
//   0x395D0D mov     r8, cs:callui_ptr
//   0x395D14 xor     edx, edx
//   0x395D16 xor     eax, eax
//   0x395D18 lea     rsi, [rsp+18h+var_14]
//   0x395D1D mov     edi, 7Eh ; '~'
//   0x395D22 call    qword ptr [r8]
//   0x395D25 test    al, al
//   0x395D27 jz      loc_395CA4
//   0x395D2D mov     eax, [rsp+18h+var_14]
//   0x395D31 test    eax, eax
//   0x395D33 jg      loc_395CA4
//   0x395D39 mov     rax, [rbx+8]
//   0x395D3D mov     rdx, [rax+80h]
//   0x395D44 test    byte ptr [rdx+25Dh], 10h
//   0x395D4B jz      short loc_395D6D
//   0x395D4D mov     rdi, [rax+10h]
//   0x395D51 call    sub_384B60
//   0x395D56 jmp     short loc_395D6D
//   0x395D58 align 20h
//   0x395D60 mov     rdi, [rbx+8]
//   0x395D64 xor     edx, edx
//   0x395D66 xor     esi, esi
//   0x395D68 call    sub_395540
//   0x395D6D mov     eax, 1
//   0x395D72 jmp     loc_395CA6
//   0x395D77 align 20h
//   0x395D80 mov     rdi, [rbx+8]
//   0x395D84 mov     edx, 8
//   0x395D89 xor     esi, esi
//   0x395D8B call    sub_395540
//   0x395D90 jmp     short loc_395D6D
//   0x395D92 call    ___stack_chk_fail
// ============================================================

void sub_395C60(/* signature unknown */)
{
    // see disassembly above
}

