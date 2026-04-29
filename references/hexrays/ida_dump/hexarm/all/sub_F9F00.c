// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0xF9F00
// Name:           sub_F9F00
// Function size:  1352 bytes (314 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0xF9F00 push    r15
//   0xF9F02 push    r14
//   0xF9F04 push    r13
//   0xF9F06 push    r12
//   0xF9F08 mov     r12, rdi
//   0xF9F0B push    rbp
//   0xF9F0C push    rbx
//   0xF9F0D sub     rsp, 88h
//   0xF9F14 mov     rbp, fs:28h
//   0xF9F1D mov     [rsp+0B8h+var_40], rbp
//   0xF9F22 mov     ebp, esi
//   0xF9F24 and     esi, 7
//   0xF9F27 jnz     loc_FA210
//   0xF9F2D mov     rdi, r12
//   0xF9F30 mov     ebx, ebp
//   0xF9F32 call    sub_1EC160
//   0xF9F37 mov     rdi, r12
//   0xF9F3A and     ebx, 1
//   0xF9F3D call    sub_18FD40
//   0xF9F42 mov     eax, ebp
//   0xF9F44 mov     r8d, [r12+40h]
//   0xF9F49 and     eax, 8
//   0xF9F4C mov     [rsp+0B8h+var_AC], eax
//   0xF9F50 test    r8d, r8d
//   0xF9F53 jle     loc_FA380
//   0xF9F59 mov     [rsp+0B8h+var_B0], 0
//   0xF9F61 xor     r14d, r14d
//   0xF9F64 xor     r13d, r13d
//   0xF9F67 jmp     short loc_F9F93
//   0xF9F69 align 20h
//   0xF9F80 or      dword ptr [r15+18h], 800h
//   0xF9F88 add     r14, 1
//   0xF9F8C cmp     [r12+40h], r14d
//   0xF9F91 jle     short loc_F9FF0
//   0xF9F93 mov     rax, [r12+210h]
//   0xF9F9B mov     r15, [rax+r14*8]
//   0xF9F9F mov     rax, [r15+38h]
//   0xF9FA3 test    rax, rax
//   0xF9FA6 jz      short loc_F9F80
//   0xF9FA8 mov     eax, [rax]
//   0xF9FAA sub     eax, 38h ; '8'
//   0xF9FAD cmp     eax, 1
//   0xF9FB0 ja      short loc_F9F80
//   0xF9FB2 mov     rdi, r15
//   0xF9FB5 call    sub_F7560
//   0xF9FBA test    al, al
//   0xF9FBC jnz     short loc_F9F80
//   0xF9FBE mov     rax, [r15+38h]
//   0xF9FC2 add     [rsp+0B8h+var_B0], 1
//   0xF9FC7 cmp     byte ptr [rax+40h], 8
//   0xF9FCB jz      short loc_F9F80
//   0xF9FCD mov     esi, ebx
//   0xF9FCF mov     rdi, r15
//   0xF9FD2 or      esi, 4
//   0xF9FD5 call    sub_F41A0
//   0xF9FDA cmp     eax, 1
//   0xF9FDD jz      short loc_F9F80
//   0xF9FDF add     r13d, 1
//   0xF9FE3 add     r14, 1
//   0xF9FE7 cmp     [r12+40h], r14d
//   0xF9FEC jg      short loc_F9F93
//   0xF9FEE xchg    ax, ax
//   0xF9FF0 mov     esi, [rsp+0B8h+var_AC]
//   0xF9FF4 test    esi, esi
//   0xF9FF6 jnz     loc_FA250
//   0xF9FFC mov     rdi, r12
//   0xF9FFF or      ebx, 6
//   0xFA002 call    sub_18FD40
//   0xFA007 test    r13d, r13d
//   0xFA00A jle     loc_FA176
//   0xFA010 and     ebp, 10h
//   0xFA013 jz      loc_FA32D
//   0xFA019 lea     rbp, [rsp+0B8h+var_A0]
//   0xFA01E pxor    xmm0, xmm0
//   0xFA022 mov     rdi, [r12+310h]
//   0xFA02A lea     rsi, [rsp+0B8h+var_78]
//   0xFA02F mov     [rsp+0B8h+var_A0], 0
//   0xFA037 mov     [rsp+0B8h+var_98], 0
//   0xFA040 mov     [rsp+0B8h+var_90], rbp
//   0xFA045 mov     [rsp+0B8h+var_88], rbp
//   0xFA04A mov     [rsp+0B8h+var_80], 0
//   0xFA053 mov     [rsp+0B8h+var_78], 0
//   0xFA05C mov     [rsp+0B8h+var_60], 0
//   0xFA065 movups  [rsp+0B8h+var_70], xmm0
//   0xFA06A movaps  [rsp+0B8h+var_58], xmm0
//   0xFA06F call    sub_6D820
//   0xFA074 mov     eax, [r12+40h]
//   0xFA079 lea     r13, [rsp+0B8h+var_A8]
//   0xFA07E sub     eax, 1
//   0xFA081 movsxd  r14, eax
//   0xFA084 jns     short loc_FA0A5
//   0xFA086 jmp     loc_FA130
//   0xFA08B align 10h
//   0xFA090 or      dword ptr [r15+18h], 800h
//   0xFA098 sub     r14, 1
//   0xFA09C test    r14d, r14d
//   0xFA09F js      loc_FA130
//   0xFA0A5 cmp     r14, qword ptr [rsp+0B8h+var_70]
//   0xFA0AA jnb     loc_FA220
//   0xFA0B0 mov     rax, [rsp+0B8h+var_78]
//   0xFA0B5 movsxd  rax, dword ptr [rax+r14*4]
//   0xFA0B9 test    eax, eax
//   0xFA0BB js      loc_FA220
//   0xFA0C1 cmp     [r12+40h], eax
//   0xFA0C6 jle     loc_FA220
//   0xFA0CC mov     rdx, [r12+210h]
//   0xFA0D4 mov     r15, [rdx+rax*8]
//   0xFA0D8 mov     rdi, [r15+38h]
//   0xFA0DC test    rdi, rdi
//   0xFA0DF jz      short loc_FA090
//   0xFA0E1 mov     eax, [rdi]
//   0xFA0E3 sub     eax, 38h ; '8'
//   0xFA0E6 cmp     eax, 1
//   0xFA0E9 ja      short loc_FA090
//   0xFA0EB xor     esi, esi
//   0xFA0ED call    sub_11FFA0
//   0xFA0F2 test    al, al
//   0xFA0F4 jnz     short loc_FA090
//   0xFA0F6 mov     rax, [r15+38h]
//   0xFA0FA cmp     byte ptr [rax+40h], 8
//   0xFA0FE jz      short loc_FA098
//   0xFA100 mov     esi, ebx
//   0xFA102 mov     rdi, r15
//   0xFA105 call    sub_F41A0
//   0xFA10A test    eax, eax
//   0xFA10C jz      loc_FA3B0
//   0xFA112 cmp     eax, 1
//   0xFA115 jz      short loc_FA098
//   0xFA117 lea     rsi, [r15+48h]
//   0xFA11B mov     rdi, r13
//   0xFA11E call    sub_C3600
//   0xFA123 sub     r14, 1
//   0xFA127 test    r14d, r14d
//   0xFA12A jns     loc_FA0A5
//   0xFA130 cmp     [rsp+0B8h+var_80], 0
//   0xFA136 jnz     loc_FA262
//   0xFA13C mov     rdi, [rsp+0B8h+var_60]
//   0xFA141 test    rdi, rdi
//   0xFA144 jz      short loc_FA154
//   0xFA146 mov     qword ptr [rsp+0B8h+var_58], 0
//   0xFA14F call    _qfree
//   0xFA154 mov     rdi, [rsp+0B8h+var_78]
//   0xFA159 test    rdi, rdi
//   0xFA15C jz      short loc_FA16C
//   0xFA15E mov     qword ptr [rsp+0B8h+var_70], 0
//   0xFA167 call    _qfree
//   0xFA16C mov     rdi, [rsp+0B8h+var_98]
//   0xFA171 call    sub_F59D0
//   0xFA176 xor     eax, eax
//   0xFA178 lea     rdx, aAnalyzeCalls; "analyze_calls"
//   0xFA17F mov     esi, 1
//   0xFA184 mov     rdi, r12
//   0xFA187 call    sub_669A0
//   0xFA18C mov     ecx, [r12+40h]
//   0xFA191 xor     eax, eax
//   0xFA193 test    ecx, ecx
//   0xFA195 jg      short loc_FA1B5
//   0xFA197 jmp     loc_FA35F
//   0xFA19C align 20h
//   0xFA1A0 or      dh, 8
//   0xFA1A3 mov     [rsi+18h], edx
//   0xFA1A6 add     rax, 1
//   0xFA1AA cmp     [r12+40h], eax
//   0xFA1AF jle     loc_FA35F
//   0xFA1B5 mov     rdx, [r12+210h]
//   0xFA1BD mov     rsi, [rdx+rax*8]
//   0xFA1C1 mov     edx, [rsi+18h]
//   0xFA1C4 test    dh, 8
//   0xFA1C7 jnz     short loc_FA1A6
//   0xFA1C9 test    dl, 2
//   0xFA1CC jz      short loc_FA1E1
//   0xFA1CE mov     rdi, [rsi+38h]
//   0xFA1D2 test    rdi, rdi
//   0xFA1D5 jz      short loc_FA1A0
//   0xFA1D7 mov     edi, [rdi]
//   0xFA1D9 sub     edi, 38h ; '8'
//   0xFA1DC cmp     edi, 1
//   0xFA1DF ja      short loc_FA1A0
//   0xFA1E1 mov     rax, cs:under_debugger_ptr
//   0xFA1E8 cmp     byte ptr [rax], 0
//   0xFA1EB jnz     loc_37598
//   0xFA1F1 mov     rax, [rsp+0B8h+var_40]
//   0xFA1F6 sub     rax, fs:28h
//   0xFA1FF jnz     loc_FA431
//   0xFA205 mov     edi, 0C3C2h
//   0xFA20A call    sub_3835A0
//   0xFA20F align 10h
//   0xFA210 call    sub_14A0A0
//   0xFA215 jmp     loc_F9F2D
//   0xFA21A align 20h
//   0xFA220 mov     rax, cs:under_debugger_ptr
//   0xFA227 cmp     byte ptr [rax], 0
//   0xFA22A jnz     loc_37598
//   0xFA230 mov     rax, [rsp+0B8h+var_40]
//   0xFA235 sub     rax, fs:28h
//   0xFA23E jnz     loc_FA436
//   0xFA244 mov     edi, 0C3C0h
//   0xFA249 call    sub_3835A0
//   0xFA24E align 10h
//   0xFA250 mov     rdi, [r12+310h]
//   0xFA258 call    sub_148C60
//   0xFA25D jmp     loc_F9FFC
//   0xFA262 mov     r13, [rsp+0B8h+var_90]
//   0xFA267 cmp     r13, rbp
//   0xFA26A jz      loc_FA3DF
//   0xFA270 mov     byte ptr [rsp+0B8h+var_AC], 0
//   0xFA275 jmp     short loc_FA28C
//   0xFA277 align 20h
//   0xFA280 cmp     r14, rbp
//   0xFA283 jz      loc_FA39D
//   0xFA289 mov     r13, r14
//   0xFA28C movsxd  rdx, dword ptr [r13+20h]
//   0xFA290 mov     rax, [r12+210h]
//   0xFA298 mov     esi, ebx
//   0xFA29A mov     r14, [rax+rdx*8]
//   0xFA29E mov     rdi, r14
//   0xFA2A1 call    sub_F41A0
//   0xFA2A6 mov     r15d, eax
//   0xFA2A9 test    eax, eax
//   0xFA2AB jz      short loc_FA2E3
//   0xFA2AD mov     rdi, r13
//   0xFA2B0 call    __ZSt18_Rb_tree_incrementPKSt18_Rb_tree_node_base; std::_Rb_tree_increment(std::_Rb_tree_node_base const*)
//   0xFA2B5 mov     r14, rax
//   0xFA2B8 cmp     r15d, 1
//   0xFA2BC jnz     short loc_FA280
//   0xFA2BE mov     rsi, rbp
//   0xFA2C1 mov     rdi, r13
//   0xFA2C4 call    __ZSt28_Rb_tree_rebalance_for_erasePSt18_Rb_tree_node_baseRS_; std::_Rb_tree_rebalance_for_erase(std::_Rb_tree_node_base *,std::_Rb_tree_node_base&)
//   0xFA2C9 mov     esi, 28h ; '('; unsigned __int64
//   0xFA2CE mov     rdi, rax; void *
//   0xFA2D1 call    __ZdlPvm; operator delete(void *,ulong)
//   0xFA2D6 sub     [rsp+0B8h+var_80], 1
//   0xFA2DC mov     byte ptr [rsp+0B8h+var_AC], 1
//   0xFA2E1 jmp     short loc_FA280
//   0xFA2E3 mov     rax, [r14+38h]
//   0xFA2E7 mov     rax, [rax+18h]
//   0xFA2EB mov     rdi, [rsp+0B8h+var_60]
//   0xFA2F0 mov     [r12+1E8h], rax
//   0xFA2F8 test    rdi, rdi
//   0xFA2FB jz      short loc_FA30B
//   0xFA2FD mov     qword ptr [rsp+0B8h+var_58], 0
//   0xFA306 call    _qfree
//   0xFA30B mov     rdi, [rsp+0B8h+var_78]
//   0xFA310 test    rdi, rdi
//   0xFA313 jz      short loc_FA323
//   0xFA315 mov     qword ptr [rsp+0B8h+var_70], 0
//   0xFA31E call    _qfree
//   0xFA323 mov     rdi, [rsp+0B8h+var_98]
//   0xFA328 call    sub_F59D0
//   0xFA32D mov     [rsp+0B8h+var_B0], 0FFFFFFFFh
//   0xFA335 mov     rax, [rsp+0B8h+var_40]
//   0xFA33A sub     rax, fs:28h
//   0xFA343 jnz     loc_FA402
//   0xFA349 mov     eax, [rsp+0B8h+var_B0]
//   0xFA34D add     rsp, 88h
//   0xFA354 pop     rbx
//   0xFA355 pop     rbp
//   0xFA356 pop     r12
//   0xFA358 pop     r13
//   0xFA35A pop     r14
//   0xFA35C pop     r15
//   0xFA35E retn
//   0xFA35F or      dword ptr [r12], 1000h
//   0xFA367 mov     rdx, r12
//   0xFA36A mov     esi, 12h
//   0xFA36F xor     eax, eax
//   0xFA371 mov     rdi, [r12+5D8h]
//   0xFA379 call    sub_33E5A0
//   0xFA37E jmp     short loc_FA335
//   0xFA380 mov     edi, [rsp+0B8h+var_AC]
//   0xFA384 test    edi, edi
//   0xFA386 jnz     short loc_FA3BD
//   0xFA388 mov     rdi, r12
//   0xFA38B call    sub_18FD40
//   0xFA390 mov     [rsp+0B8h+var_B0], 0
//   0xFA398 jmp     loc_FA176
//   0xFA39D cmp     byte ptr [rsp+0B8h+var_AC], 0
//   0xFA3A2 jnz     loc_FA130
//   0xFA3A8 mov     rax, [rsp+0B8h+var_90]
//   0xFA3AD jmp     short loc_FA3E2
//   0xFA3AF align 10h
//   0xFA3B0 mov     rax, [r15+38h]
//   0xFA3B4 mov     rax, [rax+18h]
//   0xFA3B8 jmp     loc_FA2EB
//   0xFA3BD mov     rdi, [r12+310h]
//   0xFA3C5 call    sub_148C60
//   0xFA3CA mov     rdi, r12
//   0xFA3CD call    sub_18FD40
//   0xFA3D2 mov     [rsp+0B8h+var_B0], 0
//   0xFA3DA jmp     loc_FA176
//   0xFA3DF mov     rax, rbp
//   0xFA3E2 movsxd  rsi, dword ptr [rax+20h]
//   0xFA3E6 mov     edx, 7
//   0xFA3EB mov     rdi, r12
//   0xFA3EE xor     eax, eax
//   0xFA3F0 call    sub_331510
//   0xFA3F5 test    bl, 4
//   0xFA3F8 jz      short loc_FA407
//   0xFA3FA and     ebx, 0FFFFFFFBh
//   0xFA3FD jmp     loc_FA130
//   0xFA402 call    ___stack_chk_fail
//   0xFA407 mov     rax, cs:under_debugger_ptr
//   0xFA40E cmp     byte ptr [rax], 0
//   0xFA411 jnz     loc_37598
//   0xFA417 mov     rax, [rsp+0B8h+var_40]
//   0xFA41C sub     rax, fs:28h
//   0xFA425 jnz     short loc_FA43B
//   0xFA427 mov     edi, 0C3C1h
//   0xFA42C call    sub_3835A0
//   0xFA431 call    ___stack_chk_fail
//   0xFA436 call    ___stack_chk_fail
//   0xFA43B call    ___stack_chk_fail
//   0xFA440 mov     rbx, rax
//   0xFA443 jmp     loc_3759A
// ============================================================

void sub_F9F00(/* signature unknown */)
{
    // see disassembly above
}

