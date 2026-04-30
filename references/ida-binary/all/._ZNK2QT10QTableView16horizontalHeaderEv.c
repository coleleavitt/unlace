// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111C20
// Name:            ._ZNK2QT10QTableView16horizontalHeaderEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111C20 jmp     cs:_ZNK2QT10QTableView16horizontalHeaderEv_ptr
//
// Resolved target: _ZNK2QT10QTableView16horizontalHeaderEv
// Target address:  0x8D3850
// GOT/IAT slot:    0x89FAB0
// Slot symbol:     _ZNK2QT10QTableView16horizontalHeaderEv_ptr
// Target type:     _QWORD(QT::QTableView *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT10QTableView16horizontalHeaderEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT10QTableView16horizontalHeaderEv via GOT/IAT indirection
    return _ZNK2QT10QTableView16horizontalHeaderEv(/* forwarded args */);
}

