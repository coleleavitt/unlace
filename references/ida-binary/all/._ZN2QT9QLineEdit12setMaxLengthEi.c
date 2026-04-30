// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116320
// Name:            ._ZN2QT9QLineEdit12setMaxLengthEi
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116320 jmp     cs:_ZN2QT9QLineEdit12setMaxLengthEi_ptr
//
// Resolved target: _ZN2QT9QLineEdit12setMaxLengthEi
// Target address:  0x8D65C0
// GOT/IAT slot:    0x8A1E30
// Slot symbol:     _ZN2QT9QLineEdit12setMaxLengthEi_ptr
// Target type:     _QWORD(QT::QLineEdit *__hidden this, int)
// ============================================================

/* see target sig */ ._ZN2QT9QLineEdit12setMaxLengthEi(/* see target signature */)
{
    // Tail-call to _ZN2QT9QLineEdit12setMaxLengthEi via GOT/IAT indirection
    return _ZN2QT9QLineEdit12setMaxLengthEi(/* forwarded args */);
}

