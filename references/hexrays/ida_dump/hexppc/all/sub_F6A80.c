// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0xF6A80
// Name:           sub_F6A80
// Function size:  1352 bytes (314 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0xF6A80 push    r15
//   0xF6A82 push    r14
//   0xF6A84 push    r13
//   0xF6A86 push    r12
//   0xF6A88 mov     r12, rdi
//   0xF6A8B push    rbp
//   0xF6A8C push    rbx
//   0xF6A8D sub     rsp, 88h
//   0xF6A94 mov     rbp, fs:28h
//   0xF6A9D mov     [rsp+0B8h+var_40], rbp
//   0xF6AA2 mov     ebp, esi
//   0xF6AA4 and     esi, 7
//   0xF6AA7 jnz     loc_F6D90
//   0xF6AAD mov     rdi, r12
//   0xF6AB0 mov     ebx, ebp
//   0xF6AB2 call    sub_1E8120
//   0xF6AB7 mov     rdi, r12
//   0xF6ABA and     ebx, 1
//   0xF6ABD call    sub_18C8C0
//   0xF6AC2 mov     eax, ebp
//   0xF6AC4 mov     r8d, [r12+40h]
//   0xF6AC9 and     eax, 8
//   0xF6ACC mov     [rsp+0B8h+var_AC], eax
//   0xF6AD0 test    r8d, r8d
//   0xF6AD3 jle     loc_F6F00
//   0xF6AD9 mov     [rsp+0B8h+var_B0], 0
//   0xF6AE1 xor     r14d, r14d
//   0xF6AE4 xor     r13d, r13d
//   0xF6AE7 jmp     short loc_F6B13
//   0xF6AE9 align 20h
//   0xF6B00 or      dword ptr [r15+18h], 800h
//   0xF6B08 add     r14, 1
//   0xF6B0C cmp     [r12+40h], r14d
//   0xF6B11 jle     short loc_F6B70
//   0xF6B13 mov     rax, [r12+210h]
//   0xF6B1B mov     r15, [rax+r14*8]
//   0xF6B1F mov     rax, [r15+38h]
//   0xF6B23 test    rax, rax
//   0xF6B26 jz      short loc_F6B00
//   0xF6B28 mov     eax, [rax]
//   0xF6B2A sub     eax, 38h ; '8'
//   0xF6B2D cmp     eax, 1
//   0xF6B30 ja      short loc_F6B00
//   0xF6B32 mov     rdi, r15
//   0xF6B35 call    sub_F40E0
//   0xF6B3A test    al, al
//   0xF6B3C jnz     short loc_F6B00
//   0xF6B3E mov     rax, [r15+38h]
//   0xF6B42 add     [rsp+0B8h+var_B0], 1
//   0xF6B47 cmp     byte ptr [rax+40h], 8
//   0xF6B4B jz      short loc_F6B00
//   0xF6B4D mov     esi, ebx
//   0xF6B4F mov     rdi, r15
//   0xF6B52 or      esi, 4
//   0xF6B55 call    sub_F0D20
//   0xF6B5A cmp     eax, 1
//   0xF6B5D jz      short loc_F6B00
//   0xF6B5F add     r13d, 1
//   0xF6B63 add     r14, 1
//   0xF6B67 cmp     [r12+40h], r14d
//   0xF6B6C jg      short loc_F6B13
//   0xF6B6E xchg    ax, ax
//   0xF6B70 mov     esi, [rsp+0B8h+var_AC]
//   0xF6B74 test    esi, esi
//   0xF6B76 jnz     loc_F6DD0
//   0xF6B7C mov     rdi, r12
//   0xF6B7F or      ebx, 6
//   0xF6B82 call    sub_18C8C0
//   0xF6B87 test    r13d, r13d
//   0xF6B8A jle     loc_F6CF6
//   0xF6B90 and     ebp, 10h
//   0xF6B93 jz      loc_F6EAD
//   0xF6B99 lea     rbp, [rsp+0B8h+var_A0]
//   0xF6B9E pxor    xmm0, xmm0
//   0xF6BA2 mov     rdi, [r12+310h]
//   0xF6BAA lea     rsi, [rsp+0B8h+var_78]
//   0xF6BAF mov     [rsp+0B8h+var_A0], 0
//   0xF6BB7 mov     [rsp+0B8h+var_98], 0
//   0xF6BC0 mov     [rsp+0B8h+var_90], rbp
//   0xF6BC5 mov     [rsp+0B8h+var_88], rbp
//   0xF6BCA mov     [rsp+0B8h+var_80], 0
//   0xF6BD3 mov     [rsp+0B8h+var_78], 0
//   0xF6BDC mov     [rsp+0B8h+var_60], 0
//   0xF6BE5 movups  [rsp+0B8h+var_70], xmm0
//   0xF6BEA movaps  [rsp+0B8h+var_58], xmm0
//   0xF6BEF call    sub_6A3A0
//   0xF6BF4 mov     eax, [r12+40h]
//   0xF6BF9 lea     r13, [rsp+0B8h+var_A8]
//   0xF6BFE sub     eax, 1
//   0xF6C01 movsxd  r14, eax
//   0xF6C04 jns     short loc_F6C25
//   0xF6C06 jmp     loc_F6CB0
//   0xF6C0B align 10h
//   0xF6C10 or      dword ptr [r15+18h], 800h
//   0xF6C18 sub     r14, 1
//   0xF6C1C test    r14d, r14d
//   0xF6C1F js      loc_F6CB0
//   0xF6C25 cmp     r14, qword ptr [rsp+0B8h+var_70]
//   0xF6C2A jnb     loc_F6DA0
//   0xF6C30 mov     rax, [rsp+0B8h+var_78]
//   0xF6C35 movsxd  rax, dword ptr [rax+r14*4]
//   0xF6C39 test    eax, eax
//   0xF6C3B js      loc_F6DA0
//   0xF6C41 cmp     [r12+40h], eax
//   0xF6C46 jle     loc_F6DA0
//   0xF6C4C mov     rdx, [r12+210h]
//   0xF6C54 mov     r15, [rdx+rax*8]
//   0xF6C58 mov     rdi, [r15+38h]
//   0xF6C5C test    rdi, rdi
//   0xF6C5F jz      short loc_F6C10
//   0xF6C61 mov     eax, [rdi]
//   0xF6C63 sub     eax, 38h ; '8'
//   0xF6C66 cmp     eax, 1
//   0xF6C69 ja      short loc_F6C10
//   0xF6C6B xor     esi, esi
//   0xF6C6D call    sub_11CB20
//   0xF6C72 test    al, al
//   0xF6C74 jnz     short loc_F6C10
//   0xF6C76 mov     rax, [r15+38h]
//   0xF6C7A cmp     byte ptr [rax+40h], 8
//   0xF6C7E jz      short loc_F6C18
//   0xF6C80 mov     esi, ebx
//   0xF6C82 mov     rdi, r15
//   0xF6C85 call    sub_F0D20
//   0xF6C8A test    eax, eax
//   0xF6C8C jz      loc_F6F30
//   0xF6C92 cmp     eax, 1
//   0xF6C95 jz      short loc_F6C18
//   0xF6C97 lea     rsi, [r15+48h]
//   0xF6C9B mov     rdi, r13
//   0xF6C9E call    sub_C0180
//   0xF6CA3 sub     r14, 1
//   0xF6CA7 test    r14d, r14d
//   0xF6CAA jns     loc_F6C25
//   0xF6CB0 cmp     [rsp+0B8h+var_80], 0
//   0xF6CB6 jnz     loc_F6DE2
//   0xF6CBC mov     rdi, [rsp+0B8h+var_60]
//   0xF6CC1 test    rdi, rdi
//   0xF6CC4 jz      short loc_F6CD4
//   0xF6CC6 mov     qword ptr [rsp+0B8h+var_58], 0
//   0xF6CCF call    _qfree
//   0xF6CD4 mov     rdi, [rsp+0B8h+var_78]
//   0xF6CD9 test    rdi, rdi
//   0xF6CDC jz      short loc_F6CEC
//   0xF6CDE mov     qword ptr [rsp+0B8h+var_70], 0
//   0xF6CE7 call    _qfree
//   0xF6CEC mov     rdi, [rsp+0B8h+var_98]
//   0xF6CF1 call    sub_F2550
//   0xF6CF6 xor     eax, eax
//   0xF6CF8 lea     rdx, aAnalyzeCalls; "analyze_calls"
//   0xF6CFF mov     esi, 1
//   0xF6D04 mov     rdi, r12
//   0xF6D07 call    sub_63560
//   0xF6D0C mov     ecx, [r12+40h]
//   0xF6D11 xor     eax, eax
//   0xF6D13 test    ecx, ecx
//   0xF6D15 jg      short loc_F6D35
//   0xF6D17 jmp     loc_F6EDF
//   0xF6D1C align 20h
//   0xF6D20 or      dh, 8
//   0xF6D23 mov     [rsi+18h], edx
//   0xF6D26 add     rax, 1
//   0xF6D2A cmp     [r12+40h], eax
//   0xF6D2F jle     loc_F6EDF
//   0xF6D35 mov     rdx, [r12+210h]
//   0xF6D3D mov     rsi, [rdx+rax*8]
//   0xF6D41 mov     edx, [rsi+18h]
//   0xF6D44 test    dh, 8
//   0xF6D47 jnz     short loc_F6D26
//   0xF6D49 test    dl, 2
//   0xF6D4C jz      short loc_F6D61
//   0xF6D4E mov     rdi, [rsi+38h]
//   0xF6D52 test    rdi, rdi
//   0xF6D55 jz      short loc_F6D20
//   0xF6D57 mov     edi, [rdi]
//   0xF6D59 sub     edi, 38h ; '8'
//   0xF6D5C cmp     edi, 1
//   0xF6D5F ja      short loc_F6D20
//   0xF6D61 mov     rax, cs:under_debugger_ptr
//   0xF6D68 cmp     byte ptr [rax], 0
//   0xF6D6B jnz     loc_34558
//   0xF6D71 mov     rax, [rsp+0B8h+var_40]
//   0xF6D76 sub     rax, fs:28h
//   0xF6D7F jnz     loc_F6FB1
//   0xF6D85 mov     edi, 0C3C2h
//   0xF6D8A call    sub_37EEE0
//   0xF6D8F align 10h
//   0xF6D90 call    sub_146C20
//   0xF6D95 jmp     loc_F6AAD
//   0xF6D9A align 20h
//   0xF6DA0 mov     rax, cs:under_debugger_ptr
//   0xF6DA7 cmp     byte ptr [rax], 0
//   0xF6DAA jnz     loc_34558
//   0xF6DB0 mov     rax, [rsp+0B8h+var_40]
//   0xF6DB5 sub     rax, fs:28h
//   0xF6DBE jnz     loc_F6FB6
//   0xF6DC4 mov     edi, 0C3C0h
//   0xF6DC9 call    sub_37EEE0
//   0xF6DCE align 10h
//   0xF6DD0 mov     rdi, [r12+310h]
//   0xF6DD8 call    sub_1457E0
//   0xF6DDD jmp     loc_F6B7C
//   0xF6DE2 mov     r13, [rsp+0B8h+var_90]
//   0xF6DE7 cmp     r13, rbp
//   0xF6DEA jz      loc_F6F5F
//   0xF6DF0 mov     byte ptr [rsp+0B8h+var_AC], 0
//   0xF6DF5 jmp     short loc_F6E0C
//   0xF6DF7 align 20h
//   0xF6E00 cmp     r14, rbp
//   0xF6E03 jz      loc_F6F1D
//   0xF6E09 mov     r13, r14
//   0xF6E0C movsxd  rdx, dword ptr [r13+20h]
//   0xF6E10 mov     rax, [r12+210h]
//   0xF6E18 mov     esi, ebx
//   0xF6E1A mov     r14, [rax+rdx*8]
//   0xF6E1E mov     rdi, r14
//   0xF6E21 call    sub_F0D20
//   0xF6E26 mov     r15d, eax
//   0xF6E29 test    eax, eax
//   0xF6E2B jz      short loc_F6E63
//   0xF6E2D mov     rdi, r13
//   0xF6E30 call    __ZSt18_Rb_tree_incrementPKSt18_Rb_tree_node_base; std::_Rb_tree_increment(std::_Rb_tree_node_base const*)
//   0xF6E35 mov     r14, rax
//   0xF6E38 cmp     r15d, 1
//   0xF6E3C jnz     short loc_F6E00
//   0xF6E3E mov     rsi, rbp
//   0xF6E41 mov     rdi, r13
//   0xF6E44 call    __ZSt28_Rb_tree_rebalance_for_erasePSt18_Rb_tree_node_baseRS_; std::_Rb_tree_rebalance_for_erase(std::_Rb_tree_node_base *,std::_Rb_tree_node_base&)
//   0xF6E49 mov     esi, 28h ; '('; unsigned __int64
//   0xF6E4E mov     rdi, rax; void *
//   0xF6E51 call    __ZdlPvm; operator delete(void *,ulong)
//   0xF6E56 sub     [rsp+0B8h+var_80], 1
//   0xF6E5C mov     byte ptr [rsp+0B8h+var_AC], 1
//   0xF6E61 jmp     short loc_F6E00
//   0xF6E63 mov     rax, [r14+38h]
//   0xF6E67 mov     rax, [rax+18h]
//   0xF6E6B mov     rdi, [rsp+0B8h+var_60]
//   0xF6E70 mov     [r12+1E8h], rax
//   0xF6E78 test    rdi, rdi
//   0xF6E7B jz      short loc_F6E8B
//   0xF6E7D mov     qword ptr [rsp+0B8h+var_58], 0
//   0xF6E86 call    _qfree
//   0xF6E8B mov     rdi, [rsp+0B8h+var_78]
//   0xF6E90 test    rdi, rdi
//   0xF6E93 jz      short loc_F6EA3
//   0xF6E95 mov     qword ptr [rsp+0B8h+var_70], 0
//   0xF6E9E call    _qfree
//   0xF6EA3 mov     rdi, [rsp+0B8h+var_98]
//   0xF6EA8 call    sub_F2550
//   0xF6EAD mov     [rsp+0B8h+var_B0], 0FFFFFFFFh
//   0xF6EB5 mov     rax, [rsp+0B8h+var_40]
//   0xF6EBA sub     rax, fs:28h
//   0xF6EC3 jnz     loc_F6F82
//   0xF6EC9 mov     eax, [rsp+0B8h+var_B0]
//   0xF6ECD add     rsp, 88h
//   0xF6ED4 pop     rbx
//   0xF6ED5 pop     rbp
//   0xF6ED6 pop     r12
//   0xF6ED8 pop     r13
//   0xF6EDA pop     r14
//   0xF6EDC pop     r15
//   0xF6EDE retn
//   0xF6EDF or      dword ptr [r12], 1000h
//   0xF6EE7 mov     rdx, r12
//   0xF6EEA mov     esi, 12h
//   0xF6EEF xor     eax, eax
//   0xF6EF1 mov     rdi, [r12+5D8h]
//   0xF6EF9 call    sub_339EC0
//   0xF6EFE jmp     short loc_F6EB5
//   0xF6F00 mov     edi, [rsp+0B8h+var_AC]
//   0xF6F04 test    edi, edi
//   0xF6F06 jnz     short loc_F6F3D
//   0xF6F08 mov     rdi, r12
//   0xF6F0B call    sub_18C8C0
//   0xF6F10 mov     [rsp+0B8h+var_B0], 0
//   0xF6F18 jmp     loc_F6CF6
//   0xF6F1D cmp     byte ptr [rsp+0B8h+var_AC], 0
//   0xF6F22 jnz     loc_F6CB0
//   0xF6F28 mov     rax, [rsp+0B8h+var_90]
//   0xF6F2D jmp     short loc_F6F62
//   0xF6F2F align 10h
//   0xF6F30 mov     rax, [r15+38h]
//   0xF6F34 mov     rax, [rax+18h]
//   0xF6F38 jmp     loc_F6E6B
//   0xF6F3D mov     rdi, [r12+310h]
//   0xF6F45 call    sub_1457E0
//   0xF6F4A mov     rdi, r12
//   0xF6F4D call    sub_18C8C0
//   0xF6F52 mov     [rsp+0B8h+var_B0], 0
//   0xF6F5A jmp     loc_F6CF6
//   0xF6F5F mov     rax, rbp
//   0xF6F62 movsxd  rsi, dword ptr [rax+20h]
//   0xF6F66 mov     edx, 7
//   0xF6F6B mov     rdi, r12
//   0xF6F6E xor     eax, eax
//   0xF6F70 call    sub_32CD90
//   0xF6F75 test    bl, 4
//   0xF6F78 jz      short loc_F6F87
//   0xF6F7A and     ebx, 0FFFFFFFBh
//   0xF6F7D jmp     loc_F6CB0
//   0xF6F82 call    ___stack_chk_fail
//   0xF6F87 mov     rax, cs:under_debugger_ptr
//   0xF6F8E cmp     byte ptr [rax], 0
//   0xF6F91 jnz     loc_34558
//   0xF6F97 mov     rax, [rsp+0B8h+var_40]
//   0xF6F9C sub     rax, fs:28h
//   0xF6FA5 jnz     short loc_F6FBB
//   0xF6FA7 mov     edi, 0C3C1h
//   0xF6FAC call    sub_37EEE0
//   0xF6FB1 call    ___stack_chk_fail
//   0xF6FB6 call    ___stack_chk_fail
//   0xF6FBB call    ___stack_chk_fail
//   0xF6FC0 mov     rbx, rax
//   0xF6FC3 jmp     loc_3455A
// ============================================================

void sub_F6A80(/* signature unknown */)
{
    // see disassembly above
}

