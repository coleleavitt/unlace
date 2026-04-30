// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3A54A0
// Name:           type_editor_field_handler_t__::vfunc_4
// Function size:  333 bytes (90 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3A54A0 push    rbp; int
//   0x3A54A1 mov     rdi, rdx
//   0x3A54A4 pxor    xmm0, xmm0
//   0x3A54A8 mov     r8d, 1
//   0x3A54AE xor     esi, esi
//   0x3A54B0 xor     edx, edx
//   0x3A54B2 mov     rbp, rsp
//   0x3A54B5 push    r14; int
//   0x3A54B7 push    r13; __int64
//   0x3A54B9 push    r12; __int64
//   0x3A54BB push    rbx; __int64
//   0x3A54BC sub     rsp, 20h
//   0x3A54C0 mov     rbx, fs:28h
//   0x3A54C9 mov     [rbp+var_28], rbx
//   0x3A54CD mov     rbx, rcx
//   0x3A54D0 lea     rcx, off_891AA0
//   0x3A54D7 mov     [rbp+dest], 0
//   0x3A54DF movups  [rbp+var_38], xmm0
//   0x3A54E3 call    __ZN2QT20qt_qFindChild_helperEPKNS_7QObjectENS_14QAnyStringViewERKNS_11QMetaObjectENS_6QFlagsINS_2Qt15FindChildOptionEEE; QT::qt_qFindChild_helper(QT::QObject const*,QT::QAnyStringView,QT::QMetaObject const&,QT::QFlags<QT::Qt::FindChildOption>)
//   0x3A54E8 mov     r12, rax
//   0x3A54EB mov     rax, [rbx+10h]
//   0x3A54EF cmp     byte ptr [rbx+8], 0
//   0x3A54F3 mov     r14, rax
//   0x3A54F6 jz      short loc_3A5568
//   0x3A54F8 mov     r8d, [rbx+78h]
//   0x3A54FC mov     ecx, [rbx+80h]
//   0x3A5502 lea     rdi, [rbp+dest]
//   0x3A5506 xor     esi, esi
//   0x3A5508 mov     edx, [rbx+7Ch]
//   0x3A550B push    qword ptr [rbx+28h]
//   0x3A550E lea     r9, [rbx+8]
//   0x3A5512 push    rax
//   0x3A5513 and     r8d, 0FFFFFFDFh
//   0x3A5517 call    _print_tinfo
//   0x3A551C pop     rdx
//   0x3A551D pop     rcx
//   0x3A551E mov     rsi, [rbp+dest]
//   0x3A5522 mov     rdi, r12; this
//   0x3A5525 call    sub_3D26C0
//   0x3A552A mov     rdi, [rbp+dest]
//   0x3A552E test    rdi, rdi
//   0x3A5531 jz      short loc_3A5540
//   0x3A5533 mov     qword ptr [rbp+var_38], 0
//   0x3A553B call    _qfree
//   0x3A5540 mov     rax, [rbp+var_28]
//   0x3A5544 sub     rax, fs:28h
//   0x3A554D jnz     loc_3A55E0
//   0x3A5553 lea     rsp, [rbp-20h]
//   0x3A5557 mov     eax, 1
//   0x3A555C pop     rbx
//   0x3A555D pop     r12
//   0x3A555F pop     r13
//   0x3A5561 pop     r14
//   0x3A5563 pop     rbp
//   0x3A5564 retn
//   0x3A5565 align 8
//   0x3A5568 test    rax, rax
//   0x3A556B jz      short loc_3A557D
//   0x3A556D mov     rdi, rax; s
//   0x3A5570 call    _strlen
//   0x3A5575 mov     rbx, rax
//   0x3A5578 test    rax, rax
//   0x3A557B jnz     short loc_3A5590
//   0x3A557D mov     qword ptr [rbp+var_38], 0
//   0x3A5585 jmp     short loc_3A551E
//   0x3A5587 align 10h
//   0x3A5590 mov     rdi, [rbp+dest]; dest
//   0x3A5594 lea     r13, [rax+1]
//   0x3A5598 cmp     qword ptr [rbp+var_38+8], r13
//   0x3A559C jb      short loc_3A55C0
//   0x3A559E mov     rdx, rbx; n
//   0x3A55A1 mov     rsi, r14; src
//   0x3A55A4 mov     qword ptr [rbp+var_38], r13
//   0x3A55A8 call    _memmove
//   0x3A55AD mov     rax, [rbp+dest]
//   0x3A55B1 mov     byte ptr [rax+rbx], 0
//   0x3A55B5 jmp     loc_3A551E
//   0x3A55BA align 20h
//   0x3A55C0 lea     rax, [rbp+dest]
//   0x3A55C4 mov     rsi, rdi
//   0x3A55C7 mov     ecx, 1
//   0x3A55CC mov     rdx, r13
//   0x3A55CF mov     rdi, rax
//   0x3A55D2 call    _qvector_reserve
//   0x3A55D7 mov     [rbp+dest], rax
//   0x3A55DB mov     rdi, rax
//   0x3A55DE jmp     short loc_3A559E
//   0x3A55E0 call    ___stack_chk_fail
//   0x3A55E5 mov     rbx, rax
//   0x3A55E8 jmp     loc_141FF6
// ============================================================

void type_editor_field_handler_t__::vfunc_4(/* signature unknown */)
{
    // see disassembly above
}

