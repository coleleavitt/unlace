// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11B880
// Name:            ._ZNK2QT12QTableWidget8rowCountEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11B880 jmp     cs:_ZNK2QT12QTableWidget8rowCountEv_ptr
//
// Resolved target: _ZNK2QT12QTableWidget8rowCountEv
// Target address:  0x8D9B88
// GOT/IAT slot:    0x8A48E0
// Slot symbol:     _ZNK2QT12QTableWidget8rowCountEv_ptr
// Target type:     _QWORD(QT::QTableWidget *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT12QTableWidget8rowCountEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT12QTableWidget8rowCountEv via GOT/IAT indirection
    return _ZNK2QT12QTableWidget8rowCountEv(/* forwarded args */);
}

