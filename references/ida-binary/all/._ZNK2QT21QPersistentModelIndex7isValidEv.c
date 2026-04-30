// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11AD20
// Name:            ._ZNK2QT21QPersistentModelIndex7isValidEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11AD20 jmp     cs:_ZNK2QT21QPersistentModelIndex7isValidEv_ptr
//
// Resolved target: _ZNK2QT21QPersistentModelIndex7isValidEv
// Target address:  0x8D9478
// GOT/IAT slot:    0x8A4330
// Slot symbol:     _ZNK2QT21QPersistentModelIndex7isValidEv_ptr
// Target type:     _QWORD(QT::QPersistentModelIndex *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT21QPersistentModelIndex7isValidEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT21QPersistentModelIndex7isValidEv via GOT/IAT indirection
    return _ZNK2QT21QPersistentModelIndex7isValidEv(/* forwarded args */);
}

