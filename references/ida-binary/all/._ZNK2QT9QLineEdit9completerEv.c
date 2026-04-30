// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1166E0
// Name:            ._ZNK2QT9QLineEdit9completerEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1166E0 jmp     cs:_ZNK2QT9QLineEdit9completerEv_ptr
//
// Resolved target: _ZNK2QT9QLineEdit9completerEv
// Target address:  0x8D6810
// GOT/IAT slot:    0x8A2010
// Slot symbol:     _ZNK2QT9QLineEdit9completerEv_ptr
// Target type:     _QWORD(QT::QLineEdit *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT9QLineEdit9completerEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT9QLineEdit9completerEv via GOT/IAT indirection
    return _ZNK2QT9QLineEdit9completerEv(/* forwarded args */);
}

