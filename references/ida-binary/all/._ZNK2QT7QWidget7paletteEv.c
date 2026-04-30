// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113890
// Name:            ._ZNK2QT7QWidget7paletteEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113890 jmp     cs:_ZNK2QT7QWidget7paletteEv_ptr
//
// Resolved target: _ZNK2QT7QWidget7paletteEv
// Target address:  0x8D4AA0
// GOT/IAT slot:    0x8A08E8
// Slot symbol:     _ZNK2QT7QWidget7paletteEv_ptr
// Target type:     _QWORD(QT::QWidget *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT7QWidget7paletteEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT7QWidget7paletteEv via GOT/IAT indirection
    return _ZNK2QT7QWidget7paletteEv(/* forwarded args */);
}

