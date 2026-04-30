// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119450
// Name:            ._ZN2QT8QPaletteC1Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119450 jmp     cs:_ZN2QT8QPaletteC1Ev_ptr
//
// Resolved target: _ZN2QT8QPaletteC1Ev
// Target address:  0x8D8488
// GOT/IAT slot:    0x8A36C8
// Slot symbol:     _ZN2QT8QPaletteC1Ev_ptr
// Target type:     _QWORD(QT::QPalette *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT8QPaletteC1Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT8QPaletteC1Ev via GOT/IAT indirection
    return _ZN2QT8QPaletteC1Ev(/* forwarded args */);
}

