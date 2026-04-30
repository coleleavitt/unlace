// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113D70
// Name:            ._ZNK2QT14QPlainTextEdit8documentEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113D70 jmp     cs:_ZNK2QT14QPlainTextEdit8documentEv_ptr
//
// Resolved target: _ZNK2QT14QPlainTextEdit8documentEv
// Target address:  0x8D4DC0
// GOT/IAT slot:    0x8A0B58
// Slot symbol:     _ZNK2QT14QPlainTextEdit8documentEv_ptr
// Target type:     _QWORD(QT::QPlainTextEdit *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT14QPlainTextEdit8documentEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT14QPlainTextEdit8documentEv via GOT/IAT indirection
    return _ZNK2QT14QPlainTextEdit8documentEv(/* forwarded args */);
}

