// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111060
// Name:            ._ZN2QT6QTimer5startEi
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111060 jmp     cs:_ZN2QT6QTimer5startEi_ptr
//
// Resolved target: _ZN2QT6QTimer5startEi
// Target address:  0x8D30C0
// GOT/IAT slot:    0x89F4D0
// Slot symbol:     _ZN2QT6QTimer5startEi_ptr
// Target type:     _QWORD(QT::QTimer *__hidden this, int)
// ============================================================

/* see target sig */ ._ZN2QT6QTimer5startEi(/* see target signature */)
{
    // Tail-call to _ZN2QT6QTimer5startEi via GOT/IAT indirection
    return _ZN2QT6QTimer5startEi(/* forwarded args */);
}

