// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118330
// Name:            ._ZN2QT8QVariantC1Ey
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118330 jmp     cs:_ZN2QT8QVariantC1Ey_ptr
//
// Resolved target: _ZN2QT8QVariantC1Ey
// Target address:  0x8D7A08
// GOT/IAT slot:    0x8A2E38
// Slot symbol:     _ZN2QT8QVariantC1Ey_ptr
// Target type:     _QWORD(QT::QVariant *__hidden this, unsigned __int64)
// ============================================================

/* see target sig */ ._ZN2QT8QVariantC1Ey(/* see target signature */)
{
    // Tail-call to _ZN2QT8QVariantC1Ey via GOT/IAT indirection
    return _ZN2QT8QVariantC1Ey(/* forwarded args */);
}

