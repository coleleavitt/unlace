// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A2F0
// Name:            ._ZN2QT6QFrame12setLineWidthEi
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A2F0 jmp     cs:_ZN2QT6QFrame12setLineWidthEi_ptr
//
// Resolved target: _ZN2QT6QFrame12setLineWidthEi
// Target address:  0x8D8DC0
// GOT/IAT slot:    0x8A3E18
// Slot symbol:     _ZN2QT6QFrame12setLineWidthEi_ptr
// Target type:     _QWORD(QT::QFrame *__hidden this, int)
// ============================================================

/* see target sig */ ._ZN2QT6QFrame12setLineWidthEi(/* see target signature */)
{
    // Tail-call to _ZN2QT6QFrame12setLineWidthEi via GOT/IAT indirection
    return _ZN2QT6QFrame12setLineWidthEi(/* forwarded args */);
}

