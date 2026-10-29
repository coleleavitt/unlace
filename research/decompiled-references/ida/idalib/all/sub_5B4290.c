// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x5B4290
// Name:           sub_5B4290
// Function size:  617 bytes (158 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x5B4290 push    r15; int
//   0x5B4292 push    r14; int
//   0x5B4294 mov     r14, rcx
//   0x5B4297 push    r13; int
//   0x5B4299 push    r12; int
//   0x5B429B mov     r12, rsi
//   0x5B429E mov     rsi, rdx
//   0x5B42A1 push    rbp; __int64
//   0x5B42A2 mov     rbp, rdx
//   0x5B42A5 push    rbx; void *
//   0x5B42A6 mov     rbx, rdi
//   0x5B42A9 add     rdi, 658h
//   0x5B42B0 sub     rsp, 48h
//   0x5B42B4 mov     [rsp+78h+var_6C], r8d
//   0x5B42B9 mov     r13, fs:28h
//   0x5B42C2 mov     qword ptr [rsp+78h+var_40], r13; int
//   0x5B42C7 mov     r13d, r9d
//   0x5B42CA call    sub_505D70
//   0x5B42CF test    rax, rax
//   0x5B42D2 jz      short loc_5B42E5
//   0x5B42D4 movzx   eax, word ptr [rax+2Ch]
//   0x5B42D8 and     eax, 18h
//   0x5B42DB cmp     ax, 8
//   0x5B42DF jz      loc_5B4430
//   0x5B42E5 xor     esi, esi
//   0x5B42E7 mov     rdi, rbp
//   0x5B42EA lea     r15, [rbx+998h]
//   0x5B42F1 call    _show_auto
//   0x5B42F6 mov     rsi, [rbx]
//   0x5B42F9 mov     rdi, r15
//   0x5B42FC mov     ecx, 41h ; 'A'
//   0x5B4301 mov     rdx, r12
//   0x5B4304 call    sub_7BE710
//   0x5B4309 mov     rdi, rbx
//   0x5B430C lea     rsi, [rax-1]
//   0x5B4310 call    sub_3BDE50
//   0x5B4315 cmp     rax, 0FFFFFFFFFFFFFFFFh
//   0x5B4319 jz      loc_5B4438
//   0x5B431F test    r14, r14
//   0x5B4322 jz      loc_5B43C5
//   0x5B4328 pxor    xmm0, xmm0
//   0x5B432C lea     rdi, [rsp+78h+ptr]
//   0x5B4331 mov     edx, r13d
//   0x5B4334 mov     rsi, r14
//   0x5B4337 mov     [rsp+78h+ptr], 0; int
//   0x5B4340 movups  xmmword ptr [rsp+78h+var_50], xmm0; ptr
//   0x5B4345 call    sub_5B38F0
//   0x5B434A mov     rsi, [rbx]
//   0x5B434D mov     r9d, 53h ; 'S'
//   0x5B4353 xor     r8d, r8d
//   0x5B4356 mov     rcx, rax
//   0x5B4359 mov     rdx, r12
//   0x5B435C mov     rdi, r15
//   0x5B435F mov     r14, rax
//   0x5B4362 call    sub_7BE7C0
//   0x5B4367 call    _get_merge_state
//   0x5B436C and     eax, 2
//   0x5B436F mov     rdx, r14; src
//   0x5B4372 mov     rsi, rbp; int
//   0x5B4375 mov     rdi, rbx; int
//   0x5B4378 cmp     eax, 1
//   0x5B437B mov     eax, r13d
//   0x5B437E sbb     ecx, ecx
//   0x5B4380 and     eax, 4
//   0x5B4383 and     ecx, 4000h
//   0x5B4389 add     ecx, 2
//   0x5B438C cmp     eax, 1
//   0x5B438F sbb     eax, eax
//   0x5B4391 and     eax, 8
//   0x5B4394 add     eax, 8
//   0x5B4397 or      ecx, eax
//   0x5B4399 mov     eax, ecx
//   0x5B439B or      ah, 80h
//   0x5B439E and     r13d, 8
//   0x5B43A2 cmovz   ecx, eax
//   0x5B43A5 or      ch, 18h
//   0x5B43A8 call    sub_4D7EC0
//   0x5B43AD mov     rdi, [rsp+78h+ptr]; ptr
//   0x5B43B2 test    rdi, rdi
//   0x5B43B5 jz      short loc_5B43C5
//   0x5B43B7 mov     [rsp+78h+var_50], 0
//   0x5B43C0 call    _qfree
//   0x5B43C5 cmp     byte ptr [rsp+78h+var_6C], 0
//   0x5B43CA jnz     short loc_5B4408
//   0x5B43CC mov     edx, 1
//   0x5B43D1 mov     edi, 1
//   0x5B43D6 xor     esi, esi
//   0x5B43D8 call    _mark_builtin_widgets
//   0x5B43DD mov     eax, 1
//   0x5B43E2 mov     rdx, qword ptr [rsp+78h+var_40]
//   0x5B43E7 sub     rdx, fs:28h
//   0x5B43F0 jnz     loc_5B44EC
//   0x5B43F6 add     rsp, 48h
//   0x5B43FA pop     rbx
//   0x5B43FB pop     rbp
//   0x5B43FC pop     r12
//   0x5B43FE pop     r13
//   0x5B4400 pop     r14
//   0x5B4402 pop     r15
//   0x5B4404 retn
//   0x5B4405 align 8
//   0x5B4408 lea     rbx, [rbp+1]
//   0x5B440C mov     rdi, rbp
//   0x5B440F mov     edx, 14h
//   0x5B4414 mov     rsi, rbx
//   0x5B4417 call    _auto_mark_range
//   0x5B441C mov     edx, 1Eh
//   0x5B4421 mov     rsi, rbx
//   0x5B4424 mov     rdi, rbp
//   0x5B4427 call    _auto_mark_range
//   0x5B442C jmp     short loc_5B43CC
//   0x5B442E align 10h
//   0x5B4430 xor     eax, eax
//   0x5B4432 jmp     short loc_5B43E2
//   0x5B4434 align 8
//   0x5B4438 mov     rsi, [rbx]
//   0x5B443B mov     rdi, r15
//   0x5B443E mov     ecx, 41h ; 'A'
//   0x5B4443 mov     rdx, 0FFFFFFFFFFFFFFFFh
//   0x5B444A call    sub_7BE710
//   0x5B444F mov     rsi, [rbx]
//   0x5B4452 mov     rdi, r15
//   0x5B4455 mov     [rsp+78h+ptr], r12
//   0x5B445A movsxd  r10, eax
//   0x5B445D lea     rax, [rsp+78h+ptr]
//   0x5B4462 mov     r9d, 49h ; 'I'
//   0x5B4468 mov     r8d, 8
//   0x5B446E add     r10, 1
//   0x5B4472 mov     rcx, rax
//   0x5B4475 mov     [rsp+78h+var_68], rax
//   0x5B447A mov     rdx, r10
//   0x5B447D mov     [rsp+78h+var_60], r10
//   0x5B4482 call    sub_7BE7C0
//   0x5B4487 mov     rsi, rbp
//   0x5B448A mov     rdi, rbx
//   0x5B448D call    sub_3BDD60
//   0x5B4492 mov     rsi, [rbx]
//   0x5B4495 mov     rcx, [rsp+78h+var_68]
//   0x5B449A mov     rdx, r12
//   0x5B449D add     rax, 1
//   0x5B44A1 mov     rdi, r15
//   0x5B44A4 mov     r9d, 41h ; 'A'
//   0x5B44AA mov     r8d, 8
//   0x5B44B0 mov     [rsp+78h+ptr], rax
//   0x5B44B5 call    sub_7BE7C0
//   0x5B44BA mov     r10, [rsp+78h+var_60]
//   0x5B44BF mov     rsi, [rbx]
//   0x5B44C2 mov     rdi, r15
//   0x5B44C5 mov     rcx, [rsp+78h+var_68]
//   0x5B44CA mov     r9d, 41h ; 'A'
//   0x5B44D0 mov     r8d, 8
//   0x5B44D6 mov     rdx, 0FFFFFFFFFFFFFFFFh
//   0x5B44DD mov     [rsp+78h+ptr], r10
//   0x5B44E2 call    sub_7BE7C0
//   0x5B44E7 jmp     loc_5B431F
//   0x5B44EC call    ___stack_chk_fail
//   0x5B44F1 mov     rbx, rax
//   0x5B44F4 jmp     loc_2C7DD2
// ============================================================

void sub_5B4290(/* signature unknown */)
{
    // see disassembly above
}

