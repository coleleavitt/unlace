// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118560
// Name:            ._ZN2QT8QPaletteC1ERKS0_
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118560 jmp     cs:_ZN2QT8QPaletteC1ERKS0__ptr
//
// Resolved target: _ZN2QT8QPaletteC1ERKS0_
// Target address:  0x8D7B68
// GOT/IAT slot:    0x8A2F50
// Slot symbol:     _ZN2QT8QPaletteC1ERKS0__ptr
// Target type:     _QWORD(QT::QPalette *__hidden this, const QT::QPalette *)
// ============================================================

/* see target sig */ ._ZN2QT8QPaletteC1ERKS0_(/* see target signature */)
{
    // Tail-call to _ZN2QT8QPaletteC1ERKS0_ via GOT/IAT indirection
    return _ZN2QT8QPaletteC1ERKS0_(/* forwarded args */);
}

