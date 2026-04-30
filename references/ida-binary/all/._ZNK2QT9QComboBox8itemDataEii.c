// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118810
// Name:            ._ZNK2QT9QComboBox8itemDataEii
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118810 jmp     cs:_ZNK2QT9QComboBox8itemDataEii_ptr
//
// Resolved target: _ZNK2QT9QComboBox8itemDataEii
// Target address:  0x8D7D00
// GOT/IAT slot:    0x8A30A8
// Slot symbol:     _ZNK2QT9QComboBox8itemDataEii_ptr
// Target type:     _QWORD(QT::QComboBox *__hidden this, int, int)
// ============================================================

/* see target sig */ ._ZNK2QT9QComboBox8itemDataEii(/* see target signature */)
{
    // Tail-call to _ZNK2QT9QComboBox8itemDataEii via GOT/IAT indirection
    return _ZNK2QT9QComboBox8itemDataEii(/* forwarded args */);
}

