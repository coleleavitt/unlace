// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116790
// Name:            ._ZNK2QT18QStandardItemModel13indexFromItemEPKNS_13QStandardItemE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116790 jmp     cs:_ZNK2QT18QStandardItemModel13indexFromItemEPKNS_13QStandardItemE_ptr
//
// Resolved target: _ZNK2QT18QStandardItemModel13indexFromItemEPKNS_13QStandardItemE
// Target address:  0x8D6890
// GOT/IAT slot:    0x8A2068
// Slot symbol:     _ZNK2QT18QStandardItemModel13indexFromItemEPKNS_13QStandardItemE_ptr
// Target type:     _QWORD(QT::QStandardItemModel *__hidden this, const QT::QStandardItem *)
// ============================================================

/* see target sig */ ._ZNK2QT18QStandardItemModel13indexFromItemEPKNS_13QStandardItemE(/* see target signature */)
{
    // Tail-call to _ZNK2QT18QStandardItemModel13indexFromItemEPKNS_13QStandardItemE via GOT/IAT indirection
    return _ZNK2QT18QStandardItemModel13indexFromItemEPKNS_13QStandardItemE(/* forwarded args */);
}

