// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119360
// Name:            ._ZNK2QT9QComboBox12currentIndexEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119360 jmp     cs:_ZNK2QT9QComboBox12currentIndexEv_ptr
//
// Resolved target: _ZNK2QT9QComboBox12currentIndexEv
// Target address:  0x8D83F8
// GOT/IAT slot:    0x8A3650
// Slot symbol:     _ZNK2QT9QComboBox12currentIndexEv_ptr
// Target type:     _QWORD(QT::QComboBox *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT9QComboBox12currentIndexEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT9QComboBox12currentIndexEv via GOT/IAT indirection
    return _ZNK2QT9QComboBox12currentIndexEv(/* forwarded args */);
}

