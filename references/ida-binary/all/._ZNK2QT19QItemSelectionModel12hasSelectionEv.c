// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117390
// Name:            ._ZNK2QT19QItemSelectionModel12hasSelectionEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117390 jmp     cs:_ZNK2QT19QItemSelectionModel12hasSelectionEv_ptr
//
// Resolved target: _ZNK2QT19QItemSelectionModel12hasSelectionEv
// Target address:  0x8D7038
// GOT/IAT slot:    0x8A2668
// Slot symbol:     _ZNK2QT19QItemSelectionModel12hasSelectionEv_ptr
// Target type:     _QWORD(QT::QItemSelectionModel *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT19QItemSelectionModel12hasSelectionEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT19QItemSelectionModel12hasSelectionEv via GOT/IAT indirection
    return _ZNK2QT19QItemSelectionModel12hasSelectionEv(/* forwarded args */);
}

