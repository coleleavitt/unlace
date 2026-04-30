// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1137A0
// Name:            ._ZNK2QT8QVariant5toIntEPb
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1137A0 jmp     cs:_ZNK2QT8QVariant5toIntEPb_ptr
//
// Resolved target: _ZNK2QT8QVariant5toIntEPb
// Target address:  0x8D4A08
// GOT/IAT slot:    0x8A0870
// Slot symbol:     _ZNK2QT8QVariant5toIntEPb_ptr
// Target type:     _QWORD(QT::QVariant *__hidden this, bool *)
// ============================================================

/* see target sig */ ._ZNK2QT8QVariant5toIntEPb(/* see target signature */)
{
    // Tail-call to _ZNK2QT8QVariant5toIntEPb via GOT/IAT indirection
    return _ZNK2QT8QVariant5toIntEPb(/* forwarded args */);
}

