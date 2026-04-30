// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113470
// Name:            ._ZN2QT8QVariant7compareERKS0_S2_
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113470 jmp     cs:_ZN2QT8QVariant7compareERKS0_S2__ptr
//
// Resolved target: _ZN2QT8QVariant7compareERKS0_S2_
// Target address:  0x8D4808
// GOT/IAT slot:    0x8A06D8
// Slot symbol:     _ZN2QT8QVariant7compareERKS0_S2__ptr
// Target type:     _QWORD(QT::QVariant *__hidden this, const QT::QVariant *, const QT::QVariant *)
// ============================================================

/* see target sig */ ._ZN2QT8QVariant7compareERKS0_S2_(/* see target signature */)
{
    // Tail-call to _ZN2QT8QVariant7compareERKS0_S2_ via GOT/IAT indirection
    return _ZN2QT8QVariant7compareERKS0_S2_(/* forwarded args */);
}

