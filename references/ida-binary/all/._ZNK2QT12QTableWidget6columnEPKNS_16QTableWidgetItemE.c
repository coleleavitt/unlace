// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11B3A0
// Name:            ._ZNK2QT12QTableWidget6columnEPKNS_16QTableWidgetItemE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11B3A0 jmp     cs:_ZNK2QT12QTableWidget6columnEPKNS_16QTableWidgetItemE_ptr
//
// Resolved target: _ZNK2QT12QTableWidget6columnEPKNS_16QTableWidgetItemE
// Target address:  0x8D9888
// GOT/IAT slot:    0x8A4670
// Slot symbol:     _ZNK2QT12QTableWidget6columnEPKNS_16QTableWidgetItemE_ptr
// Target type:     _QWORD(QT::QTableWidget *__hidden this, const QT::QTableWidgetItem *)
// ============================================================

/* see target sig */ ._ZNK2QT12QTableWidget6columnEPKNS_16QTableWidgetItemE(/* see target signature */)
{
    // Tail-call to _ZNK2QT12QTableWidget6columnEPKNS_16QTableWidgetItemE via GOT/IAT indirection
    return _ZNK2QT12QTableWidget6columnEPKNS_16QTableWidgetItemE(/* forwarded args */);
}

