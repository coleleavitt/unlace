// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11BB70
// Name:            ._ZNK2QT9QComboBox8lineEditEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11BB70 jmp     cs:_ZNK2QT9QComboBox8lineEditEv_ptr
//
// Resolved target: _ZNK2QT9QComboBox8lineEditEv
// Target address:  0x8D9D58
// GOT/IAT slot:    0x8A4A58
// Slot symbol:     _ZNK2QT9QComboBox8lineEditEv_ptr
// Target type:     _QWORD(QT::QComboBox *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT9QComboBox8lineEditEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT9QComboBox8lineEditEv via GOT/IAT indirection
    return _ZNK2QT9QComboBox8lineEditEv(/* forwarded args */);
}

