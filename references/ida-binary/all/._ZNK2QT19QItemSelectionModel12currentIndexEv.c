// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1148E0
// Name:            ._ZNK2QT19QItemSelectionModel12currentIndexEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1148E0 jmp     cs:_ZNK2QT19QItemSelectionModel12currentIndexEv_ptr
//
// Resolved target: _ZNK2QT19QItemSelectionModel12currentIndexEv
// Target address:  0x8D5540
// GOT/IAT slot:    0x8A1110
// Slot symbol:     _ZNK2QT19QItemSelectionModel12currentIndexEv_ptr
// Target type:     _QWORD(QT::QItemSelectionModel *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT19QItemSelectionModel12currentIndexEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT19QItemSelectionModel12currentIndexEv via GOT/IAT indirection
    return _ZNK2QT19QItemSelectionModel12currentIndexEv(/* forwarded args */);
}

