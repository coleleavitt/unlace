// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112E50
// Name:            ._ZNK2QT14QPlainTextEdit10isReadOnlyEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112E50 jmp     cs:_ZNK2QT14QPlainTextEdit10isReadOnlyEv_ptr
//
// Resolved target: _ZNK2QT14QPlainTextEdit10isReadOnlyEv
// Target address:  0x8D43F8
// GOT/IAT slot:    0x8A03C8
// Slot symbol:     _ZNK2QT14QPlainTextEdit10isReadOnlyEv_ptr
// Target type:     _QWORD(QT::QPlainTextEdit *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT14QPlainTextEdit10isReadOnlyEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT14QPlainTextEdit10isReadOnlyEv via GOT/IAT indirection
    return _ZNK2QT14QPlainTextEdit10isReadOnlyEv(/* forwarded args */);
}

