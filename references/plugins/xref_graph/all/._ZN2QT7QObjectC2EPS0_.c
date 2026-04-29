// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16930
// Name:            ._ZN2QT7QObjectC2EPS0_
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x16930 jmp     cs:off_4F480
//
// Resolved target: _ZN2QT7QObjectC2EPS0_
// Target address:  0x50628
// GOT/IAT slot:    0x4F480
// Slot symbol:     off_4F480
// Target type:     _QWORD(QT::QObject *__hidden this, QT::QObject *)
// ============================================================

/* see target sig */ ._ZN2QT7QObjectC2EPS0_(/* see target signature */)
{
    // Tail-call to _ZN2QT7QObjectC2EPS0_ via GOT/IAT indirection
    return _ZN2QT7QObjectC2EPS0_(/* forwarded args */);
}

