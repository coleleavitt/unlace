// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11B010
// Name:            ._ZN2QT7QWidget14setMaximumSizeEii
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11B010 jmp     cs:_ZN2QT7QWidget14setMaximumSizeEii_ptr
//
// Resolved target: _ZN2QT7QWidget14setMaximumSizeEii
// Target address:  0x8D9630
// GOT/IAT slot:    0x8A44A8
// Slot symbol:     _ZN2QT7QWidget14setMaximumSizeEii_ptr
// Target type:     _QWORD(QT::QWidget *__hidden this, int, int)
// ============================================================

/* see target sig */ ._ZN2QT7QWidget14setMaximumSizeEii(/* see target signature */)
{
    // Tail-call to _ZN2QT7QWidget14setMaximumSizeEii via GOT/IAT indirection
    return _ZN2QT7QWidget14setMaximumSizeEii(/* forwarded args */);
}

