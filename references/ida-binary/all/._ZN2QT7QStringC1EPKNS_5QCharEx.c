// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112E10
// Name:            ._ZN2QT7QStringC1EPKNS_5QCharEx
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112E10 jmp     cs:_ZN2QT7QStringC1EPKNS_5QCharEx_ptr
//
// Resolved target: _ZN2QT7QStringC1EPKNS_5QCharEx
// Target address:  0x8D43C0
// GOT/IAT slot:    0x8A03A8
// Slot symbol:     _ZN2QT7QStringC1EPKNS_5QCharEx_ptr
// Target type:     _QWORD(QT::QString *__hidden this, const QT::QChar *, __int64)
// ============================================================

/* see target sig */ ._ZN2QT7QStringC1EPKNS_5QCharEx(/* see target signature */)
{
    // Tail-call to _ZN2QT7QStringC1EPKNS_5QCharEx via GOT/IAT indirection
    return _ZN2QT7QStringC1EPKNS_5QCharEx(/* forwarded args */);
}

