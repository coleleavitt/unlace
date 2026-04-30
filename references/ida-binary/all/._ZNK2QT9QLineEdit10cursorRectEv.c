// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115770
// Name:            ._ZNK2QT9QLineEdit10cursorRectEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115770 jmp     cs:_ZNK2QT9QLineEdit10cursorRectEv_ptr
//
// Resolved target: _ZNK2QT9QLineEdit10cursorRectEv
// Target address:  0x8D5E60
// GOT/IAT slot:    0x8A1858
// Slot symbol:     _ZNK2QT9QLineEdit10cursorRectEv_ptr
// Target type:     _QWORD(QT::QLineEdit *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT9QLineEdit10cursorRectEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT9QLineEdit10cursorRectEv via GOT/IAT indirection
    return _ZNK2QT9QLineEdit10cursorRectEv(/* forwarded args */);
}

