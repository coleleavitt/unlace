// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115790
// Name:            ._ZNK2QT14QPlainTextEdit13contentOffsetEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115790 jmp     cs:_ZNK2QT14QPlainTextEdit13contentOffsetEv_ptr
//
// Resolved target: _ZNK2QT14QPlainTextEdit13contentOffsetEv
// Target address:  0x8D5E70
// GOT/IAT slot:    0x8A1868
// Slot symbol:     _ZNK2QT14QPlainTextEdit13contentOffsetEv_ptr
// Target type:     _QWORD(QT::QPlainTextEdit *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT14QPlainTextEdit13contentOffsetEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT14QPlainTextEdit13contentOffsetEv via GOT/IAT indirection
    return _ZNK2QT14QPlainTextEdit13contentOffsetEv(/* forwarded args */);
}

