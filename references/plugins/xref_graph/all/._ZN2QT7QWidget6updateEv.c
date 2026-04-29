// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x171E0
// Name:            ._ZN2QT7QWidget6updateEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x171E0 jmp     cs:off_4F8D8
//
// Resolved target: _ZN2QT7QWidget6updateEv
// Target address:  0x50DB8
// GOT/IAT slot:    0x4F8D8
// Slot symbol:     off_4F8D8
// Target type:     _QWORD(QT::QWidget *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT7QWidget6updateEv(/* see target signature */)
{
    // Tail-call to _ZN2QT7QWidget6updateEv via GOT/IAT indirection
    return _ZN2QT7QWidget6updateEv(/* forwarded args */);
}

