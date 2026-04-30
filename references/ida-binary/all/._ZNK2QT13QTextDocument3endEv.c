// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1190F0
// Name:            ._ZNK2QT13QTextDocument3endEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1190F0 jmp     cs:_ZNK2QT13QTextDocument3endEv_ptr
//
// Resolved target: _ZNK2QT13QTextDocument3endEv
// Target address:  0x8D8258
// GOT/IAT slot:    0x8A3518
// Slot symbol:     _ZNK2QT13QTextDocument3endEv_ptr
// Target type:     _QWORD(QT::QTextDocument *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT13QTextDocument3endEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT13QTextDocument3endEv via GOT/IAT indirection
    return _ZNK2QT13QTextDocument3endEv(/* forwarded args */);
}

