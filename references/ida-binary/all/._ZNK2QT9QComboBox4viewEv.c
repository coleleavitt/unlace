// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A8E0
// Name:            ._ZNK2QT9QComboBox4viewEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A8E0 jmp     cs:_ZNK2QT9QComboBox4viewEv_ptr
//
// Resolved target: _ZNK2QT9QComboBox4viewEv
// Target address:  0x8D91D8
// GOT/IAT slot:    0x8A4110
// Slot symbol:     _ZNK2QT9QComboBox4viewEv_ptr
// Target type:     _QWORD(QT::QComboBox *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT9QComboBox4viewEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT9QComboBox4viewEv via GOT/IAT indirection
    return _ZNK2QT9QComboBox4viewEv(/* forwarded args */);
}

