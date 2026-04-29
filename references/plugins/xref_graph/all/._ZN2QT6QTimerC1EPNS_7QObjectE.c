// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16BB0
// Name:            ._ZN2QT6QTimerC1EPNS_7QObjectE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x16BB0 jmp     cs:off_4F5C0
//
// Resolved target: _ZN2QT6QTimerC1EPNS_7QObjectE
// Target address:  0x50810
// GOT/IAT slot:    0x4F5C0
// Slot symbol:     off_4F5C0
// Target type:     _QWORD(QT::QTimer *__hidden this, QT::QObject *)
// ============================================================

/* see target sig */ ._ZN2QT6QTimerC1EPNS_7QObjectE(/* see target signature */)
{
    // Tail-call to _ZN2QT6QTimerC1EPNS_7QObjectE via GOT/IAT indirection
    return _ZN2QT6QTimerC1EPNS_7QObjectE(/* forwarded args */);
}

