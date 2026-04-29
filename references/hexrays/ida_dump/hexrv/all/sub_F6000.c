// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0xF6000
// Name:           sub_F6000
// Function size:  1352 bytes (314 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0xF6000 push    r15
//   0xF6002 push    r14
//   0xF6004 push    r13
//   0xF6006 push    r12
//   0xF6008 mov     r12, rdi
//   0xF600B push    rbp
//   0xF600C push    rbx
//   0xF600D sub     rsp, 88h
//   0xF6014 mov     rbp, fs:28h
//   0xF601D mov     [rsp+0B8h+var_40], rbp
//   0xF6022 mov     ebp, esi
//   0xF6024 and     esi, 7
//   0xF6027 jnz     loc_F6310
//   0xF602D mov     rdi, r12
//   0xF6030 mov     ebx, ebp
//   0xF6032 call    sub_1E71A0
//   0xF6037 mov     rdi, r12
//   0xF603A and     ebx, 1
//   0xF603D call    sub_18BE40
//   0xF6042 mov     eax, ebp
//   0xF6044 mov     r8d, [r12+40h]
//   0xF6049 and     eax, 8
//   0xF604C mov     [rsp+0B8h+var_AC], eax
//   0xF6050 test    r8d, r8d
//   0xF6053 jle     loc_F6480
//   0xF6059 mov     [rsp+0B8h+var_B0], 0
//   0xF6061 xor     r14d, r14d
//   0xF6064 xor     r13d, r13d
//   0xF6067 jmp     short loc_F6093
//   0xF6069 align 20h
//   0xF6080 or      dword ptr [r15+18h], 800h
//   0xF6088 add     r14, 1
//   0xF608C cmp     [r12+40h], r14d
//   0xF6091 jle     short loc_F60F0
//   0xF6093 mov     rax, [r12+210h]
//   0xF609B mov     r15, [rax+r14*8]
//   0xF609F mov     rax, [r15+38h]
//   0xF60A3 test    rax, rax
//   0xF60A6 jz      short loc_F6080
//   0xF60A8 mov     eax, [rax]
//   0xF60AA sub     eax, 38h ; '8'
//   0xF60AD cmp     eax, 1
//   0xF60B0 ja      short loc_F6080
//   0xF60B2 mov     rdi, r15
//   0xF60B5 call    sub_F3660
//   0xF60BA test    al, al
//   0xF60BC jnz     short loc_F6080
//   0xF60BE mov     rax, [r15+38h]
//   0xF60C2 add     [rsp+0B8h+var_B0], 1
//   0xF60C7 cmp     byte ptr [rax+40h], 8
//   0xF60CB jz      short loc_F6080
//   0xF60CD mov     esi, ebx
//   0xF60CF mov     rdi, r15
//   0xF60D2 or      esi, 4
//   0xF60D5 call    sub_F02A0
//   0xF60DA cmp     eax, 1
//   0xF60DD jz      short loc_F6080
//   0xF60DF add     r13d, 1
//   0xF60E3 add     r14, 1
//   0xF60E7 cmp     [r12+40h], r14d
//   0xF60EC jg      short loc_F6093
//   0xF60EE xchg    ax, ax
//   0xF60F0 mov     esi, [rsp+0B8h+var_AC]
//   0xF60F4 test    esi, esi
//   0xF60F6 jnz     loc_F6350
//   0xF60FC mov     rdi, r12
//   0xF60FF or      ebx, 6
//   0xF6102 call    sub_18BE40
//   0xF6107 test    r13d, r13d
//   0xF610A jle     loc_F6276
//   0xF6110 and     ebp, 10h
//   0xF6113 jz      loc_F642D
//   0xF6119 lea     rbp, [rsp+0B8h+var_A0]
//   0xF611E pxor    xmm0, xmm0
//   0xF6122 mov     rdi, [r12+310h]
//   0xF612A lea     rsi, [rsp+0B8h+var_78]
//   0xF612F mov     [rsp+0B8h+var_A0], 0
//   0xF6137 mov     [rsp+0B8h+var_98], 0
//   0xF6140 mov     [rsp+0B8h+var_90], rbp
//   0xF6145 mov     [rsp+0B8h+var_88], rbp
//   0xF614A mov     [rsp+0B8h+var_80], 0
//   0xF6153 mov     [rsp+0B8h+var_78], 0
//   0xF615C mov     [rsp+0B8h+var_60], 0
//   0xF6165 movups  [rsp+0B8h+var_70], xmm0
//   0xF616A movaps  [rsp+0B8h+var_58], xmm0
//   0xF616F call    sub_69A60
//   0xF6174 mov     eax, [r12+40h]
//   0xF6179 lea     r13, [rsp+0B8h+var_A8]
//   0xF617E sub     eax, 1
//   0xF6181 movsxd  r14, eax
//   0xF6184 jns     short loc_F61A5
//   0xF6186 jmp     loc_F6230
//   0xF618B align 10h
//   0xF6190 or      dword ptr [r15+18h], 800h
//   0xF6198 sub     r14, 1
//   0xF619C test    r14d, r14d
//   0xF619F js      loc_F6230
//   0xF61A5 cmp     r14, qword ptr [rsp+0B8h+var_70]
//   0xF61AA jnb     loc_F6320
//   0xF61B0 mov     rax, [rsp+0B8h+var_78]
//   0xF61B5 movsxd  rax, dword ptr [rax+r14*4]
//   0xF61B9 test    eax, eax
//   0xF61BB js      loc_F6320
//   0xF61C1 cmp     [r12+40h], eax
//   0xF61C6 jle     loc_F6320
//   0xF61CC mov     rdx, [r12+210h]
//   0xF61D4 mov     r15, [rdx+rax*8]
//   0xF61D8 mov     rdi, [r15+38h]
//   0xF61DC test    rdi, rdi
//   0xF61DF jz      short loc_F6190
//   0xF61E1 mov     eax, [rdi]
//   0xF61E3 sub     eax, 38h ; '8'
//   0xF61E6 cmp     eax, 1
//   0xF61E9 ja      short loc_F6190
//   0xF61EB xor     esi, esi
//   0xF61ED call    sub_11C0A0
//   0xF61F2 test    al, al
//   0xF61F4 jnz     short loc_F6190
//   0xF61F6 mov     rax, [r15+38h]
//   0xF61FA cmp     byte ptr [rax+40h], 8
//   0xF61FE jz      short loc_F6198
//   0xF6200 mov     esi, ebx
//   0xF6202 mov     rdi, r15
//   0xF6205 call    sub_F02A0
//   0xF620A test    eax, eax
//   0xF620C jz      loc_F64B0
//   0xF6212 cmp     eax, 1
//   0xF6215 jz      short loc_F6198
//   0xF6217 lea     rsi, [r15+48h]
//   0xF621B mov     rdi, r13
//   0xF621E call    sub_BF700
//   0xF6223 sub     r14, 1
//   0xF6227 test    r14d, r14d
//   0xF622A jns     loc_F61A5
//   0xF6230 cmp     [rsp+0B8h+var_80], 0
//   0xF6236 jnz     loc_F6362
//   0xF623C mov     rdi, [rsp+0B8h+var_60]
//   0xF6241 test    rdi, rdi
//   0xF6244 jz      short loc_F6254
//   0xF6246 mov     qword ptr [rsp+0B8h+var_58], 0
//   0xF624F call    _qfree
//   0xF6254 mov     rdi, [rsp+0B8h+var_78]
//   0xF6259 test    rdi, rdi
//   0xF625C jz      short loc_F626C
//   0xF625E mov     qword ptr [rsp+0B8h+var_70], 0
//   0xF6267 call    _qfree
//   0xF626C mov     rdi, [rsp+0B8h+var_98]
//   0xF6271 call    sub_F1AD0
//   0xF6276 xor     eax, eax
//   0xF6278 lea     rdx, aAnalyzeCalls; "analyze_calls"
//   0xF627F mov     esi, 1
//   0xF6284 mov     rdi, r12
//   0xF6287 call    sub_62C20
//   0xF628C mov     ecx, [r12+40h]
//   0xF6291 xor     eax, eax
//   0xF6293 test    ecx, ecx
//   0xF6295 jg      short loc_F62B5
//   0xF6297 jmp     loc_F645F
//   0xF629C align 20h
//   0xF62A0 or      dh, 8
//   0xF62A3 mov     [rsi+18h], edx
//   0xF62A6 add     rax, 1
//   0xF62AA cmp     [r12+40h], eax
//   0xF62AF jle     loc_F645F
//   0xF62B5 mov     rdx, [r12+210h]
//   0xF62BD mov     rsi, [rdx+rax*8]
//   0xF62C1 mov     edx, [rsi+18h]
//   0xF62C4 test    dh, 8
//   0xF62C7 jnz     short loc_F62A6
//   0xF62C9 test    dl, 2
//   0xF62CC jz      short loc_F62E1
//   0xF62CE mov     rdi, [rsi+38h]
//   0xF62D2 test    rdi, rdi
//   0xF62D5 jz      short loc_F62A0
//   0xF62D7 mov     edi, [rdi]
//   0xF62D9 sub     edi, 38h ; '8'
//   0xF62DC cmp     edi, 1
//   0xF62DF ja      short loc_F62A0
//   0xF62E1 mov     rax, cs:under_debugger_ptr
//   0xF62E8 cmp     byte ptr [rax], 0
//   0xF62EB jnz     loc_34558
//   0xF62F1 mov     rax, [rsp+0B8h+var_40]
//   0xF62F6 sub     rax, fs:28h
//   0xF62FF jnz     loc_F6531
//   0xF6305 mov     edi, 0C3C2h
//   0xF630A call    sub_37DDE0
//   0xF630F align 10h
//   0xF6310 call    sub_1461A0
//   0xF6315 jmp     loc_F602D
//   0xF631A align 20h
//   0xF6320 mov     rax, cs:under_debugger_ptr
//   0xF6327 cmp     byte ptr [rax], 0
//   0xF632A jnz     loc_34558
//   0xF6330 mov     rax, [rsp+0B8h+var_40]
//   0xF6335 sub     rax, fs:28h
//   0xF633E jnz     loc_F6536
//   0xF6344 mov     edi, 0C3C0h
//   0xF6349 call    sub_37DDE0
//   0xF634E align 10h
//   0xF6350 mov     rdi, [r12+310h]
//   0xF6358 call    sub_144D60
//   0xF635D jmp     loc_F60FC
//   0xF6362 mov     r13, [rsp+0B8h+var_90]
//   0xF6367 cmp     r13, rbp
//   0xF636A jz      loc_F64DF
//   0xF6370 mov     byte ptr [rsp+0B8h+var_AC], 0
//   0xF6375 jmp     short loc_F638C
//   0xF6377 align 20h
//   0xF6380 cmp     r14, rbp
//   0xF6383 jz      loc_F649D
//   0xF6389 mov     r13, r14
//   0xF638C movsxd  rdx, dword ptr [r13+20h]
//   0xF6390 mov     rax, [r12+210h]
//   0xF6398 mov     esi, ebx
//   0xF639A mov     r14, [rax+rdx*8]
//   0xF639E mov     rdi, r14
//   0xF63A1 call    sub_F02A0
//   0xF63A6 mov     r15d, eax
//   0xF63A9 test    eax, eax
//   0xF63AB jz      short loc_F63E3
//   0xF63AD mov     rdi, r13
//   0xF63B0 call    __ZSt18_Rb_tree_incrementPKSt18_Rb_tree_node_base; std::_Rb_tree_increment(std::_Rb_tree_node_base const*)
//   0xF63B5 mov     r14, rax
//   0xF63B8 cmp     r15d, 1
//   0xF63BC jnz     short loc_F6380
//   0xF63BE mov     rsi, rbp
//   0xF63C1 mov     rdi, r13
//   0xF63C4 call    __ZSt28_Rb_tree_rebalance_for_erasePSt18_Rb_tree_node_baseRS_; std::_Rb_tree_rebalance_for_erase(std::_Rb_tree_node_base *,std::_Rb_tree_node_base&)
//   0xF63C9 mov     esi, 28h ; '('; unsigned __int64
//   0xF63CE mov     rdi, rax; void *
//   0xF63D1 call    __ZdlPvm; operator delete(void *,ulong)
//   0xF63D6 sub     [rsp+0B8h+var_80], 1
//   0xF63DC mov     byte ptr [rsp+0B8h+var_AC], 1
//   0xF63E1 jmp     short loc_F6380
//   0xF63E3 mov     rax, [r14+38h]
//   0xF63E7 mov     rax, [rax+18h]
//   0xF63EB mov     rdi, [rsp+0B8h+var_60]
//   0xF63F0 mov     [r12+1E8h], rax
//   0xF63F8 test    rdi, rdi
//   0xF63FB jz      short loc_F640B
//   0xF63FD mov     qword ptr [rsp+0B8h+var_58], 0
//   0xF6406 call    _qfree
//   0xF640B mov     rdi, [rsp+0B8h+var_78]
//   0xF6410 test    rdi, rdi
//   0xF6413 jz      short loc_F6423
//   0xF6415 mov     qword ptr [rsp+0B8h+var_70], 0
//   0xF641E call    _qfree
//   0xF6423 mov     rdi, [rsp+0B8h+var_98]
//   0xF6428 call    sub_F1AD0
//   0xF642D mov     [rsp+0B8h+var_B0], 0FFFFFFFFh
//   0xF6435 mov     rax, [rsp+0B8h+var_40]
//   0xF643A sub     rax, fs:28h
//   0xF6443 jnz     loc_F6502
//   0xF6449 mov     eax, [rsp+0B8h+var_B0]
//   0xF644D add     rsp, 88h
//   0xF6454 pop     rbx
//   0xF6455 pop     rbp
//   0xF6456 pop     r12
//   0xF6458 pop     r13
//   0xF645A pop     r14
//   0xF645C pop     r15
//   0xF645E retn
//   0xF645F or      dword ptr [r12], 1000h
//   0xF6467 mov     rdx, r12
//   0xF646A mov     esi, 12h
//   0xF646F xor     eax, eax
//   0xF6471 mov     rdi, [r12+5D8h]
//   0xF6479 call    sub_338EA0
//   0xF647E jmp     short loc_F6435
//   0xF6480 mov     edi, [rsp+0B8h+var_AC]
//   0xF6484 test    edi, edi
//   0xF6486 jnz     short loc_F64BD
//   0xF6488 mov     rdi, r12
//   0xF648B call    sub_18BE40
//   0xF6490 mov     [rsp+0B8h+var_B0], 0
//   0xF6498 jmp     loc_F6276
//   0xF649D cmp     byte ptr [rsp+0B8h+var_AC], 0
//   0xF64A2 jnz     loc_F6230
//   0xF64A8 mov     rax, [rsp+0B8h+var_90]
//   0xF64AD jmp     short loc_F64E2
//   0xF64AF align 10h
//   0xF64B0 mov     rax, [r15+38h]
//   0xF64B4 mov     rax, [rax+18h]
//   0xF64B8 jmp     loc_F63EB
//   0xF64BD mov     rdi, [r12+310h]
//   0xF64C5 call    sub_144D60
//   0xF64CA mov     rdi, r12
//   0xF64CD call    sub_18BE40
//   0xF64D2 mov     [rsp+0B8h+var_B0], 0
//   0xF64DA jmp     loc_F6276
//   0xF64DF mov     rax, rbp
//   0xF64E2 movsxd  rsi, dword ptr [rax+20h]
//   0xF64E6 mov     edx, 7
//   0xF64EB mov     rdi, r12
//   0xF64EE xor     eax, eax
//   0xF64F0 call    sub_32BE10
//   0xF64F5 test    bl, 4
//   0xF64F8 jz      short loc_F6507
//   0xF64FA and     ebx, 0FFFFFFFBh
//   0xF64FD jmp     loc_F6230
//   0xF6502 call    ___stack_chk_fail
//   0xF6507 mov     rax, cs:under_debugger_ptr
//   0xF650E cmp     byte ptr [rax], 0
//   0xF6511 jnz     loc_34558
//   0xF6517 mov     rax, [rsp+0B8h+var_40]
//   0xF651C sub     rax, fs:28h
//   0xF6525 jnz     short loc_F653B
//   0xF6527 mov     edi, 0C3C1h
//   0xF652C call    sub_37DDE0
//   0xF6531 call    ___stack_chk_fail
//   0xF6536 call    ___stack_chk_fail
//   0xF653B call    ___stack_chk_fail
//   0xF6540 mov     rbx, rax
//   0xF6543 jmp     loc_3455A
// ============================================================

void sub_F6000(/* signature unknown */)
{
    // see disassembly above
}

