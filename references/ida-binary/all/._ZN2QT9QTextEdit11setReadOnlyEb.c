// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1159B0
// Name:            ._ZN2QT9QTextEdit11setReadOnlyEb
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1159B0 jmp     cs:_ZN2QT9QTextEdit11setReadOnlyEb_ptr
//
// Resolved target: _ZN2QT9QTextEdit11setReadOnlyEb
// Target address:  0x8D5FD8
// GOT/IAT slot:    0x8A1978
// Slot symbol:     _ZN2QT9QTextEdit11setReadOnlyEb_ptr
// Target type:     _QWORD(QT::QTextEdit *__hidden this, bool)
// ============================================================

/* see target sig */ ._ZN2QT9QTextEdit11setReadOnlyEb(/* see target signature */)
{
    // Tail-call to _ZN2QT9QTextEdit11setReadOnlyEb via GOT/IAT indirection
    return _ZN2QT9QTextEdit11setReadOnlyEb(/* forwarded args */);
}

