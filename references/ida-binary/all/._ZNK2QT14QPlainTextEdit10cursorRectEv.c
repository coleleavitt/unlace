// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116520
// Name:            ._ZNK2QT14QPlainTextEdit10cursorRectEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116520 jmp     cs:_ZNK2QT14QPlainTextEdit10cursorRectEv_ptr
//
// Resolved target: _ZNK2QT14QPlainTextEdit10cursorRectEv
// Target address:  0x8D66F0
// GOT/IAT slot:    0x8A1F30
// Slot symbol:     _ZNK2QT14QPlainTextEdit10cursorRectEv_ptr
// Target type:     _QWORD(QT::QPlainTextEdit *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT14QPlainTextEdit10cursorRectEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT14QPlainTextEdit10cursorRectEv via GOT/IAT indirection
    return _ZNK2QT14QPlainTextEdit10cursorRectEv(/* forwarded args */);
}

