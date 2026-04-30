// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1140F0
// Name:            ._ZN2QT8QVariantC1Ei
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1140F0 jmp     cs:_ZN2QT8QVariantC1Ei_ptr
//
// Resolved target: _ZN2QT8QVariantC1Ei
// Target address:  0x8D4FF8
// GOT/IAT slot:    0x8A0D18
// Slot symbol:     _ZN2QT8QVariantC1Ei_ptr
// Target type:     _QWORD(QT::QVariant *__hidden this, int)
// ============================================================

/* see target sig */ ._ZN2QT8QVariantC1Ei(/* see target signature */)
{
    // Tail-call to _ZN2QT8QVariantC1Ei via GOT/IAT indirection
    return _ZN2QT8QVariantC1Ei(/* forwarded args */);
}

