// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A790
// Name:            ._ZNK2QT11QTextLayout9lineCountEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A790 jmp     cs:_ZNK2QT11QTextLayout9lineCountEv_ptr
//
// Resolved target: _ZNK2QT11QTextLayout9lineCountEv
// Target address:  0x8D9108
// GOT/IAT slot:    0x8A4068
// Slot symbol:     _ZNK2QT11QTextLayout9lineCountEv_ptr
// Target type:     _QWORD(QT::QTextLayout *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT11QTextLayout9lineCountEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT11QTextLayout9lineCountEv via GOT/IAT indirection
    return _ZNK2QT11QTextLayout9lineCountEv(/* forwarded args */);
}

