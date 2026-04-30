// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119C60
// Name:            ._ZN2QT16QCoreApplication14applicationPidEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119C60 jmp     cs:_ZN2QT16QCoreApplication14applicationPidEv_ptr
//
// Resolved target: _ZN2QT16QCoreApplication14applicationPidEv
// Target address:  0x8D89C0
// GOT/IAT slot:    0x8A3AD0
// Slot symbol:     _ZN2QT16QCoreApplication14applicationPidEv_ptr
// Target type:     _QWORD(QT::QCoreApplication *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT16QCoreApplication14applicationPidEv(/* see target signature */)
{
    // Tail-call to _ZN2QT16QCoreApplication14applicationPidEv via GOT/IAT indirection
    return _ZN2QT16QCoreApplication14applicationPidEv(/* forwarded args */);
}

