// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119C80
// Name:            ._ZN2QT7QWidget6updateEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119C80 jmp     cs:_ZN2QT7QWidget6updateEv_ptr
//
// Resolved target: _ZN2QT7QWidget6updateEv
// Target address:  0x8D89D0
// GOT/IAT slot:    0x8A3AE0
// Slot symbol:     _ZN2QT7QWidget6updateEv_ptr
// Target type:     _QWORD(QT::QWidget *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT7QWidget6updateEv(/* see target signature */)
{
    // Tail-call to _ZN2QT7QWidget6updateEv via GOT/IAT indirection
    return _ZN2QT7QWidget6updateEv(/* forwarded args */);
}

