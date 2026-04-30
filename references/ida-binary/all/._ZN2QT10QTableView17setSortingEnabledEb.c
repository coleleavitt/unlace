// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1169B0
// Name:            ._ZN2QT10QTableView17setSortingEnabledEb
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1169B0 jmp     cs:_ZN2QT10QTableView17setSortingEnabledEb_ptr
//
// Resolved target: _ZN2QT10QTableView17setSortingEnabledEb
// Target address:  0x8D6A00
// GOT/IAT slot:    0x8A2178
// Slot symbol:     _ZN2QT10QTableView17setSortingEnabledEb_ptr
// Target type:     _QWORD(QT::QTableView *__hidden this, bool)
// ============================================================

/* see target sig */ ._ZN2QT10QTableView17setSortingEnabledEb(/* see target signature */)
{
    // Tail-call to _ZN2QT10QTableView17setSortingEnabledEb via GOT/IAT indirection
    return _ZN2QT10QTableView17setSortingEnabledEb(/* forwarded args */);
}

