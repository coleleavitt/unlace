// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112B30
// Name:            ._ZNK2QT16QDialogButtonBox14standardButtonEPNS_15QAbstractButtonE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112B30 jmp     cs:_ZNK2QT16QDialogButtonBox14standardButtonEPNS_15QAbstractButtonE_ptr
//
// Resolved target: _ZNK2QT16QDialogButtonBox14standardButtonEPNS_15QAbstractButtonE
// Target address:  0x8D41E8
// GOT/IAT slot:    0x8A0238
// Slot symbol:     _ZNK2QT16QDialogButtonBox14standardButtonEPNS_15QAbstractButtonE_ptr
// Target type:     _QWORD(QT::QDialogButtonBox *__hidden this, QT::QAbstractButton *)
// ============================================================

/* see target sig */ ._ZNK2QT16QDialogButtonBox14standardButtonEPNS_15QAbstractButtonE(/* see target signature */)
{
    // Tail-call to _ZNK2QT16QDialogButtonBox14standardButtonEPNS_15QAbstractButtonE via GOT/IAT indirection
    return _ZNK2QT16QDialogButtonBox14standardButtonEPNS_15QAbstractButtonE(/* forwarded args */);
}

