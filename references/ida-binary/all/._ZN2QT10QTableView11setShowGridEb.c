// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118DC0
// Name:            ._ZN2QT10QTableView11setShowGridEb
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118DC0 jmp     cs:_ZN2QT10QTableView11setShowGridEb_ptr
//
// Resolved target: _ZN2QT10QTableView11setShowGridEb
// Target address:  0x8D8050
// GOT/IAT slot:    0x8A3380
// Slot symbol:     _ZN2QT10QTableView11setShowGridEb_ptr
// Target type:     _QWORD(QT::QTableView *__hidden this, bool)
// ============================================================

/* see target sig */ ._ZN2QT10QTableView11setShowGridEb(/* see target signature */)
{
    // Tail-call to _ZN2QT10QTableView11setShowGridEb via GOT/IAT indirection
    return _ZN2QT10QTableView11setShowGridEb(/* forwarded args */);
}

