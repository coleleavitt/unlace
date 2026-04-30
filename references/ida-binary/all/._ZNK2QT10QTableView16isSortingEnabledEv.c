// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119D90
// Name:            ._ZNK2QT10QTableView16isSortingEnabledEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119D90 jmp     cs:_ZNK2QT10QTableView16isSortingEnabledEv_ptr
//
// Resolved target: _ZNK2QT10QTableView16isSortingEnabledEv
// Target address:  0x8D8A60
// GOT/IAT slot:    0x8A3B68
// Slot symbol:     _ZNK2QT10QTableView16isSortingEnabledEv_ptr
// Target type:     _QWORD(QT::QTableView *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT10QTableView16isSortingEnabledEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT10QTableView16isSortingEnabledEv via GOT/IAT indirection
    return _ZNK2QT10QTableView16isSortingEnabledEv(/* forwarded args */);
}

