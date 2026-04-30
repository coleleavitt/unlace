// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114CD0
// Name:            ._ZNK2QT8QVariant6toUIntEPb
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114CD0 jmp     cs:_ZNK2QT8QVariant6toUIntEPb_ptr
//
// Resolved target: _ZNK2QT8QVariant6toUIntEPb
// Target address:  0x8D57F8
// GOT/IAT slot:    0x8A1308
// Slot symbol:     _ZNK2QT8QVariant6toUIntEPb_ptr
// Target type:     _QWORD(QT::QVariant *__hidden this, bool *)
// ============================================================

/* see target sig */ ._ZNK2QT8QVariant6toUIntEPb(/* see target signature */)
{
    // Tail-call to _ZNK2QT8QVariant6toUIntEPb via GOT/IAT indirection
    return _ZNK2QT8QVariant6toUIntEPb(/* forwarded args */);
}

