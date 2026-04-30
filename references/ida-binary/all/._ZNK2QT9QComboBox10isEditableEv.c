// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1184E0
// Name:            ._ZNK2QT9QComboBox10isEditableEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1184E0 jmp     cs:_ZNK2QT9QComboBox10isEditableEv_ptr
//
// Resolved target: _ZNK2QT9QComboBox10isEditableEv
// Target address:  0x8D7B10
// GOT/IAT slot:    0x8A2F10
// Slot symbol:     _ZNK2QT9QComboBox10isEditableEv_ptr
// Target type:     _QWORD(QT::QComboBox *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT9QComboBox10isEditableEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT9QComboBox10isEditableEv via GOT/IAT indirection
    return _ZNK2QT9QComboBox10isEditableEv(/* forwarded args */);
}

