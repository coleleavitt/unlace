// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x19AC00
// Name:           sub_19AC00
// Function size:  444 bytes (103 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x19AC00 push    r13
//   0x19AC02 push    r12
//   0x19AC04 push    rbp
//   0x19AC05 lea     rbp, aBreakpoints+1; "Breakpoints"
//   0x19AC0C push    rbx
//   0x19AC0D sub     rsp, 78h
//   0x19AC11 mov     r12, fs:28h
//   0x19AC1A mov     [rsp+98h+var_30], r12
//   0x19AC1F mov     r12, rdi
//   0x19AC22 mov     rdi, rbp
//   0x19AC25 call    sub_2DC6E0
//   0x19AC2A lea     rdi, off_8809A0; this
//   0x19AC31 mov     rsi, rax; QT::QObject *
//   0x19AC34 call    __ZNK2QT11QMetaObject4castEPKNS_7QObjectE; QT::QMetaObject::cast(QT::QObject const*)
//   0x19AC39 test    rax, rax
//   0x19AC3C jz      short loc_19AC90
//   0x19AC3E mov     rsi, r12
//   0x19AC41 mov     rdi, rax
//   0x19AC44 mov     rbx, rax
//   0x19AC47 call    sub_19F840
//   0x19AC4C mov     rax, cs:_ZN2QT16QCoreApplication4selfE_ptr
//   0x19AC53 mov     edx, 1
//   0x19AC58 mov     rsi, rbx
//   0x19AC5B mov     rdi, [rax]
//   0x19AC5E add     rdi, 10h
//   0x19AC62 call    sub_479090
//   0x19AC67 mov     eax, 1
//   0x19AC6C mov     rdx, [rsp+98h+var_30]
//   0x19AC71 sub     rdx, fs:28h
//   0x19AC7A jnz     loc_19ADAF
//   0x19AC80 add     rsp, 78h
//   0x19AC84 pop     rbx
//   0x19AC85 pop     rbp
//   0x19AC86 pop     r12
//   0x19AC88 pop     r13
//   0x19AC8A retn
//   0x19AC8B align 10h
//   0x19AC90 mov     rsi, r12
//   0x19AC93 mov     rdi, rbp
//   0x19AC96 call    sub_19F9B0
//   0x19AC9B mov     rdi, rax
//   0x19AC9E call    sub_2DBE50
//   0x19ACA3 mov     rsi, rax
//   0x19ACA6 test    rax, rax
//   0x19ACA9 jz      loc_19ADA8
//   0x19ACAF mov     rax, cs:_ZN2QT16QCoreApplication4selfE_ptr
//   0x19ACB6 pxor    xmm0, xmm0
//   0x19ACBA mov     rdx, rsp
//   0x19ACBD movdqa  xmm1, cs:xmmword_5DC310
//   0x19ACC5 mov     [rsp+98h+var_80], 0
//   0x19ACCE mov     rax, [rax]
//   0x19ACD1 mov     [rsp+98h+var_40], 400004h
//   0x19ACD9 mov     [rsp+98h+var_48], 0
//   0x19ACE2 movups  [rsp+98h+var_90], xmm0
//   0x19ACE7 lea     rdi, [rax+10h]
//   0x19ACEB movaps  [rsp+98h+var_78], xmm0
//   0x19ACF0 movaps  [rsp+98h+var_68], xmm1
//   0x19ACF5 movaps  xmmword ptr [rsp+98h+ptr], xmm0
//   0x19ACFA mov     rax, [rax+10h]
//   0x19ACFE mov     [rsp+98h+var_98], 0
//   0x19AD06 call    qword ptr [rax+78h]
//   0x19AD09 mov     rax, [rsp+98h+ptr]
//   0x19AD0E test    rax, rax
//   0x19AD11 jz      short loc_19AD23
//   0x19AD13 lock sub dword ptr [rax], 1
//   0x19AD17 jnz     short loc_19AD23
//   0x19AD19 mov     rdi, [rsp+98h+ptr]; ptr
//   0x19AD1E call    _free
//   0x19AD23 mov     rdi, [rsp+98h+var_80]
//   0x19AD28 test    rdi, rdi
//   0x19AD2B jz      short loc_19AD83
//   0x19AD2D mov     r12, qword ptr [rsp+98h+var_78]
//   0x19AD32 test    r12, r12
//   0x19AD35 jz      short loc_19AD75
//   0x19AD37 xor     ebx, ebx
//   0x19AD39 nop     dword ptr [rax+00000000h]
//   0x19AD40 lea     rax, [rbx+rbx*4]
//   0x19AD44 lea     rbp, [rdi+rax*8]
//   0x19AD48 lea     rdi, [rbp+18h]
//   0x19AD4C call    _jvalue_t_clear
//   0x19AD51 mov     rdi, [rbp+0]
//   0x19AD55 test    rdi, rdi
//   0x19AD58 jz      short loc_19AD67
//   0x19AD5A mov     qword ptr [rbp+8], 0
//   0x19AD62 call    _qfree
//   0x19AD67 add     rbx, 1
//   0x19AD6B mov     rdi, [rsp+98h+var_80]
//   0x19AD70 cmp     r12, rbx
//   0x19AD73 jnz     short loc_19AD40
//   0x19AD75 mov     qword ptr [rsp+98h+var_78], 0
//   0x19AD7E call    _qfree
//   0x19AD83 mov     rdi, [rsp+98h+var_98]
//   0x19AD87 test    rdi, rdi
//   0x19AD8A jz      loc_19AC67
//   0x19AD90 mov     qword ptr [rsp+98h+var_90], 0
//   0x19AD99 call    _qfree
//   0x19AD9E jmp     loc_19AC67
//   0x19ADA3 align 8
//   0x19ADA8 xor     eax, eax
//   0x19ADAA jmp     loc_19AC6C
//   0x19ADAF call    ___stack_chk_fail
//   0x19ADB4 mov     r12, rax
//   0x19ADB7 jmp     loc_11F921
// ============================================================

void sub_19AC00(/* signature unknown */)
{
    // see disassembly above
}

