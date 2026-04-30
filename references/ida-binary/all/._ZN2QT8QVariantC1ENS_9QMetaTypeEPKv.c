// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116F10
// Name:            ._ZN2QT8QVariantC1ENS_9QMetaTypeEPKv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116F10 jmp     cs:_ZN2QT8QVariantC1ENS_9QMetaTypeEPKv_ptr
//
// Resolved target: _ZN2QT8QVariantC1ENS_9QMetaTypeEPKv
// Target address:  0x8D6D30
// GOT/IAT slot:    0x8A2428
// Slot symbol:     _ZN2QT8QVariantC1ENS_9QMetaTypeEPKv_ptr
// Target type:     _QWORD __high(QT::QMetaType, const void *)
// ============================================================

/* see target sig */ ._ZN2QT8QVariantC1ENS_9QMetaTypeEPKv(/* see target signature */)
{
    // Tail-call to _ZN2QT8QVariantC1ENS_9QMetaTypeEPKv via GOT/IAT indirection
    return _ZN2QT8QVariantC1ENS_9QMetaTypeEPKv(/* forwarded args */);
}

