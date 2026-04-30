// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115BC0
// Name:            ._ZNK2QT13QTextDocument14documentLayoutEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115BC0 jmp     cs:_ZNK2QT13QTextDocument14documentLayoutEv_ptr
//
// Resolved target: _ZNK2QT13QTextDocument14documentLayoutEv
// Target address:  0x8D6128
// GOT/IAT slot:    0x8A1A80
// Slot symbol:     _ZNK2QT13QTextDocument14documentLayoutEv_ptr
// Target type:     _QWORD(QT::QTextDocument *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT13QTextDocument14documentLayoutEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT13QTextDocument14documentLayoutEv via GOT/IAT indirection
    return _ZNK2QT13QTextDocument14documentLayoutEv(/* forwarded args */);
}

