// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1116A0
// Name:            ._ZNK2QT12QTableWidget11columnCountEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1116A0 jmp     cs:_ZNK2QT12QTableWidget11columnCountEv_ptr
//
// Resolved target: _ZNK2QT12QTableWidget11columnCountEv
// Target address:  0x8D34D0
// GOT/IAT slot:    0x89F7F0
// Slot symbol:     _ZNK2QT12QTableWidget11columnCountEv_ptr
// Target type:     _QWORD(QT::QTableWidget *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT12QTableWidget11columnCountEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT12QTableWidget11columnCountEv via GOT/IAT indirection
    return _ZNK2QT12QTableWidget11columnCountEv(/* forwarded args */);
}

