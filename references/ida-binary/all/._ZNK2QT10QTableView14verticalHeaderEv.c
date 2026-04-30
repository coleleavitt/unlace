// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112080
// Name:            ._ZNK2QT10QTableView14verticalHeaderEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112080 jmp     cs:_ZNK2QT10QTableView14verticalHeaderEv_ptr
//
// Resolved target: _ZNK2QT10QTableView14verticalHeaderEv
// Target address:  0x8D3B10
// GOT/IAT slot:    0x89FCE0
// Slot symbol:     _ZNK2QT10QTableView14verticalHeaderEv_ptr
// Target type:     _QWORD(QT::QTableView *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT10QTableView14verticalHeaderEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT10QTableView14verticalHeaderEv via GOT/IAT indirection
    return _ZNK2QT10QTableView14verticalHeaderEv(/* forwarded args */);
}

