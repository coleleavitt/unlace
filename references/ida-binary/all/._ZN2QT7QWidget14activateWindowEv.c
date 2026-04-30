// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116C70
// Name:            ._ZN2QT7QWidget14activateWindowEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116C70 jmp     cs:_ZN2QT7QWidget14activateWindowEv_ptr
//
// Resolved target: _ZN2QT7QWidget14activateWindowEv
// Target address:  0x8D6BA8
// GOT/IAT slot:    0x8A22D8
// Slot symbol:     _ZN2QT7QWidget14activateWindowEv_ptr
// Target type:     _QWORD(QT::QWidget *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT7QWidget14activateWindowEv(/* see target signature */)
{
    // Tail-call to _ZN2QT7QWidget14activateWindowEv via GOT/IAT indirection
    return _ZN2QT7QWidget14activateWindowEv(/* forwarded args */);
}

