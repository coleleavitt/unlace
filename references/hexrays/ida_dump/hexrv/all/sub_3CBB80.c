// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3CBB80
// Name:           sub_3CBB80
// Function size:  155 bytes (49 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3CBB80 mov     rdx, [rdi+10h]
//   0x3CBB84 mov     rsi, [rsi]
//   0x3CBB87 mov     rax, [rdx+828h]
//   0x3CBB8E mov     rdx, [rdx+830h]
//   0x3CBB95 lea     rdx, [rax+rdx*8]
//   0x3CBB99 cmp     rax, rdx
//   0x3CBB9C jz      short loc_3CBC15
//   0x3CBB9E push    rbp
//   0x3CBB9F mov     rbp, rdi
//   0x3CBBA2 push    rbx
//   0x3CBBA3 sub     rsp, 8
//   0x3CBBA7 nop     word ptr [rax+rax+00000000h]
//   0x3CBBB0 mov     rbx, [rax]
//   0x3CBBB3 test    rbx, rbx
//   0x3CBBB6 jz      short loc_3CBBBD
//   0x3CBBB8 cmp     rsi, [rbx]
//   0x3CBBBB jz      short loc_3CBBD8
//   0x3CBBBD add     rax, 8
//   0x3CBBC1 cmp     rdx, rax
//   0x3CBBC4 jnz     short loc_3CBBB0
//   0x3CBBC6 add     rsp, 8
//   0x3CBBCA mov     eax, 7
//   0x3CBBCF pop     rbx
//   0x3CBBD0 pop     rbp
//   0x3CBBD1 retn
//   0x3CBBD2 align 8
//   0x3CBBD8 mov     r9, cs:callui_ptr
//   0x3CBBDF xor     edx, edx
//   0x3CBBE1 xor     r8d, r8d
//   0x3CBBE4 xor     ecx, ecx
//   0x3CBBE6 mov     edi, 38h ; '8'
//   0x3CBBEB xor     eax, eax
//   0x3CBBED call    qword ptr [r9]
//   0x3CBBF0 mov     rdx, rax
//   0x3CBBF3 test    rax, rax
//   0x3CBBF6 jz      short loc_3CBBC6
//   0x3CBBF8 mov     rax, [rbp+0]
//   0x3CBBFC mov     rsi, rbx
//   0x3CBBFF mov     rdi, rbp
//   0x3CBC02 call    qword ptr [rax+20h]
//   0x3CBC05 test    al, al
//   0x3CBC07 jz      short loc_3CBBC6
//   0x3CBC09 add     rsp, 8
//   0x3CBC0D mov     eax, 3
//   0x3CBC12 pop     rbx
//   0x3CBC13 pop     rbp
//   0x3CBC14 retn
//   0x3CBC15 mov     eax, 7
//   0x3CBC1A retn
// ============================================================

void sub_3CBB80(/* signature unknown */)
{
    // see disassembly above
}

