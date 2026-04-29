// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x1CB640
// Name:           sub_1CB640
// Function size:  1174 bytes (243 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x1CB640 push    rbp
//   0x1CB641 mov     rbp, rsp
//   0x1CB644 push    r15
//   0x1CB646 push    r14
//   0x1CB648 mov     r14, rdi
//   0x1CB64B push    r13
//   0x1CB64D mov     r13, r9
//   0x1CB650 push    r12
//   0x1CB652 mov     r12d, r8d
//   0x1CB655 push    rbx
//   0x1CB656 sub     rsp, 0A8h
//   0x1CB65D mov     [rbp+var_88], rsi
//   0x1CB664 mov     [rbp+var_80], rdx
//   0x1CB668 mov     [rbp+var_78], rcx
//   0x1CB66C mov     rsi, fs:28h
//   0x1CB675 mov     [rbp+var_38], rsi
//   0x1CB679 mov     rsi, rcx
//   0x1CB67C call    sub_3EBC90
//   0x1CB681 test    al, al
//   0x1CB683 jnz     short loc_1CB6B0
//   0x1CB685 xor     ebx, ebx
//   0x1CB687 mov     rax, [rbp+var_38]
//   0x1CB68B sub     rax, fs:28h
//   0x1CB694 jnz     loc_1CBA8B
//   0x1CB69A lea     rsp, [rbp-28h]
//   0x1CB69E mov     eax, ebx
//   0x1CB6A0 pop     rbx
//   0x1CB6A1 pop     r12
//   0x1CB6A3 pop     r13
//   0x1CB6A5 pop     r14
//   0x1CB6A7 pop     r15
//   0x1CB6A9 pop     rbp
//   0x1CB6AA retn
//   0x1CB6AB align 10h
//   0x1CB6B0 mov     ebx, eax
//   0x1CB6B2 mov     rax, [r14+8]
//   0x1CB6B6 mov     r11, [r14+58h]
//   0x1CB6BA mov     r15, [rax+70h]
//   0x1CB6BE mov     rax, [r14+60h]
//   0x1CB6C2 lea     rax, [rax+rax*4]
//   0x1CB6C6 shl     rax, 4
//   0x1CB6CA add     rax, r11
//   0x1CB6CD mov     [rbp+var_98], rax
//   0x1CB6D4 cmp     rax, r11
//   0x1CB6D7 jz      short loc_1CB687
//   0x1CB6D9 mov     [rbp+var_90], 0
//   0x1CB6E4 mov     eax, [r11+48h]
//   0x1CB6E8 test    al, 2
//   0x1CB6EA jz      loc_1CB7D0
//   0x1CB6F0 test    r12b, r12b
//   0x1CB6F3 jz      loc_1CB9C2
//   0x1CB6F9 cmp     byte ptr [r13+0], 0
//   0x1CB6FE jz      loc_1CBA90
//   0x1CB704 cmp     dword ptr [r11], 3
//   0x1CB708 jnz     loc_1CB685
//   0x1CB70E mov     rax, [r15]
//   0x1CB711 movzx   esi, word ptr [r11+8]
//   0x1CB716 mov     rdi, r15
//   0x1CB719 mov     [rbp+var_B0], r11
//   0x1CB720 call    qword ptr [rax+0A8h]
//   0x1CB726 movd    xmm0, dword ptr [r15+54h]
//   0x1CB72C lea     rdi, [rbp+var_50]
//   0x1CB730 xor     r9d, r9d
//   0x1CB733 mov     edx, eax
//   0x1CB735 mov     rax, [r14]
//   0x1CB738 mov     [rbp+var_A8], rdi
//   0x1CB73F mov     r8, rdi
//   0x1CB742 movd    xmm2, edx
//   0x1CB746 mov     rdi, r14
//   0x1CB749 mov     rsi, 200000001h
//   0x1CB753 punpckldq xmm0, xmm2
//   0x1CB757 mov     rax, [rax+40h]
//   0x1CB75B mov     [rbp+var_50], 1
//   0x1CB763 movq    [rbp+var_50+4], xmm0
//   0x1CB768 mov     edx, [r15+40h]
//   0x1CB76C mov     [rbp+var_60], rsi
//   0x1CB770 lea     rsi, [rbp+var_60]
//   0x1CB774 mov     [rbp+var_58], edx
//   0x1CB777 mov     rcx, rsi
//   0x1CB77A mov     rdx, r13
//   0x1CB77D mov     [rbp+var_A0], rsi
//   0x1CB784 mov     esi, 1
//   0x1CB789 call    rax
//   0x1CB78B mov     rdi, [rbp+var_A0]
//   0x1CB792 call    sub_1166E0
//   0x1CB797 mov     rdi, [rbp+var_A8]
//   0x1CB79E call    sub_1166E0
//   0x1CB7A3 mov     r11, [rbp+var_B0]
//   0x1CB7AA add     r11, 50h ; 'P'
//   0x1CB7AE cmp     [rbp+var_98], r11
//   0x1CB7B5 jz      loc_1CB687
//   0x1CB7BB mov     eax, [r11+48h]
//   0x1CB7BF test    al, 2
//   0x1CB7C1 jnz     loc_1CB6F9
//   0x1CB7C7 nop     word ptr [rax+rax+00000000h]
//   0x1CB7D0 cmp     [rbp+var_90], 0
//   0x1CB7D8 jz      loc_1CB9E0
//   0x1CB7DE cmp     [rbp+var_90], 1
//   0x1CB7E6 jnz     loc_1CB685
//   0x1CB7EC mov     rdi, [rbp+var_78]
//   0x1CB7F0 test    byte ptr [rdi+10h], 2Ah
//   0x1CB7F4 jnz     loc_1CB685
//   0x1CB7FA mov     dword ptr [rbp+var_B0], 1
//   0x1CB804 mov     ecx, [rdi+8]
//   0x1CB807 mov     rdi, [rbp+var_80]
//   0x1CB80B lea     edx, [rcx-16h]
//   0x1CB80E mov     dword ptr [rbp+var_A0], ecx
//   0x1CB814 mov     [rbp+var_C0], rdi
//   0x1CB81B cmp     edx, 2
//   0x1CB81E ja      loc_1CBA28
//   0x1CB824 test    al, 4
//   0x1CB826 jz      loc_1CBA58
//   0x1CB82C cmp     dword ptr [r11], 3
//   0x1CB830 jnz     loc_1CB685
//   0x1CB836 mov     rax, [r15]
//   0x1CB839 movzx   esi, word ptr [r11+8]
//   0x1CB83E mov     [rbp+var_A8], r11
//   0x1CB845 mov     rdi, r15
//   0x1CB848 call    qword ptr [rax+0A8h]
//   0x1CB84E mov     edi, 50h ; 'P'
//   0x1CB853 mov     dword ptr [rbp+var_A0], eax
//   0x1CB859 call    j__qalloc_or_throw
//   0x1CB85E mov     rsi, [r14+40h]
//   0x1CB862 mov     rdx, rax
//   0x1CB865 mov     [rbp+var_B8], rax
//   0x1CB86C mov     rax, 0FFFFFFFF00000000h
//   0x1CB876 mov     [rdx+20h], rax
//   0x1CB87A mov     rdi, rdx
//   0x1CB87D mov     qword ptr [rdx+28h], 0
//   0x1CB885 mov     [rdx+30h], rax
//   0x1CB889 mov     qword ptr [rdx+38h], 0
//   0x1CB891 mov     [rdx+40h], rax
//   0x1CB895 mov     qword ptr [rdx+48h], 0
//   0x1CB89D call    sub_329320
//   0x1CB8A2 mov     r11, [rbp+var_A8]
//   0x1CB8A9 mov     esi, 2
//   0x1CB8AE mov     rdi, [r11+40h]
//   0x1CB8B2 mov     [rbp+var_D0], r11
//   0x1CB8B9 call    _get_tinfo_property
//   0x1CB8BE sub     rsp, 8
//   0x1CB8C2 lea     rsi, [rbp+var_50]
//   0x1CB8C6 mov     rdi, 0FFFFFFFF00000000h
//   0x1CB8D0 mov     [rbp+var_50], rdi
//   0x1CB8D4 and     eax, 0Fh
//   0x1CB8D7 mov     r9, rsi
//   0x1CB8DA lea     rcx, [rbp+var_70]
//   0x1CB8DE mov     [rbp+var_48], 0
//   0x1CB8E6 movd    xmm0, dword ptr [r15+54h]
//   0x1CB8EC cmp     al, 9
//   0x1CB8EE mov     rdi, 200000001h
//   0x1CB8F8 movd    xmm1, dword ptr [rbp+var_A0]
//   0x1CB900 mov     [rbp+var_60], 1
//   0x1CB908 setz    al
//   0x1CB90B movzx   eax, al
//   0x1CB90E mov     [rbp+var_70], rdi
//   0x1CB912 mov     rdi, r14
//   0x1CB915 punpckldq xmm0, xmm1
//   0x1CB919 movq    [rbp+var_60+4], xmm0
//   0x1CB91E mov     edx, [r15+40h]
//   0x1CB922 mov     [rbp+var_68], edx
//   0x1CB925 lea     rdx, [rbp+var_60]
//   0x1CB929 push    rax
//   0x1CB92A mov     r8, rdx
//   0x1CB92D mov     [rbp+var_A8], rsi
//   0x1CB934 mov     rsi, [rbp+var_B8]
//   0x1CB93B mov     [rbp+var_A0], rdx
//   0x1CB942 mov     edx, 2
//   0x1CB947 mov     [rbp+var_C8], rcx
//   0x1CB94E call    sub_3EB400
//   0x1CB953 mov     rdi, [rbp+var_C8]
//   0x1CB95A pop     rax
//   0x1CB95B pop     rdx
//   0x1CB95C call    sub_1166E0
//   0x1CB961 mov     rdi, [rbp+var_A0]
//   0x1CB968 call    sub_1166E0
//   0x1CB96D mov     rdi, [rbp+var_A8]
//   0x1CB974 call    sub_1166E0
//   0x1CB979 mov     rax, [rbp+var_B8]
//   0x1CB980 mov     edx, dword ptr [rbp+var_B0]
//   0x1CB986 mov     rdi, [rbp+var_C0]
//   0x1CB98D mov     [rax+44h], edx
//   0x1CB990 call    sub_1166E0
//   0x1CB995 mov     rax, [rbp+var_C0]
//   0x1CB99C mov     rdi, [rbp+var_B8]
//   0x1CB9A3 mov     edx, dword ptr [rbp+var_B0]
//   0x1CB9A9 mov     r11, [rbp+var_D0]
//   0x1CB9B0 mov     byte ptr [rax], 4
//   0x1CB9B3 mov     [rax+8], rdi
//   0x1CB9B7 mov     [rax+4], edx
//   0x1CB9BA add     [rbp+var_90], 1
//   0x1CB9C2 add     r11, 50h ; 'P'
//   0x1CB9C6 cmp     [rbp+var_98], r11
//   0x1CB9CD jnz     loc_1CB6E4
//   0x1CB9D3 jmp     loc_1CB687
//   0x1CB9D8 align 20h
//   0x1CB9E0 mov     rax, [rbp+var_78]
//   0x1CB9E4 test    byte ptr [rax+10h], 8
//   0x1CB9E8 jnz     loc_1CB685
//   0x1CB9EE movzx   edi, byte ptr [rax+0Ch]
//   0x1CB9F2 mov     [rbp+var_A0], r11
//   0x1CB9F9 call    _get_dtype_size
//   0x1CB9FE mov     r11, [rbp+var_A0]
//   0x1CBA05 mov     rcx, [rbp+var_88]
//   0x1CBA0C mov     dword ptr [rbp+var_B0], eax
//   0x1CBA12 mov     [rbp+var_C0], rcx
//   0x1CBA19 mov     eax, [r11+48h]
//   0x1CBA1D jmp     loc_1CB824
//   0x1CBA22 align 8
//   0x1CBA28 mov     rax, [rbp+var_78]
//   0x1CBA2C mov     [rbp+var_A0], r11
//   0x1CBA33 movzx   edi, byte ptr [rax+0Ch]
//   0x1CBA37 call    _get_dtype_size
//   0x1CBA3C mov     r11, [rbp+var_A0]
//   0x1CBA43 mov     dword ptr [rbp+var_B0], eax
//   0x1CBA49 mov     eax, [r11+48h]
//   0x1CBA4D jmp     loc_1CB824
//   0x1CBA52 align 8
//   0x1CBA58 mov     ecx, dword ptr [rbp+var_B0]
//   0x1CBA5E mov     rsi, [rbp+var_C0]
//   0x1CBA65 mov     rdx, r11
//   0x1CBA68 mov     rdi, r15
//   0x1CBA6B mov     [rbp+var_A0], r11
//   0x1CBA72 call    sub_1CB310
//   0x1CBA77 mov     r11, [rbp+var_A0]
//   0x1CBA7E test    al, al
//   0x1CBA80 jnz     loc_1CB9BA
//   0x1CBA86 jmp     loc_1CB685
//   0x1CBA8B call    ___stack_chk_fail
//   0x1CBA90 mov     rax, cs:under_debugger_ptr
//   0x1CBA97 cmp     byte ptr [rax], 0
//   0x1CBA9A jnz     loc_3F821
//   0x1CBAA0 mov     rax, [rbp+var_38]
//   0x1CBAA4 sub     rax, fs:28h
//   0x1CBAAD jnz     short loc_1CBAB9
//   0x1CBAAF mov     edi, 0CE3Eh
//   0x1CBAB4 call    sub_37B760
//   0x1CBAB9 call    ___stack_chk_fail
//   0x1CBABE mov     rbx, rax
//   0x1CBAC1 jmp     loc_3F823
//   0x1CBAC6 mov     rbx, rax
//   0x1CBAC9 jmp     loc_3F856
//   0x1CBACE mov     rbx, rax
//   0x1CBAD1 jmp     loc_3F897
// ============================================================

void sub_1CB640(/* signature unknown */)
{
    // see disassembly above
}

