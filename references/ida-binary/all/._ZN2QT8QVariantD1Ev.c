// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A140
// Name:            ._ZN2QT8QVariantD1Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A140 jmp     cs:_ZN2QT8QVariantD1Ev_ptr
//
// Resolved target: _ZN2QT8QVariantD1Ev
// Target address:  0x8D8CE8
// GOT/IAT slot:    0x8A3D40
// Slot symbol:     _ZN2QT8QVariantD1Ev_ptr
// Target type:     void(QT::QVariant *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT8QVariantD1Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT8QVariantD1Ev via GOT/IAT indirection
    return _ZN2QT8QVariantD1Ev(/* forwarded args */);
}

