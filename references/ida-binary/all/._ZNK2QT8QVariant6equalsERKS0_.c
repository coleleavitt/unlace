// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11AF50
// Name:            ._ZNK2QT8QVariant6equalsERKS0_
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11AF50 jmp     cs:_ZNK2QT8QVariant6equalsERKS0__ptr
//
// Resolved target: _ZNK2QT8QVariant6equalsERKS0_
// Target address:  0x8D95C8
// GOT/IAT slot:    0x8A4448
// Slot symbol:     _ZNK2QT8QVariant6equalsERKS0__ptr
// Target type:     _QWORD(QT::QVariant *__hidden this, const QT::QVariant *)
// ============================================================

/* see target sig */ ._ZNK2QT8QVariant6equalsERKS0_(/* see target signature */)
{
    // Tail-call to _ZNK2QT8QVariant6equalsERKS0_ via GOT/IAT indirection
    return _ZNK2QT8QVariant6equalsERKS0_(/* forwarded args */);
}

