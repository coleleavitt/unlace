// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114100
// Name:            ._ZNK2QT9QComboBox5countEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114100 jmp     cs:_ZNK2QT9QComboBox5countEv_ptr
//
// Resolved target: _ZNK2QT9QComboBox5countEv
// Target address:  0x8D5000
// GOT/IAT slot:    0x8A0D20
// Slot symbol:     _ZNK2QT9QComboBox5countEv_ptr
// Target type:     _QWORD(QT::QComboBox *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT9QComboBox5countEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT9QComboBox5countEv via GOT/IAT indirection
    return _ZNK2QT9QComboBox5countEv(/* forwarded args */);
}

