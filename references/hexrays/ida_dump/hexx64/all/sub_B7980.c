// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0xB7980
// Name:           sub_B7980
// Function size:  324 bytes (86 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0xB7980 push    rbp
//   0xB7981 push    rbx
//   0xB7982 mov     rbx, rdi
//   0xB7985 sub     rsp, 8
//   0xB7989 mov     rdx, [rdi+20h]
//   0xB798D mov     rdi, [rdi+28h]
//   0xB7991 mov     eax, [rdi+44h]
//   0xB7994 cmp     [rdx+44h], eax
//   0xB7997 jle     short loc_B79A8
//   0xB7999 add     rsp, 8
//   0xB799D xor     eax, eax
//   0xB799F pop     rbx
//   0xB79A0 pop     rbp
//   0xB79A1 retn
//   0xB79A2 align 8
//   0xB79A8 mov     rax, [rbx+8]
//   0xB79AC mov     ecx, 9
//   0xB79B1 mov     rbp, [rax+5E0h]
//   0xB79B8 mov     rsi, rbp
//   0xB79BB call    sub_125B90
//   0xB79C0 mov     rdi, [rbx+28h]
//   0xB79C4 test    al, al
//   0xB79C6 jz      short loc_B7A20
//   0xB79C8 mov     rax, [rbx+20h]
//   0xB79CC mov     ecx, [rdi+44h]
//   0xB79CF mov     edx, 0Ah
//   0xB79D4 cmp     [rax+44h], ecx
//   0xB79D7 jz      loc_B7AA0
//   0xB79DD mov     [rax], edx
//   0xB79DF mov     rax, [rbx+28h]
//   0xB79E3 lea     rsi, [rax+40h]
//   0xB79E7 mov     rax, [rbx+20h]
//   0xB79EB lea     rdi, [rax+20h]
//   0xB79EF call    sub_125180
//   0xB79F4 mov     rax, [rbx+20h]
//   0xB79F8 lea     rdi, [rax+30h]
//   0xB79FC call    sub_11CDA0
//   0xB7A01 mov     rdi, [rbx+20h]
//   0xB7A05 cmp     dword ptr [rdi], 0Ah
//   0xB7A08 jz      loc_B7AB0
//   0xB7A0E add     dword ptr [rbx+30h], 1
//   0xB7A12 add     rsp, 8
//   0xB7A16 xor     eax, eax
//   0xB7A18 pop     rbx
//   0xB7A19 pop     rbp
//   0xB7A1A retn
//   0xB7A1B align 20h
//   0xB7A20 cmp     dword ptr [rdi], 0Dh
//   0xB7A23 jnz     loc_B7999
//   0xB7A29 mov     rdx, [rbx+20h]
//   0xB7A2D mov     eax, [rdx]
//   0xB7A2F sub     eax, 2Bh ; '+'
//   0xB7A32 cmp     eax, 1
//   0xB7A35 ja      loc_B7999
//   0xB7A3B mov     ecx, 2
//   0xB7A40 mov     rsi, rbp
//   0xB7A43 call    sub_125B90
//   0xB7A48 test    al, al
//   0xB7A4A jz      loc_B7999
//   0xB7A50 mov     rax, [rbx+28h]
//   0xB7A54 lea     rsi, [rax+40h]
//   0xB7A58 mov     rax, [rbx+20h]
//   0xB7A5C lea     rdi, [rax+20h]
//   0xB7A60 call    sub_125180
//   0xB7A65 mov     rax, [rbx+20h]
//   0xB7A69 lea     rdi, [rax+30h]
//   0xB7A6D call    sub_11CDA0
//   0xB7A72 mov     rax, [rbx+20h]
//   0xB7A76 xor     r9d, r9d
//   0xB7A79 xor     edx, edx
//   0xB7A7B mov     r8, 0FFFFFFFFFFFFFFFFh
//   0xB7A82 mov     rsi, rbp
//   0xB7A85 mov     ecx, [rax+24h]
//   0xB7A88 lea     rdi, [rax+30h]
//   0xB7A8C call    sub_120A10
//   0xB7A91 jmp     loc_B7A0E
//   0xB7A96 align 20h
//   0xB7AA0 mov     edx, 4
//   0xB7AA5 jmp     loc_B79DD
//   0xB7AAA align 10h
//   0xB7AB0 xor     r8d, r8d
//   0xB7AB3 xor     ecx, ecx
//   0xB7AB5 xor     edx, edx
//   0xB7AB7 mov     rsi, rbp
//   0xB7ABA call    sub_12D880
//   0xB7ABF jmp     loc_B7A0E
// ============================================================

void sub_B7980(/* signature unknown */)
{
    // see disassembly above
}

