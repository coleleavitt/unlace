// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16620
// Name:            ._ZN2QT11QVBoxLayoutC1Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x16620 jmp     cs:off_4F2F8
//
// Resolved target: _ZN2QT11QVBoxLayoutC1Ev
// Target address:  0x502F8
// GOT/IAT slot:    0x4F2F8
// Slot symbol:     off_4F2F8
// Target type:     _QWORD(QT::QVBoxLayout *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT11QVBoxLayoutC1Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT11QVBoxLayoutC1Ev via GOT/IAT indirection
    return _ZN2QT11QVBoxLayoutC1Ev(/* forwarded args */);
}

