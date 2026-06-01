// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x33DBC0
// Name:           sub_33DBC0
// Function size:  444 bytes (104 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x33DBC0 push    r13
//   0x33DBC2 push    r12
//   0x33DBC4 push    rbp
//   0x33DBC5 lea     rbp, aNames+1; "Names"
//   0x33DBCC push    rbx
//   0x33DBCD sub     rsp, 78h
//   0x33DBD1 mov     r12, fs:28h
//   0x33DBDA mov     [rsp+98h+var_30], r12
//   0x33DBDF mov     r12, rdi
//   0x33DBE2 mov     rdi, rbp
//   0x33DBE5 call    sub_2DC6E0
//   0x33DBEA lea     rdi, off_88C300; this
//   0x33DBF1 mov     rsi, rax; QT::QObject *
//   0x33DBF4 call    __ZNK2QT11QMetaObject4castEPKNS_7QObjectE; QT::QMetaObject::cast(QT::QObject const*)
//   0x33DBF9 test    rax, rax
//   0x33DBFC jz      short loc_33DC50
//   0x33DBFE mov     rsi, r12
//   0x33DC01 mov     rdi, rax
//   0x33DC04 mov     rbx, rax
//   0x33DC07 call    sub_33E030
//   0x33DC0C mov     rax, cs:_ZN2QT16QCoreApplication4selfE_ptr
//   0x33DC13 mov     edx, 1
//   0x33DC18 mov     rsi, rbx
//   0x33DC1B mov     rdi, [rax]
//   0x33DC1E add     rdi, 10h
//   0x33DC22 call    sub_479090
//   0x33DC27 mov     eax, 1
//   0x33DC2C mov     rdx, [rsp+98h+var_30]
//   0x33DC31 sub     rdx, fs:28h
//   0x33DC3A jnz     loc_33DD6F
//   0x33DC40 add     rsp, 78h
//   0x33DC44 pop     rbx
//   0x33DC45 pop     rbp
//   0x33DC46 pop     r12
//   0x33DC48 pop     r13
//   0x33DC4A retn
//   0x33DC4B align 10h
//   0x33DC50 mov     esi, 2
//   0x33DC55 mov     rdx, r12
//   0x33DC58 mov     rdi, rbp
//   0x33DC5B call    sub_33E280
//   0x33DC60 mov     rdi, rax
//   0x33DC63 call    sub_2DBE50
//   0x33DC68 mov     rsi, rax
//   0x33DC6B test    rax, rax
//   0x33DC6E jz      loc_33DD68
//   0x33DC74 mov     rax, cs:_ZN2QT16QCoreApplication4selfE_ptr
//   0x33DC7B pxor    xmm0, xmm0
//   0x33DC7F mov     rdx, rsp
//   0x33DC82 movdqa  xmm1, cs:xmmword_5DC310
//   0x33DC8A mov     [rsp+98h+var_80], 0
//   0x33DC93 mov     rax, [rax]
//   0x33DC96 mov     [rsp+98h+var_40], 400004h
//   0x33DC9E mov     [rsp+98h+var_48], 0
//   0x33DCA7 movups  [rsp+98h+var_90], xmm0
//   0x33DCAC lea     rdi, [rax+10h]
//   0x33DCB0 movaps  [rsp+98h+var_78], xmm0
//   0x33DCB5 movaps  [rsp+98h+var_68], xmm1
//   0x33DCBA movaps  xmmword ptr [rsp+98h+ptr], xmm0
//   0x33DCBF mov     rax, [rax+10h]
//   0x33DCC3 mov     [rsp+98h+var_98], 0
//   0x33DCCB call    qword ptr [rax+78h]
//   0x33DCCE mov     rax, [rsp+98h+ptr]
//   0x33DCD3 test    rax, rax
//   0x33DCD6 jz      short loc_33DCE8
//   0x33DCD8 lock sub dword ptr [rax], 1
//   0x33DCDC jnz     short loc_33DCE8
//   0x33DCDE mov     rdi, [rsp+98h+ptr]; ptr
//   0x33DCE3 call    _free
//   0x33DCE8 mov     rdi, [rsp+98h+var_80]
//   0x33DCED test    rdi, rdi
//   0x33DCF0 jz      short loc_33DD43
//   0x33DCF2 mov     r12, qword ptr [rsp+98h+var_78]
//   0x33DCF7 test    r12, r12
//   0x33DCFA jz      short loc_33DD35
//   0x33DCFC xor     ebx, ebx
//   0x33DCFE xchg    ax, ax
//   0x33DD00 lea     rax, [rbx+rbx*4]
//   0x33DD04 lea     rbp, [rdi+rax*8]
//   0x33DD08 lea     rdi, [rbp+18h]
//   0x33DD0C call    _jvalue_t_clear
//   0x33DD11 mov     rdi, [rbp+0]
//   0x33DD15 test    rdi, rdi
//   0x33DD18 jz      short loc_33DD27
//   0x33DD1A mov     qword ptr [rbp+8], 0
//   0x33DD22 call    _qfree
//   0x33DD27 add     rbx, 1
//   0x33DD2B mov     rdi, [rsp+98h+var_80]
//   0x33DD30 cmp     r12, rbx
//   0x33DD33 jnz     short loc_33DD00
//   0x33DD35 mov     qword ptr [rsp+98h+var_78], 0
//   0x33DD3E call    _qfree
//   0x33DD43 mov     rdi, [rsp+98h+var_98]
//   0x33DD47 test    rdi, rdi
//   0x33DD4A jz      loc_33DC27
//   0x33DD50 mov     qword ptr [rsp+98h+var_90], 0
//   0x33DD59 call    _qfree
//   0x33DD5E jmp     loc_33DC27
//   0x33DD63 align 8
//   0x33DD68 xor     eax, eax
//   0x33DD6A jmp     loc_33DC2C
//   0x33DD6F call    ___stack_chk_fail
//   0x33DD74 mov     r12, rax
//   0x33DD77 jmp     loc_13AC7F
// ============================================================

void sub_33DBC0(/* signature unknown */)
{
    // see disassembly above
}

