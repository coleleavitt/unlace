// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16910
// Name:            ._ZN2QT17QVariantAnimationD1Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x16910 jmp     cs:off_4F470
//
// Resolved target: _ZN2QT17QVariantAnimationD1Ev
// Target address:  0x50610
// GOT/IAT slot:    0x4F470
// Slot symbol:     off_4F470
// Target type:     void(QT::QVariantAnimation *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT17QVariantAnimationD1Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT17QVariantAnimationD1Ev via GOT/IAT indirection
    return _ZN2QT17QVariantAnimationD1Ev(/* forwarded args */);
}

