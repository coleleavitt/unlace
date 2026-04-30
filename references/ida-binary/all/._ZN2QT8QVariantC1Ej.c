// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118060
// Name:            ._ZN2QT8QVariantC1Ej
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118060 jmp     cs:_ZN2QT8QVariantC1Ej_ptr
//
// Resolved target: _ZN2QT8QVariantC1Ej
// Target address:  0x8D7860
// GOT/IAT slot:    0x8A2CD0
// Slot symbol:     _ZN2QT8QVariantC1Ej_ptr
// Target type:     _QWORD(QT::QVariant *__hidden this, unsigned int)
// ============================================================

/* see target sig */ ._ZN2QT8QVariantC1Ej(/* see target signature */)
{
    // Tail-call to _ZN2QT8QVariantC1Ej via GOT/IAT indirection
    return _ZN2QT8QVariantC1Ej(/* forwarded args */);
}

