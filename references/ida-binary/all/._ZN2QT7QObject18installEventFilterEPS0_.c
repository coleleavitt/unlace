// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114220
// Name:            ._ZN2QT7QObject18installEventFilterEPS0_
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114220 jmp     cs:_ZN2QT7QObject18installEventFilterEPS0__ptr
//
// Resolved target: _ZN2QT7QObject18installEventFilterEPS0_
// Target address:  0x8D50A0
// GOT/IAT slot:    0x8A0DB0
// Slot symbol:     _ZN2QT7QObject18installEventFilterEPS0__ptr
// Target type:     _QWORD(QT::QObject *__hidden this, QT::QObject *)
// ============================================================

/* see target sig */ ._ZN2QT7QObject18installEventFilterEPS0_(/* see target signature */)
{
    // Tail-call to _ZN2QT7QObject18installEventFilterEPS0_ via GOT/IAT indirection
    return _ZN2QT7QObject18installEventFilterEPS0_(/* forwarded args */);
}

