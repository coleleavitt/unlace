// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A520
// Name:            ._ZN2QT14QPlainTextEdit11setReadOnlyEb
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A520 jmp     cs:_ZN2QT14QPlainTextEdit11setReadOnlyEb_ptr
//
// Resolved target: _ZN2QT14QPlainTextEdit11setReadOnlyEb
// Target address:  0x8D8F48
// GOT/IAT slot:    0x8A3F30
// Slot symbol:     _ZN2QT14QPlainTextEdit11setReadOnlyEb_ptr
// Target type:     _QWORD(QT::QPlainTextEdit *__hidden this, bool)
// ============================================================

/* see target sig */ ._ZN2QT14QPlainTextEdit11setReadOnlyEb(/* see target signature */)
{
    // Tail-call to _ZN2QT14QPlainTextEdit11setReadOnlyEb via GOT/IAT indirection
    return _ZN2QT14QPlainTextEdit11setReadOnlyEb(/* forwarded args */);
}

