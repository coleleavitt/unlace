// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111A10
// Name:            ._ZNK2QT12QTableWidget13selectedItemsEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111A10 jmp     cs:_ZNK2QT12QTableWidget13selectedItemsEv_ptr
//
// Resolved target: _ZNK2QT12QTableWidget13selectedItemsEv
// Target address:  0x8D3710
// GOT/IAT slot:    0x89F9A8
// Slot symbol:     _ZNK2QT12QTableWidget13selectedItemsEv_ptr
// Target type:     _QWORD(QT::QTableWidget *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT12QTableWidget13selectedItemsEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT12QTableWidget13selectedItemsEv via GOT/IAT indirection
    return _ZNK2QT12QTableWidget13selectedItemsEv(/* forwarded args */);
}

