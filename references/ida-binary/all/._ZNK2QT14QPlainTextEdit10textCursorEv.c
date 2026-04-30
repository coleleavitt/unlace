// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1160B0
// Name:            ._ZNK2QT14QPlainTextEdit10textCursorEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1160B0 jmp     cs:_ZNK2QT14QPlainTextEdit10textCursorEv_ptr
//
// Resolved target: _ZNK2QT14QPlainTextEdit10textCursorEv
// Target address:  0x8D6450
// GOT/IAT slot:    0x8A1CF8
// Slot symbol:     _ZNK2QT14QPlainTextEdit10textCursorEv_ptr
// Target type:     _QWORD(QT::QPlainTextEdit *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT14QPlainTextEdit10textCursorEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT14QPlainTextEdit10textCursorEv via GOT/IAT indirection
    return _ZNK2QT14QPlainTextEdit10textCursorEv(/* forwarded args */);
}

