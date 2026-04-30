// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117820
// Name:            ._ZNK2QT13QTextDocument5beginEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117820 jmp     cs:_ZNK2QT13QTextDocument5beginEv_ptr
//
// Resolved target: _ZNK2QT13QTextDocument5beginEv
// Target address:  0x8D7308
// GOT/IAT slot:    0x8A28B0
// Slot symbol:     _ZNK2QT13QTextDocument5beginEv_ptr
// Target type:     _QWORD(QT::QTextDocument *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT13QTextDocument5beginEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT13QTextDocument5beginEv via GOT/IAT indirection
    return _ZNK2QT13QTextDocument5beginEv(/* forwarded args */);
}

