// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x169F0
// Name:            ._ZN2QT7QWidget15setMaximumWidthEi
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x169F0 jmp     cs:off_4F4E0
//
// Resolved target: _ZN2QT7QWidget15setMaximumWidthEi
// Target address:  0x506D8
// GOT/IAT slot:    0x4F4E0
// Slot symbol:     off_4F4E0
// Target type:     _QWORD(QT::QWidget *__hidden this, int)
// ============================================================

/* see target sig */ ._ZN2QT7QWidget15setMaximumWidthEi(/* see target signature */)
{
    // Tail-call to _ZN2QT7QWidget15setMaximumWidthEi via GOT/IAT indirection
    return _ZN2QT7QWidget15setMaximumWidthEi(/* forwarded args */);
}

