// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1141F0
// Name:            ._ZN2QT8QVariantC1ERKS0_
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1141F0 jmp     cs:_ZN2QT8QVariantC1ERKS0__ptr
//
// Resolved target: _ZN2QT8QVariantC1ERKS0_
// Target address:  0x8D5088
// GOT/IAT slot:    0x8A0D98
// Slot symbol:     _ZN2QT8QVariantC1ERKS0__ptr
// Target type:     _QWORD(QT::QVariant *__hidden this, const QT::QVariant *)
// ============================================================

/* see target sig */ ._ZN2QT8QVariantC1ERKS0_(/* see target signature */)
{
    // Tail-call to _ZN2QT8QVariantC1ERKS0_ via GOT/IAT indirection
    return _ZN2QT8QVariantC1ERKS0_(/* forwarded args */);
}

