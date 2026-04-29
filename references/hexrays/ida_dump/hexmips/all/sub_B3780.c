// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0xB3780
// Name:           sub_B3780
// Function size:  324 bytes (86 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0xB3780 push    rbp
//   0xB3781 push    rbx
//   0xB3782 mov     rbx, rdi
//   0xB3785 sub     rsp, 8
//   0xB3789 mov     rdx, [rdi+20h]
//   0xB378D mov     rdi, [rdi+28h]
//   0xB3791 mov     eax, [rdi+44h]
//   0xB3794 cmp     [rdx+44h], eax
//   0xB3797 jle     short loc_B37A8
//   0xB3799 add     rsp, 8
//   0xB379D xor     eax, eax
//   0xB379F pop     rbx
//   0xB37A0 pop     rbp
//   0xB37A1 retn
//   0xB37A2 align 8
//   0xB37A8 mov     rax, [rbx+8]
//   0xB37AC mov     ecx, 9
//   0xB37B1 mov     rbp, [rax+5E0h]
//   0xB37B8 mov     rsi, rbp
//   0xB37BB call    sub_121990
//   0xB37C0 mov     rdi, [rbx+28h]
//   0xB37C4 test    al, al
//   0xB37C6 jz      short loc_B3820
//   0xB37C8 mov     rax, [rbx+20h]
//   0xB37CC mov     ecx, [rdi+44h]
//   0xB37CF mov     edx, 0Ah
//   0xB37D4 cmp     [rax+44h], ecx
//   0xB37D7 jz      loc_B38A0
//   0xB37DD mov     [rax], edx
//   0xB37DF mov     rax, [rbx+28h]
//   0xB37E3 lea     rsi, [rax+40h]
//   0xB37E7 mov     rax, [rbx+20h]
//   0xB37EB lea     rdi, [rax+20h]
//   0xB37EF call    sub_120F80
//   0xB37F4 mov     rax, [rbx+20h]
//   0xB37F8 lea     rdi, [rax+30h]
//   0xB37FC call    sub_118BA0
//   0xB3801 mov     rdi, [rbx+20h]
//   0xB3805 cmp     dword ptr [rdi], 0Ah
//   0xB3808 jz      loc_B38B0
//   0xB380E add     dword ptr [rbx+30h], 1
//   0xB3812 add     rsp, 8
//   0xB3816 xor     eax, eax
//   0xB3818 pop     rbx
//   0xB3819 pop     rbp
//   0xB381A retn
//   0xB381B align 20h
//   0xB3820 cmp     dword ptr [rdi], 0Dh
//   0xB3823 jnz     loc_B3799
//   0xB3829 mov     rdx, [rbx+20h]
//   0xB382D mov     eax, [rdx]
//   0xB382F sub     eax, 2Bh ; '+'
//   0xB3832 cmp     eax, 1
//   0xB3835 ja      loc_B3799
//   0xB383B mov     ecx, 2
//   0xB3840 mov     rsi, rbp
//   0xB3843 call    sub_121990
//   0xB3848 test    al, al
//   0xB384A jz      loc_B3799
//   0xB3850 mov     rax, [rbx+28h]
//   0xB3854 lea     rsi, [rax+40h]
//   0xB3858 mov     rax, [rbx+20h]
//   0xB385C lea     rdi, [rax+20h]
//   0xB3860 call    sub_120F80
//   0xB3865 mov     rax, [rbx+20h]
//   0xB3869 lea     rdi, [rax+30h]
//   0xB386D call    sub_118BA0
//   0xB3872 mov     rax, [rbx+20h]
//   0xB3876 xor     r9d, r9d
//   0xB3879 xor     edx, edx
//   0xB387B mov     r8, 0FFFFFFFFFFFFFFFFh
//   0xB3882 mov     rsi, rbp
//   0xB3885 mov     ecx, [rax+24h]
//   0xB3888 lea     rdi, [rax+30h]
//   0xB388C call    sub_11C810
//   0xB3891 jmp     loc_B380E
//   0xB3896 align 20h
//   0xB38A0 mov     edx, 4
//   0xB38A5 jmp     loc_B37DD
//   0xB38AA align 10h
//   0xB38B0 xor     r8d, r8d
//   0xB38B3 xor     ecx, ecx
//   0xB38B5 xor     edx, edx
//   0xB38B7 mov     rsi, rbp
//   0xB38BA call    sub_129680
//   0xB38BF jmp     loc_B380E
// ============================================================

void sub_B3780(/* signature unknown */)
{
    // see disassembly above
}

