// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x39AEE0
// Name:           sub_39AEE0
// Function size:  311 bytes (77 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x39AEE0 push    rbx
//   0x39AEE1 sub     rsp, 10h
//   0x39AEE5 mov     eax, [rdi+14h]
//   0x39AEE8 mov     rbx, fs:28h
//   0x39AEF1 mov     [rsp+18h+var_10], rbx
//   0x39AEF6 mov     rbx, rdi
//   0x39AEF9 mov     edx, eax
//   0x39AEFB and     edx, 0DFFFFFFFh
//   0x39AF01 mov     [rdi+14h], edx
//   0x39AF04 test    eax, 0E000000h
//   0x39AF09 jnz     short loc_39AF40
//   0x39AF0B mov     eax, [rbx+10h]
//   0x39AF0E lea     edx, [rax-1000004h]
//   0x39AF14 cmp     edx, 1
//   0x39AF17 jbe     loc_39AFE0
//   0x39AF1D cmp     eax, 1000000h
//   0x39AF22 jz      short loc_39AF80
//   0x39AF24 xor     eax, eax
//   0x39AF26 mov     rdx, [rsp+18h+var_10]
//   0x39AF2B sub     rdx, fs:28h
//   0x39AF34 jnz     loc_39B012
//   0x39AF3A add     rsp, 10h
//   0x39AF3E pop     rbx
//   0x39AF3F retn
//   0x39AF40 cmp     edx, 4000000h
//   0x39AF46 jnz     short loc_39AF24
//   0x39AF48 mov     eax, [rbx+10h]
//   0x39AF4B lea     edx, [rax-1000004h]
//   0x39AF51 cmp     edx, 1
//   0x39AF54 jbe     loc_39B000
//   0x39AF5A cmp     eax, 41h ; 'A'
//   0x39AF5D jnz     short loc_39AF24
//   0x39AF5F mov     r8, cs:callui_ptr
//   0x39AF66 xor     ecx, ecx
//   0x39AF68 xor     edx, edx
//   0x39AF6A mov     edi, 64h ; 'd'
//   0x39AF6F lea     rsi, aSelectall; "SelectAll"
//   0x39AF76 xor     eax, eax
//   0x39AF78 call    qword ptr [r8]
//   0x39AF7B movzx   eax, al
//   0x39AF7E jmp     short loc_39AF26
//   0x39AF80 mov     rax, [rbx+8]
//   0x39AF84 mov     rcx, [rax+8]
//   0x39AF88 test    rcx, rcx
//   0x39AF8B jz      short loc_39AF24
//   0x39AF8D mov     r8, cs:callui_ptr
//   0x39AF94 xor     edx, edx
//   0x39AF96 xor     eax, eax
//   0x39AF98 lea     rsi, [rsp+18h+var_14]
//   0x39AF9D mov     edi, 7Eh ; '~'
//   0x39AFA2 call    qword ptr [r8]
//   0x39AFA5 test    al, al
//   0x39AFA7 jz      loc_39AF24
//   0x39AFAD mov     eax, [rsp+18h+var_14]
//   0x39AFB1 test    eax, eax
//   0x39AFB3 jg      loc_39AF24
//   0x39AFB9 mov     rax, [rbx+8]
//   0x39AFBD mov     rdx, [rax+80h]
//   0x39AFC4 test    byte ptr [rdx+25Dh], 10h
//   0x39AFCB jz      short loc_39AFED
//   0x39AFCD mov     rdi, [rax+10h]
//   0x39AFD1 call    sub_389DE0
//   0x39AFD6 jmp     short loc_39AFED
//   0x39AFD8 align 20h
//   0x39AFE0 mov     rdi, [rbx+8]
//   0x39AFE4 xor     edx, edx
//   0x39AFE6 xor     esi, esi
//   0x39AFE8 call    sub_39A7C0
//   0x39AFED mov     eax, 1
//   0x39AFF2 jmp     loc_39AF26
//   0x39AFF7 align 20h
//   0x39B000 mov     rdi, [rbx+8]
//   0x39B004 mov     edx, 8
//   0x39B009 xor     esi, esi
//   0x39B00B call    sub_39A7C0
//   0x39B010 jmp     short loc_39AFED
//   0x39B012 call    ___stack_chk_fail
// ============================================================

void sub_39AEE0(/* signature unknown */)
{
    // see disassembly above
}

