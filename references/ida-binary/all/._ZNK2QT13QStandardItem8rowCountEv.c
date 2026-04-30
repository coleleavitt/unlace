// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111870
// Name:            ._ZNK2QT13QStandardItem8rowCountEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111870 jmp     cs:_ZNK2QT13QStandardItem8rowCountEv_ptr
//
// Resolved target: _ZNK2QT13QStandardItem8rowCountEv
// Target address:  0x8D3618
// GOT/IAT slot:    0x89F8D8
// Slot symbol:     _ZNK2QT13QStandardItem8rowCountEv_ptr
// Target type:     _QWORD(QT::QStandardItem *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT13QStandardItem8rowCountEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT13QStandardItem8rowCountEv via GOT/IAT indirection
    return _ZNK2QT13QStandardItem8rowCountEv(/* forwarded args */);
}

