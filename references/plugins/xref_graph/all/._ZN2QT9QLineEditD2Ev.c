// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x17560
// Name:            ._ZN2QT9QLineEditD2Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x17560 jmp     cs:off_4FA98
//
// Resolved target: _ZN2QT9QLineEditD2Ev
// Target address:  0x51118
// GOT/IAT slot:    0x4FA98
// Slot symbol:     off_4FA98
// Target type:     void(QT::QLineEdit *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT9QLineEditD2Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT9QLineEditD2Ev via GOT/IAT indirection
    return _ZN2QT9QLineEditD2Ev(/* forwarded args */);
}

