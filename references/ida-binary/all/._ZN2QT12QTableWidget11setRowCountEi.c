// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118550
// Name:            ._ZN2QT12QTableWidget11setRowCountEi
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118550 jmp     cs:_ZN2QT12QTableWidget11setRowCountEi_ptr
//
// Resolved target: _ZN2QT12QTableWidget11setRowCountEi
// Target address:  0x8D7B60
// GOT/IAT slot:    0x8A2F48
// Slot symbol:     _ZN2QT12QTableWidget11setRowCountEi_ptr
// Target type:     _QWORD(QT::QTableWidget *__hidden this, int)
// ============================================================

/* see target sig */ ._ZN2QT12QTableWidget11setRowCountEi(/* see target signature */)
{
    // Tail-call to _ZN2QT12QTableWidget11setRowCountEi via GOT/IAT indirection
    return _ZN2QT12QTableWidget11setRowCountEi(/* forwarded args */);
}

