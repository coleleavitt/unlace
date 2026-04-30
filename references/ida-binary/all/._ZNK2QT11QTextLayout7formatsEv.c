// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1176A0
// Name:            ._ZNK2QT11QTextLayout7formatsEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1176A0 jmp     cs:_ZNK2QT11QTextLayout7formatsEv_ptr
//
// Resolved target: _ZNK2QT11QTextLayout7formatsEv
// Target address:  0x8D7220
// GOT/IAT slot:    0x8A27F0
// Slot symbol:     _ZNK2QT11QTextLayout7formatsEv_ptr
// Target type:     _QWORD(QT::QTextLayout *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT11QTextLayout7formatsEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT11QTextLayout7formatsEv via GOT/IAT indirection
    return _ZNK2QT11QTextLayout7formatsEv(/* forwarded args */);
}

