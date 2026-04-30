// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11BA60
// Name:            ._ZN2QT7QObject17removeEventFilterEPS0_
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11BA60 jmp     cs:_ZN2QT7QObject17removeEventFilterEPS0__ptr
//
// Resolved target: _ZN2QT7QObject17removeEventFilterEPS0_
// Target address:  0x8D9CB8
// GOT/IAT slot:    0x8A49D0
// Slot symbol:     _ZN2QT7QObject17removeEventFilterEPS0__ptr
// Target type:     _QWORD(QT::QObject *__hidden this, QT::QObject *)
// ============================================================

/* see target sig */ ._ZN2QT7QObject17removeEventFilterEPS0_(/* see target signature */)
{
    // Tail-call to _ZN2QT7QObject17removeEventFilterEPS0_ via GOT/IAT indirection
    return _ZN2QT7QObject17removeEventFilterEPS0_(/* forwarded args */);
}

