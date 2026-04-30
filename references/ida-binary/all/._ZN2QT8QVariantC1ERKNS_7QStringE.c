// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11B430
// Name:            ._ZN2QT8QVariantC1ERKNS_7QStringE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11B430 jmp     cs:_ZN2QT8QVariantC1ERKNS_7QStringE_ptr
//
// Resolved target: _ZN2QT8QVariantC1ERKNS_7QStringE
// Target address:  0x8D98F8
// GOT/IAT slot:    0x8A46B8
// Slot symbol:     _ZN2QT8QVariantC1ERKNS_7QStringE_ptr
// Target type:     _QWORD(QT::QVariant *__hidden this, const QT::QString *)
// ============================================================

/* see target sig */ ._ZN2QT8QVariantC1ERKNS_7QStringE(/* see target signature */)
{
    // Tail-call to _ZN2QT8QVariantC1ERKNS_7QStringE via GOT/IAT indirection
    return _ZN2QT8QVariantC1ERKNS_7QStringE(/* forwarded args */);
}

