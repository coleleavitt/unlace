// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x17530
// Name:            ._ZN2QT9QLineEdit14setTextMarginsEiiii
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x17530 jmp     cs:off_4FA80
//
// Resolved target: _ZN2QT9QLineEdit14setTextMarginsEiiii
// Target address:  0x510C0
// GOT/IAT slot:    0x4FA80
// Slot symbol:     off_4FA80
// Target type:     _QWORD(QT::QLineEdit *__hidden this, int, int, int, int)
// ============================================================

/* see target sig */ ._ZN2QT9QLineEdit14setTextMarginsEiiii(/* see target signature */)
{
    // Tail-call to _ZN2QT9QLineEdit14setTextMarginsEiiii via GOT/IAT indirection
    return _ZN2QT9QLineEdit14setTextMarginsEiiii(/* forwarded args */);
}

