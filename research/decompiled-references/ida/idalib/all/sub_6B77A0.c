// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x6B77A0
// Name:           sub_6B77A0
// Function size:  983 bytes (235 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x6B77A0 push    r15
//   0x6B77A2 push    r14
//   0x6B77A4 lea     r14, haystack
//   0x6B77AB push    r13
//   0x6B77AD push    r12
//   0x6B77AF push    rbp; __int64
//   0x6B77B0 mov     rbp, 0FFFFFFFFFFFFFFFFh
//   0x6B77B7 push    rbx; int
//   0x6B77B8 sub     rsp, 88h
//   0x6B77BF mov     rbx, fs:28h
//   0x6B77C8 mov     [rsp+0B8h+var_40], rbx; __int64
//   0x6B77CD mov     rbx, rdi
//   0x6B77D0 lea     r13, [rsp+0B8h+var_70]
//   0x6B77D5 mov     dword ptr [rsp+0B8h+var_70], 0; void *
//   0x6B77DD mov     [rsp+0B8h+var_68], 0; __int64
//   0x6B77E6 mov     qword ptr [rsp+0B8h+var_60], r13; int
//   0x6B77EB mov     qword ptr [rsp+0B8h+var_58], r13; int
//   0x6B77F0 mov     qword ptr [rsp+0B8h+var_50], 0; int
//   0x6B77F9 mov     rax, [rbx+10h]
//   0x6B77FD mov     qword ptr [rsp+0B8h+var_A0], rax; int
//   0x6B7802 lea     rax, [rsp+0B8h+var_78]
//   0x6B7807 mov     qword ptr [rsp+0B8h+var_B0], rax; int
//   0x6B780C nop     dword ptr [rax+00h]
//   0x6B7810 mov     rax, [rbx]
//   0x6B7813 mov     rsi, rbp
//   0x6B7816 lea     r12, [rax+6A8h]
//   0x6B781D mov     rdi, r12
//   0x6B7820 call    sub_505E30
//   0x6B7825 mov     esi, eax
//   0x6B7827 mov     rdi, r12
//   0x6B782A call    sub_505DE0
//   0x6B782F mov     r15, rax
//   0x6B7832 test    rax, rax
//   0x6B7835 jz      loc_6B79E0
//   0x6B783B mov     rbp, [rax]
//   0x6B783E test    byte ptr [rax+11h], 80h
//   0x6B7842 jnz     loc_6B7968
//   0x6B7848 mov     rdi, qword ptr [rsp+0B8h+var_B0]
//   0x6B784D mov     rsi, rbp
//   0x6B7850 call    sub_6B3B40
//   0x6B7855 test    rdx, rdx
//   0x6B7858 jz      short loc_6B789D
//   0x6B785A test    rax, rax
//   0x6B785D setnz   r12b
//   0x6B7861 cmp     rdx, r13
//   0x6B7864 setz    al
//   0x6B7867 or      r12b, al
//   0x6B786A jz      loc_6B7AD0
//   0x6B7870 mov     edi, 28h ; '('; unsigned __int64
//   0x6B7875 mov     qword ptr [rsp+0B8h+var_A8], rdx; int
//   0x6B787A call    __Znwm; operator new(ulong)
//   0x6B787F mov     [rax+20h], rbp
//   0x6B7883 mov     rdx, qword ptr [rsp+0B8h+var_A8]
//   0x6B7888 mov     rsi, rax
//   0x6B788B movzx   edi, r12b
//   0x6B788F mov     rcx, r13
//   0x6B7892 call    __ZSt29_Rb_tree_insert_and_rebalancebPSt18_Rb_tree_node_baseS0_RS_; std::_Rb_tree_insert_and_rebalance(bool,std::_Rb_tree_node_base *,std::_Rb_tree_node_base *,std::_Rb_tree_node_base&)
//   0x6B7897 add     qword ptr [rsp+0B8h+var_50], 1
//   0x6B789D mov     rsi, r15
//   0x6B78A0 mov     rdi, rbx
//   0x6B78A3 call    sub_6B5540
//   0x6B78A8 mov     rdi, [rbx]
//   0x6B78AB pxor    xmm0, xmm0
//   0x6B78AF lea     rsi, [rsp+0B8h+ptr]
//   0x6B78B4 xor     r8d, r8d
//   0x6B78B7 mov     ecx, 200h
//   0x6B78BC mov     rdx, rbp
//   0x6B78BF movups  xmmword ptr [rsp+0B8h+var_90], xmm0; ptr
//   0x6B78C4 mov     [rsp+0B8h+ptr], 0; int
//   0x6B78CD call    sub_4CFC20
//   0x6B78D2 test    rax, rax
//   0x6B78D5 jle     short loc_6B7940
//   0x6B78D7 cmp     [rsp+0B8h+var_90], 0
//   0x6B78DD mov     rdi, [rbx]
//   0x6B78E0 mov     rdx, r14
//   0x6B78E3 jz      short loc_6B78EA
//   0x6B78E5 mov     rdx, [rsp+0B8h+ptr]
//   0x6B78EA xor     ecx, ecx
//   0x6B78EC mov     rsi, 0FFFFFFFFFFFFFFFFh
//   0x6B78F3 call    sub_4D4180
//   0x6B78F8 mov     r8, rax
//   0x6B78FB cmp     rax, 0FFFFFFFFFFFFFFFFh
//   0x6B78FF jz      short loc_6B7980
//   0x6B7901 cmp     rbp, rax
//   0x6B7904 jz      short loc_6B7940
//   0x6B7906 cmp     byte ptr [rbx+28h], 0
//   0x6B790A mov     rax, [rsp+0B8h+var_90]
//   0x6B790F jz      loc_6B79B0
//   0x6B7915 mov     rdi, [rbx]; int
//   0x6B7918 mov     rdx, r14
//   0x6B791B test    rax, rax
//   0x6B791E jz      short loc_6B7925
//   0x6B7920 mov     rdx, [rsp+0B8h+ptr]; src
//   0x6B7925 mov     ecx, 1800h
//   0x6B792A mov     rsi, rbp; int
//   0x6B792D call    sub_4D7EC0
//   0x6B7932 nop     word ptr [rax+rax+00000000h]
//   0x6B793D nop     dword ptr [rax]
//   0x6B7940 mov     rdi, [rsp+0B8h+ptr]; ptr
//   0x6B7945 test    rdi, rdi
//   0x6B7948 jz      loc_6B7810
//   0x6B794E mov     [rsp+0B8h+var_90], 0
//   0x6B7957 call    _qfree
//   0x6B795C jmp     loc_6B7810
//   0x6B7961 align 8
//   0x6B7968 mov     rsi, rax
//   0x6B796B mov     rdi, rbx
//   0x6B796E call    sub_6B5A20
//   0x6B7973 jmp     loc_6B78A8
//   0x6B7978 align 20h
//   0x6B7980 cmp     byte ptr [rbx+28h], 0
//   0x6B7984 jnz     loc_6B7A90
//   0x6B798A cmp     [rsp+0B8h+var_90], 0
//   0x6B7990 mov     rcx, r14
//   0x6B7993 jz      short loc_6B799A
//   0x6B7995 mov     rcx, [rsp+0B8h+ptr]
//   0x6B799A lea     rdx, aNoNameIndexFor; "no name index for '%s'"
//   0x6B79A1 mov     rsi, rbp
//   0x6B79A4 mov     rdi, rbx
//   0x6B79A7 xor     eax, eax
//   0x6B79A9 call    sub_6B4500
//   0x6B79AE jmp     short loc_6B7940
//   0x6B79B0 mov     rcx, r14
//   0x6B79B3 test    rax, rax
//   0x6B79B6 jz      short loc_6B79BD
//   0x6B79B8 mov     rcx, [rsp+0B8h+ptr]
//   0x6B79BD lea     rdx, aDuplicateNameS; "duplicate name '%s' at %a"
//   0x6B79C4 mov     rsi, rbp
//   0x6B79C7 mov     rdi, rbx
//   0x6B79CA xor     eax, eax
//   0x6B79CC call    sub_6B4500
//   0x6B79D1 jmp     loc_6B7940
//   0x6B79D6 align 20h
//   0x6B79E0 mov     rdi, [rbx]
//   0x6B79E3 call    sub_5CAD90
//   0x6B79E8 mov     rbp, rax
//   0x6B79EB cmp     rax, qword ptr [rsp+0B8h+var_50]
//   0x6B79F0 jz      loc_6B7AE0
//   0x6B79F6 cmp     byte ptr [rbx+28h], 0
//   0x6B79FA jnz     loc_6B7AC0
//   0x6B7A00 lea     rdx, aCorrputedFinfo; "corrputed 'finfos' array (get_func_qty)"
//   0x6B7A07 mov     rsi, 0FFFFFFFFFFFFFFFFh
//   0x6B7A0E mov     rdi, rbx
//   0x6B7A11 xor     eax, eax
//   0x6B7A13 call    sub_6B4500
//   0x6B7A18 mov     rdi, [rbx]
//   0x6B7A1B call    sub_5CAD90
//   0x6B7A20 movzx   ebp, byte ptr [rbx+28h]
//   0x6B7A24 test    bpl, bpl
//   0x6B7A27 jnz     short loc_6B7A36
//   0x6B7A29 mov     rax, qword ptr [rsp+0B8h+var_A0]
//   0x6B7A2E cmp     [rbx+10h], rax
//   0x6B7A32 setz    bpl
//   0x6B7A36 mov     rbx, [rsp+0B8h+var_68]
//   0x6B7A3B test    rbx, rbx
//   0x6B7A3E jz      short loc_6B7A5F
//   0x6B7A40 mov     rdi, [rbx+18h]
//   0x6B7A44 call    sub_6B3D80
//   0x6B7A49 mov     rdi, rbx; void *
//   0x6B7A4C mov     rbx, [rbx+10h]
//   0x6B7A50 mov     esi, 28h ; '('; unsigned __int64
//   0x6B7A55 call    __ZdlPvm; operator delete(void *,ulong)
//   0x6B7A5A test    rbx, rbx
//   0x6B7A5D jnz     short loc_6B7A40
//   0x6B7A5F mov     rax, [rsp+0B8h+var_40]
//   0x6B7A64 sub     rax, fs:28h
//   0x6B7A6D jnz     loc_6B7B62
//   0x6B7A73 add     rsp, 88h
//   0x6B7A7A mov     eax, ebp
//   0x6B7A7C pop     rbx
//   0x6B7A7D pop     rbp
//   0x6B7A7E pop     r12
//   0x6B7A80 pop     r13
//   0x6B7A82 pop     r14
//   0x6B7A84 pop     r15
//   0x6B7A86 retn
//   0x6B7A87 align 10h
//   0x6B7A90 mov     rdi, [rbx]; int
//   0x6B7A93 xor     ecx, ecx
//   0x6B7A95 lea     rdx, byte_22F0C30; src
//   0x6B7A9C mov     rsi, rbp; int
//   0x6B7A9F call    sub_4D7EC0
//   0x6B7AA4 cmp     [rsp+0B8h+var_90], 0
//   0x6B7AAA mov     rdi, [rbx]
//   0x6B7AAD lea     rdx, haystack
//   0x6B7AB4 jz      loc_6B7925
//   0x6B7ABA jmp     loc_6B7920
//   0x6B7ABF align 20h
//   0x6B7AC0 mov     rax, [rbx]
//   0x6B7AC3 mov     rdi, [rax]
//   0x6B7AC6 call    sub_5CA0B0
//   0x6B7ACB jmp     loc_6B7A18
//   0x6B7AD0 cmp     rbp, [rdx+20h]
//   0x6B7AD4 setb    r12b
//   0x6B7AD8 jmp     loc_6B7870
//   0x6B7ADD align 20h
//   0x6B7AE0 test    rax, rax
//   0x6B7AE3 jz      loc_6B7A18
//   0x6B7AE9 xor     r12d, r12d
//   0x6B7AEC nop     dword ptr [rax+00h]
//   0x6B7AF0 mov     rdi, r12
//   0x6B7AF3 call    _getn_func
//   0x6B7AF8 test    rax, rax
//   0x6B7AFB jz      loc_6B79F6
//   0x6B7B01 mov     rsi, [rax]
//   0x6B7B04 mov     rax, [rsp+0B8h+var_68]
//   0x6B7B09 test    rax, rax
//   0x6B7B0C jz      loc_6B79F6
//   0x6B7B12 mov     rdi, r13
//   0x6B7B15 jmp     short loc_6B7B2B
//   0x6B7B17 align 20h
//   0x6B7B20 mov     rdi, rax
//   0x6B7B23 mov     rax, rcx
//   0x6B7B26 test    rax, rax
//   0x6B7B29 jz      short loc_6B7B41
//   0x6B7B2B mov     rcx, [rax+10h]
//   0x6B7B2F mov     rdx, [rax+18h]
//   0x6B7B33 cmp     [rax+20h], rsi
//   0x6B7B37 jnb     short loc_6B7B20
//   0x6B7B39 mov     rax, rdx
//   0x6B7B3C test    rax, rax
//   0x6B7B3F jnz     short loc_6B7B2B
//   0x6B7B41 cmp     rdi, r13
//   0x6B7B44 jz      loc_6B79F6
//   0x6B7B4A cmp     rsi, [rdi+20h]
//   0x6B7B4E jb      loc_6B79F6
//   0x6B7B54 add     r12, 1
//   0x6B7B58 cmp     rbp, r12
//   0x6B7B5B jnz     short loc_6B7AF0
//   0x6B7B5D jmp     loc_6B7A18
//   0x6B7B62 call    ___stack_chk_fail
//   0x6B7B67 mov     rbx, rax
//   0x6B7B6A jmp     loc_2D5D10
//   0x6B7B6F mov     rbx, rax
//   0x6B7B72 jmp     loc_2D5CFA
// ============================================================

void sub_6B77A0(/* signature unknown */)
{
    // see disassembly above
}

