// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114ED0
// Name:            ._ZNK2QT13QStandardItem5modelEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114ED0 jmp     cs:_ZNK2QT13QStandardItem5modelEv_ptr
//
// Resolved target: _ZNK2QT13QStandardItem5modelEv
// Target address:  0x8D5928
// GOT/IAT slot:    0x8A1408
// Slot symbol:     _ZNK2QT13QStandardItem5modelEv_ptr
// Target type:     _QWORD(QT::QStandardItem *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT13QStandardItem5modelEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT13QStandardItem5modelEv via GOT/IAT indirection
    return _ZNK2QT13QStandardItem5modelEv(/* forwarded args */);
}

