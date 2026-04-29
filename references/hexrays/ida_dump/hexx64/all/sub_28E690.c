// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x28E690
// Name:           sub_28E690
// Function size:  959 bytes (280 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x28E690 push    r12
//   0x28E692 push    rbp
//   0x28E693 mov     rbp, rsi
//   0x28E696 push    rbx
//   0x28E697 cmp     dword ptr [rsi+0Ch], 0FFFFFFFFh
//   0x28E69B mov     rbx, rdi
//   0x28E69E jnz     short loc_28E6E0
//   0x28E6A0 lea     r12, jpt_28E6B9
//   0x28E6A7 mov     eax, [rbp+8]
//   0x28E6AA sub     eax, 46h ; 'F'; switch 11 cases
//   0x28E6AD cmp     eax, 0Ah
//   0x28E6B0 ja      short def_28E6B9; jumptable 000000000028E6B9 default case, cases 77-79
//   0x28E6B2 movsxd  rax, ds:(jpt_28E6B9 - 42D118h)[r12+rax*4]
//   0x28E6B6 add     rax, r12
//   0x28E6B9 jmp     rax; switch jump
//   0x28E6BB align 20h
//   0x28E6C0 mov     rsi, rbp; jumptable 000000000028E6B9 case 80
//   0x28E6C3 mov     rdi, rbx
//   0x28E6C6 call    sub_28BA30
//   0x28E6CB test    al, al
//   0x28E6CD jz      short def_28E6B9; jumptable 000000000028E6B9 default case, cases 77-79
//   0x28E6CF add     dword ptr [rbx+54h], 1
//   0x28E6D3 pop     rbx; jumptable 000000000028E6B9 default case, cases 77-79
//   0x28E6D4 xor     eax, eax
//   0x28E6D6 pop     rbp
//   0x28E6D7 pop     r12
//   0x28E6D9 retn
//   0x28E6DA align 20h
//   0x28E6E0 call    sub_28B690
//   0x28E6E5 test    al, al
//   0x28E6E7 jz      short loc_28E6A0
//   0x28E6E9 add     dword ptr [rbx+54h], 1
//   0x28E6ED jmp     short loc_28E6A0
//   0x28E6EF align 10h
//   0x28E6F0 mov     rsi, rbp; jumptable 000000000028E6B9 case 70
//   0x28E6F3 mov     rdi, rbx
//   0x28E6F6 call    sub_28BA30
//   0x28E6FB test    al, al
//   0x28E6FD jz      short loc_28E703
//   0x28E6FF add     dword ptr [rbx+54h], 1
//   0x28E703 mov     rsi, rbp
//   0x28E706 mov     rdi, rbx
//   0x28E709 call    sub_28B4E0
//   0x28E70E pop     rbx
//   0x28E70F pop     rbp
//   0x28E710 movzx   eax, al
//   0x28E713 pop     r12
//   0x28E715 retn
//   0x28E716 align 20h
//   0x28E720 mov     rsi, rbp; jumptable 000000000028E6B9 case 71
//   0x28E723 mov     rdi, rbx
//   0x28E726 call    sub_2892A0
//   0x28E72B add     [rbx+50h], eax
//   0x28E72E jmp     short def_28E6B9; jumptable 000000000028E6B9 default case, cases 77-79
//   0x28E730 mov     rsi, rbp; jumptable 000000000028E6B9 case 72
//   0x28E733 mov     rdi, rbx
//   0x28E736 call    sub_2899E0
//   0x28E73B test    al, al
//   0x28E73D jnz     short loc_28E760
//   0x28E73F mov     rsi, rbp
//   0x28E742 mov     rdi, rbx
//   0x28E745 call    sub_28AEA0
//   0x28E74A test    al, al
//   0x28E74C jz      loc_28E9D8
//   0x28E752 nop     word ptr [rax+rax+00000000h]
//   0x28E75D nop     dword ptr [rax]
//   0x28E760 add     dword ptr [rbx+50h], 1
//   0x28E764 jmp     loc_28E6A7
//   0x28E769 align 10h
//   0x28E770 mov     rsi, rbp; jumptable 000000000028E6B9 case 73
//   0x28E773 mov     rdi, rbx
//   0x28E776 call    sub_288C80
//   0x28E77B test    al, al
//   0x28E77D jz      short loc_28E783
//   0x28E77F add     dword ptr [rbx+50h], 1
//   0x28E783 mov     rsi, rbp
//   0x28E786 mov     rdi, rbx
//   0x28E789 call    sub_28E260
//   0x28E78E test    al, al
//   0x28E790 jz      short loc_28E796
//   0x28E792 add     dword ptr [rbx+50h], 1
//   0x28E796 mov     rsi, rbp
//   0x28E799 mov     rdi, rbx
//   0x28E79C call    sub_288CF0
//   0x28E7A1 test    al, al
//   0x28E7A3 jz      short loc_28E7A9
//   0x28E7A5 add     dword ptr [rbx+50h], 1
//   0x28E7A9 mov     rsi, rbp
//   0x28E7AC mov     rdi, rbx
//   0x28E7AF call    sub_286860
//   0x28E7B4 test    al, al
//   0x28E7B6 jz      short loc_28E7BC
//   0x28E7B8 add     dword ptr [rbx+50h], 1
//   0x28E7BC mov     rsi, rbp
//   0x28E7BF mov     rdi, rbx
//   0x28E7C2 call    sub_298460
//   0x28E7C7 test    al, al
//   0x28E7C9 jz      loc_28E938
//   0x28E7CF add     dword ptr [rbx+54h], 1
//   0x28E7D3 jmp     loc_28E6A7
//   0x28E7D8 align 20h
//   0x28E7E0 mov     rsi, rbp; jumptable 000000000028E6B9 case 75
//   0x28E7E3 mov     rdi, rbx
//   0x28E7E6 call    sub_2979B0
//   0x28E7EB test    al, al
//   0x28E7ED jz      short loc_28E7F3
//   0x28E7EF add     dword ptr [rbx+50h], 1
//   0x28E7F3 mov     rsi, rbp
//   0x28E7F6 mov     rdi, rbx
//   0x28E7F9 call    sub_297750
//   0x28E7FE test    al, al
//   0x28E800 jz      short loc_28E806
//   0x28E802 add     dword ptr [rbx+50h], 1
//   0x28E806 mov     rsi, rbp
//   0x28E809 mov     rdi, rbx
//   0x28E80C call    sub_297360
//   0x28E811 test    al, al
//   0x28E813 jz      short loc_28E819
//   0x28E815 add     dword ptr [rbx+50h], 1
//   0x28E819 mov     rsi, rbp
//   0x28E81C mov     rdi, rbx
//   0x28E81F call    sub_2975B0
//   0x28E824 test    al, al
//   0x28E826 jz      short loc_28E82C
//   0x28E828 add     dword ptr [rbx+54h], 1
//   0x28E82C mov     rsi, rbp
//   0x28E82F mov     rdi, rbx
//   0x28E832 call    sub_297BD0
//   0x28E837 test    al, al
//   0x28E839 jz      short loc_28E83F
//   0x28E83B add     dword ptr [rbx+50h], 1
//   0x28E83F mov     rsi, rbp
//   0x28E842 mov     rdi, rbx
//   0x28E845 call    sub_296E50
//   0x28E84A test    al, al
//   0x28E84C jz      def_28E6B9; jumptable 000000000028E6B9 default case, cases 77-79
//   0x28E852 jmp     loc_28E6CF
//   0x28E857 align 20h
//   0x28E860 mov     rsi, rbp; jumptable 000000000028E6B9 case 74
//   0x28E863 mov     rdi, rbx
//   0x28E866 call    sub_2979B0
//   0x28E86B test    al, al
//   0x28E86D jz      short loc_28E873
//   0x28E86F add     dword ptr [rbx+50h], 1
//   0x28E873 mov     rsi, rbp
//   0x28E876 mov     rdi, rbx
//   0x28E879 call    sub_297750
//   0x28E87E test    al, al
//   0x28E880 jz      short loc_28E886
//   0x28E882 add     dword ptr [rbx+50h], 1
//   0x28E886 mov     rsi, rbp
//   0x28E889 mov     rdi, rbx
//   0x28E88C call    sub_297BD0
//   0x28E891 test    al, al
//   0x28E893 jz      def_28E6B9; jumptable 000000000028E6B9 default case, cases 77-79
//   0x28E899 add     dword ptr [rbx+50h], 1
//   0x28E89D jmp     def_28E6B9; jumptable 000000000028E6B9 default case, cases 77-79
//   0x28E8A2 align 8
//   0x28E8A8 mov     rsi, rbp; jumptable 000000000028E6B9 case 76
//   0x28E8AB mov     rdi, rbx
//   0x28E8AE call    sub_297750
//   0x28E8B3 test    al, al
//   0x28E8B5 jz      short loc_28E8BB
//   0x28E8B7 add     dword ptr [rbx+50h], 1
//   0x28E8BB mov     rsi, rbp
//   0x28E8BE mov     rdi, rbx
//   0x28E8C1 call    sub_297F70
//   0x28E8C6 test    al, al
//   0x28E8C8 jz      short loc_28E8CE
//   0x28E8CA add     dword ptr [rbx+50h], 1
//   0x28E8CE mov     rsi, rbp
//   0x28E8D1 mov     rdi, rbx
//   0x28E8D4 call    sub_298120
//   0x28E8D9 test    al, al
//   0x28E8DB jz      short loc_28E8E1
//   0x28E8DD add     dword ptr [rbx+50h], 1
//   0x28E8E1 mov     rsi, rbp
//   0x28E8E4 mov     rdi, rbx
//   0x28E8E7 call    sub_298170
//   0x28E8EC test    al, al
//   0x28E8EE jz      short loc_28E8F4
//   0x28E8F0 add     dword ptr [rbx+50h], 1
//   0x28E8F4 mov     rsi, rbp
//   0x28E8F7 mov     rdi, rbx
//   0x28E8FA call    sub_2981D0
//   0x28E8FF test    al, al
//   0x28E901 jz      short loc_28E907
//   0x28E903 add     dword ptr [rbx+50h], 1
//   0x28E907 mov     rsi, rbp
//   0x28E90A mov     rdi, rbx
//   0x28E90D call    sub_298350
//   0x28E912 test    al, al
//   0x28E914 jz      short loc_28E91A
//   0x28E916 add     dword ptr [rbx+50h], 1
//   0x28E91A mov     rsi, rbp
//   0x28E91D mov     rdi, rbx
//   0x28E920 call    sub_298940
//   0x28E925 test    al, al
//   0x28E927 jz      def_28E6B9; jumptable 000000000028E6B9 default case, cases 77-79
//   0x28E92D jmp     loc_28E6CF
//   0x28E932 align 8
//   0x28E938 mov     rsi, rbp
//   0x28E93B mov     rdi, rbx
//   0x28E93E call    sub_286CD0
//   0x28E943 test    al, al
//   0x28E945 jz      short loc_28E94B
//   0x28E947 add     dword ptr [rbx+50h], 1
//   0x28E94B mov     rsi, rbp
//   0x28E94E mov     rdi, rbx
//   0x28E951 call    sub_2874A0
//   0x28E956 test    al, al
//   0x28E958 jnz     loc_28E760
//   0x28E95E mov     rsi, rbp
//   0x28E961 mov     rdi, rbx
//   0x28E964 call    sub_287A90
//   0x28E969 test    al, al
//   0x28E96B jnz     loc_28E760
//   0x28E971 mov     rsi, rbp
//   0x28E974 mov     rdi, rbx
//   0x28E977 call    sub_289FC0
//   0x28E97C test    al, al
//   0x28E97E jnz     loc_28E760
//   0x28E984 mov     rsi, rbp
//   0x28E987 mov     rdi, rbx
//   0x28E98A call    sub_2869D0
//   0x28E98F test    al, al
//   0x28E991 jz      short loc_28E997
//   0x28E993 add     dword ptr [rbx+50h], 1
//   0x28E997 mov     rsi, rbp
//   0x28E99A mov     rdi, rbx
//   0x28E99D call    sub_289020
//   0x28E9A2 test    al, al
//   0x28E9A4 jz      short loc_28E9AA
//   0x28E9A6 add     dword ptr [rbx+50h], 1
//   0x28E9AA mov     rsi, rbp
//   0x28E9AD mov     rdi, rbx
//   0x28E9B0 call    sub_286F30
//   0x28E9B5 test    al, al
//   0x28E9B7 jz      short loc_28E9BD
//   0x28E9B9 add     dword ptr [rbx+50h], 1
//   0x28E9BD mov     rsi, rbp
//   0x28E9C0 mov     rdi, rbx
//   0x28E9C3 call    sub_289100
//   0x28E9C8 test    al, al
//   0x28E9CA jz      def_28E6B9; jumptable 000000000028E6B9 default case, cases 77-79
//   0x28E9D0 jmp     loc_28E899
//   0x28E9D5 align 8
//   0x28E9D8 mov     rsi, rbp
//   0x28E9DB mov     rdi, rbx
//   0x28E9DE call    sub_28A500
//   0x28E9E3 test    al, al
//   0x28E9E5 jnz     loc_28E760
//   0x28E9EB mov     rsi, rbp
//   0x28E9EE mov     rdi, rbx
//   0x28E9F1 call    sub_289B20
//   0x28E9F6 test    al, al
//   0x28E9F8 jnz     loc_28E760
//   0x28E9FE mov     rsi, rbp
//   0x28EA01 mov     rdi, rbx
//   0x28EA04 call    sub_28A070
//   0x28EA09 test    al, al
//   0x28EA0B jz      short loc_28EA11
//   0x28EA0D add     dword ptr [rbx+50h], 1
//   0x28EA11 mov     rsi, rbp
//   0x28EA14 mov     rdi, rbx
//   0x28EA17 call    sub_28DED0
//   0x28EA1C test    al, al
//   0x28EA1E jz      short loc_28EA24
//   0x28EA20 add     dword ptr [rbx+50h], 1
//   0x28EA24 mov     rsi, rbp
//   0x28EA27 mov     rdi, rbx
//   0x28EA2A call    sub_28BC80
//   0x28EA2F test    al, al
//   0x28EA31 jnz     loc_28E760
//   0x28EA37 mov     rsi, rbp
//   0x28EA3A mov     rdi, rbx
//   0x28EA3D call    sub_28C4D0
//   0x28EA42 test    al, al
//   0x28EA44 jnz     loc_28E760
//   0x28EA4A jmp     def_28E6B9; jumptable 000000000028E6B9 default case, cases 77-79
// ============================================================

void sub_28E690(/* signature unknown */)
{
    // see disassembly above
}

