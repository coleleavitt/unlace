// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0xB2DC0
// Name:           sub_B2DC0
// Function size:  324 bytes (86 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0xB2DC0 push    rbp
//   0xB2DC1 push    rbx
//   0xB2DC2 mov     rbx, rdi
//   0xB2DC5 sub     rsp, 8
//   0xB2DC9 mov     rdx, [rdi+20h]
//   0xB2DCD mov     rdi, [rdi+28h]
//   0xB2DD1 mov     eax, [rdi+44h]
//   0xB2DD4 cmp     [rdx+44h], eax
//   0xB2DD7 jle     short loc_B2DE8
//   0xB2DD9 add     rsp, 8
//   0xB2DDD xor     eax, eax
//   0xB2DDF pop     rbx
//   0xB2DE0 pop     rbp
//   0xB2DE1 retn
//   0xB2DE2 align 8
//   0xB2DE8 mov     rax, [rbx+8]
//   0xB2DEC mov     ecx, 9
//   0xB2DF1 mov     rbp, [rax+5E0h]
//   0xB2DF8 mov     rsi, rbp
//   0xB2DFB call    sub_120FD0
//   0xB2E00 mov     rdi, [rbx+28h]
//   0xB2E04 test    al, al
//   0xB2E06 jz      short loc_B2E60
//   0xB2E08 mov     rax, [rbx+20h]
//   0xB2E0C mov     ecx, [rdi+44h]
//   0xB2E0F mov     edx, 0Ah
//   0xB2E14 cmp     [rax+44h], ecx
//   0xB2E17 jz      loc_B2EE0
//   0xB2E1D mov     [rax], edx
//   0xB2E1F mov     rax, [rbx+28h]
//   0xB2E23 lea     rsi, [rax+40h]
//   0xB2E27 mov     rax, [rbx+20h]
//   0xB2E2B lea     rdi, [rax+20h]
//   0xB2E2F call    sub_1205C0
//   0xB2E34 mov     rax, [rbx+20h]
//   0xB2E38 lea     rdi, [rax+30h]
//   0xB2E3C call    sub_1181E0
//   0xB2E41 mov     rdi, [rbx+20h]
//   0xB2E45 cmp     dword ptr [rdi], 0Ah
//   0xB2E48 jz      loc_B2EF0
//   0xB2E4E add     dword ptr [rbx+30h], 1
//   0xB2E52 add     rsp, 8
//   0xB2E56 xor     eax, eax
//   0xB2E58 pop     rbx
//   0xB2E59 pop     rbp
//   0xB2E5A retn
//   0xB2E5B align 20h
//   0xB2E60 cmp     dword ptr [rdi], 0Dh
//   0xB2E63 jnz     loc_B2DD9
//   0xB2E69 mov     rdx, [rbx+20h]
//   0xB2E6D mov     eax, [rdx]
//   0xB2E6F sub     eax, 2Bh ; '+'
//   0xB2E72 cmp     eax, 1
//   0xB2E75 ja      loc_B2DD9
//   0xB2E7B mov     ecx, 2
//   0xB2E80 mov     rsi, rbp
//   0xB2E83 call    sub_120FD0
//   0xB2E88 test    al, al
//   0xB2E8A jz      loc_B2DD9
//   0xB2E90 mov     rax, [rbx+28h]
//   0xB2E94 lea     rsi, [rax+40h]
//   0xB2E98 mov     rax, [rbx+20h]
//   0xB2E9C lea     rdi, [rax+20h]
//   0xB2EA0 call    sub_1205C0
//   0xB2EA5 mov     rax, [rbx+20h]
//   0xB2EA9 lea     rdi, [rax+30h]
//   0xB2EAD call    sub_1181E0
//   0xB2EB2 mov     rax, [rbx+20h]
//   0xB2EB6 xor     r9d, r9d
//   0xB2EB9 xor     edx, edx
//   0xB2EBB mov     r8, 0FFFFFFFFFFFFFFFFh
//   0xB2EC2 mov     rsi, rbp
//   0xB2EC5 mov     ecx, [rax+24h]
//   0xB2EC8 lea     rdi, [rax+30h]
//   0xB2ECC call    sub_11BE50
//   0xB2ED1 jmp     loc_B2E4E
//   0xB2ED6 align 20h
//   0xB2EE0 mov     edx, 4
//   0xB2EE5 jmp     loc_B2E1D
//   0xB2EEA align 10h
//   0xB2EF0 xor     r8d, r8d
//   0xB2EF3 xor     ecx, ecx
//   0xB2EF5 xor     edx, edx
//   0xB2EF7 mov     rsi, rbp
//   0xB2EFA call    sub_128CC0
//   0xB2EFF jmp     loc_B2E4E
// ============================================================

void sub_B2DC0(/* signature unknown */)
{
    // see disassembly above
}

