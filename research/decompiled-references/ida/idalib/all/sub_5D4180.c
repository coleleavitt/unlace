// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x5D4180
// Name:           sub_5D4180
// Function size:  1638 bytes (406 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x5D4180 push    r15; int
//   0x5D4182 push    r14; __int64
//   0x5D4184 push    r13; int
//   0x5D4186 push    r12; int
//   0x5D4188 lea     r12, [rdi+6A8h]
//   0x5D418F push    rbp; int
//   0x5D4190 push    rbx; int
//   0x5D4191 sub     rsp, 58h
//   0x5D4195 mov     rbx, fs:28h
//   0x5D419E mov     [rsp+88h+var_40], rbx; void *
//   0x5D41A3 mov     rbx, rdi
//   0x5D41A6 mov     rdi, r12
//   0x5D41A9 call    sub_505D70
//   0x5D41AE test    rax, rax
//   0x5D41B1 jz      short loc_5D41BC
//   0x5D41B3 mov     rbp, rax
//   0x5D41B6 test    byte ptr [rax+11h], 80h
//   0x5D41BA jz      short loc_5D41E8
//   0x5D41BC xor     eax, eax
//   0x5D41BE mov     rdx, [rsp+88h+var_40]
//   0x5D41C3 sub     rdx, fs:28h
//   0x5D41CC jnz     loc_5D4792
//   0x5D41D2 add     rsp, 58h
//   0x5D41D6 pop     rbx
//   0x5D41D7 pop     rbp
//   0x5D41D8 pop     r12
//   0x5D41DA pop     r13
//   0x5D41DC pop     r14
//   0x5D41DE pop     r15
//   0x5D41E0 retn
//   0x5D41E1 align 8
//   0x5D41E8 mov     rsi, rax
//   0x5D41EB mov     rdi, r12
//   0x5D41EE call    sub_503EA0
//   0x5D41F3 test    eax, eax
//   0x5D41F5 jg      short loc_5D41BC
//   0x5D41F7 mov     r13, [rbp+0]
//   0x5D41FB mov     rsi, rbp
//   0x5D41FE mov     edi, 24h ; '$'
//   0x5D4203 xor     eax, eax
//   0x5D4205 call    sub_39ADA0
//   0x5D420A mov     rdi, r12
//   0x5D420D mov     rsi, r13
//   0x5D4210 call    sub_505D70
//   0x5D4215 mov     rbp, rax
//   0x5D4218 test    rax, rax
//   0x5D421B jz      loc_5D4613
//   0x5D4221 mov     r13, [rax+58h]
//   0x5D4225 mov     r14, [rax]
//   0x5D4228 test    r13, r13
//   0x5D422B jz      short loc_5D426A
//   0x5D422D mov     edi, [rax+50h]
//   0x5D4230 test    edi, edi
//   0x5D4232 jle     short loc_5D425A
//   0x5D4234 xor     r15d, r15d
//   0x5D4237 nop     word ptr [rax+rax+00000000h]
//   0x5D4240 mov     rdi, r13
//   0x5D4243 add     r15d, 1
//   0x5D4247 add     r13, 28h ; '('
//   0x5D424B call    _free_regvar
//   0x5D4250 cmp     r15d, [rbp+50h]
//   0x5D4254 jl      short loc_5D4240
//   0x5D4256 mov     r13, [rbp+58h]
//   0x5D425A mov     rdi, r13; ptr
//   0x5D425D call    _qfree
//   0x5D4262 mov     qword ptr [rbp+58h], 0
//   0x5D426A mov     r13, [rbp+78h]
//   0x5D426E test    r13, r13
//   0x5D4271 jz      short loc_5D42AA
//   0x5D4273 mov     esi, [rbp+70h]
//   0x5D4276 test    esi, esi
//   0x5D4278 jle     short loc_5D429A
//   0x5D427A xor     r15d, r15d
//   0x5D427D nop     dword ptr [rax]
//   0x5D4280 mov     rdi, r13
//   0x5D4283 add     r15d, 1
//   0x5D4287 add     r13, 18h
//   0x5D428B call    _free_regarg
//   0x5D4290 cmp     r15d, [rbp+70h]
//   0x5D4294 jl      short loc_5D4280
//   0x5D4296 mov     r13, [rbp+78h]
//   0x5D429A mov     rdi, r13; ptr
//   0x5D429D call    _qfree
//   0x5D42A2 mov     qword ptr [rbp+78h], 0
//   0x5D42AA mov     rcx, 0FFFFFFFFFFFFFFFFh
//   0x5D42B1 xor     edx, edx
//   0x5D42B3 mov     rsi, rbp
//   0x5D42B6 mov     rdi, rbx
//   0x5D42B9 call    sub_5BAD80
//   0x5D42BE mov     rsi, rbp
//   0x5D42C1 mov     rdi, rbx
//   0x5D42C4 call    sub_5B9D80
//   0x5D42C9 mov     rsi, r14
//   0x5D42CC mov     rdi, rbx
//   0x5D42CF call    sub_6745B0
//   0x5D42D4 mov     rsi, rbp
//   0x5D42D7 mov     rdi, rbx
//   0x5D42DA call    sub_63F420
//   0x5D42DF mov     eax, [rbp+60h]
//   0x5D42E2 sub     eax, 1
//   0x5D42E5 js      short loc_5D4328
//   0x5D42E7 movsxd  r13, eax
//   0x5D42EA mov     eax, eax
//   0x5D42EC mov     r15, r13
//   0x5D42EF sub     r13, rax
//   0x5D42F2 shl     r15, 4
//   0x5D42F6 shl     r13, 4
//   0x5D42FA nop     word ptr [rax+rax+00h]
//   0x5D4300 mov     rax, [rbp+68h]
//   0x5D4304 mov     ecx, 200h
//   0x5D4309 lea     rdx, byte_22F0C30; src
//   0x5D4310 mov     rdi, rbx; int
//   0x5D4313 mov     rsi, [rax+r15]; int
//   0x5D4317 call    sub_4D7EC0
//   0x5D431C mov     rax, r15
//   0x5D431F sub     r15, 10h
//   0x5D4323 cmp     rax, r13
//   0x5D4326 jnz     short loc_5D4300
//   0x5D4328 mov     rsi, r14
//   0x5D432B mov     rdi, rbx
//   0x5D432E call    sub_673A20
//   0x5D4333 mov     dword ptr [rbp+50h], 0
//   0x5D433A mov     rdx, r14
//   0x5D433D mov     dword ptr [rbp+70h], 0
//   0x5D4344 mov     rax, [rbx]
//   0x5D4347 mov     r13, [rax+650h]
//   0x5D434E mov     r9, [r13+20h]
//   0x5D4352 mov     rdi, [r13+18h]
//   0x5D4356 shl     r9, 4
//   0x5D435A add     r9, rdi
//   0x5D435D mov     rsi, r9
//   0x5D4360 call    sub_5C46C0
//   0x5D4365 mov     r15, rax
//   0x5D4368 lea     rax, [rsp+88h+ptr]
//   0x5D436D mov     [rsp+88h+var_80], rax
//   0x5D4372 cmp     r9, r15
//   0x5D4375 jz      short loc_5D4380
//   0x5D4377 cmp     r14, [r15]
//   0x5D437A jz      loc_5D4688
//   0x5D4380 mov     rdi, [rsp+88h+var_80]
//   0x5D4385 pxor    xmm0, xmm0
//   0x5D4389 mov     rdx, 0FFFFFFFFFFFFFFFFh
//   0x5D4390 mov     rsi, rbp
//   0x5D4393 mov     [rsp+88h+ptr], 0
//   0x5D439C movaps  [rsp+88h+var_60+8], xmm0
//   0x5D43A1 call    _func_tail_iterator_set
//   0x5D43A6 mov     rdi, [rsp+88h+ptr]
//   0x5D43AB test    rdi, rdi
//   0x5D43AE jz      short loc_5D4407
//   0x5D43B0 mov     dword ptr [rsp+88h+var_60], 0
//   0x5D43B8 mov     edx, [rdi+80h]
//   0x5D43BE test    edx, edx
//   0x5D43C0 jle     short loc_5D4400
//   0x5D43C2 mov     rdx, [rdi+88h]
//   0x5D43C9 mov     ecx, 1
//   0x5D43CE mov     rsi, rbp
//   0x5D43D1 mov     rdi, rbx; int
//   0x5D43D4 call    sub_5CE320
//   0x5D43D9 test    al, al
//   0x5D43DB jnz     short loc_5D43A6
//   0x5D43DD mov     rdi, [rsp+88h+ptr]
//   0x5D43E2 test    rdi, rdi
//   0x5D43E5 jz      loc_5D41BC
//   0x5D43EB xor     esi, esi
//   0x5D43ED call    _lock_func_range
//   0x5D43F2 jmp     loc_5D41BC
//   0x5D43F7 align 20h
//   0x5D4400 xor     esi, esi
//   0x5D4402 call    _lock_func_range
//   0x5D4407 mov     rdx, r14
//   0x5D440A mov     esi, 0Bh
//   0x5D440F mov     rdi, rbx
//   0x5D4412 call    sub_4F2FE0
//   0x5D4417 mov     rsi, rbp
//   0x5D441A mov     rdi, rbx
//   0x5D441D call    sub_5B7950
//   0x5D4422 mov     rsi, r14
//   0x5D4425 mov     rdi, rbx
//   0x5D4428 call    sub_3BDD60
//   0x5D442D mov     rsi, [rbx]
//   0x5D4430 mov     rdi, [rsp+88h+var_80]
//   0x5D4435 mov     ecx, 53h ; 'S'
//   0x5D443A mov     edx, 7000h
//   0x5D443F mov     [rsp+88h+ptr], rax
//   0x5D4444 call    sub_7BEF80
//   0x5D4449 mov     edx, 4
//   0x5D444E mov     rsi, r14
//   0x5D4451 mov     rdi, rbx
//   0x5D4454 call    sub_3BE900
//   0x5D4459 not     rax
//   0x5D445C test    ah, 6
//   0x5D445F jz      loc_5D4670
//   0x5D4465 mov     [rsp+88h+ptr], 0
//   0x5D446E pxor    xmm0, xmm0
//   0x5D4472 movups  [rsp+88h+var_60], xmm0
//   0x5D4477 call    _get_merge_state
//   0x5D447C test    al, 2
//   0x5D447E jz      loc_5D4620
//   0x5D4484 mov     edx, 1
//   0x5D4489 mov     rsi, r14
//   0x5D448C mov     rdi, r12
//   0x5D448F call    sub_505AA0
//   0x5D4494 test    al, al
//   0x5D4496 jz      loc_5D4797
//   0x5D449C mov     rdi, [rbx]
//   0x5D449F mov     rsi, r14
//   0x5D44A2 call    sub_4E15D0
//   0x5D44A7 mov     rdx, r14
//   0x5D44AA xor     esi, esi
//   0x5D44AC mov     edi, 1
//   0x5D44B1 xor     eax, eax
//   0x5D44B3 call    sub_52CCE0
//   0x5D44B8 mov     ecx, 1
//   0x5D44BD xor     edx, edx
//   0x5D44BF mov     rdi, rbx
//   0x5D44C2 mov     rsi, 4000000008000008h
//   0x5D44CC call    sub_652960
//   0x5D44D1 mov     esi, 1
//   0x5D44D6 mov     rdi, rbx
//   0x5D44D9 call    sub_433DB0
//   0x5D44DE mov     rbp, rax
//   0x5D44E1 test    rax, rax
//   0x5D44E4 jz      loc_5D45EC
//   0x5D44EA mov     rsi, r14
//   0x5D44ED mov     rdi, rbx
//   0x5D44F0 call    sub_3BDD60
//   0x5D44F5 mov     r12, [rbp+8]
//   0x5D44F9 mov     rbx, rax
//   0x5D44FC test    r12, r12
//   0x5D44FF jz      loc_2C904C
//   0x5D4505 mov     r13, cs:__pthread_key_create_ptr
//   0x5D450C test    r13, r13
//   0x5D450F jz      short loc_5D4522
//   0x5D4511 mov     rdi, r12; rwlock
//   0x5D4514 call    _pthread_rwlock_wrlock
//   0x5D4519 cmp     eax, 23h ; '#'
//   0x5D451C jz      loc_2C90B0
//   0x5D4522 mov     rsi, rbx
//   0x5D4525 lea     rdi, [rbp+38h]
//   0x5D4529 call    sub_5C4B20
//   0x5D452E mov     rbx, rax
//   0x5D4531 test    rax, rax
//   0x5D4534 jz      loc_5D45DF
//   0x5D453A mov     r15d, [rax+10h]
//   0x5D453E mov     rax, [rbp+0]
//   0x5D4542 mov     rdi, rbp
//   0x5D4545 mov     esi, r15d
//   0x5D4548 call    qword ptr [rax+30h]
//   0x5D454B mov     [rsp+88h+var_6C], r15d
//   0x5D4550 mov     rax, [rbp+20h]
//   0x5D4554 cmp     rax, [rbp+28h]
//   0x5D4558 jz      loc_5D46F3
//   0x5D455E mov     [rax], r15d
//   0x5D4561 add     qword ptr [rbp+20h], 4
//   0x5D4566 mov     rsi, [rbp+40h]
//   0x5D456A mov     rax, [rbx+8]
//   0x5D456E xor     edx, edx
//   0x5D4570 mov     r9, [rbp+38h]
//   0x5D4574 div     rsi
//   0x5D4577 lea     r10, [r9+rdx*8]
//   0x5D457B mov     r8, rdx
//   0x5D457E mov     rdx, [r10]
//   0x5D4581 mov     rax, rdx
//   0x5D4584 nop     word ptr [rax+rax+00000000h]
//   0x5D458F nop
//   0x5D4590 mov     rcx, rax
//   0x5D4593 mov     rax, [rax]
//   0x5D4596 cmp     rbx, rax
//   0x5D4599 jnz     short loc_5D4590
//   0x5D459B mov     rdi, [rbx]
//   0x5D459E cmp     rdx, rcx
//   0x5D45A1 jz      loc_5D46C0
//   0x5D45A7 test    rdi, rdi
//   0x5D45AA jz      short loc_5D45C1
//   0x5D45AC mov     rax, [rdi+8]
//   0x5D45B0 xor     edx, edx
//   0x5D45B2 div     rsi
//   0x5D45B5 cmp     r8, rdx
//   0x5D45B8 jz      short loc_5D45C1
//   0x5D45BA mov     [r9+rdx*8], rcx
//   0x5D45BE mov     rdi, [rbx]
//   0x5D45C1 mov     [rcx], rdi
//   0x5D45C4 mov     esi, 18h; unsigned __int64
//   0x5D45C9 mov     rdi, rbx; void *
//   0x5D45CC call    __ZdlPvm; operator delete(void *,ulong)
//   0x5D45D1 mov     rax, [rbp+8]
//   0x5D45D5 sub     qword ptr [rbp+50h], 1
//   0x5D45DA add     qword ptr [rax+38h], 1
//   0x5D45DF test    r13, r13
//   0x5D45E2 jz      short loc_5D45EC
//   0x5D45E4 mov     rdi, r12; rwlock
//   0x5D45E7 call    _pthread_rwlock_unlock
//   0x5D45EC mov     rsi, r14
//   0x5D45EF mov     edi, 40h ; '@'
//   0x5D45F4 xor     eax, eax
//   0x5D45F6 call    sub_39ADA0
//   0x5D45FB mov     rdi, [rsp+88h+ptr]; ptr
//   0x5D4600 test    rdi, rdi
//   0x5D4603 jz      short loc_5D4613
//   0x5D4605 mov     qword ptr [rsp+88h+var_60], 0
//   0x5D460E call    _qfree
//   0x5D4613 mov     eax, 1
//   0x5D4618 jmp     loc_5D41BE
//   0x5D461D align 20h
//   0x5D4620 mov     rdi, [rsp+88h+var_80]
//   0x5D4625 mov     ecx, 1
//   0x5D462A mov     rdx, rbp
//   0x5D462D mov     rsi, r12
//   0x5D4630 call    sub_504090
//   0x5D4635 test    rax, rax
//   0x5D4638 jle     short loc_5D465F
//   0x5D463A cmp     qword ptr [rsp+88h+var_60], 0
//   0x5D4640 lea     rdx, haystack
//   0x5D4647 jz      short loc_5D464E
//   0x5D4649 mov     rdx, [rsp+88h+ptr]
//   0x5D464E mov     rsi, [rbp+0]
//   0x5D4652 mov     ecx, 1
//   0x5D4657 mov     rdi, rbx
//   0x5D465A call    sub_3D0F60
//   0x5D465F mov     rsi, rbp
//   0x5D4662 mov     rdi, rbx
//   0x5D4665 call    sub_4D0B20
//   0x5D466A jmp     loc_5D4484
//   0x5D466F align 10h
//   0x5D4670 mov     rdi, [rbx]
//   0x5D4673 mov     edx, 10000000h
//   0x5D4678 mov     rsi, r14
//   0x5D467B call    sub_3D0110
//   0x5D4680 jmp     loc_5D4465
//   0x5D4685 align 8
//   0x5D4688 call    _must_journal
//   0x5D468D test    al, al
//   0x5D468F jnz     short loc_5D4706
//   0x5D4691 mov     rdx, [r13+20h]
//   0x5D4695 lea     rsi, [r15+10h]; src
//   0x5D4699 mov     rdi, r15; dest
//   0x5D469C shl     rdx, 4
//   0x5D46A0 add     rdx, [r13+18h]
//   0x5D46A4 sub     rdx, r15
//   0x5D46A7 sub     rdx, 10h; n
//   0x5D46AB call    _memmove
//   0x5D46B0 sub     qword ptr [r13+20h], 1
//   0x5D46B5 jmp     loc_5D4380
//   0x5D46BA align 20h
//   0x5D46C0 test    rdi, rdi
//   0x5D46C3 jz      loc_5D4783
//   0x5D46C9 mov     rax, [rdi+8]
//   0x5D46CD xor     edx, edx
//   0x5D46CF div     rsi
//   0x5D46D2 cmp     r8, rdx
//   0x5D46D5 jz      loc_5D45C1
//   0x5D46DB mov     [r9+rdx*8], rcx
//   0x5D46DF mov     rax, [rbp+38h]
//   0x5D46E3 mov     qword ptr [rax+r8*8], 0
//   0x5D46EB mov     rdi, [rbx]
//   0x5D46EE jmp     loc_5D45C1
//   0x5D46F3 lea     rsi, [rsp+88h+var_6C]
//   0x5D46F8 lea     rdi, [rbp+18h]
//   0x5D46FC call    sub_434780
//   0x5D4701 jmp     loc_5D4566
//   0x5D4706 mov     rdi, [rsp+88h+var_80]
//   0x5D470B pxor    xmm0, xmm0
//   0x5D470F mov     ecx, 1
//   0x5D4714 xor     esi, esi
//   0x5D4716 mov     edx, 1
//   0x5D471B movups  [rsp+88h+var_60], xmm0
//   0x5D4720 mov     [rsp+88h+ptr], 0
//   0x5D4729 call    _qvector_reserve
//   0x5D472E mov     rdx, qword ptr [rsp+88h+var_60]
//   0x5D4733 mov     rdi, [rsp+88h+var_80]
//   0x5D4738 mov     [rsp+88h+ptr], rax
//   0x5D473D mov     rsi, r14
//   0x5D4740 mov     byte ptr [rax+rdx], 1
//   0x5D4744 add     qword ptr [rsp+88h+var_60], 1
//   0x5D474A call    sub_40D2A0
//   0x5D474F mov     edi, [r13+30h]
//   0x5D4753 mov     rdx, qword ptr [rsp+88h+var_60]
//   0x5D4758 mov     rsi, [rsp+88h+ptr]
//   0x5D475D call    _add_undo_record
//   0x5D4762 mov     rdi, [rsp+88h+ptr]; ptr
//   0x5D4767 test    rdi, rdi
//   0x5D476A jz      loc_5D4691
//   0x5D4770 mov     qword ptr [rsp+88h+var_60], 0
//   0x5D4779 call    _qfree
//   0x5D477E jmp     loc_5D4691
//   0x5D4783 mov     qword ptr [r10], 0
//   0x5D478A mov     rdi, [rbx]
//   0x5D478D jmp     loc_5D45C1
//   0x5D4792 call    ___stack_chk_fail
//   0x5D4797 mov     rax, cs:under_debugger_ptr
//   0x5D479E cmp     byte ptr [rax], 0
//   0x5D47A1 jnz     loc_2C904A
//   0x5D47A7 mov     rax, [rsp+88h+var_40]
//   0x5D47AC sub     rax, fs:28h
//   0x5D47B5 jnz     short loc_5D47C1
//   0x5D47B7 mov     edi, 4Dh ; 'M'
//   0x5D47BC call    _interr
//   0x5D47C1 call    ___stack_chk_fail
//   0x5D47C6 mov     rbx, rax
//   0x5D47C9 jmp     loc_2C9066
//   0x5D47CE mov     rbx, rax
//   0x5D47D1 jmp     loc_2C9073
//   0x5D47D6 mov     rbx, rax
//   0x5D47D9 jmp     loc_2C90CF
//   0x5D47DE mov     rbx, rax
//   0x5D47E1 jmp     loc_2C90F1
// ============================================================

void sub_5D4180(/* signature unknown */)
{
    // see disassembly above
}

