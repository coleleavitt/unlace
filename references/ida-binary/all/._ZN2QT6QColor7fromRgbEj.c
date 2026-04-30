// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111220
// Name:            ._ZN2QT6QColor7fromRgbEj
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111220 jmp     cs:_ZN2QT6QColor7fromRgbEj_ptr
//
// Resolved target: _ZN2QT6QColor7fromRgbEj
// Target address:  0x8D31B8
// GOT/IAT slot:    0x89F5B0
// Slot symbol:     _ZN2QT6QColor7fromRgbEj_ptr
// Target type:     _QWORD(QT::QColor *__hidden this, unsigned int)
// ============================================================

/* see target sig */ ._ZN2QT6QColor7fromRgbEj(/* see target signature */)
{
    // Tail-call to _ZN2QT6QColor7fromRgbEj via GOT/IAT indirection
    return _ZN2QT6QColor7fromRgbEj(/* forwarded args */);
}

