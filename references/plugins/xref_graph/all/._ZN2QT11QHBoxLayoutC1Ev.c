// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x170C0
// Name:            ._ZN2QT11QHBoxLayoutC1Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x170C0 jmp     cs:off_4F848
//
// Resolved target: _ZN2QT11QHBoxLayoutC1Ev
// Target address:  0x50CC0
// GOT/IAT slot:    0x4F848
// Slot symbol:     off_4F848
// Target type:     _QWORD(QT::QHBoxLayout *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT11QHBoxLayoutC1Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT11QHBoxLayoutC1Ev via GOT/IAT indirection
    return _ZN2QT11QHBoxLayoutC1Ev(/* forwarded args */);
}

