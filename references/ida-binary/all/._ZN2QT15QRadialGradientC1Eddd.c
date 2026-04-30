// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112960
// Name:            ._ZN2QT15QRadialGradientC1Eddd
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112960 jmp     cs:_ZN2QT15QRadialGradientC1Eddd_ptr
//
// Resolved target: _ZN2QT15QRadialGradientC1Eddd
// Target address:  0x8D40C8
// GOT/IAT slot:    0x8A0150
// Slot symbol:     _ZN2QT15QRadialGradientC1Eddd_ptr
// Target type:     _QWORD(QT::QRadialGradient *__hidden this, double, double, double)
// ============================================================

/* see target sig */ ._ZN2QT15QRadialGradientC1Eddd(/* see target signature */)
{
    // Tail-call to _ZN2QT15QRadialGradientC1Eddd via GOT/IAT indirection
    return _ZN2QT15QRadialGradientC1Eddd(/* forwarded args */);
}

