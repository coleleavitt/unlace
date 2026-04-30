// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113400
// Name:            ._ZN2QT9QLineEdit11setReadOnlyEb
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113400 jmp     cs:_ZN2QT9QLineEdit11setReadOnlyEb_ptr
//
// Resolved target: _ZN2QT9QLineEdit11setReadOnlyEb
// Target address:  0x8D47C8
// GOT/IAT slot:    0x8A06A0
// Slot symbol:     _ZN2QT9QLineEdit11setReadOnlyEb_ptr
// Target type:     _QWORD(QT::QLineEdit *__hidden this, bool)
// ============================================================

/* see target sig */ ._ZN2QT9QLineEdit11setReadOnlyEb(/* see target signature */)
{
    // Tail-call to _ZN2QT9QLineEdit11setReadOnlyEb via GOT/IAT indirection
    return _ZN2QT9QLineEdit11setReadOnlyEb(/* forwarded args */);
}

