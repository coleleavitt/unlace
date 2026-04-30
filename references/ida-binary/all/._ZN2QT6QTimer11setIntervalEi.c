// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111FF0
// Name:            ._ZN2QT6QTimer11setIntervalEi
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111FF0 jmp     cs:_ZN2QT6QTimer11setIntervalEi_ptr
//
// Resolved target: _ZN2QT6QTimer11setIntervalEi
// Target address:  0x8D3AC0
// GOT/IAT slot:    0x89FC98
// Slot symbol:     _ZN2QT6QTimer11setIntervalEi_ptr
// Target type:     _QWORD(QT::QTimer *__hidden this, int)
// ============================================================

/* see target sig */ ._ZN2QT6QTimer11setIntervalEi(/* see target signature */)
{
    // Tail-call to _ZN2QT6QTimer11setIntervalEi via GOT/IAT indirection
    return _ZN2QT6QTimer11setIntervalEi(/* forwarded args */);
}

