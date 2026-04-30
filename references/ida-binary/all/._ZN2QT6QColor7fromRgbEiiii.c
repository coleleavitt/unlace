// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1158B0
// Name:            ._ZN2QT6QColor7fromRgbEiiii
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1158B0 jmp     cs:_ZN2QT6QColor7fromRgbEiiii_ptr
//
// Resolved target: _ZN2QT6QColor7fromRgbEiiii
// Target address:  0x8D5F30
// GOT/IAT slot:    0x8A18F8
// Slot symbol:     _ZN2QT6QColor7fromRgbEiiii_ptr
// Target type:     _QWORD(QT::QColor *__hidden this, int, int, int, int)
// ============================================================

/* see target sig */ ._ZN2QT6QColor7fromRgbEiiii(/* see target signature */)
{
    // Tail-call to _ZN2QT6QColor7fromRgbEiiii via GOT/IAT indirection
    return _ZN2QT6QColor7fromRgbEiiii(/* forwarded args */);
}

