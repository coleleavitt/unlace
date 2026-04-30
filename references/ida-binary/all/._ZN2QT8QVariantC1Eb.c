// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1127D0
// Name:            ._ZN2QT8QVariantC1Eb
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1127D0 jmp     cs:_ZN2QT8QVariantC1Eb_ptr
//
// Resolved target: _ZN2QT8QVariantC1Eb
// Target address:  0x8D3FE8
// GOT/IAT slot:    0x8A0088
// Slot symbol:     _ZN2QT8QVariantC1Eb_ptr
// Target type:     _QWORD(QT::QVariant *__hidden this, bool)
// ============================================================

/* see target sig */ ._ZN2QT8QVariantC1Eb(/* see target signature */)
{
    // Tail-call to _ZN2QT8QVariantC1Eb via GOT/IAT indirection
    return _ZN2QT8QVariantC1Eb(/* forwarded args */);
}

