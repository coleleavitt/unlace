// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115140
// Name:            ._ZNK2QT10QTextBlock4nextEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115140 jmp     cs:_ZNK2QT10QTextBlock4nextEv_ptr
//
// Resolved target: _ZNK2QT10QTextBlock4nextEv
// Target address:  0x8D5A88
// GOT/IAT slot:    0x8A1540
// Slot symbol:     _ZNK2QT10QTextBlock4nextEv_ptr
// Target type:     _QWORD(QT::QTextBlock *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT10QTextBlock4nextEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT10QTextBlock4nextEv via GOT/IAT indirection
    return _ZNK2QT10QTextBlock4nextEv(/* forwarded args */);
}

