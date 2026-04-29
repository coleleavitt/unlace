// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16A10
// Name:            ._ZN2QT17QVariantAnimationC1EPNS_7QObjectE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x16A10 jmp     cs:off_4F4F0
//
// Resolved target: _ZN2QT17QVariantAnimationC1EPNS_7QObjectE
// Target address:  0x50718
// GOT/IAT slot:    0x4F4F0
// Slot symbol:     off_4F4F0
// Target type:     _QWORD(QT::QVariantAnimation *__hidden this, QT::QObject *)
// ============================================================

/* see target sig */ ._ZN2QT17QVariantAnimationC1EPNS_7QObjectE(/* see target signature */)
{
    // Tail-call to _ZN2QT17QVariantAnimationC1EPNS_7QObjectE via GOT/IAT indirection
    return _ZN2QT17QVariantAnimationC1EPNS_7QObjectE(/* forwarded args */);
}

