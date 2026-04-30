// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119EA0
// Name:            ._ZN2QT10QTableViewD2Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119EA0 jmp     cs:_ZN2QT10QTableViewD2Ev_ptr
//
// Resolved target: _ZN2QT10QTableViewD2Ev
// Target address:  0x8D8B20
// GOT/IAT slot:    0x8A3BF0
// Slot symbol:     _ZN2QT10QTableViewD2Ev_ptr
// Target type:     void(QT::QTableView *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT10QTableViewD2Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT10QTableViewD2Ev via GOT/IAT indirection
    return _ZN2QT10QTableViewD2Ev(/* forwarded args */);
}

