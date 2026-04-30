// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11AE30
// Name:            ._ZN2QT7QStringC1ExNS_5QCharE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11AE30 jmp     cs:_ZN2QT7QStringC1ExNS_5QCharE_ptr
//
// Resolved target: _ZN2QT7QStringC1ExNS_5QCharE
// Target address:  0x8D9520
// GOT/IAT slot:    0x8A43B8
// Slot symbol:     _ZN2QT7QStringC1ExNS_5QCharE_ptr
// Target type:     _QWORD __high(__int64, QT::QChar)
// ============================================================

/* see target sig */ ._ZN2QT7QStringC1ExNS_5QCharE(/* see target signature */)
{
    // Tail-call to _ZN2QT7QStringC1ExNS_5QCharE via GOT/IAT indirection
    return _ZN2QT7QStringC1ExNS_5QCharE(/* forwarded args */);
}

