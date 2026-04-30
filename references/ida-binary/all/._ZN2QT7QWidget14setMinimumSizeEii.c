// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11BAB0
// Name:            ._ZN2QT7QWidget14setMinimumSizeEii
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11BAB0 jmp     cs:_ZN2QT7QWidget14setMinimumSizeEii_ptr
//
// Resolved target: _ZN2QT7QWidget14setMinimumSizeEii
// Target address:  0x8D9CE0
// GOT/IAT slot:    0x8A49F8
// Slot symbol:     _ZN2QT7QWidget14setMinimumSizeEii_ptr
// Target type:     _QWORD(QT::QWidget *__hidden this, int, int)
// ============================================================

/* see target sig */ ._ZN2QT7QWidget14setMinimumSizeEii(/* see target signature */)
{
    // Tail-call to _ZN2QT7QWidget14setMinimumSizeEii via GOT/IAT indirection
    return _ZN2QT7QWidget14setMinimumSizeEii(/* forwarded args */);
}

