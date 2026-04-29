// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x17160
// Name:            ._ZN2QT7QWidget16setMinimumHeightEi
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x17160 jmp     cs:off_4F898
//
// Resolved target: _ZN2QT7QWidget16setMinimumHeightEi
// Target address:  0x50D48
// GOT/IAT slot:    0x4F898
// Slot symbol:     off_4F898
// Target type:     _QWORD(QT::QWidget *__hidden this, int)
// ============================================================

/* see target sig */ ._ZN2QT7QWidget16setMinimumHeightEi(/* see target signature */)
{
    // Tail-call to _ZN2QT7QWidget16setMinimumHeightEi via GOT/IAT indirection
    return _ZN2QT7QWidget16setMinimumHeightEi(/* forwarded args */);
}

