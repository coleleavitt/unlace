// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11B020
// Name:            ._ZN2QT7QStringC1ENS_5QCharE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11B020 jmp     cs:_ZN2QT7QStringC1ENS_5QCharE_ptr
//
// Resolved target: _ZN2QT7QStringC1ENS_5QCharE
// Target address:  0x8D9640
// GOT/IAT slot:    0x8A44B0
// Slot symbol:     _ZN2QT7QStringC1ENS_5QCharE_ptr
// Target type:     _QWORD __high(QT::QChar)
// ============================================================

/* see target sig */ ._ZN2QT7QStringC1ENS_5QCharE(/* see target signature */)
{
    // Tail-call to _ZN2QT7QStringC1ENS_5QCharE via GOT/IAT indirection
    return _ZN2QT7QStringC1ENS_5QCharE(/* forwarded args */);
}

