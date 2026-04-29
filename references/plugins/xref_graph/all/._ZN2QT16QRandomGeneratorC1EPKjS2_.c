// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16390
// Name:            ._ZN2QT16QRandomGeneratorC1EPKjS2_
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x16390 jmp     cs:off_4F1B0
//
// Resolved target: _ZN2QT16QRandomGeneratorC1EPKjS2_
// Target address:  0x500A8
// GOT/IAT slot:    0x4F1B0
// Slot symbol:     off_4F1B0
// Target type:     _QWORD(QT::QRandomGenerator *__hidden this, const unsigned int *, const unsigned int *)
// ============================================================

/* see target sig */ ._ZN2QT16QRandomGeneratorC1EPKjS2_(/* see target signature */)
{
    // Tail-call to _ZN2QT16QRandomGeneratorC1EPKjS2_ via GOT/IAT indirection
    return _ZN2QT16QRandomGeneratorC1EPKjS2_(/* forwarded args */);
}

