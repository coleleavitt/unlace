// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16740
// Name:            ._ZNK2QT9QLineEdit4textEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x16740 jmp     cs:off_4F388
//
// Resolved target: _ZNK2QT9QLineEdit4textEv
// Target address:  0x503E0
// GOT/IAT slot:    0x4F388
// Slot symbol:     off_4F388
// Target type:     _QWORD(QT::QLineEdit *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT9QLineEdit4textEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT9QLineEdit4textEv via GOT/IAT indirection
    return _ZNK2QT9QLineEdit4textEv(/* forwarded args */);
}

