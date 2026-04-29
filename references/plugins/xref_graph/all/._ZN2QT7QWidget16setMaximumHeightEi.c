// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16FB0
// Name:            ._ZN2QT7QWidget16setMaximumHeightEi
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x16FB0 jmp     cs:off_4F7C0
//
// Resolved target: _ZN2QT7QWidget16setMaximumHeightEi
// Target address:  0x50BE0
// GOT/IAT slot:    0x4F7C0
// Slot symbol:     off_4F7C0
// Target type:     _QWORD(QT::QWidget *__hidden this, int)
// ============================================================

/* see target sig */ ._ZN2QT7QWidget16setMaximumHeightEi(/* see target signature */)
{
    // Tail-call to _ZN2QT7QWidget16setMaximumHeightEi via GOT/IAT indirection
    return _ZN2QT7QWidget16setMaximumHeightEi(/* forwarded args */);
}

