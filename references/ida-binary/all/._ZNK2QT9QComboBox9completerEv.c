// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1161E0
// Name:            ._ZNK2QT9QComboBox9completerEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1161E0 jmp     cs:_ZNK2QT9QComboBox9completerEv_ptr
//
// Resolved target: _ZNK2QT9QComboBox9completerEv
// Target address:  0x8D64F8
// GOT/IAT slot:    0x8A1D90
// Slot symbol:     _ZNK2QT9QComboBox9completerEv_ptr
// Target type:     _QWORD(QT::QComboBox *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT9QComboBox9completerEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT9QComboBox9completerEv via GOT/IAT indirection
    return _ZNK2QT9QComboBox9completerEv(/* forwarded args */);
}

