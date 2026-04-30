// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1189F0
// Name:            ._ZN2QT7QObjectC1EPS0_
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1189F0 jmp     cs:_ZN2QT7QObjectC1EPS0__ptr
//
// Resolved target: _ZN2QT7QObjectC1EPS0_
// Target address:  0x8D7E18
// GOT/IAT slot:    0x8A3198
// Slot symbol:     _ZN2QT7QObjectC1EPS0__ptr
// Target type:     _QWORD(QT::QObject *__hidden this, QT::QObject *)
// ============================================================

/* see target sig */ ._ZN2QT7QObjectC1EPS0_(/* see target signature */)
{
    // Tail-call to _ZN2QT7QObjectC1EPS0_ via GOT/IAT indirection
    return _ZN2QT7QObjectC1EPS0_(/* forwarded args */);
}

