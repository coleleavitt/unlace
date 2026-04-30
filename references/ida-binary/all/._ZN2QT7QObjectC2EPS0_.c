// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115520
// Name:            ._ZN2QT7QObjectC2EPS0_
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115520 jmp     cs:_ZN2QT7QObjectC2EPS0__ptr
//
// Resolved target: _ZN2QT7QObjectC2EPS0_
// Target address:  0x8D5D08
// GOT/IAT slot:    0x8A1730
// Slot symbol:     _ZN2QT7QObjectC2EPS0__ptr
// Target type:     _QWORD(QT::QObject *__hidden this, QT::QObject *)
// ============================================================

/* see target sig */ ._ZN2QT7QObjectC2EPS0_(/* see target signature */)
{
    // Tail-call to _ZN2QT7QObjectC2EPS0_ via GOT/IAT indirection
    return _ZN2QT7QObjectC2EPS0_(/* forwarded args */);
}

