// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x164D0
// Name:            ._ZNK2QT6QLineF6lengthEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x164D0 jmp     cs:off_4F250
//
// Resolved target: _ZNK2QT6QLineF6lengthEv
// Target address:  0x50208
// GOT/IAT slot:    0x4F250
// Slot symbol:     off_4F250
// Target type:     _QWORD(QT::QLineF *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT6QLineF6lengthEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT6QLineF6lengthEv via GOT/IAT indirection
    return _ZNK2QT6QLineF6lengthEv(/* forwarded args */);
}

