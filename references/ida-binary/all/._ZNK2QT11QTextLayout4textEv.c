// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111080
// Name:            ._ZNK2QT11QTextLayout4textEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111080 jmp     cs:_ZNK2QT11QTextLayout4textEv_ptr
//
// Resolved target: _ZNK2QT11QTextLayout4textEv
// Target address:  0x8D30D8
// GOT/IAT slot:    0x89F4E0
// Slot symbol:     _ZNK2QT11QTextLayout4textEv_ptr
// Target type:     _QWORD(QT::QTextLayout *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT11QTextLayout4textEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT11QTextLayout4textEv via GOT/IAT indirection
    return _ZNK2QT11QTextLayout4textEv(/* forwarded args */);
}

