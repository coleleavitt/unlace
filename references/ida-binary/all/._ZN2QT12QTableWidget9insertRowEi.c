// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116C10
// Name:            ._ZN2QT12QTableWidget9insertRowEi
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116C10 jmp     cs:_ZN2QT12QTableWidget9insertRowEi_ptr
//
// Resolved target: _ZN2QT12QTableWidget9insertRowEi
// Target address:  0x8D6B68
// GOT/IAT slot:    0x8A22A8
// Slot symbol:     _ZN2QT12QTableWidget9insertRowEi_ptr
// Target type:     _QWORD(QT::QTableWidget *__hidden this, int)
// ============================================================

/* see target sig */ ._ZN2QT12QTableWidget9insertRowEi(/* see target signature */)
{
    // Tail-call to _ZN2QT12QTableWidget9insertRowEi via GOT/IAT indirection
    return _ZN2QT12QTableWidget9insertRowEi(/* forwarded args */);
}

