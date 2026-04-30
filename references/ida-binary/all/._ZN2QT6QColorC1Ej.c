// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1155D0
// Name:            ._ZN2QT6QColorC1Ej
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1155D0 jmp     cs:_ZN2QT6QColorC1Ej_ptr
//
// Resolved target: _ZN2QT6QColorC1Ej
// Target address:  0x8D5D70
// GOT/IAT slot:    0x8A1788
// Slot symbol:     _ZN2QT6QColorC1Ej_ptr
// Target type:     _QWORD(QT::QColor *__hidden this, unsigned int)
// ============================================================

/* see target sig */ ._ZN2QT6QColorC1Ej(/* see target signature */)
{
    // Tail-call to _ZN2QT6QColorC1Ej via GOT/IAT indirection
    return _ZN2QT6QColorC1Ej(/* forwarded args */);
}

