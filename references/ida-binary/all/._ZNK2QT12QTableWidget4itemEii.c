// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1197E0
// Name:            ._ZNK2QT12QTableWidget4itemEii
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1197E0 jmp     cs:_ZNK2QT12QTableWidget4itemEii_ptr
//
// Resolved target: _ZNK2QT12QTableWidget4itemEii
// Target address:  0x8D8708
// GOT/IAT slot:    0x8A3890
// Slot symbol:     _ZNK2QT12QTableWidget4itemEii_ptr
// Target type:     _QWORD(QT::QTableWidget *__hidden this, int, int)
// ============================================================

/* see target sig */ ._ZNK2QT12QTableWidget4itemEii(/* see target signature */)
{
    // Tail-call to _ZNK2QT12QTableWidget4itemEii via GOT/IAT indirection
    return _ZNK2QT12QTableWidget4itemEii(/* forwarded args */);
}

