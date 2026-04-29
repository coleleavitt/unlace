// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16CA0
// Name:            ._ZNK2QT6QLineF10unitVectorEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x16CA0 jmp     cs:off_4F638
//
// Resolved target: _ZNK2QT6QLineF10unitVectorEv
// Target address:  0x508F0
// GOT/IAT slot:    0x4F638
// Slot symbol:     off_4F638
// Target type:     _QWORD(QT::QLineF *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT6QLineF10unitVectorEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT6QLineF10unitVectorEv via GOT/IAT indirection
    return _ZNK2QT6QLineF10unitVectorEv(/* forwarded args */);
}

