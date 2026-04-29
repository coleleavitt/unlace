// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16380
// Name:            ._ZN2QT8QVariantC1Eb
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x16380 jmp     cs:off_4F1A8
//
// Resolved target: _ZN2QT8QVariantC1Eb
// Target address:  0x500A0
// GOT/IAT slot:    0x4F1A8
// Slot symbol:     off_4F1A8
// Target type:     _QWORD(QT::QVariant *__hidden this, bool)
// ============================================================

/* see target sig */ ._ZN2QT8QVariantC1Eb(/* see target signature */)
{
    // Tail-call to _ZN2QT8QVariantC1Eb via GOT/IAT indirection
    return _ZN2QT8QVariantC1Eb(/* forwarded args */);
}

