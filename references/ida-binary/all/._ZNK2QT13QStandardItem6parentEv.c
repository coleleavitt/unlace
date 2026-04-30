// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117530
// Name:            ._ZNK2QT13QStandardItem6parentEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117530 jmp     cs:_ZNK2QT13QStandardItem6parentEv_ptr
//
// Resolved target: _ZNK2QT13QStandardItem6parentEv
// Target address:  0x8D7148
// GOT/IAT slot:    0x8A2738
// Slot symbol:     _ZNK2QT13QStandardItem6parentEv_ptr
// Target type:     _QWORD(QT::QStandardItem *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT13QStandardItem6parentEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT13QStandardItem6parentEv via GOT/IAT indirection
    return _ZNK2QT13QStandardItem6parentEv(/* forwarded args */);
}

