// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119D40
// Name:            ._ZN2QT6QLabel11setWordWrapEb
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119D40 jmp     cs:_ZN2QT6QLabel11setWordWrapEb_ptr
//
// Resolved target: _ZN2QT6QLabel11setWordWrapEb
// Target address:  0x8D8A38
// GOT/IAT slot:    0x8A3B40
// Slot symbol:     _ZN2QT6QLabel11setWordWrapEb_ptr
// Target type:     _QWORD(QT::QLabel *__hidden this, bool)
// ============================================================

/* see target sig */ ._ZN2QT6QLabel11setWordWrapEb(/* see target signature */)
{
    // Tail-call to _ZN2QT6QLabel11setWordWrapEb via GOT/IAT indirection
    return _ZN2QT6QLabel11setWordWrapEb(/* forwarded args */);
}

