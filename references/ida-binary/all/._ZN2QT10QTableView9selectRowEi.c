// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119A20
// Name:            ._ZN2QT10QTableView9selectRowEi
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119A20 jmp     cs:_ZN2QT10QTableView9selectRowEi_ptr
//
// Resolved target: _ZN2QT10QTableView9selectRowEi
// Target address:  0x8D8870
// GOT/IAT slot:    0x8A39B0
// Slot symbol:     _ZN2QT10QTableView9selectRowEi_ptr
// Target type:     _QWORD(QT::QTableView *__hidden this, int)
// ============================================================

/* see target sig */ ._ZN2QT10QTableView9selectRowEi(/* see target signature */)
{
    // Tail-call to _ZN2QT10QTableView9selectRowEi via GOT/IAT indirection
    return _ZN2QT10QTableView9selectRowEi(/* forwarded args */);
}

