// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0xF3E00
// Name:           sub_F3E00
// Function size:  1352 bytes (314 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0xF3E00 push    r15
//   0xF3E02 push    r14
//   0xF3E04 push    r13
//   0xF3E06 push    r12
//   0xF3E08 mov     r12, rdi
//   0xF3E0B push    rbp
//   0xF3E0C push    rbx
//   0xF3E0D sub     rsp, 88h
//   0xF3E14 mov     rbp, fs:28h
//   0xF3E1D mov     [rsp+0B8h+var_40], rbp
//   0xF3E22 mov     ebp, esi
//   0xF3E24 and     esi, 7
//   0xF3E27 jnz     loc_F4110
//   0xF3E2D mov     rdi, r12
//   0xF3E30 mov     ebx, ebp
//   0xF3E32 call    sub_1E4A20
//   0xF3E37 mov     rdi, r12
//   0xF3E3A and     ebx, 1
//   0xF3E3D call    sub_189C40
//   0xF3E42 mov     eax, ebp
//   0xF3E44 mov     r8d, [r12+40h]
//   0xF3E49 and     eax, 8
//   0xF3E4C mov     [rsp+0B8h+var_AC], eax
//   0xF3E50 test    r8d, r8d
//   0xF3E53 jle     loc_F4280
//   0xF3E59 mov     [rsp+0B8h+var_B0], 0
//   0xF3E61 xor     r14d, r14d
//   0xF3E64 xor     r13d, r13d
//   0xF3E67 jmp     short loc_F3E93
//   0xF3E69 align 20h
//   0xF3E80 or      dword ptr [r15+18h], 800h
//   0xF3E88 add     r14, 1
//   0xF3E8C cmp     [r12+40h], r14d
//   0xF3E91 jle     short loc_F3EF0
//   0xF3E93 mov     rax, [r12+210h]
//   0xF3E9B mov     r15, [rax+r14*8]
//   0xF3E9F mov     rax, [r15+38h]
//   0xF3EA3 test    rax, rax
//   0xF3EA6 jz      short loc_F3E80
//   0xF3EA8 mov     eax, [rax]
//   0xF3EAA sub     eax, 38h ; '8'
//   0xF3EAD cmp     eax, 1
//   0xF3EB0 ja      short loc_F3E80
//   0xF3EB2 mov     rdi, r15
//   0xF3EB5 call    sub_F1460
//   0xF3EBA test    al, al
//   0xF3EBC jnz     short loc_F3E80
//   0xF3EBE mov     rax, [r15+38h]
//   0xF3EC2 add     [rsp+0B8h+var_B0], 1
//   0xF3EC7 cmp     byte ptr [rax+40h], 8
//   0xF3ECB jz      short loc_F3E80
//   0xF3ECD mov     esi, ebx
//   0xF3ECF mov     rdi, r15
//   0xF3ED2 or      esi, 4
//   0xF3ED5 call    sub_EE0A0
//   0xF3EDA cmp     eax, 1
//   0xF3EDD jz      short loc_F3E80
//   0xF3EDF add     r13d, 1
//   0xF3EE3 add     r14, 1
//   0xF3EE7 cmp     [r12+40h], r14d
//   0xF3EEC jg      short loc_F3E93
//   0xF3EEE xchg    ax, ax
//   0xF3EF0 mov     esi, [rsp+0B8h+var_AC]
//   0xF3EF4 test    esi, esi
//   0xF3EF6 jnz     loc_F4150
//   0xF3EFC mov     rdi, r12
//   0xF3EFF or      ebx, 6
//   0xF3F02 call    sub_189C40
//   0xF3F07 test    r13d, r13d
//   0xF3F0A jle     loc_F4076
//   0xF3F10 and     ebp, 10h
//   0xF3F13 jz      loc_F422D
//   0xF3F19 lea     rbp, [rsp+0B8h+var_A0]
//   0xF3F1E pxor    xmm0, xmm0
//   0xF3F22 mov     rdi, [r12+310h]
//   0xF3F2A lea     rsi, [rsp+0B8h+var_78]
//   0xF3F2F mov     [rsp+0B8h+var_A0], 0
//   0xF3F37 mov     [rsp+0B8h+var_98], 0
//   0xF3F40 mov     [rsp+0B8h+var_90], rbp
//   0xF3F45 mov     [rsp+0B8h+var_88], rbp
//   0xF3F4A mov     [rsp+0B8h+var_80], 0
//   0xF3F53 mov     [rsp+0B8h+var_78], 0
//   0xF3F5C mov     [rsp+0B8h+var_60], 0
//   0xF3F65 movups  [rsp+0B8h+var_70], xmm0
//   0xF3F6A movaps  [rsp+0B8h+var_58], xmm0
//   0xF3F6F call    sub_67860
//   0xF3F74 mov     eax, [r12+40h]
//   0xF3F79 lea     r13, [rsp+0B8h+var_A8]
//   0xF3F7E sub     eax, 1
//   0xF3F81 movsxd  r14, eax
//   0xF3F84 jns     short loc_F3FA5
//   0xF3F86 jmp     loc_F4030
//   0xF3F8B align 10h
//   0xF3F90 or      dword ptr [r15+18h], 800h
//   0xF3F98 sub     r14, 1
//   0xF3F9C test    r14d, r14d
//   0xF3F9F js      loc_F4030
//   0xF3FA5 cmp     r14, qword ptr [rsp+0B8h+var_70]
//   0xF3FAA jnb     loc_F4120
//   0xF3FB0 mov     rax, [rsp+0B8h+var_78]
//   0xF3FB5 movsxd  rax, dword ptr [rax+r14*4]
//   0xF3FB9 test    eax, eax
//   0xF3FBB js      loc_F4120
//   0xF3FC1 cmp     [r12+40h], eax
//   0xF3FC6 jle     loc_F4120
//   0xF3FCC mov     rdx, [r12+210h]
//   0xF3FD4 mov     r15, [rdx+rax*8]
//   0xF3FD8 mov     rdi, [r15+38h]
//   0xF3FDC test    rdi, rdi
//   0xF3FDF jz      short loc_F3F90
//   0xF3FE1 mov     eax, [rdi]
//   0xF3FE3 sub     eax, 38h ; '8'
//   0xF3FE6 cmp     eax, 1
//   0xF3FE9 ja      short loc_F3F90
//   0xF3FEB xor     esi, esi
//   0xF3FED call    sub_119EA0
//   0xF3FF2 test    al, al
//   0xF3FF4 jnz     short loc_F3F90
//   0xF3FF6 mov     rax, [r15+38h]
//   0xF3FFA cmp     byte ptr [rax+40h], 8
//   0xF3FFE jz      short loc_F3F98
//   0xF4000 mov     esi, ebx
//   0xF4002 mov     rdi, r15
//   0xF4005 call    sub_EE0A0
//   0xF400A test    eax, eax
//   0xF400C jz      loc_F42B0
//   0xF4012 cmp     eax, 1
//   0xF4015 jz      short loc_F3F98
//   0xF4017 lea     rsi, [r15+48h]
//   0xF401B mov     rdi, r13
//   0xF401E call    sub_BD500
//   0xF4023 sub     r14, 1
//   0xF4027 test    r14d, r14d
//   0xF402A jns     loc_F3FA5
//   0xF4030 cmp     [rsp+0B8h+var_80], 0
//   0xF4036 jnz     loc_F4162
//   0xF403C mov     rdi, [rsp+0B8h+var_60]
//   0xF4041 test    rdi, rdi
//   0xF4044 jz      short loc_F4054
//   0xF4046 mov     qword ptr [rsp+0B8h+var_58], 0
//   0xF404F call    _qfree
//   0xF4054 mov     rdi, [rsp+0B8h+var_78]
//   0xF4059 test    rdi, rdi
//   0xF405C jz      short loc_F406C
//   0xF405E mov     qword ptr [rsp+0B8h+var_70], 0
//   0xF4067 call    _qfree
//   0xF406C mov     rdi, [rsp+0B8h+var_98]
//   0xF4071 call    sub_EF8D0
//   0xF4076 xor     eax, eax
//   0xF4078 lea     rdx, aAnalyzeCalls; "analyze_calls"
//   0xF407F mov     esi, 1
//   0xF4084 mov     rdi, r12
//   0xF4087 call    sub_60A20
//   0xF408C mov     ecx, [r12+40h]
//   0xF4091 xor     eax, eax
//   0xF4093 test    ecx, ecx
//   0xF4095 jg      short loc_F40B5
//   0xF4097 jmp     loc_F425F
//   0xF409C align 20h
//   0xF40A0 or      dh, 8
//   0xF40A3 mov     [rsi+18h], edx
//   0xF40A6 add     rax, 1
//   0xF40AA cmp     [r12+40h], eax
//   0xF40AF jle     loc_F425F
//   0xF40B5 mov     rdx, [r12+210h]
//   0xF40BD mov     rsi, [rdx+rax*8]
//   0xF40C1 mov     edx, [rsi+18h]
//   0xF40C4 test    dh, 8
//   0xF40C7 jnz     short loc_F40A6
//   0xF40C9 test    dl, 2
//   0xF40CC jz      short loc_F40E1
//   0xF40CE mov     rdi, [rsi+38h]
//   0xF40D2 test    rdi, rdi
//   0xF40D5 jz      short loc_F40A0
//   0xF40D7 mov     edi, [rdi]
//   0xF40D9 sub     edi, 38h ; '8'
//   0xF40DC cmp     edi, 1
//   0xF40DF ja      short loc_F40A0
//   0xF40E1 mov     rax, cs:under_debugger_ptr
//   0xF40E8 cmp     byte ptr [rax], 0
//   0xF40EB jnz     loc_33558
//   0xF40F1 mov     rax, [rsp+0B8h+var_40]
//   0xF40F6 sub     rax, fs:28h
//   0xF40FF jnz     loc_F4331
//   0xF4105 mov     edi, 0C3C2h
//   0xF410A call    sub_37B760
//   0xF410F align 10h
//   0xF4110 call    sub_143FA0
//   0xF4115 jmp     loc_F3E2D
//   0xF411A align 20h
//   0xF4120 mov     rax, cs:under_debugger_ptr
//   0xF4127 cmp     byte ptr [rax], 0
//   0xF412A jnz     loc_33558
//   0xF4130 mov     rax, [rsp+0B8h+var_40]
//   0xF4135 sub     rax, fs:28h
//   0xF413E jnz     loc_F4336
//   0xF4144 mov     edi, 0C3C0h
//   0xF4149 call    sub_37B760
//   0xF414E align 10h
//   0xF4150 mov     rdi, [r12+310h]
//   0xF4158 call    sub_142B60
//   0xF415D jmp     loc_F3EFC
//   0xF4162 mov     r13, [rsp+0B8h+var_90]
//   0xF4167 cmp     r13, rbp
//   0xF416A jz      loc_F42DF
//   0xF4170 mov     byte ptr [rsp+0B8h+var_AC], 0
//   0xF4175 jmp     short loc_F418C
//   0xF4177 align 20h
//   0xF4180 cmp     r14, rbp
//   0xF4183 jz      loc_F429D
//   0xF4189 mov     r13, r14
//   0xF418C movsxd  rdx, dword ptr [r13+20h]
//   0xF4190 mov     rax, [r12+210h]
//   0xF4198 mov     esi, ebx
//   0xF419A mov     r14, [rax+rdx*8]
//   0xF419E mov     rdi, r14
//   0xF41A1 call    sub_EE0A0
//   0xF41A6 mov     r15d, eax
//   0xF41A9 test    eax, eax
//   0xF41AB jz      short loc_F41E3
//   0xF41AD mov     rdi, r13
//   0xF41B0 call    __ZSt18_Rb_tree_incrementPKSt18_Rb_tree_node_base; std::_Rb_tree_increment(std::_Rb_tree_node_base const*)
//   0xF41B5 mov     r14, rax
//   0xF41B8 cmp     r15d, 1
//   0xF41BC jnz     short loc_F4180
//   0xF41BE mov     rsi, rbp
//   0xF41C1 mov     rdi, r13
//   0xF41C4 call    __ZSt28_Rb_tree_rebalance_for_erasePSt18_Rb_tree_node_baseRS_; std::_Rb_tree_rebalance_for_erase(std::_Rb_tree_node_base *,std::_Rb_tree_node_base&)
//   0xF41C9 mov     esi, 28h ; '('; unsigned __int64
//   0xF41CE mov     rdi, rax; void *
//   0xF41D1 call    __ZdlPvm; operator delete(void *,ulong)
//   0xF41D6 sub     [rsp+0B8h+var_80], 1
//   0xF41DC mov     byte ptr [rsp+0B8h+var_AC], 1
//   0xF41E1 jmp     short loc_F4180
//   0xF41E3 mov     rax, [r14+38h]
//   0xF41E7 mov     rax, [rax+18h]
//   0xF41EB mov     rdi, [rsp+0B8h+var_60]
//   0xF41F0 mov     [r12+1E8h], rax
//   0xF41F8 test    rdi, rdi
//   0xF41FB jz      short loc_F420B
//   0xF41FD mov     qword ptr [rsp+0B8h+var_58], 0
//   0xF4206 call    _qfree
//   0xF420B mov     rdi, [rsp+0B8h+var_78]
//   0xF4210 test    rdi, rdi
//   0xF4213 jz      short loc_F4223
//   0xF4215 mov     qword ptr [rsp+0B8h+var_70], 0
//   0xF421E call    _qfree
//   0xF4223 mov     rdi, [rsp+0B8h+var_98]
//   0xF4228 call    sub_EF8D0
//   0xF422D mov     [rsp+0B8h+var_B0], 0FFFFFFFFh
//   0xF4235 mov     rax, [rsp+0B8h+var_40]
//   0xF423A sub     rax, fs:28h
//   0xF4243 jnz     loc_F4302
//   0xF4249 mov     eax, [rsp+0B8h+var_B0]
//   0xF424D add     rsp, 88h
//   0xF4254 pop     rbx
//   0xF4255 pop     rbp
//   0xF4256 pop     r12
//   0xF4258 pop     r13
//   0xF425A pop     r14
//   0xF425C pop     r15
//   0xF425E retn
//   0xF425F or      dword ptr [r12], 1000h
//   0xF4267 mov     rdx, r12
//   0xF426A mov     esi, 12h
//   0xF426F xor     eax, eax
//   0xF4271 mov     rdi, [r12+5D8h]
//   0xF4279 call    sub_3368C0
//   0xF427E jmp     short loc_F4235
//   0xF4280 mov     edi, [rsp+0B8h+var_AC]
//   0xF4284 test    edi, edi
//   0xF4286 jnz     short loc_F42BD
//   0xF4288 mov     rdi, r12
//   0xF428B call    sub_189C40
//   0xF4290 mov     [rsp+0B8h+var_B0], 0
//   0xF4298 jmp     loc_F4076
//   0xF429D cmp     byte ptr [rsp+0B8h+var_AC], 0
//   0xF42A2 jnz     loc_F4030
//   0xF42A8 mov     rax, [rsp+0B8h+var_90]
//   0xF42AD jmp     short loc_F42E2
//   0xF42AF align 10h
//   0xF42B0 mov     rax, [r15+38h]
//   0xF42B4 mov     rax, [rax+18h]
//   0xF42B8 jmp     loc_F41EB
//   0xF42BD mov     rdi, [r12+310h]
//   0xF42C5 call    sub_142B60
//   0xF42CA mov     rdi, r12
//   0xF42CD call    sub_189C40
//   0xF42D2 mov     [rsp+0B8h+var_B0], 0
//   0xF42DA jmp     loc_F4076
//   0xF42DF mov     rax, rbp
//   0xF42E2 movsxd  rsi, dword ptr [rax+20h]
//   0xF42E6 mov     edx, 7
//   0xF42EB mov     rdi, r12
//   0xF42EE xor     eax, eax
//   0xF42F0 call    sub_329B90
//   0xF42F5 test    bl, 4
//   0xF42F8 jz      short loc_F4307
//   0xF42FA and     ebx, 0FFFFFFFBh
//   0xF42FD jmp     loc_F4030
//   0xF4302 call    ___stack_chk_fail
//   0xF4307 mov     rax, cs:under_debugger_ptr
//   0xF430E cmp     byte ptr [rax], 0
//   0xF4311 jnz     loc_33558
//   0xF4317 mov     rax, [rsp+0B8h+var_40]
//   0xF431C sub     rax, fs:28h
//   0xF4325 jnz     short loc_F433B
//   0xF4327 mov     edi, 0C3C1h
//   0xF432C call    sub_37B760
//   0xF4331 call    ___stack_chk_fail
//   0xF4336 call    ___stack_chk_fail
//   0xF433B call    ___stack_chk_fail
//   0xF4340 mov     rbx, rax
//   0xF4343 jmp     loc_3355A
// ============================================================

void sub_F3E00(/* signature unknown */)
{
    // see disassembly above
}

