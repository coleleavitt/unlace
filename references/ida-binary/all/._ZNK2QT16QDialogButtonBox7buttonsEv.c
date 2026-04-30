// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113480
// Name:            ._ZNK2QT16QDialogButtonBox7buttonsEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113480 jmp     cs:_ZNK2QT16QDialogButtonBox7buttonsEv_ptr
//
// Resolved target: _ZNK2QT16QDialogButtonBox7buttonsEv
// Target address:  0x8D4810
// GOT/IAT slot:    0x8A06E0
// Slot symbol:     _ZNK2QT16QDialogButtonBox7buttonsEv_ptr
// Target type:     _QWORD(QT::QDialogButtonBox *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT16QDialogButtonBox7buttonsEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT16QDialogButtonBox7buttonsEv via GOT/IAT indirection
    return _ZNK2QT16QDialogButtonBox7buttonsEv(/* forwarded args */);
}

