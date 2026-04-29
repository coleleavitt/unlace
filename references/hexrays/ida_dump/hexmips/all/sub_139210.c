// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x139210
// Name:           sub_139210
// Function size:  562 bytes (132 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x139210 push    r15
//   0x139212 push    r14
//   0x139214 push    r13
//   0x139216 push    r12
//   0x139218 push    rbp
//   0x139219 mov     rbp, rsi
//   0x13921C push    rbx
//   0x13921D mov     rbx, rdi
//   0x139220 sub     rsp, 98h
//   0x139227 mov     rax, [rdi+5D8h]
//   0x13922E mov     r12, fs:28h
//   0x139237 mov     [rsp+0C8h+var_40], r12
//   0x13923F mov     r12d, edx
//   0x139242 mov     [rax+540h], rdi
//   0x139249 mov     rax, [rdi+5D8h]
//   0x139250 mov     qword ptr [rax+548h], 0
//   0x13925B call    sub_1AA9C0
//   0x139260 mov     rsi, rbp
//   0x139263 mov     edx, r12d
//   0x139266 mov     rdi, rbx
//   0x139269 call    sub_36E200
//   0x13926E mov     ebp, eax
//   0x139270 test    eax, eax
//   0x139272 jz      short loc_1392A0
//   0x139274 mov     rax, [rsp+0C8h+var_40]
//   0x13927C sub     rax, fs:28h
//   0x139285 jnz     loc_139435
//   0x13928B add     rsp, 98h
//   0x139292 mov     eax, ebp
//   0x139294 pop     rbx
//   0x139295 pop     rbp
//   0x139296 pop     r12
//   0x139298 pop     r13
//   0x13929A pop     r14
//   0x13929C pop     r15
//   0x13929E retn
//   0x13929F align 20h
//   0x1392A0 lea     r15, [rsp+0C8h+var_B8]
//   0x1392A5 lea     r14, [rsp+0C8h+var_A8]
//   0x1392AA mov     ecx, r12d
//   0x1392AD mov     rdi, rbx
//   0x1392B0 pxor    xmm0, xmm0
//   0x1392B4 mov     rdx, r15
//   0x1392B7 mov     rsi, r14
//   0x1392BA mov     [rsp+0C8h+var_A0], 0
//   0x1392BF lea     r13, off_4BE158
//   0x1392C6 movups  [rsp+0C8h+var_90], xmm0
//   0x1392CB mov     [rsp+0C8h+var_A8], r13
//   0x1392D0 mov     [rsp+0C8h+var_98], 0
//   0x1392D9 mov     [rsp+0C8h+var_70], 0
//   0x1392E2 mov     [rsp+0C8h+var_60], 0
//   0x1392EB mov     [rsp+0C8h+var_48], 0
//   0x1392F6 mov     [rsp+0C8h+var_68], 40h ; '@'
//   0x1392FE mov     [rsp+0C8h+var_B8], 0
//   0x139307 mov     [rsp+0C8h+var_B0], 0
//   0x139310 movups  [rsp+0C8h+var_80], xmm0
//   0x139315 movaps  [rsp+0C8h+var_58], xmm0
//   0x13931A call    sub_1D1D40
//   0x13931F mov     ebp, eax
//   0x139321 test    eax, eax
//   0x139323 jz      loc_1393C8
//   0x139329 mov     rdi, [rsp+0C8h+var_B8]
//   0x13932E call    _qfree
//   0x139333 mov     rdi, [rsp+0C8h+var_60]
//   0x139338 mov     [rsp+0C8h+var_A8], r13
//   0x13933D test    rdi, rdi
//   0x139340 jz      short loc_1393A3
//   0x139342 mov     r13, qword ptr [rsp+0C8h+var_58]
//   0x139347 test    r13, r13
//   0x13934A jz      short loc_139395
//   0x13934C xor     r12d, r12d
//   0x13934F nop
//   0x139350 mov     rax, r12
//   0x139353 shl     rax, 6
//   0x139357 lea     rbx, [rdi+rax]
//   0x13935B mov     rdi, [rbx+28h]
//   0x13935F test    rdi, rdi
//   0x139362 jz      short loc_139371
//   0x139364 mov     qword ptr [rbx+30h], 0
//   0x13936C call    _qfree
//   0x139371 mov     rdi, [rbx+10h]
//   0x139375 test    rdi, rdi
//   0x139378 jz      short loc_139387
//   0x13937A mov     qword ptr [rbx+18h], 0
//   0x139382 call    _qfree
//   0x139387 add     r12, 1
//   0x13938B mov     rdi, [rsp+0C8h+var_60]
//   0x139390 cmp     r13, r12
//   0x139393 jnz     short loc_139350
//   0x139395 mov     qword ptr [rsp+0C8h+var_58], 0
//   0x13939E call    _qfree
//   0x1393A3 mov     rdi, [rsp+0C8h+var_98]
//   0x1393A8 test    rdi, rdi
//   0x1393AB jz      loc_139274
//   0x1393B1 mov     qword ptr [rsp+0C8h+var_90], 0
//   0x1393BA call    _qfree
//   0x1393BF jmp     loc_139274
//   0x1393C4 align 8
//   0x1393C8 mov     rdx, r15
//   0x1393CB mov     rsi, r14
//   0x1393CE mov     rdi, rbx
//   0x1393D1 call    sub_37C300
//   0x1393D6 mov     ebp, eax
//   0x1393D8 test    eax, eax
//   0x1393DA jnz     loc_139329
//   0x1393E0 mov     rdi, [rbx+5E0h]
//   0x1393E7 mov     rsi, rbx
//   0x1393EA mov     rax, [rdi]
//   0x1393ED call    qword ptr [rax+10h]
//   0x1393F0 mov     rsi, rax
//   0x1393F3 mov     r8d, r12d
//   0x1393F6 mov     rcx, r15
//   0x1393F9 mov     rdx, r14
//   0x1393FC mov     rdi, rbx
//   0x1393FF mov     [rsp+0C8h+var_C0], rax
//   0x139404 call    sub_1DA920
//   0x139409 mov     rsi, [rsp+0C8h+var_C0]
//   0x13940E mov     ebp, eax
//   0x139410 test    rsi, rsi
//   0x139413 jz      short loc_13941E
//   0x139415 mov     rax, [rsi]
//   0x139418 mov     rdi, rsi
//   0x13941B call    qword ptr [rax+8]
//   0x13941E test    ebp, ebp
//   0x139420 jnz     loc_139329
//   0x139426 mov     rdi, rbx
//   0x139429 call    sub_1340E0
//   0x13942E mov     ebp, eax
//   0x139430 jmp     loc_139329
//   0x139435 call    ___stack_chk_fail
//   0x13943A mov     rbx, rax
//   0x13943D jmp     loc_38392
// ============================================================

void sub_139210(/* signature unknown */)
{
    // see disassembly above
}

