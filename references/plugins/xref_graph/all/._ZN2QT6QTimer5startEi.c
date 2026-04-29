// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16030
// Name:            ._ZN2QT6QTimer5startEi
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x16030 jmp     cs:off_4F000
//
// Resolved target: _ZN2QT6QTimer5startEi
// Target address:  0x4FE20
// GOT/IAT slot:    0x4F000
// Slot symbol:     off_4F000
// Target type:     _QWORD(QT::QTimer *__hidden this, int)
// ============================================================

/* see target sig */ ._ZN2QT6QTimer5startEi(/* see target signature */)
{
    // Tail-call to _ZN2QT6QTimer5startEi via GOT/IAT indirection
    return _ZN2QT6QTimer5startEi(/* forwarded args */);
}

