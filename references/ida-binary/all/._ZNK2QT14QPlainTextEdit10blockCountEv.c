// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1118F0
// Name:            ._ZNK2QT14QPlainTextEdit10blockCountEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1118F0 jmp     cs:_ZNK2QT14QPlainTextEdit10blockCountEv_ptr
//
// Resolved target: _ZNK2QT14QPlainTextEdit10blockCountEv
// Target address:  0x8D3660
// GOT/IAT slot:    0x89F918
// Slot symbol:     _ZNK2QT14QPlainTextEdit10blockCountEv_ptr
// Target type:     _QWORD(QT::QPlainTextEdit *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT14QPlainTextEdit10blockCountEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT14QPlainTextEdit10blockCountEv via GOT/IAT indirection
    return _ZNK2QT14QPlainTextEdit10blockCountEv(/* forwarded args */);
}

