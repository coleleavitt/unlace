// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115C00
// Name:            ._ZNK2QT19QItemSelectionModel15selectedIndexesEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115C00 jmp     cs:_ZNK2QT19QItemSelectionModel15selectedIndexesEv_ptr
//
// Resolved target: _ZNK2QT19QItemSelectionModel15selectedIndexesEv
// Target address:  0x8D6148
// GOT/IAT slot:    0x8A1AA0
// Slot symbol:     _ZNK2QT19QItemSelectionModel15selectedIndexesEv_ptr
// Target type:     _QWORD(QT::QItemSelectionModel *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT19QItemSelectionModel15selectedIndexesEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT19QItemSelectionModel15selectedIndexesEv via GOT/IAT indirection
    return _ZNK2QT19QItemSelectionModel15selectedIndexesEv(/* forwarded args */);
}

