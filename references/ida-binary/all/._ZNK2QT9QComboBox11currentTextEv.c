// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117E20
// Name:            ._ZNK2QT9QComboBox11currentTextEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117E20 jmp     cs:_ZNK2QT9QComboBox11currentTextEv_ptr
//
// Resolved target: _ZNK2QT9QComboBox11currentTextEv
// Target address:  0x8D76D0
// GOT/IAT slot:    0x8A2BB0
// Slot symbol:     _ZNK2QT9QComboBox11currentTextEv_ptr
// Target type:     _QWORD(QT::QComboBox *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT9QComboBox11currentTextEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT9QComboBox11currentTextEv via GOT/IAT indirection
    return _ZNK2QT9QComboBox11currentTextEv(/* forwarded args */);
}

