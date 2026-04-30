// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118CE0
// Name:            ._ZN2QT15QLinearGradientC1Edddd
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118CE0 jmp     cs:_ZN2QT15QLinearGradientC1Edddd_ptr
//
// Resolved target: _ZN2QT15QLinearGradientC1Edddd
// Target address:  0x8D7FC8
// GOT/IAT slot:    0x8A3310
// Slot symbol:     _ZN2QT15QLinearGradientC1Edddd_ptr
// Target type:     _QWORD(QT::QLinearGradient *__hidden this, double, double, double, double)
// ============================================================

/* see target sig */ ._ZN2QT15QLinearGradientC1Edddd(/* see target signature */)
{
    // Tail-call to _ZN2QT15QLinearGradientC1Edddd via GOT/IAT indirection
    return _ZN2QT15QLinearGradientC1Edddd(/* forwarded args */);
}

