// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x162D0
// Name:            ._ZN2QT7QWidget10setVisibleEb
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x162D0 jmp     cs:off_4F150
//
// Resolved target: _ZN2QT7QWidget10setVisibleEb
// Target address:  0x50000
// GOT/IAT slot:    0x4F150
// Slot symbol:     off_4F150
// Target type:     _QWORD(QT::QWidget *__hidden this, bool)
// ============================================================

/* see target sig */ ._ZN2QT7QWidget10setVisibleEb(/* see target signature */)
{
    // Tail-call to _ZN2QT7QWidget10setVisibleEb via GOT/IAT indirection
    return _ZN2QT7QWidget10setVisibleEb(/* forwarded args */);
}

