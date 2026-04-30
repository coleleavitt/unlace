// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114730
// Name:            ._ZN2QT9QMetaType10canConvertES0_S0_
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114730 jmp     cs:_ZN2QT9QMetaType10canConvertES0_S0__ptr
//
// Resolved target: _ZN2QT9QMetaType10canConvertES0_S0_
// Target address:  0x8D53F0
// GOT/IAT slot:    0x8A1038
// Slot symbol:     _ZN2QT9QMetaType10canConvertES0_S0__ptr
// Target type:     _QWORD __high(QT::QMetaType, QT::QMetaType)
// ============================================================

/* see target sig */ ._ZN2QT9QMetaType10canConvertES0_S0_(/* see target signature */)
{
    // Tail-call to _ZN2QT9QMetaType10canConvertES0_S0_ via GOT/IAT indirection
    return _ZN2QT9QMetaType10canConvertES0_S0_(/* forwarded args */);
}

