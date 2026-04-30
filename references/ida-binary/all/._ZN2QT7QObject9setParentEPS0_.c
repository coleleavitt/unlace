// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114AD0
// Name:            ._ZN2QT7QObject9setParentEPS0_
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114AD0 jmp     cs:_ZN2QT7QObject9setParentEPS0__ptr
//
// Resolved target: _ZN2QT7QObject9setParentEPS0_
// Target address:  0x8D56A0
// GOT/IAT slot:    0x8A1208
// Slot symbol:     _ZN2QT7QObject9setParentEPS0__ptr
// Target type:     _QWORD(QT::QObject *__hidden this, QT::QObject *)
// ============================================================

/* see target sig */ ._ZN2QT7QObject9setParentEPS0_(/* see target signature */)
{
    // Tail-call to _ZN2QT7QObject9setParentEPS0_ via GOT/IAT indirection
    return _ZN2QT7QObject9setParentEPS0_(/* forwarded args */);
}

