// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1151A0
// Name:            ._ZNK2QT19QItemSelectionModel12selectedRowsEi
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1151A0 jmp     cs:_ZNK2QT19QItemSelectionModel12selectedRowsEi_ptr
//
// Resolved target: _ZNK2QT19QItemSelectionModel12selectedRowsEi
// Target address:  0x8D5AC0
// GOT/IAT slot:    0x8A1570
// Slot symbol:     _ZNK2QT19QItemSelectionModel12selectedRowsEi_ptr
// Target type:     _QWORD(QT::QItemSelectionModel *__hidden this, int)
// ============================================================

/* see target sig */ ._ZNK2QT19QItemSelectionModel12selectedRowsEi(/* see target signature */)
{
    // Tail-call to _ZNK2QT19QItemSelectionModel12selectedRowsEi via GOT/IAT indirection
    return _ZNK2QT19QItemSelectionModel12selectedRowsEi(/* forwarded args */);
}

