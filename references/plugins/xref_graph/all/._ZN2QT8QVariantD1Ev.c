// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x172A0
// Name:            ._ZN2QT8QVariantD1Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x172A0 jmp     cs:off_4F938
//
// Resolved target: _ZN2QT8QVariantD1Ev
// Target address:  0x50E48
// GOT/IAT slot:    0x4F938
// Slot symbol:     off_4F938
// Target type:     void(QT::QVariant *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT8QVariantD1Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT8QVariantD1Ev via GOT/IAT indirection
    return _ZN2QT8QVariantD1Ev(/* forwarded args */);
}

