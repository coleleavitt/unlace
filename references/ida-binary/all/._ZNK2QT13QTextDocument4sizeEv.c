// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1141B0
// Name:            ._ZNK2QT13QTextDocument4sizeEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1141B0 jmp     cs:_ZNK2QT13QTextDocument4sizeEv_ptr
//
// Resolved target: _ZNK2QT13QTextDocument4sizeEv
// Target address:  0x8D5058
// GOT/IAT slot:    0x8A0D78
// Slot symbol:     _ZNK2QT13QTextDocument4sizeEv_ptr
// Target type:     _QWORD(QT::QTextDocument *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT13QTextDocument4sizeEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT13QTextDocument4sizeEv via GOT/IAT indirection
    return _ZNK2QT13QTextDocument4sizeEv(/* forwarded args */);
}

