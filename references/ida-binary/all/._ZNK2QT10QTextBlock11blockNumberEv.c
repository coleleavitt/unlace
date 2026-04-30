// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1143F0
// Name:            ._ZNK2QT10QTextBlock11blockNumberEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1143F0 jmp     cs:_ZNK2QT10QTextBlock11blockNumberEv_ptr
//
// Resolved target: _ZNK2QT10QTextBlock11blockNumberEv
// Target address:  0x8D51C8
// GOT/IAT slot:    0x8A0E98
// Slot symbol:     _ZNK2QT10QTextBlock11blockNumberEv_ptr
// Target type:     _QWORD(QT::QTextBlock *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT10QTextBlock11blockNumberEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT10QTextBlock11blockNumberEv via GOT/IAT indirection
    return _ZNK2QT10QTextBlock11blockNumberEv(/* forwarded args */);
}

