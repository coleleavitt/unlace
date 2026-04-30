// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119060
// Name:            ._ZN2QT7QWidget14setFixedHeightEi
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119060 jmp     cs:_ZN2QT7QWidget14setFixedHeightEi_ptr
//
// Resolved target: _ZN2QT7QWidget14setFixedHeightEi
// Target address:  0x8D8208
// GOT/IAT slot:    0x8A34D0
// Slot symbol:     _ZN2QT7QWidget14setFixedHeightEi_ptr
// Target type:     _QWORD(QT::QWidget *__hidden this, int)
// ============================================================

/* see target sig */ ._ZN2QT7QWidget14setFixedHeightEi(/* see target signature */)
{
    // Tail-call to _ZN2QT7QWidget14setFixedHeightEi via GOT/IAT indirection
    return _ZN2QT7QWidget14setFixedHeightEi(/* forwarded args */);
}

