// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1137F0
// Name:            ._ZN2QT11QVBoxLayoutC1Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1137F0 jmp     cs:_ZN2QT11QVBoxLayoutC1Ev_ptr
//
// Resolved target: _ZN2QT11QVBoxLayoutC1Ev
// Target address:  0x8D4A38
// GOT/IAT slot:    0x8A0898
// Slot symbol:     _ZN2QT11QVBoxLayoutC1Ev_ptr
// Target type:     _QWORD(QT::QVBoxLayout *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT11QVBoxLayoutC1Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT11QVBoxLayoutC1Ev via GOT/IAT indirection
    return _ZN2QT11QVBoxLayoutC1Ev(/* forwarded args */);
}

