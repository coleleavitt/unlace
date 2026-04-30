// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112A80
// Name:            ._ZNK2QT14QPlainTextEdit17firstVisibleBlockEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112A80 jmp     cs:_ZNK2QT14QPlainTextEdit17firstVisibleBlockEv_ptr
//
// Resolved target: _ZNK2QT14QPlainTextEdit17firstVisibleBlockEv
// Target address:  0x8D4180
// GOT/IAT slot:    0x8A01E0
// Slot symbol:     _ZNK2QT14QPlainTextEdit17firstVisibleBlockEv_ptr
// Target type:     _QWORD(QT::QPlainTextEdit *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT14QPlainTextEdit17firstVisibleBlockEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT14QPlainTextEdit17firstVisibleBlockEv via GOT/IAT indirection
    return _ZNK2QT14QPlainTextEdit17firstVisibleBlockEv(/* forwarded args */);
}

