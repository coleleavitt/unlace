// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1180C0
// Name:            ._ZNK2QT10QTextBlock7isValidEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1180C0 jmp     cs:_ZNK2QT10QTextBlock7isValidEv_ptr
//
// Resolved target: _ZNK2QT10QTextBlock7isValidEv
// Target address:  0x8D7898
// GOT/IAT slot:    0x8A2D00
// Slot symbol:     _ZNK2QT10QTextBlock7isValidEv_ptr
// Target type:     _QWORD(QT::QTextBlock *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT10QTextBlock7isValidEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT10QTextBlock7isValidEv via GOT/IAT indirection
    return _ZNK2QT10QTextBlock7isValidEv(/* forwarded args */);
}

