// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x31D160
// Name:           sub_31D160
// Function size:  152 bytes (39 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x31D160 push    rbx; int
//   0x31D161 sub     rsp, 10h
//   0x31D165 mov     rax, fs:28h
//   0x31D16E mov     qword ptr [rsp+18h+var_10], rax; int
//   0x31D173 xor     eax, eax
//   0x31D175 cmp     byte ptr [rdi+28h], 0
//   0x31D179 jnz     short loc_31D1D6
//   0x31D17B mov     rdi, [rdi+20h]
//   0x31D17F lea     rcx, off_89E260
//   0x31D186 mov     rbx, rsi
//   0x31D189 xor     edx, edx
//   0x31D18B mov     r8d, 1
//   0x31D191 xor     esi, esi
//   0x31D193 call    __ZN2QT20qt_qFindChild_helperEPKNS_7QObjectENS_14QAnyStringViewERKNS_11QMetaObjectENS_6QFlagsINS_2Qt15FindChildOptionEEE; QT::qt_qFindChild_helper(QT::QObject const*,QT::QAnyStringView,QT::QMetaObject const&,QT::QFlags<QT::Qt::FindChildOption>)
//   0x31D198 mov     rdx, [rbx]
//   0x31D19B mov     rdi, rax; this
//   0x31D19E mov     qword ptr [rsp+18h+var_18], rdx; int
//   0x31D1A2 test    rdx, rdx
//   0x31D1A5 jz      short loc_31D1AB
//   0x31D1A7 add     dword ptr [rdx+0Ch], 1
//   0x31D1AB mov     rsi, rsp
//   0x31D1AE call    sub_526EF0
//   0x31D1B3 mov     rax, qword ptr [rsp+18h+var_18]
//   0x31D1B7 test    rax, rax
//   0x31D1BA jz      short loc_31D1C0
//   0x31D1BC sub     dword ptr [rax+0Ch], 1
//   0x31D1C0 mov     rax, qword ptr [rsp+18h+var_10]
//   0x31D1C5 sub     rax, fs:28h
//   0x31D1CE jnz     short loc_31D1EB
//   0x31D1D0 add     rsp, 10h
//   0x31D1D4 pop     rbx
//   0x31D1D5 retn
//   0x31D1D6 mov     rax, qword ptr [rsp+18h+var_10]
//   0x31D1DB sub     rax, fs:28h
//   0x31D1E4 jnz     short loc_31D1EB
//   0x31D1E6 call    sub_318390
//   0x31D1EB call    ___stack_chk_fail
//   0x31D1F0 mov     rdi, rax; struct _Unwind_Exception *
//   0x31D1F3 jmp     loc_138870
// ============================================================

void sub_31D160(/* signature unknown */)
{
    // see disassembly above
}

