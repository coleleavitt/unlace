// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111760
// Name:            ._ZNK2QT14QItemSelection7indexesEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111760 jmp     cs:_ZNK2QT14QItemSelection7indexesEv_ptr
//
// Resolved target: _ZNK2QT14QItemSelection7indexesEv
// Target address:  0x8D3550
// GOT/IAT slot:    0x89F850
// Slot symbol:     _ZNK2QT14QItemSelection7indexesEv_ptr
// Target type:     _QWORD(QT::QItemSelection *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT14QItemSelection7indexesEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT14QItemSelection7indexesEv via GOT/IAT indirection
    return _ZNK2QT14QItemSelection7indexesEv(/* forwarded args */);
}

