// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0xF5900
// Name:           sub_F5900
// Function size:  1352 bytes (314 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0xF5900 push    r15
//   0xF5902 push    r14
//   0xF5904 push    r13
//   0xF5906 push    r12
//   0xF5908 mov     r12, rdi
//   0xF590B push    rbp
//   0xF590C push    rbx
//   0xF590D sub     rsp, 88h
//   0xF5914 mov     rbp, fs:28h
//   0xF591D mov     [rsp+0B8h+var_40], rbp
//   0xF5922 mov     ebp, esi
//   0xF5924 and     esi, 7
//   0xF5927 jnz     loc_F5C10
//   0xF592D mov     rdi, r12
//   0xF5930 mov     ebx, ebp
//   0xF5932 call    sub_1E69E0
//   0xF5937 mov     rdi, r12
//   0xF593A and     ebx, 1
//   0xF593D call    sub_18B740
//   0xF5942 mov     eax, ebp
//   0xF5944 mov     r8d, [r12+40h]
//   0xF5949 and     eax, 8
//   0xF594C mov     [rsp+0B8h+var_AC], eax
//   0xF5950 test    r8d, r8d
//   0xF5953 jle     loc_F5D80
//   0xF5959 mov     [rsp+0B8h+var_B0], 0
//   0xF5961 xor     r14d, r14d
//   0xF5964 xor     r13d, r13d
//   0xF5967 jmp     short loc_F5993
//   0xF5969 align 20h
//   0xF5980 or      dword ptr [r15+18h], 800h
//   0xF5988 add     r14, 1
//   0xF598C cmp     [r12+40h], r14d
//   0xF5991 jle     short loc_F59F0
//   0xF5993 mov     rax, [r12+210h]
//   0xF599B mov     r15, [rax+r14*8]
//   0xF599F mov     rax, [r15+38h]
//   0xF59A3 test    rax, rax
//   0xF59A6 jz      short loc_F5980
//   0xF59A8 mov     eax, [rax]
//   0xF59AA sub     eax, 38h ; '8'
//   0xF59AD cmp     eax, 1
//   0xF59B0 ja      short loc_F5980
//   0xF59B2 mov     rdi, r15
//   0xF59B5 call    sub_F2F60
//   0xF59BA test    al, al
//   0xF59BC jnz     short loc_F5980
//   0xF59BE mov     rax, [r15+38h]
//   0xF59C2 add     [rsp+0B8h+var_B0], 1
//   0xF59C7 cmp     byte ptr [rax+40h], 8
//   0xF59CB jz      short loc_F5980
//   0xF59CD mov     esi, ebx
//   0xF59CF mov     rdi, r15
//   0xF59D2 or      esi, 4
//   0xF59D5 call    sub_EFBA0
//   0xF59DA cmp     eax, 1
//   0xF59DD jz      short loc_F5980
//   0xF59DF add     r13d, 1
//   0xF59E3 add     r14, 1
//   0xF59E7 cmp     [r12+40h], r14d
//   0xF59EC jg      short loc_F5993
//   0xF59EE xchg    ax, ax
//   0xF59F0 mov     esi, [rsp+0B8h+var_AC]
//   0xF59F4 test    esi, esi
//   0xF59F6 jnz     loc_F5C50
//   0xF59FC mov     rdi, r12
//   0xF59FF or      ebx, 6
//   0xF5A02 call    sub_18B740
//   0xF5A07 test    r13d, r13d
//   0xF5A0A jle     loc_F5B76
//   0xF5A10 and     ebp, 10h
//   0xF5A13 jz      loc_F5D2D
//   0xF5A19 lea     rbp, [rsp+0B8h+var_A0]
//   0xF5A1E pxor    xmm0, xmm0
//   0xF5A22 mov     rdi, [r12+310h]
//   0xF5A2A lea     rsi, [rsp+0B8h+var_78]
//   0xF5A2F mov     [rsp+0B8h+var_A0], 0
//   0xF5A37 mov     [rsp+0B8h+var_98], 0
//   0xF5A40 mov     [rsp+0B8h+var_90], rbp
//   0xF5A45 mov     [rsp+0B8h+var_88], rbp
//   0xF5A4A mov     [rsp+0B8h+var_80], 0
//   0xF5A53 mov     [rsp+0B8h+var_78], 0
//   0xF5A5C mov     [rsp+0B8h+var_60], 0
//   0xF5A65 movups  [rsp+0B8h+var_70], xmm0
//   0xF5A6A movaps  [rsp+0B8h+var_58], xmm0
//   0xF5A6F call    sub_69360
//   0xF5A74 mov     eax, [r12+40h]
//   0xF5A79 lea     r13, [rsp+0B8h+var_A8]
//   0xF5A7E sub     eax, 1
//   0xF5A81 movsxd  r14, eax
//   0xF5A84 jns     short loc_F5AA5
//   0xF5A86 jmp     loc_F5B30
//   0xF5A8B align 10h
//   0xF5A90 or      dword ptr [r15+18h], 800h
//   0xF5A98 sub     r14, 1
//   0xF5A9C test    r14d, r14d
//   0xF5A9F js      loc_F5B30
//   0xF5AA5 cmp     r14, qword ptr [rsp+0B8h+var_70]
//   0xF5AAA jnb     loc_F5C20
//   0xF5AB0 mov     rax, [rsp+0B8h+var_78]
//   0xF5AB5 movsxd  rax, dword ptr [rax+r14*4]
//   0xF5AB9 test    eax, eax
//   0xF5ABB js      loc_F5C20
//   0xF5AC1 cmp     [r12+40h], eax
//   0xF5AC6 jle     loc_F5C20
//   0xF5ACC mov     rdx, [r12+210h]
//   0xF5AD4 mov     r15, [rdx+rax*8]
//   0xF5AD8 mov     rdi, [r15+38h]
//   0xF5ADC test    rdi, rdi
//   0xF5ADF jz      short loc_F5A90
//   0xF5AE1 mov     eax, [rdi]
//   0xF5AE3 sub     eax, 38h ; '8'
//   0xF5AE6 cmp     eax, 1
//   0xF5AE9 ja      short loc_F5A90
//   0xF5AEB xor     esi, esi
//   0xF5AED call    sub_11B9A0
//   0xF5AF2 test    al, al
//   0xF5AF4 jnz     short loc_F5A90
//   0xF5AF6 mov     rax, [r15+38h]
//   0xF5AFA cmp     byte ptr [rax+40h], 8
//   0xF5AFE jz      short loc_F5A98
//   0xF5B00 mov     esi, ebx
//   0xF5B02 mov     rdi, r15
//   0xF5B05 call    sub_EFBA0
//   0xF5B0A test    eax, eax
//   0xF5B0C jz      loc_F5DB0
//   0xF5B12 cmp     eax, 1
//   0xF5B15 jz      short loc_F5A98
//   0xF5B17 lea     rsi, [r15+48h]
//   0xF5B1B mov     rdi, r13
//   0xF5B1E call    sub_BF000
//   0xF5B23 sub     r14, 1
//   0xF5B27 test    r14d, r14d
//   0xF5B2A jns     loc_F5AA5
//   0xF5B30 cmp     [rsp+0B8h+var_80], 0
//   0xF5B36 jnz     loc_F5C62
//   0xF5B3C mov     rdi, [rsp+0B8h+var_60]
//   0xF5B41 test    rdi, rdi
//   0xF5B44 jz      short loc_F5B54
//   0xF5B46 mov     qword ptr [rsp+0B8h+var_58], 0
//   0xF5B4F call    _qfree
//   0xF5B54 mov     rdi, [rsp+0B8h+var_78]
//   0xF5B59 test    rdi, rdi
//   0xF5B5C jz      short loc_F5B6C
//   0xF5B5E mov     qword ptr [rsp+0B8h+var_70], 0
//   0xF5B67 call    _qfree
//   0xF5B6C mov     rdi, [rsp+0B8h+var_98]
//   0xF5B71 call    sub_F13D0
//   0xF5B76 xor     eax, eax
//   0xF5B78 lea     rdx, aAnalyzeCalls; "analyze_calls"
//   0xF5B7F mov     esi, 1
//   0xF5B84 mov     rdi, r12
//   0xF5B87 call    sub_62520
//   0xF5B8C mov     ecx, [r12+40h]
//   0xF5B91 xor     eax, eax
//   0xF5B93 test    ecx, ecx
//   0xF5B95 jg      short loc_F5BB5
//   0xF5B97 jmp     loc_F5D5F
//   0xF5B9C align 20h
//   0xF5BA0 or      dh, 8
//   0xF5BA3 mov     [rsi+18h], edx
//   0xF5BA6 add     rax, 1
//   0xF5BAA cmp     [r12+40h], eax
//   0xF5BAF jle     loc_F5D5F
//   0xF5BB5 mov     rdx, [r12+210h]
//   0xF5BBD mov     rsi, [rdx+rax*8]
//   0xF5BC1 mov     edx, [rsi+18h]
//   0xF5BC4 test    dh, 8
//   0xF5BC7 jnz     short loc_F5BA6
//   0xF5BC9 test    dl, 2
//   0xF5BCC jz      short loc_F5BE1
//   0xF5BCE mov     rdi, [rsi+38h]
//   0xF5BD2 test    rdi, rdi
//   0xF5BD5 jz      short loc_F5BA0
//   0xF5BD7 mov     edi, [rdi]
//   0xF5BD9 sub     edi, 38h ; '8'
//   0xF5BDC cmp     edi, 1
//   0xF5BDF ja      short loc_F5BA0
//   0xF5BE1 mov     rax, cs:under_debugger_ptr
//   0xF5BE8 cmp     byte ptr [rax], 0
//   0xF5BEB jnz     loc_34558
//   0xF5BF1 mov     rax, [rsp+0B8h+var_40]
//   0xF5BF6 sub     rax, fs:28h
//   0xF5BFF jnz     loc_F5E31
//   0xF5C05 mov     edi, 0C3C2h
//   0xF5C0A call    sub_37CFE0
//   0xF5C0F align 10h
//   0xF5C10 call    sub_145AA0
//   0xF5C15 jmp     loc_F592D
//   0xF5C1A align 20h
//   0xF5C20 mov     rax, cs:under_debugger_ptr
//   0xF5C27 cmp     byte ptr [rax], 0
//   0xF5C2A jnz     loc_34558
//   0xF5C30 mov     rax, [rsp+0B8h+var_40]
//   0xF5C35 sub     rax, fs:28h
//   0xF5C3E jnz     loc_F5E36
//   0xF5C44 mov     edi, 0C3C0h
//   0xF5C49 call    sub_37CFE0
//   0xF5C4E align 10h
//   0xF5C50 mov     rdi, [r12+310h]
//   0xF5C58 call    sub_144660
//   0xF5C5D jmp     loc_F59FC
//   0xF5C62 mov     r13, [rsp+0B8h+var_90]
//   0xF5C67 cmp     r13, rbp
//   0xF5C6A jz      loc_F5DDF
//   0xF5C70 mov     byte ptr [rsp+0B8h+var_AC], 0
//   0xF5C75 jmp     short loc_F5C8C
//   0xF5C77 align 20h
//   0xF5C80 cmp     r14, rbp
//   0xF5C83 jz      loc_F5D9D
//   0xF5C89 mov     r13, r14
//   0xF5C8C movsxd  rdx, dword ptr [r13+20h]
//   0xF5C90 mov     rax, [r12+210h]
//   0xF5C98 mov     esi, ebx
//   0xF5C9A mov     r14, [rax+rdx*8]
//   0xF5C9E mov     rdi, r14
//   0xF5CA1 call    sub_EFBA0
//   0xF5CA6 mov     r15d, eax
//   0xF5CA9 test    eax, eax
//   0xF5CAB jz      short loc_F5CE3
//   0xF5CAD mov     rdi, r13
//   0xF5CB0 call    __ZSt18_Rb_tree_incrementPKSt18_Rb_tree_node_base; std::_Rb_tree_increment(std::_Rb_tree_node_base const*)
//   0xF5CB5 mov     r14, rax
//   0xF5CB8 cmp     r15d, 1
//   0xF5CBC jnz     short loc_F5C80
//   0xF5CBE mov     rsi, rbp
//   0xF5CC1 mov     rdi, r13
//   0xF5CC4 call    __ZSt28_Rb_tree_rebalance_for_erasePSt18_Rb_tree_node_baseRS_; std::_Rb_tree_rebalance_for_erase(std::_Rb_tree_node_base *,std::_Rb_tree_node_base&)
//   0xF5CC9 mov     esi, 28h ; '('; unsigned __int64
//   0xF5CCE mov     rdi, rax; void *
//   0xF5CD1 call    __ZdlPvm; operator delete(void *,ulong)
//   0xF5CD6 sub     [rsp+0B8h+var_80], 1
//   0xF5CDC mov     byte ptr [rsp+0B8h+var_AC], 1
//   0xF5CE1 jmp     short loc_F5C80
//   0xF5CE3 mov     rax, [r14+38h]
//   0xF5CE7 mov     rax, [rax+18h]
//   0xF5CEB mov     rdi, [rsp+0B8h+var_60]
//   0xF5CF0 mov     [r12+1E8h], rax
//   0xF5CF8 test    rdi, rdi
//   0xF5CFB jz      short loc_F5D0B
//   0xF5CFD mov     qword ptr [rsp+0B8h+var_58], 0
//   0xF5D06 call    _qfree
//   0xF5D0B mov     rdi, [rsp+0B8h+var_78]
//   0xF5D10 test    rdi, rdi
//   0xF5D13 jz      short loc_F5D23
//   0xF5D15 mov     qword ptr [rsp+0B8h+var_70], 0
//   0xF5D1E call    _qfree
//   0xF5D23 mov     rdi, [rsp+0B8h+var_98]
//   0xF5D28 call    sub_F13D0
//   0xF5D2D mov     [rsp+0B8h+var_B0], 0FFFFFFFFh
//   0xF5D35 mov     rax, [rsp+0B8h+var_40]
//   0xF5D3A sub     rax, fs:28h
//   0xF5D43 jnz     loc_F5E02
//   0xF5D49 mov     eax, [rsp+0B8h+var_B0]
//   0xF5D4D add     rsp, 88h
//   0xF5D54 pop     rbx
//   0xF5D55 pop     rbp
//   0xF5D56 pop     r12
//   0xF5D58 pop     r13
//   0xF5D5A pop     r14
//   0xF5D5C pop     r15
//   0xF5D5E retn
//   0xF5D5F or      dword ptr [r12], 1000h
//   0xF5D67 mov     rdx, r12
//   0xF5D6A mov     esi, 12h
//   0xF5D6F xor     eax, eax
//   0xF5D71 mov     rdi, [r12+5D8h]
//   0xF5D79 call    sub_3380C0
//   0xF5D7E jmp     short loc_F5D35
//   0xF5D80 mov     edi, [rsp+0B8h+var_AC]
//   0xF5D84 test    edi, edi
//   0xF5D86 jnz     short loc_F5DBD
//   0xF5D88 mov     rdi, r12
//   0xF5D8B call    sub_18B740
//   0xF5D90 mov     [rsp+0B8h+var_B0], 0
//   0xF5D98 jmp     loc_F5B76
//   0xF5D9D cmp     byte ptr [rsp+0B8h+var_AC], 0
//   0xF5DA2 jnz     loc_F5B30
//   0xF5DA8 mov     rax, [rsp+0B8h+var_90]
//   0xF5DAD jmp     short loc_F5DE2
//   0xF5DAF align 10h
//   0xF5DB0 mov     rax, [r15+38h]
//   0xF5DB4 mov     rax, [rax+18h]
//   0xF5DB8 jmp     loc_F5CEB
//   0xF5DBD mov     rdi, [r12+310h]
//   0xF5DC5 call    sub_144660
//   0xF5DCA mov     rdi, r12
//   0xF5DCD call    sub_18B740
//   0xF5DD2 mov     [rsp+0B8h+var_B0], 0
//   0xF5DDA jmp     loc_F5B76
//   0xF5DDF mov     rax, rbp
//   0xF5DE2 movsxd  rsi, dword ptr [rax+20h]
//   0xF5DE6 mov     edx, 7
//   0xF5DEB mov     rdi, r12
//   0xF5DEE xor     eax, eax
//   0xF5DF0 call    sub_32B650
//   0xF5DF5 test    bl, 4
//   0xF5DF8 jz      short loc_F5E07
//   0xF5DFA and     ebx, 0FFFFFFFBh
//   0xF5DFD jmp     loc_F5B30
//   0xF5E02 call    ___stack_chk_fail
//   0xF5E07 mov     rax, cs:under_debugger_ptr
//   0xF5E0E cmp     byte ptr [rax], 0
//   0xF5E11 jnz     loc_34558
//   0xF5E17 mov     rax, [rsp+0B8h+var_40]
//   0xF5E1C sub     rax, fs:28h
//   0xF5E25 jnz     short loc_F5E3B
//   0xF5E27 mov     edi, 0C3C1h
//   0xF5E2C call    sub_37CFE0
//   0xF5E31 call    ___stack_chk_fail
//   0xF5E36 call    ___stack_chk_fail
//   0xF5E3B call    ___stack_chk_fail
//   0xF5E40 mov     rbx, rax
//   0xF5E43 jmp     loc_3455A
// ============================================================

void sub_F5900(/* signature unknown */)
{
    // see disassembly above
}

