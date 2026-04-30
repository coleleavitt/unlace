// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119380
// Name:            ._ZN2QT11QHBoxLayoutC1Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119380 jmp     cs:_ZN2QT11QHBoxLayoutC1Ev_ptr
//
// Resolved target: _ZN2QT11QHBoxLayoutC1Ev
// Target address:  0x8D8408
// GOT/IAT slot:    0x8A3660
// Slot symbol:     _ZN2QT11QHBoxLayoutC1Ev_ptr
// Target type:     _QWORD(QT::QHBoxLayout *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT11QHBoxLayoutC1Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT11QHBoxLayoutC1Ev via GOT/IAT indirection
    return _ZN2QT11QHBoxLayoutC1Ev(/* forwarded args */);
}

