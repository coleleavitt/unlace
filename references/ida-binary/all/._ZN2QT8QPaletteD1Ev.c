// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1151E0
// Name:            ._ZN2QT8QPaletteD1Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1151E0 jmp     cs:_ZN2QT8QPaletteD1Ev_ptr
//
// Resolved target: _ZN2QT8QPaletteD1Ev
// Target address:  0x8D5AF8
// GOT/IAT slot:    0x8A1590
// Slot symbol:     _ZN2QT8QPaletteD1Ev_ptr
// Target type:     void(QT::QPalette *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT8QPaletteD1Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT8QPaletteD1Ev via GOT/IAT indirection
    return _ZN2QT8QPaletteD1Ev(/* forwarded args */);
}

