// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x166F0
// Name:            ._ZN2QT9QLineEdit9selectAllEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x166F0 jmp     cs:off_4F360
//
// Resolved target: _ZN2QT9QLineEdit9selectAllEv
// Target address:  0x503B0
// GOT/IAT slot:    0x4F360
// Slot symbol:     off_4F360
// Target type:     _QWORD(QT::QLineEdit *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT9QLineEdit9selectAllEv(/* see target signature */)
{
    // Tail-call to _ZN2QT9QLineEdit9selectAllEv via GOT/IAT indirection
    return _ZN2QT9QLineEdit9selectAllEv(/* forwarded args */);
}

