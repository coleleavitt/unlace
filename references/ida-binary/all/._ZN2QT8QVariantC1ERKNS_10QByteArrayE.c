// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1192D0
// Name:            ._ZN2QT8QVariantC1ERKNS_10QByteArrayE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1192D0 jmp     cs:_ZN2QT8QVariantC1ERKNS_10QByteArrayE_ptr
//
// Resolved target: _ZN2QT8QVariantC1ERKNS_10QByteArrayE
// Target address:  0x8D8398
// GOT/IAT slot:    0x8A3608
// Slot symbol:     _ZN2QT8QVariantC1ERKNS_10QByteArrayE_ptr
// Target type:     _QWORD(QT::QVariant *__hidden this, const QT::QByteArray *)
// ============================================================

/* see target sig */ ._ZN2QT8QVariantC1ERKNS_10QByteArrayE(/* see target signature */)
{
    // Tail-call to _ZN2QT8QVariantC1ERKNS_10QByteArrayE via GOT/IAT indirection
    return _ZN2QT8QVariantC1ERKNS_10QByteArrayE(/* forwarded args */);
}

