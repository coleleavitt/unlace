// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119DA0
// Name:            ._ZN2QT7QWidget10setPaletteERKNS_8QPaletteE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119DA0 jmp     cs:_ZN2QT7QWidget10setPaletteERKNS_8QPaletteE_ptr
//
// Resolved target: _ZN2QT7QWidget10setPaletteERKNS_8QPaletteE
// Target address:  0x8D8A68
// GOT/IAT slot:    0x8A3B70
// Slot symbol:     _ZN2QT7QWidget10setPaletteERKNS_8QPaletteE_ptr
// Target type:     _QWORD(QT::QWidget *__hidden this, const QT::QPalette *)
// ============================================================

/* see target sig */ ._ZN2QT7QWidget10setPaletteERKNS_8QPaletteE(/* see target signature */)
{
    // Tail-call to _ZN2QT7QWidget10setPaletteERKNS_8QPaletteE via GOT/IAT indirection
    return _ZN2QT7QWidget10setPaletteERKNS_8QPaletteE(/* forwarded args */);
}

