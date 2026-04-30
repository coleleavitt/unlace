// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112450
// Name:            ._ZNK2QT12QTableWidget10currentRowEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112450 jmp     cs:_ZNK2QT12QTableWidget10currentRowEv_ptr
//
// Resolved target: _ZNK2QT12QTableWidget10currentRowEv
// Target address:  0x8D3D90
// GOT/IAT slot:    0x89FEC8
// Slot symbol:     _ZNK2QT12QTableWidget10currentRowEv_ptr
// Target type:     _QWORD(QT::QTableWidget *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT12QTableWidget10currentRowEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT12QTableWidget10currentRowEv via GOT/IAT indirection
    return _ZNK2QT12QTableWidget10currentRowEv(/* forwarded args */);
}

