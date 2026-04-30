// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111100
// Name:            ._ZNK2QT13QStandardItem5childEii
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111100 jmp     cs:_ZNK2QT13QStandardItem5childEii_ptr
//
// Resolved target: _ZNK2QT13QStandardItem5childEii
// Target address:  0x8D3118
// GOT/IAT slot:    0x89F520
// Slot symbol:     _ZNK2QT13QStandardItem5childEii_ptr
// Target type:     _QWORD(QT::QStandardItem *__hidden this, int, int)
// ============================================================

/* see target sig */ ._ZNK2QT13QStandardItem5childEii(/* see target signature */)
{
    // Tail-call to _ZNK2QT13QStandardItem5childEii via GOT/IAT indirection
    return _ZNK2QT13QStandardItem5childEii(/* forwarded args */);
}

