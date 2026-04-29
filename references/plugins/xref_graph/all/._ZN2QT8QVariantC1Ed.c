// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x17420
// Name:            ._ZN2QT8QVariantC1Ed
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x17420 jmp     cs:off_4F9F8
//
// Resolved target: _ZN2QT8QVariantC1Ed
// Target address:  0x50FC8
// GOT/IAT slot:    0x4F9F8
// Slot symbol:     off_4F9F8
// Target type:     _QWORD(QT::QVariant *__hidden this, double)
// ============================================================

/* see target sig */ ._ZN2QT8QVariantC1Ed(/* see target signature */)
{
    // Tail-call to _ZN2QT8QVariantC1Ed via GOT/IAT indirection
    return _ZN2QT8QVariantC1Ed(/* forwarded args */);
}

