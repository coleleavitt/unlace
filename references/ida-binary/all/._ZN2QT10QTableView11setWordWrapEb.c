// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113D90
// Name:            ._ZN2QT10QTableView11setWordWrapEb
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113D90 jmp     cs:_ZN2QT10QTableView11setWordWrapEb_ptr
//
// Resolved target: _ZN2QT10QTableView11setWordWrapEb
// Target address:  0x8D4DD0
// GOT/IAT slot:    0x8A0B68
// Slot symbol:     _ZN2QT10QTableView11setWordWrapEb_ptr
// Target type:     _QWORD(QT::QTableView *__hidden this, bool)
// ============================================================

/* see target sig */ ._ZN2QT10QTableView11setWordWrapEb(/* see target signature */)
{
    // Tail-call to _ZN2QT10QTableView11setWordWrapEb via GOT/IAT indirection
    return _ZN2QT10QTableView11setWordWrapEb(/* forwarded args */);
}

