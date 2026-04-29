// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x395FE0
// Name:           sub_395FE0
// Function size:  311 bytes (77 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x395FE0 push    rbx
//   0x395FE1 sub     rsp, 10h
//   0x395FE5 mov     eax, [rdi+14h]
//   0x395FE8 mov     rbx, fs:28h
//   0x395FF1 mov     [rsp+18h+var_10], rbx
//   0x395FF6 mov     rbx, rdi
//   0x395FF9 mov     edx, eax
//   0x395FFB and     edx, 0DFFFFFFFh
//   0x396001 mov     [rdi+14h], edx
//   0x396004 test    eax, 0E000000h
//   0x396009 jnz     short loc_396040
//   0x39600B mov     eax, [rbx+10h]
//   0x39600E lea     edx, [rax-1000004h]
//   0x396014 cmp     edx, 1
//   0x396017 jbe     loc_3960E0
//   0x39601D cmp     eax, 1000000h
//   0x396022 jz      short loc_396080
//   0x396024 xor     eax, eax
//   0x396026 mov     rdx, [rsp+18h+var_10]
//   0x39602B sub     rdx, fs:28h
//   0x396034 jnz     loc_396112
//   0x39603A add     rsp, 10h
//   0x39603E pop     rbx
//   0x39603F retn
//   0x396040 cmp     edx, 4000000h
//   0x396046 jnz     short loc_396024
//   0x396048 mov     eax, [rbx+10h]
//   0x39604B lea     edx, [rax-1000004h]
//   0x396051 cmp     edx, 1
//   0x396054 jbe     loc_396100
//   0x39605A cmp     eax, 41h ; 'A'
//   0x39605D jnz     short loc_396024
//   0x39605F mov     r8, cs:callui_ptr
//   0x396066 xor     ecx, ecx
//   0x396068 xor     edx, edx
//   0x39606A mov     edi, 64h ; 'd'
//   0x39606F lea     rsi, aSelectall; "SelectAll"
//   0x396076 xor     eax, eax
//   0x396078 call    qword ptr [r8]
//   0x39607B movzx   eax, al
//   0x39607E jmp     short loc_396026
//   0x396080 mov     rax, [rbx+8]
//   0x396084 mov     rcx, [rax+8]
//   0x396088 test    rcx, rcx
//   0x39608B jz      short loc_396024
//   0x39608D mov     r8, cs:callui_ptr
//   0x396094 xor     edx, edx
//   0x396096 xor     eax, eax
//   0x396098 lea     rsi, [rsp+18h+var_14]
//   0x39609D mov     edi, 7Eh ; '~'
//   0x3960A2 call    qword ptr [r8]
//   0x3960A5 test    al, al
//   0x3960A7 jz      loc_396024
//   0x3960AD mov     eax, [rsp+18h+var_14]
//   0x3960B1 test    eax, eax
//   0x3960B3 jg      loc_396024
//   0x3960B9 mov     rax, [rbx+8]
//   0x3960BD mov     rdx, [rax+80h]
//   0x3960C4 test    byte ptr [rdx+25Dh], 10h
//   0x3960CB jz      short loc_3960ED
//   0x3960CD mov     rdi, [rax+10h]
//   0x3960D1 call    sub_384EE0
//   0x3960D6 jmp     short loc_3960ED
//   0x3960D8 align 20h
//   0x3960E0 mov     rdi, [rbx+8]
//   0x3960E4 xor     edx, edx
//   0x3960E6 xor     esi, esi
//   0x3960E8 call    sub_3958C0
//   0x3960ED mov     eax, 1
//   0x3960F2 jmp     loc_396026
//   0x3960F7 align 20h
//   0x396100 mov     rdi, [rbx+8]
//   0x396104 mov     edx, 8
//   0x396109 xor     esi, esi
//   0x39610B call    sub_3958C0
//   0x396110 jmp     short loc_3960ED
//   0x396112 call    ___stack_chk_fail
// ============================================================

void sub_395FE0(/* signature unknown */)
{
    // see disassembly above
}

