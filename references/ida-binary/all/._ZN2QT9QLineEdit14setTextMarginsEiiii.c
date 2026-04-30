// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11B930
// Name:            ._ZN2QT9QLineEdit14setTextMarginsEiiii
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11B930 jmp     cs:_ZN2QT9QLineEdit14setTextMarginsEiiii_ptr
//
// Resolved target: _ZN2QT9QLineEdit14setTextMarginsEiiii
// Target address:  0x8D9BF8
// GOT/IAT slot:    0x8A4938
// Slot symbol:     _ZN2QT9QLineEdit14setTextMarginsEiiii_ptr
// Target type:     _QWORD(QT::QLineEdit *__hidden this, int, int, int, int)
// ============================================================

/* see target sig */ ._ZN2QT9QLineEdit14setTextMarginsEiiii(/* see target signature */)
{
    // Tail-call to _ZN2QT9QLineEdit14setTextMarginsEiiii via GOT/IAT indirection
    return _ZN2QT9QLineEdit14setTextMarginsEiiii(/* forwarded args */);
}

