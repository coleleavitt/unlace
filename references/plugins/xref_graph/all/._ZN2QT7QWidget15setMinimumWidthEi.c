// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16C60
// Name:            ._ZN2QT7QWidget15setMinimumWidthEi
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x16C60 jmp     cs:off_4F618
//
// Resolved target: _ZN2QT7QWidget15setMinimumWidthEi
// Target address:  0x508C0
// GOT/IAT slot:    0x4F618
// Slot symbol:     off_4F618
// Target type:     _QWORD(QT::QWidget *__hidden this, int)
// ============================================================

/* see target sig */ ._ZN2QT7QWidget15setMinimumWidthEi(/* see target signature */)
{
    // Tail-call to _ZN2QT7QWidget15setMinimumWidthEi via GOT/IAT indirection
    return _ZN2QT7QWidget15setMinimumWidthEi(/* forwarded args */);
}

