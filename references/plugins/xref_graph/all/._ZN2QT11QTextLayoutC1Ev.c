// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x174A0
// Name:            ._ZN2QT11QTextLayoutC1Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x174A0 jmp     cs:off_4FA38
//
// Resolved target: _ZN2QT11QTextLayoutC1Ev
// Target address:  0x51028
// GOT/IAT slot:    0x4FA38
// Slot symbol:     off_4FA38
// Target type:     _QWORD(QT::QTextLayout *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT11QTextLayoutC1Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT11QTextLayoutC1Ev via GOT/IAT indirection
    return _ZN2QT11QTextLayoutC1Ev(/* forwarded args */);
}

