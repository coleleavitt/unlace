// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115650
// Name:            ._ZNK2QT10QTextBlock8positionEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115650 jmp     cs:_ZNK2QT10QTextBlock8positionEv_ptr
//
// Resolved target: _ZNK2QT10QTextBlock8positionEv
// Target address:  0x8D5DB0
// GOT/IAT slot:    0x8A17C8
// Slot symbol:     _ZNK2QT10QTextBlock8positionEv_ptr
// Target type:     _QWORD(QT::QTextBlock *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT10QTextBlock8positionEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT10QTextBlock8positionEv via GOT/IAT indirection
    return _ZNK2QT10QTextBlock8positionEv(/* forwarded args */);
}

