// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1129A0
// Name:            ._ZN2QT15QRadialGradientD1Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1129A0 jmp     cs:_ZN2QT15QRadialGradientD1Ev_ptr
//
// Resolved target: _ZN2QT15QRadialGradientD1Ev
// Target address:  0x8D40F8
// GOT/IAT slot:    0x8A0170
// Slot symbol:     _ZN2QT15QRadialGradientD1Ev_ptr
// Target type:     void(QT::QRadialGradient *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT15QRadialGradientD1Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT15QRadialGradientD1Ev via GOT/IAT indirection
    return _ZN2QT15QRadialGradientD1Ev(/* forwarded args */);
}

